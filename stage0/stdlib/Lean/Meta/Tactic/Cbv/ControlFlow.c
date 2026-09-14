// Lean compiler output
// Module: Lean.Meta.Tactic.Cbv.ControlFlow
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.Simp.Result import Lean.Meta.Sym.Simp.Rewrite import Lean.Meta.Sym.Simp.ControlFlow import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.InstantiateS import Lean.Meta.Sym.InferType import Lean.Meta.Sym.Simp.App import Lean.Meta.SynthInstance import Lean.Meta.WHNF import Lean.Meta.AppBuilder import Init.Sym.Lemmas import Lean.Meta.Tactic.Cbv.TheoremsLookup import Lean.Meta.Tactic.Cbv.Opaque import Lean.Meta.Tactic.Cbv.CbvEvalExt import Lean.Compiler.NoncomputableAttr import Init.CbvSimproc import Lean.Meta.Tactic.Cbv.CbvSimproc
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_Cbv_getMatchTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isTrueExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t, uint8_t);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_project_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_Meta_Tactic_Cbv_isCbvOpaque___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_canUnfoldDefault(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_canUnfoldAtMatcher(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_betaRevS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppRev(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getBoundedAppFn(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Expr_replaceFn(lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_propagateOverApplied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg(lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpInterlaced(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 237, 71, 156, 244, 3, 80, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__3_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__5_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ite_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__9_value),LEAN_SCALAR_PTR_LITERAL(168, 126, 169, 138, 86, 190, 160, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ite_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__11_value),LEAN_SCALAR_PTR_LITERAL(101, 74, 75, 252, 5, 15, 175, 246)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ite_true_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(10, 140, 45, 159, 71, 73, 13, 89)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "ite_false_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(132, 158, 180, 207, 199, 71, 79, 30)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 96, 65, 173, 152, 155, 4, 222)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__3_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__4_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ite_of_decide_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__11_value),LEAN_SCALAR_PTR_LITERAL(127, 109, 237, 55, 39, 153, 107, 58)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ite_of_decide_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__13_value),LEAN_SCALAR_PTR_LITERAL(192, 96, 211, 151, 176, 247, 209, 172)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "ite_of_decide_eq_true_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 197, 90, 170, 26, 195, 233, 177)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "ite_of_decide_eq_false_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(240, 196, 167, 224, 128, 157, 64, 86)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 115, 5, 135, 85, 70, 205, 95)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__11_value),LEAN_SCALAR_PTR_LITERAL(217, 231, 214, 152, 207, 100, 121, 38)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__9_value),LEAN_SCALAR_PTR_LITERAL(28, 219, 17, 217, 43, 100, 109, 98)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "ite_eq_right_of_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(85, 26, 223, 35, 242, 130, 83, 13)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ite_eq_left_of_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(73, 84, 15, 184, 226, 12, 142, 9)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Cbv"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__9_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__9_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__10_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ControlFlow"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__10_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__10_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__11_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__11_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__12_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__12_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__13_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__13_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__15_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__15_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Simp"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__18_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "simpIteCbv"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__18_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__18_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__20_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__20_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__20_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__21_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__20_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__21_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__21_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_19_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_19____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dite_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 79, 213, 134, 118, 203, 8, 228)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dite_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__2_value),LEAN_SCALAR_PTR_LITERAL(26, 82, 15, 17, 1, 91, 226, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mpr_prop"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__3_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 177, 76, 157, 211, 15, 217, 219)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "dite_true_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(120, 185, 89, 138, 56, 95, 240, 189)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mpr_not"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__3_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5_value),LEAN_SCALAR_PTR_LITERAL(121, 56, 250, 51, 9, 123, 141, 181)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "dite_false_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8_value),LEAN_SCALAR_PTR_LITERAL(200, 44, 51, 241, 184, 46, 57, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "of_decide_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 143, 142, 104, 169, 34, 63, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "of_decide_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__3_value),LEAN_SCALAR_PTR_LITERAL(101, 242, 48, 138, 187, 4, 117, 248)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "dite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(72, 238, 116, 219, 106, 19, 52, 46)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 21, 178, 198, 97, 164, 246, 137)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__5;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 119, 178, 178, 249, 126, 188, 7)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__10;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 218, 189, 96, 14, 237, 238, 210)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "dite_eq_right_of_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(181, 72, 248, 145, 136, 9, 228, 221)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "dite_eq_left_of_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(36, 253, 19, 136, 170, 78, 36, 13)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "simpDIteCbv"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_19_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_19____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "decide_isTrue"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 238, 232, 136, 147, 64, 116, 79)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "decide_isFalse"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__3_value),LEAN_SCALAR_PTR_LITERAL(30, 93, 112, 198, 213, 0, 204, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "decide_isTrue_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 46, 253, 225, 97, 126, 88, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "decide_isFalse_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(210, 108, 78, 146, 25, 88, 128, 244)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "decide_eq_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 73, 110, 63, 16, 22, 220, 5)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "congr_simp"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__2___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "decide_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 46, 65, 221, 159, 136, 150, 89)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "decide_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(205, 8, 17, 237, 36, 213, 18, 105)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "decide_prop_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(55, 242, 168, 209, 35, 165, 174, 215)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "decide_prop_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(91, 57, 77, 17, 146, 195, 162, 163)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "simpDecideCbv"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_16_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_16____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simpCond___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "simpCbvCond"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_18_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_18____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cbv"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "rewrite"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__0_value),LEAN_SCALAR_PTR_LITERAL(180, 58, 216, 170, 2, 199, 127, 134)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(174, 58, 109, 183, 100, 138, 243, 210)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "recMatcher:"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\n==>"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "simpDecidableRec"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rec"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(158, 146, 92, 125, 27, 135, 153, 152)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeNone___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "controlFlow"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__0_value),LEAN_SCALAR_PTR_LITERAL(180, 58, 216, 170, 2, 199, 127, 134)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 7, 140, 41, 97, 241, 74, 13)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "match `"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`:"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0(lean_object* v_customCanUnfoldPredicate_x3f_1_, uint8_t v_canUnfoldPredicateConfig_2_, lean_object* v_cfg_3_, lean_object* v_info_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = l_Lean_ConstantInfo_name(v_info_4_);
v___x_9_ = l_Lean_Meta_Tactic_Cbv_isCbvOpaque___redArg(v___x_8_, v___y_6_);
lean_dec(v___x_8_);
if (lean_obj_tag(v___x_9_) == 0)
{
lean_object* v_a_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_24_; 
v_a_10_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_24_ == 0)
{
v___x_12_ = v___x_9_;
v_isShared_13_ = v_isSharedCheck_24_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_a_10_);
lean_dec(v___x_9_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_24_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
uint8_t v___x_14_; 
v___x_14_ = lean_unbox(v_a_10_);
lean_dec(v_a_10_);
if (v___x_14_ == 0)
{
lean_del_object(v___x_12_);
if (lean_obj_tag(v_customCanUnfoldPredicate_x3f_1_) == 0)
{
if (v_canUnfoldPredicateConfig_2_ == 0)
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Meta_canUnfoldDefault(v_cfg_3_, v_info_4_, v___y_5_, v___y_6_);
lean_dec_ref(v_info_4_);
lean_dec_ref(v_cfg_3_);
return v___x_15_;
}
else
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Meta_canUnfoldAtMatcher(v_cfg_3_, v_info_4_, v___y_5_, v___y_6_);
lean_dec_ref(v_info_4_);
lean_dec_ref(v_cfg_3_);
return v___x_16_;
}
}
else
{
lean_object* v_val_17_; lean_object* v___x_18_; 
v_val_17_ = lean_ctor_get(v_customCanUnfoldPredicate_x3f_1_, 0);
lean_inc(v_val_17_);
lean_dec_ref_known(v_customCanUnfoldPredicate_x3f_1_, 1);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
v___x_18_ = lean_apply_5(v_val_17_, v_cfg_3_, v_info_4_, v___y_5_, v___y_6_, lean_box(0));
return v___x_18_;
}
}
else
{
uint8_t v___x_19_; lean_object* v___x_20_; lean_object* v___x_22_; 
lean_dec_ref(v_info_4_);
lean_dec_ref(v_cfg_3_);
lean_dec(v_customCanUnfoldPredicate_x3f_1_);
v___x_19_ = 0;
v___x_20_ = lean_box(v___x_19_);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_20_);
v___x_22_ = v___x_12_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v___x_20_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
else
{
lean_dec_ref(v_info_4_);
lean_dec_ref(v_cfg_3_);
lean_dec(v_customCanUnfoldPredicate_x3f_1_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0___boxed(lean_object* v_customCanUnfoldPredicate_x3f_25_, lean_object* v_canUnfoldPredicateConfig_26_, lean_object* v_cfg_27_, lean_object* v_info_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_){
_start:
{
uint8_t v_canUnfoldPredicateConfig_boxed_32_; lean_object* v_res_33_; 
v_canUnfoldPredicateConfig_boxed_32_ = lean_unbox(v_canUnfoldPredicateConfig_26_);
v_res_33_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0(v_customCanUnfoldPredicate_x3f_25_, v_canUnfoldPredicateConfig_boxed_32_, v_cfg_27_, v_info_28_, v___y_29_, v___y_30_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(lean_object* v_x_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_){
_start:
{
lean_object* v_keyedConfig_40_; uint8_t v_trackZetaDelta_41_; lean_object* v_zetaDeltaSet_42_; lean_object* v_lctx_43_; lean_object* v_localInstances_44_; lean_object* v_defEqCtx_x3f_45_; lean_object* v_synthPendingDepth_46_; lean_object* v_customCanUnfoldPredicate_x3f_47_; uint8_t v_univApprox_48_; uint8_t v_inTypeClassResolution_49_; uint8_t v_cacheInferType_50_; lean_object* v___x_51_; uint8_t v_canUnfoldPredicateConfig_52_; lean_object* v___x_53_; lean_object* v___f_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v_keyedConfig_40_ = lean_ctor_get(v_a_35_, 0);
v_trackZetaDelta_41_ = lean_ctor_get_uint8(v_a_35_, sizeof(void*)*7);
v_zetaDeltaSet_42_ = lean_ctor_get(v_a_35_, 1);
v_lctx_43_ = lean_ctor_get(v_a_35_, 2);
v_localInstances_44_ = lean_ctor_get(v_a_35_, 3);
v_defEqCtx_x3f_45_ = lean_ctor_get(v_a_35_, 4);
v_synthPendingDepth_46_ = lean_ctor_get(v_a_35_, 5);
v_customCanUnfoldPredicate_x3f_47_ = lean_ctor_get(v_a_35_, 6);
v_univApprox_48_ = lean_ctor_get_uint8(v_a_35_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_49_ = lean_ctor_get_uint8(v_a_35_, sizeof(void*)*7 + 2);
v_cacheInferType_50_ = lean_ctor_get_uint8(v_a_35_, sizeof(void*)*7 + 3);
v___x_51_ = l_Lean_Meta_Context_config(v_a_35_);
v_canUnfoldPredicateConfig_52_ = lean_ctor_get_uint8(v___x_51_, 19);
lean_dec_ref(v___x_51_);
v___x_53_ = lean_box(v_canUnfoldPredicateConfig_52_);
lean_inc(v_customCanUnfoldPredicate_x3f_47_);
v___f_54_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_54_, 0, v_customCanUnfoldPredicate_x3f_47_);
lean_closure_set(v___f_54_, 1, v___x_53_);
v___x_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_55_, 0, v___f_54_);
lean_inc(v_synthPendingDepth_46_);
lean_inc(v_defEqCtx_x3f_45_);
lean_inc_ref(v_localInstances_44_);
lean_inc_ref(v_lctx_43_);
lean_inc(v_zetaDeltaSet_42_);
lean_inc_ref(v_keyedConfig_40_);
v___x_56_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_56_, 0, v_keyedConfig_40_);
lean_ctor_set(v___x_56_, 1, v_zetaDeltaSet_42_);
lean_ctor_set(v___x_56_, 2, v_lctx_43_);
lean_ctor_set(v___x_56_, 3, v_localInstances_44_);
lean_ctor_set(v___x_56_, 4, v_defEqCtx_x3f_45_);
lean_ctor_set(v___x_56_, 5, v_synthPendingDepth_46_);
lean_ctor_set(v___x_56_, 6, v___x_55_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*7, v_trackZetaDelta_41_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*7 + 1, v_univApprox_48_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*7 + 2, v_inTypeClassResolution_49_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*7 + 3, v_cacheInferType_50_);
lean_inc(v_a_38_);
lean_inc_ref(v_a_37_);
lean_inc(v_a_36_);
v___x_57_ = lean_apply_5(v_x_34_, v___x_56_, v_a_36_, v_a_37_, v_a_38_, lean_box(0));
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___boxed(lean_object* v_x_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v_x_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard(lean_object* v_00_u03b1_65_, lean_object* v_x_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v_x_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___boxed(lean_object* v_00_u03b1_73_, lean_object* v_x_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard(v_00_u03b1_73_, v_x_74_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
lean_dec(v_a_78_);
lean_dec_ref(v_a_77_);
lean_dec(v_a_76_);
lean_dec_ref(v_a_75_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0(lean_object* v_k_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v_b_87_, lean_object* v_c_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v___x_94_; 
lean_inc(v___y_92_);
lean_inc_ref(v___y_91_);
lean_inc(v___y_90_);
lean_inc_ref(v___y_89_);
lean_inc(v___y_86_);
lean_inc_ref(v___y_85_);
lean_inc(v___y_84_);
lean_inc_ref(v___y_83_);
lean_inc(v___y_82_);
v___x_94_ = lean_apply_12(v_k_81_, v_b_87_, v_c_88_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, lean_box(0));
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0___boxed(lean_object* v_k_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v_b_101_, lean_object* v_c_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0(v_k_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v_b_101_, v_c_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg(lean_object* v_type_109_, lean_object* v_k_110_, uint8_t v_cleanupAnnotations_111_, uint8_t v_whnfType_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___f_123_; lean_object* v___x_124_; 
lean_inc(v___y_117_);
lean_inc_ref(v___y_116_);
lean_inc(v___y_115_);
lean_inc_ref(v___y_114_);
lean_inc(v___y_113_);
v___f_123_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0___boxed), 13, 6);
lean_closure_set(v___f_123_, 0, v_k_110_);
lean_closure_set(v___f_123_, 1, v___y_113_);
lean_closure_set(v___f_123_, 2, v___y_114_);
lean_closure_set(v___f_123_, 3, v___y_115_);
lean_closure_set(v___f_123_, 4, v___y_116_);
lean_closure_set(v___f_123_, 5, v___y_117_);
v___x_124_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_109_, v___f_123_, v_cleanupAnnotations_111_, v_whnfType_112_, v___y_118_, v___y_119_, v___y_120_, v___y_121_);
if (lean_obj_tag(v___x_124_) == 0)
{
return v___x_124_;
}
else
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_132_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_132_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_128_ == 0)
{
v___x_130_ = v___x_127_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_a_125_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___boxed(lean_object* v_type_133_, lean_object* v_k_134_, lean_object* v_cleanupAnnotations_135_, lean_object* v_whnfType_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_147_; uint8_t v_whnfType_boxed_148_; lean_object* v_res_149_; 
v_cleanupAnnotations_boxed_147_ = lean_unbox(v_cleanupAnnotations_135_);
v_whnfType_boxed_148_ = lean_unbox(v_whnfType_136_);
v_res_149_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg(v_type_133_, v_k_134_, v_cleanupAnnotations_boxed_147_, v_whnfType_boxed_148_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec(v___y_137_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0(lean_object* v_00_u03b1_150_, lean_object* v_type_151_, lean_object* v_k_152_, uint8_t v_cleanupAnnotations_153_, uint8_t v_whnfType_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg(v_type_151_, v_k_152_, v_cleanupAnnotations_153_, v_whnfType_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___boxed(lean_object* v_00_u03b1_166_, lean_object* v_type_167_, lean_object* v_k_168_, lean_object* v_cleanupAnnotations_169_, lean_object* v_whnfType_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_181_; uint8_t v_whnfType_boxed_182_; lean_object* v_res_183_; 
v_cleanupAnnotations_boxed_181_ = lean_unbox(v_cleanupAnnotations_169_);
v_whnfType_boxed_182_ = lean_unbox(v_whnfType_170_);
v_res_183_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0(v_00_u03b1_166_, v_type_167_, v_k_168_, v_cleanupAnnotations_boxed_181_, v_whnfType_boxed_182_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(lean_object* v_f_184_, lean_object* v_a_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v___y_194_; lean_object* v___x_197_; uint8_t v_debug_198_; 
v___x_197_ = lean_st_ref_get(v___y_187_);
v_debug_198_ = lean_ctor_get_uint8(v___x_197_, sizeof(void*)*11);
lean_dec(v___x_197_);
if (v_debug_198_ == 0)
{
v___y_194_ = v___y_187_;
goto v___jp_193_;
}
else
{
lean_object* v___x_199_; 
v___x_199_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_184_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v___x_200_; 
lean_dec_ref_known(v___x_199_, 1);
v___x_200_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_dec_ref_known(v___x_200_, 1);
v___y_194_ = v___y_187_;
goto v___jp_193_;
}
else
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_208_; 
lean_dec_ref(v_a_185_);
lean_dec_ref(v_f_184_);
v_a_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_208_ == 0)
{
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_206_; 
if (v_isShared_204_ == 0)
{
v___x_206_ = v___x_203_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_a_201_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
else
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_216_; 
lean_dec_ref(v_a_185_);
lean_dec_ref(v_f_184_);
v_a_209_ = lean_ctor_get(v___x_199_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_216_ == 0)
{
v___x_211_ = v___x_199_;
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_199_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_214_; 
if (v_isShared_212_ == 0)
{
v___x_214_ = v___x_211_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_a_209_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
v___jp_193_:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = l_Lean_Expr_app___override(v_f_184_, v_a_185_);
v___x_196_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_195_, v___y_194_);
return v___x_196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_f_217_, lean_object* v_a_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_f_217_, v_a_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1(lean_object* v_args_227_, lean_object* v_endIdx_228_, lean_object* v_b_229_, lean_object* v_i_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
uint8_t v___x_241_; 
v___x_241_ = lean_nat_dec_le(v_endIdx_228_, v_i_230_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_242_ = l_Lean_instInhabitedExpr;
v___x_243_ = lean_array_get_borrowed(v___x_242_, v_args_227_, v_i_230_);
lean_inc(v___x_243_);
v___x_244_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_b_229_, v___x_243_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_245_);
lean_dec_ref_known(v___x_244_, 1);
v___x_246_ = lean_unsigned_to_nat(1u);
v___x_247_ = lean_nat_add(v_i_230_, v___x_246_);
lean_dec(v_i_230_);
v_b_229_ = v_a_245_;
v_i_230_ = v___x_247_;
goto _start;
}
else
{
lean_dec(v_i_230_);
return v___x_244_;
}
}
else
{
lean_object* v___x_249_; 
lean_dec(v_i_230_);
v___x_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_249_, 0, v_b_229_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1___boxed(lean_object* v_args_250_, lean_object* v_endIdx_251_, lean_object* v_b_252_, lean_object* v_i_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1(v_args_250_, v_endIdx_251_, v_b_252_, v_i_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
lean_dec(v___y_254_);
lean_dec(v_endIdx_251_);
lean_dec_ref(v_args_250_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1(lean_object* v_f_265_, lean_object* v_args_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_277_ = lean_unsigned_to_nat(0u);
v___x_278_ = lean_array_get_size(v_args_266_);
v___x_279_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1(v_args_266_, v___x_278_, v_f_265_, v___x_277_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1___boxed(lean_object* v_f_280_, lean_object* v_args_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1(v_f_280_, v_args_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
lean_dec(v___y_282_);
lean_dec_ref(v_args_281_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0(uint8_t v___x_296_, lean_object* v_inst_297_, lean_object* v___x_298_, uint8_t v___x_299_, lean_object* v_vars_300_, lean_object* v_body_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_){
_start:
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = l_Lean_Expr_cleanupAnnotations(v_body_301_);
v___x_318_ = l_Lean_Expr_isApp(v___x_317_);
if (v___x_318_ == 0)
{
lean_dec_ref(v___x_317_);
lean_dec_ref(v_vars_300_);
goto v___jp_312_;
}
else
{
lean_object* v_arg_319_; lean_object* v___x_320_; lean_object* v___x_321_; uint8_t v___x_322_; 
v_arg_319_ = lean_ctor_get(v___x_317_, 1);
lean_inc_ref(v_arg_319_);
v___x_320_ = l_Lean_Expr_appFnCleanup___redArg(v___x_317_);
v___x_321_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__1));
v___x_322_ = l_Lean_Expr_isConstOf(v___x_320_, v___x_321_);
lean_dec_ref(v___x_320_);
if (v___x_322_ == 0)
{
lean_dec_ref(v_arg_319_);
lean_dec_ref(v_vars_300_);
goto v___jp_312_;
}
else
{
lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_323_ = lean_array_get_size(v_vars_300_);
v___x_324_ = lean_nat_dec_eq(v___x_323_, v___x_298_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
lean_dec_ref(v_arg_319_);
lean_dec_ref(v_vars_300_);
v___x_325_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_325_, 0, v___x_324_);
lean_ctor_set_uint8(v___x_325_, 1, v___x_324_);
v___x_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
lean_ctor_set(v___x_326_, 1, v_inst_297_);
v___x_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
v___x_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
return v___x_328_;
}
else
{
uint8_t v___x_329_; lean_object* v___x_330_; 
lean_dec_ref(v_inst_297_);
v___x_329_ = 1;
v___x_330_ = l_Lean_Meta_mkLambdaFVars(v_vars_300_, v_arg_319_, v___x_296_, v___x_299_, v___x_296_, v___x_299_, v___x_329_, v___y_307_, v___y_308_, v___y_309_, v___y_310_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_339_; 
v_a_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_339_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_339_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_339_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_335_; lean_object* v___x_337_; 
v___x_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_335_, 0, v_a_331_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_335_);
v___x_337_ = v___x_333_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_335_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
else
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
v_a_340_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v___x_330_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_330_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
}
}
v___jp_312_:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_313_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_313_, 0, v___x_296_);
lean_ctor_set_uint8(v___x_313_, 1, v___x_296_);
v___x_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_313_);
lean_ctor_set(v___x_314_, 1, v_inst_297_);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___boxed(lean_object* v___x_348_, lean_object* v_inst_349_, lean_object* v___x_350_, lean_object* v___x_351_, lean_object* v_vars_352_, lean_object* v_body_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
uint8_t v___x_17454__boxed_364_; uint8_t v___x_17456__boxed_365_; lean_object* v_res_366_; 
v___x_17454__boxed_364_ = lean_unbox(v___x_348_);
v___x_17456__boxed_365_ = lean_unbox(v___x_351_);
v_res_366_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0(v___x_17454__boxed_364_, v_inst_349_, v___x_350_, v___x_17456__boxed_365_, v_vars_352_, v_body_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec(v___x_350_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2(lean_object* v_inst_369_, lean_object* v_x_370_, lean_object* v_x_371_, lean_object* v_x_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
if (lean_obj_tag(v_x_370_) == 5)
{
lean_object* v_fn_383_; lean_object* v_arg_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v_fn_383_ = lean_ctor_get(v_x_370_, 0);
lean_inc_ref(v_fn_383_);
v_arg_384_ = lean_ctor_get(v_x_370_, 1);
lean_inc_ref(v_arg_384_);
lean_dec_ref_known(v_x_370_, 2);
v___x_385_ = lean_array_set(v_x_371_, v_x_372_, v_arg_384_);
v___x_386_ = lean_unsigned_to_nat(1u);
v___x_387_ = lean_nat_sub(v_x_372_, v___x_386_);
lean_dec(v_x_372_);
v_x_370_ = v_fn_383_;
v_x_371_ = v___x_385_;
v_x_372_ = v___x_387_;
goto _start;
}
else
{
lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; 
lean_dec(v_x_372_);
v___x_389_ = lean_array_get_size(v_x_371_);
v___x_390_ = lean_unsigned_to_nat(0u);
v___x_391_ = lean_nat_dec_eq(v___x_389_, v___x_390_);
if (v___x_391_ == 0)
{
uint8_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___f_395_; lean_object* v___x_396_; 
v___x_392_ = 1;
v___x_393_ = lean_box(v___x_391_);
v___x_394_ = lean_box(v___x_392_);
lean_inc_ref(v_inst_369_);
v___f_395_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___boxed), 16, 4);
lean_closure_set(v___f_395_, 0, v___x_393_);
lean_closure_set(v___f_395_, 1, v_inst_369_);
lean_closure_set(v___f_395_, 2, v___x_389_);
lean_closure_set(v___f_395_, 3, v___x_394_);
lean_inc(v___y_381_);
lean_inc_ref(v___y_380_);
lean_inc(v___y_379_);
lean_inc_ref(v___y_378_);
lean_inc_ref(v_x_370_);
v___x_396_ = lean_infer_type(v_x_370_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v_a_397_; lean_object* v___x_398_; 
v_a_397_ = lean_ctor_get(v___x_396_, 0);
lean_inc(v_a_397_);
lean_dec_ref_known(v___x_396_, 1);
v___x_398_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg(v_a_397_, v___f_395_, v___x_391_, v___x_392_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_479_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_479_ == 0)
{
v___x_401_ = v___x_398_;
v_isShared_402_ = v_isSharedCheck_479_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_398_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_479_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
if (lean_obj_tag(v_a_399_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_405_; 
lean_dec_ref(v_x_371_);
lean_dec_ref(v_x_370_);
lean_dec_ref(v_inst_369_);
v_a_403_ = lean_ctor_get(v_a_399_, 0);
lean_inc(v_a_403_);
lean_dec_ref_known(v_a_399_, 1);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 0, v_a_403_);
v___x_405_ = v___x_401_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_a_403_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
else
{
lean_object* v_a_407_; lean_object* v___x_408_; 
lean_del_object(v___x_401_);
v_a_407_ = lean_ctor_get(v_a_399_, 0);
lean_inc(v_a_407_);
lean_dec_ref_known(v_a_399_, 1);
v___x_408_ = l_Lean_Meta_Sym_shareCommon(v_a_407_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v_a_409_; lean_object* v___x_410_; 
v_a_409_ = lean_ctor_get(v___x_408_, 0);
lean_inc_n(v_a_409_, 2);
lean_dec_ref_known(v___x_408_, 1);
v___x_410_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1(v_a_409_, v_x_371_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
lean_dec_ref(v_x_371_);
if (lean_obj_tag(v___x_410_) == 0)
{
lean_object* v_a_411_; lean_object* v___x_412_; 
v_a_411_ = lean_ctor_get(v___x_410_, 0);
lean_inc(v_a_411_);
lean_dec_ref_known(v___x_410_, 1);
v___x_412_ = l_Lean_Meta_Sym_Simp_simpAppArgRange(v_a_411_, v___x_390_, v___x_389_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_454_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_454_ == 0)
{
v___x_415_ = v___x_412_;
v_isShared_416_ = v_isSharedCheck_454_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_412_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_454_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
if (lean_obj_tag(v_a_413_) == 0)
{
lean_object* v___x_417_; lean_object* v___x_419_; 
lean_dec(v_a_409_);
lean_dec_ref(v_x_370_);
v___x_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_417_, 0, v_a_413_);
lean_ctor_set(v___x_417_, 1, v_inst_369_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 0, v___x_417_);
v___x_419_ = v___x_415_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
else
{
lean_object* v_e_x27_421_; lean_object* v_proof_422_; uint8_t v_done_423_; uint8_t v_contextDependent_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_453_; 
lean_del_object(v___x_415_);
lean_dec_ref(v_inst_369_);
v_e_x27_421_ = lean_ctor_get(v_a_413_, 0);
v_proof_422_ = lean_ctor_get(v_a_413_, 1);
v_done_423_ = lean_ctor_get_uint8(v_a_413_, sizeof(void*)*2);
v_contextDependent_424_ = lean_ctor_get_uint8(v_a_413_, sizeof(void*)*2 + 1);
v_isSharedCheck_453_ = !lean_is_exclusive(v_a_413_);
if (v_isSharedCheck_453_ == 0)
{
v___x_426_ = v_a_413_;
v_isShared_427_ = v_isSharedCheck_453_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_proof_422_);
lean_inc(v_e_x27_421_);
lean_dec(v_a_413_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_453_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_428_ = l_Lean_Expr_getAppNumArgs(v_e_x27_421_);
v___x_429_ = lean_mk_empty_array_with_capacity(v___x_428_);
lean_dec(v___x_428_);
v___x_430_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_x27_421_, v___x_429_);
lean_inc_ref(v___x_430_);
v___x_431_ = l_Lean_Meta_Sym_betaRevS(v_a_409_, v___x_430_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_444_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_444_ == 0)
{
v___x_434_ = v___x_431_;
v_isShared_435_ = v_isSharedCheck_444_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_431_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_444_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 0, v_a_432_);
v___x_437_ = v___x_426_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_a_432_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v_proof_422_);
lean_ctor_set_uint8(v_reuseFailAlloc_443_, sizeof(void*)*2, v_done_423_);
lean_ctor_set_uint8(v_reuseFailAlloc_443_, sizeof(void*)*2 + 1, v_contextDependent_424_);
v___x_437_ = v_reuseFailAlloc_443_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_441_; 
v___x_438_ = l_Lean_mkAppRev(v_x_370_, v___x_430_);
lean_dec_ref(v___x_430_);
v___x_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v___x_439_);
v___x_441_ = v___x_434_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_439_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
else
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
lean_dec_ref(v___x_430_);
lean_del_object(v___x_426_);
lean_dec_ref(v_proof_422_);
lean_dec_ref(v_x_370_);
v_a_445_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_431_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_431_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_462_; 
lean_dec(v_a_409_);
lean_dec_ref(v_x_370_);
lean_dec_ref(v_inst_369_);
v_a_455_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_462_ == 0)
{
v___x_457_ = v___x_412_;
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_412_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
if (v_isShared_458_ == 0)
{
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_a_455_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
else
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
lean_dec(v_a_409_);
lean_dec_ref(v_x_370_);
lean_dec_ref(v_inst_369_);
v_a_463_ = lean_ctor_get(v___x_410_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v___x_410_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_410_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
else
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
lean_dec_ref(v_x_371_);
lean_dec_ref(v_x_370_);
lean_dec_ref(v_inst_369_);
v_a_471_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_408_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_408_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
}
}
else
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_487_; 
lean_dec_ref(v_x_371_);
lean_dec_ref(v_x_370_);
lean_dec_ref(v_inst_369_);
v_a_480_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_487_ == 0)
{
v___x_482_ = v___x_398_;
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_398_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_480_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
else
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
lean_dec_ref(v___f_395_);
lean_dec_ref(v_x_371_);
lean_dec_ref(v_x_370_);
lean_dec_ref(v_inst_369_);
v_a_488_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_495_ == 0)
{
v___x_490_ = v___x_396_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_396_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
}
else
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
lean_dec_ref(v_x_371_);
lean_dec_ref(v_x_370_);
v___x_496_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0));
v___x_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
lean_ctor_set(v___x_497_, 1, v_inst_369_);
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___boxed(lean_object* v_inst_499_, lean_object* v_x_500_, lean_object* v_x_501_, lean_object* v_x_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2(v_inst_499_, v_x_500_, v_x_501_, v_x_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_503_);
return v_res_513_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = lean_box(0);
v___x_515_ = l_unsafeCast___redArg(v___x_514_);
return v___x_515_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__1(void){
_start:
{
lean_object* v___x_516_; lean_object* v_dummy_517_; 
v___x_516_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0);
v_dummy_517_ = l_Lean_Expr_sort___override(v___x_516_);
return v_dummy_517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance(lean_object* v_inst_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_){
_start:
{
lean_object* v_dummy_529_; lean_object* v_nargs_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v_dummy_529_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__1, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__1_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__1);
v_nargs_530_ = l_Lean_Expr_getAppNumArgs(v_inst_518_);
lean_inc(v_nargs_530_);
v___x_531_ = lean_mk_array(v_nargs_530_, v_dummy_529_);
v___x_532_ = lean_unsigned_to_nat(1u);
v___x_533_ = lean_nat_sub(v_nargs_530_, v___x_532_);
lean_dec(v_nargs_530_);
lean_inc_ref(v_inst_518_);
v___x_534_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2(v_inst_518_, v_inst_518_, v___x_531_, v___x_533_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, v_a_527_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___boxed(lean_object* v_inst_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance(v_inst_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
lean_dec(v_a_538_);
lean_dec_ref(v_a_537_);
lean_dec(v_a_536_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2(lean_object* v_f_547_, lean_object* v_a_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_f_547_, v_a_548_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___boxed(lean_object* v_f_560_, lean_object* v_a_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2(v_f_560_, v_a_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_);
lean_dec(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec(v___y_562_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable(lean_object* v_f_598_, lean_object* v_00_u03b1_599_, lean_object* v_c_600_, lean_object* v_inst_601_, lean_object* v_a_602_, lean_object* v_b_603_, lean_object* v_instToMatch_604_, lean_object* v_fallback_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_instToMatch_604_, v_a_612_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_a_617_; lean_object* v___x_618_; uint8_t v___x_619_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_a_617_);
lean_dec_ref_known(v___x_616_, 1);
v___x_618_ = l_Lean_Expr_cleanupAnnotations(v_a_617_);
v___x_619_ = l_Lean_Expr_isApp(v___x_618_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; 
lean_dec_ref(v___x_618_);
lean_dec_ref(v_b_603_);
lean_dec_ref(v_a_602_);
lean_dec_ref(v_inst_601_);
lean_dec_ref(v_c_600_);
lean_dec_ref(v_00_u03b1_599_);
lean_inc(v_a_614_);
lean_inc_ref(v_a_613_);
lean_inc(v_a_612_);
lean_inc_ref(v_a_611_);
lean_inc(v_a_610_);
lean_inc_ref(v_a_609_);
lean_inc(v_a_608_);
lean_inc_ref(v_a_607_);
lean_inc(v_a_606_);
v___x_620_ = lean_apply_10(v_fallback_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, lean_box(0));
return v___x_620_;
}
else
{
lean_object* v_arg_621_; lean_object* v___x_622_; uint8_t v___x_623_; 
v_arg_621_ = lean_ctor_get(v___x_618_, 1);
lean_inc_ref(v_arg_621_);
v___x_622_ = l_Lean_Expr_appFnCleanup___redArg(v___x_618_);
v___x_623_ = l_Lean_Expr_isApp(v___x_622_);
if (v___x_623_ == 0)
{
lean_object* v___x_624_; 
lean_dec_ref(v___x_622_);
lean_dec_ref(v_arg_621_);
lean_dec_ref(v_b_603_);
lean_dec_ref(v_a_602_);
lean_dec_ref(v_inst_601_);
lean_dec_ref(v_c_600_);
lean_dec_ref(v_00_u03b1_599_);
lean_inc(v_a_614_);
lean_inc_ref(v_a_613_);
lean_inc(v_a_612_);
lean_inc_ref(v_a_611_);
lean_inc(v_a_610_);
lean_inc_ref(v_a_609_);
lean_inc(v_a_608_);
lean_inc_ref(v_a_607_);
lean_inc(v_a_606_);
v___x_624_ = lean_apply_10(v_fallback_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, lean_box(0));
return v___x_624_;
}
else
{
lean_object* v_arg_625_; lean_object* v___x_626_; uint8_t v___x_627_; 
v_arg_625_ = lean_ctor_get(v___x_622_, 1);
lean_inc_ref(v_arg_625_);
v___x_626_ = l_Lean_Expr_appFnCleanup___redArg(v___x_622_);
v___x_627_ = l_Lean_Expr_isApp(v___x_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; 
lean_dec_ref(v___x_626_);
lean_dec_ref(v_arg_625_);
lean_dec_ref(v_arg_621_);
lean_dec_ref(v_b_603_);
lean_dec_ref(v_a_602_);
lean_dec_ref(v_inst_601_);
lean_dec_ref(v_c_600_);
lean_dec_ref(v_00_u03b1_599_);
lean_inc(v_a_614_);
lean_inc_ref(v_a_613_);
lean_inc(v_a_612_);
lean_inc_ref(v_a_611_);
lean_inc(v_a_610_);
lean_inc_ref(v_a_609_);
lean_inc(v_a_608_);
lean_inc_ref(v_a_607_);
lean_inc(v_a_606_);
v___x_628_ = lean_apply_10(v_fallback_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, lean_box(0));
return v___x_628_;
}
else
{
lean_object* v___x_629_; lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_629_ = l_Lean_Expr_appFnCleanup___redArg(v___x_626_);
v___x_630_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__1));
v___x_631_ = l_Lean_Expr_isConstOf(v___x_629_, v___x_630_);
lean_dec_ref(v___x_629_);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; 
lean_dec_ref(v_arg_625_);
lean_dec_ref(v_arg_621_);
lean_dec_ref(v_b_603_);
lean_dec_ref(v_a_602_);
lean_dec_ref(v_inst_601_);
lean_dec_ref(v_c_600_);
lean_dec_ref(v_00_u03b1_599_);
lean_inc(v_a_614_);
lean_inc_ref(v_a_613_);
lean_inc(v_a_612_);
lean_inc_ref(v_a_611_);
lean_inc(v_a_610_);
lean_inc_ref(v_a_609_);
lean_inc(v_a_608_);
lean_inc_ref(v_a_607_);
lean_inc(v_a_606_);
v___x_632_ = lean_apply_10(v_fallback_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, lean_box(0));
return v___x_632_;
}
else
{
lean_object* v___x_633_; 
v___x_633_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_625_, v_a_612_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_661_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_661_ == 0)
{
v___x_636_ = v___x_633_;
v_isShared_637_ = v_isSharedCheck_661_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_633_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_661_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; 
v___x_638_ = l_Lean_Expr_cleanupAnnotations(v_a_634_);
v___x_639_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4));
v___x_640_ = l_Lean_Expr_isConstOf(v___x_638_, v___x_639_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; uint8_t v___x_642_; 
v___x_641_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6));
v___x_642_ = l_Lean_Expr_isConstOf(v___x_638_, v___x_641_);
lean_dec_ref(v___x_638_);
if (v___x_642_ == 0)
{
lean_object* v___x_643_; 
lean_del_object(v___x_636_);
lean_dec_ref(v_arg_621_);
lean_dec_ref(v_b_603_);
lean_dec_ref(v_a_602_);
lean_dec_ref(v_inst_601_);
lean_dec_ref(v_c_600_);
lean_dec_ref(v_00_u03b1_599_);
lean_inc(v_a_614_);
lean_inc_ref(v_a_613_);
lean_inc(v_a_612_);
lean_inc_ref(v_a_611_);
lean_inc(v_a_610_);
lean_inc_ref(v_a_609_);
lean_inc(v_a_608_);
lean_inc_ref(v_a_607_);
lean_inc(v_a_606_);
v___x_643_ = lean_apply_10(v_fallback_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, lean_box(0));
return v___x_643_;
}
else
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_650_; 
lean_dec_ref(v_fallback_605_);
v___x_644_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__10));
v___x_645_ = l_Lean_Expr_constLevels_x21(v_f_598_);
v___x_646_ = l_Lean_mkConst(v___x_644_, v___x_645_);
lean_inc_ref(v_a_602_);
v___x_647_ = l_Lean_mkApp6(v___x_646_, v_00_u03b1_599_, v_c_600_, v_inst_601_, v_a_602_, v_b_603_, v_arg_621_);
v___x_648_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_648_, 0, v_a_602_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
lean_ctor_set_uint8(v___x_648_, sizeof(void*)*2, v___x_640_);
lean_ctor_set_uint8(v___x_648_, sizeof(void*)*2 + 1, v___x_640_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 0, v___x_648_);
v___x_650_ = v___x_636_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
else
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; lean_object* v___x_657_; lean_object* v___x_659_; 
lean_dec_ref(v___x_638_);
lean_dec_ref(v_fallback_605_);
v___x_652_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__12));
v___x_653_ = l_Lean_Expr_constLevels_x21(v_f_598_);
v___x_654_ = l_Lean_mkConst(v___x_652_, v___x_653_);
lean_inc_ref(v_b_603_);
v___x_655_ = l_Lean_mkApp6(v___x_654_, v_00_u03b1_599_, v_c_600_, v_inst_601_, v_a_602_, v_b_603_, v_arg_621_);
v___x_656_ = 0;
v___x_657_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_657_, 0, v_b_603_);
lean_ctor_set(v___x_657_, 1, v___x_655_);
lean_ctor_set_uint8(v___x_657_, sizeof(void*)*2, v___x_656_);
lean_ctor_set_uint8(v___x_657_, sizeof(void*)*2 + 1, v___x_656_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 0, v___x_657_);
v___x_659_ = v___x_636_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_657_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_dec_ref(v_arg_621_);
lean_dec_ref(v_fallback_605_);
lean_dec_ref(v_b_603_);
lean_dec_ref(v_a_602_);
lean_dec_ref(v_inst_601_);
lean_dec_ref(v_c_600_);
lean_dec_ref(v_00_u03b1_599_);
v_a_662_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_633_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_633_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
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
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
lean_dec_ref(v_fallback_605_);
lean_dec_ref(v_b_603_);
lean_dec_ref(v_a_602_);
lean_dec_ref(v_inst_601_);
lean_dec_ref(v_c_600_);
lean_dec_ref(v_00_u03b1_599_);
v_a_670_ = lean_ctor_get(v___x_616_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_616_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_616_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___boxed(lean_object** _args){
lean_object* v_f_678_ = _args[0];
lean_object* v_00_u03b1_679_ = _args[1];
lean_object* v_c_680_ = _args[2];
lean_object* v_inst_681_ = _args[3];
lean_object* v_a_682_ = _args[4];
lean_object* v_b_683_ = _args[5];
lean_object* v_instToMatch_684_ = _args[6];
lean_object* v_fallback_685_ = _args[7];
lean_object* v_a_686_ = _args[8];
lean_object* v_a_687_ = _args[9];
lean_object* v_a_688_ = _args[10];
lean_object* v_a_689_ = _args[11];
lean_object* v_a_690_ = _args[12];
lean_object* v_a_691_ = _args[13];
lean_object* v_a_692_ = _args[14];
lean_object* v_a_693_ = _args[15];
lean_object* v_a_694_ = _args[16];
lean_object* v_a_695_ = _args[17];
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable(v_f_678_, v_00_u03b1_679_, v_c_680_, v_inst_681_, v_a_682_, v_b_683_, v_instToMatch_684_, v_fallback_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
lean_dec(v_a_694_);
lean_dec_ref(v_a_693_);
lean_dec(v_a_692_);
lean_dec_ref(v_a_691_);
lean_dec(v_a_690_);
lean_dec_ref(v_a_689_);
lean_dec(v_a_688_);
lean_dec_ref(v_a_687_);
lean_dec(v_a_686_);
lean_dec_ref(v_f_678_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr(lean_object* v_f_707_, lean_object* v_00_u03b1_708_, lean_object* v_c_709_, lean_object* v_inst_710_, lean_object* v_a_711_, lean_object* v_b_712_, lean_object* v_c_x27_713_, lean_object* v_h_714_, lean_object* v_inst_x27_715_, lean_object* v_fallback_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_inst_x27_715_, v_a_723_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc(v_a_728_);
lean_dec_ref_known(v___x_727_, 1);
v___x_729_ = l_Lean_Expr_cleanupAnnotations(v_a_728_);
v___x_730_ = l_Lean_Expr_isApp(v___x_729_);
if (v___x_730_ == 0)
{
lean_object* v___x_731_; 
lean_dec_ref(v___x_729_);
lean_dec_ref(v_h_714_);
lean_dec_ref(v_c_x27_713_);
lean_dec_ref(v_b_712_);
lean_dec_ref(v_a_711_);
lean_dec_ref(v_inst_710_);
lean_dec_ref(v_c_709_);
lean_dec_ref(v_00_u03b1_708_);
lean_inc(v_a_725_);
lean_inc_ref(v_a_724_);
lean_inc(v_a_723_);
lean_inc_ref(v_a_722_);
lean_inc(v_a_721_);
lean_inc_ref(v_a_720_);
lean_inc(v_a_719_);
lean_inc_ref(v_a_718_);
lean_inc(v_a_717_);
v___x_731_ = lean_apply_10(v_fallback_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, lean_box(0));
return v___x_731_;
}
else
{
lean_object* v_arg_732_; lean_object* v___x_733_; uint8_t v___x_734_; 
v_arg_732_ = lean_ctor_get(v___x_729_, 1);
lean_inc_ref(v_arg_732_);
v___x_733_ = l_Lean_Expr_appFnCleanup___redArg(v___x_729_);
v___x_734_ = l_Lean_Expr_isApp(v___x_733_);
if (v___x_734_ == 0)
{
lean_object* v___x_735_; 
lean_dec_ref(v___x_733_);
lean_dec_ref(v_arg_732_);
lean_dec_ref(v_h_714_);
lean_dec_ref(v_c_x27_713_);
lean_dec_ref(v_b_712_);
lean_dec_ref(v_a_711_);
lean_dec_ref(v_inst_710_);
lean_dec_ref(v_c_709_);
lean_dec_ref(v_00_u03b1_708_);
lean_inc(v_a_725_);
lean_inc_ref(v_a_724_);
lean_inc(v_a_723_);
lean_inc_ref(v_a_722_);
lean_inc(v_a_721_);
lean_inc_ref(v_a_720_);
lean_inc(v_a_719_);
lean_inc_ref(v_a_718_);
lean_inc(v_a_717_);
v___x_735_ = lean_apply_10(v_fallback_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, lean_box(0));
return v___x_735_;
}
else
{
lean_object* v_arg_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
v_arg_736_ = lean_ctor_get(v___x_733_, 1);
lean_inc_ref(v_arg_736_);
v___x_737_ = l_Lean_Expr_appFnCleanup___redArg(v___x_733_);
v___x_738_ = l_Lean_Expr_isApp(v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; 
lean_dec_ref(v___x_737_);
lean_dec_ref(v_arg_736_);
lean_dec_ref(v_arg_732_);
lean_dec_ref(v_h_714_);
lean_dec_ref(v_c_x27_713_);
lean_dec_ref(v_b_712_);
lean_dec_ref(v_a_711_);
lean_dec_ref(v_inst_710_);
lean_dec_ref(v_c_709_);
lean_dec_ref(v_00_u03b1_708_);
lean_inc(v_a_725_);
lean_inc_ref(v_a_724_);
lean_inc(v_a_723_);
lean_inc_ref(v_a_722_);
lean_inc(v_a_721_);
lean_inc_ref(v_a_720_);
lean_inc(v_a_719_);
lean_inc_ref(v_a_718_);
lean_inc(v_a_717_);
v___x_739_ = lean_apply_10(v_fallback_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, lean_box(0));
return v___x_739_;
}
else
{
lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_740_ = l_Lean_Expr_appFnCleanup___redArg(v___x_737_);
v___x_741_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__1));
v___x_742_ = l_Lean_Expr_isConstOf(v___x_740_, v___x_741_);
lean_dec_ref(v___x_740_);
if (v___x_742_ == 0)
{
lean_object* v___x_743_; 
lean_dec_ref(v_arg_736_);
lean_dec_ref(v_arg_732_);
lean_dec_ref(v_h_714_);
lean_dec_ref(v_c_x27_713_);
lean_dec_ref(v_b_712_);
lean_dec_ref(v_a_711_);
lean_dec_ref(v_inst_710_);
lean_dec_ref(v_c_709_);
lean_dec_ref(v_00_u03b1_708_);
lean_inc(v_a_725_);
lean_inc_ref(v_a_724_);
lean_inc(v_a_723_);
lean_inc_ref(v_a_722_);
lean_inc(v_a_721_);
lean_inc_ref(v_a_720_);
lean_inc(v_a_719_);
lean_inc_ref(v_a_718_);
lean_inc(v_a_717_);
v___x_743_ = lean_apply_10(v_fallback_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, lean_box(0));
return v___x_743_;
}
else
{
lean_object* v___x_744_; 
v___x_744_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_736_, v_a_723_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_772_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_772_ == 0)
{
v___x_747_ = v___x_744_;
v_isShared_748_ = v_isSharedCheck_772_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_744_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_772_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_749_; lean_object* v___x_750_; uint8_t v___x_751_; 
v___x_749_ = l_Lean_Expr_cleanupAnnotations(v_a_745_);
v___x_750_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4));
v___x_751_ = l_Lean_Expr_isConstOf(v___x_749_, v___x_750_);
if (v___x_751_ == 0)
{
lean_object* v___x_752_; uint8_t v___x_753_; 
v___x_752_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6));
v___x_753_ = l_Lean_Expr_isConstOf(v___x_749_, v___x_752_);
lean_dec_ref(v___x_749_);
if (v___x_753_ == 0)
{
lean_object* v___x_754_; 
lean_del_object(v___x_747_);
lean_dec_ref(v_arg_732_);
lean_dec_ref(v_h_714_);
lean_dec_ref(v_c_x27_713_);
lean_dec_ref(v_b_712_);
lean_dec_ref(v_a_711_);
lean_dec_ref(v_inst_710_);
lean_dec_ref(v_c_709_);
lean_dec_ref(v_00_u03b1_708_);
lean_inc(v_a_725_);
lean_inc_ref(v_a_724_);
lean_inc(v_a_723_);
lean_inc_ref(v_a_722_);
lean_inc(v_a_721_);
lean_inc_ref(v_a_720_);
lean_inc(v_a_719_);
lean_inc_ref(v_a_718_);
lean_inc(v_a_717_);
v___x_754_ = lean_apply_10(v_fallback_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, lean_box(0));
return v___x_754_;
}
else
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_761_; 
lean_dec_ref(v_fallback_716_);
v___x_755_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__1));
v___x_756_ = l_Lean_Expr_constLevels_x21(v_f_707_);
v___x_757_ = l_Lean_mkConst(v___x_755_, v___x_756_);
lean_inc_ref(v_a_711_);
v___x_758_ = l_Lean_mkApp8(v___x_757_, v_00_u03b1_708_, v_c_709_, v_inst_710_, v_a_711_, v_b_712_, v_c_x27_713_, v_h_714_, v_arg_732_);
v___x_759_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_759_, 0, v_a_711_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
lean_ctor_set_uint8(v___x_759_, sizeof(void*)*2, v___x_751_);
lean_ctor_set_uint8(v___x_759_, sizeof(void*)*2 + 1, v___x_751_);
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 0, v___x_759_);
v___x_761_ = v___x_747_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v___x_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
else
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; uint8_t v___x_767_; lean_object* v___x_768_; lean_object* v___x_770_; 
lean_dec_ref(v___x_749_);
lean_dec_ref(v_fallback_716_);
v___x_763_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___closed__3));
v___x_764_ = l_Lean_Expr_constLevels_x21(v_f_707_);
v___x_765_ = l_Lean_mkConst(v___x_763_, v___x_764_);
lean_inc_ref(v_b_712_);
v___x_766_ = l_Lean_mkApp8(v___x_765_, v_00_u03b1_708_, v_c_709_, v_inst_710_, v_a_711_, v_b_712_, v_c_x27_713_, v_h_714_, v_arg_732_);
v___x_767_ = 0;
v___x_768_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_768_, 0, v_b_712_);
lean_ctor_set(v___x_768_, 1, v___x_766_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*2, v___x_767_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*2 + 1, v___x_767_);
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 0, v___x_768_);
v___x_770_ = v___x_747_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v___x_768_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
else
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
lean_dec_ref(v_arg_732_);
lean_dec_ref(v_fallback_716_);
lean_dec_ref(v_h_714_);
lean_dec_ref(v_c_x27_713_);
lean_dec_ref(v_b_712_);
lean_dec_ref(v_a_711_);
lean_dec_ref(v_inst_710_);
lean_dec_ref(v_c_709_);
lean_dec_ref(v_00_u03b1_708_);
v_a_773_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_780_ == 0)
{
v___x_775_ = v___x_744_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_744_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_773_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
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
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
lean_dec_ref(v_fallback_716_);
lean_dec_ref(v_h_714_);
lean_dec_ref(v_c_x27_713_);
lean_dec_ref(v_b_712_);
lean_dec_ref(v_a_711_);
lean_dec_ref(v_inst_710_);
lean_dec_ref(v_c_709_);
lean_dec_ref(v_00_u03b1_708_);
v_a_781_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_727_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_727_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr___boxed(lean_object** _args){
lean_object* v_f_789_ = _args[0];
lean_object* v_00_u03b1_790_ = _args[1];
lean_object* v_c_791_ = _args[2];
lean_object* v_inst_792_ = _args[3];
lean_object* v_a_793_ = _args[4];
lean_object* v_b_794_ = _args[5];
lean_object* v_c_x27_795_ = _args[6];
lean_object* v_h_796_ = _args[7];
lean_object* v_inst_x27_797_ = _args[8];
lean_object* v_fallback_798_ = _args[9];
lean_object* v_a_799_ = _args[10];
lean_object* v_a_800_ = _args[11];
lean_object* v_a_801_ = _args[12];
lean_object* v_a_802_ = _args[13];
lean_object* v_a_803_ = _args[14];
lean_object* v_a_804_ = _args[15];
lean_object* v_a_805_ = _args[16];
lean_object* v_a_806_ = _args[17];
lean_object* v_a_807_ = _args[18];
lean_object* v_a_808_ = _args[19];
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr(v_f_789_, v_00_u03b1_790_, v_c_791_, v_inst_792_, v_a_793_, v_b_794_, v_c_x27_795_, v_h_796_, v_inst_x27_797_, v_fallback_798_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_, v_a_807_);
lean_dec(v_a_807_);
lean_dec_ref(v_a_806_);
lean_dec(v_a_805_);
lean_dec_ref(v_a_804_);
lean_dec(v_a_803_);
lean_dec_ref(v_a_802_);
lean_dec(v_a_801_);
lean_dec_ref(v_a_800_);
lean_dec(v_a_799_);
lean_dec_ref(v_f_789_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___lam__0(uint8_t v___x_810_, lean_object* v_inst_811_, lean_object* v___x_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v___y_819_; lean_object* v___x_836_; uint8_t v_transparency_837_; uint8_t v___x_838_; 
v___x_836_ = l_Lean_Meta_Context_config(v___y_813_);
v_transparency_837_ = lean_ctor_get_uint8(v___x_836_, 9);
lean_dec_ref(v___x_836_);
v___x_838_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_837_, v___x_810_);
if (v___x_838_ == 0)
{
lean_object* v_keyedConfig_839_; uint8_t v_trackZetaDelta_840_; lean_object* v_zetaDeltaSet_841_; lean_object* v_lctx_842_; lean_object* v_localInstances_843_; lean_object* v_defEqCtx_x3f_844_; lean_object* v_synthPendingDepth_845_; lean_object* v_customCanUnfoldPredicate_x3f_846_; uint8_t v_univApprox_847_; uint8_t v_inTypeClassResolution_848_; uint8_t v_cacheInferType_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_858_; 
v_keyedConfig_839_ = lean_ctor_get(v___y_813_, 0);
v_trackZetaDelta_840_ = lean_ctor_get_uint8(v___y_813_, sizeof(void*)*7);
v_zetaDeltaSet_841_ = lean_ctor_get(v___y_813_, 1);
v_lctx_842_ = lean_ctor_get(v___y_813_, 2);
v_localInstances_843_ = lean_ctor_get(v___y_813_, 3);
v_defEqCtx_x3f_844_ = lean_ctor_get(v___y_813_, 4);
v_synthPendingDepth_845_ = lean_ctor_get(v___y_813_, 5);
v_customCanUnfoldPredicate_x3f_846_ = lean_ctor_get(v___y_813_, 6);
v_univApprox_847_ = lean_ctor_get_uint8(v___y_813_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_848_ = lean_ctor_get_uint8(v___y_813_, sizeof(void*)*7 + 2);
v_cacheInferType_849_ = lean_ctor_get_uint8(v___y_813_, sizeof(void*)*7 + 3);
v_isSharedCheck_858_ = !lean_is_exclusive(v___y_813_);
if (v_isSharedCheck_858_ == 0)
{
v___x_851_ = v___y_813_;
v_isShared_852_ = v_isSharedCheck_858_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_846_);
lean_inc(v_synthPendingDepth_845_);
lean_inc(v_defEqCtx_x3f_844_);
lean_inc(v_localInstances_843_);
lean_inc(v_lctx_842_);
lean_inc(v_zetaDeltaSet_841_);
lean_inc(v_keyedConfig_839_);
lean_dec(v___y_813_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_858_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_853_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_810_, v_keyedConfig_839_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v___x_853_);
v___x_855_ = v___x_851_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v_zetaDeltaSet_841_);
lean_ctor_set(v_reuseFailAlloc_857_, 2, v_lctx_842_);
lean_ctor_set(v_reuseFailAlloc_857_, 3, v_localInstances_843_);
lean_ctor_set(v_reuseFailAlloc_857_, 4, v_defEqCtx_x3f_844_);
lean_ctor_set(v_reuseFailAlloc_857_, 5, v_synthPendingDepth_845_);
lean_ctor_set(v_reuseFailAlloc_857_, 6, v_customCanUnfoldPredicate_x3f_846_);
lean_ctor_set_uint8(v_reuseFailAlloc_857_, sizeof(void*)*7, v_trackZetaDelta_840_);
lean_ctor_set_uint8(v_reuseFailAlloc_857_, sizeof(void*)*7 + 1, v_univApprox_847_);
lean_ctor_set_uint8(v_reuseFailAlloc_857_, sizeof(void*)*7 + 2, v_inTypeClassResolution_848_);
lean_ctor_set_uint8(v_reuseFailAlloc_857_, sizeof(void*)*7 + 3, v_cacheInferType_849_);
v___x_855_ = v_reuseFailAlloc_857_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_856_; 
v___x_856_ = l_Lean_Meta_project_x3f(v_inst_811_, v___x_812_, v___x_855_, v___y_814_, v___y_815_, v___y_816_);
lean_dec_ref(v___x_855_);
v___y_819_ = v___x_856_;
goto v___jp_818_;
}
}
}
else
{
lean_object* v___x_859_; 
v___x_859_ = l_Lean_Meta_project_x3f(v_inst_811_, v___x_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_);
lean_dec_ref(v___y_813_);
v___y_819_ = v___x_859_;
goto v___jp_818_;
}
v___jp_818_:
{
if (lean_obj_tag(v___y_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
v_a_820_ = lean_ctor_get(v___y_819_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___y_819_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___y_819_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___y_819_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_823_ == 0)
{
v___x_825_ = v___x_822_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_820_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
v_a_828_ = lean_ctor_get(v___y_819_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___y_819_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___y_819_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___y_819_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___lam__0___boxed(lean_object* v___x_860_, lean_object* v_inst_861_, lean_object* v___x_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
uint8_t v___x_15493__boxed_868_; lean_object* v_res_869_; 
v___x_15493__boxed_868_ = lean_unbox(v___x_860_);
v_res_869_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___lam__0(v___x_15493__boxed_868_, v_inst_861_, v___x_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec(v___x_862_);
return v_res_869_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2(void){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_874_ = lean_box(0);
v___x_875_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__1));
v___x_876_ = l_Lean_mkConst(v___x_875_, v___x_874_);
return v___x_876_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__6(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_unsigned_to_nat(1u);
v___x_883_ = l_Lean_Level_ofNat(v___x_882_);
return v___x_883_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__7(void){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_884_ = lean_box(0);
v___x_885_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__6, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__6_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__6);
v___x_886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_886_, 0, v___x_885_);
lean_ctor_set(v___x_886_, 1, v___x_884_);
return v___x_886_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_887_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__7, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__7_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__7);
v___x_888_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__5));
v___x_889_ = l_Lean_Expr_const___override(v___x_888_, v___x_887_);
return v___x_889_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_892_ = lean_box(0);
v___x_893_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__9));
v___x_894_ = l_Lean_mkConst(v___x_893_, v___x_892_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable(lean_object* v_f_905_, lean_object* v_00_u03b1_906_, lean_object* v_c_907_, lean_object* v_inst_908_, lean_object* v_a_909_, lean_object* v_b_910_, lean_object* v_fallback_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_){
_start:
{
lean_object* v___x_922_; uint8_t v___x_923_; lean_object* v___x_924_; lean_object* v___f_925_; lean_object* v___x_926_; 
v___x_922_ = lean_unsigned_to_nat(0u);
v___x_923_ = 5;
v___x_924_ = lean_box(v___x_923_);
lean_inc_ref(v_inst_908_);
v___f_925_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___lam__0___boxed), 8, 3);
lean_closure_set(v___f_925_, 0, v___x_924_);
lean_closure_set(v___f_925_, 1, v_inst_908_);
lean_closure_set(v___f_925_, 2, v___x_922_);
v___x_926_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___f_925_, v_a_917_, v_a_918_, v_a_919_, v_a_920_);
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v_a_927_; 
v_a_927_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_a_927_);
lean_dec_ref_known(v___x_926_, 1);
if (lean_obj_tag(v_a_927_) == 0)
{
lean_object* v___x_928_; 
lean_inc(v_a_920_);
lean_inc_ref(v_a_919_);
lean_inc(v_a_918_);
lean_inc_ref(v_a_917_);
lean_inc(v_a_916_);
lean_inc_ref(v_a_915_);
lean_inc(v_a_914_);
lean_inc_ref(v_a_913_);
lean_inc(v_a_912_);
lean_inc_ref(v_inst_908_);
v___x_928_ = lean_sym_simp(v_inst_908_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v___x_928_, 1);
if (lean_obj_tag(v_a_929_) == 0)
{
uint8_t v_contextDependent_930_; lean_object* v___x_931_; 
v_contextDependent_930_ = lean_ctor_get_uint8(v_a_929_, 1);
lean_dec_ref_known(v_a_929_, 0);
lean_inc_ref(v_inst_908_);
v___x_931_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable(v_f_905_, v_00_u03b1_906_, v_c_907_, v_inst_908_, v_a_909_, v_b_910_, v_inst_908_, v_fallback_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; uint8_t v___y_934_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
lean_inc(v_a_932_);
if (v_contextDependent_930_ == 0)
{
lean_dec(v_a_932_);
return v___x_931_;
}
else
{
if (lean_obj_tag(v_a_932_) == 0)
{
uint8_t v_contextDependent_944_; 
v_contextDependent_944_ = lean_ctor_get_uint8(v_a_932_, 1);
v___y_934_ = v_contextDependent_944_;
goto v___jp_933_;
}
else
{
uint8_t v_contextDependent_945_; 
v_contextDependent_945_ = lean_ctor_get_uint8(v_a_932_, sizeof(void*)*2 + 1);
v___y_934_ = v_contextDependent_945_;
goto v___jp_933_;
}
}
v___jp_933_:
{
if (v___y_934_ == 0)
{
lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_942_; 
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_931_, 0);
lean_dec(v_unused_943_);
v___x_936_ = v___x_931_;
v_isShared_937_ = v_isSharedCheck_942_;
goto v_resetjp_935_;
}
else
{
lean_dec(v___x_931_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_942_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_938_; lean_object* v___x_940_; 
v___x_938_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_932_);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 0, v___x_938_);
v___x_940_ = v___x_936_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v___x_938_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
else
{
lean_dec(v_a_932_);
return v___x_931_;
}
}
}
else
{
return v___x_931_;
}
}
else
{
lean_object* v_e_x27_946_; uint8_t v_contextDependent_947_; lean_object* v___x_948_; 
v_e_x27_946_ = lean_ctor_get(v_a_929_, 0);
lean_inc_ref(v_e_x27_946_);
v_contextDependent_947_ = lean_ctor_get_uint8(v_a_929_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_929_, 2);
v___x_948_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable(v_f_905_, v_00_u03b1_906_, v_c_907_, v_inst_908_, v_a_909_, v_b_910_, v_e_x27_946_, v_fallback_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; uint8_t v___y_951_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_a_949_);
if (v_contextDependent_947_ == 0)
{
lean_dec(v_a_949_);
return v___x_948_;
}
else
{
if (lean_obj_tag(v_a_949_) == 0)
{
uint8_t v_contextDependent_961_; 
v_contextDependent_961_ = lean_ctor_get_uint8(v_a_949_, 1);
v___y_951_ = v_contextDependent_961_;
goto v___jp_950_;
}
else
{
uint8_t v_contextDependent_962_; 
v_contextDependent_962_ = lean_ctor_get_uint8(v_a_949_, sizeof(void*)*2 + 1);
v___y_951_ = v_contextDependent_962_;
goto v___jp_950_;
}
}
v___jp_950_:
{
if (v___y_951_ == 0)
{
lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_959_; 
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_959_ == 0)
{
lean_object* v_unused_960_; 
v_unused_960_ = lean_ctor_get(v___x_948_, 0);
lean_dec(v_unused_960_);
v___x_953_ = v___x_948_;
v_isShared_954_ = v_isSharedCheck_959_;
goto v_resetjp_952_;
}
else
{
lean_dec(v___x_948_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_959_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_955_; lean_object* v___x_957_; 
v___x_955_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_949_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_955_);
v___x_957_ = v___x_953_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_955_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
else
{
lean_dec(v_a_949_);
return v___x_948_;
}
}
}
else
{
return v___x_948_;
}
}
}
else
{
lean_dec_ref(v_fallback_911_);
lean_dec_ref(v_b_910_);
lean_dec_ref(v_a_909_);
lean_dec_ref(v_inst_908_);
lean_dec_ref(v_c_907_);
lean_dec_ref(v_00_u03b1_906_);
return v___x_928_;
}
}
else
{
lean_object* v_val_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_val_963_ = lean_ctor_get(v_a_927_, 0);
lean_inc(v_val_963_);
lean_dec_ref_known(v_a_927_, 1);
v___x_964_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2);
lean_inc_ref(v_inst_908_);
lean_inc_ref(v_c_907_);
v___x_965_ = l_Lean_mkAppB(v___x_964_, v_c_907_, v_inst_908_);
v___x_966_ = l_Lean_Meta_Sym_shareCommonInc(v_val_963_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v_a_967_ = lean_ctor_get(v___x_966_, 0);
lean_inc_n(v_a_967_, 3);
lean_dec_ref_known(v___x_966_, 1);
v___x_968_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8);
v___x_969_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10);
v___x_970_ = l_Lean_mkAppB(v___x_968_, v___x_969_, v_a_967_);
lean_inc(v_a_920_);
lean_inc_ref(v_a_919_);
lean_inc(v_a_918_);
lean_inc_ref(v_a_917_);
lean_inc(v_a_916_);
lean_inc_ref(v_a_915_);
lean_inc(v_a_914_);
lean_inc_ref(v_a_913_);
lean_inc(v_a_912_);
v___x_971_ = lean_sym_simp(v_a_967_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v_a_972_; uint8_t v___x_973_; lean_object* v_e_x27_975_; lean_object* v_proof_976_; uint8_t v_contextDependent_977_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_a_972_);
lean_dec_ref_known(v___x_971_, 1);
v___x_973_ = 0;
if (lean_obj_tag(v_a_972_) == 0)
{
uint8_t v_contextDependent_1014_; 
lean_dec_ref(v___x_965_);
v_contextDependent_1014_ = lean_ctor_get_uint8(v_a_972_, 1);
lean_dec_ref_known(v_a_972_, 0);
v_e_x27_975_ = v_a_967_;
v_proof_976_ = v___x_970_;
v_contextDependent_977_ = v_contextDependent_1014_;
goto v___jp_974_;
}
else
{
lean_object* v_e_x27_1015_; lean_object* v_proof_1016_; uint8_t v_contextDependent_1017_; lean_object* v___x_1018_; 
v_e_x27_1015_ = lean_ctor_get(v_a_972_, 0);
lean_inc_ref_n(v_e_x27_1015_, 2);
v_proof_1016_ = lean_ctor_get(v_a_972_, 1);
lean_inc_ref(v_proof_1016_);
v_contextDependent_1017_ = lean_ctor_get_uint8(v_a_972_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_972_, 2);
v___x_1018_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___x_965_, v_a_967_, v___x_970_, v_e_x27_1015_, v_proof_1016_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
lean_dec_ref_known(v___x_1018_, 1);
v_e_x27_975_ = v_e_x27_1015_;
v_proof_976_ = v_a_1019_;
v_contextDependent_977_ = v_contextDependent_1017_;
goto v___jp_974_;
}
else
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
lean_dec_ref(v_e_x27_1015_);
lean_dec_ref(v_fallback_911_);
lean_dec_ref(v_b_910_);
lean_dec_ref(v_a_909_);
lean_dec_ref(v_inst_908_);
lean_dec_ref(v_c_907_);
lean_dec_ref(v_00_u03b1_906_);
v_a_1020_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_1018_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1018_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
v___jp_974_:
{
lean_object* v___x_978_; 
v___x_978_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_x27_975_, v_a_918_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_1005_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_981_ = v___x_978_;
v_isShared_982_ = v_isSharedCheck_1005_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_978_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_1005_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_983_; lean_object* v___x_984_; uint8_t v___x_985_; 
v___x_983_ = l_Lean_Expr_cleanupAnnotations(v_a_979_);
v___x_984_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4));
v___x_985_ = l_Lean_Expr_isConstOf(v___x_983_, v___x_984_);
if (v___x_985_ == 0)
{
lean_object* v___x_986_; uint8_t v___x_987_; 
v___x_986_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6));
v___x_987_ = l_Lean_Expr_isConstOf(v___x_983_, v___x_986_);
lean_dec_ref(v___x_983_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; 
lean_del_object(v___x_981_);
lean_dec_ref(v_proof_976_);
lean_dec_ref(v_b_910_);
lean_dec_ref(v_a_909_);
lean_dec_ref(v_inst_908_);
lean_dec_ref(v_c_907_);
lean_dec_ref(v_00_u03b1_906_);
lean_inc(v_a_920_);
lean_inc_ref(v_a_919_);
lean_inc(v_a_918_);
lean_inc_ref(v_a_917_);
lean_inc(v_a_916_);
lean_inc_ref(v_a_915_);
lean_inc(v_a_914_);
lean_inc_ref(v_a_913_);
lean_inc(v_a_912_);
v___x_988_ = lean_apply_10(v_fallback_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_, lean_box(0));
return v___x_988_;
}
else
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_995_; 
lean_dec_ref(v_fallback_911_);
v___x_989_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__12));
v___x_990_ = l_Lean_Expr_constLevels_x21(v_f_905_);
v___x_991_ = l_Lean_mkConst(v___x_989_, v___x_990_);
lean_inc_ref(v_a_909_);
v___x_992_ = l_Lean_mkApp6(v___x_991_, v_00_u03b1_906_, v_c_907_, v_inst_908_, v_a_909_, v_b_910_, v_proof_976_);
v___x_993_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_993_, 0, v_a_909_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
lean_ctor_set_uint8(v___x_993_, sizeof(void*)*2, v___x_973_);
lean_ctor_set_uint8(v___x_993_, sizeof(void*)*2 + 1, v_contextDependent_977_);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 0, v___x_993_);
v___x_995_ = v___x_981_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_993_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
else
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1003_; 
lean_dec_ref(v___x_983_);
lean_dec_ref(v_fallback_911_);
v___x_997_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__14));
v___x_998_ = l_Lean_Expr_constLevels_x21(v_f_905_);
v___x_999_ = l_Lean_mkConst(v___x_997_, v___x_998_);
lean_inc_ref(v_b_910_);
v___x_1000_ = l_Lean_mkApp6(v___x_999_, v_00_u03b1_906_, v_c_907_, v_inst_908_, v_a_909_, v_b_910_, v_proof_976_);
v___x_1001_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1001_, 0, v_b_910_);
lean_ctor_set(v___x_1001_, 1, v___x_1000_);
lean_ctor_set_uint8(v___x_1001_, sizeof(void*)*2, v___x_973_);
lean_ctor_set_uint8(v___x_1001_, sizeof(void*)*2 + 1, v_contextDependent_977_);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 0, v___x_1001_);
v___x_1003_ = v___x_981_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1013_; 
lean_dec_ref(v_proof_976_);
lean_dec_ref(v_fallback_911_);
lean_dec_ref(v_b_910_);
lean_dec_ref(v_a_909_);
lean_dec_ref(v_inst_908_);
lean_dec_ref(v_c_907_);
lean_dec_ref(v_00_u03b1_906_);
v_a_1006_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1008_ = v___x_978_;
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_978_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_970_);
lean_dec(v_a_967_);
lean_dec_ref(v___x_965_);
lean_dec_ref(v_fallback_911_);
lean_dec_ref(v_b_910_);
lean_dec_ref(v_a_909_);
lean_dec_ref(v_inst_908_);
lean_dec_ref(v_c_907_);
lean_dec_ref(v_00_u03b1_906_);
return v___x_971_;
}
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
lean_dec_ref(v___x_965_);
lean_dec_ref(v_fallback_911_);
lean_dec_ref(v_b_910_);
lean_dec_ref(v_a_909_);
lean_dec_ref(v_inst_908_);
lean_dec_ref(v_c_907_);
lean_dec_ref(v_00_u03b1_906_);
v_a_1028_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_966_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_966_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1028_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
}
else
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1043_; 
lean_dec_ref(v_fallback_911_);
lean_dec_ref(v_b_910_);
lean_dec_ref(v_a_909_);
lean_dec_ref(v_inst_908_);
lean_dec_ref(v_c_907_);
lean_dec_ref(v_00_u03b1_906_);
v_a_1036_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1038_ = v___x_926_;
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_926_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1041_; 
if (v_isShared_1039_ == 0)
{
v___x_1041_ = v___x_1038_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_a_1036_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___boxed(lean_object** _args){
lean_object* v_f_1044_ = _args[0];
lean_object* v_00_u03b1_1045_ = _args[1];
lean_object* v_c_1046_ = _args[2];
lean_object* v_inst_1047_ = _args[3];
lean_object* v_a_1048_ = _args[4];
lean_object* v_b_1049_ = _args[5];
lean_object* v_fallback_1050_ = _args[6];
lean_object* v_a_1051_ = _args[7];
lean_object* v_a_1052_ = _args[8];
lean_object* v_a_1053_ = _args[9];
lean_object* v_a_1054_ = _args[10];
lean_object* v_a_1055_ = _args[11];
lean_object* v_a_1056_ = _args[12];
lean_object* v_a_1057_ = _args[13];
lean_object* v_a_1058_ = _args[14];
lean_object* v_a_1059_ = _args[15];
lean_object* v_a_1060_ = _args[16];
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable(v_f_1044_, v_00_u03b1_1045_, v_c_1046_, v_inst_1047_, v_a_1048_, v_b_1049_, v_fallback_1050_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
lean_dec(v_a_1057_);
lean_dec_ref(v_a_1056_);
lean_dec(v_a_1055_);
lean_dec_ref(v_a_1054_);
lean_dec(v_a_1053_);
lean_dec_ref(v_a_1052_);
lean_dec(v_a_1051_);
lean_dec_ref(v_f_1044_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___lam__0(uint8_t v___x_1062_, lean_object* v_inst_x27_1063_, lean_object* v___x_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v___y_1071_; lean_object* v___x_1088_; uint8_t v_transparency_1089_; uint8_t v___x_1090_; 
v___x_1088_ = l_Lean_Meta_Context_config(v___y_1065_);
v_transparency_1089_ = lean_ctor_get_uint8(v___x_1088_, 9);
lean_dec_ref(v___x_1088_);
v___x_1090_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1089_, v___x_1062_);
if (v___x_1090_ == 0)
{
lean_object* v_keyedConfig_1091_; uint8_t v_trackZetaDelta_1092_; lean_object* v_zetaDeltaSet_1093_; lean_object* v_lctx_1094_; lean_object* v_localInstances_1095_; lean_object* v_defEqCtx_x3f_1096_; lean_object* v_synthPendingDepth_1097_; lean_object* v_customCanUnfoldPredicate_x3f_1098_; uint8_t v_univApprox_1099_; uint8_t v_inTypeClassResolution_1100_; uint8_t v_cacheInferType_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1110_; 
v_keyedConfig_1091_ = lean_ctor_get(v___y_1065_, 0);
v_trackZetaDelta_1092_ = lean_ctor_get_uint8(v___y_1065_, sizeof(void*)*7);
v_zetaDeltaSet_1093_ = lean_ctor_get(v___y_1065_, 1);
v_lctx_1094_ = lean_ctor_get(v___y_1065_, 2);
v_localInstances_1095_ = lean_ctor_get(v___y_1065_, 3);
v_defEqCtx_x3f_1096_ = lean_ctor_get(v___y_1065_, 4);
v_synthPendingDepth_1097_ = lean_ctor_get(v___y_1065_, 5);
v_customCanUnfoldPredicate_x3f_1098_ = lean_ctor_get(v___y_1065_, 6);
v_univApprox_1099_ = lean_ctor_get_uint8(v___y_1065_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1100_ = lean_ctor_get_uint8(v___y_1065_, sizeof(void*)*7 + 2);
v_cacheInferType_1101_ = lean_ctor_get_uint8(v___y_1065_, sizeof(void*)*7 + 3);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___y_1065_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1103_ = v___y_1065_;
v_isShared_1104_ = v_isSharedCheck_1110_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_1098_);
lean_inc(v_synthPendingDepth_1097_);
lean_inc(v_defEqCtx_x3f_1096_);
lean_inc(v_localInstances_1095_);
lean_inc(v_lctx_1094_);
lean_inc(v_zetaDeltaSet_1093_);
lean_inc(v_keyedConfig_1091_);
lean_dec(v___y_1065_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1110_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1105_; lean_object* v___x_1107_; 
v___x_1105_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1062_, v_keyedConfig_1091_);
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 0, v___x_1105_);
v___x_1107_ = v___x_1103_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v___x_1105_);
lean_ctor_set(v_reuseFailAlloc_1109_, 1, v_zetaDeltaSet_1093_);
lean_ctor_set(v_reuseFailAlloc_1109_, 2, v_lctx_1094_);
lean_ctor_set(v_reuseFailAlloc_1109_, 3, v_localInstances_1095_);
lean_ctor_set(v_reuseFailAlloc_1109_, 4, v_defEqCtx_x3f_1096_);
lean_ctor_set(v_reuseFailAlloc_1109_, 5, v_synthPendingDepth_1097_);
lean_ctor_set(v_reuseFailAlloc_1109_, 6, v_customCanUnfoldPredicate_x3f_1098_);
lean_ctor_set_uint8(v_reuseFailAlloc_1109_, sizeof(void*)*7, v_trackZetaDelta_1092_);
lean_ctor_set_uint8(v_reuseFailAlloc_1109_, sizeof(void*)*7 + 1, v_univApprox_1099_);
lean_ctor_set_uint8(v_reuseFailAlloc_1109_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1100_);
lean_ctor_set_uint8(v_reuseFailAlloc_1109_, sizeof(void*)*7 + 3, v_cacheInferType_1101_);
v___x_1107_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1108_; 
v___x_1108_ = l_Lean_Meta_project_x3f(v_inst_x27_1063_, v___x_1064_, v___x_1107_, v___y_1066_, v___y_1067_, v___y_1068_);
lean_dec_ref(v___x_1107_);
v___y_1071_ = v___x_1108_;
goto v___jp_1070_;
}
}
}
else
{
lean_object* v___x_1111_; 
v___x_1111_ = l_Lean_Meta_project_x3f(v_inst_x27_1063_, v___x_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
lean_dec_ref(v___y_1065_);
v___y_1071_ = v___x_1111_;
goto v___jp_1070_;
}
v___jp_1070_:
{
if (lean_obj_tag(v___y_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
v_a_1072_ = lean_ctor_get(v___y_1071_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___y_1071_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___y_1071_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___y_1071_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
v_a_1080_ = lean_ctor_get(v___y_1071_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___y_1071_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___y_1071_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___y_1071_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___lam__0___boxed(lean_object* v___x_1112_, lean_object* v_inst_x27_1113_, lean_object* v___x_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
uint8_t v___x_15493__boxed_1120_; lean_object* v_res_1121_; 
v___x_15493__boxed_1120_ = lean_unbox(v___x_1112_);
v_res_1121_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___lam__0(v___x_15493__boxed_1120_, v_inst_x27_1113_, v___x_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec(v___y_1116_);
lean_dec(v___x_1114_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr(lean_object* v_f_1132_, lean_object* v_00_u03b1_1133_, lean_object* v_c_1134_, lean_object* v_inst_1135_, lean_object* v_a_1136_, lean_object* v_b_1137_, lean_object* v_c_x27_1138_, lean_object* v_h_1139_, lean_object* v_inst_x27_1140_, lean_object* v_fallback_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_){
_start:
{
lean_object* v___x_1152_; uint8_t v___x_1153_; lean_object* v___x_1154_; lean_object* v___f_1155_; lean_object* v___x_1156_; 
v___x_1152_ = lean_unsigned_to_nat(0u);
v___x_1153_ = 5;
v___x_1154_ = lean_box(v___x_1153_);
lean_inc_ref(v_inst_x27_1140_);
v___f_1155_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1155_, 0, v___x_1154_);
lean_closure_set(v___f_1155_, 1, v_inst_x27_1140_);
lean_closure_set(v___f_1155_, 2, v___x_1152_);
v___x_1156_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___f_1155_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1157_);
lean_dec_ref_known(v___x_1156_, 1);
if (lean_obj_tag(v_a_1157_) == 0)
{
lean_object* v___x_1158_; 
lean_inc(v_a_1150_);
lean_inc_ref(v_a_1149_);
lean_inc(v_a_1148_);
lean_inc_ref(v_a_1147_);
lean_inc(v_a_1146_);
lean_inc_ref(v_a_1145_);
lean_inc(v_a_1144_);
lean_inc_ref(v_a_1143_);
lean_inc(v_a_1142_);
lean_inc_ref(v_inst_x27_1140_);
v___x_1158_ = lean_sym_simp(v_inst_x27_1140_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_object* v_a_1159_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc(v_a_1159_);
lean_dec_ref_known(v___x_1158_, 1);
if (lean_obj_tag(v_a_1159_) == 0)
{
uint8_t v_contextDependent_1160_; lean_object* v___x_1161_; 
v_contextDependent_1160_ = lean_ctor_get_uint8(v_a_1159_, 1);
lean_dec_ref_known(v_a_1159_, 0);
v___x_1161_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr(v_f_1132_, v_00_u03b1_1133_, v_c_1134_, v_inst_1135_, v_a_1136_, v_b_1137_, v_c_x27_1138_, v_h_1139_, v_inst_x27_1140_, v_fallback_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; uint8_t v___y_1164_; 
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
lean_inc(v_a_1162_);
if (v_contextDependent_1160_ == 0)
{
lean_dec(v_a_1162_);
return v___x_1161_;
}
else
{
if (lean_obj_tag(v_a_1162_) == 0)
{
uint8_t v_contextDependent_1174_; 
v_contextDependent_1174_ = lean_ctor_get_uint8(v_a_1162_, 1);
v___y_1164_ = v_contextDependent_1174_;
goto v___jp_1163_;
}
else
{
uint8_t v_contextDependent_1175_; 
v_contextDependent_1175_ = lean_ctor_get_uint8(v_a_1162_, sizeof(void*)*2 + 1);
v___y_1164_ = v_contextDependent_1175_;
goto v___jp_1163_;
}
}
v___jp_1163_:
{
if (v___y_1164_ == 0)
{
lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1172_; 
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1172_ == 0)
{
lean_object* v_unused_1173_; 
v_unused_1173_ = lean_ctor_get(v___x_1161_, 0);
lean_dec(v_unused_1173_);
v___x_1166_ = v___x_1161_;
v_isShared_1167_ = v_isSharedCheck_1172_;
goto v_resetjp_1165_;
}
else
{
lean_dec(v___x_1161_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1172_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1168_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1162_);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 0, v___x_1168_);
v___x_1170_ = v___x_1166_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1168_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
else
{
lean_dec(v_a_1162_);
return v___x_1161_;
}
}
}
else
{
return v___x_1161_;
}
}
else
{
lean_object* v_e_x27_1176_; uint8_t v_contextDependent_1177_; lean_object* v___x_1178_; 
lean_dec_ref(v_inst_x27_1140_);
v_e_x27_1176_ = lean_ctor_get(v_a_1159_, 0);
lean_inc_ref(v_e_x27_1176_);
v_contextDependent_1177_ = lean_ctor_get_uint8(v_a_1159_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1159_, 2);
v___x_1178_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidableCongr(v_f_1132_, v_00_u03b1_1133_, v_c_1134_, v_inst_1135_, v_a_1136_, v_b_1137_, v_c_x27_1138_, v_h_1139_, v_e_x27_1176_, v_fallback_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; uint8_t v___y_1181_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
lean_inc(v_a_1179_);
if (v_contextDependent_1177_ == 0)
{
lean_dec(v_a_1179_);
return v___x_1178_;
}
else
{
if (lean_obj_tag(v_a_1179_) == 0)
{
uint8_t v_contextDependent_1191_; 
v_contextDependent_1191_ = lean_ctor_get_uint8(v_a_1179_, 1);
v___y_1181_ = v_contextDependent_1191_;
goto v___jp_1180_;
}
else
{
uint8_t v_contextDependent_1192_; 
v_contextDependent_1192_ = lean_ctor_get_uint8(v_a_1179_, sizeof(void*)*2 + 1);
v___y_1181_ = v_contextDependent_1192_;
goto v___jp_1180_;
}
}
v___jp_1180_:
{
if (v___y_1181_ == 0)
{
lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1189_; 
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1189_ == 0)
{
lean_object* v_unused_1190_; 
v_unused_1190_ = lean_ctor_get(v___x_1178_, 0);
lean_dec(v_unused_1190_);
v___x_1183_ = v___x_1178_;
v_isShared_1184_ = v_isSharedCheck_1189_;
goto v_resetjp_1182_;
}
else
{
lean_dec(v___x_1178_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1189_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1185_; lean_object* v___x_1187_; 
v___x_1185_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1179_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v___x_1185_);
v___x_1187_ = v___x_1183_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
else
{
lean_dec(v_a_1179_);
return v___x_1178_;
}
}
}
else
{
return v___x_1178_;
}
}
}
else
{
lean_dec_ref(v_fallback_1141_);
lean_dec_ref(v_inst_x27_1140_);
lean_dec_ref(v_h_1139_);
lean_dec_ref(v_c_x27_1138_);
lean_dec_ref(v_b_1137_);
lean_dec_ref(v_a_1136_);
lean_dec_ref(v_inst_1135_);
lean_dec_ref(v_c_1134_);
lean_dec_ref(v_00_u03b1_1133_);
return v___x_1158_;
}
}
else
{
lean_object* v_val_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v_val_1193_ = lean_ctor_get(v_a_1157_, 0);
lean_inc(v_val_1193_);
lean_dec_ref_known(v_a_1157_, 1);
v___x_1194_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2);
lean_inc_ref(v_inst_x27_1140_);
lean_inc_ref(v_c_x27_1138_);
v___x_1195_ = l_Lean_mkAppB(v___x_1194_, v_c_x27_1138_, v_inst_x27_1140_);
v___x_1196_ = l_Lean_Meta_Sym_shareCommonInc(v_val_1193_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc_n(v_a_1197_, 3);
lean_dec_ref_known(v___x_1196_, 1);
v___x_1198_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8);
v___x_1199_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10);
v___x_1200_ = l_Lean_mkAppB(v___x_1198_, v___x_1199_, v_a_1197_);
lean_inc(v_a_1150_);
lean_inc_ref(v_a_1149_);
lean_inc(v_a_1148_);
lean_inc_ref(v_a_1147_);
lean_inc(v_a_1146_);
lean_inc_ref(v_a_1145_);
lean_inc(v_a_1144_);
lean_inc_ref(v_a_1143_);
lean_inc(v_a_1142_);
v___x_1201_ = lean_sym_simp(v_a_1197_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; uint8_t v___x_1203_; lean_object* v_e_x27_1205_; lean_object* v_proof_1206_; uint8_t v_contextDependent_1207_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1202_);
lean_dec_ref_known(v___x_1201_, 1);
v___x_1203_ = 0;
if (lean_obj_tag(v_a_1202_) == 0)
{
uint8_t v_contextDependent_1244_; 
lean_dec_ref(v___x_1195_);
v_contextDependent_1244_ = lean_ctor_get_uint8(v_a_1202_, 1);
lean_dec_ref_known(v_a_1202_, 0);
v_e_x27_1205_ = v_a_1197_;
v_proof_1206_ = v___x_1200_;
v_contextDependent_1207_ = v_contextDependent_1244_;
goto v___jp_1204_;
}
else
{
lean_object* v_e_x27_1245_; lean_object* v_proof_1246_; uint8_t v_contextDependent_1247_; lean_object* v___x_1248_; 
v_e_x27_1245_ = lean_ctor_get(v_a_1202_, 0);
lean_inc_ref_n(v_e_x27_1245_, 2);
v_proof_1246_ = lean_ctor_get(v_a_1202_, 1);
lean_inc_ref(v_proof_1246_);
v_contextDependent_1247_ = lean_ctor_get_uint8(v_a_1202_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1202_, 2);
v___x_1248_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___x_1195_, v_a_1197_, v___x_1200_, v_e_x27_1245_, v_proof_1246_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; 
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1249_);
lean_dec_ref_known(v___x_1248_, 1);
v_e_x27_1205_ = v_e_x27_1245_;
v_proof_1206_ = v_a_1249_;
v_contextDependent_1207_ = v_contextDependent_1247_;
goto v___jp_1204_;
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
lean_dec_ref(v_e_x27_1245_);
lean_dec_ref(v_fallback_1141_);
lean_dec_ref(v_inst_x27_1140_);
lean_dec_ref(v_h_1139_);
lean_dec_ref(v_c_x27_1138_);
lean_dec_ref(v_b_1137_);
lean_dec_ref(v_a_1136_);
lean_dec_ref(v_inst_1135_);
lean_dec_ref(v_c_1134_);
lean_dec_ref(v_00_u03b1_1133_);
v_a_1250_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1248_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1248_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
v___jp_1204_:
{
lean_object* v___x_1208_; 
v___x_1208_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_x27_1205_, v_a_1148_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1235_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1235_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1235_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; uint8_t v___x_1215_; 
v___x_1213_ = l_Lean_Expr_cleanupAnnotations(v_a_1209_);
v___x_1214_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4));
v___x_1215_ = l_Lean_Expr_isConstOf(v___x_1213_, v___x_1214_);
if (v___x_1215_ == 0)
{
lean_object* v___x_1216_; uint8_t v___x_1217_; 
v___x_1216_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6));
v___x_1217_ = l_Lean_Expr_isConstOf(v___x_1213_, v___x_1216_);
lean_dec_ref(v___x_1213_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; 
lean_del_object(v___x_1211_);
lean_dec_ref(v_proof_1206_);
lean_dec_ref(v_inst_x27_1140_);
lean_dec_ref(v_h_1139_);
lean_dec_ref(v_c_x27_1138_);
lean_dec_ref(v_b_1137_);
lean_dec_ref(v_a_1136_);
lean_dec_ref(v_inst_1135_);
lean_dec_ref(v_c_1134_);
lean_dec_ref(v_00_u03b1_1133_);
lean_inc(v_a_1150_);
lean_inc_ref(v_a_1149_);
lean_inc(v_a_1148_);
lean_inc_ref(v_a_1147_);
lean_inc(v_a_1146_);
lean_inc_ref(v_a_1145_);
lean_inc(v_a_1144_);
lean_inc_ref(v_a_1143_);
lean_inc(v_a_1142_);
v___x_1218_ = lean_apply_10(v_fallback_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, lean_box(0));
return v___x_1218_;
}
else
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1225_; 
lean_dec_ref(v_fallback_1141_);
v___x_1219_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__1));
v___x_1220_ = l_Lean_Expr_constLevels_x21(v_f_1132_);
v___x_1221_ = l_Lean_mkConst(v___x_1219_, v___x_1220_);
lean_inc_ref(v_a_1136_);
v___x_1222_ = l_Lean_mkApp9(v___x_1221_, v_00_u03b1_1133_, v_c_1134_, v_inst_1135_, v_a_1136_, v_b_1137_, v_c_x27_1138_, v_h_1139_, v_inst_x27_1140_, v_proof_1206_);
v___x_1223_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1223_, 0, v_a_1136_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
lean_ctor_set_uint8(v___x_1223_, sizeof(void*)*2, v___x_1203_);
lean_ctor_set_uint8(v___x_1223_, sizeof(void*)*2 + 1, v_contextDependent_1207_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 0, v___x_1223_);
v___x_1225_ = v___x_1211_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v___x_1223_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
else
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
lean_dec_ref(v___x_1213_);
lean_dec_ref(v_fallback_1141_);
v___x_1227_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___closed__3));
v___x_1228_ = l_Lean_Expr_constLevels_x21(v_f_1132_);
v___x_1229_ = l_Lean_mkConst(v___x_1227_, v___x_1228_);
lean_inc_ref(v_b_1137_);
v___x_1230_ = l_Lean_mkApp9(v___x_1229_, v_00_u03b1_1133_, v_c_1134_, v_inst_1135_, v_a_1136_, v_b_1137_, v_c_x27_1138_, v_h_1139_, v_inst_x27_1140_, v_proof_1206_);
v___x_1231_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1231_, 0, v_b_1137_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
lean_ctor_set_uint8(v___x_1231_, sizeof(void*)*2, v___x_1203_);
lean_ctor_set_uint8(v___x_1231_, sizeof(void*)*2 + 1, v_contextDependent_1207_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 0, v___x_1231_);
v___x_1233_ = v___x_1211_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1231_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
else
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1243_; 
lean_dec_ref(v_proof_1206_);
lean_dec_ref(v_fallback_1141_);
lean_dec_ref(v_inst_x27_1140_);
lean_dec_ref(v_h_1139_);
lean_dec_ref(v_c_x27_1138_);
lean_dec_ref(v_b_1137_);
lean_dec_ref(v_a_1136_);
lean_dec_ref(v_inst_1135_);
lean_dec_ref(v_c_1134_);
lean_dec_ref(v_00_u03b1_1133_);
v_a_1236_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1238_ = v___x_1208_;
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v___x_1208_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1241_; 
if (v_isShared_1239_ == 0)
{
v___x_1241_ = v___x_1238_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_a_1236_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1200_);
lean_dec(v_a_1197_);
lean_dec_ref(v___x_1195_);
lean_dec_ref(v_fallback_1141_);
lean_dec_ref(v_inst_x27_1140_);
lean_dec_ref(v_h_1139_);
lean_dec_ref(v_c_x27_1138_);
lean_dec_ref(v_b_1137_);
lean_dec_ref(v_a_1136_);
lean_dec_ref(v_inst_1135_);
lean_dec_ref(v_c_1134_);
lean_dec_ref(v_00_u03b1_1133_);
return v___x_1201_;
}
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
lean_dec_ref(v___x_1195_);
lean_dec_ref(v_fallback_1141_);
lean_dec_ref(v_inst_x27_1140_);
lean_dec_ref(v_h_1139_);
lean_dec_ref(v_c_x27_1138_);
lean_dec_ref(v_b_1137_);
lean_dec_ref(v_a_1136_);
lean_dec_ref(v_inst_1135_);
lean_dec_ref(v_c_1134_);
lean_dec_ref(v_00_u03b1_1133_);
v_a_1258_ = lean_ctor_get(v___x_1196_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1196_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1196_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1263_; 
if (v_isShared_1261_ == 0)
{
v___x_1263_ = v___x_1260_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_a_1258_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
}
}
else
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
lean_dec_ref(v_fallback_1141_);
lean_dec_ref(v_inst_x27_1140_);
lean_dec_ref(v_h_1139_);
lean_dec_ref(v_c_x27_1138_);
lean_dec_ref(v_b_1137_);
lean_dec_ref(v_a_1136_);
lean_dec_ref(v_inst_1135_);
lean_dec_ref(v_c_1134_);
lean_dec_ref(v_00_u03b1_1133_);
v_a_1266_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1156_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1156_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___boxed(lean_object** _args){
lean_object* v_f_1274_ = _args[0];
lean_object* v_00_u03b1_1275_ = _args[1];
lean_object* v_c_1276_ = _args[2];
lean_object* v_inst_1277_ = _args[3];
lean_object* v_a_1278_ = _args[4];
lean_object* v_b_1279_ = _args[5];
lean_object* v_c_x27_1280_ = _args[6];
lean_object* v_h_1281_ = _args[7];
lean_object* v_inst_x27_1282_ = _args[8];
lean_object* v_fallback_1283_ = _args[9];
lean_object* v_a_1284_ = _args[10];
lean_object* v_a_1285_ = _args[11];
lean_object* v_a_1286_ = _args[12];
lean_object* v_a_1287_ = _args[13];
lean_object* v_a_1288_ = _args[14];
lean_object* v_a_1289_ = _args[15];
lean_object* v_a_1290_ = _args[16];
lean_object* v_a_1291_ = _args[17];
lean_object* v_a_1292_ = _args[18];
lean_object* v_a_1293_ = _args[19];
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr(v_f_1274_, v_00_u03b1_1275_, v_c_1276_, v_inst_1277_, v_a_1278_, v_b_1279_, v_c_x27_1280_, v_h_1281_, v_inst_x27_1282_, v_fallback_1283_, v_a_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_);
lean_dec(v_a_1292_);
lean_dec_ref(v_a_1291_);
lean_dec(v_a_1290_);
lean_dec_ref(v_a_1289_);
lean_dec(v_a_1288_);
lean_dec_ref(v_a_1287_);
lean_dec(v_a_1286_);
lean_dec_ref(v_a_1285_);
lean_dec(v_a_1284_);
lean_dec_ref(v_f_1274_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__0(lean_object* v___x_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v___x_1306_; 
v___x_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1295_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__0___boxed(lean_object* v___x_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__0(v___x_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1___redArg(lean_object* v_f_1319_, lean_object* v_a_u2081_1320_, lean_object* v_a_u2082_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_f_1319_, v_a_u2081_1320_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v_a_1330_; lean_object* v___x_1331_; 
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
lean_inc(v_a_1330_);
lean_dec_ref_known(v___x_1329_, 1);
v___x_1331_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_a_1330_, v_a_u2082_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
return v___x_1331_;
}
else
{
lean_dec_ref(v_a_u2082_1321_);
return v___x_1329_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_1332_, lean_object* v_a_u2081_1333_, lean_object* v_a_u2082_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1___redArg(v_f_1332_, v_a_u2081_1333_, v_a_u2082_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
lean_dec(v___y_1340_);
lean_dec_ref(v___y_1339_);
lean_dec(v___y_1338_);
lean_dec_ref(v___y_1337_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0(lean_object* v_f_1343_, lean_object* v_a_u2081_1344_, lean_object* v_a_u2082_1345_, lean_object* v_a_u2083_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1___redArg(v_f_1343_, v_a_u2081_1344_, v_a_u2082_1345_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; lean_object* v___x_1359_; 
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_a_1358_);
lean_dec_ref_known(v___x_1357_, 1);
v___x_1359_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_a_1358_, v_a_u2083_1346_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
return v___x_1359_;
}
else
{
lean_dec_ref(v_a_u2083_1346_);
return v___x_1357_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0___boxed(lean_object* v_f_1360_, lean_object* v_a_u2081_1361_, lean_object* v_a_u2082_1362_, lean_object* v_a_u2083_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0(v_f_1360_, v_a_u2081_1361_, v_a_u2082_1362_, v_a_u2083_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
lean_dec_ref(v___y_1367_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0(lean_object* v_f_1375_, lean_object* v_a_u2081_1376_, lean_object* v_a_u2082_1377_, lean_object* v_a_u2083_1378_, lean_object* v_a_u2084_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0(v_f_1375_, v_a_u2081_1376_, v_a_u2082_1377_, v_a_u2083_1378_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v___x_1392_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v___x_1390_, 1);
v___x_1392_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_a_1391_, v_a_u2084_1379_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
return v___x_1392_;
}
else
{
lean_dec_ref(v_a_u2084_1379_);
return v___x_1390_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0___boxed(lean_object* v_f_1393_, lean_object* v_a_u2081_1394_, lean_object* v_a_u2082_1395_, lean_object* v_a_u2083_1396_, lean_object* v_a_u2084_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0(v_f_1393_, v_a_u2081_1394_, v_a_u2082_1395_, v_a_u2083_1396_, v_a_u2084_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_);
lean_dec(v___y_1406_);
lean_dec_ref(v___y_1405_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2(lean_object* v___x_1414_, lean_object* v_e_x27_1415_, lean_object* v_snd_1416_, lean_object* v_arg_1417_, lean_object* v_arg_1418_, lean_object* v_e_1419_, lean_object* v_proof_1420_, uint8_t v___x_1421_, uint8_t v_contextDependent_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
lean_object* v___x_1433_; 
lean_inc_ref(v_snd_1416_);
lean_inc_ref(v_e_x27_1415_);
v___x_1433_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0(v___x_1414_, v_e_x27_1415_, v_snd_1416_, v_arg_1417_, v_arg_1418_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1445_; 
v_a_1434_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1436_ = v___x_1433_;
v_isShared_1437_ = v_isSharedCheck_1445_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1433_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1445_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1443_; 
v___x_1438_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___closed__1));
v___x_1439_ = l_Lean_Expr_replaceFn(v_e_1419_, v___x_1438_);
v___x_1440_ = l_Lean_mkApp3(v___x_1439_, v_e_x27_1415_, v_snd_1416_, v_proof_1420_);
v___x_1441_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1441_, 0, v_a_1434_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
lean_ctor_set_uint8(v___x_1441_, sizeof(void*)*2, v___x_1421_);
lean_ctor_set_uint8(v___x_1441_, sizeof(void*)*2 + 1, v_contextDependent_1422_);
if (v_isShared_1437_ == 0)
{
lean_ctor_set(v___x_1436_, 0, v___x_1441_);
v___x_1443_ = v___x_1436_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
lean_dec_ref(v_proof_1420_);
lean_dec_ref(v_e_1419_);
lean_dec_ref(v_snd_1416_);
lean_dec_ref(v_e_x27_1415_);
v_a_1446_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1433_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1433_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1446_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___boxed(lean_object** _args){
lean_object* v___x_1454_ = _args[0];
lean_object* v_e_x27_1455_ = _args[1];
lean_object* v_snd_1456_ = _args[2];
lean_object* v_arg_1457_ = _args[3];
lean_object* v_arg_1458_ = _args[4];
lean_object* v_e_1459_ = _args[5];
lean_object* v_proof_1460_ = _args[6];
lean_object* v___x_1461_ = _args[7];
lean_object* v_contextDependent_1462_ = _args[8];
lean_object* v___y_1463_ = _args[9];
lean_object* v___y_1464_ = _args[10];
lean_object* v___y_1465_ = _args[11];
lean_object* v___y_1466_ = _args[12];
lean_object* v___y_1467_ = _args[13];
lean_object* v___y_1468_ = _args[14];
lean_object* v___y_1469_ = _args[15];
lean_object* v___y_1470_ = _args[16];
lean_object* v___y_1471_ = _args[17];
lean_object* v___y_1472_ = _args[18];
_start:
{
uint8_t v___x_14788__boxed_1473_; uint8_t v_contextDependent_14789__boxed_1474_; lean_object* v_res_1475_; 
v___x_14788__boxed_1473_ = lean_unbox(v___x_1461_);
v_contextDependent_14789__boxed_1474_ = lean_unbox(v_contextDependent_1462_);
v_res_1475_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2(v___x_1454_, v_e_x27_1455_, v_snd_1456_, v_arg_1457_, v_arg_1458_, v_e_1459_, v_proof_1460_, v___x_14788__boxed_1473_, v_contextDependent_14789__boxed_1474_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_);
lean_dec(v___y_1471_);
lean_dec_ref(v___y_1470_);
lean_dec(v___y_1469_);
lean_dec_ref(v___y_1468_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec(v___y_1463_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1(uint8_t v___x_1489_, lean_object* v_e_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v___x_1504_; uint8_t v___x_1505_; 
lean_inc_ref(v_e_1490_);
v___x_1504_ = l_Lean_Expr_cleanupAnnotations(v_e_1490_);
v___x_1505_ = l_Lean_Expr_isApp(v___x_1504_);
if (v___x_1505_ == 0)
{
lean_dec_ref(v___x_1504_);
lean_dec_ref(v_e_1490_);
goto v___jp_1501_;
}
else
{
lean_object* v_arg_1506_; lean_object* v___x_1507_; uint8_t v___x_1508_; 
v_arg_1506_ = lean_ctor_get(v___x_1504_, 1);
lean_inc_ref(v_arg_1506_);
v___x_1507_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1504_);
v___x_1508_ = l_Lean_Expr_isApp(v___x_1507_);
if (v___x_1508_ == 0)
{
lean_dec_ref(v___x_1507_);
lean_dec_ref(v_arg_1506_);
lean_dec_ref(v_e_1490_);
goto v___jp_1501_;
}
else
{
lean_object* v_arg_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; 
v_arg_1509_ = lean_ctor_get(v___x_1507_, 1);
lean_inc_ref(v_arg_1509_);
v___x_1510_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1507_);
v___x_1511_ = l_Lean_Expr_isApp(v___x_1510_);
if (v___x_1511_ == 0)
{
lean_dec_ref(v___x_1510_);
lean_dec_ref(v_arg_1509_);
lean_dec_ref(v_arg_1506_);
lean_dec_ref(v_e_1490_);
goto v___jp_1501_;
}
else
{
lean_object* v_arg_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; 
v_arg_1512_ = lean_ctor_get(v___x_1510_, 1);
lean_inc_ref(v_arg_1512_);
v___x_1513_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1510_);
v___x_1514_ = l_Lean_Expr_isApp(v___x_1513_);
if (v___x_1514_ == 0)
{
lean_dec_ref(v___x_1513_);
lean_dec_ref(v_arg_1512_);
lean_dec_ref(v_arg_1509_);
lean_dec_ref(v_arg_1506_);
lean_dec_ref(v_e_1490_);
goto v___jp_1501_;
}
else
{
lean_object* v_arg_1515_; lean_object* v___x_1516_; uint8_t v___x_1517_; 
v_arg_1515_ = lean_ctor_get(v___x_1513_, 1);
lean_inc_ref(v_arg_1515_);
v___x_1516_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1513_);
v___x_1517_ = l_Lean_Expr_isApp(v___x_1516_);
if (v___x_1517_ == 0)
{
lean_dec_ref(v___x_1516_);
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
lean_dec_ref(v_arg_1509_);
lean_dec_ref(v_arg_1506_);
lean_dec_ref(v_e_1490_);
goto v___jp_1501_;
}
else
{
lean_object* v_arg_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; uint8_t v___x_1521_; 
v_arg_1518_ = lean_ctor_get(v___x_1516_, 1);
lean_inc_ref(v_arg_1518_);
v___x_1519_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1516_);
v___x_1520_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__1));
v___x_1521_ = l_Lean_Expr_isConstOf(v___x_1519_, v___x_1520_);
if (v___x_1521_ == 0)
{
lean_dec_ref(v___x_1519_);
lean_dec_ref(v_arg_1518_);
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
lean_dec_ref(v_arg_1509_);
lean_dec_ref(v_arg_1506_);
lean_dec_ref(v_e_1490_);
goto v___jp_1501_;
}
else
{
lean_object* v___x_1522_; 
lean_inc(v___y_1499_);
lean_inc_ref(v___y_1498_);
lean_inc(v___y_1497_);
lean_inc_ref(v___y_1496_);
lean_inc(v___y_1495_);
lean_inc_ref(v___y_1494_);
lean_inc(v___y_1493_);
lean_inc_ref(v___y_1492_);
lean_inc(v___y_1491_);
lean_inc_ref(v_arg_1515_);
v___x_1522_ = lean_sym_simp(v_arg_1515_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; 
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_a_1523_);
lean_dec_ref_known(v___x_1522_, 1);
if (lean_obj_tag(v_a_1523_) == 0)
{
uint8_t v_contextDependent_1524_; lean_object* v___x_1525_; 
lean_dec_ref(v_e_1490_);
v_contextDependent_1524_ = lean_ctor_get_uint8(v_a_1523_, 1);
lean_dec_ref_known(v_a_1523_, 0);
v___x_1525_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_1515_, v___y_1494_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1566_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1528_ = v___x_1525_;
v_isShared_1529_ = v_isSharedCheck_1566_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v___x_1525_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1566_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
uint8_t v___x_1530_; 
v___x_1530_ = lean_unbox(v_a_1526_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; 
lean_del_object(v___x_1528_);
v___x_1531_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_arg_1515_, v___y_1494_);
if (lean_obj_tag(v___x_1531_) == 0)
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1549_; 
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1549_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1534_ = v___x_1531_;
v_isShared_1535_ = v_isSharedCheck_1549_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1549_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
uint8_t v___x_1536_; 
v___x_1536_ = lean_unbox(v_a_1532_);
lean_dec(v_a_1532_);
if (v___x_1536_ == 0)
{
lean_object* v___x_1537_; lean_object* v___f_1538_; lean_object* v___x_1539_; 
lean_del_object(v___x_1534_);
lean_dec(v_a_1526_);
v___x_1537_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1521_, v_contextDependent_1524_);
v___f_1538_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1538_, 0, v___x_1537_);
v___x_1539_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable(v___x_1519_, v_arg_1518_, v_arg_1515_, v_arg_1512_, v_arg_1509_, v_arg_1506_, v___f_1538_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec_ref(v___x_1519_);
return v___x_1539_;
}
else
{
lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; uint8_t v___x_1545_; lean_object* v___x_1547_; 
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
v___x_1540_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__2));
v___x_1541_ = l_Lean_Expr_constLevels_x21(v___x_1519_);
lean_dec_ref(v___x_1519_);
v___x_1542_ = l_Lean_mkConst(v___x_1540_, v___x_1541_);
lean_inc_ref(v_arg_1506_);
v___x_1543_ = l_Lean_mkApp3(v___x_1542_, v_arg_1518_, v_arg_1509_, v_arg_1506_);
v___x_1544_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1544_, 0, v_arg_1506_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
v___x_1545_ = lean_unbox(v_a_1526_);
lean_dec(v_a_1526_);
lean_ctor_set_uint8(v___x_1544_, sizeof(void*)*2, v___x_1545_);
lean_ctor_set_uint8(v___x_1544_, sizeof(void*)*2 + 1, v_contextDependent_1524_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 0, v___x_1544_);
v___x_1547_ = v___x_1534_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v___x_1544_);
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
lean_dec(v_a_1526_);
lean_dec_ref(v___x_1519_);
lean_dec_ref(v_arg_1518_);
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
lean_dec_ref(v_arg_1509_);
lean_dec_ref(v_arg_1506_);
v_a_1550_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1552_ = v___x_1531_;
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_a_1550_);
lean_dec(v___x_1531_);
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
else
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1564_; 
lean_dec(v_a_1526_);
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
v___x_1558_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__3));
v___x_1559_ = l_Lean_Expr_constLevels_x21(v___x_1519_);
lean_dec_ref(v___x_1519_);
v___x_1560_ = l_Lean_mkConst(v___x_1558_, v___x_1559_);
lean_inc_ref(v_arg_1509_);
v___x_1561_ = l_Lean_mkApp3(v___x_1560_, v_arg_1518_, v_arg_1509_, v_arg_1506_);
v___x_1562_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1562_, 0, v_arg_1509_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
lean_ctor_set_uint8(v___x_1562_, sizeof(void*)*2, v___x_1489_);
lean_ctor_set_uint8(v___x_1562_, sizeof(void*)*2 + 1, v_contextDependent_1524_);
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 0, v___x_1562_);
v___x_1564_ = v___x_1528_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v___x_1562_);
v___x_1564_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
return v___x_1564_;
}
}
}
}
else
{
lean_object* v_a_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1574_; 
lean_dec_ref(v___x_1519_);
lean_dec_ref(v_arg_1518_);
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
lean_dec_ref(v_arg_1509_);
lean_dec_ref(v_arg_1506_);
v_a_1567_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1569_ = v___x_1525_;
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_a_1567_);
lean_dec(v___x_1525_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1572_; 
if (v_isShared_1570_ == 0)
{
v___x_1572_ = v___x_1569_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_a_1567_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
}
else
{
lean_object* v_e_x27_1575_; lean_object* v_proof_1576_; uint8_t v_contextDependent_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1655_; 
v_e_x27_1575_ = lean_ctor_get(v_a_1523_, 0);
v_proof_1576_ = lean_ctor_get(v_a_1523_, 1);
v_contextDependent_1577_ = lean_ctor_get_uint8(v_a_1523_, sizeof(void*)*2 + 1);
v_isSharedCheck_1655_ = !lean_is_exclusive(v_a_1523_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1579_ = v_a_1523_;
v_isShared_1580_ = v_isSharedCheck_1655_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_proof_1576_);
lean_inc(v_e_x27_1575_);
lean_dec(v_a_1523_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1655_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1581_; 
v___x_1581_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_1575_, v___y_1494_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1646_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1584_ = v___x_1581_;
v_isShared_1585_ = v_isSharedCheck_1646_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1581_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1646_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
uint8_t v___x_1586_; 
v___x_1586_ = lean_unbox(v_a_1582_);
if (v___x_1586_ == 0)
{
lean_object* v___x_1587_; 
lean_del_object(v___x_1584_);
v___x_1587_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_1575_, v___y_1494_);
lean_dec_ref(v_e_x27_1575_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1628_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1590_ = v___x_1587_;
v_isShared_1591_ = v_isSharedCheck_1628_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_a_1588_);
lean_dec(v___x_1587_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1628_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
uint8_t v___x_1592_; 
v___x_1592_ = lean_unbox(v_a_1588_);
lean_dec(v_a_1588_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; 
lean_del_object(v___x_1590_);
lean_dec(v_a_1582_);
lean_del_object(v___x_1579_);
lean_dec_ref(v_proof_1576_);
lean_inc_ref(v_arg_1512_);
v___x_1593_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance(v_arg_1512_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; lean_object* v_fst_1595_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v___x_1593_, 1);
v_fst_1595_ = lean_ctor_get(v_a_1594_, 0);
lean_inc(v_fst_1595_);
if (lean_obj_tag(v_fst_1595_) == 0)
{
uint8_t v_contextDependent_1596_; lean_object* v___x_1597_; lean_object* v___f_1598_; lean_object* v___x_1599_; 
lean_dec(v_a_1594_);
lean_dec_ref(v_e_1490_);
v_contextDependent_1596_ = lean_ctor_get_uint8(v_fst_1595_, 1);
lean_dec_ref_known(v_fst_1595_, 0);
v___x_1597_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1521_, v_contextDependent_1596_);
v___f_1598_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1598_, 0, v___x_1597_);
v___x_1599_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable(v___x_1519_, v_arg_1518_, v_arg_1515_, v_arg_1512_, v_arg_1509_, v_arg_1506_, v___f_1598_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec_ref(v___x_1519_);
return v___x_1599_;
}
else
{
lean_object* v_snd_1600_; lean_object* v_e_x27_1601_; lean_object* v_proof_1602_; uint8_t v_contextDependent_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___f_1608_; lean_object* v___x_1609_; 
v_snd_1600_ = lean_ctor_get(v_a_1594_, 1);
lean_inc_n(v_snd_1600_, 2);
lean_dec(v_a_1594_);
v_e_x27_1601_ = lean_ctor_get(v_fst_1595_, 0);
lean_inc_ref_n(v_e_x27_1601_, 2);
v_proof_1602_ = lean_ctor_get(v_fst_1595_, 1);
lean_inc_ref_n(v_proof_1602_, 2);
v_contextDependent_1603_ = lean_ctor_get_uint8(v_fst_1595_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_fst_1595_, 2);
v___x_1604_ = lean_unsigned_to_nat(4u);
v___x_1605_ = l_Lean_Expr_getBoundedAppFn(v___x_1604_, v_e_1490_);
v___x_1606_ = lean_box(v___x_1521_);
v___x_1607_ = lean_box(v_contextDependent_1603_);
lean_inc_ref(v_arg_1506_);
lean_inc_ref(v_arg_1509_);
v___f_1608_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__2___boxed), 19, 9);
lean_closure_set(v___f_1608_, 0, v___x_1605_);
lean_closure_set(v___f_1608_, 1, v_e_x27_1601_);
lean_closure_set(v___f_1608_, 2, v_snd_1600_);
lean_closure_set(v___f_1608_, 3, v_arg_1509_);
lean_closure_set(v___f_1608_, 4, v_arg_1506_);
lean_closure_set(v___f_1608_, 5, v_e_1490_);
lean_closure_set(v___f_1608_, 6, v_proof_1602_);
lean_closure_set(v___f_1608_, 7, v___x_1606_);
lean_closure_set(v___f_1608_, 8, v___x_1607_);
v___x_1609_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr(v___x_1519_, v_arg_1518_, v_arg_1515_, v_arg_1512_, v_arg_1509_, v_arg_1506_, v_e_x27_1601_, v_proof_1602_, v_snd_1600_, v___f_1608_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec_ref(v___x_1519_);
return v___x_1609_;
}
}
else
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
lean_dec_ref(v___x_1519_);
lean_dec_ref(v_arg_1518_);
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
lean_dec_ref(v_arg_1509_);
lean_dec_ref(v_arg_1506_);
lean_dec_ref(v_e_1490_);
v_a_1610_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1612_ = v___x_1593_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1593_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1615_; 
if (v_isShared_1613_ == 0)
{
v___x_1615_ = v___x_1612_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1610_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
else
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1622_; 
lean_dec_ref(v___x_1519_);
lean_dec_ref(v_arg_1518_);
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
lean_dec_ref(v_arg_1509_);
v___x_1618_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__5));
v___x_1619_ = l_Lean_Expr_replaceFn(v_e_1490_, v___x_1618_);
v___x_1620_ = l_Lean_Expr_app___override(v___x_1619_, v_proof_1576_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 1, v___x_1620_);
lean_ctor_set(v___x_1579_, 0, v_arg_1506_);
v___x_1622_ = v___x_1579_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_arg_1506_);
lean_ctor_set(v_reuseFailAlloc_1627_, 1, v___x_1620_);
v___x_1622_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
uint8_t v___x_1623_; lean_object* v___x_1625_; 
v___x_1623_ = lean_unbox(v_a_1582_);
lean_dec(v_a_1582_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*2, v___x_1623_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*2 + 1, v_contextDependent_1577_);
if (v_isShared_1591_ == 0)
{
lean_ctor_set(v___x_1590_, 0, v___x_1622_);
v___x_1625_ = v___x_1590_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1622_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
}
}
else
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
lean_dec(v_a_1582_);
lean_del_object(v___x_1579_);
lean_dec_ref(v_proof_1576_);
lean_dec_ref(v___x_1519_);
lean_dec_ref(v_arg_1518_);
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
lean_dec_ref(v_arg_1509_);
lean_dec_ref(v_arg_1506_);
lean_dec_ref(v_e_1490_);
v_a_1629_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1631_ = v___x_1587_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v___x_1587_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1629_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
}
else
{
lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1641_; 
lean_dec(v_a_1582_);
lean_dec_ref(v_e_x27_1575_);
lean_dec_ref(v___x_1519_);
lean_dec_ref(v_arg_1518_);
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
lean_dec_ref(v_arg_1506_);
v___x_1637_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___closed__7));
v___x_1638_ = l_Lean_Expr_replaceFn(v_e_1490_, v___x_1637_);
v___x_1639_ = l_Lean_Expr_app___override(v___x_1638_, v_proof_1576_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 1, v___x_1639_);
lean_ctor_set(v___x_1579_, 0, v_arg_1509_);
v___x_1641_ = v___x_1579_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_arg_1509_);
lean_ctor_set(v_reuseFailAlloc_1645_, 1, v___x_1639_);
lean_ctor_set_uint8(v_reuseFailAlloc_1645_, sizeof(void*)*2 + 1, v_contextDependent_1577_);
v___x_1641_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
lean_object* v___x_1643_; 
lean_ctor_set_uint8(v___x_1641_, sizeof(void*)*2, v___x_1489_);
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 0, v___x_1641_);
v___x_1643_ = v___x_1584_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
lean_del_object(v___x_1579_);
lean_dec_ref(v_proof_1576_);
lean_dec_ref(v_e_x27_1575_);
lean_dec_ref(v___x_1519_);
lean_dec_ref(v_arg_1518_);
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
lean_dec_ref(v_arg_1509_);
lean_dec_ref(v_arg_1506_);
lean_dec_ref(v_e_1490_);
v_a_1647_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1649_ = v___x_1581_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1581_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1650_ == 0)
{
v___x_1652_ = v___x_1649_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1647_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_1519_);
lean_dec_ref(v_arg_1518_);
lean_dec_ref(v_arg_1515_);
lean_dec_ref(v_arg_1512_);
lean_dec_ref(v_arg_1509_);
lean_dec_ref(v_arg_1506_);
lean_dec_ref(v_e_1490_);
return v___x_1522_;
}
}
}
}
}
}
}
v___jp_1501_:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1502_, 0, v___x_1489_);
lean_ctor_set_uint8(v___x_1502_, 1, v___x_1489_);
v___x_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1502_);
return v___x_1503_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___boxed(lean_object* v___x_1656_, lean_object* v_e_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
uint8_t v___x_14911__boxed_1668_; lean_object* v_res_1669_; 
v___x_14911__boxed_1668_ = lean_unbox(v___x_1656_);
v_res_1669_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1(v___x_14911__boxed_1668_, v_e_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
lean_dec(v___y_1666_);
lean_dec_ref(v___y_1665_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v___y_1658_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv(lean_object* v_e_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_){
_start:
{
lean_object* v_numArgs_1681_; lean_object* v___x_1682_; uint8_t v___x_1683_; 
v_numArgs_1681_ = l_Lean_Expr_getAppNumArgs(v_e_1670_);
v___x_1682_ = lean_unsigned_to_nat(5u);
v___x_1683_ = lean_nat_dec_lt(v_numArgs_1681_, v___x_1682_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1684_; lean_object* v___f_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1684_ = lean_box(v___x_1683_);
v___f_1685_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__1___boxed), 12, 1);
lean_closure_set(v___f_1685_, 0, v___x_1684_);
v___x_1686_ = lean_nat_sub(v_numArgs_1681_, v___x_1682_);
lean_dec(v_numArgs_1681_);
v___x_1687_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_1670_, v___x_1686_, v___f_1685_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_);
lean_dec(v___x_1686_);
return v___x_1687_;
}
else
{
uint8_t v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
lean_dec(v_numArgs_1681_);
lean_dec_ref(v_e_1670_);
v___x_1688_ = 0;
v___x_1689_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1689_, 0, v___x_1683_);
lean_ctor_set_uint8(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1689_);
return v___x_1690_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___boxed(lean_object* v_e_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv(v_e_1691_, v_a_1692_, v_a_1693_, v_a_1694_, v_a_1695_, v_a_1696_, v_a_1697_, v_a_1698_, v_a_1699_, v_a_1700_);
lean_dec(v_a_1700_);
lean_dec_ref(v_a_1699_);
lean_dec(v_a_1698_);
lean_dec_ref(v_a_1697_);
lean_dec(v_a_1696_);
lean_dec_ref(v_a_1695_);
lean_dec(v_a_1694_);
lean_dec_ref(v_a_1693_);
lean_dec(v_a_1692_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1(lean_object* v_f_1703_, lean_object* v_a_u2081_1704_, lean_object* v_a_u2082_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v___x_1716_; 
v___x_1716_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1___redArg(v_f_1703_, v_a_u2081_1704_, v_a_u2082_1705_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1___boxed(lean_object* v_f_1717_, lean_object* v_a_u2081_1718_, lean_object* v_a_u2082_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1(v_f_1717_, v_a_u2081_1718_, v_a_u2082_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
lean_dec(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec(v___y_1720_);
return v_res_1730_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1731_ = lean_box(0);
v___x_1732_ = l_unsafeCast___redArg(v___x_1731_);
return v___x_1732_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1734_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_));
v___x_1735_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1736_ = l_Lean_Name_str___override(v___x_1735_, v___x_1734_);
return v___x_1736_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1737_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7));
v___x_1738_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1739_ = l_Lean_Name_str___override(v___x_1738_, v___x_1737_);
return v___x_1739_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1741_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_));
v___x_1742_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1743_ = l_Lean_Name_str___override(v___x_1742_, v___x_1741_);
return v___x_1743_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1745_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_));
v___x_1746_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1747_ = l_Lean_Name_str___override(v___x_1746_, v___x_1745_);
return v___x_1747_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__9_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1749_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_));
v___x_1750_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1751_ = l_Lean_Name_str___override(v___x_1750_, v___x_1749_);
return v___x_1751_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__11_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1753_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__10_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_));
v___x_1754_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__9_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__9_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__9_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1755_ = l_Lean_Name_str___override(v___x_1754_, v___x_1753_);
return v___x_1755_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__12_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1756_ = lean_unsigned_to_nat(0u);
v___x_1757_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__11_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__11_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__11_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1758_ = l_Lean_Name_num___override(v___x_1757_, v___x_1756_);
return v___x_1758_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__13_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1759_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__7));
v___x_1760_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__12_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__12_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__12_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1761_ = l_Lean_Name_str___override(v___x_1760_, v___x_1759_);
return v___x_1761_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1762_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_));
v___x_1763_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__13_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__13_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__13_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1764_ = l_Lean_Name_str___override(v___x_1763_, v___x_1762_);
return v___x_1764_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__15_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1765_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__8));
v___x_1766_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1767_ = l_Lean_Name_str___override(v___x_1766_, v___x_1765_);
return v___x_1767_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_));
v___x_1770_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__15_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__15_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__15_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1771_ = l_Lean_Name_str___override(v___x_1770_, v___x_1769_);
return v___x_1771_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1773_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__18_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_));
v___x_1774_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1775_ = l_Lean_Name_str___override(v___x_1774_, v___x_1773_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1790_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1791_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__21_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_));
v___x_1792_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___boxed), 11, 0);
v___x_1793_ = l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(v___x_1790_, v___x_1791_, v___x_1792_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17____boxed(lean_object* v_a_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_();
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_19_(){
_start:
{
lean_object* v___x_1797_; uint8_t v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1797_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_1798_ = 0;
v___x_1799_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___boxed), 11, 0);
v___x_1800_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(v___x_1797_, v___x_1798_, v___x_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_19____boxed(lean_object* v_a_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_19_();
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable(lean_object* v_f_1813_, lean_object* v_00_u03b1_1814_, lean_object* v_c_1815_, lean_object* v_inst_1816_, lean_object* v_a_1817_, lean_object* v_b_1818_, lean_object* v_instToMatch_1819_, lean_object* v_fallback_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_){
_start:
{
lean_object* v___x_1831_; 
v___x_1831_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_instToMatch_1819_, v_a_1827_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1832_; lean_object* v___x_1833_; uint8_t v___x_1834_; 
v_a_1832_ = lean_ctor_get(v___x_1831_, 0);
lean_inc(v_a_1832_);
lean_dec_ref_known(v___x_1831_, 1);
v___x_1833_ = l_Lean_Expr_cleanupAnnotations(v_a_1832_);
v___x_1834_ = l_Lean_Expr_isApp(v___x_1833_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; 
lean_dec_ref(v___x_1833_);
lean_dec_ref(v_b_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_inst_1816_);
lean_dec_ref(v_c_1815_);
lean_dec_ref(v_00_u03b1_1814_);
lean_inc(v_a_1829_);
lean_inc_ref(v_a_1828_);
lean_inc(v_a_1827_);
lean_inc_ref(v_a_1826_);
lean_inc(v_a_1825_);
lean_inc_ref(v_a_1824_);
lean_inc(v_a_1823_);
lean_inc_ref(v_a_1822_);
lean_inc(v_a_1821_);
v___x_1835_ = lean_apply_10(v_fallback_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, lean_box(0));
return v___x_1835_;
}
else
{
lean_object* v_arg_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; 
v_arg_1836_ = lean_ctor_get(v___x_1833_, 1);
lean_inc_ref(v_arg_1836_);
v___x_1837_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1833_);
v___x_1838_ = l_Lean_Expr_isApp(v___x_1837_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; 
lean_dec_ref(v___x_1837_);
lean_dec_ref(v_arg_1836_);
lean_dec_ref(v_b_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_inst_1816_);
lean_dec_ref(v_c_1815_);
lean_dec_ref(v_00_u03b1_1814_);
lean_inc(v_a_1829_);
lean_inc_ref(v_a_1828_);
lean_inc(v_a_1827_);
lean_inc_ref(v_a_1826_);
lean_inc(v_a_1825_);
lean_inc_ref(v_a_1824_);
lean_inc(v_a_1823_);
lean_inc_ref(v_a_1822_);
lean_inc(v_a_1821_);
v___x_1839_ = lean_apply_10(v_fallback_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, lean_box(0));
return v___x_1839_;
}
else
{
lean_object* v_arg_1840_; lean_object* v___x_1841_; uint8_t v___x_1842_; 
v_arg_1840_ = lean_ctor_get(v___x_1837_, 1);
lean_inc_ref(v_arg_1840_);
v___x_1841_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1837_);
v___x_1842_ = l_Lean_Expr_isApp(v___x_1841_);
if (v___x_1842_ == 0)
{
lean_object* v___x_1843_; 
lean_dec_ref(v___x_1841_);
lean_dec_ref(v_arg_1840_);
lean_dec_ref(v_arg_1836_);
lean_dec_ref(v_b_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_inst_1816_);
lean_dec_ref(v_c_1815_);
lean_dec_ref(v_00_u03b1_1814_);
lean_inc(v_a_1829_);
lean_inc_ref(v_a_1828_);
lean_inc(v_a_1827_);
lean_inc_ref(v_a_1826_);
lean_inc(v_a_1825_);
lean_inc_ref(v_a_1824_);
lean_inc(v_a_1823_);
lean_inc_ref(v_a_1822_);
lean_inc(v_a_1821_);
v___x_1843_ = lean_apply_10(v_fallback_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, lean_box(0));
return v___x_1843_;
}
else
{
lean_object* v___x_1844_; lean_object* v___x_1845_; uint8_t v___x_1846_; 
v___x_1844_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1841_);
v___x_1845_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__1));
v___x_1846_ = l_Lean_Expr_isConstOf(v___x_1844_, v___x_1845_);
lean_dec_ref(v___x_1844_);
if (v___x_1846_ == 0)
{
lean_object* v___x_1847_; 
lean_dec_ref(v_arg_1840_);
lean_dec_ref(v_arg_1836_);
lean_dec_ref(v_b_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_inst_1816_);
lean_dec_ref(v_c_1815_);
lean_dec_ref(v_00_u03b1_1814_);
lean_inc(v_a_1829_);
lean_inc_ref(v_a_1828_);
lean_inc(v_a_1827_);
lean_inc_ref(v_a_1826_);
lean_inc(v_a_1825_);
lean_inc_ref(v_a_1824_);
lean_inc(v_a_1823_);
lean_inc_ref(v_a_1822_);
lean_inc(v_a_1821_);
v___x_1847_ = lean_apply_10(v_fallback_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, lean_box(0));
return v___x_1847_;
}
else
{
lean_object* v___x_1848_; 
v___x_1848_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1840_, v_a_1827_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v_a_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; uint8_t v___x_1852_; 
v_a_1849_ = lean_ctor_get(v___x_1848_, 0);
lean_inc(v_a_1849_);
lean_dec_ref_known(v___x_1848_, 1);
v___x_1850_ = l_Lean_Expr_cleanupAnnotations(v_a_1849_);
v___x_1851_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4));
v___x_1852_ = l_Lean_Expr_isConstOf(v___x_1850_, v___x_1851_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1853_; uint8_t v___x_1854_; 
v___x_1853_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6));
v___x_1854_ = l_Lean_Expr_isConstOf(v___x_1850_, v___x_1853_);
lean_dec_ref(v___x_1850_);
if (v___x_1854_ == 0)
{
lean_object* v___x_1855_; 
lean_dec_ref(v_arg_1836_);
lean_dec_ref(v_b_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_inst_1816_);
lean_dec_ref(v_c_1815_);
lean_dec_ref(v_00_u03b1_1814_);
lean_inc(v_a_1829_);
lean_inc_ref(v_a_1828_);
lean_inc(v_a_1827_);
lean_inc_ref(v_a_1826_);
lean_inc(v_a_1825_);
lean_inc_ref(v_a_1824_);
lean_inc(v_a_1823_);
lean_inc_ref(v_a_1822_);
lean_inc(v_a_1821_);
v___x_1855_ = lean_apply_10(v_fallback_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, lean_box(0));
return v___x_1855_;
}
else
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
lean_dec_ref(v_fallback_1820_);
v___x_1856_ = lean_unsigned_to_nat(1u);
v___x_1857_ = lean_mk_empty_array_with_capacity(v___x_1856_);
lean_inc_ref(v_arg_1836_);
v___x_1858_ = lean_array_push(v___x_1857_, v_arg_1836_);
lean_inc_ref(v_a_1817_);
v___x_1859_ = l_Lean_Expr_betaRev(v_a_1817_, v___x_1858_, v___x_1852_, v___x_1852_);
lean_dec_ref(v___x_1858_);
v___x_1860_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1859_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1873_; 
v_a_1861_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1863_ = v___x_1860_;
v_isShared_1864_ = v_isSharedCheck_1873_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1860_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1873_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1871_; 
v___x_1865_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1));
v___x_1866_ = l_Lean_Expr_constLevels_x21(v_f_1813_);
v___x_1867_ = l_Lean_mkConst(v___x_1865_, v___x_1866_);
v___x_1868_ = l_Lean_mkApp6(v___x_1867_, v_00_u03b1_1814_, v_c_1815_, v_inst_1816_, v_a_1817_, v_b_1818_, v_arg_1836_);
v___x_1869_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1869_, 0, v_a_1861_);
lean_ctor_set(v___x_1869_, 1, v___x_1868_);
lean_ctor_set_uint8(v___x_1869_, sizeof(void*)*2, v___x_1852_);
lean_ctor_set_uint8(v___x_1869_, sizeof(void*)*2 + 1, v___x_1852_);
if (v_isShared_1864_ == 0)
{
lean_ctor_set(v___x_1863_, 0, v___x_1869_);
v___x_1871_ = v___x_1863_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v___x_1869_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
else
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1881_; 
lean_dec_ref(v_arg_1836_);
lean_dec_ref(v_b_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_inst_1816_);
lean_dec_ref(v_c_1815_);
lean_dec_ref(v_00_u03b1_1814_);
v_a_1874_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1876_ = v___x_1860_;
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1860_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_a_1874_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
}
}
else
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; uint8_t v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
lean_dec_ref(v___x_1850_);
lean_dec_ref(v_fallback_1820_);
v___x_1882_ = lean_unsigned_to_nat(1u);
v___x_1883_ = lean_mk_empty_array_with_capacity(v___x_1882_);
lean_inc_ref(v_arg_1836_);
v___x_1884_ = lean_array_push(v___x_1883_, v_arg_1836_);
v___x_1885_ = 0;
lean_inc_ref(v_b_1818_);
v___x_1886_ = l_Lean_Expr_betaRev(v_b_1818_, v___x_1884_, v___x_1885_, v___x_1885_);
lean_dec_ref(v___x_1884_);
v___x_1887_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1886_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1900_; 
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1890_ = v___x_1887_;
v_isShared_1891_ = v_isSharedCheck_1900_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1887_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1900_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1898_; 
v___x_1892_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3));
v___x_1893_ = l_Lean_Expr_constLevels_x21(v_f_1813_);
v___x_1894_ = l_Lean_mkConst(v___x_1892_, v___x_1893_);
v___x_1895_ = l_Lean_mkApp6(v___x_1894_, v_00_u03b1_1814_, v_c_1815_, v_inst_1816_, v_a_1817_, v_b_1818_, v_arg_1836_);
v___x_1896_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1896_, 0, v_a_1888_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
lean_ctor_set_uint8(v___x_1896_, sizeof(void*)*2, v___x_1885_);
lean_ctor_set_uint8(v___x_1896_, sizeof(void*)*2 + 1, v___x_1885_);
if (v_isShared_1891_ == 0)
{
lean_ctor_set(v___x_1890_, 0, v___x_1896_);
v___x_1898_ = v___x_1890_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1896_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
lean_dec_ref(v_arg_1836_);
lean_dec_ref(v_b_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_inst_1816_);
lean_dec_ref(v_c_1815_);
lean_dec_ref(v_00_u03b1_1814_);
v_a_1901_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1887_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1887_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
lean_dec_ref(v_arg_1836_);
lean_dec_ref(v_fallback_1820_);
lean_dec_ref(v_b_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_inst_1816_);
lean_dec_ref(v_c_1815_);
lean_dec_ref(v_00_u03b1_1814_);
v_a_1909_ = lean_ctor_get(v___x_1848_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1848_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1848_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
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
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1924_; 
lean_dec_ref(v_fallback_1820_);
lean_dec_ref(v_b_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_inst_1816_);
lean_dec_ref(v_c_1815_);
lean_dec_ref(v_00_u03b1_1814_);
v_a_1917_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1919_ = v___x_1831_;
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1831_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1917_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___boxed(lean_object** _args){
lean_object* v_f_1925_ = _args[0];
lean_object* v_00_u03b1_1926_ = _args[1];
lean_object* v_c_1927_ = _args[2];
lean_object* v_inst_1928_ = _args[3];
lean_object* v_a_1929_ = _args[4];
lean_object* v_b_1930_ = _args[5];
lean_object* v_instToMatch_1931_ = _args[6];
lean_object* v_fallback_1932_ = _args[7];
lean_object* v_a_1933_ = _args[8];
lean_object* v_a_1934_ = _args[9];
lean_object* v_a_1935_ = _args[10];
lean_object* v_a_1936_ = _args[11];
lean_object* v_a_1937_ = _args[12];
lean_object* v_a_1938_ = _args[13];
lean_object* v_a_1939_ = _args[14];
lean_object* v_a_1940_ = _args[15];
lean_object* v_a_1941_ = _args[16];
lean_object* v_a_1942_ = _args[17];
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable(v_f_1925_, v_00_u03b1_1926_, v_c_1927_, v_inst_1928_, v_a_1929_, v_b_1930_, v_instToMatch_1931_, v_fallback_1932_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_);
lean_dec(v_a_1941_);
lean_dec_ref(v_a_1940_);
lean_dec(v_a_1939_);
lean_dec_ref(v_a_1938_);
lean_dec(v_a_1937_);
lean_dec_ref(v_a_1936_);
lean_dec(v_a_1935_);
lean_dec_ref(v_a_1934_);
lean_dec(v_a_1933_);
lean_dec_ref(v_f_1925_);
return v_res_1943_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2(void){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1948_ = lean_box(0);
v___x_1949_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__1));
v___x_1950_ = l_Lean_mkConst(v___x_1949_, v___x_1948_);
return v___x_1950_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7(void){
_start:
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1960_ = lean_box(0);
v___x_1961_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__6));
v___x_1962_ = l_Lean_mkConst(v___x_1961_, v___x_1960_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr(lean_object* v_f_1968_, lean_object* v_00_u03b1_1969_, lean_object* v_c_1970_, lean_object* v_inst_1971_, lean_object* v_a_1972_, lean_object* v_b_1973_, lean_object* v_c_x27_1974_, lean_object* v_h_1975_, lean_object* v_inst_x27_1976_, lean_object* v_fallback_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_inst_x27_1976_, v_a_1984_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; lean_object* v___x_1990_; uint8_t v___x_1991_; 
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___x_1988_, 1);
v___x_1990_ = l_Lean_Expr_cleanupAnnotations(v_a_1989_);
v___x_1991_ = l_Lean_Expr_isApp(v___x_1990_);
if (v___x_1991_ == 0)
{
lean_object* v___x_1992_; 
lean_dec_ref(v___x_1990_);
lean_dec_ref(v_h_1975_);
lean_dec_ref(v_c_x27_1974_);
lean_dec_ref(v_b_1973_);
lean_dec_ref(v_a_1972_);
lean_dec_ref(v_inst_1971_);
lean_dec_ref(v_c_1970_);
lean_dec_ref(v_00_u03b1_1969_);
lean_inc(v_a_1986_);
lean_inc_ref(v_a_1985_);
lean_inc(v_a_1984_);
lean_inc_ref(v_a_1983_);
lean_inc(v_a_1982_);
lean_inc_ref(v_a_1981_);
lean_inc(v_a_1980_);
lean_inc_ref(v_a_1979_);
lean_inc(v_a_1978_);
v___x_1992_ = lean_apply_10(v_fallback_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_, lean_box(0));
return v___x_1992_;
}
else
{
lean_object* v_arg_1993_; lean_object* v___x_1994_; uint8_t v___x_1995_; 
v_arg_1993_ = lean_ctor_get(v___x_1990_, 1);
lean_inc_ref(v_arg_1993_);
v___x_1994_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1990_);
v___x_1995_ = l_Lean_Expr_isApp(v___x_1994_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1996_; 
lean_dec_ref(v___x_1994_);
lean_dec_ref(v_arg_1993_);
lean_dec_ref(v_h_1975_);
lean_dec_ref(v_c_x27_1974_);
lean_dec_ref(v_b_1973_);
lean_dec_ref(v_a_1972_);
lean_dec_ref(v_inst_1971_);
lean_dec_ref(v_c_1970_);
lean_dec_ref(v_00_u03b1_1969_);
lean_inc(v_a_1986_);
lean_inc_ref(v_a_1985_);
lean_inc(v_a_1984_);
lean_inc_ref(v_a_1983_);
lean_inc(v_a_1982_);
lean_inc_ref(v_a_1981_);
lean_inc(v_a_1980_);
lean_inc_ref(v_a_1979_);
lean_inc(v_a_1978_);
v___x_1996_ = lean_apply_10(v_fallback_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_, lean_box(0));
return v___x_1996_;
}
else
{
lean_object* v_arg_1997_; lean_object* v___x_1998_; uint8_t v___x_1999_; 
v_arg_1997_ = lean_ctor_get(v___x_1994_, 1);
lean_inc_ref(v_arg_1997_);
v___x_1998_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1994_);
v___x_1999_ = l_Lean_Expr_isApp(v___x_1998_);
if (v___x_1999_ == 0)
{
lean_object* v___x_2000_; 
lean_dec_ref(v___x_1998_);
lean_dec_ref(v_arg_1997_);
lean_dec_ref(v_arg_1993_);
lean_dec_ref(v_h_1975_);
lean_dec_ref(v_c_x27_1974_);
lean_dec_ref(v_b_1973_);
lean_dec_ref(v_a_1972_);
lean_dec_ref(v_inst_1971_);
lean_dec_ref(v_c_1970_);
lean_dec_ref(v_00_u03b1_1969_);
lean_inc(v_a_1986_);
lean_inc_ref(v_a_1985_);
lean_inc(v_a_1984_);
lean_inc_ref(v_a_1983_);
lean_inc(v_a_1982_);
lean_inc_ref(v_a_1981_);
lean_inc(v_a_1980_);
lean_inc_ref(v_a_1979_);
lean_inc(v_a_1978_);
v___x_2000_ = lean_apply_10(v_fallback_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_, lean_box(0));
return v___x_2000_;
}
else
{
lean_object* v___x_2001_; lean_object* v___x_2002_; uint8_t v___x_2003_; 
v___x_2001_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1998_);
v___x_2002_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__1));
v___x_2003_ = l_Lean_Expr_isConstOf(v___x_2001_, v___x_2002_);
lean_dec_ref(v___x_2001_);
if (v___x_2003_ == 0)
{
lean_object* v___x_2004_; 
lean_dec_ref(v_arg_1997_);
lean_dec_ref(v_arg_1993_);
lean_dec_ref(v_h_1975_);
lean_dec_ref(v_c_x27_1974_);
lean_dec_ref(v_b_1973_);
lean_dec_ref(v_a_1972_);
lean_dec_ref(v_inst_1971_);
lean_dec_ref(v_c_1970_);
lean_dec_ref(v_00_u03b1_1969_);
lean_inc(v_a_1986_);
lean_inc_ref(v_a_1985_);
lean_inc(v_a_1984_);
lean_inc_ref(v_a_1983_);
lean_inc(v_a_1982_);
lean_inc_ref(v_a_1981_);
lean_inc(v_a_1980_);
lean_inc_ref(v_a_1979_);
lean_inc(v_a_1978_);
v___x_2004_ = lean_apply_10(v_fallback_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_, lean_box(0));
return v___x_2004_;
}
else
{
lean_object* v___x_2005_; 
v___x_2005_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1997_, v_a_1984_);
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v_a_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; uint8_t v___x_2009_; 
v_a_2006_ = lean_ctor_get(v___x_2005_, 0);
lean_inc(v_a_2006_);
lean_dec_ref_known(v___x_2005_, 1);
v___x_2007_ = l_Lean_Expr_cleanupAnnotations(v_a_2006_);
v___x_2008_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4));
v___x_2009_ = l_Lean_Expr_isConstOf(v___x_2007_, v___x_2008_);
if (v___x_2009_ == 0)
{
lean_object* v___x_2010_; uint8_t v___x_2011_; 
v___x_2010_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6));
v___x_2011_ = l_Lean_Expr_isConstOf(v___x_2007_, v___x_2010_);
lean_dec_ref(v___x_2007_);
if (v___x_2011_ == 0)
{
lean_object* v___x_2012_; 
lean_dec_ref(v_arg_1993_);
lean_dec_ref(v_h_1975_);
lean_dec_ref(v_c_x27_1974_);
lean_dec_ref(v_b_1973_);
lean_dec_ref(v_a_1972_);
lean_dec_ref(v_inst_1971_);
lean_dec_ref(v_c_1970_);
lean_dec_ref(v_00_u03b1_1969_);
lean_inc(v_a_1986_);
lean_inc_ref(v_a_1985_);
lean_inc(v_a_1984_);
lean_inc_ref(v_a_1983_);
lean_inc(v_a_1982_);
lean_inc_ref(v_a_1981_);
lean_inc(v_a_1980_);
lean_inc_ref(v_a_1979_);
lean_inc(v_a_1978_);
v___x_2012_ = lean_apply_10(v_fallback_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_, lean_box(0));
return v___x_2012_;
}
else
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
lean_dec_ref(v_fallback_1977_);
v___x_2013_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2);
lean_inc_ref(v_arg_1993_);
lean_inc_ref(v_h_1975_);
lean_inc_ref(v_c_x27_1974_);
lean_inc_ref(v_c_1970_);
v___x_2014_ = l_Lean_mkApp4(v___x_2013_, v_c_1970_, v_c_x27_1974_, v_h_1975_, v_arg_1993_);
v___x_2015_ = lean_unsigned_to_nat(1u);
v___x_2016_ = lean_mk_empty_array_with_capacity(v___x_2015_);
v___x_2017_ = lean_array_push(v___x_2016_, v___x_2014_);
lean_inc_ref(v_a_1972_);
v___x_2018_ = l_Lean_Expr_betaRev(v_a_1972_, v___x_2017_, v___x_2009_, v___x_2009_);
lean_dec_ref(v___x_2017_);
v___x_2019_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2018_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2032_; 
v_a_2020_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2022_ = v___x_2019_;
v_isShared_2023_ = v_isSharedCheck_2032_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_2019_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2032_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2030_; 
v___x_2024_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4));
v___x_2025_ = l_Lean_Expr_constLevels_x21(v_f_1968_);
v___x_2026_ = l_Lean_mkConst(v___x_2024_, v___x_2025_);
v___x_2027_ = l_Lean_mkApp8(v___x_2026_, v_00_u03b1_1969_, v_c_1970_, v_inst_1971_, v_a_1972_, v_b_1973_, v_c_x27_1974_, v_h_1975_, v_arg_1993_);
v___x_2028_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2028_, 0, v_a_2020_);
lean_ctor_set(v___x_2028_, 1, v___x_2027_);
lean_ctor_set_uint8(v___x_2028_, sizeof(void*)*2, v___x_2009_);
lean_ctor_set_uint8(v___x_2028_, sizeof(void*)*2 + 1, v___x_2009_);
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 0, v___x_2028_);
v___x_2030_ = v___x_2022_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v___x_2028_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
else
{
lean_object* v_a_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2040_; 
lean_dec_ref(v_arg_1993_);
lean_dec_ref(v_h_1975_);
lean_dec_ref(v_c_x27_1974_);
lean_dec_ref(v_b_1973_);
lean_dec_ref(v_a_1972_);
lean_dec_ref(v_inst_1971_);
lean_dec_ref(v_c_1970_);
lean_dec_ref(v_00_u03b1_1969_);
v_a_2033_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2035_ = v___x_2019_;
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_a_2033_);
lean_dec(v___x_2019_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2038_; 
if (v_isShared_2036_ == 0)
{
v___x_2038_ = v___x_2035_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_a_2033_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
}
}
else
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; uint8_t v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
lean_dec_ref(v___x_2007_);
lean_dec_ref(v_fallback_1977_);
v___x_2041_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7);
lean_inc_ref(v_arg_1993_);
lean_inc_ref(v_h_1975_);
lean_inc_ref(v_c_x27_1974_);
lean_inc_ref(v_c_1970_);
v___x_2042_ = l_Lean_mkApp4(v___x_2041_, v_c_1970_, v_c_x27_1974_, v_h_1975_, v_arg_1993_);
v___x_2043_ = lean_unsigned_to_nat(1u);
v___x_2044_ = lean_mk_empty_array_with_capacity(v___x_2043_);
v___x_2045_ = lean_array_push(v___x_2044_, v___x_2042_);
v___x_2046_ = 0;
lean_inc_ref(v_b_1973_);
v___x_2047_ = l_Lean_Expr_betaRev(v_b_1973_, v___x_2045_, v___x_2046_, v___x_2046_);
lean_dec_ref(v___x_2045_);
v___x_2048_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2047_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2061_; 
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2061_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2051_ = v___x_2048_;
v_isShared_2052_ = v_isSharedCheck_2061_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2048_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2061_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2059_; 
v___x_2053_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9));
v___x_2054_ = l_Lean_Expr_constLevels_x21(v_f_1968_);
v___x_2055_ = l_Lean_mkConst(v___x_2053_, v___x_2054_);
v___x_2056_ = l_Lean_mkApp8(v___x_2055_, v_00_u03b1_1969_, v_c_1970_, v_inst_1971_, v_a_1972_, v_b_1973_, v_c_x27_1974_, v_h_1975_, v_arg_1993_);
v___x_2057_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2057_, 0, v_a_2049_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
lean_ctor_set_uint8(v___x_2057_, sizeof(void*)*2, v___x_2046_);
lean_ctor_set_uint8(v___x_2057_, sizeof(void*)*2 + 1, v___x_2046_);
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 0, v___x_2057_);
v___x_2059_ = v___x_2051_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2057_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
}
else
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2069_; 
lean_dec_ref(v_arg_1993_);
lean_dec_ref(v_h_1975_);
lean_dec_ref(v_c_x27_1974_);
lean_dec_ref(v_b_1973_);
lean_dec_ref(v_a_1972_);
lean_dec_ref(v_inst_1971_);
lean_dec_ref(v_c_1970_);
lean_dec_ref(v_00_u03b1_1969_);
v_a_2062_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2064_ = v___x_2048_;
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___x_2048_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2062_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
}
}
else
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
lean_dec_ref(v_arg_1993_);
lean_dec_ref(v_fallback_1977_);
lean_dec_ref(v_h_1975_);
lean_dec_ref(v_c_x27_1974_);
lean_dec_ref(v_b_1973_);
lean_dec_ref(v_a_1972_);
lean_dec_ref(v_inst_1971_);
lean_dec_ref(v_c_1970_);
lean_dec_ref(v_00_u03b1_1969_);
v_a_2070_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_2005_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_2005_);
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
}
}
}
}
else
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
lean_dec_ref(v_fallback_1977_);
lean_dec_ref(v_h_1975_);
lean_dec_ref(v_c_x27_1974_);
lean_dec_ref(v_b_1973_);
lean_dec_ref(v_a_1972_);
lean_dec_ref(v_inst_1971_);
lean_dec_ref(v_c_1970_);
lean_dec_ref(v_00_u03b1_1969_);
v_a_2078_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2080_ = v___x_1988_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_1988_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___boxed(lean_object** _args){
lean_object* v_f_2086_ = _args[0];
lean_object* v_00_u03b1_2087_ = _args[1];
lean_object* v_c_2088_ = _args[2];
lean_object* v_inst_2089_ = _args[3];
lean_object* v_a_2090_ = _args[4];
lean_object* v_b_2091_ = _args[5];
lean_object* v_c_x27_2092_ = _args[6];
lean_object* v_h_2093_ = _args[7];
lean_object* v_inst_x27_2094_ = _args[8];
lean_object* v_fallback_2095_ = _args[9];
lean_object* v_a_2096_ = _args[10];
lean_object* v_a_2097_ = _args[11];
lean_object* v_a_2098_ = _args[12];
lean_object* v_a_2099_ = _args[13];
lean_object* v_a_2100_ = _args[14];
lean_object* v_a_2101_ = _args[15];
lean_object* v_a_2102_ = _args[16];
lean_object* v_a_2103_ = _args[17];
lean_object* v_a_2104_ = _args[18];
lean_object* v_a_2105_ = _args[19];
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr(v_f_2086_, v_00_u03b1_2087_, v_c_2088_, v_inst_2089_, v_a_2090_, v_b_2091_, v_c_x27_2092_, v_h_2093_, v_inst_x27_2094_, v_fallback_2095_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_, v_a_2104_);
lean_dec(v_a_2104_);
lean_dec_ref(v_a_2103_);
lean_dec(v_a_2102_);
lean_dec_ref(v_a_2101_);
lean_dec(v_a_2100_);
lean_dec_ref(v_a_2099_);
lean_dec(v_a_2098_);
lean_dec_ref(v_a_2097_);
lean_dec(v_a_2096_);
lean_dec_ref(v_f_2086_);
return v_res_2106_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2(void){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2110_ = lean_box(0);
v___x_2111_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__1));
v___x_2112_ = l_Lean_mkConst(v___x_2111_, v___x_2110_);
return v___x_2112_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2116_ = lean_box(0);
v___x_2117_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__4));
v___x_2118_ = l_Lean_mkConst(v___x_2117_, v___x_2116_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable(lean_object* v_f_2119_, lean_object* v_00_u03b1_2120_, lean_object* v_c_2121_, lean_object* v_inst_2122_, lean_object* v_a_2123_, lean_object* v_b_2124_, lean_object* v_fallback_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_){
_start:
{
lean_object* v___x_2136_; uint8_t v___x_2137_; lean_object* v___x_2138_; lean_object* v___f_2139_; lean_object* v___x_2140_; 
v___x_2136_ = lean_unsigned_to_nat(0u);
v___x_2137_ = 5;
v___x_2138_ = lean_box(v___x_2137_);
lean_inc_ref(v_inst_2122_);
v___f_2139_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___lam__0___boxed), 8, 3);
lean_closure_set(v___f_2139_, 0, v___x_2138_);
lean_closure_set(v___f_2139_, 1, v_inst_2122_);
lean_closure_set(v___f_2139_, 2, v___x_2136_);
v___x_2140_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___f_2139_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2141_);
lean_dec_ref_known(v___x_2140_, 1);
if (lean_obj_tag(v_a_2141_) == 0)
{
lean_object* v___x_2142_; 
lean_inc(v_a_2134_);
lean_inc_ref(v_a_2133_);
lean_inc(v_a_2132_);
lean_inc_ref(v_a_2131_);
lean_inc(v_a_2130_);
lean_inc_ref(v_a_2129_);
lean_inc(v_a_2128_);
lean_inc_ref(v_a_2127_);
lean_inc(v_a_2126_);
lean_inc_ref(v_inst_2122_);
v___x_2142_ = lean_sym_simp(v_inst_2122_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2142_) == 0)
{
lean_object* v_a_2143_; 
v_a_2143_ = lean_ctor_get(v___x_2142_, 0);
lean_inc(v_a_2143_);
lean_dec_ref_known(v___x_2142_, 1);
if (lean_obj_tag(v_a_2143_) == 0)
{
uint8_t v_contextDependent_2144_; lean_object* v___x_2145_; 
v_contextDependent_2144_ = lean_ctor_get_uint8(v_a_2143_, 1);
lean_dec_ref_known(v_a_2143_, 0);
lean_inc_ref(v_inst_2122_);
v___x_2145_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable(v_f_2119_, v_00_u03b1_2120_, v_c_2121_, v_inst_2122_, v_a_2123_, v_b_2124_, v_inst_2122_, v_fallback_2125_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; uint8_t v___y_2148_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_a_2146_);
if (v_contextDependent_2144_ == 0)
{
lean_dec(v_a_2146_);
return v___x_2145_;
}
else
{
if (lean_obj_tag(v_a_2146_) == 0)
{
uint8_t v_contextDependent_2158_; 
v_contextDependent_2158_ = lean_ctor_get_uint8(v_a_2146_, 1);
v___y_2148_ = v_contextDependent_2158_;
goto v___jp_2147_;
}
else
{
uint8_t v_contextDependent_2159_; 
v_contextDependent_2159_ = lean_ctor_get_uint8(v_a_2146_, sizeof(void*)*2 + 1);
v___y_2148_ = v_contextDependent_2159_;
goto v___jp_2147_;
}
}
v___jp_2147_:
{
if (v___y_2148_ == 0)
{
lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2156_; 
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2156_ == 0)
{
lean_object* v_unused_2157_; 
v_unused_2157_ = lean_ctor_get(v___x_2145_, 0);
lean_dec(v_unused_2157_);
v___x_2150_ = v___x_2145_;
v_isShared_2151_ = v_isSharedCheck_2156_;
goto v_resetjp_2149_;
}
else
{
lean_dec(v___x_2145_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2156_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
lean_object* v___x_2152_; lean_object* v___x_2154_; 
v___x_2152_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2146_);
if (v_isShared_2151_ == 0)
{
lean_ctor_set(v___x_2150_, 0, v___x_2152_);
v___x_2154_ = v___x_2150_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v___x_2152_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
}
else
{
lean_dec(v_a_2146_);
return v___x_2145_;
}
}
}
else
{
return v___x_2145_;
}
}
else
{
lean_object* v_e_x27_2160_; uint8_t v_contextDependent_2161_; lean_object* v___x_2162_; 
v_e_x27_2160_ = lean_ctor_get(v_a_2143_, 0);
lean_inc_ref(v_e_x27_2160_);
v_contextDependent_2161_ = lean_ctor_get_uint8(v_a_2143_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2143_, 2);
v___x_2162_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable(v_f_2119_, v_00_u03b1_2120_, v_c_2121_, v_inst_2122_, v_a_2123_, v_b_2124_, v_e_x27_2160_, v_fallback_2125_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; uint8_t v___y_2165_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
lean_inc(v_a_2163_);
if (v_contextDependent_2161_ == 0)
{
lean_dec(v_a_2163_);
return v___x_2162_;
}
else
{
if (lean_obj_tag(v_a_2163_) == 0)
{
uint8_t v_contextDependent_2175_; 
v_contextDependent_2175_ = lean_ctor_get_uint8(v_a_2163_, 1);
v___y_2165_ = v_contextDependent_2175_;
goto v___jp_2164_;
}
else
{
uint8_t v_contextDependent_2176_; 
v_contextDependent_2176_ = lean_ctor_get_uint8(v_a_2163_, sizeof(void*)*2 + 1);
v___y_2165_ = v_contextDependent_2176_;
goto v___jp_2164_;
}
}
v___jp_2164_:
{
if (v___y_2165_ == 0)
{
lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2173_; 
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2173_ == 0)
{
lean_object* v_unused_2174_; 
v_unused_2174_ = lean_ctor_get(v___x_2162_, 0);
lean_dec(v_unused_2174_);
v___x_2167_ = v___x_2162_;
v_isShared_2168_ = v_isSharedCheck_2173_;
goto v_resetjp_2166_;
}
else
{
lean_dec(v___x_2162_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2173_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2169_; lean_object* v___x_2171_; 
v___x_2169_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2163_);
if (v_isShared_2168_ == 0)
{
lean_ctor_set(v___x_2167_, 0, v___x_2169_);
v___x_2171_ = v___x_2167_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2169_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
}
}
}
else
{
lean_dec(v_a_2163_);
return v___x_2162_;
}
}
}
else
{
return v___x_2162_;
}
}
}
else
{
lean_dec_ref(v_fallback_2125_);
lean_dec_ref(v_b_2124_);
lean_dec_ref(v_a_2123_);
lean_dec_ref(v_inst_2122_);
lean_dec_ref(v_c_2121_);
lean_dec_ref(v_00_u03b1_2120_);
return v___x_2142_;
}
}
else
{
lean_object* v_val_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v_val_2177_ = lean_ctor_get(v_a_2141_, 0);
lean_inc(v_val_2177_);
lean_dec_ref_known(v_a_2141_, 1);
v___x_2178_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2);
lean_inc_ref(v_inst_2122_);
lean_inc_ref(v_c_2121_);
v___x_2179_ = l_Lean_mkAppB(v___x_2178_, v_c_2121_, v_inst_2122_);
v___x_2180_ = l_Lean_Meta_Sym_shareCommonInc(v_val_2177_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v_a_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; 
v_a_2181_ = lean_ctor_get(v___x_2180_, 0);
lean_inc_n(v_a_2181_, 3);
lean_dec_ref_known(v___x_2180_, 1);
v___x_2182_ = lean_unsigned_to_nat(1u);
v___x_2183_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8);
v___x_2184_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10);
v___x_2185_ = l_Lean_mkAppB(v___x_2183_, v___x_2184_, v_a_2181_);
lean_inc(v_a_2134_);
lean_inc_ref(v_a_2133_);
lean_inc(v_a_2132_);
lean_inc_ref(v_a_2131_);
lean_inc(v_a_2130_);
lean_inc_ref(v_a_2129_);
lean_inc(v_a_2128_);
lean_inc_ref(v_a_2127_);
lean_inc(v_a_2126_);
v___x_2186_ = lean_sym_simp(v_a_2181_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v_a_2187_; uint8_t v___x_2188_; lean_object* v_e_x27_2190_; lean_object* v_proof_2191_; uint8_t v_contextDependent_2192_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
lean_inc(v_a_2187_);
lean_dec_ref_known(v___x_2186_, 1);
v___x_2188_ = 0;
if (lean_obj_tag(v_a_2187_) == 0)
{
uint8_t v_contextDependent_2283_; 
lean_dec_ref(v___x_2179_);
v_contextDependent_2283_ = lean_ctor_get_uint8(v_a_2187_, 1);
lean_dec_ref_known(v_a_2187_, 0);
v_e_x27_2190_ = v_a_2181_;
v_proof_2191_ = v___x_2185_;
v_contextDependent_2192_ = v_contextDependent_2283_;
goto v___jp_2189_;
}
else
{
lean_object* v_e_x27_2284_; lean_object* v_proof_2285_; uint8_t v_contextDependent_2286_; lean_object* v___x_2287_; 
v_e_x27_2284_ = lean_ctor_get(v_a_2187_, 0);
lean_inc_ref_n(v_e_x27_2284_, 2);
v_proof_2285_ = lean_ctor_get(v_a_2187_, 1);
lean_inc_ref(v_proof_2285_);
v_contextDependent_2286_ = lean_ctor_get_uint8(v_a_2187_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2187_, 2);
v___x_2287_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___x_2179_, v_a_2181_, v___x_2185_, v_e_x27_2284_, v_proof_2285_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; 
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc(v_a_2288_);
lean_dec_ref_known(v___x_2287_, 1);
v_e_x27_2190_ = v_e_x27_2284_;
v_proof_2191_ = v_a_2288_;
v_contextDependent_2192_ = v_contextDependent_2286_;
goto v___jp_2189_;
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
lean_dec_ref(v_e_x27_2284_);
lean_dec_ref(v_fallback_2125_);
lean_dec_ref(v_b_2124_);
lean_dec_ref(v_a_2123_);
lean_dec_ref(v_inst_2122_);
lean_dec_ref(v_c_2121_);
lean_dec_ref(v_00_u03b1_2120_);
v_a_2289_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2287_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2287_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2289_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
}
v___jp_2189_:
{
lean_object* v___x_2193_; 
v___x_2193_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_x27_2190_, v_a_2132_);
if (lean_obj_tag(v___x_2193_) == 0)
{
lean_object* v_a_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; uint8_t v___x_2197_; 
v_a_2194_ = lean_ctor_get(v___x_2193_, 0);
lean_inc(v_a_2194_);
lean_dec_ref_known(v___x_2193_, 1);
v___x_2195_ = l_Lean_Expr_cleanupAnnotations(v_a_2194_);
v___x_2196_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4));
v___x_2197_ = l_Lean_Expr_isConstOf(v___x_2195_, v___x_2196_);
if (v___x_2197_ == 0)
{
lean_object* v___x_2198_; uint8_t v___x_2199_; 
v___x_2198_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6));
v___x_2199_ = l_Lean_Expr_isConstOf(v___x_2195_, v___x_2198_);
lean_dec_ref(v___x_2195_);
if (v___x_2199_ == 0)
{
lean_object* v___x_2200_; 
lean_dec_ref(v_proof_2191_);
lean_dec_ref(v_b_2124_);
lean_dec_ref(v_a_2123_);
lean_dec_ref(v_inst_2122_);
lean_dec_ref(v_c_2121_);
lean_dec_ref(v_00_u03b1_2120_);
lean_inc(v_a_2134_);
lean_inc_ref(v_a_2133_);
lean_inc(v_a_2132_);
lean_inc_ref(v_a_2131_);
lean_inc(v_a_2130_);
lean_inc_ref(v_a_2129_);
lean_inc(v_a_2128_);
lean_inc_ref(v_a_2127_);
lean_inc(v_a_2126_);
v___x_2200_ = lean_apply_10(v_fallback_2125_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, lean_box(0));
return v___x_2200_;
}
else
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
lean_dec_ref(v_fallback_2125_);
v___x_2201_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2);
lean_inc_ref(v_inst_2122_);
lean_inc_ref(v_c_2121_);
v___x_2202_ = l_Lean_mkApp3(v___x_2201_, v_c_2121_, v_inst_2122_, v_proof_2191_);
v___x_2203_ = l_Lean_Meta_Sym_shareCommon(v___x_2202_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v_a_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
lean_inc_n(v_a_2204_, 2);
lean_dec_ref_known(v___x_2203_, 1);
v___x_2205_ = lean_mk_empty_array_with_capacity(v___x_2182_);
v___x_2206_ = lean_array_push(v___x_2205_, v_a_2204_);
lean_inc_ref(v_a_2123_);
v___x_2207_ = l_Lean_Expr_betaRev(v_a_2123_, v___x_2206_, v___x_2188_, v___x_2188_);
lean_dec_ref(v___x_2206_);
v___x_2208_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2207_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_object* v_a_2209_; lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2221_; 
v_a_2209_ = lean_ctor_get(v___x_2208_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2211_ = v___x_2208_;
v_isShared_2212_ = v_isSharedCheck_2221_;
goto v_resetjp_2210_;
}
else
{
lean_inc(v_a_2209_);
lean_dec(v___x_2208_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2221_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2219_; 
v___x_2213_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1));
v___x_2214_ = l_Lean_Expr_constLevels_x21(v_f_2119_);
v___x_2215_ = l_Lean_mkConst(v___x_2213_, v___x_2214_);
v___x_2216_ = l_Lean_mkApp6(v___x_2215_, v_00_u03b1_2120_, v_c_2121_, v_inst_2122_, v_a_2123_, v_b_2124_, v_a_2204_);
v___x_2217_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2217_, 0, v_a_2209_);
lean_ctor_set(v___x_2217_, 1, v___x_2216_);
lean_ctor_set_uint8(v___x_2217_, sizeof(void*)*2, v___x_2188_);
lean_ctor_set_uint8(v___x_2217_, sizeof(void*)*2 + 1, v_contextDependent_2192_);
if (v_isShared_2212_ == 0)
{
lean_ctor_set(v___x_2211_, 0, v___x_2217_);
v___x_2219_ = v___x_2211_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v___x_2217_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
lean_dec(v_a_2204_);
lean_dec_ref(v_b_2124_);
lean_dec_ref(v_a_2123_);
lean_dec_ref(v_inst_2122_);
lean_dec_ref(v_c_2121_);
lean_dec_ref(v_00_u03b1_2120_);
v_a_2222_ = lean_ctor_get(v___x_2208_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2208_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2208_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2227_; 
if (v_isShared_2225_ == 0)
{
v___x_2227_ = v___x_2224_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
lean_dec_ref(v_b_2124_);
lean_dec_ref(v_a_2123_);
lean_dec_ref(v_inst_2122_);
lean_dec_ref(v_c_2121_);
lean_dec_ref(v_00_u03b1_2120_);
v_a_2230_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2203_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2203_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
}
else
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
lean_dec_ref(v___x_2195_);
lean_dec_ref(v_fallback_2125_);
v___x_2238_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5);
lean_inc_ref(v_inst_2122_);
lean_inc_ref(v_c_2121_);
v___x_2239_ = l_Lean_mkApp3(v___x_2238_, v_c_2121_, v_inst_2122_, v_proof_2191_);
v___x_2240_ = l_Lean_Meta_Sym_shareCommon(v___x_2239_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_object* v_a_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v_a_2241_ = lean_ctor_get(v___x_2240_, 0);
lean_inc_n(v_a_2241_, 2);
lean_dec_ref_known(v___x_2240_, 1);
v___x_2242_ = lean_mk_empty_array_with_capacity(v___x_2182_);
v___x_2243_ = lean_array_push(v___x_2242_, v_a_2241_);
lean_inc_ref(v_b_2124_);
v___x_2244_ = l_Lean_Expr_betaRev(v_b_2124_, v___x_2243_, v___x_2188_, v___x_2188_);
lean_dec_ref(v___x_2243_);
v___x_2245_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2244_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2245_) == 0)
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2258_; 
v_a_2246_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2248_ = v___x_2245_;
v_isShared_2249_ = v_isSharedCheck_2258_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2245_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2258_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2256_; 
v___x_2250_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3));
v___x_2251_ = l_Lean_Expr_constLevels_x21(v_f_2119_);
v___x_2252_ = l_Lean_mkConst(v___x_2250_, v___x_2251_);
v___x_2253_ = l_Lean_mkApp6(v___x_2252_, v_00_u03b1_2120_, v_c_2121_, v_inst_2122_, v_a_2123_, v_b_2124_, v_a_2241_);
v___x_2254_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2254_, 0, v_a_2246_);
lean_ctor_set(v___x_2254_, 1, v___x_2253_);
lean_ctor_set_uint8(v___x_2254_, sizeof(void*)*2, v___x_2188_);
lean_ctor_set_uint8(v___x_2254_, sizeof(void*)*2 + 1, v_contextDependent_2192_);
if (v_isShared_2249_ == 0)
{
lean_ctor_set(v___x_2248_, 0, v___x_2254_);
v___x_2256_ = v___x_2248_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2254_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
else
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2266_; 
lean_dec(v_a_2241_);
lean_dec_ref(v_b_2124_);
lean_dec_ref(v_a_2123_);
lean_dec_ref(v_inst_2122_);
lean_dec_ref(v_c_2121_);
lean_dec_ref(v_00_u03b1_2120_);
v_a_2259_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2261_ = v___x_2245_;
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2245_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2264_; 
if (v_isShared_2262_ == 0)
{
v___x_2264_ = v___x_2261_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v_a_2259_);
v___x_2264_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
return v___x_2264_;
}
}
}
}
else
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
lean_dec_ref(v_b_2124_);
lean_dec_ref(v_a_2123_);
lean_dec_ref(v_inst_2122_);
lean_dec_ref(v_c_2121_);
lean_dec_ref(v_00_u03b1_2120_);
v_a_2267_ = lean_ctor_get(v___x_2240_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2240_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2269_ = v___x_2240_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2240_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2267_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
}
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
lean_dec_ref(v_proof_2191_);
lean_dec_ref(v_fallback_2125_);
lean_dec_ref(v_b_2124_);
lean_dec_ref(v_a_2123_);
lean_dec_ref(v_inst_2122_);
lean_dec_ref(v_c_2121_);
lean_dec_ref(v_00_u03b1_2120_);
v_a_2275_ = lean_ctor_get(v___x_2193_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2193_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___x_2193_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2193_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2280_; 
if (v_isShared_2278_ == 0)
{
v___x_2280_ = v___x_2277_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_a_2275_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2185_);
lean_dec(v_a_2181_);
lean_dec_ref(v___x_2179_);
lean_dec_ref(v_fallback_2125_);
lean_dec_ref(v_b_2124_);
lean_dec_ref(v_a_2123_);
lean_dec_ref(v_inst_2122_);
lean_dec_ref(v_c_2121_);
lean_dec_ref(v_00_u03b1_2120_);
return v___x_2186_;
}
}
else
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
lean_dec_ref(v___x_2179_);
lean_dec_ref(v_fallback_2125_);
lean_dec_ref(v_b_2124_);
lean_dec_ref(v_a_2123_);
lean_dec_ref(v_inst_2122_);
lean_dec_ref(v_c_2121_);
lean_dec_ref(v_00_u03b1_2120_);
v_a_2297_ = lean_ctor_get(v___x_2180_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2180_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2180_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2180_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
}
else
{
lean_object* v_a_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2312_; 
lean_dec_ref(v_fallback_2125_);
lean_dec_ref(v_b_2124_);
lean_dec_ref(v_a_2123_);
lean_dec_ref(v_inst_2122_);
lean_dec_ref(v_c_2121_);
lean_dec_ref(v_00_u03b1_2120_);
v_a_2305_ = lean_ctor_get(v___x_2140_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2140_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2307_ = v___x_2140_;
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_a_2305_);
lean_dec(v___x_2140_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_a_2305_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___boxed(lean_object** _args){
lean_object* v_f_2313_ = _args[0];
lean_object* v_00_u03b1_2314_ = _args[1];
lean_object* v_c_2315_ = _args[2];
lean_object* v_inst_2316_ = _args[3];
lean_object* v_a_2317_ = _args[4];
lean_object* v_b_2318_ = _args[5];
lean_object* v_fallback_2319_ = _args[6];
lean_object* v_a_2320_ = _args[7];
lean_object* v_a_2321_ = _args[8];
lean_object* v_a_2322_ = _args[9];
lean_object* v_a_2323_ = _args[10];
lean_object* v_a_2324_ = _args[11];
lean_object* v_a_2325_ = _args[12];
lean_object* v_a_2326_ = _args[13];
lean_object* v_a_2327_ = _args[14];
lean_object* v_a_2328_ = _args[15];
lean_object* v_a_2329_ = _args[16];
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable(v_f_2313_, v_00_u03b1_2314_, v_c_2315_, v_inst_2316_, v_a_2317_, v_b_2318_, v_fallback_2319_, v_a_2320_, v_a_2321_, v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_);
lean_dec(v_a_2328_);
lean_dec_ref(v_a_2327_);
lean_dec(v_a_2326_);
lean_dec_ref(v_a_2325_);
lean_dec(v_a_2324_);
lean_dec_ref(v_a_2323_);
lean_dec(v_a_2322_);
lean_dec_ref(v_a_2321_);
lean_dec(v_a_2320_);
lean_dec_ref(v_f_2313_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr(lean_object* v_f_2331_, lean_object* v_00_u03b1_2332_, lean_object* v_c_2333_, lean_object* v_inst_2334_, lean_object* v_a_2335_, lean_object* v_b_2336_, lean_object* v_c_x27_2337_, lean_object* v_h_2338_, lean_object* v_inst_x27_2339_, lean_object* v_fallback_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_){
_start:
{
lean_object* v___x_2351_; uint8_t v___x_2352_; lean_object* v___x_2353_; lean_object* v___f_2354_; lean_object* v___x_2355_; 
v___x_2351_ = lean_unsigned_to_nat(0u);
v___x_2352_ = 5;
v___x_2353_ = lean_box(v___x_2352_);
lean_inc_ref(v_inst_x27_2339_);
v___f_2354_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___lam__0___boxed), 8, 3);
lean_closure_set(v___f_2354_, 0, v___x_2353_);
lean_closure_set(v___f_2354_, 1, v_inst_x27_2339_);
lean_closure_set(v___f_2354_, 2, v___x_2351_);
v___x_2355_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___f_2354_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v_a_2356_; 
v_a_2356_ = lean_ctor_get(v___x_2355_, 0);
lean_inc(v_a_2356_);
lean_dec_ref_known(v___x_2355_, 1);
if (lean_obj_tag(v_a_2356_) == 0)
{
lean_object* v___x_2357_; 
lean_inc(v_a_2349_);
lean_inc_ref(v_a_2348_);
lean_inc(v_a_2347_);
lean_inc_ref(v_a_2346_);
lean_inc(v_a_2345_);
lean_inc_ref(v_a_2344_);
lean_inc(v_a_2343_);
lean_inc_ref(v_a_2342_);
lean_inc(v_a_2341_);
lean_inc_ref(v_inst_x27_2339_);
v___x_2357_ = lean_sym_simp(v_inst_x27_2339_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
if (lean_obj_tag(v___x_2357_) == 0)
{
lean_object* v_a_2358_; 
v_a_2358_ = lean_ctor_get(v___x_2357_, 0);
lean_inc(v_a_2358_);
lean_dec_ref_known(v___x_2357_, 1);
if (lean_obj_tag(v_a_2358_) == 0)
{
uint8_t v_contextDependent_2359_; lean_object* v___x_2360_; 
v_contextDependent_2359_ = lean_ctor_get_uint8(v_a_2358_, 1);
lean_dec_ref_known(v_a_2358_, 0);
v___x_2360_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr(v_f_2331_, v_00_u03b1_2332_, v_c_2333_, v_inst_2334_, v_a_2335_, v_b_2336_, v_c_x27_2337_, v_h_2338_, v_inst_x27_2339_, v_fallback_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_object* v_a_2361_; uint8_t v___y_2363_; 
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
lean_inc(v_a_2361_);
if (v_contextDependent_2359_ == 0)
{
lean_dec(v_a_2361_);
return v___x_2360_;
}
else
{
if (lean_obj_tag(v_a_2361_) == 0)
{
uint8_t v_contextDependent_2373_; 
v_contextDependent_2373_ = lean_ctor_get_uint8(v_a_2361_, 1);
v___y_2363_ = v_contextDependent_2373_;
goto v___jp_2362_;
}
else
{
uint8_t v_contextDependent_2374_; 
v_contextDependent_2374_ = lean_ctor_get_uint8(v_a_2361_, sizeof(void*)*2 + 1);
v___y_2363_ = v_contextDependent_2374_;
goto v___jp_2362_;
}
}
v___jp_2362_:
{
if (v___y_2363_ == 0)
{
lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2371_; 
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2371_ == 0)
{
lean_object* v_unused_2372_; 
v_unused_2372_ = lean_ctor_get(v___x_2360_, 0);
lean_dec(v_unused_2372_);
v___x_2365_ = v___x_2360_;
v_isShared_2366_ = v_isSharedCheck_2371_;
goto v_resetjp_2364_;
}
else
{
lean_dec(v___x_2360_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2371_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2367_; lean_object* v___x_2369_; 
v___x_2367_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2361_);
if (v_isShared_2366_ == 0)
{
lean_ctor_set(v___x_2365_, 0, v___x_2367_);
v___x_2369_ = v___x_2365_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v___x_2367_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
else
{
lean_dec(v_a_2361_);
return v___x_2360_;
}
}
}
else
{
return v___x_2360_;
}
}
else
{
lean_object* v_e_x27_2375_; uint8_t v_contextDependent_2376_; lean_object* v___x_2377_; 
lean_dec_ref(v_inst_x27_2339_);
v_e_x27_2375_ = lean_ctor_get(v_a_2358_, 0);
lean_inc_ref(v_e_x27_2375_);
v_contextDependent_2376_ = lean_ctor_get_uint8(v_a_2358_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2358_, 2);
v___x_2377_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr(v_f_2331_, v_00_u03b1_2332_, v_c_2333_, v_inst_2334_, v_a_2335_, v_b_2336_, v_c_x27_2337_, v_h_2338_, v_e_x27_2375_, v_fallback_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
if (lean_obj_tag(v___x_2377_) == 0)
{
lean_object* v_a_2378_; uint8_t v___y_2380_; 
v_a_2378_ = lean_ctor_get(v___x_2377_, 0);
lean_inc(v_a_2378_);
if (v_contextDependent_2376_ == 0)
{
lean_dec(v_a_2378_);
return v___x_2377_;
}
else
{
if (lean_obj_tag(v_a_2378_) == 0)
{
uint8_t v_contextDependent_2390_; 
v_contextDependent_2390_ = lean_ctor_get_uint8(v_a_2378_, 1);
v___y_2380_ = v_contextDependent_2390_;
goto v___jp_2379_;
}
else
{
uint8_t v_contextDependent_2391_; 
v_contextDependent_2391_ = lean_ctor_get_uint8(v_a_2378_, sizeof(void*)*2 + 1);
v___y_2380_ = v_contextDependent_2391_;
goto v___jp_2379_;
}
}
v___jp_2379_:
{
if (v___y_2380_ == 0)
{
lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2388_; 
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2377_);
if (v_isSharedCheck_2388_ == 0)
{
lean_object* v_unused_2389_; 
v_unused_2389_ = lean_ctor_get(v___x_2377_, 0);
lean_dec(v_unused_2389_);
v___x_2382_ = v___x_2377_;
v_isShared_2383_ = v_isSharedCheck_2388_;
goto v_resetjp_2381_;
}
else
{
lean_dec(v___x_2377_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2388_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v___x_2384_; lean_object* v___x_2386_; 
v___x_2384_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2378_);
if (v_isShared_2383_ == 0)
{
lean_ctor_set(v___x_2382_, 0, v___x_2384_);
v___x_2386_ = v___x_2382_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v___x_2384_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
else
{
lean_dec(v_a_2378_);
return v___x_2377_;
}
}
}
else
{
return v___x_2377_;
}
}
}
else
{
lean_dec_ref(v_fallback_2340_);
lean_dec_ref(v_inst_x27_2339_);
lean_dec_ref(v_h_2338_);
lean_dec_ref(v_c_x27_2337_);
lean_dec_ref(v_b_2336_);
lean_dec_ref(v_a_2335_);
lean_dec_ref(v_inst_2334_);
lean_dec_ref(v_c_2333_);
lean_dec_ref(v_00_u03b1_2332_);
return v___x_2357_;
}
}
else
{
lean_object* v_val_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v_val_2392_ = lean_ctor_get(v_a_2356_, 0);
lean_inc(v_val_2392_);
lean_dec_ref_known(v_a_2356_, 1);
v___x_2393_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2);
lean_inc_ref(v_inst_x27_2339_);
lean_inc_ref(v_c_x27_2337_);
v___x_2394_ = l_Lean_mkAppB(v___x_2393_, v_c_x27_2337_, v_inst_x27_2339_);
v___x_2395_ = l_Lean_Meta_Sym_shareCommonInc(v_val_2392_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc_n(v_a_2396_, 3);
lean_dec_ref_known(v___x_2395_, 1);
v___x_2397_ = lean_unsigned_to_nat(1u);
v___x_2398_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8);
v___x_2399_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10);
v___x_2400_ = l_Lean_mkAppB(v___x_2398_, v___x_2399_, v_a_2396_);
lean_inc(v_a_2349_);
lean_inc_ref(v_a_2348_);
lean_inc(v_a_2347_);
lean_inc_ref(v_a_2346_);
lean_inc(v_a_2345_);
lean_inc_ref(v_a_2344_);
lean_inc(v_a_2343_);
lean_inc_ref(v_a_2342_);
lean_inc(v_a_2341_);
v___x_2401_ = lean_sym_simp(v_a_2396_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; uint8_t v___x_2403_; lean_object* v_e_x27_2405_; lean_object* v_proof_2406_; uint8_t v_contextDependent_2407_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2402_);
lean_dec_ref_known(v___x_2401_, 1);
v___x_2403_ = 0;
if (lean_obj_tag(v_a_2402_) == 0)
{
uint8_t v_contextDependent_2502_; 
lean_dec_ref(v___x_2394_);
v_contextDependent_2502_ = lean_ctor_get_uint8(v_a_2402_, 1);
lean_dec_ref_known(v_a_2402_, 0);
v_e_x27_2405_ = v_a_2396_;
v_proof_2406_ = v___x_2400_;
v_contextDependent_2407_ = v_contextDependent_2502_;
goto v___jp_2404_;
}
else
{
lean_object* v_e_x27_2503_; lean_object* v_proof_2504_; uint8_t v_contextDependent_2505_; lean_object* v___x_2506_; 
v_e_x27_2503_ = lean_ctor_get(v_a_2402_, 0);
lean_inc_ref_n(v_e_x27_2503_, 2);
v_proof_2504_ = lean_ctor_get(v_a_2402_, 1);
lean_inc_ref(v_proof_2504_);
v_contextDependent_2505_ = lean_ctor_get_uint8(v_a_2402_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2402_, 2);
v___x_2506_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___x_2394_, v_a_2396_, v___x_2400_, v_e_x27_2503_, v_proof_2504_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
if (lean_obj_tag(v___x_2506_) == 0)
{
lean_object* v_a_2507_; 
v_a_2507_ = lean_ctor_get(v___x_2506_, 0);
lean_inc(v_a_2507_);
lean_dec_ref_known(v___x_2506_, 1);
v_e_x27_2405_ = v_e_x27_2503_;
v_proof_2406_ = v_a_2507_;
v_contextDependent_2407_ = v_contextDependent_2505_;
goto v___jp_2404_;
}
else
{
lean_object* v_a_2508_; lean_object* v___x_2510_; uint8_t v_isShared_2511_; uint8_t v_isSharedCheck_2515_; 
lean_dec_ref(v_e_x27_2503_);
lean_dec_ref(v_fallback_2340_);
lean_dec_ref(v_inst_x27_2339_);
lean_dec_ref(v_h_2338_);
lean_dec_ref(v_c_x27_2337_);
lean_dec_ref(v_b_2336_);
lean_dec_ref(v_a_2335_);
lean_dec_ref(v_inst_2334_);
lean_dec_ref(v_c_2333_);
lean_dec_ref(v_00_u03b1_2332_);
v_a_2508_ = lean_ctor_get(v___x_2506_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2506_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2510_ = v___x_2506_;
v_isShared_2511_ = v_isSharedCheck_2515_;
goto v_resetjp_2509_;
}
else
{
lean_inc(v_a_2508_);
lean_dec(v___x_2506_);
v___x_2510_ = lean_box(0);
v_isShared_2511_ = v_isSharedCheck_2515_;
goto v_resetjp_2509_;
}
v_resetjp_2509_:
{
lean_object* v___x_2513_; 
if (v_isShared_2511_ == 0)
{
v___x_2513_ = v___x_2510_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_a_2508_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
}
}
v___jp_2404_:
{
lean_object* v___x_2408_; 
v___x_2408_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_x27_2405_, v_a_2347_);
if (lean_obj_tag(v___x_2408_) == 0)
{
lean_object* v_a_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; uint8_t v___x_2412_; 
v_a_2409_ = lean_ctor_get(v___x_2408_, 0);
lean_inc(v_a_2409_);
lean_dec_ref_known(v___x_2408_, 1);
v___x_2410_ = l_Lean_Expr_cleanupAnnotations(v_a_2409_);
v___x_2411_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4));
v___x_2412_ = l_Lean_Expr_isConstOf(v___x_2410_, v___x_2411_);
if (v___x_2412_ == 0)
{
lean_object* v___x_2413_; uint8_t v___x_2414_; 
v___x_2413_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6));
v___x_2414_ = l_Lean_Expr_isConstOf(v___x_2410_, v___x_2413_);
lean_dec_ref(v___x_2410_);
if (v___x_2414_ == 0)
{
lean_object* v___x_2415_; 
lean_dec_ref(v_proof_2406_);
lean_dec_ref(v_inst_x27_2339_);
lean_dec_ref(v_h_2338_);
lean_dec_ref(v_c_x27_2337_);
lean_dec_ref(v_b_2336_);
lean_dec_ref(v_a_2335_);
lean_dec_ref(v_inst_2334_);
lean_dec_ref(v_c_2333_);
lean_dec_ref(v_00_u03b1_2332_);
lean_inc(v_a_2349_);
lean_inc_ref(v_a_2348_);
lean_inc(v_a_2347_);
lean_inc_ref(v_a_2346_);
lean_inc(v_a_2345_);
lean_inc_ref(v_a_2344_);
lean_inc(v_a_2343_);
lean_inc_ref(v_a_2342_);
lean_inc(v_a_2341_);
v___x_2415_ = lean_apply_10(v_fallback_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_, lean_box(0));
return v___x_2415_;
}
else
{
lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
lean_dec_ref(v_fallback_2340_);
v___x_2416_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2);
lean_inc_ref(v_c_x27_2337_);
v___x_2417_ = l_Lean_mkApp3(v___x_2416_, v_c_x27_2337_, v_inst_x27_2339_, v_proof_2406_);
v___x_2418_ = l_Lean_Meta_Sym_shareCommon(v___x_2417_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
if (lean_obj_tag(v___x_2418_) == 0)
{
lean_object* v_a_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; 
v_a_2419_ = lean_ctor_get(v___x_2418_, 0);
lean_inc_n(v_a_2419_, 2);
lean_dec_ref_known(v___x_2418_, 1);
v___x_2420_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2);
lean_inc_ref(v_h_2338_);
lean_inc_ref(v_c_x27_2337_);
lean_inc_ref(v_c_2333_);
v___x_2421_ = l_Lean_mkApp4(v___x_2420_, v_c_2333_, v_c_x27_2337_, v_h_2338_, v_a_2419_);
v___x_2422_ = lean_mk_empty_array_with_capacity(v___x_2397_);
v___x_2423_ = lean_array_push(v___x_2422_, v___x_2421_);
lean_inc_ref(v_a_2335_);
v___x_2424_ = l_Lean_Expr_betaRev(v_a_2335_, v___x_2423_, v___x_2403_, v___x_2403_);
lean_dec_ref(v___x_2423_);
v___x_2425_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2424_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2438_; 
v_a_2426_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2428_ = v___x_2425_;
v_isShared_2429_ = v_isSharedCheck_2438_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2425_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2438_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2436_; 
v___x_2430_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4));
v___x_2431_ = l_Lean_Expr_constLevels_x21(v_f_2331_);
v___x_2432_ = l_Lean_mkConst(v___x_2430_, v___x_2431_);
v___x_2433_ = l_Lean_mkApp8(v___x_2432_, v_00_u03b1_2332_, v_c_2333_, v_inst_2334_, v_a_2335_, v_b_2336_, v_c_x27_2337_, v_h_2338_, v_a_2419_);
v___x_2434_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2434_, 0, v_a_2426_);
lean_ctor_set(v___x_2434_, 1, v___x_2433_);
lean_ctor_set_uint8(v___x_2434_, sizeof(void*)*2, v___x_2403_);
lean_ctor_set_uint8(v___x_2434_, sizeof(void*)*2 + 1, v_contextDependent_2407_);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 0, v___x_2434_);
v___x_2436_ = v___x_2428_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v___x_2434_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
else
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2446_; 
lean_dec(v_a_2419_);
lean_dec_ref(v_h_2338_);
lean_dec_ref(v_c_x27_2337_);
lean_dec_ref(v_b_2336_);
lean_dec_ref(v_a_2335_);
lean_dec_ref(v_inst_2334_);
lean_dec_ref(v_c_2333_);
lean_dec_ref(v_00_u03b1_2332_);
v_a_2439_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2441_ = v___x_2425_;
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2425_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v___x_2444_; 
if (v_isShared_2442_ == 0)
{
v___x_2444_ = v___x_2441_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v_a_2439_);
v___x_2444_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
return v___x_2444_;
}
}
}
}
else
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2454_; 
lean_dec_ref(v_h_2338_);
lean_dec_ref(v_c_x27_2337_);
lean_dec_ref(v_b_2336_);
lean_dec_ref(v_a_2335_);
lean_dec_ref(v_inst_2334_);
lean_dec_ref(v_c_2333_);
lean_dec_ref(v_00_u03b1_2332_);
v_a_2447_ = lean_ctor_get(v___x_2418_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2418_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2449_ = v___x_2418_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2418_);
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
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
lean_dec_ref(v___x_2410_);
lean_dec_ref(v_fallback_2340_);
v___x_2455_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5);
lean_inc_ref(v_c_x27_2337_);
v___x_2456_ = l_Lean_mkApp3(v___x_2455_, v_c_x27_2337_, v_inst_x27_2339_, v_proof_2406_);
v___x_2457_ = l_Lean_Meta_Sym_shareCommon(v___x_2456_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc_n(v_a_2458_, 2);
lean_dec_ref_known(v___x_2457_, 1);
v___x_2459_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7);
lean_inc_ref(v_h_2338_);
lean_inc_ref(v_c_x27_2337_);
lean_inc_ref(v_c_2333_);
v___x_2460_ = l_Lean_mkApp4(v___x_2459_, v_c_2333_, v_c_x27_2337_, v_h_2338_, v_a_2458_);
v___x_2461_ = lean_mk_empty_array_with_capacity(v___x_2397_);
v___x_2462_ = lean_array_push(v___x_2461_, v___x_2460_);
lean_inc_ref(v_b_2336_);
v___x_2463_ = l_Lean_Expr_betaRev(v_b_2336_, v___x_2462_, v___x_2403_, v___x_2403_);
lean_dec_ref(v___x_2462_);
v___x_2464_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2463_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2477_; 
v_a_2465_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2467_ = v___x_2464_;
v_isShared_2468_ = v_isSharedCheck_2477_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2464_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2477_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2475_; 
v___x_2469_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9));
v___x_2470_ = l_Lean_Expr_constLevels_x21(v_f_2331_);
v___x_2471_ = l_Lean_mkConst(v___x_2469_, v___x_2470_);
v___x_2472_ = l_Lean_mkApp8(v___x_2471_, v_00_u03b1_2332_, v_c_2333_, v_inst_2334_, v_a_2335_, v_b_2336_, v_c_x27_2337_, v_h_2338_, v_a_2458_);
v___x_2473_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2473_, 0, v_a_2465_);
lean_ctor_set(v___x_2473_, 1, v___x_2472_);
lean_ctor_set_uint8(v___x_2473_, sizeof(void*)*2, v___x_2403_);
lean_ctor_set_uint8(v___x_2473_, sizeof(void*)*2 + 1, v_contextDependent_2407_);
if (v_isShared_2468_ == 0)
{
lean_ctor_set(v___x_2467_, 0, v___x_2473_);
v___x_2475_ = v___x_2467_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v___x_2473_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
else
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2485_; 
lean_dec(v_a_2458_);
lean_dec_ref(v_h_2338_);
lean_dec_ref(v_c_x27_2337_);
lean_dec_ref(v_b_2336_);
lean_dec_ref(v_a_2335_);
lean_dec_ref(v_inst_2334_);
lean_dec_ref(v_c_2333_);
lean_dec_ref(v_00_u03b1_2332_);
v_a_2478_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2480_ = v___x_2464_;
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v___x_2464_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2483_; 
if (v_isShared_2481_ == 0)
{
v___x_2483_ = v___x_2480_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_a_2478_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
}
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_dec_ref(v_h_2338_);
lean_dec_ref(v_c_x27_2337_);
lean_dec_ref(v_b_2336_);
lean_dec_ref(v_a_2335_);
lean_dec_ref(v_inst_2334_);
lean_dec_ref(v_c_2333_);
lean_dec_ref(v_00_u03b1_2332_);
v_a_2486_ = lean_ctor_get(v___x_2457_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2457_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2457_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
}
else
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2501_; 
lean_dec_ref(v_proof_2406_);
lean_dec_ref(v_fallback_2340_);
lean_dec_ref(v_inst_x27_2339_);
lean_dec_ref(v_h_2338_);
lean_dec_ref(v_c_x27_2337_);
lean_dec_ref(v_b_2336_);
lean_dec_ref(v_a_2335_);
lean_dec_ref(v_inst_2334_);
lean_dec_ref(v_c_2333_);
lean_dec_ref(v_00_u03b1_2332_);
v_a_2494_ = lean_ctor_get(v___x_2408_, 0);
v_isSharedCheck_2501_ = !lean_is_exclusive(v___x_2408_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2496_ = v___x_2408_;
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2408_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2499_; 
if (v_isShared_2497_ == 0)
{
v___x_2499_ = v___x_2496_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_a_2494_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2400_);
lean_dec(v_a_2396_);
lean_dec_ref(v___x_2394_);
lean_dec_ref(v_fallback_2340_);
lean_dec_ref(v_inst_x27_2339_);
lean_dec_ref(v_h_2338_);
lean_dec_ref(v_c_x27_2337_);
lean_dec_ref(v_b_2336_);
lean_dec_ref(v_a_2335_);
lean_dec_ref(v_inst_2334_);
lean_dec_ref(v_c_2333_);
lean_dec_ref(v_00_u03b1_2332_);
return v___x_2401_;
}
}
else
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2523_; 
lean_dec_ref(v___x_2394_);
lean_dec_ref(v_fallback_2340_);
lean_dec_ref(v_inst_x27_2339_);
lean_dec_ref(v_h_2338_);
lean_dec_ref(v_c_x27_2337_);
lean_dec_ref(v_b_2336_);
lean_dec_ref(v_a_2335_);
lean_dec_ref(v_inst_2334_);
lean_dec_ref(v_c_2333_);
lean_dec_ref(v_00_u03b1_2332_);
v_a_2516_ = lean_ctor_get(v___x_2395_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2518_ = v___x_2395_;
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v___x_2395_);
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
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2531_; 
lean_dec_ref(v_fallback_2340_);
lean_dec_ref(v_inst_x27_2339_);
lean_dec_ref(v_h_2338_);
lean_dec_ref(v_c_x27_2337_);
lean_dec_ref(v_b_2336_);
lean_dec_ref(v_a_2335_);
lean_dec_ref(v_inst_2334_);
lean_dec_ref(v_c_2333_);
lean_dec_ref(v_00_u03b1_2332_);
v_a_2524_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2526_ = v___x_2355_;
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2355_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2529_; 
if (v_isShared_2527_ == 0)
{
v___x_2529_ = v___x_2526_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_a_2524_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
return v___x_2529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr___boxed(lean_object** _args){
lean_object* v_f_2532_ = _args[0];
lean_object* v_00_u03b1_2533_ = _args[1];
lean_object* v_c_2534_ = _args[2];
lean_object* v_inst_2535_ = _args[3];
lean_object* v_a_2536_ = _args[4];
lean_object* v_b_2537_ = _args[5];
lean_object* v_c_x27_2538_ = _args[6];
lean_object* v_h_2539_ = _args[7];
lean_object* v_inst_x27_2540_ = _args[8];
lean_object* v_fallback_2541_ = _args[9];
lean_object* v_a_2542_ = _args[10];
lean_object* v_a_2543_ = _args[11];
lean_object* v_a_2544_ = _args[12];
lean_object* v_a_2545_ = _args[13];
lean_object* v_a_2546_ = _args[14];
lean_object* v_a_2547_ = _args[15];
lean_object* v_a_2548_ = _args[16];
lean_object* v_a_2549_ = _args[17];
lean_object* v_a_2550_ = _args[18];
lean_object* v_a_2551_ = _args[19];
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr(v_f_2532_, v_00_u03b1_2533_, v_c_2534_, v_inst_2535_, v_a_2536_, v_b_2537_, v_c_x27_2538_, v_h_2539_, v_inst_x27_2540_, v_fallback_2541_, v_a_2542_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
lean_dec(v_a_2550_);
lean_dec_ref(v_a_2549_);
lean_dec(v_a_2548_);
lean_dec_ref(v_a_2547_);
lean_dec(v_a_2546_);
lean_dec_ref(v_a_2545_);
lean_dec(v_a_2544_);
lean_dec_ref(v_a_2543_);
lean_dec(v_a_2542_);
lean_dec_ref(v_f_2532_);
return v_res_2552_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2(void){
_start:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_unsigned_to_nat(0u);
v___x_2557_ = l_Lean_mkBVar(v___x_2556_);
return v___x_2557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2(lean_object* v_proof_2563_, lean_object* v_arg_2564_, lean_object* v_e_x27_2565_, lean_object* v_arg_2566_, uint8_t v_a_2567_, lean_object* v_arg_2568_, lean_object* v___x_2569_, lean_object* v_snd_2570_, lean_object* v_e_2571_, uint8_t v___x_2572_, uint8_t v_contextDependent_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
lean_object* v___x_2584_; 
v___x_2584_ = l_Lean_Meta_Sym_shareCommon(v_proof_2563_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v_a_2585_; lean_object* v___x_2586_; uint8_t v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
v_a_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc_n(v_a_2585_, 2);
lean_dec_ref_known(v___x_2584_, 1);
v___x_2586_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__1));
v___x_2587_ = 0;
v___x_2588_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2);
v___x_2589_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2);
lean_inc_ref_n(v_e_x27_2565_, 2);
lean_inc_ref(v_arg_2564_);
v___x_2590_ = l_Lean_mkApp4(v___x_2588_, v_arg_2564_, v_e_x27_2565_, v_a_2585_, v___x_2589_);
v___x_2591_ = lean_unsigned_to_nat(1u);
v___x_2592_ = lean_mk_empty_array_with_capacity(v___x_2591_);
lean_inc_ref(v___x_2592_);
v___x_2593_ = lean_array_push(v___x_2592_, v___x_2590_);
v___x_2594_ = l_Lean_Expr_betaRev(v_arg_2566_, v___x_2593_, v_a_2567_, v_a_2567_);
lean_dec_ref(v___x_2593_);
v___x_2595_ = l_Lean_mkLambda(v___x_2586_, v___x_2587_, v_e_x27_2565_, v___x_2594_);
v___x_2596_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2595_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_object* v_a_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v_a_2597_ = lean_ctor_get(v___x_2596_, 0);
lean_inc(v_a_2597_);
lean_dec_ref_known(v___x_2596_, 1);
lean_inc_ref_n(v_e_x27_2565_, 2);
v___x_2598_ = l_Lean_mkNot(v_e_x27_2565_);
v___x_2599_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7);
lean_inc(v_a_2585_);
v___x_2600_ = l_Lean_mkApp4(v___x_2599_, v_arg_2564_, v_e_x27_2565_, v_a_2585_, v___x_2589_);
v___x_2601_ = lean_array_push(v___x_2592_, v___x_2600_);
v___x_2602_ = l_Lean_Expr_betaRev(v_arg_2568_, v___x_2601_, v_a_2567_, v_a_2567_);
lean_dec_ref(v___x_2601_);
v___x_2603_ = l_Lean_mkLambda(v___x_2586_, v___x_2587_, v___x_2598_, v___x_2602_);
v___x_2604_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2603_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
if (lean_obj_tag(v___x_2604_) == 0)
{
lean_object* v_a_2605_; lean_object* v___x_2606_; 
v_a_2605_ = lean_ctor_get(v___x_2604_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v___x_2604_, 1);
lean_inc_ref(v_snd_2570_);
lean_inc_ref(v_e_x27_2565_);
v___x_2606_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0(v___x_2569_, v_e_x27_2565_, v_snd_2570_, v_a_2597_, v_a_2605_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2618_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2609_ = v___x_2606_;
v_isShared_2610_ = v_isSharedCheck_2618_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2606_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2618_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2616_; 
v___x_2611_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4));
v___x_2612_ = l_Lean_Expr_replaceFn(v_e_2571_, v___x_2611_);
v___x_2613_ = l_Lean_mkApp3(v___x_2612_, v_e_x27_2565_, v_snd_2570_, v_a_2585_);
v___x_2614_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2614_, 0, v_a_2607_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
lean_ctor_set_uint8(v___x_2614_, sizeof(void*)*2, v___x_2572_);
lean_ctor_set_uint8(v___x_2614_, sizeof(void*)*2 + 1, v_contextDependent_2573_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 0, v___x_2614_);
v___x_2616_ = v___x_2609_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v___x_2614_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
lean_dec(v_a_2585_);
lean_dec_ref(v_e_2571_);
lean_dec_ref(v_snd_2570_);
lean_dec_ref(v_e_x27_2565_);
v_a_2619_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2606_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2606_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
else
{
lean_object* v_a_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2634_; 
lean_dec(v_a_2597_);
lean_dec(v_a_2585_);
lean_dec_ref(v_e_2571_);
lean_dec_ref(v_snd_2570_);
lean_dec_ref(v___x_2569_);
lean_dec_ref(v_e_x27_2565_);
v_a_2627_ = lean_ctor_get(v___x_2604_, 0);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2629_ = v___x_2604_;
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_a_2627_);
lean_dec(v___x_2604_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2632_; 
if (v_isShared_2630_ == 0)
{
v___x_2632_ = v___x_2629_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v_a_2627_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
}
}
else
{
lean_object* v_a_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2642_; 
lean_dec_ref(v___x_2592_);
lean_dec(v_a_2585_);
lean_dec_ref(v_e_2571_);
lean_dec_ref(v_snd_2570_);
lean_dec_ref(v___x_2569_);
lean_dec_ref(v_arg_2568_);
lean_dec_ref(v_e_x27_2565_);
lean_dec_ref(v_arg_2564_);
v_a_2635_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2642_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2642_ == 0)
{
v___x_2637_ = v___x_2596_;
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_a_2635_);
lean_dec(v___x_2596_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2640_; 
if (v_isShared_2638_ == 0)
{
v___x_2640_ = v___x_2637_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v_a_2635_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
return v___x_2640_;
}
}
}
}
else
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
lean_dec_ref(v_e_2571_);
lean_dec_ref(v_snd_2570_);
lean_dec_ref(v___x_2569_);
lean_dec_ref(v_arg_2568_);
lean_dec_ref(v_arg_2566_);
lean_dec_ref(v_e_x27_2565_);
lean_dec_ref(v_arg_2564_);
v_a_2643_ = lean_ctor_get(v___x_2584_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2584_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2584_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2584_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___boxed(lean_object** _args){
lean_object* v_proof_2651_ = _args[0];
lean_object* v_arg_2652_ = _args[1];
lean_object* v_e_x27_2653_ = _args[2];
lean_object* v_arg_2654_ = _args[3];
lean_object* v_a_2655_ = _args[4];
lean_object* v_arg_2656_ = _args[5];
lean_object* v___x_2657_ = _args[6];
lean_object* v_snd_2658_ = _args[7];
lean_object* v_e_2659_ = _args[8];
lean_object* v___x_2660_ = _args[9];
lean_object* v_contextDependent_2661_ = _args[10];
lean_object* v___y_2662_ = _args[11];
lean_object* v___y_2663_ = _args[12];
lean_object* v___y_2664_ = _args[13];
lean_object* v___y_2665_ = _args[14];
lean_object* v___y_2666_ = _args[15];
lean_object* v___y_2667_ = _args[16];
lean_object* v___y_2668_ = _args[17];
lean_object* v___y_2669_ = _args[18];
lean_object* v___y_2670_ = _args[19];
lean_object* v___y_2671_ = _args[20];
_start:
{
uint8_t v_a_30542__boxed_2672_; uint8_t v___x_30546__boxed_2673_; uint8_t v_contextDependent_30547__boxed_2674_; lean_object* v_res_2675_; 
v_a_30542__boxed_2672_ = lean_unbox(v_a_2655_);
v___x_30546__boxed_2673_ = lean_unbox(v___x_2660_);
v_contextDependent_30547__boxed_2674_ = lean_unbox(v_contextDependent_2661_);
v_res_2675_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2(v_proof_2651_, v_arg_2652_, v_e_x27_2653_, v_arg_2654_, v_a_30542__boxed_2672_, v_arg_2656_, v___x_2657_, v_snd_2658_, v_e_2659_, v___x_30546__boxed_2673_, v_contextDependent_30547__boxed_2674_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_);
lean_dec(v___y_2670_);
lean_dec_ref(v___y_2669_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
lean_dec(v___y_2662_);
return v_res_2675_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; 
v___x_2682_ = lean_box(0);
v___x_2683_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__3));
v___x_2684_ = l_Lean_mkConst(v___x_2683_, v___x_2682_);
return v___x_2684_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2685_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__4, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__4_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__4);
v___x_2686_ = lean_unsigned_to_nat(1u);
v___x_2687_ = lean_mk_empty_array_with_capacity(v___x_2686_);
v___x_2688_ = lean_array_push(v___x_2687_, v___x_2685_);
return v___x_2688_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2695_ = lean_box(0);
v___x_2696_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__8));
v___x_2697_ = l_Lean_mkConst(v___x_2696_, v___x_2695_);
return v___x_2697_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__10(void){
_start:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2698_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__9, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__9_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__9);
v___x_2699_ = lean_unsigned_to_nat(1u);
v___x_2700_ = lean_mk_empty_array_with_capacity(v___x_2699_);
v___x_2701_ = lean_array_push(v___x_2700_, v___x_2698_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0(uint8_t v___x_2710_, lean_object* v_e_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_){
_start:
{
lean_object* v___x_2725_; uint8_t v___x_2726_; 
lean_inc_ref(v_e_2711_);
v___x_2725_ = l_Lean_Expr_cleanupAnnotations(v_e_2711_);
v___x_2726_ = l_Lean_Expr_isApp(v___x_2725_);
if (v___x_2726_ == 0)
{
lean_dec_ref(v___x_2725_);
lean_dec_ref(v_e_2711_);
goto v___jp_2722_;
}
else
{
lean_object* v_arg_2727_; lean_object* v___x_2728_; uint8_t v___x_2729_; 
v_arg_2727_ = lean_ctor_get(v___x_2725_, 1);
lean_inc_ref(v_arg_2727_);
v___x_2728_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2725_);
v___x_2729_ = l_Lean_Expr_isApp(v___x_2728_);
if (v___x_2729_ == 0)
{
lean_dec_ref(v___x_2728_);
lean_dec_ref(v_arg_2727_);
lean_dec_ref(v_e_2711_);
goto v___jp_2722_;
}
else
{
lean_object* v_arg_2730_; lean_object* v___x_2731_; uint8_t v___x_2732_; 
v_arg_2730_ = lean_ctor_get(v___x_2728_, 1);
lean_inc_ref(v_arg_2730_);
v___x_2731_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2728_);
v___x_2732_ = l_Lean_Expr_isApp(v___x_2731_);
if (v___x_2732_ == 0)
{
lean_dec_ref(v___x_2731_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
lean_dec_ref(v_e_2711_);
goto v___jp_2722_;
}
else
{
lean_object* v_arg_2733_; lean_object* v___x_2734_; uint8_t v___x_2735_; 
v_arg_2733_ = lean_ctor_get(v___x_2731_, 1);
lean_inc_ref(v_arg_2733_);
v___x_2734_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2731_);
v___x_2735_ = l_Lean_Expr_isApp(v___x_2734_);
if (v___x_2735_ == 0)
{
lean_dec_ref(v___x_2734_);
lean_dec_ref(v_arg_2733_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
lean_dec_ref(v_e_2711_);
goto v___jp_2722_;
}
else
{
lean_object* v_arg_2736_; lean_object* v___x_2737_; uint8_t v___x_2738_; 
v_arg_2736_ = lean_ctor_get(v___x_2734_, 1);
lean_inc_ref(v_arg_2736_);
v___x_2737_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2734_);
v___x_2738_ = l_Lean_Expr_isApp(v___x_2737_);
if (v___x_2738_ == 0)
{
lean_dec_ref(v___x_2737_);
lean_dec_ref(v_arg_2736_);
lean_dec_ref(v_arg_2733_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
lean_dec_ref(v_e_2711_);
goto v___jp_2722_;
}
else
{
lean_object* v_arg_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; uint8_t v___x_2742_; 
v_arg_2739_ = lean_ctor_get(v___x_2737_, 1);
lean_inc_ref(v_arg_2739_);
v___x_2740_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2737_);
v___x_2741_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__1));
v___x_2742_ = l_Lean_Expr_isConstOf(v___x_2740_, v___x_2741_);
if (v___x_2742_ == 0)
{
lean_dec_ref(v___x_2740_);
lean_dec_ref(v_arg_2739_);
lean_dec_ref(v_arg_2736_);
lean_dec_ref(v_arg_2733_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
lean_dec_ref(v_e_2711_);
goto v___jp_2722_;
}
else
{
lean_object* v___x_2743_; 
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
lean_inc(v___y_2716_);
lean_inc_ref(v___y_2715_);
lean_inc(v___y_2714_);
lean_inc_ref(v___y_2713_);
lean_inc(v___y_2712_);
lean_inc_ref(v_arg_2736_);
v___x_2743_ = lean_sym_simp(v_arg_2736_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v_a_2744_; 
v_a_2744_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2744_);
lean_dec_ref_known(v___x_2743_, 1);
if (lean_obj_tag(v_a_2744_) == 0)
{
uint8_t v_contextDependent_2745_; lean_object* v___x_2746_; 
lean_dec_ref(v_e_2711_);
v_contextDependent_2745_ = lean_ctor_get_uint8(v_a_2744_, 1);
lean_dec_ref_known(v_a_2744_, 0);
v___x_2746_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_2736_, v___y_2715_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; uint8_t v___x_2748_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc(v_a_2747_);
lean_dec_ref_known(v___x_2746_, 1);
v___x_2748_ = lean_unbox(v_a_2747_);
if (v___x_2748_ == 0)
{
lean_object* v___x_2749_; 
v___x_2749_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_arg_2736_, v___y_2715_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; uint8_t v___x_2751_; 
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
lean_inc(v_a_2750_);
lean_dec_ref_known(v___x_2749_, 1);
v___x_2751_ = lean_unbox(v_a_2750_);
lean_dec(v_a_2750_);
if (v___x_2751_ == 0)
{
lean_object* v___x_2752_; lean_object* v___f_2753_; lean_object* v___x_2754_; 
lean_dec(v_a_2747_);
v___x_2752_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_2742_, v_contextDependent_2745_);
v___f_2753_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2753_, 0, v___x_2752_);
v___x_2754_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable(v___x_2740_, v_arg_2739_, v_arg_2736_, v_arg_2733_, v_arg_2730_, v_arg_2727_, v___f_2753_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
lean_dec_ref(v___x_2740_);
return v___x_2754_;
}
else
{
lean_object* v___x_2755_; uint8_t v___x_2756_; uint8_t v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
lean_dec_ref(v_arg_2736_);
lean_dec_ref(v_arg_2733_);
v___x_2755_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__5, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__5);
v___x_2756_ = lean_unbox(v_a_2747_);
v___x_2757_ = lean_unbox(v_a_2747_);
lean_inc_ref(v_arg_2727_);
v___x_2758_ = l_Lean_Expr_betaRev(v_arg_2727_, v___x_2755_, v___x_2756_, v___x_2757_);
v___x_2759_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2758_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
if (lean_obj_tag(v___x_2759_) == 0)
{
lean_object* v_a_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2773_; 
v_a_2760_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2762_ = v___x_2759_;
v_isShared_2763_ = v_isSharedCheck_2773_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_a_2760_);
lean_dec(v___x_2759_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2773_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; uint8_t v___x_2769_; lean_object* v___x_2771_; 
v___x_2764_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__6));
v___x_2765_ = l_Lean_Expr_constLevels_x21(v___x_2740_);
lean_dec_ref(v___x_2740_);
v___x_2766_ = l_Lean_mkConst(v___x_2764_, v___x_2765_);
v___x_2767_ = l_Lean_mkApp3(v___x_2766_, v_arg_2739_, v_arg_2730_, v_arg_2727_);
v___x_2768_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2768_, 0, v_a_2760_);
lean_ctor_set(v___x_2768_, 1, v___x_2767_);
v___x_2769_ = lean_unbox(v_a_2747_);
lean_dec(v_a_2747_);
lean_ctor_set_uint8(v___x_2768_, sizeof(void*)*2, v___x_2769_);
lean_ctor_set_uint8(v___x_2768_, sizeof(void*)*2 + 1, v_contextDependent_2745_);
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 0, v___x_2768_);
v___x_2771_ = v___x_2762_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2768_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_dec(v_a_2747_);
lean_dec_ref(v___x_2740_);
lean_dec_ref(v_arg_2739_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
v_a_2774_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2759_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2759_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec(v_a_2747_);
lean_dec_ref(v___x_2740_);
lean_dec_ref(v_arg_2739_);
lean_dec_ref(v_arg_2736_);
lean_dec_ref(v_arg_2733_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
v_a_2782_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2749_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2749_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
else
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
lean_dec(v_a_2747_);
lean_dec_ref(v_arg_2736_);
lean_dec_ref(v_arg_2733_);
v___x_2790_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__10, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__10_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__10);
lean_inc_ref(v_arg_2730_);
v___x_2791_ = l_Lean_Expr_betaRev(v_arg_2730_, v___x_2790_, v___x_2710_, v___x_2710_);
v___x_2792_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2791_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
if (lean_obj_tag(v___x_2792_) == 0)
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2805_; 
v_a_2793_ = lean_ctor_get(v___x_2792_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___x_2792_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2795_ = v___x_2792_;
v_isShared_2796_ = v_isSharedCheck_2805_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v___x_2792_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2805_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2803_; 
v___x_2797_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__11));
v___x_2798_ = l_Lean_Expr_constLevels_x21(v___x_2740_);
lean_dec_ref(v___x_2740_);
v___x_2799_ = l_Lean_mkConst(v___x_2797_, v___x_2798_);
v___x_2800_ = l_Lean_mkApp3(v___x_2799_, v_arg_2739_, v_arg_2730_, v_arg_2727_);
v___x_2801_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2801_, 0, v_a_2793_);
lean_ctor_set(v___x_2801_, 1, v___x_2800_);
lean_ctor_set_uint8(v___x_2801_, sizeof(void*)*2, v___x_2710_);
lean_ctor_set_uint8(v___x_2801_, sizeof(void*)*2 + 1, v_contextDependent_2745_);
if (v_isShared_2796_ == 0)
{
lean_ctor_set(v___x_2795_, 0, v___x_2801_);
v___x_2803_ = v___x_2795_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v___x_2801_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
else
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
lean_dec_ref(v___x_2740_);
lean_dec_ref(v_arg_2739_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
v_a_2806_ = lean_ctor_get(v___x_2792_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2792_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2808_ = v___x_2792_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___x_2792_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2806_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
}
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2821_; 
lean_dec_ref(v___x_2740_);
lean_dec_ref(v_arg_2739_);
lean_dec_ref(v_arg_2736_);
lean_dec_ref(v_arg_2733_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
v_a_2814_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2816_ = v___x_2746_;
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_a_2814_);
lean_dec(v___x_2746_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
lean_object* v___x_2819_; 
if (v_isShared_2817_ == 0)
{
v___x_2819_ = v___x_2816_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_a_2814_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
}
}
else
{
lean_object* v_e_x27_2822_; lean_object* v_proof_2823_; uint8_t v_contextDependent_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2954_; 
v_e_x27_2822_ = lean_ctor_get(v_a_2744_, 0);
v_proof_2823_ = lean_ctor_get(v_a_2744_, 1);
v_contextDependent_2824_ = lean_ctor_get_uint8(v_a_2744_, sizeof(void*)*2 + 1);
v_isSharedCheck_2954_ = !lean_is_exclusive(v_a_2744_);
if (v_isSharedCheck_2954_ == 0)
{
v___x_2826_ = v_a_2744_;
v_isShared_2827_ = v_isSharedCheck_2954_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_proof_2823_);
lean_inc(v_e_x27_2822_);
lean_dec(v_a_2744_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2954_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2828_; 
v___x_2828_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_2822_, v___y_2715_);
if (lean_obj_tag(v___x_2828_) == 0)
{
lean_object* v_a_2829_; uint8_t v___x_2830_; 
v_a_2829_ = lean_ctor_get(v___x_2828_, 0);
lean_inc(v_a_2829_);
lean_dec_ref_known(v___x_2828_, 1);
v___x_2830_ = lean_unbox(v_a_2829_);
if (v___x_2830_ == 0)
{
lean_object* v___x_2831_; 
v___x_2831_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_2822_, v___y_2715_);
lean_dec_ref(v_e_x27_2822_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v_a_2832_; uint8_t v___x_2833_; 
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_a_2832_);
lean_dec_ref_known(v___x_2831_, 1);
v___x_2833_ = lean_unbox(v_a_2832_);
if (v___x_2833_ == 0)
{
lean_object* v___x_2834_; 
lean_dec(v_a_2829_);
lean_del_object(v___x_2826_);
lean_dec_ref(v_proof_2823_);
lean_inc_ref(v_arg_2733_);
v___x_2834_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance(v_arg_2733_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
if (lean_obj_tag(v___x_2834_) == 0)
{
lean_object* v_a_2835_; lean_object* v_fst_2836_; 
v_a_2835_ = lean_ctor_get(v___x_2834_, 0);
lean_inc(v_a_2835_);
lean_dec_ref_known(v___x_2834_, 1);
v_fst_2836_ = lean_ctor_get(v_a_2835_, 0);
lean_inc(v_fst_2836_);
if (lean_obj_tag(v_fst_2836_) == 0)
{
uint8_t v_contextDependent_2837_; lean_object* v___x_2838_; lean_object* v___f_2839_; lean_object* v___x_2840_; 
lean_dec(v_a_2835_);
lean_dec(v_a_2832_);
lean_dec_ref(v_e_2711_);
v_contextDependent_2837_ = lean_ctor_get_uint8(v_fst_2836_, 1);
lean_dec_ref_known(v_fst_2836_, 0);
v___x_2838_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_2742_, v_contextDependent_2837_);
v___f_2839_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2839_, 0, v___x_2838_);
v___x_2840_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable(v___x_2740_, v_arg_2739_, v_arg_2736_, v_arg_2733_, v_arg_2730_, v_arg_2727_, v___f_2839_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
lean_dec_ref(v___x_2740_);
return v___x_2840_;
}
else
{
lean_object* v_snd_2841_; lean_object* v_e_x27_2842_; lean_object* v_proof_2843_; uint8_t v_contextDependent_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___f_2849_; lean_object* v___x_2850_; 
v_snd_2841_ = lean_ctor_get(v_a_2835_, 1);
lean_inc_n(v_snd_2841_, 2);
lean_dec(v_a_2835_);
v_e_x27_2842_ = lean_ctor_get(v_fst_2836_, 0);
lean_inc_ref_n(v_e_x27_2842_, 2);
v_proof_2843_ = lean_ctor_get(v_fst_2836_, 1);
lean_inc_ref_n(v_proof_2843_, 2);
v_contextDependent_2844_ = lean_ctor_get_uint8(v_fst_2836_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_fst_2836_, 2);
v___x_2845_ = lean_unsigned_to_nat(4u);
v___x_2846_ = l_Lean_Expr_getBoundedAppFn(v___x_2845_, v_e_2711_);
v___x_2847_ = lean_box(v___x_2742_);
v___x_2848_ = lean_box(v_contextDependent_2844_);
lean_inc_ref(v_arg_2727_);
lean_inc_ref(v_arg_2730_);
lean_inc_ref(v_arg_2736_);
v___f_2849_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___boxed), 21, 11);
lean_closure_set(v___f_2849_, 0, v_proof_2843_);
lean_closure_set(v___f_2849_, 1, v_arg_2736_);
lean_closure_set(v___f_2849_, 2, v_e_x27_2842_);
lean_closure_set(v___f_2849_, 3, v_arg_2730_);
lean_closure_set(v___f_2849_, 4, v_a_2832_);
lean_closure_set(v___f_2849_, 5, v_arg_2727_);
lean_closure_set(v___f_2849_, 6, v___x_2846_);
lean_closure_set(v___f_2849_, 7, v_snd_2841_);
lean_closure_set(v___f_2849_, 8, v_e_2711_);
lean_closure_set(v___f_2849_, 9, v___x_2847_);
lean_closure_set(v___f_2849_, 10, v___x_2848_);
v___x_2850_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr(v___x_2740_, v_arg_2739_, v_arg_2736_, v_arg_2733_, v_arg_2730_, v_arg_2727_, v_e_x27_2842_, v_proof_2843_, v_snd_2841_, v___f_2849_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
lean_dec_ref(v___x_2740_);
return v___x_2850_;
}
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2858_; 
lean_dec(v_a_2832_);
lean_dec_ref(v___x_2740_);
lean_dec_ref(v_arg_2739_);
lean_dec_ref(v_arg_2736_);
lean_dec_ref(v_arg_2733_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
lean_dec_ref(v_e_2711_);
v_a_2851_ = lean_ctor_get(v___x_2834_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v___x_2834_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2834_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2856_; 
if (v_isShared_2854_ == 0)
{
v___x_2856_ = v___x_2853_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_a_2851_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
}
else
{
lean_object* v___x_2859_; lean_object* v___x_2860_; 
lean_dec(v_a_2832_);
lean_dec_ref(v___x_2740_);
lean_dec_ref(v_arg_2739_);
lean_dec_ref(v_arg_2733_);
lean_dec_ref(v_arg_2730_);
lean_inc_ref(v_proof_2823_);
v___x_2859_ = l_Lean_Meta_mkOfEqFalseCore(v_arg_2736_, v_proof_2823_);
v___x_2860_ = l_Lean_Meta_Sym_shareCommon(v___x_2859_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v_a_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; uint8_t v___x_2865_; uint8_t v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
v_a_2861_ = lean_ctor_get(v___x_2860_, 0);
lean_inc(v_a_2861_);
lean_dec_ref_known(v___x_2860_, 1);
v___x_2862_ = lean_unsigned_to_nat(1u);
v___x_2863_ = lean_mk_empty_array_with_capacity(v___x_2862_);
v___x_2864_ = lean_array_push(v___x_2863_, v_a_2861_);
v___x_2865_ = lean_unbox(v_a_2829_);
v___x_2866_ = lean_unbox(v_a_2829_);
v___x_2867_ = l_Lean_Expr_betaRev(v_arg_2727_, v___x_2864_, v___x_2865_, v___x_2866_);
lean_dec_ref(v___x_2864_);
v___x_2868_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2867_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
if (lean_obj_tag(v___x_2868_) == 0)
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2883_; 
v_a_2869_ = lean_ctor_get(v___x_2868_, 0);
v_isSharedCheck_2883_ = !lean_is_exclusive(v___x_2868_);
if (v_isSharedCheck_2883_ == 0)
{
v___x_2871_ = v___x_2868_;
v_isShared_2872_ = v_isSharedCheck_2883_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v___x_2868_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2883_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2877_; 
v___x_2873_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__13));
v___x_2874_ = l_Lean_Expr_replaceFn(v_e_2711_, v___x_2873_);
v___x_2875_ = l_Lean_Expr_app___override(v___x_2874_, v_proof_2823_);
if (v_isShared_2827_ == 0)
{
lean_ctor_set(v___x_2826_, 1, v___x_2875_);
lean_ctor_set(v___x_2826_, 0, v_a_2869_);
v___x_2877_ = v___x_2826_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v_a_2869_);
lean_ctor_set(v_reuseFailAlloc_2882_, 1, v___x_2875_);
v___x_2877_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
uint8_t v___x_2878_; lean_object* v___x_2880_; 
v___x_2878_ = lean_unbox(v_a_2829_);
lean_dec(v_a_2829_);
lean_ctor_set_uint8(v___x_2877_, sizeof(void*)*2, v___x_2878_);
lean_ctor_set_uint8(v___x_2877_, sizeof(void*)*2 + 1, v_contextDependent_2824_);
if (v_isShared_2872_ == 0)
{
lean_ctor_set(v___x_2871_, 0, v___x_2877_);
v___x_2880_ = v___x_2871_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v___x_2877_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
else
{
lean_object* v_a_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2891_; 
lean_dec(v_a_2829_);
lean_del_object(v___x_2826_);
lean_dec_ref(v_proof_2823_);
lean_dec_ref(v_e_2711_);
v_a_2884_ = lean_ctor_get(v___x_2868_, 0);
v_isSharedCheck_2891_ = !lean_is_exclusive(v___x_2868_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2886_ = v___x_2868_;
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_a_2884_);
lean_dec(v___x_2868_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2889_; 
if (v_isShared_2887_ == 0)
{
v___x_2889_ = v___x_2886_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v_a_2884_);
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
lean_object* v_a_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2899_; 
lean_dec(v_a_2829_);
lean_del_object(v___x_2826_);
lean_dec_ref(v_proof_2823_);
lean_dec_ref(v_arg_2727_);
lean_dec_ref(v_e_2711_);
v_a_2892_ = lean_ctor_get(v___x_2860_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2894_ = v___x_2860_;
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_a_2892_);
lean_dec(v___x_2860_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2897_; 
if (v_isShared_2895_ == 0)
{
v___x_2897_ = v___x_2894_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_a_2892_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
}
}
else
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2907_; 
lean_dec(v_a_2829_);
lean_del_object(v___x_2826_);
lean_dec_ref(v_proof_2823_);
lean_dec_ref(v___x_2740_);
lean_dec_ref(v_arg_2739_);
lean_dec_ref(v_arg_2736_);
lean_dec_ref(v_arg_2733_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
lean_dec_ref(v_e_2711_);
v_a_2900_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2902_ = v___x_2831_;
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2831_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
}
else
{
lean_object* v___x_2908_; lean_object* v___x_2909_; 
lean_dec(v_a_2829_);
lean_dec_ref(v_e_x27_2822_);
lean_dec_ref(v___x_2740_);
lean_dec_ref(v_arg_2739_);
lean_dec_ref(v_arg_2733_);
lean_dec_ref(v_arg_2727_);
lean_inc_ref(v_proof_2823_);
v___x_2908_ = l_Lean_Meta_mkOfEqTrueCore(v_arg_2736_, v_proof_2823_);
v___x_2909_ = l_Lean_Meta_Sym_shareCommon(v___x_2908_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v_a_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v_a_2910_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_a_2910_);
lean_dec_ref_known(v___x_2909_, 1);
v___x_2911_ = lean_unsigned_to_nat(1u);
v___x_2912_ = lean_mk_empty_array_with_capacity(v___x_2911_);
v___x_2913_ = lean_array_push(v___x_2912_, v_a_2910_);
v___x_2914_ = l_Lean_Expr_betaRev(v_arg_2730_, v___x_2913_, v___x_2710_, v___x_2710_);
lean_dec_ref(v___x_2913_);
v___x_2915_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2914_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
if (lean_obj_tag(v___x_2915_) == 0)
{
lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2929_; 
v_a_2916_ = lean_ctor_get(v___x_2915_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2918_ = v___x_2915_;
v_isShared_2919_ = v_isSharedCheck_2929_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_dec(v___x_2915_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2929_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2924_; 
v___x_2920_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___closed__15));
v___x_2921_ = l_Lean_Expr_replaceFn(v_e_2711_, v___x_2920_);
v___x_2922_ = l_Lean_Expr_app___override(v___x_2921_, v_proof_2823_);
if (v_isShared_2827_ == 0)
{
lean_ctor_set(v___x_2826_, 1, v___x_2922_);
lean_ctor_set(v___x_2826_, 0, v_a_2916_);
v___x_2924_ = v___x_2826_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_a_2916_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v___x_2922_);
lean_ctor_set_uint8(v_reuseFailAlloc_2928_, sizeof(void*)*2 + 1, v_contextDependent_2824_);
v___x_2924_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
lean_object* v___x_2926_; 
lean_ctor_set_uint8(v___x_2924_, sizeof(void*)*2, v___x_2710_);
if (v_isShared_2919_ == 0)
{
lean_ctor_set(v___x_2918_, 0, v___x_2924_);
v___x_2926_ = v___x_2918_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v___x_2924_);
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
else
{
lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2937_; 
lean_del_object(v___x_2826_);
lean_dec_ref(v_proof_2823_);
lean_dec_ref(v_e_2711_);
v_a_2930_ = lean_ctor_get(v___x_2915_, 0);
v_isSharedCheck_2937_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_2937_ == 0)
{
v___x_2932_ = v___x_2915_;
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_a_2930_);
lean_dec(v___x_2915_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2935_; 
if (v_isShared_2933_ == 0)
{
v___x_2935_ = v___x_2932_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_a_2930_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
return v___x_2935_;
}
}
}
}
else
{
lean_object* v_a_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2945_; 
lean_del_object(v___x_2826_);
lean_dec_ref(v_proof_2823_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_e_2711_);
v_a_2938_ = lean_ctor_get(v___x_2909_, 0);
v_isSharedCheck_2945_ = !lean_is_exclusive(v___x_2909_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2940_ = v___x_2909_;
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_a_2938_);
lean_dec(v___x_2909_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2943_; 
if (v_isShared_2941_ == 0)
{
v___x_2943_ = v___x_2940_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v_a_2938_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
return v___x_2943_;
}
}
}
}
}
else
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2953_; 
lean_del_object(v___x_2826_);
lean_dec_ref(v_proof_2823_);
lean_dec_ref(v_e_x27_2822_);
lean_dec_ref(v___x_2740_);
lean_dec_ref(v_arg_2739_);
lean_dec_ref(v_arg_2736_);
lean_dec_ref(v_arg_2733_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
lean_dec_ref(v_e_2711_);
v_a_2946_ = lean_ctor_get(v___x_2828_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2828_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2948_ = v___x_2828_;
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v___x_2828_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_a_2946_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
return v___x_2951_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2740_);
lean_dec_ref(v_arg_2739_);
lean_dec_ref(v_arg_2736_);
lean_dec_ref(v_arg_2733_);
lean_dec_ref(v_arg_2730_);
lean_dec_ref(v_arg_2727_);
lean_dec_ref(v_e_2711_);
return v___x_2743_;
}
}
}
}
}
}
}
v___jp_2722_:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2723_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2723_, 0, v___x_2710_);
lean_ctor_set_uint8(v___x_2723_, 1, v___x_2710_);
v___x_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2723_);
return v___x_2724_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___boxed(lean_object* v___x_2955_, lean_object* v_e_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_){
_start:
{
uint8_t v___x_30813__boxed_2967_; lean_object* v_res_2968_; 
v___x_30813__boxed_2967_ = lean_unbox(v___x_2955_);
v_res_2968_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0(v___x_30813__boxed_2967_, v_e_2956_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_, v___y_2964_, v___y_2965_);
lean_dec(v___y_2965_);
lean_dec_ref(v___y_2964_);
lean_dec(v___y_2963_);
lean_dec_ref(v___y_2962_);
lean_dec(v___y_2961_);
lean_dec_ref(v___y_2960_);
lean_dec(v___y_2959_);
lean_dec_ref(v___y_2958_);
lean_dec(v___y_2957_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv(lean_object* v_e_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_){
_start:
{
lean_object* v_numArgs_2980_; lean_object* v___x_2981_; uint8_t v___x_2982_; 
v_numArgs_2980_ = l_Lean_Expr_getAppNumArgs(v_e_2969_);
v___x_2981_ = lean_unsigned_to_nat(5u);
v___x_2982_ = lean_nat_dec_lt(v_numArgs_2980_, v___x_2981_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; lean_object* v___f_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2983_ = lean_box(v___x_2982_);
v___f_2984_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___boxed), 12, 1);
lean_closure_set(v___f_2984_, 0, v___x_2983_);
v___x_2985_ = lean_nat_sub(v_numArgs_2980_, v___x_2981_);
lean_dec(v_numArgs_2980_);
v___x_2986_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_2969_, v___x_2985_, v___f_2984_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_);
lean_dec(v___x_2985_);
return v___x_2986_;
}
else
{
uint8_t v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; 
lean_dec(v_numArgs_2980_);
lean_dec_ref(v_e_2969_);
v___x_2987_ = 0;
v___x_2988_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2988_, 0, v___x_2982_);
lean_ctor_set_uint8(v___x_2988_, 1, v___x_2987_);
v___x_2989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2989_, 0, v___x_2988_);
return v___x_2989_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___boxed(lean_object* v_e_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_, lean_object* v_a_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_){
_start:
{
lean_object* v_res_3001_; 
v_res_3001_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv(v_e_2990_, v_a_2991_, v_a_2992_, v_a_2993_, v_a_2994_, v_a_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_);
lean_dec(v_a_2999_);
lean_dec_ref(v_a_2998_);
lean_dec(v_a_2997_);
lean_dec_ref(v_a_2996_);
lean_dec(v_a_2995_);
lean_dec_ref(v_a_2994_);
lean_dec(v_a_2993_);
lean_dec_ref(v_a_2992_);
lean_dec(v_a_2991_);
return v_res_3001_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_3003_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_));
v___x_3004_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_3005_ = l_Lean_Name_str___override(v___x_3004_, v___x_3003_);
return v___x_3005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3020_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_);
v___x_3021_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_));
v___x_3022_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___boxed), 11, 0);
v___x_3023_ = l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(v___x_3020_, v___x_3021_, v___x_3022_);
return v___x_3023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17____boxed(lean_object* v_a_3024_){
_start:
{
lean_object* v_res_3025_; 
v_res_3025_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_();
return v_res_3025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_19_(){
_start:
{
lean_object* v___x_3027_; uint8_t v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3027_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_);
v___x_3028_ = 0;
v___x_3029_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___boxed), 11, 0);
v___x_3030_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(v___x_3027_, v___x_3028_, v___x_3029_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_19____boxed(lean_object* v_a_3031_){
_start:
{
lean_object* v_res_3032_; 
v_res_3032_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_19_();
return v_res_3032_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2(void){
_start:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; 
v___x_3038_ = lean_box(0);
v___x_3039_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1));
v___x_3040_ = l_Lean_mkConst(v___x_3039_, v___x_3038_);
return v___x_3040_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5(void){
_start:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; 
v___x_3046_ = lean_box(0);
v___x_3047_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4));
v___x_3048_ = l_Lean_mkConst(v___x_3047_, v___x_3046_);
return v___x_3048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable(lean_object* v_p_3049_, lean_object* v_inst_3050_, lean_object* v_instToMatch_3051_, lean_object* v_fallback_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_){
_start:
{
lean_object* v___x_3063_; 
v___x_3063_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_instToMatch_3051_, v_a_3059_);
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v_a_3064_; lean_object* v___x_3065_; uint8_t v___x_3066_; 
v_a_3064_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_a_3064_);
lean_dec_ref_known(v___x_3063_, 1);
v___x_3065_ = l_Lean_Expr_cleanupAnnotations(v_a_3064_);
v___x_3066_ = l_Lean_Expr_isApp(v___x_3065_);
if (v___x_3066_ == 0)
{
lean_object* v___x_3067_; 
lean_dec_ref(v___x_3065_);
lean_dec_ref(v_inst_3050_);
lean_dec_ref(v_p_3049_);
lean_inc(v_a_3061_);
lean_inc_ref(v_a_3060_);
lean_inc(v_a_3059_);
lean_inc_ref(v_a_3058_);
lean_inc(v_a_3057_);
lean_inc_ref(v_a_3056_);
lean_inc(v_a_3055_);
lean_inc_ref(v_a_3054_);
lean_inc(v_a_3053_);
v___x_3067_ = lean_apply_10(v_fallback_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, lean_box(0));
return v___x_3067_;
}
else
{
lean_object* v_arg_3068_; lean_object* v___x_3069_; uint8_t v___x_3070_; 
v_arg_3068_ = lean_ctor_get(v___x_3065_, 1);
lean_inc_ref(v_arg_3068_);
v___x_3069_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3065_);
v___x_3070_ = l_Lean_Expr_isApp(v___x_3069_);
if (v___x_3070_ == 0)
{
lean_object* v___x_3071_; 
lean_dec_ref(v___x_3069_);
lean_dec_ref(v_arg_3068_);
lean_dec_ref(v_inst_3050_);
lean_dec_ref(v_p_3049_);
lean_inc(v_a_3061_);
lean_inc_ref(v_a_3060_);
lean_inc(v_a_3059_);
lean_inc_ref(v_a_3058_);
lean_inc(v_a_3057_);
lean_inc_ref(v_a_3056_);
lean_inc(v_a_3055_);
lean_inc_ref(v_a_3054_);
lean_inc(v_a_3053_);
v___x_3071_ = lean_apply_10(v_fallback_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, lean_box(0));
return v___x_3071_;
}
else
{
lean_object* v_arg_3072_; lean_object* v___x_3073_; uint8_t v___x_3074_; 
v_arg_3072_ = lean_ctor_get(v___x_3069_, 1);
lean_inc_ref(v_arg_3072_);
v___x_3073_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3069_);
v___x_3074_ = l_Lean_Expr_isApp(v___x_3073_);
if (v___x_3074_ == 0)
{
lean_object* v___x_3075_; 
lean_dec_ref(v___x_3073_);
lean_dec_ref(v_arg_3072_);
lean_dec_ref(v_arg_3068_);
lean_dec_ref(v_inst_3050_);
lean_dec_ref(v_p_3049_);
lean_inc(v_a_3061_);
lean_inc_ref(v_a_3060_);
lean_inc(v_a_3059_);
lean_inc_ref(v_a_3058_);
lean_inc(v_a_3057_);
lean_inc_ref(v_a_3056_);
lean_inc(v_a_3055_);
lean_inc_ref(v_a_3054_);
lean_inc(v_a_3053_);
v___x_3075_ = lean_apply_10(v_fallback_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, lean_box(0));
return v___x_3075_;
}
else
{
lean_object* v___x_3076_; lean_object* v___x_3077_; uint8_t v___x_3078_; 
v___x_3076_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3073_);
v___x_3077_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__1));
v___x_3078_ = l_Lean_Expr_isConstOf(v___x_3076_, v___x_3077_);
lean_dec_ref(v___x_3076_);
if (v___x_3078_ == 0)
{
lean_object* v___x_3079_; 
lean_dec_ref(v_arg_3072_);
lean_dec_ref(v_arg_3068_);
lean_dec_ref(v_inst_3050_);
lean_dec_ref(v_p_3049_);
lean_inc(v_a_3061_);
lean_inc_ref(v_a_3060_);
lean_inc(v_a_3059_);
lean_inc_ref(v_a_3058_);
lean_inc(v_a_3057_);
lean_inc_ref(v_a_3056_);
lean_inc(v_a_3055_);
lean_inc_ref(v_a_3054_);
lean_inc(v_a_3053_);
v___x_3079_ = lean_apply_10(v_fallback_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, lean_box(0));
return v___x_3079_;
}
else
{
lean_object* v___x_3080_; 
v___x_3080_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_3072_, v_a_3059_);
if (lean_obj_tag(v___x_3080_) == 0)
{
lean_object* v_a_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; uint8_t v___x_3084_; 
v_a_3081_ = lean_ctor_get(v___x_3080_, 0);
lean_inc(v_a_3081_);
lean_dec_ref_known(v___x_3080_, 1);
v___x_3082_ = l_Lean_Expr_cleanupAnnotations(v_a_3081_);
v___x_3083_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4));
v___x_3084_ = l_Lean_Expr_isConstOf(v___x_3082_, v___x_3083_);
if (v___x_3084_ == 0)
{
lean_object* v___x_3085_; uint8_t v___x_3086_; 
v___x_3085_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6));
v___x_3086_ = l_Lean_Expr_isConstOf(v___x_3082_, v___x_3085_);
lean_dec_ref(v___x_3082_);
if (v___x_3086_ == 0)
{
lean_object* v___x_3087_; 
lean_dec_ref(v_arg_3068_);
lean_dec_ref(v_inst_3050_);
lean_dec_ref(v_p_3049_);
lean_inc(v_a_3061_);
lean_inc_ref(v_a_3060_);
lean_inc(v_a_3059_);
lean_inc_ref(v_a_3058_);
lean_inc(v_a_3057_);
lean_inc_ref(v_a_3056_);
lean_inc(v_a_3055_);
lean_inc_ref(v_a_3054_);
lean_inc(v_a_3053_);
v___x_3087_ = lean_apply_10(v_fallback_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, lean_box(0));
return v___x_3087_;
}
else
{
lean_object* v___x_3088_; 
lean_dec_ref(v_fallback_3052_);
v___x_3088_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_3056_);
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3099_; 
v_a_3089_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3091_ = v___x_3088_;
v_isShared_3092_ = v_isSharedCheck_3099_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_3088_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3099_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3097_; 
v___x_3093_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2);
v___x_3094_ = l_Lean_mkApp3(v___x_3093_, v_p_3049_, v_inst_3050_, v_arg_3068_);
v___x_3095_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3095_, 0, v_a_3089_);
lean_ctor_set(v___x_3095_, 1, v___x_3094_);
lean_ctor_set_uint8(v___x_3095_, sizeof(void*)*2, v___x_3084_);
lean_ctor_set_uint8(v___x_3095_, sizeof(void*)*2 + 1, v___x_3084_);
if (v_isShared_3092_ == 0)
{
lean_ctor_set(v___x_3091_, 0, v___x_3095_);
v___x_3097_ = v___x_3091_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v___x_3095_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
else
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
lean_dec_ref(v_arg_3068_);
lean_dec_ref(v_inst_3050_);
lean_dec_ref(v_p_3049_);
v_a_3100_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_3088_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3088_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3105_; 
if (v_isShared_3103_ == 0)
{
v___x_3105_ = v___x_3102_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3100_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
}
else
{
lean_object* v___x_3108_; 
lean_dec_ref(v___x_3082_);
lean_dec_ref(v_fallback_3052_);
v___x_3108_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_3056_);
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v_a_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3120_; 
v_a_3109_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3111_ = v___x_3108_;
v_isShared_3112_ = v_isSharedCheck_3120_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_a_3109_);
lean_dec(v___x_3108_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3120_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; uint8_t v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3118_; 
v___x_3113_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5);
v___x_3114_ = l_Lean_mkApp3(v___x_3113_, v_p_3049_, v_inst_3050_, v_arg_3068_);
v___x_3115_ = 0;
v___x_3116_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3116_, 0, v_a_3109_);
lean_ctor_set(v___x_3116_, 1, v___x_3114_);
lean_ctor_set_uint8(v___x_3116_, sizeof(void*)*2, v___x_3115_);
lean_ctor_set_uint8(v___x_3116_, sizeof(void*)*2 + 1, v___x_3115_);
if (v_isShared_3112_ == 0)
{
lean_ctor_set(v___x_3111_, 0, v___x_3116_);
v___x_3118_ = v___x_3111_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v___x_3116_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec_ref(v_arg_3068_);
lean_dec_ref(v_inst_3050_);
lean_dec_ref(v_p_3049_);
v_a_3121_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3108_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3108_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
lean_dec_ref(v_arg_3068_);
lean_dec_ref(v_fallback_3052_);
lean_dec_ref(v_inst_3050_);
lean_dec_ref(v_p_3049_);
v_a_3129_ = lean_ctor_get(v___x_3080_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3080_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3080_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3080_);
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
}
}
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
lean_dec_ref(v_fallback_3052_);
lean_dec_ref(v_inst_3050_);
lean_dec_ref(v_p_3049_);
v_a_3137_ = lean_ctor_get(v___x_3063_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3063_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3063_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___boxed(lean_object* v_p_3145_, lean_object* v_inst_3146_, lean_object* v_instToMatch_3147_, lean_object* v_fallback_3148_, lean_object* v_a_3149_, lean_object* v_a_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_, lean_object* v_a_3153_, lean_object* v_a_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_){
_start:
{
lean_object* v_res_3159_; 
v_res_3159_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable(v_p_3145_, v_inst_3146_, v_instToMatch_3147_, v_fallback_3148_, v_a_3149_, v_a_3150_, v_a_3151_, v_a_3152_, v_a_3153_, v_a_3154_, v_a_3155_, v_a_3156_, v_a_3157_);
lean_dec(v_a_3157_);
lean_dec_ref(v_a_3156_);
lean_dec(v_a_3155_);
lean_dec_ref(v_a_3154_);
lean_dec(v_a_3153_);
lean_dec_ref(v_a_3152_);
lean_dec(v_a_3151_);
lean_dec_ref(v_a_3150_);
lean_dec(v_a_3149_);
return v_res_3159_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2(void){
_start:
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3165_ = lean_box(0);
v___x_3166_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1));
v___x_3167_ = l_Lean_mkConst(v___x_3166_, v___x_3165_);
return v___x_3167_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5(void){
_start:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3173_ = lean_box(0);
v___x_3174_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4));
v___x_3175_ = l_Lean_mkConst(v___x_3174_, v___x_3173_);
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr(lean_object* v_p_3176_, lean_object* v_p_x27_3177_, lean_object* v_h_3178_, lean_object* v_inst_3179_, lean_object* v_inst_x27_3180_, lean_object* v_fallback_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_, lean_object* v_a_3184_, lean_object* v_a_3185_, lean_object* v_a_3186_, lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_){
_start:
{
lean_object* v___x_3192_; 
v___x_3192_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_inst_x27_3180_, v_a_3188_);
if (lean_obj_tag(v___x_3192_) == 0)
{
lean_object* v_a_3193_; lean_object* v___x_3194_; uint8_t v___x_3195_; 
v_a_3193_ = lean_ctor_get(v___x_3192_, 0);
lean_inc(v_a_3193_);
lean_dec_ref_known(v___x_3192_, 1);
v___x_3194_ = l_Lean_Expr_cleanupAnnotations(v_a_3193_);
v___x_3195_ = l_Lean_Expr_isApp(v___x_3194_);
if (v___x_3195_ == 0)
{
lean_object* v___x_3196_; 
lean_dec_ref(v___x_3194_);
lean_dec_ref(v_inst_3179_);
lean_dec_ref(v_h_3178_);
lean_dec_ref(v_p_x27_3177_);
lean_dec_ref(v_p_3176_);
lean_inc(v_a_3190_);
lean_inc_ref(v_a_3189_);
lean_inc(v_a_3188_);
lean_inc_ref(v_a_3187_);
lean_inc(v_a_3186_);
lean_inc_ref(v_a_3185_);
lean_inc(v_a_3184_);
lean_inc_ref(v_a_3183_);
lean_inc(v_a_3182_);
v___x_3196_ = lean_apply_10(v_fallback_3181_, v_a_3182_, v_a_3183_, v_a_3184_, v_a_3185_, v_a_3186_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_, lean_box(0));
return v___x_3196_;
}
else
{
lean_object* v_arg_3197_; lean_object* v___x_3198_; uint8_t v___x_3199_; 
v_arg_3197_ = lean_ctor_get(v___x_3194_, 1);
lean_inc_ref(v_arg_3197_);
v___x_3198_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3194_);
v___x_3199_ = l_Lean_Expr_isApp(v___x_3198_);
if (v___x_3199_ == 0)
{
lean_object* v___x_3200_; 
lean_dec_ref(v___x_3198_);
lean_dec_ref(v_arg_3197_);
lean_dec_ref(v_inst_3179_);
lean_dec_ref(v_h_3178_);
lean_dec_ref(v_p_x27_3177_);
lean_dec_ref(v_p_3176_);
lean_inc(v_a_3190_);
lean_inc_ref(v_a_3189_);
lean_inc(v_a_3188_);
lean_inc_ref(v_a_3187_);
lean_inc(v_a_3186_);
lean_inc_ref(v_a_3185_);
lean_inc(v_a_3184_);
lean_inc_ref(v_a_3183_);
lean_inc(v_a_3182_);
v___x_3200_ = lean_apply_10(v_fallback_3181_, v_a_3182_, v_a_3183_, v_a_3184_, v_a_3185_, v_a_3186_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_, lean_box(0));
return v___x_3200_;
}
else
{
lean_object* v_arg_3201_; lean_object* v___x_3202_; uint8_t v___x_3203_; 
v_arg_3201_ = lean_ctor_get(v___x_3198_, 1);
lean_inc_ref(v_arg_3201_);
v___x_3202_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3198_);
v___x_3203_ = l_Lean_Expr_isApp(v___x_3202_);
if (v___x_3203_ == 0)
{
lean_object* v___x_3204_; 
lean_dec_ref(v___x_3202_);
lean_dec_ref(v_arg_3201_);
lean_dec_ref(v_arg_3197_);
lean_dec_ref(v_inst_3179_);
lean_dec_ref(v_h_3178_);
lean_dec_ref(v_p_x27_3177_);
lean_dec_ref(v_p_3176_);
lean_inc(v_a_3190_);
lean_inc_ref(v_a_3189_);
lean_inc(v_a_3188_);
lean_inc_ref(v_a_3187_);
lean_inc(v_a_3186_);
lean_inc_ref(v_a_3185_);
lean_inc(v_a_3184_);
lean_inc_ref(v_a_3183_);
lean_inc(v_a_3182_);
v___x_3204_ = lean_apply_10(v_fallback_3181_, v_a_3182_, v_a_3183_, v_a_3184_, v_a_3185_, v_a_3186_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_, lean_box(0));
return v___x_3204_;
}
else
{
lean_object* v___x_3205_; lean_object* v___x_3206_; uint8_t v___x_3207_; 
v___x_3205_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3202_);
v___x_3206_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__1));
v___x_3207_ = l_Lean_Expr_isConstOf(v___x_3205_, v___x_3206_);
lean_dec_ref(v___x_3205_);
if (v___x_3207_ == 0)
{
lean_object* v___x_3208_; 
lean_dec_ref(v_arg_3201_);
lean_dec_ref(v_arg_3197_);
lean_dec_ref(v_inst_3179_);
lean_dec_ref(v_h_3178_);
lean_dec_ref(v_p_x27_3177_);
lean_dec_ref(v_p_3176_);
lean_inc(v_a_3190_);
lean_inc_ref(v_a_3189_);
lean_inc(v_a_3188_);
lean_inc_ref(v_a_3187_);
lean_inc(v_a_3186_);
lean_inc_ref(v_a_3185_);
lean_inc(v_a_3184_);
lean_inc_ref(v_a_3183_);
lean_inc(v_a_3182_);
v___x_3208_ = lean_apply_10(v_fallback_3181_, v_a_3182_, v_a_3183_, v_a_3184_, v_a_3185_, v_a_3186_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_, lean_box(0));
return v___x_3208_;
}
else
{
lean_object* v___x_3209_; 
v___x_3209_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_3201_, v_a_3188_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_object* v_a_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; uint8_t v___x_3213_; 
v_a_3210_ = lean_ctor_get(v___x_3209_, 0);
lean_inc(v_a_3210_);
lean_dec_ref_known(v___x_3209_, 1);
v___x_3211_ = l_Lean_Expr_cleanupAnnotations(v_a_3210_);
v___x_3212_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__4));
v___x_3213_ = l_Lean_Expr_isConstOf(v___x_3211_, v___x_3212_);
if (v___x_3213_ == 0)
{
lean_object* v___x_3214_; uint8_t v___x_3215_; 
v___x_3214_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchIteDecidable___closed__6));
v___x_3215_ = l_Lean_Expr_isConstOf(v___x_3211_, v___x_3214_);
lean_dec_ref(v___x_3211_);
if (v___x_3215_ == 0)
{
lean_object* v___x_3216_; 
lean_dec_ref(v_arg_3197_);
lean_dec_ref(v_inst_3179_);
lean_dec_ref(v_h_3178_);
lean_dec_ref(v_p_x27_3177_);
lean_dec_ref(v_p_3176_);
lean_inc(v_a_3190_);
lean_inc_ref(v_a_3189_);
lean_inc(v_a_3188_);
lean_inc_ref(v_a_3187_);
lean_inc(v_a_3186_);
lean_inc_ref(v_a_3185_);
lean_inc(v_a_3184_);
lean_inc_ref(v_a_3183_);
lean_inc(v_a_3182_);
v___x_3216_ = lean_apply_10(v_fallback_3181_, v_a_3182_, v_a_3183_, v_a_3184_, v_a_3185_, v_a_3186_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_, lean_box(0));
return v___x_3216_;
}
else
{
lean_object* v___x_3217_; 
lean_dec_ref(v_fallback_3181_);
v___x_3217_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_3185_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3228_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3228_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3220_ = v___x_3217_;
v_isShared_3221_ = v_isSharedCheck_3228_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___x_3217_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3228_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3226_; 
v___x_3222_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2);
v___x_3223_ = l_Lean_mkApp5(v___x_3222_, v_p_3176_, v_p_x27_3177_, v_h_3178_, v_inst_3179_, v_arg_3197_);
v___x_3224_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3224_, 0, v_a_3218_);
lean_ctor_set(v___x_3224_, 1, v___x_3223_);
lean_ctor_set_uint8(v___x_3224_, sizeof(void*)*2, v___x_3213_);
lean_ctor_set_uint8(v___x_3224_, sizeof(void*)*2 + 1, v___x_3213_);
if (v_isShared_3221_ == 0)
{
lean_ctor_set(v___x_3220_, 0, v___x_3224_);
v___x_3226_ = v___x_3220_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v___x_3224_);
v___x_3226_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
return v___x_3226_;
}
}
}
else
{
lean_object* v_a_3229_; lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3236_; 
lean_dec_ref(v_arg_3197_);
lean_dec_ref(v_inst_3179_);
lean_dec_ref(v_h_3178_);
lean_dec_ref(v_p_x27_3177_);
lean_dec_ref(v_p_3176_);
v_a_3229_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3236_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3236_ == 0)
{
v___x_3231_ = v___x_3217_;
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
else
{
lean_inc(v_a_3229_);
lean_dec(v___x_3217_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
lean_object* v___x_3234_; 
if (v_isShared_3232_ == 0)
{
v___x_3234_ = v___x_3231_;
goto v_reusejp_3233_;
}
else
{
lean_object* v_reuseFailAlloc_3235_; 
v_reuseFailAlloc_3235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3235_, 0, v_a_3229_);
v___x_3234_ = v_reuseFailAlloc_3235_;
goto v_reusejp_3233_;
}
v_reusejp_3233_:
{
return v___x_3234_;
}
}
}
}
}
else
{
lean_object* v___x_3237_; 
lean_dec_ref(v___x_3211_);
lean_dec_ref(v_fallback_3181_);
v___x_3237_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_3185_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3249_; 
v_a_3238_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3249_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3249_ == 0)
{
v___x_3240_ = v___x_3237_;
v_isShared_3241_ = v_isSharedCheck_3249_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3237_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3249_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; uint8_t v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3247_; 
v___x_3242_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5);
v___x_3243_ = l_Lean_mkApp5(v___x_3242_, v_p_3176_, v_p_x27_3177_, v_h_3178_, v_inst_3179_, v_arg_3197_);
v___x_3244_ = 0;
v___x_3245_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3245_, 0, v_a_3238_);
lean_ctor_set(v___x_3245_, 1, v___x_3243_);
lean_ctor_set_uint8(v___x_3245_, sizeof(void*)*2, v___x_3244_);
lean_ctor_set_uint8(v___x_3245_, sizeof(void*)*2 + 1, v___x_3244_);
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 0, v___x_3245_);
v___x_3247_ = v___x_3240_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v___x_3245_);
v___x_3247_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
return v___x_3247_;
}
}
}
else
{
lean_object* v_a_3250_; lean_object* v___x_3252_; uint8_t v_isShared_3253_; uint8_t v_isSharedCheck_3257_; 
lean_dec_ref(v_arg_3197_);
lean_dec_ref(v_inst_3179_);
lean_dec_ref(v_h_3178_);
lean_dec_ref(v_p_x27_3177_);
lean_dec_ref(v_p_3176_);
v_a_3250_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3257_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3252_ = v___x_3237_;
v_isShared_3253_ = v_isSharedCheck_3257_;
goto v_resetjp_3251_;
}
else
{
lean_inc(v_a_3250_);
lean_dec(v___x_3237_);
v___x_3252_ = lean_box(0);
v_isShared_3253_ = v_isSharedCheck_3257_;
goto v_resetjp_3251_;
}
v_resetjp_3251_:
{
lean_object* v___x_3255_; 
if (v_isShared_3253_ == 0)
{
v___x_3255_ = v___x_3252_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v_a_3250_);
v___x_3255_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
return v___x_3255_;
}
}
}
}
}
else
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3265_; 
lean_dec_ref(v_arg_3197_);
lean_dec_ref(v_fallback_3181_);
lean_dec_ref(v_inst_3179_);
lean_dec_ref(v_h_3178_);
lean_dec_ref(v_p_x27_3177_);
lean_dec_ref(v_p_3176_);
v_a_3258_ = lean_ctor_get(v___x_3209_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3260_ = v___x_3209_;
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3209_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v___x_3263_; 
if (v_isShared_3261_ == 0)
{
v___x_3263_ = v___x_3260_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v_a_3258_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
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
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3273_; 
lean_dec_ref(v_fallback_3181_);
lean_dec_ref(v_inst_3179_);
lean_dec_ref(v_h_3178_);
lean_dec_ref(v_p_x27_3177_);
lean_dec_ref(v_p_3176_);
v_a_3266_ = lean_ctor_get(v___x_3192_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3192_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3268_ = v___x_3192_;
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v___x_3192_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3271_; 
if (v_isShared_3269_ == 0)
{
v___x_3271_ = v___x_3268_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_a_3266_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
return v___x_3271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___boxed(lean_object* v_p_3274_, lean_object* v_p_x27_3275_, lean_object* v_h_3276_, lean_object* v_inst_3277_, lean_object* v_inst_x27_3278_, lean_object* v_fallback_3279_, lean_object* v_a_3280_, lean_object* v_a_3281_, lean_object* v_a_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_, lean_object* v_a_3287_, lean_object* v_a_3288_, lean_object* v_a_3289_){
_start:
{
lean_object* v_res_3290_; 
v_res_3290_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr(v_p_3274_, v_p_x27_3275_, v_h_3276_, v_inst_3277_, v_inst_x27_3278_, v_fallback_3279_, v_a_3280_, v_a_3281_, v_a_3282_, v_a_3283_, v_a_3284_, v_a_3285_, v_a_3286_, v_a_3287_, v_a_3288_);
lean_dec(v_a_3288_);
lean_dec_ref(v_a_3287_);
lean_dec(v_a_3286_);
lean_dec_ref(v_a_3285_);
lean_dec(v_a_3284_);
lean_dec_ref(v_a_3283_);
lean_dec(v_a_3282_);
lean_dec_ref(v_a_3281_);
lean_dec(v_a_3280_);
return v_res_3290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable(lean_object* v_p_3291_, lean_object* v_inst_3292_, lean_object* v_fallback_3293_, lean_object* v_a_3294_, lean_object* v_a_3295_, lean_object* v_a_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_){
_start:
{
lean_object* v___x_3304_; uint8_t v___x_3305_; lean_object* v___x_3306_; lean_object* v___f_3307_; lean_object* v___x_3308_; 
v___x_3304_ = lean_unsigned_to_nat(0u);
v___x_3305_ = 5;
v___x_3306_ = lean_box(v___x_3305_);
lean_inc_ref(v_inst_3292_);
v___f_3307_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___lam__0___boxed), 8, 3);
lean_closure_set(v___f_3307_, 0, v___x_3306_);
lean_closure_set(v___f_3307_, 1, v_inst_3292_);
lean_closure_set(v___f_3307_, 2, v___x_3304_);
v___x_3308_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___f_3307_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
if (lean_obj_tag(v___x_3308_) == 0)
{
lean_object* v_a_3309_; 
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
lean_inc(v_a_3309_);
lean_dec_ref_known(v___x_3308_, 1);
if (lean_obj_tag(v_a_3309_) == 0)
{
lean_object* v___x_3310_; 
lean_inc(v_a_3302_);
lean_inc_ref(v_a_3301_);
lean_inc(v_a_3300_);
lean_inc_ref(v_a_3299_);
lean_inc(v_a_3298_);
lean_inc_ref(v_a_3297_);
lean_inc(v_a_3296_);
lean_inc_ref(v_a_3295_);
lean_inc(v_a_3294_);
lean_inc_ref(v_inst_3292_);
v___x_3310_ = lean_sym_simp(v_inst_3292_, v_a_3294_, v_a_3295_, v_a_3296_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
if (lean_obj_tag(v___x_3310_) == 0)
{
lean_object* v_a_3311_; 
v_a_3311_ = lean_ctor_get(v___x_3310_, 0);
lean_inc(v_a_3311_);
lean_dec_ref_known(v___x_3310_, 1);
if (lean_obj_tag(v_a_3311_) == 0)
{
uint8_t v_contextDependent_3312_; lean_object* v___x_3313_; 
v_contextDependent_3312_ = lean_ctor_get_uint8(v_a_3311_, 1);
lean_dec_ref_known(v_a_3311_, 0);
lean_inc_ref(v_inst_3292_);
v___x_3313_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable(v_p_3291_, v_inst_3292_, v_inst_3292_, v_fallback_3293_, v_a_3294_, v_a_3295_, v_a_3296_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_object* v_a_3314_; uint8_t v___y_3316_; 
v_a_3314_ = lean_ctor_get(v___x_3313_, 0);
lean_inc(v_a_3314_);
if (v_contextDependent_3312_ == 0)
{
lean_dec(v_a_3314_);
return v___x_3313_;
}
else
{
if (lean_obj_tag(v_a_3314_) == 0)
{
uint8_t v_contextDependent_3326_; 
v_contextDependent_3326_ = lean_ctor_get_uint8(v_a_3314_, 1);
v___y_3316_ = v_contextDependent_3326_;
goto v___jp_3315_;
}
else
{
uint8_t v_contextDependent_3327_; 
v_contextDependent_3327_ = lean_ctor_get_uint8(v_a_3314_, sizeof(void*)*2 + 1);
v___y_3316_ = v_contextDependent_3327_;
goto v___jp_3315_;
}
}
v___jp_3315_:
{
if (v___y_3316_ == 0)
{
lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3324_; 
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3324_ == 0)
{
lean_object* v_unused_3325_; 
v_unused_3325_ = lean_ctor_get(v___x_3313_, 0);
lean_dec(v_unused_3325_);
v___x_3318_ = v___x_3313_;
v_isShared_3319_ = v_isSharedCheck_3324_;
goto v_resetjp_3317_;
}
else
{
lean_dec(v___x_3313_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3324_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3320_; lean_object* v___x_3322_; 
v___x_3320_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_3314_);
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 0, v___x_3320_);
v___x_3322_ = v___x_3318_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v___x_3320_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
else
{
lean_dec(v_a_3314_);
return v___x_3313_;
}
}
}
else
{
return v___x_3313_;
}
}
else
{
lean_object* v_e_x27_3328_; uint8_t v_contextDependent_3329_; lean_object* v___x_3330_; 
v_e_x27_3328_ = lean_ctor_get(v_a_3311_, 0);
lean_inc_ref(v_e_x27_3328_);
v_contextDependent_3329_ = lean_ctor_get_uint8(v_a_3311_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_3311_, 2);
v___x_3330_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable(v_p_3291_, v_inst_3292_, v_e_x27_3328_, v_fallback_3293_, v_a_3294_, v_a_3295_, v_a_3296_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
if (lean_obj_tag(v___x_3330_) == 0)
{
lean_object* v_a_3331_; uint8_t v___y_3333_; 
v_a_3331_ = lean_ctor_get(v___x_3330_, 0);
lean_inc(v_a_3331_);
if (v_contextDependent_3329_ == 0)
{
lean_dec(v_a_3331_);
return v___x_3330_;
}
else
{
if (lean_obj_tag(v_a_3331_) == 0)
{
uint8_t v_contextDependent_3343_; 
v_contextDependent_3343_ = lean_ctor_get_uint8(v_a_3331_, 1);
v___y_3333_ = v_contextDependent_3343_;
goto v___jp_3332_;
}
else
{
uint8_t v_contextDependent_3344_; 
v_contextDependent_3344_ = lean_ctor_get_uint8(v_a_3331_, sizeof(void*)*2 + 1);
v___y_3333_ = v_contextDependent_3344_;
goto v___jp_3332_;
}
}
v___jp_3332_:
{
if (v___y_3333_ == 0)
{
lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3341_; 
v_isSharedCheck_3341_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3341_ == 0)
{
lean_object* v_unused_3342_; 
v_unused_3342_ = lean_ctor_get(v___x_3330_, 0);
lean_dec(v_unused_3342_);
v___x_3335_ = v___x_3330_;
v_isShared_3336_ = v_isSharedCheck_3341_;
goto v_resetjp_3334_;
}
else
{
lean_dec(v___x_3330_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3341_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v___x_3337_; lean_object* v___x_3339_; 
v___x_3337_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_3331_);
if (v_isShared_3336_ == 0)
{
lean_ctor_set(v___x_3335_, 0, v___x_3337_);
v___x_3339_ = v___x_3335_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v___x_3337_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
return v___x_3339_;
}
}
}
else
{
lean_dec(v_a_3331_);
return v___x_3330_;
}
}
}
else
{
return v___x_3330_;
}
}
}
else
{
lean_dec_ref(v_fallback_3293_);
lean_dec_ref(v_inst_3292_);
lean_dec_ref(v_p_3291_);
return v___x_3310_;
}
}
else
{
lean_object* v_val_3345_; lean_object* v___x_3346_; 
lean_dec_ref(v_fallback_3293_);
lean_dec_ref(v_inst_3292_);
lean_dec_ref(v_p_3291_);
v_val_3345_ = lean_ctor_get(v_a_3309_, 0);
lean_inc(v_val_3345_);
lean_dec_ref_known(v_a_3309_, 1);
v___x_3346_ = l_Lean_Meta_Sym_shareCommonInc(v_val_3345_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3359_; 
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3349_ = v___x_3346_;
v_isShared_3350_ = v_isSharedCheck_3359_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v___x_3346_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3359_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; uint8_t v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3357_; 
v___x_3351_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8);
v___x_3352_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10);
lean_inc(v_a_3347_);
v___x_3353_ = l_Lean_mkAppB(v___x_3351_, v___x_3352_, v_a_3347_);
v___x_3354_ = 0;
v___x_3355_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3355_, 0, v_a_3347_);
lean_ctor_set(v___x_3355_, 1, v___x_3353_);
lean_ctor_set_uint8(v___x_3355_, sizeof(void*)*2, v___x_3354_);
lean_ctor_set_uint8(v___x_3355_, sizeof(void*)*2 + 1, v___x_3354_);
if (v_isShared_3350_ == 0)
{
lean_ctor_set(v___x_3349_, 0, v___x_3355_);
v___x_3357_ = v___x_3349_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v___x_3355_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
}
else
{
lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3367_; 
v_a_3360_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3362_ = v___x_3346_;
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_dec(v___x_3346_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v___x_3365_; 
if (v_isShared_3363_ == 0)
{
v___x_3365_ = v___x_3362_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3360_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
}
}
else
{
lean_object* v_a_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3375_; 
lean_dec_ref(v_fallback_3293_);
lean_dec_ref(v_inst_3292_);
lean_dec_ref(v_p_3291_);
v_a_3368_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3370_ = v___x_3308_;
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_a_3368_);
lean_dec(v___x_3308_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___x_3373_; 
if (v_isShared_3371_ == 0)
{
v___x_3373_ = v___x_3370_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_a_3368_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
return v___x_3373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable___boxed(lean_object* v_p_3376_, lean_object* v_inst_3377_, lean_object* v_fallback_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable(v_p_3376_, v_inst_3377_, v_fallback_3378_, v_a_3379_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_);
lean_dec(v_a_3387_);
lean_dec_ref(v_a_3386_);
lean_dec(v_a_3385_);
lean_dec_ref(v_a_3384_);
lean_dec(v_a_3383_);
lean_dec_ref(v_a_3382_);
lean_dec(v_a_3381_);
lean_dec_ref(v_a_3380_);
lean_dec(v_a_3379_);
return v_res_3389_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2(void){
_start:
{
lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3395_ = lean_box(0);
v___x_3396_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1));
v___x_3397_ = l_Lean_mkConst(v___x_3396_, v___x_3395_);
return v___x_3397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr(lean_object* v_p_3398_, lean_object* v_p_x27_3399_, lean_object* v_h_3400_, lean_object* v_inst_3401_, lean_object* v_inst_x27_3402_, lean_object* v_fallback_3403_, lean_object* v_a_3404_, lean_object* v_a_3405_, lean_object* v_a_3406_, lean_object* v_a_3407_, lean_object* v_a_3408_, lean_object* v_a_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_){
_start:
{
lean_object* v___x_3414_; uint8_t v___x_3415_; lean_object* v___x_3416_; lean_object* v___f_3417_; lean_object* v___x_3418_; 
v___x_3414_ = lean_unsigned_to_nat(0u);
v___x_3415_ = 5;
v___x_3416_ = lean_box(v___x_3415_);
lean_inc_ref(v_inst_x27_3402_);
v___f_3417_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidableCongr___lam__0___boxed), 8, 3);
lean_closure_set(v___f_3417_, 0, v___x_3416_);
lean_closure_set(v___f_3417_, 1, v_inst_x27_3402_);
lean_closure_set(v___f_3417_, 2, v___x_3414_);
v___x_3418_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___f_3417_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_);
if (lean_obj_tag(v___x_3418_) == 0)
{
lean_object* v_a_3419_; 
v_a_3419_ = lean_ctor_get(v___x_3418_, 0);
lean_inc(v_a_3419_);
lean_dec_ref_known(v___x_3418_, 1);
if (lean_obj_tag(v_a_3419_) == 0)
{
lean_object* v___x_3420_; 
lean_inc(v_a_3412_);
lean_inc_ref(v_a_3411_);
lean_inc(v_a_3410_);
lean_inc_ref(v_a_3409_);
lean_inc(v_a_3408_);
lean_inc_ref(v_a_3407_);
lean_inc(v_a_3406_);
lean_inc_ref(v_a_3405_);
lean_inc(v_a_3404_);
lean_inc_ref(v_inst_x27_3402_);
v___x_3420_ = lean_sym_simp(v_inst_x27_3402_, v_a_3404_, v_a_3405_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_);
if (lean_obj_tag(v___x_3420_) == 0)
{
lean_object* v_a_3421_; 
v_a_3421_ = lean_ctor_get(v___x_3420_, 0);
lean_inc(v_a_3421_);
lean_dec_ref_known(v___x_3420_, 1);
if (lean_obj_tag(v_a_3421_) == 0)
{
uint8_t v_contextDependent_3422_; lean_object* v___x_3423_; 
v_contextDependent_3422_ = lean_ctor_get_uint8(v_a_3421_, 1);
lean_dec_ref_known(v_a_3421_, 0);
v___x_3423_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr(v_p_3398_, v_p_x27_3399_, v_h_3400_, v_inst_3401_, v_inst_x27_3402_, v_fallback_3403_, v_a_3404_, v_a_3405_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_);
if (lean_obj_tag(v___x_3423_) == 0)
{
lean_object* v_a_3424_; uint8_t v___y_3426_; 
v_a_3424_ = lean_ctor_get(v___x_3423_, 0);
lean_inc(v_a_3424_);
if (v_contextDependent_3422_ == 0)
{
lean_dec(v_a_3424_);
return v___x_3423_;
}
else
{
if (lean_obj_tag(v_a_3424_) == 0)
{
uint8_t v_contextDependent_3436_; 
v_contextDependent_3436_ = lean_ctor_get_uint8(v_a_3424_, 1);
v___y_3426_ = v_contextDependent_3436_;
goto v___jp_3425_;
}
else
{
uint8_t v_contextDependent_3437_; 
v_contextDependent_3437_ = lean_ctor_get_uint8(v_a_3424_, sizeof(void*)*2 + 1);
v___y_3426_ = v_contextDependent_3437_;
goto v___jp_3425_;
}
}
v___jp_3425_:
{
if (v___y_3426_ == 0)
{
lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3434_; 
v_isSharedCheck_3434_ = !lean_is_exclusive(v___x_3423_);
if (v_isSharedCheck_3434_ == 0)
{
lean_object* v_unused_3435_; 
v_unused_3435_ = lean_ctor_get(v___x_3423_, 0);
lean_dec(v_unused_3435_);
v___x_3428_ = v___x_3423_;
v_isShared_3429_ = v_isSharedCheck_3434_;
goto v_resetjp_3427_;
}
else
{
lean_dec(v___x_3423_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3434_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3430_; lean_object* v___x_3432_; 
v___x_3430_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_3424_);
if (v_isShared_3429_ == 0)
{
lean_ctor_set(v___x_3428_, 0, v___x_3430_);
v___x_3432_ = v___x_3428_;
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
}
else
{
lean_dec(v_a_3424_);
return v___x_3423_;
}
}
}
else
{
return v___x_3423_;
}
}
else
{
lean_object* v_e_x27_3438_; uint8_t v_contextDependent_3439_; lean_object* v___x_3440_; 
lean_dec_ref(v_inst_x27_3402_);
v_e_x27_3438_ = lean_ctor_get(v_a_3421_, 0);
lean_inc_ref(v_e_x27_3438_);
v_contextDependent_3439_ = lean_ctor_get_uint8(v_a_3421_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_3421_, 2);
v___x_3440_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr(v_p_3398_, v_p_x27_3399_, v_h_3400_, v_inst_3401_, v_e_x27_3438_, v_fallback_3403_, v_a_3404_, v_a_3405_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_);
if (lean_obj_tag(v___x_3440_) == 0)
{
lean_object* v_a_3441_; uint8_t v___y_3443_; 
v_a_3441_ = lean_ctor_get(v___x_3440_, 0);
lean_inc(v_a_3441_);
if (v_contextDependent_3439_ == 0)
{
lean_dec(v_a_3441_);
return v___x_3440_;
}
else
{
if (lean_obj_tag(v_a_3441_) == 0)
{
uint8_t v_contextDependent_3453_; 
v_contextDependent_3453_ = lean_ctor_get_uint8(v_a_3441_, 1);
v___y_3443_ = v_contextDependent_3453_;
goto v___jp_3442_;
}
else
{
uint8_t v_contextDependent_3454_; 
v_contextDependent_3454_ = lean_ctor_get_uint8(v_a_3441_, sizeof(void*)*2 + 1);
v___y_3443_ = v_contextDependent_3454_;
goto v___jp_3442_;
}
}
v___jp_3442_:
{
if (v___y_3443_ == 0)
{
lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3451_; 
v_isSharedCheck_3451_ = !lean_is_exclusive(v___x_3440_);
if (v_isSharedCheck_3451_ == 0)
{
lean_object* v_unused_3452_; 
v_unused_3452_ = lean_ctor_get(v___x_3440_, 0);
lean_dec(v_unused_3452_);
v___x_3445_ = v___x_3440_;
v_isShared_3446_ = v_isSharedCheck_3451_;
goto v_resetjp_3444_;
}
else
{
lean_dec(v___x_3440_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3451_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v___x_3447_; lean_object* v___x_3449_; 
v___x_3447_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_3441_);
if (v_isShared_3446_ == 0)
{
lean_ctor_set(v___x_3445_, 0, v___x_3447_);
v___x_3449_ = v___x_3445_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v___x_3447_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
}
else
{
lean_dec(v_a_3441_);
return v___x_3440_;
}
}
}
else
{
return v___x_3440_;
}
}
}
else
{
lean_dec_ref(v_fallback_3403_);
lean_dec_ref(v_inst_x27_3402_);
lean_dec_ref(v_inst_3401_);
lean_dec_ref(v_h_3400_);
lean_dec_ref(v_p_x27_3399_);
lean_dec_ref(v_p_3398_);
return v___x_3420_;
}
}
else
{
lean_object* v_val_3455_; lean_object* v___x_3456_; 
lean_dec_ref(v_fallback_3403_);
v_val_3455_ = lean_ctor_get(v_a_3419_, 0);
lean_inc(v_val_3455_);
lean_dec_ref_known(v_a_3419_, 1);
v___x_3456_ = l_Lean_Meta_Sym_shareCommonInc(v_val_3455_, v_a_3407_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v_a_3457_; lean_object* v___x_3459_; uint8_t v_isShared_3460_; uint8_t v_isSharedCheck_3471_; 
v_a_3457_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3459_ = v___x_3456_;
v_isShared_3460_ = v_isSharedCheck_3471_;
goto v_resetjp_3458_;
}
else
{
lean_inc(v_a_3457_);
lean_dec(v___x_3456_);
v___x_3459_ = lean_box(0);
v_isShared_3460_ = v_isSharedCheck_3471_;
goto v_resetjp_3458_;
}
v_resetjp_3458_:
{
lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; uint8_t v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3469_; 
v___x_3461_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__8);
v___x_3462_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__10);
lean_inc_n(v_a_3457_, 2);
v___x_3463_ = l_Lean_mkAppB(v___x_3461_, v___x_3462_, v_a_3457_);
v___x_3464_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2);
v___x_3465_ = l_Lean_mkApp7(v___x_3464_, v_p_3398_, v_p_x27_3399_, v_h_3400_, v_inst_3401_, v_inst_x27_3402_, v_a_3457_, v___x_3463_);
v___x_3466_ = 0;
v___x_3467_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3467_, 0, v_a_3457_);
lean_ctor_set(v___x_3467_, 1, v___x_3465_);
lean_ctor_set_uint8(v___x_3467_, sizeof(void*)*2, v___x_3466_);
lean_ctor_set_uint8(v___x_3467_, sizeof(void*)*2 + 1, v___x_3466_);
if (v_isShared_3460_ == 0)
{
lean_ctor_set(v___x_3459_, 0, v___x_3467_);
v___x_3469_ = v___x_3459_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v___x_3467_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
}
else
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3479_; 
lean_dec_ref(v_inst_x27_3402_);
lean_dec_ref(v_inst_3401_);
lean_dec_ref(v_h_3400_);
lean_dec_ref(v_p_x27_3399_);
lean_dec_ref(v_p_3398_);
v_a_3472_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3479_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3479_ == 0)
{
v___x_3474_ = v___x_3456_;
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3456_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3477_; 
if (v_isShared_3475_ == 0)
{
v___x_3477_ = v___x_3474_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3478_; 
v_reuseFailAlloc_3478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3478_, 0, v_a_3472_);
v___x_3477_ = v_reuseFailAlloc_3478_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
return v___x_3477_;
}
}
}
}
}
else
{
lean_object* v_a_3480_; lean_object* v___x_3482_; uint8_t v_isShared_3483_; uint8_t v_isSharedCheck_3487_; 
lean_dec_ref(v_fallback_3403_);
lean_dec_ref(v_inst_x27_3402_);
lean_dec_ref(v_inst_3401_);
lean_dec_ref(v_h_3400_);
lean_dec_ref(v_p_x27_3399_);
lean_dec_ref(v_p_3398_);
v_a_3480_ = lean_ctor_get(v___x_3418_, 0);
v_isSharedCheck_3487_ = !lean_is_exclusive(v___x_3418_);
if (v_isSharedCheck_3487_ == 0)
{
v___x_3482_ = v___x_3418_;
v_isShared_3483_ = v_isSharedCheck_3487_;
goto v_resetjp_3481_;
}
else
{
lean_inc(v_a_3480_);
lean_dec(v___x_3418_);
v___x_3482_ = lean_box(0);
v_isShared_3483_ = v_isSharedCheck_3487_;
goto v_resetjp_3481_;
}
v_resetjp_3481_:
{
lean_object* v___x_3485_; 
if (v_isShared_3483_ == 0)
{
v___x_3485_ = v___x_3482_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v_a_3480_);
v___x_3485_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
return v___x_3485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___boxed(lean_object* v_p_3488_, lean_object* v_p_x27_3489_, lean_object* v_h_3490_, lean_object* v_inst_3491_, lean_object* v_inst_x27_3492_, lean_object* v_fallback_3493_, lean_object* v_a_3494_, lean_object* v_a_3495_, lean_object* v_a_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_, lean_object* v_a_3499_, lean_object* v_a_3500_, lean_object* v_a_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_){
_start:
{
lean_object* v_res_3504_; 
v_res_3504_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr(v_p_3488_, v_p_x27_3489_, v_h_3490_, v_inst_3491_, v_inst_x27_3492_, v_fallback_3493_, v_a_3494_, v_a_3495_, v_a_3496_, v_a_3497_, v_a_3498_, v_a_3499_, v_a_3500_, v_a_3501_, v_a_3502_);
lean_dec(v_a_3502_);
lean_dec_ref(v_a_3501_);
lean_dec(v_a_3500_);
lean_dec_ref(v_a_3499_);
lean_dec(v_a_3498_);
lean_dec_ref(v_a_3497_);
lean_dec(v_a_3496_);
lean_dec_ref(v_a_3495_);
lean_dec(v_a_3494_);
return v_res_3504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__2(lean_object* v___x_3506_, lean_object* v_e_x27_3507_, lean_object* v_snd_3508_, lean_object* v___x_3509_, lean_object* v___x_3510_, lean_object* v___x_3511_, lean_object* v_arg_3512_, lean_object* v_proof_3513_, lean_object* v_arg_3514_, uint8_t v___x_3515_, uint8_t v_contextDependent_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_){
_start:
{
lean_object* v___x_3527_; 
v___x_3527_ = l_Lean_Meta_Sym_shareCommon(v___x_3506_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_);
if (lean_obj_tag(v___x_3527_) == 0)
{
lean_object* v_a_3528_; lean_object* v___x_3529_; 
v_a_3528_ = lean_ctor_get(v___x_3527_, 0);
lean_inc(v_a_3528_);
lean_dec_ref_known(v___x_3527_, 1);
lean_inc_ref(v_snd_3508_);
lean_inc_ref(v_e_x27_3507_);
v___x_3529_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_spec__0_spec__0_spec__1___redArg(v_a_3528_, v_e_x27_3507_, v_snd_3508_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_);
if (lean_obj_tag(v___x_3529_) == 0)
{
lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3542_; 
v_a_3530_ = lean_ctor_get(v___x_3529_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3529_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3532_ = v___x_3529_;
v_isShared_3533_ = v_isSharedCheck_3542_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v___x_3529_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3542_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3540_; 
v___x_3534_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__2___closed__0));
v___x_3535_ = l_Lean_Name_mkStr3(v___x_3509_, v___x_3510_, v___x_3534_);
v___x_3536_ = l_Lean_mkConst(v___x_3535_, v___x_3511_);
v___x_3537_ = l_Lean_mkApp5(v___x_3536_, v_arg_3512_, v_e_x27_3507_, v_proof_3513_, v_arg_3514_, v_snd_3508_);
v___x_3538_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3538_, 0, v_a_3530_);
lean_ctor_set(v___x_3538_, 1, v___x_3537_);
lean_ctor_set_uint8(v___x_3538_, sizeof(void*)*2, v___x_3515_);
lean_ctor_set_uint8(v___x_3538_, sizeof(void*)*2 + 1, v_contextDependent_3516_);
if (v_isShared_3533_ == 0)
{
lean_ctor_set(v___x_3532_, 0, v___x_3538_);
v___x_3540_ = v___x_3532_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___x_3538_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
else
{
lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3550_; 
lean_dec_ref(v_arg_3514_);
lean_dec_ref(v_proof_3513_);
lean_dec_ref(v_arg_3512_);
lean_dec(v___x_3511_);
lean_dec_ref(v___x_3510_);
lean_dec_ref(v___x_3509_);
lean_dec_ref(v_snd_3508_);
lean_dec_ref(v_e_x27_3507_);
v_a_3543_ = lean_ctor_get(v___x_3529_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3529_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3545_ = v___x_3529_;
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_dec(v___x_3529_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3548_; 
if (v_isShared_3546_ == 0)
{
v___x_3548_ = v___x_3545_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3543_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
else
{
lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3558_; 
lean_dec_ref(v_arg_3514_);
lean_dec_ref(v_proof_3513_);
lean_dec_ref(v_arg_3512_);
lean_dec(v___x_3511_);
lean_dec_ref(v___x_3510_);
lean_dec_ref(v___x_3509_);
lean_dec_ref(v_snd_3508_);
lean_dec_ref(v_e_x27_3507_);
v_a_3551_ = lean_ctor_get(v___x_3527_, 0);
v_isSharedCheck_3558_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3553_ = v___x_3527_;
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_dec(v___x_3527_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3556_; 
if (v_isShared_3554_ == 0)
{
v___x_3556_ = v___x_3553_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3557_; 
v_reuseFailAlloc_3557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3557_, 0, v_a_3551_);
v___x_3556_ = v_reuseFailAlloc_3557_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
return v___x_3556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__2___boxed(lean_object** _args){
lean_object* v___x_3559_ = _args[0];
lean_object* v_e_x27_3560_ = _args[1];
lean_object* v_snd_3561_ = _args[2];
lean_object* v___x_3562_ = _args[3];
lean_object* v___x_3563_ = _args[4];
lean_object* v___x_3564_ = _args[5];
lean_object* v_arg_3565_ = _args[6];
lean_object* v_proof_3566_ = _args[7];
lean_object* v_arg_3567_ = _args[8];
lean_object* v___x_3568_ = _args[9];
lean_object* v_contextDependent_3569_ = _args[10];
lean_object* v___y_3570_ = _args[11];
lean_object* v___y_3571_ = _args[12];
lean_object* v___y_3572_ = _args[13];
lean_object* v___y_3573_ = _args[14];
lean_object* v___y_3574_ = _args[15];
lean_object* v___y_3575_ = _args[16];
lean_object* v___y_3576_ = _args[17];
lean_object* v___y_3577_ = _args[18];
lean_object* v___y_3578_ = _args[19];
lean_object* v___y_3579_ = _args[20];
_start:
{
uint8_t v___x_20269__boxed_3580_; uint8_t v_contextDependent_20270__boxed_3581_; lean_object* v_res_3582_; 
v___x_20269__boxed_3580_ = lean_unbox(v___x_3568_);
v_contextDependent_20270__boxed_3581_ = lean_unbox(v_contextDependent_3569_);
v_res_3582_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__2(v___x_3559_, v_e_x27_3560_, v_snd_3561_, v___x_3562_, v___x_3563_, v___x_3564_, v_arg_3565_, v_proof_3566_, v_arg_3567_, v___x_20269__boxed_3580_, v_contextDependent_20270__boxed_3581_, v___y_3570_, v___y_3571_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_, v___y_3576_, v___y_3577_, v___y_3578_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec(v___y_3576_);
lean_dec_ref(v___y_3575_);
lean_dec(v___y_3574_);
lean_dec_ref(v___y_3573_);
lean_dec(v___y_3572_);
lean_dec_ref(v___y_3571_);
lean_dec(v___y_3570_);
return v_res_3582_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3586_ = lean_box(0);
v___x_3587_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__1));
v___x_3588_ = l_Lean_mkConst(v___x_3587_, v___x_3586_);
return v___x_3588_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; 
v___x_3592_ = lean_box(0);
v___x_3593_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__4));
v___x_3594_ = l_Lean_mkConst(v___x_3593_, v___x_3592_);
return v___x_3594_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__8(void){
_start:
{
lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; 
v___x_3600_ = lean_box(0);
v___x_3601_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__7));
v___x_3602_ = l_Lean_mkConst(v___x_3601_, v___x_3600_);
return v___x_3602_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__11(void){
_start:
{
lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; 
v___x_3608_ = lean_box(0);
v___x_3609_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__10));
v___x_3610_ = l_Lean_mkConst(v___x_3609_, v___x_3608_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0(uint8_t v___x_3611_, lean_object* v_e_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_){
_start:
{
lean_object* v___x_3626_; uint8_t v___x_3627_; 
v___x_3626_ = l_Lean_Expr_cleanupAnnotations(v_e_3612_);
v___x_3627_ = l_Lean_Expr_isApp(v___x_3626_);
if (v___x_3627_ == 0)
{
lean_dec_ref(v___x_3626_);
goto v___jp_3623_;
}
else
{
lean_object* v_arg_3628_; lean_object* v___x_3629_; uint8_t v___x_3630_; 
v_arg_3628_ = lean_ctor_get(v___x_3626_, 1);
lean_inc_ref(v_arg_3628_);
v___x_3629_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3626_);
v___x_3630_ = l_Lean_Expr_isApp(v___x_3629_);
if (v___x_3630_ == 0)
{
lean_dec_ref(v___x_3629_);
lean_dec_ref(v_arg_3628_);
goto v___jp_3623_;
}
else
{
lean_object* v_arg_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; uint8_t v___x_3636_; 
v_arg_3631_ = lean_ctor_get(v___x_3629_, 1);
lean_inc_ref(v_arg_3631_);
v___x_3632_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3629_);
v___x_3633_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0));
v___x_3634_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__0));
v___x_3635_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__1));
v___x_3636_ = l_Lean_Expr_isConstOf(v___x_3632_, v___x_3635_);
lean_dec_ref(v___x_3632_);
if (v___x_3636_ == 0)
{
lean_dec_ref(v_arg_3631_);
lean_dec_ref(v_arg_3628_);
goto v___jp_3623_;
}
else
{
lean_object* v___x_3637_; 
lean_inc(v___y_3621_);
lean_inc_ref(v___y_3620_);
lean_inc(v___y_3619_);
lean_inc_ref(v___y_3618_);
lean_inc(v___y_3617_);
lean_inc_ref(v___y_3616_);
lean_inc(v___y_3615_);
lean_inc_ref(v___y_3614_);
lean_inc(v___y_3613_);
lean_inc_ref(v_arg_3631_);
v___x_3637_ = lean_sym_simp(v_arg_3631_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
if (lean_obj_tag(v___x_3637_) == 0)
{
lean_object* v_a_3638_; 
v_a_3638_ = lean_ctor_get(v___x_3637_, 0);
lean_inc(v_a_3638_);
lean_dec_ref_known(v___x_3637_, 1);
if (lean_obj_tag(v_a_3638_) == 0)
{
uint8_t v_contextDependent_3639_; lean_object* v___x_3640_; 
v_contextDependent_3639_ = lean_ctor_get_uint8(v_a_3638_, 1);
lean_dec_ref_known(v_a_3638_, 0);
v___x_3640_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_3631_, v___y_3616_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_object* v_a_3641_; uint8_t v___x_3642_; 
v_a_3641_ = lean_ctor_get(v___x_3640_, 0);
lean_inc(v_a_3641_);
lean_dec_ref_known(v___x_3640_, 1);
v___x_3642_ = lean_unbox(v_a_3641_);
if (v___x_3642_ == 0)
{
lean_object* v___x_3643_; 
v___x_3643_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_arg_3631_, v___y_3616_);
if (lean_obj_tag(v___x_3643_) == 0)
{
lean_object* v_a_3644_; uint8_t v___x_3645_; 
v_a_3644_ = lean_ctor_get(v___x_3643_, 0);
lean_inc(v_a_3644_);
lean_dec_ref_known(v___x_3643_, 1);
v___x_3645_ = lean_unbox(v_a_3644_);
lean_dec(v_a_3644_);
if (v___x_3645_ == 0)
{
lean_object* v___x_3646_; lean_object* v___f_3647_; lean_object* v___x_3648_; 
lean_dec(v_a_3641_);
v___x_3646_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_3636_, v_contextDependent_3639_);
v___f_3647_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__0___boxed), 11, 1);
lean_closure_set(v___f_3647_, 0, v___x_3646_);
v___x_3648_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable(v_arg_3631_, v_arg_3628_, v___f_3647_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
return v___x_3648_;
}
else
{
lean_object* v___x_3649_; 
lean_dec_ref(v_arg_3631_);
v___x_3649_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v___y_3616_);
if (lean_obj_tag(v___x_3649_) == 0)
{
lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3661_; 
v_a_3650_ = lean_ctor_get(v___x_3649_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3649_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3652_ = v___x_3649_;
v_isShared_3653_ = v_isSharedCheck_3661_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v___x_3649_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3661_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; uint8_t v___x_3657_; lean_object* v___x_3659_; 
v___x_3654_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__2);
v___x_3655_ = l_Lean_Expr_app___override(v___x_3654_, v_arg_3628_);
v___x_3656_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3656_, 0, v_a_3650_);
lean_ctor_set(v___x_3656_, 1, v___x_3655_);
v___x_3657_ = lean_unbox(v_a_3641_);
lean_dec(v_a_3641_);
lean_ctor_set_uint8(v___x_3656_, sizeof(void*)*2, v___x_3657_);
lean_ctor_set_uint8(v___x_3656_, sizeof(void*)*2 + 1, v_contextDependent_3639_);
if (v_isShared_3653_ == 0)
{
lean_ctor_set(v___x_3652_, 0, v___x_3656_);
v___x_3659_ = v___x_3652_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v___x_3656_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
else
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3669_; 
lean_dec(v_a_3641_);
lean_dec_ref(v_arg_3628_);
v_a_3662_ = lean_ctor_get(v___x_3649_, 0);
v_isSharedCheck_3669_ = !lean_is_exclusive(v___x_3649_);
if (v_isSharedCheck_3669_ == 0)
{
v___x_3664_ = v___x_3649_;
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3649_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3667_; 
if (v_isShared_3665_ == 0)
{
v___x_3667_ = v___x_3664_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v_a_3662_);
v___x_3667_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
return v___x_3667_;
}
}
}
}
}
else
{
lean_object* v_a_3670_; lean_object* v___x_3672_; uint8_t v_isShared_3673_; uint8_t v_isSharedCheck_3677_; 
lean_dec(v_a_3641_);
lean_dec_ref(v_arg_3631_);
lean_dec_ref(v_arg_3628_);
v_a_3670_ = lean_ctor_get(v___x_3643_, 0);
v_isSharedCheck_3677_ = !lean_is_exclusive(v___x_3643_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3672_ = v___x_3643_;
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
else
{
lean_inc(v_a_3670_);
lean_dec(v___x_3643_);
v___x_3672_ = lean_box(0);
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
v_resetjp_3671_:
{
lean_object* v___x_3675_; 
if (v_isShared_3673_ == 0)
{
v___x_3675_ = v___x_3672_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_a_3670_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
else
{
lean_object* v___x_3678_; 
lean_dec(v_a_3641_);
lean_dec_ref(v_arg_3631_);
v___x_3678_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v___y_3616_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3689_; 
v_a_3679_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3681_ = v___x_3678_;
v_isShared_3682_ = v_isSharedCheck_3689_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3678_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3689_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3687_; 
v___x_3683_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__5, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__5);
v___x_3684_ = l_Lean_Expr_app___override(v___x_3683_, v_arg_3628_);
v___x_3685_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3685_, 0, v_a_3679_);
lean_ctor_set(v___x_3685_, 1, v___x_3684_);
lean_ctor_set_uint8(v___x_3685_, sizeof(void*)*2, v___x_3611_);
lean_ctor_set_uint8(v___x_3685_, sizeof(void*)*2 + 1, v_contextDependent_3639_);
if (v_isShared_3682_ == 0)
{
lean_ctor_set(v___x_3681_, 0, v___x_3685_);
v___x_3687_ = v___x_3681_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v___x_3685_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
else
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
lean_dec_ref(v_arg_3628_);
v_a_3690_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3692_ = v___x_3678_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3678_);
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
else
{
lean_object* v_a_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3705_; 
lean_dec_ref(v_arg_3631_);
lean_dec_ref(v_arg_3628_);
v_a_3698_ = lean_ctor_get(v___x_3640_, 0);
v_isSharedCheck_3705_ = !lean_is_exclusive(v___x_3640_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3700_ = v___x_3640_;
v_isShared_3701_ = v_isSharedCheck_3705_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_a_3698_);
lean_dec(v___x_3640_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3705_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v___x_3703_; 
if (v_isShared_3701_ == 0)
{
v___x_3703_ = v___x_3700_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v_a_3698_);
v___x_3703_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
return v___x_3703_;
}
}
}
}
else
{
lean_object* v_e_x27_3706_; lean_object* v_proof_3707_; uint8_t v_contextDependent_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3804_; 
v_e_x27_3706_ = lean_ctor_get(v_a_3638_, 0);
v_proof_3707_ = lean_ctor_get(v_a_3638_, 1);
v_contextDependent_3708_ = lean_ctor_get_uint8(v_a_3638_, sizeof(void*)*2 + 1);
v_isSharedCheck_3804_ = !lean_is_exclusive(v_a_3638_);
if (v_isSharedCheck_3804_ == 0)
{
v___x_3710_ = v_a_3638_;
v_isShared_3711_ = v_isSharedCheck_3804_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_proof_3707_);
lean_inc(v_e_x27_3706_);
lean_dec(v_a_3638_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3804_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3712_; 
v___x_3712_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_3706_, v___y_3616_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_a_3713_; uint8_t v___x_3714_; 
v_a_3713_ = lean_ctor_get(v___x_3712_, 0);
lean_inc(v_a_3713_);
lean_dec_ref_known(v___x_3712_, 1);
v___x_3714_ = lean_unbox(v_a_3713_);
if (v___x_3714_ == 0)
{
lean_object* v___x_3715_; 
v___x_3715_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_3706_, v___y_3616_);
lean_dec_ref(v_e_x27_3706_);
if (lean_obj_tag(v___x_3715_) == 0)
{
lean_object* v_a_3716_; uint8_t v___x_3717_; 
v_a_3716_ = lean_ctor_get(v___x_3715_, 0);
lean_inc(v_a_3716_);
lean_dec_ref_known(v___x_3715_, 1);
v___x_3717_ = lean_unbox(v_a_3716_);
lean_dec(v_a_3716_);
if (v___x_3717_ == 0)
{
lean_object* v___x_3718_; 
lean_dec(v_a_3713_);
lean_del_object(v___x_3710_);
lean_dec_ref(v_proof_3707_);
lean_inc_ref(v_arg_3628_);
v___x_3718_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance(v_arg_3628_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
if (lean_obj_tag(v___x_3718_) == 0)
{
lean_object* v_a_3719_; lean_object* v_fst_3720_; 
v_a_3719_ = lean_ctor_get(v___x_3718_, 0);
lean_inc(v_a_3719_);
lean_dec_ref_known(v___x_3718_, 1);
v_fst_3720_ = lean_ctor_get(v_a_3719_, 0);
lean_inc(v_fst_3720_);
if (lean_obj_tag(v_fst_3720_) == 0)
{
uint8_t v_contextDependent_3721_; lean_object* v___x_3722_; lean_object* v___f_3723_; lean_object* v___x_3724_; 
lean_dec(v_a_3719_);
v_contextDependent_3721_ = lean_ctor_get_uint8(v_fst_3720_, 1);
lean_dec_ref_known(v_fst_3720_, 0);
v___x_3722_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_3636_, v_contextDependent_3721_);
v___f_3723_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___lam__0___boxed), 11, 1);
lean_closure_set(v___f_3723_, 0, v___x_3722_);
v___x_3724_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable(v_arg_3631_, v_arg_3628_, v___f_3723_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
return v___x_3724_;
}
else
{
lean_object* v_snd_3725_; lean_object* v_e_x27_3726_; lean_object* v_proof_3727_; uint8_t v_contextDependent_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___f_3733_; lean_object* v___x_3734_; 
v_snd_3725_ = lean_ctor_get(v_a_3719_, 1);
lean_inc_n(v_snd_3725_, 2);
lean_dec(v_a_3719_);
v_e_x27_3726_ = lean_ctor_get(v_fst_3720_, 0);
lean_inc_ref_n(v_e_x27_3726_, 2);
v_proof_3727_ = lean_ctor_get(v_fst_3720_, 1);
lean_inc_ref_n(v_proof_3727_, 2);
v_contextDependent_3728_ = lean_ctor_get_uint8(v_fst_3720_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_fst_3720_, 2);
v___x_3729_ = lean_box(0);
v___x_3730_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchIteDecidable___closed__2);
v___x_3731_ = lean_box(v___x_3636_);
v___x_3732_ = lean_box(v_contextDependent_3728_);
lean_inc_ref(v_arg_3628_);
lean_inc_ref(v_arg_3631_);
v___f_3733_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__2___boxed), 21, 11);
lean_closure_set(v___f_3733_, 0, v___x_3730_);
lean_closure_set(v___f_3733_, 1, v_e_x27_3726_);
lean_closure_set(v___f_3733_, 2, v_snd_3725_);
lean_closure_set(v___f_3733_, 3, v___x_3633_);
lean_closure_set(v___f_3733_, 4, v___x_3634_);
lean_closure_set(v___f_3733_, 5, v___x_3729_);
lean_closure_set(v___f_3733_, 6, v_arg_3631_);
lean_closure_set(v___f_3733_, 7, v_proof_3727_);
lean_closure_set(v___f_3733_, 8, v_arg_3628_);
lean_closure_set(v___f_3733_, 9, v___x_3731_);
lean_closure_set(v___f_3733_, 10, v___x_3732_);
v___x_3734_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr(v_arg_3631_, v_e_x27_3726_, v_proof_3727_, v_arg_3628_, v_snd_3725_, v___f_3733_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
return v___x_3734_;
}
}
else
{
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
lean_dec_ref(v_arg_3631_);
lean_dec_ref(v_arg_3628_);
v_a_3735_ = lean_ctor_get(v___x_3718_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3718_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3718_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___x_3718_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3740_; 
if (v_isShared_3738_ == 0)
{
v___x_3740_ = v___x_3737_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_a_3735_);
v___x_3740_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
return v___x_3740_;
}
}
}
}
else
{
lean_object* v___x_3743_; 
v___x_3743_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v___y_3616_);
if (lean_obj_tag(v___x_3743_) == 0)
{
lean_object* v_a_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3757_; 
v_a_3744_ = lean_ctor_get(v___x_3743_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3743_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3746_ = v___x_3743_;
v_isShared_3747_ = v_isSharedCheck_3757_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_a_3744_);
lean_dec(v___x_3743_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3757_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3751_; 
v___x_3748_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__8);
v___x_3749_ = l_Lean_mkApp3(v___x_3748_, v_arg_3631_, v_arg_3628_, v_proof_3707_);
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 1, v___x_3749_);
lean_ctor_set(v___x_3710_, 0, v_a_3744_);
v___x_3751_ = v___x_3710_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3744_);
lean_ctor_set(v_reuseFailAlloc_3756_, 1, v___x_3749_);
v___x_3751_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
uint8_t v___x_3752_; lean_object* v___x_3754_; 
v___x_3752_ = lean_unbox(v_a_3713_);
lean_dec(v_a_3713_);
lean_ctor_set_uint8(v___x_3751_, sizeof(void*)*2, v___x_3752_);
lean_ctor_set_uint8(v___x_3751_, sizeof(void*)*2 + 1, v_contextDependent_3708_);
if (v_isShared_3747_ == 0)
{
lean_ctor_set(v___x_3746_, 0, v___x_3751_);
v___x_3754_ = v___x_3746_;
goto v_reusejp_3753_;
}
else
{
lean_object* v_reuseFailAlloc_3755_; 
v_reuseFailAlloc_3755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3755_, 0, v___x_3751_);
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
else
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3765_; 
lean_dec(v_a_3713_);
lean_del_object(v___x_3710_);
lean_dec_ref(v_proof_3707_);
lean_dec_ref(v_arg_3631_);
lean_dec_ref(v_arg_3628_);
v_a_3758_ = lean_ctor_get(v___x_3743_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3743_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3760_ = v___x_3743_;
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3743_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3763_; 
if (v_isShared_3761_ == 0)
{
v___x_3763_ = v___x_3760_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_a_3758_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
}
}
else
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3773_; 
lean_dec(v_a_3713_);
lean_del_object(v___x_3710_);
lean_dec_ref(v_proof_3707_);
lean_dec_ref(v_arg_3631_);
lean_dec_ref(v_arg_3628_);
v_a_3766_ = lean_ctor_get(v___x_3715_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3715_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3768_ = v___x_3715_;
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3715_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3771_; 
if (v_isShared_3769_ == 0)
{
v___x_3771_ = v___x_3768_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_a_3766_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
}
else
{
lean_object* v___x_3774_; 
lean_dec(v_a_3713_);
lean_dec_ref(v_e_x27_3706_);
v___x_3774_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v___y_3616_);
if (lean_obj_tag(v___x_3774_) == 0)
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3787_; 
v_a_3775_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3777_ = v___x_3774_;
v_isShared_3778_ = v_isSharedCheck_3787_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3774_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3787_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3782_; 
v___x_3779_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__11, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__11_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___closed__11);
v___x_3780_ = l_Lean_mkApp3(v___x_3779_, v_arg_3631_, v_arg_3628_, v_proof_3707_);
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 1, v___x_3780_);
lean_ctor_set(v___x_3710_, 0, v_a_3775_);
v___x_3782_ = v___x_3710_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v_a_3775_);
lean_ctor_set(v_reuseFailAlloc_3786_, 1, v___x_3780_);
lean_ctor_set_uint8(v_reuseFailAlloc_3786_, sizeof(void*)*2 + 1, v_contextDependent_3708_);
v___x_3782_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
lean_object* v___x_3784_; 
lean_ctor_set_uint8(v___x_3782_, sizeof(void*)*2, v___x_3611_);
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 0, v___x_3782_);
v___x_3784_ = v___x_3777_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v___x_3782_);
v___x_3784_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
return v___x_3784_;
}
}
}
}
else
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3795_; 
lean_del_object(v___x_3710_);
lean_dec_ref(v_proof_3707_);
lean_dec_ref(v_arg_3631_);
lean_dec_ref(v_arg_3628_);
v_a_3788_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3790_ = v___x_3774_;
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3774_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3793_; 
if (v_isShared_3791_ == 0)
{
v___x_3793_ = v___x_3790_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_a_3788_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
return v___x_3793_;
}
}
}
}
}
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
lean_del_object(v___x_3710_);
lean_dec_ref(v_proof_3707_);
lean_dec_ref(v_e_x27_3706_);
lean_dec_ref(v_arg_3631_);
lean_dec_ref(v_arg_3628_);
v_a_3796_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v___x_3712_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3712_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
if (v_isShared_3799_ == 0)
{
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_a_3796_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_3631_);
lean_dec_ref(v_arg_3628_);
return v___x_3637_;
}
}
}
}
v___jp_3623_:
{
lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3624_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_3624_, 0, v___x_3611_);
lean_ctor_set_uint8(v___x_3624_, 1, v___x_3611_);
v___x_3625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3624_);
return v___x_3625_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___boxed(lean_object* v___x_3805_, lean_object* v_e_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_){
_start:
{
uint8_t v___x_20456__boxed_3817_; lean_object* v_res_3818_; 
v___x_20456__boxed_3817_ = lean_unbox(v___x_3805_);
v_res_3818_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0(v___x_20456__boxed_3817_, v_e_3806_, v___y_3807_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_);
lean_dec(v___y_3815_);
lean_dec_ref(v___y_3814_);
lean_dec(v___y_3813_);
lean_dec_ref(v___y_3812_);
lean_dec(v___y_3811_);
lean_dec_ref(v___y_3810_);
lean_dec(v___y_3809_);
lean_dec_ref(v___y_3808_);
lean_dec(v___y_3807_);
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv(lean_object* v_e_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_, lean_object* v_a_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_){
_start:
{
lean_object* v_numArgs_3830_; lean_object* v___x_3831_; uint8_t v___x_3832_; 
v_numArgs_3830_ = l_Lean_Expr_getAppNumArgs(v_e_3819_);
v___x_3831_ = lean_unsigned_to_nat(2u);
v___x_3832_ = lean_nat_dec_lt(v_numArgs_3830_, v___x_3831_);
if (v___x_3832_ == 0)
{
lean_object* v___x_3833_; lean_object* v___f_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; 
v___x_3833_ = lean_box(v___x_3832_);
v___f_3834_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___boxed), 12, 1);
lean_closure_set(v___f_3834_, 0, v___x_3833_);
v___x_3835_ = lean_nat_sub(v_numArgs_3830_, v___x_3831_);
lean_dec(v_numArgs_3830_);
v___x_3836_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_3819_, v___x_3835_, v___f_3834_, v_a_3820_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_, v_a_3825_, v_a_3826_, v_a_3827_, v_a_3828_);
lean_dec(v___x_3835_);
return v___x_3836_;
}
else
{
uint8_t v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; 
lean_dec(v_numArgs_3830_);
lean_dec_ref(v_e_3819_);
v___x_3837_ = 0;
v___x_3838_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_3838_, 0, v___x_3832_);
lean_ctor_set_uint8(v___x_3838_, 1, v___x_3837_);
v___x_3839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3839_, 0, v___x_3838_);
return v___x_3839_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___boxed(lean_object* v_e_3840_, lean_object* v_a_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_, lean_object* v_a_3846_, lean_object* v_a_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_, lean_object* v_a_3850_){
_start:
{
lean_object* v_res_3851_; 
v_res_3851_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv(v_e_3840_, v_a_3841_, v_a_3842_, v_a_3843_, v_a_3844_, v_a_3845_, v_a_3846_, v_a_3847_, v_a_3848_, v_a_3849_);
lean_dec(v_a_3849_);
lean_dec_ref(v_a_3848_);
lean_dec(v_a_3847_);
lean_dec_ref(v_a_3846_);
lean_dec(v_a_3845_);
lean_dec_ref(v_a_3844_);
lean_dec(v_a_3843_);
lean_dec_ref(v_a_3842_);
lean_dec(v_a_3841_);
return v_res_3851_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_(void){
_start:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___x_3853_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_));
v___x_3854_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_3855_ = l_Lean_Name_str___override(v___x_3854_, v___x_3853_);
return v___x_3855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; 
v___x_3867_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_);
v___x_3868_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_));
v___x_3869_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___boxed), 11, 0);
v___x_3870_ = l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(v___x_3867_, v___x_3868_, v___x_3869_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14____boxed(lean_object* v_a_3871_){
_start:
{
lean_object* v_res_3872_; 
v_res_3872_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_();
return v_res_3872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_16_(){
_start:
{
lean_object* v___x_3874_; uint8_t v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; 
v___x_3874_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_);
v___x_3875_ = 0;
v___x_3876_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___boxed), 11, 0);
v___x_3877_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(v___x_3874_, v___x_3875_, v___x_3876_);
return v___x_3877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_16____boxed(lean_object* v_a_3878_){
_start:
{
lean_object* v_res_3879_; 
v_res_3879_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_16_();
return v_res_3879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond(lean_object* v_a_3880_, lean_object* v_a_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_, lean_object* v_a_3884_, lean_object* v_a_3885_, lean_object* v_a_3886_, lean_object* v_a_3887_, lean_object* v_a_3888_, lean_object* v_a_3889_){
_start:
{
lean_object* v___x_3891_; 
v___x_3891_ = l_Lean_Meta_Sym_Simp_simpCond(v_a_3880_, v_a_3881_, v_a_3882_, v_a_3883_, v_a_3884_, v_a_3885_, v_a_3886_, v_a_3887_, v_a_3888_, v_a_3889_);
return v___x_3891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___boxed(lean_object* v_a_3892_, lean_object* v_a_3893_, lean_object* v_a_3894_, lean_object* v_a_3895_, lean_object* v_a_3896_, lean_object* v_a_3897_, lean_object* v_a_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_){
_start:
{
lean_object* v_res_3903_; 
v_res_3903_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond(v_a_3892_, v_a_3893_, v_a_3894_, v_a_3895_, v_a_3896_, v_a_3897_, v_a_3898_, v_a_3899_, v_a_3900_, v_a_3901_);
lean_dec(v_a_3901_);
lean_dec_ref(v_a_3900_);
lean_dec(v_a_3899_);
lean_dec_ref(v_a_3898_);
lean_dec(v_a_3897_);
lean_dec_ref(v_a_3896_);
lean_dec(v_a_3895_);
lean_dec_ref(v_a_3894_);
lean_dec(v_a_3893_);
return v_res_3903_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_(void){
_start:
{
lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; 
v___x_3905_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_));
v___x_3906_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_);
v___x_3907_ = l_Lean_Name_str___override(v___x_3906_, v___x_3905_);
return v___x_3907_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_(void){
_start:
{
lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; 
v___x_3908_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_));
v___x_3909_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_);
v___x_3910_ = l_Lean_Name_str___override(v___x_3909_, v___x_3908_);
return v___x_3910_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_(void){
_start:
{
lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; 
v___x_3912_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_));
v___x_3913_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_);
v___x_3914_ = l_Lean_Name_str___override(v___x_3913_, v___x_3912_);
return v___x_3914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_(){
_start:
{
lean_object* v___f_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; 
v___f_3930_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_));
v___x_3931_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_);
v___x_3932_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_));
v___x_3933_ = l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(v___x_3931_, v___x_3932_, v___f_3930_);
return v___x_3933_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16____boxed(lean_object* v_a_3934_){
_start:
{
lean_object* v_res_3935_; 
v_res_3935_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_();
return v_res_3935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_18_(){
_start:
{
lean_object* v___f_3937_; lean_object* v___x_3938_; uint8_t v___x_3939_; lean_object* v___x_3940_; 
v___f_3937_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_));
v___x_3938_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_);
v___x_3939_ = 0;
v___x_3940_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(v___x_3938_, v___x_3939_, v___f_3937_);
return v___x_3940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_18____boxed(lean_object* v_a_3941_){
_start:
{
lean_object* v_res_3942_; 
v_res_3942_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_18_();
return v_res_3942_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0(lean_object* v_msgData_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_){
_start:
{
lean_object* v___x_3949_; lean_object* v_env_3950_; lean_object* v___x_3951_; lean_object* v_toCold_3952_; lean_object* v_mctx_3953_; lean_object* v_lctx_3954_; lean_object* v_options_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; 
v___x_3949_ = lean_st_ref_get(v___y_3947_);
v_env_3950_ = lean_ctor_get(v___x_3949_, 0);
lean_inc_ref(v_env_3950_);
lean_dec(v___x_3949_);
v___x_3951_ = lean_st_ref_get(v___y_3945_);
v_toCold_3952_ = lean_ctor_get(v___y_3946_, 0);
v_mctx_3953_ = lean_ctor_get(v___x_3951_, 0);
lean_inc_ref(v_mctx_3953_);
lean_dec(v___x_3951_);
v_lctx_3954_ = lean_ctor_get(v___y_3944_, 2);
v_options_3955_ = lean_ctor_get(v_toCold_3952_, 2);
lean_inc_ref(v_options_3955_);
lean_inc_ref(v_lctx_3954_);
v___x_3956_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3956_, 0, v_env_3950_);
lean_ctor_set(v___x_3956_, 1, v_mctx_3953_);
lean_ctor_set(v___x_3956_, 2, v_lctx_3954_);
lean_ctor_set(v___x_3956_, 3, v_options_3955_);
v___x_3957_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3956_);
lean_ctor_set(v___x_3957_, 1, v_msgData_3943_);
v___x_3958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3957_);
return v___x_3958_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0___boxed(lean_object* v_msgData_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_){
_start:
{
lean_object* v_res_3965_; 
v_res_3965_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0(v_msgData_3959_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_);
lean_dec(v___y_3963_);
lean_dec_ref(v___y_3962_);
lean_dec(v___y_3961_);
lean_dec_ref(v___y_3960_);
return v_res_3965_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3966_; double v___x_3967_; 
v___x_3966_ = lean_unsigned_to_nat(0u);
v___x_3967_ = lean_float_of_nat(v___x_3966_);
return v___x_3967_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(lean_object* v_cls_3971_, lean_object* v_msg_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_){
_start:
{
lean_object* v_ref_3978_; lean_object* v___x_3979_; lean_object* v_a_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_4024_; 
v_ref_3978_ = lean_ctor_get(v___y_3975_, 2);
v___x_3979_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0(v_msg_3972_, v___y_3973_, v___y_3974_, v___y_3975_, v___y_3976_);
v_a_3980_ = lean_ctor_get(v___x_3979_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v___x_3979_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_3982_ = v___x_3979_;
v_isShared_3983_ = v_isSharedCheck_4024_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_a_3980_);
lean_dec(v___x_3979_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_4024_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v___x_3984_; lean_object* v_traceState_3985_; lean_object* v_env_3986_; lean_object* v_nextMacroScope_3987_; lean_object* v_ngen_3988_; lean_object* v_auxDeclNGen_3989_; lean_object* v_cache_3990_; lean_object* v_messages_3991_; lean_object* v_infoState_3992_; lean_object* v_snapshotTasks_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4023_; 
v___x_3984_ = lean_st_ref_take(v___y_3976_);
v_traceState_3985_ = lean_ctor_get(v___x_3984_, 4);
v_env_3986_ = lean_ctor_get(v___x_3984_, 0);
v_nextMacroScope_3987_ = lean_ctor_get(v___x_3984_, 1);
v_ngen_3988_ = lean_ctor_get(v___x_3984_, 2);
v_auxDeclNGen_3989_ = lean_ctor_get(v___x_3984_, 3);
v_cache_3990_ = lean_ctor_get(v___x_3984_, 5);
v_messages_3991_ = lean_ctor_get(v___x_3984_, 6);
v_infoState_3992_ = lean_ctor_get(v___x_3984_, 7);
v_snapshotTasks_3993_ = lean_ctor_get(v___x_3984_, 8);
v_isSharedCheck_4023_ = !lean_is_exclusive(v___x_3984_);
if (v_isSharedCheck_4023_ == 0)
{
v___x_3995_ = v___x_3984_;
v_isShared_3996_ = v_isSharedCheck_4023_;
goto v_resetjp_3994_;
}
else
{
lean_inc(v_snapshotTasks_3993_);
lean_inc(v_infoState_3992_);
lean_inc(v_messages_3991_);
lean_inc(v_cache_3990_);
lean_inc(v_traceState_3985_);
lean_inc(v_auxDeclNGen_3989_);
lean_inc(v_ngen_3988_);
lean_inc(v_nextMacroScope_3987_);
lean_inc(v_env_3986_);
lean_dec(v___x_3984_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4023_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
uint64_t v_tid_3997_; lean_object* v_traces_3998_; lean_object* v___x_4000_; uint8_t v_isShared_4001_; uint8_t v_isSharedCheck_4022_; 
v_tid_3997_ = lean_ctor_get_uint64(v_traceState_3985_, sizeof(void*)*1);
v_traces_3998_ = lean_ctor_get(v_traceState_3985_, 0);
v_isSharedCheck_4022_ = !lean_is_exclusive(v_traceState_3985_);
if (v_isSharedCheck_4022_ == 0)
{
v___x_4000_ = v_traceState_3985_;
v_isShared_4001_ = v_isSharedCheck_4022_;
goto v_resetjp_3999_;
}
else
{
lean_inc(v_traces_3998_);
lean_dec(v_traceState_3985_);
v___x_4000_ = lean_box(0);
v_isShared_4001_ = v_isSharedCheck_4022_;
goto v_resetjp_3999_;
}
v_resetjp_3999_:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; double v___x_4004_; uint8_t v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4013_; 
v___x_4002_ = lean_box(0);
v___x_4003_ = lean_box(0);
v___x_4004_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0);
v___x_4005_ = 0;
v___x_4006_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__1));
v___x_4007_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4007_, 0, v_cls_3971_);
lean_ctor_set(v___x_4007_, 1, v___x_4003_);
lean_ctor_set(v___x_4007_, 2, v___x_4006_);
lean_ctor_set_float(v___x_4007_, sizeof(void*)*3, v___x_4004_);
lean_ctor_set_float(v___x_4007_, sizeof(void*)*3 + 8, v___x_4004_);
lean_ctor_set_uint8(v___x_4007_, sizeof(void*)*3 + 16, v___x_4005_);
v___x_4008_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__2));
v___x_4009_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4009_, 0, v___x_4007_);
lean_ctor_set(v___x_4009_, 1, v_a_3980_);
lean_ctor_set(v___x_4009_, 2, v___x_4008_);
lean_inc(v_ref_3978_);
v___x_4010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4010_, 0, v_ref_3978_);
lean_ctor_set(v___x_4010_, 1, v___x_4009_);
v___x_4011_ = l_Lean_PersistentArray_push___redArg(v_traces_3998_, v___x_4010_);
if (v_isShared_4001_ == 0)
{
lean_ctor_set(v___x_4000_, 0, v___x_4011_);
v___x_4013_ = v___x_4000_;
goto v_reusejp_4012_;
}
else
{
lean_object* v_reuseFailAlloc_4021_; 
v_reuseFailAlloc_4021_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4021_, 0, v___x_4011_);
lean_ctor_set_uint64(v_reuseFailAlloc_4021_, sizeof(void*)*1, v_tid_3997_);
v___x_4013_ = v_reuseFailAlloc_4021_;
goto v_reusejp_4012_;
}
v_reusejp_4012_:
{
lean_object* v___x_4015_; 
if (v_isShared_3996_ == 0)
{
lean_ctor_set(v___x_3995_, 4, v___x_4013_);
v___x_4015_ = v___x_3995_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4020_; 
v_reuseFailAlloc_4020_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4020_, 0, v_env_3986_);
lean_ctor_set(v_reuseFailAlloc_4020_, 1, v_nextMacroScope_3987_);
lean_ctor_set(v_reuseFailAlloc_4020_, 2, v_ngen_3988_);
lean_ctor_set(v_reuseFailAlloc_4020_, 3, v_auxDeclNGen_3989_);
lean_ctor_set(v_reuseFailAlloc_4020_, 4, v___x_4013_);
lean_ctor_set(v_reuseFailAlloc_4020_, 5, v_cache_3990_);
lean_ctor_set(v_reuseFailAlloc_4020_, 6, v_messages_3991_);
lean_ctor_set(v_reuseFailAlloc_4020_, 7, v_infoState_3992_);
lean_ctor_set(v_reuseFailAlloc_4020_, 8, v_snapshotTasks_3993_);
v___x_4015_ = v_reuseFailAlloc_4020_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
lean_object* v___x_4016_; lean_object* v___x_4018_; 
v___x_4016_ = lean_st_ref_put(v___y_3976_, v___x_4015_);
if (v_isShared_3983_ == 0)
{
lean_ctor_set(v___x_3982_, 0, v___x_4002_);
v___x_4018_ = v___x_3982_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4019_; 
v_reuseFailAlloc_4019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4019_, 0, v___x_4002_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___boxed(lean_object* v_cls_4025_, lean_object* v_msg_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_){
_start:
{
lean_object* v_res_4032_; 
v_res_4032_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(v_cls_4025_, v_msg_4026_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_);
lean_dec(v___y_4030_);
lean_dec_ref(v___y_4029_);
lean_dec(v___y_4028_);
lean_dec_ref(v___y_4027_);
return v_res_4032_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5(void){
_start:
{
lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4043_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2));
v___x_4044_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__4));
v___x_4045_ = l_Lean_Name_append(v___x_4044_, v___x_4043_);
return v___x_4045_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7(void){
_start:
{
lean_object* v___x_4047_; lean_object* v___x_4048_; 
v___x_4047_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__6));
v___x_4048_ = l_Lean_stringToMessageData(v___x_4047_);
return v___x_4048_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9(void){
_start:
{
lean_object* v___x_4050_; lean_object* v___x_4051_; 
v___x_4050_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__8));
v___x_4051_ = l_Lean_stringToMessageData(v___x_4050_);
return v___x_4051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(lean_object* v_e_4052_, lean_object* v_a_4053_, lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_){
_start:
{
lean_object* v___x_4063_; lean_object* v___x_4064_; 
lean_inc_ref(v_e_4052_);
v___x_4063_ = lean_alloc_closure((void*)(l_Lean_Meta_reduceRecMatcher_x3f___boxed), 6, 1);
lean_closure_set(v___x_4063_, 0, v_e_4052_);
v___x_4064_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___x_4063_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
if (lean_obj_tag(v___x_4064_) == 0)
{
lean_object* v_a_4065_; lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4123_; 
v_a_4065_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4123_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4123_ == 0)
{
v___x_4067_ = v___x_4064_;
v_isShared_4068_ = v_isSharedCheck_4123_;
goto v_resetjp_4066_;
}
else
{
lean_inc(v_a_4065_);
lean_dec(v___x_4064_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4123_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
if (lean_obj_tag(v_a_4065_) == 1)
{
lean_object* v_val_4069_; lean_object* v___y_4071_; lean_object* v___y_4072_; lean_object* v___y_4073_; lean_object* v___y_4074_; lean_object* v___y_4075_; lean_object* v___y_4076_; lean_object* v_toCold_4096_; lean_object* v_options_4097_; uint8_t v_hasTrace_4098_; 
lean_del_object(v___x_4067_);
v_val_4069_ = lean_ctor_get(v_a_4065_, 0);
lean_inc(v_val_4069_);
lean_dec_ref_known(v_a_4065_, 1);
v_toCold_4096_ = lean_ctor_get(v_a_4060_, 0);
v_options_4097_ = lean_ctor_get(v_toCold_4096_, 2);
v_hasTrace_4098_ = lean_ctor_get_uint8(v_options_4097_, sizeof(void*)*1);
if (v_hasTrace_4098_ == 0)
{
lean_dec_ref(v_e_4052_);
v___y_4071_ = v_a_4056_;
v___y_4072_ = v_a_4057_;
v___y_4073_ = v_a_4058_;
v___y_4074_ = v_a_4059_;
v___y_4075_ = v_a_4060_;
v___y_4076_ = v_a_4061_;
goto v___jp_4070_;
}
else
{
lean_object* v_inheritedTraceOptions_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; uint8_t v___x_4102_; 
v_inheritedTraceOptions_4099_ = lean_ctor_get(v_toCold_4096_, 11);
v___x_4100_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2));
v___x_4101_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5, &l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5_once, _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5);
v___x_4102_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4099_, v_options_4097_, v___x_4101_);
if (v___x_4102_ == 0)
{
lean_dec_ref(v_e_4052_);
v___y_4071_ = v_a_4056_;
v___y_4072_ = v_a_4057_;
v___y_4073_ = v_a_4058_;
v___y_4074_ = v_a_4059_;
v___y_4075_ = v_a_4060_;
v___y_4076_ = v_a_4061_;
goto v___jp_4070_;
}
else
{
lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; 
v___x_4103_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7, &l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7_once, _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7);
v___x_4104_ = l_Lean_indentExpr(v_e_4052_);
v___x_4105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4105_, 0, v___x_4103_);
lean_ctor_set(v___x_4105_, 1, v___x_4104_);
v___x_4106_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9, &l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9_once, _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9);
v___x_4107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4105_);
lean_ctor_set(v___x_4107_, 1, v___x_4106_);
lean_inc(v_val_4069_);
v___x_4108_ = l_Lean_indentExpr(v_val_4069_);
v___x_4109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4109_, 0, v___x_4107_);
lean_ctor_set(v___x_4109_, 1, v___x_4108_);
v___x_4110_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(v___x_4100_, v___x_4109_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
if (lean_obj_tag(v___x_4110_) == 0)
{
lean_dec_ref_known(v___x_4110_, 1);
v___y_4071_ = v_a_4056_;
v___y_4072_ = v_a_4057_;
v___y_4073_ = v_a_4058_;
v___y_4074_ = v_a_4059_;
v___y_4075_ = v_a_4060_;
v___y_4076_ = v_a_4061_;
goto v___jp_4070_;
}
else
{
lean_object* v_a_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4118_; 
lean_dec(v_val_4069_);
v_a_4111_ = lean_ctor_get(v___x_4110_, 0);
v_isSharedCheck_4118_ = !lean_is_exclusive(v___x_4110_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4113_ = v___x_4110_;
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_a_4111_);
lean_dec(v___x_4110_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4116_; 
if (v_isShared_4114_ == 0)
{
v___x_4116_ = v___x_4113_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_a_4111_);
v___x_4116_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
return v___x_4116_;
}
}
}
}
}
v___jp_4070_:
{
lean_object* v___x_4077_; 
lean_inc(v_val_4069_);
v___x_4077_ = l_Lean_Meta_Sym_mkEqRefl(v_val_4069_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
if (lean_obj_tag(v___x_4077_) == 0)
{
lean_object* v_a_4078_; lean_object* v___x_4080_; uint8_t v_isShared_4081_; uint8_t v_isSharedCheck_4087_; 
v_a_4078_ = lean_ctor_get(v___x_4077_, 0);
v_isSharedCheck_4087_ = !lean_is_exclusive(v___x_4077_);
if (v_isSharedCheck_4087_ == 0)
{
v___x_4080_ = v___x_4077_;
v_isShared_4081_ = v_isSharedCheck_4087_;
goto v_resetjp_4079_;
}
else
{
lean_inc(v_a_4078_);
lean_dec(v___x_4077_);
v___x_4080_ = lean_box(0);
v_isShared_4081_ = v_isSharedCheck_4087_;
goto v_resetjp_4079_;
}
v_resetjp_4079_:
{
uint8_t v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4085_; 
v___x_4082_ = 0;
v___x_4083_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_4083_, 0, v_val_4069_);
lean_ctor_set(v___x_4083_, 1, v_a_4078_);
lean_ctor_set_uint8(v___x_4083_, sizeof(void*)*2, v___x_4082_);
lean_ctor_set_uint8(v___x_4083_, sizeof(void*)*2 + 1, v___x_4082_);
if (v_isShared_4081_ == 0)
{
lean_ctor_set(v___x_4080_, 0, v___x_4083_);
v___x_4085_ = v___x_4080_;
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
}
else
{
lean_object* v_a_4088_; lean_object* v___x_4090_; uint8_t v_isShared_4091_; uint8_t v_isSharedCheck_4095_; 
lean_dec(v_val_4069_);
v_a_4088_ = lean_ctor_get(v___x_4077_, 0);
v_isSharedCheck_4095_ = !lean_is_exclusive(v___x_4077_);
if (v_isSharedCheck_4095_ == 0)
{
v___x_4090_ = v___x_4077_;
v_isShared_4091_ = v_isSharedCheck_4095_;
goto v_resetjp_4089_;
}
else
{
lean_inc(v_a_4088_);
lean_dec(v___x_4077_);
v___x_4090_ = lean_box(0);
v_isShared_4091_ = v_isSharedCheck_4095_;
goto v_resetjp_4089_;
}
v_resetjp_4089_:
{
lean_object* v___x_4093_; 
if (v_isShared_4091_ == 0)
{
v___x_4093_ = v___x_4090_;
goto v_reusejp_4092_;
}
else
{
lean_object* v_reuseFailAlloc_4094_; 
v_reuseFailAlloc_4094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4094_, 0, v_a_4088_);
v___x_4093_ = v_reuseFailAlloc_4094_;
goto v_reusejp_4092_;
}
v_reusejp_4092_:
{
return v___x_4093_;
}
}
}
}
}
else
{
lean_object* v___x_4119_; lean_object* v___x_4121_; 
lean_dec(v_a_4065_);
lean_dec_ref(v_e_4052_);
v___x_4119_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0));
if (v_isShared_4068_ == 0)
{
lean_ctor_set(v___x_4067_, 0, v___x_4119_);
v___x_4121_ = v___x_4067_;
goto v_reusejp_4120_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v___x_4119_);
v___x_4121_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4120_;
}
v_reusejp_4120_:
{
return v___x_4121_;
}
}
}
}
else
{
lean_object* v_a_4124_; lean_object* v___x_4126_; uint8_t v_isShared_4127_; uint8_t v_isSharedCheck_4131_; 
lean_dec_ref(v_e_4052_);
v_a_4124_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4131_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4131_ == 0)
{
v___x_4126_ = v___x_4064_;
v_isShared_4127_ = v_isSharedCheck_4131_;
goto v_resetjp_4125_;
}
else
{
lean_inc(v_a_4124_);
lean_dec(v___x_4064_);
v___x_4126_ = lean_box(0);
v_isShared_4127_ = v_isSharedCheck_4131_;
goto v_resetjp_4125_;
}
v_resetjp_4125_:
{
lean_object* v___x_4129_; 
if (v_isShared_4127_ == 0)
{
v___x_4129_ = v___x_4126_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4130_; 
v_reuseFailAlloc_4130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4130_, 0, v_a_4124_);
v___x_4129_ = v_reuseFailAlloc_4130_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
return v___x_4129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___boxed(lean_object* v_e_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_, lean_object* v_a_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_){
_start:
{
lean_object* v_res_4143_; 
v_res_4143_ = l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(v_e_4132_, v_a_4133_, v_a_4134_, v_a_4135_, v_a_4136_, v_a_4137_, v_a_4138_, v_a_4139_, v_a_4140_, v_a_4141_);
lean_dec(v_a_4141_);
lean_dec_ref(v_a_4140_);
lean_dec(v_a_4139_);
lean_dec_ref(v_a_4138_);
lean_dec(v_a_4137_);
lean_dec_ref(v_a_4136_);
lean_dec(v_a_4135_);
lean_dec_ref(v_a_4134_);
lean_dec(v_a_4133_);
return v_res_4143_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0(lean_object* v_cls_4144_, lean_object* v_msg_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_){
_start:
{
lean_object* v___x_4156_; 
v___x_4156_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(v_cls_4144_, v_msg_4145_, v___y_4151_, v___y_4152_, v___y_4153_, v___y_4154_);
return v___x_4156_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___boxed(lean_object* v_cls_4157_, lean_object* v_msg_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_){
_start:
{
lean_object* v_res_4169_; 
v_res_4169_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0(v_cls_4157_, v_msg_4158_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_, v___y_4167_);
lean_dec(v___y_4167_);
lean_dec_ref(v___y_4166_);
lean_dec(v___y_4165_);
lean_dec_ref(v___y_4164_);
lean_dec(v___y_4163_);
lean_dec_ref(v___y_4162_);
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4160_);
lean_dec(v___y_4159_);
return v_res_4169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec(lean_object* v_x_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_, lean_object* v_a_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_, lean_object* v_a_4188_, lean_object* v_a_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_){
_start:
{
uint8_t v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4193_ = 0;
v___x_4194_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___closed__0));
lean_inc_ref(v_x_4182_);
v___x_4195_ = l_Lean_Meta_Sym_Simp_simpInterlaced(v_x_4182_, v___x_4194_, v_a_4183_, v_a_4184_, v_a_4185_, v_a_4186_, v_a_4187_, v_a_4188_, v_a_4189_, v_a_4190_, v_a_4191_);
if (lean_obj_tag(v___x_4195_) == 0)
{
lean_object* v_a_4196_; 
v_a_4196_ = lean_ctor_get(v___x_4195_, 0);
lean_inc(v_a_4196_);
if (lean_obj_tag(v_a_4196_) == 0)
{
uint8_t v_done_4197_; 
v_done_4197_ = lean_ctor_get_uint8(v_a_4196_, 0);
if (v_done_4197_ == 0)
{
lean_object* v___x_4199_; uint8_t v_isShared_4200_; uint8_t v_isSharedCheck_4210_; 
v_isSharedCheck_4210_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4210_ == 0)
{
lean_object* v_unused_4211_; 
v_unused_4211_ = lean_ctor_get(v___x_4195_, 0);
lean_dec(v_unused_4211_);
v___x_4199_ = v___x_4195_;
v_isShared_4200_ = v_isSharedCheck_4210_;
goto v_resetjp_4198_;
}
else
{
lean_dec(v___x_4195_);
v___x_4199_ = lean_box(0);
v_isShared_4200_ = v_isSharedCheck_4210_;
goto v_resetjp_4198_;
}
v_resetjp_4198_:
{
uint8_t v_contextDependent_4201_; lean_object* v___x_4202_; 
v_contextDependent_4201_ = lean_ctor_get_uint8(v_a_4196_, 1);
lean_dec_ref_known(v_a_4196_, 0);
v___x_4202_ = l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(v_x_4182_, v_a_4183_, v_a_4184_, v_a_4185_, v_a_4186_, v_a_4187_, v_a_4188_, v_a_4189_, v_a_4190_, v_a_4191_);
if (lean_obj_tag(v___x_4202_) == 0)
{
lean_object* v_a_4203_; uint8_t v___y_4205_; 
v_a_4203_ = lean_ctor_get(v___x_4202_, 0);
lean_inc(v_a_4203_);
if (v_contextDependent_4201_ == 0)
{
lean_dec(v_a_4203_);
lean_del_object(v___x_4199_);
return v___x_4202_;
}
else
{
lean_dec_ref_known(v___x_4202_, 1);
v___y_4205_ = v___x_4193_;
goto v___jp_4204_;
}
v___jp_4204_:
{
lean_object* v___x_4206_; lean_object* v___x_4208_; 
v___x_4206_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_4203_);
if (v_isShared_4200_ == 0)
{
lean_ctor_set(v___x_4199_, 0, v___x_4206_);
v___x_4208_ = v___x_4199_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v___x_4206_);
v___x_4208_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
return v___x_4208_;
}
}
}
else
{
lean_del_object(v___x_4199_);
return v___x_4202_;
}
}
}
else
{
lean_dec_ref_known(v_a_4196_, 0);
lean_dec_ref(v_x_4182_);
return v___x_4195_;
}
}
else
{
uint8_t v_done_4212_; 
v_done_4212_ = lean_ctor_get_uint8(v_a_4196_, sizeof(void*)*2);
if (v_done_4212_ == 0)
{
lean_object* v_e_x27_4213_; lean_object* v_proof_4214_; uint8_t v_contextDependent_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4261_; 
lean_dec_ref_known(v___x_4195_, 1);
v_e_x27_4213_ = lean_ctor_get(v_a_4196_, 0);
v_proof_4214_ = lean_ctor_get(v_a_4196_, 1);
v_contextDependent_4215_ = lean_ctor_get_uint8(v_a_4196_, sizeof(void*)*2 + 1);
v_isSharedCheck_4261_ = !lean_is_exclusive(v_a_4196_);
if (v_isSharedCheck_4261_ == 0)
{
v___x_4217_ = v_a_4196_;
v_isShared_4218_ = v_isSharedCheck_4261_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_proof_4214_);
lean_inc(v_e_x27_4213_);
lean_dec(v_a_4196_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4261_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4219_; 
lean_inc_ref(v_e_x27_4213_);
v___x_4219_ = l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(v_e_x27_4213_, v_a_4183_, v_a_4184_, v_a_4185_, v_a_4186_, v_a_4187_, v_a_4188_, v_a_4189_, v_a_4190_, v_a_4191_);
if (lean_obj_tag(v___x_4219_) == 0)
{
lean_object* v_a_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4260_; 
v_a_4220_ = lean_ctor_get(v___x_4219_, 0);
v_isSharedCheck_4260_ = !lean_is_exclusive(v___x_4219_);
if (v_isSharedCheck_4260_ == 0)
{
v___x_4222_ = v___x_4219_;
v_isShared_4223_ = v_isSharedCheck_4260_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_a_4220_);
lean_dec(v___x_4219_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4260_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
if (lean_obj_tag(v_a_4220_) == 0)
{
uint8_t v___y_4225_; 
lean_dec_ref_known(v_a_4220_, 0);
lean_dec_ref(v_x_4182_);
if (v_contextDependent_4215_ == 0)
{
v___y_4225_ = v___x_4193_;
goto v___jp_4224_;
}
else
{
v___y_4225_ = v_contextDependent_4215_;
goto v___jp_4224_;
}
v___jp_4224_:
{
lean_object* v___x_4227_; 
if (v_isShared_4218_ == 0)
{
v___x_4227_ = v___x_4217_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v_e_x27_4213_);
lean_ctor_set(v_reuseFailAlloc_4231_, 1, v_proof_4214_);
v___x_4227_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
lean_object* v___x_4229_; 
lean_ctor_set_uint8(v___x_4227_, sizeof(void*)*2, v___x_4193_);
lean_ctor_set_uint8(v___x_4227_, sizeof(void*)*2 + 1, v___y_4225_);
if (v_isShared_4223_ == 0)
{
lean_ctor_set(v___x_4222_, 0, v___x_4227_);
v___x_4229_ = v___x_4222_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4230_; 
v_reuseFailAlloc_4230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4230_, 0, v___x_4227_);
v___x_4229_ = v_reuseFailAlloc_4230_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
return v___x_4229_;
}
}
}
}
else
{
lean_object* v_e_x27_4232_; lean_object* v_proof_4233_; lean_object* v___x_4235_; uint8_t v_isShared_4236_; uint8_t v_isSharedCheck_4259_; 
lean_del_object(v___x_4222_);
lean_del_object(v___x_4217_);
v_e_x27_4232_ = lean_ctor_get(v_a_4220_, 0);
v_proof_4233_ = lean_ctor_get(v_a_4220_, 1);
v_isSharedCheck_4259_ = !lean_is_exclusive(v_a_4220_);
if (v_isSharedCheck_4259_ == 0)
{
v___x_4235_ = v_a_4220_;
v_isShared_4236_ = v_isSharedCheck_4259_;
goto v_resetjp_4234_;
}
else
{
lean_inc(v_proof_4233_);
lean_inc(v_e_x27_4232_);
lean_dec(v_a_4220_);
v___x_4235_ = lean_box(0);
v_isShared_4236_ = v_isSharedCheck_4259_;
goto v_resetjp_4234_;
}
v_resetjp_4234_:
{
lean_object* v___x_4237_; 
lean_inc_ref(v_e_x27_4232_);
v___x_4237_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v_x_4182_, v_e_x27_4213_, v_proof_4214_, v_e_x27_4232_, v_proof_4233_, v_a_4186_, v_a_4187_, v_a_4188_, v_a_4189_, v_a_4190_, v_a_4191_);
if (lean_obj_tag(v___x_4237_) == 0)
{
lean_object* v_a_4238_; lean_object* v___x_4240_; uint8_t v_isShared_4241_; uint8_t v_isSharedCheck_4250_; 
v_a_4238_ = lean_ctor_get(v___x_4237_, 0);
v_isSharedCheck_4250_ = !lean_is_exclusive(v___x_4237_);
if (v_isSharedCheck_4250_ == 0)
{
v___x_4240_ = v___x_4237_;
v_isShared_4241_ = v_isSharedCheck_4250_;
goto v_resetjp_4239_;
}
else
{
lean_inc(v_a_4238_);
lean_dec(v___x_4237_);
v___x_4240_ = lean_box(0);
v_isShared_4241_ = v_isSharedCheck_4250_;
goto v_resetjp_4239_;
}
v_resetjp_4239_:
{
uint8_t v___y_4243_; 
if (v_contextDependent_4215_ == 0)
{
v___y_4243_ = v___x_4193_;
goto v___jp_4242_;
}
else
{
v___y_4243_ = v_contextDependent_4215_;
goto v___jp_4242_;
}
v___jp_4242_:
{
lean_object* v___x_4245_; 
if (v_isShared_4236_ == 0)
{
lean_ctor_set(v___x_4235_, 1, v_a_4238_);
v___x_4245_ = v___x_4235_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4249_; 
v_reuseFailAlloc_4249_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_4249_, 0, v_e_x27_4232_);
lean_ctor_set(v_reuseFailAlloc_4249_, 1, v_a_4238_);
v___x_4245_ = v_reuseFailAlloc_4249_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
lean_object* v___x_4247_; 
lean_ctor_set_uint8(v___x_4245_, sizeof(void*)*2, v___x_4193_);
lean_ctor_set_uint8(v___x_4245_, sizeof(void*)*2 + 1, v___y_4243_);
if (v_isShared_4241_ == 0)
{
lean_ctor_set(v___x_4240_, 0, v___x_4245_);
v___x_4247_ = v___x_4240_;
goto v_reusejp_4246_;
}
else
{
lean_object* v_reuseFailAlloc_4248_; 
v_reuseFailAlloc_4248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4248_, 0, v___x_4245_);
v___x_4247_ = v_reuseFailAlloc_4248_;
goto v_reusejp_4246_;
}
v_reusejp_4246_:
{
return v___x_4247_;
}
}
}
}
}
else
{
lean_object* v_a_4251_; lean_object* v___x_4253_; uint8_t v_isShared_4254_; uint8_t v_isSharedCheck_4258_; 
lean_del_object(v___x_4235_);
lean_dec_ref(v_e_x27_4232_);
v_a_4251_ = lean_ctor_get(v___x_4237_, 0);
v_isSharedCheck_4258_ = !lean_is_exclusive(v___x_4237_);
if (v_isSharedCheck_4258_ == 0)
{
v___x_4253_ = v___x_4237_;
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
else
{
lean_inc(v_a_4251_);
lean_dec(v___x_4237_);
v___x_4253_ = lean_box(0);
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
v_resetjp_4252_:
{
lean_object* v___x_4256_; 
if (v_isShared_4254_ == 0)
{
v___x_4256_ = v___x_4253_;
goto v_reusejp_4255_;
}
else
{
lean_object* v_reuseFailAlloc_4257_; 
v_reuseFailAlloc_4257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4257_, 0, v_a_4251_);
v___x_4256_ = v_reuseFailAlloc_4257_;
goto v_reusejp_4255_;
}
v_reusejp_4255_:
{
return v___x_4256_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_4217_);
lean_dec_ref(v_proof_4214_);
lean_dec_ref(v_e_x27_4213_);
lean_dec_ref(v_x_4182_);
return v___x_4219_;
}
}
}
else
{
lean_dec_ref_known(v_a_4196_, 2);
lean_dec_ref(v_x_4182_);
return v___x_4195_;
}
}
}
else
{
lean_dec_ref(v_x_4182_);
return v___x_4195_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___boxed(lean_object* v_x_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_, lean_object* v_a_4265_, lean_object* v_a_4266_, lean_object* v_a_4267_, lean_object* v_a_4268_, lean_object* v_a_4269_, lean_object* v_a_4270_, lean_object* v_a_4271_, lean_object* v_a_4272_){
_start:
{
lean_object* v_res_4273_; 
v_res_4273_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec(v_x_4262_, v_a_4263_, v_a_4264_, v_a_4265_, v_a_4266_, v_a_4267_, v_a_4268_, v_a_4269_, v_a_4270_, v_a_4271_);
lean_dec(v_a_4271_);
lean_dec_ref(v_a_4270_);
lean_dec(v_a_4269_);
lean_dec_ref(v_a_4268_);
lean_dec(v_a_4267_);
lean_dec_ref(v_a_4266_);
lean_dec(v_a_4265_);
lean_dec_ref(v_a_4264_);
lean_dec(v_a_4263_);
return v_res_4273_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_(void){
_start:
{
lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; 
v___x_4275_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_));
v___x_4276_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_);
v___x_4277_ = l_Lean_Name_str___override(v___x_4276_, v___x_4275_);
return v___x_4277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
v___x_4295_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_);
v___x_4296_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_));
v___x_4297_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___boxed), 11, 0);
v___x_4298_ = l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(v___x_4295_, v___x_4296_, v___x_4297_);
return v___x_4298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17____boxed(lean_object* v_a_4299_){
_start:
{
lean_object* v_res_4300_; 
v_res_4300_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_();
return v_res_4300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19_(){
_start:
{
lean_object* v___x_4302_; uint8_t v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; 
v___x_4302_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_);
v___x_4303_ = 0;
v___x_4304_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___boxed), 11, 0);
v___x_4305_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(v___x_4302_, v___x_4303_, v___x_4304_);
return v___x_4305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19____boxed(lean_object* v_a_4306_){
_start:
{
lean_object* v_res_4307_; 
v_res_4307_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19_();
return v_res_4307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations(lean_object* v_appFn_4309_, lean_object* v_e_4310_, lean_object* v_a_4311_, lean_object* v_a_4312_, lean_object* v_a_4313_, lean_object* v_a_4314_, lean_object* v_a_4315_, lean_object* v_a_4316_, lean_object* v_a_4317_, lean_object* v_a_4318_, lean_object* v_a_4319_){
_start:
{
lean_object* v___x_4321_; 
v___x_4321_ = l_Lean_Meta_Tactic_Cbv_getMatchTheorems(v_appFn_4309_, v_a_4316_, v_a_4317_, v_a_4318_, v_a_4319_);
if (lean_obj_tag(v___x_4321_) == 0)
{
lean_object* v_a_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; 
v_a_4322_ = lean_ctor_get(v___x_4321_, 0);
lean_inc(v_a_4322_);
lean_dec_ref_known(v___x_4321_, 1);
v___x_4323_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___closed__0));
v___x_4324_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_4322_, v___x_4323_, v_e_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, v_a_4318_, v_a_4319_);
lean_dec(v_a_4322_);
return v___x_4324_;
}
else
{
lean_object* v_a_4325_; lean_object* v___x_4327_; uint8_t v_isShared_4328_; uint8_t v_isSharedCheck_4332_; 
lean_dec_ref(v_e_4310_);
v_a_4325_ = lean_ctor_get(v___x_4321_, 0);
v_isSharedCheck_4332_ = !lean_is_exclusive(v___x_4321_);
if (v_isSharedCheck_4332_ == 0)
{
v___x_4327_ = v___x_4321_;
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
else
{
lean_inc(v_a_4325_);
lean_dec(v___x_4321_);
v___x_4327_ = lean_box(0);
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
v_resetjp_4326_:
{
lean_object* v___x_4330_; 
if (v_isShared_4328_ == 0)
{
v___x_4330_ = v___x_4327_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4331_; 
v_reuseFailAlloc_4331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4331_, 0, v_a_4325_);
v___x_4330_ = v_reuseFailAlloc_4331_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
return v___x_4330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___boxed(lean_object* v_appFn_4333_, lean_object* v_e_4334_, lean_object* v_a_4335_, lean_object* v_a_4336_, lean_object* v_a_4337_, lean_object* v_a_4338_, lean_object* v_a_4339_, lean_object* v_a_4340_, lean_object* v_a_4341_, lean_object* v_a_4342_, lean_object* v_a_4343_, lean_object* v_a_4344_){
_start:
{
lean_object* v_res_4345_; 
v_res_4345_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations(v_appFn_4333_, v_e_4334_, v_a_4335_, v_a_4336_, v_a_4337_, v_a_4338_, v_a_4339_, v_a_4340_, v_a_4341_, v_a_4342_, v_a_4343_);
lean_dec(v_a_4343_);
lean_dec_ref(v_a_4342_);
lean_dec(v_a_4341_);
lean_dec_ref(v_a_4340_);
lean_dec(v_a_4339_);
lean_dec_ref(v_a_4338_);
lean_dec(v_a_4337_);
lean_dec_ref(v_a_4336_);
lean_dec(v_a_4335_);
return v_res_4345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg(lean_object* v_declName_4346_, lean_object* v___y_4347_){
_start:
{
lean_object* v___x_4349_; lean_object* v_env_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; 
v___x_4349_ = lean_st_ref_get(v___y_4347_);
v_env_4350_ = lean_ctor_get(v___x_4349_, 0);
lean_inc_ref(v_env_4350_);
lean_dec(v___x_4349_);
v___x_4351_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_4350_, v_declName_4346_);
v___x_4352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4352_, 0, v___x_4351_);
return v___x_4352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg___boxed(lean_object* v_declName_4353_, lean_object* v___y_4354_, lean_object* v___y_4355_){
_start:
{
lean_object* v_res_4356_; 
v_res_4356_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg(v_declName_4353_, v___y_4354_);
lean_dec(v___y_4354_);
return v_res_4356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0(lean_object* v_declName_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_){
_start:
{
lean_object* v___x_4368_; 
v___x_4368_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg(v_declName_4357_, v___y_4366_);
return v___x_4368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___boxed(lean_object* v_declName_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_){
_start:
{
lean_object* v_res_4380_; 
v_res_4380_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0(v_declName_4369_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_, v___y_4378_);
lean_dec(v___y_4378_);
lean_dec_ref(v___y_4377_);
lean_dec(v___y_4376_);
lean_dec_ref(v___y_4375_);
lean_dec(v___y_4374_);
lean_dec_ref(v___y_4373_);
lean_dec(v___y_4372_);
lean_dec_ref(v___y_4371_);
lean_dec(v___y_4370_);
return v_res_4380_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2(void){
_start:
{
lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; 
v___x_4387_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1));
v___x_4388_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__4));
v___x_4389_ = l_Lean_Name_append(v___x_4388_, v___x_4387_);
return v___x_4389_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4(void){
_start:
{
lean_object* v___x_4391_; lean_object* v___x_4392_; 
v___x_4391_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__3));
v___x_4392_ = l_Lean_stringToMessageData(v___x_4391_);
return v___x_4392_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6(void){
_start:
{
lean_object* v___x_4394_; lean_object* v___x_4395_; 
v___x_4394_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__5));
v___x_4395_ = l_Lean_stringToMessageData(v___x_4394_);
return v___x_4395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher(lean_object* v_e_4396_, lean_object* v_a_4397_, lean_object* v_a_4398_, lean_object* v_a_4399_, lean_object* v_a_4400_, lean_object* v_a_4401_, lean_object* v_a_4402_, lean_object* v_a_4403_, lean_object* v_a_4404_, lean_object* v_a_4405_){
_start:
{
uint8_t v___x_4407_; 
v___x_4407_ = l_Lean_Expr_isApp(v_e_4396_);
if (v___x_4407_ == 0)
{
lean_object* v___x_4408_; lean_object* v___x_4409_; 
lean_dec_ref(v_e_4396_);
v___x_4408_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_4408_, 0, v___x_4407_);
lean_ctor_set_uint8(v___x_4408_, 1, v___x_4407_);
v___x_4409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4409_, 0, v___x_4408_);
return v___x_4409_;
}
else
{
lean_object* v___x_4410_; lean_object* v___x_4411_; 
v___x_4410_ = l_Lean_Expr_getAppFn(v_e_4396_);
v___x_4411_ = l_Lean_Expr_constName_x3f(v___x_4410_);
lean_dec_ref(v___x_4410_);
if (lean_obj_tag(v___x_4411_) == 1)
{
lean_object* v_val_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4560_; 
v_val_4412_ = lean_ctor_get(v___x_4411_, 0);
v_isSharedCheck_4560_ = !lean_is_exclusive(v___x_4411_);
if (v_isSharedCheck_4560_ == 0)
{
v___x_4414_ = v___x_4411_;
v_isShared_4415_ = v_isSharedCheck_4560_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_val_4412_);
lean_dec(v___x_4411_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4560_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
lean_object* v_a_4417_; lean_object* v_e_x27_4418_; lean_object* v___y_4461_; lean_object* v_a_4462_; lean_object* v___y_4465_; lean_object* v___y_4468_; lean_object* v___y_4469_; uint8_t v___y_4470_; lean_object* v___y_4474_; lean_object* v_a_4475_; lean_object* v___y_4483_; lean_object* v___x_4485_; lean_object* v_a_4486_; lean_object* v___x_4488_; uint8_t v_isShared_4489_; uint8_t v_isSharedCheck_4559_; 
lean_inc(v_val_4412_);
v___x_4485_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg(v_val_4412_, v_a_4405_);
v_a_4486_ = lean_ctor_get(v___x_4485_, 0);
v_isSharedCheck_4559_ = !lean_is_exclusive(v___x_4485_);
if (v_isSharedCheck_4559_ == 0)
{
v___x_4488_ = v___x_4485_;
v_isShared_4489_ = v_isSharedCheck_4559_;
goto v_resetjp_4487_;
}
else
{
lean_inc(v_a_4486_);
lean_dec(v___x_4485_);
v___x_4488_ = lean_box(0);
v_isShared_4489_ = v_isSharedCheck_4559_;
goto v_resetjp_4487_;
}
v___jp_4416_:
{
lean_object* v_toCold_4419_; lean_object* v_options_4420_; uint8_t v_hasTrace_4421_; 
v_toCold_4419_ = lean_ctor_get(v_a_4404_, 0);
v_options_4420_ = lean_ctor_get(v_toCold_4419_, 2);
v_hasTrace_4421_ = lean_ctor_get_uint8(v_options_4420_, sizeof(void*)*1);
if (v_hasTrace_4421_ == 0)
{
lean_object* v___x_4423_; 
lean_dec_ref(v_e_x27_4418_);
lean_dec(v_val_4412_);
lean_dec_ref(v_e_4396_);
if (v_isShared_4415_ == 0)
{
lean_ctor_set_tag(v___x_4414_, 0);
lean_ctor_set(v___x_4414_, 0, v_a_4417_);
v___x_4423_ = v___x_4414_;
goto v_reusejp_4422_;
}
else
{
lean_object* v_reuseFailAlloc_4424_; 
v_reuseFailAlloc_4424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4424_, 0, v_a_4417_);
v___x_4423_ = v_reuseFailAlloc_4424_;
goto v_reusejp_4422_;
}
v_reusejp_4422_:
{
return v___x_4423_;
}
}
else
{
lean_object* v_inheritedTraceOptions_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; uint8_t v___x_4428_; 
v_inheritedTraceOptions_4425_ = lean_ctor_get(v_toCold_4419_, 11);
v___x_4426_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1));
v___x_4427_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2, &l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2);
v___x_4428_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4425_, v_options_4420_, v___x_4427_);
if (v___x_4428_ == 0)
{
lean_object* v___x_4430_; 
lean_dec_ref(v_e_x27_4418_);
lean_dec(v_val_4412_);
lean_dec_ref(v_e_4396_);
if (v_isShared_4415_ == 0)
{
lean_ctor_set_tag(v___x_4414_, 0);
lean_ctor_set(v___x_4414_, 0, v_a_4417_);
v___x_4430_ = v___x_4414_;
goto v_reusejp_4429_;
}
else
{
lean_object* v_reuseFailAlloc_4431_; 
v_reuseFailAlloc_4431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4431_, 0, v_a_4417_);
v___x_4430_ = v_reuseFailAlloc_4431_;
goto v_reusejp_4429_;
}
v_reusejp_4429_:
{
return v___x_4430_;
}
}
else
{
lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; 
lean_del_object(v___x_4414_);
v___x_4432_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4, &l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4_once, _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4);
v___x_4433_ = l_Lean_MessageData_ofName(v_val_4412_);
v___x_4434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4434_, 0, v___x_4432_);
lean_ctor_set(v___x_4434_, 1, v___x_4433_);
v___x_4435_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6, &l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6_once, _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6);
v___x_4436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4436_, 0, v___x_4434_);
lean_ctor_set(v___x_4436_, 1, v___x_4435_);
v___x_4437_ = l_Lean_indentExpr(v_e_4396_);
v___x_4438_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4438_, 0, v___x_4436_);
lean_ctor_set(v___x_4438_, 1, v___x_4437_);
v___x_4439_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9, &l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9_once, _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9);
v___x_4440_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4440_, 0, v___x_4438_);
lean_ctor_set(v___x_4440_, 1, v___x_4439_);
v___x_4441_ = l_Lean_indentExpr(v_e_x27_4418_);
v___x_4442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4442_, 0, v___x_4440_);
lean_ctor_set(v___x_4442_, 1, v___x_4441_);
v___x_4443_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(v___x_4426_, v___x_4442_, v_a_4402_, v_a_4403_, v_a_4404_, v_a_4405_);
if (lean_obj_tag(v___x_4443_) == 0)
{
lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4450_; 
v_isSharedCheck_4450_ = !lean_is_exclusive(v___x_4443_);
if (v_isSharedCheck_4450_ == 0)
{
lean_object* v_unused_4451_; 
v_unused_4451_ = lean_ctor_get(v___x_4443_, 0);
lean_dec(v_unused_4451_);
v___x_4445_ = v___x_4443_;
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
else
{
lean_dec(v___x_4443_);
v___x_4445_ = lean_box(0);
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
v_resetjp_4444_:
{
lean_object* v___x_4448_; 
if (v_isShared_4446_ == 0)
{
lean_ctor_set(v___x_4445_, 0, v_a_4417_);
v___x_4448_ = v___x_4445_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4449_; 
v_reuseFailAlloc_4449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4449_, 0, v_a_4417_);
v___x_4448_ = v_reuseFailAlloc_4449_;
goto v_reusejp_4447_;
}
v_reusejp_4447_:
{
return v___x_4448_;
}
}
}
else
{
lean_object* v_a_4452_; lean_object* v___x_4454_; uint8_t v_isShared_4455_; uint8_t v_isSharedCheck_4459_; 
lean_dec_ref(v_a_4417_);
v_a_4452_ = lean_ctor_get(v___x_4443_, 0);
v_isSharedCheck_4459_ = !lean_is_exclusive(v___x_4443_);
if (v_isSharedCheck_4459_ == 0)
{
v___x_4454_ = v___x_4443_;
v_isShared_4455_ = v_isSharedCheck_4459_;
goto v_resetjp_4453_;
}
else
{
lean_inc(v_a_4452_);
lean_dec(v___x_4443_);
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
v___jp_4460_:
{
if (lean_obj_tag(v_a_4462_) == 1)
{
lean_object* v_e_x27_4463_; 
lean_dec_ref(v___y_4461_);
v_e_x27_4463_ = lean_ctor_get(v_a_4462_, 0);
lean_inc_ref(v_e_x27_4463_);
v_a_4417_ = v_a_4462_;
v_e_x27_4418_ = v_e_x27_4463_;
goto v___jp_4416_;
}
else
{
lean_dec_ref(v_a_4462_);
lean_del_object(v___x_4414_);
lean_dec(v_val_4412_);
lean_dec_ref(v_e_4396_);
return v___y_4461_;
}
}
v___jp_4464_:
{
if (lean_obj_tag(v___y_4465_) == 0)
{
lean_object* v_a_4466_; 
v_a_4466_ = lean_ctor_get(v___y_4465_, 0);
lean_inc(v_a_4466_);
v___y_4461_ = v___y_4465_;
v_a_4462_ = v_a_4466_;
goto v___jp_4460_;
}
else
{
lean_del_object(v___x_4414_);
lean_dec(v_val_4412_);
lean_dec_ref(v_e_4396_);
return v___y_4465_;
}
}
v___jp_4467_:
{
lean_object* v___x_4471_; lean_object* v___x_4472_; 
lean_dec_ref(v___y_4468_);
v___x_4471_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_4469_);
lean_inc_ref(v___x_4471_);
v___x_4472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4472_, 0, v___x_4471_);
v___y_4461_ = v___x_4472_;
v_a_4462_ = v___x_4471_;
goto v___jp_4460_;
}
v___jp_4473_:
{
if (lean_obj_tag(v_a_4475_) == 0)
{
uint8_t v_done_4476_; 
v_done_4476_ = lean_ctor_get_uint8(v_a_4475_, 0);
if (v_done_4476_ == 0)
{
uint8_t v_contextDependent_4477_; lean_object* v___x_4478_; 
lean_dec_ref(v___y_4474_);
v_contextDependent_4477_ = lean_ctor_get_uint8(v_a_4475_, 1);
lean_dec_ref_known(v_a_4475_, 0);
lean_inc_ref(v_e_4396_);
v___x_4478_ = l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(v_e_4396_, v_a_4397_, v_a_4398_, v_a_4399_, v_a_4400_, v_a_4401_, v_a_4402_, v_a_4403_, v_a_4404_, v_a_4405_);
if (lean_obj_tag(v___x_4478_) == 0)
{
if (v_contextDependent_4477_ == 0)
{
v___y_4465_ = v___x_4478_;
goto v___jp_4464_;
}
else
{
lean_object* v_a_4479_; uint8_t v___x_4480_; 
v_a_4479_ = lean_ctor_get(v___x_4478_, 0);
lean_inc(v_a_4479_);
v___x_4480_ = 0;
v___y_4468_ = v___x_4478_;
v___y_4469_ = v_a_4479_;
v___y_4470_ = v___x_4480_;
goto v___jp_4467_;
}
}
else
{
v___y_4465_ = v___x_4478_;
goto v___jp_4464_;
}
}
else
{
lean_dec_ref_known(v_a_4475_, 0);
lean_del_object(v___x_4414_);
lean_dec(v_val_4412_);
lean_dec_ref(v_e_4396_);
return v___y_4474_;
}
}
else
{
lean_object* v_e_x27_4481_; 
lean_dec_ref(v___y_4474_);
v_e_x27_4481_ = lean_ctor_get(v_a_4475_, 0);
lean_inc_ref(v_e_x27_4481_);
v_a_4417_ = v_a_4475_;
v_e_x27_4418_ = v_e_x27_4481_;
goto v___jp_4416_;
}
}
v___jp_4482_:
{
if (lean_obj_tag(v___y_4483_) == 0)
{
lean_object* v_a_4484_; 
v_a_4484_ = lean_ctor_get(v___y_4483_, 0);
lean_inc(v_a_4484_);
v___y_4474_ = v___y_4483_;
v_a_4475_ = v_a_4484_;
goto v___jp_4473_;
}
else
{
lean_del_object(v___x_4414_);
lean_dec(v_val_4412_);
lean_dec_ref(v_e_4396_);
return v___y_4483_;
}
}
v_resetjp_4487_:
{
if (lean_obj_tag(v_a_4486_) == 1)
{
lean_object* v_val_4490_; lean_object* v_numParams_4491_; lean_object* v_numDiscrs_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; 
lean_del_object(v___x_4488_);
v_val_4490_ = lean_ctor_get(v_a_4486_, 0);
lean_inc(v_val_4490_);
lean_dec_ref_known(v_a_4486_, 1);
v_numParams_4491_ = lean_ctor_get(v_val_4490_, 0);
lean_inc(v_numParams_4491_);
v_numDiscrs_4492_ = lean_ctor_get(v_val_4490_, 1);
lean_inc(v_numDiscrs_4492_);
lean_dec(v_val_4490_);
v___x_4493_ = lean_unsigned_to_nat(1u);
v___x_4494_ = lean_nat_add(v_numParams_4491_, v___x_4493_);
lean_dec(v_numParams_4491_);
v___x_4495_ = lean_nat_add(v___x_4494_, v_numDiscrs_4492_);
lean_dec(v_numDiscrs_4492_);
lean_inc_ref(v_e_4396_);
v___x_4496_ = l_Lean_Meta_Sym_Simp_simpAppArgRange(v_e_4396_, v___x_4494_, v___x_4495_, v_a_4397_, v_a_4398_, v_a_4399_, v_a_4400_, v_a_4401_, v_a_4402_, v_a_4403_, v_a_4404_, v_a_4405_);
lean_dec(v___x_4495_);
lean_dec(v___x_4494_);
if (lean_obj_tag(v___x_4496_) == 0)
{
lean_object* v_a_4497_; 
v_a_4497_ = lean_ctor_get(v___x_4496_, 0);
lean_inc(v_a_4497_);
if (lean_obj_tag(v_a_4497_) == 0)
{
uint8_t v_done_4498_; 
v_done_4498_ = lean_ctor_get_uint8(v_a_4497_, 0);
if (v_done_4498_ == 0)
{
uint8_t v_contextDependent_4499_; lean_object* v___x_4500_; 
lean_dec_ref_known(v___x_4496_, 1);
v_contextDependent_4499_ = lean_ctor_get_uint8(v_a_4497_, 1);
lean_dec_ref_known(v_a_4497_, 0);
lean_inc_ref(v_e_4396_);
lean_inc(v_val_4412_);
v___x_4500_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations(v_val_4412_, v_e_4396_, v_a_4397_, v_a_4398_, v_a_4399_, v_a_4400_, v_a_4401_, v_a_4402_, v_a_4403_, v_a_4404_, v_a_4405_);
if (lean_obj_tag(v___x_4500_) == 0)
{
lean_object* v_a_4501_; uint8_t v___y_4503_; 
v_a_4501_ = lean_ctor_get(v___x_4500_, 0);
lean_inc(v_a_4501_);
if (v_contextDependent_4499_ == 0)
{
lean_dec(v_a_4501_);
v___y_4483_ = v___x_4500_;
goto v___jp_4482_;
}
else
{
if (lean_obj_tag(v_a_4501_) == 0)
{
uint8_t v_contextDependent_4513_; 
v_contextDependent_4513_ = lean_ctor_get_uint8(v_a_4501_, 1);
v___y_4503_ = v_contextDependent_4513_;
goto v___jp_4502_;
}
else
{
uint8_t v_contextDependent_4514_; 
v_contextDependent_4514_ = lean_ctor_get_uint8(v_a_4501_, sizeof(void*)*2 + 1);
v___y_4503_ = v_contextDependent_4514_;
goto v___jp_4502_;
}
}
v___jp_4502_:
{
if (v___y_4503_ == 0)
{
lean_object* v___x_4505_; uint8_t v_isShared_4506_; uint8_t v_isSharedCheck_4511_; 
v_isSharedCheck_4511_ = !lean_is_exclusive(v___x_4500_);
if (v_isSharedCheck_4511_ == 0)
{
lean_object* v_unused_4512_; 
v_unused_4512_ = lean_ctor_get(v___x_4500_, 0);
lean_dec(v_unused_4512_);
v___x_4505_ = v___x_4500_;
v_isShared_4506_ = v_isSharedCheck_4511_;
goto v_resetjp_4504_;
}
else
{
lean_dec(v___x_4500_);
v___x_4505_ = lean_box(0);
v_isShared_4506_ = v_isSharedCheck_4511_;
goto v_resetjp_4504_;
}
v_resetjp_4504_:
{
lean_object* v___x_4507_; lean_object* v___x_4509_; 
v___x_4507_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_4501_);
lean_inc_ref(v___x_4507_);
if (v_isShared_4506_ == 0)
{
lean_ctor_set(v___x_4505_, 0, v___x_4507_);
v___x_4509_ = v___x_4505_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v___x_4507_);
v___x_4509_ = v_reuseFailAlloc_4510_;
goto v_reusejp_4508_;
}
v_reusejp_4508_:
{
v___y_4474_ = v___x_4509_;
v_a_4475_ = v___x_4507_;
goto v___jp_4473_;
}
}
}
else
{
lean_dec(v_a_4501_);
v___y_4483_ = v___x_4500_;
goto v___jp_4482_;
}
}
}
else
{
v___y_4483_ = v___x_4500_;
goto v___jp_4482_;
}
}
else
{
lean_dec_ref_known(v_a_4497_, 0);
v___y_4483_ = v___x_4496_;
goto v___jp_4482_;
}
}
else
{
uint8_t v_done_4515_; 
v_done_4515_ = lean_ctor_get_uint8(v_a_4497_, sizeof(void*)*2);
if (v_done_4515_ == 0)
{
lean_object* v_e_x27_4516_; lean_object* v_proof_4517_; uint8_t v_contextDependent_4518_; lean_object* v___x_4520_; uint8_t v_isShared_4521_; uint8_t v_isSharedCheck_4554_; 
lean_dec_ref_known(v___x_4496_, 1);
v_e_x27_4516_ = lean_ctor_get(v_a_4497_, 0);
v_proof_4517_ = lean_ctor_get(v_a_4497_, 1);
v_contextDependent_4518_ = lean_ctor_get_uint8(v_a_4497_, sizeof(void*)*2 + 1);
v_isSharedCheck_4554_ = !lean_is_exclusive(v_a_4497_);
if (v_isSharedCheck_4554_ == 0)
{
v___x_4520_ = v_a_4497_;
v_isShared_4521_ = v_isSharedCheck_4554_;
goto v_resetjp_4519_;
}
else
{
lean_inc(v_proof_4517_);
lean_inc(v_e_x27_4516_);
lean_dec(v_a_4497_);
v___x_4520_ = lean_box(0);
v_isShared_4521_ = v_isSharedCheck_4554_;
goto v_resetjp_4519_;
}
v_resetjp_4519_:
{
lean_object* v___x_4522_; 
lean_inc_ref(v_e_x27_4516_);
lean_inc(v_val_4412_);
v___x_4522_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations(v_val_4412_, v_e_x27_4516_, v_a_4397_, v_a_4398_, v_a_4399_, v_a_4400_, v_a_4401_, v_a_4402_, v_a_4403_, v_a_4404_, v_a_4405_);
if (lean_obj_tag(v___x_4522_) == 0)
{
lean_object* v_a_4523_; 
v_a_4523_ = lean_ctor_get(v___x_4522_, 0);
lean_inc(v_a_4523_);
lean_dec_ref_known(v___x_4522_, 1);
if (lean_obj_tag(v_a_4523_) == 0)
{
uint8_t v_done_4524_; uint8_t v_contextDependent_4525_; uint8_t v___y_4527_; 
v_done_4524_ = lean_ctor_get_uint8(v_a_4523_, 0);
v_contextDependent_4525_ = lean_ctor_get_uint8(v_a_4523_, 1);
lean_dec_ref_known(v_a_4523_, 0);
if (v_contextDependent_4518_ == 0)
{
v___y_4527_ = v_contextDependent_4525_;
goto v___jp_4526_;
}
else
{
v___y_4527_ = v_contextDependent_4518_;
goto v___jp_4526_;
}
v___jp_4526_:
{
lean_object* v___x_4529_; 
lean_inc_ref(v_e_x27_4516_);
if (v_isShared_4521_ == 0)
{
v___x_4529_ = v___x_4520_;
goto v_reusejp_4528_;
}
else
{
lean_object* v_reuseFailAlloc_4530_; 
v_reuseFailAlloc_4530_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_4530_, 0, v_e_x27_4516_);
lean_ctor_set(v_reuseFailAlloc_4530_, 1, v_proof_4517_);
v___x_4529_ = v_reuseFailAlloc_4530_;
goto v_reusejp_4528_;
}
v_reusejp_4528_:
{
lean_ctor_set_uint8(v___x_4529_, sizeof(void*)*2, v_done_4524_);
lean_ctor_set_uint8(v___x_4529_, sizeof(void*)*2 + 1, v___y_4527_);
v_a_4417_ = v___x_4529_;
v_e_x27_4418_ = v_e_x27_4516_;
goto v___jp_4416_;
}
}
}
else
{
lean_object* v_e_x27_4531_; lean_object* v_proof_4532_; uint8_t v_done_4533_; uint8_t v_contextDependent_4534_; lean_object* v___x_4536_; uint8_t v_isShared_4537_; uint8_t v_isSharedCheck_4553_; 
lean_del_object(v___x_4520_);
v_e_x27_4531_ = lean_ctor_get(v_a_4523_, 0);
v_proof_4532_ = lean_ctor_get(v_a_4523_, 1);
v_done_4533_ = lean_ctor_get_uint8(v_a_4523_, sizeof(void*)*2);
v_contextDependent_4534_ = lean_ctor_get_uint8(v_a_4523_, sizeof(void*)*2 + 1);
v_isSharedCheck_4553_ = !lean_is_exclusive(v_a_4523_);
if (v_isSharedCheck_4553_ == 0)
{
v___x_4536_ = v_a_4523_;
v_isShared_4537_ = v_isSharedCheck_4553_;
goto v_resetjp_4535_;
}
else
{
lean_inc(v_proof_4532_);
lean_inc(v_e_x27_4531_);
lean_dec(v_a_4523_);
v___x_4536_ = lean_box(0);
v_isShared_4537_ = v_isSharedCheck_4553_;
goto v_resetjp_4535_;
}
v_resetjp_4535_:
{
lean_object* v___x_4538_; 
lean_inc_ref(v_e_x27_4531_);
lean_inc_ref(v_e_4396_);
v___x_4538_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v_e_4396_, v_e_x27_4516_, v_proof_4517_, v_e_x27_4531_, v_proof_4532_, v_a_4400_, v_a_4401_, v_a_4402_, v_a_4403_, v_a_4404_, v_a_4405_);
if (lean_obj_tag(v___x_4538_) == 0)
{
lean_object* v_a_4539_; uint8_t v___y_4541_; 
v_a_4539_ = lean_ctor_get(v___x_4538_, 0);
lean_inc(v_a_4539_);
lean_dec_ref_known(v___x_4538_, 1);
if (v_contextDependent_4518_ == 0)
{
v___y_4541_ = v_contextDependent_4534_;
goto v___jp_4540_;
}
else
{
v___y_4541_ = v_contextDependent_4518_;
goto v___jp_4540_;
}
v___jp_4540_:
{
lean_object* v___x_4543_; 
lean_inc_ref(v_e_x27_4531_);
if (v_isShared_4537_ == 0)
{
lean_ctor_set(v___x_4536_, 1, v_a_4539_);
v___x_4543_ = v___x_4536_;
goto v_reusejp_4542_;
}
else
{
lean_object* v_reuseFailAlloc_4544_; 
v_reuseFailAlloc_4544_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_4544_, 0, v_e_x27_4531_);
lean_ctor_set(v_reuseFailAlloc_4544_, 1, v_a_4539_);
lean_ctor_set_uint8(v_reuseFailAlloc_4544_, sizeof(void*)*2, v_done_4533_);
v___x_4543_ = v_reuseFailAlloc_4544_;
goto v_reusejp_4542_;
}
v_reusejp_4542_:
{
lean_ctor_set_uint8(v___x_4543_, sizeof(void*)*2 + 1, v___y_4541_);
v_a_4417_ = v___x_4543_;
v_e_x27_4418_ = v_e_x27_4531_;
goto v___jp_4416_;
}
}
}
else
{
lean_object* v_a_4545_; lean_object* v___x_4547_; uint8_t v_isShared_4548_; uint8_t v_isSharedCheck_4552_; 
lean_del_object(v___x_4536_);
lean_dec_ref(v_e_x27_4531_);
lean_del_object(v___x_4414_);
lean_dec(v_val_4412_);
lean_dec_ref(v_e_4396_);
v_a_4545_ = lean_ctor_get(v___x_4538_, 0);
v_isSharedCheck_4552_ = !lean_is_exclusive(v___x_4538_);
if (v_isSharedCheck_4552_ == 0)
{
v___x_4547_ = v___x_4538_;
v_isShared_4548_ = v_isSharedCheck_4552_;
goto v_resetjp_4546_;
}
else
{
lean_inc(v_a_4545_);
lean_dec(v___x_4538_);
v___x_4547_ = lean_box(0);
v_isShared_4548_ = v_isSharedCheck_4552_;
goto v_resetjp_4546_;
}
v_resetjp_4546_:
{
lean_object* v___x_4550_; 
if (v_isShared_4548_ == 0)
{
v___x_4550_ = v___x_4547_;
goto v_reusejp_4549_;
}
else
{
lean_object* v_reuseFailAlloc_4551_; 
v_reuseFailAlloc_4551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4551_, 0, v_a_4545_);
v___x_4550_ = v_reuseFailAlloc_4551_;
goto v_reusejp_4549_;
}
v_reusejp_4549_:
{
return v___x_4550_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_4520_);
lean_dec_ref(v_proof_4517_);
lean_dec_ref(v_e_x27_4516_);
v___y_4483_ = v___x_4522_;
goto v___jp_4482_;
}
}
}
else
{
lean_dec_ref_known(v_a_4497_, 2);
v___y_4483_ = v___x_4496_;
goto v___jp_4482_;
}
}
}
else
{
v___y_4483_ = v___x_4496_;
goto v___jp_4482_;
}
}
else
{
lean_object* v___x_4555_; lean_object* v___x_4557_; 
lean_dec(v_a_4486_);
lean_del_object(v___x_4414_);
lean_dec(v_val_4412_);
lean_dec_ref(v_e_4396_);
v___x_4555_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0));
if (v_isShared_4489_ == 0)
{
lean_ctor_set(v___x_4488_, 0, v___x_4555_);
v___x_4557_ = v___x_4488_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v___x_4555_);
v___x_4557_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
return v___x_4557_;
}
}
}
}
}
else
{
lean_object* v___x_4561_; lean_object* v___x_4562_; 
lean_dec(v___x_4411_);
lean_dec_ref(v_e_4396_);
v___x_4561_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0));
v___x_4562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4562_, 0, v___x_4561_);
return v___x_4562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___boxed(lean_object* v_e_4563_, lean_object* v_a_4564_, lean_object* v_a_4565_, lean_object* v_a_4566_, lean_object* v_a_4567_, lean_object* v_a_4568_, lean_object* v_a_4569_, lean_object* v_a_4570_, lean_object* v_a_4571_, lean_object* v_a_4572_, lean_object* v_a_4573_){
_start:
{
lean_object* v_res_4574_; 
v_res_4574_ = l_Lean_Meta_Tactic_Cbv_tryMatcher(v_e_4563_, v_a_4564_, v_a_4565_, v_a_4566_, v_a_4567_, v_a_4568_, v_a_4569_, v_a_4570_, v_a_4571_, v_a_4572_);
lean_dec(v_a_4572_);
lean_dec_ref(v_a_4571_);
lean_dec(v_a_4570_);
lean_dec_ref(v_a_4569_);
lean_dec(v_a_4568_);
lean_dec_ref(v_a_4567_);
lean_dec(v_a_4566_);
lean_dec_ref(v_a_4565_);
lean_dec(v_a_4564_);
return v_res_4574_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_Sym_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_TheoremsLookup(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_Opaque(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_CbvEvalExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* runtime_initialize_Init_CbvSimproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Sym_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_TheoremsLookup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_Opaque(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_CbvEvalExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_CbvSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__26_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2649134028____hygCtx___hyg_19_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__43_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3443402405____hygCtx___hyg_19_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__60_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4092751164____hygCtx___hyg_16_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__68_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_16_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1028153571____hygCtx___hyg_18_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__76_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Cbv_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_Sym_Lemmas(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cbv_TheoremsLookup(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cbv_Opaque(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cbv_CbvEvalExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* initialize_Init_CbvSimproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Cbv_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Sym_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cbv_TheoremsLookup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cbv_Opaque(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cbv_CbvEvalExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_CbvSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Cbv_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Cbv_ControlFlow(builtin);
}
#ifdef __cplusplus
}
#endif

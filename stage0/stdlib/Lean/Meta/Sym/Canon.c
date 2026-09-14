// Lean compiler output
// Module: Lean.Meta.Sym.Canon
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.ExprPtr import Lean.Meta.SynthInstance import Lean.Meta.Sym.SynthInstance import Lean.Meta.Sym.Arith.EvalNum import Lean.Meta.IntInstTesters import Lean.Meta.NatInstTesters import Lean.Meta.LitValues import Lean.Meta.AppBuilder import Lean.Meta.Sym.Eta import Lean.Meta.WHNF import Init.Grind.Util
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
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
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_etaReduce(lean_object*);
uint8_t l_Lean_Meta_isMatcherCore(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isDefEqI___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeFormer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstOfNatInt___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
lean_object* l_Lean_Meta_Structural_isInstOfNatNat___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkType;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBitVecValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_mkNumeral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLitValueModulus_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_evalNat_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_SymM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_isOffset_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatAdd(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
uint8_t l_Lean_Expr_isBoolTrue(lean_object*);
uint8_t l_Lean_Expr_isBoolFalse(lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_projExpr_x21(lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Expr_eqv___boxed(lean_object*, lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sym"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "canon"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(230, 3, 132, 38, 134, 149, 222, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(249, 1, 190, 45, 30, 82, 81, 176)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 97, 144, 214, 78, 119, 236, 177)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Canon"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__33_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__33_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(101, 105, 192, 171, 214, 131, 43, 105)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(127, 21, 77, 8, 216, 186, 116, 67)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ofNatLT"};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 44, 243, 4, 118, 78, 150, 28)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_eqv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "canonType"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "canonInst"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "canonImplicit"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "visit"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_mkOffset(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "failed to canonicalize instance"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "\nsynthesized instance is not definitionally equal"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "\nfailed to synthesize"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29_spec__34___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj_spec__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "nestedProof"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__1_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(182, 140, 29, 19, 223, 104, 218, 25)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "nestedDecidable"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(65, 76, 105, 85, 179, 183, 200, 153)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]: "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proj expected"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateProj!Impl"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29_spec__34(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_canon___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "sym canon"};
static const lean_object* l_Lean_Meta_Sym_canon___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_canon___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_box(0);
v___x_9_ = l_unsafeCast___redArg(v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_12_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_13_ = l_Lean_Name_str___override(v___x_12_, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_16_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_17_ = l_Lean_Name_str___override(v___x_16_, v___x_15_);
return v___x_17_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_19_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_20_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_21_ = l_Lean_Name_str___override(v___x_20_, v___x_19_);
return v___x_21_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_23_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_24_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_25_ = l_Lean_Name_str___override(v___x_24_, v___x_23_);
return v___x_25_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_28_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_29_ = l_Lean_Name_str___override(v___x_28_, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_unsigned_to_nat(0u);
v___x_31_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_32_ = l_Lean_Name_num___override(v___x_31_, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_34_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_35_ = l_Lean_Name_str___override(v___x_34_, v___x_33_);
return v___x_35_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_37_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_38_ = l_Lean_Name_str___override(v___x_37_, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_40_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_41_ = l_Lean_Name_str___override(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_43_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_44_ = l_Lean_Name_str___override(v___x_43_, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_47_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_48_ = l_Lean_Name_str___override(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_51_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_52_ = l_Lean_Name_str___override(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_54_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_55_ = l_Lean_Name_str___override(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_57_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_58_ = l_Lean_Name_str___override(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_60_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_61_ = l_Lean_Name_str___override(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_63_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_64_ = l_Lean_Name_str___override(v___x_63_, v___x_62_);
return v___x_64_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = lean_unsigned_to_nat(1925315962u);
v___x_66_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_67_ = l_Lean_Name_num___override(v___x_66_, v___x_65_);
return v___x_67_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_70_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_71_ = l_Lean_Name_str___override(v___x_70_, v___x_69_);
return v___x_71_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_74_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_75_ = l_Lean_Name_str___override(v___x_74_, v___x_73_);
return v___x_75_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__33_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = lean_unsigned_to_nat(2u);
v___x_77_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_78_ = l_Lean_Name_num___override(v___x_77_, v___x_76_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_80_; uint8_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_80_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_81_ = 0;
v___x_82_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__33_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__33_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__33_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_83_ = l_Lean_registerTraceClass(v___x_80_, v___x_81_, v___x_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2____boxed(lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_();
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f(lean_object* v_args_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v___y_107_; uint8_t v___y_108_; lean_object* v___y_112_; uint8_t v___y_113_; lean_object* v___y_114_; lean_object* v___y_115_; lean_object* v_args_142_; uint8_t v_modified_143_; lean_object* v___y_144_; lean_object* v___x_172_; lean_object* v___x_173_; uint8_t v_modified_174_; 
v___x_172_ = lean_array_get_size(v_args_97_);
v___x_173_ = lean_unsigned_to_nat(3u);
v_modified_174_ = lean_nat_dec_eq(v___x_172_, v___x_173_);
if (v_modified_174_ == 0)
{
lean_dec_ref(v_args_97_);
goto v___jp_103_;
}
else
{
uint8_t v_modified_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; uint8_t v___x_179_; 
v_modified_175_ = 0;
v___x_176_ = lean_unsigned_to_nat(1u);
v___x_177_ = lean_array_fget_borrowed(v_args_97_, v___x_176_);
v___x_178_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__6));
v___x_179_ = l_Lean_Expr_isAppOf(v___x_177_, v___x_178_);
if (v___x_179_ == 0)
{
v_args_142_ = v_args_97_;
v_modified_143_ = v_modified_175_;
v___y_144_ = v_a_99_;
goto v___jp_141_;
}
else
{
lean_object* v___x_180_; 
v___x_180_ = l_Lean_Meta_getNatValue_x3f(v___x_177_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_a_181_);
lean_dec_ref_known(v___x_180_, 1);
if (lean_obj_tag(v_a_181_) == 1)
{
lean_object* v_val_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v_val_182_ = lean_ctor_get(v_a_181_, 0);
lean_inc(v_val_182_);
lean_dec_ref_known(v_a_181_, 1);
v___x_183_ = l_Lean_mkRawNatLit(v_val_182_);
v___x_184_ = lean_array_fset(v_args_97_, v___x_176_, v___x_183_);
v_args_142_ = v___x_184_;
v_modified_143_ = v_modified_174_;
v___y_144_ = v_a_99_;
goto v___jp_141_;
}
else
{
lean_dec(v_a_181_);
v_args_142_ = v_args_97_;
v_modified_143_ = v_modified_175_;
v___y_144_ = v_a_99_;
goto v___jp_141_;
}
}
else
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_192_; 
lean_dec_ref(v_args_97_);
v_a_185_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_192_ == 0)
{
v___x_187_ = v___x_180_;
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v___x_180_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_190_; 
if (v_isShared_188_ == 0)
{
v___x_190_ = v___x_187_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_a_185_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
}
}
v___jp_103_:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_box(0);
v___x_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
return v___x_105_;
}
v___jp_106_:
{
if (v___y_108_ == 0)
{
lean_dec_ref(v___y_107_);
goto v___jp_103_;
}
else
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_109_, 0, v___y_107_);
v___x_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
return v___x_110_;
}
}
v___jp_111_:
{
lean_object* v___x_116_; 
v___x_116_ = l_Lean_Meta_Structural_isInstOfNatInt___redArg(v___y_114_, v___y_115_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_132_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_132_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_132_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_132_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
uint8_t v___x_121_; 
v___x_121_ = lean_unbox(v_a_117_);
lean_dec(v_a_117_);
if (v___x_121_ == 0)
{
lean_del_object(v___x_119_);
v___y_107_ = v___y_112_;
v___y_108_ = v___y_113_;
goto v___jp_106_;
}
else
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_122_ = lean_unsigned_to_nat(0u);
v___x_123_ = lean_array_fget_borrowed(v___y_112_, v___x_122_);
v___x_124_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__1));
v___x_125_ = l_Lean_Expr_isConstOf(v___x_123_, v___x_124_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_130_; 
v___x_126_ = l_Lean_Int_mkType;
v___x_127_ = lean_array_fset(v___y_112_, v___x_122_, v___x_126_);
v___x_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v___x_128_);
v___x_130_ = v___x_119_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_128_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
else
{
lean_del_object(v___x_119_);
v___y_107_ = v___y_112_;
v___y_108_ = v___y_113_;
goto v___jp_106_;
}
}
}
}
else
{
lean_object* v_a_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_140_; 
lean_dec_ref(v___y_112_);
v_a_133_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_140_ == 0)
{
v___x_135_ = v___x_116_;
v_isShared_136_ = v_isSharedCheck_140_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_a_133_);
lean_dec(v___x_116_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_140_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_138_; 
if (v_isShared_136_ == 0)
{
v___x_138_ = v___x_135_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_a_133_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
return v___x_138_;
}
}
}
}
v___jp_141_:
{
lean_object* v___x_145_; lean_object* v_inst_146_; lean_object* v___x_147_; 
v___x_145_ = lean_unsigned_to_nat(2u);
v_inst_146_ = lean_array_fget_borrowed(v_args_142_, v___x_145_);
lean_inc(v_inst_146_);
v___x_147_ = l_Lean_Meta_Structural_isInstOfNatNat___redArg(v_inst_146_, v___y_144_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_163_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_163_ == 0)
{
v___x_150_ = v___x_147_;
v_isShared_151_ = v_isSharedCheck_163_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_147_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_163_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
uint8_t v___x_152_; 
v___x_152_ = lean_unbox(v_a_148_);
lean_dec(v_a_148_);
if (v___x_152_ == 0)
{
lean_inc(v_inst_146_);
lean_del_object(v___x_150_);
v___y_112_ = v_args_142_;
v___y_113_ = v_modified_143_;
v___y_114_ = v_inst_146_;
v___y_115_ = v___y_144_;
goto v___jp_111_;
}
else
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_153_ = lean_unsigned_to_nat(0u);
v___x_154_ = lean_array_fget_borrowed(v_args_142_, v___x_153_);
v___x_155_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__3));
v___x_156_ = l_Lean_Expr_isConstOf(v___x_154_, v___x_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_161_; 
v___x_157_ = l_Lean_Nat_mkType;
v___x_158_ = lean_array_fset(v_args_142_, v___x_153_, v___x_157_);
v___x_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_159_, 0, v___x_158_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 0, v___x_159_);
v___x_161_ = v___x_150_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_159_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
else
{
lean_inc(v_inst_146_);
lean_del_object(v___x_150_);
v___y_112_ = v_args_142_;
v___y_113_ = v_modified_143_;
v___y_114_ = v_inst_146_;
v___y_115_ = v___y_144_;
goto v___jp_111_;
}
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec_ref(v_args_142_);
v_a_164_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_147_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_147_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___boxed(lean_object* v_args_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f(v_args_193_, v_a_194_, v_a_195_, v_a_196_, v_a_197_);
lean_dec(v_a_197_);
lean_dec_ref(v_a_196_);
lean_dec(v_a_195_);
lean_dec_ref(v_a_194_);
return v_res_199_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_203_ = lean_box(0);
v___x_204_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1));
v___x_205_ = l_Lean_mkConst(v___x_204_, v___x_203_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(lean_object* v_e_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lean_Meta_getBitVecValue_x3f(v_e_206_, v_a_207_, v_a_208_, v_a_209_, v_a_210_);
if (lean_obj_tag(v___x_212_) == 0)
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_251_; 
v_a_213_ = lean_ctor_get(v___x_212_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_251_ == 0)
{
v___x_215_ = v___x_212_;
v_isShared_216_ = v_isSharedCheck_251_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_212_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_251_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
if (lean_obj_tag(v_a_213_) == 1)
{
lean_object* v_val_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_246_; 
lean_del_object(v___x_215_);
v_val_217_ = lean_ctor_get(v_a_213_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v_a_213_);
if (v_isSharedCheck_246_ == 0)
{
v___x_219_ = v_a_213_;
v_isShared_220_ = v_isSharedCheck_246_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_val_217_);
lean_dec(v_a_213_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_246_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v_fst_221_; lean_object* v_snd_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v_fst_221_ = lean_ctor_get(v_val_217_, 0);
lean_inc(v_fst_221_);
v_snd_222_ = lean_ctor_get(v_val_217_, 1);
lean_inc(v_snd_222_);
lean_dec(v_val_217_);
v___x_223_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2);
v___x_224_ = l_Lean_mkNatLit(v_fst_221_);
v___x_225_ = l_Lean_Expr_app___override(v___x_223_, v___x_224_);
v___x_226_ = l_Lean_Meta_mkNumeral(v___x_225_, v_snd_222_, v_a_207_, v_a_208_, v_a_209_, v_a_210_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_237_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_237_ == 0)
{
v___x_229_ = v___x_226_;
v_isShared_230_ = v_isSharedCheck_237_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_226_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_237_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 0, v_a_227_);
v___x_232_ = v___x_219_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_227_);
v___x_232_ = v_reuseFailAlloc_236_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
lean_object* v___x_234_; 
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 0, v___x_232_);
v___x_234_ = v___x_229_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
else
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_245_; 
lean_del_object(v___x_219_);
v_a_238_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_245_ == 0)
{
v___x_240_ = v___x_226_;
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_226_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_a_238_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
else
{
lean_object* v___x_247_; lean_object* v___x_249_; 
lean_dec(v_a_213_);
v___x_247_ = lean_box(0);
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 0, v___x_247_);
v___x_249_ = v___x_215_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
}
else
{
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_259_; 
v_a_252_ = lean_ctor_get(v___x_212_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_259_ == 0)
{
v___x_254_ = v___x_212_;
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_212_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_a_252_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___boxed(lean_object* v_e_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(v_e_260_, v_a_261_, v_a_262_, v_a_263_, v_a_264_);
lean_dec(v_a_264_);
lean_dec_ref(v_a_263_);
lean_dec(v_a_262_);
lean_dec_ref(v_a_261_);
return v_res_266_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_280_ = lean_box(0);
v___x_281_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5));
v___x_282_ = l_Lean_mkConst(v___x_281_, v___x_280_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f(lean_object* v_e_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_){
_start:
{
lean_object* v___x_292_; 
lean_inc_ref(v_e_283_);
v___x_292_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_283_, v_a_285_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v___x_294_ = l_Lean_Expr_cleanupAnnotations(v_a_293_);
v___x_295_ = l_Lean_Expr_isApp(v___x_294_);
if (v___x_295_ == 0)
{
lean_dec_ref(v___x_294_);
lean_dec_ref(v_e_283_);
goto v___jp_289_;
}
else
{
lean_object* v_arg_296_; lean_object* v___x_297_; uint8_t v___x_298_; 
v_arg_296_ = lean_ctor_get(v___x_294_, 1);
lean_inc_ref(v_arg_296_);
v___x_297_ = l_Lean_Expr_appFnCleanup___redArg(v___x_294_);
v___x_298_ = l_Lean_Expr_isApp(v___x_297_);
if (v___x_298_ == 0)
{
lean_dec_ref(v___x_297_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v_e_283_);
goto v___jp_289_;
}
else
{
lean_object* v_arg_299_; lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v_arg_299_ = lean_ctor_get(v___x_297_, 1);
lean_inc_ref(v_arg_299_);
v___x_300_ = l_Lean_Expr_appFnCleanup___redArg(v___x_297_);
v___x_301_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0));
v___x_302_ = l_Lean_Expr_isConstOf(v___x_300_, v___x_301_);
if (v___x_302_ == 0)
{
uint8_t v___x_303_; 
v___x_303_ = l_Lean_Expr_isApp(v___x_300_);
if (v___x_303_ == 0)
{
lean_dec_ref(v___x_300_);
lean_dec_ref(v_arg_299_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v_e_283_);
goto v___jp_289_;
}
else
{
lean_object* v_arg_304_; lean_object* v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; 
v_arg_304_ = lean_ctor_get(v___x_300_, 1);
lean_inc_ref(v_arg_304_);
v___x_305_ = l_Lean_Expr_appFnCleanup___redArg(v___x_300_);
v___x_306_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__6));
v___x_307_ = l_Lean_Expr_isConstOf(v___x_305_, v___x_306_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; uint8_t v___x_309_; 
lean_dec_ref(v_arg_299_);
v___x_308_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2));
v___x_309_ = l_Lean_Expr_isConstOf(v___x_305_, v___x_308_);
if (v___x_309_ == 0)
{
lean_object* v___x_310_; uint8_t v___x_311_; 
lean_dec_ref(v_arg_304_);
lean_dec_ref(v_arg_296_);
v___x_310_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4));
v___x_311_ = l_Lean_Expr_isConstOf(v___x_305_, v___x_310_);
lean_dec_ref(v___x_305_);
if (v___x_311_ == 0)
{
lean_dec_ref(v_e_283_);
goto v___jp_289_;
}
else
{
lean_object* v___x_312_; 
v___x_312_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(v_e_283_, v_a_284_, v_a_285_, v_a_286_, v_a_287_);
return v___x_312_;
}
}
else
{
lean_object* v___x_313_; 
lean_dec_ref(v___x_305_);
lean_dec_ref(v_e_283_);
v___x_313_ = l_Lean_Meta_getNatValue_x3f(v_arg_304_, v_a_284_, v_a_285_, v_a_286_, v_a_287_);
lean_dec_ref(v_arg_304_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_376_; 
v_a_314_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_376_ == 0)
{
v___x_316_ = v___x_313_;
v_isShared_317_ = v_isSharedCheck_376_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_313_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_376_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
if (lean_obj_tag(v_a_314_) == 1)
{
lean_object* v_val_318_; lean_object* v___x_319_; 
lean_del_object(v___x_316_);
v_val_318_ = lean_ctor_get(v_a_314_, 0);
lean_inc(v_val_318_);
lean_dec_ref_known(v_a_314_, 1);
v___x_319_ = l_Lean_Meta_getNatValue_x3f(v_arg_296_, v_a_284_, v_a_285_, v_a_286_, v_a_287_);
lean_dec_ref(v_arg_296_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_363_; 
v_a_320_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_363_ == 0)
{
v___x_322_ = v___x_319_;
v_isShared_323_ = v_isSharedCheck_363_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_319_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_363_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
if (lean_obj_tag(v_a_320_) == 1)
{
lean_object* v_val_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_358_; 
v_val_324_ = lean_ctor_get(v_a_320_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v_a_320_);
if (v_isSharedCheck_358_ == 0)
{
v___x_326_ = v_a_320_;
v_isShared_327_ = v_isSharedCheck_358_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_val_324_);
lean_dec(v_a_320_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_358_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_328_ = lean_unsigned_to_nat(0u);
v___x_329_ = lean_nat_dec_eq(v_val_318_, v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
lean_del_object(v___x_322_);
v___x_330_ = lean_obj_once(&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6, &l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6_once, _init_l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6);
lean_inc(v_val_318_);
v___x_331_ = l_Lean_mkNatLit(v_val_318_);
v___x_332_ = l_Lean_Expr_app___override(v___x_330_, v___x_331_);
v___x_333_ = lean_nat_mod(v_val_324_, v_val_318_);
lean_dec(v_val_318_);
lean_dec(v_val_324_);
v___x_334_ = l_Lean_Meta_mkNumeral(v___x_332_, v___x_333_, v_a_284_, v_a_285_, v_a_286_, v_a_287_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_345_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_345_ == 0)
{
v___x_337_ = v___x_334_;
v_isShared_338_ = v_isSharedCheck_345_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_334_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_345_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 0, v_a_335_);
v___x_340_ = v___x_326_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_335_);
v___x_340_ = v_reuseFailAlloc_344_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_342_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v___x_340_);
v___x_342_ = v___x_337_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_340_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_del_object(v___x_326_);
v_a_346_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_334_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_334_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_object* v___x_354_; lean_object* v___x_356_; 
lean_del_object(v___x_326_);
lean_dec(v_val_324_);
lean_dec(v_val_318_);
v___x_354_ = lean_box(0);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v___x_354_);
v___x_356_ = v___x_322_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_354_);
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
else
{
lean_object* v___x_359_; lean_object* v___x_361_; 
lean_dec(v_a_320_);
lean_dec(v_val_318_);
v___x_359_ = lean_box(0);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v___x_359_);
v___x_361_ = v___x_322_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_359_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec(v_val_318_);
v_a_364_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_319_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_319_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
else
{
lean_object* v___x_372_; lean_object* v___x_374_; 
lean_dec(v_a_314_);
lean_dec_ref(v_arg_296_);
v___x_372_ = lean_box(0);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 0, v___x_372_);
v___x_374_ = v___x_316_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_dec_ref(v_arg_296_);
v_a_377_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_313_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_313_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
else
{
lean_object* v___x_385_; 
lean_dec_ref(v___x_305_);
lean_dec_ref(v_arg_296_);
lean_dec_ref(v_e_283_);
lean_inc_ref(v_arg_304_);
v___x_385_ = l_Lean_Meta_getLitValueModulus_x3f(v_arg_304_, v_a_284_, v_a_285_, v_a_286_, v_a_287_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_447_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_447_ == 0)
{
v___x_388_ = v___x_385_;
v_isShared_389_ = v_isSharedCheck_447_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_385_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_447_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
if (lean_obj_tag(v_a_386_) == 1)
{
lean_object* v_val_390_; lean_object* v___x_391_; 
v_val_390_ = lean_ctor_get(v_a_386_, 0);
lean_inc(v_val_390_);
lean_dec_ref_known(v_a_386_, 1);
v___x_391_ = l_Lean_Meta_getNatValue_x3f(v_arg_299_, v_a_284_, v_a_285_, v_a_286_, v_a_287_);
lean_dec_ref(v_arg_299_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_434_; 
v_a_392_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_434_ == 0)
{
v___x_394_ = v___x_391_;
v_isShared_395_ = v_isSharedCheck_434_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_391_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_434_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
if (lean_obj_tag(v_a_392_) == 1)
{
lean_object* v_val_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_429_; 
lean_del_object(v___x_388_);
v_val_401_ = lean_ctor_get(v_a_392_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v_a_392_);
if (v_isSharedCheck_429_ == 0)
{
v___x_403_ = v_a_392_;
v_isShared_404_ = v_isSharedCheck_429_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_val_401_);
lean_dec(v_a_392_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_429_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_nat_dec_eq(v_val_390_, v___x_405_);
if (v___x_406_ == 0)
{
uint8_t v___x_407_; 
v___x_407_ = lean_nat_dec_lt(v_val_401_, v_val_390_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; lean_object* v___x_409_; 
lean_del_object(v___x_394_);
v___x_408_ = lean_nat_mod(v_val_401_, v_val_390_);
lean_dec(v_val_390_);
lean_dec(v_val_401_);
v___x_409_ = l_Lean_Meta_mkNumeral(v_arg_304_, v___x_408_, v_a_284_, v_a_285_, v_a_286_, v_a_287_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_420_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_420_ == 0)
{
v___x_412_ = v___x_409_;
v_isShared_413_ = v_isSharedCheck_420_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_409_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_420_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v_a_410_);
v___x_415_ = v___x_403_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_410_);
v___x_415_ = v_reuseFailAlloc_419_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_417_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v___x_415_);
v___x_417_ = v___x_412_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v___x_415_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
else
{
lean_object* v_a_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
lean_del_object(v___x_403_);
v_a_421_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_428_ == 0)
{
v___x_423_ = v___x_409_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_a_421_);
lean_dec(v___x_409_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_421_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
else
{
lean_del_object(v___x_403_);
lean_dec(v_val_401_);
lean_dec(v_val_390_);
lean_dec_ref(v_arg_304_);
goto v___jp_396_;
}
}
else
{
lean_del_object(v___x_403_);
lean_dec(v_val_401_);
lean_dec(v_val_390_);
lean_dec_ref(v_arg_304_);
goto v___jp_396_;
}
}
}
else
{
lean_object* v___x_430_; lean_object* v___x_432_; 
lean_del_object(v___x_394_);
lean_dec(v_a_392_);
lean_dec(v_val_390_);
lean_dec_ref(v_arg_304_);
v___x_430_ = lean_box(0);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v___x_430_);
v___x_432_ = v___x_388_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_430_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
v___jp_396_:
{
lean_object* v___x_397_; lean_object* v___x_399_; 
v___x_397_ = lean_box(0);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v___x_397_);
v___x_399_ = v___x_394_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_397_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
else
{
lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_442_; 
lean_dec(v_val_390_);
lean_del_object(v___x_388_);
lean_dec_ref(v_arg_304_);
v_a_435_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_442_ == 0)
{
v___x_437_ = v___x_391_;
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_391_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_a_435_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
else
{
lean_object* v___x_443_; lean_object* v___x_445_; 
lean_dec(v_a_386_);
lean_dec_ref(v_arg_304_);
lean_dec_ref(v_arg_299_);
v___x_443_ = lean_box(0);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v___x_443_);
v___x_445_ = v___x_388_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v___x_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_dec_ref(v_arg_304_);
lean_dec_ref(v_arg_299_);
v_a_448_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_385_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_385_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
}
}
else
{
lean_object* v___x_456_; 
lean_dec_ref(v___x_300_);
lean_dec_ref(v_arg_299_);
lean_dec_ref(v_arg_296_);
v___x_456_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(v_e_283_, v_a_284_, v_a_285_, v_a_286_, v_a_287_);
return v___x_456_;
}
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec_ref(v_e_283_);
v_a_457_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_292_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_292_);
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
v___jp_289_:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_box(0);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___boxed(lean_object* v_e_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_Meta_Sym_Canon_normNumLit_x3f(v_e_465_, v_a_466_, v_a_467_, v_a_468_, v_a_469_);
lean_dec(v_a_469_);
lean_dec_ref(v_a_468_);
lean_dec(v_a_467_);
lean_dec_ref(v_a_466_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching(lean_object* v_e_474_, lean_object* v_k_475_, uint8_t v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0));
v___x_485_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1));
if (v_a_476_ == 0)
{
lean_object* v___x_486_; lean_object* v_canon_487_; lean_object* v_cache_488_; lean_object* v___x_489_; 
v___x_486_ = lean_st_ref_get(v_a_478_);
v_canon_487_ = lean_ctor_get(v___x_486_, 9);
lean_inc_ref(v_canon_487_);
lean_dec(v___x_486_);
v_cache_488_ = lean_ctor_get(v_canon_487_, 0);
lean_inc_ref(v_cache_488_);
lean_dec_ref(v_canon_487_);
lean_inc_ref(v_e_474_);
v___x_489_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_484_, v___x_485_, v_cache_488_, v_e_474_);
lean_dec_ref(v_cache_488_);
if (lean_obj_tag(v___x_489_) == 1)
{
lean_object* v_val_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_497_; 
lean_dec_ref(v_k_475_);
lean_dec_ref(v_e_474_);
v_val_490_ = lean_ctor_get(v___x_489_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_497_ == 0)
{
v___x_492_ = v___x_489_;
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_val_490_);
lean_dec(v___x_489_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_495_; 
if (v_isShared_493_ == 0)
{
lean_ctor_set_tag(v___x_492_, 0);
v___x_495_ = v___x_492_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_val_490_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
else
{
lean_object* v___x_498_; lean_object* v___x_499_; 
lean_dec(v___x_489_);
v___x_498_ = lean_box(v_a_476_);
lean_inc(v_a_482_);
lean_inc_ref(v_a_481_);
lean_inc(v_a_480_);
lean_inc_ref(v_a_479_);
lean_inc(v_a_478_);
lean_inc_ref(v_a_477_);
v___x_499_ = lean_apply_8(v_k_475_, v___x_498_, v_a_477_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, lean_box(0));
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_538_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_538_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_538_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_538_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; lean_object* v_canon_505_; lean_object* v_share_506_; lean_object* v_maxFVar_507_; lean_object* v_proofInstInfo_508_; lean_object* v_inferType_509_; lean_object* v_getLevel_510_; lean_object* v_congrInfo_511_; lean_object* v_defEqI_512_; lean_object* v_extensions_513_; lean_object* v_issues_514_; lean_object* v_instanceOverrides_515_; uint8_t v_debug_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_537_; 
v___x_504_ = lean_st_ref_take(v_a_478_);
v_canon_505_ = lean_ctor_get(v___x_504_, 9);
v_share_506_ = lean_ctor_get(v___x_504_, 0);
v_maxFVar_507_ = lean_ctor_get(v___x_504_, 1);
v_proofInstInfo_508_ = lean_ctor_get(v___x_504_, 2);
v_inferType_509_ = lean_ctor_get(v___x_504_, 3);
v_getLevel_510_ = lean_ctor_get(v___x_504_, 4);
v_congrInfo_511_ = lean_ctor_get(v___x_504_, 5);
v_defEqI_512_ = lean_ctor_get(v___x_504_, 6);
v_extensions_513_ = lean_ctor_get(v___x_504_, 7);
v_issues_514_ = lean_ctor_get(v___x_504_, 8);
v_instanceOverrides_515_ = lean_ctor_get(v___x_504_, 10);
v_debug_516_ = lean_ctor_get_uint8(v___x_504_, sizeof(void*)*11);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_537_ == 0)
{
v___x_518_ = v___x_504_;
v_isShared_519_ = v_isSharedCheck_537_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_instanceOverrides_515_);
lean_inc(v_canon_505_);
lean_inc(v_issues_514_);
lean_inc(v_extensions_513_);
lean_inc(v_defEqI_512_);
lean_inc(v_congrInfo_511_);
lean_inc(v_getLevel_510_);
lean_inc(v_inferType_509_);
lean_inc(v_proofInstInfo_508_);
lean_inc(v_maxFVar_507_);
lean_inc(v_share_506_);
lean_dec(v___x_504_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_537_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v_cache_520_; lean_object* v_cacheInType_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_536_; 
v_cache_520_ = lean_ctor_get(v_canon_505_, 0);
v_cacheInType_521_ = lean_ctor_get(v_canon_505_, 1);
v_isSharedCheck_536_ = !lean_is_exclusive(v_canon_505_);
if (v_isSharedCheck_536_ == 0)
{
v___x_523_ = v_canon_505_;
v_isShared_524_ = v_isSharedCheck_536_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_cacheInType_521_);
lean_inc(v_cache_520_);
lean_dec(v_canon_505_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_536_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_525_; lean_object* v___x_527_; 
lean_inc(v_a_500_);
v___x_525_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_484_, v___x_485_, v_cache_520_, v_e_474_, v_a_500_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_525_);
v___x_527_ = v___x_523_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_525_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_cacheInType_521_);
v___x_527_ = v_reuseFailAlloc_535_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_529_; 
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 9, v___x_527_);
v___x_529_ = v___x_518_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_share_506_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_maxFVar_507_);
lean_ctor_set(v_reuseFailAlloc_534_, 2, v_proofInstInfo_508_);
lean_ctor_set(v_reuseFailAlloc_534_, 3, v_inferType_509_);
lean_ctor_set(v_reuseFailAlloc_534_, 4, v_getLevel_510_);
lean_ctor_set(v_reuseFailAlloc_534_, 5, v_congrInfo_511_);
lean_ctor_set(v_reuseFailAlloc_534_, 6, v_defEqI_512_);
lean_ctor_set(v_reuseFailAlloc_534_, 7, v_extensions_513_);
lean_ctor_set(v_reuseFailAlloc_534_, 8, v_issues_514_);
lean_ctor_set(v_reuseFailAlloc_534_, 9, v___x_527_);
lean_ctor_set(v_reuseFailAlloc_534_, 10, v_instanceOverrides_515_);
lean_ctor_set_uint8(v_reuseFailAlloc_534_, sizeof(void*)*11, v_debug_516_);
v___x_529_ = v_reuseFailAlloc_534_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_530_ = lean_st_ref_put(v_a_478_, v___x_529_);
if (v_isShared_503_ == 0)
{
v___x_532_ = v___x_502_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_500_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_474_);
return v___x_499_;
}
}
}
else
{
lean_object* v___x_539_; lean_object* v_canon_540_; lean_object* v_cacheInType_541_; lean_object* v___x_542_; 
v___x_539_ = lean_st_ref_get(v_a_478_);
v_canon_540_ = lean_ctor_get(v___x_539_, 9);
lean_inc_ref(v_canon_540_);
lean_dec(v___x_539_);
v_cacheInType_541_ = lean_ctor_get(v_canon_540_, 1);
lean_inc_ref(v_cacheInType_541_);
lean_dec_ref(v_canon_540_);
lean_inc_ref(v_e_474_);
v___x_542_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_484_, v___x_485_, v_cacheInType_541_, v_e_474_);
lean_dec_ref(v_cacheInType_541_);
if (lean_obj_tag(v___x_542_) == 1)
{
lean_object* v_val_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
lean_dec_ref(v_k_475_);
lean_dec_ref(v_e_474_);
v_val_543_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_542_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_val_543_);
lean_dec(v___x_542_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
lean_ctor_set_tag(v___x_545_, 0);
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_val_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
else
{
lean_object* v___x_551_; lean_object* v___x_552_; 
lean_dec(v___x_542_);
v___x_551_ = lean_box(v_a_476_);
lean_inc(v_a_482_);
lean_inc_ref(v_a_481_);
lean_inc(v_a_480_);
lean_inc_ref(v_a_479_);
lean_inc(v_a_478_);
lean_inc_ref(v_a_477_);
v___x_552_ = lean_apply_8(v_k_475_, v___x_551_, v_a_477_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, lean_box(0));
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_591_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_591_ == 0)
{
v___x_555_ = v___x_552_;
v_isShared_556_ = v_isSharedCheck_591_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_552_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_591_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_557_; lean_object* v_canon_558_; lean_object* v_share_559_; lean_object* v_maxFVar_560_; lean_object* v_proofInstInfo_561_; lean_object* v_inferType_562_; lean_object* v_getLevel_563_; lean_object* v_congrInfo_564_; lean_object* v_defEqI_565_; lean_object* v_extensions_566_; lean_object* v_issues_567_; lean_object* v_instanceOverrides_568_; uint8_t v_debug_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_590_; 
v___x_557_ = lean_st_ref_take(v_a_478_);
v_canon_558_ = lean_ctor_get(v___x_557_, 9);
v_share_559_ = lean_ctor_get(v___x_557_, 0);
v_maxFVar_560_ = lean_ctor_get(v___x_557_, 1);
v_proofInstInfo_561_ = lean_ctor_get(v___x_557_, 2);
v_inferType_562_ = lean_ctor_get(v___x_557_, 3);
v_getLevel_563_ = lean_ctor_get(v___x_557_, 4);
v_congrInfo_564_ = lean_ctor_get(v___x_557_, 5);
v_defEqI_565_ = lean_ctor_get(v___x_557_, 6);
v_extensions_566_ = lean_ctor_get(v___x_557_, 7);
v_issues_567_ = lean_ctor_get(v___x_557_, 8);
v_instanceOverrides_568_ = lean_ctor_get(v___x_557_, 10);
v_debug_569_ = lean_ctor_get_uint8(v___x_557_, sizeof(void*)*11);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_590_ == 0)
{
v___x_571_ = v___x_557_;
v_isShared_572_ = v_isSharedCheck_590_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_instanceOverrides_568_);
lean_inc(v_canon_558_);
lean_inc(v_issues_567_);
lean_inc(v_extensions_566_);
lean_inc(v_defEqI_565_);
lean_inc(v_congrInfo_564_);
lean_inc(v_getLevel_563_);
lean_inc(v_inferType_562_);
lean_inc(v_proofInstInfo_561_);
lean_inc(v_maxFVar_560_);
lean_inc(v_share_559_);
lean_dec(v___x_557_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_590_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v_cache_573_; lean_object* v_cacheInType_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_589_; 
v_cache_573_ = lean_ctor_get(v_canon_558_, 0);
v_cacheInType_574_ = lean_ctor_get(v_canon_558_, 1);
v_isSharedCheck_589_ = !lean_is_exclusive(v_canon_558_);
if (v_isSharedCheck_589_ == 0)
{
v___x_576_ = v_canon_558_;
v_isShared_577_ = v_isSharedCheck_589_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_cacheInType_574_);
lean_inc(v_cache_573_);
lean_dec(v_canon_558_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_589_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_578_; lean_object* v___x_580_; 
lean_inc(v_a_553_);
v___x_578_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_484_, v___x_485_, v_cacheInType_574_, v_e_474_, v_a_553_);
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 1, v___x_578_);
v___x_580_ = v___x_576_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_cache_573_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v___x_578_);
v___x_580_ = v_reuseFailAlloc_588_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_582_; 
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 9, v___x_580_);
v___x_582_ = v___x_571_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_share_559_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v_maxFVar_560_);
lean_ctor_set(v_reuseFailAlloc_587_, 2, v_proofInstInfo_561_);
lean_ctor_set(v_reuseFailAlloc_587_, 3, v_inferType_562_);
lean_ctor_set(v_reuseFailAlloc_587_, 4, v_getLevel_563_);
lean_ctor_set(v_reuseFailAlloc_587_, 5, v_congrInfo_564_);
lean_ctor_set(v_reuseFailAlloc_587_, 6, v_defEqI_565_);
lean_ctor_set(v_reuseFailAlloc_587_, 7, v_extensions_566_);
lean_ctor_set(v_reuseFailAlloc_587_, 8, v_issues_567_);
lean_ctor_set(v_reuseFailAlloc_587_, 9, v___x_580_);
lean_ctor_set(v_reuseFailAlloc_587_, 10, v_instanceOverrides_568_);
lean_ctor_set_uint8(v_reuseFailAlloc_587_, sizeof(void*)*11, v_debug_569_);
v___x_582_ = v_reuseFailAlloc_587_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
lean_object* v___x_583_; lean_object* v___x_585_; 
v___x_583_ = lean_st_ref_put(v_a_478_, v___x_582_);
if (v_isShared_556_ == 0)
{
v___x_585_ = v___x_555_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_a_553_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_474_);
return v___x_552_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___boxed(lean_object* v_e_592_, lean_object* v_k_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_){
_start:
{
uint8_t v_a_boxed_602_; lean_object* v_res_603_; 
v_a_boxed_602_ = lean_unbox(v_a_594_);
v_res_603_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching(v_e_592_, v_k_593_, v_a_boxed_602_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
lean_dec(v_a_600_);
lean_dec_ref(v_a_599_);
lean_dec(v_a_598_);
lean_dec_ref(v_a_597_);
lean_dec(v_a_596_);
lean_dec_ref(v_a_595_);
return v_res_603_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(lean_object* v_e_610_){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_611_ = l_Lean_Expr_cleanupAnnotations(v_e_610_);
v___x_612_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1));
v___x_613_ = l_Lean_Expr_isConstOf(v___x_611_, v___x_612_);
if (v___x_613_ == 0)
{
uint8_t v___x_614_; 
v___x_614_ = l_Lean_Expr_isApp(v___x_611_);
if (v___x_614_ == 0)
{
lean_dec_ref(v___x_611_);
return v___x_614_;
}
else
{
lean_object* v_arg_615_; lean_object* v___x_616_; uint8_t v___x_617_; 
v_arg_615_ = lean_ctor_get(v___x_611_, 1);
lean_inc_ref(v_arg_615_);
v___x_616_ = l_Lean_Expr_appFnCleanup___redArg(v___x_611_);
v___x_617_ = l_Lean_Expr_isApp(v___x_616_);
if (v___x_617_ == 0)
{
lean_dec_ref(v___x_616_);
lean_dec_ref(v_arg_615_);
return v___x_617_;
}
else
{
lean_object* v_arg_618_; lean_object* v___x_619_; uint8_t v___x_620_; 
v_arg_618_ = lean_ctor_get(v___x_616_, 1);
lean_inc_ref(v_arg_618_);
v___x_619_ = l_Lean_Expr_appFnCleanup___redArg(v___x_616_);
v___x_620_ = l_Lean_Expr_isApp(v___x_619_);
if (v___x_620_ == 0)
{
lean_dec_ref(v___x_619_);
lean_dec_ref(v_arg_618_);
lean_dec_ref(v_arg_615_);
return v___x_620_;
}
else
{
lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_621_ = l_Lean_Expr_appFnCleanup___redArg(v___x_619_);
v___x_622_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3));
v___x_623_ = l_Lean_Expr_isConstOf(v___x_621_, v___x_622_);
lean_dec_ref(v___x_621_);
if (v___x_623_ == 0)
{
lean_dec_ref(v_arg_618_);
lean_dec_ref(v_arg_615_);
return v___x_623_;
}
else
{
uint8_t v___x_624_; 
v___x_624_ = l_Lean_Expr_isBoolTrue(v_arg_618_);
if (v___x_624_ == 0)
{
lean_dec_ref(v_arg_615_);
return v___x_624_;
}
else
{
uint8_t v___x_625_; 
v___x_625_ = l_Lean_Expr_isBoolTrue(v_arg_615_);
return v___x_625_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_611_);
return v___x_613_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___boxed(lean_object* v_e_626_){
_start:
{
uint8_t v_res_627_; lean_object* v_r_628_; 
v_res_627_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(v_e_626_);
v_r_628_ = lean_box(v_res_627_);
return v_r_628_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(lean_object* v_e_632_){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v___x_633_ = l_Lean_Expr_cleanupAnnotations(v_e_632_);
v___x_634_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1));
v___x_635_ = l_Lean_Expr_isConstOf(v___x_633_, v___x_634_);
if (v___x_635_ == 0)
{
uint8_t v___x_636_; 
v___x_636_ = l_Lean_Expr_isApp(v___x_633_);
if (v___x_636_ == 0)
{
lean_dec_ref(v___x_633_);
return v___x_636_;
}
else
{
lean_object* v_arg_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v_arg_637_ = lean_ctor_get(v___x_633_, 1);
lean_inc_ref(v_arg_637_);
v___x_638_ = l_Lean_Expr_appFnCleanup___redArg(v___x_633_);
v___x_639_ = l_Lean_Expr_isApp(v___x_638_);
if (v___x_639_ == 0)
{
lean_dec_ref(v___x_638_);
lean_dec_ref(v_arg_637_);
return v___x_639_;
}
else
{
lean_object* v_arg_640_; lean_object* v___x_641_; uint8_t v___x_642_; 
v_arg_640_ = lean_ctor_get(v___x_638_, 1);
lean_inc_ref(v_arg_640_);
v___x_641_ = l_Lean_Expr_appFnCleanup___redArg(v___x_638_);
v___x_642_ = l_Lean_Expr_isApp(v___x_641_);
if (v___x_642_ == 0)
{
lean_dec_ref(v___x_641_);
lean_dec_ref(v_arg_640_);
lean_dec_ref(v_arg_637_);
return v___x_642_;
}
else
{
lean_object* v___x_643_; lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_643_ = l_Lean_Expr_appFnCleanup___redArg(v___x_641_);
v___x_644_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3));
v___x_645_ = l_Lean_Expr_isConstOf(v___x_643_, v___x_644_);
lean_dec_ref(v___x_643_);
if (v___x_645_ == 0)
{
lean_dec_ref(v_arg_640_);
lean_dec_ref(v_arg_637_);
return v___x_645_;
}
else
{
uint8_t v___x_646_; 
v___x_646_ = l_Lean_Expr_isBoolFalse(v_arg_640_);
if (v___x_646_ == 0)
{
lean_dec_ref(v_arg_637_);
return v___x_646_;
}
else
{
uint8_t v___x_647_; 
v___x_647_ = l_Lean_Expr_isBoolTrue(v_arg_637_);
return v___x_647_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_633_);
return v___x_635_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___boxed(lean_object* v_e_648_){
_start:
{
uint8_t v_res_649_; lean_object* v_r_650_; 
v_res_649_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(v_e_648_);
v_r_650_ = lean_box(v_res_649_);
return v_r_650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx(uint8_t v_x_651_){
_start:
{
switch(v_x_651_)
{
case 0:
{
lean_object* v___x_652_; 
v___x_652_ = lean_unsigned_to_nat(0u);
return v___x_652_;
}
case 1:
{
lean_object* v___x_653_; 
v___x_653_ = lean_unsigned_to_nat(1u);
return v___x_653_;
}
case 2:
{
lean_object* v___x_654_; 
v___x_654_ = lean_unsigned_to_nat(2u);
return v___x_654_;
}
default: 
{
lean_object* v___x_655_; 
v___x_655_ = lean_unsigned_to_nat(3u);
return v___x_655_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___boxed(lean_object* v_x_656_){
_start:
{
uint8_t v_x_boxed_657_; lean_object* v_res_658_; 
v_x_boxed_657_ = lean_unbox(v_x_656_);
v_res_658_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx(v_x_boxed_657_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg(lean_object* v_k_659_){
_start:
{
lean_inc(v_k_659_);
return v_k_659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg___boxed(lean_object* v_k_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg(v_k_660_);
lean_dec(v_k_660_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim(lean_object* v_motive_662_, lean_object* v_ctorIdx_663_, uint8_t v_t_664_, lean_object* v_h_665_, lean_object* v_k_666_){
_start:
{
lean_inc(v_k_666_);
return v_k_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___boxed(lean_object* v_motive_667_, lean_object* v_ctorIdx_668_, lean_object* v_t_669_, lean_object* v_h_670_, lean_object* v_k_671_){
_start:
{
uint8_t v_t_boxed_672_; lean_object* v_res_673_; 
v_t_boxed_672_ = lean_unbox(v_t_669_);
v_res_673_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim(v_motive_667_, v_ctorIdx_668_, v_t_boxed_672_, v_h_670_, v_k_671_);
lean_dec(v_k_671_);
lean_dec(v_ctorIdx_668_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg(lean_object* v_canonType_674_){
_start:
{
lean_inc(v_canonType_674_);
return v_canonType_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg___boxed(lean_object* v_canonType_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg(v_canonType_675_);
lean_dec(v_canonType_675_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim(lean_object* v_motive_677_, uint8_t v_t_678_, lean_object* v_h_679_, lean_object* v_canonType_680_){
_start:
{
lean_inc(v_canonType_680_);
return v_canonType_680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___boxed(lean_object* v_motive_681_, lean_object* v_t_682_, lean_object* v_h_683_, lean_object* v_canonType_684_){
_start:
{
uint8_t v_t_boxed_685_; lean_object* v_res_686_; 
v_t_boxed_685_ = lean_unbox(v_t_682_);
v_res_686_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim(v_motive_681_, v_t_boxed_685_, v_h_683_, v_canonType_684_);
lean_dec(v_canonType_684_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg(lean_object* v_canonInst_687_){
_start:
{
lean_inc(v_canonInst_687_);
return v_canonInst_687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg___boxed(lean_object* v_canonInst_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg(v_canonInst_688_);
lean_dec(v_canonInst_688_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim(lean_object* v_motive_690_, uint8_t v_t_691_, lean_object* v_h_692_, lean_object* v_canonInst_693_){
_start:
{
lean_inc(v_canonInst_693_);
return v_canonInst_693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___boxed(lean_object* v_motive_694_, lean_object* v_t_695_, lean_object* v_h_696_, lean_object* v_canonInst_697_){
_start:
{
uint8_t v_t_boxed_698_; lean_object* v_res_699_; 
v_t_boxed_698_ = lean_unbox(v_t_695_);
v_res_699_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim(v_motive_694_, v_t_boxed_698_, v_h_696_, v_canonInst_697_);
lean_dec(v_canonInst_697_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg(lean_object* v_canonImplicit_700_){
_start:
{
lean_inc(v_canonImplicit_700_);
return v_canonImplicit_700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg___boxed(lean_object* v_canonImplicit_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg(v_canonImplicit_701_);
lean_dec(v_canonImplicit_701_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim(lean_object* v_motive_703_, uint8_t v_t_704_, lean_object* v_h_705_, lean_object* v_canonImplicit_706_){
_start:
{
lean_inc(v_canonImplicit_706_);
return v_canonImplicit_706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___boxed(lean_object* v_motive_707_, lean_object* v_t_708_, lean_object* v_h_709_, lean_object* v_canonImplicit_710_){
_start:
{
uint8_t v_t_boxed_711_; lean_object* v_res_712_; 
v_t_boxed_711_ = lean_unbox(v_t_708_);
v_res_712_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim(v_motive_707_, v_t_boxed_711_, v_h_709_, v_canonImplicit_710_);
lean_dec(v_canonImplicit_710_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg(lean_object* v_visit_713_){
_start:
{
lean_inc(v_visit_713_);
return v_visit_713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg___boxed(lean_object* v_visit_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg(v_visit_714_);
lean_dec(v_visit_714_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim(lean_object* v_motive_716_, uint8_t v_t_717_, lean_object* v_h_718_, lean_object* v_visit_719_){
_start:
{
lean_inc(v_visit_719_);
return v_visit_719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___boxed(lean_object* v_motive_720_, lean_object* v_t_721_, lean_object* v_h_722_, lean_object* v_visit_723_){
_start:
{
uint8_t v_t_boxed_724_; lean_object* v_res_725_; 
v_t_boxed_724_ = lean_unbox(v_t_721_);
v_res_725_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim(v_motive_720_, v_t_boxed_724_, v_h_722_, v_visit_723_);
lean_dec(v_visit_723_);
return v_res_725_;
}
}
static uint8_t _init_l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default(void){
_start:
{
uint8_t v___x_726_; 
v___x_726_ = 0;
return v___x_726_;
}
}
static uint8_t _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult(void){
_start:
{
uint8_t v___x_727_; 
v___x_727_ = 0;
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0(uint8_t v_r_740_, lean_object* v_x_741_){
_start:
{
switch(v_r_740_)
{
case 0:
{
lean_object* v___x_742_; 
v___x_742_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1));
return v___x_742_;
}
case 1:
{
lean_object* v___x_743_; 
v___x_743_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3));
return v___x_743_;
}
case 2:
{
lean_object* v___x_744_; 
v___x_744_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5));
return v___x_744_;
}
default: 
{
lean_object* v___x_745_; 
v___x_745_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7));
return v___x_745_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___boxed(lean_object* v_r_746_, lean_object* v_x_747_){
_start:
{
uint8_t v_r_boxed_748_; lean_object* v_res_749_; 
v_r_boxed_748_ = lean_unbox(v_r_746_);
v_res_749_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0(v_r_boxed_748_, v_x_747_);
lean_dec(v_x_747_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(lean_object* v_pinfos_752_, lean_object* v_i_753_, lean_object* v_arg_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_){
_start:
{
lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; lean_object* v___x_810_; uint8_t v___x_811_; 
v___x_810_ = lean_array_get_size(v_pinfos_752_);
v___x_811_ = lean_nat_dec_lt(v_i_753_, v___x_810_);
if (v___x_811_ == 0)
{
v___y_761_ = v_a_755_;
v___y_762_ = v_a_756_;
v___y_763_ = v_a_757_;
v___y_764_ = v_a_758_;
goto v___jp_760_;
}
else
{
lean_object* v_pinfo_812_; uint8_t v_isInstance_813_; 
v_pinfo_812_ = lean_array_fget_borrowed(v_pinfos_752_, v_i_753_);
v_isInstance_813_ = lean_ctor_get_uint8(v_pinfo_812_, sizeof(void*)*1 + 4);
if (v_isInstance_813_ == 0)
{
uint8_t v_isProp_814_; 
v_isProp_814_ = lean_ctor_get_uint8(v_pinfo_812_, sizeof(void*)*1 + 2);
if (v_isProp_814_ == 0)
{
uint8_t v___x_815_; 
v___x_815_ = l_Lean_Meta_ParamInfo_isImplicit(v_pinfo_812_);
if (v___x_815_ == 0)
{
v___y_761_ = v_a_755_;
v___y_762_ = v_a_756_;
v___y_763_ = v_a_757_;
v___y_764_ = v_a_758_;
goto v___jp_760_;
}
else
{
lean_object* v___x_816_; 
v___x_816_ = l_Lean_Meta_isTypeFormer(v_arg_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v_a_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_832_; 
v_a_817_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_832_ == 0)
{
v___x_819_ = v___x_816_;
v_isShared_820_ = v_isSharedCheck_832_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_a_817_);
lean_dec(v___x_816_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_832_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
uint8_t v___x_821_; 
v___x_821_ = lean_unbox(v_a_817_);
lean_dec(v_a_817_);
if (v___x_821_ == 0)
{
uint8_t v___x_822_; lean_object* v___x_823_; lean_object* v___x_825_; 
v___x_822_ = 2;
v___x_823_ = lean_box(v___x_822_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v___x_823_);
v___x_825_ = v___x_819_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v___x_823_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
else
{
uint8_t v___x_827_; lean_object* v___x_828_; lean_object* v___x_830_; 
v___x_827_ = 0;
v___x_828_ = lean_box(v___x_827_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v___x_828_);
v___x_830_ = v___x_819_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_828_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
v_a_833_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_816_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_816_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
}
else
{
uint8_t v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
lean_dec_ref(v_arg_754_);
v___x_841_ = 3;
v___x_842_ = lean_box(v___x_841_);
v___x_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
return v___x_843_;
}
}
else
{
uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
lean_dec_ref(v_arg_754_);
v___x_844_ = 1;
v___x_845_ = lean_box(v___x_844_);
v___x_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_846_, 0, v___x_845_);
return v___x_846_;
}
}
v___jp_760_:
{
lean_object* v___x_765_; 
lean_inc_ref(v_arg_754_);
v___x_765_ = l_Lean_Meta_isProp(v_arg_754_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_801_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_801_ == 0)
{
v___x_768_ = v___x_765_;
v_isShared_769_ = v_isSharedCheck_801_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_765_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_801_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
uint8_t v___x_770_; 
v___x_770_ = lean_unbox(v_a_766_);
lean_dec(v_a_766_);
if (v___x_770_ == 0)
{
lean_object* v___x_771_; 
lean_del_object(v___x_768_);
v___x_771_ = l_Lean_Meta_isTypeFormer(v_arg_754_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_787_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_787_ == 0)
{
v___x_774_ = v___x_771_;
v_isShared_775_ = v_isSharedCheck_787_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___x_771_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_787_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
uint8_t v___x_776_; 
v___x_776_ = lean_unbox(v_a_772_);
lean_dec(v_a_772_);
if (v___x_776_ == 0)
{
uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_780_; 
v___x_777_ = 3;
v___x_778_ = lean_box(v___x_777_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v___x_778_);
v___x_780_ = v___x_774_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v___x_778_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
else
{
uint8_t v___x_782_; lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_782_ = 0;
v___x_783_ = lean_box(v___x_782_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v___x_783_);
v___x_785_ = v___x_774_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
else
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_795_; 
v_a_788_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_795_ == 0)
{
v___x_790_ = v___x_771_;
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_771_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_a_788_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
}
else
{
uint8_t v___x_796_; lean_object* v___x_797_; lean_object* v___x_799_; 
lean_dec_ref(v_arg_754_);
v___x_796_ = 3;
v___x_797_ = lean_box(v___x_796_);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 0, v___x_797_);
v___x_799_ = v___x_768_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_797_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
else
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_809_; 
lean_dec_ref(v_arg_754_);
v_a_802_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_809_ == 0)
{
v___x_804_ = v___x_765_;
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_765_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_802_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon___boxed(lean_object* v_pinfos_847_, lean_object* v_i_848_, lean_object* v_arg_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v_pinfos_847_, v_i_848_, v_arg_849_, v_a_850_, v_a_851_, v_a_852_, v_a_853_);
lean_dec(v_a_853_);
lean_dec_ref(v_a_852_);
lean_dec(v_a_851_);
lean_dec_ref(v_a_850_);
lean_dec(v_i_848_);
lean_dec_ref(v_pinfos_847_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_mkOffset(lean_object* v_e_856_, lean_object* v_offset_857_){
_start:
{
lean_object* v___x_858_; uint8_t v___x_859_; 
v___x_858_ = lean_unsigned_to_nat(0u);
v___x_859_ = lean_nat_dec_eq(v_offset_857_, v___x_858_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = l_Lean_mkNatLit(v_offset_857_);
v___x_861_ = l_Lean_mkNatAdd(v_e_856_, v___x_860_);
return v___x_861_;
}
else
{
lean_dec(v_offset_857_);
return v_e_856_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_box(0);
v___x_863_ = l_unsafeCast___redArg(v___x_862_);
return v___x_863_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_864_; lean_object* v_dummy_865_; 
v___x_864_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0);
v_dummy_865_ = l_Lean_Expr_sort___override(v___x_864_);
return v_dummy_865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(lean_object* v_info_866_, lean_object* v_e_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_){
_start:
{
uint8_t v_fromClass_873_; 
v_fromClass_873_ = lean_ctor_get_uint8(v_info_866_, sizeof(void*)*3);
if (v_fromClass_873_ == 0)
{
lean_object* v___x_874_; 
v___x_874_ = l_Lean_Meta_unfoldDefinition_x3f(v_e_867_, v_fromClass_873_, v_a_868_, v_a_869_, v_a_870_, v_a_871_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_910_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_910_ == 0)
{
v___x_877_ = v___x_874_;
v_isShared_878_ = v_isSharedCheck_910_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_874_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_910_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
if (lean_obj_tag(v_a_875_) == 1)
{
lean_object* v_val_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
lean_del_object(v___x_877_);
v_val_879_ = lean_ctor_get(v_a_875_, 0);
lean_inc(v_val_879_);
lean_dec_ref_known(v_a_875_, 1);
v___x_880_ = l_Lean_Expr_getAppFn(v_val_879_);
v___x_881_ = l_Lean_Meta_reduceProj_x3f(v___x_880_, v_a_868_, v_a_869_, v_a_870_, v_a_871_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_882_);
if (lean_obj_tag(v_a_882_) == 0)
{
lean_dec(v_val_879_);
return v___x_881_;
}
else
{
lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_904_; 
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_904_ == 0)
{
lean_object* v_unused_905_; 
v_unused_905_ = lean_ctor_get(v___x_881_, 0);
lean_dec(v_unused_905_);
v___x_884_ = v___x_881_;
v_isShared_885_ = v_isSharedCheck_904_;
goto v_resetjp_883_;
}
else
{
lean_dec(v___x_881_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_904_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v_val_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_903_; 
v_val_886_ = lean_ctor_get(v_a_882_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v_a_882_);
if (v_isSharedCheck_903_ == 0)
{
v___x_888_ = v_a_882_;
v_isShared_889_ = v_isSharedCheck_903_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_val_886_);
lean_dec(v_a_882_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_903_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v_dummy_890_; lean_object* v_nargs_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_898_; 
v_dummy_890_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__1, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__1);
v_nargs_891_ = l_Lean_Expr_getAppNumArgs(v_val_879_);
lean_inc(v_nargs_891_);
v___x_892_ = lean_mk_array(v_nargs_891_, v_dummy_890_);
v___x_893_ = lean_unsigned_to_nat(1u);
v___x_894_ = lean_nat_sub(v_nargs_891_, v___x_893_);
lean_dec(v_nargs_891_);
v___x_895_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_879_, v___x_892_, v___x_894_);
v___x_896_ = l_Lean_mkAppN(v_val_886_, v___x_895_);
lean_dec_ref(v___x_895_);
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 0, v___x_896_);
v___x_898_ = v___x_888_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_896_);
v___x_898_ = v_reuseFailAlloc_902_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
lean_object* v___x_900_; 
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_898_);
v___x_900_ = v___x_884_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v___x_898_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
}
}
else
{
lean_dec(v_val_879_);
return v___x_881_;
}
}
else
{
lean_object* v___x_906_; lean_object* v___x_908_; 
lean_dec(v_a_875_);
v___x_906_ = lean_box(0);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 0, v___x_906_);
v___x_908_ = v___x_877_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_906_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
else
{
return v___x_874_;
}
}
else
{
lean_object* v___x_911_; lean_object* v___x_912_; 
lean_dec_ref(v_e_867_);
v___x_911_ = lean_box(0);
v___x_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
return v___x_912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___boxed(lean_object* v_info_913_, lean_object* v_e_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(v_info_913_, v_e_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
lean_dec(v_a_916_);
lean_dec_ref(v_a_915_);
lean_dec_ref(v_info_913_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f(lean_object* v_info_921_, lean_object* v_e_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(v_info_921_, v_e_922_, v_a_925_, v_a_926_, v_a_927_, v_a_928_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___boxed(lean_object* v_info_931_, lean_object* v_e_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f(v_info_931_, v_e_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
lean_dec(v_a_936_);
lean_dec_ref(v_a_935_);
lean_dec(v_a_934_);
lean_dec_ref(v_a_933_);
lean_dec_ref(v_info_931_);
return v_res_940_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(lean_object* v_e_941_){
_start:
{
lean_object* v___x_942_; uint8_t v___x_943_; 
v___x_942_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__3));
v___x_943_ = l_Lean_Expr_isConstOf(v_e_941_, v___x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat___boxed(lean_object* v_e_944_){
_start:
{
uint8_t v_res_945_; lean_object* v_r_946_; 
v_res_945_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_e_944_);
lean_dec_ref(v_e_944_);
v_r_946_ = lean_box(v_res_945_);
return v_r_946_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(lean_object* v_e_980_){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_981_ = l_Lean_Expr_cleanupAnnotations(v_e_980_);
v___x_982_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1));
v___x_983_ = l_Lean_Expr_isConstOf(v___x_981_, v___x_982_);
if (v___x_983_ == 0)
{
uint8_t v___x_984_; 
v___x_984_ = l_Lean_Expr_isApp(v___x_981_);
if (v___x_984_ == 0)
{
lean_dec_ref(v___x_981_);
return v___x_984_;
}
else
{
lean_object* v___x_985_; lean_object* v___x_986_; uint8_t v___x_987_; 
v___x_985_ = l_Lean_Expr_appFnCleanup___redArg(v___x_981_);
v___x_986_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3));
v___x_987_ = l_Lean_Expr_isConstOf(v___x_985_, v___x_986_);
if (v___x_987_ == 0)
{
uint8_t v___x_988_; 
v___x_988_ = l_Lean_Expr_isApp(v___x_985_);
if (v___x_988_ == 0)
{
lean_dec_ref(v___x_985_);
return v___x_988_;
}
else
{
lean_object* v___x_989_; uint8_t v___x_990_; 
v___x_989_ = l_Lean_Expr_appFnCleanup___redArg(v___x_985_);
v___x_990_ = l_Lean_Expr_isApp(v___x_989_);
if (v___x_990_ == 0)
{
lean_dec_ref(v___x_989_);
return v___x_990_;
}
else
{
lean_object* v___x_991_; uint8_t v___x_992_; 
v___x_991_ = l_Lean_Expr_appFnCleanup___redArg(v___x_989_);
v___x_992_ = l_Lean_Expr_isApp(v___x_991_);
if (v___x_992_ == 0)
{
lean_dec_ref(v___x_991_);
return v___x_992_;
}
else
{
lean_object* v___x_993_; uint8_t v___x_994_; 
v___x_993_ = l_Lean_Expr_appFnCleanup___redArg(v___x_991_);
v___x_994_ = l_Lean_Expr_isApp(v___x_993_);
if (v___x_994_ == 0)
{
lean_dec_ref(v___x_993_);
return v___x_994_;
}
else
{
lean_object* v___x_995_; uint8_t v___x_996_; 
v___x_995_ = l_Lean_Expr_appFnCleanup___redArg(v___x_993_);
v___x_996_ = l_Lean_Expr_isApp(v___x_995_);
if (v___x_996_ == 0)
{
lean_dec_ref(v___x_995_);
return v___x_996_;
}
else
{
lean_object* v_arg_997_; lean_object* v___x_998_; lean_object* v___x_999_; uint8_t v___x_1000_; 
v_arg_997_ = lean_ctor_get(v___x_995_, 1);
lean_inc_ref(v_arg_997_);
v___x_998_ = l_Lean_Expr_appFnCleanup___redArg(v___x_995_);
v___x_999_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6));
v___x_1000_ = l_Lean_Expr_isConstOf(v___x_998_, v___x_999_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; uint8_t v___x_1002_; 
v___x_1001_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9));
v___x_1002_ = l_Lean_Expr_isConstOf(v___x_998_, v___x_1001_);
if (v___x_1002_ == 0)
{
lean_object* v___x_1003_; uint8_t v___x_1004_; 
v___x_1003_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12));
v___x_1004_ = l_Lean_Expr_isConstOf(v___x_998_, v___x_1003_);
if (v___x_1004_ == 0)
{
lean_object* v___x_1005_; uint8_t v___x_1006_; 
v___x_1005_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15));
v___x_1006_ = l_Lean_Expr_isConstOf(v___x_998_, v___x_1005_);
if (v___x_1006_ == 0)
{
lean_object* v___x_1007_; uint8_t v___x_1008_; 
v___x_1007_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18));
v___x_1008_ = l_Lean_Expr_isConstOf(v___x_998_, v___x_1007_);
lean_dec_ref(v___x_998_);
if (v___x_1008_ == 0)
{
lean_dec_ref(v_arg_997_);
return v___x_1008_;
}
else
{
uint8_t v___x_1009_; 
v___x_1009_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_997_);
lean_dec_ref(v_arg_997_);
return v___x_1009_;
}
}
else
{
uint8_t v___x_1010_; 
lean_dec_ref(v___x_998_);
v___x_1010_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_997_);
lean_dec_ref(v_arg_997_);
return v___x_1010_;
}
}
else
{
uint8_t v___x_1011_; 
lean_dec_ref(v___x_998_);
v___x_1011_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_997_);
lean_dec_ref(v_arg_997_);
return v___x_1011_;
}
}
else
{
uint8_t v___x_1012_; 
lean_dec_ref(v___x_998_);
v___x_1012_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_997_);
lean_dec_ref(v_arg_997_);
return v___x_1012_;
}
}
else
{
uint8_t v___x_1013_; 
lean_dec_ref(v___x_998_);
v___x_1013_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_997_);
lean_dec_ref(v_arg_997_);
return v___x_1013_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_985_);
return v___x_987_;
}
}
}
else
{
lean_dec_ref(v___x_981_);
return v___x_983_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___boxed(lean_object* v_e_1014_){
_start:
{
uint8_t v_res_1015_; lean_object* v_r_1016_; 
v_res_1015_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(v_e_1014_);
v_r_1016_ = lean_box(v_res_1015_);
return v_r_1016_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0));
v___x_1019_ = l_Lean_stringToMessageData(v___x_1018_);
return v___x_1019_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2));
v___x_1022_ = l_Lean_stringToMessageData(v___x_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(lean_object* v_e_1023_, lean_object* v_inst_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_){
_start:
{
lean_object* v___x_1032_; 
lean_inc_ref(v_inst_1024_);
lean_inc_ref(v_e_1023_);
v___x_1032_ = l_Lean_Meta_Sym_isDefEqI___redArg(v_e_1023_, v_inst_1024_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_);
if (lean_obj_tag(v___x_1032_) == 0)
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1083_; 
v_a_1033_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1035_ = v___x_1032_;
v_isShared_1036_ = v_isSharedCheck_1083_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1032_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1083_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
uint8_t v___x_1037_; 
v___x_1037_ = lean_unbox(v_a_1033_);
lean_dec(v_a_1033_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
lean_del_object(v___x_1035_);
v___x_1038_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1);
lean_inc_ref(v_e_1023_);
v___x_1039_ = l_Lean_indentExpr(v_e_1023_);
v___x_1040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1038_);
lean_ctor_set(v___x_1040_, 1, v___x_1039_);
v___x_1041_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3);
v___x_1042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1040_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = l_Lean_indentExpr(v_inst_1024_);
v___x_1044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1042_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
v___x_1045_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1025_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1071_; 
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1048_ = v___x_1045_;
v_isShared_1049_ = v_isSharedCheck_1071_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1045_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1071_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
uint8_t v_verbose_1050_; 
v_verbose_1050_ = lean_ctor_get_uint8(v_a_1046_, 0);
lean_dec(v_a_1046_);
if (v_verbose_1050_ == 0)
{
lean_object* v___x_1052_; 
lean_dec_ref_known(v___x_1044_, 2);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v_e_1023_);
v___x_1052_ = v___x_1048_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_e_1023_);
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
lean_object* v___x_1054_; 
lean_del_object(v___x_1048_);
v___x_1054_ = l_Lean_Meta_Sym_reportIssue(v___x_1044_, v_a_1025_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1061_ == 0)
{
lean_object* v_unused_1062_; 
v_unused_1062_ = lean_ctor_get(v___x_1054_, 0);
lean_dec(v_unused_1062_);
v___x_1056_ = v___x_1054_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_dec(v___x_1054_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v_e_1023_);
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_e_1023_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
lean_dec_ref(v_e_1023_);
v_a_1063_ = lean_ctor_get(v___x_1054_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v___x_1054_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1054_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
lean_dec_ref_known(v___x_1044_, 2);
lean_dec_ref(v_e_1023_);
v_a_1072_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1045_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1045_);
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
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v___x_1081_; 
lean_dec_ref(v_e_1023_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 0, v_inst_1024_);
v___x_1081_ = v___x_1035_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_inst_1024_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1091_; 
lean_dec_ref(v_inst_1024_);
lean_dec_ref(v_e_1023_);
v_a_1084_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1086_ = v___x_1032_;
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1032_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1089_; 
if (v_isShared_1087_ == 0)
{
v___x_1089_ = v___x_1086_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_a_1084_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___boxed(lean_object* v_e_1092_, lean_object* v_inst_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(v_e_1092_, v_inst_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_);
lean_dec(v_a_1099_);
lean_dec_ref(v_a_1098_);
lean_dec(v_a_1097_);
lean_dec_ref(v_a_1096_);
lean_dec(v_a_1095_);
lean_dec_ref(v_a_1094_);
return v_res_1101_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___closed__1(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___closed__0));
v___x_1104_ = l_Lean_stringToMessageData(v___x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg(lean_object* v_e_1105_, lean_object* v_type_1106_, uint8_t v_report_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_){
_start:
{
lean_object* v___x_1115_; 
lean_inc_ref(v_type_1106_);
v___x_1115_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_type_1106_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1167_; 
v_a_1116_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1118_ = v___x_1115_;
v_isShared_1119_ = v_isSharedCheck_1167_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1115_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1167_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
if (lean_obj_tag(v_a_1116_) == 1)
{
lean_object* v_val_1120_; lean_object* v___x_1121_; 
lean_del_object(v___x_1118_);
lean_dec_ref(v_type_1106_);
v_val_1120_ = lean_ctor_get(v_a_1116_, 0);
lean_inc(v_val_1120_);
lean_dec_ref_known(v_a_1116_, 1);
v___x_1121_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(v_e_1105_, v_val_1120_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
return v___x_1121_;
}
else
{
lean_dec(v_a_1116_);
if (v_report_1107_ == 0)
{
lean_object* v___x_1123_; 
lean_dec_ref(v_type_1106_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 0, v_e_1105_);
v___x_1123_ = v___x_1118_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_e_1105_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
lean_del_object(v___x_1118_);
v___x_1125_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1);
lean_inc_ref(v_e_1105_);
v___x_1126_ = l_Lean_indentExpr(v_e_1105_);
v___x_1127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1125_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
v___x_1128_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___closed__1, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___closed__1);
v___x_1129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1127_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
v___x_1130_ = l_Lean_indentExpr(v_type_1106_);
v___x_1131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1129_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
v___x_1132_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1108_);
if (lean_obj_tag(v___x_1132_) == 0)
{
lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1158_; 
v_a_1133_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1135_ = v___x_1132_;
v_isShared_1136_ = v_isSharedCheck_1158_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v___x_1132_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1158_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
uint8_t v_verbose_1137_; 
v_verbose_1137_ = lean_ctor_get_uint8(v_a_1133_, 0);
lean_dec(v_a_1133_);
if (v_verbose_1137_ == 0)
{
lean_object* v___x_1139_; 
lean_dec_ref_known(v___x_1131_, 2);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 0, v_e_1105_);
v___x_1139_ = v___x_1135_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_e_1105_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
else
{
lean_object* v___x_1141_; 
lean_del_object(v___x_1135_);
v___x_1141_ = l_Lean_Meta_Sym_reportIssue(v___x_1131_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1148_ == 0)
{
lean_object* v_unused_1149_; 
v_unused_1149_ = lean_ctor_get(v___x_1141_, 0);
lean_dec(v_unused_1149_);
v___x_1143_ = v___x_1141_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_dec(v___x_1141_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 0, v_e_1105_);
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_e_1105_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
lean_dec_ref(v_e_1105_);
v_a_1150_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1141_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1141_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
lean_dec_ref_known(v___x_1131_, 2);
lean_dec_ref(v_e_1105_);
v_a_1159_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v___x_1132_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1132_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1175_; 
lean_dec_ref(v_type_1106_);
lean_dec_ref(v_e_1105_);
v_a_1168_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1170_ = v___x_1115_;
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1115_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1173_; 
if (v_isShared_1171_ == 0)
{
v___x_1173_ = v___x_1170_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1168_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg___boxed(lean_object* v_e_1176_, lean_object* v_type_1177_, lean_object* v_report_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_){
_start:
{
uint8_t v_report_boxed_1186_; lean_object* v_res_1187_; 
v_report_boxed_1186_ = lean_unbox(v_report_1178_);
v_res_1187_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg(v_e_1176_, v_type_1177_, v_report_boxed_1186_, v_a_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_);
lean_dec(v_a_1184_);
lean_dec_ref(v_a_1183_);
lean_dec(v_a_1182_);
lean_dec_ref(v_a_1181_);
lean_dec(v_a_1180_);
lean_dec_ref(v_a_1179_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(lean_object* v_e_1188_, lean_object* v_type_1189_, uint8_t v_report_1190_, uint8_t v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg(v_e_1188_, v_type_1189_, v_report_1190_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_, v_a_1197_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___boxed(lean_object* v_e_1200_, lean_object* v_type_1201_, lean_object* v_report_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_){
_start:
{
uint8_t v_report_boxed_1211_; uint8_t v_a_boxed_1212_; lean_object* v_res_1213_; 
v_report_boxed_1211_ = lean_unbox(v_report_1202_);
v_a_boxed_1212_ = lean_unbox(v_a_1203_);
v_res_1213_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(v_e_1200_, v_type_1201_, v_report_boxed_1211_, v_a_boxed_1212_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_);
lean_dec(v_a_1209_);
lean_dec_ref(v_a_1208_);
lean_dec(v_a_1207_);
lean_dec_ref(v_a_1206_);
lean_dec(v_a_1205_);
lean_dec_ref(v_a_1204_);
return v_res_1213_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12___redArg(lean_object* v_a_1214_, lean_object* v_x_1215_){
_start:
{
if (lean_obj_tag(v_x_1215_) == 0)
{
uint8_t v___x_1216_; 
v___x_1216_ = 0;
return v___x_1216_;
}
else
{
lean_object* v_key_1217_; lean_object* v_tail_1218_; uint8_t v___x_1219_; 
v_key_1217_ = lean_ctor_get(v_x_1215_, 0);
v_tail_1218_ = lean_ctor_get(v_x_1215_, 2);
v___x_1219_ = lean_expr_eqv(v_key_1217_, v_a_1214_);
if (v___x_1219_ == 0)
{
v_x_1215_ = v_tail_1218_;
goto _start;
}
else
{
return v___x_1219_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12___redArg___boxed(lean_object* v_a_1221_, lean_object* v_x_1222_){
_start:
{
uint8_t v_res_1223_; lean_object* v_r_1224_; 
v_res_1223_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12___redArg(v_a_1221_, v_x_1222_);
lean_dec(v_x_1222_);
lean_dec_ref(v_a_1221_);
v_r_1224_ = lean_box(v_res_1223_);
return v_r_1224_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29_spec__34___redArg(lean_object* v_x_1225_, lean_object* v_x_1226_){
_start:
{
if (lean_obj_tag(v_x_1226_) == 0)
{
return v_x_1225_;
}
else
{
lean_object* v_key_1227_; lean_object* v_value_1228_; lean_object* v_tail_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1252_; 
v_key_1227_ = lean_ctor_get(v_x_1226_, 0);
v_value_1228_ = lean_ctor_get(v_x_1226_, 1);
v_tail_1229_ = lean_ctor_get(v_x_1226_, 2);
v_isSharedCheck_1252_ = !lean_is_exclusive(v_x_1226_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1231_ = v_x_1226_;
v_isShared_1232_ = v_isSharedCheck_1252_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_tail_1229_);
lean_inc(v_value_1228_);
lean_inc(v_key_1227_);
lean_dec(v_x_1226_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1252_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1233_; uint64_t v___x_1234_; uint64_t v___x_1235_; uint64_t v___x_1236_; uint64_t v_fold_1237_; uint64_t v___x_1238_; uint64_t v___x_1239_; uint64_t v___x_1240_; size_t v___x_1241_; size_t v___x_1242_; size_t v___x_1243_; size_t v___x_1244_; size_t v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1233_ = lean_array_get_size(v_x_1225_);
v___x_1234_ = l_Lean_Expr_hash(v_key_1227_);
v___x_1235_ = 32ULL;
v___x_1236_ = lean_uint64_shift_right(v___x_1234_, v___x_1235_);
v_fold_1237_ = lean_uint64_xor(v___x_1234_, v___x_1236_);
v___x_1238_ = 16ULL;
v___x_1239_ = lean_uint64_shift_right(v_fold_1237_, v___x_1238_);
v___x_1240_ = lean_uint64_xor(v_fold_1237_, v___x_1239_);
v___x_1241_ = lean_uint64_to_usize(v___x_1240_);
v___x_1242_ = lean_usize_of_nat(v___x_1233_);
v___x_1243_ = ((size_t)1ULL);
v___x_1244_ = lean_usize_sub(v___x_1242_, v___x_1243_);
v___x_1245_ = lean_usize_land(v___x_1241_, v___x_1244_);
v___x_1246_ = lean_array_uget_borrowed(v_x_1225_, v___x_1245_);
lean_inc(v___x_1246_);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 2, v___x_1246_);
v___x_1248_ = v___x_1231_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_key_1227_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v_value_1228_);
lean_ctor_set(v_reuseFailAlloc_1251_, 2, v___x_1246_);
v___x_1248_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_array_uset(v_x_1225_, v___x_1245_, v___x_1248_);
v_x_1225_ = v___x_1249_;
v_x_1226_ = v_tail_1229_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29___redArg(lean_object* v_i_1253_, lean_object* v_source_1254_, lean_object* v_target_1255_){
_start:
{
lean_object* v___x_1256_; uint8_t v___x_1257_; 
v___x_1256_ = lean_array_get_size(v_source_1254_);
v___x_1257_ = lean_nat_dec_lt(v_i_1253_, v___x_1256_);
if (v___x_1257_ == 0)
{
lean_dec_ref(v_source_1254_);
lean_dec(v_i_1253_);
return v_target_1255_;
}
else
{
lean_object* v_es_1258_; lean_object* v___x_1259_; lean_object* v_source_1260_; lean_object* v_target_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v_es_1258_ = lean_array_fget(v_source_1254_, v_i_1253_);
v___x_1259_ = lean_box(0);
v_source_1260_ = lean_array_fset(v_source_1254_, v_i_1253_, v___x_1259_);
v_target_1261_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29_spec__34___redArg(v_target_1255_, v_es_1258_);
v___x_1262_ = lean_unsigned_to_nat(1u);
v___x_1263_ = lean_nat_add(v_i_1253_, v___x_1262_);
lean_dec(v_i_1253_);
v_i_1253_ = v___x_1263_;
v_source_1254_ = v_source_1260_;
v_target_1255_ = v_target_1261_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___redArg(lean_object* v_data_1265_){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v_nbuckets_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1266_ = lean_array_get_size(v_data_1265_);
v___x_1267_ = lean_unsigned_to_nat(2u);
v_nbuckets_1268_ = lean_nat_mul(v___x_1266_, v___x_1267_);
v___x_1269_ = lean_unsigned_to_nat(0u);
v___x_1270_ = lean_box(0);
v___x_1271_ = lean_mk_array(v_nbuckets_1268_, v___x_1270_);
v___x_1272_ = lean_array_propagate_mark(v_data_1265_, v___x_1271_);
v___x_1273_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29___redArg(v___x_1269_, v_data_1265_, v___x_1272_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(lean_object* v_a_1274_, lean_object* v_b_1275_, lean_object* v_x_1276_){
_start:
{
if (lean_obj_tag(v_x_1276_) == 0)
{
lean_dec(v_b_1275_);
lean_dec_ref(v_a_1274_);
return v_x_1276_;
}
else
{
lean_object* v_key_1277_; lean_object* v_value_1278_; lean_object* v_tail_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1291_; 
v_key_1277_ = lean_ctor_get(v_x_1276_, 0);
v_value_1278_ = lean_ctor_get(v_x_1276_, 1);
v_tail_1279_ = lean_ctor_get(v_x_1276_, 2);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_x_1276_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1281_ = v_x_1276_;
v_isShared_1282_ = v_isSharedCheck_1291_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_tail_1279_);
lean_inc(v_value_1278_);
lean_inc(v_key_1277_);
lean_dec(v_x_1276_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1291_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
uint8_t v___x_1283_; 
v___x_1283_ = lean_expr_eqv(v_key_1277_, v_a_1274_);
if (v___x_1283_ == 0)
{
lean_object* v___x_1284_; lean_object* v___x_1286_; 
v___x_1284_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(v_a_1274_, v_b_1275_, v_tail_1279_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 2, v___x_1284_);
v___x_1286_ = v___x_1281_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_key_1277_);
lean_ctor_set(v_reuseFailAlloc_1287_, 1, v_value_1278_);
lean_ctor_set(v_reuseFailAlloc_1287_, 2, v___x_1284_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
else
{
lean_object* v___x_1289_; 
lean_dec(v_value_1278_);
lean_dec(v_key_1277_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 1, v_b_1275_);
lean_ctor_set(v___x_1281_, 0, v_a_1274_);
v___x_1289_ = v___x_1281_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_a_1274_);
lean_ctor_set(v_reuseFailAlloc_1290_, 1, v_b_1275_);
lean_ctor_set(v_reuseFailAlloc_1290_, 2, v_tail_1279_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(lean_object* v_m_1292_, lean_object* v_a_1293_, lean_object* v_b_1294_){
_start:
{
lean_object* v_size_1295_; lean_object* v_buckets_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1339_; 
v_size_1295_ = lean_ctor_get(v_m_1292_, 0);
v_buckets_1296_ = lean_ctor_get(v_m_1292_, 1);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_m_1292_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1298_ = v_m_1292_;
v_isShared_1299_ = v_isSharedCheck_1339_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_buckets_1296_);
lean_inc(v_size_1295_);
lean_dec(v_m_1292_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1339_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1300_; uint64_t v___x_1301_; uint64_t v___x_1302_; uint64_t v___x_1303_; uint64_t v_fold_1304_; uint64_t v___x_1305_; uint64_t v___x_1306_; uint64_t v___x_1307_; size_t v___x_1308_; size_t v___x_1309_; size_t v___x_1310_; size_t v___x_1311_; size_t v___x_1312_; lean_object* v_bkt_1313_; uint8_t v___x_1314_; 
v___x_1300_ = lean_array_get_size(v_buckets_1296_);
v___x_1301_ = l_Lean_Expr_hash(v_a_1293_);
v___x_1302_ = 32ULL;
v___x_1303_ = lean_uint64_shift_right(v___x_1301_, v___x_1302_);
v_fold_1304_ = lean_uint64_xor(v___x_1301_, v___x_1303_);
v___x_1305_ = 16ULL;
v___x_1306_ = lean_uint64_shift_right(v_fold_1304_, v___x_1305_);
v___x_1307_ = lean_uint64_xor(v_fold_1304_, v___x_1306_);
v___x_1308_ = lean_uint64_to_usize(v___x_1307_);
v___x_1309_ = lean_usize_of_nat(v___x_1300_);
v___x_1310_ = ((size_t)1ULL);
v___x_1311_ = lean_usize_sub(v___x_1309_, v___x_1310_);
v___x_1312_ = lean_usize_land(v___x_1308_, v___x_1311_);
v_bkt_1313_ = lean_array_uget_borrowed(v_buckets_1296_, v___x_1312_);
v___x_1314_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12___redArg(v_a_1293_, v_bkt_1313_);
if (v___x_1314_ == 0)
{
lean_object* v___x_1315_; lean_object* v_size_x27_1316_; lean_object* v___x_1317_; lean_object* v_buckets_x27_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; uint8_t v___x_1324_; 
v___x_1315_ = lean_unsigned_to_nat(1u);
v_size_x27_1316_ = lean_nat_add(v_size_1295_, v___x_1315_);
lean_dec(v_size_1295_);
lean_inc(v_bkt_1313_);
v___x_1317_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1317_, 0, v_a_1293_);
lean_ctor_set(v___x_1317_, 1, v_b_1294_);
lean_ctor_set(v___x_1317_, 2, v_bkt_1313_);
v_buckets_x27_1318_ = lean_array_uset(v_buckets_1296_, v___x_1312_, v___x_1317_);
v___x_1319_ = lean_unsigned_to_nat(4u);
v___x_1320_ = lean_nat_mul(v_size_x27_1316_, v___x_1319_);
v___x_1321_ = lean_unsigned_to_nat(3u);
v___x_1322_ = lean_nat_div(v___x_1320_, v___x_1321_);
lean_dec(v___x_1320_);
v___x_1323_ = lean_array_get_size(v_buckets_x27_1318_);
v___x_1324_ = lean_nat_dec_le(v___x_1322_, v___x_1323_);
lean_dec(v___x_1322_);
if (v___x_1324_ == 0)
{
lean_object* v_val_1325_; lean_object* v___x_1327_; 
v_val_1325_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___redArg(v_buckets_x27_1318_);
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 1, v_val_1325_);
lean_ctor_set(v___x_1298_, 0, v_size_x27_1316_);
v___x_1327_ = v___x_1298_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_size_x27_1316_);
lean_ctor_set(v_reuseFailAlloc_1328_, 1, v_val_1325_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
else
{
lean_object* v___x_1330_; 
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 1, v_buckets_x27_1318_);
lean_ctor_set(v___x_1298_, 0, v_size_x27_1316_);
v___x_1330_ = v___x_1298_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_size_x27_1316_);
lean_ctor_set(v_reuseFailAlloc_1331_, 1, v_buckets_x27_1318_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
else
{
lean_object* v___x_1332_; lean_object* v_buckets_x27_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1337_; 
lean_inc(v_bkt_1313_);
v___x_1332_ = lean_box(0);
v_buckets_x27_1333_ = lean_array_uset(v_buckets_1296_, v___x_1312_, v___x_1332_);
v___x_1334_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(v_a_1293_, v_b_1294_, v_bkt_1313_);
v___x_1335_ = lean_array_uset(v_buckets_x27_1333_, v___x_1312_, v___x_1334_);
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 1, v___x_1335_);
v___x_1337_ = v___x_1298_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_size_1295_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v___x_1335_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg___lam__0(lean_object* v_k_1340_, uint8_t v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v_b_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1350_ = lean_box(v___y_1341_);
lean_inc(v___y_1348_);
lean_inc_ref(v___y_1347_);
lean_inc(v___y_1346_);
lean_inc_ref(v___y_1345_);
lean_inc(v___y_1343_);
lean_inc_ref(v___y_1342_);
v___x_1351_ = lean_apply_9(v_k_1340_, v_b_1344_, v___x_1350_, v___y_1342_, v___y_1343_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, lean_box(0));
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg___lam__0___boxed(lean_object* v_k_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v_b_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_){
_start:
{
uint8_t v___y_61325__boxed_1362_; lean_object* v_res_1363_; 
v___y_61325__boxed_1362_ = lean_unbox(v___y_1353_);
v_res_1363_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg___lam__0(v_k_1352_, v___y_61325__boxed_1362_, v___y_1354_, v___y_1355_, v_b_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28___redArg(lean_object* v_name_1364_, uint8_t v_bi_1365_, lean_object* v_type_1366_, lean_object* v_k_1367_, uint8_t v_kind_1368_, uint8_t v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v___x_1377_; lean_object* v___f_1378_; lean_object* v___x_1379_; 
v___x_1377_ = lean_box(v___y_1369_);
lean_inc(v___y_1371_);
lean_inc_ref(v___y_1370_);
v___f_1378_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1378_, 0, v_k_1367_);
lean_closure_set(v___f_1378_, 1, v___x_1377_);
lean_closure_set(v___f_1378_, 2, v___y_1370_);
lean_closure_set(v___f_1378_, 3, v___y_1371_);
v___x_1379_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1364_, v_bi_1365_, v_type_1366_, v___f_1378_, v_kind_1368_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
if (lean_obj_tag(v___x_1379_) == 0)
{
return v___x_1379_;
}
else
{
lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1387_; 
v_a_1380_ = lean_ctor_get(v___x_1379_, 0);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1379_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1382_ = v___x_1379_;
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_dec(v___x_1379_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1385_; 
if (v_isShared_1383_ == 0)
{
v___x_1385_ = v___x_1382_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_a_1380_);
v___x_1385_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
return v___x_1385_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28___redArg___boxed(lean_object* v_name_1388_, lean_object* v_bi_1389_, lean_object* v_type_1390_, lean_object* v_k_1391_, lean_object* v_kind_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
uint8_t v_bi_boxed_1401_; uint8_t v_kind_boxed_1402_; uint8_t v___y_61353__boxed_1403_; lean_object* v_res_1404_; 
v_bi_boxed_1401_ = lean_unbox(v_bi_1389_);
v_kind_boxed_1402_ = lean_unbox(v_kind_1392_);
v___y_61353__boxed_1403_ = lean_unbox(v___y_1393_);
v_res_1404_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28___redArg(v_name_1388_, v_bi_boxed_1401_, v_type_1390_, v_k_1391_, v_kind_boxed_1402_, v___y_61353__boxed_1403_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(lean_object* v_declName_1405_, lean_object* v___y_1406_){
_start:
{
lean_object* v___x_1408_; lean_object* v_env_1409_; uint8_t v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1408_ = lean_st_ref_get(v___y_1406_);
v_env_1409_ = lean_ctor_get(v___x_1408_, 0);
lean_inc_ref(v_env_1409_);
lean_dec(v___x_1408_);
v___x_1410_ = l_Lean_Meta_isMatcherCore(v_env_1409_, v_declName_1405_);
v___x_1411_ = lean_box(v___x_1410_);
v___x_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1411_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg___boxed(lean_object* v_declName_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_){
_start:
{
lean_object* v_res_1416_; 
v_res_1416_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(v_declName_1413_, v___y_1414_);
lean_dec(v___y_1414_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__23(lean_object* v_msgData_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v___x_1423_; lean_object* v_env_1424_; lean_object* v___x_1425_; lean_object* v_toCold_1426_; lean_object* v_mctx_1427_; lean_object* v_lctx_1428_; lean_object* v_options_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1423_ = lean_st_ref_get(v___y_1421_);
v_env_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc_ref(v_env_1424_);
lean_dec(v___x_1423_);
v___x_1425_ = lean_st_ref_get(v___y_1419_);
v_toCold_1426_ = lean_ctor_get(v___y_1420_, 0);
v_mctx_1427_ = lean_ctor_get(v___x_1425_, 0);
lean_inc_ref(v_mctx_1427_);
lean_dec(v___x_1425_);
v_lctx_1428_ = lean_ctor_get(v___y_1418_, 2);
v_options_1429_ = lean_ctor_get(v_toCold_1426_, 2);
lean_inc_ref(v_options_1429_);
lean_inc_ref(v_lctx_1428_);
v___x_1430_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1430_, 0, v_env_1424_);
lean_ctor_set(v___x_1430_, 1, v_mctx_1427_);
lean_ctor_set(v___x_1430_, 2, v_lctx_1428_);
lean_ctor_set(v___x_1430_, 3, v_options_1429_);
v___x_1431_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
lean_ctor_set(v___x_1431_, 1, v_msgData_1417_);
v___x_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__23___boxed(lean_object* v_msgData_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__23(v_msgData_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
return v_res_1439_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_1440_; double v___x_1441_; 
v___x_1440_ = lean_unsigned_to_nat(0u);
v___x_1441_ = lean_float_of_nat(v___x_1440_);
return v___x_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(lean_object* v_cls_1445_, lean_object* v_msg_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_ref_1452_; lean_object* v___x_1453_; lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1498_; 
v_ref_1452_ = lean_ctor_get(v___y_1449_, 2);
v___x_1453_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__23(v_msg_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
v_a_1454_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1456_ = v___x_1453_;
v_isShared_1457_ = v_isSharedCheck_1498_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1453_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1498_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1458_; lean_object* v_traceState_1459_; lean_object* v_env_1460_; lean_object* v_nextMacroScope_1461_; lean_object* v_ngen_1462_; lean_object* v_auxDeclNGen_1463_; lean_object* v_cache_1464_; lean_object* v_messages_1465_; lean_object* v_infoState_1466_; lean_object* v_snapshotTasks_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1497_; 
v___x_1458_ = lean_st_ref_take(v___y_1450_);
v_traceState_1459_ = lean_ctor_get(v___x_1458_, 4);
v_env_1460_ = lean_ctor_get(v___x_1458_, 0);
v_nextMacroScope_1461_ = lean_ctor_get(v___x_1458_, 1);
v_ngen_1462_ = lean_ctor_get(v___x_1458_, 2);
v_auxDeclNGen_1463_ = lean_ctor_get(v___x_1458_, 3);
v_cache_1464_ = lean_ctor_get(v___x_1458_, 5);
v_messages_1465_ = lean_ctor_get(v___x_1458_, 6);
v_infoState_1466_ = lean_ctor_get(v___x_1458_, 7);
v_snapshotTasks_1467_ = lean_ctor_get(v___x_1458_, 8);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1458_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1469_ = v___x_1458_;
v_isShared_1470_ = v_isSharedCheck_1497_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_snapshotTasks_1467_);
lean_inc(v_infoState_1466_);
lean_inc(v_messages_1465_);
lean_inc(v_cache_1464_);
lean_inc(v_traceState_1459_);
lean_inc(v_auxDeclNGen_1463_);
lean_inc(v_ngen_1462_);
lean_inc(v_nextMacroScope_1461_);
lean_inc(v_env_1460_);
lean_dec(v___x_1458_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1497_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
uint64_t v_tid_1471_; lean_object* v_traces_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1496_; 
v_tid_1471_ = lean_ctor_get_uint64(v_traceState_1459_, sizeof(void*)*1);
v_traces_1472_ = lean_ctor_get(v_traceState_1459_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v_traceState_1459_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1474_ = v_traceState_1459_;
v_isShared_1475_ = v_isSharedCheck_1496_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_traces_1472_);
lean_dec(v_traceState_1459_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1496_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; double v___x_1478_; uint8_t v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1487_; 
v___x_1476_ = lean_box(0);
v___x_1477_ = lean_box(0);
v___x_1478_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0);
v___x_1479_ = 0;
v___x_1480_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1));
v___x_1481_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1481_, 0, v_cls_1445_);
lean_ctor_set(v___x_1481_, 1, v___x_1477_);
lean_ctor_set(v___x_1481_, 2, v___x_1480_);
lean_ctor_set_float(v___x_1481_, sizeof(void*)*3, v___x_1478_);
lean_ctor_set_float(v___x_1481_, sizeof(void*)*3 + 8, v___x_1478_);
lean_ctor_set_uint8(v___x_1481_, sizeof(void*)*3 + 16, v___x_1479_);
v___x_1482_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2));
v___x_1483_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1481_);
lean_ctor_set(v___x_1483_, 1, v_a_1454_);
lean_ctor_set(v___x_1483_, 2, v___x_1482_);
lean_inc(v_ref_1452_);
v___x_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1484_, 0, v_ref_1452_);
lean_ctor_set(v___x_1484_, 1, v___x_1483_);
v___x_1485_ = l_Lean_PersistentArray_push___redArg(v_traces_1472_, v___x_1484_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 0, v___x_1485_);
v___x_1487_ = v___x_1474_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v___x_1485_);
lean_ctor_set_uint64(v_reuseFailAlloc_1495_, sizeof(void*)*1, v_tid_1471_);
v___x_1487_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
lean_object* v___x_1489_; 
if (v_isShared_1470_ == 0)
{
lean_ctor_set(v___x_1469_, 4, v___x_1487_);
v___x_1489_ = v___x_1469_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_env_1460_);
lean_ctor_set(v_reuseFailAlloc_1494_, 1, v_nextMacroScope_1461_);
lean_ctor_set(v_reuseFailAlloc_1494_, 2, v_ngen_1462_);
lean_ctor_set(v_reuseFailAlloc_1494_, 3, v_auxDeclNGen_1463_);
lean_ctor_set(v_reuseFailAlloc_1494_, 4, v___x_1487_);
lean_ctor_set(v_reuseFailAlloc_1494_, 5, v_cache_1464_);
lean_ctor_set(v_reuseFailAlloc_1494_, 6, v_messages_1465_);
lean_ctor_set(v_reuseFailAlloc_1494_, 7, v_infoState_1466_);
lean_ctor_set(v_reuseFailAlloc_1494_, 8, v_snapshotTasks_1467_);
v___x_1489_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
lean_object* v___x_1490_; lean_object* v___x_1492_; 
v___x_1490_ = lean_st_ref_put(v___y_1450_, v___x_1489_);
if (v_isShared_1457_ == 0)
{
lean_ctor_set(v___x_1456_, 0, v___x_1476_);
v___x_1492_ = v___x_1456_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1476_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___boxed(lean_object* v_cls_1499_, lean_object* v_msg_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(v_cls_1499_, v_msg_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10___redArg(lean_object* v_a_1507_, lean_object* v_x_1508_){
_start:
{
if (lean_obj_tag(v_x_1508_) == 0)
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_box(0);
return v___x_1509_;
}
else
{
lean_object* v_key_1510_; lean_object* v_value_1511_; lean_object* v_tail_1512_; uint8_t v___x_1513_; 
v_key_1510_ = lean_ctor_get(v_x_1508_, 0);
v_value_1511_ = lean_ctor_get(v_x_1508_, 1);
v_tail_1512_ = lean_ctor_get(v_x_1508_, 2);
v___x_1513_ = lean_expr_eqv(v_key_1510_, v_a_1507_);
if (v___x_1513_ == 0)
{
v_x_1508_ = v_tail_1512_;
goto _start;
}
else
{
lean_object* v___x_1515_; 
lean_inc(v_value_1511_);
v___x_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1515_, 0, v_value_1511_);
return v___x_1515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10___redArg___boxed(lean_object* v_a_1516_, lean_object* v_x_1517_){
_start:
{
lean_object* v_res_1518_; 
v_res_1518_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10___redArg(v_a_1516_, v_x_1517_);
lean_dec(v_x_1517_);
lean_dec_ref(v_a_1516_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(lean_object* v_m_1519_, lean_object* v_a_1520_){
_start:
{
lean_object* v_buckets_1521_; lean_object* v___x_1522_; uint64_t v___x_1523_; uint64_t v___x_1524_; uint64_t v___x_1525_; uint64_t v_fold_1526_; uint64_t v___x_1527_; uint64_t v___x_1528_; uint64_t v___x_1529_; size_t v___x_1530_; size_t v___x_1531_; size_t v___x_1532_; size_t v___x_1533_; size_t v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v_buckets_1521_ = lean_ctor_get(v_m_1519_, 1);
v___x_1522_ = lean_array_get_size(v_buckets_1521_);
v___x_1523_ = l_Lean_Expr_hash(v_a_1520_);
v___x_1524_ = 32ULL;
v___x_1525_ = lean_uint64_shift_right(v___x_1523_, v___x_1524_);
v_fold_1526_ = lean_uint64_xor(v___x_1523_, v___x_1525_);
v___x_1527_ = 16ULL;
v___x_1528_ = lean_uint64_shift_right(v_fold_1526_, v___x_1527_);
v___x_1529_ = lean_uint64_xor(v_fold_1526_, v___x_1528_);
v___x_1530_ = lean_uint64_to_usize(v___x_1529_);
v___x_1531_ = lean_usize_of_nat(v___x_1522_);
v___x_1532_ = ((size_t)1ULL);
v___x_1533_ = lean_usize_sub(v___x_1531_, v___x_1532_);
v___x_1534_ = lean_usize_land(v___x_1530_, v___x_1533_);
v___x_1535_ = lean_array_uget_borrowed(v_buckets_1521_, v___x_1534_);
v___x_1536_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10___redArg(v_a_1520_, v___x_1535_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg___boxed(lean_object* v_m_1537_, lean_object* v_a_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_m_1537_, v_a_1538_);
lean_dec_ref(v_a_1538_);
lean_dec_ref(v_m_1537_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(lean_object* v_declName_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v___x_1543_; lean_object* v_env_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1543_ = lean_st_ref_get(v___y_1541_);
v_env_1544_ = lean_ctor_get(v___x_1543_, 0);
lean_inc_ref(v_env_1544_);
lean_dec(v___x_1543_);
v___x_1545_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_1544_, v_declName_1540_);
v___x_1546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1545_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg___boxed(lean_object* v_declName_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(v_declName_1547_, v___y_1548_);
lean_dec(v___y_1548_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg(lean_object* v_name_1551_, lean_object* v_type_1552_, lean_object* v_val_1553_, lean_object* v_k_1554_, uint8_t v_nondep_1555_, uint8_t v_kind_1556_, uint8_t v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v___x_1565_; lean_object* v___f_1566_; lean_object* v___x_1567_; 
v___x_1565_ = lean_box(v___y_1557_);
lean_inc(v___y_1559_);
lean_inc_ref(v___y_1558_);
v___f_1566_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1566_, 0, v_k_1554_);
lean_closure_set(v___f_1566_, 1, v___x_1565_);
lean_closure_set(v___f_1566_, 2, v___y_1558_);
lean_closure_set(v___f_1566_, 3, v___y_1559_);
v___x_1567_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1551_, v_type_1552_, v_val_1553_, v___f_1566_, v_nondep_1555_, v_kind_1556_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
if (lean_obj_tag(v___x_1567_) == 0)
{
return v___x_1567_;
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
v_a_1568_ = lean_ctor_get(v___x_1567_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1567_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1567_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg___boxed(lean_object* v_name_1576_, lean_object* v_type_1577_, lean_object* v_val_1578_, lean_object* v_k_1579_, lean_object* v_nondep_1580_, lean_object* v_kind_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
uint8_t v_nondep_boxed_1590_; uint8_t v_kind_boxed_1591_; uint8_t v___y_61600__boxed_1592_; lean_object* v_res_1593_; 
v_nondep_boxed_1590_ = lean_unbox(v_nondep_1580_);
v_kind_boxed_1591_ = lean_unbox(v_kind_1581_);
v___y_61600__boxed_1592_ = lean_unbox(v___y_1582_);
v_res_1593_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg(v_name_1576_, v_type_1577_, v_val_1578_, v_k_1579_, v_nondep_boxed_1590_, v_kind_boxed_1591_, v___y_61600__boxed_1592_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj_spec__4(lean_object* v_msg_1594_){
_start:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1595_ = l_Lean_instInhabitedExpr;
v___x_1596_ = lean_panic_fn_borrowed(v___x_1595_, v_msg_1594_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0___boxed(lean_object* v_fvars_1597_, lean_object* v_body_1598_, lean_object* v_x_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
uint8_t v___y_61771__boxed_1608_; lean_object* v_res_1609_; 
v___y_61771__boxed_1608_ = lean_unbox(v___y_1600_);
v_res_1609_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0(v_fvars_1597_, v_body_1598_, v_x_1599_, v___y_61771__boxed_1608_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0(lean_object* v_fvars_1612_, lean_object* v_body_1613_, lean_object* v_x_1614_, uint8_t v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1623_ = lean_array_push(v_fvars_1612_, v_x_1614_);
v___x_1624_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v___x_1623_, v_body_1613_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0___boxed(lean_object* v_fvars_1625_, lean_object* v_body_1626_, lean_object* v_x_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
uint8_t v___y_61782__boxed_1636_; lean_object* v_res_1637_; 
v___y_61782__boxed_1636_ = lean_unbox(v___y_1628_);
v_res_1637_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0(v_fvars_1625_, v_body_1626_, v_x_1627_, v___y_61782__boxed_1636_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(lean_object* v_fvars_1638_, lean_object* v_e_1639_, uint8_t v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_){
_start:
{
if (lean_obj_tag(v_e_1639_) == 6)
{
lean_object* v_binderName_1648_; lean_object* v_binderType_1649_; lean_object* v_body_1650_; uint8_t v_binderInfo_1651_; lean_object* v___f_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v_binderName_1648_ = lean_ctor_get(v_e_1639_, 0);
lean_inc(v_binderName_1648_);
v_binderType_1649_ = lean_ctor_get(v_e_1639_, 1);
lean_inc_ref(v_binderType_1649_);
v_body_1650_ = lean_ctor_get(v_e_1639_, 2);
lean_inc_ref(v_body_1650_);
v_binderInfo_1651_ = lean_ctor_get_uint8(v_e_1639_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1639_, 3);
lean_inc_ref(v_fvars_1638_);
v___f_1652_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1652_, 0, v_fvars_1638_);
lean_closure_set(v___f_1652_, 1, v_body_1650_);
v___x_1653_ = lean_expr_instantiate_rev(v_binderType_1649_, v_fvars_1638_);
lean_dec_ref(v_fvars_1638_);
lean_dec_ref(v_binderType_1649_);
v___x_1654_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_1653_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; uint8_t v___x_1656_; lean_object* v___x_1657_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = 0;
v___x_1657_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28___redArg(v_binderName_1648_, v_binderInfo_1651_, v_a_1655_, v___f_1652_, v___x_1656_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_);
return v___x_1657_;
}
else
{
lean_dec_ref(v___f_1652_);
lean_dec(v_binderName_1648_);
return v___x_1654_;
}
}
else
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = lean_expr_instantiate_rev(v_e_1639_, v_fvars_1638_);
lean_dec_ref(v_e_1639_);
v___x_1659_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_1658_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; uint8_t v___x_1661_; uint8_t v___x_1662_; uint8_t v___x_1663_; lean_object* v___x_1664_; 
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
lean_inc(v_a_1660_);
lean_dec_ref_known(v___x_1659_, 1);
v___x_1661_ = 0;
v___x_1662_ = 1;
v___x_1663_ = 1;
v___x_1664_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1638_, v_a_1660_, v___x_1661_, v___x_1662_, v___x_1661_, v___x_1662_, v___x_1663_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_);
return v___x_1664_;
}
else
{
lean_dec_ref(v_fvars_1638_);
return v___x_1659_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(lean_object* v_e_1665_, uint8_t v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_){
_start:
{
if (v_a_1666_ == 0)
{
lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1674_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
v___x_1675_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v___x_1674_, v_e_1665_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_);
return v___x_1675_;
}
else
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1676_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
v___x_1677_ = l_Lean_Meta_Sym_etaReduce(v_e_1665_);
lean_dec_ref(v_e_1665_);
v___x_1678_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v___x_1676_, v___x_1677_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_);
return v___x_1678_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0(lean_object* v_fvars_1679_, lean_object* v_body_1680_, lean_object* v_x_1681_, uint8_t v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = lean_array_push(v_fvars_1679_, v_x_1681_);
v___x_1691_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v___x_1690_, v_body_1680_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0___boxed(lean_object* v_fvars_1692_, lean_object* v_body_1693_, lean_object* v_x_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
uint8_t v___y_61793__boxed_1703_; lean_object* v_res_1704_; 
v___y_61793__boxed_1703_ = lean_unbox(v___y_1695_);
v_res_1704_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0(v_fvars_1692_, v_body_1693_, v_x_1694_, v___y_61793__boxed_1703_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v___y_1699_);
lean_dec_ref(v___y_1698_);
lean_dec(v___y_1697_);
lean_dec_ref(v___y_1696_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(lean_object* v_fvars_1705_, lean_object* v_e_1706_, uint8_t v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_){
_start:
{
if (lean_obj_tag(v_e_1706_) == 8)
{
lean_object* v_declName_1715_; lean_object* v_type_1716_; lean_object* v_value_1717_; lean_object* v_body_1718_; uint8_t v_nondep_1719_; lean_object* v___f_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v_declName_1715_ = lean_ctor_get(v_e_1706_, 0);
lean_inc(v_declName_1715_);
v_type_1716_ = lean_ctor_get(v_e_1706_, 1);
lean_inc_ref(v_type_1716_);
v_value_1717_ = lean_ctor_get(v_e_1706_, 2);
lean_inc_ref(v_value_1717_);
v_body_1718_ = lean_ctor_get(v_e_1706_, 3);
lean_inc_ref(v_body_1718_);
v_nondep_1719_ = lean_ctor_get_uint8(v_e_1706_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1706_, 4);
lean_inc_ref(v_fvars_1705_);
v___f_1720_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1720_, 0, v_fvars_1705_);
lean_closure_set(v___f_1720_, 1, v_body_1718_);
v___x_1721_ = lean_expr_instantiate_rev(v_type_1716_, v_fvars_1705_);
lean_dec_ref(v_type_1716_);
v___x_1722_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_1721_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v_a_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v_a_1723_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_a_1723_);
lean_dec_ref_known(v___x_1722_, 1);
v___x_1724_ = lean_expr_instantiate_rev(v_value_1717_, v_fvars_1705_);
lean_dec_ref(v_fvars_1705_);
lean_dec_ref(v_value_1717_);
v___x_1725_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_1724_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_);
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_object* v_a_1726_; uint8_t v___x_1727_; lean_object* v___x_1728_; 
v_a_1726_ = lean_ctor_get(v___x_1725_, 0);
lean_inc(v_a_1726_);
lean_dec_ref_known(v___x_1725_, 1);
v___x_1727_ = 0;
v___x_1728_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg(v_declName_1715_, v_a_1723_, v_a_1726_, v___f_1720_, v_nondep_1719_, v___x_1727_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_);
return v___x_1728_;
}
else
{
lean_dec(v_a_1723_);
lean_dec_ref(v___f_1720_);
lean_dec(v_declName_1715_);
return v___x_1725_;
}
}
else
{
lean_dec_ref(v___f_1720_);
lean_dec_ref(v_value_1717_);
lean_dec(v_declName_1715_);
lean_dec_ref(v_fvars_1705_);
return v___x_1722_;
}
}
else
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = lean_expr_instantiate_rev(v_e_1706_, v_fvars_1705_);
lean_dec_ref(v_e_1706_);
v___x_1730_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_1729_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1731_; uint8_t v___x_1732_; uint8_t v___x_1733_; uint8_t v___x_1734_; lean_object* v___x_1735_; 
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
lean_inc(v_a_1731_);
lean_dec_ref_known(v___x_1730_, 1);
v___x_1732_ = 1;
v___x_1733_ = 0;
v___x_1734_ = 1;
v___x_1735_ = l_Lean_Meta_mkLetFVars(v_fvars_1705_, v_a_1731_, v___x_1732_, v___x_1733_, v___x_1734_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_);
return v___x_1735_;
}
else
{
lean_dec_ref(v_fvars_1705_);
return v___x_1730_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(lean_object* v_e_1736_, uint8_t v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_){
_start:
{
if (v_a_1737_ == 0)
{
uint8_t v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = 1;
v___x_1746_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_1736_, v___x_1745_, v_a_1738_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_);
return v___x_1746_;
}
else
{
lean_object* v___x_1747_; 
v___x_1747_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_1736_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_);
return v___x_1747_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(lean_object* v_e_1748_, uint8_t v_report_1749_, uint8_t v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_){
_start:
{
lean_object* v___x_1758_; 
lean_inc(v_a_1756_);
lean_inc_ref(v_a_1755_);
lean_inc(v_a_1754_);
lean_inc_ref(v_a_1753_);
lean_inc_ref(v_e_1748_);
v___x_1758_ = lean_infer_type(v_e_1748_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_);
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_object* v_a_1759_; lean_object* v___x_1760_; 
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
lean_inc_n(v_a_1759_, 2);
lean_dec_ref_known(v___x_1758_, 1);
v___x_1760_ = l_Lean_Meta_isProp(v_a_1759_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1773_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1763_ = v___x_1760_;
v_isShared_1764_ = v_isSharedCheck_1773_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v___x_1760_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1773_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
if (v_a_1750_ == 0)
{
uint8_t v___x_1769_; 
v___x_1769_ = lean_unbox(v_a_1761_);
lean_dec(v_a_1761_);
if (v___x_1769_ == 0)
{
lean_del_object(v___x_1763_);
goto v___jp_1765_;
}
else
{
lean_object* v___x_1771_; 
lean_dec(v_a_1759_);
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 0, v_e_1748_);
v___x_1771_ = v___x_1763_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_e_1748_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
}
else
{
lean_del_object(v___x_1763_);
lean_dec(v_a_1761_);
goto v___jp_1765_;
}
v___jp_1765_:
{
lean_object* v___x_1766_; 
v___x_1766_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(v_a_1759_, v_a_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; lean_object* v___x_1768_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_a_1767_);
lean_dec_ref_known(v___x_1766_, 1);
v___x_1768_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg(v_e_1748_, v_a_1767_, v_report_1749_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_);
return v___x_1768_;
}
else
{
lean_dec_ref(v_e_1748_);
return v___x_1766_;
}
}
}
}
else
{
lean_object* v_a_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1781_; 
lean_dec(v_a_1759_);
lean_dec_ref(v_e_1748_);
v_a_1774_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1776_ = v___x_1760_;
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_a_1774_);
lean_dec(v___x_1760_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v___x_1779_; 
if (v_isShared_1777_ == 0)
{
v___x_1779_ = v___x_1776_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v_a_1774_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
}
}
else
{
lean_dec_ref(v_e_1748_);
return v___x_1758_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(lean_object* v_e_1782_, uint8_t v_report_1783_, uint8_t v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_){
_start:
{
if (v_a_1784_ == 0)
{
lean_object* v___x_1792_; lean_object* v_canon_1793_; lean_object* v_cache_1794_; lean_object* v___x_1795_; 
v___x_1792_ = lean_st_ref_get(v_a_1786_);
v_canon_1793_ = lean_ctor_get(v___x_1792_, 9);
lean_inc_ref(v_canon_1793_);
lean_dec(v___x_1792_);
v_cache_1794_ = lean_ctor_get(v_canon_1793_, 0);
lean_inc_ref(v_cache_1794_);
lean_dec_ref(v_canon_1793_);
v___x_1795_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_1794_, v_e_1782_);
lean_dec_ref(v_cache_1794_);
if (lean_obj_tag(v___x_1795_) == 1)
{
lean_object* v_val_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1803_; 
lean_dec_ref(v_e_1782_);
v_val_1796_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1798_ = v___x_1795_;
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_val_1796_);
lean_dec(v___x_1795_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set_tag(v___x_1798_, 0);
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_val_1796_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
else
{
lean_object* v___x_1804_; 
lean_dec(v___x_1795_);
lean_inc_ref(v_e_1782_);
v___x_1804_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(v_e_1782_, v_report_1783_, v_a_1784_, v_a_1785_, v_a_1786_, v_a_1787_, v_a_1788_, v_a_1789_, v_a_1790_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1843_; 
v_a_1805_ = lean_ctor_get(v___x_1804_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1807_ = v___x_1804_;
v_isShared_1808_ = v_isSharedCheck_1843_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___x_1804_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1843_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1809_; lean_object* v_canon_1810_; lean_object* v_share_1811_; lean_object* v_maxFVar_1812_; lean_object* v_proofInstInfo_1813_; lean_object* v_inferType_1814_; lean_object* v_getLevel_1815_; lean_object* v_congrInfo_1816_; lean_object* v_defEqI_1817_; lean_object* v_extensions_1818_; lean_object* v_issues_1819_; lean_object* v_instanceOverrides_1820_; uint8_t v_debug_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1842_; 
v___x_1809_ = lean_st_ref_take(v_a_1786_);
v_canon_1810_ = lean_ctor_get(v___x_1809_, 9);
v_share_1811_ = lean_ctor_get(v___x_1809_, 0);
v_maxFVar_1812_ = lean_ctor_get(v___x_1809_, 1);
v_proofInstInfo_1813_ = lean_ctor_get(v___x_1809_, 2);
v_inferType_1814_ = lean_ctor_get(v___x_1809_, 3);
v_getLevel_1815_ = lean_ctor_get(v___x_1809_, 4);
v_congrInfo_1816_ = lean_ctor_get(v___x_1809_, 5);
v_defEqI_1817_ = lean_ctor_get(v___x_1809_, 6);
v_extensions_1818_ = lean_ctor_get(v___x_1809_, 7);
v_issues_1819_ = lean_ctor_get(v___x_1809_, 8);
v_instanceOverrides_1820_ = lean_ctor_get(v___x_1809_, 10);
v_debug_1821_ = lean_ctor_get_uint8(v___x_1809_, sizeof(void*)*11);
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1823_ = v___x_1809_;
v_isShared_1824_ = v_isSharedCheck_1842_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_instanceOverrides_1820_);
lean_inc(v_canon_1810_);
lean_inc(v_issues_1819_);
lean_inc(v_extensions_1818_);
lean_inc(v_defEqI_1817_);
lean_inc(v_congrInfo_1816_);
lean_inc(v_getLevel_1815_);
lean_inc(v_inferType_1814_);
lean_inc(v_proofInstInfo_1813_);
lean_inc(v_maxFVar_1812_);
lean_inc(v_share_1811_);
lean_dec(v___x_1809_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1842_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v_cache_1825_; lean_object* v_cacheInType_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1841_; 
v_cache_1825_ = lean_ctor_get(v_canon_1810_, 0);
v_cacheInType_1826_ = lean_ctor_get(v_canon_1810_, 1);
v_isSharedCheck_1841_ = !lean_is_exclusive(v_canon_1810_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1828_ = v_canon_1810_;
v_isShared_1829_ = v_isSharedCheck_1841_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_cacheInType_1826_);
lean_inc(v_cache_1825_);
lean_dec(v_canon_1810_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1841_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1830_; lean_object* v___x_1832_; 
lean_inc(v_a_1805_);
v___x_1830_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_1825_, v_e_1782_, v_a_1805_);
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 0, v___x_1830_);
v___x_1832_ = v___x_1828_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v___x_1830_);
lean_ctor_set(v_reuseFailAlloc_1840_, 1, v_cacheInType_1826_);
v___x_1832_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
lean_object* v___x_1834_; 
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 9, v___x_1832_);
v___x_1834_ = v___x_1823_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_share_1811_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v_maxFVar_1812_);
lean_ctor_set(v_reuseFailAlloc_1839_, 2, v_proofInstInfo_1813_);
lean_ctor_set(v_reuseFailAlloc_1839_, 3, v_inferType_1814_);
lean_ctor_set(v_reuseFailAlloc_1839_, 4, v_getLevel_1815_);
lean_ctor_set(v_reuseFailAlloc_1839_, 5, v_congrInfo_1816_);
lean_ctor_set(v_reuseFailAlloc_1839_, 6, v_defEqI_1817_);
lean_ctor_set(v_reuseFailAlloc_1839_, 7, v_extensions_1818_);
lean_ctor_set(v_reuseFailAlloc_1839_, 8, v_issues_1819_);
lean_ctor_set(v_reuseFailAlloc_1839_, 9, v___x_1832_);
lean_ctor_set(v_reuseFailAlloc_1839_, 10, v_instanceOverrides_1820_);
lean_ctor_set_uint8(v_reuseFailAlloc_1839_, sizeof(void*)*11, v_debug_1821_);
v___x_1834_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
lean_object* v___x_1835_; lean_object* v___x_1837_; 
v___x_1835_ = lean_st_ref_put(v_a_1786_, v___x_1834_);
if (v_isShared_1808_ == 0)
{
v___x_1837_ = v___x_1807_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1805_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_1782_);
return v___x_1804_;
}
}
}
else
{
lean_object* v___x_1844_; lean_object* v_canon_1845_; lean_object* v_cacheInType_1846_; lean_object* v___x_1847_; 
v___x_1844_ = lean_st_ref_get(v_a_1786_);
v_canon_1845_ = lean_ctor_get(v___x_1844_, 9);
lean_inc_ref(v_canon_1845_);
lean_dec(v___x_1844_);
v_cacheInType_1846_ = lean_ctor_get(v_canon_1845_, 1);
lean_inc_ref(v_cacheInType_1846_);
lean_dec_ref(v_canon_1845_);
v___x_1847_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_1846_, v_e_1782_);
lean_dec_ref(v_cacheInType_1846_);
if (lean_obj_tag(v___x_1847_) == 1)
{
lean_object* v_val_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1855_; 
lean_dec_ref(v_e_1782_);
v_val_1848_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1850_ = v___x_1847_;
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_val_1848_);
lean_dec(v___x_1847_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
lean_ctor_set_tag(v___x_1850_, 0);
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_val_1848_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
else
{
lean_object* v___x_1856_; 
lean_dec(v___x_1847_);
lean_inc_ref(v_e_1782_);
v___x_1856_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(v_e_1782_, v_report_1783_, v_a_1784_, v_a_1785_, v_a_1786_, v_a_1787_, v_a_1788_, v_a_1789_, v_a_1790_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1895_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1859_ = v___x_1856_;
v_isShared_1860_ = v_isSharedCheck_1895_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1856_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1895_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1861_; lean_object* v_canon_1862_; lean_object* v_share_1863_; lean_object* v_maxFVar_1864_; lean_object* v_proofInstInfo_1865_; lean_object* v_inferType_1866_; lean_object* v_getLevel_1867_; lean_object* v_congrInfo_1868_; lean_object* v_defEqI_1869_; lean_object* v_extensions_1870_; lean_object* v_issues_1871_; lean_object* v_instanceOverrides_1872_; uint8_t v_debug_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1894_; 
v___x_1861_ = lean_st_ref_take(v_a_1786_);
v_canon_1862_ = lean_ctor_get(v___x_1861_, 9);
v_share_1863_ = lean_ctor_get(v___x_1861_, 0);
v_maxFVar_1864_ = lean_ctor_get(v___x_1861_, 1);
v_proofInstInfo_1865_ = lean_ctor_get(v___x_1861_, 2);
v_inferType_1866_ = lean_ctor_get(v___x_1861_, 3);
v_getLevel_1867_ = lean_ctor_get(v___x_1861_, 4);
v_congrInfo_1868_ = lean_ctor_get(v___x_1861_, 5);
v_defEqI_1869_ = lean_ctor_get(v___x_1861_, 6);
v_extensions_1870_ = lean_ctor_get(v___x_1861_, 7);
v_issues_1871_ = lean_ctor_get(v___x_1861_, 8);
v_instanceOverrides_1872_ = lean_ctor_get(v___x_1861_, 10);
v_debug_1873_ = lean_ctor_get_uint8(v___x_1861_, sizeof(void*)*11);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1861_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1875_ = v___x_1861_;
v_isShared_1876_ = v_isSharedCheck_1894_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_instanceOverrides_1872_);
lean_inc(v_canon_1862_);
lean_inc(v_issues_1871_);
lean_inc(v_extensions_1870_);
lean_inc(v_defEqI_1869_);
lean_inc(v_congrInfo_1868_);
lean_inc(v_getLevel_1867_);
lean_inc(v_inferType_1866_);
lean_inc(v_proofInstInfo_1865_);
lean_inc(v_maxFVar_1864_);
lean_inc(v_share_1863_);
lean_dec(v___x_1861_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1894_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v_cache_1877_; lean_object* v_cacheInType_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1893_; 
v_cache_1877_ = lean_ctor_get(v_canon_1862_, 0);
v_cacheInType_1878_ = lean_ctor_get(v_canon_1862_, 1);
v_isSharedCheck_1893_ = !lean_is_exclusive(v_canon_1862_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1880_ = v_canon_1862_;
v_isShared_1881_ = v_isSharedCheck_1893_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_cacheInType_1878_);
lean_inc(v_cache_1877_);
lean_dec(v_canon_1862_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1893_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1882_; lean_object* v___x_1884_; 
lean_inc(v_a_1857_);
v___x_1882_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_1878_, v_e_1782_, v_a_1857_);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 1, v___x_1882_);
v___x_1884_ = v___x_1880_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_cache_1877_);
lean_ctor_set(v_reuseFailAlloc_1892_, 1, v___x_1882_);
v___x_1884_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
lean_object* v___x_1886_; 
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 9, v___x_1884_);
v___x_1886_ = v___x_1875_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_share_1863_);
lean_ctor_set(v_reuseFailAlloc_1891_, 1, v_maxFVar_1864_);
lean_ctor_set(v_reuseFailAlloc_1891_, 2, v_proofInstInfo_1865_);
lean_ctor_set(v_reuseFailAlloc_1891_, 3, v_inferType_1866_);
lean_ctor_set(v_reuseFailAlloc_1891_, 4, v_getLevel_1867_);
lean_ctor_set(v_reuseFailAlloc_1891_, 5, v_congrInfo_1868_);
lean_ctor_set(v_reuseFailAlloc_1891_, 6, v_defEqI_1869_);
lean_ctor_set(v_reuseFailAlloc_1891_, 7, v_extensions_1870_);
lean_ctor_set(v_reuseFailAlloc_1891_, 8, v_issues_1871_);
lean_ctor_set(v_reuseFailAlloc_1891_, 9, v___x_1884_);
lean_ctor_set(v_reuseFailAlloc_1891_, 10, v_instanceOverrides_1872_);
lean_ctor_set_uint8(v_reuseFailAlloc_1891_, sizeof(void*)*11, v_debug_1873_);
v___x_1886_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
lean_object* v___x_1887_; lean_object* v___x_1889_; 
v___x_1887_ = lean_st_ref_put(v_a_1786_, v___x_1886_);
if (v_isShared_1860_ == 0)
{
v___x_1889_ = v___x_1859_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1857_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_1782_);
return v___x_1856_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2(void){
_start:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1910_ = lean_box(0);
v___x_1911_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1));
v___x_1912_ = l_Lean_mkConst(v___x_1911_, v___x_1910_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(lean_object* v_g_1913_, lean_object* v_prop_1914_, lean_object* v_inst_1915_, lean_object* v_e_1916_, uint8_t v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_){
_start:
{
lean_object* v___x_1925_; 
lean_inc_ref(v_prop_1914_);
v___x_1925_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_1914_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_, v_a_1923_);
if (lean_obj_tag(v___x_1925_) == 0)
{
lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1968_; 
v_a_1926_ = lean_ctor_get(v___x_1925_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1925_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1928_ = v___x_1925_;
v_isShared_1929_ = v_isSharedCheck_1968_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_dec(v___x_1925_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1968_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___y_1931_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2);
lean_inc(v_a_1926_);
v___x_1937_ = l_Lean_Expr_app___override(v___x_1936_, v_a_1926_);
if (v_a_1917_ == 0)
{
lean_object* v___x_1938_; 
v___x_1938_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_1937_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_, v_a_1923_);
if (lean_obj_tag(v___x_1938_) == 0)
{
lean_object* v_a_1939_; lean_object* v___y_1941_; 
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref_known(v___x_1938_, 1);
if (lean_obj_tag(v_a_1939_) == 0)
{
lean_inc_ref(v_inst_1915_);
v___y_1941_ = v_inst_1915_;
goto v___jp_1940_;
}
else
{
lean_object* v_val_1957_; 
v_val_1957_ = lean_ctor_get(v_a_1939_, 0);
lean_inc(v_val_1957_);
lean_dec_ref_known(v_a_1939_, 1);
v___y_1941_ = v_val_1957_;
goto v___jp_1940_;
}
v___jp_1940_:
{
lean_object* v___x_1942_; 
lean_inc_ref(v_inst_1915_);
v___x_1942_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(v_inst_1915_, v___y_1941_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_, v_a_1923_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1956_; 
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1945_ = v___x_1942_;
v_isShared_1946_ = v_isSharedCheck_1956_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1942_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1956_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
size_t v___x_1947_; size_t v___x_1948_; uint8_t v___x_1949_; 
v___x_1947_ = lean_ptr_addr(v_prop_1914_);
lean_dec_ref(v_prop_1914_);
v___x_1948_ = lean_ptr_addr(v_a_1926_);
v___x_1949_ = lean_usize_dec_eq(v___x_1947_, v___x_1948_);
if (v___x_1949_ == 0)
{
lean_del_object(v___x_1945_);
lean_dec_ref(v_e_1916_);
lean_dec_ref(v_inst_1915_);
v___y_1931_ = v_a_1943_;
goto v___jp_1930_;
}
else
{
size_t v___x_1950_; size_t v___x_1951_; uint8_t v___x_1952_; 
v___x_1950_ = lean_ptr_addr(v_inst_1915_);
lean_dec_ref(v_inst_1915_);
v___x_1951_ = lean_ptr_addr(v_a_1943_);
v___x_1952_ = lean_usize_dec_eq(v___x_1950_, v___x_1951_);
if (v___x_1952_ == 0)
{
lean_del_object(v___x_1945_);
lean_dec_ref(v_e_1916_);
v___y_1931_ = v_a_1943_;
goto v___jp_1930_;
}
else
{
lean_object* v___x_1954_; 
lean_dec(v_a_1943_);
lean_del_object(v___x_1928_);
lean_dec(v_a_1926_);
lean_dec_ref(v_g_1913_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 0, v_e_1916_);
v___x_1954_ = v___x_1945_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v_e_1916_);
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
else
{
lean_del_object(v___x_1928_);
lean_dec(v_a_1926_);
lean_dec_ref(v_e_1916_);
lean_dec_ref(v_inst_1915_);
lean_dec_ref(v_prop_1914_);
lean_dec_ref(v_g_1913_);
return v___x_1942_;
}
}
}
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
lean_del_object(v___x_1928_);
lean_dec(v_a_1926_);
lean_dec_ref(v_e_1916_);
lean_dec_ref(v_inst_1915_);
lean_dec_ref(v_prop_1914_);
lean_dec_ref(v_g_1913_);
v_a_1958_ = lean_ctor_get(v___x_1938_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1938_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1938_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1938_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
else
{
uint8_t v___x_1966_; lean_object* v___x_1967_; 
lean_del_object(v___x_1928_);
lean_dec(v_a_1926_);
lean_dec_ref(v_e_1916_);
lean_dec_ref(v_prop_1914_);
lean_dec_ref(v_g_1913_);
v___x_1966_ = 0;
v___x_1967_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg(v_inst_1915_, v___x_1937_, v___x_1966_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_, v_a_1923_);
return v___x_1967_;
}
v___jp_1930_:
{
lean_object* v___x_1932_; lean_object* v___x_1934_; 
v___x_1932_ = l_Lean_mkAppB(v_g_1913_, v_a_1926_, v___y_1931_);
if (v_isShared_1929_ == 0)
{
lean_ctor_set(v___x_1928_, 0, v___x_1932_);
v___x_1934_ = v___x_1928_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1932_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
else
{
lean_dec_ref(v_e_1916_);
lean_dec_ref(v_inst_1915_);
lean_dec_ref(v_prop_1914_);
lean_dec_ref(v_g_1913_);
return v___x_1925_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(lean_object* v_g_1969_, lean_object* v_prop_1970_, lean_object* v_h_1971_, lean_object* v_e_1972_, uint8_t v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_){
_start:
{
if (v_a_1973_ == 0)
{
lean_object* v___x_1981_; lean_object* v_canon_1982_; lean_object* v_cache_1983_; lean_object* v___x_1984_; 
v___x_1981_ = lean_st_ref_get(v_a_1975_);
v_canon_1982_ = lean_ctor_get(v___x_1981_, 9);
lean_inc_ref(v_canon_1982_);
lean_dec(v___x_1981_);
v_cache_1983_ = lean_ctor_get(v_canon_1982_, 0);
lean_inc_ref(v_cache_1983_);
lean_dec_ref(v_canon_1982_);
v___x_1984_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_1983_, v_e_1972_);
lean_dec_ref(v_cache_1983_);
if (lean_obj_tag(v___x_1984_) == 1)
{
lean_object* v_val_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
lean_dec_ref(v_e_1972_);
lean_dec_ref(v_h_1971_);
lean_dec_ref(v_prop_1970_);
lean_dec_ref(v_g_1969_);
v_val_1985_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1987_ = v___x_1984_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_val_1985_);
lean_dec(v___x_1984_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
lean_ctor_set_tag(v___x_1987_, 0);
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_val_1985_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
else
{
lean_object* v___x_1993_; 
lean_dec(v___x_1984_);
lean_inc_ref(v_e_1972_);
v___x_1993_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_g_1969_, v_prop_1970_, v_h_1971_, v_e_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2032_; 
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_1996_ = v___x_1993_;
v_isShared_1997_ = v_isSharedCheck_2032_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1993_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2032_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1998_; lean_object* v_canon_1999_; lean_object* v_share_2000_; lean_object* v_maxFVar_2001_; lean_object* v_proofInstInfo_2002_; lean_object* v_inferType_2003_; lean_object* v_getLevel_2004_; lean_object* v_congrInfo_2005_; lean_object* v_defEqI_2006_; lean_object* v_extensions_2007_; lean_object* v_issues_2008_; lean_object* v_instanceOverrides_2009_; uint8_t v_debug_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2031_; 
v___x_1998_ = lean_st_ref_take(v_a_1975_);
v_canon_1999_ = lean_ctor_get(v___x_1998_, 9);
v_share_2000_ = lean_ctor_get(v___x_1998_, 0);
v_maxFVar_2001_ = lean_ctor_get(v___x_1998_, 1);
v_proofInstInfo_2002_ = lean_ctor_get(v___x_1998_, 2);
v_inferType_2003_ = lean_ctor_get(v___x_1998_, 3);
v_getLevel_2004_ = lean_ctor_get(v___x_1998_, 4);
v_congrInfo_2005_ = lean_ctor_get(v___x_1998_, 5);
v_defEqI_2006_ = lean_ctor_get(v___x_1998_, 6);
v_extensions_2007_ = lean_ctor_get(v___x_1998_, 7);
v_issues_2008_ = lean_ctor_get(v___x_1998_, 8);
v_instanceOverrides_2009_ = lean_ctor_get(v___x_1998_, 10);
v_debug_2010_ = lean_ctor_get_uint8(v___x_1998_, sizeof(void*)*11);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2012_ = v___x_1998_;
v_isShared_2013_ = v_isSharedCheck_2031_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_instanceOverrides_2009_);
lean_inc(v_canon_1999_);
lean_inc(v_issues_2008_);
lean_inc(v_extensions_2007_);
lean_inc(v_defEqI_2006_);
lean_inc(v_congrInfo_2005_);
lean_inc(v_getLevel_2004_);
lean_inc(v_inferType_2003_);
lean_inc(v_proofInstInfo_2002_);
lean_inc(v_maxFVar_2001_);
lean_inc(v_share_2000_);
lean_dec(v___x_1998_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2031_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v_cache_2014_; lean_object* v_cacheInType_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2030_; 
v_cache_2014_ = lean_ctor_get(v_canon_1999_, 0);
v_cacheInType_2015_ = lean_ctor_get(v_canon_1999_, 1);
v_isSharedCheck_2030_ = !lean_is_exclusive(v_canon_1999_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2017_ = v_canon_1999_;
v_isShared_2018_ = v_isSharedCheck_2030_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_cacheInType_2015_);
lean_inc(v_cache_2014_);
lean_dec(v_canon_1999_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2030_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2019_; lean_object* v___x_2021_; 
lean_inc(v_a_1994_);
v___x_2019_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_2014_, v_e_1972_, v_a_1994_);
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 0, v___x_2019_);
v___x_2021_ = v___x_2017_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2019_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v_cacheInType_2015_);
v___x_2021_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
lean_object* v___x_2023_; 
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 9, v___x_2021_);
v___x_2023_ = v___x_2012_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_share_2000_);
lean_ctor_set(v_reuseFailAlloc_2028_, 1, v_maxFVar_2001_);
lean_ctor_set(v_reuseFailAlloc_2028_, 2, v_proofInstInfo_2002_);
lean_ctor_set(v_reuseFailAlloc_2028_, 3, v_inferType_2003_);
lean_ctor_set(v_reuseFailAlloc_2028_, 4, v_getLevel_2004_);
lean_ctor_set(v_reuseFailAlloc_2028_, 5, v_congrInfo_2005_);
lean_ctor_set(v_reuseFailAlloc_2028_, 6, v_defEqI_2006_);
lean_ctor_set(v_reuseFailAlloc_2028_, 7, v_extensions_2007_);
lean_ctor_set(v_reuseFailAlloc_2028_, 8, v_issues_2008_);
lean_ctor_set(v_reuseFailAlloc_2028_, 9, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2028_, 10, v_instanceOverrides_2009_);
lean_ctor_set_uint8(v_reuseFailAlloc_2028_, sizeof(void*)*11, v_debug_2010_);
v___x_2023_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
lean_object* v___x_2024_; lean_object* v___x_2026_; 
v___x_2024_ = lean_st_ref_put(v_a_1975_, v___x_2023_);
if (v_isShared_1997_ == 0)
{
v___x_2026_ = v___x_1996_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_1994_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_1972_);
return v___x_1993_;
}
}
}
else
{
lean_object* v___x_2033_; lean_object* v_canon_2034_; lean_object* v_cacheInType_2035_; lean_object* v___x_2036_; 
v___x_2033_ = lean_st_ref_get(v_a_1975_);
v_canon_2034_ = lean_ctor_get(v___x_2033_, 9);
lean_inc_ref(v_canon_2034_);
lean_dec(v___x_2033_);
v_cacheInType_2035_ = lean_ctor_get(v_canon_2034_, 1);
lean_inc_ref(v_cacheInType_2035_);
lean_dec_ref(v_canon_2034_);
v___x_2036_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_2035_, v_e_1972_);
lean_dec_ref(v_cacheInType_2035_);
if (lean_obj_tag(v___x_2036_) == 1)
{
lean_object* v_val_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2044_; 
lean_dec_ref(v_e_1972_);
lean_dec_ref(v_h_1971_);
lean_dec_ref(v_prop_1970_);
lean_dec_ref(v_g_1969_);
v_val_2037_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2044_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2044_ == 0)
{
v___x_2039_ = v___x_2036_;
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_val_2037_);
lean_dec(v___x_2036_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2042_; 
if (v_isShared_2040_ == 0)
{
lean_ctor_set_tag(v___x_2039_, 0);
v___x_2042_ = v___x_2039_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v_val_2037_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
}
else
{
lean_object* v___x_2045_; 
lean_dec(v___x_2036_);
lean_inc_ref(v_e_1972_);
v___x_2045_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_g_1969_, v_prop_1970_, v_h_1971_, v_e_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_);
if (lean_obj_tag(v___x_2045_) == 0)
{
lean_object* v_a_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2084_; 
v_a_2046_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2048_ = v___x_2045_;
v_isShared_2049_ = v_isSharedCheck_2084_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_a_2046_);
lean_dec(v___x_2045_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2084_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2050_; lean_object* v_canon_2051_; lean_object* v_share_2052_; lean_object* v_maxFVar_2053_; lean_object* v_proofInstInfo_2054_; lean_object* v_inferType_2055_; lean_object* v_getLevel_2056_; lean_object* v_congrInfo_2057_; lean_object* v_defEqI_2058_; lean_object* v_extensions_2059_; lean_object* v_issues_2060_; lean_object* v_instanceOverrides_2061_; uint8_t v_debug_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2083_; 
v___x_2050_ = lean_st_ref_take(v_a_1975_);
v_canon_2051_ = lean_ctor_get(v___x_2050_, 9);
v_share_2052_ = lean_ctor_get(v___x_2050_, 0);
v_maxFVar_2053_ = lean_ctor_get(v___x_2050_, 1);
v_proofInstInfo_2054_ = lean_ctor_get(v___x_2050_, 2);
v_inferType_2055_ = lean_ctor_get(v___x_2050_, 3);
v_getLevel_2056_ = lean_ctor_get(v___x_2050_, 4);
v_congrInfo_2057_ = lean_ctor_get(v___x_2050_, 5);
v_defEqI_2058_ = lean_ctor_get(v___x_2050_, 6);
v_extensions_2059_ = lean_ctor_get(v___x_2050_, 7);
v_issues_2060_ = lean_ctor_get(v___x_2050_, 8);
v_instanceOverrides_2061_ = lean_ctor_get(v___x_2050_, 10);
v_debug_2062_ = lean_ctor_get_uint8(v___x_2050_, sizeof(void*)*11);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2064_ = v___x_2050_;
v_isShared_2065_ = v_isSharedCheck_2083_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_instanceOverrides_2061_);
lean_inc(v_canon_2051_);
lean_inc(v_issues_2060_);
lean_inc(v_extensions_2059_);
lean_inc(v_defEqI_2058_);
lean_inc(v_congrInfo_2057_);
lean_inc(v_getLevel_2056_);
lean_inc(v_inferType_2055_);
lean_inc(v_proofInstInfo_2054_);
lean_inc(v_maxFVar_2053_);
lean_inc(v_share_2052_);
lean_dec(v___x_2050_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2083_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v_cache_2066_; lean_object* v_cacheInType_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2082_; 
v_cache_2066_ = lean_ctor_get(v_canon_2051_, 0);
v_cacheInType_2067_ = lean_ctor_get(v_canon_2051_, 1);
v_isSharedCheck_2082_ = !lean_is_exclusive(v_canon_2051_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2069_ = v_canon_2051_;
v_isShared_2070_ = v_isSharedCheck_2082_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_cacheInType_2067_);
lean_inc(v_cache_2066_);
lean_dec(v_canon_2051_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2082_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2071_; lean_object* v___x_2073_; 
lean_inc(v_a_2046_);
v___x_2071_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_2067_, v_e_1972_, v_a_2046_);
if (v_isShared_2070_ == 0)
{
lean_ctor_set(v___x_2069_, 1, v___x_2071_);
v___x_2073_ = v___x_2069_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_cache_2066_);
lean_ctor_set(v_reuseFailAlloc_2081_, 1, v___x_2071_);
v___x_2073_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
lean_object* v___x_2075_; 
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 9, v___x_2073_);
v___x_2075_ = v___x_2064_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_share_2052_);
lean_ctor_set(v_reuseFailAlloc_2080_, 1, v_maxFVar_2053_);
lean_ctor_set(v_reuseFailAlloc_2080_, 2, v_proofInstInfo_2054_);
lean_ctor_set(v_reuseFailAlloc_2080_, 3, v_inferType_2055_);
lean_ctor_set(v_reuseFailAlloc_2080_, 4, v_getLevel_2056_);
lean_ctor_set(v_reuseFailAlloc_2080_, 5, v_congrInfo_2057_);
lean_ctor_set(v_reuseFailAlloc_2080_, 6, v_defEqI_2058_);
lean_ctor_set(v_reuseFailAlloc_2080_, 7, v_extensions_2059_);
lean_ctor_set(v_reuseFailAlloc_2080_, 8, v_issues_2060_);
lean_ctor_set(v_reuseFailAlloc_2080_, 9, v___x_2073_);
lean_ctor_set(v_reuseFailAlloc_2080_, 10, v_instanceOverrides_2061_);
lean_ctor_set_uint8(v_reuseFailAlloc_2080_, sizeof(void*)*11, v_debug_2062_);
v___x_2075_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
lean_object* v___x_2076_; lean_object* v___x_2078_; 
v___x_2076_ = lean_st_ref_put(v_a_1975_, v___x_2075_);
if (v_isShared_2049_ == 0)
{
v___x_2078_ = v___x_2048_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2046_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_1972_);
return v___x_2045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(lean_object* v_g_2085_, lean_object* v_prop_2086_, lean_object* v_h_2087_, lean_object* v_e_2088_, uint8_t v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_){
_start:
{
lean_object* v_a_2098_; lean_object* v___y_2132_; 
if (v_a_2089_ == 0)
{
lean_object* v___x_2172_; lean_object* v_canon_2173_; lean_object* v_cache_2174_; lean_object* v___x_2175_; 
v___x_2172_ = lean_st_ref_get(v_a_2091_);
v_canon_2173_ = lean_ctor_get(v___x_2172_, 9);
lean_inc_ref(v_canon_2173_);
lean_dec(v___x_2172_);
v_cache_2174_ = lean_ctor_get(v_canon_2173_, 0);
lean_inc_ref(v_cache_2174_);
lean_dec_ref(v_canon_2173_);
v___x_2175_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_2174_, v_e_2088_);
lean_dec_ref(v_cache_2174_);
if (lean_obj_tag(v___x_2175_) == 1)
{
lean_object* v_val_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
lean_dec_ref(v_e_2088_);
lean_dec_ref(v_h_2087_);
lean_dec_ref(v_prop_2086_);
lean_dec_ref(v_g_2085_);
v_val_2176_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2175_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_val_2176_);
lean_dec(v___x_2175_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
lean_ctor_set_tag(v___x_2178_, 0);
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_val_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
else
{
lean_object* v___x_2184_; 
lean_dec(v___x_2175_);
lean_inc_ref(v_prop_2086_);
v___x_2184_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2086_, v_a_2089_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; lean_object* v___x_2186_; 
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
lean_inc_n(v_a_2185_, 2);
lean_dec_ref_known(v___x_2184_, 1);
v___x_2186_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_a_2185_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v_a_2187_; lean_object* v___y_2189_; lean_object* v___y_2192_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
lean_inc(v_a_2187_);
lean_dec_ref_known(v___x_2186_, 1);
if (lean_obj_tag(v_a_2187_) == 0)
{
lean_inc_ref(v_h_2087_);
v___y_2192_ = v_h_2087_;
goto v___jp_2191_;
}
else
{
lean_object* v_val_2199_; 
v_val_2199_ = lean_ctor_get(v_a_2187_, 0);
lean_inc(v_val_2199_);
lean_dec_ref_known(v_a_2187_, 1);
v___y_2192_ = v_val_2199_;
goto v___jp_2191_;
}
v___jp_2188_:
{
lean_object* v___x_2190_; 
v___x_2190_ = l_Lean_mkAppB(v_g_2085_, v_a_2185_, v___y_2189_);
v_a_2098_ = v___x_2190_;
goto v___jp_2097_;
}
v___jp_2191_:
{
size_t v___x_2193_; size_t v___x_2194_; uint8_t v___x_2195_; 
v___x_2193_ = lean_ptr_addr(v_prop_2086_);
lean_dec_ref(v_prop_2086_);
v___x_2194_ = lean_ptr_addr(v_a_2185_);
v___x_2195_ = lean_usize_dec_eq(v___x_2193_, v___x_2194_);
if (v___x_2195_ == 0)
{
lean_dec_ref(v_h_2087_);
v___y_2189_ = v___y_2192_;
goto v___jp_2188_;
}
else
{
size_t v___x_2196_; size_t v___x_2197_; uint8_t v___x_2198_; 
v___x_2196_ = lean_ptr_addr(v_h_2087_);
lean_dec_ref(v_h_2087_);
v___x_2197_ = lean_ptr_addr(v___y_2192_);
v___x_2198_ = lean_usize_dec_eq(v___x_2196_, v___x_2197_);
if (v___x_2198_ == 0)
{
v___y_2189_ = v___y_2192_;
goto v___jp_2188_;
}
else
{
lean_dec_ref(v___y_2192_);
lean_dec(v_a_2185_);
lean_dec_ref(v_g_2085_);
lean_inc_ref(v_e_2088_);
v_a_2098_ = v_e_2088_;
goto v___jp_2097_;
}
}
}
}
else
{
lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2207_; 
lean_dec(v_a_2185_);
lean_dec_ref(v_e_2088_);
lean_dec_ref(v_h_2087_);
lean_dec_ref(v_prop_2086_);
lean_dec_ref(v_g_2085_);
v_a_2200_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2202_ = v___x_2186_;
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2186_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2205_; 
if (v_isShared_2203_ == 0)
{
v___x_2205_ = v___x_2202_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_a_2200_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
}
else
{
lean_dec_ref(v_h_2087_);
lean_dec_ref(v_prop_2086_);
lean_dec_ref(v_g_2085_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2208_; 
v_a_2208_ = lean_ctor_get(v___x_2184_, 0);
lean_inc(v_a_2208_);
lean_dec_ref_known(v___x_2184_, 1);
v_a_2098_ = v_a_2208_;
goto v___jp_2097_;
}
else
{
lean_dec_ref(v_e_2088_);
return v___x_2184_;
}
}
}
}
else
{
lean_object* v___x_2209_; lean_object* v_canon_2210_; lean_object* v_cacheInType_2211_; lean_object* v___x_2212_; 
lean_dec_ref(v_g_2085_);
v___x_2209_ = lean_st_ref_get(v_a_2091_);
v_canon_2210_ = lean_ctor_get(v___x_2209_, 9);
lean_inc_ref(v_canon_2210_);
lean_dec(v___x_2209_);
v_cacheInType_2211_ = lean_ctor_get(v_canon_2210_, 1);
lean_inc_ref(v_cacheInType_2211_);
lean_dec_ref(v_canon_2210_);
v___x_2212_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_2211_, v_e_2088_);
lean_dec_ref(v_cacheInType_2211_);
if (lean_obj_tag(v___x_2212_) == 1)
{
lean_object* v_val_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2220_; 
lean_dec_ref(v_e_2088_);
lean_dec_ref(v_h_2087_);
lean_dec_ref(v_prop_2086_);
v_val_2213_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2215_ = v___x_2212_;
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_val_2213_);
lean_dec(v___x_2212_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2218_; 
if (v_isShared_2216_ == 0)
{
lean_ctor_set_tag(v___x_2215_, 0);
v___x_2218_ = v___x_2215_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_val_2213_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
else
{
lean_object* v___x_2221_; 
lean_dec(v___x_2212_);
v___x_2221_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2086_, v_a_2089_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
if (lean_obj_tag(v___x_2221_) == 0)
{
lean_object* v_a_2222_; uint8_t v___x_2223_; lean_object* v___x_2224_; 
v_a_2222_ = lean_ctor_get(v___x_2221_, 0);
lean_inc(v_a_2222_);
lean_dec_ref_known(v___x_2221_, 1);
v___x_2223_ = 0;
v___x_2224_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___redArg(v_h_2087_, v_a_2222_, v___x_2223_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
v___y_2132_ = v___x_2224_;
goto v___jp_2131_;
}
else
{
lean_dec_ref(v_h_2087_);
v___y_2132_ = v___x_2221_;
goto v___jp_2131_;
}
}
}
v___jp_2097_:
{
lean_object* v___x_2099_; lean_object* v_canon_2100_; lean_object* v_share_2101_; lean_object* v_maxFVar_2102_; lean_object* v_proofInstInfo_2103_; lean_object* v_inferType_2104_; lean_object* v_getLevel_2105_; lean_object* v_congrInfo_2106_; lean_object* v_defEqI_2107_; lean_object* v_extensions_2108_; lean_object* v_issues_2109_; lean_object* v_instanceOverrides_2110_; uint8_t v_debug_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2130_; 
v___x_2099_ = lean_st_ref_take(v_a_2091_);
v_canon_2100_ = lean_ctor_get(v___x_2099_, 9);
v_share_2101_ = lean_ctor_get(v___x_2099_, 0);
v_maxFVar_2102_ = lean_ctor_get(v___x_2099_, 1);
v_proofInstInfo_2103_ = lean_ctor_get(v___x_2099_, 2);
v_inferType_2104_ = lean_ctor_get(v___x_2099_, 3);
v_getLevel_2105_ = lean_ctor_get(v___x_2099_, 4);
v_congrInfo_2106_ = lean_ctor_get(v___x_2099_, 5);
v_defEqI_2107_ = lean_ctor_get(v___x_2099_, 6);
v_extensions_2108_ = lean_ctor_get(v___x_2099_, 7);
v_issues_2109_ = lean_ctor_get(v___x_2099_, 8);
v_instanceOverrides_2110_ = lean_ctor_get(v___x_2099_, 10);
v_debug_2111_ = lean_ctor_get_uint8(v___x_2099_, sizeof(void*)*11);
v_isSharedCheck_2130_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2113_ = v___x_2099_;
v_isShared_2114_ = v_isSharedCheck_2130_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_instanceOverrides_2110_);
lean_inc(v_canon_2100_);
lean_inc(v_issues_2109_);
lean_inc(v_extensions_2108_);
lean_inc(v_defEqI_2107_);
lean_inc(v_congrInfo_2106_);
lean_inc(v_getLevel_2105_);
lean_inc(v_inferType_2104_);
lean_inc(v_proofInstInfo_2103_);
lean_inc(v_maxFVar_2102_);
lean_inc(v_share_2101_);
lean_dec(v___x_2099_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2130_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v_cache_2115_; lean_object* v_cacheInType_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2129_; 
v_cache_2115_ = lean_ctor_get(v_canon_2100_, 0);
v_cacheInType_2116_ = lean_ctor_get(v_canon_2100_, 1);
v_isSharedCheck_2129_ = !lean_is_exclusive(v_canon_2100_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2118_ = v_canon_2100_;
v_isShared_2119_ = v_isSharedCheck_2129_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_cacheInType_2116_);
lean_inc(v_cache_2115_);
lean_dec(v_canon_2100_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2129_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2120_; lean_object* v___x_2122_; 
lean_inc_ref(v_a_2098_);
v___x_2120_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_2115_, v_e_2088_, v_a_2098_);
if (v_isShared_2119_ == 0)
{
lean_ctor_set(v___x_2118_, 0, v___x_2120_);
v___x_2122_ = v___x_2118_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v___x_2120_);
lean_ctor_set(v_reuseFailAlloc_2128_, 1, v_cacheInType_2116_);
v___x_2122_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
lean_object* v___x_2124_; 
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 9, v___x_2122_);
v___x_2124_ = v___x_2113_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_share_2101_);
lean_ctor_set(v_reuseFailAlloc_2127_, 1, v_maxFVar_2102_);
lean_ctor_set(v_reuseFailAlloc_2127_, 2, v_proofInstInfo_2103_);
lean_ctor_set(v_reuseFailAlloc_2127_, 3, v_inferType_2104_);
lean_ctor_set(v_reuseFailAlloc_2127_, 4, v_getLevel_2105_);
lean_ctor_set(v_reuseFailAlloc_2127_, 5, v_congrInfo_2106_);
lean_ctor_set(v_reuseFailAlloc_2127_, 6, v_defEqI_2107_);
lean_ctor_set(v_reuseFailAlloc_2127_, 7, v_extensions_2108_);
lean_ctor_set(v_reuseFailAlloc_2127_, 8, v_issues_2109_);
lean_ctor_set(v_reuseFailAlloc_2127_, 9, v___x_2122_);
lean_ctor_set(v_reuseFailAlloc_2127_, 10, v_instanceOverrides_2110_);
lean_ctor_set_uint8(v_reuseFailAlloc_2127_, sizeof(void*)*11, v_debug_2111_);
v___x_2124_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2125_ = lean_st_ref_put(v_a_2091_, v___x_2124_);
v___x_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2126_, 0, v_a_2098_);
return v___x_2126_;
}
}
}
}
}
v___jp_2131_:
{
if (lean_obj_tag(v___y_2132_) == 0)
{
lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2171_; 
v_a_2133_ = lean_ctor_get(v___y_2132_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___y_2132_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2135_ = v___y_2132_;
v_isShared_2136_ = v_isSharedCheck_2171_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___y_2132_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2171_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2137_; lean_object* v_canon_2138_; lean_object* v_share_2139_; lean_object* v_maxFVar_2140_; lean_object* v_proofInstInfo_2141_; lean_object* v_inferType_2142_; lean_object* v_getLevel_2143_; lean_object* v_congrInfo_2144_; lean_object* v_defEqI_2145_; lean_object* v_extensions_2146_; lean_object* v_issues_2147_; lean_object* v_instanceOverrides_2148_; uint8_t v_debug_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2170_; 
v___x_2137_ = lean_st_ref_take(v_a_2091_);
v_canon_2138_ = lean_ctor_get(v___x_2137_, 9);
v_share_2139_ = lean_ctor_get(v___x_2137_, 0);
v_maxFVar_2140_ = lean_ctor_get(v___x_2137_, 1);
v_proofInstInfo_2141_ = lean_ctor_get(v___x_2137_, 2);
v_inferType_2142_ = lean_ctor_get(v___x_2137_, 3);
v_getLevel_2143_ = lean_ctor_get(v___x_2137_, 4);
v_congrInfo_2144_ = lean_ctor_get(v___x_2137_, 5);
v_defEqI_2145_ = lean_ctor_get(v___x_2137_, 6);
v_extensions_2146_ = lean_ctor_get(v___x_2137_, 7);
v_issues_2147_ = lean_ctor_get(v___x_2137_, 8);
v_instanceOverrides_2148_ = lean_ctor_get(v___x_2137_, 10);
v_debug_2149_ = lean_ctor_get_uint8(v___x_2137_, sizeof(void*)*11);
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2151_ = v___x_2137_;
v_isShared_2152_ = v_isSharedCheck_2170_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_instanceOverrides_2148_);
lean_inc(v_canon_2138_);
lean_inc(v_issues_2147_);
lean_inc(v_extensions_2146_);
lean_inc(v_defEqI_2145_);
lean_inc(v_congrInfo_2144_);
lean_inc(v_getLevel_2143_);
lean_inc(v_inferType_2142_);
lean_inc(v_proofInstInfo_2141_);
lean_inc(v_maxFVar_2140_);
lean_inc(v_share_2139_);
lean_dec(v___x_2137_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2170_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v_cache_2153_; lean_object* v_cacheInType_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2169_; 
v_cache_2153_ = lean_ctor_get(v_canon_2138_, 0);
v_cacheInType_2154_ = lean_ctor_get(v_canon_2138_, 1);
v_isSharedCheck_2169_ = !lean_is_exclusive(v_canon_2138_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2156_ = v_canon_2138_;
v_isShared_2157_ = v_isSharedCheck_2169_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_cacheInType_2154_);
lean_inc(v_cache_2153_);
lean_dec(v_canon_2138_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2169_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2158_; lean_object* v___x_2160_; 
lean_inc(v_a_2133_);
v___x_2158_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_2154_, v_e_2088_, v_a_2133_);
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 1, v___x_2158_);
v___x_2160_ = v___x_2156_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_cache_2153_);
lean_ctor_set(v_reuseFailAlloc_2168_, 1, v___x_2158_);
v___x_2160_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2162_; 
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 9, v___x_2160_);
v___x_2162_ = v___x_2151_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v_share_2139_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v_maxFVar_2140_);
lean_ctor_set(v_reuseFailAlloc_2167_, 2, v_proofInstInfo_2141_);
lean_ctor_set(v_reuseFailAlloc_2167_, 3, v_inferType_2142_);
lean_ctor_set(v_reuseFailAlloc_2167_, 4, v_getLevel_2143_);
lean_ctor_set(v_reuseFailAlloc_2167_, 5, v_congrInfo_2144_);
lean_ctor_set(v_reuseFailAlloc_2167_, 6, v_defEqI_2145_);
lean_ctor_set(v_reuseFailAlloc_2167_, 7, v_extensions_2146_);
lean_ctor_set(v_reuseFailAlloc_2167_, 8, v_issues_2147_);
lean_ctor_set(v_reuseFailAlloc_2167_, 9, v___x_2160_);
lean_ctor_set(v_reuseFailAlloc_2167_, 10, v_instanceOverrides_2148_);
lean_ctor_set_uint8(v_reuseFailAlloc_2167_, sizeof(void*)*11, v_debug_2149_);
v___x_2162_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
lean_object* v___x_2163_; lean_object* v___x_2165_; 
v___x_2163_ = lean_st_ref_put(v_a_2091_, v___x_2162_);
if (v_isShared_2136_ == 0)
{
v___x_2165_ = v___x_2135_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_a_2133_);
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
}
else
{
lean_dec_ref(v_e_2088_);
return v___y_2132_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(lean_object* v___x_2225_, lean_object* v_snd_2226_, lean_object* v_a_2227_, uint8_t v___x_2228_, lean_object* v_fst_2229_, lean_object* v___x_2230_, lean_object* v_____r_2231_, uint8_t v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_){
_start:
{
lean_object* v_arg_x27_2241_; lean_object* v___x_2264_; 
lean_inc_ref(v___x_2225_);
v___x_2264_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v___x_2230_, v_a_2227_, v___x_2225_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; uint8_t v___x_2266_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
lean_inc(v_a_2265_);
lean_dec_ref_known(v___x_2264_, 1);
v___x_2266_ = lean_unbox(v_a_2265_);
lean_dec(v_a_2265_);
switch(v___x_2266_)
{
case 0:
{
lean_object* v___x_2267_; 
lean_inc_ref(v___x_2225_);
v___x_2267_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(v___x_2225_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v_a_2268_; 
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
lean_inc(v_a_2268_);
lean_dec_ref_known(v___x_2267_, 1);
v_arg_x27_2241_ = v_a_2268_;
goto v___jp_2240_;
}
else
{
lean_object* v_a_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2276_; 
lean_dec(v_fst_2229_);
lean_dec(v_snd_2226_);
lean_dec_ref(v___x_2225_);
v_a_2269_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2271_ = v___x_2267_;
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_a_2269_);
lean_dec(v___x_2267_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2274_; 
if (v_isShared_2272_ == 0)
{
v___x_2274_ = v___x_2271_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v_a_2269_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
}
}
case 1:
{
lean_object* v___x_2277_; 
lean_inc_ref(v___x_2225_);
v___x_2277_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v___x_2225_, v___y_2236_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v_a_2278_; lean_object* v___x_2279_; uint8_t v___x_2280_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v___x_2277_, 1);
v___x_2279_ = l_Lean_Expr_cleanupAnnotations(v_a_2278_);
v___x_2280_ = l_Lean_Expr_isApp(v___x_2279_);
if (v___x_2280_ == 0)
{
lean_dec_ref(v___x_2279_);
goto v___jp_2253_;
}
else
{
lean_object* v_arg_2281_; lean_object* v___x_2282_; uint8_t v___x_2283_; 
v_arg_2281_ = lean_ctor_get(v___x_2279_, 1);
lean_inc_ref(v_arg_2281_);
v___x_2282_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2279_);
v___x_2283_ = l_Lean_Expr_isApp(v___x_2282_);
if (v___x_2283_ == 0)
{
lean_dec_ref(v___x_2282_);
lean_dec_ref(v_arg_2281_);
goto v___jp_2253_;
}
else
{
lean_object* v_arg_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; uint8_t v___x_2287_; 
v_arg_2284_ = lean_ctor_get(v___x_2282_, 1);
lean_inc_ref(v_arg_2284_);
v___x_2285_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2282_);
v___x_2286_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__1));
v___x_2287_ = l_Lean_Expr_isConstOf(v___x_2285_, v___x_2286_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; uint8_t v___x_2289_; 
v___x_2288_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2));
v___x_2289_ = l_Lean_Expr_isConstOf(v___x_2285_, v___x_2288_);
if (v___x_2289_ == 0)
{
lean_dec_ref(v___x_2285_);
lean_dec_ref(v_arg_2284_);
lean_dec_ref(v_arg_2281_);
goto v___jp_2253_;
}
else
{
lean_object* v___x_2290_; 
lean_inc_ref(v___x_2225_);
v___x_2290_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(v___x_2285_, v_arg_2284_, v_arg_2281_, v___x_2225_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
if (lean_obj_tag(v___x_2290_) == 0)
{
lean_object* v_a_2291_; 
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc(v_a_2291_);
lean_dec_ref_known(v___x_2290_, 1);
v_arg_x27_2241_ = v_a_2291_;
goto v___jp_2240_;
}
else
{
lean_object* v_a_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2299_; 
lean_dec(v_fst_2229_);
lean_dec(v_snd_2226_);
lean_dec_ref(v___x_2225_);
v_a_2292_ = lean_ctor_get(v___x_2290_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2294_ = v___x_2290_;
v_isShared_2295_ = v_isSharedCheck_2299_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_a_2292_);
lean_dec(v___x_2290_);
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
}
else
{
lean_object* v___x_2300_; 
lean_inc_ref(v___x_2225_);
v___x_2300_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(v___x_2285_, v_arg_2284_, v_arg_2281_, v___x_2225_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v_a_2301_; 
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
lean_inc(v_a_2301_);
lean_dec_ref_known(v___x_2300_, 1);
v_arg_x27_2241_ = v_a_2301_;
goto v___jp_2240_;
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_dec(v_fst_2229_);
lean_dec(v_snd_2226_);
lean_dec_ref(v___x_2225_);
v_a_2302_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2300_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2300_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2317_; 
lean_dec(v_fst_2229_);
lean_dec(v_snd_2226_);
lean_dec_ref(v___x_2225_);
v_a_2310_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2312_ = v___x_2277_;
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2277_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2315_; 
if (v_isShared_2313_ == 0)
{
v___x_2315_ = v___x_2312_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_a_2310_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
default: 
{
lean_object* v___x_2318_; 
lean_inc_ref(v___x_2225_);
v___x_2318_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_2225_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
lean_inc(v_a_2319_);
lean_dec_ref_known(v___x_2318_, 1);
v_arg_x27_2241_ = v_a_2319_;
goto v___jp_2240_;
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
lean_dec(v_fst_2229_);
lean_dec(v_snd_2226_);
lean_dec_ref(v___x_2225_);
v_a_2320_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2318_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2318_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
}
}
else
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2335_; 
lean_dec(v_fst_2229_);
lean_dec(v_snd_2226_);
lean_dec_ref(v___x_2225_);
v_a_2328_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2330_ = v___x_2264_;
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2264_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2333_; 
if (v_isShared_2331_ == 0)
{
v___x_2333_ = v___x_2330_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v_a_2328_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
v___jp_2240_:
{
size_t v___x_2242_; size_t v___x_2243_; uint8_t v___x_2244_; 
v___x_2242_ = lean_ptr_addr(v___x_2225_);
lean_dec_ref(v___x_2225_);
v___x_2243_ = lean_ptr_addr(v_arg_x27_2241_);
v___x_2244_ = lean_usize_dec_eq(v___x_2242_, v___x_2243_);
if (v___x_2244_ == 0)
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
lean_dec(v_fst_2229_);
v___x_2245_ = lean_array_fset(v_snd_2226_, v_a_2227_, v_arg_x27_2241_);
v___x_2246_ = lean_box(v___x_2228_);
v___x_2247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2246_);
lean_ctor_set(v___x_2247_, 1, v___x_2245_);
v___x_2248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
v___x_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2248_);
return v___x_2249_;
}
else
{
lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
lean_dec_ref(v_arg_x27_2241_);
v___x_2250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2250_, 0, v_fst_2229_);
lean_ctor_set(v___x_2250_, 1, v_snd_2226_);
v___x_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
v___x_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2251_);
return v___x_2252_;
}
}
v___jp_2253_:
{
lean_object* v___x_2254_; 
lean_inc_ref(v___x_2225_);
v___x_2254_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(v___x_2225_, v___x_2228_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
if (lean_obj_tag(v___x_2254_) == 0)
{
lean_object* v_a_2255_; 
v_a_2255_ = lean_ctor_get(v___x_2254_, 0);
lean_inc(v_a_2255_);
lean_dec_ref_known(v___x_2254_, 1);
v_arg_x27_2241_ = v_a_2255_;
goto v___jp_2240_;
}
else
{
lean_object* v_a_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2263_; 
lean_dec(v_fst_2229_);
lean_dec(v_snd_2226_);
lean_dec_ref(v___x_2225_);
v_a_2256_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2263_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2263_ == 0)
{
v___x_2258_ = v___x_2254_;
v_isShared_2259_ = v_isSharedCheck_2263_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_a_2256_);
lean_dec(v___x_2254_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2263_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v___x_2261_; 
if (v_isShared_2259_ == 0)
{
v___x_2261_ = v___x_2258_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2262_; 
v_reuseFailAlloc_2262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2262_, 0, v_a_2256_);
v___x_2261_ = v_reuseFailAlloc_2262_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
return v___x_2261_;
}
}
}
}
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2339_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_2340_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1));
v___x_2341_ = l_Lean_Name_append(v___x_2340_, v___x_2339_);
return v___x_2341_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4(void){
_start:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3));
v___x_2344_ = l_Lean_stringToMessageData(v___x_2343_);
return v___x_2344_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6(void){
_start:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; 
v___x_2346_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5));
v___x_2347_ = l_Lean_stringToMessageData(v___x_2346_);
return v___x_2347_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8(void){
_start:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2349_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7));
v___x_2350_ = l_Lean_stringToMessageData(v___x_2349_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(lean_object* v_upperBound_2351_, lean_object* v___x_2352_, lean_object* v_a_2353_, lean_object* v_b_2354_, uint8_t v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
lean_object* v___y_2364_; uint8_t v___x_2386_; 
v___x_2386_ = lean_nat_dec_lt(v_a_2353_, v_upperBound_2351_);
if (v___x_2386_ == 0)
{
lean_object* v___x_2387_; 
lean_dec(v_a_2353_);
v___x_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2387_, 0, v_b_2354_);
return v___x_2387_;
}
else
{
lean_object* v_toCold_2388_; lean_object* v_options_2389_; lean_object* v_fst_2390_; lean_object* v_snd_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2455_; 
v_toCold_2388_ = lean_ctor_get(v___y_2360_, 0);
v_options_2389_ = lean_ctor_get(v_toCold_2388_, 2);
v_fst_2390_ = lean_ctor_get(v_b_2354_, 0);
v_snd_2391_ = lean_ctor_get(v_b_2354_, 1);
v_isSharedCheck_2455_ = !lean_is_exclusive(v_b_2354_);
if (v_isSharedCheck_2455_ == 0)
{
v___x_2393_ = v_b_2354_;
v_isShared_2394_ = v_isSharedCheck_2455_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_snd_2391_);
lean_inc(v_fst_2390_);
lean_dec(v_b_2354_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2455_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v_inheritedTraceOptions_2395_; uint8_t v_hasTrace_2396_; lean_object* v___x_2397_; 
v_inheritedTraceOptions_2395_ = lean_ctor_get(v_toCold_2388_, 11);
v_hasTrace_2396_ = lean_ctor_get_uint8(v_options_2389_, sizeof(void*)*1);
v___x_2397_ = lean_array_fget(v_snd_2391_, v_a_2353_);
if (v_hasTrace_2396_ == 0)
{
lean_del_object(v___x_2393_);
goto v___jp_2398_;
}
else
{
lean_object* v___x_2401_; lean_object* v___x_2402_; uint8_t v___x_2403_; 
v___x_2401_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_2402_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2);
v___x_2403_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2395_, v_options_2389_, v___x_2402_);
if (v___x_2403_ == 0)
{
lean_del_object(v___x_2393_);
goto v___jp_2398_;
}
else
{
lean_object* v___x_2404_; 
lean_inc(v___x_2397_);
v___x_2404_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v___x_2352_, v_a_2353_, v___x_2397_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2406_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_a_2405_);
lean_dec_ref_known(v___x_2404_, 1);
lean_inc(v___y_2361_);
lean_inc_ref(v___y_2360_);
lean_inc(v___y_2359_);
lean_inc_ref(v___y_2358_);
lean_inc(v___x_2397_);
v___x_2406_ = lean_infer_type(v___x_2397_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2406_) == 0)
{
lean_object* v_a_2407_; lean_object* v___x_2408_; lean_object* v___y_2410_; uint8_t v___x_2434_; 
v_a_2407_ = lean_ctor_get(v___x_2406_, 0);
lean_inc(v_a_2407_);
lean_dec_ref_known(v___x_2406_, 1);
v___x_2408_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4);
v___x_2434_ = lean_unbox(v_a_2405_);
lean_dec(v_a_2405_);
switch(v___x_2434_)
{
case 0:
{
lean_object* v___x_2435_; 
v___x_2435_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1));
v___y_2410_ = v___x_2435_;
goto v___jp_2409_;
}
case 1:
{
lean_object* v___x_2436_; 
v___x_2436_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3));
v___y_2410_ = v___x_2436_;
goto v___jp_2409_;
}
case 2:
{
lean_object* v___x_2437_; 
v___x_2437_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5));
v___y_2410_ = v___x_2437_;
goto v___jp_2409_;
}
default: 
{
lean_object* v___x_2438_; 
v___x_2438_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7));
v___y_2410_ = v___x_2438_;
goto v___jp_2409_;
}
}
v___jp_2409_:
{
lean_object* v___x_2411_; lean_object* v___x_2413_; 
lean_inc(v___y_2410_);
v___x_2411_ = l_Lean_MessageData_ofFormat(v___y_2410_);
if (v_isShared_2394_ == 0)
{
lean_ctor_set_tag(v___x_2393_, 7);
lean_ctor_set(v___x_2393_, 1, v___x_2411_);
lean_ctor_set(v___x_2393_, 0, v___x_2408_);
v___x_2413_ = v___x_2393_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v___x_2408_);
lean_ctor_set(v_reuseFailAlloc_2433_, 1, v___x_2411_);
v___x_2413_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
v___x_2414_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6);
v___x_2415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2415_, 0, v___x_2413_);
lean_ctor_set(v___x_2415_, 1, v___x_2414_);
lean_inc(v___x_2397_);
v___x_2416_ = l_Lean_MessageData_ofExpr(v___x_2397_);
v___x_2417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2417_, 0, v___x_2415_);
lean_ctor_set(v___x_2417_, 1, v___x_2416_);
v___x_2418_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8);
v___x_2419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2417_);
lean_ctor_set(v___x_2419_, 1, v___x_2418_);
v___x_2420_ = l_Lean_MessageData_ofExpr(v_a_2407_);
v___x_2421_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2419_);
lean_ctor_set(v___x_2421_, 1, v___x_2420_);
v___x_2422_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(v___x_2401_, v___x_2421_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v_a_2423_; lean_object* v___x_2424_; 
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2423_);
lean_dec_ref_known(v___x_2422_, 1);
v___x_2424_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(v___x_2397_, v_snd_2391_, v_a_2353_, v___x_2386_, v_fst_2390_, v___x_2352_, v_a_2423_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
v___y_2364_ = v___x_2424_;
goto v___jp_2363_;
}
else
{
lean_object* v_a_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2432_; 
lean_dec(v___x_2397_);
lean_dec(v_snd_2391_);
lean_dec(v_fst_2390_);
lean_dec(v_a_2353_);
v_a_2425_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2432_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2432_ == 0)
{
v___x_2427_ = v___x_2422_;
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_a_2425_);
lean_dec(v___x_2422_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2430_; 
if (v_isShared_2428_ == 0)
{
v___x_2430_ = v___x_2427_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v_a_2425_);
v___x_2430_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
return v___x_2430_;
}
}
}
}
}
}
else
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2446_; 
lean_dec(v_a_2405_);
lean_dec(v___x_2397_);
lean_del_object(v___x_2393_);
lean_dec(v_snd_2391_);
lean_dec(v_fst_2390_);
lean_dec(v_a_2353_);
v_a_2439_ = lean_ctor_get(v___x_2406_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2406_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2441_ = v___x_2406_;
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2406_);
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
lean_dec(v___x_2397_);
lean_del_object(v___x_2393_);
lean_dec(v_snd_2391_);
lean_dec(v_fst_2390_);
lean_dec(v_a_2353_);
v_a_2447_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2449_ = v___x_2404_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2404_);
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
v___jp_2398_:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2399_ = lean_box(0);
v___x_2400_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(v___x_2397_, v_snd_2391_, v_a_2353_, v___x_2386_, v_fst_2390_, v___x_2352_, v___x_2399_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
v___y_2364_ = v___x_2400_;
goto v___jp_2363_;
}
}
}
v___jp_2363_:
{
if (lean_obj_tag(v___y_2364_) == 0)
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2377_; 
v_a_2365_ = lean_ctor_get(v___y_2364_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___y_2364_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2367_ = v___y_2364_;
v_isShared_2368_ = v_isSharedCheck_2377_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___y_2364_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2377_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
if (lean_obj_tag(v_a_2365_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2371_; 
lean_dec(v_a_2353_);
v_a_2369_ = lean_ctor_get(v_a_2365_, 0);
lean_inc(v_a_2369_);
lean_dec_ref_known(v_a_2365_, 1);
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 0, v_a_2369_);
v___x_2371_ = v___x_2367_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_a_2369_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
lean_del_object(v___x_2367_);
v_a_2373_ = lean_ctor_get(v_a_2365_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v_a_2365_, 1);
v___x_2374_ = lean_unsigned_to_nat(1u);
v___x_2375_ = lean_nat_add(v_a_2353_, v___x_2374_);
lean_dec(v_a_2353_);
v_a_2353_ = v___x_2375_;
v_b_2354_ = v_a_2373_;
goto _start;
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
lean_dec(v_a_2353_);
v_a_2378_ = lean_ctor_get(v___y_2364_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___y_2364_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___y_2364_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___y_2364_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2383_; 
if (v_isShared_2381_ == 0)
{
v___x_2383_ = v___x_2380_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_a_2378_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(lean_object* v_e_2456_, lean_object* v_x_2457_, lean_object* v_x_2458_, lean_object* v_x_2459_, uint8_t v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_){
_start:
{
lean_object* v___y_2469_; uint8_t v_modified_2470_; lean_object* v_f_2471_; uint8_t v___y_2472_; lean_object* v___y_2473_; lean_object* v___y_2474_; lean_object* v___y_2475_; lean_object* v___y_2476_; lean_object* v___y_2477_; lean_object* v___y_2478_; lean_object* v_args_2527_; uint8_t v_modified_2528_; uint8_t v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___y_2533_; lean_object* v___y_2534_; lean_object* v___y_2535_; uint8_t v___y_2543_; lean_object* v___y_2544_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; 
if (lean_obj_tag(v_x_2457_) == 5)
{
lean_object* v_fn_2564_; lean_object* v_arg_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v_fn_2564_ = lean_ctor_get(v_x_2457_, 0);
lean_inc_ref(v_fn_2564_);
v_arg_2565_ = lean_ctor_get(v_x_2457_, 1);
lean_inc_ref(v_arg_2565_);
lean_dec_ref_known(v_x_2457_, 2);
v___x_2566_ = lean_array_set(v_x_2458_, v_x_2459_, v_arg_2565_);
v___x_2567_ = lean_unsigned_to_nat(1u);
v___x_2568_ = lean_nat_sub(v_x_2459_, v___x_2567_);
lean_dec(v_x_2459_);
v_x_2457_ = v_fn_2564_;
v_x_2458_ = v___x_2566_;
v_x_2459_ = v___x_2568_;
goto _start;
}
else
{
lean_object* v___x_2570_; lean_object* v___x_2571_; uint8_t v___x_2572_; 
lean_dec(v_x_2459_);
v___x_2570_ = lean_array_get_size(v_x_2458_);
v___x_2571_ = lean_unsigned_to_nat(2u);
v___x_2572_ = lean_nat_dec_eq(v___x_2570_, v___x_2571_);
if (v___x_2572_ == 0)
{
v___y_2543_ = v___y_2460_;
v___y_2544_ = v___y_2461_;
v___y_2545_ = v___y_2462_;
v___y_2546_ = v___y_2463_;
v___y_2547_ = v___y_2464_;
v___y_2548_ = v___y_2465_;
v___y_2549_ = v___y_2466_;
goto v___jp_2542_;
}
else
{
lean_object* v___x_2573_; lean_object* v___x_2574_; uint8_t v___x_2575_; 
v___x_2573_ = l_Lean_instInhabitedExpr;
v___x_2574_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___closed__1));
v___x_2575_ = l_Lean_Expr_isConstOf(v_x_2457_, v___x_2574_);
if (v___x_2575_ == 0)
{
lean_object* v___x_2576_; uint8_t v___x_2577_; 
v___x_2576_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2));
v___x_2577_ = l_Lean_Expr_isConstOf(v_x_2457_, v___x_2576_);
if (v___x_2577_ == 0)
{
v___y_2543_ = v___y_2460_;
v___y_2544_ = v___y_2461_;
v___y_2545_ = v___y_2462_;
v___y_2546_ = v___y_2463_;
v___y_2547_ = v___y_2464_;
v___y_2548_ = v___y_2465_;
v___y_2549_ = v___y_2466_;
goto v___jp_2542_;
}
else
{
lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2578_ = lean_unsigned_to_nat(0u);
v___x_2579_ = lean_array_get(v___x_2573_, v_x_2458_, v___x_2578_);
v___x_2580_ = lean_unsigned_to_nat(1u);
v___x_2581_ = lean_array_get(v___x_2573_, v_x_2458_, v___x_2580_);
lean_dec_ref(v_x_2458_);
v___x_2582_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_x_2457_, v___x_2579_, v___x_2581_, v_e_2456_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
return v___x_2582_;
}
}
else
{
lean_object* v___x_2583_; lean_object* v_prop_2584_; lean_object* v___x_2585_; 
v___x_2583_ = lean_unsigned_to_nat(0u);
v_prop_2584_ = lean_array_get_borrowed(v___x_2573_, v_x_2458_, v___x_2583_);
lean_inc(v_prop_2584_);
v___x_2585_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2584_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2602_; 
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2588_ = v___x_2585_;
v_isShared_2589_ = v_isSharedCheck_2602_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v___x_2585_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2602_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
size_t v___x_2590_; size_t v___x_2591_; uint8_t v___x_2592_; 
v___x_2590_ = lean_ptr_addr(v_prop_2584_);
v___x_2591_ = lean_ptr_addr(v_a_2586_);
v___x_2592_ = lean_usize_dec_eq(v___x_2590_, v___x_2591_);
if (v___x_2592_ == 0)
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2597_; 
lean_dec_ref(v_e_2456_);
v___x_2593_ = lean_unsigned_to_nat(1u);
v___x_2594_ = lean_array_get(v___x_2573_, v_x_2458_, v___x_2593_);
lean_dec_ref(v_x_2458_);
v___x_2595_ = l_Lean_mkAppB(v_x_2457_, v_a_2586_, v___x_2594_);
if (v_isShared_2589_ == 0)
{
lean_ctor_set(v___x_2588_, 0, v___x_2595_);
v___x_2597_ = v___x_2588_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2595_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
else
{
lean_object* v___x_2600_; 
lean_dec(v_a_2586_);
lean_dec_ref(v_x_2458_);
lean_dec_ref(v_x_2457_);
if (v_isShared_2589_ == 0)
{
lean_ctor_set(v___x_2588_, 0, v_e_2456_);
v___x_2600_ = v___x_2588_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_e_2456_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
}
}
else
{
lean_dec_ref(v_x_2458_);
lean_dec_ref(v_x_2457_);
lean_dec_ref(v_e_2456_);
return v___x_2585_;
}
}
}
}
v___jp_2468_:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; 
v___x_2479_ = lean_box(0);
lean_inc_ref(v_f_2471_);
v___x_2480_ = l_Lean_Meta_getFunInfo(v_f_2471_, v___x_2479_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_);
if (lean_obj_tag(v___x_2480_) == 0)
{
lean_object* v_a_2481_; lean_object* v_paramInfo_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2516_; 
v_a_2481_ = lean_ctor_get(v___x_2480_, 0);
lean_inc(v_a_2481_);
lean_dec_ref_known(v___x_2480_, 1);
v_paramInfo_2482_ = lean_ctor_get(v_a_2481_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v_a_2481_);
if (v_isSharedCheck_2516_ == 0)
{
lean_object* v_unused_2517_; 
v_unused_2517_ = lean_ctor_get(v_a_2481_, 1);
lean_dec(v_unused_2517_);
v___x_2484_ = v_a_2481_;
v_isShared_2485_ = v_isSharedCheck_2516_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_paramInfo_2482_);
lean_dec(v_a_2481_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2516_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2490_; 
v___x_2486_ = lean_array_get_size(v___y_2469_);
v___x_2487_ = lean_unsigned_to_nat(0u);
v___x_2488_ = lean_box(v_modified_2470_);
if (v_isShared_2485_ == 0)
{
lean_ctor_set(v___x_2484_, 1, v___y_2469_);
lean_ctor_set(v___x_2484_, 0, v___x_2488_);
v___x_2490_ = v___x_2484_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v___x_2488_);
lean_ctor_set(v_reuseFailAlloc_2515_, 1, v___y_2469_);
v___x_2490_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
lean_object* v___x_2491_; 
v___x_2491_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(v___x_2486_, v_paramInfo_2482_, v___x_2487_, v___x_2490_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_);
lean_dec_ref(v_paramInfo_2482_);
if (lean_obj_tag(v___x_2491_) == 0)
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2506_; 
v_a_2492_ = lean_ctor_get(v___x_2491_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2491_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2494_ = v___x_2491_;
v_isShared_2495_ = v_isSharedCheck_2506_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2491_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2506_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v_fst_2496_; uint8_t v___x_2497_; 
v_fst_2496_ = lean_ctor_get(v_a_2492_, 0);
v___x_2497_ = lean_unbox(v_fst_2496_);
if (v___x_2497_ == 0)
{
lean_object* v___x_2499_; 
lean_dec(v_a_2492_);
lean_dec_ref(v_f_2471_);
if (v_isShared_2495_ == 0)
{
lean_ctor_set(v___x_2494_, 0, v_e_2456_);
v___x_2499_ = v___x_2494_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_e_2456_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
else
{
lean_object* v_snd_2501_; lean_object* v___x_2502_; lean_object* v___x_2504_; 
lean_dec_ref(v_e_2456_);
v_snd_2501_ = lean_ctor_get(v_a_2492_, 1);
lean_inc(v_snd_2501_);
lean_dec(v_a_2492_);
v___x_2502_ = l_Lean_mkAppN(v_f_2471_, v_snd_2501_);
lean_dec(v_snd_2501_);
if (v_isShared_2495_ == 0)
{
lean_ctor_set(v___x_2494_, 0, v___x_2502_);
v___x_2504_ = v___x_2494_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v___x_2502_);
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
else
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2514_; 
lean_dec_ref(v_f_2471_);
lean_dec_ref(v_e_2456_);
v_a_2507_ = lean_ctor_get(v___x_2491_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2491_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2509_ = v___x_2491_;
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2491_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
}
}
}
else
{
lean_object* v_a_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2525_; 
lean_dec_ref(v_f_2471_);
lean_dec_ref(v___y_2469_);
lean_dec_ref(v_e_2456_);
v_a_2518_ = lean_ctor_get(v___x_2480_, 0);
v_isSharedCheck_2525_ = !lean_is_exclusive(v___x_2480_);
if (v_isSharedCheck_2525_ == 0)
{
v___x_2520_ = v___x_2480_;
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_a_2518_);
lean_dec(v___x_2480_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2523_; 
if (v_isShared_2521_ == 0)
{
v___x_2523_ = v___x_2520_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v_a_2518_);
v___x_2523_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
return v___x_2523_;
}
}
}
}
v___jp_2526_:
{
lean_object* v___x_2536_; 
lean_inc_ref(v_x_2457_);
v___x_2536_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_x_2457_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_a_2537_; size_t v___x_2538_; size_t v___x_2539_; uint8_t v___x_2540_; 
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
lean_dec_ref_known(v___x_2536_, 1);
v___x_2538_ = lean_ptr_addr(v_x_2457_);
v___x_2539_ = lean_ptr_addr(v_a_2537_);
v___x_2540_ = lean_usize_dec_eq(v___x_2538_, v___x_2539_);
if (v___x_2540_ == 0)
{
uint8_t v___x_2541_; 
lean_dec_ref(v_x_2457_);
v___x_2541_ = 1;
v___y_2469_ = v_args_2527_;
v_modified_2470_ = v___x_2541_;
v_f_2471_ = v_a_2537_;
v___y_2472_ = v___y_2529_;
v___y_2473_ = v___y_2530_;
v___y_2474_ = v___y_2531_;
v___y_2475_ = v___y_2532_;
v___y_2476_ = v___y_2533_;
v___y_2477_ = v___y_2534_;
v___y_2478_ = v___y_2535_;
goto v___jp_2468_;
}
else
{
lean_dec(v_a_2537_);
v___y_2469_ = v_args_2527_;
v_modified_2470_ = v_modified_2528_;
v_f_2471_ = v_x_2457_;
v___y_2472_ = v___y_2529_;
v___y_2473_ = v___y_2530_;
v___y_2474_ = v___y_2531_;
v___y_2475_ = v___y_2532_;
v___y_2476_ = v___y_2533_;
v___y_2477_ = v___y_2534_;
v___y_2478_ = v___y_2535_;
goto v___jp_2468_;
}
}
else
{
lean_dec_ref(v_args_2527_);
lean_dec_ref(v_x_2457_);
lean_dec_ref(v_e_2456_);
return v___x_2536_;
}
}
v___jp_2542_:
{
uint8_t v_modified_2550_; lean_object* v___x_2551_; uint8_t v_modified_2552_; 
v_modified_2550_ = 0;
v___x_2551_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__6));
v_modified_2552_ = l_Lean_Expr_isConstOf(v_x_2457_, v___x_2551_);
if (v_modified_2552_ == 0)
{
v_args_2527_ = v_x_2458_;
v_modified_2528_ = v_modified_2550_;
v___y_2529_ = v___y_2543_;
v___y_2530_ = v___y_2544_;
v___y_2531_ = v___y_2545_;
v___y_2532_ = v___y_2546_;
v___y_2533_ = v___y_2547_;
v___y_2534_ = v___y_2548_;
v___y_2535_ = v___y_2549_;
goto v___jp_2526_;
}
else
{
lean_object* v___x_2553_; 
lean_inc_ref(v_x_2458_);
v___x_2553_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f(v_x_2458_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2554_);
lean_dec_ref_known(v___x_2553_, 1);
if (lean_obj_tag(v_a_2554_) == 1)
{
lean_object* v_val_2555_; 
lean_dec_ref(v_x_2458_);
v_val_2555_ = lean_ctor_get(v_a_2554_, 0);
lean_inc(v_val_2555_);
lean_dec_ref_known(v_a_2554_, 1);
v_args_2527_ = v_val_2555_;
v_modified_2528_ = v_modified_2552_;
v___y_2529_ = v___y_2543_;
v___y_2530_ = v___y_2544_;
v___y_2531_ = v___y_2545_;
v___y_2532_ = v___y_2546_;
v___y_2533_ = v___y_2547_;
v___y_2534_ = v___y_2548_;
v___y_2535_ = v___y_2549_;
goto v___jp_2526_;
}
else
{
lean_dec(v_a_2554_);
v_args_2527_ = v_x_2458_;
v_modified_2528_ = v_modified_2550_;
v___y_2529_ = v___y_2543_;
v___y_2530_ = v___y_2544_;
v___y_2531_ = v___y_2545_;
v___y_2532_ = v___y_2546_;
v___y_2533_ = v___y_2547_;
v___y_2534_ = v___y_2548_;
v___y_2535_ = v___y_2549_;
goto v___jp_2526_;
}
}
else
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2563_; 
lean_dec_ref(v_x_2458_);
lean_dec_ref(v_x_2457_);
lean_dec_ref(v_e_2456_);
v_a_2556_ = lean_ctor_get(v___x_2553_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2553_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2558_ = v___x_2553_;
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v___x_2553_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2561_; 
if (v_isShared_2559_ == 0)
{
v___x_2561_ = v___x_2558_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v_a_2556_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
return v___x_2561_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(lean_object* v_e_2603_, uint8_t v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_){
_start:
{
lean_object* v_dummy_2612_; lean_object* v_nargs_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v_dummy_2612_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__1, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__1);
v_nargs_2613_ = l_Lean_Expr_getAppNumArgs(v_e_2603_);
lean_inc(v_nargs_2613_);
v___x_2614_ = lean_mk_array(v_nargs_2613_, v_dummy_2612_);
v___x_2615_ = lean_unsigned_to_nat(1u);
v___x_2616_ = lean_nat_sub(v_nargs_2613_, v___x_2615_);
lean_dec(v_nargs_2613_);
lean_inc_ref(v_e_2603_);
v___x_2617_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(v_e_2603_, v_e_2603_, v___x_2614_, v___x_2616_, v_a_2604_, v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_, v_a_2609_, v_a_2610_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(lean_object* v_e_2618_, uint8_t v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_){
_start:
{
uint8_t v___x_2647_; 
lean_inc_ref(v_e_2618_);
v___x_2647_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(v_e_2618_);
if (v___x_2647_ == 0)
{
lean_object* v_f_2648_; 
v_f_2648_ = l_Lean_Expr_getAppFn(v_e_2618_);
if (lean_obj_tag(v_f_2648_) == 4)
{
lean_object* v_declName_2649_; lean_object* v___x_2650_; uint8_t v___x_2651_; 
v_declName_2649_ = lean_ctor_get(v_f_2648_, 0);
lean_inc(v_declName_2649_);
lean_dec_ref_known(v_f_2648_, 2);
v___x_2650_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0));
v___x_2651_ = lean_name_eq(v_declName_2649_, v___x_2650_);
if (v___x_2651_ == 0)
{
lean_object* v___x_2652_; uint8_t v___x_2653_; 
v___x_2652_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4));
v___x_2653_ = lean_name_eq(v_declName_2649_, v___x_2652_);
if (v___x_2653_ == 0)
{
lean_object* v___x_2654_; uint8_t v___x_2655_; 
v___x_2654_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2));
v___x_2655_ = lean_name_eq(v_declName_2649_, v___x_2654_);
if (v___x_2655_ == 0)
{
lean_object* v___x_2656_; uint8_t v___x_2657_; 
v___x_2656_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___closed__6));
v___x_2657_ = lean_name_eq(v_declName_2649_, v___x_2656_);
if (v___x_2657_ == 0)
{
lean_object* v___x_2658_; 
v___x_2658_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(v_declName_2649_, v_a_2625_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2688_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2658_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2661_ = v___x_2658_;
v_isShared_2662_ = v_isSharedCheck_2688_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_a_2659_);
lean_dec(v___x_2658_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2688_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
if (lean_obj_tag(v_a_2659_) == 1)
{
lean_object* v_val_2663_; lean_object* v___x_2664_; 
lean_del_object(v___x_2661_);
v_val_2663_ = lean_ctor_get(v_a_2659_, 0);
lean_inc(v_val_2663_);
lean_dec_ref_known(v_a_2659_, 1);
lean_inc_ref(v_e_2618_);
v___x_2664_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(v_val_2663_, v_e_2618_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_);
lean_dec(v_val_2663_);
if (lean_obj_tag(v___x_2664_) == 0)
{
lean_object* v_a_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2676_; 
v_a_2665_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2667_ = v___x_2664_;
v_isShared_2668_ = v_isSharedCheck_2676_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_a_2665_);
lean_dec(v___x_2664_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2676_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
if (lean_obj_tag(v_a_2665_) == 0)
{
lean_object* v___x_2670_; 
if (v_isShared_2668_ == 0)
{
lean_ctor_set(v___x_2667_, 0, v_e_2618_);
v___x_2670_ = v___x_2667_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v_e_2618_);
v___x_2670_ = v_reuseFailAlloc_2671_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
return v___x_2670_;
}
}
else
{
lean_object* v_val_2672_; lean_object* v___x_2674_; 
lean_dec_ref(v_e_2618_);
v_val_2672_ = lean_ctor_get(v_a_2665_, 0);
lean_inc(v_val_2672_);
lean_dec_ref_known(v_a_2665_, 1);
if (v_isShared_2668_ == 0)
{
lean_ctor_set(v___x_2667_, 0, v_val_2672_);
v___x_2674_ = v___x_2667_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_val_2672_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
}
else
{
lean_object* v_a_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2684_; 
lean_dec_ref(v_e_2618_);
v_a_2677_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2679_ = v___x_2664_;
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_a_2677_);
lean_dec(v___x_2664_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2682_; 
if (v_isShared_2680_ == 0)
{
v___x_2682_ = v___x_2679_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_a_2677_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
else
{
lean_object* v___x_2686_; 
lean_dec(v_a_2659_);
if (v_isShared_2662_ == 0)
{
lean_ctor_set(v___x_2661_, 0, v_e_2618_);
v___x_2686_ = v___x_2661_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_e_2618_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
else
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
lean_dec_ref(v_e_2618_);
v_a_2689_ = lean_ctor_get(v___x_2658_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2658_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___x_2658_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2658_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2689_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
else
{
lean_dec(v_declName_2649_);
goto v___jp_2627_;
}
}
else
{
lean_dec(v_declName_2649_);
goto v___jp_2627_;
}
}
else
{
lean_dec(v_declName_2649_);
goto v___jp_2627_;
}
}
else
{
lean_dec(v_declName_2649_);
goto v___jp_2627_;
}
}
else
{
lean_object* v___x_2697_; 
lean_dec_ref(v_f_2648_);
v___x_2697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2697_, 0, v_e_2618_);
return v___x_2697_;
}
}
else
{
lean_object* v___x_2698_; lean_object* v___x_2699_; 
lean_inc_ref(v_e_2618_);
v___x_2698_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_evalNat_x3f___boxed), 8, 1);
lean_closure_set(v___x_2698_, 0, v_e_2618_);
v___x_2699_ = l_Lean_Meta_Sym_SymM_run___redArg(v___x_2698_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2733_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2702_ = v___x_2699_;
v_isShared_2703_ = v_isSharedCheck_2733_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_a_2700_);
lean_dec(v___x_2699_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2733_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
if (lean_obj_tag(v_a_2700_) == 1)
{
lean_object* v_val_2704_; lean_object* v___x_2705_; lean_object* v___x_2707_; 
lean_dec_ref(v_e_2618_);
v_val_2704_ = lean_ctor_get(v_a_2700_, 0);
lean_inc(v_val_2704_);
lean_dec_ref_known(v_a_2700_, 1);
v___x_2705_ = l_Lean_mkNatLit(v_val_2704_);
if (v_isShared_2703_ == 0)
{
lean_ctor_set(v___x_2702_, 0, v___x_2705_);
v___x_2707_ = v___x_2702_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v___x_2705_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
else
{
lean_object* v___x_2709_; 
lean_del_object(v___x_2702_);
lean_dec(v_a_2700_);
lean_inc_ref(v_e_2618_);
v___x_2709_ = l_Lean_Meta_Sym_Arith_isOffset_x3f(v_e_2618_, v_a_2620_, v_a_2621_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_);
if (lean_obj_tag(v___x_2709_) == 0)
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2724_; 
v_a_2710_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2712_ = v___x_2709_;
v_isShared_2713_ = v_isSharedCheck_2724_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2709_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2724_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
if (lean_obj_tag(v_a_2710_) == 1)
{
lean_object* v_val_2714_; lean_object* v_fst_2715_; lean_object* v_snd_2716_; lean_object* v___x_2717_; lean_object* v___x_2719_; 
lean_dec_ref(v_e_2618_);
v_val_2714_ = lean_ctor_get(v_a_2710_, 0);
lean_inc(v_val_2714_);
lean_dec_ref_known(v_a_2710_, 1);
v_fst_2715_ = lean_ctor_get(v_val_2714_, 0);
lean_inc(v_fst_2715_);
v_snd_2716_ = lean_ctor_get(v_val_2714_, 1);
lean_inc(v_snd_2716_);
lean_dec(v_val_2714_);
v___x_2717_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_mkOffset(v_fst_2715_, v_snd_2716_);
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 0, v___x_2717_);
v___x_2719_ = v___x_2712_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
else
{
lean_object* v___x_2722_; 
lean_dec(v_a_2710_);
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 0, v_e_2618_);
v___x_2722_ = v___x_2712_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_e_2618_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
}
}
}
}
else
{
lean_object* v_a_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2732_; 
lean_dec_ref(v_e_2618_);
v_a_2725_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2727_ = v___x_2709_;
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_a_2725_);
lean_dec(v___x_2709_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2730_; 
if (v_isShared_2728_ == 0)
{
v___x_2730_ = v___x_2727_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_a_2725_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec_ref(v_e_2618_);
v_a_2734_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2699_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2699_);
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
v___jp_2627_:
{
lean_object* v___x_2628_; 
lean_inc_ref(v_e_2618_);
v___x_2628_ = l_Lean_Meta_Sym_Canon_normNumLit_x3f(v_e_2618_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v_a_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2638_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2638_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2631_ = v___x_2628_;
v_isShared_2632_ = v_isSharedCheck_2638_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_a_2629_);
lean_dec(v___x_2628_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2638_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
if (lean_obj_tag(v_a_2629_) == 1)
{
lean_object* v_val_2633_; lean_object* v___x_2634_; 
lean_del_object(v___x_2631_);
lean_dec_ref(v_e_2618_);
v_val_2633_ = lean_ctor_get(v_a_2629_, 0);
lean_inc(v_val_2633_);
lean_dec_ref_known(v_a_2629_, 1);
v___x_2634_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_val_2633_, v_a_2619_, v_a_2620_, v_a_2621_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_);
return v___x_2634_;
}
else
{
lean_object* v___x_2636_; 
lean_dec(v_a_2629_);
if (v_isShared_2632_ == 0)
{
lean_ctor_set(v___x_2631_, 0, v_e_2618_);
v___x_2636_ = v___x_2631_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v_e_2618_);
v___x_2636_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
return v___x_2636_;
}
}
}
}
else
{
lean_object* v_a_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2646_; 
lean_dec_ref(v_e_2618_);
v_a_2639_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2646_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2646_ == 0)
{
v___x_2641_ = v___x_2628_;
v_isShared_2642_ = v_isSharedCheck_2646_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_a_2639_);
lean_dec(v___x_2628_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2646_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v___x_2644_; 
if (v_isShared_2642_ == 0)
{
v___x_2644_ = v___x_2641_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v_a_2639_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
return v___x_2644_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(lean_object* v_e_2742_, uint8_t v_a_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_){
_start:
{
lean_object* v___x_2751_; 
v___x_2751_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(v_e_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_);
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_object* v_a_2752_; lean_object* v___x_2753_; 
v_a_2752_ = lean_ctor_get(v___x_2751_, 0);
lean_inc(v_a_2752_);
lean_dec_ref_known(v___x_2751_, 1);
v___x_2753_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(v_a_2752_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_);
return v___x_2753_;
}
else
{
return v___x_2751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(lean_object* v_e_2754_, uint8_t v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_){
_start:
{
lean_object* v___x_2763_; 
v___x_2763_ = l_Lean_Meta_reduceMatcher_x3f(v_e_2754_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_);
if (lean_obj_tag(v___x_2763_) == 0)
{
lean_object* v_a_2764_; 
v_a_2764_ = lean_ctor_get(v___x_2763_, 0);
lean_inc(v_a_2764_);
lean_dec_ref_known(v___x_2763_, 1);
if (lean_obj_tag(v_a_2764_) == 0)
{
lean_object* v_val_2765_; lean_object* v___x_2766_; 
lean_dec_ref(v_e_2754_);
v_val_2765_ = lean_ctor_get(v_a_2764_, 0);
lean_inc_ref(v_val_2765_);
lean_dec_ref_known(v_a_2764_, 1);
v___x_2766_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_val_2765_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_);
return v___x_2766_;
}
else
{
lean_object* v___x_2767_; 
lean_dec(v_a_2764_);
v___x_2767_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(v_e_2754_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_);
if (lean_obj_tag(v___x_2767_) == 0)
{
lean_object* v_a_2768_; lean_object* v___x_2769_; 
v_a_2768_ = lean_ctor_get(v___x_2767_, 0);
lean_inc(v_a_2768_);
lean_dec_ref_known(v___x_2767_, 1);
v___x_2769_ = l_Lean_Meta_reduceMatcher_x3f(v_a_2768_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2779_; 
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2772_ = v___x_2769_;
v_isShared_2773_ = v_isSharedCheck_2779_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2769_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2779_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
if (lean_obj_tag(v_a_2770_) == 0)
{
lean_object* v_val_2774_; lean_object* v___x_2775_; 
lean_del_object(v___x_2772_);
lean_dec(v_a_2768_);
v_val_2774_ = lean_ctor_get(v_a_2770_, 0);
lean_inc_ref(v_val_2774_);
lean_dec_ref_known(v_a_2770_, 1);
v___x_2775_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_val_2774_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_);
return v___x_2775_;
}
else
{
lean_object* v___x_2777_; 
lean_dec(v_a_2770_);
if (v_isShared_2773_ == 0)
{
lean_ctor_set(v___x_2772_, 0, v_a_2768_);
v___x_2777_ = v___x_2772_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2768_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
lean_dec(v_a_2768_);
v_a_2780_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2769_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2769_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
else
{
return v___x_2767_;
}
}
}
else
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2795_; 
lean_dec_ref(v_e_2754_);
v_a_2788_ = lean_ctor_get(v___x_2763_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v___x_2763_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2790_ = v___x_2763_;
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v___x_2763_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2793_; 
if (v_isShared_2791_ == 0)
{
v___x_2793_ = v___x_2790_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v_a_2788_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(lean_object* v_e_2802_, uint8_t v_a_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_, lean_object* v_a_2809_){
_start:
{
uint8_t v___y_2812_; lean_object* v___y_2813_; lean_object* v___y_2814_; lean_object* v___y_2815_; lean_object* v___y_2816_; lean_object* v___y_2817_; lean_object* v___y_2818_; lean_object* v___x_2821_; 
lean_inc_ref(v_e_2802_);
v___x_2821_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2802_, v_a_2807_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; lean_object* v___x_2823_; uint8_t v___x_2824_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
lean_inc(v_a_2822_);
lean_dec_ref_known(v___x_2821_, 1);
v___x_2823_ = l_Lean_Expr_cleanupAnnotations(v_a_2822_);
v___x_2824_ = l_Lean_Expr_isApp(v___x_2823_);
if (v___x_2824_ == 0)
{
lean_dec_ref(v___x_2823_);
v___y_2812_ = v_a_2803_;
v___y_2813_ = v_a_2804_;
v___y_2814_ = v_a_2805_;
v___y_2815_ = v_a_2806_;
v___y_2816_ = v_a_2807_;
v___y_2817_ = v_a_2808_;
v___y_2818_ = v_a_2809_;
goto v___jp_2811_;
}
else
{
lean_object* v_arg_2825_; lean_object* v___x_2826_; uint8_t v___x_2827_; 
v_arg_2825_ = lean_ctor_get(v___x_2823_, 1);
lean_inc_ref(v_arg_2825_);
v___x_2826_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2823_);
v___x_2827_ = l_Lean_Expr_isApp(v___x_2826_);
if (v___x_2827_ == 0)
{
lean_dec_ref(v___x_2826_);
lean_dec_ref(v_arg_2825_);
v___y_2812_ = v_a_2803_;
v___y_2813_ = v_a_2804_;
v___y_2814_ = v_a_2805_;
v___y_2815_ = v_a_2806_;
v___y_2816_ = v_a_2807_;
v___y_2817_ = v_a_2808_;
v___y_2818_ = v_a_2809_;
goto v___jp_2811_;
}
else
{
lean_object* v_arg_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; uint8_t v___x_2831_; 
v_arg_2828_ = lean_ctor_get(v___x_2826_, 1);
lean_inc_ref(v_arg_2828_);
v___x_2829_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2826_);
v___x_2830_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2));
v___x_2831_ = l_Lean_Expr_isConstOf(v___x_2829_, v___x_2830_);
if (v___x_2831_ == 0)
{
lean_dec_ref(v___x_2829_);
lean_dec_ref(v_arg_2828_);
lean_dec_ref(v_arg_2825_);
v___y_2812_ = v_a_2803_;
v___y_2813_ = v_a_2804_;
v___y_2814_ = v_a_2805_;
v___y_2815_ = v_a_2806_;
v___y_2816_ = v_a_2807_;
v___y_2817_ = v_a_2808_;
v___y_2818_ = v_a_2809_;
goto v___jp_2811_;
}
else
{
lean_object* v___x_2832_; 
v___x_2832_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(v___x_2829_, v_arg_2828_, v_arg_2825_, v_e_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_, v_a_2807_, v_a_2808_, v_a_2809_);
return v___x_2832_;
}
}
}
}
else
{
lean_dec_ref(v_e_2802_);
return v___x_2821_;
}
v___jp_2811_:
{
uint8_t v___x_2819_; lean_object* v___x_2820_; 
v___x_2819_ = 0;
v___x_2820_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(v_e_2802_, v___x_2819_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_);
return v___x_2820_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(lean_object* v_f_2833_, lean_object* v_00_u03b1_2834_, lean_object* v_c_2835_, lean_object* v_inst_2836_, lean_object* v_a_2837_, lean_object* v_b_2838_, uint8_t v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_, lean_object* v_a_2845_){
_start:
{
lean_object* v___x_2847_; 
v___x_2847_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_c_2835_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v_a_2848_; uint8_t v___x_2849_; 
v_a_2848_ = lean_ctor_get(v___x_2847_, 0);
lean_inc_n(v_a_2848_, 2);
lean_dec_ref_known(v___x_2847_, 1);
v___x_2849_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(v_a_2848_);
if (v___x_2849_ == 0)
{
uint8_t v___x_2850_; 
lean_inc(v_a_2848_);
v___x_2850_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(v_a_2848_);
if (v___x_2850_ == 0)
{
lean_object* v___x_2851_; 
v___x_2851_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v_00_u03b1_2834_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_);
if (lean_obj_tag(v___x_2851_) == 0)
{
lean_object* v_a_2852_; lean_object* v___x_2853_; 
v_a_2852_ = lean_ctor_get(v___x_2851_, 0);
lean_inc(v_a_2852_);
lean_dec_ref_known(v___x_2851_, 1);
v___x_2853_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(v_inst_2836_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_);
if (lean_obj_tag(v___x_2853_) == 0)
{
lean_object* v_a_2854_; lean_object* v___x_2855_; 
v_a_2854_ = lean_ctor_get(v___x_2853_, 0);
lean_inc(v_a_2854_);
lean_dec_ref_known(v___x_2853_, 1);
v___x_2855_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_2837_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_);
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_object* v_a_2856_; lean_object* v___x_2857_; 
v_a_2856_ = lean_ctor_get(v___x_2855_, 0);
lean_inc(v_a_2856_);
lean_dec_ref_known(v___x_2855_, 1);
v___x_2857_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_);
if (lean_obj_tag(v___x_2857_) == 0)
{
lean_object* v_a_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2866_; 
v_a_2858_ = lean_ctor_get(v___x_2857_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2857_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2860_ = v___x_2857_;
v_isShared_2861_ = v_isSharedCheck_2866_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_a_2858_);
lean_dec(v___x_2857_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2866_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2862_; lean_object* v___x_2864_; 
v___x_2862_ = l_Lean_mkApp5(v_f_2833_, v_a_2852_, v_a_2848_, v_a_2854_, v_a_2856_, v_a_2858_);
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 0, v___x_2862_);
v___x_2864_ = v___x_2860_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v___x_2862_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
else
{
lean_dec(v_a_2856_);
lean_dec(v_a_2854_);
lean_dec(v_a_2852_);
lean_dec(v_a_2848_);
lean_dec_ref(v_f_2833_);
return v___x_2857_;
}
}
else
{
lean_dec(v_a_2854_);
lean_dec(v_a_2852_);
lean_dec(v_a_2848_);
lean_dec_ref(v_b_2838_);
lean_dec_ref(v_f_2833_);
return v___x_2855_;
}
}
else
{
lean_dec(v_a_2852_);
lean_dec(v_a_2848_);
lean_dec_ref(v_b_2838_);
lean_dec_ref(v_a_2837_);
lean_dec_ref(v_f_2833_);
return v___x_2853_;
}
}
else
{
lean_dec(v_a_2848_);
lean_dec_ref(v_b_2838_);
lean_dec_ref(v_a_2837_);
lean_dec_ref(v_inst_2836_);
lean_dec_ref(v_f_2833_);
return v___x_2851_;
}
}
else
{
lean_object* v___x_2867_; 
lean_dec(v_a_2848_);
lean_dec_ref(v_a_2837_);
lean_dec_ref(v_inst_2836_);
lean_dec_ref(v_00_u03b1_2834_);
lean_dec_ref(v_f_2833_);
v___x_2867_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_);
return v___x_2867_;
}
}
else
{
lean_object* v___x_2868_; 
lean_dec(v_a_2848_);
lean_dec_ref(v_b_2838_);
lean_dec_ref(v_inst_2836_);
lean_dec_ref(v_00_u03b1_2834_);
lean_dec_ref(v_f_2833_);
v___x_2868_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_2837_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_);
return v___x_2868_;
}
}
else
{
lean_dec_ref(v_b_2838_);
lean_dec_ref(v_a_2837_);
lean_dec_ref(v_inst_2836_);
lean_dec_ref(v_00_u03b1_2834_);
lean_dec_ref(v_f_2833_);
return v___x_2847_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(lean_object* v_f_2869_, lean_object* v_00_u03b1_2870_, lean_object* v_c_2871_, lean_object* v_a_2872_, lean_object* v_b_2873_, uint8_t v_a_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_){
_start:
{
lean_object* v___x_2882_; 
v___x_2882_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_c_2871_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_);
if (lean_obj_tag(v___x_2882_) == 0)
{
lean_object* v_a_2883_; uint8_t v___x_2884_; 
v_a_2883_ = lean_ctor_get(v___x_2882_, 0);
lean_inc_n(v_a_2883_, 2);
lean_dec_ref_known(v___x_2882_, 1);
v___x_2884_ = l_Lean_Expr_isBoolTrue(v_a_2883_);
if (v___x_2884_ == 0)
{
uint8_t v___x_2885_; 
lean_inc(v_a_2883_);
v___x_2885_ = l_Lean_Expr_isBoolFalse(v_a_2883_);
if (v___x_2885_ == 0)
{
lean_object* v___x_2886_; 
v___x_2886_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v_00_u03b1_2870_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_);
if (lean_obj_tag(v___x_2886_) == 0)
{
lean_object* v_a_2887_; lean_object* v___x_2888_; 
v_a_2887_ = lean_ctor_get(v___x_2886_, 0);
lean_inc(v_a_2887_);
lean_dec_ref_known(v___x_2886_, 1);
v___x_2888_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_2872_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_);
if (lean_obj_tag(v___x_2888_) == 0)
{
lean_object* v_a_2889_; lean_object* v___x_2890_; 
v_a_2889_ = lean_ctor_get(v___x_2888_, 0);
lean_inc(v_a_2889_);
lean_dec_ref_known(v___x_2888_, 1);
v___x_2890_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_2873_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2899_; 
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2893_ = v___x_2890_;
v_isShared_2894_ = v_isSharedCheck_2899_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2890_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2899_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2895_; lean_object* v___x_2897_; 
v___x_2895_ = l_Lean_mkApp4(v_f_2869_, v_a_2887_, v_a_2883_, v_a_2889_, v_a_2891_);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 0, v___x_2895_);
v___x_2897_ = v___x_2893_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v___x_2895_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
else
{
lean_dec(v_a_2889_);
lean_dec(v_a_2887_);
lean_dec(v_a_2883_);
lean_dec_ref(v_f_2869_);
return v___x_2890_;
}
}
else
{
lean_dec(v_a_2887_);
lean_dec(v_a_2883_);
lean_dec_ref(v_b_2873_);
lean_dec_ref(v_f_2869_);
return v___x_2888_;
}
}
else
{
lean_dec(v_a_2883_);
lean_dec_ref(v_b_2873_);
lean_dec_ref(v_a_2872_);
lean_dec_ref(v_f_2869_);
return v___x_2886_;
}
}
else
{
lean_object* v___x_2900_; 
lean_dec(v_a_2883_);
lean_dec_ref(v_a_2872_);
lean_dec_ref(v_00_u03b1_2870_);
lean_dec_ref(v_f_2869_);
v___x_2900_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_2873_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_);
return v___x_2900_;
}
}
else
{
lean_object* v___x_2901_; 
lean_dec(v_a_2883_);
lean_dec_ref(v_b_2873_);
lean_dec_ref(v_00_u03b1_2870_);
lean_dec_ref(v_f_2869_);
v___x_2901_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_2872_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_);
return v___x_2901_;
}
}
else
{
lean_dec_ref(v_b_2873_);
lean_dec_ref(v_a_2872_);
lean_dec_ref(v_00_u03b1_2870_);
lean_dec_ref(v_f_2869_);
return v___x_2882_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(lean_object* v_e_2902_, uint8_t v_a_2903_, lean_object* v_a_2904_, lean_object* v_a_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_){
_start:
{
lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v___y_2914_; lean_object* v___y_2915_; lean_object* v___y_2916_; lean_object* v___y_2917_; lean_object* v___y_2918_; uint8_t v___y_2919_; uint8_t v___y_2920_; uint8_t v___y_2939_; lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v___x_2948_; 
lean_inc_ref(v_e_2902_);
v___x_2948_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2902_, v_a_2907_);
if (lean_obj_tag(v___x_2948_) == 0)
{
lean_object* v_a_2949_; lean_object* v___x_2950_; uint8_t v___x_2951_; 
v_a_2949_ = lean_ctor_get(v___x_2948_, 0);
lean_inc(v_a_2949_);
lean_dec_ref_known(v___x_2948_, 1);
v___x_2950_ = l_Lean_Expr_cleanupAnnotations(v_a_2949_);
v___x_2951_ = l_Lean_Expr_isApp(v___x_2950_);
if (v___x_2951_ == 0)
{
lean_dec_ref(v___x_2950_);
v___y_2939_ = v_a_2903_;
v___y_2940_ = v_a_2904_;
v___y_2941_ = v_a_2905_;
v___y_2942_ = v_a_2906_;
v___y_2943_ = v_a_2907_;
v___y_2944_ = v_a_2908_;
v___y_2945_ = v_a_2909_;
goto v___jp_2938_;
}
else
{
lean_object* v_arg_2952_; lean_object* v___x_2953_; uint8_t v___x_2954_; 
v_arg_2952_ = lean_ctor_get(v___x_2950_, 1);
lean_inc_ref(v_arg_2952_);
v___x_2953_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2950_);
v___x_2954_ = l_Lean_Expr_isApp(v___x_2953_);
if (v___x_2954_ == 0)
{
lean_dec_ref(v___x_2953_);
lean_dec_ref(v_arg_2952_);
v___y_2939_ = v_a_2903_;
v___y_2940_ = v_a_2904_;
v___y_2941_ = v_a_2905_;
v___y_2942_ = v_a_2906_;
v___y_2943_ = v_a_2907_;
v___y_2944_ = v_a_2908_;
v___y_2945_ = v_a_2909_;
goto v___jp_2938_;
}
else
{
lean_object* v_arg_2955_; lean_object* v___x_2956_; uint8_t v___x_2957_; 
v_arg_2955_ = lean_ctor_get(v___x_2953_, 1);
lean_inc_ref(v_arg_2955_);
v___x_2956_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2953_);
v___x_2957_ = l_Lean_Expr_isApp(v___x_2956_);
if (v___x_2957_ == 0)
{
lean_dec_ref(v___x_2956_);
lean_dec_ref(v_arg_2955_);
lean_dec_ref(v_arg_2952_);
v___y_2939_ = v_a_2903_;
v___y_2940_ = v_a_2904_;
v___y_2941_ = v_a_2905_;
v___y_2942_ = v_a_2906_;
v___y_2943_ = v_a_2907_;
v___y_2944_ = v_a_2908_;
v___y_2945_ = v_a_2909_;
goto v___jp_2938_;
}
else
{
lean_object* v_arg_2958_; lean_object* v___x_2959_; uint8_t v___x_2960_; 
v_arg_2958_ = lean_ctor_get(v___x_2956_, 1);
lean_inc_ref(v_arg_2958_);
v___x_2959_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2956_);
v___x_2960_ = l_Lean_Expr_isApp(v___x_2959_);
if (v___x_2960_ == 0)
{
lean_dec_ref(v___x_2959_);
lean_dec_ref(v_arg_2958_);
lean_dec_ref(v_arg_2955_);
lean_dec_ref(v_arg_2952_);
v___y_2939_ = v_a_2903_;
v___y_2940_ = v_a_2904_;
v___y_2941_ = v_a_2905_;
v___y_2942_ = v_a_2906_;
v___y_2943_ = v_a_2907_;
v___y_2944_ = v_a_2908_;
v___y_2945_ = v_a_2909_;
goto v___jp_2938_;
}
else
{
lean_object* v_arg_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; uint8_t v___x_2964_; 
v_arg_2961_ = lean_ctor_get(v___x_2959_, 1);
lean_inc_ref(v_arg_2961_);
v___x_2962_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2959_);
v___x_2963_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1));
v___x_2964_ = l_Lean_Expr_isConstOf(v___x_2962_, v___x_2963_);
if (v___x_2964_ == 0)
{
uint8_t v___x_2965_; 
v___x_2965_ = l_Lean_Expr_isApp(v___x_2962_);
if (v___x_2965_ == 0)
{
lean_dec_ref(v___x_2962_);
lean_dec_ref(v_arg_2961_);
lean_dec_ref(v_arg_2958_);
lean_dec_ref(v_arg_2955_);
lean_dec_ref(v_arg_2952_);
v___y_2939_ = v_a_2903_;
v___y_2940_ = v_a_2904_;
v___y_2941_ = v_a_2905_;
v___y_2942_ = v_a_2906_;
v___y_2943_ = v_a_2907_;
v___y_2944_ = v_a_2908_;
v___y_2945_ = v_a_2909_;
goto v___jp_2938_;
}
else
{
lean_object* v_arg_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; uint8_t v___x_2969_; 
v_arg_2966_ = lean_ctor_get(v___x_2962_, 1);
lean_inc_ref(v_arg_2966_);
v___x_2967_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2962_);
v___x_2968_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3));
v___x_2969_ = l_Lean_Expr_isConstOf(v___x_2967_, v___x_2968_);
if (v___x_2969_ == 0)
{
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_arg_2966_);
lean_dec_ref(v_arg_2961_);
lean_dec_ref(v_arg_2958_);
lean_dec_ref(v_arg_2955_);
lean_dec_ref(v_arg_2952_);
v___y_2939_ = v_a_2903_;
v___y_2940_ = v_a_2904_;
v___y_2941_ = v_a_2905_;
v___y_2942_ = v_a_2906_;
v___y_2943_ = v_a_2907_;
v___y_2944_ = v_a_2908_;
v___y_2945_ = v_a_2909_;
goto v___jp_2938_;
}
else
{
lean_object* v___x_2970_; 
lean_dec_ref(v_e_2902_);
v___x_2970_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(v___x_2967_, v_arg_2966_, v_arg_2961_, v_arg_2958_, v_arg_2955_, v_arg_2952_, v_a_2903_, v_a_2904_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_);
return v___x_2970_;
}
}
}
else
{
lean_object* v___x_2971_; 
lean_dec_ref(v_e_2902_);
v___x_2971_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(v___x_2962_, v_arg_2961_, v_arg_2958_, v_arg_2955_, v_arg_2952_, v_a_2903_, v_a_2904_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_);
return v___x_2971_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_2902_);
return v___x_2948_;
}
v___jp_2911_:
{
if (v___y_2920_ == 0)
{
if (lean_obj_tag(v___y_2913_) == 4)
{
lean_object* v_declName_2921_; lean_object* v___x_2922_; 
v_declName_2921_ = lean_ctor_get(v___y_2913_, 0);
lean_inc(v_declName_2921_);
lean_dec_ref_known(v___y_2913_, 2);
v___x_2922_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(v_declName_2921_, v___y_2914_);
if (lean_obj_tag(v___x_2922_) == 0)
{
lean_object* v_a_2923_; uint8_t v___x_2924_; 
v_a_2923_ = lean_ctor_get(v___x_2922_, 0);
lean_inc(v_a_2923_);
lean_dec_ref_known(v___x_2922_, 1);
v___x_2924_ = lean_unbox(v_a_2923_);
lean_dec(v_a_2923_);
if (v___x_2924_ == 0)
{
lean_object* v___x_2925_; 
v___x_2925_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(v_e_2902_, v___y_2919_, v___y_2912_, v___y_2916_, v___y_2915_, v___y_2917_, v___y_2918_, v___y_2914_);
return v___x_2925_;
}
else
{
lean_object* v___x_2926_; 
v___x_2926_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(v_e_2902_, v___y_2919_, v___y_2912_, v___y_2916_, v___y_2915_, v___y_2917_, v___y_2918_, v___y_2914_);
return v___x_2926_;
}
}
else
{
lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2934_; 
lean_dec_ref(v_e_2902_);
v_a_2927_ = lean_ctor_get(v___x_2922_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2922_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2929_ = v___x_2922_;
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_dec(v___x_2922_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___x_2932_; 
if (v_isShared_2930_ == 0)
{
v___x_2932_ = v___x_2929_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2927_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
else
{
lean_object* v___x_2935_; 
lean_dec_ref(v___y_2913_);
v___x_2935_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(v_e_2902_, v___y_2919_, v___y_2912_, v___y_2916_, v___y_2915_, v___y_2917_, v___y_2918_, v___y_2914_);
return v___x_2935_;
}
}
else
{
lean_object* v___x_2936_; lean_object* v___x_2937_; 
lean_dec_ref(v___y_2913_);
v___x_2936_ = l_Lean_Expr_headBeta(v_e_2902_);
v___x_2937_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_2936_, v___y_2919_, v___y_2912_, v___y_2916_, v___y_2915_, v___y_2917_, v___y_2918_, v___y_2914_);
return v___x_2937_;
}
}
v___jp_2938_:
{
lean_object* v___x_2946_; uint8_t v___x_2947_; 
v___x_2946_ = l_Lean_Expr_getAppFn(v_e_2902_);
v___x_2947_ = l_Lean_Expr_isLambda(v___x_2946_);
if (v___x_2947_ == 0)
{
v___y_2912_ = v___y_2940_;
v___y_2913_ = v___x_2946_;
v___y_2914_ = v___y_2945_;
v___y_2915_ = v___y_2942_;
v___y_2916_ = v___y_2941_;
v___y_2917_ = v___y_2943_;
v___y_2918_ = v___y_2944_;
v___y_2919_ = v___y_2939_;
v___y_2920_ = v___x_2947_;
goto v___jp_2911_;
}
else
{
v___y_2912_ = v___y_2940_;
v___y_2913_ = v___x_2946_;
v___y_2914_ = v___y_2945_;
v___y_2915_ = v___y_2942_;
v___y_2916_ = v___y_2941_;
v___y_2917_ = v___y_2943_;
v___y_2918_ = v___y_2944_;
v___y_2919_ = v___y_2939_;
v___y_2920_ = v___y_2939_;
goto v___jp_2911_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3(void){
_start:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2975_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2));
v___x_2976_ = lean_unsigned_to_nat(18u);
v___x_2977_ = lean_unsigned_to_nat(1896u);
v___x_2978_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1));
v___x_2979_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0));
v___x_2980_ = l_mkPanicMessageWithDecl(v___x_2979_, v___x_2978_, v___x_2977_, v___x_2976_, v___x_2975_);
return v___x_2980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(lean_object* v_e_2981_, uint8_t v_a_2982_, lean_object* v_a_2983_, lean_object* v_a_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_){
_start:
{
lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2990_ = l_Lean_Expr_projExpr_x21(v_e_2981_);
v___x_2991_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_2990_, v_a_2982_, v_a_2983_, v_a_2984_, v_a_2985_, v_a_2986_, v_a_2987_, v_a_2988_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___y_2994_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref_known(v___x_2991_, 1);
if (lean_obj_tag(v_e_2981_) == 11)
{
lean_object* v_typeName_3016_; lean_object* v_idx_3017_; lean_object* v_struct_3018_; size_t v___x_3019_; size_t v___x_3020_; uint8_t v___x_3021_; 
v_typeName_3016_ = lean_ctor_get(v_e_2981_, 0);
v_idx_3017_ = lean_ctor_get(v_e_2981_, 1);
v_struct_3018_ = lean_ctor_get(v_e_2981_, 2);
v___x_3019_ = lean_ptr_addr(v_struct_3018_);
v___x_3020_ = lean_ptr_addr(v_a_2992_);
v___x_3021_ = lean_usize_dec_eq(v___x_3019_, v___x_3020_);
if (v___x_3021_ == 0)
{
lean_object* v___x_3022_; 
lean_inc(v_idx_3017_);
lean_inc(v_typeName_3016_);
lean_dec_ref_known(v_e_2981_, 3);
v___x_3022_ = l_Lean_Expr_proj___override(v_typeName_3016_, v_idx_3017_, v_a_2992_);
v___y_2994_ = v___x_3022_;
goto v___jp_2993_;
}
else
{
lean_dec(v_a_2992_);
v___y_2994_ = v_e_2981_;
goto v___jp_2993_;
}
}
else
{
lean_object* v___x_3023_; lean_object* v___x_3024_; 
lean_dec(v_a_2992_);
lean_dec_ref(v_e_2981_);
v___x_3023_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3);
v___x_3024_ = l_panic___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj_spec__4(v___x_3023_);
v___y_2994_ = v___x_3024_;
goto v___jp_2993_;
}
v___jp_2993_:
{
lean_object* v___x_2995_; 
lean_inc_ref(v___y_2994_);
v___x_2995_ = l_Lean_Meta_reduceProj_x3f(v___y_2994_, v_a_2985_, v_a_2986_, v_a_2987_, v_a_2988_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3007_; 
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_2998_ = v___x_2995_;
v_isShared_2999_ = v_isSharedCheck_3007_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2995_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3007_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
if (lean_obj_tag(v_a_2996_) == 0)
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 0, v___y_2994_);
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v___y_2994_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
else
{
lean_object* v_val_3003_; lean_object* v___x_3005_; 
lean_dec_ref(v___y_2994_);
v_val_3003_ = lean_ctor_get(v_a_2996_, 0);
lean_inc(v_val_3003_);
lean_dec_ref_known(v_a_2996_, 1);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 0, v_val_3003_);
v___x_3005_ = v___x_2998_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_val_3003_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec_ref(v___y_2994_);
v_a_3008_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_2995_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2995_);
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
}
else
{
lean_dec_ref(v_e_2981_);
return v___x_2991_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(lean_object* v_e_3025_, uint8_t v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_){
_start:
{
switch(lean_obj_tag(v_e_3025_))
{
case 7:
{
lean_object* v___x_3034_; 
v___x_3034_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
if (v_a_3026_ == 0)
{
lean_object* v___x_3035_; lean_object* v_canon_3036_; lean_object* v_cache_3037_; lean_object* v___x_3038_; 
v___x_3035_ = lean_st_ref_get(v_a_3028_);
v_canon_3036_ = lean_ctor_get(v___x_3035_, 9);
lean_inc_ref(v_canon_3036_);
lean_dec(v___x_3035_);
v_cache_3037_ = lean_ctor_get(v_canon_3036_, 0);
lean_inc_ref(v_cache_3037_);
lean_dec_ref(v_canon_3036_);
v___x_3038_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3037_, v_e_3025_);
lean_dec_ref(v_cache_3037_);
if (lean_obj_tag(v___x_3038_) == 1)
{
lean_object* v_val_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3046_; 
lean_dec_ref_known(v_e_3025_, 3);
v_val_3039_ = lean_ctor_get(v___x_3038_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_3038_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3041_ = v___x_3038_;
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_val_3039_);
lean_dec(v___x_3038_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3044_; 
if (v_isShared_3042_ == 0)
{
lean_ctor_set_tag(v___x_3041_, 0);
v___x_3044_ = v___x_3041_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_val_3039_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
else
{
lean_object* v___x_3047_; 
lean_dec(v___x_3038_);
lean_inc_ref(v_e_3025_);
v___x_3047_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v___x_3034_, v_e_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_);
if (lean_obj_tag(v___x_3047_) == 0)
{
lean_object* v_a_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3086_; 
v_a_3048_ = lean_ctor_get(v___x_3047_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3050_ = v___x_3047_;
v_isShared_3051_ = v_isSharedCheck_3086_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_a_3048_);
lean_dec(v___x_3047_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3086_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v___x_3052_; lean_object* v_canon_3053_; lean_object* v_share_3054_; lean_object* v_maxFVar_3055_; lean_object* v_proofInstInfo_3056_; lean_object* v_inferType_3057_; lean_object* v_getLevel_3058_; lean_object* v_congrInfo_3059_; lean_object* v_defEqI_3060_; lean_object* v_extensions_3061_; lean_object* v_issues_3062_; lean_object* v_instanceOverrides_3063_; uint8_t v_debug_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3085_; 
v___x_3052_ = lean_st_ref_take(v_a_3028_);
v_canon_3053_ = lean_ctor_get(v___x_3052_, 9);
v_share_3054_ = lean_ctor_get(v___x_3052_, 0);
v_maxFVar_3055_ = lean_ctor_get(v___x_3052_, 1);
v_proofInstInfo_3056_ = lean_ctor_get(v___x_3052_, 2);
v_inferType_3057_ = lean_ctor_get(v___x_3052_, 3);
v_getLevel_3058_ = lean_ctor_get(v___x_3052_, 4);
v_congrInfo_3059_ = lean_ctor_get(v___x_3052_, 5);
v_defEqI_3060_ = lean_ctor_get(v___x_3052_, 6);
v_extensions_3061_ = lean_ctor_get(v___x_3052_, 7);
v_issues_3062_ = lean_ctor_get(v___x_3052_, 8);
v_instanceOverrides_3063_ = lean_ctor_get(v___x_3052_, 10);
v_debug_3064_ = lean_ctor_get_uint8(v___x_3052_, sizeof(void*)*11);
v_isSharedCheck_3085_ = !lean_is_exclusive(v___x_3052_);
if (v_isSharedCheck_3085_ == 0)
{
v___x_3066_ = v___x_3052_;
v_isShared_3067_ = v_isSharedCheck_3085_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_instanceOverrides_3063_);
lean_inc(v_canon_3053_);
lean_inc(v_issues_3062_);
lean_inc(v_extensions_3061_);
lean_inc(v_defEqI_3060_);
lean_inc(v_congrInfo_3059_);
lean_inc(v_getLevel_3058_);
lean_inc(v_inferType_3057_);
lean_inc(v_proofInstInfo_3056_);
lean_inc(v_maxFVar_3055_);
lean_inc(v_share_3054_);
lean_dec(v___x_3052_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3085_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v_cache_3068_; lean_object* v_cacheInType_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3084_; 
v_cache_3068_ = lean_ctor_get(v_canon_3053_, 0);
v_cacheInType_3069_ = lean_ctor_get(v_canon_3053_, 1);
v_isSharedCheck_3084_ = !lean_is_exclusive(v_canon_3053_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3071_ = v_canon_3053_;
v_isShared_3072_ = v_isSharedCheck_3084_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_cacheInType_3069_);
lean_inc(v_cache_3068_);
lean_dec(v_canon_3053_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3084_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3073_; lean_object* v___x_3075_; 
lean_inc(v_a_3048_);
v___x_3073_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3068_, v_e_3025_, v_a_3048_);
if (v_isShared_3072_ == 0)
{
lean_ctor_set(v___x_3071_, 0, v___x_3073_);
v___x_3075_ = v___x_3071_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v___x_3073_);
lean_ctor_set(v_reuseFailAlloc_3083_, 1, v_cacheInType_3069_);
v___x_3075_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
lean_object* v___x_3077_; 
if (v_isShared_3067_ == 0)
{
lean_ctor_set(v___x_3066_, 9, v___x_3075_);
v___x_3077_ = v___x_3066_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_share_3054_);
lean_ctor_set(v_reuseFailAlloc_3082_, 1, v_maxFVar_3055_);
lean_ctor_set(v_reuseFailAlloc_3082_, 2, v_proofInstInfo_3056_);
lean_ctor_set(v_reuseFailAlloc_3082_, 3, v_inferType_3057_);
lean_ctor_set(v_reuseFailAlloc_3082_, 4, v_getLevel_3058_);
lean_ctor_set(v_reuseFailAlloc_3082_, 5, v_congrInfo_3059_);
lean_ctor_set(v_reuseFailAlloc_3082_, 6, v_defEqI_3060_);
lean_ctor_set(v_reuseFailAlloc_3082_, 7, v_extensions_3061_);
lean_ctor_set(v_reuseFailAlloc_3082_, 8, v_issues_3062_);
lean_ctor_set(v_reuseFailAlloc_3082_, 9, v___x_3075_);
lean_ctor_set(v_reuseFailAlloc_3082_, 10, v_instanceOverrides_3063_);
lean_ctor_set_uint8(v_reuseFailAlloc_3082_, sizeof(void*)*11, v_debug_3064_);
v___x_3077_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
lean_object* v___x_3078_; lean_object* v___x_3080_; 
v___x_3078_ = lean_st_ref_put(v_a_3028_, v___x_3077_);
if (v_isShared_3051_ == 0)
{
v___x_3080_ = v___x_3050_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_a_3048_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3025_, 3);
return v___x_3047_;
}
}
}
else
{
lean_object* v___x_3087_; lean_object* v_canon_3088_; lean_object* v_cacheInType_3089_; lean_object* v___x_3090_; 
v___x_3087_ = lean_st_ref_get(v_a_3028_);
v_canon_3088_ = lean_ctor_get(v___x_3087_, 9);
lean_inc_ref(v_canon_3088_);
lean_dec(v___x_3087_);
v_cacheInType_3089_ = lean_ctor_get(v_canon_3088_, 1);
lean_inc_ref(v_cacheInType_3089_);
lean_dec_ref(v_canon_3088_);
v___x_3090_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3089_, v_e_3025_);
lean_dec_ref(v_cacheInType_3089_);
if (lean_obj_tag(v___x_3090_) == 1)
{
lean_object* v_val_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3098_; 
lean_dec_ref_known(v_e_3025_, 3);
v_val_3091_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3093_ = v___x_3090_;
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_val_3091_);
lean_dec(v___x_3090_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3096_; 
if (v_isShared_3094_ == 0)
{
lean_ctor_set_tag(v___x_3093_, 0);
v___x_3096_ = v___x_3093_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_val_3091_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
}
else
{
lean_object* v___x_3099_; 
lean_dec(v___x_3090_);
lean_inc_ref(v_e_3025_);
v___x_3099_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v___x_3034_, v_e_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3138_; 
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3138_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3138_ == 0)
{
v___x_3102_ = v___x_3099_;
v_isShared_3103_ = v_isSharedCheck_3138_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3099_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3138_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3104_; lean_object* v_canon_3105_; lean_object* v_share_3106_; lean_object* v_maxFVar_3107_; lean_object* v_proofInstInfo_3108_; lean_object* v_inferType_3109_; lean_object* v_getLevel_3110_; lean_object* v_congrInfo_3111_; lean_object* v_defEqI_3112_; lean_object* v_extensions_3113_; lean_object* v_issues_3114_; lean_object* v_instanceOverrides_3115_; uint8_t v_debug_3116_; lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3137_; 
v___x_3104_ = lean_st_ref_take(v_a_3028_);
v_canon_3105_ = lean_ctor_get(v___x_3104_, 9);
v_share_3106_ = lean_ctor_get(v___x_3104_, 0);
v_maxFVar_3107_ = lean_ctor_get(v___x_3104_, 1);
v_proofInstInfo_3108_ = lean_ctor_get(v___x_3104_, 2);
v_inferType_3109_ = lean_ctor_get(v___x_3104_, 3);
v_getLevel_3110_ = lean_ctor_get(v___x_3104_, 4);
v_congrInfo_3111_ = lean_ctor_get(v___x_3104_, 5);
v_defEqI_3112_ = lean_ctor_get(v___x_3104_, 6);
v_extensions_3113_ = lean_ctor_get(v___x_3104_, 7);
v_issues_3114_ = lean_ctor_get(v___x_3104_, 8);
v_instanceOverrides_3115_ = lean_ctor_get(v___x_3104_, 10);
v_debug_3116_ = lean_ctor_get_uint8(v___x_3104_, sizeof(void*)*11);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3118_ = v___x_3104_;
v_isShared_3119_ = v_isSharedCheck_3137_;
goto v_resetjp_3117_;
}
else
{
lean_inc(v_instanceOverrides_3115_);
lean_inc(v_canon_3105_);
lean_inc(v_issues_3114_);
lean_inc(v_extensions_3113_);
lean_inc(v_defEqI_3112_);
lean_inc(v_congrInfo_3111_);
lean_inc(v_getLevel_3110_);
lean_inc(v_inferType_3109_);
lean_inc(v_proofInstInfo_3108_);
lean_inc(v_maxFVar_3107_);
lean_inc(v_share_3106_);
lean_dec(v___x_3104_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3137_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v_cache_3120_; lean_object* v_cacheInType_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3136_; 
v_cache_3120_ = lean_ctor_get(v_canon_3105_, 0);
v_cacheInType_3121_ = lean_ctor_get(v_canon_3105_, 1);
v_isSharedCheck_3136_ = !lean_is_exclusive(v_canon_3105_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3123_ = v_canon_3105_;
v_isShared_3124_ = v_isSharedCheck_3136_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_cacheInType_3121_);
lean_inc(v_cache_3120_);
lean_dec(v_canon_3105_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3136_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3125_; lean_object* v___x_3127_; 
lean_inc(v_a_3100_);
v___x_3125_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3121_, v_e_3025_, v_a_3100_);
if (v_isShared_3124_ == 0)
{
lean_ctor_set(v___x_3123_, 1, v___x_3125_);
v___x_3127_ = v___x_3123_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_cache_3120_);
lean_ctor_set(v_reuseFailAlloc_3135_, 1, v___x_3125_);
v___x_3127_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
lean_object* v___x_3129_; 
if (v_isShared_3119_ == 0)
{
lean_ctor_set(v___x_3118_, 9, v___x_3127_);
v___x_3129_ = v___x_3118_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_share_3106_);
lean_ctor_set(v_reuseFailAlloc_3134_, 1, v_maxFVar_3107_);
lean_ctor_set(v_reuseFailAlloc_3134_, 2, v_proofInstInfo_3108_);
lean_ctor_set(v_reuseFailAlloc_3134_, 3, v_inferType_3109_);
lean_ctor_set(v_reuseFailAlloc_3134_, 4, v_getLevel_3110_);
lean_ctor_set(v_reuseFailAlloc_3134_, 5, v_congrInfo_3111_);
lean_ctor_set(v_reuseFailAlloc_3134_, 6, v_defEqI_3112_);
lean_ctor_set(v_reuseFailAlloc_3134_, 7, v_extensions_3113_);
lean_ctor_set(v_reuseFailAlloc_3134_, 8, v_issues_3114_);
lean_ctor_set(v_reuseFailAlloc_3134_, 9, v___x_3127_);
lean_ctor_set(v_reuseFailAlloc_3134_, 10, v_instanceOverrides_3115_);
lean_ctor_set_uint8(v_reuseFailAlloc_3134_, sizeof(void*)*11, v_debug_3116_);
v___x_3129_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
lean_object* v___x_3130_; lean_object* v___x_3132_; 
v___x_3130_ = lean_st_ref_put(v_a_3028_, v___x_3129_);
if (v_isShared_3103_ == 0)
{
v___x_3132_ = v___x_3102_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_a_3100_);
v___x_3132_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
return v___x_3132_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3025_, 3);
return v___x_3099_;
}
}
}
}
case 6:
{
if (v_a_3026_ == 0)
{
lean_object* v___x_3139_; lean_object* v_canon_3140_; lean_object* v_cache_3141_; lean_object* v___x_3142_; 
v___x_3139_ = lean_st_ref_get(v_a_3028_);
v_canon_3140_ = lean_ctor_get(v___x_3139_, 9);
lean_inc_ref(v_canon_3140_);
lean_dec(v___x_3139_);
v_cache_3141_ = lean_ctor_get(v_canon_3140_, 0);
lean_inc_ref(v_cache_3141_);
lean_dec_ref(v_canon_3140_);
v___x_3142_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3141_, v_e_3025_);
lean_dec_ref(v_cache_3141_);
if (lean_obj_tag(v___x_3142_) == 1)
{
lean_object* v_val_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3150_; 
lean_dec_ref_known(v_e_3025_, 3);
v_val_3143_ = lean_ctor_get(v___x_3142_, 0);
v_isSharedCheck_3150_ = !lean_is_exclusive(v___x_3142_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3145_ = v___x_3142_;
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_val_3143_);
lean_dec(v___x_3142_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3148_; 
if (v_isShared_3146_ == 0)
{
lean_ctor_set_tag(v___x_3145_, 0);
v___x_3148_ = v___x_3145_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_val_3143_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
}
else
{
lean_object* v___x_3151_; 
lean_dec(v___x_3142_);
lean_inc_ref(v_e_3025_);
v___x_3151_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(v_e_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_);
if (lean_obj_tag(v___x_3151_) == 0)
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3190_; 
v_a_3152_ = lean_ctor_get(v___x_3151_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3151_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3154_ = v___x_3151_;
v_isShared_3155_ = v_isSharedCheck_3190_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3151_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3190_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3156_; lean_object* v_canon_3157_; lean_object* v_share_3158_; lean_object* v_maxFVar_3159_; lean_object* v_proofInstInfo_3160_; lean_object* v_inferType_3161_; lean_object* v_getLevel_3162_; lean_object* v_congrInfo_3163_; lean_object* v_defEqI_3164_; lean_object* v_extensions_3165_; lean_object* v_issues_3166_; lean_object* v_instanceOverrides_3167_; uint8_t v_debug_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3189_; 
v___x_3156_ = lean_st_ref_take(v_a_3028_);
v_canon_3157_ = lean_ctor_get(v___x_3156_, 9);
v_share_3158_ = lean_ctor_get(v___x_3156_, 0);
v_maxFVar_3159_ = lean_ctor_get(v___x_3156_, 1);
v_proofInstInfo_3160_ = lean_ctor_get(v___x_3156_, 2);
v_inferType_3161_ = lean_ctor_get(v___x_3156_, 3);
v_getLevel_3162_ = lean_ctor_get(v___x_3156_, 4);
v_congrInfo_3163_ = lean_ctor_get(v___x_3156_, 5);
v_defEqI_3164_ = lean_ctor_get(v___x_3156_, 6);
v_extensions_3165_ = lean_ctor_get(v___x_3156_, 7);
v_issues_3166_ = lean_ctor_get(v___x_3156_, 8);
v_instanceOverrides_3167_ = lean_ctor_get(v___x_3156_, 10);
v_debug_3168_ = lean_ctor_get_uint8(v___x_3156_, sizeof(void*)*11);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3156_);
if (v_isSharedCheck_3189_ == 0)
{
v___x_3170_ = v___x_3156_;
v_isShared_3171_ = v_isSharedCheck_3189_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_instanceOverrides_3167_);
lean_inc(v_canon_3157_);
lean_inc(v_issues_3166_);
lean_inc(v_extensions_3165_);
lean_inc(v_defEqI_3164_);
lean_inc(v_congrInfo_3163_);
lean_inc(v_getLevel_3162_);
lean_inc(v_inferType_3161_);
lean_inc(v_proofInstInfo_3160_);
lean_inc(v_maxFVar_3159_);
lean_inc(v_share_3158_);
lean_dec(v___x_3156_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3189_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v_cache_3172_; lean_object* v_cacheInType_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3188_; 
v_cache_3172_ = lean_ctor_get(v_canon_3157_, 0);
v_cacheInType_3173_ = lean_ctor_get(v_canon_3157_, 1);
v_isSharedCheck_3188_ = !lean_is_exclusive(v_canon_3157_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3175_ = v_canon_3157_;
v_isShared_3176_ = v_isSharedCheck_3188_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_cacheInType_3173_);
lean_inc(v_cache_3172_);
lean_dec(v_canon_3157_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3188_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3177_; lean_object* v___x_3179_; 
lean_inc(v_a_3152_);
v___x_3177_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3172_, v_e_3025_, v_a_3152_);
if (v_isShared_3176_ == 0)
{
lean_ctor_set(v___x_3175_, 0, v___x_3177_);
v___x_3179_ = v___x_3175_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v___x_3177_);
lean_ctor_set(v_reuseFailAlloc_3187_, 1, v_cacheInType_3173_);
v___x_3179_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
lean_object* v___x_3181_; 
if (v_isShared_3171_ == 0)
{
lean_ctor_set(v___x_3170_, 9, v___x_3179_);
v___x_3181_ = v___x_3170_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3186_; 
v_reuseFailAlloc_3186_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_3186_, 0, v_share_3158_);
lean_ctor_set(v_reuseFailAlloc_3186_, 1, v_maxFVar_3159_);
lean_ctor_set(v_reuseFailAlloc_3186_, 2, v_proofInstInfo_3160_);
lean_ctor_set(v_reuseFailAlloc_3186_, 3, v_inferType_3161_);
lean_ctor_set(v_reuseFailAlloc_3186_, 4, v_getLevel_3162_);
lean_ctor_set(v_reuseFailAlloc_3186_, 5, v_congrInfo_3163_);
lean_ctor_set(v_reuseFailAlloc_3186_, 6, v_defEqI_3164_);
lean_ctor_set(v_reuseFailAlloc_3186_, 7, v_extensions_3165_);
lean_ctor_set(v_reuseFailAlloc_3186_, 8, v_issues_3166_);
lean_ctor_set(v_reuseFailAlloc_3186_, 9, v___x_3179_);
lean_ctor_set(v_reuseFailAlloc_3186_, 10, v_instanceOverrides_3167_);
lean_ctor_set_uint8(v_reuseFailAlloc_3186_, sizeof(void*)*11, v_debug_3168_);
v___x_3181_ = v_reuseFailAlloc_3186_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
lean_object* v___x_3182_; lean_object* v___x_3184_; 
v___x_3182_ = lean_st_ref_put(v_a_3028_, v___x_3181_);
if (v_isShared_3155_ == 0)
{
v___x_3184_ = v___x_3154_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v_a_3152_);
v___x_3184_ = v_reuseFailAlloc_3185_;
goto v_reusejp_3183_;
}
v_reusejp_3183_:
{
return v___x_3184_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3025_, 3);
return v___x_3151_;
}
}
}
else
{
lean_object* v___x_3191_; lean_object* v_canon_3192_; lean_object* v_cacheInType_3193_; lean_object* v___x_3194_; 
v___x_3191_ = lean_st_ref_get(v_a_3028_);
v_canon_3192_ = lean_ctor_get(v___x_3191_, 9);
lean_inc_ref(v_canon_3192_);
lean_dec(v___x_3191_);
v_cacheInType_3193_ = lean_ctor_get(v_canon_3192_, 1);
lean_inc_ref(v_cacheInType_3193_);
lean_dec_ref(v_canon_3192_);
v___x_3194_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3193_, v_e_3025_);
lean_dec_ref(v_cacheInType_3193_);
if (lean_obj_tag(v___x_3194_) == 1)
{
lean_object* v_val_3195_; lean_object* v___x_3197_; uint8_t v_isShared_3198_; uint8_t v_isSharedCheck_3202_; 
lean_dec_ref_known(v_e_3025_, 3);
v_val_3195_ = lean_ctor_get(v___x_3194_, 0);
v_isSharedCheck_3202_ = !lean_is_exclusive(v___x_3194_);
if (v_isSharedCheck_3202_ == 0)
{
v___x_3197_ = v___x_3194_;
v_isShared_3198_ = v_isSharedCheck_3202_;
goto v_resetjp_3196_;
}
else
{
lean_inc(v_val_3195_);
lean_dec(v___x_3194_);
v___x_3197_ = lean_box(0);
v_isShared_3198_ = v_isSharedCheck_3202_;
goto v_resetjp_3196_;
}
v_resetjp_3196_:
{
lean_object* v___x_3200_; 
if (v_isShared_3198_ == 0)
{
lean_ctor_set_tag(v___x_3197_, 0);
v___x_3200_ = v___x_3197_;
goto v_reusejp_3199_;
}
else
{
lean_object* v_reuseFailAlloc_3201_; 
v_reuseFailAlloc_3201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3201_, 0, v_val_3195_);
v___x_3200_ = v_reuseFailAlloc_3201_;
goto v_reusejp_3199_;
}
v_reusejp_3199_:
{
return v___x_3200_;
}
}
}
else
{
lean_object* v___x_3203_; 
lean_dec(v___x_3194_);
lean_inc_ref(v_e_3025_);
v___x_3203_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(v_e_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_);
if (lean_obj_tag(v___x_3203_) == 0)
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3242_; 
v_a_3204_ = lean_ctor_get(v___x_3203_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3203_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3206_ = v___x_3203_;
v_isShared_3207_ = v_isSharedCheck_3242_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v___x_3203_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3242_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3208_; lean_object* v_canon_3209_; lean_object* v_share_3210_; lean_object* v_maxFVar_3211_; lean_object* v_proofInstInfo_3212_; lean_object* v_inferType_3213_; lean_object* v_getLevel_3214_; lean_object* v_congrInfo_3215_; lean_object* v_defEqI_3216_; lean_object* v_extensions_3217_; lean_object* v_issues_3218_; lean_object* v_instanceOverrides_3219_; uint8_t v_debug_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3241_; 
v___x_3208_ = lean_st_ref_take(v_a_3028_);
v_canon_3209_ = lean_ctor_get(v___x_3208_, 9);
v_share_3210_ = lean_ctor_get(v___x_3208_, 0);
v_maxFVar_3211_ = lean_ctor_get(v___x_3208_, 1);
v_proofInstInfo_3212_ = lean_ctor_get(v___x_3208_, 2);
v_inferType_3213_ = lean_ctor_get(v___x_3208_, 3);
v_getLevel_3214_ = lean_ctor_get(v___x_3208_, 4);
v_congrInfo_3215_ = lean_ctor_get(v___x_3208_, 5);
v_defEqI_3216_ = lean_ctor_get(v___x_3208_, 6);
v_extensions_3217_ = lean_ctor_get(v___x_3208_, 7);
v_issues_3218_ = lean_ctor_get(v___x_3208_, 8);
v_instanceOverrides_3219_ = lean_ctor_get(v___x_3208_, 10);
v_debug_3220_ = lean_ctor_get_uint8(v___x_3208_, sizeof(void*)*11);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3222_ = v___x_3208_;
v_isShared_3223_ = v_isSharedCheck_3241_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_instanceOverrides_3219_);
lean_inc(v_canon_3209_);
lean_inc(v_issues_3218_);
lean_inc(v_extensions_3217_);
lean_inc(v_defEqI_3216_);
lean_inc(v_congrInfo_3215_);
lean_inc(v_getLevel_3214_);
lean_inc(v_inferType_3213_);
lean_inc(v_proofInstInfo_3212_);
lean_inc(v_maxFVar_3211_);
lean_inc(v_share_3210_);
lean_dec(v___x_3208_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3241_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v_cache_3224_; lean_object* v_cacheInType_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3240_; 
v_cache_3224_ = lean_ctor_get(v_canon_3209_, 0);
v_cacheInType_3225_ = lean_ctor_get(v_canon_3209_, 1);
v_isSharedCheck_3240_ = !lean_is_exclusive(v_canon_3209_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3227_ = v_canon_3209_;
v_isShared_3228_ = v_isSharedCheck_3240_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_cacheInType_3225_);
lean_inc(v_cache_3224_);
lean_dec(v_canon_3209_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3240_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___x_3229_; lean_object* v___x_3231_; 
lean_inc(v_a_3204_);
v___x_3229_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3225_, v_e_3025_, v_a_3204_);
if (v_isShared_3228_ == 0)
{
lean_ctor_set(v___x_3227_, 1, v___x_3229_);
v___x_3231_ = v___x_3227_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_cache_3224_);
lean_ctor_set(v_reuseFailAlloc_3239_, 1, v___x_3229_);
v___x_3231_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
lean_object* v___x_3233_; 
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 9, v___x_3231_);
v___x_3233_ = v___x_3222_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v_share_3210_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v_maxFVar_3211_);
lean_ctor_set(v_reuseFailAlloc_3238_, 2, v_proofInstInfo_3212_);
lean_ctor_set(v_reuseFailAlloc_3238_, 3, v_inferType_3213_);
lean_ctor_set(v_reuseFailAlloc_3238_, 4, v_getLevel_3214_);
lean_ctor_set(v_reuseFailAlloc_3238_, 5, v_congrInfo_3215_);
lean_ctor_set(v_reuseFailAlloc_3238_, 6, v_defEqI_3216_);
lean_ctor_set(v_reuseFailAlloc_3238_, 7, v_extensions_3217_);
lean_ctor_set(v_reuseFailAlloc_3238_, 8, v_issues_3218_);
lean_ctor_set(v_reuseFailAlloc_3238_, 9, v___x_3231_);
lean_ctor_set(v_reuseFailAlloc_3238_, 10, v_instanceOverrides_3219_);
lean_ctor_set_uint8(v_reuseFailAlloc_3238_, sizeof(void*)*11, v_debug_3220_);
v___x_3233_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
lean_object* v___x_3234_; lean_object* v___x_3236_; 
v___x_3234_ = lean_st_ref_put(v_a_3028_, v___x_3233_);
if (v_isShared_3207_ == 0)
{
v___x_3236_ = v___x_3206_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v_a_3204_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
return v___x_3236_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3025_, 3);
return v___x_3203_;
}
}
}
}
case 8:
{
lean_object* v___x_3243_; 
v___x_3243_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
if (v_a_3026_ == 0)
{
lean_object* v___x_3244_; lean_object* v_canon_3245_; lean_object* v_cache_3246_; lean_object* v___x_3247_; 
v___x_3244_ = lean_st_ref_get(v_a_3028_);
v_canon_3245_ = lean_ctor_get(v___x_3244_, 9);
lean_inc_ref(v_canon_3245_);
lean_dec(v___x_3244_);
v_cache_3246_ = lean_ctor_get(v_canon_3245_, 0);
lean_inc_ref(v_cache_3246_);
lean_dec_ref(v_canon_3245_);
v___x_3247_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3246_, v_e_3025_);
lean_dec_ref(v_cache_3246_);
if (lean_obj_tag(v___x_3247_) == 1)
{
lean_object* v_val_3248_; lean_object* v___x_3250_; uint8_t v_isShared_3251_; uint8_t v_isSharedCheck_3255_; 
lean_dec_ref_known(v_e_3025_, 4);
v_val_3248_ = lean_ctor_get(v___x_3247_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v___x_3247_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3250_ = v___x_3247_;
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
else
{
lean_inc(v_val_3248_);
lean_dec(v___x_3247_);
v___x_3250_ = lean_box(0);
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
v_resetjp_3249_:
{
lean_object* v___x_3253_; 
if (v_isShared_3251_ == 0)
{
lean_ctor_set_tag(v___x_3250_, 0);
v___x_3253_ = v___x_3250_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v_val_3248_);
v___x_3253_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
return v___x_3253_;
}
}
}
else
{
lean_object* v___x_3256_; 
lean_dec(v___x_3247_);
lean_inc_ref(v_e_3025_);
v___x_3256_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v___x_3243_, v_e_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v_a_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3295_; 
v_a_3257_ = lean_ctor_get(v___x_3256_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3259_ = v___x_3256_;
v_isShared_3260_ = v_isSharedCheck_3295_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_a_3257_);
lean_dec(v___x_3256_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3295_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
lean_object* v___x_3261_; lean_object* v_canon_3262_; lean_object* v_share_3263_; lean_object* v_maxFVar_3264_; lean_object* v_proofInstInfo_3265_; lean_object* v_inferType_3266_; lean_object* v_getLevel_3267_; lean_object* v_congrInfo_3268_; lean_object* v_defEqI_3269_; lean_object* v_extensions_3270_; lean_object* v_issues_3271_; lean_object* v_instanceOverrides_3272_; uint8_t v_debug_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3294_; 
v___x_3261_ = lean_st_ref_take(v_a_3028_);
v_canon_3262_ = lean_ctor_get(v___x_3261_, 9);
v_share_3263_ = lean_ctor_get(v___x_3261_, 0);
v_maxFVar_3264_ = lean_ctor_get(v___x_3261_, 1);
v_proofInstInfo_3265_ = lean_ctor_get(v___x_3261_, 2);
v_inferType_3266_ = lean_ctor_get(v___x_3261_, 3);
v_getLevel_3267_ = lean_ctor_get(v___x_3261_, 4);
v_congrInfo_3268_ = lean_ctor_get(v___x_3261_, 5);
v_defEqI_3269_ = lean_ctor_get(v___x_3261_, 6);
v_extensions_3270_ = lean_ctor_get(v___x_3261_, 7);
v_issues_3271_ = lean_ctor_get(v___x_3261_, 8);
v_instanceOverrides_3272_ = lean_ctor_get(v___x_3261_, 10);
v_debug_3273_ = lean_ctor_get_uint8(v___x_3261_, sizeof(void*)*11);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3275_ = v___x_3261_;
v_isShared_3276_ = v_isSharedCheck_3294_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_instanceOverrides_3272_);
lean_inc(v_canon_3262_);
lean_inc(v_issues_3271_);
lean_inc(v_extensions_3270_);
lean_inc(v_defEqI_3269_);
lean_inc(v_congrInfo_3268_);
lean_inc(v_getLevel_3267_);
lean_inc(v_inferType_3266_);
lean_inc(v_proofInstInfo_3265_);
lean_inc(v_maxFVar_3264_);
lean_inc(v_share_3263_);
lean_dec(v___x_3261_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3294_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v_cache_3277_; lean_object* v_cacheInType_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3293_; 
v_cache_3277_ = lean_ctor_get(v_canon_3262_, 0);
v_cacheInType_3278_ = lean_ctor_get(v_canon_3262_, 1);
v_isSharedCheck_3293_ = !lean_is_exclusive(v_canon_3262_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3280_ = v_canon_3262_;
v_isShared_3281_ = v_isSharedCheck_3293_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_cacheInType_3278_);
lean_inc(v_cache_3277_);
lean_dec(v_canon_3262_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3293_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___x_3282_; lean_object* v___x_3284_; 
lean_inc(v_a_3257_);
v___x_3282_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3277_, v_e_3025_, v_a_3257_);
if (v_isShared_3281_ == 0)
{
lean_ctor_set(v___x_3280_, 0, v___x_3282_);
v___x_3284_ = v___x_3280_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v___x_3282_);
lean_ctor_set(v_reuseFailAlloc_3292_, 1, v_cacheInType_3278_);
v___x_3284_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
lean_object* v___x_3286_; 
if (v_isShared_3276_ == 0)
{
lean_ctor_set(v___x_3275_, 9, v___x_3284_);
v___x_3286_ = v___x_3275_;
goto v_reusejp_3285_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v_share_3263_);
lean_ctor_set(v_reuseFailAlloc_3291_, 1, v_maxFVar_3264_);
lean_ctor_set(v_reuseFailAlloc_3291_, 2, v_proofInstInfo_3265_);
lean_ctor_set(v_reuseFailAlloc_3291_, 3, v_inferType_3266_);
lean_ctor_set(v_reuseFailAlloc_3291_, 4, v_getLevel_3267_);
lean_ctor_set(v_reuseFailAlloc_3291_, 5, v_congrInfo_3268_);
lean_ctor_set(v_reuseFailAlloc_3291_, 6, v_defEqI_3269_);
lean_ctor_set(v_reuseFailAlloc_3291_, 7, v_extensions_3270_);
lean_ctor_set(v_reuseFailAlloc_3291_, 8, v_issues_3271_);
lean_ctor_set(v_reuseFailAlloc_3291_, 9, v___x_3284_);
lean_ctor_set(v_reuseFailAlloc_3291_, 10, v_instanceOverrides_3272_);
lean_ctor_set_uint8(v_reuseFailAlloc_3291_, sizeof(void*)*11, v_debug_3273_);
v___x_3286_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3285_;
}
v_reusejp_3285_:
{
lean_object* v___x_3287_; lean_object* v___x_3289_; 
v___x_3287_ = lean_st_ref_put(v_a_3028_, v___x_3286_);
if (v_isShared_3260_ == 0)
{
v___x_3289_ = v___x_3259_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_a_3257_);
v___x_3289_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
return v___x_3289_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3025_, 4);
return v___x_3256_;
}
}
}
else
{
lean_object* v___x_3296_; lean_object* v_canon_3297_; lean_object* v_cacheInType_3298_; lean_object* v___x_3299_; 
v___x_3296_ = lean_st_ref_get(v_a_3028_);
v_canon_3297_ = lean_ctor_get(v___x_3296_, 9);
lean_inc_ref(v_canon_3297_);
lean_dec(v___x_3296_);
v_cacheInType_3298_ = lean_ctor_get(v_canon_3297_, 1);
lean_inc_ref(v_cacheInType_3298_);
lean_dec_ref(v_canon_3297_);
v___x_3299_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3298_, v_e_3025_);
lean_dec_ref(v_cacheInType_3298_);
if (lean_obj_tag(v___x_3299_) == 1)
{
lean_object* v_val_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3307_; 
lean_dec_ref_known(v_e_3025_, 4);
v_val_3300_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3302_ = v___x_3299_;
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_val_3300_);
lean_dec(v___x_3299_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3305_; 
if (v_isShared_3303_ == 0)
{
lean_ctor_set_tag(v___x_3302_, 0);
v___x_3305_ = v___x_3302_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_val_3300_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
}
else
{
lean_object* v___x_3308_; 
lean_dec(v___x_3299_);
lean_inc_ref(v_e_3025_);
v___x_3308_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v___x_3243_, v_e_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_);
if (lean_obj_tag(v___x_3308_) == 0)
{
lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3347_; 
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3311_ = v___x_3308_;
v_isShared_3312_ = v_isSharedCheck_3347_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_3308_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3347_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3313_; lean_object* v_canon_3314_; lean_object* v_share_3315_; lean_object* v_maxFVar_3316_; lean_object* v_proofInstInfo_3317_; lean_object* v_inferType_3318_; lean_object* v_getLevel_3319_; lean_object* v_congrInfo_3320_; lean_object* v_defEqI_3321_; lean_object* v_extensions_3322_; lean_object* v_issues_3323_; lean_object* v_instanceOverrides_3324_; uint8_t v_debug_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3346_; 
v___x_3313_ = lean_st_ref_take(v_a_3028_);
v_canon_3314_ = lean_ctor_get(v___x_3313_, 9);
v_share_3315_ = lean_ctor_get(v___x_3313_, 0);
v_maxFVar_3316_ = lean_ctor_get(v___x_3313_, 1);
v_proofInstInfo_3317_ = lean_ctor_get(v___x_3313_, 2);
v_inferType_3318_ = lean_ctor_get(v___x_3313_, 3);
v_getLevel_3319_ = lean_ctor_get(v___x_3313_, 4);
v_congrInfo_3320_ = lean_ctor_get(v___x_3313_, 5);
v_defEqI_3321_ = lean_ctor_get(v___x_3313_, 6);
v_extensions_3322_ = lean_ctor_get(v___x_3313_, 7);
v_issues_3323_ = lean_ctor_get(v___x_3313_, 8);
v_instanceOverrides_3324_ = lean_ctor_get(v___x_3313_, 10);
v_debug_3325_ = lean_ctor_get_uint8(v___x_3313_, sizeof(void*)*11);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3327_ = v___x_3313_;
v_isShared_3328_ = v_isSharedCheck_3346_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_instanceOverrides_3324_);
lean_inc(v_canon_3314_);
lean_inc(v_issues_3323_);
lean_inc(v_extensions_3322_);
lean_inc(v_defEqI_3321_);
lean_inc(v_congrInfo_3320_);
lean_inc(v_getLevel_3319_);
lean_inc(v_inferType_3318_);
lean_inc(v_proofInstInfo_3317_);
lean_inc(v_maxFVar_3316_);
lean_inc(v_share_3315_);
lean_dec(v___x_3313_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3346_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v_cache_3329_; lean_object* v_cacheInType_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3345_; 
v_cache_3329_ = lean_ctor_get(v_canon_3314_, 0);
v_cacheInType_3330_ = lean_ctor_get(v_canon_3314_, 1);
v_isSharedCheck_3345_ = !lean_is_exclusive(v_canon_3314_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3332_ = v_canon_3314_;
v_isShared_3333_ = v_isSharedCheck_3345_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_cacheInType_3330_);
lean_inc(v_cache_3329_);
lean_dec(v_canon_3314_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3345_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3334_; lean_object* v___x_3336_; 
lean_inc(v_a_3309_);
v___x_3334_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3330_, v_e_3025_, v_a_3309_);
if (v_isShared_3333_ == 0)
{
lean_ctor_set(v___x_3332_, 1, v___x_3334_);
v___x_3336_ = v___x_3332_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v_cache_3329_);
lean_ctor_set(v_reuseFailAlloc_3344_, 1, v___x_3334_);
v___x_3336_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
lean_object* v___x_3338_; 
if (v_isShared_3328_ == 0)
{
lean_ctor_set(v___x_3327_, 9, v___x_3336_);
v___x_3338_ = v___x_3327_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v_share_3315_);
lean_ctor_set(v_reuseFailAlloc_3343_, 1, v_maxFVar_3316_);
lean_ctor_set(v_reuseFailAlloc_3343_, 2, v_proofInstInfo_3317_);
lean_ctor_set(v_reuseFailAlloc_3343_, 3, v_inferType_3318_);
lean_ctor_set(v_reuseFailAlloc_3343_, 4, v_getLevel_3319_);
lean_ctor_set(v_reuseFailAlloc_3343_, 5, v_congrInfo_3320_);
lean_ctor_set(v_reuseFailAlloc_3343_, 6, v_defEqI_3321_);
lean_ctor_set(v_reuseFailAlloc_3343_, 7, v_extensions_3322_);
lean_ctor_set(v_reuseFailAlloc_3343_, 8, v_issues_3323_);
lean_ctor_set(v_reuseFailAlloc_3343_, 9, v___x_3336_);
lean_ctor_set(v_reuseFailAlloc_3343_, 10, v_instanceOverrides_3324_);
lean_ctor_set_uint8(v_reuseFailAlloc_3343_, sizeof(void*)*11, v_debug_3325_);
v___x_3338_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
lean_object* v___x_3339_; lean_object* v___x_3341_; 
v___x_3339_ = lean_st_ref_put(v_a_3028_, v___x_3338_);
if (v_isShared_3312_ == 0)
{
v___x_3341_ = v___x_3311_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v_a_3309_);
v___x_3341_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
return v___x_3341_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3025_, 4);
return v___x_3308_;
}
}
}
}
case 5:
{
if (v_a_3026_ == 0)
{
lean_object* v___x_3348_; lean_object* v_canon_3349_; lean_object* v_cache_3350_; lean_object* v___x_3351_; 
v___x_3348_ = lean_st_ref_get(v_a_3028_);
v_canon_3349_ = lean_ctor_get(v___x_3348_, 9);
lean_inc_ref(v_canon_3349_);
lean_dec(v___x_3348_);
v_cache_3350_ = lean_ctor_get(v_canon_3349_, 0);
lean_inc_ref(v_cache_3350_);
lean_dec_ref(v_canon_3349_);
v___x_3351_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3350_, v_e_3025_);
lean_dec_ref(v_cache_3350_);
if (lean_obj_tag(v___x_3351_) == 1)
{
lean_object* v_val_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3359_; 
lean_dec_ref_known(v_e_3025_, 2);
v_val_3352_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3354_ = v___x_3351_;
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_val_3352_);
lean_dec(v___x_3351_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3357_; 
if (v_isShared_3355_ == 0)
{
lean_ctor_set_tag(v___x_3354_, 0);
v___x_3357_ = v___x_3354_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v_val_3352_);
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
lean_object* v___x_3360_; 
lean_dec(v___x_3351_);
lean_inc_ref(v_e_3025_);
v___x_3360_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(v_e_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_object* v_a_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3399_; 
v_a_3361_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3363_ = v___x_3360_;
v_isShared_3364_ = v_isSharedCheck_3399_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_a_3361_);
lean_dec(v___x_3360_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3399_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3365_; lean_object* v_canon_3366_; lean_object* v_share_3367_; lean_object* v_maxFVar_3368_; lean_object* v_proofInstInfo_3369_; lean_object* v_inferType_3370_; lean_object* v_getLevel_3371_; lean_object* v_congrInfo_3372_; lean_object* v_defEqI_3373_; lean_object* v_extensions_3374_; lean_object* v_issues_3375_; lean_object* v_instanceOverrides_3376_; uint8_t v_debug_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3398_; 
v___x_3365_ = lean_st_ref_take(v_a_3028_);
v_canon_3366_ = lean_ctor_get(v___x_3365_, 9);
v_share_3367_ = lean_ctor_get(v___x_3365_, 0);
v_maxFVar_3368_ = lean_ctor_get(v___x_3365_, 1);
v_proofInstInfo_3369_ = lean_ctor_get(v___x_3365_, 2);
v_inferType_3370_ = lean_ctor_get(v___x_3365_, 3);
v_getLevel_3371_ = lean_ctor_get(v___x_3365_, 4);
v_congrInfo_3372_ = lean_ctor_get(v___x_3365_, 5);
v_defEqI_3373_ = lean_ctor_get(v___x_3365_, 6);
v_extensions_3374_ = lean_ctor_get(v___x_3365_, 7);
v_issues_3375_ = lean_ctor_get(v___x_3365_, 8);
v_instanceOverrides_3376_ = lean_ctor_get(v___x_3365_, 10);
v_debug_3377_ = lean_ctor_get_uint8(v___x_3365_, sizeof(void*)*11);
v_isSharedCheck_3398_ = !lean_is_exclusive(v___x_3365_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3379_ = v___x_3365_;
v_isShared_3380_ = v_isSharedCheck_3398_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_instanceOverrides_3376_);
lean_inc(v_canon_3366_);
lean_inc(v_issues_3375_);
lean_inc(v_extensions_3374_);
lean_inc(v_defEqI_3373_);
lean_inc(v_congrInfo_3372_);
lean_inc(v_getLevel_3371_);
lean_inc(v_inferType_3370_);
lean_inc(v_proofInstInfo_3369_);
lean_inc(v_maxFVar_3368_);
lean_inc(v_share_3367_);
lean_dec(v___x_3365_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3398_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v_cache_3381_; lean_object* v_cacheInType_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3397_; 
v_cache_3381_ = lean_ctor_get(v_canon_3366_, 0);
v_cacheInType_3382_ = lean_ctor_get(v_canon_3366_, 1);
v_isSharedCheck_3397_ = !lean_is_exclusive(v_canon_3366_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3384_ = v_canon_3366_;
v_isShared_3385_ = v_isSharedCheck_3397_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_cacheInType_3382_);
lean_inc(v_cache_3381_);
lean_dec(v_canon_3366_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3397_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3386_; lean_object* v___x_3388_; 
lean_inc(v_a_3361_);
v___x_3386_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3381_, v_e_3025_, v_a_3361_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 0, v___x_3386_);
v___x_3388_ = v___x_3384_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v___x_3386_);
lean_ctor_set(v_reuseFailAlloc_3396_, 1, v_cacheInType_3382_);
v___x_3388_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
lean_object* v___x_3390_; 
if (v_isShared_3380_ == 0)
{
lean_ctor_set(v___x_3379_, 9, v___x_3388_);
v___x_3390_ = v___x_3379_;
goto v_reusejp_3389_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_share_3367_);
lean_ctor_set(v_reuseFailAlloc_3395_, 1, v_maxFVar_3368_);
lean_ctor_set(v_reuseFailAlloc_3395_, 2, v_proofInstInfo_3369_);
lean_ctor_set(v_reuseFailAlloc_3395_, 3, v_inferType_3370_);
lean_ctor_set(v_reuseFailAlloc_3395_, 4, v_getLevel_3371_);
lean_ctor_set(v_reuseFailAlloc_3395_, 5, v_congrInfo_3372_);
lean_ctor_set(v_reuseFailAlloc_3395_, 6, v_defEqI_3373_);
lean_ctor_set(v_reuseFailAlloc_3395_, 7, v_extensions_3374_);
lean_ctor_set(v_reuseFailAlloc_3395_, 8, v_issues_3375_);
lean_ctor_set(v_reuseFailAlloc_3395_, 9, v___x_3388_);
lean_ctor_set(v_reuseFailAlloc_3395_, 10, v_instanceOverrides_3376_);
lean_ctor_set_uint8(v_reuseFailAlloc_3395_, sizeof(void*)*11, v_debug_3377_);
v___x_3390_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3389_;
}
v_reusejp_3389_:
{
lean_object* v___x_3391_; lean_object* v___x_3393_; 
v___x_3391_ = lean_st_ref_put(v_a_3028_, v___x_3390_);
if (v_isShared_3364_ == 0)
{
v___x_3393_ = v___x_3363_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v_a_3361_);
v___x_3393_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
return v___x_3393_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3025_, 2);
return v___x_3360_;
}
}
}
else
{
lean_object* v___x_3400_; lean_object* v_canon_3401_; lean_object* v_cacheInType_3402_; lean_object* v___x_3403_; 
v___x_3400_ = lean_st_ref_get(v_a_3028_);
v_canon_3401_ = lean_ctor_get(v___x_3400_, 9);
lean_inc_ref(v_canon_3401_);
lean_dec(v___x_3400_);
v_cacheInType_3402_ = lean_ctor_get(v_canon_3401_, 1);
lean_inc_ref(v_cacheInType_3402_);
lean_dec_ref(v_canon_3401_);
v___x_3403_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3402_, v_e_3025_);
lean_dec_ref(v_cacheInType_3402_);
if (lean_obj_tag(v___x_3403_) == 1)
{
lean_object* v_val_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3411_; 
lean_dec_ref_known(v_e_3025_, 2);
v_val_3404_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3406_ = v___x_3403_;
v_isShared_3407_ = v_isSharedCheck_3411_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_val_3404_);
lean_dec(v___x_3403_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3411_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v___x_3409_; 
if (v_isShared_3407_ == 0)
{
lean_ctor_set_tag(v___x_3406_, 0);
v___x_3409_ = v___x_3406_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v_val_3404_);
v___x_3409_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
return v___x_3409_;
}
}
}
else
{
lean_object* v___x_3412_; 
lean_dec(v___x_3403_);
lean_inc_ref(v_e_3025_);
v___x_3412_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(v_e_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_);
if (lean_obj_tag(v___x_3412_) == 0)
{
lean_object* v_a_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3451_; 
v_a_3413_ = lean_ctor_get(v___x_3412_, 0);
v_isSharedCheck_3451_ = !lean_is_exclusive(v___x_3412_);
if (v_isSharedCheck_3451_ == 0)
{
v___x_3415_ = v___x_3412_;
v_isShared_3416_ = v_isSharedCheck_3451_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_a_3413_);
lean_dec(v___x_3412_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3451_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v___x_3417_; lean_object* v_canon_3418_; lean_object* v_share_3419_; lean_object* v_maxFVar_3420_; lean_object* v_proofInstInfo_3421_; lean_object* v_inferType_3422_; lean_object* v_getLevel_3423_; lean_object* v_congrInfo_3424_; lean_object* v_defEqI_3425_; lean_object* v_extensions_3426_; lean_object* v_issues_3427_; lean_object* v_instanceOverrides_3428_; uint8_t v_debug_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3450_; 
v___x_3417_ = lean_st_ref_take(v_a_3028_);
v_canon_3418_ = lean_ctor_get(v___x_3417_, 9);
v_share_3419_ = lean_ctor_get(v___x_3417_, 0);
v_maxFVar_3420_ = lean_ctor_get(v___x_3417_, 1);
v_proofInstInfo_3421_ = lean_ctor_get(v___x_3417_, 2);
v_inferType_3422_ = lean_ctor_get(v___x_3417_, 3);
v_getLevel_3423_ = lean_ctor_get(v___x_3417_, 4);
v_congrInfo_3424_ = lean_ctor_get(v___x_3417_, 5);
v_defEqI_3425_ = lean_ctor_get(v___x_3417_, 6);
v_extensions_3426_ = lean_ctor_get(v___x_3417_, 7);
v_issues_3427_ = lean_ctor_get(v___x_3417_, 8);
v_instanceOverrides_3428_ = lean_ctor_get(v___x_3417_, 10);
v_debug_3429_ = lean_ctor_get_uint8(v___x_3417_, sizeof(void*)*11);
v_isSharedCheck_3450_ = !lean_is_exclusive(v___x_3417_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3431_ = v___x_3417_;
v_isShared_3432_ = v_isSharedCheck_3450_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_instanceOverrides_3428_);
lean_inc(v_canon_3418_);
lean_inc(v_issues_3427_);
lean_inc(v_extensions_3426_);
lean_inc(v_defEqI_3425_);
lean_inc(v_congrInfo_3424_);
lean_inc(v_getLevel_3423_);
lean_inc(v_inferType_3422_);
lean_inc(v_proofInstInfo_3421_);
lean_inc(v_maxFVar_3420_);
lean_inc(v_share_3419_);
lean_dec(v___x_3417_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3450_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v_cache_3433_; lean_object* v_cacheInType_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3449_; 
v_cache_3433_ = lean_ctor_get(v_canon_3418_, 0);
v_cacheInType_3434_ = lean_ctor_get(v_canon_3418_, 1);
v_isSharedCheck_3449_ = !lean_is_exclusive(v_canon_3418_);
if (v_isSharedCheck_3449_ == 0)
{
v___x_3436_ = v_canon_3418_;
v_isShared_3437_ = v_isSharedCheck_3449_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_cacheInType_3434_);
lean_inc(v_cache_3433_);
lean_dec(v_canon_3418_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3449_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___x_3438_; lean_object* v___x_3440_; 
lean_inc(v_a_3413_);
v___x_3438_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3434_, v_e_3025_, v_a_3413_);
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 1, v___x_3438_);
v___x_3440_ = v___x_3436_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3448_; 
v_reuseFailAlloc_3448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3448_, 0, v_cache_3433_);
lean_ctor_set(v_reuseFailAlloc_3448_, 1, v___x_3438_);
v___x_3440_ = v_reuseFailAlloc_3448_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
lean_object* v___x_3442_; 
if (v_isShared_3432_ == 0)
{
lean_ctor_set(v___x_3431_, 9, v___x_3440_);
v___x_3442_ = v___x_3431_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v_share_3419_);
lean_ctor_set(v_reuseFailAlloc_3447_, 1, v_maxFVar_3420_);
lean_ctor_set(v_reuseFailAlloc_3447_, 2, v_proofInstInfo_3421_);
lean_ctor_set(v_reuseFailAlloc_3447_, 3, v_inferType_3422_);
lean_ctor_set(v_reuseFailAlloc_3447_, 4, v_getLevel_3423_);
lean_ctor_set(v_reuseFailAlloc_3447_, 5, v_congrInfo_3424_);
lean_ctor_set(v_reuseFailAlloc_3447_, 6, v_defEqI_3425_);
lean_ctor_set(v_reuseFailAlloc_3447_, 7, v_extensions_3426_);
lean_ctor_set(v_reuseFailAlloc_3447_, 8, v_issues_3427_);
lean_ctor_set(v_reuseFailAlloc_3447_, 9, v___x_3440_);
lean_ctor_set(v_reuseFailAlloc_3447_, 10, v_instanceOverrides_3428_);
lean_ctor_set_uint8(v_reuseFailAlloc_3447_, sizeof(void*)*11, v_debug_3429_);
v___x_3442_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
lean_object* v___x_3443_; lean_object* v___x_3445_; 
v___x_3443_ = lean_st_ref_put(v_a_3028_, v___x_3442_);
if (v_isShared_3416_ == 0)
{
v___x_3445_ = v___x_3415_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_a_3413_);
v___x_3445_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
return v___x_3445_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3025_, 2);
return v___x_3412_;
}
}
}
}
case 11:
{
if (v_a_3026_ == 0)
{
lean_object* v___x_3452_; lean_object* v_canon_3453_; lean_object* v_cache_3454_; lean_object* v___x_3455_; 
v___x_3452_ = lean_st_ref_get(v_a_3028_);
v_canon_3453_ = lean_ctor_get(v___x_3452_, 9);
lean_inc_ref(v_canon_3453_);
lean_dec(v___x_3452_);
v_cache_3454_ = lean_ctor_get(v_canon_3453_, 0);
lean_inc_ref(v_cache_3454_);
lean_dec_ref(v_canon_3453_);
v___x_3455_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3454_, v_e_3025_);
lean_dec_ref(v_cache_3454_);
if (lean_obj_tag(v___x_3455_) == 1)
{
lean_object* v_val_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3463_; 
lean_dec_ref_known(v_e_3025_, 3);
v_val_3456_ = lean_ctor_get(v___x_3455_, 0);
v_isSharedCheck_3463_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3458_ = v___x_3455_;
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_val_3456_);
lean_dec(v___x_3455_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3461_; 
if (v_isShared_3459_ == 0)
{
lean_ctor_set_tag(v___x_3458_, 0);
v___x_3461_ = v___x_3458_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v_val_3456_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
}
else
{
lean_object* v___x_3464_; 
lean_dec(v___x_3455_);
lean_inc_ref(v_e_3025_);
v___x_3464_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(v_e_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; lean_object* v___x_3467_; uint8_t v_isShared_3468_; uint8_t v_isSharedCheck_3503_; 
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
v_isSharedCheck_3503_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3503_ == 0)
{
v___x_3467_ = v___x_3464_;
v_isShared_3468_ = v_isSharedCheck_3503_;
goto v_resetjp_3466_;
}
else
{
lean_inc(v_a_3465_);
lean_dec(v___x_3464_);
v___x_3467_ = lean_box(0);
v_isShared_3468_ = v_isSharedCheck_3503_;
goto v_resetjp_3466_;
}
v_resetjp_3466_:
{
lean_object* v___x_3469_; lean_object* v_canon_3470_; lean_object* v_share_3471_; lean_object* v_maxFVar_3472_; lean_object* v_proofInstInfo_3473_; lean_object* v_inferType_3474_; lean_object* v_getLevel_3475_; lean_object* v_congrInfo_3476_; lean_object* v_defEqI_3477_; lean_object* v_extensions_3478_; lean_object* v_issues_3479_; lean_object* v_instanceOverrides_3480_; uint8_t v_debug_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3502_; 
v___x_3469_ = lean_st_ref_take(v_a_3028_);
v_canon_3470_ = lean_ctor_get(v___x_3469_, 9);
v_share_3471_ = lean_ctor_get(v___x_3469_, 0);
v_maxFVar_3472_ = lean_ctor_get(v___x_3469_, 1);
v_proofInstInfo_3473_ = lean_ctor_get(v___x_3469_, 2);
v_inferType_3474_ = lean_ctor_get(v___x_3469_, 3);
v_getLevel_3475_ = lean_ctor_get(v___x_3469_, 4);
v_congrInfo_3476_ = lean_ctor_get(v___x_3469_, 5);
v_defEqI_3477_ = lean_ctor_get(v___x_3469_, 6);
v_extensions_3478_ = lean_ctor_get(v___x_3469_, 7);
v_issues_3479_ = lean_ctor_get(v___x_3469_, 8);
v_instanceOverrides_3480_ = lean_ctor_get(v___x_3469_, 10);
v_debug_3481_ = lean_ctor_get_uint8(v___x_3469_, sizeof(void*)*11);
v_isSharedCheck_3502_ = !lean_is_exclusive(v___x_3469_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3483_ = v___x_3469_;
v_isShared_3484_ = v_isSharedCheck_3502_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_instanceOverrides_3480_);
lean_inc(v_canon_3470_);
lean_inc(v_issues_3479_);
lean_inc(v_extensions_3478_);
lean_inc(v_defEqI_3477_);
lean_inc(v_congrInfo_3476_);
lean_inc(v_getLevel_3475_);
lean_inc(v_inferType_3474_);
lean_inc(v_proofInstInfo_3473_);
lean_inc(v_maxFVar_3472_);
lean_inc(v_share_3471_);
lean_dec(v___x_3469_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3502_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v_cache_3485_; lean_object* v_cacheInType_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3501_; 
v_cache_3485_ = lean_ctor_get(v_canon_3470_, 0);
v_cacheInType_3486_ = lean_ctor_get(v_canon_3470_, 1);
v_isSharedCheck_3501_ = !lean_is_exclusive(v_canon_3470_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3488_ = v_canon_3470_;
v_isShared_3489_ = v_isSharedCheck_3501_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_cacheInType_3486_);
lean_inc(v_cache_3485_);
lean_dec(v_canon_3470_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3501_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
lean_object* v___x_3490_; lean_object* v___x_3492_; 
lean_inc(v_a_3465_);
v___x_3490_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3485_, v_e_3025_, v_a_3465_);
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 0, v___x_3490_);
v___x_3492_ = v___x_3488_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v___x_3490_);
lean_ctor_set(v_reuseFailAlloc_3500_, 1, v_cacheInType_3486_);
v___x_3492_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
lean_object* v___x_3494_; 
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 9, v___x_3492_);
v___x_3494_ = v___x_3483_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_share_3471_);
lean_ctor_set(v_reuseFailAlloc_3499_, 1, v_maxFVar_3472_);
lean_ctor_set(v_reuseFailAlloc_3499_, 2, v_proofInstInfo_3473_);
lean_ctor_set(v_reuseFailAlloc_3499_, 3, v_inferType_3474_);
lean_ctor_set(v_reuseFailAlloc_3499_, 4, v_getLevel_3475_);
lean_ctor_set(v_reuseFailAlloc_3499_, 5, v_congrInfo_3476_);
lean_ctor_set(v_reuseFailAlloc_3499_, 6, v_defEqI_3477_);
lean_ctor_set(v_reuseFailAlloc_3499_, 7, v_extensions_3478_);
lean_ctor_set(v_reuseFailAlloc_3499_, 8, v_issues_3479_);
lean_ctor_set(v_reuseFailAlloc_3499_, 9, v___x_3492_);
lean_ctor_set(v_reuseFailAlloc_3499_, 10, v_instanceOverrides_3480_);
lean_ctor_set_uint8(v_reuseFailAlloc_3499_, sizeof(void*)*11, v_debug_3481_);
v___x_3494_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
lean_object* v___x_3495_; lean_object* v___x_3497_; 
v___x_3495_ = lean_st_ref_put(v_a_3028_, v___x_3494_);
if (v_isShared_3468_ == 0)
{
v___x_3497_ = v___x_3467_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_a_3465_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3025_, 3);
return v___x_3464_;
}
}
}
else
{
lean_object* v___x_3504_; lean_object* v_canon_3505_; lean_object* v_cacheInType_3506_; lean_object* v___x_3507_; 
v___x_3504_ = lean_st_ref_get(v_a_3028_);
v_canon_3505_ = lean_ctor_get(v___x_3504_, 9);
lean_inc_ref(v_canon_3505_);
lean_dec(v___x_3504_);
v_cacheInType_3506_ = lean_ctor_get(v_canon_3505_, 1);
lean_inc_ref(v_cacheInType_3506_);
lean_dec_ref(v_canon_3505_);
v___x_3507_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3506_, v_e_3025_);
lean_dec_ref(v_cacheInType_3506_);
if (lean_obj_tag(v___x_3507_) == 1)
{
lean_object* v_val_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3515_; 
lean_dec_ref_known(v_e_3025_, 3);
v_val_3508_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3510_ = v___x_3507_;
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_val_3508_);
lean_dec(v___x_3507_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3513_; 
if (v_isShared_3511_ == 0)
{
lean_ctor_set_tag(v___x_3510_, 0);
v___x_3513_ = v___x_3510_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_val_3508_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
return v___x_3513_;
}
}
}
else
{
lean_object* v___x_3516_; 
lean_dec(v___x_3507_);
lean_inc_ref(v_e_3025_);
v___x_3516_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(v_e_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3555_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3555_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3555_ == 0)
{
v___x_3519_ = v___x_3516_;
v_isShared_3520_ = v_isSharedCheck_3555_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3516_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3555_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3521_; lean_object* v_canon_3522_; lean_object* v_share_3523_; lean_object* v_maxFVar_3524_; lean_object* v_proofInstInfo_3525_; lean_object* v_inferType_3526_; lean_object* v_getLevel_3527_; lean_object* v_congrInfo_3528_; lean_object* v_defEqI_3529_; lean_object* v_extensions_3530_; lean_object* v_issues_3531_; lean_object* v_instanceOverrides_3532_; uint8_t v_debug_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3554_; 
v___x_3521_ = lean_st_ref_take(v_a_3028_);
v_canon_3522_ = lean_ctor_get(v___x_3521_, 9);
v_share_3523_ = lean_ctor_get(v___x_3521_, 0);
v_maxFVar_3524_ = lean_ctor_get(v___x_3521_, 1);
v_proofInstInfo_3525_ = lean_ctor_get(v___x_3521_, 2);
v_inferType_3526_ = lean_ctor_get(v___x_3521_, 3);
v_getLevel_3527_ = lean_ctor_get(v___x_3521_, 4);
v_congrInfo_3528_ = lean_ctor_get(v___x_3521_, 5);
v_defEqI_3529_ = lean_ctor_get(v___x_3521_, 6);
v_extensions_3530_ = lean_ctor_get(v___x_3521_, 7);
v_issues_3531_ = lean_ctor_get(v___x_3521_, 8);
v_instanceOverrides_3532_ = lean_ctor_get(v___x_3521_, 10);
v_debug_3533_ = lean_ctor_get_uint8(v___x_3521_, sizeof(void*)*11);
v_isSharedCheck_3554_ = !lean_is_exclusive(v___x_3521_);
if (v_isSharedCheck_3554_ == 0)
{
v___x_3535_ = v___x_3521_;
v_isShared_3536_ = v_isSharedCheck_3554_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_instanceOverrides_3532_);
lean_inc(v_canon_3522_);
lean_inc(v_issues_3531_);
lean_inc(v_extensions_3530_);
lean_inc(v_defEqI_3529_);
lean_inc(v_congrInfo_3528_);
lean_inc(v_getLevel_3527_);
lean_inc(v_inferType_3526_);
lean_inc(v_proofInstInfo_3525_);
lean_inc(v_maxFVar_3524_);
lean_inc(v_share_3523_);
lean_dec(v___x_3521_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3554_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v_cache_3537_; lean_object* v_cacheInType_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3553_; 
v_cache_3537_ = lean_ctor_get(v_canon_3522_, 0);
v_cacheInType_3538_ = lean_ctor_get(v_canon_3522_, 1);
v_isSharedCheck_3553_ = !lean_is_exclusive(v_canon_3522_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3540_ = v_canon_3522_;
v_isShared_3541_ = v_isSharedCheck_3553_;
goto v_resetjp_3539_;
}
else
{
lean_inc(v_cacheInType_3538_);
lean_inc(v_cache_3537_);
lean_dec(v_canon_3522_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3553_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
lean_object* v___x_3542_; lean_object* v___x_3544_; 
lean_inc(v_a_3517_);
v___x_3542_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3538_, v_e_3025_, v_a_3517_);
if (v_isShared_3541_ == 0)
{
lean_ctor_set(v___x_3540_, 1, v___x_3542_);
v___x_3544_ = v___x_3540_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_cache_3537_);
lean_ctor_set(v_reuseFailAlloc_3552_, 1, v___x_3542_);
v___x_3544_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
lean_object* v___x_3546_; 
if (v_isShared_3536_ == 0)
{
lean_ctor_set(v___x_3535_, 9, v___x_3544_);
v___x_3546_ = v___x_3535_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v_share_3523_);
lean_ctor_set(v_reuseFailAlloc_3551_, 1, v_maxFVar_3524_);
lean_ctor_set(v_reuseFailAlloc_3551_, 2, v_proofInstInfo_3525_);
lean_ctor_set(v_reuseFailAlloc_3551_, 3, v_inferType_3526_);
lean_ctor_set(v_reuseFailAlloc_3551_, 4, v_getLevel_3527_);
lean_ctor_set(v_reuseFailAlloc_3551_, 5, v_congrInfo_3528_);
lean_ctor_set(v_reuseFailAlloc_3551_, 6, v_defEqI_3529_);
lean_ctor_set(v_reuseFailAlloc_3551_, 7, v_extensions_3530_);
lean_ctor_set(v_reuseFailAlloc_3551_, 8, v_issues_3531_);
lean_ctor_set(v_reuseFailAlloc_3551_, 9, v___x_3544_);
lean_ctor_set(v_reuseFailAlloc_3551_, 10, v_instanceOverrides_3532_);
lean_ctor_set_uint8(v_reuseFailAlloc_3551_, sizeof(void*)*11, v_debug_3533_);
v___x_3546_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
lean_object* v___x_3547_; lean_object* v___x_3549_; 
v___x_3547_ = lean_st_ref_put(v_a_3028_, v___x_3546_);
if (v_isShared_3520_ == 0)
{
v___x_3549_ = v___x_3519_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v_a_3517_);
v___x_3549_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
return v___x_3549_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3025_, 3);
return v___x_3516_;
}
}
}
}
case 10:
{
lean_object* v_data_3556_; lean_object* v_expr_3557_; lean_object* v___x_3558_; 
v_data_3556_ = lean_ctor_get(v_e_3025_, 0);
v_expr_3557_ = lean_ctor_get(v_e_3025_, 1);
lean_inc_ref(v_expr_3557_);
v___x_3558_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_expr_3557_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_);
if (lean_obj_tag(v___x_3558_) == 0)
{
lean_object* v_a_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3573_; 
v_a_3559_ = lean_ctor_get(v___x_3558_, 0);
v_isSharedCheck_3573_ = !lean_is_exclusive(v___x_3558_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3561_ = v___x_3558_;
v_isShared_3562_ = v_isSharedCheck_3573_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_a_3559_);
lean_dec(v___x_3558_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3573_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
size_t v___x_3563_; size_t v___x_3564_; uint8_t v___x_3565_; 
v___x_3563_ = lean_ptr_addr(v_expr_3557_);
v___x_3564_ = lean_ptr_addr(v_a_3559_);
v___x_3565_ = lean_usize_dec_eq(v___x_3563_, v___x_3564_);
if (v___x_3565_ == 0)
{
lean_object* v___x_3566_; lean_object* v___x_3568_; 
lean_inc(v_data_3556_);
lean_dec_ref_known(v_e_3025_, 2);
v___x_3566_ = l_Lean_Expr_mdata___override(v_data_3556_, v_a_3559_);
if (v_isShared_3562_ == 0)
{
lean_ctor_set(v___x_3561_, 0, v___x_3566_);
v___x_3568_ = v___x_3561_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3569_; 
v_reuseFailAlloc_3569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3569_, 0, v___x_3566_);
v___x_3568_ = v_reuseFailAlloc_3569_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
return v___x_3568_;
}
}
else
{
lean_object* v___x_3571_; 
lean_dec(v_a_3559_);
if (v_isShared_3562_ == 0)
{
lean_ctor_set(v___x_3561_, 0, v_e_3025_);
v___x_3571_ = v___x_3561_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v_e_3025_);
v___x_3571_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
return v___x_3571_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3025_, 2);
return v___x_3558_;
}
}
default: 
{
lean_object* v___x_3574_; 
v___x_3574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3574_, 0, v_e_3025_);
return v___x_3574_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(lean_object* v_e_3575_, uint8_t v_a_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_, lean_object* v_a_3580_, lean_object* v_a_3581_, lean_object* v_a_3582_){
_start:
{
if (v_a_3576_ == 0)
{
uint8_t v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = 1;
lean_inc_ref(v_e_3575_);
v___x_3585_ = l_Lean_Meta_isProp(v_e_3575_, v_a_3579_, v_a_3580_, v_a_3581_, v_a_3582_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_a_3586_; uint8_t v___x_3587_; 
v_a_3586_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_a_3586_);
lean_dec_ref_known(v___x_3585_, 1);
v___x_3587_ = lean_unbox(v_a_3586_);
lean_dec(v_a_3586_);
if (v___x_3587_ == 0)
{
lean_object* v___x_3588_; 
v___x_3588_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_3575_, v___x_3584_, v_a_3577_, v_a_3578_, v_a_3579_, v_a_3580_, v_a_3581_, v_a_3582_);
return v___x_3588_;
}
else
{
lean_object* v___x_3589_; 
v___x_3589_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_, v_a_3580_, v_a_3581_, v_a_3582_);
return v___x_3589_;
}
}
else
{
lean_object* v_a_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3597_; 
lean_dec_ref(v_e_3575_);
v_a_3590_ = lean_ctor_get(v___x_3585_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3592_ = v___x_3585_;
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_a_3590_);
lean_dec(v___x_3585_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3595_; 
if (v_isShared_3593_ == 0)
{
v___x_3595_ = v___x_3592_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v_a_3590_);
v___x_3595_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
return v___x_3595_;
}
}
}
}
else
{
lean_object* v___x_3598_; 
v___x_3598_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_, v_a_3580_, v_a_3581_, v_a_3582_);
return v___x_3598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(lean_object* v_fvars_3599_, lean_object* v_e_3600_, uint8_t v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_, lean_object* v_a_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_){
_start:
{
if (lean_obj_tag(v_e_3600_) == 7)
{
lean_object* v_binderName_3609_; lean_object* v_binderType_3610_; lean_object* v_body_3611_; uint8_t v_binderInfo_3612_; lean_object* v___f_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; 
v_binderName_3609_ = lean_ctor_get(v_e_3600_, 0);
lean_inc(v_binderName_3609_);
v_binderType_3610_ = lean_ctor_get(v_e_3600_, 1);
lean_inc_ref(v_binderType_3610_);
v_body_3611_ = lean_ctor_get(v_e_3600_, 2);
lean_inc_ref(v_body_3611_);
v_binderInfo_3612_ = lean_ctor_get_uint8(v_e_3600_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3600_, 3);
lean_inc_ref(v_fvars_3599_);
v___f_3613_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0___boxed), 11, 2);
lean_closure_set(v___f_3613_, 0, v_fvars_3599_);
lean_closure_set(v___f_3613_, 1, v_body_3611_);
v___x_3614_ = lean_expr_instantiate_rev(v_binderType_3610_, v_fvars_3599_);
lean_dec_ref(v_fvars_3599_);
lean_dec_ref(v_binderType_3610_);
v___x_3615_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_3614_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_, v_a_3605_, v_a_3606_, v_a_3607_);
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v_a_3616_; uint8_t v___x_3617_; lean_object* v___x_3618_; 
v_a_3616_ = lean_ctor_get(v___x_3615_, 0);
lean_inc(v_a_3616_);
lean_dec_ref_known(v___x_3615_, 1);
v___x_3617_ = 0;
v___x_3618_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28___redArg(v_binderName_3609_, v_binderInfo_3612_, v_a_3616_, v___f_3613_, v___x_3617_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_, v_a_3605_, v_a_3606_, v_a_3607_);
return v___x_3618_;
}
else
{
lean_dec_ref(v___f_3613_);
lean_dec(v_binderName_3609_);
return v___x_3615_;
}
}
else
{
lean_object* v___x_3619_; lean_object* v___x_3620_; 
v___x_3619_ = lean_expr_instantiate_rev(v_e_3600_, v_fvars_3599_);
lean_dec_ref(v_e_3600_);
v___x_3620_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_3619_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_, v_a_3605_, v_a_3606_, v_a_3607_);
if (lean_obj_tag(v___x_3620_) == 0)
{
lean_object* v_a_3621_; uint8_t v___x_3622_; uint8_t v___x_3623_; uint8_t v___x_3624_; lean_object* v___x_3625_; 
v_a_3621_ = lean_ctor_get(v___x_3620_, 0);
lean_inc(v_a_3621_);
lean_dec_ref_known(v___x_3620_, 1);
v___x_3622_ = 0;
v___x_3623_ = 1;
v___x_3624_ = 1;
v___x_3625_ = l_Lean_Meta_mkForallFVars(v_fvars_3599_, v_a_3621_, v___x_3622_, v___x_3623_, v___x_3623_, v___x_3624_, v_a_3604_, v_a_3605_, v_a_3606_, v_a_3607_);
return v___x_3625_;
}
else
{
lean_dec_ref(v_fvars_3599_);
return v___x_3620_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0(lean_object* v_fvars_3626_, lean_object* v_body_3627_, lean_object* v_x_3628_, uint8_t v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3637_ = lean_array_push(v_fvars_3626_, v_x_3628_);
v___x_3638_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v___x_3637_, v_body_3627_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_);
return v___x_3638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost___boxed(lean_object* v_e_3639_, lean_object* v_a_3640_, lean_object* v_a_3641_, lean_object* v_a_3642_, lean_object* v_a_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_){
_start:
{
uint8_t v_a_boxed_3648_; lean_object* v_res_3649_; 
v_a_boxed_3648_ = lean_unbox(v_a_3640_);
v_res_3649_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(v_e_3639_, v_a_boxed_3648_, v_a_3641_, v_a_3642_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
lean_dec(v_a_3646_);
lean_dec_ref(v_a_3645_);
lean_dec(v_a_3644_);
lean_dec_ref(v_a_3643_);
lean_dec(v_a_3642_);
lean_dec_ref(v_a_3641_);
return v_res_3649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27___boxed(lean_object* v_e_3650_, lean_object* v_a_3651_, lean_object* v_a_3652_, lean_object* v_a_3653_, lean_object* v_a_3654_, lean_object* v_a_3655_, lean_object* v_a_3656_, lean_object* v_a_3657_, lean_object* v_a_3658_){
_start:
{
uint8_t v_a_boxed_3659_; lean_object* v_res_3660_; 
v_a_boxed_3659_ = lean_unbox(v_a_3651_);
v_res_3660_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(v_e_3650_, v_a_boxed_3659_, v_a_3652_, v_a_3653_, v_a_3654_, v_a_3655_, v_a_3656_, v_a_3657_);
lean_dec(v_a_3657_);
lean_dec_ref(v_a_3656_);
lean_dec(v_a_3655_);
lean_dec_ref(v_a_3654_);
lean_dec(v_a_3653_);
lean_dec_ref(v_a_3652_);
return v_res_3660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault___boxed(lean_object* v_e_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_){
_start:
{
uint8_t v_a_boxed_3670_; lean_object* v_res_3671_; 
v_a_boxed_3670_ = lean_unbox(v_a_3662_);
v_res_3671_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(v_e_3661_, v_a_boxed_3670_, v_a_3663_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_, v_a_3668_);
lean_dec(v_a_3668_);
lean_dec_ref(v_a_3667_);
lean_dec(v_a_3666_);
lean_dec_ref(v_a_3665_);
lean_dec(v_a_3664_);
lean_dec_ref(v_a_3663_);
return v_res_3671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___boxed(lean_object* v_e_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_, lean_object* v_a_3680_){
_start:
{
uint8_t v_a_boxed_3681_; lean_object* v_res_3682_; 
v_a_boxed_3681_ = lean_unbox(v_a_3673_);
v_res_3682_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(v_e_3672_, v_a_boxed_3681_, v_a_3674_, v_a_3675_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_);
lean_dec(v_a_3679_);
lean_dec_ref(v_a_3678_);
lean_dec(v_a_3677_);
lean_dec_ref(v_a_3676_);
lean_dec(v_a_3675_);
lean_dec_ref(v_a_3674_);
return v_res_3682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType___boxed(lean_object* v_e_3683_, lean_object* v_a_3684_, lean_object* v_a_3685_, lean_object* v_a_3686_, lean_object* v_a_3687_, lean_object* v_a_3688_, lean_object* v_a_3689_, lean_object* v_a_3690_, lean_object* v_a_3691_){
_start:
{
uint8_t v_a_boxed_3692_; lean_object* v_res_3693_; 
v_a_boxed_3692_ = lean_unbox(v_a_3684_);
v_res_3693_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v_e_3683_, v_a_boxed_3692_, v_a_3685_, v_a_3686_, v_a_3687_, v_a_3688_, v_a_3689_, v_a_3690_);
lean_dec(v_a_3690_);
lean_dec_ref(v_a_3689_);
lean_dec(v_a_3688_);
lean_dec_ref(v_a_3687_);
lean_dec(v_a_3686_);
lean_dec_ref(v_a_3685_);
return v_res_3693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___boxed(lean_object* v_fvars_3694_, lean_object* v_e_3695_, lean_object* v_a_3696_, lean_object* v_a_3697_, lean_object* v_a_3698_, lean_object* v_a_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_){
_start:
{
uint8_t v_a_boxed_3704_; lean_object* v_res_3705_; 
v_a_boxed_3704_ = lean_unbox(v_a_3696_);
v_res_3705_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v_fvars_3694_, v_e_3695_, v_a_boxed_3704_, v_a_3697_, v_a_3698_, v_a_3699_, v_a_3700_, v_a_3701_, v_a_3702_);
lean_dec(v_a_3702_);
lean_dec_ref(v_a_3701_);
lean_dec(v_a_3700_);
lean_dec_ref(v_a_3699_);
lean_dec(v_a_3698_);
lean_dec_ref(v_a_3697_);
return v_res_3705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___boxed(lean_object* v_fvars_3706_, lean_object* v_e_3707_, lean_object* v_a_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_, lean_object* v_a_3713_, lean_object* v_a_3714_, lean_object* v_a_3715_){
_start:
{
uint8_t v_a_boxed_3716_; lean_object* v_res_3717_; 
v_a_boxed_3716_ = lean_unbox(v_a_3708_);
v_res_3717_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v_fvars_3706_, v_e_3707_, v_a_boxed_3716_, v_a_3709_, v_a_3710_, v_a_3711_, v_a_3712_, v_a_3713_, v_a_3714_);
lean_dec(v_a_3714_);
lean_dec_ref(v_a_3713_);
lean_dec(v_a_3712_);
lean_dec_ref(v_a_3711_);
lean_dec(v_a_3710_);
lean_dec_ref(v_a_3709_);
return v_res_3717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27___boxed(lean_object* v_e_3718_, lean_object* v_report_3719_, lean_object* v_a_3720_, lean_object* v_a_3721_, lean_object* v_a_3722_, lean_object* v_a_3723_, lean_object* v_a_3724_, lean_object* v_a_3725_, lean_object* v_a_3726_, lean_object* v_a_3727_){
_start:
{
uint8_t v_report_boxed_3728_; uint8_t v_a_boxed_3729_; lean_object* v_res_3730_; 
v_report_boxed_3728_ = lean_unbox(v_report_3719_);
v_a_boxed_3729_ = lean_unbox(v_a_3720_);
v_res_3730_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(v_e_3718_, v_report_boxed_3728_, v_a_boxed_3729_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_, v_a_3726_);
lean_dec(v_a_3726_);
lean_dec_ref(v_a_3725_);
lean_dec(v_a_3724_);
lean_dec_ref(v_a_3723_);
lean_dec(v_a_3722_);
lean_dec_ref(v_a_3721_);
return v_res_3730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch___boxed(lean_object* v_e_3731_, lean_object* v_a_3732_, lean_object* v_a_3733_, lean_object* v_a_3734_, lean_object* v_a_3735_, lean_object* v_a_3736_, lean_object* v_a_3737_, lean_object* v_a_3738_, lean_object* v_a_3739_){
_start:
{
uint8_t v_a_boxed_3740_; lean_object* v_res_3741_; 
v_a_boxed_3740_ = lean_unbox(v_a_3732_);
v_res_3741_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(v_e_3731_, v_a_boxed_3740_, v_a_3733_, v_a_3734_, v_a_3735_, v_a_3736_, v_a_3737_, v_a_3738_);
lean_dec(v_a_3738_);
lean_dec_ref(v_a_3737_);
lean_dec(v_a_3736_);
lean_dec_ref(v_a_3735_);
lean_dec(v_a_3734_);
lean_dec_ref(v_a_3733_);
return v_res_3741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___boxed(lean_object* v_fvars_3742_, lean_object* v_e_3743_, lean_object* v_a_3744_, lean_object* v_a_3745_, lean_object* v_a_3746_, lean_object* v_a_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_, lean_object* v_a_3750_, lean_object* v_a_3751_){
_start:
{
uint8_t v_a_boxed_3752_; lean_object* v_res_3753_; 
v_a_boxed_3752_ = lean_unbox(v_a_3744_);
v_res_3753_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v_fvars_3742_, v_e_3743_, v_a_boxed_3752_, v_a_3745_, v_a_3746_, v_a_3747_, v_a_3748_, v_a_3749_, v_a_3750_);
lean_dec(v_a_3750_);
lean_dec_ref(v_a_3749_);
lean_dec(v_a_3748_);
lean_dec_ref(v_a_3747_);
lean_dec(v_a_3746_);
lean_dec_ref(v_a_3745_);
return v_res_3753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond___boxed(lean_object* v_f_3754_, lean_object* v_00_u03b1_3755_, lean_object* v_c_3756_, lean_object* v_a_3757_, lean_object* v_b_3758_, lean_object* v_a_3759_, lean_object* v_a_3760_, lean_object* v_a_3761_, lean_object* v_a_3762_, lean_object* v_a_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_){
_start:
{
uint8_t v_a_boxed_3767_; lean_object* v_res_3768_; 
v_a_boxed_3767_ = lean_unbox(v_a_3759_);
v_res_3768_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(v_f_3754_, v_00_u03b1_3755_, v_c_3756_, v_a_3757_, v_b_3758_, v_a_boxed_3767_, v_a_3760_, v_a_3761_, v_a_3762_, v_a_3763_, v_a_3764_, v_a_3765_);
lean_dec(v_a_3765_);
lean_dec_ref(v_a_3764_);
lean_dec(v_a_3763_);
lean_dec_ref(v_a_3762_);
lean_dec(v_a_3761_);
lean_dec_ref(v_a_3760_);
return v_res_3768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte___boxed(lean_object* v_f_3769_, lean_object* v_00_u03b1_3770_, lean_object* v_c_3771_, lean_object* v_inst_3772_, lean_object* v_a_3773_, lean_object* v_b_3774_, lean_object* v_a_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_, lean_object* v_a_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_, lean_object* v_a_3782_){
_start:
{
uint8_t v_a_boxed_3783_; lean_object* v_res_3784_; 
v_a_boxed_3783_ = lean_unbox(v_a_3775_);
v_res_3784_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(v_f_3769_, v_00_u03b1_3770_, v_c_3771_, v_inst_3772_, v_a_3773_, v_b_3774_, v_a_boxed_3783_, v_a_3776_, v_a_3777_, v_a_3778_, v_a_3779_, v_a_3780_, v_a_3781_);
lean_dec(v_a_3781_);
lean_dec_ref(v_a_3780_);
lean_dec(v_a_3779_);
lean_dec_ref(v_a_3778_);
lean_dec(v_a_3777_);
lean_dec_ref(v_a_3776_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___boxed(lean_object* v_e_3785_, lean_object* v_a_3786_, lean_object* v_a_3787_, lean_object* v_a_3788_, lean_object* v_a_3789_, lean_object* v_a_3790_, lean_object* v_a_3791_, lean_object* v_a_3792_, lean_object* v_a_3793_){
_start:
{
uint8_t v_a_boxed_3794_; lean_object* v_res_3795_; 
v_a_boxed_3794_ = lean_unbox(v_a_3786_);
v_res_3795_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(v_e_3785_, v_a_boxed_3794_, v_a_3787_, v_a_3788_, v_a_3789_, v_a_3790_, v_a_3791_, v_a_3792_);
lean_dec(v_a_3792_);
lean_dec_ref(v_a_3791_);
lean_dec(v_a_3790_);
lean_dec_ref(v_a_3789_);
lean_dec(v_a_3788_);
lean_dec_ref(v_a_3787_);
return v_res_3795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___boxed(lean_object* v_e_3796_, lean_object* v_a_3797_, lean_object* v_a_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_, lean_object* v_a_3801_, lean_object* v_a_3802_, lean_object* v_a_3803_, lean_object* v_a_3804_){
_start:
{
uint8_t v_a_boxed_3805_; lean_object* v_res_3806_; 
v_a_boxed_3805_ = lean_unbox(v_a_3797_);
v_res_3806_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(v_e_3796_, v_a_boxed_3805_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_, v_a_3803_);
lean_dec(v_a_3803_);
lean_dec_ref(v_a_3802_);
lean_dec(v_a_3801_);
lean_dec_ref(v_a_3800_);
lean_dec(v_a_3799_);
lean_dec_ref(v_a_3798_);
return v_res_3806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___boxed(lean_object* v_g_3807_, lean_object* v_prop_3808_, lean_object* v_inst_3809_, lean_object* v_e_3810_, lean_object* v_a_3811_, lean_object* v_a_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_){
_start:
{
uint8_t v_a_boxed_3819_; lean_object* v_res_3820_; 
v_a_boxed_3819_ = lean_unbox(v_a_3811_);
v_res_3820_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_g_3807_, v_prop_3808_, v_inst_3809_, v_e_3810_, v_a_boxed_3819_, v_a_3812_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_);
lean_dec(v_a_3817_);
lean_dec_ref(v_a_3816_);
lean_dec(v_a_3815_);
lean_dec_ref(v_a_3814_);
lean_dec(v_a_3813_);
lean_dec_ref(v_a_3812_);
return v_res_3820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst___boxed(lean_object* v_e_3821_, lean_object* v_report_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_, lean_object* v_a_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_, lean_object* v_a_3829_, lean_object* v_a_3830_){
_start:
{
uint8_t v_report_boxed_3831_; uint8_t v_a_boxed_3832_; lean_object* v_res_3833_; 
v_report_boxed_3831_ = lean_unbox(v_report_3822_);
v_a_boxed_3832_ = lean_unbox(v_a_3823_);
v_res_3833_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(v_e_3821_, v_report_boxed_3831_, v_a_boxed_3832_, v_a_3824_, v_a_3825_, v_a_3826_, v_a_3827_, v_a_3828_, v_a_3829_);
lean_dec(v_a_3829_);
lean_dec_ref(v_a_3828_);
lean_dec(v_a_3827_);
lean_dec_ref(v_a_3826_);
lean_dec(v_a_3825_);
lean_dec_ref(v_a_3824_);
return v_res_3833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec___boxed(lean_object* v_g_3834_, lean_object* v_prop_3835_, lean_object* v_h_3836_, lean_object* v_e_3837_, lean_object* v_a_3838_, lean_object* v_a_3839_, lean_object* v_a_3840_, lean_object* v_a_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_){
_start:
{
uint8_t v_a_boxed_3846_; lean_object* v_res_3847_; 
v_a_boxed_3846_ = lean_unbox(v_a_3838_);
v_res_3847_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(v_g_3834_, v_prop_3835_, v_h_3836_, v_e_3837_, v_a_boxed_3846_, v_a_3839_, v_a_3840_, v_a_3841_, v_a_3842_, v_a_3843_, v_a_3844_);
lean_dec(v_a_3844_);
lean_dec_ref(v_a_3843_);
lean_dec(v_a_3842_);
lean_dec_ref(v_a_3841_);
lean_dec(v_a_3840_);
lean_dec_ref(v_a_3839_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___boxed(lean_object* v___x_3848_, lean_object* v_snd_3849_, lean_object* v_a_3850_, lean_object* v___x_3851_, lean_object* v_fst_3852_, lean_object* v___x_3853_, lean_object* v_____r_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_){
_start:
{
uint8_t v___x_62132__boxed_3863_; uint8_t v___y_62135__boxed_3864_; lean_object* v_res_3865_; 
v___x_62132__boxed_3863_ = lean_unbox(v___x_3851_);
v___y_62135__boxed_3864_ = lean_unbox(v___y_3855_);
v_res_3865_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(v___x_3848_, v_snd_3849_, v_a_3850_, v___x_62132__boxed_3863_, v_fst_3852_, v___x_3853_, v_____r_3854_, v___y_62135__boxed_3864_, v___y_3856_, v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_, v___y_3861_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec(v___y_3859_);
lean_dec_ref(v___y_3858_);
lean_dec(v___y_3857_);
lean_dec_ref(v___y_3856_);
lean_dec_ref(v___x_3853_);
lean_dec(v_a_3850_);
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___boxed(lean_object* v_e_3866_, lean_object* v_a_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_, lean_object* v_a_3874_){
_start:
{
uint8_t v_a_boxed_3875_; lean_object* v_res_3876_; 
v_a_boxed_3875_ = lean_unbox(v_a_3867_);
v_res_3876_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(v_e_3866_, v_a_boxed_3875_, v_a_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_);
lean_dec(v_a_3873_);
lean_dec_ref(v_a_3872_);
lean_dec(v_a_3871_);
lean_dec_ref(v_a_3870_);
lean_dec(v_a_3869_);
lean_dec_ref(v_a_3868_);
return v_res_3876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce___boxed(lean_object* v_e_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_, lean_object* v_a_3880_, lean_object* v_a_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_, lean_object* v_a_3884_, lean_object* v_a_3885_){
_start:
{
uint8_t v_a_boxed_3886_; lean_object* v_res_3887_; 
v_a_boxed_3886_ = lean_unbox(v_a_3878_);
v_res_3887_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(v_e_3877_, v_a_boxed_3886_, v_a_3879_, v_a_3880_, v_a_3881_, v_a_3882_, v_a_3883_, v_a_3884_);
lean_dec(v_a_3884_);
lean_dec_ref(v_a_3883_);
lean_dec(v_a_3882_);
lean_dec_ref(v_a_3881_);
lean_dec(v_a_3880_);
lean_dec_ref(v_a_3879_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___boxed(lean_object* v_upperBound_3888_, lean_object* v___x_3889_, lean_object* v_a_3890_, lean_object* v_b_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_){
_start:
{
uint8_t v___y_62338__boxed_3900_; lean_object* v_res_3901_; 
v___y_62338__boxed_3900_ = lean_unbox(v___y_3892_);
v_res_3901_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(v_upperBound_3888_, v___x_3889_, v_a_3890_, v_b_3891_, v___y_62338__boxed_3900_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_);
lean_dec(v___y_3898_);
lean_dec_ref(v___y_3897_);
lean_dec(v___y_3896_);
lean_dec_ref(v___y_3895_);
lean_dec(v___y_3894_);
lean_dec_ref(v___y_3893_);
lean_dec_ref(v___x_3889_);
lean_dec(v_upperBound_3888_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp___boxed(lean_object* v_g_3902_, lean_object* v_prop_3903_, lean_object* v_h_3904_, lean_object* v_e_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_, lean_object* v_a_3909_, lean_object* v_a_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_, lean_object* v_a_3913_){
_start:
{
uint8_t v_a_boxed_3914_; lean_object* v_res_3915_; 
v_a_boxed_3914_ = lean_unbox(v_a_3906_);
v_res_3915_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(v_g_3902_, v_prop_3903_, v_h_3904_, v_e_3905_, v_a_boxed_3914_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_, v_a_3911_, v_a_3912_);
lean_dec(v_a_3912_);
lean_dec_ref(v_a_3911_);
lean_dec(v_a_3910_);
lean_dec_ref(v_a_3909_);
lean_dec(v_a_3908_);
lean_dec_ref(v_a_3907_);
return v_res_3915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___boxed(lean_object* v_e_3916_, lean_object* v_x_3917_, lean_object* v_x_3918_, lean_object* v_x_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_){
_start:
{
uint8_t v___y_62451__boxed_3928_; lean_object* v_res_3929_; 
v___y_62451__boxed_3928_ = lean_unbox(v___y_3920_);
v_res_3929_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(v_e_3916_, v_x_3917_, v_x_3918_, v_x_3919_, v___y_62451__boxed_3928_, v___y_3921_, v___y_3922_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_);
lean_dec(v___y_3926_);
lean_dec_ref(v___y_3925_);
lean_dec(v___y_3924_);
lean_dec_ref(v___y_3923_);
lean_dec(v___y_3922_);
lean_dec_ref(v___y_3921_);
return v_res_3929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon___boxed(lean_object* v_e_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_){
_start:
{
uint8_t v_a_boxed_3939_; lean_object* v_res_3940_; 
v_a_boxed_3939_ = lean_unbox(v_a_3931_);
v_res_3940_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_3930_, v_a_boxed_3939_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
lean_dec(v_a_3937_);
lean_dec_ref(v_a_3936_);
lean_dec(v_a_3935_);
lean_dec_ref(v_a_3934_);
lean_dec(v_a_3933_);
lean_dec_ref(v_a_3932_);
return v_res_3940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6(lean_object* v_declName_3941_, uint8_t v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_){
_start:
{
lean_object* v___x_3950_; 
v___x_3950_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(v_declName_3941_, v___y_3948_);
return v___x_3950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___boxed(lean_object* v_declName_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_){
_start:
{
uint8_t v___y_64979__boxed_3960_; lean_object* v_res_3961_; 
v___y_64979__boxed_3960_ = lean_unbox(v___y_3952_);
v_res_3961_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6(v_declName_3951_, v___y_64979__boxed_3960_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_, v___y_3957_, v___y_3958_);
lean_dec(v___y_3958_);
lean_dec_ref(v___y_3957_);
lean_dec(v___y_3956_);
lean_dec_ref(v___y_3955_);
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
return v_res_3961_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9(lean_object* v_declName_3962_, uint8_t v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_){
_start:
{
lean_object* v___x_3971_; 
v___x_3971_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(v_declName_3962_, v___y_3969_);
return v___x_3971_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___boxed(lean_object* v_declName_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_){
_start:
{
uint8_t v___y_65005__boxed_3981_; lean_object* v_res_3982_; 
v___y_65005__boxed_3981_ = lean_unbox(v___y_3973_);
v_res_3982_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9(v_declName_3972_, v___y_65005__boxed_3981_, v___y_3974_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_);
lean_dec(v___y_3979_);
lean_dec_ref(v___y_3978_);
lean_dec(v___y_3977_);
lean_dec_ref(v___y_3976_);
lean_dec(v___y_3975_);
lean_dec_ref(v___y_3974_);
return v_res_3982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25(lean_object* v_00_u03b1_3983_, lean_object* v_name_3984_, lean_object* v_type_3985_, lean_object* v_val_3986_, lean_object* v_k_3987_, uint8_t v_nondep_3988_, uint8_t v_kind_3989_, uint8_t v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_){
_start:
{
lean_object* v___x_3998_; 
v___x_3998_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___redArg(v_name_3984_, v_type_3985_, v_val_3986_, v_k_3987_, v_nondep_3988_, v_kind_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_);
return v___x_3998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25___boxed(lean_object* v_00_u03b1_3999_, lean_object* v_name_4000_, lean_object* v_type_4001_, lean_object* v_val_4002_, lean_object* v_k_4003_, lean_object* v_nondep_4004_, lean_object* v_kind_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_){
_start:
{
uint8_t v_nondep_boxed_4014_; uint8_t v_kind_boxed_4015_; uint8_t v___y_65031__boxed_4016_; lean_object* v_res_4017_; 
v_nondep_boxed_4014_ = lean_unbox(v_nondep_4004_);
v_kind_boxed_4015_ = lean_unbox(v_kind_4005_);
v___y_65031__boxed_4016_ = lean_unbox(v___y_4006_);
v_res_4017_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__25(v_00_u03b1_3999_, v_name_4000_, v_type_4001_, v_val_4002_, v_k_4003_, v_nondep_boxed_4014_, v_kind_boxed_4015_, v___y_65031__boxed_4016_, v___y_4007_, v___y_4008_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_);
lean_dec(v___y_4012_);
lean_dec_ref(v___y_4011_);
lean_dec(v___y_4010_);
lean_dec_ref(v___y_4009_);
lean_dec(v___y_4008_);
lean_dec_ref(v___y_4007_);
return v_res_4017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28(lean_object* v_00_u03b1_4018_, lean_object* v_name_4019_, uint8_t v_bi_4020_, lean_object* v_type_4021_, lean_object* v_k_4022_, uint8_t v_kind_4023_, uint8_t v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_){
_start:
{
lean_object* v___x_4032_; 
v___x_4032_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28___redArg(v_name_4019_, v_bi_4020_, v_type_4021_, v_k_4022_, v_kind_4023_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_);
return v___x_4032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28___boxed(lean_object* v_00_u03b1_4033_, lean_object* v_name_4034_, lean_object* v_bi_4035_, lean_object* v_type_4036_, lean_object* v_k_4037_, lean_object* v_kind_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_){
_start:
{
uint8_t v_bi_boxed_4047_; uint8_t v_kind_boxed_4048_; uint8_t v___y_65057__boxed_4049_; lean_object* v_res_4050_; 
v_bi_boxed_4047_ = lean_unbox(v_bi_4035_);
v_kind_boxed_4048_ = lean_unbox(v_kind_4038_);
v___y_65057__boxed_4049_ = lean_unbox(v___y_4039_);
v_res_4050_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__28(v_00_u03b1_4033_, v_name_4034_, v_bi_boxed_4047_, v_type_4036_, v_k_4037_, v_kind_boxed_4048_, v___y_65057__boxed_4049_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_);
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4044_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
return v_res_4050_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1(lean_object* v_00_u03b2_4051_, lean_object* v_m_4052_, lean_object* v_a_4053_){
_start:
{
lean_object* v___x_4054_; 
v___x_4054_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_m_4052_, v_a_4053_);
return v___x_4054_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___boxed(lean_object* v_00_u03b2_4055_, lean_object* v_m_4056_, lean_object* v_a_4057_){
_start:
{
lean_object* v_res_4058_; 
v_res_4058_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1(v_00_u03b2_4055_, v_m_4056_, v_a_4057_);
lean_dec_ref(v_a_4057_);
lean_dec_ref(v_m_4056_);
return v_res_4058_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2(lean_object* v_00_u03b2_4059_, lean_object* v_m_4060_, lean_object* v_a_4061_, lean_object* v_b_4062_){
_start:
{
lean_object* v___x_4063_; 
v___x_4063_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_m_4060_, v_a_4061_, v_b_4062_);
return v___x_4063_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11(lean_object* v_cls_4064_, lean_object* v_msg_4065_, uint8_t v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v___x_4074_; 
v___x_4074_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(v_cls_4064_, v_msg_4065_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4074_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___boxed(lean_object* v_cls_4075_, lean_object* v_msg_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_){
_start:
{
uint8_t v___y_65087__boxed_4085_; lean_object* v_res_4086_; 
v___y_65087__boxed_4085_ = lean_unbox(v___y_4077_);
v_res_4086_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11(v_cls_4075_, v_msg_4076_, v___y_65087__boxed_4085_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_, v___y_4083_);
lean_dec(v___y_4083_);
lean_dec_ref(v___y_4082_);
lean_dec(v___y_4081_);
lean_dec_ref(v___y_4080_);
lean_dec(v___y_4079_);
lean_dec_ref(v___y_4078_);
return v_res_4086_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12(lean_object* v_upperBound_4087_, lean_object* v___x_4088_, lean_object* v___x_4089_, lean_object* v_inst_4090_, lean_object* v_R_4091_, lean_object* v_a_4092_, lean_object* v_b_4093_, lean_object* v_c_4094_, uint8_t v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_){
_start:
{
lean_object* v___x_4103_; 
v___x_4103_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(v_upperBound_4087_, v___x_4089_, v_a_4092_, v_b_4093_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_, v___y_4101_);
return v___x_4103_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___boxed(lean_object* v_upperBound_4104_, lean_object* v___x_4105_, lean_object* v___x_4106_, lean_object* v_inst_4107_, lean_object* v_R_4108_, lean_object* v_a_4109_, lean_object* v_b_4110_, lean_object* v_c_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_){
_start:
{
uint8_t v___y_65117__boxed_4120_; lean_object* v_res_4121_; 
v___y_65117__boxed_4120_ = lean_unbox(v___y_4112_);
v_res_4121_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12(v_upperBound_4104_, v___x_4105_, v___x_4106_, v_inst_4107_, v_R_4108_, v_a_4109_, v_b_4110_, v_c_4111_, v___y_65117__boxed_4120_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_);
lean_dec(v___y_4118_);
lean_dec_ref(v___y_4117_);
lean_dec(v___y_4116_);
lean_dec_ref(v___y_4115_);
lean_dec(v___y_4114_);
lean_dec_ref(v___y_4113_);
lean_dec_ref(v___x_4106_);
lean_dec(v___x_4105_);
lean_dec(v_upperBound_4104_);
return v_res_4121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10(lean_object* v_00_u03b2_4122_, lean_object* v_a_4123_, lean_object* v_x_4124_){
_start:
{
lean_object* v___x_4125_; 
v___x_4125_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10___redArg(v_a_4123_, v_x_4124_);
return v___x_4125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10___boxed(lean_object* v_00_u03b2_4126_, lean_object* v_a_4127_, lean_object* v_x_4128_){
_start:
{
lean_object* v_res_4129_; 
v_res_4129_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__10(v_00_u03b2_4126_, v_a_4127_, v_x_4128_);
lean_dec(v_x_4128_);
lean_dec_ref(v_a_4127_);
return v_res_4129_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12(lean_object* v_00_u03b2_4130_, lean_object* v_a_4131_, lean_object* v_x_4132_){
_start:
{
uint8_t v___x_4133_; 
v___x_4133_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12___redArg(v_a_4131_, v_x_4132_);
return v___x_4133_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12___boxed(lean_object* v_00_u03b2_4134_, lean_object* v_a_4135_, lean_object* v_x_4136_){
_start:
{
uint8_t v_res_4137_; lean_object* v_r_4138_; 
v_res_4137_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__12(v_00_u03b2_4134_, v_a_4135_, v_x_4136_);
lean_dec(v_x_4136_);
lean_dec_ref(v_a_4135_);
v_r_4138_ = lean_box(v_res_4137_);
return v_r_4138_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13(lean_object* v_00_u03b2_4139_, lean_object* v_data_4140_){
_start:
{
lean_object* v___x_4141_; 
v___x_4141_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___redArg(v_data_4140_);
return v___x_4141_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14(lean_object* v_00_u03b2_4142_, lean_object* v_a_4143_, lean_object* v_b_4144_, lean_object* v_x_4145_){
_start:
{
lean_object* v___x_4146_; 
v___x_4146_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(v_a_4143_, v_b_4144_, v_x_4145_);
return v___x_4146_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29(lean_object* v_00_u03b2_4147_, lean_object* v_i_4148_, lean_object* v_source_4149_, lean_object* v_target_4150_){
_start:
{
lean_object* v___x_4151_; 
v___x_4151_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29___redArg(v_i_4148_, v_source_4149_, v_target_4150_);
return v___x_4151_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29_spec__34(lean_object* v_00_u03b2_4152_, lean_object* v_x_4153_, lean_object* v_x_4154_){
_start:
{
lean_object* v___x_4155_; 
v___x_4155_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13_spec__29_spec__34___redArg(v_x_4153_, v_x_4154_);
return v___x_4155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport(lean_object* v_pinfos_4156_, lean_object* v_i_4157_, lean_object* v_arg_4158_, lean_object* v_a_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_){
_start:
{
lean_object* v___x_4164_; 
v___x_4164_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v_pinfos_4156_, v_i_4157_, v_arg_4158_, v_a_4159_, v_a_4160_, v_a_4161_, v_a_4162_);
if (lean_obj_tag(v___x_4164_) == 0)
{
lean_object* v_a_4165_; lean_object* v___x_4167_; uint8_t v_isShared_4168_; uint8_t v_isSharedCheck_4180_; 
v_a_4165_ = lean_ctor_get(v___x_4164_, 0);
v_isSharedCheck_4180_ = !lean_is_exclusive(v___x_4164_);
if (v_isSharedCheck_4180_ == 0)
{
v___x_4167_ = v___x_4164_;
v_isShared_4168_ = v_isSharedCheck_4180_;
goto v_resetjp_4166_;
}
else
{
lean_inc(v_a_4165_);
lean_dec(v___x_4164_);
v___x_4167_ = lean_box(0);
v_isShared_4168_ = v_isSharedCheck_4180_;
goto v_resetjp_4166_;
}
v_resetjp_4166_:
{
uint8_t v___x_4169_; 
v___x_4169_ = lean_unbox(v_a_4165_);
lean_dec(v_a_4165_);
if (v___x_4169_ == 3)
{
uint8_t v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4173_; 
v___x_4170_ = 0;
v___x_4171_ = lean_box(v___x_4170_);
if (v_isShared_4168_ == 0)
{
lean_ctor_set(v___x_4167_, 0, v___x_4171_);
v___x_4173_ = v___x_4167_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v___x_4171_);
v___x_4173_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
return v___x_4173_;
}
}
else
{
uint8_t v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4178_; 
v___x_4175_ = 1;
v___x_4176_ = lean_box(v___x_4175_);
if (v_isShared_4168_ == 0)
{
lean_ctor_set(v___x_4167_, 0, v___x_4176_);
v___x_4178_ = v___x_4167_;
goto v_reusejp_4177_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v___x_4176_);
v___x_4178_ = v_reuseFailAlloc_4179_;
goto v_reusejp_4177_;
}
v_reusejp_4177_:
{
return v___x_4178_;
}
}
}
}
else
{
lean_object* v_a_4181_; lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4188_; 
v_a_4181_ = lean_ctor_get(v___x_4164_, 0);
v_isSharedCheck_4188_ = !lean_is_exclusive(v___x_4164_);
if (v_isSharedCheck_4188_ == 0)
{
v___x_4183_ = v___x_4164_;
v_isShared_4184_ = v_isSharedCheck_4188_;
goto v_resetjp_4182_;
}
else
{
lean_inc(v_a_4181_);
lean_dec(v___x_4164_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4188_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
lean_object* v___x_4186_; 
if (v_isShared_4184_ == 0)
{
v___x_4186_ = v___x_4183_;
goto v_reusejp_4185_;
}
else
{
lean_object* v_reuseFailAlloc_4187_; 
v_reuseFailAlloc_4187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4187_, 0, v_a_4181_);
v___x_4186_ = v_reuseFailAlloc_4187_;
goto v_reusejp_4185_;
}
v_reusejp_4185_:
{
return v___x_4186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport___boxed(lean_object* v_pinfos_4189_, lean_object* v_i_4190_, lean_object* v_arg_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_){
_start:
{
lean_object* v_res_4197_; 
v_res_4197_ = l_Lean_Meta_Sym_Canon_isSupport(v_pinfos_4189_, v_i_4190_, v_arg_4191_, v_a_4192_, v_a_4193_, v_a_4194_, v_a_4195_);
lean_dec(v_a_4195_);
lean_dec_ref(v_a_4194_);
lean_dec(v_a_4193_);
lean_dec_ref(v_a_4192_);
lean_dec(v_i_4190_);
lean_dec_ref(v_pinfos_4189_);
return v_res_4197_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(lean_object* v_category_4198_, lean_object* v_opts_4199_, lean_object* v_act_4200_, lean_object* v_decl_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_){
_start:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; 
lean_inc(v___y_4207_);
lean_inc_ref(v___y_4206_);
lean_inc(v___y_4205_);
lean_inc_ref(v___y_4204_);
lean_inc(v___y_4203_);
lean_inc_ref(v___y_4202_);
v___x_4209_ = lean_apply_6(v_act_4200_, v___y_4202_, v___y_4203_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_);
v___x_4210_ = l_Lean_profileitIOUnsafe___redArg(v_category_4198_, v_opts_4199_, v___x_4209_, v_decl_4201_);
return v___x_4210_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg___boxed(lean_object* v_category_4211_, lean_object* v_opts_4212_, lean_object* v_act_4213_, lean_object* v_decl_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_){
_start:
{
lean_object* v_res_4222_; 
v_res_4222_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(v_category_4211_, v_opts_4212_, v_act_4213_, v_decl_4214_, v___y_4215_, v___y_4216_, v___y_4217_, v___y_4218_, v___y_4219_, v___y_4220_);
lean_dec(v___y_4220_);
lean_dec_ref(v___y_4219_);
lean_dec(v___y_4218_);
lean_dec_ref(v___y_4217_);
lean_dec(v___y_4216_);
lean_dec_ref(v___y_4215_);
lean_dec_ref(v_opts_4212_);
lean_dec_ref(v_category_4211_);
return v_res_4222_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0(lean_object* v_00_u03b1_4223_, lean_object* v_category_4224_, lean_object* v_opts_4225_, lean_object* v_act_4226_, lean_object* v_decl_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_){
_start:
{
lean_object* v___x_4235_; 
v___x_4235_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(v_category_4224_, v_opts_4225_, v_act_4226_, v_decl_4227_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_);
return v___x_4235_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___boxed(lean_object* v_00_u03b1_4236_, lean_object* v_category_4237_, lean_object* v_opts_4238_, lean_object* v_act_4239_, lean_object* v_decl_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_){
_start:
{
lean_object* v_res_4248_; 
v_res_4248_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0(v_00_u03b1_4236_, v_category_4237_, v_opts_4238_, v_act_4239_, v_decl_4240_, v___y_4241_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_);
lean_dec(v___y_4246_);
lean_dec_ref(v___y_4245_);
lean_dec(v___y_4244_);
lean_dec_ref(v___y_4243_);
lean_dec(v___y_4242_);
lean_dec_ref(v___y_4241_);
lean_dec_ref(v_opts_4238_);
lean_dec_ref(v_category_4237_);
return v_res_4248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0(uint8_t v___x_4249_, lean_object* v_e_4250_, uint8_t v___x_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_){
_start:
{
lean_object* v___y_4260_; lean_object* v___x_4269_; uint8_t v_transparency_4270_; uint8_t v___x_4271_; 
v___x_4269_ = l_Lean_Meta_Context_config(v___y_4254_);
v_transparency_4270_ = lean_ctor_get_uint8(v___x_4269_, 9);
lean_dec_ref(v___x_4269_);
v___x_4271_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4270_, v___x_4249_);
if (v___x_4271_ == 0)
{
lean_object* v_keyedConfig_4272_; uint8_t v_trackZetaDelta_4273_; lean_object* v_zetaDeltaSet_4274_; lean_object* v_lctx_4275_; lean_object* v_localInstances_4276_; lean_object* v_defEqCtx_x3f_4277_; lean_object* v_synthPendingDepth_4278_; lean_object* v_customCanUnfoldPredicate_x3f_4279_; uint8_t v_univApprox_4280_; uint8_t v_inTypeClassResolution_4281_; uint8_t v_cacheInferType_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; 
v_keyedConfig_4272_ = lean_ctor_get(v___y_4254_, 0);
v_trackZetaDelta_4273_ = lean_ctor_get_uint8(v___y_4254_, sizeof(void*)*7);
v_zetaDeltaSet_4274_ = lean_ctor_get(v___y_4254_, 1);
v_lctx_4275_ = lean_ctor_get(v___y_4254_, 2);
v_localInstances_4276_ = lean_ctor_get(v___y_4254_, 3);
v_defEqCtx_x3f_4277_ = lean_ctor_get(v___y_4254_, 4);
v_synthPendingDepth_4278_ = lean_ctor_get(v___y_4254_, 5);
v_customCanUnfoldPredicate_x3f_4279_ = lean_ctor_get(v___y_4254_, 6);
v_univApprox_4280_ = lean_ctor_get_uint8(v___y_4254_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4281_ = lean_ctor_get_uint8(v___y_4254_, sizeof(void*)*7 + 2);
v_cacheInferType_4282_ = lean_ctor_get_uint8(v___y_4254_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4272_);
v___x_4283_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4249_, v_keyedConfig_4272_);
lean_inc(v_customCanUnfoldPredicate_x3f_4279_);
lean_inc(v_synthPendingDepth_4278_);
lean_inc(v_defEqCtx_x3f_4277_);
lean_inc_ref(v_localInstances_4276_);
lean_inc_ref(v_lctx_4275_);
lean_inc(v_zetaDeltaSet_4274_);
v___x_4284_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4284_, 0, v___x_4283_);
lean_ctor_set(v___x_4284_, 1, v_zetaDeltaSet_4274_);
lean_ctor_set(v___x_4284_, 2, v_lctx_4275_);
lean_ctor_set(v___x_4284_, 3, v_localInstances_4276_);
lean_ctor_set(v___x_4284_, 4, v_defEqCtx_x3f_4277_);
lean_ctor_set(v___x_4284_, 5, v_synthPendingDepth_4278_);
lean_ctor_set(v___x_4284_, 6, v_customCanUnfoldPredicate_x3f_4279_);
lean_ctor_set_uint8(v___x_4284_, sizeof(void*)*7, v_trackZetaDelta_4273_);
lean_ctor_set_uint8(v___x_4284_, sizeof(void*)*7 + 1, v_univApprox_4280_);
lean_ctor_set_uint8(v___x_4284_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4281_);
lean_ctor_set_uint8(v___x_4284_, sizeof(void*)*7 + 3, v_cacheInferType_4282_);
v___x_4285_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_4250_, v___x_4251_, v___y_4252_, v___y_4253_, v___x_4284_, v___y_4255_, v___y_4256_, v___y_4257_);
lean_dec_ref_known(v___x_4284_, 7);
v___y_4260_ = v___x_4285_;
goto v___jp_4259_;
}
else
{
lean_object* v___x_4286_; 
v___x_4286_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_4250_, v___x_4251_, v___y_4252_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_, v___y_4257_);
v___y_4260_ = v___x_4286_;
goto v___jp_4259_;
}
v___jp_4259_:
{
if (lean_obj_tag(v___y_4260_) == 0)
{
return v___y_4260_;
}
else
{
lean_object* v_a_4261_; lean_object* v___x_4263_; uint8_t v_isShared_4264_; uint8_t v_isSharedCheck_4268_; 
v_a_4261_ = lean_ctor_get(v___y_4260_, 0);
v_isSharedCheck_4268_ = !lean_is_exclusive(v___y_4260_);
if (v_isSharedCheck_4268_ == 0)
{
v___x_4263_ = v___y_4260_;
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
else
{
lean_inc(v_a_4261_);
lean_dec(v___y_4260_);
v___x_4263_ = lean_box(0);
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
v_resetjp_4262_:
{
lean_object* v___x_4266_; 
if (v_isShared_4264_ == 0)
{
v___x_4266_ = v___x_4263_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4267_; 
v_reuseFailAlloc_4267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4267_, 0, v_a_4261_);
v___x_4266_ = v_reuseFailAlloc_4267_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
return v___x_4266_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0___boxed(lean_object* v___x_4287_, lean_object* v_e_4288_, lean_object* v___x_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_){
_start:
{
uint8_t v___x_2105__boxed_4297_; uint8_t v___x_2106__boxed_4298_; lean_object* v_res_4299_; 
v___x_2105__boxed_4297_ = lean_unbox(v___x_4287_);
v___x_2106__boxed_4298_ = lean_unbox(v___x_4289_);
v_res_4299_ = l_Lean_Meta_Sym_canon___lam__0(v___x_2105__boxed_4297_, v_e_4288_, v___x_2106__boxed_4298_, v___y_4290_, v___y_4291_, v___y_4292_, v___y_4293_, v___y_4294_, v___y_4295_);
lean_dec(v___y_4295_);
lean_dec_ref(v___y_4294_);
lean_dec(v___y_4293_);
lean_dec_ref(v___y_4292_);
lean_dec(v___y_4291_);
lean_dec_ref(v___y_4290_);
return v_res_4299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon(lean_object* v_e_4301_, lean_object* v_a_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_){
_start:
{
lean_object* v_toCold_4309_; lean_object* v_options_4310_; lean_object* v___x_4311_; uint8_t v___x_4312_; uint8_t v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___f_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; 
v_toCold_4309_ = lean_ctor_get(v_a_4306_, 0);
v_options_4310_ = lean_ctor_get(v_toCold_4309_, 2);
v___x_4311_ = ((lean_object*)(l_Lean_Meta_Sym_canon___closed__0));
v___x_4312_ = 0;
v___x_4313_ = 2;
v___x_4314_ = lean_box(v___x_4313_);
v___x_4315_ = lean_box(v___x_4312_);
v___f_4316_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_canon___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4316_, 0, v___x_4314_);
lean_closure_set(v___f_4316_, 1, v_e_4301_);
lean_closure_set(v___f_4316_, 2, v___x_4315_);
v___x_4317_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_);
v___x_4318_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(v___x_4311_, v_options_4310_, v___f_4316_, v___x_4317_, v_a_4302_, v_a_4303_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
return v___x_4318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___boxed(lean_object* v_e_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_, lean_object* v_a_4324_, lean_object* v_a_4325_, lean_object* v_a_4326_){
_start:
{
lean_object* v_res_4327_; 
v_res_4327_ = l_Lean_Meta_Sym_canon(v_e_4319_, v_a_4320_, v_a_4321_, v_a_4322_, v_a_4323_, v_a_4324_, v_a_4325_);
lean_dec(v_a_4325_);
lean_dec_ref(v_a_4324_);
lean_dec(v_a_4323_);
lean_dec_ref(v_a_4322_);
lean_dec(v_a_4321_);
lean_dec_ref(v_a_4320_);
return v_res_4327_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Arith_EvalNum(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_IntInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LitValues(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Eta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Canon(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_EvalNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_IntInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Eta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default = _init_l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default();
l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult = _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Canon(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Arith_EvalNum(uint8_t builtin);
lean_object* initialize_Lean_Meta_IntInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Meta_LitValues(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Eta(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Canon(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Arith_EvalNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_IntInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Eta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Canon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Canon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Canon(builtin);
}
#ifdef __cplusplus
}
#endif

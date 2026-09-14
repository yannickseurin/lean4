// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.BuiltinSimprocs.Nat
// Imports: public import Init.Simproc public import Lean.Meta.Tactic.Simp.BuiltinSimprocs.Util public import Lean.Meta.LitValues public import Lean.Meta.Offset import Lean.Util.SafeExponentiation import Init.Data.Nat.Dvd import Init.Data.Nat.Simproc
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkInstAdd;
lean_object* l_Lean_Meta_matchesInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkInstHAdd;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_lxor(lean_object*, lean_object*);
lean_object* lean_nat_gcd(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
extern lean_object* l_Lean_eagerReflBoolTrue;
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_log2(lean_object*);
lean_object* l_Lean_Meta_Simp_evalPropStep___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_checkExponent(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
lean_object* lean_nat_lor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_fromExpr_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_fromExpr_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_fromExpr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_fromExpr_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBin___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBin___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBin(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBin___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Nat_reduceSucc___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Nat_reduceSucc___redArg___closed__0 = (const lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceSucc___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l_Nat_reduceSucc___redArg___closed__1 = (const lean_object*)&l_Nat_reduceSucc___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceSucc___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceSucc___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceSucc___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceSucc___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l_Nat_reduceSucc___redArg___closed__2 = (const lean_object*)&l_Nat_reduceSucc___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceSucc___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceSucc___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceSucc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceSucc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "reduceSucc"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value),LEAN_SCALAR_PTR_LITERAL(103, 57, 115, 133, 251, 27, 153, 14)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceSucc___redArg___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_24____boxed(lean_object*);
static const lean_string_object l_Nat_reduceLog2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "log2"};
static const lean_object* l_Nat_reduceLog2___redArg___closed__0 = (const lean_object*)&l_Nat_reduceLog2___redArg___closed__0_value;
static const lean_ctor_object l_Nat_reduceLog2___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceLog2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceLog2___redArg___closed__1_value_aux_0),((lean_object*)&l_Nat_reduceLog2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 28, 147, 205, 160, 10, 161, 183)}};
static const lean_object* l_Nat_reduceLog2___redArg___closed__1 = (const lean_object*)&l_Nat_reduceLog2___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Nat_reduceLog2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLog2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLog2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLog2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "reduceLog2"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value),LEAN_SCALAR_PTR_LITERAL(246, 49, 5, 115, 208, 139, 88, 185)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceLog2___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_24____boxed(lean_object*);
static const lean_string_object l_Nat_reduceAdd___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Nat_reduceAdd___redArg___closed__0 = (const lean_object*)&l_Nat_reduceAdd___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceAdd___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Nat_reduceAdd___redArg___closed__1 = (const lean_object*)&l_Nat_reduceAdd___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceAdd___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceAdd___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l_Nat_reduceAdd___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceAdd___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceAdd___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l_Nat_reduceAdd___redArg___closed__2 = (const lean_object*)&l_Nat_reduceAdd___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceAdd___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceAdd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(209, 55, 73, 242, 185, 51, 64, 86)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceAdd___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reduceMul___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Nat_reduceMul___redArg___closed__0 = (const lean_object*)&l_Nat_reduceMul___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceMul___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Nat_reduceMul___redArg___closed__1 = (const lean_object*)&l_Nat_reduceMul___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceMul___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceMul___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l_Nat_reduceMul___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceMul___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceMul___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l_Nat_reduceMul___redArg___closed__2 = (const lean_object*)&l_Nat_reduceMul___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceMul___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceMul___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(167, 230, 249, 145, 254, 156, 61, 245)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceMul___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reduceSub___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l_Nat_reduceSub___redArg___closed__0 = (const lean_object*)&l_Nat_reduceSub___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceSub___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l_Nat_reduceSub___redArg___closed__1 = (const lean_object*)&l_Nat_reduceSub___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceSub___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSub___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l_Nat_reduceSub___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceSub___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceSub___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l_Nat_reduceSub___redArg___closed__2 = (const lean_object*)&l_Nat_reduceSub___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceSub___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceSub___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceSub(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceSub___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(171, 95, 24, 58, 17, 176, 174, 203)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceSub___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reduceDiv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l_Nat_reduceDiv___redArg___closed__0 = (const lean_object*)&l_Nat_reduceDiv___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceDiv___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l_Nat_reduceDiv___redArg___closed__1 = (const lean_object*)&l_Nat_reduceDiv___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceDiv___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceDiv___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l_Nat_reduceDiv___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceDiv___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceDiv___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l_Nat_reduceDiv___redArg___closed__2 = (const lean_object*)&l_Nat_reduceDiv___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceDiv___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceDiv___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceDiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceDiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceDiv"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(231, 215, 207, 13, 249, 183, 176, 189)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceDiv___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reduceMod___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l_Nat_reduceMod___redArg___closed__0 = (const lean_object*)&l_Nat_reduceMod___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceMod___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l_Nat_reduceMod___redArg___closed__1 = (const lean_object*)&l_Nat_reduceMod___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceMod___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceMod___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l_Nat_reduceMod___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceMod___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceMod___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l_Nat_reduceMod___redArg___closed__2 = (const lean_object*)&l_Nat_reduceMod___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceMod___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceMod___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceMod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceMod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceMod"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(183, 226, 154, 210, 11, 244, 146, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceMod___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reducePow___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l_Nat_reducePow___redArg___closed__0 = (const lean_object*)&l_Nat_reducePow___redArg___closed__0_value;
static const lean_string_object l_Nat_reducePow___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l_Nat_reducePow___redArg___closed__1 = (const lean_object*)&l_Nat_reducePow___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reducePow___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reducePow___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 188, 136, 200, 106, 253, 76, 178)}};
static const lean_ctor_object l_Nat_reducePow___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reducePow___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reducePow___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 63, 208, 57, 56, 184, 164, 144)}};
static const lean_object* l_Nat_reducePow___redArg___closed__2 = (const lean_object*)&l_Nat_reducePow___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reducePow___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reducePow___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reducePow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reducePow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducePow"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(60, 231, 124, 151, 108, 38, 1, 169)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reducePow___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reduceAnd___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAnd"};
static const lean_object* l_Nat_reduceAnd___redArg___closed__0 = (const lean_object*)&l_Nat_reduceAnd___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceAnd___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAnd"};
static const lean_object* l_Nat_reduceAnd___redArg___closed__1 = (const lean_object*)&l_Nat_reduceAnd___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceAnd___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceAnd___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 205, 8, 181, 48, 134, 168, 175)}};
static const lean_ctor_object l_Nat_reduceAnd___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceAnd___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceAnd___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 171, 107, 112, 94, 43, 106, 200)}};
static const lean_object* l_Nat_reduceAnd___redArg___closed__2 = (const lean_object*)&l_Nat_reduceAnd___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceAnd___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceAnd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceAnd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceAnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceAnd"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(148, 61, 72, 84, 221, 248, 138, 244)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceAnd___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reduceXor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HXor"};
static const lean_object* l_Nat_reduceXor___redArg___closed__0 = (const lean_object*)&l_Nat_reduceXor___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceXor___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hXor"};
static const lean_object* l_Nat_reduceXor___redArg___closed__1 = (const lean_object*)&l_Nat_reduceXor___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceXor___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceXor___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 198, 212, 133, 26, 7, 147, 78)}};
static const lean_ctor_object l_Nat_reduceXor___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceXor___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceXor___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 159, 33, 254, 118, 42, 120, 166)}};
static const lean_object* l_Nat_reduceXor___redArg___closed__2 = (const lean_object*)&l_Nat_reduceXor___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceXor___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceXor___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceXor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceXor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceXor"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(247, 188, 94, 215, 20, 109, 242, 34)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceXor___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reduceOr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HOr"};
static const lean_object* l_Nat_reduceOr___redArg___closed__0 = (const lean_object*)&l_Nat_reduceOr___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceOr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "hOr"};
static const lean_object* l_Nat_reduceOr___redArg___closed__1 = (const lean_object*)&l_Nat_reduceOr___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceOr___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(145, 77, 185, 226, 52, 149, 89, 139)}};
static const lean_ctor_object l_Nat_reduceOr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceOr___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceOr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(45, 86, 165, 237, 21, 139, 25, 132)}};
static const lean_object* l_Nat_reduceOr___redArg___closed__2 = (const lean_object*)&l_Nat_reduceOr___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceOr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceOr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceOr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceOr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "reduceOr"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(221, 174, 173, 61, 215, 145, 106, 86)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceOr___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reduceShiftLeft___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "HShiftLeft"};
static const lean_object* l_Nat_reduceShiftLeft___redArg___closed__0 = (const lean_object*)&l_Nat_reduceShiftLeft___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceShiftLeft___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "hShiftLeft"};
static const lean_object* l_Nat_reduceShiftLeft___redArg___closed__1 = (const lean_object*)&l_Nat_reduceShiftLeft___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceShiftLeft___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceShiftLeft___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 217, 51, 89, 252, 54, 156, 169)}};
static const lean_ctor_object l_Nat_reduceShiftLeft___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceShiftLeft___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceShiftLeft___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(181, 245, 218, 3, 224, 235, 179, 59)}};
static const lean_object* l_Nat_reduceShiftLeft___redArg___closed__2 = (const lean_object*)&l_Nat_reduceShiftLeft___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceShiftLeft___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceShiftLeft___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceShiftLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceShiftLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "reduceShiftLeft"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(207, 233, 59, 9, 218, 201, 108, 251)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceShiftLeft___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reduceShiftRight___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "HShiftRight"};
static const lean_object* l_Nat_reduceShiftRight___redArg___closed__0 = (const lean_object*)&l_Nat_reduceShiftRight___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceShiftRight___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hShiftRight"};
static const lean_object* l_Nat_reduceShiftRight___redArg___closed__1 = (const lean_object*)&l_Nat_reduceShiftRight___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceShiftRight___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceShiftRight___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 35, 163, 146, 1, 76, 65, 75)}};
static const lean_ctor_object l_Nat_reduceShiftRight___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceShiftRight___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceShiftRight___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 65, 204, 240, 51, 126, 9, 157)}};
static const lean_object* l_Nat_reduceShiftRight___redArg___closed__2 = (const lean_object*)&l_Nat_reduceShiftRight___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceShiftRight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceShiftRight___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceShiftRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceShiftRight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "reduceShiftRight"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(243, 57, 160, 187, 200, 59, 234, 38)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceShiftRight___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reduceGcd___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gcd"};
static const lean_object* l_Nat_reduceGcd___redArg___closed__0 = (const lean_object*)&l_Nat_reduceGcd___redArg___closed__0_value;
static const lean_ctor_object l_Nat_reduceGcd___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceGcd___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceGcd___redArg___closed__1_value_aux_0),((lean_object*)&l_Nat_reduceGcd___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 94, 240, 174, 21, 113, 54, 0)}};
static const lean_object* l_Nat_reduceGcd___redArg___closed__1 = (const lean_object*)&l_Nat_reduceGcd___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Nat_reduceGcd___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGcd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGcd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGcd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceGcd"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(82, 32, 179, 68, 111, 80, 212, 175)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceGcd___redArg___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_25_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_25____boxed(lean_object*);
static const lean_string_object l_Nat_reduceLT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l_Nat_reduceLT___redArg___closed__0 = (const lean_object*)&l_Nat_reduceLT___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceLT___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Nat_reduceLT___redArg___closed__1 = (const lean_object*)&l_Nat_reduceLT___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceLT___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceLT___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l_Nat_reduceLT___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceLT___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceLT___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l_Nat_reduceLT___redArg___closed__2 = (const lean_object*)&l_Nat_reduceLT___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceLT___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLT___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "reduceLT"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(226, 122, 83, 255, 56, 112, 58, 110)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceLT___redArg___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_Nat_reduceGT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "GT"};
static const lean_object* l_Nat_reduceGT___redArg___closed__0 = (const lean_object*)&l_Nat_reduceGT___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceGT___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_Nat_reduceGT___redArg___closed__1 = (const lean_object*)&l_Nat_reduceGT___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceGT___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceGT___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 16, 15, 58, 66, 186, 138, 31)}};
static const lean_ctor_object l_Nat_reduceGT___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceGT___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceGT___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 75, 137, 103, 59, 22, 209, 130)}};
static const lean_object* l_Nat_reduceGT___redArg___closed__2 = (const lean_object*)&l_Nat_reduceGT___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceGT___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGT___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "reduceGT"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(188, 136, 66, 184, 194, 15, 6, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_Nat_reduceBEq___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l_Nat_reduceBEq___redArg___closed__0 = (const lean_object*)&l_Nat_reduceBEq___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceBEq___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l_Nat_reduceBEq___redArg___closed__1 = (const lean_object*)&l_Nat_reduceBEq___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceBEq___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceBEq___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l_Nat_reduceBEq___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceBEq___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceBEq___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l_Nat_reduceBEq___redArg___closed__2 = (const lean_object*)&l_Nat_reduceBEq___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_reduceBEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceBEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(103, 209, 103, 202, 56, 43, 177, 152)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceBEq___redArg___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_Nat_reduceBNe___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bne"};
static const lean_object* l_Nat_reduceBNe___redArg___closed__0 = (const lean_object*)&l_Nat_reduceBNe___redArg___closed__0_value;
static const lean_ctor_object l_Nat_reduceBNe___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceBNe___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 187, 84, 23, 255, 12, 25, 13)}};
static const lean_object* l_Nat_reduceBNe___redArg___closed__1 = (const lean_object*)&l_Nat_reduceBNe___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Nat_reduceBNe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBNe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBNe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBNe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceBNe"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(177, 23, 93, 29, 19, 120, 61, 196)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceBNe___redArg___closed__1_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_Nat_isValue___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Nat_isValue___redArg___closed__0 = (const lean_object*)&l_Nat_isValue___redArg___closed__0_value;
static const lean_string_object l_Nat_isValue___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Nat_isValue___redArg___closed__1 = (const lean_object*)&l_Nat_isValue___redArg___closed__1_value;
static const lean_ctor_object l_Nat_isValue___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_isValue___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Nat_isValue___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_isValue___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_isValue___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Nat_isValue___redArg___closed__2 = (const lean_object*)&l_Nat_isValue___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Nat_isValue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_isValue___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_isValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_isValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isValue"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value),LEAN_SCALAR_PTR_LITERAL(190, 70, 159, 136, 109, 243, 67, 210)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_isValue___redArg___closed__2_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_const_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_const_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_offset_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_offset_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(50, 34, 112, 179, 66, 45, 192, 92)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 81, 239, 34, 203, 244, 36, 133)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instAddNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__6_value),LEAN_SCALAR_PTR_LITERAL(228, 164, 175, 25, 228, 165, 175, 183)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__14;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instSubNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 126, 242, 252, 139, 96, 73, 92)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 225, 92, 14, 170, 61, 170, 140)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "instBEqOfDecidableEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 219, 5, 21, 176, 98, 250, 108)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "instDecidableEqNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__3_value),LEAN_SCALAR_PTR_LITERAL(14, 141, 250, 24, 208, 103, 93, 195)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBneNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBneNat___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBneNat(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLENat"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 47, 64, 46, 87, 101, 57, 105)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkGENat(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__0;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLTNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__1_value),LEAN_SCALAR_PTR_LITERAL(141, 27, 201, 217, 48, 203, 85, 203)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkGTNat(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "of_decide_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 143, 142, 104, 169, 34, 63, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_decide_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_decide_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_false_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_false_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_eq_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_eq_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Simproc"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eq_add_gt"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(236, 49, 75, 205, 14, 153, 197, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eq_add_le"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(151, 221, 155, 114, 230, 4, 170, 85)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "add_eq_gt"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(222, 96, 15, 118, 250, 229, 166, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "add_eq_le"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(251, 19, 99, 115, 28, 102, 68, 41)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "add_eq_add_le"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(63, 34, 5, 84, 182, 212, 65, 53)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "add_eq_add_ge"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__13_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(145, 96, 71, 238, 158, 249, 159, 245)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Nat_reduceEqDiff___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "eq_false_of_decide"};
static const lean_object* l_Nat_reduceEqDiff___redArg___closed__0 = (const lean_object*)&l_Nat_reduceEqDiff___redArg___closed__0_value;
static const lean_ctor_object l_Nat_reduceEqDiff___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceEqDiff___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 157, 112, 124, 91, 52, 64, 56)}};
static const lean_object* l_Nat_reduceEqDiff___redArg___closed__1 = (const lean_object*)&l_Nat_reduceEqDiff___redArg___closed__1_value;
static lean_once_cell_t l_Nat_reduceEqDiff___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reduceEqDiff___redArg___closed__2;
static const lean_string_object l_Nat_reduceEqDiff___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_Nat_reduceEqDiff___redArg___closed__3 = (const lean_object*)&l_Nat_reduceEqDiff___redArg___closed__3_value;
static const lean_ctor_object l_Nat_reduceEqDiff___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceEqDiff___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_Nat_reduceEqDiff___redArg___closed__4 = (const lean_object*)&l_Nat_reduceEqDiff___redArg___closed__4_value;
static lean_once_cell_t l_Nat_reduceEqDiff___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reduceEqDiff___redArg___closed__5;
static const lean_string_object l_Nat_reduceEqDiff___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "eq_true_of_decide"};
static const lean_object* l_Nat_reduceEqDiff___redArg___closed__6 = (const lean_object*)&l_Nat_reduceEqDiff___redArg___closed__6_value;
static const lean_ctor_object l_Nat_reduceEqDiff___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceEqDiff___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(10, 132, 193, 70, 136, 209, 66, 149)}};
static const lean_object* l_Nat_reduceEqDiff___redArg___closed__7 = (const lean_object*)&l_Nat_reduceEqDiff___redArg___closed__7_value;
static lean_once_cell_t l_Nat_reduceEqDiff___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reduceEqDiff___redArg___closed__8;
static const lean_string_object l_Nat_reduceEqDiff___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Nat_reduceEqDiff___redArg___closed__9 = (const lean_object*)&l_Nat_reduceEqDiff___redArg___closed__9_value;
static const lean_ctor_object l_Nat_reduceEqDiff___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceEqDiff___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Nat_reduceEqDiff___redArg___closed__10 = (const lean_object*)&l_Nat_reduceEqDiff___redArg___closed__10_value;
static lean_once_cell_t l_Nat_reduceEqDiff___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reduceEqDiff___redArg___closed__11;
LEAN_EXPORT lean_object* l_Nat_reduceEqDiff___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceEqDiff___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceEqDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceEqDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceEqDiff"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(254, 236, 88, 131, 52, 249, 43, 173)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_Nat_reduceBeqDiff___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "beqFalseOfEqFalse"};
static const lean_object* l_Nat_reduceBeqDiff___redArg___closed__0 = (const lean_object*)&l_Nat_reduceBeqDiff___redArg___closed__0_value;
static const lean_ctor_object l_Nat_reduceBeqDiff___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceBeqDiff___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceBeqDiff___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l_Nat_reduceBeqDiff___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceBeqDiff___redArg___closed__1_value_aux_1),((lean_object*)&l_Nat_reduceBeqDiff___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(80, 37, 109, 252, 57, 80, 240, 250)}};
static const lean_object* l_Nat_reduceBeqDiff___redArg___closed__1 = (const lean_object*)&l_Nat_reduceBeqDiff___redArg___closed__1_value;
static lean_once_cell_t l_Nat_reduceBeqDiff___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reduceBeqDiff___redArg___closed__2;
static const lean_string_object l_Nat_reduceBeqDiff___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "beqEqOfEqEq"};
static const lean_object* l_Nat_reduceBeqDiff___redArg___closed__3 = (const lean_object*)&l_Nat_reduceBeqDiff___redArg___closed__3_value;
static const lean_ctor_object l_Nat_reduceBeqDiff___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceBeqDiff___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceBeqDiff___redArg___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l_Nat_reduceBeqDiff___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceBeqDiff___redArg___closed__4_value_aux_1),((lean_object*)&l_Nat_reduceBeqDiff___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 252, 102, 212, 241, 77, 109, 37)}};
static const lean_object* l_Nat_reduceBeqDiff___redArg___closed__4 = (const lean_object*)&l_Nat_reduceBeqDiff___redArg___closed__4_value;
static lean_once_cell_t l_Nat_reduceBeqDiff___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reduceBeqDiff___redArg___closed__5;
LEAN_EXPORT lean_object* l_Nat_reduceBeqDiff___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBeqDiff___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBeqDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBeqDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "reduceBeqDiff"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(241, 192, 105, 34, 163, 55, 67, 191)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_Nat_reduceBneDiff___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "bneTrueOfEqFalse"};
static const lean_object* l_Nat_reduceBneDiff___redArg___closed__0 = (const lean_object*)&l_Nat_reduceBneDiff___redArg___closed__0_value;
static const lean_ctor_object l_Nat_reduceBneDiff___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceBneDiff___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceBneDiff___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l_Nat_reduceBneDiff___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceBneDiff___redArg___closed__1_value_aux_1),((lean_object*)&l_Nat_reduceBneDiff___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 18, 96, 112, 23, 126, 226, 206)}};
static const lean_object* l_Nat_reduceBneDiff___redArg___closed__1 = (const lean_object*)&l_Nat_reduceBneDiff___redArg___closed__1_value;
static lean_once_cell_t l_Nat_reduceBneDiff___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reduceBneDiff___redArg___closed__2;
static const lean_string_object l_Nat_reduceBneDiff___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "bneEqOfEqEq"};
static const lean_object* l_Nat_reduceBneDiff___redArg___closed__3 = (const lean_object*)&l_Nat_reduceBneDiff___redArg___closed__3_value;
static const lean_ctor_object l_Nat_reduceBneDiff___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceBneDiff___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceBneDiff___redArg___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l_Nat_reduceBneDiff___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceBneDiff___redArg___closed__4_value_aux_1),((lean_object*)&l_Nat_reduceBneDiff___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(195, 158, 215, 107, 79, 237, 39, 137)}};
static const lean_object* l_Nat_reduceBneDiff___redArg___closed__4 = (const lean_object*)&l_Nat_reduceBneDiff___redArg___closed__4_value;
static lean_once_cell_t l_Nat_reduceBneDiff___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reduceBneDiff___redArg___closed__5;
LEAN_EXPORT lean_object* l_Nat_reduceBneDiff___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBneDiff___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBneDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBneDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "reduceBneDiff"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(187, 243, 98, 188, 219, 83, 246, 139)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "add_le_add_le"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 38, 194, 84, 75, 182, 180, 195)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "le_add_ge"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 240, 107, 221, 21, 179, 249, 17)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "le_add_le"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(177, 232, 2, 112, 26, 243, 197, 145)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "add_le_gt"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(184, 68, 207, 87, 108, 168, 176, 41)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "add_le_le"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(220, 9, 215, 28, 195, 38, 233, 114)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "add_le_add_ge"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(50, 197, 80, 96, 198, 252, 127, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLeDiff___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLeDiff___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLeDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceLeDiff"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value),LEAN_SCALAR_PTR_LITERAL(46, 217, 224, 205, 36, 202, 222, 40)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_31_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_31____boxed(lean_object*);
static const lean_string_object l_Nat_reduceSubDiff___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "sub_add_eq_comm"};
static const lean_object* l_Nat_reduceSubDiff___redArg___closed__0 = (const lean_object*)&l_Nat_reduceSubDiff___redArg___closed__0_value;
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__1_value_aux_1),((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 127, 24, 115, 7, 168, 162, 198)}};
static const lean_object* l_Nat_reduceSubDiff___redArg___closed__1 = (const lean_object*)&l_Nat_reduceSubDiff___redArg___closed__1_value;
static const lean_string_object l_Nat_reduceSubDiff___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "add_sub_le"};
static const lean_object* l_Nat_reduceSubDiff___redArg___closed__2 = (const lean_object*)&l_Nat_reduceSubDiff___redArg___closed__2_value;
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__3_value_aux_1),((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(121, 216, 225, 85, 93, 18, 232, 126)}};
static const lean_object* l_Nat_reduceSubDiff___redArg___closed__3 = (const lean_object*)&l_Nat_reduceSubDiff___redArg___closed__3_value;
static const lean_string_object l_Nat_reduceSubDiff___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "add_sub_assoc"};
static const lean_object* l_Nat_reduceSubDiff___redArg___closed__4 = (const lean_object*)&l_Nat_reduceSubDiff___redArg___closed__4_value;
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__5_value_aux_0),((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(159, 186, 201, 236, 181, 193, 225, 53)}};
static const lean_object* l_Nat_reduceSubDiff___redArg___closed__5 = (const lean_object*)&l_Nat_reduceSubDiff___redArg___closed__5_value;
static const lean_string_object l_Nat_reduceSubDiff___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "add_sub_add_le"};
static const lean_object* l_Nat_reduceSubDiff___redArg___closed__6 = (const lean_object*)&l_Nat_reduceSubDiff___redArg___closed__6_value;
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__7_value_aux_1),((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(3, 51, 84, 134, 180, 46, 92, 43)}};
static const lean_object* l_Nat_reduceSubDiff___redArg___closed__7 = (const lean_object*)&l_Nat_reduceSubDiff___redArg___closed__7_value;
static const lean_string_object l_Nat_reduceSubDiff___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "add_sub_add_ge"};
static const lean_object* l_Nat_reduceSubDiff___redArg___closed__8 = (const lean_object*)&l_Nat_reduceSubDiff___redArg___closed__8_value;
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 105, 31, 171, 182, 103, 187, 41)}};
static const lean_ctor_object l_Nat_reduceSubDiff___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__9_value_aux_1),((lean_object*)&l_Nat_reduceSubDiff___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(48, 27, 181, 35, 241, 165, 108, 235)}};
static const lean_object* l_Nat_reduceSubDiff___redArg___closed__9 = (const lean_object*)&l_Nat_reduceSubDiff___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Nat_reduceSubDiff___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceSubDiff___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceSubDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceSubDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "reduceSubDiff"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(56, 43, 140, 205, 20, 127, 167, 91)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_30____boxed(lean_object*);
static const lean_string_object l_Nat_reduceDvd___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Dvd"};
static const lean_object* l_Nat_reduceDvd___redArg___closed__0 = (const lean_object*)&l_Nat_reduceDvd___redArg___closed__0_value;
static const lean_string_object l_Nat_reduceDvd___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dvd"};
static const lean_object* l_Nat_reduceDvd___redArg___closed__1 = (const lean_object*)&l_Nat_reduceDvd___redArg___closed__1_value;
static const lean_ctor_object l_Nat_reduceDvd___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceDvd___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 71, 229, 107, 63, 192, 93, 62)}};
static const lean_ctor_object l_Nat_reduceDvd___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceDvd___redArg___closed__2_value_aux_0),((lean_object*)&l_Nat_reduceDvd___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(233, 16, 181, 127, 123, 63, 3, 18)}};
static const lean_object* l_Nat_reduceDvd___redArg___closed__2 = (const lean_object*)&l_Nat_reduceDvd___redArg___closed__2_value;
static const lean_string_object l_Nat_reduceDvd___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "instDvd"};
static const lean_object* l_Nat_reduceDvd___redArg___closed__3 = (const lean_object*)&l_Nat_reduceDvd___redArg___closed__3_value;
static const lean_ctor_object l_Nat_reduceDvd___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceDvd___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceDvd___redArg___closed__4_value_aux_0),((lean_object*)&l_Nat_reduceDvd___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(154, 210, 229, 77, 176, 177, 112, 145)}};
static const lean_object* l_Nat_reduceDvd___redArg___closed__4 = (const lean_object*)&l_Nat_reduceDvd___redArg___closed__4_value;
static lean_once_cell_t l_Nat_reduceDvd___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reduceDvd___redArg___closed__5;
static const lean_string_object l_Nat_reduceDvd___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "dvd_eq_false_of_mod_ne_zero"};
static const lean_object* l_Nat_reduceDvd___redArg___closed__6 = (const lean_object*)&l_Nat_reduceDvd___redArg___closed__6_value;
static const lean_ctor_object l_Nat_reduceDvd___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceDvd___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceDvd___redArg___closed__7_value_aux_0),((lean_object*)&l_Nat_reduceDvd___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(213, 219, 204, 94, 158, 176, 97, 60)}};
static const lean_object* l_Nat_reduceDvd___redArg___closed__7 = (const lean_object*)&l_Nat_reduceDvd___redArg___closed__7_value;
static lean_once_cell_t l_Nat_reduceDvd___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reduceDvd___redArg___closed__8;
static const lean_string_object l_Nat_reduceDvd___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "dvd_eq_true_of_mod_eq_zero"};
static const lean_object* l_Nat_reduceDvd___redArg___closed__9 = (const lean_object*)&l_Nat_reduceDvd___redArg___closed__9_value;
static const lean_ctor_object l_Nat_reduceDvd___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Nat_reduceDvd___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Nat_reduceDvd___redArg___closed__10_value_aux_0),((lean_object*)&l_Nat_reduceDvd___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(239, 86, 77, 69, 239, 181, 11, 160)}};
static const lean_object* l_Nat_reduceDvd___redArg___closed__10 = (const lean_object*)&l_Nat_reduceDvd___redArg___closed__10_value;
static lean_once_cell_t l_Nat_reduceDvd___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Nat_reduceDvd___redArg___closed__11;
LEAN_EXPORT lean_object* l_Nat_reduceDvd___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceDvd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceDvd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceDvd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceDvd"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Nat_reduceSucc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value),LEAN_SCALAR_PTR_LITERAL(113, 66, 62, 145, 3, 197, 80, 142)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Nat_reduceDvd___redArg___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_30_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_30____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_fromExpr_x3f___redArg(lean_object* v_e_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_Meta_getNatValue_x3f(v_e_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Nat_fromExpr_x3f___redArg___boxed(lean_object* v_e_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lean_Nat_fromExpr_x3f___redArg(v_e_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_);
lean_dec(v_a_12_);
lean_dec_ref(v_a_11_);
lean_dec(v_a_10_);
lean_dec_ref(v_a_9_);
lean_dec_ref(v_e_8_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Nat_fromExpr_x3f(lean_object* v_e_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Meta_getNatValue_x3f(v_e_15_, v_a_19_, v_a_20_, v_a_21_, v_a_22_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Nat_fromExpr_x3f___boxed(lean_object* v_e_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lean_Nat_fromExpr_x3f(v_e_25_, v_a_26_, v_a_27_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, v_a_32_);
lean_dec(v_a_32_);
lean_dec_ref(v_a_31_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
lean_dec(v_a_28_);
lean_dec_ref(v_a_27_);
lean_dec(v_a_26_);
lean_dec_ref(v_e_25_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg(lean_object* v_declName_37_, lean_object* v_arity_38_, lean_object* v_op_39_, lean_object* v_e_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_){
_start:
{
uint8_t v___x_46_; 
v___x_46_ = l_Lean_Expr_isAppOfArity(v_e_40_, v_declName_37_, v_arity_38_);
if (v___x_46_ == 0)
{
lean_object* v___x_47_; lean_object* v___x_48_; 
lean_dec_ref(v_op_39_);
v___x_47_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
return v___x_48_;
}
else
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = l_Lean_Expr_appArg_x21(v_e_40_);
v___x_50_ = l_Lean_Meta_getNatValue_x3f(v___x_49_, v_a_41_, v_a_42_, v_a_43_, v_a_44_);
lean_dec_ref(v___x_49_);
if (lean_obj_tag(v___x_50_) == 0)
{
lean_object* v_a_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_72_; 
v_a_51_ = lean_ctor_get(v___x_50_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_50_);
if (v_isSharedCheck_72_ == 0)
{
v___x_53_ = v___x_50_;
v_isShared_54_ = v_isSharedCheck_72_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_a_51_);
lean_dec(v___x_50_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_72_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
if (lean_obj_tag(v_a_51_) == 1)
{
lean_object* v_val_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_67_; 
v_val_55_ = lean_ctor_get(v_a_51_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v_a_51_);
if (v_isSharedCheck_67_ == 0)
{
v___x_57_ = v_a_51_;
v_isShared_58_ = v_isSharedCheck_67_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_val_55_);
lean_dec(v_a_51_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_67_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_62_; 
v___x_59_ = lean_apply_1(v_op_39_, v_val_55_);
v___x_60_ = l_Lean_mkNatLit(v___x_59_);
if (v_isShared_58_ == 0)
{
lean_ctor_set_tag(v___x_57_, 0);
lean_ctor_set(v___x_57_, 0, v___x_60_);
v___x_62_ = v___x_57_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v___x_60_);
v___x_62_ = v_reuseFailAlloc_66_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
lean_object* v___x_64_; 
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 0, v___x_62_);
v___x_64_ = v___x_53_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_62_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
}
}
else
{
lean_object* v___x_68_; lean_object* v___x_70_; 
lean_dec(v_a_51_);
lean_dec_ref(v_op_39_);
v___x_68_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 0, v___x_68_);
v___x_70_ = v___x_53_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_68_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
else
{
lean_object* v_a_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_80_; 
lean_dec_ref(v_op_39_);
v_a_73_ = lean_ctor_get(v___x_50_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_50_);
if (v_isSharedCheck_80_ == 0)
{
v___x_75_ = v___x_50_;
v_isShared_76_ = v_isSharedCheck_80_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_a_73_);
lean_dec(v___x_50_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_80_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_78_; 
if (v_isShared_76_ == 0)
{
v___x_78_ = v___x_75_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_a_73_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___boxed(lean_object* v_declName_81_, lean_object* v_arity_82_, lean_object* v_op_83_, lean_object* v_e_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg(v_declName_81_, v_arity_82_, v_op_83_, v_e_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
lean_dec(v_a_88_);
lean_dec_ref(v_a_87_);
lean_dec(v_a_86_);
lean_dec_ref(v_a_85_);
lean_dec_ref(v_e_84_);
lean_dec(v_declName_81_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary(lean_object* v_declName_91_, lean_object* v_arity_92_, lean_object* v_op_93_, lean_object* v_e_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
uint8_t v___x_103_; 
v___x_103_ = l_Lean_Expr_isAppOfArity(v_e_94_, v_declName_91_, v_arity_92_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_105_; 
lean_dec_ref(v_op_93_);
v___x_104_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
return v___x_105_;
}
else
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = l_Lean_Expr_appArg_x21(v_e_94_);
v___x_107_ = l_Lean_Meta_getNatValue_x3f(v___x_106_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
lean_dec_ref(v___x_106_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_129_; 
v_a_108_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_129_ == 0)
{
v___x_110_ = v___x_107_;
v_isShared_111_ = v_isSharedCheck_129_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_107_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_129_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
if (lean_obj_tag(v_a_108_) == 1)
{
lean_object* v_val_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_124_; 
v_val_112_ = lean_ctor_get(v_a_108_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v_a_108_);
if (v_isSharedCheck_124_ == 0)
{
v___x_114_ = v_a_108_;
v_isShared_115_ = v_isSharedCheck_124_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_val_112_);
lean_dec(v_a_108_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_124_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_119_; 
v___x_116_ = lean_apply_1(v_op_93_, v_val_112_);
v___x_117_ = l_Lean_mkNatLit(v___x_116_);
if (v_isShared_115_ == 0)
{
lean_ctor_set_tag(v___x_114_, 0);
lean_ctor_set(v___x_114_, 0, v___x_117_);
v___x_119_ = v___x_114_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v___x_117_);
v___x_119_ = v_reuseFailAlloc_123_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_121_; 
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v___x_119_);
v___x_121_ = v___x_110_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_119_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
else
{
lean_object* v___x_125_; lean_object* v___x_127_; 
lean_dec(v_a_108_);
lean_dec_ref(v_op_93_);
v___x_125_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v___x_125_);
v___x_127_ = v___x_110_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_125_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
lean_dec_ref(v_op_93_);
v_a_130_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_107_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_107_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___boxed(lean_object* v_declName_138_, lean_object* v_arity_139_, lean_object* v_op_140_, lean_object* v_e_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary(v_declName_138_, v_arity_139_, v_op_140_, v_e_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
lean_dec(v_a_144_);
lean_dec_ref(v_a_143_);
lean_dec(v_a_142_);
lean_dec_ref(v_e_141_);
lean_dec(v_declName_138_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBin___redArg(lean_object* v_declName_151_, lean_object* v_arity_152_, lean_object* v_op_153_, lean_object* v_e_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
uint8_t v___x_160_; 
v___x_160_ = l_Lean_Expr_isAppOfArity(v_e_154_, v_declName_151_, v_arity_152_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; lean_object* v___x_162_; 
lean_dec_ref(v_op_153_);
v___x_161_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
return v___x_162_;
}
else
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = l_Lean_Expr_appFn_x21(v_e_154_);
v___x_164_ = l_Lean_Expr_appArg_x21(v___x_163_);
lean_dec_ref(v___x_163_);
v___x_165_ = l_Lean_Meta_getNatValue_x3f(v___x_164_, v_a_155_, v_a_156_, v_a_157_, v_a_158_);
lean_dec_ref(v___x_164_);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v_a_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_207_; 
v_a_166_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_207_ == 0)
{
v___x_168_ = v___x_165_;
v_isShared_169_ = v_isSharedCheck_207_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_a_166_);
lean_dec(v___x_165_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_207_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
if (lean_obj_tag(v_a_166_) == 1)
{
lean_object* v_val_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
lean_del_object(v___x_168_);
v_val_170_ = lean_ctor_get(v_a_166_, 0);
lean_inc(v_val_170_);
lean_dec_ref_known(v_a_166_, 1);
v___x_171_ = l_Lean_Expr_appArg_x21(v_e_154_);
v___x_172_ = l_Lean_Meta_getNatValue_x3f(v___x_171_, v_a_155_, v_a_156_, v_a_157_, v_a_158_);
lean_dec_ref(v___x_171_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_194_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_194_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_194_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_194_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
if (lean_obj_tag(v_a_173_) == 1)
{
lean_object* v_val_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_189_; 
v_val_177_ = lean_ctor_get(v_a_173_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v_a_173_);
if (v_isSharedCheck_189_ == 0)
{
v___x_179_ = v_a_173_;
v_isShared_180_ = v_isSharedCheck_189_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_val_177_);
lean_dec(v_a_173_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_189_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
v___x_181_ = lean_apply_2(v_op_153_, v_val_170_, v_val_177_);
v___x_182_ = l_Lean_mkNatLit(v___x_181_);
if (v_isShared_180_ == 0)
{
lean_ctor_set_tag(v___x_179_, 0);
lean_ctor_set(v___x_179_, 0, v___x_182_);
v___x_184_ = v___x_179_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_182_);
v___x_184_ = v_reuseFailAlloc_188_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
lean_object* v___x_186_; 
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v___x_184_);
v___x_186_ = v___x_175_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_184_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
else
{
lean_object* v___x_190_; lean_object* v___x_192_; 
lean_dec(v_a_173_);
lean_dec(v_val_170_);
lean_dec_ref(v_op_153_);
v___x_190_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v___x_190_);
v___x_192_ = v___x_175_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_190_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
else
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_202_; 
lean_dec(v_val_170_);
lean_dec_ref(v_op_153_);
v_a_195_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_202_ == 0)
{
v___x_197_ = v___x_172_;
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_172_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_200_; 
if (v_isShared_198_ == 0)
{
v___x_200_ = v___x_197_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_195_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
else
{
lean_object* v___x_203_; lean_object* v___x_205_; 
lean_dec(v_a_166_);
lean_dec_ref(v_op_153_);
v___x_203_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 0, v___x_203_);
v___x_205_ = v___x_168_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_203_);
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
else
{
lean_object* v_a_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_215_; 
lean_dec_ref(v_op_153_);
v_a_208_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_215_ == 0)
{
v___x_210_ = v___x_165_;
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_a_208_);
lean_dec(v___x_165_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_213_; 
if (v_isShared_211_ == 0)
{
v___x_213_ = v___x_210_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_a_208_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBin___redArg___boxed(lean_object* v_declName_216_, lean_object* v_arity_217_, lean_object* v_op_218_, lean_object* v_e_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBin___redArg(v_declName_216_, v_arity_217_, v_op_218_, v_e_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
lean_dec_ref(v_e_219_);
lean_dec(v_declName_216_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBin(lean_object* v_declName_226_, lean_object* v_arity_227_, lean_object* v_op_228_, lean_object* v_e_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
uint8_t v___x_238_; 
v___x_238_ = l_Lean_Expr_isAppOfArity(v_e_229_, v_declName_226_, v_arity_227_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; lean_object* v___x_240_; 
lean_dec_ref(v_op_228_);
v___x_239_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
else
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_241_ = l_Lean_Expr_appFn_x21(v_e_229_);
v___x_242_ = l_Lean_Expr_appArg_x21(v___x_241_);
lean_dec_ref(v___x_241_);
v___x_243_ = l_Lean_Meta_getNatValue_x3f(v___x_242_, v_a_233_, v_a_234_, v_a_235_, v_a_236_);
lean_dec_ref(v___x_242_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_285_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_285_ == 0)
{
v___x_246_ = v___x_243_;
v_isShared_247_ = v_isSharedCheck_285_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_243_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_285_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
if (lean_obj_tag(v_a_244_) == 1)
{
lean_object* v_val_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
lean_del_object(v___x_246_);
v_val_248_ = lean_ctor_get(v_a_244_, 0);
lean_inc(v_val_248_);
lean_dec_ref_known(v_a_244_, 1);
v___x_249_ = l_Lean_Expr_appArg_x21(v_e_229_);
v___x_250_ = l_Lean_Meta_getNatValue_x3f(v___x_249_, v_a_233_, v_a_234_, v_a_235_, v_a_236_);
lean_dec_ref(v___x_249_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v_a_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_272_; 
v_a_251_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_272_ == 0)
{
v___x_253_ = v___x_250_;
v_isShared_254_ = v_isSharedCheck_272_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_a_251_);
lean_dec(v___x_250_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_272_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
if (lean_obj_tag(v_a_251_) == 1)
{
lean_object* v_val_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_267_; 
v_val_255_ = lean_ctor_get(v_a_251_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v_a_251_);
if (v_isSharedCheck_267_ == 0)
{
v___x_257_ = v_a_251_;
v_isShared_258_ = v_isSharedCheck_267_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_val_255_);
lean_dec(v_a_251_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_267_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_259_ = lean_apply_2(v_op_228_, v_val_248_, v_val_255_);
v___x_260_ = l_Lean_mkNatLit(v___x_259_);
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 0);
lean_ctor_set(v___x_257_, 0, v___x_260_);
v___x_262_ = v___x_257_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_260_);
v___x_262_ = v_reuseFailAlloc_266_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
lean_object* v___x_264_; 
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 0, v___x_262_);
v___x_264_ = v___x_253_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
else
{
lean_object* v___x_268_; lean_object* v___x_270_; 
lean_dec(v_a_251_);
lean_dec(v_val_248_);
lean_dec_ref(v_op_228_);
v___x_268_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 0, v___x_268_);
v___x_270_ = v___x_253_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v___x_268_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
else
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
lean_dec(v_val_248_);
lean_dec_ref(v_op_228_);
v_a_273_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_250_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_250_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
else
{
lean_object* v___x_281_; lean_object* v___x_283_; 
lean_dec(v_a_244_);
lean_dec_ref(v_op_228_);
v___x_281_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 0, v___x_281_);
v___x_283_ = v___x_246_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v___x_281_);
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
lean_dec_ref(v_op_228_);
v_a_286_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_243_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_243_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBin___boxed(lean_object* v_declName_294_, lean_object* v_arity_295_, lean_object* v_op_296_, lean_object* v_e_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBin(v_declName_294_, v_arity_295_, v_op_296_, v_e_297_, v_a_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
lean_dec(v_a_298_);
lean_dec_ref(v_e_297_);
lean_dec(v_declName_294_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg(lean_object* v_declName_309_, lean_object* v_arity_310_, lean_object* v_op_311_, lean_object* v_e_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
uint8_t v___x_318_; 
v___x_318_ = l_Lean_Expr_isAppOfArity(v_e_312_, v_declName_309_, v_arity_310_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_320_; 
lean_dec_ref(v_e_312_);
lean_dec_ref(v_op_311_);
v___x_319_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
return v___x_320_;
}
else
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = l_Lean_Expr_appFn_x21(v_e_312_);
v___x_322_ = l_Lean_Expr_appArg_x21(v___x_321_);
lean_dec_ref(v___x_321_);
v___x_323_ = l_Lean_Meta_getNatValue_x3f(v___x_322_, v_a_313_, v_a_314_, v_a_315_, v_a_316_);
lean_dec_ref(v___x_322_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_356_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_356_ == 0)
{
v___x_326_ = v___x_323_;
v_isShared_327_ = v_isSharedCheck_356_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_323_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_356_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
if (lean_obj_tag(v_a_324_) == 1)
{
lean_object* v_val_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
lean_del_object(v___x_326_);
v_val_328_ = lean_ctor_get(v_a_324_, 0);
lean_inc(v_val_328_);
lean_dec_ref_known(v_a_324_, 1);
v___x_329_ = l_Lean_Expr_appArg_x21(v_e_312_);
v___x_330_ = l_Lean_Meta_getNatValue_x3f(v___x_329_, v_a_313_, v_a_314_, v_a_315_, v_a_316_);
lean_dec_ref(v___x_329_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_343_; 
v_a_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_343_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_343_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_343_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
if (lean_obj_tag(v_a_331_) == 1)
{
lean_object* v_val_335_; lean_object* v___x_336_; uint8_t v___x_337_; lean_object* v___x_338_; 
lean_del_object(v___x_333_);
v_val_335_ = lean_ctor_get(v_a_331_, 0);
lean_inc(v_val_335_);
lean_dec_ref_known(v_a_331_, 1);
v___x_336_ = lean_apply_2(v_op_311_, v_val_328_, v_val_335_);
v___x_337_ = lean_unbox(v___x_336_);
v___x_338_ = l_Lean_Meta_Simp_evalPropStep___redArg(v_e_312_, v___x_337_, v_a_313_, v_a_314_, v_a_315_, v_a_316_);
return v___x_338_;
}
else
{
lean_object* v___x_339_; lean_object* v___x_341_; 
lean_dec(v_a_331_);
lean_dec(v_val_328_);
lean_dec_ref(v_e_312_);
lean_dec_ref(v_op_311_);
v___x_339_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_339_);
v___x_341_ = v___x_333_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_339_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec(v_val_328_);
lean_dec_ref(v_e_312_);
lean_dec_ref(v_op_311_);
v_a_344_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_330_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_330_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
else
{
lean_object* v___x_352_; lean_object* v___x_354_; 
lean_dec(v_a_324_);
lean_dec_ref(v_e_312_);
lean_dec_ref(v_op_311_);
v___x_352_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 0, v___x_352_);
v___x_354_ = v___x_326_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_352_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
}
else
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_364_; 
lean_dec_ref(v_e_312_);
lean_dec_ref(v_op_311_);
v_a_357_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_364_ == 0)
{
v___x_359_ = v___x_323_;
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_323_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_360_ == 0)
{
v___x_362_ = v___x_359_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_357_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___boxed(lean_object* v_declName_365_, lean_object* v_arity_366_, lean_object* v_op_367_, lean_object* v_e_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg(v_declName_365_, v_arity_366_, v_op_367_, v_e_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_);
lean_dec(v_a_372_);
lean_dec_ref(v_a_371_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
lean_dec(v_declName_365_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred(lean_object* v_declName_375_, lean_object* v_arity_376_, lean_object* v_op_377_, lean_object* v_e_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_){
_start:
{
uint8_t v___x_387_; 
v___x_387_ = l_Lean_Expr_isAppOfArity(v_e_378_, v_declName_375_, v_arity_376_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; lean_object* v___x_389_; 
lean_dec_ref(v_e_378_);
lean_dec_ref(v_op_377_);
v___x_388_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
return v___x_389_;
}
else
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_390_ = l_Lean_Expr_appFn_x21(v_e_378_);
v___x_391_ = l_Lean_Expr_appArg_x21(v___x_390_);
lean_dec_ref(v___x_390_);
v___x_392_ = l_Lean_Meta_getNatValue_x3f(v___x_391_, v_a_382_, v_a_383_, v_a_384_, v_a_385_);
lean_dec_ref(v___x_391_);
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_425_; 
v_a_393_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_425_ == 0)
{
v___x_395_ = v___x_392_;
v_isShared_396_ = v_isSharedCheck_425_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v___x_392_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_425_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
if (lean_obj_tag(v_a_393_) == 1)
{
lean_object* v_val_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
lean_del_object(v___x_395_);
v_val_397_ = lean_ctor_get(v_a_393_, 0);
lean_inc(v_val_397_);
lean_dec_ref_known(v_a_393_, 1);
v___x_398_ = l_Lean_Expr_appArg_x21(v_e_378_);
v___x_399_ = l_Lean_Meta_getNatValue_x3f(v___x_398_, v_a_382_, v_a_383_, v_a_384_, v_a_385_);
lean_dec_ref(v___x_398_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_412_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_412_ == 0)
{
v___x_402_ = v___x_399_;
v_isShared_403_ = v_isSharedCheck_412_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_a_400_);
lean_dec(v___x_399_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_412_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
if (lean_obj_tag(v_a_400_) == 1)
{
lean_object* v_val_404_; lean_object* v___x_405_; uint8_t v___x_406_; lean_object* v___x_407_; 
lean_del_object(v___x_402_);
v_val_404_ = lean_ctor_get(v_a_400_, 0);
lean_inc(v_val_404_);
lean_dec_ref_known(v_a_400_, 1);
v___x_405_ = lean_apply_2(v_op_377_, v_val_397_, v_val_404_);
v___x_406_ = lean_unbox(v___x_405_);
v___x_407_ = l_Lean_Meta_Simp_evalPropStep___redArg(v_e_378_, v___x_406_, v_a_382_, v_a_383_, v_a_384_, v_a_385_);
return v___x_407_;
}
else
{
lean_object* v___x_408_; lean_object* v___x_410_; 
lean_dec(v_a_400_);
lean_dec(v_val_397_);
lean_dec_ref(v_e_378_);
lean_dec_ref(v_op_377_);
v___x_408_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_403_ == 0)
{
lean_ctor_set(v___x_402_, 0, v___x_408_);
v___x_410_ = v___x_402_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_408_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
else
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
lean_dec(v_val_397_);
lean_dec_ref(v_e_378_);
lean_dec_ref(v_op_377_);
v_a_413_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_399_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_399_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_413_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
}
else
{
lean_object* v___x_421_; lean_object* v___x_423_; 
lean_dec(v_a_393_);
lean_dec_ref(v_e_378_);
lean_dec_ref(v_op_377_);
v___x_421_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 0, v___x_421_);
v___x_423_ = v___x_395_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
else
{
lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_433_; 
lean_dec_ref(v_e_378_);
lean_dec_ref(v_op_377_);
v_a_426_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_433_ == 0)
{
v___x_428_ = v___x_392_;
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_dec(v___x_392_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___boxed(lean_object* v_declName_434_, lean_object* v_arity_435_, lean_object* v_op_436_, lean_object* v_e_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred(v_declName_434_, v_arity_435_, v_op_436_, v_e_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_, v_a_444_);
lean_dec(v_a_444_);
lean_dec_ref(v_a_443_);
lean_dec(v_a_442_);
lean_dec_ref(v_a_441_);
lean_dec(v_a_440_);
lean_dec_ref(v_a_439_);
lean_dec(v_a_438_);
lean_dec(v_declName_434_);
return v_res_446_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_452_ = lean_box(0);
v___x_453_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__2));
v___x_454_ = l_Lean_mkConst(v___x_453_, v___x_452_);
return v___x_454_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_459_ = lean_box(0);
v___x_460_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__5));
v___x_461_ = l_Lean_mkConst(v___x_460_, v___x_459_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg(lean_object* v_declName_462_, lean_object* v_arity_463_, lean_object* v_op_464_, lean_object* v_e_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_){
_start:
{
uint8_t v___x_471_; 
v___x_471_ = l_Lean_Expr_isAppOfArity(v_e_465_, v_declName_462_, v_arity_463_);
if (v___x_471_ == 0)
{
lean_object* v___x_472_; lean_object* v___x_473_; 
lean_dec_ref(v_op_464_);
v___x_472_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
return v___x_473_;
}
else
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_474_ = l_Lean_Expr_appFn_x21(v_e_465_);
v___x_475_ = l_Lean_Expr_appArg_x21(v___x_474_);
lean_dec_ref(v___x_474_);
v___x_476_ = l_Lean_Meta_getNatValue_x3f(v___x_475_, v_a_466_, v_a_467_, v_a_468_, v_a_469_);
lean_dec_ref(v___x_475_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_522_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_522_ == 0)
{
v___x_479_ = v___x_476_;
v_isShared_480_ = v_isSharedCheck_522_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_476_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_522_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
if (lean_obj_tag(v_a_477_) == 1)
{
lean_object* v_val_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_517_; 
v_val_481_ = lean_ctor_get(v_a_477_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v_a_477_);
if (v_isSharedCheck_517_ == 0)
{
v___x_483_ = v_a_477_;
v_isShared_484_ = v_isSharedCheck_517_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_val_481_);
lean_dec(v_a_477_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_517_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = l_Lean_Expr_appArg_x21(v_e_465_);
v___x_486_ = l_Lean_Meta_getNatValue_x3f(v___x_485_, v_a_466_, v_a_467_, v_a_468_, v_a_469_);
lean_dec_ref(v___x_485_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_508_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_508_ == 0)
{
v___x_489_ = v___x_486_;
v_isShared_490_ = v_isSharedCheck_508_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_486_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_508_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___y_492_; 
if (lean_obj_tag(v_a_487_) == 1)
{
lean_object* v_val_499_; lean_object* v___x_500_; uint8_t v___x_501_; 
lean_del_object(v___x_479_);
v_val_499_ = lean_ctor_get(v_a_487_, 0);
lean_inc(v_val_499_);
lean_dec_ref_known(v_a_487_, 1);
v___x_500_ = lean_apply_2(v_op_464_, v_val_481_, v_val_499_);
v___x_501_ = lean_unbox(v___x_500_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; 
v___x_502_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3);
v___y_492_ = v___x_502_;
goto v___jp_491_;
}
else
{
lean_object* v___x_503_; 
v___x_503_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6);
v___y_492_ = v___x_503_;
goto v___jp_491_;
}
}
else
{
lean_object* v___x_504_; lean_object* v___x_506_; 
lean_del_object(v___x_489_);
lean_dec(v_a_487_);
lean_del_object(v___x_483_);
lean_dec(v_val_481_);
lean_dec_ref(v_op_464_);
v___x_504_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 0, v___x_504_);
v___x_506_ = v___x_479_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
v___jp_491_:
{
lean_object* v___x_494_; 
lean_inc_ref(v___y_492_);
if (v_isShared_484_ == 0)
{
lean_ctor_set_tag(v___x_483_, 0);
lean_ctor_set(v___x_483_, 0, v___y_492_);
v___x_494_ = v___x_483_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v___y_492_);
v___x_494_ = v_reuseFailAlloc_498_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_496_; 
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 0, v___x_494_);
v___x_496_ = v___x_489_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_494_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
}
else
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_516_; 
lean_del_object(v___x_483_);
lean_dec(v_val_481_);
lean_del_object(v___x_479_);
lean_dec_ref(v_op_464_);
v_a_509_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_516_ == 0)
{
v___x_511_ = v___x_486_;
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_486_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_509_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
}
else
{
lean_object* v___x_518_; lean_object* v___x_520_; 
lean_dec(v_a_477_);
lean_dec_ref(v_op_464_);
v___x_518_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 0, v___x_518_);
v___x_520_ = v___x_479_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec_ref(v_op_464_);
v_a_523_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_476_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_476_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___boxed(lean_object* v_declName_531_, lean_object* v_arity_532_, lean_object* v_op_533_, lean_object* v_e_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg(v_declName_531_, v_arity_532_, v_op_533_, v_e_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_);
lean_dec(v_a_538_);
lean_dec_ref(v_a_537_);
lean_dec(v_a_536_);
lean_dec_ref(v_a_535_);
lean_dec_ref(v_e_534_);
lean_dec(v_declName_531_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred(lean_object* v_declName_541_, lean_object* v_arity_542_, lean_object* v_op_543_, lean_object* v_e_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
uint8_t v___x_553_; 
v___x_553_ = l_Lean_Expr_isAppOfArity(v_e_544_, v_declName_541_, v_arity_542_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; lean_object* v___x_555_; 
lean_dec_ref(v_op_543_);
v___x_554_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
return v___x_555_;
}
else
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_556_ = l_Lean_Expr_appFn_x21(v_e_544_);
v___x_557_ = l_Lean_Expr_appArg_x21(v___x_556_);
lean_dec_ref(v___x_556_);
v___x_558_ = l_Lean_Meta_getNatValue_x3f(v___x_557_, v_a_548_, v_a_549_, v_a_550_, v_a_551_);
lean_dec_ref(v___x_557_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_604_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_604_ == 0)
{
v___x_561_ = v___x_558_;
v_isShared_562_ = v_isSharedCheck_604_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_558_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_604_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
if (lean_obj_tag(v_a_559_) == 1)
{
lean_object* v_val_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_599_; 
v_val_563_ = lean_ctor_get(v_a_559_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v_a_559_);
if (v_isSharedCheck_599_ == 0)
{
v___x_565_ = v_a_559_;
v_isShared_566_ = v_isSharedCheck_599_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_val_563_);
lean_dec(v_a_559_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_599_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_567_ = l_Lean_Expr_appArg_x21(v_e_544_);
v___x_568_ = l_Lean_Meta_getNatValue_x3f(v___x_567_, v_a_548_, v_a_549_, v_a_550_, v_a_551_);
lean_dec_ref(v___x_567_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_590_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_590_ == 0)
{
v___x_571_ = v___x_568_;
v_isShared_572_ = v_isSharedCheck_590_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_568_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_590_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___y_574_; 
if (lean_obj_tag(v_a_569_) == 1)
{
lean_object* v_val_581_; lean_object* v___x_582_; uint8_t v___x_583_; 
lean_del_object(v___x_561_);
v_val_581_ = lean_ctor_get(v_a_569_, 0);
lean_inc(v_val_581_);
lean_dec_ref_known(v_a_569_, 1);
v___x_582_ = lean_apply_2(v_op_543_, v_val_563_, v_val_581_);
v___x_583_ = lean_unbox(v___x_582_);
if (v___x_583_ == 0)
{
lean_object* v___x_584_; 
v___x_584_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3);
v___y_574_ = v___x_584_;
goto v___jp_573_;
}
else
{
lean_object* v___x_585_; 
v___x_585_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6);
v___y_574_ = v___x_585_;
goto v___jp_573_;
}
}
else
{
lean_object* v___x_586_; lean_object* v___x_588_; 
lean_del_object(v___x_571_);
lean_dec(v_a_569_);
lean_del_object(v___x_565_);
lean_dec(v_val_563_);
lean_dec_ref(v_op_543_);
v___x_586_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_586_);
v___x_588_ = v___x_561_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_586_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
v___jp_573_:
{
lean_object* v___x_576_; 
lean_inc_ref(v___y_574_);
if (v_isShared_566_ == 0)
{
lean_ctor_set_tag(v___x_565_, 0);
lean_ctor_set(v___x_565_, 0, v___y_574_);
v___x_576_ = v___x_565_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___y_574_);
v___x_576_ = v_reuseFailAlloc_580_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_578_; 
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v___x_576_);
v___x_578_ = v___x_571_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
}
else
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
lean_del_object(v___x_565_);
lean_dec(v_val_563_);
lean_del_object(v___x_561_);
lean_dec_ref(v_op_543_);
v_a_591_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___x_568_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_568_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
}
else
{
lean_object* v___x_600_; lean_object* v___x_602_; 
lean_dec(v_a_559_);
lean_dec_ref(v_op_543_);
v___x_600_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_600_);
v___x_602_ = v___x_561_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_600_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec_ref(v_op_543_);
v_a_605_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_558_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_558_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___boxed(lean_object* v_declName_613_, lean_object* v_arity_614_, lean_object* v_op_615_, lean_object* v_e_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred(v_declName_613_, v_arity_614_, v_op_615_, v_e_616_, v_a_617_, v_a_618_, v_a_619_, v_a_620_, v_a_621_, v_a_622_, v_a_623_);
lean_dec(v_a_623_);
lean_dec_ref(v_a_622_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
lean_dec(v_a_619_);
lean_dec_ref(v_a_618_);
lean_dec(v_a_617_);
lean_dec_ref(v_e_616_);
lean_dec(v_declName_613_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSucc___redArg(lean_object* v_e_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_637_ = ((lean_object*)(l_Nat_reduceSucc___redArg___closed__2));
v___x_638_ = lean_unsigned_to_nat(1u);
v___x_639_ = l_Lean_Expr_isAppOfArity(v_e_631_, v___x_637_, v___x_638_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
return v___x_641_;
}
else
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = l_Lean_Expr_appArg_x21(v_e_631_);
v___x_643_ = l_Lean_Meta_getNatValue_x3f(v___x_642_, v_a_632_, v_a_633_, v_a_634_, v_a_635_);
lean_dec_ref(v___x_642_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_665_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_665_ == 0)
{
v___x_646_ = v___x_643_;
v_isShared_647_ = v_isSharedCheck_665_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_643_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_665_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
if (lean_obj_tag(v_a_644_) == 1)
{
lean_object* v_val_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_660_; 
v_val_648_ = lean_ctor_get(v_a_644_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v_a_644_);
if (v_isSharedCheck_660_ == 0)
{
v___x_650_ = v_a_644_;
v_isShared_651_ = v_isSharedCheck_660_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_val_648_);
lean_dec(v_a_644_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_660_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_655_; 
v___x_652_ = lean_nat_add(v_val_648_, v___x_638_);
lean_dec(v_val_648_);
v___x_653_ = l_Lean_mkNatLit(v___x_652_);
if (v_isShared_651_ == 0)
{
lean_ctor_set_tag(v___x_650_, 0);
lean_ctor_set(v___x_650_, 0, v___x_653_);
v___x_655_ = v___x_650_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_653_);
v___x_655_ = v_reuseFailAlloc_659_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_657_; 
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 0, v___x_655_);
v___x_657_ = v___x_646_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v___x_655_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
}
else
{
lean_object* v___x_661_; lean_object* v___x_663_; 
lean_dec(v_a_644_);
v___x_661_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 0, v___x_661_);
v___x_663_ = v___x_646_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_661_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
v_a_666_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_643_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_643_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSucc___redArg___boxed(lean_object* v_e_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Nat_reduceSucc___redArg(v_e_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
lean_dec(v_a_678_);
lean_dec_ref(v_a_677_);
lean_dec(v_a_676_);
lean_dec_ref(v_a_675_);
lean_dec_ref(v_e_674_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSucc(lean_object* v_e_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = l_Nat_reduceSucc___redArg(v_e_681_, v_a_685_, v_a_686_, v_a_687_, v_a_688_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSucc___boxed(lean_object* v_e_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Nat_reduceSucc(v_e_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_);
lean_dec(v_a_698_);
lean_dec_ref(v_a_697_);
lean_dec(v_a_696_);
lean_dec_ref(v_a_695_);
lean_dec(v_a_694_);
lean_dec_ref(v_a_693_);
lean_dec(v_a_692_);
lean_dec_ref(v_e_691_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_(){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_715_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_));
v___x_716_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_));
v___x_717_ = lean_alloc_closure((void*)(l_Nat_reduceSucc___boxed), 9, 0);
v___x_718_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_715_, v___x_716_, v___x_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20____boxed(lean_object* v_a_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_();
return v_res_720_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22_(void){
_start:
{
lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_721_ = lean_alloc_closure((void*)(l_Nat_reduceSucc___boxed), 9, 0);
v___x_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_724_; uint8_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_724_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_));
v___x_725_ = 1;
v___x_726_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22_);
v___x_727_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_724_, v___x_725_, v___x_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22____boxed(lean_object* v_a_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22_();
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_731_; uint8_t v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_731_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_));
v___x_732_ = 1;
v___x_733_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22_);
v___x_734_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_731_, v___x_732_, v___x_733_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_24____boxed(lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_24_();
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLog2___redArg(lean_object* v_e_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_747_ = ((lean_object*)(l_Nat_reduceLog2___redArg___closed__1));
v___x_748_ = lean_unsigned_to_nat(1u);
v___x_749_ = l_Lean_Expr_isAppOfArity(v_e_741_, v___x_747_, v___x_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
return v___x_751_;
}
else
{
lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_752_ = l_Lean_Expr_appArg_x21(v_e_741_);
v___x_753_ = l_Lean_Meta_getNatValue_x3f(v___x_752_, v_a_742_, v_a_743_, v_a_744_, v_a_745_);
lean_dec_ref(v___x_752_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_775_; 
v_a_754_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_775_ == 0)
{
v___x_756_ = v___x_753_;
v_isShared_757_ = v_isSharedCheck_775_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_753_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_775_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
if (lean_obj_tag(v_a_754_) == 1)
{
lean_object* v_val_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_770_; 
v_val_758_ = lean_ctor_get(v_a_754_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v_a_754_);
if (v_isSharedCheck_770_ == 0)
{
v___x_760_ = v_a_754_;
v_isShared_761_ = v_isSharedCheck_770_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_val_758_);
lean_dec(v_a_754_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_770_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_765_; 
v___x_762_ = lean_nat_log2(v_val_758_);
lean_dec(v_val_758_);
v___x_763_ = l_Lean_mkNatLit(v___x_762_);
if (v_isShared_761_ == 0)
{
lean_ctor_set_tag(v___x_760_, 0);
lean_ctor_set(v___x_760_, 0, v___x_763_);
v___x_765_ = v___x_760_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_763_);
v___x_765_ = v_reuseFailAlloc_769_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
lean_object* v___x_767_; 
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 0, v___x_765_);
v___x_767_ = v___x_756_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v___x_765_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
else
{
lean_object* v___x_771_; lean_object* v___x_773_; 
lean_dec(v_a_754_);
v___x_771_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 0, v___x_771_);
v___x_773_ = v___x_756_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_771_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
else
{
lean_object* v_a_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_783_; 
v_a_776_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_783_ == 0)
{
v___x_778_ = v___x_753_;
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_a_776_);
lean_dec(v___x_753_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_781_; 
if (v_isShared_779_ == 0)
{
v___x_781_ = v___x_778_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_776_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLog2___redArg___boxed(lean_object* v_e_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Nat_reduceLog2___redArg(v_e_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_);
lean_dec(v_a_788_);
lean_dec_ref(v_a_787_);
lean_dec(v_a_786_);
lean_dec_ref(v_a_785_);
lean_dec_ref(v_e_784_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLog2(lean_object* v_e_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_){
_start:
{
lean_object* v___x_800_; 
v___x_800_ = l_Nat_reduceLog2___redArg(v_e_791_, v_a_795_, v_a_796_, v_a_797_, v_a_798_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLog2___boxed(lean_object* v_e_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Nat_reduceLog2(v_e_801_, v_a_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_, v_a_807_, v_a_808_);
lean_dec(v_a_808_);
lean_dec_ref(v_a_807_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
lean_dec(v_a_802_);
lean_dec_ref(v_e_801_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_(){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_825_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_));
v___x_826_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_));
v___x_827_ = lean_alloc_closure((void*)(l_Nat_reduceLog2___boxed), 9, 0);
v___x_828_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_825_, v___x_826_, v___x_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20____boxed(lean_object* v_a_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_();
return v_res_830_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22_(void){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = lean_alloc_closure((void*)(l_Nat_reduceLog2___boxed), 9, 0);
v___x_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_834_; uint8_t v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_834_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_));
v___x_835_ = 1;
v___x_836_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22_);
v___x_837_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_834_, v___x_835_, v___x_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22____boxed(lean_object* v_a_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22_();
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_841_; uint8_t v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_841_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_));
v___x_842_ = 1;
v___x_843_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22_);
v___x_844_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_841_, v___x_842_, v___x_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_24____boxed(lean_object* v_a_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_24_();
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAdd___redArg(lean_object* v_e_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; uint8_t v___x_860_; 
v___x_858_ = ((lean_object*)(l_Nat_reduceAdd___redArg___closed__2));
v___x_859_ = lean_unsigned_to_nat(6u);
v___x_860_ = l_Lean_Expr_isAppOfArity(v_e_852_, v___x_858_, v___x_859_);
if (v___x_860_ == 0)
{
lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_861_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
return v___x_862_;
}
else
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = l_Lean_Expr_appFn_x21(v_e_852_);
v___x_864_ = l_Lean_Expr_appArg_x21(v___x_863_);
lean_dec_ref(v___x_863_);
v___x_865_ = l_Lean_Meta_getNatValue_x3f(v___x_864_, v_a_853_, v_a_854_, v_a_855_, v_a_856_);
lean_dec_ref(v___x_864_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_907_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_907_ == 0)
{
v___x_868_ = v___x_865_;
v_isShared_869_ = v_isSharedCheck_907_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_865_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_907_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
if (lean_obj_tag(v_a_866_) == 1)
{
lean_object* v_val_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
lean_del_object(v___x_868_);
v_val_870_ = lean_ctor_get(v_a_866_, 0);
lean_inc(v_val_870_);
lean_dec_ref_known(v_a_866_, 1);
v___x_871_ = l_Lean_Expr_appArg_x21(v_e_852_);
v___x_872_ = l_Lean_Meta_getNatValue_x3f(v___x_871_, v_a_853_, v_a_854_, v_a_855_, v_a_856_);
lean_dec_ref(v___x_871_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_894_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_894_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_894_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_894_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
if (lean_obj_tag(v_a_873_) == 1)
{
lean_object* v_val_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_889_; 
v_val_877_ = lean_ctor_get(v_a_873_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v_a_873_);
if (v_isSharedCheck_889_ == 0)
{
v___x_879_ = v_a_873_;
v_isShared_880_ = v_isSharedCheck_889_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_val_877_);
lean_dec(v_a_873_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_889_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_884_; 
v___x_881_ = lean_nat_add(v_val_870_, v_val_877_);
lean_dec(v_val_877_);
lean_dec(v_val_870_);
v___x_882_ = l_Lean_mkNatLit(v___x_881_);
if (v_isShared_880_ == 0)
{
lean_ctor_set_tag(v___x_879_, 0);
lean_ctor_set(v___x_879_, 0, v___x_882_);
v___x_884_ = v___x_879_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_882_);
v___x_884_ = v_reuseFailAlloc_888_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
lean_object* v___x_886_; 
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_884_);
v___x_886_ = v___x_875_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_884_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
else
{
lean_object* v___x_890_; lean_object* v___x_892_; 
lean_dec(v_a_873_);
lean_dec(v_val_870_);
v___x_890_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_890_);
v___x_892_ = v___x_875_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_890_);
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
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
lean_dec(v_val_870_);
v_a_895_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_872_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_872_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_895_);
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
else
{
lean_object* v___x_903_; lean_object* v___x_905_; 
lean_dec(v_a_866_);
v___x_903_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_903_);
v___x_905_ = v___x_868_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
v_a_908_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_865_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_865_);
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
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAdd___redArg___boxed(lean_object* v_e_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Nat_reduceAdd___redArg(v_e_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
lean_dec_ref(v_e_916_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAdd(lean_object* v_e_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_){
_start:
{
lean_object* v___x_932_; 
v___x_932_ = l_Nat_reduceAdd___redArg(v_e_923_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
return v___x_932_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAdd___boxed(lean_object* v_e_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Nat_reduceAdd(v_e_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
lean_dec(v_a_936_);
lean_dec_ref(v_a_935_);
lean_dec(v_a_934_);
lean_dec_ref(v_e_933_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_968_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_));
v___x_969_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_));
v___x_970_ = lean_alloc_closure((void*)(l_Nat_reduceAdd___boxed), 9, 0);
v___x_971_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_968_, v___x_969_, v___x_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26____boxed(lean_object* v_a_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_();
return v_res_973_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = lean_alloc_closure((void*)(l_Nat_reduceAdd___boxed), 9, 0);
v___x_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_977_; uint8_t v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_977_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_));
v___x_978_ = 1;
v___x_979_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28_);
v___x_980_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_977_, v___x_978_, v___x_979_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28____boxed(lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28_();
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_984_; uint8_t v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_984_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_));
v___x_985_ = 1;
v___x_986_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28_);
v___x_987_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_984_, v___x_985_, v___x_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_30____boxed(lean_object* v_a_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_30_();
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMul___redArg(lean_object* v_e_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; uint8_t v___x_1003_; 
v___x_1001_ = ((lean_object*)(l_Nat_reduceMul___redArg___closed__2));
v___x_1002_ = lean_unsigned_to_nat(6u);
v___x_1003_ = l_Lean_Expr_isAppOfArity(v_e_995_, v___x_1001_, v___x_1002_);
if (v___x_1003_ == 0)
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
return v___x_1005_;
}
else
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1006_ = l_Lean_Expr_appFn_x21(v_e_995_);
v___x_1007_ = l_Lean_Expr_appArg_x21(v___x_1006_);
lean_dec_ref(v___x_1006_);
v___x_1008_ = l_Lean_Meta_getNatValue_x3f(v___x_1007_, v_a_996_, v_a_997_, v_a_998_, v_a_999_);
lean_dec_ref(v___x_1007_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1050_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1011_ = v___x_1008_;
v_isShared_1012_ = v_isSharedCheck_1050_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1008_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1050_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
if (lean_obj_tag(v_a_1009_) == 1)
{
lean_object* v_val_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
lean_del_object(v___x_1011_);
v_val_1013_ = lean_ctor_get(v_a_1009_, 0);
lean_inc(v_val_1013_);
lean_dec_ref_known(v_a_1009_, 1);
v___x_1014_ = l_Lean_Expr_appArg_x21(v_e_995_);
v___x_1015_ = l_Lean_Meta_getNatValue_x3f(v___x_1014_, v_a_996_, v_a_997_, v_a_998_, v_a_999_);
lean_dec_ref(v___x_1014_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1037_; 
v_a_1016_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1018_ = v___x_1015_;
v_isShared_1019_ = v_isSharedCheck_1037_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1015_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1037_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
if (lean_obj_tag(v_a_1016_) == 1)
{
lean_object* v_val_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1032_; 
v_val_1020_ = lean_ctor_get(v_a_1016_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v_a_1016_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1022_ = v_a_1016_;
v_isShared_1023_ = v_isSharedCheck_1032_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_val_1020_);
lean_dec(v_a_1016_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1032_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1027_; 
v___x_1024_ = lean_nat_mul(v_val_1013_, v_val_1020_);
lean_dec(v_val_1020_);
lean_dec(v_val_1013_);
v___x_1025_ = l_Lean_mkNatLit(v___x_1024_);
if (v_isShared_1023_ == 0)
{
lean_ctor_set_tag(v___x_1022_, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1025_);
v___x_1027_ = v___x_1022_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_1025_);
v___x_1027_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
lean_object* v___x_1029_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v___x_1027_);
v___x_1029_ = v___x_1018_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
else
{
lean_object* v___x_1033_; lean_object* v___x_1035_; 
lean_dec(v_a_1016_);
lean_dec(v_val_1013_);
v___x_1033_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v___x_1033_);
v___x_1035_ = v___x_1018_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
lean_dec(v_val_1013_);
v_a_1038_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v___x_1015_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_1015_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1038_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
else
{
lean_object* v___x_1046_; lean_object* v___x_1048_; 
lean_dec(v_a_1009_);
v___x_1046_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 0, v___x_1046_);
v___x_1048_ = v___x_1011_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v___x_1046_);
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
else
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
v_a_1051_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1008_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1008_);
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
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
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
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMul___redArg___boxed(lean_object* v_e_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Nat_reduceMul___redArg(v_e_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_);
lean_dec(v_a_1063_);
lean_dec_ref(v_a_1062_);
lean_dec(v_a_1061_);
lean_dec_ref(v_a_1060_);
lean_dec_ref(v_e_1059_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMul(lean_object* v_e_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = l_Nat_reduceMul___redArg(v_e_1066_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMul___boxed(lean_object* v_e_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Nat_reduceMul(v_e_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_);
lean_dec(v_a_1083_);
lean_dec_ref(v_a_1082_);
lean_dec(v_a_1081_);
lean_dec_ref(v_a_1080_);
lean_dec(v_a_1079_);
lean_dec_ref(v_a_1078_);
lean_dec(v_a_1077_);
lean_dec_ref(v_e_1076_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1106_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_));
v___x_1107_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_));
v___x_1108_ = lean_alloc_closure((void*)(l_Nat_reduceMul___boxed), 9, 0);
v___x_1109_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1106_, v___x_1107_, v___x_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26____boxed(lean_object* v_a_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_();
return v_res_1111_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = lean_alloc_closure((void*)(l_Nat_reduceMul___boxed), 9, 0);
v___x_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_1115_; uint8_t v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1115_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_));
v___x_1116_ = 1;
v___x_1117_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28_);
v___x_1118_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1115_, v___x_1116_, v___x_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28____boxed(lean_object* v_a_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28_();
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_1122_; uint8_t v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1122_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_));
v___x_1123_ = 1;
v___x_1124_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28_);
v___x_1125_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1122_, v___x_1123_, v___x_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_30____boxed(lean_object* v_a_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_30_();
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSub___redArg(lean_object* v_e_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; uint8_t v___x_1141_; 
v___x_1139_ = ((lean_object*)(l_Nat_reduceSub___redArg___closed__2));
v___x_1140_ = lean_unsigned_to_nat(6u);
v___x_1141_ = l_Lean_Expr_isAppOfArity(v_e_1133_, v___x_1139_, v___x_1140_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
return v___x_1143_;
}
else
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1144_ = l_Lean_Expr_appFn_x21(v_e_1133_);
v___x_1145_ = l_Lean_Expr_appArg_x21(v___x_1144_);
lean_dec_ref(v___x_1144_);
v___x_1146_ = l_Lean_Meta_getNatValue_x3f(v___x_1145_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_);
lean_dec_ref(v___x_1145_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1188_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1149_ = v___x_1146_;
v_isShared_1150_ = v_isSharedCheck_1188_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1146_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1188_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
if (lean_obj_tag(v_a_1147_) == 1)
{
lean_object* v_val_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
lean_del_object(v___x_1149_);
v_val_1151_ = lean_ctor_get(v_a_1147_, 0);
lean_inc(v_val_1151_);
lean_dec_ref_known(v_a_1147_, 1);
v___x_1152_ = l_Lean_Expr_appArg_x21(v_e_1133_);
v___x_1153_ = l_Lean_Meta_getNatValue_x3f(v___x_1152_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_);
lean_dec_ref(v___x_1152_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1175_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1156_ = v___x_1153_;
v_isShared_1157_ = v_isSharedCheck_1175_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1153_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1175_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
if (lean_obj_tag(v_a_1154_) == 1)
{
lean_object* v_val_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1170_; 
v_val_1158_ = lean_ctor_get(v_a_1154_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_a_1154_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1160_ = v_a_1154_;
v_isShared_1161_ = v_isSharedCheck_1170_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_val_1158_);
lean_dec(v_a_1154_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1170_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1162_ = lean_nat_sub(v_val_1151_, v_val_1158_);
lean_dec(v_val_1158_);
lean_dec(v_val_1151_);
v___x_1163_ = l_Lean_mkNatLit(v___x_1162_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set_tag(v___x_1160_, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1163_);
v___x_1165_ = v___x_1160_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1163_);
v___x_1165_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1167_; 
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 0, v___x_1165_);
v___x_1167_ = v___x_1156_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v___x_1165_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
}
else
{
lean_object* v___x_1171_; lean_object* v___x_1173_; 
lean_dec(v_a_1154_);
lean_dec(v_val_1151_);
v___x_1171_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 0, v___x_1171_);
v___x_1173_ = v___x_1156_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v___x_1171_);
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
else
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
lean_dec(v_val_1151_);
v_a_1176_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v___x_1153_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1153_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
else
{
lean_object* v___x_1184_; lean_object* v___x_1186_; 
lean_dec(v_a_1147_);
v___x_1184_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 0, v___x_1184_);
v___x_1186_ = v___x_1149_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
else
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
v_a_1189_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1191_ = v___x_1146_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_1146_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1189_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSub___redArg___boxed(lean_object* v_e_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_Nat_reduceSub___redArg(v_e_1197_, v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_);
lean_dec(v_a_1201_);
lean_dec_ref(v_a_1200_);
lean_dec(v_a_1199_);
lean_dec_ref(v_a_1198_);
lean_dec_ref(v_e_1197_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSub(lean_object* v_e_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Nat_reduceSub___redArg(v_e_1204_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSub___boxed(lean_object* v_e_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Nat_reduceSub(v_e_1214_, v_a_1215_, v_a_1216_, v_a_1217_, v_a_1218_, v_a_1219_, v_a_1220_, v_a_1221_);
lean_dec(v_a_1221_);
lean_dec_ref(v_a_1220_);
lean_dec(v_a_1219_);
lean_dec_ref(v_a_1218_);
lean_dec(v_a_1217_);
lean_dec_ref(v_a_1216_);
lean_dec(v_a_1215_);
lean_dec_ref(v_e_1214_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1244_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_));
v___x_1245_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_));
v___x_1246_ = lean_alloc_closure((void*)(l_Nat_reduceSub___boxed), 9, 0);
v___x_1247_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1244_, v___x_1245_, v___x_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26____boxed(lean_object* v_a_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_();
return v_res_1249_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = lean_alloc_closure((void*)(l_Nat_reduceSub___boxed), 9, 0);
v___x_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_1253_; uint8_t v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1253_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_));
v___x_1254_ = 1;
v___x_1255_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28_);
v___x_1256_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1253_, v___x_1254_, v___x_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28____boxed(lean_object* v_a_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28_();
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_1260_; uint8_t v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1260_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_));
v___x_1261_ = 1;
v___x_1262_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28_);
v___x_1263_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1260_, v___x_1261_, v___x_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_30____boxed(lean_object* v_a_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_30_();
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDiv___redArg(lean_object* v_e_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; uint8_t v___x_1279_; 
v___x_1277_ = ((lean_object*)(l_Nat_reduceDiv___redArg___closed__2));
v___x_1278_ = lean_unsigned_to_nat(6u);
v___x_1279_ = l_Lean_Expr_isAppOfArity(v_e_1271_, v___x_1277_, v___x_1278_);
if (v___x_1279_ == 0)
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1280_);
return v___x_1281_;
}
else
{
lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1282_ = l_Lean_Expr_appFn_x21(v_e_1271_);
v___x_1283_ = l_Lean_Expr_appArg_x21(v___x_1282_);
lean_dec_ref(v___x_1282_);
v___x_1284_ = l_Lean_Meta_getNatValue_x3f(v___x_1283_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_);
lean_dec_ref(v___x_1283_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1326_; 
v_a_1285_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1287_ = v___x_1284_;
v_isShared_1288_ = v_isSharedCheck_1326_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_dec(v___x_1284_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1326_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
if (lean_obj_tag(v_a_1285_) == 1)
{
lean_object* v_val_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
lean_del_object(v___x_1287_);
v_val_1289_ = lean_ctor_get(v_a_1285_, 0);
lean_inc(v_val_1289_);
lean_dec_ref_known(v_a_1285_, 1);
v___x_1290_ = l_Lean_Expr_appArg_x21(v_e_1271_);
v___x_1291_ = l_Lean_Meta_getNatValue_x3f(v___x_1290_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_);
lean_dec_ref(v___x_1290_);
if (lean_obj_tag(v___x_1291_) == 0)
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1313_; 
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1294_ = v___x_1291_;
v_isShared_1295_ = v_isSharedCheck_1313_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v___x_1291_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1313_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
if (lean_obj_tag(v_a_1292_) == 1)
{
lean_object* v_val_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1308_; 
v_val_1296_ = lean_ctor_get(v_a_1292_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v_a_1292_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1298_ = v_a_1292_;
v_isShared_1299_ = v_isSharedCheck_1308_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_val_1296_);
lean_dec(v_a_1292_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1308_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1303_; 
v___x_1300_ = lean_nat_div(v_val_1289_, v_val_1296_);
lean_dec(v_val_1296_);
lean_dec(v_val_1289_);
v___x_1301_ = l_Lean_mkNatLit(v___x_1300_);
if (v_isShared_1299_ == 0)
{
lean_ctor_set_tag(v___x_1298_, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1301_);
v___x_1303_ = v___x_1298_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v___x_1301_);
v___x_1303_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
lean_object* v___x_1305_; 
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 0, v___x_1303_);
v___x_1305_ = v___x_1294_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
}
else
{
lean_object* v___x_1309_; lean_object* v___x_1311_; 
lean_dec(v_a_1292_);
lean_dec(v_val_1289_);
v___x_1309_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 0, v___x_1309_);
v___x_1311_ = v___x_1294_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___x_1309_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1321_; 
lean_dec(v_val_1289_);
v_a_1314_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1316_ = v___x_1291_;
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_a_1314_);
lean_dec(v___x_1291_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1319_; 
if (v_isShared_1317_ == 0)
{
v___x_1319_ = v___x_1316_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1314_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
else
{
lean_object* v___x_1322_; lean_object* v___x_1324_; 
lean_dec(v_a_1285_);
v___x_1322_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 0, v___x_1322_);
v___x_1324_ = v___x_1287_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v___x_1322_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
}
else
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1334_; 
v_a_1327_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1329_ = v___x_1284_;
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1284_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1332_; 
if (v_isShared_1330_ == 0)
{
v___x_1332_ = v___x_1329_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_a_1327_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDiv___redArg___boxed(lean_object* v_e_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l_Nat_reduceDiv___redArg(v_e_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_);
lean_dec(v_a_1339_);
lean_dec_ref(v_a_1338_);
lean_dec(v_a_1337_);
lean_dec_ref(v_a_1336_);
lean_dec_ref(v_e_1335_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDiv(lean_object* v_e_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_){
_start:
{
lean_object* v___x_1351_; 
v___x_1351_ = l_Nat_reduceDiv___redArg(v_e_1342_, v_a_1346_, v_a_1347_, v_a_1348_, v_a_1349_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDiv___boxed(lean_object* v_e_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Nat_reduceDiv(v_e_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_, v_a_1359_);
lean_dec(v_a_1359_);
lean_dec_ref(v_a_1358_);
lean_dec(v_a_1357_);
lean_dec_ref(v_a_1356_);
lean_dec(v_a_1355_);
lean_dec_ref(v_a_1354_);
lean_dec(v_a_1353_);
lean_dec_ref(v_e_1352_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1382_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_));
v___x_1383_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_));
v___x_1384_ = lean_alloc_closure((void*)(l_Nat_reduceDiv___boxed), 9, 0);
v___x_1385_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1382_, v___x_1383_, v___x_1384_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26____boxed(lean_object* v_a_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_();
return v_res_1387_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lean_alloc_closure((void*)(l_Nat_reduceDiv___boxed), 9, 0);
v___x_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1388_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_1391_; uint8_t v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1391_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_));
v___x_1392_ = 1;
v___x_1393_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28_);
v___x_1394_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1391_, v___x_1392_, v___x_1393_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28____boxed(lean_object* v_a_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28_();
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_1398_; uint8_t v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1398_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_));
v___x_1399_ = 1;
v___x_1400_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28_);
v___x_1401_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1398_, v___x_1399_, v___x_1400_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_30____boxed(lean_object* v_a_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_30_();
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMod___redArg(lean_object* v_e_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; uint8_t v___x_1417_; 
v___x_1415_ = ((lean_object*)(l_Nat_reduceMod___redArg___closed__2));
v___x_1416_ = lean_unsigned_to_nat(6u);
v___x_1417_ = l_Lean_Expr_isAppOfArity(v_e_1409_, v___x_1415_, v___x_1416_);
if (v___x_1417_ == 0)
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1418_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
return v___x_1419_;
}
else
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1420_ = l_Lean_Expr_appFn_x21(v_e_1409_);
v___x_1421_ = l_Lean_Expr_appArg_x21(v___x_1420_);
lean_dec_ref(v___x_1420_);
v___x_1422_ = l_Lean_Meta_getNatValue_x3f(v___x_1421_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_);
lean_dec_ref(v___x_1421_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1464_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1425_ = v___x_1422_;
v_isShared_1426_ = v_isSharedCheck_1464_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1422_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1464_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
if (lean_obj_tag(v_a_1423_) == 1)
{
lean_object* v_val_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
lean_del_object(v___x_1425_);
v_val_1427_ = lean_ctor_get(v_a_1423_, 0);
lean_inc(v_val_1427_);
lean_dec_ref_known(v_a_1423_, 1);
v___x_1428_ = l_Lean_Expr_appArg_x21(v_e_1409_);
v___x_1429_ = l_Lean_Meta_getNatValue_x3f(v___x_1428_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_);
lean_dec_ref(v___x_1428_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1451_; 
v_a_1430_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1432_ = v___x_1429_;
v_isShared_1433_ = v_isSharedCheck_1451_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1429_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1451_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
if (lean_obj_tag(v_a_1430_) == 1)
{
lean_object* v_val_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1446_; 
v_val_1434_ = lean_ctor_get(v_a_1430_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v_a_1430_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1436_ = v_a_1430_;
v_isShared_1437_ = v_isSharedCheck_1446_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_val_1434_);
lean_dec(v_a_1430_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1446_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1441_; 
v___x_1438_ = lean_nat_mod(v_val_1427_, v_val_1434_);
lean_dec(v_val_1434_);
lean_dec(v_val_1427_);
v___x_1439_ = l_Lean_mkNatLit(v___x_1438_);
if (v_isShared_1437_ == 0)
{
lean_ctor_set_tag(v___x_1436_, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1439_);
v___x_1441_ = v___x_1436_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v___x_1439_);
v___x_1441_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
lean_object* v___x_1443_; 
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v___x_1441_);
v___x_1443_ = v___x_1432_;
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
}
else
{
lean_object* v___x_1447_; lean_object* v___x_1449_; 
lean_dec(v_a_1430_);
lean_dec(v_val_1427_);
v___x_1447_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v___x_1447_);
v___x_1449_ = v___x_1432_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___x_1447_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
else
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1459_; 
lean_dec(v_val_1427_);
v_a_1452_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1454_ = v___x_1429_;
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v___x_1429_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1452_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
else
{
lean_object* v___x_1460_; lean_object* v___x_1462_; 
lean_dec(v_a_1423_);
v___x_1460_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v___x_1460_);
v___x_1462_ = v___x_1425_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v___x_1460_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
v_a_1465_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v___x_1422_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1422_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_a_1465_);
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
}
LEAN_EXPORT lean_object* l_Nat_reduceMod___redArg___boxed(lean_object* v_e_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_){
_start:
{
lean_object* v_res_1479_; 
v_res_1479_ = l_Nat_reduceMod___redArg(v_e_1473_, v_a_1474_, v_a_1475_, v_a_1476_, v_a_1477_);
lean_dec(v_a_1477_);
lean_dec_ref(v_a_1476_);
lean_dec(v_a_1475_);
lean_dec_ref(v_a_1474_);
lean_dec_ref(v_e_1473_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMod(lean_object* v_e_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_){
_start:
{
lean_object* v___x_1489_; 
v___x_1489_ = l_Nat_reduceMod___redArg(v_e_1480_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMod___boxed(lean_object* v_e_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Nat_reduceMod(v_e_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_, v_a_1497_);
lean_dec(v_a_1497_);
lean_dec_ref(v_a_1496_);
lean_dec(v_a_1495_);
lean_dec_ref(v_a_1494_);
lean_dec(v_a_1493_);
lean_dec_ref(v_a_1492_);
lean_dec(v_a_1491_);
lean_dec_ref(v_e_1490_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1520_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_));
v___x_1521_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_));
v___x_1522_ = lean_alloc_closure((void*)(l_Nat_reduceMod___boxed), 9, 0);
v___x_1523_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1520_, v___x_1521_, v___x_1522_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26____boxed(lean_object* v_a_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_();
return v_res_1525_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1526_ = lean_alloc_closure((void*)(l_Nat_reduceMod___boxed), 9, 0);
v___x_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1526_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_1529_; uint8_t v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1529_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_));
v___x_1530_ = 1;
v___x_1531_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28_);
v___x_1532_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1529_, v___x_1530_, v___x_1531_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28____boxed(lean_object* v_a_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28_();
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_1536_; uint8_t v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1536_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_));
v___x_1537_ = 1;
v___x_1538_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28_);
v___x_1539_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1536_, v___x_1537_, v___x_1538_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_30____boxed(lean_object* v_a_1540_){
_start:
{
lean_object* v_res_1541_; 
v_res_1541_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_30_();
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l_Nat_reducePow___redArg(lean_object* v_e_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_){
_start:
{
lean_object* v___x_1557_; uint8_t v___x_1558_; 
v___x_1557_ = l_Lean_Expr_cleanupAnnotations(v_e_1547_);
v___x_1558_ = l_Lean_Expr_isApp(v___x_1557_);
if (v___x_1558_ == 0)
{
lean_dec_ref(v___x_1557_);
goto v___jp_1554_;
}
else
{
lean_object* v_arg_1559_; lean_object* v___x_1560_; uint8_t v___x_1561_; 
v_arg_1559_ = lean_ctor_get(v___x_1557_, 1);
lean_inc_ref(v_arg_1559_);
v___x_1560_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1557_);
v___x_1561_ = l_Lean_Expr_isApp(v___x_1560_);
if (v___x_1561_ == 0)
{
lean_dec_ref(v___x_1560_);
lean_dec_ref(v_arg_1559_);
goto v___jp_1554_;
}
else
{
lean_object* v_arg_1562_; lean_object* v___x_1563_; uint8_t v___x_1564_; 
v_arg_1562_ = lean_ctor_get(v___x_1560_, 1);
lean_inc_ref(v_arg_1562_);
v___x_1563_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1560_);
v___x_1564_ = l_Lean_Expr_isApp(v___x_1563_);
if (v___x_1564_ == 0)
{
lean_dec_ref(v___x_1563_);
lean_dec_ref(v_arg_1562_);
lean_dec_ref(v_arg_1559_);
goto v___jp_1554_;
}
else
{
lean_object* v___x_1565_; uint8_t v___x_1566_; 
v___x_1565_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1563_);
v___x_1566_ = l_Lean_Expr_isApp(v___x_1565_);
if (v___x_1566_ == 0)
{
lean_dec_ref(v___x_1565_);
lean_dec_ref(v_arg_1562_);
lean_dec_ref(v_arg_1559_);
goto v___jp_1554_;
}
else
{
lean_object* v___x_1567_; uint8_t v___x_1568_; 
v___x_1567_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1565_);
v___x_1568_ = l_Lean_Expr_isApp(v___x_1567_);
if (v___x_1568_ == 0)
{
lean_dec_ref(v___x_1567_);
lean_dec_ref(v_arg_1562_);
lean_dec_ref(v_arg_1559_);
goto v___jp_1554_;
}
else
{
lean_object* v___x_1569_; uint8_t v___x_1570_; 
v___x_1569_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1567_);
v___x_1570_ = l_Lean_Expr_isApp(v___x_1569_);
if (v___x_1570_ == 0)
{
lean_dec_ref(v___x_1569_);
lean_dec_ref(v_arg_1562_);
lean_dec_ref(v_arg_1559_);
goto v___jp_1554_;
}
else
{
lean_object* v___x_1571_; lean_object* v___x_1572_; uint8_t v___x_1573_; 
v___x_1571_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1569_);
v___x_1572_ = ((lean_object*)(l_Nat_reducePow___redArg___closed__2));
v___x_1573_ = l_Lean_Expr_isConstOf(v___x_1571_, v___x_1572_);
lean_dec_ref(v___x_1571_);
if (v___x_1573_ == 0)
{
lean_dec_ref(v_arg_1562_);
lean_dec_ref(v_arg_1559_);
goto v___jp_1554_;
}
else
{
lean_object* v___x_1574_; 
v___x_1574_ = l_Lean_Meta_getNatValue_x3f(v_arg_1562_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_);
lean_dec_ref(v_arg_1562_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1636_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1577_ = v___x_1574_;
v_isShared_1578_ = v_isSharedCheck_1636_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1574_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1636_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
if (lean_obj_tag(v_a_1575_) == 1)
{
lean_object* v_val_1579_; lean_object* v___x_1580_; 
lean_del_object(v___x_1577_);
v_val_1579_ = lean_ctor_get(v_a_1575_, 0);
lean_inc(v_val_1579_);
lean_dec_ref_known(v_a_1575_, 1);
v___x_1580_ = l_Lean_Meta_getNatValue_x3f(v_arg_1559_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_);
lean_dec_ref(v_arg_1559_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1623_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1583_ = v___x_1580_;
v_isShared_1584_ = v_isSharedCheck_1623_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1580_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1623_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
if (lean_obj_tag(v_a_1581_) == 1)
{
lean_object* v_config_1585_; lean_object* v_val_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1618_; 
lean_del_object(v___x_1583_);
v_config_1585_ = lean_ctor_get(v_a_1548_, 0);
v_val_1586_ = lean_ctor_get(v_a_1581_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v_a_1581_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1588_ = v_a_1581_;
v_isShared_1589_ = v_isSharedCheck_1618_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_val_1586_);
lean_dec(v_a_1581_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1618_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
uint8_t v_warnExponents_1590_; lean_object* v___x_1591_; 
v_warnExponents_1590_ = lean_ctor_get_uint8(v_config_1585_, sizeof(void*)*3 + 25);
lean_inc(v_val_1586_);
v___x_1591_ = l_Lean_checkExponent(v_val_1586_, v_warnExponents_1590_, v_a_1551_, v_a_1552_);
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1609_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1594_ = v___x_1591_;
v_isShared_1595_ = v_isSharedCheck_1609_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1591_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1609_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
uint8_t v___x_1596_; 
v___x_1596_ = lean_unbox(v_a_1592_);
lean_dec(v_a_1592_);
if (v___x_1596_ == 0)
{
lean_object* v___x_1597_; lean_object* v___x_1599_; 
lean_del_object(v___x_1588_);
lean_dec(v_val_1586_);
lean_dec(v_val_1579_);
v___x_1597_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 0, v___x_1597_);
v___x_1599_ = v___x_1594_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v___x_1597_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
else
{
lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1604_; 
v___x_1601_ = lean_nat_pow(v_val_1579_, v_val_1586_);
lean_dec(v_val_1586_);
lean_dec(v_val_1579_);
v___x_1602_ = l_Lean_mkNatLit(v___x_1601_);
if (v_isShared_1589_ == 0)
{
lean_ctor_set_tag(v___x_1588_, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1602_);
v___x_1604_ = v___x_1588_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1602_);
v___x_1604_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
lean_object* v___x_1606_; 
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 0, v___x_1604_);
v___x_1606_ = v___x_1594_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1604_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
return v___x_1606_;
}
}
}
}
}
else
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
lean_del_object(v___x_1588_);
lean_dec(v_val_1586_);
lean_dec(v_val_1579_);
v_a_1610_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1612_ = v___x_1591_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1591_);
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
}
else
{
lean_object* v___x_1619_; lean_object* v___x_1621_; 
lean_dec(v_a_1581_);
lean_dec(v_val_1579_);
v___x_1619_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 0, v___x_1619_);
v___x_1621_ = v___x_1583_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v___x_1619_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
}
else
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
lean_dec(v_val_1579_);
v_a_1624_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v___x_1580_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1580_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1629_; 
if (v_isShared_1627_ == 0)
{
v___x_1629_ = v___x_1626_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_a_1624_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
}
else
{
lean_object* v___x_1632_; lean_object* v___x_1634_; 
lean_dec(v_a_1575_);
lean_dec_ref(v_arg_1559_);
v___x_1632_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v___x_1632_);
v___x_1634_ = v___x_1577_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v___x_1632_);
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
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1644_; 
lean_dec_ref(v_arg_1559_);
v_a_1637_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1639_ = v___x_1574_;
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1574_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1642_; 
if (v_isShared_1640_ == 0)
{
v___x_1642_ = v___x_1639_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_a_1637_);
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
}
}
}
}
v___jp_1554_:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1555_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1555_);
return v___x_1556_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reducePow___redArg___boxed(lean_object* v_e_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_Nat_reducePow___redArg(v_e_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_);
lean_dec(v_a_1650_);
lean_dec_ref(v_a_1649_);
lean_dec(v_a_1648_);
lean_dec_ref(v_a_1647_);
lean_dec_ref(v_a_1646_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_Nat_reducePow(lean_object* v_e_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v___x_1662_; 
v___x_1662_ = l_Nat_reducePow___redArg(v_e_1653_, v_a_1655_, v_a_1657_, v_a_1658_, v_a_1659_, v_a_1660_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* l_Nat_reducePow___boxed(lean_object* v_e_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Nat_reducePow(v_e_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_);
lean_dec(v_a_1670_);
lean_dec_ref(v_a_1669_);
lean_dec(v_a_1668_);
lean_dec_ref(v_a_1667_);
lean_dec(v_a_1666_);
lean_dec_ref(v_a_1665_);
lean_dec(v_a_1664_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1693_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_));
v___x_1694_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_));
v___x_1695_ = lean_alloc_closure((void*)(l_Nat_reducePow___boxed), 9, 0);
v___x_1696_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1693_, v___x_1694_, v___x_1695_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26____boxed(lean_object* v_a_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_();
return v_res_1698_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1699_ = lean_alloc_closure((void*)(l_Nat_reducePow___boxed), 9, 0);
v___x_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1699_);
return v___x_1700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_1702_; uint8_t v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1702_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_));
v___x_1703_ = 1;
v___x_1704_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28_);
v___x_1705_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1702_, v___x_1703_, v___x_1704_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28____boxed(lean_object* v_a_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28_();
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_1709_; uint8_t v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1709_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_));
v___x_1710_ = 1;
v___x_1711_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28_);
v___x_1712_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1709_, v___x_1710_, v___x_1711_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_30____boxed(lean_object* v_a_1713_){
_start:
{
lean_object* v_res_1714_; 
v_res_1714_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_30_();
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAnd___redArg(lean_object* v_e_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; uint8_t v___x_1728_; 
v___x_1726_ = ((lean_object*)(l_Nat_reduceAnd___redArg___closed__2));
v___x_1727_ = lean_unsigned_to_nat(6u);
v___x_1728_ = l_Lean_Expr_isAppOfArity(v_e_1720_, v___x_1726_, v___x_1727_);
if (v___x_1728_ == 0)
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_1730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1729_);
return v___x_1730_;
}
else
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1731_ = l_Lean_Expr_appFn_x21(v_e_1720_);
v___x_1732_ = l_Lean_Expr_appArg_x21(v___x_1731_);
lean_dec_ref(v___x_1731_);
v___x_1733_ = l_Lean_Meta_getNatValue_x3f(v___x_1732_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
lean_dec_ref(v___x_1732_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1775_; 
v_a_1734_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1736_ = v___x_1733_;
v_isShared_1737_ = v_isSharedCheck_1775_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1733_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1775_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
if (lean_obj_tag(v_a_1734_) == 1)
{
lean_object* v_val_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
lean_del_object(v___x_1736_);
v_val_1738_ = lean_ctor_get(v_a_1734_, 0);
lean_inc(v_val_1738_);
lean_dec_ref_known(v_a_1734_, 1);
v___x_1739_ = l_Lean_Expr_appArg_x21(v_e_1720_);
v___x_1740_ = l_Lean_Meta_getNatValue_x3f(v___x_1739_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
lean_dec_ref(v___x_1739_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1762_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1743_ = v___x_1740_;
v_isShared_1744_ = v_isSharedCheck_1762_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1740_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1762_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
if (lean_obj_tag(v_a_1741_) == 1)
{
lean_object* v_val_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1757_; 
v_val_1745_ = lean_ctor_get(v_a_1741_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v_a_1741_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1747_ = v_a_1741_;
v_isShared_1748_ = v_isSharedCheck_1757_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_val_1745_);
lean_dec(v_a_1741_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1757_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1749_ = lean_nat_land(v_val_1738_, v_val_1745_);
lean_dec(v_val_1745_);
lean_dec(v_val_1738_);
v___x_1750_ = l_Lean_mkNatLit(v___x_1749_);
if (v_isShared_1748_ == 0)
{
lean_ctor_set_tag(v___x_1747_, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1750_);
v___x_1752_ = v___x_1747_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
lean_object* v___x_1754_; 
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v___x_1752_);
v___x_1754_ = v___x_1743_;
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
else
{
lean_object* v___x_1758_; lean_object* v___x_1760_; 
lean_dec(v_a_1741_);
lean_dec(v_val_1738_);
v___x_1758_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v___x_1758_);
v___x_1760_ = v___x_1743_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v___x_1758_);
v___x_1760_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
return v___x_1760_;
}
}
}
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1770_; 
lean_dec(v_val_1738_);
v_a_1763_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1740_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1740_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1763_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
else
{
lean_object* v___x_1771_; lean_object* v___x_1773_; 
lean_dec(v_a_1734_);
v___x_1771_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1737_ == 0)
{
lean_ctor_set(v___x_1736_, 0, v___x_1771_);
v___x_1773_ = v___x_1736_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v___x_1771_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
}
else
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
v_a_1776_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1778_ = v___x_1733_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1733_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1776_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAnd___redArg___boxed(lean_object* v_e_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Nat_reduceAnd___redArg(v_e_1784_, v_a_1785_, v_a_1786_, v_a_1787_, v_a_1788_);
lean_dec(v_a_1788_);
lean_dec_ref(v_a_1787_);
lean_dec(v_a_1786_);
lean_dec_ref(v_a_1785_);
lean_dec_ref(v_e_1784_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAnd(lean_object* v_e_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_){
_start:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_Nat_reduceAnd___redArg(v_e_1791_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAnd___boxed(lean_object* v_e_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_){
_start:
{
lean_object* v_res_1810_; 
v_res_1810_ = l_Nat_reduceAnd(v_e_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_);
lean_dec(v_a_1808_);
lean_dec_ref(v_a_1807_);
lean_dec(v_a_1806_);
lean_dec_ref(v_a_1805_);
lean_dec(v_a_1804_);
lean_dec_ref(v_a_1803_);
lean_dec(v_a_1802_);
lean_dec_ref(v_e_1801_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1831_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_));
v___x_1832_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_));
v___x_1833_ = lean_alloc_closure((void*)(l_Nat_reduceAnd___boxed), 9, 0);
v___x_1834_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1831_, v___x_1832_, v___x_1833_);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26____boxed(lean_object* v_a_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_();
return v_res_1836_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = lean_alloc_closure((void*)(l_Nat_reduceAnd___boxed), 9, 0);
v___x_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1837_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_1840_; uint8_t v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1840_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_));
v___x_1841_ = 1;
v___x_1842_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28_);
v___x_1843_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1840_, v___x_1841_, v___x_1842_);
return v___x_1843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28____boxed(lean_object* v_a_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28_();
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_1847_; uint8_t v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1847_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_));
v___x_1848_ = 1;
v___x_1849_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28_);
v___x_1850_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1847_, v___x_1848_, v___x_1849_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_30____boxed(lean_object* v_a_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_30_();
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceXor___redArg(lean_object* v_e_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; uint8_t v___x_1866_; 
v___x_1864_ = ((lean_object*)(l_Nat_reduceXor___redArg___closed__2));
v___x_1865_ = lean_unsigned_to_nat(6u);
v___x_1866_ = l_Lean_Expr_isAppOfArity(v_e_1858_, v___x_1864_, v___x_1865_);
if (v___x_1866_ == 0)
{
lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1867_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1867_);
return v___x_1868_;
}
else
{
lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1869_ = l_Lean_Expr_appFn_x21(v_e_1858_);
v___x_1870_ = l_Lean_Expr_appArg_x21(v___x_1869_);
lean_dec_ref(v___x_1869_);
v___x_1871_ = l_Lean_Meta_getNatValue_x3f(v___x_1870_, v_a_1859_, v_a_1860_, v_a_1861_, v_a_1862_);
lean_dec_ref(v___x_1870_);
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1913_; 
v_a_1872_ = lean_ctor_get(v___x_1871_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1871_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1874_ = v___x_1871_;
v_isShared_1875_ = v_isSharedCheck_1913_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1871_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1913_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
if (lean_obj_tag(v_a_1872_) == 1)
{
lean_object* v_val_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
lean_del_object(v___x_1874_);
v_val_1876_ = lean_ctor_get(v_a_1872_, 0);
lean_inc(v_val_1876_);
lean_dec_ref_known(v_a_1872_, 1);
v___x_1877_ = l_Lean_Expr_appArg_x21(v_e_1858_);
v___x_1878_ = l_Lean_Meta_getNatValue_x3f(v___x_1877_, v_a_1859_, v_a_1860_, v_a_1861_, v_a_1862_);
lean_dec_ref(v___x_1877_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1900_; 
v_a_1879_ = lean_ctor_get(v___x_1878_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1881_ = v___x_1878_;
v_isShared_1882_ = v_isSharedCheck_1900_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v___x_1878_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1900_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
if (lean_obj_tag(v_a_1879_) == 1)
{
lean_object* v_val_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1895_; 
v_val_1883_ = lean_ctor_get(v_a_1879_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v_a_1879_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1885_ = v_a_1879_;
v_isShared_1886_ = v_isSharedCheck_1895_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_val_1883_);
lean_dec(v_a_1879_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1895_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1890_; 
v___x_1887_ = lean_nat_lxor(v_val_1876_, v_val_1883_);
lean_dec(v_val_1883_);
lean_dec(v_val_1876_);
v___x_1888_ = l_Lean_mkNatLit(v___x_1887_);
if (v_isShared_1886_ == 0)
{
lean_ctor_set_tag(v___x_1885_, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1888_);
v___x_1890_ = v___x_1885_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v___x_1888_);
v___x_1890_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
lean_object* v___x_1892_; 
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 0, v___x_1890_);
v___x_1892_ = v___x_1881_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
else
{
lean_object* v___x_1896_; lean_object* v___x_1898_; 
lean_dec(v_a_1879_);
lean_dec(v_val_1876_);
v___x_1896_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 0, v___x_1896_);
v___x_1898_ = v___x_1881_;
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
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
lean_dec(v_val_1876_);
v_a_1901_ = lean_ctor_get(v___x_1878_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1878_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1878_);
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
else
{
lean_object* v___x_1909_; lean_object* v___x_1911_; 
lean_dec(v_a_1872_);
v___x_1909_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_1875_ == 0)
{
lean_ctor_set(v___x_1874_, 0, v___x_1909_);
v___x_1911_ = v___x_1874_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v___x_1909_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
else
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
v_a_1914_ = lean_ctor_get(v___x_1871_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1871_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1916_ = v___x_1871_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1871_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_a_1914_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
return v___x_1919_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceXor___redArg___boxed(lean_object* v_e_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l_Nat_reduceXor___redArg(v_e_1922_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_);
lean_dec(v_a_1926_);
lean_dec_ref(v_a_1925_);
lean_dec(v_a_1924_);
lean_dec_ref(v_a_1923_);
lean_dec_ref(v_e_1922_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceXor(lean_object* v_e_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_){
_start:
{
lean_object* v___x_1938_; 
v___x_1938_ = l_Nat_reduceXor___redArg(v_e_1929_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceXor___boxed(lean_object* v_e_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Nat_reduceXor(v_e_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_);
lean_dec(v_a_1946_);
lean_dec_ref(v_a_1945_);
lean_dec(v_a_1944_);
lean_dec_ref(v_a_1943_);
lean_dec(v_a_1942_);
lean_dec_ref(v_a_1941_);
lean_dec(v_a_1940_);
lean_dec_ref(v_e_1939_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1969_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_));
v___x_1970_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_));
v___x_1971_ = lean_alloc_closure((void*)(l_Nat_reduceXor___boxed), 9, 0);
v___x_1972_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1969_, v___x_1970_, v___x_1971_);
return v___x_1972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26____boxed(lean_object* v_a_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_();
return v_res_1974_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = lean_alloc_closure((void*)(l_Nat_reduceXor___boxed), 9, 0);
v___x_1976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_1978_; uint8_t v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1978_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_));
v___x_1979_ = 1;
v___x_1980_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28_);
v___x_1981_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1978_, v___x_1979_, v___x_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28____boxed(lean_object* v_a_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28_();
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_1985_; uint8_t v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1985_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_));
v___x_1986_ = 1;
v___x_1987_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28_);
v___x_1988_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1985_, v___x_1986_, v___x_1987_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_30____boxed(lean_object* v_a_1989_){
_start:
{
lean_object* v_res_1990_; 
v_res_1990_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_30_();
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceOr___redArg(lean_object* v_e_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_){
_start:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; uint8_t v___x_2004_; 
v___x_2002_ = ((lean_object*)(l_Nat_reduceOr___redArg___closed__2));
v___x_2003_ = lean_unsigned_to_nat(6u);
v___x_2004_ = l_Lean_Expr_isAppOfArity(v_e_1996_, v___x_2002_, v___x_2003_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_2006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2005_);
return v___x_2006_;
}
else
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2007_ = l_Lean_Expr_appFn_x21(v_e_1996_);
v___x_2008_ = l_Lean_Expr_appArg_x21(v___x_2007_);
lean_dec_ref(v___x_2007_);
v___x_2009_ = l_Lean_Meta_getNatValue_x3f(v___x_2008_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_);
lean_dec_ref(v___x_2008_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2051_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2012_ = v___x_2009_;
v_isShared_2013_ = v_isSharedCheck_2051_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_a_2010_);
lean_dec(v___x_2009_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2051_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
if (lean_obj_tag(v_a_2010_) == 1)
{
lean_object* v_val_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
lean_del_object(v___x_2012_);
v_val_2014_ = lean_ctor_get(v_a_2010_, 0);
lean_inc(v_val_2014_);
lean_dec_ref_known(v_a_2010_, 1);
v___x_2015_ = l_Lean_Expr_appArg_x21(v_e_1996_);
v___x_2016_ = l_Lean_Meta_getNatValue_x3f(v___x_2015_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_);
lean_dec_ref(v___x_2015_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2038_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2038_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2038_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
if (lean_obj_tag(v_a_2017_) == 1)
{
lean_object* v_val_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2033_; 
v_val_2021_ = lean_ctor_get(v_a_2017_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v_a_2017_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2023_ = v_a_2017_;
v_isShared_2024_ = v_isSharedCheck_2033_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_val_2021_);
lean_dec(v_a_2017_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2033_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2028_; 
v___x_2025_ = lean_nat_lor(v_val_2014_, v_val_2021_);
lean_dec(v_val_2021_);
lean_dec(v_val_2014_);
v___x_2026_ = l_Lean_mkNatLit(v___x_2025_);
if (v_isShared_2024_ == 0)
{
lean_ctor_set_tag(v___x_2023_, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2026_);
v___x_2028_ = v___x_2023_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v___x_2026_);
v___x_2028_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
lean_object* v___x_2030_; 
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v___x_2028_);
v___x_2030_ = v___x_2019_;
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
}
else
{
lean_object* v___x_2034_; lean_object* v___x_2036_; 
lean_dec(v_a_2017_);
lean_dec(v_val_2014_);
v___x_2034_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v___x_2034_);
v___x_2036_ = v___x_2019_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2034_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
else
{
lean_object* v_a_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2046_; 
lean_dec(v_val_2014_);
v_a_2039_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2041_ = v___x_2016_;
v_isShared_2042_ = v_isSharedCheck_2046_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_a_2039_);
lean_dec(v___x_2016_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2046_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2044_; 
if (v_isShared_2042_ == 0)
{
v___x_2044_ = v___x_2041_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_a_2039_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
}
}
else
{
lean_object* v___x_2047_; lean_object* v___x_2049_; 
lean_dec(v_a_2010_);
v___x_2047_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 0, v___x_2047_);
v___x_2049_ = v___x_2012_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v___x_2047_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
return v___x_2049_;
}
}
}
}
else
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2059_; 
v_a_2052_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2054_ = v___x_2009_;
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v___x_2009_);
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
v_reuseFailAlloc_2058_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceOr___redArg___boxed(lean_object* v_e_2060_, lean_object* v_a_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_Nat_reduceOr___redArg(v_e_2060_, v_a_2061_, v_a_2062_, v_a_2063_, v_a_2064_);
lean_dec(v_a_2064_);
lean_dec_ref(v_a_2063_);
lean_dec(v_a_2062_);
lean_dec_ref(v_a_2061_);
lean_dec_ref(v_e_2060_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceOr(lean_object* v_e_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_){
_start:
{
lean_object* v___x_2076_; 
v___x_2076_ = l_Nat_reduceOr___redArg(v_e_2067_, v_a_2071_, v_a_2072_, v_a_2073_, v_a_2074_);
return v___x_2076_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceOr___boxed(lean_object* v_e_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_){
_start:
{
lean_object* v_res_2086_; 
v_res_2086_ = l_Nat_reduceOr(v_e_2077_, v_a_2078_, v_a_2079_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_);
lean_dec(v_a_2084_);
lean_dec_ref(v_a_2083_);
lean_dec(v_a_2082_);
lean_dec_ref(v_a_2081_);
lean_dec(v_a_2080_);
lean_dec_ref(v_a_2079_);
lean_dec(v_a_2078_);
lean_dec_ref(v_e_2077_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; 
v___x_2107_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_));
v___x_2108_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_));
v___x_2109_ = lean_alloc_closure((void*)(l_Nat_reduceOr___boxed), 9, 0);
v___x_2110_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_2107_, v___x_2108_, v___x_2109_);
return v___x_2110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26____boxed(lean_object* v_a_2111_){
_start:
{
lean_object* v_res_2112_; 
v_res_2112_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_();
return v_res_2112_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2113_ = lean_alloc_closure((void*)(l_Nat_reduceOr___boxed), 9, 0);
v___x_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2116_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_));
v___x_2117_ = 1;
v___x_2118_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28_);
v___x_2119_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_2116_, v___x_2117_, v___x_2118_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28____boxed(lean_object* v_a_2120_){
_start:
{
lean_object* v_res_2121_; 
v_res_2121_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28_();
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_2123_; uint8_t v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2123_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_));
v___x_2124_ = 1;
v___x_2125_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28_);
v___x_2126_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_2123_, v___x_2124_, v___x_2125_);
return v___x_2126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_30____boxed(lean_object* v_a_2127_){
_start:
{
lean_object* v_res_2128_; 
v_res_2128_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_30_();
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceShiftLeft___redArg(lean_object* v_e_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_){
_start:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; uint8_t v___x_2142_; 
v___x_2140_ = ((lean_object*)(l_Nat_reduceShiftLeft___redArg___closed__2));
v___x_2141_ = lean_unsigned_to_nat(6u);
v___x_2142_ = l_Lean_Expr_isAppOfArity(v_e_2134_, v___x_2140_, v___x_2141_);
if (v___x_2142_ == 0)
{
lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2143_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_2144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2143_);
return v___x_2144_;
}
else
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2145_ = l_Lean_Expr_appFn_x21(v_e_2134_);
v___x_2146_ = l_Lean_Expr_appArg_x21(v___x_2145_);
lean_dec_ref(v___x_2145_);
v___x_2147_ = l_Lean_Meta_getNatValue_x3f(v___x_2146_, v_a_2135_, v_a_2136_, v_a_2137_, v_a_2138_);
lean_dec_ref(v___x_2146_);
if (lean_obj_tag(v___x_2147_) == 0)
{
lean_object* v_a_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2189_; 
v_a_2148_ = lean_ctor_get(v___x_2147_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2147_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2150_ = v___x_2147_;
v_isShared_2151_ = v_isSharedCheck_2189_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_a_2148_);
lean_dec(v___x_2147_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2189_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
if (lean_obj_tag(v_a_2148_) == 1)
{
lean_object* v_val_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
lean_del_object(v___x_2150_);
v_val_2152_ = lean_ctor_get(v_a_2148_, 0);
lean_inc(v_val_2152_);
lean_dec_ref_known(v_a_2148_, 1);
v___x_2153_ = l_Lean_Expr_appArg_x21(v_e_2134_);
v___x_2154_ = l_Lean_Meta_getNatValue_x3f(v___x_2153_, v_a_2135_, v_a_2136_, v_a_2137_, v_a_2138_);
lean_dec_ref(v___x_2153_);
if (lean_obj_tag(v___x_2154_) == 0)
{
lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2176_; 
v_a_2155_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2157_ = v___x_2154_;
v_isShared_2158_ = v_isSharedCheck_2176_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_dec(v___x_2154_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2176_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
if (lean_obj_tag(v_a_2155_) == 1)
{
lean_object* v_val_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2171_; 
v_val_2159_ = lean_ctor_get(v_a_2155_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v_a_2155_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2161_ = v_a_2155_;
v_isShared_2162_ = v_isSharedCheck_2171_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_val_2159_);
lean_dec(v_a_2155_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2171_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2166_; 
v___x_2163_ = lean_nat_shiftl(v_val_2152_, v_val_2159_);
lean_dec(v_val_2159_);
lean_dec(v_val_2152_);
v___x_2164_ = l_Lean_mkNatLit(v___x_2163_);
if (v_isShared_2162_ == 0)
{
lean_ctor_set_tag(v___x_2161_, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2164_);
v___x_2166_ = v___x_2161_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v___x_2164_);
v___x_2166_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
lean_object* v___x_2168_; 
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 0, v___x_2166_);
v___x_2168_ = v___x_2157_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v___x_2166_);
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
lean_object* v___x_2172_; lean_object* v___x_2174_; 
lean_dec(v_a_2155_);
lean_dec(v_val_2152_);
v___x_2172_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 0, v___x_2172_);
v___x_2174_ = v___x_2157_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v___x_2172_);
v___x_2174_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
return v___x_2174_;
}
}
}
}
else
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
lean_dec(v_val_2152_);
v_a_2177_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2179_ = v___x_2154_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2154_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2177_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
else
{
lean_object* v___x_2185_; lean_object* v___x_2187_; 
lean_dec(v_a_2148_);
v___x_2185_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2151_ == 0)
{
lean_ctor_set(v___x_2150_, 0, v___x_2185_);
v___x_2187_ = v___x_2150_;
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
v_a_2190_ = lean_ctor_get(v___x_2147_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2147_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2147_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2147_);
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
}
}
LEAN_EXPORT lean_object* l_Nat_reduceShiftLeft___redArg___boxed(lean_object* v_e_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Nat_reduceShiftLeft___redArg(v_e_2198_, v_a_2199_, v_a_2200_, v_a_2201_, v_a_2202_);
lean_dec(v_a_2202_);
lean_dec_ref(v_a_2201_);
lean_dec(v_a_2200_);
lean_dec_ref(v_a_2199_);
lean_dec_ref(v_e_2198_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceShiftLeft(lean_object* v_e_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_){
_start:
{
lean_object* v___x_2214_; 
v___x_2214_ = l_Nat_reduceShiftLeft___redArg(v_e_2205_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceShiftLeft___boxed(lean_object* v_e_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_){
_start:
{
lean_object* v_res_2224_; 
v_res_2224_ = l_Nat_reduceShiftLeft(v_e_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_);
lean_dec(v_a_2222_);
lean_dec_ref(v_a_2221_);
lean_dec(v_a_2220_);
lean_dec_ref(v_a_2219_);
lean_dec(v_a_2218_);
lean_dec_ref(v_a_2217_);
lean_dec(v_a_2216_);
lean_dec_ref(v_e_2215_);
return v_res_2224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2245_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_));
v___x_2246_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_));
v___x_2247_ = lean_alloc_closure((void*)(l_Nat_reduceShiftLeft___boxed), 9, 0);
v___x_2248_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_2245_, v___x_2246_, v___x_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26____boxed(lean_object* v_a_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_();
return v_res_2250_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = lean_alloc_closure((void*)(l_Nat_reduceShiftLeft___boxed), 9, 0);
v___x_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2251_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_2254_; uint8_t v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2254_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_));
v___x_2255_ = 1;
v___x_2256_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28_);
v___x_2257_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_2254_, v___x_2255_, v___x_2256_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28____boxed(lean_object* v_a_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28_();
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_2261_; uint8_t v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2261_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_));
v___x_2262_ = 1;
v___x_2263_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28_);
v___x_2264_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_2261_, v___x_2262_, v___x_2263_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_30____boxed(lean_object* v_a_2265_){
_start:
{
lean_object* v_res_2266_; 
v_res_2266_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_30_();
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceShiftRight___redArg(lean_object* v_e_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_){
_start:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; uint8_t v___x_2280_; 
v___x_2278_ = ((lean_object*)(l_Nat_reduceShiftRight___redArg___closed__2));
v___x_2279_ = lean_unsigned_to_nat(6u);
v___x_2280_ = l_Lean_Expr_isAppOfArity(v_e_2272_, v___x_2278_, v___x_2279_);
if (v___x_2280_ == 0)
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2281_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_2282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2281_);
return v___x_2282_;
}
else
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2283_ = l_Lean_Expr_appFn_x21(v_e_2272_);
v___x_2284_ = l_Lean_Expr_appArg_x21(v___x_2283_);
lean_dec_ref(v___x_2283_);
v___x_2285_ = l_Lean_Meta_getNatValue_x3f(v___x_2284_, v_a_2273_, v_a_2274_, v_a_2275_, v_a_2276_);
lean_dec_ref(v___x_2284_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2327_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2288_ = v___x_2285_;
v_isShared_2289_ = v_isSharedCheck_2327_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2285_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2327_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
if (lean_obj_tag(v_a_2286_) == 1)
{
lean_object* v_val_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
lean_del_object(v___x_2288_);
v_val_2290_ = lean_ctor_get(v_a_2286_, 0);
lean_inc(v_val_2290_);
lean_dec_ref_known(v_a_2286_, 1);
v___x_2291_ = l_Lean_Expr_appArg_x21(v_e_2272_);
v___x_2292_ = l_Lean_Meta_getNatValue_x3f(v___x_2291_, v_a_2273_, v_a_2274_, v_a_2275_, v_a_2276_);
lean_dec_ref(v___x_2291_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2314_; 
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2295_ = v___x_2292_;
v_isShared_2296_ = v_isSharedCheck_2314_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2292_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2314_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
if (lean_obj_tag(v_a_2293_) == 1)
{
lean_object* v_val_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2309_; 
v_val_2297_ = lean_ctor_get(v_a_2293_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v_a_2293_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2299_ = v_a_2293_;
v_isShared_2300_ = v_isSharedCheck_2309_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_val_2297_);
lean_dec(v_a_2293_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2309_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2304_; 
v___x_2301_ = lean_nat_shiftr(v_val_2290_, v_val_2297_);
lean_dec(v_val_2297_);
lean_dec(v_val_2290_);
v___x_2302_ = l_Lean_mkNatLit(v___x_2301_);
if (v_isShared_2300_ == 0)
{
lean_ctor_set_tag(v___x_2299_, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2302_);
v___x_2304_ = v___x_2299_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v___x_2302_);
v___x_2304_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
lean_object* v___x_2306_; 
if (v_isShared_2296_ == 0)
{
lean_ctor_set(v___x_2295_, 0, v___x_2304_);
v___x_2306_ = v___x_2295_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v___x_2304_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
}
else
{
lean_object* v___x_2310_; lean_object* v___x_2312_; 
lean_dec(v_a_2293_);
lean_dec(v_val_2290_);
v___x_2310_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2296_ == 0)
{
lean_ctor_set(v___x_2295_, 0, v___x_2310_);
v___x_2312_ = v___x_2295_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
else
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2322_; 
lean_dec(v_val_2290_);
v_a_2315_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2317_ = v___x_2292_;
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2292_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2320_; 
if (v_isShared_2318_ == 0)
{
v___x_2320_ = v___x_2317_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2315_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
}
else
{
lean_object* v___x_2323_; lean_object* v___x_2325_; 
lean_dec(v_a_2286_);
v___x_2323_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 0, v___x_2323_);
v___x_2325_ = v___x_2288_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v___x_2323_);
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
else
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2335_; 
v_a_2328_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2330_ = v___x_2285_;
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2285_);
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
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceShiftRight___redArg___boxed(lean_object* v_e_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_Nat_reduceShiftRight___redArg(v_e_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_);
lean_dec(v_a_2340_);
lean_dec_ref(v_a_2339_);
lean_dec(v_a_2338_);
lean_dec_ref(v_a_2337_);
lean_dec_ref(v_e_2336_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceShiftRight(lean_object* v_e_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_){
_start:
{
lean_object* v___x_2352_; 
v___x_2352_ = l_Nat_reduceShiftRight___redArg(v_e_2343_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_);
return v___x_2352_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceShiftRight___boxed(lean_object* v_e_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_){
_start:
{
lean_object* v_res_2362_; 
v_res_2362_ = l_Nat_reduceShiftRight(v_e_2353_, v_a_2354_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v_a_2360_);
lean_dec(v_a_2360_);
lean_dec_ref(v_a_2359_);
lean_dec(v_a_2358_);
lean_dec_ref(v_a_2357_);
lean_dec(v_a_2356_);
lean_dec_ref(v_a_2355_);
lean_dec(v_a_2354_);
lean_dec_ref(v_e_2353_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2383_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_));
v___x_2384_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_));
v___x_2385_ = lean_alloc_closure((void*)(l_Nat_reduceShiftRight___boxed), 9, 0);
v___x_2386_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_2383_, v___x_2384_, v___x_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26____boxed(lean_object* v_a_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_();
return v_res_2388_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2389_ = lean_alloc_closure((void*)(l_Nat_reduceShiftRight___boxed), 9, 0);
v___x_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2390_, 0, v___x_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_2392_; uint8_t v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2392_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_));
v___x_2393_ = 1;
v___x_2394_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28_);
v___x_2395_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_2392_, v___x_2393_, v___x_2394_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28____boxed(lean_object* v_a_2396_){
_start:
{
lean_object* v_res_2397_; 
v_res_2397_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28_();
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_2399_; uint8_t v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2399_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_));
v___x_2400_ = 1;
v___x_2401_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28_);
v___x_2402_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_2399_, v___x_2400_, v___x_2401_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_30____boxed(lean_object* v_a_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_30_();
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGcd___redArg(lean_object* v_e_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; uint8_t v___x_2417_; 
v___x_2415_ = ((lean_object*)(l_Nat_reduceGcd___redArg___closed__1));
v___x_2416_ = lean_unsigned_to_nat(2u);
v___x_2417_ = l_Lean_Expr_isAppOfArity(v_e_2409_, v___x_2415_, v___x_2416_);
if (v___x_2417_ == 0)
{
lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2418_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2418_);
return v___x_2419_;
}
else
{
lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
v___x_2420_ = l_Lean_Expr_appFn_x21(v_e_2409_);
v___x_2421_ = l_Lean_Expr_appArg_x21(v___x_2420_);
lean_dec_ref(v___x_2420_);
v___x_2422_ = l_Lean_Meta_getNatValue_x3f(v___x_2421_, v_a_2410_, v_a_2411_, v_a_2412_, v_a_2413_);
lean_dec_ref(v___x_2421_);
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2464_; 
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2464_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2464_ == 0)
{
v___x_2425_ = v___x_2422_;
v_isShared_2426_ = v_isSharedCheck_2464_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2422_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2464_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
if (lean_obj_tag(v_a_2423_) == 1)
{
lean_object* v_val_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; 
lean_del_object(v___x_2425_);
v_val_2427_ = lean_ctor_get(v_a_2423_, 0);
lean_inc(v_val_2427_);
lean_dec_ref_known(v_a_2423_, 1);
v___x_2428_ = l_Lean_Expr_appArg_x21(v_e_2409_);
v___x_2429_ = l_Lean_Meta_getNatValue_x3f(v___x_2428_, v_a_2410_, v_a_2411_, v_a_2412_, v_a_2413_);
lean_dec_ref(v___x_2428_);
if (lean_obj_tag(v___x_2429_) == 0)
{
lean_object* v_a_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2451_; 
v_a_2430_ = lean_ctor_get(v___x_2429_, 0);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2429_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2432_ = v___x_2429_;
v_isShared_2433_ = v_isSharedCheck_2451_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_a_2430_);
lean_dec(v___x_2429_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2451_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
if (lean_obj_tag(v_a_2430_) == 1)
{
lean_object* v_val_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2446_; 
v_val_2434_ = lean_ctor_get(v_a_2430_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v_a_2430_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2436_ = v_a_2430_;
v_isShared_2437_ = v_isSharedCheck_2446_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_val_2434_);
lean_dec(v_a_2430_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2446_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2441_; 
v___x_2438_ = lean_nat_gcd(v_val_2427_, v_val_2434_);
lean_dec(v_val_2434_);
lean_dec(v_val_2427_);
v___x_2439_ = l_Lean_mkNatLit(v___x_2438_);
if (v_isShared_2437_ == 0)
{
lean_ctor_set_tag(v___x_2436_, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2439_);
v___x_2441_ = v___x_2436_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v___x_2439_);
v___x_2441_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
lean_object* v___x_2443_; 
if (v_isShared_2433_ == 0)
{
lean_ctor_set(v___x_2432_, 0, v___x_2441_);
v___x_2443_ = v___x_2432_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v___x_2441_);
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
else
{
lean_object* v___x_2447_; lean_object* v___x_2449_; 
lean_dec(v_a_2430_);
lean_dec(v_val_2427_);
v___x_2447_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2433_ == 0)
{
lean_ctor_set(v___x_2432_, 0, v___x_2447_);
v___x_2449_ = v___x_2432_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v___x_2447_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
}
else
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2459_; 
lean_dec(v_val_2427_);
v_a_2452_ = lean_ctor_get(v___x_2429_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___x_2429_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2454_ = v___x_2429_;
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___x_2429_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2457_; 
if (v_isShared_2455_ == 0)
{
v___x_2457_ = v___x_2454_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_a_2452_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
return v___x_2457_;
}
}
}
}
else
{
lean_object* v___x_2460_; lean_object* v___x_2462_; 
lean_dec(v_a_2423_);
v___x_2460_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2426_ == 0)
{
lean_ctor_set(v___x_2425_, 0, v___x_2460_);
v___x_2462_ = v___x_2425_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v___x_2460_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
}
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2472_; 
v_a_2465_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2467_ = v___x_2422_;
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2422_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2470_; 
if (v_isShared_2468_ == 0)
{
v___x_2470_ = v___x_2467_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_a_2465_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGcd___redArg___boxed(lean_object* v_e_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = l_Nat_reduceGcd___redArg(v_e_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_);
lean_dec(v_a_2477_);
lean_dec_ref(v_a_2476_);
lean_dec(v_a_2475_);
lean_dec_ref(v_a_2474_);
lean_dec_ref(v_e_2473_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGcd(lean_object* v_e_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_){
_start:
{
lean_object* v___x_2489_; 
v___x_2489_ = l_Nat_reduceGcd___redArg(v_e_2480_, v_a_2484_, v_a_2485_, v_a_2486_, v_a_2487_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGcd___boxed(lean_object* v_e_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Nat_reduceGcd(v_e_2490_, v_a_2491_, v_a_2492_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_);
lean_dec(v_a_2497_);
lean_dec_ref(v_a_2496_);
lean_dec(v_a_2495_);
lean_dec_ref(v_a_2494_);
lean_dec(v_a_2493_);
lean_dec_ref(v_a_2492_);
lean_dec(v_a_2491_);
lean_dec_ref(v_e_2490_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_(){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
v___x_2515_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_));
v___x_2516_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_));
v___x_2517_ = lean_alloc_closure((void*)(l_Nat_reduceGcd___boxed), 9, 0);
v___x_2518_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_2515_, v___x_2516_, v___x_2517_);
return v___x_2518_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21____boxed(lean_object* v_a_2519_){
_start:
{
lean_object* v_res_2520_; 
v_res_2520_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_();
return v_res_2520_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23_(void){
_start:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2521_ = lean_alloc_closure((void*)(l_Nat_reduceGcd___boxed), 9, 0);
v___x_2522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2521_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23_(){
_start:
{
lean_object* v___x_2524_; uint8_t v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2524_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_));
v___x_2525_ = 1;
v___x_2526_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23_);
v___x_2527_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_2524_, v___x_2525_, v___x_2526_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23____boxed(lean_object* v_a_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23_();
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_25_(){
_start:
{
lean_object* v___x_2531_; uint8_t v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2531_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_));
v___x_2532_ = 1;
v___x_2533_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23_);
v___x_2534_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_2531_, v___x_2532_, v___x_2533_);
return v___x_2534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_25____boxed(lean_object* v_a_2535_){
_start:
{
lean_object* v_res_2536_; 
v_res_2536_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_25_();
return v_res_2536_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLT___redArg(lean_object* v_e_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; uint8_t v___x_2550_; 
v___x_2548_ = ((lean_object*)(l_Nat_reduceLT___redArg___closed__2));
v___x_2549_ = lean_unsigned_to_nat(4u);
v___x_2550_ = l_Lean_Expr_isAppOfArity(v_e_2542_, v___x_2548_, v___x_2549_);
if (v___x_2550_ == 0)
{
lean_object* v___x_2551_; lean_object* v___x_2552_; 
lean_dec_ref(v_e_2542_);
v___x_2551_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_2552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2551_);
return v___x_2552_;
}
else
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2553_ = l_Lean_Expr_appFn_x21(v_e_2542_);
v___x_2554_ = l_Lean_Expr_appArg_x21(v___x_2553_);
lean_dec_ref(v___x_2553_);
v___x_2555_ = l_Lean_Meta_getNatValue_x3f(v___x_2554_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_);
lean_dec_ref(v___x_2554_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2587_; 
v_a_2556_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2558_ = v___x_2555_;
v_isShared_2559_ = v_isSharedCheck_2587_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v___x_2555_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2587_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
if (lean_obj_tag(v_a_2556_) == 1)
{
lean_object* v_val_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; 
lean_del_object(v___x_2558_);
v_val_2560_ = lean_ctor_get(v_a_2556_, 0);
lean_inc(v_val_2560_);
lean_dec_ref_known(v_a_2556_, 1);
v___x_2561_ = l_Lean_Expr_appArg_x21(v_e_2542_);
v___x_2562_ = l_Lean_Meta_getNatValue_x3f(v___x_2561_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_);
lean_dec_ref(v___x_2561_);
if (lean_obj_tag(v___x_2562_) == 0)
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2574_; 
v_a_2563_ = lean_ctor_get(v___x_2562_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2565_ = v___x_2562_;
v_isShared_2566_ = v_isSharedCheck_2574_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v___x_2562_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2574_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
if (lean_obj_tag(v_a_2563_) == 1)
{
lean_object* v_val_2567_; uint8_t v___x_2568_; lean_object* v___x_2569_; 
lean_del_object(v___x_2565_);
v_val_2567_ = lean_ctor_get(v_a_2563_, 0);
lean_inc(v_val_2567_);
lean_dec_ref_known(v_a_2563_, 1);
v___x_2568_ = lean_nat_dec_lt(v_val_2560_, v_val_2567_);
lean_dec(v_val_2567_);
lean_dec(v_val_2560_);
v___x_2569_ = l_Lean_Meta_Simp_evalPropStep___redArg(v_e_2542_, v___x_2568_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_);
return v___x_2569_;
}
else
{
lean_object* v___x_2570_; lean_object* v___x_2572_; 
lean_dec(v_a_2563_);
lean_dec(v_val_2560_);
lean_dec_ref(v_e_2542_);
v___x_2570_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_2566_ == 0)
{
lean_ctor_set(v___x_2565_, 0, v___x_2570_);
v___x_2572_ = v___x_2565_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v___x_2570_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
lean_dec(v_val_2560_);
lean_dec_ref(v_e_2542_);
v_a_2575_ = lean_ctor_get(v___x_2562_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2577_ = v___x_2562_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___x_2562_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2575_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
else
{
lean_object* v___x_2583_; lean_object* v___x_2585_; 
lean_dec(v_a_2556_);
lean_dec_ref(v_e_2542_);
v___x_2583_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_2559_ == 0)
{
lean_ctor_set(v___x_2558_, 0, v___x_2583_);
v___x_2585_ = v___x_2558_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v___x_2583_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
return v___x_2585_;
}
}
}
}
else
{
lean_object* v_a_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2595_; 
lean_dec_ref(v_e_2542_);
v_a_2588_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2590_ = v___x_2555_;
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_a_2588_);
lean_dec(v___x_2555_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v___x_2593_; 
if (v_isShared_2591_ == 0)
{
v___x_2593_ = v___x_2590_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v_a_2588_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLT___redArg___boxed(lean_object* v_e_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_){
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l_Nat_reduceLT___redArg(v_e_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_);
lean_dec(v_a_2600_);
lean_dec_ref(v_a_2599_);
lean_dec(v_a_2598_);
lean_dec_ref(v_a_2597_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLT(lean_object* v_e_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_){
_start:
{
lean_object* v___x_2612_; 
v___x_2612_ = l_Nat_reduceLT___redArg(v_e_2603_, v_a_2607_, v_a_2608_, v_a_2609_, v_a_2610_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLT___boxed(lean_object* v_e_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Nat_reduceLT(v_e_2613_, v_a_2614_, v_a_2615_, v_a_2616_, v_a_2617_, v_a_2618_, v_a_2619_, v_a_2620_);
lean_dec(v_a_2620_);
lean_dec_ref(v_a_2619_);
lean_dec(v_a_2618_);
lean_dec_ref(v_a_2617_);
lean_dec(v_a_2616_);
lean_dec_ref(v_a_2615_);
lean_dec(v_a_2614_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2641_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_));
v___x_2642_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_));
v___x_2643_ = lean_alloc_closure((void*)(l_Nat_reduceLT___boxed), 9, 0);
v___x_2644_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_2641_, v___x_2642_, v___x_2643_);
return v___x_2644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27____boxed(lean_object* v_a_2645_){
_start:
{
lean_object* v_res_2646_; 
v_res_2646_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_();
return v_res_2646_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_2647_; lean_object* v___x_2648_; 
v___x_2647_ = lean_alloc_closure((void*)(l_Nat_reduceLT___boxed), 9, 0);
v___x_2648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2647_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_2650_; uint8_t v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2650_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_));
v___x_2651_ = 1;
v___x_2652_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29_);
v___x_2653_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_2650_, v___x_2651_, v___x_2652_);
return v___x_2653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29____boxed(lean_object* v_a_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29_();
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_2657_; uint8_t v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2657_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_));
v___x_2658_ = 1;
v___x_2659_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29_);
v___x_2660_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_2657_, v___x_2658_, v___x_2659_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_31____boxed(lean_object* v_a_2661_){
_start:
{
lean_object* v_res_2662_; 
v_res_2662_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_31_();
return v_res_2662_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGT___redArg(lean_object* v_e_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_){
_start:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; uint8_t v___x_2676_; 
v___x_2674_ = ((lean_object*)(l_Nat_reduceGT___redArg___closed__2));
v___x_2675_ = lean_unsigned_to_nat(4u);
v___x_2676_ = l_Lean_Expr_isAppOfArity(v_e_2668_, v___x_2674_, v___x_2675_);
if (v___x_2676_ == 0)
{
lean_object* v___x_2677_; lean_object* v___x_2678_; 
lean_dec_ref(v_e_2668_);
v___x_2677_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2677_);
return v___x_2678_;
}
else
{
lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2679_ = l_Lean_Expr_appFn_x21(v_e_2668_);
v___x_2680_ = l_Lean_Expr_appArg_x21(v___x_2679_);
lean_dec_ref(v___x_2679_);
v___x_2681_ = l_Lean_Meta_getNatValue_x3f(v___x_2680_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_);
lean_dec_ref(v___x_2680_);
if (lean_obj_tag(v___x_2681_) == 0)
{
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2713_; 
v_a_2682_ = lean_ctor_get(v___x_2681_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2681_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2684_ = v___x_2681_;
v_isShared_2685_ = v_isSharedCheck_2713_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v___x_2681_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2713_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
if (lean_obj_tag(v_a_2682_) == 1)
{
lean_object* v_val_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
lean_del_object(v___x_2684_);
v_val_2686_ = lean_ctor_get(v_a_2682_, 0);
lean_inc(v_val_2686_);
lean_dec_ref_known(v_a_2682_, 1);
v___x_2687_ = l_Lean_Expr_appArg_x21(v_e_2668_);
v___x_2688_ = l_Lean_Meta_getNatValue_x3f(v___x_2687_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_);
lean_dec_ref(v___x_2687_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2700_; 
v_a_2689_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2691_ = v___x_2688_;
v_isShared_2692_ = v_isSharedCheck_2700_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2688_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2700_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
if (lean_obj_tag(v_a_2689_) == 1)
{
lean_object* v_val_2693_; uint8_t v___x_2694_; lean_object* v___x_2695_; 
lean_del_object(v___x_2691_);
v_val_2693_ = lean_ctor_get(v_a_2689_, 0);
lean_inc(v_val_2693_);
lean_dec_ref_known(v_a_2689_, 1);
v___x_2694_ = lean_nat_dec_lt(v_val_2693_, v_val_2686_);
lean_dec(v_val_2686_);
lean_dec(v_val_2693_);
v___x_2695_ = l_Lean_Meta_Simp_evalPropStep___redArg(v_e_2668_, v___x_2694_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_);
return v___x_2695_;
}
else
{
lean_object* v___x_2696_; lean_object* v___x_2698_; 
lean_dec(v_a_2689_);
lean_dec(v_val_2686_);
lean_dec_ref(v_e_2668_);
v___x_2696_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_2692_ == 0)
{
lean_ctor_set(v___x_2691_, 0, v___x_2696_);
v___x_2698_ = v___x_2691_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2696_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
}
else
{
lean_object* v_a_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2708_; 
lean_dec(v_val_2686_);
lean_dec_ref(v_e_2668_);
v_a_2701_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2703_ = v___x_2688_;
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_a_2701_);
lean_dec(v___x_2688_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2706_; 
if (v_isShared_2704_ == 0)
{
v___x_2706_ = v___x_2703_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v_a_2701_);
v___x_2706_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
return v___x_2706_;
}
}
}
}
else
{
lean_object* v___x_2709_; lean_object* v___x_2711_; 
lean_dec(v_a_2682_);
lean_dec_ref(v_e_2668_);
v___x_2709_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_2685_ == 0)
{
lean_ctor_set(v___x_2684_, 0, v___x_2709_);
v___x_2711_ = v___x_2684_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v___x_2709_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
return v___x_2711_;
}
}
}
}
else
{
lean_object* v_a_2714_; lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2721_; 
lean_dec_ref(v_e_2668_);
v_a_2714_ = lean_ctor_get(v___x_2681_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2681_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2716_ = v___x_2681_;
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
else
{
lean_inc(v_a_2714_);
lean_dec(v___x_2681_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
lean_object* v___x_2719_; 
if (v_isShared_2717_ == 0)
{
v___x_2719_ = v___x_2716_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_a_2714_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGT___redArg___boxed(lean_object* v_e_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l_Nat_reduceGT___redArg(v_e_2722_, v_a_2723_, v_a_2724_, v_a_2725_, v_a_2726_);
lean_dec(v_a_2726_);
lean_dec_ref(v_a_2725_);
lean_dec(v_a_2724_);
lean_dec_ref(v_a_2723_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGT(lean_object* v_e_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_){
_start:
{
lean_object* v___x_2738_; 
v___x_2738_ = l_Nat_reduceGT___redArg(v_e_2729_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGT___boxed(lean_object* v_e_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_, lean_object* v_a_2742_, lean_object* v_a_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_){
_start:
{
lean_object* v_res_2748_; 
v_res_2748_ = l_Nat_reduceGT(v_e_2739_, v_a_2740_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_);
lean_dec(v_a_2746_);
lean_dec_ref(v_a_2745_);
lean_dec(v_a_2744_);
lean_dec_ref(v_a_2743_);
lean_dec(v_a_2742_);
lean_dec_ref(v_a_2741_);
lean_dec(v_a_2740_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2754_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27_));
v___x_2755_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_));
v___x_2756_ = lean_alloc_closure((void*)(l_Nat_reduceGT___boxed), 9, 0);
v___x_2757_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_2754_, v___x_2755_, v___x_2756_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27____boxed(lean_object* v_a_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27_();
return v_res_2759_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2760_ = lean_alloc_closure((void*)(l_Nat_reduceGT___boxed), 9, 0);
v___x_2761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2760_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_2763_; uint8_t v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
v___x_2763_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27_));
v___x_2764_ = 1;
v___x_2765_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29_);
v___x_2766_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_2763_, v___x_2764_, v___x_2765_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29____boxed(lean_object* v_a_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29_();
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_2770_; uint8_t v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2770_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27_));
v___x_2771_ = 1;
v___x_2772_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29_);
v___x_2773_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_2770_, v___x_2771_, v___x_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_31____boxed(lean_object* v_a_2774_){
_start:
{
lean_object* v_res_2775_; 
v_res_2775_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_31_();
return v_res_2775_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBEq___redArg(lean_object* v_e_2781_, lean_object* v_a_2782_, lean_object* v_a_2783_, lean_object* v_a_2784_, lean_object* v_a_2785_){
_start:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; uint8_t v___x_2789_; 
v___x_2787_ = ((lean_object*)(l_Nat_reduceBEq___redArg___closed__2));
v___x_2788_ = lean_unsigned_to_nat(4u);
v___x_2789_ = l_Lean_Expr_isAppOfArity(v_e_2781_, v___x_2787_, v___x_2788_);
if (v___x_2789_ == 0)
{
lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2790_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
return v___x_2791_;
}
else
{
lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___x_2792_ = l_Lean_Expr_appFn_x21(v_e_2781_);
v___x_2793_ = l_Lean_Expr_appArg_x21(v___x_2792_);
lean_dec_ref(v___x_2792_);
v___x_2794_ = l_Lean_Meta_getNatValue_x3f(v___x_2793_, v_a_2782_, v_a_2783_, v_a_2784_, v_a_2785_);
lean_dec_ref(v___x_2793_);
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2839_; 
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2797_ = v___x_2794_;
v_isShared_2798_ = v_isSharedCheck_2839_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2794_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2839_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
if (lean_obj_tag(v_a_2795_) == 1)
{
lean_object* v_val_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2834_; 
v_val_2799_ = lean_ctor_get(v_a_2795_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v_a_2795_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2801_ = v_a_2795_;
v_isShared_2802_ = v_isSharedCheck_2834_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_val_2799_);
lean_dec(v_a_2795_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2834_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2803_ = l_Lean_Expr_appArg_x21(v_e_2781_);
v___x_2804_ = l_Lean_Meta_getNatValue_x3f(v___x_2803_, v_a_2782_, v_a_2783_, v_a_2784_, v_a_2785_);
lean_dec_ref(v___x_2803_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v_a_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2825_; 
v_a_2805_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2807_ = v___x_2804_;
v_isShared_2808_ = v_isSharedCheck_2825_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_a_2805_);
lean_dec(v___x_2804_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2825_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___y_2810_; 
if (lean_obj_tag(v_a_2805_) == 1)
{
lean_object* v_val_2817_; uint8_t v___x_2818_; 
lean_del_object(v___x_2797_);
v_val_2817_ = lean_ctor_get(v_a_2805_, 0);
lean_inc(v_val_2817_);
lean_dec_ref_known(v_a_2805_, 1);
v___x_2818_ = lean_nat_dec_eq(v_val_2799_, v_val_2817_);
lean_dec(v_val_2817_);
lean_dec(v_val_2799_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; 
v___x_2819_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3);
v___y_2810_ = v___x_2819_;
goto v___jp_2809_;
}
else
{
lean_object* v___x_2820_; 
v___x_2820_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6);
v___y_2810_ = v___x_2820_;
goto v___jp_2809_;
}
}
else
{
lean_object* v___x_2821_; lean_object* v___x_2823_; 
lean_del_object(v___x_2807_);
lean_dec(v_a_2805_);
lean_del_object(v___x_2801_);
lean_dec(v_val_2799_);
v___x_2821_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v___x_2821_);
v___x_2823_ = v___x_2797_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v___x_2821_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
v___jp_2809_:
{
lean_object* v___x_2812_; 
lean_inc_ref(v___y_2810_);
if (v_isShared_2802_ == 0)
{
lean_ctor_set_tag(v___x_2801_, 0);
lean_ctor_set(v___x_2801_, 0, v___y_2810_);
v___x_2812_ = v___x_2801_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v___y_2810_);
v___x_2812_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
lean_object* v___x_2814_; 
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 0, v___x_2812_);
v___x_2814_ = v___x_2807_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2812_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
}
}
else
{
lean_object* v_a_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2833_; 
lean_del_object(v___x_2801_);
lean_dec(v_val_2799_);
lean_del_object(v___x_2797_);
v_a_2826_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2833_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2833_ == 0)
{
v___x_2828_ = v___x_2804_;
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_a_2826_);
lean_dec(v___x_2804_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2831_; 
if (v_isShared_2829_ == 0)
{
v___x_2831_ = v___x_2828_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_a_2826_);
v___x_2831_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
return v___x_2831_;
}
}
}
}
}
else
{
lean_object* v___x_2835_; lean_object* v___x_2837_; 
lean_dec(v_a_2795_);
v___x_2835_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v___x_2835_);
v___x_2837_ = v___x_2797_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v___x_2835_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
}
else
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2847_; 
v_a_2840_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2842_ = v___x_2794_;
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v___x_2794_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_a_2840_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBEq___redArg___boxed(lean_object* v_e_2848_, lean_object* v_a_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = l_Nat_reduceBEq___redArg(v_e_2848_, v_a_2849_, v_a_2850_, v_a_2851_, v_a_2852_);
lean_dec(v_a_2852_);
lean_dec_ref(v_a_2851_);
lean_dec(v_a_2850_);
lean_dec_ref(v_a_2849_);
lean_dec_ref(v_e_2848_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBEq(lean_object* v_e_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_){
_start:
{
lean_object* v___x_2864_; 
v___x_2864_ = l_Nat_reduceBEq___redArg(v_e_2855_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_);
return v___x_2864_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBEq___boxed(lean_object* v_e_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_){
_start:
{
lean_object* v_res_2874_; 
v_res_2874_ = l_Nat_reduceBEq(v_e_2865_, v_a_2866_, v_a_2867_, v_a_2868_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
lean_dec(v_a_2872_);
lean_dec_ref(v_a_2871_);
lean_dec(v_a_2870_);
lean_dec_ref(v_a_2869_);
lean_dec(v_a_2868_);
lean_dec_ref(v_a_2867_);
lean_dec(v_a_2866_);
lean_dec_ref(v_e_2865_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2893_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_));
v___x_2894_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_));
v___x_2895_ = lean_alloc_closure((void*)(l_Nat_reduceBEq___boxed), 9, 0);
v___x_2896_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_2893_, v___x_2894_, v___x_2895_);
return v___x_2896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27____boxed(lean_object* v_a_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_();
return v_res_2898_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2899_ = lean_alloc_closure((void*)(l_Nat_reduceBEq___boxed), 9, 0);
v___x_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2899_);
return v___x_2900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_2902_; uint8_t v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2902_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_));
v___x_2903_ = 1;
v___x_2904_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29_);
v___x_2905_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_2902_, v___x_2903_, v___x_2904_);
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29____boxed(lean_object* v_a_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29_();
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_2909_; uint8_t v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2909_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_));
v___x_2910_ = 1;
v___x_2911_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29_);
v___x_2912_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_2909_, v___x_2910_, v___x_2911_);
return v___x_2912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_31____boxed(lean_object* v_a_2913_){
_start:
{
lean_object* v_res_2914_; 
v_res_2914_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_31_();
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBNe___redArg(lean_object* v_e_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_){
_start:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; uint8_t v___x_2926_; 
v___x_2924_ = ((lean_object*)(l_Nat_reduceBNe___redArg___closed__1));
v___x_2925_ = lean_unsigned_to_nat(4u);
v___x_2926_ = l_Lean_Expr_isAppOfArity(v_e_2918_, v___x_2924_, v___x_2925_);
if (v___x_2926_ == 0)
{
lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2927_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_2928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2927_);
return v___x_2928_;
}
else
{
lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; 
v___x_2929_ = l_Lean_Expr_appFn_x21(v_e_2918_);
v___x_2930_ = l_Lean_Expr_appArg_x21(v___x_2929_);
lean_dec_ref(v___x_2929_);
v___x_2931_ = l_Lean_Meta_getNatValue_x3f(v___x_2930_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_);
lean_dec_ref(v___x_2930_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2977_; 
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_2977_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2934_ = v___x_2931_;
v_isShared_2935_ = v_isSharedCheck_2977_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2931_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2977_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
if (lean_obj_tag(v_a_2932_) == 1)
{
lean_object* v_val_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2972_; 
v_val_2936_ = lean_ctor_get(v_a_2932_, 0);
v_isSharedCheck_2972_ = !lean_is_exclusive(v_a_2932_);
if (v_isSharedCheck_2972_ == 0)
{
v___x_2938_ = v_a_2932_;
v_isShared_2939_ = v_isSharedCheck_2972_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_val_2936_);
lean_dec(v_a_2932_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2972_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2940_ = l_Lean_Expr_appArg_x21(v_e_2918_);
v___x_2941_ = l_Lean_Meta_getNatValue_x3f(v___x_2940_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_);
lean_dec_ref(v___x_2940_);
if (lean_obj_tag(v___x_2941_) == 0)
{
lean_object* v_a_2942_; lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2963_; 
v_a_2942_ = lean_ctor_get(v___x_2941_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v___x_2941_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2944_ = v___x_2941_;
v_isShared_2945_ = v_isSharedCheck_2963_;
goto v_resetjp_2943_;
}
else
{
lean_inc(v_a_2942_);
lean_dec(v___x_2941_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2963_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v___y_2947_; 
if (lean_obj_tag(v_a_2942_) == 1)
{
lean_object* v_val_2956_; uint8_t v___x_2957_; 
lean_del_object(v___x_2934_);
v_val_2956_ = lean_ctor_get(v_a_2942_, 0);
lean_inc(v_val_2956_);
lean_dec_ref_known(v_a_2942_, 1);
v___x_2957_ = lean_nat_dec_eq(v_val_2936_, v_val_2956_);
lean_dec(v_val_2956_);
lean_dec(v_val_2936_);
if (v___x_2957_ == 0)
{
if (v___x_2926_ == 0)
{
goto v___jp_2954_;
}
else
{
lean_object* v___x_2958_; 
v___x_2958_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6);
v___y_2947_ = v___x_2958_;
goto v___jp_2946_;
}
}
else
{
goto v___jp_2954_;
}
}
else
{
lean_object* v___x_2959_; lean_object* v___x_2961_; 
lean_del_object(v___x_2944_);
lean_dec(v_a_2942_);
lean_del_object(v___x_2938_);
lean_dec(v_val_2936_);
v___x_2959_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 0, v___x_2959_);
v___x_2961_ = v___x_2934_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v___x_2959_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
v___jp_2946_:
{
lean_object* v___x_2949_; 
lean_inc_ref(v___y_2947_);
if (v_isShared_2939_ == 0)
{
lean_ctor_set_tag(v___x_2938_, 0);
lean_ctor_set(v___x_2938_, 0, v___y_2947_);
v___x_2949_ = v___x_2938_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v___y_2947_);
v___x_2949_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
lean_object* v___x_2951_; 
if (v_isShared_2945_ == 0)
{
lean_ctor_set(v___x_2944_, 0, v___x_2949_);
v___x_2951_ = v___x_2944_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v___x_2949_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
return v___x_2951_;
}
}
}
v___jp_2954_:
{
lean_object* v___x_2955_; 
v___x_2955_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3);
v___y_2947_ = v___x_2955_;
goto v___jp_2946_;
}
}
}
else
{
lean_object* v_a_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2971_; 
lean_del_object(v___x_2938_);
lean_dec(v_val_2936_);
lean_del_object(v___x_2934_);
v_a_2964_ = lean_ctor_get(v___x_2941_, 0);
v_isSharedCheck_2971_ = !lean_is_exclusive(v___x_2941_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2966_ = v___x_2941_;
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_a_2964_);
lean_dec(v___x_2941_);
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
else
{
lean_object* v___x_2973_; lean_object* v___x_2975_; 
lean_dec(v_a_2932_);
v___x_2973_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 0, v___x_2973_);
v___x_2975_ = v___x_2934_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v___x_2973_);
v___x_2975_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
return v___x_2975_;
}
}
}
}
else
{
lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2985_; 
v_a_2978_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_2985_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2980_ = v___x_2931_;
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v___x_2931_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_a_2978_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
return v___x_2983_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBNe___redArg___boxed(lean_object* v_e_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_){
_start:
{
lean_object* v_res_2992_; 
v_res_2992_ = l_Nat_reduceBNe___redArg(v_e_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_);
lean_dec(v_a_2990_);
lean_dec_ref(v_a_2989_);
lean_dec(v_a_2988_);
lean_dec_ref(v_a_2987_);
lean_dec_ref(v_e_2986_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBNe(lean_object* v_e_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_){
_start:
{
lean_object* v___x_3002_; 
v___x_3002_ = l_Nat_reduceBNe___redArg(v_e_2993_, v_a_2997_, v_a_2998_, v_a_2999_, v_a_3000_);
return v___x_3002_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBNe___boxed(lean_object* v_e_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = l_Nat_reduceBNe(v_e_3003_, v_a_3004_, v_a_3005_, v_a_3006_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_);
lean_dec(v_a_3010_);
lean_dec_ref(v_a_3009_);
lean_dec(v_a_3008_);
lean_dec_ref(v_a_3007_);
lean_dec(v_a_3006_);
lean_dec_ref(v_a_3005_);
lean_dec(v_a_3004_);
lean_dec_ref(v_e_3003_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3031_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_));
v___x_3032_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_));
v___x_3033_ = lean_alloc_closure((void*)(l_Nat_reduceBNe___boxed), 9, 0);
v___x_3034_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_3031_, v___x_3032_, v___x_3033_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27____boxed(lean_object* v_a_3035_){
_start:
{
lean_object* v_res_3036_; 
v_res_3036_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_();
return v_res_3036_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3037_ = lean_alloc_closure((void*)(l_Nat_reduceBNe___boxed), 9, 0);
v___x_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3037_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_3040_; uint8_t v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; 
v___x_3040_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_));
v___x_3041_ = 1;
v___x_3042_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29_);
v___x_3043_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_3040_, v___x_3041_, v___x_3042_);
return v___x_3043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29____boxed(lean_object* v_a_3044_){
_start:
{
lean_object* v_res_3045_; 
v_res_3045_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29_();
return v_res_3045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_3047_; uint8_t v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3047_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_));
v___x_3048_ = 1;
v___x_3049_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29_);
v___x_3050_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_3047_, v___x_3048_, v___x_3049_);
return v___x_3050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_31____boxed(lean_object* v_a_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_31_();
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l_Nat_isValue___redArg(lean_object* v_e_3058_, lean_object* v_a_3059_){
_start:
{
lean_object* v___x_3064_; 
lean_inc_ref(v_e_3058_);
v___x_3064_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3058_, v_a_3059_);
if (lean_obj_tag(v___x_3064_) == 0)
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3082_; 
v_a_3065_ = lean_ctor_get(v___x_3064_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3067_ = v___x_3064_;
v_isShared_3068_ = v_isSharedCheck_3082_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_3064_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3082_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3069_; uint8_t v___x_3070_; 
v___x_3069_ = l_Lean_Expr_cleanupAnnotations(v_a_3065_);
v___x_3070_ = l_Lean_Expr_isApp(v___x_3069_);
if (v___x_3070_ == 0)
{
lean_dec_ref(v___x_3069_);
lean_del_object(v___x_3067_);
lean_dec_ref(v_e_3058_);
goto v___jp_3061_;
}
else
{
lean_object* v___x_3071_; uint8_t v___x_3072_; 
v___x_3071_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3069_);
v___x_3072_ = l_Lean_Expr_isApp(v___x_3071_);
if (v___x_3072_ == 0)
{
lean_dec_ref(v___x_3071_);
lean_del_object(v___x_3067_);
lean_dec_ref(v_e_3058_);
goto v___jp_3061_;
}
else
{
lean_object* v___x_3073_; uint8_t v___x_3074_; 
v___x_3073_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3071_);
v___x_3074_ = l_Lean_Expr_isApp(v___x_3073_);
if (v___x_3074_ == 0)
{
lean_dec_ref(v___x_3073_);
lean_del_object(v___x_3067_);
lean_dec_ref(v_e_3058_);
goto v___jp_3061_;
}
else
{
lean_object* v___x_3075_; lean_object* v___x_3076_; uint8_t v___x_3077_; 
v___x_3075_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3073_);
v___x_3076_ = ((lean_object*)(l_Nat_isValue___redArg___closed__2));
v___x_3077_ = l_Lean_Expr_isConstOf(v___x_3075_, v___x_3076_);
lean_dec_ref(v___x_3075_);
if (v___x_3077_ == 0)
{
lean_del_object(v___x_3067_);
lean_dec_ref(v_e_3058_);
goto v___jp_3061_;
}
else
{
lean_object* v___x_3078_; lean_object* v___x_3080_; 
v___x_3078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3078_, 0, v_e_3058_);
if (v_isShared_3068_ == 0)
{
lean_ctor_set(v___x_3067_, 0, v___x_3078_);
v___x_3080_ = v___x_3067_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_3078_);
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
lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3090_; 
lean_dec_ref(v_e_3058_);
v_a_3083_ = lean_ctor_get(v___x_3064_, 0);
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_3085_ = v___x_3064_;
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_3064_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3088_; 
if (v_isShared_3086_ == 0)
{
v___x_3088_ = v___x_3085_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3083_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
v___jp_3061_:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3062_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceUnary___redArg___closed__0));
v___x_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3062_);
return v___x_3063_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_isValue___redArg___boxed(lean_object* v_e_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_){
_start:
{
lean_object* v_res_3094_; 
v_res_3094_ = l_Nat_isValue___redArg(v_e_3091_, v_a_3092_);
lean_dec(v_a_3092_);
return v_res_3094_;
}
}
LEAN_EXPORT lean_object* l_Nat_isValue(lean_object* v_e_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_){
_start:
{
lean_object* v___x_3104_; 
v___x_3104_ = l_Nat_isValue___redArg(v_e_3095_, v_a_3100_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Nat_isValue___boxed(lean_object* v_e_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_, lean_object* v_a_3109_, lean_object* v_a_3110_, lean_object* v_a_3111_, lean_object* v_a_3112_, lean_object* v_a_3113_){
_start:
{
lean_object* v_res_3114_; 
v_res_3114_ = l_Nat_isValue(v_e_3105_, v_a_3106_, v_a_3107_, v_a_3108_, v_a_3109_, v_a_3110_, v_a_3111_, v_a_3112_);
lean_dec(v_a_3112_);
lean_dec_ref(v_a_3111_);
lean_dec(v_a_3110_);
lean_dec_ref(v_a_3109_);
lean_dec(v_a_3108_);
lean_dec_ref(v_a_3107_);
lean_dec(v_a_3106_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23_(){
_start:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3132_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23_));
v___x_3133_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23_));
v___x_3134_ = lean_alloc_closure((void*)(l_Nat_isValue___boxed), 9, 0);
v___x_3135_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_3132_, v___x_3133_, v___x_3134_);
return v___x_3135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23____boxed(lean_object* v_a_3136_){
_start:
{
lean_object* v_res_3137_; 
v_res_3137_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23_();
return v_res_3137_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25_(void){
_start:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3138_ = lean_alloc_closure((void*)(l_Nat_isValue___boxed), 9, 0);
v___x_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3138_);
return v___x_3139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25_(){
_start:
{
lean_object* v___x_3141_; uint8_t v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3141_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23_));
v___x_3142_ = 1;
v___x_3143_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25_);
v___x_3144_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_3141_, v___x_3142_, v___x_3143_);
return v___x_3144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25____boxed(lean_object* v_a_3145_){
_start:
{
lean_object* v_res_3146_; 
v_res_3146_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25_();
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorIdx(lean_object* v_x_3147_){
_start:
{
if (lean_obj_tag(v_x_3147_) == 0)
{
lean_object* v___x_3148_; 
v___x_3148_ = lean_unsigned_to_nat(0u);
return v___x_3148_;
}
else
{
lean_object* v___x_3149_; 
v___x_3149_ = lean_unsigned_to_nat(1u);
return v___x_3149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorIdx___boxed(lean_object* v_x_3150_){
_start:
{
lean_object* v_res_3151_; 
v_res_3151_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorIdx(v_x_3150_);
lean_dec_ref(v_x_3150_);
return v_res_3151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim___redArg(lean_object* v_t_3152_, lean_object* v_k_3153_){
_start:
{
if (lean_obj_tag(v_t_3152_) == 0)
{
lean_object* v_n_3154_; lean_object* v___x_3155_; 
v_n_3154_ = lean_ctor_get(v_t_3152_, 0);
lean_inc(v_n_3154_);
lean_dec_ref_known(v_t_3152_, 1);
v___x_3155_ = lean_apply_1(v_k_3153_, v_n_3154_);
return v___x_3155_;
}
else
{
lean_object* v_e_3156_; lean_object* v_o_3157_; lean_object* v_n_3158_; lean_object* v___x_3159_; 
v_e_3156_ = lean_ctor_get(v_t_3152_, 0);
lean_inc_ref(v_e_3156_);
v_o_3157_ = lean_ctor_get(v_t_3152_, 1);
lean_inc_ref(v_o_3157_);
v_n_3158_ = lean_ctor_get(v_t_3152_, 2);
lean_inc(v_n_3158_);
lean_dec_ref_known(v_t_3152_, 3);
v___x_3159_ = lean_apply_3(v_k_3153_, v_e_3156_, v_o_3157_, v_n_3158_);
return v___x_3159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim(lean_object* v_motive_3160_, lean_object* v_ctorIdx_3161_, lean_object* v_t_3162_, lean_object* v_h_3163_, lean_object* v_k_3164_){
_start:
{
lean_object* v___x_3165_; 
v___x_3165_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim___redArg(v_t_3162_, v_k_3164_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim___boxed(lean_object* v_motive_3166_, lean_object* v_ctorIdx_3167_, lean_object* v_t_3168_, lean_object* v_h_3169_, lean_object* v_k_3170_){
_start:
{
lean_object* v_res_3171_; 
v_res_3171_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim(v_motive_3166_, v_ctorIdx_3167_, v_t_3168_, v_h_3169_, v_k_3170_);
lean_dec(v_ctorIdx_3167_);
return v_res_3171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_const_elim___redArg(lean_object* v_t_3172_, lean_object* v_const_3173_){
_start:
{
lean_object* v___x_3174_; 
v___x_3174_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim___redArg(v_t_3172_, v_const_3173_);
return v___x_3174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_const_elim(lean_object* v_motive_3175_, lean_object* v_t_3176_, lean_object* v_h_3177_, lean_object* v_const_3178_){
_start:
{
lean_object* v___x_3179_; 
v___x_3179_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim___redArg(v_t_3176_, v_const_3178_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_offset_elim___redArg(lean_object* v_t_3180_, lean_object* v_offset_3181_){
_start:
{
lean_object* v___x_3182_; 
v___x_3182_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim___redArg(v_t_3180_, v_offset_3181_);
return v___x_3182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_offset_elim(lean_object* v_motive_3183_, lean_object* v_t_3184_, lean_object* v_h_3185_, lean_object* v_offset_3186_){
_start:
{
lean_object* v___x_3187_; 
v___x_3187_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_ctorElim___redArg(v_t_3184_, v_offset_3186_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg(lean_object* v_e_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_){
_start:
{
lean_object* v___x_3202_; lean_object* v___x_3203_; uint8_t v___x_3204_; 
v___x_3202_ = ((lean_object*)(l_Nat_reduceAdd___redArg___closed__2));
v___x_3203_ = lean_unsigned_to_nat(6u);
v___x_3204_ = l_Lean_Expr_isAppOfArity(v_e_3196_, v___x_3202_, v___x_3203_);
if (v___x_3204_ == 0)
{
lean_object* v___x_3205_; lean_object* v___x_3206_; uint8_t v___x_3207_; 
v___x_3205_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__2));
v___x_3206_ = lean_unsigned_to_nat(4u);
v___x_3207_ = l_Lean_Expr_isAppOfArity(v_e_3196_, v___x_3205_, v___x_3206_);
if (v___x_3207_ == 0)
{
lean_object* v___x_3208_; lean_object* v___x_3209_; uint8_t v___x_3210_; 
v___x_3208_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___closed__3));
v___x_3209_ = lean_unsigned_to_nat(2u);
v___x_3210_ = l_Lean_Expr_isAppOfArity(v_e_3196_, v___x_3208_, v___x_3209_);
if (v___x_3210_ == 0)
{
lean_object* v___x_3211_; lean_object* v___x_3212_; uint8_t v___x_3213_; 
v___x_3211_ = ((lean_object*)(l_Nat_reduceSucc___redArg___closed__2));
v___x_3212_ = lean_unsigned_to_nat(1u);
v___x_3213_ = l_Lean_Expr_isAppOfArity(v_e_3196_, v___x_3211_, v___x_3212_);
if (v___x_3213_ == 0)
{
lean_object* v___x_3214_; lean_object* v___x_3215_; 
v___x_3214_ = lean_box(0);
v___x_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3214_);
return v___x_3215_;
}
else
{
lean_object* v_b_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v_b_3216_ = l_Lean_Expr_appArg_x21(v_e_3196_);
v___x_3217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3217_, 0, v_b_3216_);
lean_ctor_set(v___x_3217_, 1, v___x_3212_);
v___x_3218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3218_, 0, v___x_3217_);
v___x_3219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3218_);
return v___x_3219_;
}
}
else
{
lean_object* v___x_3220_; lean_object* v_b_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3220_ = l_Lean_Expr_appFn_x21(v_e_3196_);
v_b_3221_ = l_Lean_Expr_appArg_x21(v___x_3220_);
lean_dec_ref(v___x_3220_);
v___x_3222_ = l_Lean_Expr_appArg_x21(v_e_3196_);
v___x_3223_ = l_Lean_Meta_getNatValue_x3f(v___x_3222_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_);
lean_dec_ref(v___x_3222_);
if (lean_obj_tag(v___x_3223_) == 0)
{
lean_object* v_a_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3244_; 
v_a_3224_ = lean_ctor_get(v___x_3223_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3223_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3226_ = v___x_3223_;
v_isShared_3227_ = v_isSharedCheck_3244_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_a_3224_);
lean_dec(v___x_3223_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3244_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
if (lean_obj_tag(v_a_3224_) == 1)
{
lean_object* v_val_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3239_; 
v_val_3228_ = lean_ctor_get(v_a_3224_, 0);
v_isSharedCheck_3239_ = !lean_is_exclusive(v_a_3224_);
if (v_isSharedCheck_3239_ == 0)
{
v___x_3230_ = v_a_3224_;
v_isShared_3231_ = v_isSharedCheck_3239_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_val_3228_);
lean_dec(v_a_3224_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3239_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3232_; lean_object* v___x_3234_; 
v___x_3232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3232_, 0, v_b_3221_);
lean_ctor_set(v___x_3232_, 1, v_val_3228_);
if (v_isShared_3231_ == 0)
{
lean_ctor_set(v___x_3230_, 0, v___x_3232_);
v___x_3234_ = v___x_3230_;
goto v_reusejp_3233_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v___x_3232_);
v___x_3234_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3233_;
}
v_reusejp_3233_:
{
lean_object* v___x_3236_; 
if (v_isShared_3227_ == 0)
{
lean_ctor_set(v___x_3226_, 0, v___x_3234_);
v___x_3236_ = v___x_3226_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v___x_3234_);
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
else
{
lean_object* v___x_3240_; lean_object* v___x_3242_; 
lean_dec(v_a_3224_);
lean_dec_ref(v_b_3221_);
v___x_3240_ = lean_box(0);
if (v_isShared_3227_ == 0)
{
lean_ctor_set(v___x_3226_, 0, v___x_3240_);
v___x_3242_ = v___x_3226_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v___x_3240_);
v___x_3242_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
return v___x_3242_;
}
}
}
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
lean_dec_ref(v_b_3221_);
v_a_3245_ = lean_ctor_get(v___x_3223_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3223_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3223_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3223_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
}
else
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v_inst_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; 
v___x_3253_ = l_Lean_Expr_appFn_x21(v_e_3196_);
v___x_3254_ = l_Lean_Expr_appFn_x21(v___x_3253_);
v_inst_3255_ = l_Lean_Expr_appArg_x21(v___x_3254_);
lean_dec_ref(v___x_3254_);
v___x_3256_ = l_Lean_Nat_mkInstAdd;
v___x_3257_ = l_Lean_Meta_matchesInstance(v_inst_3255_, v___x_3256_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_);
if (lean_obj_tag(v___x_3257_) == 0)
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3299_; 
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3299_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3299_ == 0)
{
v___x_3260_ = v___x_3257_;
v_isShared_3261_ = v_isSharedCheck_3299_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3257_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3299_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
uint8_t v___x_3262_; 
v___x_3262_ = lean_unbox(v_a_3258_);
lean_dec(v_a_3258_);
if (v___x_3262_ == 0)
{
lean_object* v___x_3263_; lean_object* v___x_3265_; 
lean_dec_ref(v___x_3253_);
v___x_3263_ = lean_box(0);
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 0, v___x_3263_);
v___x_3265_ = v___x_3260_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v___x_3263_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
else
{
lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; 
lean_del_object(v___x_3260_);
v___x_3267_ = l_Lean_Expr_appArg_x21(v___x_3253_);
lean_dec_ref(v___x_3253_);
v___x_3268_ = l_Lean_Expr_appArg_x21(v_e_3196_);
v___x_3269_ = l_Lean_Meta_getNatValue_x3f(v___x_3268_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_);
lean_dec_ref(v___x_3268_);
if (lean_obj_tag(v___x_3269_) == 0)
{
lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3290_; 
v_a_3270_ = lean_ctor_get(v___x_3269_, 0);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3269_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3272_ = v___x_3269_;
v_isShared_3273_ = v_isSharedCheck_3290_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v___x_3269_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3290_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
if (lean_obj_tag(v_a_3270_) == 1)
{
lean_object* v_val_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3285_; 
v_val_3274_ = lean_ctor_get(v_a_3270_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v_a_3270_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3276_ = v_a_3270_;
v_isShared_3277_ = v_isSharedCheck_3285_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_val_3274_);
lean_dec(v_a_3270_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3285_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3278_; lean_object* v___x_3280_; 
v___x_3278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3267_);
lean_ctor_set(v___x_3278_, 1, v_val_3274_);
if (v_isShared_3277_ == 0)
{
lean_ctor_set(v___x_3276_, 0, v___x_3278_);
v___x_3280_ = v___x_3276_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v___x_3278_);
v___x_3280_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
lean_object* v___x_3282_; 
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 0, v___x_3280_);
v___x_3282_ = v___x_3272_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v___x_3280_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
}
else
{
lean_object* v___x_3286_; lean_object* v___x_3288_; 
lean_dec(v_a_3270_);
lean_dec_ref(v___x_3267_);
v___x_3286_ = lean_box(0);
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 0, v___x_3286_);
v___x_3288_ = v___x_3272_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v___x_3286_);
v___x_3288_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
return v___x_3288_;
}
}
}
}
else
{
lean_object* v_a_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3298_; 
lean_dec_ref(v___x_3267_);
v_a_3291_ = lean_ctor_get(v___x_3269_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v___x_3269_);
if (v_isSharedCheck_3298_ == 0)
{
v___x_3293_ = v___x_3269_;
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_a_3291_);
lean_dec(v___x_3269_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3296_; 
if (v_isShared_3294_ == 0)
{
v___x_3296_ = v___x_3293_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_a_3291_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
return v___x_3296_;
}
}
}
}
}
}
else
{
lean_object* v_a_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3307_; 
lean_dec_ref(v___x_3253_);
v_a_3300_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3302_ = v___x_3257_;
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_a_3300_);
lean_dec(v___x_3257_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3305_; 
if (v_isShared_3303_ == 0)
{
v___x_3305_ = v___x_3302_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_a_3300_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
}
}
}
else
{
lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v_inst_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; 
v___x_3308_ = l_Lean_Expr_appFn_x21(v_e_3196_);
v___x_3309_ = l_Lean_Expr_appFn_x21(v___x_3308_);
v_inst_3310_ = l_Lean_Expr_appArg_x21(v___x_3309_);
lean_dec_ref(v___x_3309_);
v___x_3311_ = l_Lean_Nat_mkInstHAdd;
v___x_3312_ = l_Lean_Meta_matchesInstance(v_inst_3310_, v___x_3311_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_);
if (lean_obj_tag(v___x_3312_) == 0)
{
lean_object* v_a_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3354_; 
v_a_3313_ = lean_ctor_get(v___x_3312_, 0);
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3354_ == 0)
{
v___x_3315_ = v___x_3312_;
v_isShared_3316_ = v_isSharedCheck_3354_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_a_3313_);
lean_dec(v___x_3312_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3354_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
uint8_t v___x_3317_; 
v___x_3317_ = lean_unbox(v_a_3313_);
lean_dec(v_a_3313_);
if (v___x_3317_ == 0)
{
lean_object* v___x_3318_; lean_object* v___x_3320_; 
lean_dec_ref(v___x_3308_);
v___x_3318_ = lean_box(0);
if (v_isShared_3316_ == 0)
{
lean_ctor_set(v___x_3315_, 0, v___x_3318_);
v___x_3320_ = v___x_3315_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3321_; 
v_reuseFailAlloc_3321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3321_, 0, v___x_3318_);
v___x_3320_ = v_reuseFailAlloc_3321_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
return v___x_3320_;
}
}
else
{
lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; 
lean_del_object(v___x_3315_);
v___x_3322_ = l_Lean_Expr_appArg_x21(v___x_3308_);
lean_dec_ref(v___x_3308_);
v___x_3323_ = l_Lean_Expr_appArg_x21(v_e_3196_);
v___x_3324_ = l_Lean_Meta_getNatValue_x3f(v___x_3323_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_);
lean_dec_ref(v___x_3323_);
if (lean_obj_tag(v___x_3324_) == 0)
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3345_; 
v_a_3325_ = lean_ctor_get(v___x_3324_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3327_ = v___x_3324_;
v_isShared_3328_ = v_isSharedCheck_3345_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v___x_3324_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3345_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
if (lean_obj_tag(v_a_3325_) == 1)
{
lean_object* v_val_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3340_; 
v_val_3329_ = lean_ctor_get(v_a_3325_, 0);
v_isSharedCheck_3340_ = !lean_is_exclusive(v_a_3325_);
if (v_isSharedCheck_3340_ == 0)
{
v___x_3331_ = v_a_3325_;
v_isShared_3332_ = v_isSharedCheck_3340_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_val_3329_);
lean_dec(v_a_3325_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3340_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3333_; lean_object* v___x_3335_; 
v___x_3333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3322_);
lean_ctor_set(v___x_3333_, 1, v_val_3329_);
if (v_isShared_3332_ == 0)
{
lean_ctor_set(v___x_3331_, 0, v___x_3333_);
v___x_3335_ = v___x_3331_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v___x_3333_);
v___x_3335_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
lean_object* v___x_3337_; 
if (v_isShared_3328_ == 0)
{
lean_ctor_set(v___x_3327_, 0, v___x_3335_);
v___x_3337_ = v___x_3327_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v___x_3335_);
v___x_3337_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
return v___x_3337_;
}
}
}
}
else
{
lean_object* v___x_3341_; lean_object* v___x_3343_; 
lean_dec(v_a_3325_);
lean_dec_ref(v___x_3322_);
v___x_3341_ = lean_box(0);
if (v_isShared_3328_ == 0)
{
lean_ctor_set(v___x_3327_, 0, v___x_3341_);
v___x_3343_ = v___x_3327_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v___x_3341_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
return v___x_3343_;
}
}
}
}
else
{
lean_object* v_a_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3353_; 
lean_dec_ref(v___x_3322_);
v_a_3346_ = lean_ctor_get(v___x_3324_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3348_ = v___x_3324_;
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_a_3346_);
lean_dec(v___x_3324_);
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
}
}
else
{
lean_object* v_a_3355_; lean_object* v___x_3357_; uint8_t v_isShared_3358_; uint8_t v_isSharedCheck_3362_; 
lean_dec_ref(v___x_3308_);
v_a_3355_ = lean_ctor_get(v___x_3312_, 0);
v_isSharedCheck_3362_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3362_ == 0)
{
v___x_3357_ = v___x_3312_;
v_isShared_3358_ = v_isSharedCheck_3362_;
goto v_resetjp_3356_;
}
else
{
lean_inc(v_a_3355_);
lean_dec(v___x_3312_);
v___x_3357_ = lean_box(0);
v_isShared_3358_ = v_isSharedCheck_3362_;
goto v_resetjp_3356_;
}
v_resetjp_3356_:
{
lean_object* v___x_3360_; 
if (v_isShared_3358_ == 0)
{
v___x_3360_ = v___x_3357_;
goto v_reusejp_3359_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v_a_3355_);
v___x_3360_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3359_;
}
v_reusejp_3359_:
{
return v___x_3360_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg___boxed(lean_object* v_e_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg(v_e_3363_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
lean_dec(v_a_3367_);
lean_dec_ref(v_a_3366_);
lean_dec(v_a_3365_);
lean_dec_ref(v_a_3364_);
lean_dec_ref(v_e_3363_);
return v_res_3369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset(lean_object* v_e_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_, lean_object* v_a_3373_, lean_object* v_a_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_, lean_object* v_a_3377_){
_start:
{
lean_object* v___x_3379_; 
v___x_3379_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg(v_e_3370_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_);
return v___x_3379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___boxed(lean_object* v_e_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset(v_e_3380_, v_a_3381_, v_a_3382_, v_a_3383_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_);
lean_dec(v_a_3387_);
lean_dec_ref(v_a_3386_);
lean_dec(v_a_3385_);
lean_dec_ref(v_a_3384_);
lean_dec(v_a_3383_);
lean_dec_ref(v_a_3382_);
lean_dec(v_a_3381_);
lean_dec_ref(v_e_3380_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux___redArg(lean_object* v_e_3390_, lean_object* v_inc_3391_, lean_object* v_a_3392_, lean_object* v_a_3393_, lean_object* v_a_3394_, lean_object* v_a_3395_){
_start:
{
lean_object* v_e_3397_; lean_object* v___x_3398_; 
v_e_3397_ = l_Lean_Expr_consumeMData(v_e_3390_);
lean_dec_ref(v_e_3390_);
v___x_3398_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_asOffset___redArg(v_e_3397_, v_a_3392_, v_a_3393_, v_a_3394_, v_a_3395_);
if (lean_obj_tag(v___x_3398_) == 0)
{
lean_object* v_a_3399_; 
v_a_3399_ = lean_ctor_get(v___x_3398_, 0);
lean_inc(v_a_3399_);
if (lean_obj_tag(v_a_3399_) == 0)
{
lean_object* v___x_3400_; uint8_t v___x_3401_; 
v___x_3400_ = lean_unsigned_to_nat(0u);
v___x_3401_ = lean_nat_dec_eq(v_inc_3391_, v___x_3400_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3410_; 
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3398_);
if (v_isSharedCheck_3410_ == 0)
{
lean_object* v_unused_3411_; 
v_unused_3411_ = lean_ctor_get(v___x_3398_, 0);
lean_dec(v_unused_3411_);
v___x_3403_ = v___x_3398_;
v_isShared_3404_ = v_isSharedCheck_3410_;
goto v_resetjp_3402_;
}
else
{
lean_dec(v___x_3398_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3410_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3408_; 
v___x_3405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3405_, 0, v_e_3397_);
lean_ctor_set(v___x_3405_, 1, v_inc_3391_);
v___x_3406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3405_);
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 0, v___x_3406_);
v___x_3408_ = v___x_3403_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v___x_3406_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
else
{
lean_dec_ref(v_e_3397_);
lean_dec(v_inc_3391_);
return v___x_3398_;
}
}
else
{
lean_object* v_val_3412_; lean_object* v_fst_3413_; lean_object* v_snd_3414_; lean_object* v___x_3415_; 
lean_dec_ref_known(v___x_3398_, 1);
lean_dec_ref(v_e_3397_);
v_val_3412_ = lean_ctor_get(v_a_3399_, 0);
lean_inc(v_val_3412_);
lean_dec_ref_known(v_a_3399_, 1);
v_fst_3413_ = lean_ctor_get(v_val_3412_, 0);
lean_inc(v_fst_3413_);
v_snd_3414_ = lean_ctor_get(v_val_3412_, 1);
lean_inc(v_snd_3414_);
lean_dec(v_val_3412_);
v___x_3415_ = lean_nat_add(v_inc_3391_, v_snd_3414_);
lean_dec(v_snd_3414_);
lean_dec(v_inc_3391_);
v_e_3390_ = v_fst_3413_;
v_inc_3391_ = v___x_3415_;
goto _start;
}
}
else
{
lean_dec_ref(v_e_3397_);
lean_dec(v_inc_3391_);
return v___x_3398_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux___redArg___boxed(lean_object* v_e_3417_, lean_object* v_inc_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_, lean_object* v_a_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux___redArg(v_e_3417_, v_inc_3418_, v_a_3419_, v_a_3420_, v_a_3421_, v_a_3422_);
lean_dec(v_a_3422_);
lean_dec_ref(v_a_3421_);
lean_dec(v_a_3420_);
lean_dec_ref(v_a_3419_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux(lean_object* v_e_3425_, lean_object* v_inc_3426_, lean_object* v_a_3427_, lean_object* v_a_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_){
_start:
{
lean_object* v___x_3435_; 
v___x_3435_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux___redArg(v_e_3425_, v_inc_3426_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux___boxed(lean_object* v_e_3436_, lean_object* v_inc_3437_, lean_object* v_a_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux(v_e_3436_, v_inc_3437_, v_a_3438_, v_a_3439_, v_a_3440_, v_a_3441_, v_a_3442_, v_a_3443_, v_a_3444_);
lean_dec(v_a_3444_);
lean_dec_ref(v_a_3443_);
lean_dec(v_a_3442_);
lean_dec_ref(v_a_3441_);
lean_dec(v_a_3440_);
lean_dec_ref(v_a_3439_);
lean_dec(v_a_3438_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg(lean_object* v_e_3447_, lean_object* v_inc_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_, lean_object* v_a_3452_){
_start:
{
lean_object* v___x_3454_; 
v___x_3454_ = l_Lean_Meta_getNatValue_x3f(v_e_3447_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3505_; 
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3454_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3457_ = v___x_3454_;
v_isShared_3458_ = v_isSharedCheck_3505_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3454_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3505_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
if (lean_obj_tag(v_a_3455_) == 0)
{
lean_object* v___x_3459_; 
lean_del_object(v___x_3457_);
v___x_3459_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExprAux___redArg(v_e_3447_, v_inc_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3483_; 
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3462_ = v___x_3459_;
v_isShared_3463_ = v_isSharedCheck_3483_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3459_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3483_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
if (lean_obj_tag(v_a_3460_) == 0)
{
lean_object* v___x_3464_; lean_object* v___x_3466_; 
v___x_3464_ = lean_box(0);
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 0, v___x_3464_);
v___x_3466_ = v___x_3462_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v___x_3464_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
else
{
lean_object* v_val_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3482_; 
v_val_3468_ = lean_ctor_get(v_a_3460_, 0);
v_isSharedCheck_3482_ = !lean_is_exclusive(v_a_3460_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3470_ = v_a_3460_;
v_isShared_3471_ = v_isSharedCheck_3482_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_val_3468_);
lean_dec(v_a_3460_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3482_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v_fst_3472_; lean_object* v_snd_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3477_; 
v_fst_3472_ = lean_ctor_get(v_val_3468_, 0);
lean_inc(v_fst_3472_);
v_snd_3473_ = lean_ctor_get(v_val_3468_, 1);
lean_inc_n(v_snd_3473_, 2);
lean_dec(v_val_3468_);
v___x_3474_ = l_Lean_mkNatLit(v_snd_3473_);
v___x_3475_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3475_, 0, v_fst_3472_);
lean_ctor_set(v___x_3475_, 1, v___x_3474_);
lean_ctor_set(v___x_3475_, 2, v_snd_3473_);
if (v_isShared_3471_ == 0)
{
lean_ctor_set(v___x_3470_, 0, v___x_3475_);
v___x_3477_ = v___x_3470_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v___x_3475_);
v___x_3477_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
lean_object* v___x_3479_; 
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 0, v___x_3477_);
v___x_3479_ = v___x_3462_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v___x_3477_);
v___x_3479_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
return v___x_3479_;
}
}
}
}
}
}
else
{
lean_object* v_a_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3491_; 
v_a_3484_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3491_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3491_ == 0)
{
v___x_3486_ = v___x_3459_;
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_a_3484_);
lean_dec(v___x_3459_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v___x_3489_; 
if (v_isShared_3487_ == 0)
{
v___x_3489_ = v___x_3486_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v_a_3484_);
v___x_3489_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
return v___x_3489_;
}
}
}
}
else
{
lean_object* v_val_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3504_; 
lean_dec_ref(v_e_3447_);
v_val_3492_ = lean_ctor_get(v_a_3455_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v_a_3455_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3494_ = v_a_3455_;
v_isShared_3495_ = v_isSharedCheck_3504_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_val_3492_);
lean_dec(v_a_3455_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3504_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3499_; 
v___x_3496_ = lean_nat_add(v_val_3492_, v_inc_3448_);
lean_dec(v_inc_3448_);
lean_dec(v_val_3492_);
v___x_3497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3496_);
if (v_isShared_3495_ == 0)
{
lean_ctor_set(v___x_3494_, 0, v___x_3497_);
v___x_3499_ = v___x_3494_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v___x_3497_);
v___x_3499_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
lean_object* v___x_3501_; 
if (v_isShared_3458_ == 0)
{
lean_ctor_set(v___x_3457_, 0, v___x_3499_);
v___x_3501_ = v___x_3457_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v___x_3499_);
v___x_3501_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
return v___x_3501_;
}
}
}
}
}
}
else
{
lean_object* v_a_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
lean_dec(v_inc_3448_);
lean_dec_ref(v_e_3447_);
v_a_3506_ = lean_ctor_get(v___x_3454_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3454_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3508_ = v___x_3454_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_a_3506_);
lean_dec(v___x_3454_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3506_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg___boxed(lean_object* v_e_3514_, lean_object* v_inc_3515_, lean_object* v_a_3516_, lean_object* v_a_3517_, lean_object* v_a_3518_, lean_object* v_a_3519_, lean_object* v_a_3520_){
_start:
{
lean_object* v_res_3521_; 
v_res_3521_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg(v_e_3514_, v_inc_3515_, v_a_3516_, v_a_3517_, v_a_3518_, v_a_3519_);
lean_dec(v_a_3519_);
lean_dec_ref(v_a_3518_);
lean_dec(v_a_3517_);
lean_dec_ref(v_a_3516_);
return v_res_3521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f(lean_object* v_e_3522_, lean_object* v_inc_3523_, lean_object* v_a_3524_, lean_object* v_a_3525_, lean_object* v_a_3526_, lean_object* v_a_3527_, lean_object* v_a_3528_, lean_object* v_a_3529_, lean_object* v_a_3530_){
_start:
{
lean_object* v___x_3532_; 
v___x_3532_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg(v_e_3522_, v_inc_3523_, v_a_3527_, v_a_3528_, v_a_3529_, v_a_3530_);
return v___x_3532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___boxed(lean_object* v_e_3533_, lean_object* v_inc_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_){
_start:
{
lean_object* v_res_3543_; 
v_res_3543_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f(v_e_3533_, v_inc_3534_, v_a_3535_, v_a_3536_, v_a_3537_, v_a_3538_, v_a_3539_, v_a_3540_, v_a_3541_);
lean_dec(v_a_3541_);
lean_dec_ref(v_a_3540_);
lean_dec(v_a_3539_);
lean_dec_ref(v_a_3538_);
lean_dec(v_a_3537_);
lean_dec_ref(v_a_3536_);
lean_dec(v_a_3535_);
return v_res_3543_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0(void){
_start:
{
lean_object* v___x_3544_; lean_object* v_lz_3545_; 
v___x_3544_ = lean_box(0);
v_lz_3545_ = l_unsafeCast___redArg(v___x_3544_);
return v_lz_3545_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1(void){
_start:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v_nat_3548_; 
v___x_3546_ = lean_box(0);
v___x_3547_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_));
v_nat_3548_ = l_Lean_mkConst(v___x_3547_, v___x_3546_);
return v_nat_3548_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4(void){
_start:
{
lean_object* v___x_3552_; lean_object* v_lz_3553_; lean_object* v___x_3554_; 
v___x_3552_ = lean_box(0);
v_lz_3553_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0);
v___x_3554_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3554_, 0, v_lz_3553_);
lean_ctor_set(v___x_3554_, 1, v___x_3552_);
return v___x_3554_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__5(void){
_start:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3555_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4);
v___x_3556_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__3));
v___x_3557_ = l_Lean_mkConst(v___x_3556_, v___x_3555_);
return v___x_3557_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__8(void){
_start:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3561_ = lean_box(0);
v___x_3562_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__7));
v___x_3563_ = l_Lean_mkConst(v___x_3562_, v___x_3561_);
return v___x_3563_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__9(void){
_start:
{
lean_object* v___x_3564_; lean_object* v_nat_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; 
v___x_3564_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__8, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__8_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__8);
v_nat_3565_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1);
v___x_3566_ = lean_unsigned_to_nat(2u);
v___x_3567_ = lean_mk_empty_array_with_capacity(v___x_3566_);
v___x_3568_ = lean_array_push(v___x_3567_, v_nat_3565_);
v___x_3569_ = lean_array_push(v___x_3568_, v___x_3564_);
return v___x_3569_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__10(void){
_start:
{
lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v_instHAdd_3572_; 
v___x_3570_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__9, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__9_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__9);
v___x_3571_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__5, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__5_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__5);
v_instHAdd_3572_ = l_Lean_mkAppN(v___x_3571_, v___x_3570_);
return v_instHAdd_3572_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__11(void){
_start:
{
lean_object* v___x_3573_; lean_object* v_lz_3574_; lean_object* v___x_3575_; 
v___x_3573_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4);
v_lz_3574_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0);
v___x_3575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3575_, 0, v_lz_3574_);
lean_ctor_set(v___x_3575_, 1, v___x_3573_);
return v___x_3575_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__12(void){
_start:
{
lean_object* v___x_3576_; lean_object* v_lz_3577_; lean_object* v___x_3578_; 
v___x_3576_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__11, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__11_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__11);
v_lz_3577_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0);
v___x_3578_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3578_, 0, v_lz_3577_);
lean_ctor_set(v___x_3578_, 1, v___x_3576_);
return v___x_3578_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__13(void){
_start:
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; 
v___x_3579_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__12, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__12_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__12);
v___x_3580_ = ((lean_object*)(l_Nat_reduceAdd___redArg___closed__2));
v___x_3581_ = l_Lean_mkConst(v___x_3580_, v___x_3579_);
return v___x_3581_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__14(void){
_start:
{
lean_object* v_nat_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; 
v_nat_3582_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1);
v___x_3583_ = lean_unsigned_to_nat(6u);
v___x_3584_ = lean_mk_empty_array_with_capacity(v___x_3583_);
v___x_3585_ = lean_array_push(v___x_3584_, v_nat_3582_);
return v___x_3585_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__15(void){
_start:
{
lean_object* v_nat_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v_nat_3586_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1);
v___x_3587_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__14, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__14_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__14);
v___x_3588_ = lean_array_push(v___x_3587_, v_nat_3586_);
return v___x_3588_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__16(void){
_start:
{
lean_object* v_nat_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; 
v_nat_3589_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1);
v___x_3590_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__15, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__15_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__15);
v___x_3591_ = lean_array_push(v___x_3590_, v_nat_3589_);
return v___x_3591_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__17(void){
_start:
{
lean_object* v_instHAdd_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; 
v_instHAdd_3592_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__10, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__10_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__10);
v___x_3593_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__16, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__16_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__16);
v___x_3594_ = lean_array_push(v___x_3593_, v_instHAdd_3592_);
return v___x_3594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat(lean_object* v_x_3595_, lean_object* v_y_3596_){
_start:
{
lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3597_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__13, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__13_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__13);
v___x_3598_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__17, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__17_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__17);
v___x_3599_ = lean_array_push(v___x_3598_, v_x_3595_);
v___x_3600_ = lean_array_push(v___x_3599_, v_y_3596_);
v___x_3601_ = l_Lean_mkAppN(v___x_3597_, v___x_3600_);
lean_dec_ref(v___x_3600_);
return v___x_3601_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__2(void){
_start:
{
lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v_instSub_3607_; 
v___x_3605_ = lean_box(0);
v___x_3606_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__1));
v_instSub_3607_ = l_Lean_mkConst(v___x_3606_, v___x_3605_);
return v_instSub_3607_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__5(void){
_start:
{
lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; 
v___x_3611_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4);
v___x_3612_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__4));
v___x_3613_ = l_Lean_mkConst(v___x_3612_, v___x_3611_);
return v___x_3613_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__6(void){
_start:
{
lean_object* v_instSub_3614_; lean_object* v_nat_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; 
v_instSub_3614_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__2, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__2_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__2);
v_nat_3615_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1);
v___x_3616_ = lean_unsigned_to_nat(2u);
v___x_3617_ = lean_mk_empty_array_with_capacity(v___x_3616_);
v___x_3618_ = lean_array_push(v___x_3617_, v_nat_3615_);
v___x_3619_ = lean_array_push(v___x_3618_, v_instSub_3614_);
return v___x_3619_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__7(void){
_start:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v_instHSub_3622_; 
v___x_3620_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__6);
v___x_3621_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__5, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__5_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__5);
v_instHSub_3622_ = l_Lean_mkAppN(v___x_3621_, v___x_3620_);
return v_instHSub_3622_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__8(void){
_start:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3623_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__12, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__12_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__12);
v___x_3624_ = ((lean_object*)(l_Nat_reduceSub___redArg___closed__2));
v___x_3625_ = l_Lean_mkConst(v___x_3624_, v___x_3623_);
return v___x_3625_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__9(void){
_start:
{
lean_object* v_instHSub_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v_instHSub_3626_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__7, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__7_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__7);
v___x_3627_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__16, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__16_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__16);
v___x_3628_ = lean_array_push(v___x_3627_, v_instHSub_3626_);
return v___x_3628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat(lean_object* v_x_3629_, lean_object* v_y_3630_){
_start:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; 
v___x_3631_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__8, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__8_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__8);
v___x_3632_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__9, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__9_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat___closed__9);
v___x_3633_ = lean_array_push(v___x_3632_, v_x_3629_);
v___x_3634_ = lean_array_push(v___x_3633_, v_y_3630_);
v___x_3635_ = l_Lean_mkAppN(v___x_3631_, v___x_3634_);
lean_dec_ref(v___x_3634_);
return v___x_3635_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__2(void){
_start:
{
lean_object* v___x_3639_; lean_object* v___x_3640_; 
v___x_3639_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__0);
v___x_3640_ = l_Lean_Level_succ___override(v___x_3639_);
return v___x_3640_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__3(void){
_start:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; 
v___x_3641_ = lean_box(0);
v___x_3642_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__2, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__2_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__2);
v___x_3643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3643_, 0, v___x_3642_);
lean_ctor_set(v___x_3643_, 1, v___x_3641_);
return v___x_3643_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__4(void){
_start:
{
lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3644_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__3);
v___x_3645_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__1));
v___x_3646_ = l_Lean_mkConst(v___x_3645_, v___x_3644_);
return v___x_3646_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__5(void){
_start:
{
lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; 
v___x_3647_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1);
v___x_3648_ = lean_unsigned_to_nat(3u);
v___x_3649_ = lean_mk_empty_array_with_capacity(v___x_3648_);
v___x_3650_ = lean_array_push(v___x_3649_, v___x_3647_);
return v___x_3650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat(lean_object* v_x_3651_, lean_object* v_y_3652_){
_start:
{
lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; 
v___x_3653_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__4, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__4);
v___x_3654_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__5, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__5_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__5);
v___x_3655_ = lean_array_push(v___x_3654_, v_x_3651_);
v___x_3656_ = lean_array_push(v___x_3655_, v_y_3652_);
v___x_3657_ = l_Lean_mkAppN(v___x_3653_, v___x_3656_);
lean_dec_ref(v___x_3656_);
return v___x_3657_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__2(void){
_start:
{
lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v___x_3661_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4);
v___x_3662_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__1));
v___x_3663_ = l_Lean_mkConst(v___x_3662_, v___x_3661_);
return v___x_3663_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__5(void){
_start:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; 
v___x_3667_ = lean_box(0);
v___x_3668_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__4));
v___x_3669_ = l_Lean_mkConst(v___x_3668_, v___x_3667_);
return v___x_3669_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__6(void){
_start:
{
lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; 
v___x_3670_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__5, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__5_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__5);
v___x_3671_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1);
v___x_3672_ = lean_unsigned_to_nat(2u);
v___x_3673_ = lean_mk_empty_array_with_capacity(v___x_3672_);
v___x_3674_ = lean_array_push(v___x_3673_, v___x_3671_);
v___x_3675_ = lean_array_push(v___x_3674_, v___x_3670_);
return v___x_3675_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__7(void){
_start:
{
lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; 
v___x_3676_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__6);
v___x_3677_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__2, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__2_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__2);
v___x_3678_ = l_Lean_mkAppN(v___x_3677_, v___x_3676_);
return v___x_3678_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance(void){
_start:
{
lean_object* v___x_3679_; 
v___x_3679_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__7, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__7_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance___closed__7);
return v___x_3679_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__0(void){
_start:
{
lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
v___x_3680_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4);
v___x_3681_ = ((lean_object*)(l_Nat_reduceBEq___redArg___closed__2));
v___x_3682_ = l_Lean_mkConst(v___x_3681_, v___x_3680_);
return v___x_3682_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1(void){
_start:
{
lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3683_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__1);
v___x_3684_ = lean_unsigned_to_nat(4u);
v___x_3685_ = lean_mk_empty_array_with_capacity(v___x_3684_);
v___x_3686_ = lean_array_push(v___x_3685_, v___x_3683_);
return v___x_3686_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__2(void){
_start:
{
lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; 
v___x_3687_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance;
v___x_3688_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1);
v___x_3689_ = lean_array_push(v___x_3688_, v___x_3687_);
return v___x_3689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat(lean_object* v_x_3690_, lean_object* v_y_3691_){
_start:
{
lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3692_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__0, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__0_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__0);
v___x_3693_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__2, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__2_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__2);
v___x_3694_ = lean_array_push(v___x_3693_, v_x_3690_);
v___x_3695_ = lean_array_push(v___x_3694_, v_y_3691_);
v___x_3696_ = l_Lean_mkAppN(v___x_3692_, v___x_3695_);
lean_dec_ref(v___x_3695_);
return v___x_3696_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBneNat___closed__0(void){
_start:
{
lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; 
v___x_3697_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4);
v___x_3698_ = ((lean_object*)(l_Nat_reduceBNe___redArg___closed__1));
v___x_3699_ = l_Lean_mkConst(v___x_3698_, v___x_3697_);
return v___x_3699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBneNat(lean_object* v_x_3700_, lean_object* v_y_3701_){
_start:
{
lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3702_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBneNat___closed__0, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBneNat___closed__0_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBneNat___closed__0);
v___x_3703_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__2, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__2_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__2);
v___x_3704_ = lean_array_push(v___x_3703_, v_x_3700_);
v___x_3705_ = lean_array_push(v___x_3704_, v_y_3701_);
v___x_3706_ = l_Lean_mkAppN(v___x_3702_, v___x_3705_);
lean_dec_ref(v___x_3705_);
return v___x_3706_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__3(void){
_start:
{
lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; 
v___x_3712_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4);
v___x_3713_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__2));
v___x_3714_ = l_Lean_Expr_const___override(v___x_3713_, v___x_3712_);
return v___x_3714_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__6(void){
_start:
{
lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; 
v___x_3718_ = lean_box(0);
v___x_3719_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__5));
v___x_3720_ = l_Lean_mkConst(v___x_3719_, v___x_3718_);
return v___x_3720_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__7(void){
_start:
{
lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; 
v___x_3721_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__6);
v___x_3722_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1);
v___x_3723_ = lean_array_push(v___x_3722_, v___x_3721_);
return v___x_3723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(lean_object* v_x_3724_, lean_object* v_y_3725_){
_start:
{
lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; 
v___x_3726_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__3);
v___x_3727_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__7, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__7_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__7);
v___x_3728_ = lean_array_push(v___x_3727_, v_x_3724_);
v___x_3729_ = lean_array_push(v___x_3728_, v_y_3725_);
v___x_3730_ = l_Lean_mkAppN(v___x_3726_, v___x_3729_);
lean_dec_ref(v___x_3729_);
return v___x_3730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkGENat(lean_object* v_x_3731_, lean_object* v_y_3732_){
_start:
{
lean_object* v___x_3733_; 
v___x_3733_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_y_3732_, v_x_3731_);
return v___x_3733_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__0(void){
_start:
{
lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3734_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat___closed__4);
v___x_3735_ = ((lean_object*)(l_Nat_reduceLT___redArg___closed__2));
v___x_3736_ = l_Lean_Expr_const___override(v___x_3735_, v___x_3734_);
return v___x_3736_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__3(void){
_start:
{
lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; 
v___x_3740_ = lean_box(0);
v___x_3741_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__2));
v___x_3742_ = l_Lean_mkConst(v___x_3741_, v___x_3740_);
return v___x_3742_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__4(void){
_start:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3743_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__3);
v___x_3744_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat___closed__1);
v___x_3745_ = lean_array_push(v___x_3744_, v___x_3743_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat(lean_object* v_x_3746_, lean_object* v_y_3747_){
_start:
{
lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; 
v___x_3748_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__0, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__0_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__0);
v___x_3749_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__4, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat___closed__4);
v___x_3750_ = lean_array_push(v___x_3749_, v_x_3746_);
v___x_3751_ = lean_array_push(v___x_3750_, v_y_3747_);
v___x_3752_ = l_Lean_mkAppN(v___x_3748_, v___x_3751_);
lean_dec_ref(v___x_3751_);
return v___x_3752_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkGTNat(lean_object* v_x_3753_, lean_object* v_y_3754_){
_start:
{
lean_object* v___x_3755_; 
v___x_3755_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat(v_y_3754_, v_x_3753_);
return v___x_3755_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__2(void){
_start:
{
lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; 
v___x_3759_ = lean_box(0);
v___x_3760_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__1));
v___x_3761_ = l_Lean_mkConst(v___x_3760_, v___x_3759_);
return v___x_3761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(lean_object* v_p_3762_, lean_object* v_a_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_){
_start:
{
lean_object* v___x_3768_; 
lean_inc_ref(v_p_3762_);
v___x_3768_ = l_Lean_Meta_mkDecide(v_p_3762_, v_a_3763_, v_a_3764_, v_a_3765_, v_a_3766_);
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v_a_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; 
v_a_3769_ = lean_ctor_get(v___x_3768_, 0);
lean_inc(v_a_3769_);
lean_dec_ref_known(v___x_3768_, 1);
v___x_3770_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6);
v___x_3771_ = l_Lean_Meta_mkEqRefl(v___x_3770_, v_a_3763_, v_a_3764_, v_a_3765_, v_a_3766_);
if (lean_obj_tag(v___x_3771_) == 0)
{
lean_object* v_a_3772_; lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3787_; 
v_a_3772_ = lean_ctor_get(v___x_3771_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3771_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3774_ = v___x_3771_;
v_isShared_3775_ = v_isSharedCheck_3787_;
goto v_resetjp_3773_;
}
else
{
lean_inc(v_a_3772_);
lean_dec(v___x_3771_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3787_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3785_; 
v___x_3776_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__2, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__2_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___closed__2);
v___x_3777_ = l_Lean_Expr_appArg_x21(v_a_3769_);
lean_dec(v_a_3769_);
v___x_3778_ = lean_unsigned_to_nat(3u);
v___x_3779_ = lean_mk_empty_array_with_capacity(v___x_3778_);
v___x_3780_ = lean_array_push(v___x_3779_, v_p_3762_);
v___x_3781_ = lean_array_push(v___x_3780_, v___x_3777_);
v___x_3782_ = lean_array_push(v___x_3781_, v_a_3772_);
v___x_3783_ = l_Lean_mkAppN(v___x_3776_, v___x_3782_);
lean_dec_ref(v___x_3782_);
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
else
{
lean_dec(v_a_3769_);
lean_dec_ref(v_p_3762_);
return v___x_3771_;
}
}
else
{
lean_dec_ref(v_p_3762_);
return v___x_3768_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue___boxed(lean_object* v_p_3788_, lean_object* v_a_3789_, lean_object* v_a_3790_, lean_object* v_a_3791_, lean_object* v_a_3792_, lean_object* v_a_3793_){
_start:
{
lean_object* v_res_3794_; 
v_res_3794_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v_p_3788_, v_a_3789_, v_a_3790_, v_a_3791_, v_a_3792_);
lean_dec(v_a_3792_);
lean_dec_ref(v_a_3791_);
lean_dec(v_a_3790_);
lean_dec_ref(v_a_3789_);
return v_res_3794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(lean_object* v_expr_3795_, lean_object* v_nm_3796_, lean_object* v_args_3797_, lean_object* v_a_3798_){
_start:
{
lean_object* v___x_3800_; lean_object* v_env_3801_; uint8_t v___x_3802_; uint8_t v___x_3803_; 
v___x_3800_ = lean_st_ref_get(v_a_3798_);
v_env_3801_ = lean_ctor_get(v___x_3800_, 0);
lean_inc_ref(v_env_3801_);
lean_dec(v___x_3800_);
v___x_3802_ = 1;
lean_inc(v_nm_3796_);
v___x_3803_ = l_Lean_Environment_contains(v_env_3801_, v_nm_3796_, v___x_3802_);
if (v___x_3803_ == 0)
{
lean_object* v___x_3804_; lean_object* v___x_3805_; 
lean_dec(v_nm_3796_);
lean_dec_ref(v_expr_3795_);
v___x_3804_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_3805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3804_);
return v___x_3805_;
}
else
{
lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3806_ = lean_box(0);
v___x_3807_ = l_Lean_mkConst(v_nm_3796_, v___x_3806_);
v___x_3808_ = l_Lean_mkAppN(v___x_3807_, v_args_3797_);
v___x_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3808_);
v___x_3810_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3810_, 0, v_expr_3795_);
lean_ctor_set(v___x_3810_, 1, v___x_3809_);
lean_ctor_set_uint8(v___x_3810_, sizeof(void*)*2, v___x_3802_);
v___x_3811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
v___x_3812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3812_, 0, v___x_3811_);
return v___x_3812_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg___boxed(lean_object* v_expr_3813_, lean_object* v_nm_3814_, lean_object* v_args_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_){
_start:
{
lean_object* v_res_3818_; 
v_res_3818_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v_expr_3813_, v_nm_3814_, v_args_3815_, v_a_3816_);
lean_dec(v_a_3816_);
lean_dec_ref(v_args_3815_);
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst(lean_object* v_expr_3819_, lean_object* v_nm_3820_, lean_object* v_args_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_, lean_object* v_a_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_){
_start:
{
lean_object* v___x_3830_; 
v___x_3830_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v_expr_3819_, v_nm_3820_, v_args_3821_, v_a_3828_);
return v___x_3830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___boxed(lean_object* v_expr_3831_, lean_object* v_nm_3832_, lean_object* v_args_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_, lean_object* v_a_3837_, lean_object* v_a_3838_, lean_object* v_a_3839_, lean_object* v_a_3840_, lean_object* v_a_3841_){
_start:
{
lean_object* v_res_3842_; 
v_res_3842_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst(v_expr_3831_, v_nm_3832_, v_args_3833_, v_a_3834_, v_a_3835_, v_a_3836_, v_a_3837_, v_a_3838_, v_a_3839_, v_a_3840_);
lean_dec(v_a_3840_);
lean_dec_ref(v_a_3839_);
lean_dec(v_a_3838_);
lean_dec_ref(v_a_3837_);
lean_dec(v_a_3836_);
lean_dec_ref(v_a_3835_);
lean_dec(v_a_3834_);
lean_dec_ref(v_args_3833_);
return v_res_3842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorIdx(lean_object* v_x_3843_){
_start:
{
switch(lean_obj_tag(v_x_3843_))
{
case 0:
{
lean_object* v___x_3844_; 
v___x_3844_ = lean_unsigned_to_nat(0u);
return v___x_3844_;
}
case 1:
{
lean_object* v___x_3845_; 
v___x_3845_ = lean_unsigned_to_nat(1u);
return v___x_3845_;
}
default: 
{
lean_object* v___x_3846_; 
v___x_3846_ = lean_unsigned_to_nat(2u);
return v___x_3846_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorIdx___boxed(lean_object* v_x_3847_){
_start:
{
lean_object* v_res_3848_; 
v_res_3848_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorIdx(v_x_3847_);
lean_dec_ref(v_x_3847_);
return v_res_3848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim___redArg(lean_object* v_t_3849_, lean_object* v_k_3850_){
_start:
{
switch(lean_obj_tag(v_t_3849_))
{
case 0:
{
uint8_t v_b_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; 
v_b_3851_ = lean_ctor_get_uint8(v_t_3849_, 0);
lean_dec_ref_known(v_t_3849_, 0);
v___x_3852_ = lean_box(v_b_3851_);
v___x_3853_ = lean_apply_1(v_k_3850_, v___x_3852_);
return v___x_3853_;
}
case 1:
{
lean_object* v_p_3854_; lean_object* v___x_3855_; 
v_p_3854_ = lean_ctor_get(v_t_3849_, 0);
lean_inc_ref(v_p_3854_);
lean_dec_ref_known(v_t_3849_, 1);
v___x_3855_ = lean_apply_1(v_k_3850_, v_p_3854_);
return v___x_3855_;
}
default: 
{
lean_object* v_x_3856_; lean_object* v_y_3857_; lean_object* v_p_3858_; lean_object* v___x_3859_; 
v_x_3856_ = lean_ctor_get(v_t_3849_, 0);
lean_inc_ref(v_x_3856_);
v_y_3857_ = lean_ctor_get(v_t_3849_, 1);
lean_inc_ref(v_y_3857_);
v_p_3858_ = lean_ctor_get(v_t_3849_, 2);
lean_inc_ref(v_p_3858_);
lean_dec_ref_known(v_t_3849_, 3);
v___x_3859_ = lean_apply_3(v_k_3850_, v_x_3856_, v_y_3857_, v_p_3858_);
return v___x_3859_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim(lean_object* v_motive_3860_, lean_object* v_ctorIdx_3861_, lean_object* v_t_3862_, lean_object* v_h_3863_, lean_object* v_k_3864_){
_start:
{
lean_object* v___x_3865_; 
v___x_3865_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim___redArg(v_t_3862_, v_k_3864_);
return v___x_3865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim___boxed(lean_object* v_motive_3866_, lean_object* v_ctorIdx_3867_, lean_object* v_t_3868_, lean_object* v_h_3869_, lean_object* v_k_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim(v_motive_3866_, v_ctorIdx_3867_, v_t_3868_, v_h_3869_, v_k_3870_);
lean_dec(v_ctorIdx_3867_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_decide_elim___redArg(lean_object* v_t_3872_, lean_object* v_decide_3873_){
_start:
{
lean_object* v___x_3874_; 
v___x_3874_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim___redArg(v_t_3872_, v_decide_3873_);
return v___x_3874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_decide_elim(lean_object* v_motive_3875_, lean_object* v_t_3876_, lean_object* v_h_3877_, lean_object* v_decide_3878_){
_start:
{
lean_object* v___x_3879_; 
v___x_3879_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim___redArg(v_t_3876_, v_decide_3878_);
return v___x_3879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_false_elim___redArg(lean_object* v_t_3880_, lean_object* v_false_3881_){
_start:
{
lean_object* v___x_3882_; 
v___x_3882_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim___redArg(v_t_3880_, v_false_3881_);
return v___x_3882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_false_elim(lean_object* v_motive_3883_, lean_object* v_t_3884_, lean_object* v_h_3885_, lean_object* v_false_3886_){
_start:
{
lean_object* v___x_3887_; 
v___x_3887_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim___redArg(v_t_3884_, v_false_3886_);
return v___x_3887_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_eq_elim___redArg(lean_object* v_t_3888_, lean_object* v_eq_3889_){
_start:
{
lean_object* v___x_3890_; 
v___x_3890_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim___redArg(v_t_3888_, v_eq_3889_);
return v___x_3890_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_eq_elim(lean_object* v_motive_3891_, lean_object* v_t_3892_, lean_object* v_h_3893_, lean_object* v_eq_3894_){
_start:
{
lean_object* v___x_3895_; 
v___x_3895_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_EqResult_ctorElim___redArg(v_t_3892_, v_eq_3894_);
return v___x_3895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg(lean_object* v_e_3896_, lean_object* v_lemmaName_3897_, lean_object* v_args_3898_, lean_object* v_a_3899_){
_start:
{
lean_object* v___x_3901_; lean_object* v_env_3902_; uint8_t v___x_3903_; uint8_t v___x_3904_; 
v___x_3901_ = lean_st_ref_get(v_a_3899_);
v_env_3902_ = lean_ctor_get(v___x_3901_, 0);
lean_inc_ref(v_env_3902_);
lean_dec(v___x_3901_);
v___x_3903_ = 1;
lean_inc(v_lemmaName_3897_);
v___x_3904_ = l_Lean_Environment_contains(v_env_3902_, v_lemmaName_3897_, v___x_3903_);
if (v___x_3904_ == 0)
{
lean_object* v___x_3905_; lean_object* v___x_3906_; 
lean_dec(v_lemmaName_3897_);
lean_dec_ref(v_e_3896_);
v___x_3905_ = lean_box(0);
v___x_3906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3906_, 0, v___x_3905_);
return v___x_3906_;
}
else
{
lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___x_3907_ = lean_box(0);
v___x_3908_ = l_Lean_mkConst(v_lemmaName_3897_, v___x_3907_);
v___x_3909_ = l_Lean_mkAppN(v___x_3908_, v_args_3898_);
v___x_3910_ = lean_apply_1(v_e_3896_, v___x_3909_);
v___x_3911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3911_, 0, v___x_3910_);
v___x_3912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3911_);
return v___x_3912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg___boxed(lean_object* v_e_3913_, lean_object* v_lemmaName_3914_, lean_object* v_args_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_){
_start:
{
lean_object* v_res_3918_; 
v_res_3918_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg(v_e_3913_, v_lemmaName_3914_, v_args_3915_, v_a_3916_);
lean_dec(v_a_3916_);
lean_dec_ref(v_args_3915_);
return v_res_3918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma(lean_object* v_e_3919_, lean_object* v_lemmaName_3920_, lean_object* v_args_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_, lean_object* v_a_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_){
_start:
{
lean_object* v___x_3930_; 
v___x_3930_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg(v_e_3919_, v_lemmaName_3920_, v_args_3921_, v_a_3928_);
return v___x_3930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___boxed(lean_object* v_e_3931_, lean_object* v_lemmaName_3932_, lean_object* v_args_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_, lean_object* v_a_3941_){
_start:
{
lean_object* v_res_3942_; 
v_res_3942_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma(v_e_3931_, v_lemmaName_3932_, v_args_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_);
lean_dec(v_a_3940_);
lean_dec_ref(v_a_3939_);
lean_dec(v_a_3938_);
lean_dec_ref(v_a_3937_);
lean_dec(v_a_3936_);
lean_dec_ref(v_a_3935_);
lean_dec(v_a_3934_);
lean_dec_ref(v_args_3933_);
return v_res_3942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__0(lean_object* v_p_3943_){
_start:
{
lean_object* v___x_3944_; 
v___x_3944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3944_, 0, v_p_3943_);
return v___x_3944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__2(lean_object* v_n_3945_, lean_object* v_n_3946_, lean_object* v_e_3947_, lean_object* v_p_3948_){
_start:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
v___x_3949_ = lean_nat_sub(v_n_3945_, v_n_3946_);
v___x_3950_ = l_Lean_mkNatLit(v___x_3949_);
v___x_3951_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3951_, 0, v_e_3947_);
lean_ctor_set(v___x_3951_, 1, v___x_3950_);
lean_ctor_set(v___x_3951_, 2, v_p_3948_);
return v___x_3951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__2___boxed(lean_object* v_n_3952_, lean_object* v_n_3953_, lean_object* v_e_3954_, lean_object* v_p_3955_){
_start:
{
lean_object* v_res_3956_; 
v_res_3956_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__2(v_n_3952_, v_n_3953_, v_e_3954_, v_p_3955_);
lean_dec(v_n_3953_);
lean_dec(v_n_3952_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__3(lean_object* v___x_3957_, lean_object* v_e_3958_, lean_object* v_p_3959_){
_start:
{
lean_object* v___x_3960_; 
v___x_3960_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3957_);
lean_ctor_set(v___x_3960_, 1, v_e_3958_);
lean_ctor_set(v___x_3960_, 2, v_p_3959_);
return v___x_3960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__1(lean_object* v_e_3961_, lean_object* v___y_3962_, lean_object* v_p_3963_){
_start:
{
lean_object* v___x_3964_; 
v___x_3964_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3964_, 0, v_e_3961_);
lean_ctor_set(v___x_3964_, 1, v___y_3962_);
lean_ctor_set(v___x_3964_, 2, v_p_3963_);
return v___x_3964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg(lean_object* v_x_3997_, lean_object* v_y_3998_, lean_object* v_a_3999_, lean_object* v_a_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_){
_start:
{
lean_object* v___f_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; 
v___f_4004_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__0));
v___x_4005_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_x_3997_);
v___x_4006_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg(v_x_3997_, v___x_4005_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_);
if (lean_obj_tag(v___x_4006_) == 0)
{
lean_object* v_a_4007_; lean_object* v___x_4009_; uint8_t v_isShared_4010_; uint8_t v_isSharedCheck_4196_; 
v_a_4007_ = lean_ctor_get(v___x_4006_, 0);
v_isSharedCheck_4196_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4009_ = v___x_4006_;
v_isShared_4010_ = v_isSharedCheck_4196_;
goto v_resetjp_4008_;
}
else
{
lean_inc(v_a_4007_);
lean_dec(v___x_4006_);
v___x_4009_ = lean_box(0);
v_isShared_4010_ = v_isSharedCheck_4196_;
goto v_resetjp_4008_;
}
v_resetjp_4008_:
{
if (lean_obj_tag(v_a_4007_) == 1)
{
lean_object* v_val_4011_; lean_object* v___x_4012_; 
lean_del_object(v___x_4009_);
v_val_4011_ = lean_ctor_get(v_a_4007_, 0);
lean_inc(v_val_4011_);
lean_dec_ref_known(v_a_4007_, 1);
lean_inc_ref(v_y_3998_);
v___x_4012_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg(v_y_3998_, v___x_4005_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4183_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4183_ == 0)
{
v___x_4015_ = v___x_4012_;
v_isShared_4016_ = v_isSharedCheck_4183_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_4012_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4183_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
if (lean_obj_tag(v_a_4013_) == 1)
{
if (lean_obj_tag(v_val_4011_) == 0)
{
lean_object* v_val_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4075_; 
lean_dec_ref(v_y_3998_);
v_val_4017_ = lean_ctor_get(v_a_4013_, 0);
v_isSharedCheck_4075_ = !lean_is_exclusive(v_a_4013_);
if (v_isSharedCheck_4075_ == 0)
{
v___x_4019_ = v_a_4013_;
v_isShared_4020_ = v_isSharedCheck_4075_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_val_4017_);
lean_dec(v_a_4013_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4075_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
if (lean_obj_tag(v_val_4017_) == 0)
{
lean_object* v_n_4021_; lean_object* v_n_4022_; uint8_t v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4026_; 
lean_dec_ref(v_x_3997_);
v_n_4021_ = lean_ctor_get(v_val_4011_, 0);
lean_inc(v_n_4021_);
lean_dec_ref_known(v_val_4011_, 1);
v_n_4022_ = lean_ctor_get(v_val_4017_, 0);
lean_inc(v_n_4022_);
lean_dec_ref_known(v_val_4017_, 1);
v___x_4023_ = lean_nat_dec_eq(v_n_4021_, v_n_4022_);
lean_dec(v_n_4022_);
lean_dec(v_n_4021_);
v___x_4024_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_4024_, 0, v___x_4023_);
if (v_isShared_4020_ == 0)
{
lean_ctor_set(v___x_4019_, 0, v___x_4024_);
v___x_4026_ = v___x_4019_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4030_; 
v_reuseFailAlloc_4030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4030_, 0, v___x_4024_);
v___x_4026_ = v_reuseFailAlloc_4030_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
lean_object* v___x_4028_; 
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v___x_4026_);
v___x_4028_ = v___x_4015_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4029_; 
v_reuseFailAlloc_4029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4029_, 0, v___x_4026_);
v___x_4028_ = v_reuseFailAlloc_4029_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
return v___x_4028_;
}
}
}
else
{
lean_object* v_n_4031_; lean_object* v_e_4032_; lean_object* v_o_4033_; lean_object* v_n_4034_; uint8_t v___x_4035_; 
lean_del_object(v___x_4019_);
lean_del_object(v___x_4015_);
v_n_4031_ = lean_ctor_get(v_val_4011_, 0);
lean_inc(v_n_4031_);
lean_dec_ref_known(v_val_4011_, 1);
v_e_4032_ = lean_ctor_get(v_val_4017_, 0);
lean_inc_ref(v_e_4032_);
v_o_4033_ = lean_ctor_get(v_val_4017_, 1);
lean_inc_ref(v_o_4033_);
v_n_4034_ = lean_ctor_get(v_val_4017_, 2);
lean_inc(v_n_4034_);
lean_dec_ref_known(v_val_4017_, 3);
v___x_4035_ = lean_nat_dec_le(v_n_4034_, v_n_4031_);
if (v___x_4035_ == 0)
{
lean_object* v___x_4036_; lean_object* v___x_4037_; 
lean_dec(v_n_4034_);
lean_dec(v_n_4031_);
lean_inc_ref(v_o_4033_);
lean_inc_ref(v_x_3997_);
v___x_4036_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat(v_x_3997_, v_o_4033_);
v___x_4037_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4036_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_);
if (lean_obj_tag(v___x_4037_) == 0)
{
lean_object* v_a_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; 
v_a_4038_ = lean_ctor_get(v___x_4037_, 0);
lean_inc(v_a_4038_);
lean_dec_ref_known(v___x_4037_, 1);
v___x_4039_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__3));
v___x_4040_ = lean_unsigned_to_nat(4u);
v___x_4041_ = lean_mk_empty_array_with_capacity(v___x_4040_);
v___x_4042_ = lean_array_push(v___x_4041_, v_x_3997_);
v___x_4043_ = lean_array_push(v___x_4042_, v_e_4032_);
v___x_4044_ = lean_array_push(v___x_4043_, v_o_4033_);
v___x_4045_ = lean_array_push(v___x_4044_, v_a_4038_);
v___x_4046_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg(v___f_4004_, v___x_4039_, v___x_4045_, v_a_4002_);
lean_dec_ref(v___x_4045_);
return v___x_4046_;
}
else
{
lean_object* v_a_4047_; lean_object* v___x_4049_; uint8_t v_isShared_4050_; uint8_t v_isSharedCheck_4054_; 
lean_dec_ref(v_o_4033_);
lean_dec_ref(v_e_4032_);
lean_dec_ref(v_x_3997_);
v_a_4047_ = lean_ctor_get(v___x_4037_, 0);
v_isSharedCheck_4054_ = !lean_is_exclusive(v___x_4037_);
if (v_isSharedCheck_4054_ == 0)
{
v___x_4049_ = v___x_4037_;
v_isShared_4050_ = v_isSharedCheck_4054_;
goto v_resetjp_4048_;
}
else
{
lean_inc(v_a_4047_);
lean_dec(v___x_4037_);
v___x_4049_ = lean_box(0);
v_isShared_4050_ = v_isSharedCheck_4054_;
goto v_resetjp_4048_;
}
v_resetjp_4048_:
{
lean_object* v___x_4052_; 
if (v_isShared_4050_ == 0)
{
v___x_4052_ = v___x_4049_;
goto v_reusejp_4051_;
}
else
{
lean_object* v_reuseFailAlloc_4053_; 
v_reuseFailAlloc_4053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4053_, 0, v_a_4047_);
v___x_4052_ = v_reuseFailAlloc_4053_;
goto v_reusejp_4051_;
}
v_reusejp_4051_:
{
return v___x_4052_;
}
}
}
}
else
{
lean_object* v___f_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; 
lean_inc_ref(v_e_4032_);
v___f_4055_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_4055_, 0, v_n_4031_);
lean_closure_set(v___f_4055_, 1, v_n_4034_);
lean_closure_set(v___f_4055_, 2, v_e_4032_);
lean_inc_ref(v_x_3997_);
lean_inc_ref(v_o_4033_);
v___x_4056_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_o_4033_, v_x_3997_);
v___x_4057_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4056_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_);
if (lean_obj_tag(v___x_4057_) == 0)
{
lean_object* v_a_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; 
v_a_4058_ = lean_ctor_get(v___x_4057_, 0);
lean_inc(v_a_4058_);
lean_dec_ref_known(v___x_4057_, 1);
v___x_4059_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__5));
v___x_4060_ = lean_unsigned_to_nat(4u);
v___x_4061_ = lean_mk_empty_array_with_capacity(v___x_4060_);
v___x_4062_ = lean_array_push(v___x_4061_, v_x_3997_);
v___x_4063_ = lean_array_push(v___x_4062_, v_e_4032_);
v___x_4064_ = lean_array_push(v___x_4063_, v_o_4033_);
v___x_4065_ = lean_array_push(v___x_4064_, v_a_4058_);
v___x_4066_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg(v___f_4055_, v___x_4059_, v___x_4065_, v_a_4002_);
lean_dec_ref(v___x_4065_);
return v___x_4066_;
}
else
{
lean_object* v_a_4067_; lean_object* v___x_4069_; uint8_t v_isShared_4070_; uint8_t v_isSharedCheck_4074_; 
lean_dec_ref(v___f_4055_);
lean_dec_ref(v_o_4033_);
lean_dec_ref(v_e_4032_);
lean_dec_ref(v_x_3997_);
v_a_4067_ = lean_ctor_get(v___x_4057_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v___x_4057_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_4069_ = v___x_4057_;
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
else
{
lean_inc(v_a_4067_);
lean_dec(v___x_4057_);
v___x_4069_ = lean_box(0);
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
v_resetjp_4068_:
{
lean_object* v___x_4072_; 
if (v_isShared_4070_ == 0)
{
v___x_4072_ = v___x_4069_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v_a_4067_);
v___x_4072_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
return v___x_4072_;
}
}
}
}
}
}
}
else
{
lean_object* v_val_4076_; 
lean_del_object(v___x_4015_);
lean_dec_ref(v_x_3997_);
v_val_4076_ = lean_ctor_get(v_a_4013_, 0);
lean_inc(v_val_4076_);
lean_dec_ref_known(v_a_4013_, 1);
if (lean_obj_tag(v_val_4076_) == 0)
{
lean_object* v_e_4077_; lean_object* v_o_4078_; lean_object* v_n_4079_; lean_object* v_n_4080_; uint8_t v___x_4081_; 
v_e_4077_ = lean_ctor_get(v_val_4011_, 0);
lean_inc_ref(v_e_4077_);
v_o_4078_ = lean_ctor_get(v_val_4011_, 1);
lean_inc_ref(v_o_4078_);
v_n_4079_ = lean_ctor_get(v_val_4011_, 2);
lean_inc(v_n_4079_);
lean_dec_ref_known(v_val_4011_, 3);
v_n_4080_ = lean_ctor_get(v_val_4076_, 0);
lean_inc(v_n_4080_);
lean_dec_ref_known(v_val_4076_, 1);
v___x_4081_ = lean_nat_dec_le(v_n_4079_, v_n_4080_);
if (v___x_4081_ == 0)
{
lean_object* v___x_4082_; lean_object* v___x_4083_; 
lean_dec(v_n_4080_);
lean_dec(v_n_4079_);
lean_inc_ref(v_o_4078_);
lean_inc_ref(v_y_3998_);
v___x_4082_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat(v_y_3998_, v_o_4078_);
v___x_4083_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4082_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_);
if (lean_obj_tag(v___x_4083_) == 0)
{
lean_object* v_a_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; 
v_a_4084_ = lean_ctor_get(v___x_4083_, 0);
lean_inc(v_a_4084_);
lean_dec_ref_known(v___x_4083_, 1);
v___x_4085_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__7));
v___x_4086_ = lean_unsigned_to_nat(4u);
v___x_4087_ = lean_mk_empty_array_with_capacity(v___x_4086_);
v___x_4088_ = lean_array_push(v___x_4087_, v_e_4077_);
v___x_4089_ = lean_array_push(v___x_4088_, v_o_4078_);
v___x_4090_ = lean_array_push(v___x_4089_, v_y_3998_);
v___x_4091_ = lean_array_push(v___x_4090_, v_a_4084_);
v___x_4092_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg(v___f_4004_, v___x_4085_, v___x_4091_, v_a_4002_);
lean_dec_ref(v___x_4091_);
return v___x_4092_;
}
else
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4100_; 
lean_dec_ref(v_o_4078_);
lean_dec_ref(v_e_4077_);
lean_dec_ref(v_y_3998_);
v_a_4093_ = lean_ctor_get(v___x_4083_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v___x_4083_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4095_ = v___x_4083_;
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___x_4083_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
lean_object* v___x_4098_; 
if (v_isShared_4096_ == 0)
{
v___x_4098_ = v___x_4095_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v_a_4093_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
}
}
else
{
lean_object* v___f_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; 
lean_inc_ref(v_e_4077_);
v___f_4101_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_4101_, 0, v_n_4080_);
lean_closure_set(v___f_4101_, 1, v_n_4079_);
lean_closure_set(v___f_4101_, 2, v_e_4077_);
lean_inc_ref(v_y_3998_);
lean_inc_ref(v_o_4078_);
v___x_4102_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_o_4078_, v_y_3998_);
v___x_4103_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4102_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_);
if (lean_obj_tag(v___x_4103_) == 0)
{
lean_object* v_a_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; 
v_a_4104_ = lean_ctor_get(v___x_4103_, 0);
lean_inc(v_a_4104_);
lean_dec_ref_known(v___x_4103_, 1);
v___x_4105_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__9));
v___x_4106_ = lean_unsigned_to_nat(4u);
v___x_4107_ = lean_mk_empty_array_with_capacity(v___x_4106_);
v___x_4108_ = lean_array_push(v___x_4107_, v_e_4077_);
v___x_4109_ = lean_array_push(v___x_4108_, v_o_4078_);
v___x_4110_ = lean_array_push(v___x_4109_, v_y_3998_);
v___x_4111_ = lean_array_push(v___x_4110_, v_a_4104_);
v___x_4112_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg(v___f_4101_, v___x_4105_, v___x_4111_, v_a_4002_);
lean_dec_ref(v___x_4111_);
return v___x_4112_;
}
else
{
lean_object* v_a_4113_; lean_object* v___x_4115_; uint8_t v_isShared_4116_; uint8_t v_isSharedCheck_4120_; 
lean_dec_ref(v___f_4101_);
lean_dec_ref(v_o_4078_);
lean_dec_ref(v_e_4077_);
lean_dec_ref(v_y_3998_);
v_a_4113_ = lean_ctor_get(v___x_4103_, 0);
v_isSharedCheck_4120_ = !lean_is_exclusive(v___x_4103_);
if (v_isSharedCheck_4120_ == 0)
{
v___x_4115_ = v___x_4103_;
v_isShared_4116_ = v_isSharedCheck_4120_;
goto v_resetjp_4114_;
}
else
{
lean_inc(v_a_4113_);
lean_dec(v___x_4103_);
v___x_4115_ = lean_box(0);
v_isShared_4116_ = v_isSharedCheck_4120_;
goto v_resetjp_4114_;
}
v_resetjp_4114_:
{
lean_object* v___x_4118_; 
if (v_isShared_4116_ == 0)
{
v___x_4118_ = v___x_4115_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4119_, 0, v_a_4113_);
v___x_4118_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
return v___x_4118_;
}
}
}
}
}
else
{
lean_object* v_e_4121_; lean_object* v_o_4122_; lean_object* v_n_4123_; lean_object* v_e_4124_; lean_object* v_o_4125_; lean_object* v_n_4126_; lean_object* v___y_4128_; uint8_t v___x_4150_; 
lean_dec_ref(v_y_3998_);
v_e_4121_ = lean_ctor_get(v_val_4011_, 0);
lean_inc_ref(v_e_4121_);
v_o_4122_ = lean_ctor_get(v_val_4011_, 1);
lean_inc_ref(v_o_4122_);
v_n_4123_ = lean_ctor_get(v_val_4011_, 2);
lean_inc(v_n_4123_);
lean_dec_ref_known(v_val_4011_, 3);
v_e_4124_ = lean_ctor_get(v_val_4076_, 0);
lean_inc_ref(v_e_4124_);
v_o_4125_ = lean_ctor_get(v_val_4076_, 1);
lean_inc_ref(v_o_4125_);
v_n_4126_ = lean_ctor_get(v_val_4076_, 2);
lean_inc(v_n_4126_);
lean_dec_ref_known(v_val_4076_, 3);
v___x_4150_ = lean_nat_dec_le(v_n_4123_, v_n_4126_);
if (v___x_4150_ == 0)
{
lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___f_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; 
v___x_4151_ = lean_nat_sub(v_n_4123_, v_n_4126_);
lean_dec(v_n_4126_);
lean_dec(v_n_4123_);
v___x_4152_ = l_Lean_mkNatLit(v___x_4151_);
lean_inc_ref(v_e_4121_);
v___x_4153_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat(v_e_4121_, v___x_4152_);
lean_inc_ref(v_e_4124_);
v___f_4154_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__3), 3, 2);
lean_closure_set(v___f_4154_, 0, v___x_4153_);
lean_closure_set(v___f_4154_, 1, v_e_4124_);
lean_inc_ref(v_o_4122_);
lean_inc_ref(v_o_4125_);
v___x_4155_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_o_4125_, v_o_4122_);
v___x_4156_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4155_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_);
if (lean_obj_tag(v___x_4156_) == 0)
{
lean_object* v_a_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v_a_4157_ = lean_ctor_get(v___x_4156_, 0);
lean_inc(v_a_4157_);
lean_dec_ref_known(v___x_4156_, 1);
v___x_4158_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__13));
v___x_4159_ = lean_unsigned_to_nat(5u);
v___x_4160_ = lean_mk_empty_array_with_capacity(v___x_4159_);
v___x_4161_ = lean_array_push(v___x_4160_, v_e_4121_);
v___x_4162_ = lean_array_push(v___x_4161_, v_e_4124_);
v___x_4163_ = lean_array_push(v___x_4162_, v_o_4122_);
v___x_4164_ = lean_array_push(v___x_4163_, v_o_4125_);
v___x_4165_ = lean_array_push(v___x_4164_, v_a_4157_);
v___x_4166_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg(v___f_4154_, v___x_4158_, v___x_4165_, v_a_4002_);
lean_dec_ref(v___x_4165_);
return v___x_4166_;
}
else
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4174_; 
lean_dec_ref(v___f_4154_);
lean_dec_ref(v_o_4125_);
lean_dec_ref(v_e_4124_);
lean_dec_ref(v_o_4122_);
lean_dec_ref(v_e_4121_);
v_a_4167_ = lean_ctor_get(v___x_4156_, 0);
v_isSharedCheck_4174_ = !lean_is_exclusive(v___x_4156_);
if (v_isSharedCheck_4174_ == 0)
{
v___x_4169_ = v___x_4156_;
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v___x_4156_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4172_; 
if (v_isShared_4170_ == 0)
{
v___x_4172_ = v___x_4169_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4173_, 0, v_a_4167_);
v___x_4172_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
return v___x_4172_;
}
}
}
}
else
{
uint8_t v___x_4175_; 
v___x_4175_ = lean_nat_dec_eq(v_n_4123_, v_n_4126_);
if (v___x_4175_ == 0)
{
lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; 
v___x_4176_ = lean_nat_sub(v_n_4126_, v_n_4123_);
lean_dec(v_n_4123_);
lean_dec(v_n_4126_);
v___x_4177_ = l_Lean_mkNatLit(v___x_4176_);
lean_inc_ref(v_e_4124_);
v___x_4178_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat(v_e_4124_, v___x_4177_);
v___y_4128_ = v___x_4178_;
goto v___jp_4127_;
}
else
{
lean_dec(v_n_4126_);
lean_dec(v_n_4123_);
lean_inc_ref(v_e_4124_);
v___y_4128_ = v_e_4124_;
goto v___jp_4127_;
}
}
v___jp_4127_:
{
lean_object* v___f_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; 
lean_inc_ref(v_e_4121_);
v___f_4129_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___lam__1), 3, 2);
lean_closure_set(v___f_4129_, 0, v_e_4121_);
lean_closure_set(v___f_4129_, 1, v___y_4128_);
lean_inc_ref(v_o_4125_);
lean_inc_ref(v_o_4122_);
v___x_4130_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_o_4122_, v_o_4125_);
v___x_4131_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4130_, v_a_3999_, v_a_4000_, v_a_4001_, v_a_4002_);
if (lean_obj_tag(v___x_4131_) == 0)
{
lean_object* v_a_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; 
v_a_4132_ = lean_ctor_get(v___x_4131_, 0);
lean_inc(v_a_4132_);
lean_dec_ref_known(v___x_4131_, 1);
v___x_4133_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___closed__11));
v___x_4134_ = lean_unsigned_to_nat(5u);
v___x_4135_ = lean_mk_empty_array_with_capacity(v___x_4134_);
v___x_4136_ = lean_array_push(v___x_4135_, v_e_4121_);
v___x_4137_ = lean_array_push(v___x_4136_, v_e_4124_);
v___x_4138_ = lean_array_push(v___x_4137_, v_o_4122_);
v___x_4139_ = lean_array_push(v___x_4138_, v_o_4125_);
v___x_4140_ = lean_array_push(v___x_4139_, v_a_4132_);
v___x_4141_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applyEqLemma___redArg(v___f_4129_, v___x_4133_, v___x_4140_, v_a_4002_);
lean_dec_ref(v___x_4140_);
return v___x_4141_;
}
else
{
lean_object* v_a_4142_; lean_object* v___x_4144_; uint8_t v_isShared_4145_; uint8_t v_isSharedCheck_4149_; 
lean_dec_ref(v___f_4129_);
lean_dec_ref(v_o_4125_);
lean_dec_ref(v_e_4124_);
lean_dec_ref(v_o_4122_);
lean_dec_ref(v_e_4121_);
v_a_4142_ = lean_ctor_get(v___x_4131_, 0);
v_isSharedCheck_4149_ = !lean_is_exclusive(v___x_4131_);
if (v_isSharedCheck_4149_ == 0)
{
v___x_4144_ = v___x_4131_;
v_isShared_4145_ = v_isSharedCheck_4149_;
goto v_resetjp_4143_;
}
else
{
lean_inc(v_a_4142_);
lean_dec(v___x_4131_);
v___x_4144_ = lean_box(0);
v_isShared_4145_ = v_isSharedCheck_4149_;
goto v_resetjp_4143_;
}
v_resetjp_4143_:
{
lean_object* v___x_4147_; 
if (v_isShared_4145_ == 0)
{
v___x_4147_ = v___x_4144_;
goto v_reusejp_4146_;
}
else
{
lean_object* v_reuseFailAlloc_4148_; 
v_reuseFailAlloc_4148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4148_, 0, v_a_4142_);
v___x_4147_ = v_reuseFailAlloc_4148_;
goto v_reusejp_4146_;
}
v_reusejp_4146_:
{
return v___x_4147_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4179_; lean_object* v___x_4181_; 
lean_dec(v_a_4013_);
lean_dec(v_val_4011_);
lean_dec_ref(v_y_3998_);
lean_dec_ref(v_x_3997_);
v___x_4179_ = lean_box(0);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v___x_4179_);
v___x_4181_ = v___x_4015_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v___x_4179_);
v___x_4181_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4180_;
}
v_reusejp_4180_:
{
return v___x_4181_;
}
}
}
}
else
{
lean_object* v_a_4184_; lean_object* v___x_4186_; uint8_t v_isShared_4187_; uint8_t v_isSharedCheck_4191_; 
lean_dec(v_val_4011_);
lean_dec_ref(v_y_3998_);
lean_dec_ref(v_x_3997_);
v_a_4184_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4191_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4191_ == 0)
{
v___x_4186_ = v___x_4012_;
v_isShared_4187_ = v_isSharedCheck_4191_;
goto v_resetjp_4185_;
}
else
{
lean_inc(v_a_4184_);
lean_dec(v___x_4012_);
v___x_4186_ = lean_box(0);
v_isShared_4187_ = v_isSharedCheck_4191_;
goto v_resetjp_4185_;
}
v_resetjp_4185_:
{
lean_object* v___x_4189_; 
if (v_isShared_4187_ == 0)
{
v___x_4189_ = v___x_4186_;
goto v_reusejp_4188_;
}
else
{
lean_object* v_reuseFailAlloc_4190_; 
v_reuseFailAlloc_4190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4190_, 0, v_a_4184_);
v___x_4189_ = v_reuseFailAlloc_4190_;
goto v_reusejp_4188_;
}
v_reusejp_4188_:
{
return v___x_4189_;
}
}
}
}
else
{
lean_object* v___x_4192_; lean_object* v___x_4194_; 
lean_dec(v_a_4007_);
lean_dec_ref(v_y_3998_);
lean_dec_ref(v_x_3997_);
v___x_4192_ = lean_box(0);
if (v_isShared_4010_ == 0)
{
lean_ctor_set(v___x_4009_, 0, v___x_4192_);
v___x_4194_ = v___x_4009_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v___x_4192_);
v___x_4194_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
return v___x_4194_;
}
}
}
}
else
{
lean_object* v_a_4197_; lean_object* v___x_4199_; uint8_t v_isShared_4200_; uint8_t v_isSharedCheck_4204_; 
lean_dec_ref(v_y_3998_);
lean_dec_ref(v_x_3997_);
v_a_4197_ = lean_ctor_get(v___x_4006_, 0);
v_isSharedCheck_4204_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4204_ == 0)
{
v___x_4199_ = v___x_4006_;
v_isShared_4200_ = v_isSharedCheck_4204_;
goto v_resetjp_4198_;
}
else
{
lean_inc(v_a_4197_);
lean_dec(v___x_4006_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg___boxed(lean_object* v_x_4205_, lean_object* v_y_4206_, lean_object* v_a_4207_, lean_object* v_a_4208_, lean_object* v_a_4209_, lean_object* v_a_4210_, lean_object* v_a_4211_){
_start:
{
lean_object* v_res_4212_; 
v_res_4212_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg(v_x_4205_, v_y_4206_, v_a_4207_, v_a_4208_, v_a_4209_, v_a_4210_);
lean_dec(v_a_4210_);
lean_dec_ref(v_a_4209_);
lean_dec(v_a_4208_);
lean_dec_ref(v_a_4207_);
return v_res_4212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr(lean_object* v_x_4213_, lean_object* v_y_4214_, lean_object* v_a_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_, lean_object* v_a_4218_, lean_object* v_a_4219_, lean_object* v_a_4220_, lean_object* v_a_4221_){
_start:
{
lean_object* v___x_4223_; 
v___x_4223_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg(v_x_4213_, v_y_4214_, v_a_4218_, v_a_4219_, v_a_4220_, v_a_4221_);
return v___x_4223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___boxed(lean_object* v_x_4224_, lean_object* v_y_4225_, lean_object* v_a_4226_, lean_object* v_a_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_, lean_object* v_a_4230_, lean_object* v_a_4231_, lean_object* v_a_4232_, lean_object* v_a_4233_){
_start:
{
lean_object* v_res_4234_; 
v_res_4234_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr(v_x_4224_, v_y_4225_, v_a_4226_, v_a_4227_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_, v_a_4232_);
lean_dec(v_a_4232_);
lean_dec_ref(v_a_4231_);
lean_dec(v_a_4230_);
lean_dec_ref(v_a_4229_);
lean_dec(v_a_4228_);
lean_dec_ref(v_a_4227_);
lean_dec(v_a_4226_);
return v_res_4234_;
}
}
static lean_object* _init_l_Nat_reduceEqDiff___redArg___closed__2(void){
_start:
{
lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; 
v___x_4238_ = lean_box(0);
v___x_4239_ = ((lean_object*)(l_Nat_reduceEqDiff___redArg___closed__1));
v___x_4240_ = l_Lean_mkConst(v___x_4239_, v___x_4238_);
return v___x_4240_;
}
}
static lean_object* _init_l_Nat_reduceEqDiff___redArg___closed__5(void){
_start:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; 
v___x_4244_ = lean_box(0);
v___x_4245_ = ((lean_object*)(l_Nat_reduceEqDiff___redArg___closed__4));
v___x_4246_ = l_Lean_mkConst(v___x_4245_, v___x_4244_);
return v___x_4246_;
}
}
static lean_object* _init_l_Nat_reduceEqDiff___redArg___closed__8(void){
_start:
{
lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; 
v___x_4250_ = lean_box(0);
v___x_4251_ = ((lean_object*)(l_Nat_reduceEqDiff___redArg___closed__7));
v___x_4252_ = l_Lean_mkConst(v___x_4251_, v___x_4250_);
return v___x_4252_;
}
}
static lean_object* _init_l_Nat_reduceEqDiff___redArg___closed__11(void){
_start:
{
lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; 
v___x_4256_ = lean_box(0);
v___x_4257_ = ((lean_object*)(l_Nat_reduceEqDiff___redArg___closed__10));
v___x_4258_ = l_Lean_mkConst(v___x_4257_, v___x_4256_);
return v___x_4258_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceEqDiff___redArg(lean_object* v_e_4259_, lean_object* v_a_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_, lean_object* v_a_4263_){
_start:
{
lean_object* v___x_4265_; lean_object* v___x_4266_; uint8_t v___x_4267_; 
v___x_4265_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat___closed__1));
v___x_4266_ = lean_unsigned_to_nat(3u);
v___x_4267_ = l_Lean_Expr_isAppOfArity(v_e_4259_, v___x_4265_, v___x_4266_);
if (v___x_4267_ == 0)
{
lean_object* v___x_4268_; lean_object* v___x_4269_; 
lean_dec_ref(v_e_4259_);
v___x_4268_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_4269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4269_, 0, v___x_4268_);
return v___x_4269_;
}
else
{
lean_object* v___x_4270_; lean_object* v_x_4271_; lean_object* v_y_4272_; lean_object* v___x_4273_; 
v___x_4270_ = l_Lean_Expr_appFn_x21(v_e_4259_);
v_x_4271_ = l_Lean_Expr_appArg_x21(v___x_4270_);
lean_dec_ref(v___x_4270_);
v_y_4272_ = l_Lean_Expr_appArg_x21(v_e_4259_);
v___x_4273_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg(v_x_4271_, v_y_4272_, v_a_4260_, v_a_4261_, v_a_4262_, v_a_4263_);
if (lean_obj_tag(v___x_4273_) == 0)
{
lean_object* v_a_4274_; lean_object* v___x_4276_; uint8_t v_isShared_4277_; uint8_t v_isSharedCheck_4398_; 
v_a_4274_ = lean_ctor_get(v___x_4273_, 0);
v_isSharedCheck_4398_ = !lean_is_exclusive(v___x_4273_);
if (v_isSharedCheck_4398_ == 0)
{
v___x_4276_ = v___x_4273_;
v_isShared_4277_ = v_isSharedCheck_4398_;
goto v_resetjp_4275_;
}
else
{
lean_inc(v_a_4274_);
lean_dec(v___x_4273_);
v___x_4276_ = lean_box(0);
v_isShared_4277_ = v_isSharedCheck_4398_;
goto v_resetjp_4275_;
}
v_resetjp_4275_:
{
if (lean_obj_tag(v_a_4274_) == 0)
{
lean_object* v___x_4278_; lean_object* v___x_4280_; 
lean_dec_ref(v_e_4259_);
v___x_4278_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_4277_ == 0)
{
lean_ctor_set(v___x_4276_, 0, v___x_4278_);
v___x_4280_ = v___x_4276_;
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
else
{
lean_object* v_val_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4397_; 
v_val_4282_ = lean_ctor_get(v_a_4274_, 0);
v_isSharedCheck_4397_ = !lean_is_exclusive(v_a_4274_);
if (v_isSharedCheck_4397_ == 0)
{
v___x_4284_ = v_a_4274_;
v_isShared_4285_ = v_isSharedCheck_4397_;
goto v_resetjp_4283_;
}
else
{
lean_inc(v_val_4282_);
lean_dec(v_a_4274_);
v___x_4284_ = lean_box(0);
v_isShared_4285_ = v_isSharedCheck_4397_;
goto v_resetjp_4283_;
}
v_resetjp_4283_:
{
switch(lean_obj_tag(v_val_4282_))
{
case 0:
{
uint8_t v_b_4286_; 
lean_del_object(v___x_4276_);
v_b_4286_ = lean_ctor_get_uint8(v_val_4282_, 0);
lean_dec_ref_known(v_val_4282_, 0);
if (v_b_4286_ == 0)
{
lean_object* v___x_4287_; 
lean_inc_ref(v_e_4259_);
v___x_4287_ = l_Lean_Meta_mkDecide(v_e_4259_, v_a_4260_, v_a_4261_, v_a_4262_, v_a_4263_);
if (lean_obj_tag(v___x_4287_) == 0)
{
lean_object* v_a_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; 
v_a_4288_ = lean_ctor_get(v___x_4287_, 0);
lean_inc(v_a_4288_);
lean_dec_ref_known(v___x_4287_, 1);
v___x_4289_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3);
v___x_4290_ = l_Lean_Meta_mkEqRefl(v___x_4289_, v_a_4260_, v_a_4261_, v_a_4262_, v_a_4263_);
if (lean_obj_tag(v___x_4290_) == 0)
{
lean_object* v_a_4291_; lean_object* v___x_4293_; uint8_t v_isShared_4294_; uint8_t v_isSharedCheck_4311_; 
v_a_4291_ = lean_ctor_get(v___x_4290_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4290_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4293_ = v___x_4290_;
v_isShared_4294_ = v_isSharedCheck_4311_;
goto v_resetjp_4292_;
}
else
{
lean_inc(v_a_4291_);
lean_dec(v___x_4290_);
v___x_4293_ = lean_box(0);
v_isShared_4294_ = v_isSharedCheck_4311_;
goto v_resetjp_4292_;
}
v_resetjp_4292_:
{
lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4304_; 
v___x_4295_ = lean_obj_once(&l_Nat_reduceEqDiff___redArg___closed__2, &l_Nat_reduceEqDiff___redArg___closed__2_once, _init_l_Nat_reduceEqDiff___redArg___closed__2);
v___x_4296_ = l_Lean_Expr_appArg_x21(v_a_4288_);
lean_dec(v_a_4288_);
v___x_4297_ = lean_mk_empty_array_with_capacity(v___x_4266_);
v___x_4298_ = lean_array_push(v___x_4297_, v_e_4259_);
v___x_4299_ = lean_array_push(v___x_4298_, v___x_4296_);
v___x_4300_ = lean_array_push(v___x_4299_, v_a_4291_);
v___x_4301_ = l_Lean_mkAppN(v___x_4295_, v___x_4300_);
lean_dec_ref(v___x_4300_);
v___x_4302_ = lean_obj_once(&l_Nat_reduceEqDiff___redArg___closed__5, &l_Nat_reduceEqDiff___redArg___closed__5_once, _init_l_Nat_reduceEqDiff___redArg___closed__5);
if (v_isShared_4285_ == 0)
{
lean_ctor_set(v___x_4284_, 0, v___x_4301_);
v___x_4304_ = v___x_4284_;
goto v_reusejp_4303_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v___x_4301_);
v___x_4304_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4303_;
}
v_reusejp_4303_:
{
lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4308_; 
v___x_4305_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4305_, 0, v___x_4302_);
lean_ctor_set(v___x_4305_, 1, v___x_4304_);
lean_ctor_set_uint8(v___x_4305_, sizeof(void*)*2, v___x_4267_);
v___x_4306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4306_, 0, v___x_4305_);
if (v_isShared_4294_ == 0)
{
lean_ctor_set(v___x_4293_, 0, v___x_4306_);
v___x_4308_ = v___x_4293_;
goto v_reusejp_4307_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v___x_4306_);
v___x_4308_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4307_;
}
v_reusejp_4307_:
{
return v___x_4308_;
}
}
}
}
else
{
lean_object* v_a_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4319_; 
lean_dec(v_a_4288_);
lean_del_object(v___x_4284_);
lean_dec_ref(v_e_4259_);
v_a_4312_ = lean_ctor_get(v___x_4290_, 0);
v_isSharedCheck_4319_ = !lean_is_exclusive(v___x_4290_);
if (v_isSharedCheck_4319_ == 0)
{
v___x_4314_ = v___x_4290_;
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_a_4312_);
lean_dec(v___x_4290_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v___x_4317_; 
if (v_isShared_4315_ == 0)
{
v___x_4317_ = v___x_4314_;
goto v_reusejp_4316_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_a_4312_);
v___x_4317_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4316_;
}
v_reusejp_4316_:
{
return v___x_4317_;
}
}
}
}
else
{
lean_object* v_a_4320_; lean_object* v___x_4322_; uint8_t v_isShared_4323_; uint8_t v_isSharedCheck_4327_; 
lean_del_object(v___x_4284_);
lean_dec_ref(v_e_4259_);
v_a_4320_ = lean_ctor_get(v___x_4287_, 0);
v_isSharedCheck_4327_ = !lean_is_exclusive(v___x_4287_);
if (v_isSharedCheck_4327_ == 0)
{
v___x_4322_ = v___x_4287_;
v_isShared_4323_ = v_isSharedCheck_4327_;
goto v_resetjp_4321_;
}
else
{
lean_inc(v_a_4320_);
lean_dec(v___x_4287_);
v___x_4322_ = lean_box(0);
v_isShared_4323_ = v_isSharedCheck_4327_;
goto v_resetjp_4321_;
}
v_resetjp_4321_:
{
lean_object* v___x_4325_; 
if (v_isShared_4323_ == 0)
{
v___x_4325_ = v___x_4322_;
goto v_reusejp_4324_;
}
else
{
lean_object* v_reuseFailAlloc_4326_; 
v_reuseFailAlloc_4326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4326_, 0, v_a_4320_);
v___x_4325_ = v_reuseFailAlloc_4326_;
goto v_reusejp_4324_;
}
v_reusejp_4324_:
{
return v___x_4325_;
}
}
}
}
else
{
lean_object* v___x_4328_; 
lean_inc_ref(v_e_4259_);
v___x_4328_ = l_Lean_Meta_mkDecide(v_e_4259_, v_a_4260_, v_a_4261_, v_a_4262_, v_a_4263_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_object* v_a_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; 
v_a_4329_ = lean_ctor_get(v___x_4328_, 0);
lean_inc(v_a_4329_);
lean_dec_ref_known(v___x_4328_, 1);
v___x_4330_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6);
v___x_4331_ = l_Lean_Meta_mkEqRefl(v___x_4330_, v_a_4260_, v_a_4261_, v_a_4262_, v_a_4263_);
if (lean_obj_tag(v___x_4331_) == 0)
{
lean_object* v_a_4332_; lean_object* v___x_4334_; uint8_t v_isShared_4335_; uint8_t v_isSharedCheck_4352_; 
v_a_4332_ = lean_ctor_get(v___x_4331_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4331_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4334_ = v___x_4331_;
v_isShared_4335_ = v_isSharedCheck_4352_;
goto v_resetjp_4333_;
}
else
{
lean_inc(v_a_4332_);
lean_dec(v___x_4331_);
v___x_4334_ = lean_box(0);
v_isShared_4335_ = v_isSharedCheck_4352_;
goto v_resetjp_4333_;
}
v_resetjp_4333_:
{
lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4345_; 
v___x_4336_ = lean_obj_once(&l_Nat_reduceEqDiff___redArg___closed__8, &l_Nat_reduceEqDiff___redArg___closed__8_once, _init_l_Nat_reduceEqDiff___redArg___closed__8);
v___x_4337_ = l_Lean_Expr_appArg_x21(v_a_4329_);
lean_dec(v_a_4329_);
v___x_4338_ = lean_mk_empty_array_with_capacity(v___x_4266_);
v___x_4339_ = lean_array_push(v___x_4338_, v_e_4259_);
v___x_4340_ = lean_array_push(v___x_4339_, v___x_4337_);
v___x_4341_ = lean_array_push(v___x_4340_, v_a_4332_);
v___x_4342_ = l_Lean_mkAppN(v___x_4336_, v___x_4341_);
lean_dec_ref(v___x_4341_);
v___x_4343_ = lean_obj_once(&l_Nat_reduceEqDiff___redArg___closed__11, &l_Nat_reduceEqDiff___redArg___closed__11_once, _init_l_Nat_reduceEqDiff___redArg___closed__11);
if (v_isShared_4285_ == 0)
{
lean_ctor_set(v___x_4284_, 0, v___x_4342_);
v___x_4345_ = v___x_4284_;
goto v_reusejp_4344_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v___x_4342_);
v___x_4345_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4344_;
}
v_reusejp_4344_:
{
lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4349_; 
v___x_4346_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4346_, 0, v___x_4343_);
lean_ctor_set(v___x_4346_, 1, v___x_4345_);
lean_ctor_set_uint8(v___x_4346_, sizeof(void*)*2, v___x_4267_);
v___x_4347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4347_, 0, v___x_4346_);
if (v_isShared_4335_ == 0)
{
lean_ctor_set(v___x_4334_, 0, v___x_4347_);
v___x_4349_ = v___x_4334_;
goto v_reusejp_4348_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v___x_4347_);
v___x_4349_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4348_;
}
v_reusejp_4348_:
{
return v___x_4349_;
}
}
}
}
else
{
lean_object* v_a_4353_; lean_object* v___x_4355_; uint8_t v_isShared_4356_; uint8_t v_isSharedCheck_4360_; 
lean_dec(v_a_4329_);
lean_del_object(v___x_4284_);
lean_dec_ref(v_e_4259_);
v_a_4353_ = lean_ctor_get(v___x_4331_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4331_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4355_ = v___x_4331_;
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
else
{
lean_inc(v_a_4353_);
lean_dec(v___x_4331_);
v___x_4355_ = lean_box(0);
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
v_resetjp_4354_:
{
lean_object* v___x_4358_; 
if (v_isShared_4356_ == 0)
{
v___x_4358_ = v___x_4355_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v_a_4353_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
}
}
else
{
lean_object* v_a_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4368_; 
lean_del_object(v___x_4284_);
lean_dec_ref(v_e_4259_);
v_a_4361_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4368_ == 0)
{
v___x_4363_ = v___x_4328_;
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_a_4361_);
lean_dec(v___x_4328_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v___x_4366_; 
if (v_isShared_4364_ == 0)
{
v___x_4366_ = v___x_4363_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v_a_4361_);
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
}
case 1:
{
lean_object* v_p_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4384_; 
lean_dec_ref(v_e_4259_);
v_p_4369_ = lean_ctor_get(v_val_4282_, 0);
v_isSharedCheck_4384_ = !lean_is_exclusive(v_val_4282_);
if (v_isSharedCheck_4384_ == 0)
{
v___x_4371_ = v_val_4282_;
v_isShared_4372_ = v_isSharedCheck_4384_;
goto v_resetjp_4370_;
}
else
{
lean_inc(v_p_4369_);
lean_dec(v_val_4282_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4384_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4373_; lean_object* v___x_4375_; 
v___x_4373_ = lean_obj_once(&l_Nat_reduceEqDiff___redArg___closed__5, &l_Nat_reduceEqDiff___redArg___closed__5_once, _init_l_Nat_reduceEqDiff___redArg___closed__5);
if (v_isShared_4285_ == 0)
{
lean_ctor_set(v___x_4284_, 0, v_p_4369_);
v___x_4375_ = v___x_4284_;
goto v_reusejp_4374_;
}
else
{
lean_object* v_reuseFailAlloc_4383_; 
v_reuseFailAlloc_4383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4383_, 0, v_p_4369_);
v___x_4375_ = v_reuseFailAlloc_4383_;
goto v_reusejp_4374_;
}
v_reusejp_4374_:
{
lean_object* v___x_4376_; lean_object* v___x_4378_; 
v___x_4376_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4376_, 0, v___x_4373_);
lean_ctor_set(v___x_4376_, 1, v___x_4375_);
lean_ctor_set_uint8(v___x_4376_, sizeof(void*)*2, v___x_4267_);
if (v_isShared_4372_ == 0)
{
lean_ctor_set_tag(v___x_4371_, 0);
lean_ctor_set(v___x_4371_, 0, v___x_4376_);
v___x_4378_ = v___x_4371_;
goto v_reusejp_4377_;
}
else
{
lean_object* v_reuseFailAlloc_4382_; 
v_reuseFailAlloc_4382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4382_, 0, v___x_4376_);
v___x_4378_ = v_reuseFailAlloc_4382_;
goto v_reusejp_4377_;
}
v_reusejp_4377_:
{
lean_object* v___x_4380_; 
if (v_isShared_4277_ == 0)
{
lean_ctor_set(v___x_4276_, 0, v___x_4378_);
v___x_4380_ = v___x_4276_;
goto v_reusejp_4379_;
}
else
{
lean_object* v_reuseFailAlloc_4381_; 
v_reuseFailAlloc_4381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4381_, 0, v___x_4378_);
v___x_4380_ = v_reuseFailAlloc_4381_;
goto v_reusejp_4379_;
}
v_reusejp_4379_:
{
return v___x_4380_;
}
}
}
}
}
default: 
{
lean_object* v_x_4385_; lean_object* v_y_4386_; lean_object* v_p_4387_; lean_object* v___x_4388_; lean_object* v___x_4390_; 
lean_dec_ref(v_e_4259_);
v_x_4385_ = lean_ctor_get(v_val_4282_, 0);
lean_inc_ref(v_x_4385_);
v_y_4386_ = lean_ctor_get(v_val_4282_, 1);
lean_inc_ref(v_y_4386_);
v_p_4387_ = lean_ctor_get(v_val_4282_, 2);
lean_inc_ref(v_p_4387_);
lean_dec_ref_known(v_val_4282_, 3);
v___x_4388_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkEqNat(v_x_4385_, v_y_4386_);
if (v_isShared_4285_ == 0)
{
lean_ctor_set(v___x_4284_, 0, v_p_4387_);
v___x_4390_ = v___x_4284_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4396_; 
v_reuseFailAlloc_4396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4396_, 0, v_p_4387_);
v___x_4390_ = v_reuseFailAlloc_4396_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4394_; 
v___x_4391_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4391_, 0, v___x_4388_);
lean_ctor_set(v___x_4391_, 1, v___x_4390_);
lean_ctor_set_uint8(v___x_4391_, sizeof(void*)*2, v___x_4267_);
v___x_4392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4392_, 0, v___x_4391_);
if (v_isShared_4277_ == 0)
{
lean_ctor_set(v___x_4276_, 0, v___x_4392_);
v___x_4394_ = v___x_4276_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v___x_4392_);
v___x_4394_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
return v___x_4394_;
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
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4406_; 
lean_dec_ref(v_e_4259_);
v_a_4399_ = lean_ctor_get(v___x_4273_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v___x_4273_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4401_ = v___x_4273_;
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v___x_4273_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4404_; 
if (v_isShared_4402_ == 0)
{
v___x_4404_ = v___x_4401_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_a_4399_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceEqDiff___redArg___boxed(lean_object* v_e_4407_, lean_object* v_a_4408_, lean_object* v_a_4409_, lean_object* v_a_4410_, lean_object* v_a_4411_, lean_object* v_a_4412_){
_start:
{
lean_object* v_res_4413_; 
v_res_4413_ = l_Nat_reduceEqDiff___redArg(v_e_4407_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_);
lean_dec(v_a_4411_);
lean_dec_ref(v_a_4410_);
lean_dec(v_a_4409_);
lean_dec_ref(v_a_4408_);
return v_res_4413_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceEqDiff(lean_object* v_e_4414_, lean_object* v_a_4415_, lean_object* v_a_4416_, lean_object* v_a_4417_, lean_object* v_a_4418_, lean_object* v_a_4419_, lean_object* v_a_4420_, lean_object* v_a_4421_){
_start:
{
lean_object* v___x_4423_; 
v___x_4423_ = l_Nat_reduceEqDiff___redArg(v_e_4414_, v_a_4418_, v_a_4419_, v_a_4420_, v_a_4421_);
return v___x_4423_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceEqDiff___boxed(lean_object* v_e_4424_, lean_object* v_a_4425_, lean_object* v_a_4426_, lean_object* v_a_4427_, lean_object* v_a_4428_, lean_object* v_a_4429_, lean_object* v_a_4430_, lean_object* v_a_4431_, lean_object* v_a_4432_){
_start:
{
lean_object* v_res_4433_; 
v_res_4433_ = l_Nat_reduceEqDiff(v_e_4424_, v_a_4425_, v_a_4426_, v_a_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_);
lean_dec(v_a_4431_);
lean_dec_ref(v_a_4430_);
lean_dec(v_a_4429_);
lean_dec_ref(v_a_4428_);
lean_dec(v_a_4427_);
lean_dec_ref(v_a_4426_);
lean_dec(v_a_4425_);
return v_res_4433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; 
v___x_4451_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_));
v___x_4452_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_));
v___x_4453_ = lean_alloc_closure((void*)(l_Nat_reduceEqDiff___boxed), 9, 0);
v___x_4454_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_4451_, v___x_4452_, v___x_4453_);
return v___x_4454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27____boxed(lean_object* v_a_4455_){
_start:
{
lean_object* v_res_4456_; 
v_res_4456_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_();
return v_res_4456_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_4457_; lean_object* v___x_4458_; 
v___x_4457_ = lean_alloc_closure((void*)(l_Nat_reduceEqDiff___boxed), 9, 0);
v___x_4458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4458_, 0, v___x_4457_);
return v___x_4458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_4460_; uint8_t v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; 
v___x_4460_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_));
v___x_4461_ = 1;
v___x_4462_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29_);
v___x_4463_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_4460_, v___x_4461_, v___x_4462_);
return v___x_4463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29____boxed(lean_object* v_a_4464_){
_start:
{
lean_object* v_res_4465_; 
v_res_4465_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29_();
return v_res_4465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_4467_; uint8_t v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___x_4467_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_));
v___x_4468_ = 1;
v___x_4469_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29_);
v___x_4470_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_4467_, v___x_4468_, v___x_4469_);
return v___x_4470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_31____boxed(lean_object* v_a_4471_){
_start:
{
lean_object* v_res_4472_; 
v_res_4472_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_31_();
return v_res_4472_;
}
}
static lean_object* _init_l_Nat_reduceBeqDiff___redArg___closed__2(void){
_start:
{
lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; 
v___x_4478_ = lean_box(0);
v___x_4479_ = ((lean_object*)(l_Nat_reduceBeqDiff___redArg___closed__1));
v___x_4480_ = l_Lean_mkConst(v___x_4479_, v___x_4478_);
return v___x_4480_;
}
}
static lean_object* _init_l_Nat_reduceBeqDiff___redArg___closed__5(void){
_start:
{
lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; 
v___x_4486_ = lean_box(0);
v___x_4487_ = ((lean_object*)(l_Nat_reduceBeqDiff___redArg___closed__4));
v___x_4488_ = l_Lean_mkConst(v___x_4487_, v___x_4486_);
return v___x_4488_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBeqDiff___redArg(lean_object* v_e_4489_, lean_object* v_a_4490_, lean_object* v_a_4491_, lean_object* v_a_4492_, lean_object* v_a_4493_){
_start:
{
lean_object* v___x_4495_; lean_object* v___x_4496_; uint8_t v___x_4497_; 
v___x_4495_ = ((lean_object*)(l_Nat_reduceBEq___redArg___closed__2));
v___x_4496_ = lean_unsigned_to_nat(4u);
v___x_4497_ = l_Lean_Expr_isAppOfArity(v_e_4489_, v___x_4495_, v___x_4496_);
if (v___x_4497_ == 0)
{
lean_object* v___x_4498_; lean_object* v___x_4499_; 
v___x_4498_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_4499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4499_, 0, v___x_4498_);
return v___x_4499_;
}
else
{
lean_object* v___x_4500_; lean_object* v_x_4501_; lean_object* v_y_4502_; lean_object* v___x_4503_; 
v___x_4500_ = l_Lean_Expr_appFn_x21(v_e_4489_);
v_x_4501_ = l_Lean_Expr_appArg_x21(v___x_4500_);
lean_dec_ref(v___x_4500_);
v_y_4502_ = l_Lean_Expr_appArg_x21(v_e_4489_);
lean_inc_ref(v_y_4502_);
lean_inc_ref(v_x_4501_);
v___x_4503_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg(v_x_4501_, v_y_4502_, v_a_4490_, v_a_4491_, v_a_4492_, v_a_4493_);
if (lean_obj_tag(v___x_4503_) == 0)
{
lean_object* v_a_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4566_; 
v_a_4504_ = lean_ctor_get(v___x_4503_, 0);
v_isSharedCheck_4566_ = !lean_is_exclusive(v___x_4503_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4506_ = v___x_4503_;
v_isShared_4507_ = v_isSharedCheck_4566_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_a_4504_);
lean_dec(v___x_4503_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4566_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
lean_object* v___y_4509_; 
if (lean_obj_tag(v_a_4504_) == 0)
{
lean_object* v___x_4516_; lean_object* v___x_4517_; 
lean_del_object(v___x_4506_);
lean_dec_ref(v_y_4502_);
lean_dec_ref(v_x_4501_);
v___x_4516_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_4517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4517_, 0, v___x_4516_);
return v___x_4517_;
}
else
{
lean_object* v_val_4518_; lean_object* v___x_4520_; uint8_t v_isShared_4521_; uint8_t v_isSharedCheck_4565_; 
v_val_4518_ = lean_ctor_get(v_a_4504_, 0);
v_isSharedCheck_4565_ = !lean_is_exclusive(v_a_4504_);
if (v_isSharedCheck_4565_ == 0)
{
v___x_4520_ = v_a_4504_;
v_isShared_4521_ = v_isSharedCheck_4565_;
goto v_resetjp_4519_;
}
else
{
lean_inc(v_val_4518_);
lean_dec(v_a_4504_);
v___x_4520_ = lean_box(0);
v_isShared_4521_ = v_isSharedCheck_4565_;
goto v_resetjp_4519_;
}
v_resetjp_4519_:
{
switch(lean_obj_tag(v_val_4518_))
{
case 0:
{
uint8_t v_b_4522_; 
lean_del_object(v___x_4520_);
lean_dec_ref(v_y_4502_);
lean_dec_ref(v_x_4501_);
v_b_4522_ = lean_ctor_get_uint8(v_val_4518_, 0);
lean_dec_ref_known(v_val_4518_, 0);
if (v_b_4522_ == 0)
{
lean_object* v___x_4523_; 
v___x_4523_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3);
v___y_4509_ = v___x_4523_;
goto v___jp_4508_;
}
else
{
lean_object* v___x_4524_; 
v___x_4524_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6);
v___y_4509_ = v___x_4524_;
goto v___jp_4508_;
}
}
case 1:
{
lean_object* v_p_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4545_; 
lean_del_object(v___x_4506_);
v_p_4525_ = lean_ctor_get(v_val_4518_, 0);
v_isSharedCheck_4545_ = !lean_is_exclusive(v_val_4518_);
if (v_isSharedCheck_4545_ == 0)
{
v___x_4527_ = v_val_4518_;
v_isShared_4528_ = v_isSharedCheck_4545_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_p_4525_);
lean_dec(v_val_4518_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4545_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4538_; 
v___x_4529_ = lean_obj_once(&l_Nat_reduceBeqDiff___redArg___closed__2, &l_Nat_reduceBeqDiff___redArg___closed__2_once, _init_l_Nat_reduceBeqDiff___redArg___closed__2);
v___x_4530_ = lean_unsigned_to_nat(3u);
v___x_4531_ = lean_mk_empty_array_with_capacity(v___x_4530_);
v___x_4532_ = lean_array_push(v___x_4531_, v_x_4501_);
v___x_4533_ = lean_array_push(v___x_4532_, v_y_4502_);
v___x_4534_ = lean_array_push(v___x_4533_, v_p_4525_);
v___x_4535_ = l_Lean_mkAppN(v___x_4529_, v___x_4534_);
lean_dec_ref(v___x_4534_);
v___x_4536_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3);
if (v_isShared_4521_ == 0)
{
lean_ctor_set(v___x_4520_, 0, v___x_4535_);
v___x_4538_ = v___x_4520_;
goto v_reusejp_4537_;
}
else
{
lean_object* v_reuseFailAlloc_4544_; 
v_reuseFailAlloc_4544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4544_, 0, v___x_4535_);
v___x_4538_ = v_reuseFailAlloc_4544_;
goto v_reusejp_4537_;
}
v_reusejp_4537_:
{
lean_object* v___x_4539_; lean_object* v___x_4541_; 
v___x_4539_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4539_, 0, v___x_4536_);
lean_ctor_set(v___x_4539_, 1, v___x_4538_);
lean_ctor_set_uint8(v___x_4539_, sizeof(void*)*2, v___x_4497_);
if (v_isShared_4528_ == 0)
{
lean_ctor_set_tag(v___x_4527_, 0);
lean_ctor_set(v___x_4527_, 0, v___x_4539_);
v___x_4541_ = v___x_4527_;
goto v_reusejp_4540_;
}
else
{
lean_object* v_reuseFailAlloc_4543_; 
v_reuseFailAlloc_4543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4543_, 0, v___x_4539_);
v___x_4541_ = v_reuseFailAlloc_4543_;
goto v_reusejp_4540_;
}
v_reusejp_4540_:
{
lean_object* v___x_4542_; 
v___x_4542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4542_, 0, v___x_4541_);
return v___x_4542_;
}
}
}
}
default: 
{
lean_object* v_x_4546_; lean_object* v_y_4547_; lean_object* v_p_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4560_; 
lean_del_object(v___x_4506_);
v_x_4546_ = lean_ctor_get(v_val_4518_, 0);
lean_inc_ref_n(v_x_4546_, 2);
v_y_4547_ = lean_ctor_get(v_val_4518_, 1);
lean_inc_ref_n(v_y_4547_, 2);
v_p_4548_ = lean_ctor_get(v_val_4518_, 2);
lean_inc_ref(v_p_4548_);
lean_dec_ref_known(v_val_4518_, 3);
v___x_4549_ = lean_obj_once(&l_Nat_reduceBeqDiff___redArg___closed__5, &l_Nat_reduceBeqDiff___redArg___closed__5_once, _init_l_Nat_reduceBeqDiff___redArg___closed__5);
v___x_4550_ = lean_unsigned_to_nat(5u);
v___x_4551_ = lean_mk_empty_array_with_capacity(v___x_4550_);
v___x_4552_ = lean_array_push(v___x_4551_, v_x_4501_);
v___x_4553_ = lean_array_push(v___x_4552_, v_y_4502_);
v___x_4554_ = lean_array_push(v___x_4553_, v_x_4546_);
v___x_4555_ = lean_array_push(v___x_4554_, v_y_4547_);
v___x_4556_ = lean_array_push(v___x_4555_, v_p_4548_);
v___x_4557_ = l_Lean_mkAppN(v___x_4549_, v___x_4556_);
lean_dec_ref(v___x_4556_);
v___x_4558_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNat(v_x_4546_, v_y_4547_);
if (v_isShared_4521_ == 0)
{
lean_ctor_set(v___x_4520_, 0, v___x_4557_);
v___x_4560_ = v___x_4520_;
goto v_reusejp_4559_;
}
else
{
lean_object* v_reuseFailAlloc_4564_; 
v_reuseFailAlloc_4564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4564_, 0, v___x_4557_);
v___x_4560_ = v_reuseFailAlloc_4564_;
goto v_reusejp_4559_;
}
v_reusejp_4559_:
{
lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; 
v___x_4561_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4561_, 0, v___x_4558_);
lean_ctor_set(v___x_4561_, 1, v___x_4560_);
lean_ctor_set_uint8(v___x_4561_, sizeof(void*)*2, v___x_4497_);
v___x_4562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4562_, 0, v___x_4561_);
v___x_4563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4563_, 0, v___x_4562_);
return v___x_4563_;
}
}
}
}
}
v___jp_4508_:
{
lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4514_; 
v___x_4510_ = lean_box(0);
lean_inc_ref(v___y_4509_);
v___x_4511_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4511_, 0, v___y_4509_);
lean_ctor_set(v___x_4511_, 1, v___x_4510_);
lean_ctor_set_uint8(v___x_4511_, sizeof(void*)*2, v___x_4497_);
v___x_4512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4511_);
if (v_isShared_4507_ == 0)
{
lean_ctor_set(v___x_4506_, 0, v___x_4512_);
v___x_4514_ = v___x_4506_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4515_; 
v_reuseFailAlloc_4515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4515_, 0, v___x_4512_);
v___x_4514_ = v_reuseFailAlloc_4515_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
return v___x_4514_;
}
}
}
}
else
{
lean_object* v_a_4567_; lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4574_; 
lean_dec_ref(v_y_4502_);
lean_dec_ref(v_x_4501_);
v_a_4567_ = lean_ctor_get(v___x_4503_, 0);
v_isSharedCheck_4574_ = !lean_is_exclusive(v___x_4503_);
if (v_isSharedCheck_4574_ == 0)
{
v___x_4569_ = v___x_4503_;
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
else
{
lean_inc(v_a_4567_);
lean_dec(v___x_4503_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4572_; 
if (v_isShared_4570_ == 0)
{
v___x_4572_ = v___x_4569_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v_a_4567_);
v___x_4572_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
return v___x_4572_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBeqDiff___redArg___boxed(lean_object* v_e_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_){
_start:
{
lean_object* v_res_4581_; 
v_res_4581_ = l_Nat_reduceBeqDiff___redArg(v_e_4575_, v_a_4576_, v_a_4577_, v_a_4578_, v_a_4579_);
lean_dec(v_a_4579_);
lean_dec_ref(v_a_4578_);
lean_dec(v_a_4577_);
lean_dec_ref(v_a_4576_);
lean_dec_ref(v_e_4575_);
return v_res_4581_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBeqDiff(lean_object* v_e_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_, lean_object* v_a_4585_, lean_object* v_a_4586_, lean_object* v_a_4587_, lean_object* v_a_4588_, lean_object* v_a_4589_){
_start:
{
lean_object* v___x_4591_; 
v___x_4591_ = l_Nat_reduceBeqDiff___redArg(v_e_4582_, v_a_4586_, v_a_4587_, v_a_4588_, v_a_4589_);
return v___x_4591_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBeqDiff___boxed(lean_object* v_e_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_, lean_object* v_a_4596_, lean_object* v_a_4597_, lean_object* v_a_4598_, lean_object* v_a_4599_, lean_object* v_a_4600_){
_start:
{
lean_object* v_res_4601_; 
v_res_4601_ = l_Nat_reduceBeqDiff(v_e_4592_, v_a_4593_, v_a_4594_, v_a_4595_, v_a_4596_, v_a_4597_, v_a_4598_, v_a_4599_);
lean_dec(v_a_4599_);
lean_dec_ref(v_a_4598_);
lean_dec(v_a_4597_);
lean_dec_ref(v_a_4596_);
lean_dec(v_a_4595_);
lean_dec_ref(v_a_4594_);
lean_dec(v_a_4593_);
lean_dec_ref(v_e_4592_);
return v_res_4601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; 
v___x_4607_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27_));
v___x_4608_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_));
v___x_4609_ = lean_alloc_closure((void*)(l_Nat_reduceBeqDiff___boxed), 9, 0);
v___x_4610_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_4607_, v___x_4608_, v___x_4609_);
return v___x_4610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27____boxed(lean_object* v_a_4611_){
_start:
{
lean_object* v_res_4612_; 
v_res_4612_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27_();
return v_res_4612_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_4613_; lean_object* v___x_4614_; 
v___x_4613_ = lean_alloc_closure((void*)(l_Nat_reduceBeqDiff___boxed), 9, 0);
v___x_4614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4614_, 0, v___x_4613_);
return v___x_4614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_4616_; uint8_t v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; 
v___x_4616_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27_));
v___x_4617_ = 1;
v___x_4618_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29_);
v___x_4619_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_4616_, v___x_4617_, v___x_4618_);
return v___x_4619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29____boxed(lean_object* v_a_4620_){
_start:
{
lean_object* v_res_4621_; 
v_res_4621_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29_();
return v_res_4621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_4623_; uint8_t v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; 
v___x_4623_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27_));
v___x_4624_ = 1;
v___x_4625_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29_);
v___x_4626_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_4623_, v___x_4624_, v___x_4625_);
return v___x_4626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_31____boxed(lean_object* v_a_4627_){
_start:
{
lean_object* v_res_4628_; 
v_res_4628_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_31_();
return v_res_4628_;
}
}
static lean_object* _init_l_Nat_reduceBneDiff___redArg___closed__2(void){
_start:
{
lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; 
v___x_4634_ = lean_box(0);
v___x_4635_ = ((lean_object*)(l_Nat_reduceBneDiff___redArg___closed__1));
v___x_4636_ = l_Lean_mkConst(v___x_4635_, v___x_4634_);
return v___x_4636_;
}
}
static lean_object* _init_l_Nat_reduceBneDiff___redArg___closed__5(void){
_start:
{
lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; 
v___x_4642_ = lean_box(0);
v___x_4643_ = ((lean_object*)(l_Nat_reduceBneDiff___redArg___closed__4));
v___x_4644_ = l_Lean_mkConst(v___x_4643_, v___x_4642_);
return v___x_4644_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBneDiff___redArg(lean_object* v_e_4645_, lean_object* v_a_4646_, lean_object* v_a_4647_, lean_object* v_a_4648_, lean_object* v_a_4649_){
_start:
{
lean_object* v___x_4651_; lean_object* v___x_4652_; uint8_t v___x_4653_; 
v___x_4651_ = ((lean_object*)(l_Nat_reduceBNe___redArg___closed__1));
v___x_4652_ = lean_unsigned_to_nat(4u);
v___x_4653_ = l_Lean_Expr_isAppOfArity(v_e_4645_, v___x_4651_, v___x_4652_);
if (v___x_4653_ == 0)
{
lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4654_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_4655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4655_, 0, v___x_4654_);
return v___x_4655_;
}
else
{
lean_object* v___x_4656_; lean_object* v_x_4657_; lean_object* v_y_4658_; lean_object* v___x_4659_; 
v___x_4656_ = l_Lean_Expr_appFn_x21(v_e_4645_);
v_x_4657_ = l_Lean_Expr_appArg_x21(v___x_4656_);
lean_dec_ref(v___x_4656_);
v_y_4658_ = l_Lean_Expr_appArg_x21(v_e_4645_);
lean_inc_ref(v_y_4658_);
lean_inc_ref(v_x_4657_);
v___x_4659_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceNatEqExpr___redArg(v_x_4657_, v_y_4658_, v_a_4646_, v_a_4647_, v_a_4648_, v_a_4649_);
if (lean_obj_tag(v___x_4659_) == 0)
{
lean_object* v_a_4660_; lean_object* v___x_4662_; uint8_t v_isShared_4663_; uint8_t v_isSharedCheck_4723_; 
v_a_4660_ = lean_ctor_get(v___x_4659_, 0);
v_isSharedCheck_4723_ = !lean_is_exclusive(v___x_4659_);
if (v_isSharedCheck_4723_ == 0)
{
v___x_4662_ = v___x_4659_;
v_isShared_4663_ = v_isSharedCheck_4723_;
goto v_resetjp_4661_;
}
else
{
lean_inc(v_a_4660_);
lean_dec(v___x_4659_);
v___x_4662_ = lean_box(0);
v_isShared_4663_ = v_isSharedCheck_4723_;
goto v_resetjp_4661_;
}
v_resetjp_4661_:
{
lean_object* v___y_4665_; 
if (lean_obj_tag(v_a_4660_) == 0)
{
lean_object* v___x_4674_; lean_object* v___x_4675_; 
lean_del_object(v___x_4662_);
lean_dec_ref(v_y_4658_);
lean_dec_ref(v_x_4657_);
v___x_4674_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_4675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4675_, 0, v___x_4674_);
return v___x_4675_;
}
else
{
lean_object* v_val_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4722_; 
v_val_4676_ = lean_ctor_get(v_a_4660_, 0);
v_isSharedCheck_4722_ = !lean_is_exclusive(v_a_4660_);
if (v_isSharedCheck_4722_ == 0)
{
v___x_4678_ = v_a_4660_;
v_isShared_4679_ = v_isSharedCheck_4722_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_val_4676_);
lean_dec(v_a_4660_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4722_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
switch(lean_obj_tag(v_val_4676_))
{
case 0:
{
uint8_t v_b_4680_; 
lean_del_object(v___x_4678_);
lean_dec_ref(v_y_4658_);
lean_dec_ref(v_x_4657_);
v_b_4680_ = lean_ctor_get_uint8(v_val_4676_, 0);
lean_dec_ref_known(v_val_4676_, 0);
if (v_b_4680_ == 0)
{
if (v___x_4653_ == 0)
{
goto v___jp_4672_;
}
else
{
lean_object* v___x_4681_; 
v___x_4681_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6);
v___y_4665_ = v___x_4681_;
goto v___jp_4664_;
}
}
else
{
goto v___jp_4672_;
}
}
case 1:
{
lean_object* v_p_4682_; lean_object* v___x_4684_; uint8_t v_isShared_4685_; uint8_t v_isSharedCheck_4702_; 
lean_del_object(v___x_4662_);
v_p_4682_ = lean_ctor_get(v_val_4676_, 0);
v_isSharedCheck_4702_ = !lean_is_exclusive(v_val_4676_);
if (v_isSharedCheck_4702_ == 0)
{
v___x_4684_ = v_val_4676_;
v_isShared_4685_ = v_isSharedCheck_4702_;
goto v_resetjp_4683_;
}
else
{
lean_inc(v_p_4682_);
lean_dec(v_val_4676_);
v___x_4684_ = lean_box(0);
v_isShared_4685_ = v_isSharedCheck_4702_;
goto v_resetjp_4683_;
}
v_resetjp_4683_:
{
lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4695_; 
v___x_4686_ = lean_obj_once(&l_Nat_reduceBneDiff___redArg___closed__2, &l_Nat_reduceBneDiff___redArg___closed__2_once, _init_l_Nat_reduceBneDiff___redArg___closed__2);
v___x_4687_ = lean_unsigned_to_nat(3u);
v___x_4688_ = lean_mk_empty_array_with_capacity(v___x_4687_);
v___x_4689_ = lean_array_push(v___x_4688_, v_x_4657_);
v___x_4690_ = lean_array_push(v___x_4689_, v_y_4658_);
v___x_4691_ = lean_array_push(v___x_4690_, v_p_4682_);
v___x_4692_ = l_Lean_mkAppN(v___x_4686_, v___x_4691_);
lean_dec_ref(v___x_4691_);
v___x_4693_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__6);
if (v_isShared_4679_ == 0)
{
lean_ctor_set(v___x_4678_, 0, v___x_4692_);
v___x_4695_ = v___x_4678_;
goto v_reusejp_4694_;
}
else
{
lean_object* v_reuseFailAlloc_4701_; 
v_reuseFailAlloc_4701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4701_, 0, v___x_4692_);
v___x_4695_ = v_reuseFailAlloc_4701_;
goto v_reusejp_4694_;
}
v_reusejp_4694_:
{
lean_object* v___x_4696_; lean_object* v___x_4698_; 
v___x_4696_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4696_, 0, v___x_4693_);
lean_ctor_set(v___x_4696_, 1, v___x_4695_);
lean_ctor_set_uint8(v___x_4696_, sizeof(void*)*2, v___x_4653_);
if (v_isShared_4685_ == 0)
{
lean_ctor_set_tag(v___x_4684_, 0);
lean_ctor_set(v___x_4684_, 0, v___x_4696_);
v___x_4698_ = v___x_4684_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4700_; 
v_reuseFailAlloc_4700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4700_, 0, v___x_4696_);
v___x_4698_ = v_reuseFailAlloc_4700_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
lean_object* v___x_4699_; 
v___x_4699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4699_, 0, v___x_4698_);
return v___x_4699_;
}
}
}
}
default: 
{
lean_object* v_x_4703_; lean_object* v_y_4704_; lean_object* v_p_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4717_; 
lean_del_object(v___x_4662_);
v_x_4703_ = lean_ctor_get(v_val_4676_, 0);
lean_inc_ref_n(v_x_4703_, 2);
v_y_4704_ = lean_ctor_get(v_val_4676_, 1);
lean_inc_ref_n(v_y_4704_, 2);
v_p_4705_ = lean_ctor_get(v_val_4676_, 2);
lean_inc_ref(v_p_4705_);
lean_dec_ref_known(v_val_4676_, 3);
v___x_4706_ = lean_obj_once(&l_Nat_reduceBneDiff___redArg___closed__5, &l_Nat_reduceBneDiff___redArg___closed__5_once, _init_l_Nat_reduceBneDiff___redArg___closed__5);
v___x_4707_ = lean_unsigned_to_nat(5u);
v___x_4708_ = lean_mk_empty_array_with_capacity(v___x_4707_);
v___x_4709_ = lean_array_push(v___x_4708_, v_x_4657_);
v___x_4710_ = lean_array_push(v___x_4709_, v_y_4658_);
v___x_4711_ = lean_array_push(v___x_4710_, v_x_4703_);
v___x_4712_ = lean_array_push(v___x_4711_, v_y_4704_);
v___x_4713_ = lean_array_push(v___x_4712_, v_p_4705_);
v___x_4714_ = l_Lean_mkAppN(v___x_4706_, v___x_4713_);
lean_dec_ref(v___x_4713_);
v___x_4715_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBneNat(v_x_4703_, v_y_4704_);
if (v_isShared_4679_ == 0)
{
lean_ctor_set(v___x_4678_, 0, v___x_4714_);
v___x_4717_ = v___x_4678_;
goto v_reusejp_4716_;
}
else
{
lean_object* v_reuseFailAlloc_4721_; 
v_reuseFailAlloc_4721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4721_, 0, v___x_4714_);
v___x_4717_ = v_reuseFailAlloc_4721_;
goto v_reusejp_4716_;
}
v_reusejp_4716_:
{
lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; 
v___x_4718_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4718_, 0, v___x_4715_);
lean_ctor_set(v___x_4718_, 1, v___x_4717_);
lean_ctor_set_uint8(v___x_4718_, sizeof(void*)*2, v___x_4653_);
v___x_4719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4719_, 0, v___x_4718_);
v___x_4720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4720_, 0, v___x_4719_);
return v___x_4720_;
}
}
}
}
}
v___jp_4664_:
{
lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4670_; 
v___x_4666_ = lean_box(0);
lean_inc_ref(v___y_4665_);
v___x_4667_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4667_, 0, v___y_4665_);
lean_ctor_set(v___x_4667_, 1, v___x_4666_);
lean_ctor_set_uint8(v___x_4667_, sizeof(void*)*2, v___x_4653_);
v___x_4668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4668_, 0, v___x_4667_);
if (v_isShared_4663_ == 0)
{
lean_ctor_set(v___x_4662_, 0, v___x_4668_);
v___x_4670_ = v___x_4662_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v___x_4668_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
v___jp_4672_:
{
lean_object* v___x_4673_; 
v___x_4673_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBoolPred___redArg___closed__3);
v___y_4665_ = v___x_4673_;
goto v___jp_4664_;
}
}
}
else
{
lean_object* v_a_4724_; lean_object* v___x_4726_; uint8_t v_isShared_4727_; uint8_t v_isSharedCheck_4731_; 
lean_dec_ref(v_y_4658_);
lean_dec_ref(v_x_4657_);
v_a_4724_ = lean_ctor_get(v___x_4659_, 0);
v_isSharedCheck_4731_ = !lean_is_exclusive(v___x_4659_);
if (v_isSharedCheck_4731_ == 0)
{
v___x_4726_ = v___x_4659_;
v_isShared_4727_ = v_isSharedCheck_4731_;
goto v_resetjp_4725_;
}
else
{
lean_inc(v_a_4724_);
lean_dec(v___x_4659_);
v___x_4726_ = lean_box(0);
v_isShared_4727_ = v_isSharedCheck_4731_;
goto v_resetjp_4725_;
}
v_resetjp_4725_:
{
lean_object* v___x_4729_; 
if (v_isShared_4727_ == 0)
{
v___x_4729_ = v___x_4726_;
goto v_reusejp_4728_;
}
else
{
lean_object* v_reuseFailAlloc_4730_; 
v_reuseFailAlloc_4730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4730_, 0, v_a_4724_);
v___x_4729_ = v_reuseFailAlloc_4730_;
goto v_reusejp_4728_;
}
v_reusejp_4728_:
{
return v___x_4729_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBneDiff___redArg___boxed(lean_object* v_e_4732_, lean_object* v_a_4733_, lean_object* v_a_4734_, lean_object* v_a_4735_, lean_object* v_a_4736_, lean_object* v_a_4737_){
_start:
{
lean_object* v_res_4738_; 
v_res_4738_ = l_Nat_reduceBneDiff___redArg(v_e_4732_, v_a_4733_, v_a_4734_, v_a_4735_, v_a_4736_);
lean_dec(v_a_4736_);
lean_dec_ref(v_a_4735_);
lean_dec(v_a_4734_);
lean_dec_ref(v_a_4733_);
lean_dec_ref(v_e_4732_);
return v_res_4738_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBneDiff(lean_object* v_e_4739_, lean_object* v_a_4740_, lean_object* v_a_4741_, lean_object* v_a_4742_, lean_object* v_a_4743_, lean_object* v_a_4744_, lean_object* v_a_4745_, lean_object* v_a_4746_){
_start:
{
lean_object* v___x_4748_; 
v___x_4748_ = l_Nat_reduceBneDiff___redArg(v_e_4739_, v_a_4743_, v_a_4744_, v_a_4745_, v_a_4746_);
return v___x_4748_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBneDiff___boxed(lean_object* v_e_4749_, lean_object* v_a_4750_, lean_object* v_a_4751_, lean_object* v_a_4752_, lean_object* v_a_4753_, lean_object* v_a_4754_, lean_object* v_a_4755_, lean_object* v_a_4756_, lean_object* v_a_4757_){
_start:
{
lean_object* v_res_4758_; 
v_res_4758_ = l_Nat_reduceBneDiff(v_e_4749_, v_a_4750_, v_a_4751_, v_a_4752_, v_a_4753_, v_a_4754_, v_a_4755_, v_a_4756_);
lean_dec(v_a_4756_);
lean_dec_ref(v_a_4755_);
lean_dec(v_a_4754_);
lean_dec_ref(v_a_4753_);
lean_dec(v_a_4752_);
lean_dec_ref(v_a_4751_);
lean_dec(v_a_4750_);
lean_dec_ref(v_e_4749_);
return v_res_4758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; 
v___x_4764_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27_));
v___x_4765_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_));
v___x_4766_ = lean_alloc_closure((void*)(l_Nat_reduceBneDiff___boxed), 9, 0);
v___x_4767_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_4764_, v___x_4765_, v___x_4766_);
return v___x_4767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27____boxed(lean_object* v_a_4768_){
_start:
{
lean_object* v_res_4769_; 
v_res_4769_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27_();
return v_res_4769_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_4770_; lean_object* v___x_4771_; 
v___x_4770_ = lean_alloc_closure((void*)(l_Nat_reduceBneDiff___boxed), 9, 0);
v___x_4771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4771_, 0, v___x_4770_);
return v___x_4771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_4773_; uint8_t v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; 
v___x_4773_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27_));
v___x_4774_ = 1;
v___x_4775_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29_);
v___x_4776_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_4773_, v___x_4774_, v___x_4775_);
return v___x_4776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29____boxed(lean_object* v_a_4777_){
_start:
{
lean_object* v_res_4778_; 
v_res_4778_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29_();
return v_res_4778_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_4780_; uint8_t v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; 
v___x_4780_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27_));
v___x_4781_ = 1;
v___x_4782_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29_);
v___x_4783_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_4780_, v___x_4781_, v___x_4782_);
return v___x_4783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_31____boxed(lean_object* v_a_4784_){
_start:
{
lean_object* v_res_4785_; 
v_res_4785_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_31_();
return v_res_4785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg(lean_object* v_nm_4816_, lean_object* v_arity_4817_, uint8_t v_isLT_4818_, lean_object* v_e_4819_, lean_object* v_a_4820_, lean_object* v_a_4821_, lean_object* v_a_4822_, lean_object* v_a_4823_){
_start:
{
lean_object* v___y_4826_; lean_object* v___y_4827_; lean_object* v___y_4828_; lean_object* v___y_4829_; lean_object* v___y_4830_; uint8_t v___x_4852_; 
v___x_4852_ = l_Lean_Expr_isAppOfArity(v_e_4819_, v_nm_4816_, v_arity_4817_);
if (v___x_4852_ == 0)
{
lean_object* v___x_4853_; lean_object* v___x_4854_; 
lean_dec_ref(v_e_4819_);
v___x_4853_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_4854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4854_, 0, v___x_4853_);
return v___x_4854_;
}
else
{
lean_object* v___x_4855_; lean_object* v_x_4856_; lean_object* v_y_4857_; lean_object* v___y_4859_; 
v___x_4855_ = l_Lean_Expr_appFn_x21(v_e_4819_);
v_x_4856_ = l_Lean_Expr_appArg_x21(v___x_4855_);
lean_dec_ref(v___x_4855_);
v_y_4857_ = l_Lean_Expr_appArg_x21(v_e_4819_);
if (v_isLT_4818_ == 0)
{
lean_object* v___x_5033_; 
v___x_5033_ = lean_unsigned_to_nat(0u);
v___y_4859_ = v___x_5033_;
goto v___jp_4858_;
}
else
{
lean_object* v___x_5034_; 
v___x_5034_ = lean_unsigned_to_nat(1u);
v___y_4859_ = v___x_5034_;
goto v___jp_4858_;
}
v___jp_4858_:
{
lean_object* v___x_4860_; 
lean_inc_ref(v_x_4856_);
v___x_4860_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg(v_x_4856_, v___y_4859_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_);
if (lean_obj_tag(v___x_4860_) == 0)
{
lean_object* v_a_4861_; lean_object* v___x_4863_; uint8_t v_isShared_4864_; uint8_t v_isSharedCheck_5024_; 
v_a_4861_ = lean_ctor_get(v___x_4860_, 0);
v_isSharedCheck_5024_ = !lean_is_exclusive(v___x_4860_);
if (v_isSharedCheck_5024_ == 0)
{
v___x_4863_ = v___x_4860_;
v_isShared_4864_ = v_isSharedCheck_5024_;
goto v_resetjp_4862_;
}
else
{
lean_inc(v_a_4861_);
lean_dec(v___x_4860_);
v___x_4863_ = lean_box(0);
v_isShared_4864_ = v_isSharedCheck_5024_;
goto v_resetjp_4862_;
}
v_resetjp_4862_:
{
if (lean_obj_tag(v_a_4861_) == 1)
{
lean_object* v_val_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; 
lean_del_object(v___x_4863_);
v_val_4865_ = lean_ctor_get(v_a_4861_, 0);
lean_inc(v_val_4865_);
lean_dec_ref_known(v_a_4861_, 1);
v___x_4866_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_y_4857_);
v___x_4867_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg(v_y_4857_, v___x_4866_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_);
if (lean_obj_tag(v___x_4867_) == 0)
{
lean_object* v_a_4868_; lean_object* v___x_4870_; uint8_t v_isShared_4871_; uint8_t v_isSharedCheck_5011_; 
v_a_4868_ = lean_ctor_get(v___x_4867_, 0);
v_isSharedCheck_5011_ = !lean_is_exclusive(v___x_4867_);
if (v_isSharedCheck_5011_ == 0)
{
v___x_4870_ = v___x_4867_;
v_isShared_4871_ = v_isSharedCheck_5011_;
goto v_resetjp_4869_;
}
else
{
lean_inc(v_a_4868_);
lean_dec(v___x_4867_);
v___x_4870_ = lean_box(0);
v_isShared_4871_ = v_isSharedCheck_5011_;
goto v_resetjp_4869_;
}
v_resetjp_4869_:
{
if (lean_obj_tag(v_a_4868_) == 1)
{
lean_del_object(v___x_4870_);
if (lean_obj_tag(v_val_4865_) == 0)
{
lean_object* v_val_4872_; 
lean_dec_ref(v_y_4857_);
v_val_4872_ = lean_ctor_get(v_a_4868_, 0);
lean_inc(v_val_4872_);
lean_dec_ref_known(v_a_4868_, 1);
if (lean_obj_tag(v_val_4872_) == 0)
{
lean_object* v_n_4873_; lean_object* v_n_4874_; uint8_t v___x_4875_; lean_object* v___x_4876_; 
lean_dec_ref(v_x_4856_);
v_n_4873_ = lean_ctor_get(v_val_4865_, 0);
lean_inc(v_n_4873_);
lean_dec_ref_known(v_val_4865_, 1);
v_n_4874_ = lean_ctor_get(v_val_4872_, 0);
lean_inc(v_n_4874_);
lean_dec_ref_known(v_val_4872_, 1);
v___x_4875_ = lean_nat_dec_le(v_n_4873_, v_n_4874_);
lean_dec(v_n_4874_);
lean_dec(v_n_4873_);
v___x_4876_ = l_Lean_Meta_Simp_evalPropStep___redArg(v_e_4819_, v___x_4875_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_);
return v___x_4876_;
}
else
{
lean_object* v_n_4877_; lean_object* v_e_4878_; lean_object* v_o_4879_; lean_object* v_n_4880_; uint8_t v___x_4881_; 
lean_dec_ref(v_e_4819_);
v_n_4877_ = lean_ctor_get(v_val_4865_, 0);
lean_inc(v_n_4877_);
lean_dec_ref_known(v_val_4865_, 1);
v_e_4878_ = lean_ctor_get(v_val_4872_, 0);
lean_inc_ref(v_e_4878_);
v_o_4879_ = lean_ctor_get(v_val_4872_, 1);
lean_inc_ref(v_o_4879_);
v_n_4880_ = lean_ctor_get(v_val_4872_, 2);
lean_inc(v_n_4880_);
lean_dec_ref_known(v_val_4872_, 3);
v___x_4881_ = lean_nat_dec_le(v_n_4877_, v_n_4880_);
if (v___x_4881_ == 0)
{
lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; 
v___x_4882_ = lean_nat_sub(v_n_4877_, v_n_4880_);
lean_dec(v_n_4880_);
lean_dec(v_n_4877_);
v___x_4883_ = l_Lean_mkNatLit(v___x_4882_);
lean_inc_ref(v_e_4878_);
v___x_4884_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v___x_4883_, v_e_4878_);
lean_inc_ref(v_x_4856_);
lean_inc_ref(v_o_4879_);
v___x_4885_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_o_4879_, v_x_4856_);
v___x_4886_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4885_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_);
if (lean_obj_tag(v___x_4886_) == 0)
{
lean_object* v_a_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; 
v_a_4887_ = lean_ctor_get(v___x_4886_, 0);
lean_inc(v_a_4887_);
lean_dec_ref_known(v___x_4886_, 1);
v___x_4888_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__3));
v___x_4889_ = lean_unsigned_to_nat(4u);
v___x_4890_ = lean_mk_empty_array_with_capacity(v___x_4889_);
v___x_4891_ = lean_array_push(v___x_4890_, v_x_4856_);
v___x_4892_ = lean_array_push(v___x_4891_, v_e_4878_);
v___x_4893_ = lean_array_push(v___x_4892_, v_o_4879_);
v___x_4894_ = lean_array_push(v___x_4893_, v_a_4887_);
v___x_4895_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v___x_4884_, v___x_4888_, v___x_4894_, v_a_4823_);
lean_dec_ref(v___x_4894_);
return v___x_4895_;
}
else
{
lean_object* v_a_4896_; lean_object* v___x_4898_; uint8_t v_isShared_4899_; uint8_t v_isSharedCheck_4903_; 
lean_dec_ref(v___x_4884_);
lean_dec_ref(v_o_4879_);
lean_dec_ref(v_e_4878_);
lean_dec_ref(v_x_4856_);
v_a_4896_ = lean_ctor_get(v___x_4886_, 0);
v_isSharedCheck_4903_ = !lean_is_exclusive(v___x_4886_);
if (v_isSharedCheck_4903_ == 0)
{
v___x_4898_ = v___x_4886_;
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
else
{
lean_inc(v_a_4896_);
lean_dec(v___x_4886_);
v___x_4898_ = lean_box(0);
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
v_resetjp_4897_:
{
lean_object* v___x_4901_; 
if (v_isShared_4899_ == 0)
{
v___x_4901_ = v___x_4898_;
goto v_reusejp_4900_;
}
else
{
lean_object* v_reuseFailAlloc_4902_; 
v_reuseFailAlloc_4902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4902_, 0, v_a_4896_);
v___x_4901_ = v_reuseFailAlloc_4902_;
goto v_reusejp_4900_;
}
v_reusejp_4900_:
{
return v___x_4901_;
}
}
}
}
else
{
lean_object* v___x_4904_; lean_object* v___x_4905_; 
lean_dec(v_n_4880_);
lean_dec(v_n_4877_);
lean_inc_ref(v_o_4879_);
lean_inc_ref(v_x_4856_);
v___x_4904_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_x_4856_, v_o_4879_);
v___x_4905_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4904_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_);
if (lean_obj_tag(v___x_4905_) == 0)
{
lean_object* v_a_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; 
v_a_4906_ = lean_ctor_get(v___x_4905_, 0);
lean_inc(v_a_4906_);
lean_dec_ref_known(v___x_4905_, 1);
v___x_4907_ = lean_obj_once(&l_Nat_reduceEqDiff___redArg___closed__11, &l_Nat_reduceEqDiff___redArg___closed__11_once, _init_l_Nat_reduceEqDiff___redArg___closed__11);
v___x_4908_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__5));
v___x_4909_ = lean_unsigned_to_nat(4u);
v___x_4910_ = lean_mk_empty_array_with_capacity(v___x_4909_);
v___x_4911_ = lean_array_push(v___x_4910_, v_x_4856_);
v___x_4912_ = lean_array_push(v___x_4911_, v_e_4878_);
v___x_4913_ = lean_array_push(v___x_4912_, v_o_4879_);
v___x_4914_ = lean_array_push(v___x_4913_, v_a_4906_);
v___x_4915_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v___x_4907_, v___x_4908_, v___x_4914_, v_a_4823_);
lean_dec_ref(v___x_4914_);
return v___x_4915_;
}
else
{
lean_object* v_a_4916_; lean_object* v___x_4918_; uint8_t v_isShared_4919_; uint8_t v_isSharedCheck_4923_; 
lean_dec_ref(v_o_4879_);
lean_dec_ref(v_e_4878_);
lean_dec_ref(v_x_4856_);
v_a_4916_ = lean_ctor_get(v___x_4905_, 0);
v_isSharedCheck_4923_ = !lean_is_exclusive(v___x_4905_);
if (v_isSharedCheck_4923_ == 0)
{
v___x_4918_ = v___x_4905_;
v_isShared_4919_ = v_isSharedCheck_4923_;
goto v_resetjp_4917_;
}
else
{
lean_inc(v_a_4916_);
lean_dec(v___x_4905_);
v___x_4918_ = lean_box(0);
v_isShared_4919_ = v_isSharedCheck_4923_;
goto v_resetjp_4917_;
}
v_resetjp_4917_:
{
lean_object* v___x_4921_; 
if (v_isShared_4919_ == 0)
{
v___x_4921_ = v___x_4918_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4922_; 
v_reuseFailAlloc_4922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4922_, 0, v_a_4916_);
v___x_4921_ = v_reuseFailAlloc_4922_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
return v___x_4921_;
}
}
}
}
}
}
else
{
lean_object* v_val_4924_; 
lean_dec_ref(v_x_4856_);
lean_dec_ref(v_e_4819_);
v_val_4924_ = lean_ctor_get(v_a_4868_, 0);
lean_inc(v_val_4924_);
lean_dec_ref_known(v_a_4868_, 1);
if (lean_obj_tag(v_val_4924_) == 0)
{
lean_object* v_e_4925_; lean_object* v_o_4926_; lean_object* v_n_4927_; lean_object* v_n_4928_; uint8_t v___x_4929_; 
v_e_4925_ = lean_ctor_get(v_val_4865_, 0);
lean_inc_ref(v_e_4925_);
v_o_4926_ = lean_ctor_get(v_val_4865_, 1);
lean_inc_ref(v_o_4926_);
v_n_4927_ = lean_ctor_get(v_val_4865_, 2);
lean_inc(v_n_4927_);
lean_dec_ref_known(v_val_4865_, 3);
v_n_4928_ = lean_ctor_get(v_val_4924_, 0);
lean_inc(v_n_4928_);
lean_dec_ref_known(v_val_4924_, 1);
v___x_4929_ = lean_nat_dec_le(v_n_4927_, v_n_4928_);
if (v___x_4929_ == 0)
{
lean_object* v___x_4930_; lean_object* v___x_4931_; 
lean_dec(v_n_4928_);
lean_dec(v_n_4927_);
lean_inc_ref(v_o_4926_);
lean_inc_ref(v_y_4857_);
v___x_4930_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLTNat(v_y_4857_, v_o_4926_);
v___x_4931_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4930_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_);
if (lean_obj_tag(v___x_4931_) == 0)
{
lean_object* v_a_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; 
v_a_4932_ = lean_ctor_get(v___x_4931_, 0);
lean_inc(v_a_4932_);
lean_dec_ref_known(v___x_4931_, 1);
v___x_4933_ = lean_obj_once(&l_Nat_reduceEqDiff___redArg___closed__5, &l_Nat_reduceEqDiff___redArg___closed__5_once, _init_l_Nat_reduceEqDiff___redArg___closed__5);
v___x_4934_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__7));
v___x_4935_ = lean_unsigned_to_nat(4u);
v___x_4936_ = lean_mk_empty_array_with_capacity(v___x_4935_);
v___x_4937_ = lean_array_push(v___x_4936_, v_e_4925_);
v___x_4938_ = lean_array_push(v___x_4937_, v_o_4926_);
v___x_4939_ = lean_array_push(v___x_4938_, v_y_4857_);
v___x_4940_ = lean_array_push(v___x_4939_, v_a_4932_);
v___x_4941_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v___x_4933_, v___x_4934_, v___x_4940_, v_a_4823_);
lean_dec_ref(v___x_4940_);
return v___x_4941_;
}
else
{
lean_object* v_a_4942_; lean_object* v___x_4944_; uint8_t v_isShared_4945_; uint8_t v_isSharedCheck_4949_; 
lean_dec_ref(v_o_4926_);
lean_dec_ref(v_e_4925_);
lean_dec_ref(v_y_4857_);
v_a_4942_ = lean_ctor_get(v___x_4931_, 0);
v_isSharedCheck_4949_ = !lean_is_exclusive(v___x_4931_);
if (v_isSharedCheck_4949_ == 0)
{
v___x_4944_ = v___x_4931_;
v_isShared_4945_ = v_isSharedCheck_4949_;
goto v_resetjp_4943_;
}
else
{
lean_inc(v_a_4942_);
lean_dec(v___x_4931_);
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
else
{
lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; 
v___x_4950_ = lean_nat_sub(v_n_4928_, v_n_4927_);
lean_dec(v_n_4927_);
lean_dec(v_n_4928_);
v___x_4951_ = l_Lean_mkNatLit(v___x_4950_);
lean_inc_ref(v_e_4925_);
v___x_4952_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_e_4925_, v___x_4951_);
lean_inc_ref(v_y_4857_);
lean_inc_ref(v_o_4926_);
v___x_4953_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_o_4926_, v_y_4857_);
v___x_4954_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4953_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_);
if (lean_obj_tag(v___x_4954_) == 0)
{
lean_object* v_a_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; 
v_a_4955_ = lean_ctor_get(v___x_4954_, 0);
lean_inc(v_a_4955_);
lean_dec_ref_known(v___x_4954_, 1);
v___x_4956_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__9));
v___x_4957_ = lean_unsigned_to_nat(4u);
v___x_4958_ = lean_mk_empty_array_with_capacity(v___x_4957_);
v___x_4959_ = lean_array_push(v___x_4958_, v_e_4925_);
v___x_4960_ = lean_array_push(v___x_4959_, v_o_4926_);
v___x_4961_ = lean_array_push(v___x_4960_, v_y_4857_);
v___x_4962_ = lean_array_push(v___x_4961_, v_a_4955_);
v___x_4963_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v___x_4952_, v___x_4956_, v___x_4962_, v_a_4823_);
lean_dec_ref(v___x_4962_);
return v___x_4963_;
}
else
{
lean_object* v_a_4964_; lean_object* v___x_4966_; uint8_t v_isShared_4967_; uint8_t v_isSharedCheck_4971_; 
lean_dec_ref(v___x_4952_);
lean_dec_ref(v_o_4926_);
lean_dec_ref(v_e_4925_);
lean_dec_ref(v_y_4857_);
v_a_4964_ = lean_ctor_get(v___x_4954_, 0);
v_isSharedCheck_4971_ = !lean_is_exclusive(v___x_4954_);
if (v_isSharedCheck_4971_ == 0)
{
v___x_4966_ = v___x_4954_;
v_isShared_4967_ = v_isSharedCheck_4971_;
goto v_resetjp_4965_;
}
else
{
lean_inc(v_a_4964_);
lean_dec(v___x_4954_);
v___x_4966_ = lean_box(0);
v_isShared_4967_ = v_isSharedCheck_4971_;
goto v_resetjp_4965_;
}
v_resetjp_4965_:
{
lean_object* v___x_4969_; 
if (v_isShared_4967_ == 0)
{
v___x_4969_ = v___x_4966_;
goto v_reusejp_4968_;
}
else
{
lean_object* v_reuseFailAlloc_4970_; 
v_reuseFailAlloc_4970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4970_, 0, v_a_4964_);
v___x_4969_ = v_reuseFailAlloc_4970_;
goto v_reusejp_4968_;
}
v_reusejp_4968_:
{
return v___x_4969_;
}
}
}
}
}
else
{
lean_object* v_e_4972_; lean_object* v_o_4973_; lean_object* v_n_4974_; lean_object* v_e_4975_; lean_object* v_o_4976_; lean_object* v_n_4977_; uint8_t v___x_4978_; 
lean_dec_ref(v_y_4857_);
v_e_4972_ = lean_ctor_get(v_val_4865_, 0);
lean_inc_ref(v_e_4972_);
v_o_4973_ = lean_ctor_get(v_val_4865_, 1);
lean_inc_ref(v_o_4973_);
v_n_4974_ = lean_ctor_get(v_val_4865_, 2);
lean_inc(v_n_4974_);
lean_dec_ref_known(v_val_4865_, 3);
v_e_4975_ = lean_ctor_get(v_val_4924_, 0);
lean_inc_ref(v_e_4975_);
v_o_4976_ = lean_ctor_get(v_val_4924_, 1);
lean_inc_ref(v_o_4976_);
v_n_4977_ = lean_ctor_get(v_val_4924_, 2);
lean_inc(v_n_4977_);
lean_dec_ref_known(v_val_4924_, 3);
v___x_4978_ = lean_nat_dec_le(v_n_4974_, v_n_4977_);
if (v___x_4978_ == 0)
{
lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; 
v___x_4979_ = lean_nat_sub(v_n_4974_, v_n_4977_);
lean_dec(v_n_4977_);
lean_dec(v_n_4974_);
v___x_4980_ = l_Lean_mkNatLit(v___x_4979_);
lean_inc_ref(v_e_4972_);
v___x_4981_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat(v_e_4972_, v___x_4980_);
lean_inc_ref(v_e_4975_);
v___x_4982_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v___x_4981_, v_e_4975_);
lean_inc_ref(v_o_4973_);
lean_inc_ref(v_o_4976_);
v___x_4983_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_o_4976_, v_o_4973_);
v___x_4984_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4983_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_);
if (lean_obj_tag(v___x_4984_) == 0)
{
lean_object* v_a_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; 
v_a_4985_ = lean_ctor_get(v___x_4984_, 0);
lean_inc(v_a_4985_);
lean_dec_ref_known(v___x_4984_, 1);
v___x_4986_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__11));
v___x_4987_ = lean_unsigned_to_nat(5u);
v___x_4988_ = lean_mk_empty_array_with_capacity(v___x_4987_);
v___x_4989_ = lean_array_push(v___x_4988_, v_e_4972_);
v___x_4990_ = lean_array_push(v___x_4989_, v_e_4975_);
v___x_4991_ = lean_array_push(v___x_4990_, v_o_4973_);
v___x_4992_ = lean_array_push(v___x_4991_, v_o_4976_);
v___x_4993_ = lean_array_push(v___x_4992_, v_a_4985_);
v___x_4994_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v___x_4982_, v___x_4986_, v___x_4993_, v_a_4823_);
lean_dec_ref(v___x_4993_);
return v___x_4994_;
}
else
{
lean_object* v_a_4995_; lean_object* v___x_4997_; uint8_t v_isShared_4998_; uint8_t v_isSharedCheck_5002_; 
lean_dec_ref(v___x_4982_);
lean_dec_ref(v_o_4976_);
lean_dec_ref(v_e_4975_);
lean_dec_ref(v_o_4973_);
lean_dec_ref(v_e_4972_);
v_a_4995_ = lean_ctor_get(v___x_4984_, 0);
v_isSharedCheck_5002_ = !lean_is_exclusive(v___x_4984_);
if (v_isSharedCheck_5002_ == 0)
{
v___x_4997_ = v___x_4984_;
v_isShared_4998_ = v_isSharedCheck_5002_;
goto v_resetjp_4996_;
}
else
{
lean_inc(v_a_4995_);
lean_dec(v___x_4984_);
v___x_4997_ = lean_box(0);
v_isShared_4998_ = v_isSharedCheck_5002_;
goto v_resetjp_4996_;
}
v_resetjp_4996_:
{
lean_object* v___x_5000_; 
if (v_isShared_4998_ == 0)
{
v___x_5000_ = v___x_4997_;
goto v_reusejp_4999_;
}
else
{
lean_object* v_reuseFailAlloc_5001_; 
v_reuseFailAlloc_5001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5001_, 0, v_a_4995_);
v___x_5000_ = v_reuseFailAlloc_5001_;
goto v_reusejp_4999_;
}
v_reusejp_4999_:
{
return v___x_5000_;
}
}
}
}
else
{
uint8_t v___x_5003_; 
v___x_5003_ = lean_nat_dec_eq(v_n_4974_, v_n_4977_);
if (v___x_5003_ == 0)
{
lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; 
v___x_5004_ = lean_nat_sub(v_n_4977_, v_n_4974_);
lean_dec(v_n_4974_);
lean_dec(v_n_4977_);
v___x_5005_ = l_Lean_mkNatLit(v___x_5004_);
lean_inc_ref(v_e_4975_);
v___x_5006_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat(v_e_4975_, v___x_5005_);
v___y_4826_ = v_o_4973_;
v___y_4827_ = v_e_4975_;
v___y_4828_ = v_o_4976_;
v___y_4829_ = v_e_4972_;
v___y_4830_ = v___x_5006_;
goto v___jp_4825_;
}
else
{
lean_dec(v_n_4977_);
lean_dec(v_n_4974_);
lean_inc_ref(v_e_4975_);
v___y_4826_ = v_o_4973_;
v___y_4827_ = v_e_4975_;
v___y_4828_ = v_o_4976_;
v___y_4829_ = v_e_4972_;
v___y_4830_ = v_e_4975_;
goto v___jp_4825_;
}
}
}
}
}
else
{
lean_object* v___x_5007_; lean_object* v___x_5009_; 
lean_dec(v_a_4868_);
lean_dec(v_val_4865_);
lean_dec_ref(v_y_4857_);
lean_dec_ref(v_x_4856_);
lean_dec_ref(v_e_4819_);
v___x_5007_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_4871_ == 0)
{
lean_ctor_set(v___x_4870_, 0, v___x_5007_);
v___x_5009_ = v___x_4870_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5010_; 
v_reuseFailAlloc_5010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5010_, 0, v___x_5007_);
v___x_5009_ = v_reuseFailAlloc_5010_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
return v___x_5009_;
}
}
}
}
else
{
lean_object* v_a_5012_; lean_object* v___x_5014_; uint8_t v_isShared_5015_; uint8_t v_isSharedCheck_5019_; 
lean_dec(v_val_4865_);
lean_dec_ref(v_y_4857_);
lean_dec_ref(v_x_4856_);
lean_dec_ref(v_e_4819_);
v_a_5012_ = lean_ctor_get(v___x_4867_, 0);
v_isSharedCheck_5019_ = !lean_is_exclusive(v___x_4867_);
if (v_isSharedCheck_5019_ == 0)
{
v___x_5014_ = v___x_4867_;
v_isShared_5015_ = v_isSharedCheck_5019_;
goto v_resetjp_5013_;
}
else
{
lean_inc(v_a_5012_);
lean_dec(v___x_4867_);
v___x_5014_ = lean_box(0);
v_isShared_5015_ = v_isSharedCheck_5019_;
goto v_resetjp_5013_;
}
v_resetjp_5013_:
{
lean_object* v___x_5017_; 
if (v_isShared_5015_ == 0)
{
v___x_5017_ = v___x_5014_;
goto v_reusejp_5016_;
}
else
{
lean_object* v_reuseFailAlloc_5018_; 
v_reuseFailAlloc_5018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5018_, 0, v_a_5012_);
v___x_5017_ = v_reuseFailAlloc_5018_;
goto v_reusejp_5016_;
}
v_reusejp_5016_:
{
return v___x_5017_;
}
}
}
}
else
{
lean_object* v___x_5020_; lean_object* v___x_5022_; 
lean_dec(v_a_4861_);
lean_dec_ref(v_y_4857_);
lean_dec_ref(v_x_4856_);
lean_dec_ref(v_e_4819_);
v___x_5020_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_4864_ == 0)
{
lean_ctor_set(v___x_4863_, 0, v___x_5020_);
v___x_5022_ = v___x_4863_;
goto v_reusejp_5021_;
}
else
{
lean_object* v_reuseFailAlloc_5023_; 
v_reuseFailAlloc_5023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5023_, 0, v___x_5020_);
v___x_5022_ = v_reuseFailAlloc_5023_;
goto v_reusejp_5021_;
}
v_reusejp_5021_:
{
return v___x_5022_;
}
}
}
}
else
{
lean_object* v_a_5025_; lean_object* v___x_5027_; uint8_t v_isShared_5028_; uint8_t v_isSharedCheck_5032_; 
lean_dec_ref(v_y_4857_);
lean_dec_ref(v_x_4856_);
lean_dec_ref(v_e_4819_);
v_a_5025_ = lean_ctor_get(v___x_4860_, 0);
v_isSharedCheck_5032_ = !lean_is_exclusive(v___x_4860_);
if (v_isSharedCheck_5032_ == 0)
{
v___x_5027_ = v___x_4860_;
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
else
{
lean_inc(v_a_5025_);
lean_dec(v___x_4860_);
v___x_5027_ = lean_box(0);
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
v_resetjp_5026_:
{
lean_object* v___x_5030_; 
if (v_isShared_5028_ == 0)
{
v___x_5030_ = v___x_5027_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5031_; 
v_reuseFailAlloc_5031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5031_, 0, v_a_5025_);
v___x_5030_ = v_reuseFailAlloc_5031_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
return v___x_5030_;
}
}
}
}
}
v___jp_4825_:
{
lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; 
lean_inc_ref(v___y_4829_);
v___x_4831_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v___y_4829_, v___y_4830_);
lean_inc_ref(v___y_4828_);
lean_inc_ref(v___y_4826_);
v___x_4832_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v___y_4826_, v___y_4828_);
v___x_4833_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_4832_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_);
if (lean_obj_tag(v___x_4833_) == 0)
{
lean_object* v_a_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; 
v_a_4834_ = lean_ctor_get(v___x_4833_, 0);
lean_inc(v_a_4834_);
lean_dec_ref_known(v___x_4833_, 1);
v___x_4835_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___closed__1));
v___x_4836_ = lean_unsigned_to_nat(5u);
v___x_4837_ = lean_mk_empty_array_with_capacity(v___x_4836_);
v___x_4838_ = lean_array_push(v___x_4837_, v___y_4829_);
v___x_4839_ = lean_array_push(v___x_4838_, v___y_4827_);
v___x_4840_ = lean_array_push(v___x_4839_, v___y_4826_);
v___x_4841_ = lean_array_push(v___x_4840_, v___y_4828_);
v___x_4842_ = lean_array_push(v___x_4841_, v_a_4834_);
v___x_4843_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v___x_4831_, v___x_4835_, v___x_4842_, v_a_4823_);
lean_dec_ref(v___x_4842_);
return v___x_4843_;
}
else
{
lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4851_; 
lean_dec_ref(v___x_4831_);
lean_dec_ref(v___y_4829_);
lean_dec_ref(v___y_4828_);
lean_dec_ref(v___y_4827_);
lean_dec_ref(v___y_4826_);
v_a_4844_ = lean_ctor_get(v___x_4833_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v___x_4833_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4846_ = v___x_4833_;
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4833_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4849_; 
if (v_isShared_4847_ == 0)
{
v___x_4849_ = v___x_4846_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v_a_4844_);
v___x_4849_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
return v___x_4849_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg___boxed(lean_object* v_nm_5035_, lean_object* v_arity_5036_, lean_object* v_isLT_5037_, lean_object* v_e_5038_, lean_object* v_a_5039_, lean_object* v_a_5040_, lean_object* v_a_5041_, lean_object* v_a_5042_, lean_object* v_a_5043_){
_start:
{
uint8_t v_isLT_boxed_5044_; lean_object* v_res_5045_; 
v_isLT_boxed_5044_ = lean_unbox(v_isLT_5037_);
v_res_5045_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg(v_nm_5035_, v_arity_5036_, v_isLT_boxed_5044_, v_e_5038_, v_a_5039_, v_a_5040_, v_a_5041_, v_a_5042_);
lean_dec(v_a_5042_);
lean_dec_ref(v_a_5041_);
lean_dec(v_a_5040_);
lean_dec_ref(v_a_5039_);
lean_dec(v_nm_5035_);
return v_res_5045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE(lean_object* v_nm_5046_, lean_object* v_arity_5047_, uint8_t v_isLT_5048_, lean_object* v_e_5049_, lean_object* v_a_5050_, lean_object* v_a_5051_, lean_object* v_a_5052_, lean_object* v_a_5053_, lean_object* v_a_5054_, lean_object* v_a_5055_, lean_object* v_a_5056_){
_start:
{
lean_object* v___x_5058_; 
v___x_5058_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg(v_nm_5046_, v_arity_5047_, v_isLT_5048_, v_e_5049_, v_a_5053_, v_a_5054_, v_a_5055_, v_a_5056_);
return v___x_5058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___boxed(lean_object* v_nm_5059_, lean_object* v_arity_5060_, lean_object* v_isLT_5061_, lean_object* v_e_5062_, lean_object* v_a_5063_, lean_object* v_a_5064_, lean_object* v_a_5065_, lean_object* v_a_5066_, lean_object* v_a_5067_, lean_object* v_a_5068_, lean_object* v_a_5069_, lean_object* v_a_5070_){
_start:
{
uint8_t v_isLT_boxed_5071_; lean_object* v_res_5072_; 
v_isLT_boxed_5071_ = lean_unbox(v_isLT_5061_);
v_res_5072_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE(v_nm_5059_, v_arity_5060_, v_isLT_boxed_5071_, v_e_5062_, v_a_5063_, v_a_5064_, v_a_5065_, v_a_5066_, v_a_5067_, v_a_5068_, v_a_5069_);
lean_dec(v_a_5069_);
lean_dec_ref(v_a_5068_);
lean_dec(v_a_5067_);
lean_dec_ref(v_a_5066_);
lean_dec(v_a_5065_);
lean_dec_ref(v_a_5064_);
lean_dec(v_a_5063_);
lean_dec(v_nm_5059_);
return v_res_5072_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLeDiff___redArg(lean_object* v_e_5073_, lean_object* v_a_5074_, lean_object* v_a_5075_, lean_object* v_a_5076_, lean_object* v_a_5077_){
_start:
{
lean_object* v___x_5079_; lean_object* v___x_5080_; uint8_t v___x_5081_; lean_object* v___x_5082_; 
v___x_5079_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat___closed__2));
v___x_5080_ = lean_unsigned_to_nat(4u);
v___x_5081_ = 0;
v___x_5082_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLTLE___redArg(v___x_5079_, v___x_5080_, v___x_5081_, v_e_5073_, v_a_5074_, v_a_5075_, v_a_5076_, v_a_5077_);
return v___x_5082_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLeDiff___redArg___boxed(lean_object* v_e_5083_, lean_object* v_a_5084_, lean_object* v_a_5085_, lean_object* v_a_5086_, lean_object* v_a_5087_, lean_object* v_a_5088_){
_start:
{
lean_object* v_res_5089_; 
v_res_5089_ = l_Nat_reduceLeDiff___redArg(v_e_5083_, v_a_5084_, v_a_5085_, v_a_5086_, v_a_5087_);
lean_dec(v_a_5087_);
lean_dec_ref(v_a_5086_);
lean_dec(v_a_5085_);
lean_dec_ref(v_a_5084_);
return v_res_5089_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLeDiff(lean_object* v_e_5090_, lean_object* v_a_5091_, lean_object* v_a_5092_, lean_object* v_a_5093_, lean_object* v_a_5094_, lean_object* v_a_5095_, lean_object* v_a_5096_, lean_object* v_a_5097_){
_start:
{
lean_object* v___x_5099_; 
v___x_5099_ = l_Nat_reduceLeDiff___redArg(v_e_5090_, v_a_5094_, v_a_5095_, v_a_5096_, v_a_5097_);
return v___x_5099_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLeDiff___boxed(lean_object* v_e_5100_, lean_object* v_a_5101_, lean_object* v_a_5102_, lean_object* v_a_5103_, lean_object* v_a_5104_, lean_object* v_a_5105_, lean_object* v_a_5106_, lean_object* v_a_5107_, lean_object* v_a_5108_){
_start:
{
lean_object* v_res_5109_; 
v_res_5109_ = l_Nat_reduceLeDiff(v_e_5100_, v_a_5101_, v_a_5102_, v_a_5103_, v_a_5104_, v_a_5105_, v_a_5106_, v_a_5107_);
lean_dec(v_a_5107_);
lean_dec_ref(v_a_5106_);
lean_dec(v_a_5105_);
lean_dec_ref(v_a_5104_);
lean_dec(v_a_5103_);
lean_dec_ref(v_a_5102_);
lean_dec(v_a_5101_);
return v_res_5109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; 
v___x_5128_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_));
v___x_5129_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_));
v___x_5130_ = lean_alloc_closure((void*)(l_Nat_reduceLeDiff___boxed), 9, 0);
v___x_5131_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_5128_, v___x_5129_, v___x_5130_);
return v___x_5131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27____boxed(lean_object* v_a_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_();
return v_res_5133_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29_(void){
_start:
{
lean_object* v___x_5134_; lean_object* v___x_5135_; 
v___x_5134_ = lean_alloc_closure((void*)(l_Nat_reduceLeDiff___boxed), 9, 0);
v___x_5135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5135_, 0, v___x_5134_);
return v___x_5135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29_(){
_start:
{
lean_object* v___x_5137_; uint8_t v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; 
v___x_5137_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_));
v___x_5138_ = 1;
v___x_5139_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29_);
v___x_5140_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_5137_, v___x_5138_, v___x_5139_);
return v___x_5140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29____boxed(lean_object* v_a_5141_){
_start:
{
lean_object* v_res_5142_; 
v_res_5142_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29_();
return v_res_5142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_31_(){
_start:
{
lean_object* v___x_5144_; uint8_t v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; 
v___x_5144_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_));
v___x_5145_ = 1;
v___x_5146_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29_);
v___x_5147_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_5144_, v___x_5145_, v___x_5146_);
return v___x_5147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_31____boxed(lean_object* v_a_5148_){
_start:
{
lean_object* v_res_5149_; 
v_res_5149_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_31_();
return v_res_5149_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSubDiff___redArg(lean_object* v_e_5174_, lean_object* v_a_5175_, lean_object* v_a_5176_, lean_object* v_a_5177_, lean_object* v_a_5178_){
_start:
{
lean_object* v___x_5180_; lean_object* v___x_5181_; uint8_t v___x_5182_; 
v___x_5180_ = ((lean_object*)(l_Nat_reduceSub___redArg___closed__2));
v___x_5181_ = lean_unsigned_to_nat(6u);
v___x_5182_ = l_Lean_Expr_isAppOfArity(v_e_5174_, v___x_5180_, v___x_5181_);
if (v___x_5182_ == 0)
{
lean_object* v___x_5183_; lean_object* v___x_5184_; 
v___x_5183_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_5184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5184_, 0, v___x_5183_);
return v___x_5184_;
}
else
{
lean_object* v___x_5185_; lean_object* v_p_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; 
v___x_5185_ = l_Lean_Expr_appFn_x21(v_e_5174_);
v_p_5186_ = l_Lean_Expr_appArg_x21(v___x_5185_);
lean_dec_ref(v___x_5185_);
v___x_5187_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_p_5186_);
v___x_5188_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg(v_p_5186_, v___x_5187_, v_a_5175_, v_a_5176_, v_a_5177_, v_a_5178_);
if (lean_obj_tag(v___x_5188_) == 0)
{
lean_object* v_a_5189_; lean_object* v___x_5191_; uint8_t v_isShared_5192_; uint8_t v_isSharedCheck_5376_; 
v_a_5189_ = lean_ctor_get(v___x_5188_, 0);
v_isSharedCheck_5376_ = !lean_is_exclusive(v___x_5188_);
if (v_isSharedCheck_5376_ == 0)
{
v___x_5191_ = v___x_5188_;
v_isShared_5192_ = v_isSharedCheck_5376_;
goto v_resetjp_5190_;
}
else
{
lean_inc(v_a_5189_);
lean_dec(v___x_5188_);
v___x_5191_ = lean_box(0);
v_isShared_5192_ = v_isSharedCheck_5376_;
goto v_resetjp_5190_;
}
v_resetjp_5190_:
{
if (lean_obj_tag(v_a_5189_) == 1)
{
lean_object* v_val_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; 
lean_del_object(v___x_5191_);
v_val_5193_ = lean_ctor_get(v_a_5189_, 0);
lean_inc(v_val_5193_);
lean_dec_ref_known(v_a_5189_, 1);
v___x_5194_ = l_Lean_Expr_appArg_x21(v_e_5174_);
lean_inc_ref(v___x_5194_);
v___x_5195_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_NatOffset_fromExpr_x3f___redArg(v___x_5194_, v___x_5187_, v_a_5175_, v_a_5176_, v_a_5177_, v_a_5178_);
if (lean_obj_tag(v___x_5195_) == 0)
{
lean_object* v_a_5196_; lean_object* v___x_5198_; uint8_t v_isShared_5199_; uint8_t v_isSharedCheck_5363_; 
v_a_5196_ = lean_ctor_get(v___x_5195_, 0);
v_isSharedCheck_5363_ = !lean_is_exclusive(v___x_5195_);
if (v_isSharedCheck_5363_ == 0)
{
v___x_5198_ = v___x_5195_;
v_isShared_5199_ = v_isSharedCheck_5363_;
goto v_resetjp_5197_;
}
else
{
lean_inc(v_a_5196_);
lean_dec(v___x_5195_);
v___x_5198_ = lean_box(0);
v_isShared_5199_ = v_isSharedCheck_5363_;
goto v_resetjp_5197_;
}
v_resetjp_5197_:
{
if (lean_obj_tag(v_a_5196_) == 1)
{
lean_del_object(v___x_5198_);
if (lean_obj_tag(v_val_5193_) == 0)
{
lean_object* v_val_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5250_; 
lean_dec_ref(v___x_5194_);
v_val_5200_ = lean_ctor_get(v_a_5196_, 0);
v_isSharedCheck_5250_ = !lean_is_exclusive(v_a_5196_);
if (v_isSharedCheck_5250_ == 0)
{
v___x_5202_ = v_a_5196_;
v_isShared_5203_ = v_isSharedCheck_5250_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_val_5200_);
lean_dec(v_a_5196_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5250_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
if (lean_obj_tag(v_val_5200_) == 0)
{
lean_object* v_n_5204_; lean_object* v_n_5205_; lean_object* v___x_5207_; uint8_t v_isShared_5208_; uint8_t v_isSharedCheck_5235_; 
lean_dec_ref(v_p_5186_);
v_n_5204_ = lean_ctor_get(v_val_5193_, 0);
lean_inc(v_n_5204_);
lean_dec_ref_known(v_val_5193_, 1);
v_n_5205_ = lean_ctor_get(v_val_5200_, 0);
v_isSharedCheck_5235_ = !lean_is_exclusive(v_val_5200_);
if (v_isSharedCheck_5235_ == 0)
{
v___x_5207_ = v_val_5200_;
v_isShared_5208_ = v_isSharedCheck_5235_;
goto v_resetjp_5206_;
}
else
{
lean_inc(v_n_5205_);
lean_dec(v_val_5200_);
v___x_5207_ = lean_box(0);
v_isShared_5208_ = v_isSharedCheck_5235_;
goto v_resetjp_5206_;
}
v_resetjp_5206_:
{
lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; 
v___x_5209_ = lean_nat_sub(v_n_5204_, v_n_5205_);
lean_dec(v_n_5205_);
lean_dec(v_n_5204_);
v___x_5210_ = l_Lean_mkNatLit(v___x_5209_);
lean_inc_ref(v___x_5210_);
v___x_5211_ = l_Lean_Meta_mkEqRefl(v___x_5210_, v_a_5175_, v_a_5176_, v_a_5177_, v_a_5178_);
if (lean_obj_tag(v___x_5211_) == 0)
{
lean_object* v_a_5212_; lean_object* v___x_5214_; uint8_t v_isShared_5215_; uint8_t v_isSharedCheck_5226_; 
v_a_5212_ = lean_ctor_get(v___x_5211_, 0);
v_isSharedCheck_5226_ = !lean_is_exclusive(v___x_5211_);
if (v_isSharedCheck_5226_ == 0)
{
v___x_5214_ = v___x_5211_;
v_isShared_5215_ = v_isSharedCheck_5226_;
goto v_resetjp_5213_;
}
else
{
lean_inc(v_a_5212_);
lean_dec(v___x_5211_);
v___x_5214_ = lean_box(0);
v_isShared_5215_ = v_isSharedCheck_5226_;
goto v_resetjp_5213_;
}
v_resetjp_5213_:
{
lean_object* v___x_5217_; 
if (v_isShared_5203_ == 0)
{
lean_ctor_set(v___x_5202_, 0, v_a_5212_);
v___x_5217_ = v___x_5202_;
goto v_reusejp_5216_;
}
else
{
lean_object* v_reuseFailAlloc_5225_; 
v_reuseFailAlloc_5225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5225_, 0, v_a_5212_);
v___x_5217_ = v_reuseFailAlloc_5225_;
goto v_reusejp_5216_;
}
v_reusejp_5216_:
{
lean_object* v___x_5218_; lean_object* v___x_5220_; 
v___x_5218_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_5218_, 0, v___x_5210_);
lean_ctor_set(v___x_5218_, 1, v___x_5217_);
lean_ctor_set_uint8(v___x_5218_, sizeof(void*)*2, v___x_5182_);
if (v_isShared_5208_ == 0)
{
lean_ctor_set(v___x_5207_, 0, v___x_5218_);
v___x_5220_ = v___x_5207_;
goto v_reusejp_5219_;
}
else
{
lean_object* v_reuseFailAlloc_5224_; 
v_reuseFailAlloc_5224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5224_, 0, v___x_5218_);
v___x_5220_ = v_reuseFailAlloc_5224_;
goto v_reusejp_5219_;
}
v_reusejp_5219_:
{
lean_object* v___x_5222_; 
if (v_isShared_5215_ == 0)
{
lean_ctor_set(v___x_5214_, 0, v___x_5220_);
v___x_5222_ = v___x_5214_;
goto v_reusejp_5221_;
}
else
{
lean_object* v_reuseFailAlloc_5223_; 
v_reuseFailAlloc_5223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5223_, 0, v___x_5220_);
v___x_5222_ = v_reuseFailAlloc_5223_;
goto v_reusejp_5221_;
}
v_reusejp_5221_:
{
return v___x_5222_;
}
}
}
}
}
else
{
lean_object* v_a_5227_; lean_object* v___x_5229_; uint8_t v_isShared_5230_; uint8_t v_isSharedCheck_5234_; 
lean_dec_ref(v___x_5210_);
lean_del_object(v___x_5207_);
lean_del_object(v___x_5202_);
v_a_5227_ = lean_ctor_get(v___x_5211_, 0);
v_isSharedCheck_5234_ = !lean_is_exclusive(v___x_5211_);
if (v_isSharedCheck_5234_ == 0)
{
v___x_5229_ = v___x_5211_;
v_isShared_5230_ = v_isSharedCheck_5234_;
goto v_resetjp_5228_;
}
else
{
lean_inc(v_a_5227_);
lean_dec(v___x_5211_);
v___x_5229_ = lean_box(0);
v_isShared_5230_ = v_isSharedCheck_5234_;
goto v_resetjp_5228_;
}
v_resetjp_5228_:
{
lean_object* v___x_5232_; 
if (v_isShared_5230_ == 0)
{
v___x_5232_ = v___x_5229_;
goto v_reusejp_5231_;
}
else
{
lean_object* v_reuseFailAlloc_5233_; 
v_reuseFailAlloc_5233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5233_, 0, v_a_5227_);
v___x_5232_ = v_reuseFailAlloc_5233_;
goto v_reusejp_5231_;
}
v_reusejp_5231_:
{
return v___x_5232_;
}
}
}
}
}
else
{
lean_object* v_n_5236_; lean_object* v_e_5237_; lean_object* v_o_5238_; lean_object* v_n_5239_; lean_object* v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; 
lean_del_object(v___x_5202_);
v_n_5236_ = lean_ctor_get(v_val_5193_, 0);
lean_inc(v_n_5236_);
lean_dec_ref_known(v_val_5193_, 1);
v_e_5237_ = lean_ctor_get(v_val_5200_, 0);
lean_inc_ref_n(v_e_5237_, 2);
v_o_5238_ = lean_ctor_get(v_val_5200_, 1);
lean_inc_ref(v_o_5238_);
v_n_5239_ = lean_ctor_get(v_val_5200_, 2);
lean_inc(v_n_5239_);
lean_dec_ref_known(v_val_5200_, 3);
v___x_5240_ = lean_nat_sub(v_n_5236_, v_n_5239_);
lean_dec(v_n_5239_);
lean_dec(v_n_5236_);
v___x_5241_ = l_Lean_mkNatLit(v___x_5240_);
v___x_5242_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat(v___x_5241_, v_e_5237_);
v___x_5243_ = ((lean_object*)(l_Nat_reduceSubDiff___redArg___closed__1));
v___x_5244_ = lean_unsigned_to_nat(3u);
v___x_5245_ = lean_mk_empty_array_with_capacity(v___x_5244_);
v___x_5246_ = lean_array_push(v___x_5245_, v_p_5186_);
v___x_5247_ = lean_array_push(v___x_5246_, v_e_5237_);
v___x_5248_ = lean_array_push(v___x_5247_, v_o_5238_);
v___x_5249_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v___x_5242_, v___x_5243_, v___x_5248_, v_a_5178_);
lean_dec_ref(v___x_5248_);
return v___x_5249_;
}
}
}
else
{
lean_object* v_val_5251_; lean_object* v_e_5252_; lean_object* v_o_5253_; lean_object* v_n_5254_; lean_object* v___y_5256_; 
lean_dec_ref(v_p_5186_);
v_val_5251_ = lean_ctor_get(v_a_5196_, 0);
lean_inc(v_val_5251_);
lean_dec_ref_known(v_a_5196_, 1);
v_e_5252_ = lean_ctor_get(v_val_5193_, 0);
lean_inc_ref(v_e_5252_);
v_o_5253_ = lean_ctor_get(v_val_5193_, 1);
lean_inc_ref(v_o_5253_);
v_n_5254_ = lean_ctor_get(v_val_5193_, 2);
lean_inc(v_n_5254_);
lean_dec_ref_known(v_val_5193_, 3);
if (lean_obj_tag(v_val_5251_) == 0)
{
lean_object* v_n_5276_; uint8_t v___x_5277_; 
v_n_5276_ = lean_ctor_get(v_val_5251_, 0);
lean_inc(v_n_5276_);
lean_dec_ref_known(v_val_5251_, 1);
v___x_5277_ = lean_nat_dec_le(v_n_5254_, v_n_5276_);
if (v___x_5277_ == 0)
{
lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; 
v___x_5278_ = lean_nat_sub(v_n_5254_, v_n_5276_);
lean_dec(v_n_5276_);
lean_dec(v_n_5254_);
v___x_5279_ = l_Lean_mkNatLit(v___x_5278_);
lean_inc_ref(v_e_5252_);
v___x_5280_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat(v_e_5252_, v___x_5279_);
lean_inc_ref(v_o_5253_);
lean_inc_ref(v___x_5194_);
v___x_5281_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v___x_5194_, v_o_5253_);
v___x_5282_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_5281_, v_a_5175_, v_a_5176_, v_a_5177_, v_a_5178_);
if (lean_obj_tag(v___x_5282_) == 0)
{
lean_object* v_a_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; 
v_a_5283_ = lean_ctor_get(v___x_5282_, 0);
lean_inc(v_a_5283_);
lean_dec_ref_known(v___x_5282_, 1);
v___x_5284_ = ((lean_object*)(l_Nat_reduceSubDiff___redArg___closed__5));
v___x_5285_ = lean_unsigned_to_nat(4u);
v___x_5286_ = lean_mk_empty_array_with_capacity(v___x_5285_);
v___x_5287_ = lean_array_push(v___x_5286_, v_o_5253_);
v___x_5288_ = lean_array_push(v___x_5287_, v___x_5194_);
v___x_5289_ = lean_array_push(v___x_5288_, v_a_5283_);
v___x_5290_ = lean_array_push(v___x_5289_, v_e_5252_);
v___x_5291_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v___x_5280_, v___x_5284_, v___x_5290_, v_a_5178_);
lean_dec_ref(v___x_5290_);
return v___x_5291_;
}
else
{
lean_object* v_a_5292_; lean_object* v___x_5294_; uint8_t v_isShared_5295_; uint8_t v_isSharedCheck_5299_; 
lean_dec_ref(v___x_5280_);
lean_dec_ref(v_o_5253_);
lean_dec_ref(v_e_5252_);
lean_dec_ref(v___x_5194_);
v_a_5292_ = lean_ctor_get(v___x_5282_, 0);
v_isSharedCheck_5299_ = !lean_is_exclusive(v___x_5282_);
if (v_isSharedCheck_5299_ == 0)
{
v___x_5294_ = v___x_5282_;
v_isShared_5295_ = v_isSharedCheck_5299_;
goto v_resetjp_5293_;
}
else
{
lean_inc(v_a_5292_);
lean_dec(v___x_5282_);
v___x_5294_ = lean_box(0);
v_isShared_5295_ = v_isSharedCheck_5299_;
goto v_resetjp_5293_;
}
v_resetjp_5293_:
{
lean_object* v___x_5297_; 
if (v_isShared_5295_ == 0)
{
v___x_5297_ = v___x_5294_;
goto v_reusejp_5296_;
}
else
{
lean_object* v_reuseFailAlloc_5298_; 
v_reuseFailAlloc_5298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5298_, 0, v_a_5292_);
v___x_5297_ = v_reuseFailAlloc_5298_;
goto v_reusejp_5296_;
}
v_reusejp_5296_:
{
return v___x_5297_;
}
}
}
}
else
{
uint8_t v___x_5300_; 
v___x_5300_ = lean_nat_dec_eq(v_n_5254_, v_n_5276_);
if (v___x_5300_ == 0)
{
lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; 
v___x_5301_ = lean_nat_sub(v_n_5276_, v_n_5254_);
lean_dec(v_n_5254_);
lean_dec(v_n_5276_);
v___x_5302_ = l_Lean_mkNatLit(v___x_5301_);
lean_inc_ref(v_e_5252_);
v___x_5303_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat(v_e_5252_, v___x_5302_);
v___y_5256_ = v___x_5303_;
goto v___jp_5255_;
}
else
{
lean_dec(v_n_5276_);
lean_dec(v_n_5254_);
lean_inc_ref(v_e_5252_);
v___y_5256_ = v_e_5252_;
goto v___jp_5255_;
}
}
}
else
{
lean_object* v_e_5304_; lean_object* v_o_5305_; lean_object* v_n_5306_; lean_object* v___y_5308_; uint8_t v___x_5330_; 
lean_dec_ref(v___x_5194_);
v_e_5304_ = lean_ctor_get(v_val_5251_, 0);
lean_inc_ref(v_e_5304_);
v_o_5305_ = lean_ctor_get(v_val_5251_, 1);
lean_inc_ref(v_o_5305_);
v_n_5306_ = lean_ctor_get(v_val_5251_, 2);
lean_inc(v_n_5306_);
lean_dec_ref_known(v_val_5251_, 3);
v___x_5330_ = lean_nat_dec_le(v_n_5254_, v_n_5306_);
if (v___x_5330_ == 0)
{
lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; lean_object* v___x_5336_; 
v___x_5331_ = lean_nat_sub(v_n_5254_, v_n_5306_);
lean_dec(v_n_5306_);
lean_dec(v_n_5254_);
v___x_5332_ = l_Lean_mkNatLit(v___x_5331_);
lean_inc_ref(v_e_5252_);
v___x_5333_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat(v_e_5252_, v___x_5332_);
lean_inc_ref(v_e_5304_);
v___x_5334_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat(v___x_5333_, v_e_5304_);
lean_inc_ref(v_o_5253_);
lean_inc_ref(v_o_5305_);
v___x_5335_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_o_5305_, v_o_5253_);
v___x_5336_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_5335_, v_a_5175_, v_a_5176_, v_a_5177_, v_a_5178_);
if (lean_obj_tag(v___x_5336_) == 0)
{
lean_object* v_a_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; 
v_a_5337_ = lean_ctor_get(v___x_5336_, 0);
lean_inc(v_a_5337_);
lean_dec_ref_known(v___x_5336_, 1);
v___x_5338_ = ((lean_object*)(l_Nat_reduceSubDiff___redArg___closed__9));
v___x_5339_ = lean_unsigned_to_nat(5u);
v___x_5340_ = lean_mk_empty_array_with_capacity(v___x_5339_);
v___x_5341_ = lean_array_push(v___x_5340_, v_e_5252_);
v___x_5342_ = lean_array_push(v___x_5341_, v_e_5304_);
v___x_5343_ = lean_array_push(v___x_5342_, v_o_5253_);
v___x_5344_ = lean_array_push(v___x_5343_, v_o_5305_);
v___x_5345_ = lean_array_push(v___x_5344_, v_a_5337_);
v___x_5346_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v___x_5334_, v___x_5338_, v___x_5345_, v_a_5178_);
lean_dec_ref(v___x_5345_);
return v___x_5346_;
}
else
{
lean_object* v_a_5347_; lean_object* v___x_5349_; uint8_t v_isShared_5350_; uint8_t v_isSharedCheck_5354_; 
lean_dec_ref(v___x_5334_);
lean_dec_ref(v_o_5305_);
lean_dec_ref(v_e_5304_);
lean_dec_ref(v_o_5253_);
lean_dec_ref(v_e_5252_);
v_a_5347_ = lean_ctor_get(v___x_5336_, 0);
v_isSharedCheck_5354_ = !lean_is_exclusive(v___x_5336_);
if (v_isSharedCheck_5354_ == 0)
{
v___x_5349_ = v___x_5336_;
v_isShared_5350_ = v_isSharedCheck_5354_;
goto v_resetjp_5348_;
}
else
{
lean_inc(v_a_5347_);
lean_dec(v___x_5336_);
v___x_5349_ = lean_box(0);
v_isShared_5350_ = v_isSharedCheck_5354_;
goto v_resetjp_5348_;
}
v_resetjp_5348_:
{
lean_object* v___x_5352_; 
if (v_isShared_5350_ == 0)
{
v___x_5352_ = v___x_5349_;
goto v_reusejp_5351_;
}
else
{
lean_object* v_reuseFailAlloc_5353_; 
v_reuseFailAlloc_5353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5353_, 0, v_a_5347_);
v___x_5352_ = v_reuseFailAlloc_5353_;
goto v_reusejp_5351_;
}
v_reusejp_5351_:
{
return v___x_5352_;
}
}
}
}
else
{
uint8_t v___x_5355_; 
v___x_5355_ = lean_nat_dec_eq(v_n_5254_, v_n_5306_);
if (v___x_5355_ == 0)
{
lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; 
v___x_5356_ = lean_nat_sub(v_n_5306_, v_n_5254_);
lean_dec(v_n_5254_);
lean_dec(v_n_5306_);
v___x_5357_ = l_Lean_mkNatLit(v___x_5356_);
lean_inc_ref(v_e_5304_);
v___x_5358_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkAddNat(v_e_5304_, v___x_5357_);
v___y_5308_ = v___x_5358_;
goto v___jp_5307_;
}
else
{
lean_dec(v_n_5306_);
lean_dec(v_n_5254_);
lean_inc_ref(v_e_5304_);
v___y_5308_ = v_e_5304_;
goto v___jp_5307_;
}
}
v___jp_5307_:
{
lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; 
lean_inc_ref(v_e_5252_);
v___x_5309_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkSubNat(v_e_5252_, v___y_5308_);
lean_inc_ref(v_o_5305_);
lean_inc_ref(v_o_5253_);
v___x_5310_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_o_5253_, v_o_5305_);
v___x_5311_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_5310_, v_a_5175_, v_a_5176_, v_a_5177_, v_a_5178_);
if (lean_obj_tag(v___x_5311_) == 0)
{
lean_object* v_a_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; 
v_a_5312_ = lean_ctor_get(v___x_5311_, 0);
lean_inc(v_a_5312_);
lean_dec_ref_known(v___x_5311_, 1);
v___x_5313_ = ((lean_object*)(l_Nat_reduceSubDiff___redArg___closed__7));
v___x_5314_ = lean_unsigned_to_nat(5u);
v___x_5315_ = lean_mk_empty_array_with_capacity(v___x_5314_);
v___x_5316_ = lean_array_push(v___x_5315_, v_e_5252_);
v___x_5317_ = lean_array_push(v___x_5316_, v_e_5304_);
v___x_5318_ = lean_array_push(v___x_5317_, v_o_5253_);
v___x_5319_ = lean_array_push(v___x_5318_, v_o_5305_);
v___x_5320_ = lean_array_push(v___x_5319_, v_a_5312_);
v___x_5321_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v___x_5309_, v___x_5313_, v___x_5320_, v_a_5178_);
lean_dec_ref(v___x_5320_);
return v___x_5321_;
}
else
{
lean_object* v_a_5322_; lean_object* v___x_5324_; uint8_t v_isShared_5325_; uint8_t v_isSharedCheck_5329_; 
lean_dec_ref(v___x_5309_);
lean_dec_ref(v_o_5305_);
lean_dec_ref(v_e_5304_);
lean_dec_ref(v_o_5253_);
lean_dec_ref(v_e_5252_);
v_a_5322_ = lean_ctor_get(v___x_5311_, 0);
v_isSharedCheck_5329_ = !lean_is_exclusive(v___x_5311_);
if (v_isSharedCheck_5329_ == 0)
{
v___x_5324_ = v___x_5311_;
v_isShared_5325_ = v_isSharedCheck_5329_;
goto v_resetjp_5323_;
}
else
{
lean_inc(v_a_5322_);
lean_dec(v___x_5311_);
v___x_5324_ = lean_box(0);
v_isShared_5325_ = v_isSharedCheck_5329_;
goto v_resetjp_5323_;
}
v_resetjp_5323_:
{
lean_object* v___x_5327_; 
if (v_isShared_5325_ == 0)
{
v___x_5327_ = v___x_5324_;
goto v_reusejp_5326_;
}
else
{
lean_object* v_reuseFailAlloc_5328_; 
v_reuseFailAlloc_5328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5328_, 0, v_a_5322_);
v___x_5327_ = v_reuseFailAlloc_5328_;
goto v_reusejp_5326_;
}
v_reusejp_5326_:
{
return v___x_5327_;
}
}
}
}
}
v___jp_5255_:
{
lean_object* v___x_5257_; lean_object* v___x_5258_; 
lean_inc_ref(v___x_5194_);
lean_inc_ref(v_o_5253_);
v___x_5257_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkLENat(v_o_5253_, v___x_5194_);
v___x_5258_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkOfDecideEqTrue(v___x_5257_, v_a_5175_, v_a_5176_, v_a_5177_, v_a_5178_);
if (lean_obj_tag(v___x_5258_) == 0)
{
lean_object* v_a_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; lean_object* v___x_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; lean_object* v___x_5267_; 
v_a_5259_ = lean_ctor_get(v___x_5258_, 0);
lean_inc(v_a_5259_);
lean_dec_ref_known(v___x_5258_, 1);
v___x_5260_ = ((lean_object*)(l_Nat_reduceSubDiff___redArg___closed__3));
v___x_5261_ = lean_unsigned_to_nat(4u);
v___x_5262_ = lean_mk_empty_array_with_capacity(v___x_5261_);
v___x_5263_ = lean_array_push(v___x_5262_, v_e_5252_);
v___x_5264_ = lean_array_push(v___x_5263_, v_o_5253_);
v___x_5265_ = lean_array_push(v___x_5264_, v___x_5194_);
v___x_5266_ = lean_array_push(v___x_5265_, v_a_5259_);
v___x_5267_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_applySimprocConst___redArg(v___y_5256_, v___x_5260_, v___x_5266_, v_a_5178_);
lean_dec_ref(v___x_5266_);
return v___x_5267_;
}
else
{
lean_object* v_a_5268_; lean_object* v___x_5270_; uint8_t v_isShared_5271_; uint8_t v_isSharedCheck_5275_; 
lean_dec_ref(v___y_5256_);
lean_dec_ref(v_o_5253_);
lean_dec_ref(v_e_5252_);
lean_dec_ref(v___x_5194_);
v_a_5268_ = lean_ctor_get(v___x_5258_, 0);
v_isSharedCheck_5275_ = !lean_is_exclusive(v___x_5258_);
if (v_isSharedCheck_5275_ == 0)
{
v___x_5270_ = v___x_5258_;
v_isShared_5271_ = v_isSharedCheck_5275_;
goto v_resetjp_5269_;
}
else
{
lean_inc(v_a_5268_);
lean_dec(v___x_5258_);
v___x_5270_ = lean_box(0);
v_isShared_5271_ = v_isSharedCheck_5275_;
goto v_resetjp_5269_;
}
v_resetjp_5269_:
{
lean_object* v___x_5273_; 
if (v_isShared_5271_ == 0)
{
v___x_5273_ = v___x_5270_;
goto v_reusejp_5272_;
}
else
{
lean_object* v_reuseFailAlloc_5274_; 
v_reuseFailAlloc_5274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5274_, 0, v_a_5268_);
v___x_5273_ = v_reuseFailAlloc_5274_;
goto v_reusejp_5272_;
}
v_reusejp_5272_:
{
return v___x_5273_;
}
}
}
}
}
}
else
{
lean_object* v___x_5359_; lean_object* v___x_5361_; 
lean_dec(v_a_5196_);
lean_dec_ref(v___x_5194_);
lean_dec(v_val_5193_);
lean_dec_ref(v_p_5186_);
v___x_5359_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_5199_ == 0)
{
lean_ctor_set(v___x_5198_, 0, v___x_5359_);
v___x_5361_ = v___x_5198_;
goto v_reusejp_5360_;
}
else
{
lean_object* v_reuseFailAlloc_5362_; 
v_reuseFailAlloc_5362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5362_, 0, v___x_5359_);
v___x_5361_ = v_reuseFailAlloc_5362_;
goto v_reusejp_5360_;
}
v_reusejp_5360_:
{
return v___x_5361_;
}
}
}
}
else
{
lean_object* v_a_5364_; lean_object* v___x_5366_; uint8_t v_isShared_5367_; uint8_t v_isSharedCheck_5371_; 
lean_dec_ref(v___x_5194_);
lean_dec(v_val_5193_);
lean_dec_ref(v_p_5186_);
v_a_5364_ = lean_ctor_get(v___x_5195_, 0);
v_isSharedCheck_5371_ = !lean_is_exclusive(v___x_5195_);
if (v_isSharedCheck_5371_ == 0)
{
v___x_5366_ = v___x_5195_;
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
else
{
lean_inc(v_a_5364_);
lean_dec(v___x_5195_);
v___x_5366_ = lean_box(0);
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
v_resetjp_5365_:
{
lean_object* v___x_5369_; 
if (v_isShared_5367_ == 0)
{
v___x_5369_ = v___x_5366_;
goto v_reusejp_5368_;
}
else
{
lean_object* v_reuseFailAlloc_5370_; 
v_reuseFailAlloc_5370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5370_, 0, v_a_5364_);
v___x_5369_ = v_reuseFailAlloc_5370_;
goto v_reusejp_5368_;
}
v_reusejp_5368_:
{
return v___x_5369_;
}
}
}
}
else
{
lean_object* v___x_5372_; lean_object* v___x_5374_; 
lean_dec(v_a_5189_);
lean_dec_ref(v_p_5186_);
v___x_5372_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_5192_ == 0)
{
lean_ctor_set(v___x_5191_, 0, v___x_5372_);
v___x_5374_ = v___x_5191_;
goto v_reusejp_5373_;
}
else
{
lean_object* v_reuseFailAlloc_5375_; 
v_reuseFailAlloc_5375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5375_, 0, v___x_5372_);
v___x_5374_ = v_reuseFailAlloc_5375_;
goto v_reusejp_5373_;
}
v_reusejp_5373_:
{
return v___x_5374_;
}
}
}
}
else
{
lean_object* v_a_5377_; lean_object* v___x_5379_; uint8_t v_isShared_5380_; uint8_t v_isSharedCheck_5384_; 
lean_dec_ref(v_p_5186_);
v_a_5377_ = lean_ctor_get(v___x_5188_, 0);
v_isSharedCheck_5384_ = !lean_is_exclusive(v___x_5188_);
if (v_isSharedCheck_5384_ == 0)
{
v___x_5379_ = v___x_5188_;
v_isShared_5380_ = v_isSharedCheck_5384_;
goto v_resetjp_5378_;
}
else
{
lean_inc(v_a_5377_);
lean_dec(v___x_5188_);
v___x_5379_ = lean_box(0);
v_isShared_5380_ = v_isSharedCheck_5384_;
goto v_resetjp_5378_;
}
v_resetjp_5378_:
{
lean_object* v___x_5382_; 
if (v_isShared_5380_ == 0)
{
v___x_5382_ = v___x_5379_;
goto v_reusejp_5381_;
}
else
{
lean_object* v_reuseFailAlloc_5383_; 
v_reuseFailAlloc_5383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5383_, 0, v_a_5377_);
v___x_5382_ = v_reuseFailAlloc_5383_;
goto v_reusejp_5381_;
}
v_reusejp_5381_:
{
return v___x_5382_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSubDiff___redArg___boxed(lean_object* v_e_5385_, lean_object* v_a_5386_, lean_object* v_a_5387_, lean_object* v_a_5388_, lean_object* v_a_5389_, lean_object* v_a_5390_){
_start:
{
lean_object* v_res_5391_; 
v_res_5391_ = l_Nat_reduceSubDiff___redArg(v_e_5385_, v_a_5386_, v_a_5387_, v_a_5388_, v_a_5389_);
lean_dec(v_a_5389_);
lean_dec_ref(v_a_5388_);
lean_dec(v_a_5387_);
lean_dec_ref(v_a_5386_);
lean_dec_ref(v_e_5385_);
return v_res_5391_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSubDiff(lean_object* v_e_5392_, lean_object* v_a_5393_, lean_object* v_a_5394_, lean_object* v_a_5395_, lean_object* v_a_5396_, lean_object* v_a_5397_, lean_object* v_a_5398_, lean_object* v_a_5399_){
_start:
{
lean_object* v___x_5401_; 
v___x_5401_ = l_Nat_reduceSubDiff___redArg(v_e_5392_, v_a_5396_, v_a_5397_, v_a_5398_, v_a_5399_);
return v___x_5401_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSubDiff___boxed(lean_object* v_e_5402_, lean_object* v_a_5403_, lean_object* v_a_5404_, lean_object* v_a_5405_, lean_object* v_a_5406_, lean_object* v_a_5407_, lean_object* v_a_5408_, lean_object* v_a_5409_, lean_object* v_a_5410_){
_start:
{
lean_object* v_res_5411_; 
v_res_5411_ = l_Nat_reduceSubDiff(v_e_5402_, v_a_5403_, v_a_5404_, v_a_5405_, v_a_5406_, v_a_5407_, v_a_5408_, v_a_5409_);
lean_dec(v_a_5409_);
lean_dec_ref(v_a_5408_);
lean_dec(v_a_5407_);
lean_dec_ref(v_a_5406_);
lean_dec(v_a_5405_);
lean_dec_ref(v_a_5404_);
lean_dec(v_a_5403_);
lean_dec_ref(v_e_5402_);
return v_res_5411_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; 
v___x_5417_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26_));
v___x_5418_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_));
v___x_5419_ = lean_alloc_closure((void*)(l_Nat_reduceSubDiff___boxed), 9, 0);
v___x_5420_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_5417_, v___x_5418_, v___x_5419_);
return v___x_5420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26____boxed(lean_object* v_a_5421_){
_start:
{
lean_object* v_res_5422_; 
v_res_5422_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26_();
return v_res_5422_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_5423_; lean_object* v___x_5424_; 
v___x_5423_ = lean_alloc_closure((void*)(l_Nat_reduceSubDiff___boxed), 9, 0);
v___x_5424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5424_, 0, v___x_5423_);
return v___x_5424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_5426_; uint8_t v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; 
v___x_5426_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26_));
v___x_5427_ = 1;
v___x_5428_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28_);
v___x_5429_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_5426_, v___x_5427_, v___x_5428_);
return v___x_5429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28____boxed(lean_object* v_a_5430_){
_start:
{
lean_object* v_res_5431_; 
v_res_5431_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28_();
return v_res_5431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_5433_; uint8_t v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; 
v___x_5433_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26_));
v___x_5434_ = 1;
v___x_5435_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28_);
v___x_5436_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_5433_, v___x_5434_, v___x_5435_);
return v___x_5436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_30____boxed(lean_object* v_a_5437_){
_start:
{
lean_object* v_res_5438_; 
v_res_5438_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_30_();
return v_res_5438_;
}
}
static lean_object* _init_l_Nat_reduceDvd___redArg___closed__5(void){
_start:
{
lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; 
v___x_5448_ = lean_box(0);
v___x_5449_ = ((lean_object*)(l_Nat_reduceDvd___redArg___closed__4));
v___x_5450_ = l_Lean_mkConst(v___x_5449_, v___x_5448_);
return v___x_5450_;
}
}
static lean_object* _init_l_Nat_reduceDvd___redArg___closed__8(void){
_start:
{
lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; 
v___x_5455_ = lean_box(0);
v___x_5456_ = ((lean_object*)(l_Nat_reduceDvd___redArg___closed__7));
v___x_5457_ = l_Lean_mkConst(v___x_5456_, v___x_5455_);
return v___x_5457_;
}
}
static lean_object* _init_l_Nat_reduceDvd___redArg___closed__11(void){
_start:
{
lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; 
v___x_5462_ = lean_box(0);
v___x_5463_ = ((lean_object*)(l_Nat_reduceDvd___redArg___closed__10));
v___x_5464_ = l_Lean_mkConst(v___x_5463_, v___x_5462_);
return v___x_5464_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDvd___redArg(lean_object* v_e_5465_, lean_object* v_a_5466_, lean_object* v_a_5467_, lean_object* v_a_5468_, lean_object* v_a_5469_){
_start:
{
lean_object* v___x_5474_; 
v___x_5474_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_5465_, v_a_5467_);
if (lean_obj_tag(v___x_5474_) == 0)
{
lean_object* v_a_5475_; lean_object* v___x_5476_; uint8_t v___x_5477_; 
v_a_5475_ = lean_ctor_get(v___x_5474_, 0);
lean_inc(v_a_5475_);
lean_dec_ref_known(v___x_5474_, 1);
v___x_5476_ = l_Lean_Expr_cleanupAnnotations(v_a_5475_);
v___x_5477_ = l_Lean_Expr_isApp(v___x_5476_);
if (v___x_5477_ == 0)
{
lean_dec_ref(v___x_5476_);
goto v___jp_5471_;
}
else
{
lean_object* v_arg_5478_; lean_object* v___x_5479_; uint8_t v___x_5480_; 
v_arg_5478_ = lean_ctor_get(v___x_5476_, 1);
lean_inc_ref(v_arg_5478_);
v___x_5479_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5476_);
v___x_5480_ = l_Lean_Expr_isApp(v___x_5479_);
if (v___x_5480_ == 0)
{
lean_dec_ref(v___x_5479_);
lean_dec_ref(v_arg_5478_);
goto v___jp_5471_;
}
else
{
lean_object* v_arg_5481_; lean_object* v___x_5482_; uint8_t v___x_5483_; 
v_arg_5481_ = lean_ctor_get(v___x_5479_, 1);
lean_inc_ref(v_arg_5481_);
v___x_5482_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5479_);
v___x_5483_ = l_Lean_Expr_isApp(v___x_5482_);
if (v___x_5483_ == 0)
{
lean_dec_ref(v___x_5482_);
lean_dec_ref(v_arg_5481_);
lean_dec_ref(v_arg_5478_);
goto v___jp_5471_;
}
else
{
lean_object* v_arg_5484_; lean_object* v___x_5485_; uint8_t v___x_5486_; 
v_arg_5484_ = lean_ctor_get(v___x_5482_, 1);
lean_inc_ref(v_arg_5484_);
v___x_5485_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5482_);
v___x_5486_ = l_Lean_Expr_isApp(v___x_5485_);
if (v___x_5486_ == 0)
{
lean_dec_ref(v___x_5485_);
lean_dec_ref(v_arg_5484_);
lean_dec_ref(v_arg_5481_);
lean_dec_ref(v_arg_5478_);
goto v___jp_5471_;
}
else
{
lean_object* v___x_5487_; lean_object* v___x_5488_; uint8_t v___x_5489_; 
v___x_5487_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5485_);
v___x_5488_ = ((lean_object*)(l_Nat_reduceDvd___redArg___closed__2));
v___x_5489_ = l_Lean_Expr_isConstOf(v___x_5487_, v___x_5488_);
lean_dec_ref(v___x_5487_);
if (v___x_5489_ == 0)
{
lean_dec_ref(v_arg_5484_);
lean_dec_ref(v_arg_5481_);
lean_dec_ref(v_arg_5478_);
goto v___jp_5471_;
}
else
{
lean_object* v___x_5490_; lean_object* v___x_5491_; 
v___x_5490_ = lean_obj_once(&l_Nat_reduceDvd___redArg___closed__5, &l_Nat_reduceDvd___redArg___closed__5_once, _init_l_Nat_reduceDvd___redArg___closed__5);
v___x_5491_ = l_Lean_Meta_matchesInstance(v_arg_5484_, v___x_5490_, v_a_5466_, v_a_5467_, v_a_5468_, v_a_5469_);
if (lean_obj_tag(v___x_5491_) == 0)
{
lean_object* v_a_5492_; lean_object* v___x_5494_; uint8_t v_isShared_5495_; uint8_t v_isSharedCheck_5578_; 
v_a_5492_ = lean_ctor_get(v___x_5491_, 0);
v_isSharedCheck_5578_ = !lean_is_exclusive(v___x_5491_);
if (v_isSharedCheck_5578_ == 0)
{
v___x_5494_ = v___x_5491_;
v_isShared_5495_ = v_isSharedCheck_5578_;
goto v_resetjp_5493_;
}
else
{
lean_inc(v_a_5492_);
lean_dec(v___x_5491_);
v___x_5494_ = lean_box(0);
v_isShared_5495_ = v_isSharedCheck_5578_;
goto v_resetjp_5493_;
}
v_resetjp_5493_:
{
uint8_t v___x_5496_; 
v___x_5496_ = lean_unbox(v_a_5492_);
lean_dec(v_a_5492_);
if (v___x_5496_ == 0)
{
lean_object* v___x_5497_; lean_object* v___x_5499_; 
lean_dec_ref(v_arg_5481_);
lean_dec_ref(v_arg_5478_);
v___x_5497_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_5495_ == 0)
{
lean_ctor_set(v___x_5494_, 0, v___x_5497_);
v___x_5499_ = v___x_5494_;
goto v_reusejp_5498_;
}
else
{
lean_object* v_reuseFailAlloc_5500_; 
v_reuseFailAlloc_5500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5500_, 0, v___x_5497_);
v___x_5499_ = v_reuseFailAlloc_5500_;
goto v_reusejp_5498_;
}
v_reusejp_5498_:
{
return v___x_5499_;
}
}
else
{
lean_object* v___x_5501_; 
lean_del_object(v___x_5494_);
v___x_5501_ = l_Lean_Meta_getNatValue_x3f(v_arg_5481_, v_a_5466_, v_a_5467_, v_a_5468_, v_a_5469_);
if (lean_obj_tag(v___x_5501_) == 0)
{
lean_object* v_a_5502_; lean_object* v___x_5504_; uint8_t v_isShared_5505_; uint8_t v_isSharedCheck_5569_; 
v_a_5502_ = lean_ctor_get(v___x_5501_, 0);
v_isSharedCheck_5569_ = !lean_is_exclusive(v___x_5501_);
if (v_isSharedCheck_5569_ == 0)
{
v___x_5504_ = v___x_5501_;
v_isShared_5505_ = v_isSharedCheck_5569_;
goto v_resetjp_5503_;
}
else
{
lean_inc(v_a_5502_);
lean_dec(v___x_5501_);
v___x_5504_ = lean_box(0);
v_isShared_5505_ = v_isSharedCheck_5569_;
goto v_resetjp_5503_;
}
v_resetjp_5503_:
{
if (lean_obj_tag(v_a_5502_) == 1)
{
lean_object* v_val_5506_; lean_object* v___x_5508_; uint8_t v_isShared_5509_; uint8_t v_isSharedCheck_5564_; 
lean_del_object(v___x_5504_);
v_val_5506_ = lean_ctor_get(v_a_5502_, 0);
v_isSharedCheck_5564_ = !lean_is_exclusive(v_a_5502_);
if (v_isSharedCheck_5564_ == 0)
{
v___x_5508_ = v_a_5502_;
v_isShared_5509_ = v_isSharedCheck_5564_;
goto v_resetjp_5507_;
}
else
{
lean_inc(v_val_5506_);
lean_dec(v_a_5502_);
v___x_5508_ = lean_box(0);
v_isShared_5509_ = v_isSharedCheck_5564_;
goto v_resetjp_5507_;
}
v_resetjp_5507_:
{
lean_object* v___x_5510_; 
v___x_5510_ = l_Lean_Meta_getNatValue_x3f(v_arg_5478_, v_a_5466_, v_a_5467_, v_a_5468_, v_a_5469_);
if (lean_obj_tag(v___x_5510_) == 0)
{
lean_object* v_a_5511_; lean_object* v___x_5513_; uint8_t v_isShared_5514_; uint8_t v_isSharedCheck_5555_; 
v_a_5511_ = lean_ctor_get(v___x_5510_, 0);
v_isSharedCheck_5555_ = !lean_is_exclusive(v___x_5510_);
if (v_isSharedCheck_5555_ == 0)
{
v___x_5513_ = v___x_5510_;
v_isShared_5514_ = v_isSharedCheck_5555_;
goto v_resetjp_5512_;
}
else
{
lean_inc(v_a_5511_);
lean_dec(v___x_5510_);
v___x_5513_ = lean_box(0);
v_isShared_5514_ = v_isSharedCheck_5555_;
goto v_resetjp_5512_;
}
v_resetjp_5512_:
{
if (lean_obj_tag(v_a_5511_) == 1)
{
lean_object* v_val_5515_; lean_object* v___x_5517_; uint8_t v_isShared_5518_; uint8_t v_isSharedCheck_5550_; 
v_val_5515_ = lean_ctor_get(v_a_5511_, 0);
v_isSharedCheck_5550_ = !lean_is_exclusive(v_a_5511_);
if (v_isSharedCheck_5550_ == 0)
{
v___x_5517_ = v_a_5511_;
v_isShared_5518_ = v_isSharedCheck_5550_;
goto v_resetjp_5516_;
}
else
{
lean_inc(v_val_5515_);
lean_dec(v_a_5511_);
v___x_5517_ = lean_box(0);
v_isShared_5518_ = v_isSharedCheck_5550_;
goto v_resetjp_5516_;
}
v_resetjp_5516_:
{
lean_object* v___x_5519_; lean_object* v___x_5520_; uint8_t v___x_5521_; 
v___x_5519_ = lean_nat_mod(v_val_5515_, v_val_5506_);
lean_dec(v_val_5506_);
lean_dec(v_val_5515_);
v___x_5520_ = lean_unsigned_to_nat(0u);
v___x_5521_ = lean_nat_dec_eq(v___x_5519_, v___x_5520_);
lean_dec(v___x_5519_);
if (v___x_5521_ == 0)
{
lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5527_; 
v___x_5522_ = lean_obj_once(&l_Nat_reduceEqDiff___redArg___closed__5, &l_Nat_reduceEqDiff___redArg___closed__5_once, _init_l_Nat_reduceEqDiff___redArg___closed__5);
v___x_5523_ = lean_obj_once(&l_Nat_reduceDvd___redArg___closed__8, &l_Nat_reduceDvd___redArg___closed__8_once, _init_l_Nat_reduceDvd___redArg___closed__8);
v___x_5524_ = l_Lean_eagerReflBoolTrue;
v___x_5525_ = l_Lean_mkApp3(v___x_5523_, v_arg_5481_, v_arg_5478_, v___x_5524_);
if (v_isShared_5518_ == 0)
{
lean_ctor_set(v___x_5517_, 0, v___x_5525_);
v___x_5527_ = v___x_5517_;
goto v_reusejp_5526_;
}
else
{
lean_object* v_reuseFailAlloc_5535_; 
v_reuseFailAlloc_5535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5535_, 0, v___x_5525_);
v___x_5527_ = v_reuseFailAlloc_5535_;
goto v_reusejp_5526_;
}
v_reusejp_5526_:
{
lean_object* v___x_5528_; lean_object* v___x_5530_; 
v___x_5528_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_5528_, 0, v___x_5522_);
lean_ctor_set(v___x_5528_, 1, v___x_5527_);
lean_ctor_set_uint8(v___x_5528_, sizeof(void*)*2, v___x_5489_);
if (v_isShared_5509_ == 0)
{
lean_ctor_set_tag(v___x_5508_, 0);
lean_ctor_set(v___x_5508_, 0, v___x_5528_);
v___x_5530_ = v___x_5508_;
goto v_reusejp_5529_;
}
else
{
lean_object* v_reuseFailAlloc_5534_; 
v_reuseFailAlloc_5534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5534_, 0, v___x_5528_);
v___x_5530_ = v_reuseFailAlloc_5534_;
goto v_reusejp_5529_;
}
v_reusejp_5529_:
{
lean_object* v___x_5532_; 
if (v_isShared_5514_ == 0)
{
lean_ctor_set(v___x_5513_, 0, v___x_5530_);
v___x_5532_ = v___x_5513_;
goto v_reusejp_5531_;
}
else
{
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v___x_5530_);
v___x_5532_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5531_;
}
v_reusejp_5531_:
{
return v___x_5532_;
}
}
}
}
else
{
lean_object* v___x_5536_; lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5541_; 
v___x_5536_ = lean_obj_once(&l_Nat_reduceEqDiff___redArg___closed__11, &l_Nat_reduceEqDiff___redArg___closed__11_once, _init_l_Nat_reduceEqDiff___redArg___closed__11);
v___x_5537_ = lean_obj_once(&l_Nat_reduceDvd___redArg___closed__11, &l_Nat_reduceDvd___redArg___closed__11_once, _init_l_Nat_reduceDvd___redArg___closed__11);
v___x_5538_ = l_Lean_eagerReflBoolTrue;
v___x_5539_ = l_Lean_mkApp3(v___x_5537_, v_arg_5481_, v_arg_5478_, v___x_5538_);
if (v_isShared_5518_ == 0)
{
lean_ctor_set(v___x_5517_, 0, v___x_5539_);
v___x_5541_ = v___x_5517_;
goto v_reusejp_5540_;
}
else
{
lean_object* v_reuseFailAlloc_5549_; 
v_reuseFailAlloc_5549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5549_, 0, v___x_5539_);
v___x_5541_ = v_reuseFailAlloc_5549_;
goto v_reusejp_5540_;
}
v_reusejp_5540_:
{
lean_object* v___x_5542_; lean_object* v___x_5544_; 
v___x_5542_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_5542_, 0, v___x_5536_);
lean_ctor_set(v___x_5542_, 1, v___x_5541_);
lean_ctor_set_uint8(v___x_5542_, sizeof(void*)*2, v___x_5489_);
if (v_isShared_5509_ == 0)
{
lean_ctor_set_tag(v___x_5508_, 0);
lean_ctor_set(v___x_5508_, 0, v___x_5542_);
v___x_5544_ = v___x_5508_;
goto v_reusejp_5543_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v___x_5542_);
v___x_5544_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5543_;
}
v_reusejp_5543_:
{
lean_object* v___x_5546_; 
if (v_isShared_5514_ == 0)
{
lean_ctor_set(v___x_5513_, 0, v___x_5544_);
v___x_5546_ = v___x_5513_;
goto v_reusejp_5545_;
}
else
{
lean_object* v_reuseFailAlloc_5547_; 
v_reuseFailAlloc_5547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5547_, 0, v___x_5544_);
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
}
}
else
{
lean_object* v___x_5551_; lean_object* v___x_5553_; 
lean_dec(v_a_5511_);
lean_del_object(v___x_5508_);
lean_dec(v_val_5506_);
lean_dec_ref(v_arg_5481_);
lean_dec_ref(v_arg_5478_);
v___x_5551_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_5514_ == 0)
{
lean_ctor_set(v___x_5513_, 0, v___x_5551_);
v___x_5553_ = v___x_5513_;
goto v_reusejp_5552_;
}
else
{
lean_object* v_reuseFailAlloc_5554_; 
v_reuseFailAlloc_5554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5554_, 0, v___x_5551_);
v___x_5553_ = v_reuseFailAlloc_5554_;
goto v_reusejp_5552_;
}
v_reusejp_5552_:
{
return v___x_5553_;
}
}
}
}
else
{
lean_object* v_a_5556_; lean_object* v___x_5558_; uint8_t v_isShared_5559_; uint8_t v_isSharedCheck_5563_; 
lean_del_object(v___x_5508_);
lean_dec(v_val_5506_);
lean_dec_ref(v_arg_5481_);
lean_dec_ref(v_arg_5478_);
v_a_5556_ = lean_ctor_get(v___x_5510_, 0);
v_isSharedCheck_5563_ = !lean_is_exclusive(v___x_5510_);
if (v_isSharedCheck_5563_ == 0)
{
v___x_5558_ = v___x_5510_;
v_isShared_5559_ = v_isSharedCheck_5563_;
goto v_resetjp_5557_;
}
else
{
lean_inc(v_a_5556_);
lean_dec(v___x_5510_);
v___x_5558_ = lean_box(0);
v_isShared_5559_ = v_isSharedCheck_5563_;
goto v_resetjp_5557_;
}
v_resetjp_5557_:
{
lean_object* v___x_5561_; 
if (v_isShared_5559_ == 0)
{
v___x_5561_ = v___x_5558_;
goto v_reusejp_5560_;
}
else
{
lean_object* v_reuseFailAlloc_5562_; 
v_reuseFailAlloc_5562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5562_, 0, v_a_5556_);
v___x_5561_ = v_reuseFailAlloc_5562_;
goto v_reusejp_5560_;
}
v_reusejp_5560_:
{
return v___x_5561_;
}
}
}
}
}
else
{
lean_object* v___x_5565_; lean_object* v___x_5567_; 
lean_dec(v_a_5502_);
lean_dec_ref(v_arg_5481_);
lean_dec_ref(v_arg_5478_);
v___x_5565_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
if (v_isShared_5505_ == 0)
{
lean_ctor_set(v___x_5504_, 0, v___x_5565_);
v___x_5567_ = v___x_5504_;
goto v_reusejp_5566_;
}
else
{
lean_object* v_reuseFailAlloc_5568_; 
v_reuseFailAlloc_5568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5568_, 0, v___x_5565_);
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
else
{
lean_object* v_a_5570_; lean_object* v___x_5572_; uint8_t v_isShared_5573_; uint8_t v_isSharedCheck_5577_; 
lean_dec_ref(v_arg_5481_);
lean_dec_ref(v_arg_5478_);
v_a_5570_ = lean_ctor_get(v___x_5501_, 0);
v_isSharedCheck_5577_ = !lean_is_exclusive(v___x_5501_);
if (v_isSharedCheck_5577_ == 0)
{
v___x_5572_ = v___x_5501_;
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
else
{
lean_inc(v_a_5570_);
lean_dec(v___x_5501_);
v___x_5572_ = lean_box(0);
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
v_resetjp_5571_:
{
lean_object* v___x_5575_; 
if (v_isShared_5573_ == 0)
{
v___x_5575_ = v___x_5572_;
goto v_reusejp_5574_;
}
else
{
lean_object* v_reuseFailAlloc_5576_; 
v_reuseFailAlloc_5576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5576_, 0, v_a_5570_);
v___x_5575_ = v_reuseFailAlloc_5576_;
goto v_reusejp_5574_;
}
v_reusejp_5574_:
{
return v___x_5575_;
}
}
}
}
}
}
else
{
lean_object* v_a_5579_; lean_object* v___x_5581_; uint8_t v_isShared_5582_; uint8_t v_isSharedCheck_5586_; 
lean_dec_ref(v_arg_5481_);
lean_dec_ref(v_arg_5478_);
v_a_5579_ = lean_ctor_get(v___x_5491_, 0);
v_isSharedCheck_5586_ = !lean_is_exclusive(v___x_5491_);
if (v_isSharedCheck_5586_ == 0)
{
v___x_5581_ = v___x_5491_;
v_isShared_5582_ = v_isSharedCheck_5586_;
goto v_resetjp_5580_;
}
else
{
lean_inc(v_a_5579_);
lean_dec(v___x_5491_);
v___x_5581_ = lean_box(0);
v_isShared_5582_ = v_isSharedCheck_5586_;
goto v_resetjp_5580_;
}
v_resetjp_5580_:
{
lean_object* v___x_5584_; 
if (v_isShared_5582_ == 0)
{
v___x_5584_ = v___x_5581_;
goto v_reusejp_5583_;
}
else
{
lean_object* v_reuseFailAlloc_5585_; 
v_reuseFailAlloc_5585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5585_, 0, v_a_5579_);
v___x_5584_ = v_reuseFailAlloc_5585_;
goto v_reusejp_5583_;
}
v_reusejp_5583_:
{
return v___x_5584_;
}
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
lean_object* v_a_5587_; lean_object* v___x_5589_; uint8_t v_isShared_5590_; uint8_t v_isSharedCheck_5594_; 
v_a_5587_ = lean_ctor_get(v___x_5474_, 0);
v_isSharedCheck_5594_ = !lean_is_exclusive(v___x_5474_);
if (v_isSharedCheck_5594_ == 0)
{
v___x_5589_ = v___x_5474_;
v_isShared_5590_ = v_isSharedCheck_5594_;
goto v_resetjp_5588_;
}
else
{
lean_inc(v_a_5587_);
lean_dec(v___x_5474_);
v___x_5589_ = lean_box(0);
v_isShared_5590_ = v_isSharedCheck_5594_;
goto v_resetjp_5588_;
}
v_resetjp_5588_:
{
lean_object* v___x_5592_; 
if (v_isShared_5590_ == 0)
{
v___x_5592_ = v___x_5589_;
goto v_reusejp_5591_;
}
else
{
lean_object* v_reuseFailAlloc_5593_; 
v_reuseFailAlloc_5593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5593_, 0, v_a_5587_);
v___x_5592_ = v_reuseFailAlloc_5593_;
goto v_reusejp_5591_;
}
v_reusejp_5591_:
{
return v___x_5592_;
}
}
}
v___jp_5471_:
{
lean_object* v___x_5472_; lean_object* v___x_5473_; 
v___x_5472_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBinPred___redArg___closed__0));
v___x_5473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5473_, 0, v___x_5472_);
return v___x_5473_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDvd___redArg___boxed(lean_object* v_e_5595_, lean_object* v_a_5596_, lean_object* v_a_5597_, lean_object* v_a_5598_, lean_object* v_a_5599_, lean_object* v_a_5600_){
_start:
{
lean_object* v_res_5601_; 
v_res_5601_ = l_Nat_reduceDvd___redArg(v_e_5595_, v_a_5596_, v_a_5597_, v_a_5598_, v_a_5599_);
lean_dec(v_a_5599_);
lean_dec_ref(v_a_5598_);
lean_dec(v_a_5597_);
lean_dec_ref(v_a_5596_);
return v_res_5601_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDvd(lean_object* v_e_5602_, lean_object* v_a_5603_, lean_object* v_a_5604_, lean_object* v_a_5605_, lean_object* v_a_5606_, lean_object* v_a_5607_, lean_object* v_a_5608_, lean_object* v_a_5609_){
_start:
{
lean_object* v___x_5611_; 
v___x_5611_ = l_Nat_reduceDvd___redArg(v_e_5602_, v_a_5606_, v_a_5607_, v_a_5608_, v_a_5609_);
return v___x_5611_;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDvd___boxed(lean_object* v_e_5612_, lean_object* v_a_5613_, lean_object* v_a_5614_, lean_object* v_a_5615_, lean_object* v_a_5616_, lean_object* v_a_5617_, lean_object* v_a_5618_, lean_object* v_a_5619_, lean_object* v_a_5620_){
_start:
{
lean_object* v_res_5621_; 
v_res_5621_ = l_Nat_reduceDvd(v_e_5612_, v_a_5613_, v_a_5614_, v_a_5615_, v_a_5616_, v_a_5617_, v_a_5618_, v_a_5619_);
lean_dec(v_a_5619_);
lean_dec_ref(v_a_5618_);
lean_dec(v_a_5617_);
lean_dec_ref(v_a_5616_);
lean_dec(v_a_5615_);
lean_dec_ref(v_a_5614_);
lean_dec(v_a_5613_);
return v_res_5621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; 
v___x_5640_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_));
v___x_5641_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_));
v___x_5642_ = lean_alloc_closure((void*)(l_Nat_reduceDvd___boxed), 9, 0);
v___x_5643_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_5640_, v___x_5641_, v___x_5642_);
return v___x_5643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26____boxed(lean_object* v_a_5644_){
_start:
{
lean_object* v_res_5645_; 
v_res_5645_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_();
return v_res_5645_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28_(void){
_start:
{
lean_object* v___x_5646_; lean_object* v___x_5647_; 
v___x_5646_ = lean_alloc_closure((void*)(l_Nat_reduceDvd___boxed), 9, 0);
v___x_5647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5647_, 0, v___x_5646_);
return v___x_5647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_5649_; uint8_t v___x_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; 
v___x_5649_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_));
v___x_5650_ = 1;
v___x_5651_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28_);
v___x_5652_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_5649_, v___x_5650_, v___x_5651_);
return v___x_5652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28____boxed(lean_object* v_a_5653_){
_start:
{
lean_object* v_res_5654_; 
v_res_5654_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28_();
return v_res_5654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_30_(){
_start:
{
lean_object* v___x_5656_; uint8_t v___x_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; 
v___x_5656_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_));
v___x_5657_ = 1;
v___x_5658_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28_);
v___x_5659_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_5656_, v___x_5657_, v___x_5658_);
return v___x_5659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_30____boxed(lean_object* v_a_5660_){
_start:
{
lean_object* v_res_5661_; 
v_res_5661_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_30_();
return v_res_5661_;
}
}
lean_object* runtime_initialize_Init_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LitValues(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Offset(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_SafeExponentiation(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Dvd(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Simproc(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Offset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_SafeExponentiation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Dvd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSucc_declare__24_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_20_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSucc___regBuiltin_Nat_reduceSucc_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4165645285____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLog2_declare__29_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_20_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLog2___regBuiltin_Nat_reduceLog2_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1090884023____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAdd_declare__34_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAdd___regBuiltin_Nat_reduceAdd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2577847471____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMul_declare__39_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMul___regBuiltin_Nat_reduceMul_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3409349834____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSub_declare__44_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSub___regBuiltin_Nat_reduceSub_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_121904536____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDiv_declare__49_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDiv___regBuiltin_Nat_reduceDiv_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_746960771____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceMod_declare__54_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceMod___regBuiltin_Nat_reduceMod_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1952267129____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reducePow_declare__59_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reducePow___regBuiltin_Nat_reducePow_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_395276852____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceAnd_declare__64_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceAnd___regBuiltin_Nat_reduceAnd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4206068689____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceXor_declare__69_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceXor___regBuiltin_Nat_reduceXor_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2089708235____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceOr_declare__74_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceOr___regBuiltin_Nat_reduceOr_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_994675004____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftLeft_declare__79_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftLeft___regBuiltin_Nat_reduceShiftLeft_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391429673____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceShiftRight_declare__84_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceShiftRight___regBuiltin_Nat_reduceShiftRight_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3404948686____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGcd_declare__89_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_21_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_23_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGcd___regBuiltin_Nat_reduceGcd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_592671996____hygCtx___hyg_25_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLT_declare__94_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLT___regBuiltin_Nat_reduceLT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3058597786____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceGT_declare__99_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceGT___regBuiltin_Nat_reduceGT_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351951051____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBEq_declare__104_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBEq___regBuiltin_Nat_reduceBEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_30194753____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBNe_declare__109_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBNe___regBuiltin_Nat_reduceBNe_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1404447611____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_isValue_declare__114_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_23_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_isValue___regBuiltin_Nat_isValue_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_4243845176____hygCtx___hyg_25_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance = _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_mkBEqNatInstance);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceEqDiff_declare__173_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceEqDiff___regBuiltin_Nat_reduceEqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_993423656____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBeqDiff_declare__178_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBeqDiff___regBuiltin_Nat_reduceBeqDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1391998651____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceBneDiff_declare__183_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceBneDiff___regBuiltin_Nat_reduceBneDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_3606884043____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceLeDiff_declare__191_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_29_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceLeDiff___regBuiltin_Nat_reduceLeDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_351768507____hygCtx___hyg_31_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceSubDiff_declare__196_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceSubDiff___regBuiltin_Nat_reduceSubDiff_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_2511479442____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0____regBuiltin_Nat_reduceDvd_declare__201_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_0__Nat_reduceDvd___regBuiltin_Nat_reduceDvd_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat_1622232758____hygCtx___hyg_30_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_LitValues(uint8_t builtin);
lean_object* initialize_Lean_Meta_Offset(uint8_t builtin);
lean_object* initialize_Lean_Util_SafeExponentiation(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Dvd(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Simproc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Offset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_SafeExponentiation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Dvd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat(builtin);
}
#ifdef __cplusplus
}
#endif

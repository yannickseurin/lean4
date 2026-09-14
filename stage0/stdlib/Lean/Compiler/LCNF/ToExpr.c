// Lean compiler output
// Module: Lean.Compiler.LCNF.ToExpr
// Imports: public import Lean.Compiler.LCNF.Basic import Init.Omega
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
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetValue_toExpr(uint8_t, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Compiler_LCNF_Arg_toExpr___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExprM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExprM___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_abstractM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_abstractM___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__3_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__5_value)}};
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__9_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___boxed__const__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cases"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 93, 203, 178, 149, 199, 118, 190)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__2;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "lcUnreachable"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__3_value),LEAN_SCALAR_PTR_LITERAL(244, 152, 7, 242, 102, 125, 47, 175)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__5;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "oset"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__6_value),LEAN_SCALAR_PTR_LITERAL(204, 56, 52, 158, 165, 233, 45, 89)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__7_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__8;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dummy"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__9_value),LEAN_SCALAR_PTR_LITERAL(209, 220, 178, 109, 127, 136, 95, 49)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__11_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__11_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__12_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__13;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "uset"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__14_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__14_value),LEAN_SCALAR_PTR_LITERAL(124, 160, 46, 241, 188, 4, 130, 152)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__15_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__16;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sset"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__17 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__17_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__17_value),LEAN_SCALAR_PTR_LITERAL(46, 244, 58, 215, 190, 158, 72, 225)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__18 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__18_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__19;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "setTag"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__20 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__20_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__20_value),LEAN_SCALAR_PTR_LITERAL(249, 157, 207, 131, 172, 199, 30, 80)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__21 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__21_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__22;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inc"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__23 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__23_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__23_value),LEAN_SCALAR_PTR_LITERAL(79, 144, 50, 52, 33, 141, 134, 44)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__24 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__24_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__25;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__27 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__27_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__26 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__26_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__26_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__28_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__27_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__28 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__28_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__29;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__30 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__30_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__26_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__31_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__30_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__31 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__31_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__32;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dec"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__33 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__33_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__33_value),LEAN_SCALAR_PTR_LITERAL(133, 11, 154, 178, 201, 214, 183, 192)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__34 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__34_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__35;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__36 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__36_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__36_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__37 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__37_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__38;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__42;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__43;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__40 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__40_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__39 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__39_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__39_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__41_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__40_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__41 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__41_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__44;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__45;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__46 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__46_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__39_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__47_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__46_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__47 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__47_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__48;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "del"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__49 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__49_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__49_value),LEAN_SCALAR_PTR_LITERAL(59, 0, 194, 149, 61, 187, 104, 96)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__50 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__50_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__51;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExprM(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExprM(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExprM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExprM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExpr(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExpr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExpr(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExpr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0___redArg(lean_object* v_t_1_, lean_object* v_k_2_){
_start:
{
if (lean_obj_tag(v_t_1_) == 0)
{
lean_object* v_k_3_; lean_object* v_v_4_; lean_object* v_l_5_; lean_object* v_r_6_; uint8_t v___x_7_; 
v_k_3_ = lean_ctor_get(v_t_1_, 1);
v_v_4_ = lean_ctor_get(v_t_1_, 2);
v_l_5_ = lean_ctor_get(v_t_1_, 3);
v_r_6_ = lean_ctor_get(v_t_1_, 4);
v___x_7_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2_, v_k_3_);
switch(v___x_7_)
{
case 0:
{
v_t_1_ = v_l_5_;
goto _start;
}
case 1:
{
lean_object* v___x_9_; 
lean_inc(v_v_4_);
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v_v_4_);
return v___x_9_;
}
default: 
{
v_t_1_ = v_r_6_;
goto _start;
}
}
}
else
{
lean_object* v___x_11_; 
v___x_11_ = lean_box(0);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0___redArg___boxed(lean_object* v_t_12_, lean_object* v_k_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0___redArg(v_t_12_, v_k_13_);
lean_dec(v_k_13_);
lean_dec(v_t_12_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(lean_object* v_offset_15_, lean_object* v_m_16_, lean_object* v_fvarId_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0___redArg(v_m_16_, v_fvarId_17_);
if (lean_obj_tag(v___x_18_) == 0)
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Expr_fvar___override(v_fvarId_17_);
return v___x_19_;
}
else
{
lean_object* v_val_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
lean_dec(v_fvarId_17_);
v_val_20_ = lean_ctor_get(v___x_18_, 0);
lean_inc(v_val_20_);
lean_dec_ref_known(v___x_18_, 1);
v___x_21_ = lean_nat_sub(v_offset_15_, v_val_20_);
lean_dec(v_val_20_);
v___x_22_ = lean_unsigned_to_nat(1u);
v___x_23_ = lean_nat_sub(v___x_21_, v___x_22_);
lean_dec(v___x_21_);
v___x_24_ = l_Lean_Expr_bvar___override(v___x_23_);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr___boxed(lean_object* v_offset_25_, lean_object* v_m_26_, lean_object* v_fvarId_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v_offset_25_, v_m_26_, v_fvarId_27_);
lean_dec(v_m_26_);
lean_dec(v_offset_25_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0(lean_object* v_00_u03b4_29_, lean_object* v_t_30_, lean_object* v_k_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0___redArg(v_t_30_, v_k_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0___boxed(lean_object* v_00_u03b4_33_, lean_object* v_t_34_, lean_object* v_k_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr_spec__0(v_00_u03b4_33_, v_t_34_, v_k_35_);
lean_dec(v_k_35_);
lean_dec(v_t_34_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(lean_object* v_m_37_, lean_object* v_o_38_, lean_object* v_e_39_){
_start:
{
switch(lean_obj_tag(v_e_39_))
{
case 1:
{
lean_object* v_fvarId_40_; lean_object* v___x_41_; 
v_fvarId_40_ = lean_ctor_get(v_e_39_, 0);
lean_inc(v_fvarId_40_);
lean_dec_ref_known(v_e_39_, 1);
v___x_41_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v_o_38_, v_m_37_, v_fvarId_40_);
return v___x_41_;
}
case 5:
{
lean_object* v_fn_42_; lean_object* v_arg_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v_fn_42_ = lean_ctor_get(v_e_39_, 0);
lean_inc_ref(v_fn_42_);
v_arg_43_ = lean_ctor_get(v_e_39_, 1);
lean_inc_ref(v_arg_43_);
lean_dec_ref_known(v_e_39_, 2);
v___x_44_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_37_, v_o_38_, v_fn_42_);
v___x_45_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_37_, v_o_38_, v_arg_43_);
v___x_46_ = l_Lean_Expr_app___override(v___x_44_, v___x_45_);
return v___x_46_;
}
case 6:
{
lean_object* v_binderName_47_; lean_object* v_binderType_48_; lean_object* v_body_49_; uint8_t v_binderInfo_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v_binderName_47_ = lean_ctor_get(v_e_39_, 0);
lean_inc(v_binderName_47_);
v_binderType_48_ = lean_ctor_get(v_e_39_, 1);
lean_inc_ref(v_binderType_48_);
v_body_49_ = lean_ctor_get(v_e_39_, 2);
lean_inc_ref(v_body_49_);
v_binderInfo_50_ = lean_ctor_get_uint8(v_e_39_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_39_, 3);
v___x_51_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_37_, v_o_38_, v_binderType_48_);
v___x_52_ = lean_unsigned_to_nat(1u);
v___x_53_ = lean_nat_add(v_o_38_, v___x_52_);
v___x_54_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_37_, v___x_53_, v_body_49_);
lean_dec(v___x_53_);
v___x_55_ = l_Lean_Expr_lam___override(v_binderName_47_, v___x_51_, v___x_54_, v_binderInfo_50_);
return v___x_55_;
}
case 7:
{
lean_object* v_binderName_56_; lean_object* v_binderType_57_; lean_object* v_body_58_; uint8_t v_binderInfo_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v_binderName_56_ = lean_ctor_get(v_e_39_, 0);
lean_inc(v_binderName_56_);
v_binderType_57_ = lean_ctor_get(v_e_39_, 1);
lean_inc_ref(v_binderType_57_);
v_body_58_ = lean_ctor_get(v_e_39_, 2);
lean_inc_ref(v_body_58_);
v_binderInfo_59_ = lean_ctor_get_uint8(v_e_39_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_39_, 3);
v___x_60_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_37_, v_o_38_, v_binderType_57_);
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_add(v_o_38_, v___x_61_);
v___x_63_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_37_, v___x_62_, v_body_58_);
lean_dec(v___x_62_);
v___x_64_ = l_Lean_Expr_forallE___override(v_binderName_56_, v___x_60_, v___x_63_, v_binderInfo_59_);
return v___x_64_;
}
case 8:
{
lean_object* v_declName_65_; lean_object* v_type_66_; lean_object* v_value_67_; lean_object* v_body_68_; uint8_t v_nondep_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_declName_65_ = lean_ctor_get(v_e_39_, 0);
lean_inc(v_declName_65_);
v_type_66_ = lean_ctor_get(v_e_39_, 1);
lean_inc_ref(v_type_66_);
v_value_67_ = lean_ctor_get(v_e_39_, 2);
lean_inc_ref(v_value_67_);
v_body_68_ = lean_ctor_get(v_e_39_, 3);
lean_inc_ref(v_body_68_);
v_nondep_69_ = lean_ctor_get_uint8(v_e_39_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_39_, 4);
v___x_70_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_37_, v_o_38_, v_type_66_);
v___x_71_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_37_, v_o_38_, v_value_67_);
v___x_72_ = lean_unsigned_to_nat(1u);
v___x_73_ = lean_nat_add(v_o_38_, v___x_72_);
v___x_74_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_37_, v___x_73_, v_body_68_);
lean_dec(v___x_73_);
v___x_75_ = l_Lean_Expr_letE___override(v_declName_65_, v___x_70_, v___x_71_, v___x_74_, v_nondep_69_);
return v___x_75_;
}
case 10:
{
lean_object* v_data_76_; lean_object* v_expr_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v_data_76_ = lean_ctor_get(v_e_39_, 0);
lean_inc(v_data_76_);
v_expr_77_ = lean_ctor_get(v_e_39_, 1);
lean_inc_ref(v_expr_77_);
lean_dec_ref_known(v_e_39_, 2);
v___x_78_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_37_, v_o_38_, v_expr_77_);
v___x_79_ = l_Lean_Expr_mdata___override(v_data_76_, v___x_78_);
return v___x_79_;
}
case 11:
{
lean_object* v_typeName_80_; lean_object* v_idx_81_; lean_object* v_struct_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_typeName_80_ = lean_ctor_get(v_e_39_, 0);
lean_inc(v_typeName_80_);
v_idx_81_ = lean_ctor_get(v_e_39_, 1);
lean_inc(v_idx_81_);
v_struct_82_ = lean_ctor_get(v_e_39_, 2);
lean_inc_ref(v_struct_82_);
lean_dec_ref_known(v_e_39_, 3);
v___x_83_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_37_, v_o_38_, v_struct_82_);
v___x_84_ = l_Lean_Expr_proj___override(v_typeName_80_, v_idx_81_, v___x_83_);
return v___x_84_;
}
default: 
{
return v_e_39_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go___boxed(lean_object* v_m_85_, lean_object* v_o_86_, lean_object* v_e_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_85_, v_o_86_, v_e_87_);
lean_dec(v_o_86_);
lean_dec(v_m_85_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27(lean_object* v_offset_89_, lean_object* v_m_90_, lean_object* v_e_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_90_, v_offset_89_, v_e_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27___boxed(lean_object* v_offset_93_, lean_object* v_m_94_, lean_object* v_e_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27(v_offset_93_, v_m_94_, v_e_95_);
lean_dec(v_m_94_);
lean_dec(v_offset_93_);
return v_res_96_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(lean_object* v_params_98_, lean_object* v_offset_99_, lean_object* v_m_100_, lean_object* v_i_101_, lean_object* v_e_102_){
_start:
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_nat_dec_lt(v___x_103_, v_i_101_);
if (v___x_104_ == 0)
{
lean_dec(v_i_101_);
lean_dec(v_offset_99_);
return v_e_102_;
}
else
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v_param_108_; lean_object* v_binderName_109_; lean_object* v_type_110_; lean_object* v___x_111_; lean_object* v_domain_112_; uint8_t v___x_113_; lean_object* v___x_114_; 
v___x_105_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0, &l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0);
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = lean_nat_sub(v_i_101_, v___x_106_);
lean_dec(v_i_101_);
v_param_108_ = lean_array_get_borrowed(v___x_105_, v_params_98_, v___x_107_);
v_binderName_109_ = lean_ctor_get(v_param_108_, 1);
v_type_110_ = lean_ctor_get(v_param_108_, 2);
v___x_111_ = lean_nat_sub(v_offset_99_, v___x_106_);
lean_dec(v_offset_99_);
lean_inc_ref(v_type_110_);
v_domain_112_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_100_, v___x_111_, v_type_110_);
v___x_113_ = 0;
lean_inc(v_binderName_109_);
v___x_114_ = l_Lean_Expr_lam___override(v_binderName_109_, v_domain_112_, v_e_102_, v___x_113_);
v_offset_99_ = v___x_111_;
v_i_101_ = v___x_107_;
v_e_102_ = v___x_114_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___boxed(lean_object* v_params_116_, lean_object* v_offset_117_, lean_object* v_m_118_, lean_object* v_i_119_, lean_object* v_e_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(v_params_116_, v_offset_117_, v_m_118_, v_i_119_, v_e_120_);
lean_dec(v_m_118_);
lean_dec_ref(v_params_116_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go(uint8_t v_pu_122_, lean_object* v_params_123_, lean_object* v_offset_124_, lean_object* v_m_125_, lean_object* v_i_126_, lean_object* v_e_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(v_params_123_, v_offset_124_, v_m_125_, v_i_126_, v_e_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___boxed(lean_object* v_pu_129_, lean_object* v_params_130_, lean_object* v_offset_131_, lean_object* v_m_132_, lean_object* v_i_133_, lean_object* v_e_134_){
_start:
{
uint8_t v_pu_boxed_135_; lean_object* v_res_136_; 
v_pu_boxed_135_ = lean_unbox(v_pu_129_);
v_res_136_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go(v_pu_boxed_135_, v_params_130_, v_offset_131_, v_m_132_, v_i_133_, v_e_134_);
lean_dec(v_m_132_);
lean_dec_ref(v_params_130_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___redArg(lean_object* v_params_137_, lean_object* v_e_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_141_ = lean_array_get_size(v_params_137_);
lean_inc(v_a_139_);
v___x_142_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(v_params_137_, v_a_139_, v_a_140_, v___x_141_, v_e_138_);
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v_a_140_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___redArg___boxed(lean_object* v_params_144_, lean_object* v_e_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___redArg(v_params_144_, v_e_145_, v_a_146_, v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_params_144_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM(uint8_t v_pu_149_, lean_object* v_params_150_, lean_object* v_e_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_array_get_size(v_params_150_);
lean_inc(v_a_152_);
v___x_155_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(v_params_150_, v_a_152_, v_a_153_, v___x_154_, v_e_151_);
v___x_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v_a_153_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___boxed(lean_object* v_pu_157_, lean_object* v_params_158_, lean_object* v_e_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
uint8_t v_pu_boxed_162_; lean_object* v_res_163_; 
v_pu_boxed_162_ = lean_unbox(v_pu_157_);
v_res_163_ = l_Lean_Compiler_LCNF_ToExpr_mkLambdaM(v_pu_boxed_162_, v_params_158_, v_e_159_, v_a_160_, v_a_161_);
lean_dec(v_a_160_);
lean_dec_ref(v_params_158_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExprM(lean_object* v_fvarId_164_, lean_object* v_a_165_, lean_object* v_a_166_){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v_a_165_, v_a_166_, v_fvarId_164_);
v___x_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
lean_ctor_set(v___x_168_, 1, v_a_166_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExprM___boxed(lean_object* v_fvarId_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExprM(v_fvarId_169_, v_a_170_, v_a_171_);
lean_dec(v_a_170_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_abstractM(lean_object* v_e_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_a_175_, v_a_174_, v_e_173_);
v___x_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
lean_ctor_set(v___x_177_, 1, v_a_175_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_abstractM___boxed(lean_object* v_e_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_Compiler_LCNF_ToExpr_abstractM(v_e_178_, v_a_179_, v_a_180_);
lean_dec(v_a_179_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___redArg(lean_object* v_fvarId_182_, lean_object* v_k_183_, lean_object* v_a_184_, lean_object* v_a_185_){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
lean_inc(v_a_184_);
v___x_186_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_182_, v_a_184_, v_a_185_);
v___x_187_ = lean_unsigned_to_nat(1u);
v___x_188_ = lean_nat_add(v_a_184_, v___x_187_);
v___x_189_ = lean_apply_2(v_k_183_, v___x_188_, v___x_186_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___redArg___boxed(lean_object* v_fvarId_190_, lean_object* v_k_191_, lean_object* v_a_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_Compiler_LCNF_ToExpr_withFVar___redArg(v_fvarId_190_, v_k_191_, v_a_192_, v_a_193_);
lean_dec(v_a_192_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar(lean_object* v_00_u03b1_195_, lean_object* v_fvarId_196_, lean_object* v_k_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
lean_inc(v_a_198_);
v___x_200_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_196_, v_a_198_, v_a_199_);
v___x_201_ = lean_unsigned_to_nat(1u);
v___x_202_ = lean_nat_add(v_a_198_, v___x_201_);
v___x_203_ = lean_apply_2(v_k_197_, v___x_202_, v___x_200_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___boxed(lean_object* v_00_u03b1_204_, lean_object* v_fvarId_205_, lean_object* v_k_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_Compiler_LCNF_ToExpr_withFVar(v_00_u03b1_204_, v_fvarId_205_, v_k_206_, v_a_207_, v_a_208_);
lean_dec(v_a_207_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(lean_object* v_params_210_, lean_object* v_k_211_, lean_object* v_i_212_, lean_object* v_a_213_, lean_object* v_a_214_){
_start:
{
lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = lean_array_get_size(v_params_210_);
v___x_216_ = lean_nat_dec_lt(v_i_212_, v___x_215_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; 
lean_dec(v_i_212_);
v___x_217_ = lean_apply_2(v_k_211_, v_a_213_, v_a_214_);
return v___x_217_;
}
else
{
lean_object* v___x_218_; lean_object* v_fvarId_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_218_ = lean_array_fget_borrowed(v_params_210_, v_i_212_);
v_fvarId_219_ = lean_ctor_get(v___x_218_, 0);
v___x_220_ = lean_unsigned_to_nat(1u);
v___x_221_ = lean_nat_add(v_i_212_, v___x_220_);
lean_dec(v_i_212_);
lean_inc(v_a_213_);
lean_inc(v_fvarId_219_);
v___x_222_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_219_, v_a_213_, v_a_214_);
v___x_223_ = lean_nat_add(v_a_213_, v___x_220_);
lean_dec(v_a_213_);
v_i_212_ = v___x_221_;
v_a_213_ = v___x_223_;
v_a_214_ = v___x_222_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg___boxed(lean_object* v_params_225_, lean_object* v_k_226_, lean_object* v_i_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(v_params_225_, v_k_226_, v_i_227_, v_a_228_, v_a_229_);
lean_dec_ref(v_params_225_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go(uint8_t v_pu_231_, lean_object* v_00_u03b1_232_, lean_object* v_params_233_, lean_object* v_k_234_, lean_object* v_i_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v___x_238_; 
lean_inc(v_a_236_);
v___x_238_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(v_params_233_, v_k_234_, v_i_235_, v_a_236_, v_a_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___boxed(lean_object* v_pu_239_, lean_object* v_00_u03b1_240_, lean_object* v_params_241_, lean_object* v_k_242_, lean_object* v_i_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
uint8_t v_pu_boxed_246_; lean_object* v_res_247_; 
v_pu_boxed_246_ = lean_unbox(v_pu_239_);
v_res_247_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go(v_pu_boxed_246_, v_00_u03b1_240_, v_params_241_, v_k_242_, v_i_243_, v_a_244_, v_a_245_);
lean_dec(v_a_244_);
lean_dec_ref(v_params_241_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___redArg(lean_object* v_params_248_, lean_object* v_k_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_250_);
v___x_253_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(v_params_248_, v_k_249_, v___x_252_, v_a_250_, v_a_251_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___redArg___boxed(lean_object* v_params_254_, lean_object* v_k_255_, lean_object* v_a_256_, lean_object* v_a_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lean_Compiler_LCNF_ToExpr_withParams___redArg(v_params_254_, v_k_255_, v_a_256_, v_a_257_);
lean_dec(v_a_256_);
lean_dec_ref(v_params_254_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams(uint8_t v_pu_259_, lean_object* v_00_u03b1_260_, lean_object* v_params_261_, lean_object* v_k_262_, lean_object* v_a_263_, lean_object* v_a_264_){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_263_);
v___x_266_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(v_params_261_, v_k_262_, v___x_265_, v_a_263_, v_a_264_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___boxed(lean_object* v_pu_267_, lean_object* v_00_u03b1_268_, lean_object* v_params_269_, lean_object* v_k_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
uint8_t v_pu_boxed_273_; lean_object* v_res_274_; 
v_pu_boxed_273_ = lean_unbox(v_pu_267_);
v_res_274_ = l_Lean_Compiler_LCNF_ToExpr_withParams(v_pu_boxed_273_, v_00_u03b1_268_, v_params_269_, v_k_270_, v_a_271_, v_a_272_);
lean_dec(v_a_271_);
lean_dec_ref(v_params_269_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run___redArg(lean_object* v_x_275_, lean_object* v_offset_276_, lean_object* v_levelMap_277_){
_start:
{
lean_object* v___x_278_; lean_object* v_fst_279_; 
v___x_278_ = lean_apply_2(v_x_275_, v_offset_276_, v_levelMap_277_);
v_fst_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_fst_279_);
lean_dec_ref(v___x_278_);
return v_fst_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run(lean_object* v_00_u03b1_280_, lean_object* v_x_281_, lean_object* v_offset_282_, lean_object* v_levelMap_283_){
_start:
{
lean_object* v___x_284_; lean_object* v_fst_285_; 
v___x_284_ = lean_apply_2(v_x_281_, v_offset_282_, v_levelMap_283_);
v_fst_285_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_fst_285_);
lean_dec_ref(v___x_284_);
return v_fst_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___lam__0(lean_object* v_x1_286_, lean_object* v_x2_287_){
_start:
{
if (lean_obj_tag(v_x1_286_) == 0)
{
lean_object* v_size_288_; lean_object* v___x_289_; 
v_size_288_ = lean_ctor_get(v_x1_286_, 0);
lean_inc(v_size_288_);
v___x_289_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_x2_287_, v_size_288_, v_x1_286_);
return v___x_289_;
}
else
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_unsigned_to_nat(0u);
v___x_291_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_x2_287_, v___x_290_, v_x1_286_);
return v___x_291_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg(lean_object* v_x_312_, lean_object* v_xs_313_){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___y_318_; lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_314_ = lean_box(1);
v___x_315_ = lean_unsigned_to_nat(0u);
v___x_316_ = lean_array_get_size(v_xs_313_);
v___x_321_ = ((lean_object*)(l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__9));
v___x_322_ = lean_nat_dec_lt(v___x_315_, v___x_316_);
if (v___x_322_ == 0)
{
lean_dec_ref(v_xs_313_);
v___y_318_ = v___x_314_;
goto v___jp_317_;
}
else
{
lean_object* v___f_323_; uint8_t v___x_324_; 
v___f_323_ = ((lean_object*)(l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__10));
v___x_324_ = lean_nat_dec_le(v___x_316_, v___x_316_);
if (v___x_324_ == 0)
{
if (v___x_322_ == 0)
{
lean_dec_ref(v_xs_313_);
v___y_318_ = v___x_314_;
goto v___jp_317_;
}
else
{
size_t v___x_325_; size_t v___x_326_; lean_object* v___x_327_; 
v___x_325_ = ((size_t)0ULL);
v___x_326_ = lean_usize_of_nat(v___x_316_);
v___x_327_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_321_, v___f_323_, v_xs_313_, v___x_325_, v___x_326_, v___x_314_);
v___y_318_ = v___x_327_;
goto v___jp_317_;
}
}
else
{
size_t v___x_328_; size_t v___x_329_; lean_object* v___x_330_; 
v___x_328_ = ((size_t)0ULL);
v___x_329_ = lean_usize_of_nat(v___x_316_);
v___x_330_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_321_, v___f_323_, v_xs_313_, v___x_328_, v___x_329_, v___x_314_);
v___y_318_ = v___x_330_;
goto v___jp_317_;
}
}
v___jp_317_:
{
lean_object* v___x_319_; lean_object* v_fst_320_; 
v___x_319_ = lean_apply_2(v_x_312_, v___x_316_, v___y_318_);
v_fst_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_fst_320_);
lean_dec_ref(v___x_319_);
return v_fst_320_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27(lean_object* v_00_u03b1_331_, lean_object* v_x_332_, lean_object* v_xs_333_){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___y_338_; lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_334_ = lean_box(1);
v___x_335_ = lean_unsigned_to_nat(0u);
v___x_336_ = lean_array_get_size(v_xs_333_);
v___x_341_ = ((lean_object*)(l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__9));
v___x_342_ = lean_nat_dec_lt(v___x_335_, v___x_336_);
if (v___x_342_ == 0)
{
lean_dec_ref(v_xs_333_);
v___y_338_ = v___x_334_;
goto v___jp_337_;
}
else
{
lean_object* v___f_343_; uint8_t v___x_344_; 
v___f_343_ = ((lean_object*)(l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__10));
v___x_344_ = lean_nat_dec_le(v___x_336_, v___x_336_);
if (v___x_344_ == 0)
{
if (v___x_342_ == 0)
{
lean_dec_ref(v_xs_333_);
v___y_338_ = v___x_334_;
goto v___jp_337_;
}
else
{
size_t v___x_345_; size_t v___x_346_; lean_object* v___x_347_; 
v___x_345_ = ((size_t)0ULL);
v___x_346_ = lean_usize_of_nat(v___x_336_);
v___x_347_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_341_, v___f_343_, v_xs_333_, v___x_345_, v___x_346_, v___x_334_);
v___y_338_ = v___x_347_;
goto v___jp_337_;
}
}
else
{
size_t v___x_348_; size_t v___x_349_; lean_object* v___x_350_; 
v___x_348_ = ((size_t)0ULL);
v___x_349_ = lean_usize_of_nat(v___x_336_);
v___x_350_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_341_, v___f_343_, v_xs_333_, v___x_348_, v___x_349_, v___x_334_);
v___y_338_ = v___x_350_;
goto v___jp_337_;
}
}
v___jp_337_:
{
lean_object* v___x_339_; lean_object* v_fst_340_; 
v___x_339_ = lean_apply_2(v_x_332_, v___x_336_, v___y_338_);
v_fst_340_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_fst_340_);
lean_dec_ref(v___x_339_);
return v_fst_340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(lean_object* v_arg_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_354_ = l_Lean_Compiler_LCNF_Arg_toExpr___redArg(v_arg_351_);
v___x_355_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_a_353_, v_a_352_, v___x_354_);
v___x_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
lean_ctor_set(v___x_356_, 1, v_a_353_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg___boxed(lean_object* v_arg_357_, lean_object* v_a_358_, lean_object* v_a_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(v_arg_357_, v_a_358_, v_a_359_);
lean_dec(v_a_358_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM(uint8_t v_pu_361_, lean_object* v_arg_362_, lean_object* v_a_363_, lean_object* v_a_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(v_arg_362_, v_a_363_, v_a_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___boxed(lean_object* v_pu_366_, lean_object* v_arg_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
uint8_t v_pu_boxed_370_; lean_object* v_res_371_; 
v_pu_boxed_370_ = lean_unbox(v_pu_366_);
v_res_371_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM(v_pu_boxed_370_, v_arg_367_, v_a_368_, v_a_369_);
lean_dec(v_a_368_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg(size_t v_sz_372_, size_t v_i_373_, lean_object* v_bs_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
uint8_t v___x_377_; 
v___x_377_ = lean_usize_dec_lt(v_i_373_, v_sz_372_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = l_unsafeCast___redArg(v_bs_374_);
lean_dec_ref(v_bs_374_);
v___x_379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
lean_ctor_set(v___x_379_, 1, v___y_376_);
return v___x_379_;
}
else
{
lean_object* v_v_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v_fst_383_; lean_object* v_snd_384_; lean_object* v___x_385_; lean_object* v_bs_x27_386_; size_t v___x_387_; size_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v_v_380_ = lean_array_uget_borrowed(v_bs_374_, v_i_373_);
v___x_381_ = l_unsafeCast___redArg(v_v_380_);
v___x_382_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(v___x_381_, v___y_375_, v___y_376_);
v_fst_383_ = lean_ctor_get(v___x_382_, 0);
lean_inc(v_fst_383_);
v_snd_384_ = lean_ctor_get(v___x_382_, 1);
lean_inc(v_snd_384_);
lean_dec_ref(v___x_382_);
v___x_385_ = lean_unsigned_to_nat(0u);
v_bs_x27_386_ = lean_array_uset(v_bs_374_, v_i_373_, v___x_385_);
v___x_387_ = ((size_t)1ULL);
v___x_388_ = lean_usize_add(v_i_373_, v___x_387_);
v___x_389_ = l_unsafeCast___redArg(v_fst_383_);
lean_dec(v_fst_383_);
v___x_390_ = lean_array_uset(v_bs_x27_386_, v_i_373_, v___x_389_);
v_i_373_ = v___x_388_;
v_bs_374_ = v___x_390_;
v___y_376_ = v_snd_384_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg___boxed(lean_object* v_sz_392_, lean_object* v_i_393_, lean_object* v_bs_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
size_t v_sz_boxed_397_; size_t v_i_boxed_398_; lean_object* v_res_399_; 
v_sz_boxed_397_ = lean_unbox_usize(v_sz_392_);
lean_dec(v_sz_392_);
v_i_boxed_398_ = lean_unbox_usize(v_i_393_);
lean_dec(v_i_393_);
v_res_399_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg(v_sz_boxed_397_, v_i_boxed_398_, v_bs_394_, v___y_395_, v___y_396_);
lean_dec(v___y_395_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2(uint8_t v_pu_400_, size_t v_sz_401_, size_t v_i_402_, lean_object* v_bs_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg(v_sz_401_, v_i_402_, v_bs_403_, v___y_404_, v___y_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___boxed(lean_object* v_pu_407_, lean_object* v_sz_408_, lean_object* v_i_409_, lean_object* v_bs_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
uint8_t v_pu_boxed_413_; size_t v_sz_boxed_414_; size_t v_i_boxed_415_; lean_object* v_res_416_; 
v_pu_boxed_413_ = lean_unbox(v_pu_407_);
v_sz_boxed_414_ = lean_unbox_usize(v_sz_408_);
lean_dec(v_sz_408_);
v_i_boxed_415_ = lean_unbox_usize(v_i_409_);
lean_dec(v_i_409_);
v_res_416_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2(v_pu_boxed_413_, v_sz_boxed_414_, v_i_boxed_415_, v_bs_410_, v___y_411_, v___y_412_);
lean_dec(v___y_411_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3(uint8_t v_pu_419_, size_t v_sz_420_, size_t v_i_421_, lean_object* v_bs_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
uint8_t v___x_425_; 
v___x_425_ = lean_usize_dec_lt(v_i_421_, v_sz_420_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = l_unsafeCast___redArg(v_bs_422_);
lean_dec_ref(v_bs_422_);
v___x_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_426_);
lean_ctor_set(v___x_427_, 1, v___y_424_);
return v___x_427_;
}
else
{
lean_object* v_v_428_; lean_object* v___x_429_; lean_object* v_bs_x27_430_; lean_object* v_fst_432_; lean_object* v_snd_433_; lean_object* v___x_439_; 
v_v_428_ = lean_array_uget(v_bs_422_, v_i_421_);
v___x_429_ = lean_unsigned_to_nat(0u);
v_bs_x27_430_ = lean_array_uset(v_bs_422_, v_i_421_, v___x_429_);
v___x_439_ = l_unsafeCast___redArg(v_v_428_);
lean_dec(v_v_428_);
switch(lean_obj_tag(v___x_439_))
{
case 0:
{
lean_object* v_ctorName_440_; lean_object* v_params_441_; lean_object* v_code_442_; lean_object* v___x_443_; lean_object* v_fst_444_; lean_object* v_snd_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_ctorName_440_ = lean_ctor_get(v___x_439_, 0);
lean_inc(v_ctorName_440_);
v_params_441_ = lean_ctor_get(v___x_439_, 1);
lean_inc_ref(v_params_441_);
v_code_442_ = lean_ctor_get(v___x_439_, 2);
lean_inc_ref(v_code_442_);
lean_dec_ref_known(v___x_439_, 3);
lean_inc(v___y_423_);
v___x_443_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(v_pu_419_, v_code_442_, v_params_441_, v_params_441_, v___x_429_, v___y_423_, v___y_424_);
lean_dec_ref(v_params_441_);
v_fst_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_fst_444_);
v_snd_445_ = lean_ctor_get(v___x_443_, 1);
lean_inc(v_snd_445_);
lean_dec_ref(v___x_443_);
v___x_446_ = lean_box(0);
v___x_447_ = l_Lean_mkConst(v_ctorName_440_, v___x_446_);
v___x_448_ = l_Lean_Expr_app___override(v___x_447_, v_fst_444_);
v_fst_432_ = v___x_448_;
v_snd_433_ = v_snd_445_;
goto v___jp_431_;
}
case 1:
{
lean_object* v_info_449_; lean_object* v_code_450_; lean_object* v___x_451_; lean_object* v_fst_452_; lean_object* v_snd_453_; lean_object* v_name_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v_info_449_ = lean_ctor_get(v___x_439_, 0);
lean_inc_ref(v_info_449_);
v_code_450_ = lean_ctor_get(v___x_439_, 1);
lean_inc_ref(v_code_450_);
lean_dec_ref_known(v___x_439_, 2);
v___x_451_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_419_, v_code_450_, v___y_423_, v___y_424_);
v_fst_452_ = lean_ctor_get(v___x_451_, 0);
lean_inc(v_fst_452_);
v_snd_453_ = lean_ctor_get(v___x_451_, 1);
lean_inc(v_snd_453_);
lean_dec_ref(v___x_451_);
v_name_454_ = lean_ctor_get(v_info_449_, 0);
lean_inc(v_name_454_);
lean_dec_ref(v_info_449_);
v___x_455_ = lean_box(0);
v___x_456_ = l_Lean_mkConst(v_name_454_, v___x_455_);
v___x_457_ = l_Lean_Expr_app___override(v___x_456_, v_fst_452_);
v_fst_432_ = v___x_457_;
v_snd_433_ = v_snd_453_;
goto v___jp_431_;
}
default: 
{
lean_object* v_code_458_; lean_object* v___x_459_; lean_object* v_fst_460_; lean_object* v_snd_461_; 
v_code_458_ = lean_ctor_get(v___x_439_, 0);
lean_inc_ref(v_code_458_);
lean_dec_ref_known(v___x_439_, 1);
v___x_459_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_419_, v_code_458_, v___y_423_, v___y_424_);
v_fst_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_fst_460_);
v_snd_461_ = lean_ctor_get(v___x_459_, 1);
lean_inc(v_snd_461_);
lean_dec_ref(v___x_459_);
v_fst_432_ = v_fst_460_;
v_snd_433_ = v_snd_461_;
goto v___jp_431_;
}
}
v___jp_431_:
{
size_t v___x_434_; size_t v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_434_ = ((size_t)1ULL);
v___x_435_ = lean_usize_add(v_i_421_, v___x_434_);
v___x_436_ = l_unsafeCast___redArg(v_fst_432_);
lean_dec_ref(v_fst_432_);
v___x_437_ = lean_array_uset(v_bs_x27_430_, v_i_421_, v___x_436_);
v_i_421_ = v___x_435_;
v_bs_422_ = v___x_437_;
v___y_424_ = v_snd_433_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3___boxed(lean_object* v_pu_462_, lean_object* v_sz_463_, lean_object* v_i_464_, lean_object* v_bs_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
uint8_t v_pu_boxed_468_; size_t v_sz_boxed_469_; size_t v_i_boxed_470_; lean_object* v_res_471_; 
v_pu_boxed_468_ = lean_unbox(v_pu_462_);
v_sz_boxed_469_ = lean_unbox_usize(v_sz_463_);
lean_dec(v_sz_463_);
v_i_boxed_470_ = lean_unbox_usize(v_i_464_);
lean_dec(v_i_464_);
v_res_471_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3(v_pu_boxed_468_, v_sz_boxed_469_, v_i_boxed_470_, v_bs_465_, v___y_466_, v___y_467_);
lean_dec(v___y_466_);
return v_res_471_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__2(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_475_ = lean_box(0);
v___x_476_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__1));
v___x_477_ = l_Lean_mkConst(v___x_476_, v___x_475_);
return v___x_477_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__5(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = lean_box(0);
v___x_482_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__4));
v___x_483_ = l_Lean_mkConst(v___x_482_, v___x_481_);
return v___x_483_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__8(void){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_487_ = lean_box(0);
v___x_488_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__7));
v___x_489_ = l_Lean_mkConst(v___x_488_, v___x_487_);
return v___x_489_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13(void){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_496_ = lean_box(0);
v___x_497_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__12));
v___x_498_ = l_Lean_mkConst(v___x_497_, v___x_496_);
return v___x_498_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__16(void){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_502_ = lean_box(0);
v___x_503_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__15));
v___x_504_ = l_Lean_mkConst(v___x_503_, v___x_502_);
return v___x_504_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__19(void){
_start:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_508_ = lean_box(0);
v___x_509_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__18));
v___x_510_ = l_Lean_mkConst(v___x_509_, v___x_508_);
return v___x_510_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__22(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_514_ = lean_box(0);
v___x_515_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__21));
v___x_516_ = l_Lean_mkConst(v___x_515_, v___x_514_);
return v___x_516_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__25(void){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_520_ = lean_box(0);
v___x_521_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__24));
v___x_522_ = l_Lean_mkConst(v___x_521_, v___x_520_);
return v___x_522_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__29(void){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_528_ = lean_box(0);
v___x_529_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__28));
v___x_530_ = l_Lean_mkConst(v___x_529_, v___x_528_);
return v___x_530_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__32(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_535_ = lean_box(0);
v___x_536_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__31));
v___x_537_ = l_Lean_mkConst(v___x_536_, v___x_535_);
return v___x_537_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__35(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_541_ = lean_box(0);
v___x_542_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__34));
v___x_543_ = l_Lean_mkConst(v___x_542_, v___x_541_);
return v___x_543_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__38(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_547_ = lean_box(0);
v___x_548_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__37));
v___x_549_ = l_Lean_mkConst(v___x_548_, v___x_547_);
return v___x_549_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__42(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_box(0);
v___x_551_ = l_unsafeCast___redArg(v___x_550_);
return v___x_551_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__43(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_552_ = lean_box(0);
v___x_553_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__42, &l_Lean_Compiler_LCNF_Code_toExprM___closed__42_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__42);
v___x_554_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
lean_ctor_set(v___x_554_, 1, v___x_552_);
return v___x_554_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__44(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_560_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__43, &l_Lean_Compiler_LCNF_Code_toExprM___closed__43_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__43);
v___x_561_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__41));
v___x_562_ = l_Lean_mkConst(v___x_561_, v___x_560_);
return v___x_562_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__45(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_563_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__38, &l_Lean_Compiler_LCNF_Code_toExprM___closed__38_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__38);
v___x_564_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__44, &l_Lean_Compiler_LCNF_Code_toExprM___closed__44_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__44);
v___x_565_ = l_Lean_Expr_app___override(v___x_564_, v___x_563_);
return v___x_565_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__48(void){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_570_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__43, &l_Lean_Compiler_LCNF_Code_toExprM___closed__43_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__43);
v___x_571_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__47));
v___x_572_ = l_Lean_mkConst(v___x_571_, v___x_570_);
return v___x_572_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__51(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_576_ = lean_box(0);
v___x_577_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__50));
v___x_578_ = l_Lean_mkConst(v___x_577_, v___x_576_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExprM(uint8_t v_pu_579_, lean_object* v_code_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
switch(lean_obj_tag(v_code_580_))
{
case 0:
{
lean_object* v_decl_583_; lean_object* v_k_584_; lean_object* v_fvarId_585_; lean_object* v_binderName_586_; lean_object* v_type_587_; lean_object* v_value_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v_fst_596_; lean_object* v_snd_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_606_; 
v_decl_583_ = lean_ctor_get(v_code_580_, 0);
lean_inc_ref(v_decl_583_);
v_k_584_ = lean_ctor_get(v_code_580_, 1);
lean_inc_ref(v_k_584_);
lean_dec_ref_known(v_code_580_, 2);
v_fvarId_585_ = lean_ctor_get(v_decl_583_, 0);
lean_inc(v_fvarId_585_);
v_binderName_586_ = lean_ctor_get(v_decl_583_, 1);
lean_inc(v_binderName_586_);
v_type_587_ = lean_ctor_get(v_decl_583_, 2);
lean_inc_ref(v_type_587_);
v_value_588_ = lean_ctor_get(v_decl_583_, 3);
lean_inc(v_value_588_);
lean_dec_ref(v_decl_583_);
v___x_589_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_a_582_, v_a_581_, v_type_587_);
v___x_590_ = l_Lean_Compiler_LCNF_LetValue_toExpr(v_pu_579_, v_value_588_);
v___x_591_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_a_582_, v_a_581_, v___x_590_);
lean_inc(v_a_581_);
v___x_592_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_585_, v_a_581_, v_a_582_);
v___x_593_ = lean_unsigned_to_nat(1u);
v___x_594_ = lean_nat_add(v_a_581_, v___x_593_);
v___x_595_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_579_, v_k_584_, v___x_594_, v___x_592_);
lean_dec(v___x_594_);
v_fst_596_ = lean_ctor_get(v___x_595_, 0);
v_snd_597_ = lean_ctor_get(v___x_595_, 1);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_606_ == 0)
{
v___x_599_ = v___x_595_;
v_isShared_600_ = v_isSharedCheck_606_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_snd_597_);
lean_inc(v_fst_596_);
lean_dec(v___x_595_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_606_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
uint8_t v___x_601_; lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_601_ = 1;
v___x_602_ = l_Lean_Expr_letE___override(v_binderName_586_, v___x_589_, v___x_591_, v_fst_596_, v___x_601_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 0, v___x_602_);
v___x_604_ = v___x_599_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_snd_597_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
case 3:
{
lean_object* v_fvarId_607_; lean_object* v_args_608_; lean_object* v___x_609_; size_t v_sz_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_11804__overap_616_; lean_object* v___x_617_; lean_object* v_fst_618_; lean_object* v_snd_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_627_; 
v_fvarId_607_ = lean_ctor_get(v_code_580_, 0);
lean_inc(v_fvarId_607_);
v_args_608_ = lean_ctor_get(v_code_580_, 1);
lean_inc_ref(v_args_608_);
lean_dec_ref_known(v_code_580_, 2);
v___x_609_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v_a_581_, v_a_582_, v_fvarId_607_);
v_sz_610_ = lean_array_size(v_args_608_);
v___x_611_ = l_unsafeCast___redArg(v_args_608_);
lean_dec_ref(v_args_608_);
v___x_612_ = lean_box(v_pu_579_);
v___x_613_ = lean_box_usize(v_sz_610_);
v___x_614_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___boxed__const__1));
v___x_615_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___boxed), 6, 4);
lean_closure_set(v___x_615_, 0, v___x_612_);
lean_closure_set(v___x_615_, 1, v___x_613_);
lean_closure_set(v___x_615_, 2, v___x_614_);
lean_closure_set(v___x_615_, 3, v___x_611_);
v___x_11804__overap_616_ = l_unsafeCast___redArg(v___x_615_);
lean_dec_ref(v___x_615_);
lean_inc(v_a_581_);
v___x_617_ = lean_apply_2(v___x_11804__overap_616_, v_a_581_, v_a_582_);
v_fst_618_ = lean_ctor_get(v___x_617_, 0);
v_snd_619_ = lean_ctor_get(v___x_617_, 1);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_627_ == 0)
{
v___x_621_ = v___x_617_;
v_isShared_622_ = v_isSharedCheck_627_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_snd_619_);
lean_inc(v_fst_618_);
lean_dec(v___x_617_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_627_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_625_; 
v___x_623_ = l_Lean_mkAppN(v___x_609_, v_fst_618_);
lean_dec(v_fst_618_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v___x_623_);
v___x_625_ = v___x_621_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_snd_619_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
case 4:
{
lean_object* v_cases_628_; lean_object* v_discr_629_; lean_object* v_alts_630_; size_t v_sz_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_11807__overap_637_; lean_object* v___x_638_; lean_object* v_fst_639_; lean_object* v_snd_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_654_; 
v_cases_628_ = lean_ctor_get(v_code_580_, 0);
lean_inc_ref(v_cases_628_);
lean_dec_ref_known(v_code_580_, 1);
v_discr_629_ = lean_ctor_get(v_cases_628_, 2);
lean_inc(v_discr_629_);
v_alts_630_ = lean_ctor_get(v_cases_628_, 3);
lean_inc_ref(v_alts_630_);
lean_dec_ref(v_cases_628_);
v_sz_631_ = lean_array_size(v_alts_630_);
v___x_632_ = l_unsafeCast___redArg(v_alts_630_);
lean_dec_ref(v_alts_630_);
v___x_633_ = lean_box(v_pu_579_);
v___x_634_ = lean_box_usize(v_sz_631_);
v___x_635_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___boxed__const__1));
v___x_636_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3___boxed), 6, 4);
lean_closure_set(v___x_636_, 0, v___x_633_);
lean_closure_set(v___x_636_, 1, v___x_634_);
lean_closure_set(v___x_636_, 2, v___x_635_);
lean_closure_set(v___x_636_, 3, v___x_632_);
v___x_11807__overap_637_ = l_unsafeCast___redArg(v___x_636_);
lean_dec_ref(v___x_636_);
lean_inc(v_a_581_);
v___x_638_ = lean_apply_2(v___x_11807__overap_637_, v_a_581_, v_a_582_);
v_fst_639_ = lean_ctor_get(v___x_638_, 0);
v_snd_640_ = lean_ctor_get(v___x_638_, 1);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_654_ == 0)
{
v___x_642_ = v___x_638_;
v_isShared_643_ = v_isSharedCheck_654_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_snd_640_);
lean_inc(v_fst_639_);
lean_dec(v___x_638_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_654_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_652_; 
v___x_644_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v_a_581_, v_snd_640_, v_discr_629_);
v___x_645_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__2, &l_Lean_Compiler_LCNF_Code_toExprM___closed__2_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__2);
v___x_646_ = lean_unsigned_to_nat(1u);
v___x_647_ = lean_mk_empty_array_with_capacity(v___x_646_);
v___x_648_ = lean_array_push(v___x_647_, v___x_644_);
v___x_649_ = l_Array_append___redArg(v___x_648_, v_fst_639_);
lean_dec(v_fst_639_);
v___x_650_ = l_Lean_mkAppN(v___x_645_, v___x_649_);
lean_dec_ref(v___x_649_);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v___x_650_);
v___x_652_ = v___x_642_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_snd_640_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
case 5:
{
lean_object* v_fvarId_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v_fvarId_655_ = lean_ctor_get(v_code_580_, 0);
lean_inc(v_fvarId_655_);
lean_dec_ref_known(v_code_580_, 1);
v___x_656_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v_a_581_, v_a_582_, v_fvarId_655_);
v___x_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
lean_ctor_set(v___x_657_, 1, v_a_582_);
return v___x_657_;
}
case 6:
{
lean_object* v_type_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v_type_658_ = lean_ctor_get(v_code_580_, 0);
lean_inc_ref(v_type_658_);
lean_dec_ref_known(v_code_580_, 1);
v___x_659_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_a_582_, v_a_581_, v_type_658_);
v___x_660_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__5, &l_Lean_Compiler_LCNF_Code_toExprM___closed__5_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__5);
v___x_661_ = l_Lean_Expr_app___override(v___x_660_, v___x_659_);
v___x_662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_662_, 0, v___x_661_);
lean_ctor_set(v___x_662_, 1, v_a_582_);
return v___x_662_;
}
case 7:
{
lean_object* v_fvarId_663_; lean_object* v_i_664_; lean_object* v_y_665_; lean_object* v_k_666_; lean_object* v___x_667_; lean_object* v_fst_668_; lean_object* v_snd_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v_fst_675_; lean_object* v_snd_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_690_; 
v_fvarId_663_ = lean_ctor_get(v_code_580_, 0);
lean_inc_n(v_fvarId_663_, 2);
v_i_664_ = lean_ctor_get(v_code_580_, 1);
lean_inc(v_i_664_);
v_y_665_ = lean_ctor_get(v_code_580_, 2);
lean_inc(v_y_665_);
v_k_666_ = lean_ctor_get(v_code_580_, 3);
lean_inc_ref(v_k_666_);
lean_dec_ref_known(v_code_580_, 4);
v___x_667_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(v_y_665_, v_a_581_, v_a_582_);
v_fst_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_fst_668_);
v_snd_669_ = lean_ctor_get(v___x_667_, 1);
lean_inc(v_snd_669_);
lean_dec_ref(v___x_667_);
v___x_670_ = l_Lean_Expr_fvar___override(v_fvarId_663_);
lean_inc(v_a_581_);
v___x_671_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_663_, v_a_581_, v_snd_669_);
v___x_672_ = lean_unsigned_to_nat(1u);
v___x_673_ = lean_nat_add(v_a_581_, v___x_672_);
v___x_674_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_579_, v_k_666_, v___x_673_, v___x_671_);
lean_dec(v___x_673_);
v_fst_675_ = lean_ctor_get(v___x_674_, 0);
v_snd_676_ = lean_ctor_get(v___x_674_, 1);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_690_ == 0)
{
v___x_678_ = v___x_674_;
v_isShared_679_ = v_isSharedCheck_690_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_snd_676_);
lean_inc(v_fst_675_);
lean_dec(v___x_674_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_690_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; uint8_t v___x_685_; lean_object* v___x_686_; lean_object* v___x_688_; 
v___x_680_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__8, &l_Lean_Compiler_LCNF_Code_toExprM___closed__8_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__8);
v___x_681_ = l_Lean_mkNatLit(v_i_664_);
v___x_682_ = l_Lean_mkApp3(v___x_680_, v___x_670_, v___x_681_, v_fst_668_);
v___x_683_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_684_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_685_ = 1;
v___x_686_ = l_Lean_Expr_letE___override(v___x_683_, v___x_684_, v___x_682_, v_fst_675_, v___x_685_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v___x_686_);
v___x_688_ = v___x_678_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_snd_676_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
case 8:
{
lean_object* v_fvarId_691_; lean_object* v_i_692_; lean_object* v_y_693_; lean_object* v_k_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v_fst_700_; lean_object* v_snd_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_716_; 
v_fvarId_691_ = lean_ctor_get(v_code_580_, 0);
lean_inc_n(v_fvarId_691_, 2);
v_i_692_ = lean_ctor_get(v_code_580_, 1);
lean_inc(v_i_692_);
v_y_693_ = lean_ctor_get(v_code_580_, 2);
lean_inc(v_y_693_);
v_k_694_ = lean_ctor_get(v_code_580_, 3);
lean_inc_ref(v_k_694_);
lean_dec_ref_known(v_code_580_, 4);
v___x_695_ = l_Lean_Expr_fvar___override(v_fvarId_691_);
lean_inc(v_a_581_);
v___x_696_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_691_, v_a_581_, v_a_582_);
v___x_697_ = lean_unsigned_to_nat(1u);
v___x_698_ = lean_nat_add(v_a_581_, v___x_697_);
v___x_699_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_579_, v_k_694_, v___x_698_, v___x_696_);
lean_dec(v___x_698_);
v_fst_700_ = lean_ctor_get(v___x_699_, 0);
v_snd_701_ = lean_ctor_get(v___x_699_, 1);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_716_ == 0)
{
v___x_703_ = v___x_699_;
v_isShared_704_ = v_isSharedCheck_716_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_snd_701_);
lean_inc(v_fst_700_);
lean_dec(v___x_699_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_716_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v_value_708_; lean_object* v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; lean_object* v___x_712_; lean_object* v___x_714_; 
v___x_705_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__16, &l_Lean_Compiler_LCNF_Code_toExprM___closed__16_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__16);
v___x_706_ = l_Lean_mkNatLit(v_i_692_);
v___x_707_ = l_Lean_Expr_fvar___override(v_y_693_);
v_value_708_ = l_Lean_mkApp3(v___x_705_, v___x_695_, v___x_706_, v___x_707_);
v___x_709_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_710_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_711_ = 1;
v___x_712_ = l_Lean_Expr_letE___override(v___x_709_, v___x_710_, v_value_708_, v_fst_700_, v___x_711_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v___x_712_);
v___x_714_ = v___x_703_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_712_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v_snd_701_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
case 9:
{
lean_object* v_fvarId_717_; lean_object* v_i_718_; lean_object* v_offset_719_; lean_object* v_y_720_; lean_object* v_ty_721_; lean_object* v_k_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v_fst_728_; lean_object* v_snd_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_745_; 
v_fvarId_717_ = lean_ctor_get(v_code_580_, 0);
lean_inc_n(v_fvarId_717_, 2);
v_i_718_ = lean_ctor_get(v_code_580_, 1);
lean_inc(v_i_718_);
v_offset_719_ = lean_ctor_get(v_code_580_, 2);
lean_inc(v_offset_719_);
v_y_720_ = lean_ctor_get(v_code_580_, 3);
lean_inc(v_y_720_);
v_ty_721_ = lean_ctor_get(v_code_580_, 4);
lean_inc_ref(v_ty_721_);
v_k_722_ = lean_ctor_get(v_code_580_, 5);
lean_inc_ref(v_k_722_);
lean_dec_ref_known(v_code_580_, 6);
v___x_723_ = l_Lean_Expr_fvar___override(v_fvarId_717_);
lean_inc(v_a_581_);
v___x_724_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_717_, v_a_581_, v_a_582_);
v___x_725_ = lean_unsigned_to_nat(1u);
v___x_726_ = lean_nat_add(v_a_581_, v___x_725_);
v___x_727_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_579_, v_k_722_, v___x_726_, v___x_724_);
lean_dec(v___x_726_);
v_fst_728_ = lean_ctor_get(v___x_727_, 0);
v_snd_729_ = lean_ctor_get(v___x_727_, 1);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_745_ == 0)
{
v___x_731_ = v___x_727_;
v_isShared_732_ = v_isSharedCheck_745_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_snd_729_);
lean_inc(v_fst_728_);
lean_dec(v___x_727_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_745_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v_value_737_; lean_object* v___x_738_; lean_object* v___x_739_; uint8_t v___x_740_; lean_object* v___x_741_; lean_object* v___x_743_; 
v___x_733_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__19, &l_Lean_Compiler_LCNF_Code_toExprM___closed__19_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__19);
v___x_734_ = l_Lean_mkNatLit(v_i_718_);
v___x_735_ = l_Lean_mkNatLit(v_offset_719_);
v___x_736_ = l_Lean_Expr_fvar___override(v_y_720_);
v_value_737_ = l_Lean_mkApp5(v___x_733_, v___x_723_, v___x_734_, v___x_735_, v___x_736_, v_ty_721_);
v___x_738_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_739_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_740_ = 1;
v___x_741_ = l_Lean_Expr_letE___override(v___x_738_, v___x_739_, v_value_737_, v_fst_728_, v___x_740_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 0, v___x_741_);
v___x_743_ = v___x_731_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_741_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_snd_729_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
case 10:
{
lean_object* v_fvarId_746_; lean_object* v_cidx_747_; lean_object* v_k_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v_fst_753_; lean_object* v_snd_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_769_; 
v_fvarId_746_ = lean_ctor_get(v_code_580_, 0);
lean_inc_n(v_fvarId_746_, 2);
v_cidx_747_ = lean_ctor_get(v_code_580_, 1);
lean_inc(v_cidx_747_);
v_k_748_ = lean_ctor_get(v_code_580_, 2);
lean_inc_ref(v_k_748_);
lean_dec_ref_known(v_code_580_, 3);
lean_inc(v_a_581_);
v___x_749_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_746_, v_a_581_, v_a_582_);
v___x_750_ = lean_unsigned_to_nat(1u);
v___x_751_ = lean_nat_add(v_a_581_, v___x_750_);
v___x_752_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_579_, v_k_748_, v___x_751_, v___x_749_);
lean_dec(v___x_751_);
v_fst_753_ = lean_ctor_get(v___x_752_, 0);
v_snd_754_ = lean_ctor_get(v___x_752_, 1);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_769_ == 0)
{
v___x_756_ = v___x_752_;
v_isShared_757_ = v_isSharedCheck_769_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_snd_754_);
lean_inc(v_fst_753_);
lean_dec(v___x_752_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_769_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; uint8_t v___x_764_; lean_object* v___x_765_; lean_object* v___x_767_; 
v___x_758_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__22, &l_Lean_Compiler_LCNF_Code_toExprM___closed__22_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__22);
v___x_759_ = l_Lean_Expr_fvar___override(v_fvarId_746_);
v___x_760_ = l_Lean_mkNatLit(v_cidx_747_);
v___x_761_ = l_Lean_mkAppB(v___x_758_, v___x_759_, v___x_760_);
v___x_762_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_763_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_764_ = 1;
v___x_765_ = l_Lean_Expr_letE___override(v___x_762_, v___x_763_, v___x_761_, v_fst_753_, v___x_764_);
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 0, v___x_765_);
v___x_767_ = v___x_756_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_768_, 1, v_snd_754_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
case 11:
{
lean_object* v_fvarId_770_; lean_object* v_n_771_; uint8_t v_check_772_; uint8_t v_persistent_773_; lean_object* v_k_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___y_779_; lean_object* v___y_780_; lean_object* v___y_800_; 
v_fvarId_770_ = lean_ctor_get(v_code_580_, 0);
lean_inc_n(v_fvarId_770_, 2);
v_n_771_ = lean_ctor_get(v_code_580_, 1);
lean_inc(v_n_771_);
v_check_772_ = lean_ctor_get_uint8(v_code_580_, sizeof(void*)*3);
v_persistent_773_ = lean_ctor_get_uint8(v_code_580_, sizeof(void*)*3 + 1);
v_k_774_ = lean_ctor_get(v_code_580_, 2);
lean_inc_ref(v_k_774_);
lean_dec_ref_known(v_code_580_, 3);
v___x_775_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__25, &l_Lean_Compiler_LCNF_Code_toExprM___closed__25_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__25);
v___x_776_ = l_Lean_Expr_fvar___override(v_fvarId_770_);
v___x_777_ = l_Lean_mkNatLit(v_n_771_);
if (v_check_772_ == 0)
{
lean_object* v___x_803_; 
v___x_803_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__29, &l_Lean_Compiler_LCNF_Code_toExprM___closed__29_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__29);
v___y_800_ = v___x_803_;
goto v___jp_799_;
}
else
{
lean_object* v___x_804_; 
v___x_804_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__32, &l_Lean_Compiler_LCNF_Code_toExprM___closed__32_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__32);
v___y_800_ = v___x_804_;
goto v___jp_799_;
}
v___jp_778_:
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v_fst_785_; lean_object* v_snd_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_798_; 
lean_inc(v_a_581_);
v___x_781_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_770_, v_a_581_, v_a_582_);
v___x_782_ = lean_unsigned_to_nat(1u);
v___x_783_ = lean_nat_add(v_a_581_, v___x_782_);
v___x_784_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_579_, v_k_774_, v___x_783_, v___x_781_);
lean_dec(v___x_783_);
v_fst_785_ = lean_ctor_get(v___x_784_, 0);
v_snd_786_ = lean_ctor_get(v___x_784_, 1);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_798_ == 0)
{
v___x_788_ = v___x_784_;
v_isShared_789_ = v_isSharedCheck_798_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_snd_786_);
lean_inc(v_fst_785_);
lean_dec(v___x_784_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_798_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v_value_790_; lean_object* v___x_791_; lean_object* v___x_792_; uint8_t v___x_793_; lean_object* v___x_794_; lean_object* v___x_796_; 
lean_inc_ref(v___y_780_);
lean_inc_ref(v___y_779_);
v_value_790_ = l_Lean_mkApp4(v___x_775_, v___x_776_, v___x_777_, v___y_779_, v___y_780_);
v___x_791_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_792_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_793_ = 1;
v___x_794_ = l_Lean_Expr_letE___override(v___x_791_, v___x_792_, v_value_790_, v_fst_785_, v___x_793_);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 0, v___x_794_);
v___x_796_ = v___x_788_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_794_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v_snd_786_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
v___jp_799_:
{
if (v_persistent_773_ == 0)
{
lean_object* v___x_801_; 
v___x_801_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__29, &l_Lean_Compiler_LCNF_Code_toExprM___closed__29_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__29);
v___y_779_ = v___y_800_;
v___y_780_ = v___x_801_;
goto v___jp_778_;
}
else
{
lean_object* v___x_802_; 
v___x_802_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__32, &l_Lean_Compiler_LCNF_Code_toExprM___closed__32_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__32);
v___y_779_ = v___y_800_;
v___y_780_ = v___x_802_;
goto v___jp_778_;
}
}
}
case 12:
{
lean_object* v_fvarId_805_; lean_object* v_n_806_; uint8_t v_check_807_; uint8_t v_persistent_808_; lean_object* v_objs_x3f_809_; lean_object* v_k_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v_fst_815_; lean_object* v_snd_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_850_; 
v_fvarId_805_ = lean_ctor_get(v_code_580_, 0);
lean_inc_n(v_fvarId_805_, 2);
v_n_806_ = lean_ctor_get(v_code_580_, 1);
lean_inc(v_n_806_);
v_check_807_ = lean_ctor_get_uint8(v_code_580_, sizeof(void*)*4);
v_persistent_808_ = lean_ctor_get_uint8(v_code_580_, sizeof(void*)*4 + 1);
v_objs_x3f_809_ = lean_ctor_get(v_code_580_, 2);
lean_inc(v_objs_x3f_809_);
v_k_810_ = lean_ctor_get(v_code_580_, 3);
lean_inc_ref(v_k_810_);
lean_dec_ref_known(v_code_580_, 4);
lean_inc(v_a_581_);
v___x_811_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_805_, v_a_581_, v_a_582_);
v___x_812_ = lean_unsigned_to_nat(1u);
v___x_813_ = lean_nat_add(v_a_581_, v___x_812_);
v___x_814_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_579_, v_k_810_, v___x_813_, v___x_811_);
lean_dec(v___x_813_);
v_fst_815_ = lean_ctor_get(v___x_814_, 0);
v_snd_816_ = lean_ctor_get(v___x_814_, 1);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_850_ == 0)
{
v___x_818_ = v___x_814_;
v_isShared_819_ = v_isSharedCheck_850_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_snd_816_);
lean_inc(v_fst_815_);
lean_dec(v___x_814_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_850_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_845_; 
v___x_820_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__35, &l_Lean_Compiler_LCNF_Code_toExprM___closed__35_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__35);
v___x_821_ = l_Lean_Expr_fvar___override(v_fvarId_805_);
v___x_822_ = l_Lean_mkNatLit(v_n_806_);
if (v_check_807_ == 0)
{
lean_object* v___x_848_; 
v___x_848_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__29, &l_Lean_Compiler_LCNF_Code_toExprM___closed__29_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__29);
v___y_845_ = v___x_848_;
goto v___jp_844_;
}
else
{
lean_object* v___x_849_; 
v___x_849_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__32, &l_Lean_Compiler_LCNF_Code_toExprM___closed__32_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__32);
v___y_845_ = v___x_849_;
goto v___jp_844_;
}
v___jp_823_:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; uint8_t v___x_830_; lean_object* v___x_831_; lean_object* v___x_833_; 
lean_inc_ref(v___y_825_);
lean_inc_ref(v___y_824_);
v___x_827_ = l_Lean_mkApp5(v___x_820_, v___x_821_, v___x_822_, v___y_824_, v___y_825_, v___y_826_);
v___x_828_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_829_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_830_ = 1;
v___x_831_ = l_Lean_Expr_letE___override(v___x_828_, v___x_829_, v___x_827_, v_fst_815_, v___x_830_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_831_);
v___x_833_ = v___x_818_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_831_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_snd_816_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
v___jp_835_:
{
lean_object* v___x_838_; 
v___x_838_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__38, &l_Lean_Compiler_LCNF_Code_toExprM___closed__38_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__38);
if (lean_obj_tag(v_objs_x3f_809_) == 0)
{
lean_object* v___x_839_; 
v___x_839_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__45, &l_Lean_Compiler_LCNF_Code_toExprM___closed__45_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__45);
v___y_824_ = v___y_836_;
v___y_825_ = v___y_837_;
v___y_826_ = v___x_839_;
goto v___jp_823_;
}
else
{
lean_object* v_val_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v_val_840_ = lean_ctor_get(v_objs_x3f_809_, 0);
lean_inc(v_val_840_);
lean_dec_ref_known(v_objs_x3f_809_, 1);
v___x_841_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__48, &l_Lean_Compiler_LCNF_Code_toExprM___closed__48_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__48);
v___x_842_ = l_Lean_mkNatLit(v_val_840_);
v___x_843_ = l_Lean_mkAppB(v___x_841_, v___x_838_, v___x_842_);
v___y_824_ = v___y_836_;
v___y_825_ = v___y_837_;
v___y_826_ = v___x_843_;
goto v___jp_823_;
}
}
v___jp_844_:
{
if (v_persistent_808_ == 0)
{
lean_object* v___x_846_; 
v___x_846_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__29, &l_Lean_Compiler_LCNF_Code_toExprM___closed__29_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__29);
v___y_836_ = v___y_845_;
v___y_837_ = v___x_846_;
goto v___jp_835_;
}
else
{
lean_object* v___x_847_; 
v___x_847_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__32, &l_Lean_Compiler_LCNF_Code_toExprM___closed__32_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__32);
v___y_836_ = v___y_845_;
v___y_837_ = v___x_847_;
goto v___jp_835_;
}
}
}
}
case 13:
{
lean_object* v_fvarId_851_; lean_object* v_k_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v_fst_857_; lean_object* v_snd_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_872_; 
v_fvarId_851_ = lean_ctor_get(v_code_580_, 0);
lean_inc_n(v_fvarId_851_, 2);
v_k_852_ = lean_ctor_get(v_code_580_, 1);
lean_inc_ref(v_k_852_);
lean_dec_ref_known(v_code_580_, 2);
lean_inc(v_a_581_);
v___x_853_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_851_, v_a_581_, v_a_582_);
v___x_854_ = lean_unsigned_to_nat(1u);
v___x_855_ = lean_nat_add(v_a_581_, v___x_854_);
v___x_856_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_579_, v_k_852_, v___x_855_, v___x_853_);
lean_dec(v___x_855_);
v_fst_857_ = lean_ctor_get(v___x_856_, 0);
v_snd_858_ = lean_ctor_get(v___x_856_, 1);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_872_ == 0)
{
v___x_860_ = v___x_856_;
v_isShared_861_ = v_isSharedCheck_872_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_snd_858_);
lean_inc(v_fst_857_);
lean_dec(v___x_856_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_872_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; uint8_t v___x_867_; lean_object* v___x_868_; lean_object* v___x_870_; 
v___x_862_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__51, &l_Lean_Compiler_LCNF_Code_toExprM___closed__51_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__51);
v___x_863_ = l_Lean_Expr_fvar___override(v_fvarId_851_);
v___x_864_ = l_Lean_Expr_app___override(v___x_862_, v___x_863_);
v___x_865_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_866_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_867_ = 1;
v___x_868_ = l_Lean_Expr_letE___override(v___x_865_, v___x_866_, v___x_864_, v_fst_857_, v___x_867_);
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 0, v___x_868_);
v___x_870_ = v___x_860_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_868_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v_snd_858_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
default: 
{
lean_object* v_decl_873_; lean_object* v_k_874_; lean_object* v_fvarId_875_; lean_object* v_binderName_876_; lean_object* v_type_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v_fst_880_; lean_object* v_snd_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v_fst_886_; lean_object* v_snd_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_896_; 
v_decl_873_ = lean_ctor_get(v_code_580_, 0);
lean_inc_ref(v_decl_873_);
v_k_874_ = lean_ctor_get(v_code_580_, 1);
lean_inc_ref(v_k_874_);
lean_dec_ref(v_code_580_);
v_fvarId_875_ = lean_ctor_get(v_decl_873_, 0);
lean_inc(v_fvarId_875_);
v_binderName_876_ = lean_ctor_get(v_decl_873_, 1);
lean_inc(v_binderName_876_);
v_type_877_ = lean_ctor_get(v_decl_873_, 3);
lean_inc_ref(v_type_877_);
v___x_878_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_a_582_, v_a_581_, v_type_877_);
v___x_879_ = l_Lean_Compiler_LCNF_FunDecl_toExprM(v_pu_579_, v_decl_873_, v_a_581_, v_a_582_);
v_fst_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_fst_880_);
v_snd_881_ = lean_ctor_get(v___x_879_, 1);
lean_inc(v_snd_881_);
lean_dec_ref(v___x_879_);
lean_inc(v_a_581_);
v___x_882_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_875_, v_a_581_, v_snd_881_);
v___x_883_ = lean_unsigned_to_nat(1u);
v___x_884_ = lean_nat_add(v_a_581_, v___x_883_);
v___x_885_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_579_, v_k_874_, v___x_884_, v___x_882_);
lean_dec(v___x_884_);
v_fst_886_ = lean_ctor_get(v___x_885_, 0);
v_snd_887_ = lean_ctor_get(v___x_885_, 1);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_896_ == 0)
{
v___x_889_ = v___x_885_;
v_isShared_890_ = v_isSharedCheck_896_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_snd_887_);
lean_inc(v_fst_886_);
lean_dec(v___x_885_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_896_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
uint8_t v___x_891_; lean_object* v___x_892_; lean_object* v___x_894_; 
v___x_891_ = 1;
v___x_892_ = l_Lean_Expr_letE___override(v_binderName_876_, v___x_878_, v_fst_880_, v_fst_886_, v___x_891_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v___x_892_);
v___x_894_ = v___x_889_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v___x_892_);
lean_ctor_set(v_reuseFailAlloc_895_, 1, v_snd_887_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(uint8_t v_pu_897_, lean_object* v_value_898_, lean_object* v_params_899_, lean_object* v_params_900_, lean_object* v_i_901_, lean_object* v_a_902_, lean_object* v_a_903_){
_start:
{
lean_object* v___x_904_; uint8_t v___x_905_; 
v___x_904_ = lean_array_get_size(v_params_900_);
v___x_905_ = lean_nat_dec_lt(v_i_901_, v___x_904_);
if (v___x_905_ == 0)
{
lean_object* v___x_906_; lean_object* v_fst_907_; lean_object* v_snd_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_917_; 
lean_dec(v_i_901_);
v___x_906_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_897_, v_value_898_, v_a_902_, v_a_903_);
v_fst_907_ = lean_ctor_get(v___x_906_, 0);
v_snd_908_ = lean_ctor_get(v___x_906_, 1);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_917_ == 0)
{
v___x_910_ = v___x_906_;
v_isShared_911_ = v_isSharedCheck_917_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_snd_908_);
lean_inc(v_fst_907_);
lean_dec(v___x_906_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_917_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_915_; 
v___x_912_ = lean_array_get_size(v_params_899_);
v___x_913_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(v_params_899_, v_a_902_, v_snd_908_, v___x_912_, v_fst_907_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v___x_913_);
v___x_915_ = v___x_910_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v___x_913_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v_snd_908_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
else
{
lean_object* v___x_918_; lean_object* v_fvarId_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_918_ = lean_array_fget_borrowed(v_params_900_, v_i_901_);
v_fvarId_919_ = lean_ctor_get(v___x_918_, 0);
v___x_920_ = lean_unsigned_to_nat(1u);
v___x_921_ = lean_nat_add(v_i_901_, v___x_920_);
lean_dec(v_i_901_);
lean_inc(v_a_902_);
lean_inc(v_fvarId_919_);
v___x_922_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_919_, v_a_902_, v_a_903_);
v___x_923_ = lean_nat_add(v_a_902_, v___x_920_);
lean_dec(v_a_902_);
v_i_901_ = v___x_921_;
v_a_902_ = v___x_923_;
v_a_903_ = v___x_922_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExprM(uint8_t v_pu_925_, lean_object* v_decl_926_, lean_object* v_a_927_, lean_object* v_a_928_){
_start:
{
lean_object* v_params_929_; lean_object* v_value_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v_params_929_ = lean_ctor_get(v_decl_926_, 2);
lean_inc_ref(v_params_929_);
v_value_930_ = lean_ctor_get(v_decl_926_, 4);
lean_inc_ref(v_value_930_);
lean_dec_ref(v_decl_926_);
v___x_931_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_927_);
v___x_932_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(v_pu_925_, v_value_930_, v_params_929_, v_params_929_, v___x_931_, v_a_927_, v_a_928_);
lean_dec_ref(v_params_929_);
return v___x_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExprM___boxed(lean_object* v_pu_933_, lean_object* v_decl_934_, lean_object* v_a_935_, lean_object* v_a_936_){
_start:
{
uint8_t v_pu_boxed_937_; lean_object* v_res_938_; 
v_pu_boxed_937_ = lean_unbox(v_pu_933_);
v_res_938_ = l_Lean_Compiler_LCNF_FunDecl_toExprM(v_pu_boxed_937_, v_decl_934_, v_a_935_, v_a_936_);
lean_dec(v_a_935_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg___boxed(lean_object* v_pu_939_, lean_object* v_value_940_, lean_object* v_params_941_, lean_object* v_params_942_, lean_object* v_i_943_, lean_object* v_a_944_, lean_object* v_a_945_){
_start:
{
uint8_t v_pu_boxed_946_; lean_object* v_res_947_; 
v_pu_boxed_946_ = lean_unbox(v_pu_939_);
v_res_947_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(v_pu_boxed_946_, v_value_940_, v_params_941_, v_params_942_, v_i_943_, v_a_944_, v_a_945_);
lean_dec_ref(v_params_942_);
lean_dec_ref(v_params_941_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExprM___boxed(lean_object* v_pu_948_, lean_object* v_code_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
uint8_t v_pu_boxed_952_; lean_object* v_res_953_; 
v_pu_boxed_952_ = lean_unbox(v_pu_948_);
v_res_953_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_boxed_952_, v_code_949_, v_a_950_, v_a_951_);
lean_dec(v_a_950_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0(uint8_t v_pu_954_, lean_object* v_value_955_, lean_object* v_params_956_, uint8_t v_pu_957_, lean_object* v_params_958_, lean_object* v_i_959_, lean_object* v_a_960_, lean_object* v_a_961_){
_start:
{
lean_object* v___x_962_; 
lean_inc(v_a_960_);
v___x_962_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(v_pu_954_, v_value_955_, v_params_956_, v_params_958_, v_i_959_, v_a_960_, v_a_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___boxed(lean_object* v_pu_963_, lean_object* v_value_964_, lean_object* v_params_965_, lean_object* v_pu_966_, lean_object* v_params_967_, lean_object* v_i_968_, lean_object* v_a_969_, lean_object* v_a_970_){
_start:
{
uint8_t v_pu_boxed_971_; uint8_t v_pu_boxed_972_; lean_object* v_res_973_; 
v_pu_boxed_971_ = lean_unbox(v_pu_963_);
v_pu_boxed_972_ = lean_unbox(v_pu_966_);
v_res_973_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0(v_pu_boxed_971_, v_value_964_, v_params_965_, v_pu_boxed_972_, v_params_967_, v_i_968_, v_a_969_, v_a_970_);
lean_dec(v_a_969_);
lean_dec_ref(v_params_967_);
lean_dec_ref(v_params_965_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0(lean_object* v_as_974_, size_t v_i_975_, size_t v_stop_976_, lean_object* v_b_977_){
_start:
{
lean_object* v___y_979_; uint8_t v___x_983_; 
v___x_983_ = lean_usize_dec_eq(v_i_975_, v_stop_976_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; 
v___x_984_ = lean_array_uget_borrowed(v_as_974_, v_i_975_);
if (lean_obj_tag(v_b_977_) == 0)
{
lean_object* v_size_985_; lean_object* v___x_986_; 
v_size_985_ = lean_ctor_get(v_b_977_, 0);
lean_inc(v_size_985_);
lean_inc(v___x_984_);
v___x_986_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v___x_984_, v_size_985_, v_b_977_);
v___y_979_ = v___x_986_;
goto v___jp_978_;
}
else
{
lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_987_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_984_);
v___x_988_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v___x_984_, v___x_987_, v_b_977_);
v___y_979_ = v___x_988_;
goto v___jp_978_;
}
}
else
{
return v_b_977_;
}
v___jp_978_:
{
size_t v___x_980_; size_t v___x_981_; 
v___x_980_ = ((size_t)1ULL);
v___x_981_ = lean_usize_add(v_i_975_, v___x_980_);
v_i_975_ = v___x_981_;
v_b_977_ = v___y_979_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0___boxed(lean_object* v_as_989_, lean_object* v_i_990_, lean_object* v_stop_991_, lean_object* v_b_992_){
_start:
{
size_t v_i_boxed_993_; size_t v_stop_boxed_994_; lean_object* v_res_995_; 
v_i_boxed_993_ = lean_unbox_usize(v_i_990_);
lean_dec(v_i_990_);
v_stop_boxed_994_ = lean_unbox_usize(v_stop_991_);
lean_dec(v_stop_991_);
v_res_995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0(v_as_989_, v_i_boxed_993_, v_stop_boxed_994_, v_b_992_);
lean_dec_ref(v_as_989_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExpr(uint8_t v_pu_996_, lean_object* v_code_997_, lean_object* v_xs_998_){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___y_1003_; uint8_t v___x_1006_; 
v___x_999_ = lean_box(1);
v___x_1000_ = lean_unsigned_to_nat(0u);
v___x_1001_ = lean_array_get_size(v_xs_998_);
v___x_1006_ = lean_nat_dec_lt(v___x_1000_, v___x_1001_);
if (v___x_1006_ == 0)
{
v___y_1003_ = v___x_999_;
goto v___jp_1002_;
}
else
{
size_t v___x_1007_; size_t v___x_1008_; lean_object* v___x_1009_; 
v___x_1007_ = ((size_t)0ULL);
v___x_1008_ = lean_usize_of_nat(v___x_1001_);
v___x_1009_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0(v_xs_998_, v___x_1007_, v___x_1008_, v___x_999_);
v___y_1003_ = v___x_1009_;
goto v___jp_1002_;
}
v___jp_1002_:
{
lean_object* v___x_1004_; lean_object* v_fst_1005_; 
v___x_1004_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_996_, v_code_997_, v___x_1001_, v___y_1003_);
v_fst_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_fst_1005_);
lean_dec_ref(v___x_1004_);
return v_fst_1005_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExpr___boxed(lean_object* v_pu_1010_, lean_object* v_code_1011_, lean_object* v_xs_1012_){
_start:
{
uint8_t v_pu_boxed_1013_; lean_object* v_res_1014_; 
v_pu_boxed_1013_ = lean_unbox(v_pu_1010_);
v_res_1014_ = l_Lean_Compiler_LCNF_Code_toExpr(v_pu_boxed_1013_, v_code_1011_, v_xs_1012_);
lean_dec_ref(v_xs_1012_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExpr(uint8_t v_pu_1015_, lean_object* v_decl_1016_, lean_object* v_xs_1017_){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___y_1022_; uint8_t v___x_1025_; 
v___x_1018_ = lean_box(1);
v___x_1019_ = lean_unsigned_to_nat(0u);
v___x_1020_ = lean_array_get_size(v_xs_1017_);
v___x_1025_ = lean_nat_dec_lt(v___x_1019_, v___x_1020_);
if (v___x_1025_ == 0)
{
v___y_1022_ = v___x_1018_;
goto v___jp_1021_;
}
else
{
size_t v___x_1026_; size_t v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = ((size_t)0ULL);
v___x_1027_ = lean_usize_of_nat(v___x_1020_);
v___x_1028_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0(v_xs_1017_, v___x_1026_, v___x_1027_, v___x_1018_);
v___y_1022_ = v___x_1028_;
goto v___jp_1021_;
}
v___jp_1021_:
{
lean_object* v___x_1023_; lean_object* v_fst_1024_; 
v___x_1023_ = l_Lean_Compiler_LCNF_FunDecl_toExprM(v_pu_1015_, v_decl_1016_, v___x_1020_, v___y_1022_);
v_fst_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_fst_1024_);
lean_dec_ref(v___x_1023_);
return v_fst_1024_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExpr___boxed(lean_object* v_pu_1029_, lean_object* v_decl_1030_, lean_object* v_xs_1031_){
_start:
{
uint8_t v_pu_boxed_1032_; lean_object* v_res_1033_; 
v_pu_boxed_1032_ = lean_unbox(v_pu_1029_);
v_res_1033_ = l_Lean_Compiler_LCNF_FunDecl_toExpr(v_pu_boxed_1032_, v_decl_1030_, v_xs_1031_);
lean_dec_ref(v_xs_1031_);
return v_res_1033_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ToExpr(builtin);
}
#ifdef __cplusplus
}
#endif

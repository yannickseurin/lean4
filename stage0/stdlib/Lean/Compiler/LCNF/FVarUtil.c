// Lean compiler output
// Module: Lean.Compiler.LCNF.FVarUtil
// Imports: public import Lean.Compiler.LCNF.CompilerM
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
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateFVarImp___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateTypeImp(uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateFVarImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateResetImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateReuseImp___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateBoxImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateUnboxImp___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateIsSharedImp___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_pure(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Compiler.LCNF.Expr.mapFVarM"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.FVarUtil"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Compiler.LCNF.Expr.forFVarM"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarExpr___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instTraverseFVarExpr___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instTraverseFVarExpr___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarExpr = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarExpr___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instTraverseFVarArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instTraverseFVarArg___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarArg(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetValue___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetValue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetValue___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instTraverseFVarLetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instTraverseFVarLetValue___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetValue___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarLetValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetValue(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetValue___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetDecl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarParam___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarParam___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarParam___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instTraverseFVarParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instTraverseFVarParam___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarParam___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarParam___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarParam(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarParam___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__29(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__31(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__30(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__32(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__34(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__10(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCode___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCode___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCode___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instTraverseFVarCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instTraverseFVarCode___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCode___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarCode___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCode(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCode___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarFunDecl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__11(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__12(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__14(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__19(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__19, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instTraverseFVarAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__7, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instTraverseFVarAlt___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVarM___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVarM___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVarM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVarM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_anyFVar___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_anyFVar___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_anyFVar___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_anyFVar___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_anyFVar___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_anyFVar___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_anyFVar___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_anyFVar___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_anyFVar___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_anyFVar___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__3_value),((lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__5_value)}};
static const lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_anyFVar___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_anyFVar___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_anyFVar(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_allFVar(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__0(lean_object* v_fvarId_1_, lean_object* v_toPure_2_, lean_object* v_e_3_, lean_object* v_____do__lift_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = l_Lean_instBEqFVarId_beq(v_fvarId_1_, v_____do__lift_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; lean_object* v___x_7_; 
lean_dec_ref(v_e_3_);
v___x_6_ = l_Lean_Expr_fvar___override(v_____do__lift_4_);
v___x_7_ = lean_apply_2(v_toPure_2_, lean_box(0), v___x_6_);
return v___x_7_;
}
else
{
lean_object* v___x_8_; 
lean_dec(v_____do__lift_4_);
v___x_8_ = lean_apply_2(v_toPure_2_, lean_box(0), v_e_3_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__0___boxed(lean_object* v_fvarId_9_, lean_object* v_toPure_10_, lean_object* v_e_11_, lean_object* v_____do__lift_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__0(v_fvarId_9_, v_toPure_10_, v_e_11_, v_____do__lift_12_);
lean_dec(v_fvarId_9_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__1(lean_object* v_fn_14_, lean_object* v_____do__lift_15_, lean_object* v_toPure_16_, lean_object* v_arg_17_, lean_object* v_e_18_, lean_object* v_____do__lift_19_){
_start:
{
size_t v___x_20_; size_t v___x_21_; uint8_t v___x_22_; 
v___x_20_ = lean_ptr_addr(v_fn_14_);
v___x_21_ = lean_ptr_addr(v_____do__lift_15_);
v___x_22_ = lean_usize_dec_eq(v___x_20_, v___x_21_);
if (v___x_22_ == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; 
lean_dec_ref(v_e_18_);
v___x_23_ = l_Lean_Expr_app___override(v_____do__lift_15_, v_____do__lift_19_);
v___x_24_ = lean_apply_2(v_toPure_16_, lean_box(0), v___x_23_);
return v___x_24_;
}
else
{
size_t v___x_25_; size_t v___x_26_; uint8_t v___x_27_; 
v___x_25_ = lean_ptr_addr(v_arg_17_);
v___x_26_ = lean_ptr_addr(v_____do__lift_19_);
v___x_27_ = lean_usize_dec_eq(v___x_25_, v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; lean_object* v___x_29_; 
lean_dec_ref(v_e_18_);
v___x_28_ = l_Lean_Expr_app___override(v_____do__lift_15_, v_____do__lift_19_);
v___x_29_ = lean_apply_2(v_toPure_16_, lean_box(0), v___x_28_);
return v___x_29_;
}
else
{
lean_object* v___x_30_; 
lean_dec_ref(v_____do__lift_19_);
lean_dec_ref(v_____do__lift_15_);
v___x_30_ = lean_apply_2(v_toPure_16_, lean_box(0), v_e_18_);
return v___x_30_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__1___boxed(lean_object* v_fn_31_, lean_object* v_____do__lift_32_, lean_object* v_toPure_33_, lean_object* v_arg_34_, lean_object* v_e_35_, lean_object* v_____do__lift_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__1(v_fn_31_, v_____do__lift_32_, v_toPure_33_, v_arg_34_, v_e_35_, v_____do__lift_36_);
lean_dec_ref(v_arg_34_);
lean_dec_ref(v_fn_31_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__3(lean_object* v_binderType_38_, lean_object* v_____do__lift_39_, lean_object* v_binderName_40_, uint8_t v_binderInfo_41_, lean_object* v_toPure_42_, lean_object* v_body_43_, lean_object* v_e_44_, lean_object* v_____do__lift_45_){
_start:
{
size_t v___x_46_; size_t v___x_47_; uint8_t v___x_48_; 
v___x_46_ = lean_ptr_addr(v_binderType_38_);
v___x_47_ = lean_ptr_addr(v_____do__lift_39_);
v___x_48_ = lean_usize_dec_eq(v___x_46_, v___x_47_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; lean_object* v___x_50_; 
lean_dec_ref(v_e_44_);
v___x_49_ = l_Lean_Expr_lam___override(v_binderName_40_, v_____do__lift_39_, v_____do__lift_45_, v_binderInfo_41_);
v___x_50_ = lean_apply_2(v_toPure_42_, lean_box(0), v___x_49_);
return v___x_50_;
}
else
{
size_t v___x_51_; size_t v___x_52_; uint8_t v___x_53_; 
v___x_51_ = lean_ptr_addr(v_body_43_);
v___x_52_ = lean_ptr_addr(v_____do__lift_45_);
v___x_53_ = lean_usize_dec_eq(v___x_51_, v___x_52_);
if (v___x_53_ == 0)
{
lean_object* v___x_54_; lean_object* v___x_55_; 
lean_dec_ref(v_e_44_);
v___x_54_ = l_Lean_Expr_lam___override(v_binderName_40_, v_____do__lift_39_, v_____do__lift_45_, v_binderInfo_41_);
v___x_55_ = lean_apply_2(v_toPure_42_, lean_box(0), v___x_54_);
return v___x_55_;
}
else
{
uint8_t v___x_56_; 
v___x_56_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_41_, v_binderInfo_41_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; lean_object* v___x_58_; 
lean_dec_ref(v_e_44_);
v___x_57_ = l_Lean_Expr_lam___override(v_binderName_40_, v_____do__lift_39_, v_____do__lift_45_, v_binderInfo_41_);
v___x_58_ = lean_apply_2(v_toPure_42_, lean_box(0), v___x_57_);
return v___x_58_;
}
else
{
lean_object* v___x_59_; 
lean_dec_ref(v_____do__lift_45_);
lean_dec(v_binderName_40_);
lean_dec_ref(v_____do__lift_39_);
v___x_59_ = lean_apply_2(v_toPure_42_, lean_box(0), v_e_44_);
return v___x_59_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__3___boxed(lean_object* v_binderType_60_, lean_object* v_____do__lift_61_, lean_object* v_binderName_62_, lean_object* v_binderInfo_63_, lean_object* v_toPure_64_, lean_object* v_body_65_, lean_object* v_e_66_, lean_object* v_____do__lift_67_){
_start:
{
uint8_t v_binderInfo_648__boxed_68_; lean_object* v_res_69_; 
v_binderInfo_648__boxed_68_ = lean_unbox(v_binderInfo_63_);
v_res_69_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__3(v_binderType_60_, v_____do__lift_61_, v_binderName_62_, v_binderInfo_648__boxed_68_, v_toPure_64_, v_body_65_, v_e_66_, v_____do__lift_67_);
lean_dec_ref(v_body_65_);
lean_dec_ref(v_binderType_60_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__5(lean_object* v_binderType_70_, lean_object* v_____do__lift_71_, lean_object* v_binderName_72_, uint8_t v_binderInfo_73_, lean_object* v_toPure_74_, lean_object* v_body_75_, lean_object* v_e_76_, lean_object* v_____do__lift_77_){
_start:
{
size_t v___x_78_; size_t v___x_79_; uint8_t v___x_80_; 
v___x_78_ = lean_ptr_addr(v_binderType_70_);
v___x_79_ = lean_ptr_addr(v_____do__lift_71_);
v___x_80_ = lean_usize_dec_eq(v___x_78_, v___x_79_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; lean_object* v___x_82_; 
lean_dec_ref(v_e_76_);
v___x_81_ = l_Lean_Expr_forallE___override(v_binderName_72_, v_____do__lift_71_, v_____do__lift_77_, v_binderInfo_73_);
v___x_82_ = lean_apply_2(v_toPure_74_, lean_box(0), v___x_81_);
return v___x_82_;
}
else
{
size_t v___x_83_; size_t v___x_84_; uint8_t v___x_85_; 
v___x_83_ = lean_ptr_addr(v_body_75_);
v___x_84_ = lean_ptr_addr(v_____do__lift_77_);
v___x_85_ = lean_usize_dec_eq(v___x_83_, v___x_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; lean_object* v___x_87_; 
lean_dec_ref(v_e_76_);
v___x_86_ = l_Lean_Expr_forallE___override(v_binderName_72_, v_____do__lift_71_, v_____do__lift_77_, v_binderInfo_73_);
v___x_87_ = lean_apply_2(v_toPure_74_, lean_box(0), v___x_86_);
return v___x_87_;
}
else
{
uint8_t v___x_88_; 
v___x_88_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_73_, v_binderInfo_73_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; lean_object* v___x_90_; 
lean_dec_ref(v_e_76_);
v___x_89_ = l_Lean_Expr_forallE___override(v_binderName_72_, v_____do__lift_71_, v_____do__lift_77_, v_binderInfo_73_);
v___x_90_ = lean_apply_2(v_toPure_74_, lean_box(0), v___x_89_);
return v___x_90_;
}
else
{
lean_object* v___x_91_; 
lean_dec_ref(v_____do__lift_77_);
lean_dec(v_binderName_72_);
lean_dec_ref(v_____do__lift_71_);
v___x_91_ = lean_apply_2(v_toPure_74_, lean_box(0), v_e_76_);
return v___x_91_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__5___boxed(lean_object* v_binderType_92_, lean_object* v_____do__lift_93_, lean_object* v_binderName_94_, lean_object* v_binderInfo_95_, lean_object* v_toPure_96_, lean_object* v_body_97_, lean_object* v_e_98_, lean_object* v_____do__lift_99_){
_start:
{
uint8_t v_binderInfo_694__boxed_100_; lean_object* v_res_101_; 
v_binderInfo_694__boxed_100_ = lean_unbox(v_binderInfo_95_);
v_res_101_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__5(v_binderType_92_, v_____do__lift_93_, v_binderName_94_, v_binderInfo_694__boxed_100_, v_toPure_96_, v_body_97_, v_e_98_, v_____do__lift_99_);
lean_dec_ref(v_body_97_);
lean_dec_ref(v_binderType_92_);
return v_res_101_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_105_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__2));
v___x_106_ = lean_unsigned_to_nat(41u);
v___x_107_ = lean_unsigned_to_nat(30u);
v___x_108_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__1));
v___x_109_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__0));
v___x_110_ = l_mkPanicMessageWithDecl(v___x_109_, v___x_108_, v___x_107_, v___x_106_, v___x_105_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__4(lean_object* v_binderType_111_, lean_object* v_binderName_112_, uint8_t v_binderInfo_113_, lean_object* v_toPure_114_, lean_object* v_body_115_, lean_object* v_e_116_, lean_object* v_inst_117_, lean_object* v_f_118_, lean_object* v_toBind_119_, lean_object* v_____do__lift_120_){
_start:
{
lean_object* v___x_121_; lean_object* v___f_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_121_ = lean_box(v_binderInfo_113_);
lean_inc_ref(v_body_115_);
v___f_122_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_122_, 0, v_binderType_111_);
lean_closure_set(v___f_122_, 1, v_____do__lift_120_);
lean_closure_set(v___f_122_, 2, v_binderName_112_);
lean_closure_set(v___f_122_, 3, v___x_121_);
lean_closure_set(v___f_122_, 4, v_toPure_114_);
lean_closure_set(v___f_122_, 5, v_body_115_);
lean_closure_set(v___f_122_, 6, v_e_116_);
v___x_123_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_117_, v_f_118_, v_body_115_);
v___x_124_ = lean_apply_4(v_toBind_119_, lean_box(0), lean_box(0), v___x_123_, v___f_122_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__4___boxed(lean_object* v_binderType_125_, lean_object* v_binderName_126_, lean_object* v_binderInfo_127_, lean_object* v_toPure_128_, lean_object* v_body_129_, lean_object* v_e_130_, lean_object* v_inst_131_, lean_object* v_f_132_, lean_object* v_toBind_133_, lean_object* v_____do__lift_134_){
_start:
{
uint8_t v_binderInfo_773__boxed_135_; lean_object* v_res_136_; 
v_binderInfo_773__boxed_135_ = lean_unbox(v_binderInfo_127_);
v_res_136_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__4(v_binderType_125_, v_binderName_126_, v_binderInfo_773__boxed_135_, v_toPure_128_, v_body_129_, v_e_130_, v_inst_131_, v_f_132_, v_toBind_133_, v_____do__lift_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__6(lean_object* v_binderType_137_, lean_object* v_binderName_138_, uint8_t v_binderInfo_139_, lean_object* v_toPure_140_, lean_object* v_body_141_, lean_object* v_e_142_, lean_object* v_inst_143_, lean_object* v_f_144_, lean_object* v_toBind_145_, lean_object* v_____do__lift_146_){
_start:
{
lean_object* v___x_147_; lean_object* v___f_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_147_ = lean_box(v_binderInfo_139_);
lean_inc_ref(v_body_141_);
v___f_148_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_148_, 0, v_binderType_137_);
lean_closure_set(v___f_148_, 1, v_____do__lift_146_);
lean_closure_set(v___f_148_, 2, v_binderName_138_);
lean_closure_set(v___f_148_, 3, v___x_147_);
lean_closure_set(v___f_148_, 4, v_toPure_140_);
lean_closure_set(v___f_148_, 5, v_body_141_);
lean_closure_set(v___f_148_, 6, v_e_142_);
v___x_149_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_143_, v_f_144_, v_body_141_);
v___x_150_ = lean_apply_4(v_toBind_145_, lean_box(0), lean_box(0), v___x_149_, v___f_148_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__6___boxed(lean_object* v_binderType_151_, lean_object* v_binderName_152_, lean_object* v_binderInfo_153_, lean_object* v_toPure_154_, lean_object* v_body_155_, lean_object* v_e_156_, lean_object* v_inst_157_, lean_object* v_f_158_, lean_object* v_toBind_159_, lean_object* v_____do__lift_160_){
_start:
{
uint8_t v_binderInfo_782__boxed_161_; lean_object* v_res_162_; 
v_binderInfo_782__boxed_161_ = lean_unbox(v_binderInfo_153_);
v_res_162_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__6(v_binderType_151_, v_binderName_152_, v_binderInfo_782__boxed_161_, v_toPure_154_, v_body_155_, v_e_156_, v_inst_157_, v_f_158_, v_toBind_159_, v_____do__lift_160_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(lean_object* v_inst_163_, lean_object* v_f_164_, lean_object* v_e_165_){
_start:
{
lean_object* v_toApplicative_166_; lean_object* v_toBind_167_; lean_object* v_toPure_168_; uint8_t v___x_169_; 
v_toApplicative_166_ = lean_ctor_get(v_inst_163_, 0);
v_toBind_167_ = lean_ctor_get(v_inst_163_, 1);
lean_inc(v_toBind_167_);
v_toPure_168_ = lean_ctor_get(v_toApplicative_166_, 1);
v___x_169_ = l_Lean_Expr_hasFVar(v_e_165_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; 
lean_inc(v_toPure_168_);
lean_dec(v_toBind_167_);
lean_dec(v_f_164_);
lean_dec_ref(v_inst_163_);
v___x_170_ = lean_apply_2(v_toPure_168_, lean_box(0), v_e_165_);
return v___x_170_;
}
else
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = l_Lean_instInhabitedExpr;
lean_inc_ref(v_inst_163_);
v___x_172_ = l_instInhabitedOfMonad___redArg(v_inst_163_, v___x_171_);
switch(lean_obj_tag(v_e_165_))
{
case 1:
{
lean_object* v_fvarId_173_; lean_object* v___f_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
lean_inc(v_toPure_168_);
lean_dec(v___x_172_);
lean_dec_ref(v_inst_163_);
v_fvarId_173_ = lean_ctor_get(v_e_165_, 0);
lean_inc_n(v_fvarId_173_, 2);
v___f_174_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_174_, 0, v_fvarId_173_);
lean_closure_set(v___f_174_, 1, v_toPure_168_);
lean_closure_set(v___f_174_, 2, v_e_165_);
v___x_175_ = lean_apply_1(v_f_164_, v_fvarId_173_);
v___x_176_ = lean_apply_4(v_toBind_167_, lean_box(0), lean_box(0), v___x_175_, v___f_174_);
return v___x_176_;
}
case 2:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
lean_dec_ref_known(v_e_165_, 1);
lean_dec(v_toBind_167_);
lean_dec(v_f_164_);
lean_dec_ref(v_inst_163_);
v___x_177_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3, &l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3);
v___x_178_ = l_panic___redArg(v___x_172_, v___x_177_);
lean_dec(v___x_172_);
return v___x_178_;
}
case 5:
{
lean_object* v_fn_179_; lean_object* v_arg_180_; lean_object* v___f_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
lean_dec(v___x_172_);
v_fn_179_ = lean_ctor_get(v_e_165_, 0);
lean_inc_ref_n(v_fn_179_, 2);
v_arg_180_ = lean_ctor_get(v_e_165_, 1);
lean_inc_ref(v_arg_180_);
lean_inc(v_toBind_167_);
lean_inc(v_f_164_);
lean_inc_ref(v_inst_163_);
lean_inc(v_toPure_168_);
v___f_181_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__2), 8, 7);
lean_closure_set(v___f_181_, 0, v_fn_179_);
lean_closure_set(v___f_181_, 1, v_toPure_168_);
lean_closure_set(v___f_181_, 2, v_arg_180_);
lean_closure_set(v___f_181_, 3, v_e_165_);
lean_closure_set(v___f_181_, 4, v_inst_163_);
lean_closure_set(v___f_181_, 5, v_f_164_);
lean_closure_set(v___f_181_, 6, v_toBind_167_);
v___x_182_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_163_, v_f_164_, v_fn_179_);
v___x_183_ = lean_apply_4(v_toBind_167_, lean_box(0), lean_box(0), v___x_182_, v___f_181_);
return v___x_183_;
}
case 6:
{
lean_object* v_binderName_184_; lean_object* v_binderType_185_; lean_object* v_body_186_; uint8_t v_binderInfo_187_; lean_object* v___x_188_; lean_object* v___f_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
lean_dec(v___x_172_);
v_binderName_184_ = lean_ctor_get(v_e_165_, 0);
lean_inc(v_binderName_184_);
v_binderType_185_ = lean_ctor_get(v_e_165_, 1);
lean_inc_ref_n(v_binderType_185_, 2);
v_body_186_ = lean_ctor_get(v_e_165_, 2);
lean_inc_ref(v_body_186_);
v_binderInfo_187_ = lean_ctor_get_uint8(v_e_165_, sizeof(void*)*3 + 8);
v___x_188_ = lean_box(v_binderInfo_187_);
lean_inc(v_toBind_167_);
lean_inc(v_f_164_);
lean_inc_ref(v_inst_163_);
lean_inc(v_toPure_168_);
v___f_189_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_189_, 0, v_binderType_185_);
lean_closure_set(v___f_189_, 1, v_binderName_184_);
lean_closure_set(v___f_189_, 2, v___x_188_);
lean_closure_set(v___f_189_, 3, v_toPure_168_);
lean_closure_set(v___f_189_, 4, v_body_186_);
lean_closure_set(v___f_189_, 5, v_e_165_);
lean_closure_set(v___f_189_, 6, v_inst_163_);
lean_closure_set(v___f_189_, 7, v_f_164_);
lean_closure_set(v___f_189_, 8, v_toBind_167_);
v___x_190_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_163_, v_f_164_, v_binderType_185_);
v___x_191_ = lean_apply_4(v_toBind_167_, lean_box(0), lean_box(0), v___x_190_, v___f_189_);
return v___x_191_;
}
case 7:
{
lean_object* v_binderName_192_; lean_object* v_binderType_193_; lean_object* v_body_194_; uint8_t v_binderInfo_195_; lean_object* v___x_196_; lean_object* v___f_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
lean_dec(v___x_172_);
v_binderName_192_ = lean_ctor_get(v_e_165_, 0);
lean_inc(v_binderName_192_);
v_binderType_193_ = lean_ctor_get(v_e_165_, 1);
lean_inc_ref_n(v_binderType_193_, 2);
v_body_194_ = lean_ctor_get(v_e_165_, 2);
lean_inc_ref(v_body_194_);
v_binderInfo_195_ = lean_ctor_get_uint8(v_e_165_, sizeof(void*)*3 + 8);
v___x_196_ = lean_box(v_binderInfo_195_);
lean_inc(v_toBind_167_);
lean_inc(v_f_164_);
lean_inc_ref(v_inst_163_);
lean_inc(v_toPure_168_);
v___f_197_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__6___boxed), 10, 9);
lean_closure_set(v___f_197_, 0, v_binderType_193_);
lean_closure_set(v___f_197_, 1, v_binderName_192_);
lean_closure_set(v___f_197_, 2, v___x_196_);
lean_closure_set(v___f_197_, 3, v_toPure_168_);
lean_closure_set(v___f_197_, 4, v_body_194_);
lean_closure_set(v___f_197_, 5, v_e_165_);
lean_closure_set(v___f_197_, 6, v_inst_163_);
lean_closure_set(v___f_197_, 7, v_f_164_);
lean_closure_set(v___f_197_, 8, v_toBind_167_);
v___x_198_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_163_, v_f_164_, v_binderType_193_);
v___x_199_ = lean_apply_4(v_toBind_167_, lean_box(0), lean_box(0), v___x_198_, v___f_197_);
return v___x_199_;
}
case 8:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
lean_dec_ref_known(v_e_165_, 4);
lean_dec(v_toBind_167_);
lean_dec(v_f_164_);
lean_dec_ref(v_inst_163_);
v___x_200_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3, &l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3);
v___x_201_ = l_panic___redArg(v___x_172_, v___x_200_);
lean_dec(v___x_172_);
return v___x_201_;
}
case 11:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
lean_dec_ref_known(v_e_165_, 3);
lean_dec(v_toBind_167_);
lean_dec(v_f_164_);
lean_dec_ref(v_inst_163_);
v___x_202_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3, &l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__3);
v___x_203_ = l_panic___redArg(v___x_172_, v___x_202_);
lean_dec(v___x_172_);
return v___x_203_;
}
default: 
{
lean_object* v___x_204_; 
lean_inc(v_toPure_168_);
lean_dec(v___x_172_);
lean_dec(v_toBind_167_);
lean_dec(v_f_164_);
lean_dec_ref(v_inst_163_);
v___x_204_ = lean_apply_2(v_toPure_168_, lean_box(0), v_e_165_);
return v___x_204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__2(lean_object* v_fn_205_, lean_object* v_toPure_206_, lean_object* v_arg_207_, lean_object* v_e_208_, lean_object* v_inst_209_, lean_object* v_f_210_, lean_object* v_toBind_211_, lean_object* v_____do__lift_212_){
_start:
{
lean_object* v___f_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
lean_inc_ref(v_arg_207_);
v___f_213_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_213_, 0, v_fn_205_);
lean_closure_set(v___f_213_, 1, v_____do__lift_212_);
lean_closure_set(v___f_213_, 2, v_toPure_206_);
lean_closure_set(v___f_213_, 3, v_arg_207_);
lean_closure_set(v___f_213_, 4, v_e_208_);
v___x_214_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_209_, v_f_210_, v_arg_207_);
v___x_215_ = lean_apply_4(v_toBind_211_, lean_box(0), lean_box(0), v___x_214_, v___f_213_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM(lean_object* v_m_216_, lean_object* v_inst_217_, lean_object* v_inst_218_, lean_object* v_f_219_, lean_object* v_e_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_218_, v_f_219_, v_e_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___boxed(lean_object* v_m_222_, lean_object* v_inst_223_, lean_object* v_inst_224_, lean_object* v_f_225_, lean_object* v_e_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_Compiler_LCNF_Expr_mapFVarM(v_m_222_, v_inst_223_, v_inst_224_, v_f_225_, v_e_226_);
lean_dec(v_inst_223_);
return v_res_227_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_229_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__2));
v___x_230_ = lean_unsigned_to_nat(40u);
v___x_231_ = lean_unsigned_to_nat(49u);
v___x_232_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__0));
v___x_233_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg___closed__0));
v___x_234_ = l_mkPanicMessageWithDecl(v___x_233_, v___x_232_, v___x_231_, v___x_230_, v___x_229_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___lam__1(lean_object* v_inst_235_, lean_object* v_f_236_, lean_object* v_arg_237_, lean_object* v_____r_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_235_, v_f_236_, v_arg_237_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(lean_object* v_inst_240_, lean_object* v_f_241_, lean_object* v_e_242_){
_start:
{
lean_object* v_toApplicative_243_; lean_object* v_toBind_244_; lean_object* v_ty_246_; lean_object* v_body_247_; lean_object* v_toPure_251_; uint8_t v___x_252_; 
v_toApplicative_243_ = lean_ctor_get(v_inst_240_, 0);
v_toBind_244_ = lean_ctor_get(v_inst_240_, 1);
lean_inc(v_toBind_244_);
v_toPure_251_ = lean_ctor_get(v_toApplicative_243_, 1);
v___x_252_ = l_Lean_Expr_hasFVar(v_e_242_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; 
lean_inc(v_toPure_251_);
lean_dec(v_toBind_244_);
lean_dec_ref(v_e_242_);
lean_dec(v_f_241_);
lean_dec_ref(v_inst_240_);
v___x_253_ = lean_box(0);
v___x_254_ = lean_apply_2(v_toPure_251_, lean_box(0), v___x_253_);
return v___x_254_;
}
else
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = lean_box(0);
lean_inc_ref(v_inst_240_);
v___x_256_ = l_instInhabitedOfMonad___redArg(v_inst_240_, v___x_255_);
switch(lean_obj_tag(v_e_242_))
{
case 1:
{
lean_object* v_fvarId_257_; lean_object* v___x_258_; 
lean_dec(v___x_256_);
lean_dec(v_toBind_244_);
lean_dec_ref(v_inst_240_);
v_fvarId_257_ = lean_ctor_get(v_e_242_, 0);
lean_inc(v_fvarId_257_);
lean_dec_ref_known(v_e_242_, 1);
v___x_258_ = lean_apply_1(v_f_241_, v_fvarId_257_);
return v___x_258_;
}
case 2:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec_ref_known(v_e_242_, 1);
lean_dec(v_toBind_244_);
lean_dec(v_f_241_);
lean_dec_ref(v_inst_240_);
v___x_259_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1, &l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1);
v___x_260_ = l_panic___redArg(v___x_256_, v___x_259_);
lean_dec(v___x_256_);
return v___x_260_;
}
case 5:
{
lean_object* v_fn_261_; lean_object* v_arg_262_; lean_object* v___f_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
lean_dec(v___x_256_);
v_fn_261_ = lean_ctor_get(v_e_242_, 0);
lean_inc_ref(v_fn_261_);
v_arg_262_ = lean_ctor_get(v_e_242_, 1);
lean_inc_ref(v_arg_262_);
lean_dec_ref_known(v_e_242_, 2);
lean_inc(v_f_241_);
lean_inc_ref(v_inst_240_);
v___f_263_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___lam__1), 4, 3);
lean_closure_set(v___f_263_, 0, v_inst_240_);
lean_closure_set(v___f_263_, 1, v_f_241_);
lean_closure_set(v___f_263_, 2, v_arg_262_);
v___x_264_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_240_, v_f_241_, v_fn_261_);
v___x_265_ = lean_apply_4(v_toBind_244_, lean_box(0), lean_box(0), v___x_264_, v___f_263_);
return v___x_265_;
}
case 6:
{
lean_object* v_binderType_266_; lean_object* v_body_267_; 
lean_dec(v___x_256_);
v_binderType_266_ = lean_ctor_get(v_e_242_, 1);
lean_inc_ref(v_binderType_266_);
v_body_267_ = lean_ctor_get(v_e_242_, 2);
lean_inc_ref(v_body_267_);
lean_dec_ref_known(v_e_242_, 3);
v_ty_246_ = v_binderType_266_;
v_body_247_ = v_body_267_;
goto v___jp_245_;
}
case 7:
{
lean_object* v_binderType_268_; lean_object* v_body_269_; 
lean_dec(v___x_256_);
v_binderType_268_ = lean_ctor_get(v_e_242_, 1);
lean_inc_ref(v_binderType_268_);
v_body_269_ = lean_ctor_get(v_e_242_, 2);
lean_inc_ref(v_body_269_);
lean_dec_ref_known(v_e_242_, 3);
v_ty_246_ = v_binderType_268_;
v_body_247_ = v_body_269_;
goto v___jp_245_;
}
case 8:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
lean_dec_ref_known(v_e_242_, 4);
lean_dec(v_toBind_244_);
lean_dec(v_f_241_);
lean_dec_ref(v_inst_240_);
v___x_270_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1, &l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1);
v___x_271_ = l_panic___redArg(v___x_256_, v___x_270_);
lean_dec(v___x_256_);
return v___x_271_;
}
case 11:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
lean_dec_ref_known(v_e_242_, 3);
lean_dec(v_toBind_244_);
lean_dec(v_f_241_);
lean_dec_ref(v_inst_240_);
v___x_272_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1, &l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___closed__1);
v___x_273_ = l_panic___redArg(v___x_256_, v___x_272_);
lean_dec(v___x_256_);
return v___x_273_;
}
default: 
{
lean_object* v___x_274_; 
lean_inc(v_toPure_251_);
lean_dec(v___x_256_);
lean_dec(v_toBind_244_);
lean_dec_ref(v_e_242_);
lean_dec(v_f_241_);
lean_dec_ref(v_inst_240_);
v___x_274_ = lean_apply_2(v_toPure_251_, lean_box(0), v___x_255_);
return v___x_274_;
}
}
}
v___jp_245_:
{
lean_object* v___f_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
lean_inc(v_f_241_);
lean_inc_ref(v_inst_240_);
v___f_248_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_248_, 0, v_inst_240_);
lean_closure_set(v___f_248_, 1, v_f_241_);
lean_closure_set(v___f_248_, 2, v_body_247_);
v___x_249_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_240_, v_f_241_, v_ty_246_);
v___x_250_ = lean_apply_4(v_toBind_244_, lean_box(0), lean_box(0), v___x_249_, v___f_248_);
return v___x_250_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___redArg___lam__0(lean_object* v_inst_275_, lean_object* v_f_276_, lean_object* v_body_277_, lean_object* v_____r_278_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_275_, v_f_276_, v_body_277_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM(lean_object* v_m_280_, lean_object* v_inst_281_, lean_object* v_f_282_, lean_object* v_e_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_281_, v_f_282_, v_e_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarExpr___lam__0(lean_object* v_m_285_, lean_object* v_inst_286_, lean_object* v_inst_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_287_, v___y_288_, v___y_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarExpr___lam__0___boxed(lean_object* v_m_291_, lean_object* v_inst_292_, lean_object* v_inst_293_, lean_object* v___y_294_, lean_object* v___y_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lean_Compiler_LCNF_instTraverseFVarExpr___lam__0(v_m_291_, v_inst_292_, v_inst_293_, v___y_294_, v___y_295_);
lean_dec(v_inst_292_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarExpr___lam__1(lean_object* v_m_297_, lean_object* v_inst_298_, lean_object* v___y_299_, lean_object* v___y_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_298_, v___y_299_, v___y_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg___lam__0(lean_object* v_arg_308_, lean_object* v_toPure_309_, lean_object* v_____do__lift_310_){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateFVarImp___redArg(v_arg_308_, v_____do__lift_310_);
v___x_312_ = lean_apply_2(v_toPure_309_, lean_box(0), v___x_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg___lam__1(uint8_t v_pu_313_, lean_object* v_arg_314_, lean_object* v_toPure_315_, lean_object* v_____do__lift_316_){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateTypeImp(v_pu_313_, v_arg_314_, v_____do__lift_316_);
v___x_318_ = lean_apply_2(v_toPure_315_, lean_box(0), v___x_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg___lam__1___boxed(lean_object* v_pu_319_, lean_object* v_arg_320_, lean_object* v_toPure_321_, lean_object* v_____do__lift_322_){
_start:
{
uint8_t v_pu_boxed_323_; lean_object* v_res_324_; 
v_pu_boxed_323_ = lean_unbox(v_pu_319_);
v_res_324_ = l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg___lam__1(v_pu_boxed_323_, v_arg_320_, v_toPure_321_, v_____do__lift_322_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg(uint8_t v_pu_325_, lean_object* v_inst_326_, lean_object* v_f_327_, lean_object* v_arg_328_){
_start:
{
switch(lean_obj_tag(v_arg_328_))
{
case 0:
{
lean_object* v_toApplicative_329_; lean_object* v_toPure_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v_toApplicative_329_ = lean_ctor_get(v_inst_326_, 0);
lean_inc_ref(v_toApplicative_329_);
lean_dec(v_f_327_);
lean_dec_ref(v_inst_326_);
v_toPure_330_ = lean_ctor_get(v_toApplicative_329_, 1);
lean_inc(v_toPure_330_);
lean_dec_ref(v_toApplicative_329_);
v___x_331_ = lean_box(0);
v___x_332_ = lean_apply_2(v_toPure_330_, lean_box(0), v___x_331_);
return v___x_332_;
}
case 1:
{
lean_object* v_toApplicative_333_; lean_object* v_toBind_334_; lean_object* v_toPure_335_; lean_object* v_fvarId_336_; lean_object* v___f_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v_toApplicative_333_ = lean_ctor_get(v_inst_326_, 0);
lean_inc_ref(v_toApplicative_333_);
v_toBind_334_ = lean_ctor_get(v_inst_326_, 1);
lean_inc(v_toBind_334_);
lean_dec_ref(v_inst_326_);
v_toPure_335_ = lean_ctor_get(v_toApplicative_333_, 1);
lean_inc(v_toPure_335_);
lean_dec_ref(v_toApplicative_333_);
v_fvarId_336_ = lean_ctor_get(v_arg_328_, 0);
lean_inc(v_fvarId_336_);
v___f_337_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_337_, 0, v_arg_328_);
lean_closure_set(v___f_337_, 1, v_toPure_335_);
v___x_338_ = lean_apply_1(v_f_327_, v_fvarId_336_);
v___x_339_ = lean_apply_4(v_toBind_334_, lean_box(0), lean_box(0), v___x_338_, v___f_337_);
return v___x_339_;
}
default: 
{
lean_object* v_toApplicative_340_; lean_object* v_toBind_341_; lean_object* v_toPure_342_; lean_object* v_expr_343_; lean_object* v___x_344_; lean_object* v___f_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_toApplicative_340_ = lean_ctor_get(v_inst_326_, 0);
v_toBind_341_ = lean_ctor_get(v_inst_326_, 1);
lean_inc(v_toBind_341_);
v_toPure_342_ = lean_ctor_get(v_toApplicative_340_, 1);
v_expr_343_ = lean_ctor_get(v_arg_328_, 0);
lean_inc_ref(v_expr_343_);
v___x_344_ = lean_box(v_pu_325_);
lean_inc(v_toPure_342_);
v___f_345_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_345_, 0, v___x_344_);
lean_closure_set(v___f_345_, 1, v_arg_328_);
lean_closure_set(v___f_345_, 2, v_toPure_342_);
v___x_346_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_326_, v_f_327_, v_expr_343_);
v___x_347_ = lean_apply_4(v_toBind_341_, lean_box(0), lean_box(0), v___x_346_, v___f_345_);
return v___x_347_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg___boxed(lean_object* v_pu_348_, lean_object* v_inst_349_, lean_object* v_f_350_, lean_object* v_arg_351_){
_start:
{
uint8_t v_pu_boxed_352_; lean_object* v_res_353_; 
v_pu_boxed_352_ = lean_unbox(v_pu_348_);
v_res_353_ = l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg(v_pu_boxed_352_, v_inst_349_, v_f_350_, v_arg_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM(lean_object* v_m_354_, uint8_t v_pu_355_, lean_object* v_inst_356_, lean_object* v_inst_357_, lean_object* v_f_358_, lean_object* v_arg_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg(v_pu_355_, v_inst_357_, v_f_358_, v_arg_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___boxed(lean_object* v_m_361_, lean_object* v_pu_362_, lean_object* v_inst_363_, lean_object* v_inst_364_, lean_object* v_f_365_, lean_object* v_arg_366_){
_start:
{
uint8_t v_pu_boxed_367_; lean_object* v_res_368_; 
v_pu_boxed_367_ = lean_unbox(v_pu_362_);
v_res_368_ = l_Lean_Compiler_LCNF_Arg_mapFVarM(v_m_361_, v_pu_boxed_367_, v_inst_363_, v_inst_364_, v_f_365_, v_arg_366_);
lean_dec(v_inst_363_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___redArg(lean_object* v_inst_369_, lean_object* v_f_370_, lean_object* v_arg_371_){
_start:
{
switch(lean_obj_tag(v_arg_371_))
{
case 0:
{
lean_object* v_toApplicative_372_; lean_object* v_toPure_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v_toApplicative_372_ = lean_ctor_get(v_inst_369_, 0);
lean_inc_ref(v_toApplicative_372_);
lean_dec(v_f_370_);
lean_dec_ref(v_inst_369_);
v_toPure_373_ = lean_ctor_get(v_toApplicative_372_, 1);
lean_inc(v_toPure_373_);
lean_dec_ref(v_toApplicative_372_);
v___x_374_ = lean_box(0);
v___x_375_ = lean_apply_2(v_toPure_373_, lean_box(0), v___x_374_);
return v___x_375_;
}
case 1:
{
lean_object* v_fvarId_376_; lean_object* v___x_377_; 
lean_dec_ref(v_inst_369_);
v_fvarId_376_ = lean_ctor_get(v_arg_371_, 0);
lean_inc(v_fvarId_376_);
lean_dec_ref_known(v_arg_371_, 1);
v___x_377_ = lean_apply_1(v_f_370_, v_fvarId_376_);
return v___x_377_;
}
default: 
{
lean_object* v_expr_378_; lean_object* v___x_379_; 
v_expr_378_ = lean_ctor_get(v_arg_371_, 0);
lean_inc_ref(v_expr_378_);
lean_dec_ref_known(v_arg_371_, 1);
v___x_379_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_369_, v_f_370_, v_expr_378_);
return v___x_379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM(lean_object* v_m_380_, uint8_t v_pu_381_, lean_object* v_inst_382_, lean_object* v_f_383_, lean_object* v_arg_384_){
_start:
{
lean_object* v___x_385_; 
v___x_385_ = l_Lean_Compiler_LCNF_Arg_forFVarM___redArg(v_inst_382_, v_f_383_, v_arg_384_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___boxed(lean_object* v_m_386_, lean_object* v_pu_387_, lean_object* v_inst_388_, lean_object* v_f_389_, lean_object* v_arg_390_){
_start:
{
uint8_t v_pu_boxed_391_; lean_object* v_res_392_; 
v_pu_boxed_391_ = lean_unbox(v_pu_387_);
v_res_392_ = l_Lean_Compiler_LCNF_Arg_forFVarM(v_m_386_, v_pu_boxed_391_, v_inst_388_, v_f_389_, v_arg_390_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarArg___lam__0(uint8_t v_pu_393_, lean_object* v_m_394_, lean_object* v_inst_395_, lean_object* v_inst_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg(v_pu_393_, v_inst_396_, v___y_397_, v___y_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarArg___lam__0___boxed(lean_object* v_pu_400_, lean_object* v_m_401_, lean_object* v_inst_402_, lean_object* v_inst_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
uint8_t v_pu_boxed_406_; lean_object* v_res_407_; 
v_pu_boxed_406_ = lean_unbox(v_pu_400_);
v_res_407_ = l_Lean_Compiler_LCNF_instTraverseFVarArg___lam__0(v_pu_boxed_406_, v_m_401_, v_inst_402_, v_inst_403_, v___y_404_, v___y_405_);
lean_dec(v_inst_402_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarArg___lam__1(lean_object* v_m_408_, lean_object* v_inst_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l_Lean_Compiler_LCNF_Arg_forFVarM___redArg(v_inst_409_, v___y_410_, v___y_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarArg(uint8_t v_pu_414_){
_start:
{
lean_object* v___x_415_; lean_object* v___f_416_; lean_object* v___f_417_; lean_object* v___x_418_; 
v___x_415_ = lean_box(v_pu_414_);
v___f_416_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_416_, 0, v___x_415_);
v___f_417_ = ((lean_object*)(l_Lean_Compiler_LCNF_instTraverseFVarArg___closed__0));
v___x_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_418_, 0, v___f_416_);
lean_ctor_set(v___x_418_, 1, v___f_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarArg___boxed(lean_object* v_pu_419_){
_start:
{
uint8_t v_pu_boxed_420_; lean_object* v_res_421_; 
v_pu_boxed_420_ = lean_unbox(v_pu_419_);
v_res_421_ = l_Lean_Compiler_LCNF_instTraverseFVarArg(v_pu_boxed_420_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__0(uint8_t v_pu_422_, lean_object* v_inst_423_, lean_object* v_f_424_, lean_object* v___y_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg(v_pu_422_, v_inst_423_, v_f_424_, v___y_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__0___boxed(lean_object* v_pu_427_, lean_object* v_inst_428_, lean_object* v_f_429_, lean_object* v___y_430_){
_start:
{
uint8_t v_pu_boxed_431_; lean_object* v_res_432_; 
v_pu_boxed_431_ = lean_unbox(v_pu_427_);
v_res_432_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__0(v_pu_boxed_431_, v_inst_428_, v_f_429_, v___y_430_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__1(lean_object* v_e_433_, lean_object* v_toPure_434_, lean_object* v_____do__lift_435_){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_e_433_, v_____do__lift_435_);
v___x_437_ = lean_apply_2(v_toPure_434_, lean_box(0), v___x_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__2(uint8_t v_pu_438_, lean_object* v_e_439_, lean_object* v_toPure_440_, lean_object* v_____do__lift_441_){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_438_, v_e_439_, v_____do__lift_441_);
v___x_443_ = lean_apply_2(v_toPure_440_, lean_box(0), v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__2___boxed(lean_object* v_pu_444_, lean_object* v_e_445_, lean_object* v_toPure_446_, lean_object* v_____do__lift_447_){
_start:
{
uint8_t v_pu_boxed_448_; lean_object* v_res_449_; 
v_pu_boxed_448_ = lean_unbox(v_pu_444_);
v_res_449_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__2(v_pu_boxed_448_, v_e_445_, v_toPure_446_, v_____do__lift_447_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__7(lean_object* v_e_450_, lean_object* v_____do__lift_451_, lean_object* v_toPure_452_, lean_object* v_____do__lift_453_){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateFVarImp___redArg(v_e_450_, v_____do__lift_451_, v_____do__lift_453_);
v___x_455_ = lean_apply_2(v_toPure_452_, lean_box(0), v___x_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__7___boxed(lean_object* v_e_456_, lean_object* v_____do__lift_457_, lean_object* v_toPure_458_, lean_object* v_____do__lift_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__7(v_e_456_, v_____do__lift_457_, v_toPure_458_, v_____do__lift_459_);
lean_dec(v_e_456_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__3(lean_object* v_e_461_, lean_object* v_toPure_462_, lean_object* v_args_463_, lean_object* v_inst_464_, lean_object* v___f_465_, lean_object* v_toBind_466_, lean_object* v_____do__lift_467_){
_start:
{
lean_object* v___f_468_; size_t v_sz_469_; size_t v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___f_468_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__7___boxed), 4, 3);
lean_closure_set(v___f_468_, 0, v_e_461_);
lean_closure_set(v___f_468_, 1, v_____do__lift_467_);
lean_closure_set(v___f_468_, 2, v_toPure_462_);
v_sz_469_ = lean_array_size(v_args_463_);
v___x_470_ = ((size_t)0ULL);
v___x_471_ = l_unsafeCast___redArg(v_args_463_);
v___x_472_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_464_, v___f_465_, v_sz_469_, v___x_470_, v___x_471_);
v___x_473_ = l_unsafeCast___redArg(v___x_472_);
lean_dec(v___x_472_);
v___x_474_ = lean_apply_4(v_toBind_466_, lean_box(0), lean_box(0), v___x_473_, v___f_468_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__3___boxed(lean_object* v_e_475_, lean_object* v_toPure_476_, lean_object* v_args_477_, lean_object* v_inst_478_, lean_object* v___f_479_, lean_object* v_toBind_480_, lean_object* v_____do__lift_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__3(v_e_475_, v_toPure_476_, v_args_477_, v_inst_478_, v___f_479_, v_toBind_480_, v_____do__lift_481_);
lean_dec_ref(v_args_477_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__8(lean_object* v_e_483_, lean_object* v_n_484_, lean_object* v_toPure_485_, lean_object* v_____do__lift_486_){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateResetImp___redArg(v_e_483_, v_n_484_, v_____do__lift_486_);
v___x_488_ = lean_apply_2(v_toPure_485_, lean_box(0), v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__5(lean_object* v_e_489_, lean_object* v_____do__lift_490_, lean_object* v_i_491_, uint8_t v_updateHeader_492_, lean_object* v_toPure_493_, lean_object* v_____do__lift_494_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateReuseImp___redArg(v_e_489_, v_____do__lift_490_, v_i_491_, v_updateHeader_492_, v_____do__lift_494_);
v___x_496_ = lean_apply_2(v_toPure_493_, lean_box(0), v___x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__5___boxed(lean_object* v_e_497_, lean_object* v_____do__lift_498_, lean_object* v_i_499_, lean_object* v_updateHeader_500_, lean_object* v_toPure_501_, lean_object* v_____do__lift_502_){
_start:
{
uint8_t v_updateHeader_664__boxed_503_; lean_object* v_res_504_; 
v_updateHeader_664__boxed_503_ = lean_unbox(v_updateHeader_500_);
v_res_504_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__5(v_e_497_, v_____do__lift_498_, v_i_499_, v_updateHeader_664__boxed_503_, v_toPure_501_, v_____do__lift_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__4(lean_object* v_e_505_, lean_object* v_i_506_, uint8_t v_updateHeader_507_, lean_object* v_toPure_508_, lean_object* v_args_509_, lean_object* v_inst_510_, lean_object* v___f_511_, lean_object* v_toBind_512_, lean_object* v_____do__lift_513_){
_start:
{
lean_object* v___x_514_; lean_object* v___f_515_; size_t v_sz_516_; size_t v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_514_ = lean_box(v_updateHeader_507_);
v___f_515_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__5___boxed), 6, 5);
lean_closure_set(v___f_515_, 0, v_e_505_);
lean_closure_set(v___f_515_, 1, v_____do__lift_513_);
lean_closure_set(v___f_515_, 2, v_i_506_);
lean_closure_set(v___f_515_, 3, v___x_514_);
lean_closure_set(v___f_515_, 4, v_toPure_508_);
v_sz_516_ = lean_array_size(v_args_509_);
v___x_517_ = ((size_t)0ULL);
v___x_518_ = l_unsafeCast___redArg(v_args_509_);
v___x_519_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_510_, v___f_511_, v_sz_516_, v___x_517_, v___x_518_);
v___x_520_ = l_unsafeCast___redArg(v___x_519_);
lean_dec(v___x_519_);
v___x_521_ = lean_apply_4(v_toBind_512_, lean_box(0), lean_box(0), v___x_520_, v___f_515_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__4___boxed(lean_object* v_e_522_, lean_object* v_i_523_, lean_object* v_updateHeader_524_, lean_object* v_toPure_525_, lean_object* v_args_526_, lean_object* v_inst_527_, lean_object* v___f_528_, lean_object* v_toBind_529_, lean_object* v_____do__lift_530_){
_start:
{
uint8_t v_updateHeader_679__boxed_531_; lean_object* v_res_532_; 
v_updateHeader_679__boxed_531_ = lean_unbox(v_updateHeader_524_);
v_res_532_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__4(v_e_522_, v_i_523_, v_updateHeader_679__boxed_531_, v_toPure_525_, v_args_526_, v_inst_527_, v___f_528_, v_toBind_529_, v_____do__lift_530_);
lean_dec_ref(v_args_526_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__6(lean_object* v_e_533_, lean_object* v_ty_534_, lean_object* v_toPure_535_, lean_object* v_____do__lift_536_){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateBoxImp___redArg(v_e_533_, v_ty_534_, v_____do__lift_536_);
v___x_538_ = lean_apply_2(v_toPure_535_, lean_box(0), v___x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__9(lean_object* v_e_539_, lean_object* v_toPure_540_, lean_object* v_____do__lift_541_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateUnboxImp___redArg(v_e_539_, v_____do__lift_541_);
v___x_543_ = lean_apply_2(v_toPure_540_, lean_box(0), v___x_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__10(lean_object* v_e_544_, lean_object* v_toPure_545_, lean_object* v_____do__lift_546_){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateIsSharedImp___redArg(v_e_544_, v_____do__lift_546_);
v___x_548_ = lean_apply_2(v_toPure_545_, lean_box(0), v___x_547_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg(uint8_t v_pu_549_, lean_object* v_inst_550_, lean_object* v_f_551_, lean_object* v_e_552_){
_start:
{
lean_object* v_toApplicative_553_; lean_object* v_toBind_554_; lean_object* v_toPure_555_; lean_object* v___x_556_; lean_object* v___f_557_; lean_object* v___f_558_; lean_object* v_args_560_; lean_object* v___x_567_; lean_object* v___f_568_; lean_object* v_fvarId_570_; 
v_toApplicative_553_ = lean_ctor_get(v_inst_550_, 0);
v_toBind_554_ = lean_ctor_get(v_inst_550_, 1);
lean_inc(v_toBind_554_);
v_toPure_555_ = lean_ctor_get(v_toApplicative_553_, 1);
v___x_556_ = lean_box(v_pu_549_);
lean_inc(v_f_551_);
lean_inc_ref(v_inst_550_);
v___f_557_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_557_, 0, v___x_556_);
lean_closure_set(v___f_557_, 1, v_inst_550_);
lean_closure_set(v___f_557_, 2, v_f_551_);
lean_inc_n(v_toPure_555_, 2);
lean_inc_n(v_e_552_, 2);
v___f_558_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__1), 3, 2);
lean_closure_set(v___f_558_, 0, v_e_552_);
lean_closure_set(v___f_558_, 1, v_toPure_555_);
v___x_567_ = lean_box(v_pu_549_);
v___f_568_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_568_, 0, v___x_567_);
lean_closure_set(v___f_568_, 1, v_e_552_);
lean_closure_set(v___f_568_, 2, v_toPure_555_);
switch(lean_obj_tag(v_e_552_))
{
case 2:
{
lean_object* v_struct_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec_ref(v___f_558_);
lean_dec_ref(v___f_557_);
lean_dec_ref(v_inst_550_);
v_struct_573_ = lean_ctor_get(v_e_552_, 2);
lean_inc(v_struct_573_);
lean_dec_ref_known(v_e_552_, 3);
v___x_574_ = lean_apply_1(v_f_551_, v_struct_573_);
v___x_575_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_574_, v___f_568_);
return v___x_575_;
}
case 3:
{
lean_object* v_args_576_; size_t v_sz_577_; size_t v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
lean_dec_ref(v___f_568_);
lean_dec(v_f_551_);
v_args_576_ = lean_ctor_get(v_e_552_, 2);
lean_inc_ref(v_args_576_);
lean_dec_ref_known(v_e_552_, 3);
v_sz_577_ = lean_array_size(v_args_576_);
v___x_578_ = ((size_t)0ULL);
v___x_579_ = l_unsafeCast___redArg(v_args_576_);
lean_dec_ref(v_args_576_);
v___x_580_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_550_, v___f_557_, v_sz_577_, v___x_578_, v___x_579_);
v___x_581_ = l_unsafeCast___redArg(v___x_580_);
lean_dec(v___x_580_);
v___x_582_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_581_, v___f_558_);
return v___x_582_;
}
case 4:
{
lean_object* v_fvarId_583_; lean_object* v_args_584_; lean_object* v___f_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
lean_inc(v_toPure_555_);
lean_dec_ref(v___f_568_);
lean_dec_ref(v___f_558_);
v_fvarId_583_ = lean_ctor_get(v_e_552_, 0);
lean_inc(v_fvarId_583_);
v_args_584_ = lean_ctor_get(v_e_552_, 1);
lean_inc_ref(v_args_584_);
lean_inc(v_toBind_554_);
v___f_585_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_585_, 0, v_e_552_);
lean_closure_set(v___f_585_, 1, v_toPure_555_);
lean_closure_set(v___f_585_, 2, v_args_584_);
lean_closure_set(v___f_585_, 3, v_inst_550_);
lean_closure_set(v___f_585_, 4, v___f_557_);
lean_closure_set(v___f_585_, 5, v_toBind_554_);
v___x_586_ = lean_apply_1(v_f_551_, v_fvarId_583_);
v___x_587_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_586_, v___f_585_);
return v___x_587_;
}
case 5:
{
lean_object* v_args_588_; size_t v_sz_589_; size_t v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
lean_dec_ref(v___f_568_);
lean_dec(v_f_551_);
v_args_588_ = lean_ctor_get(v_e_552_, 1);
lean_inc_ref(v_args_588_);
lean_dec_ref_known(v_e_552_, 2);
v_sz_589_ = lean_array_size(v_args_588_);
v___x_590_ = ((size_t)0ULL);
v___x_591_ = l_unsafeCast___redArg(v_args_588_);
lean_dec_ref(v_args_588_);
v___x_592_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_550_, v___f_557_, v_sz_589_, v___x_590_, v___x_591_);
v___x_593_ = l_unsafeCast___redArg(v___x_592_);
lean_dec(v___x_592_);
v___x_594_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_593_, v___f_558_);
return v___x_594_;
}
case 6:
{
lean_object* v_var_595_; 
lean_dec_ref(v___f_558_);
lean_dec_ref(v___f_557_);
lean_dec_ref(v_inst_550_);
v_var_595_ = lean_ctor_get(v_e_552_, 1);
lean_inc(v_var_595_);
lean_dec_ref_known(v_e_552_, 2);
v_fvarId_570_ = v_var_595_;
goto v___jp_569_;
}
case 7:
{
lean_object* v_var_596_; 
lean_dec_ref(v___f_558_);
lean_dec_ref(v___f_557_);
lean_dec_ref(v_inst_550_);
v_var_596_ = lean_ctor_get(v_e_552_, 1);
lean_inc(v_var_596_);
lean_dec_ref_known(v_e_552_, 2);
v_fvarId_570_ = v_var_596_;
goto v___jp_569_;
}
case 8:
{
lean_object* v_var_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
lean_dec_ref(v___f_558_);
lean_dec_ref(v___f_557_);
lean_dec_ref(v_inst_550_);
v_var_597_ = lean_ctor_get(v_e_552_, 2);
lean_inc(v_var_597_);
lean_dec_ref_known(v_e_552_, 3);
v___x_598_ = lean_apply_1(v_f_551_, v_var_597_);
v___x_599_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_598_, v___f_568_);
return v___x_599_;
}
case 9:
{
lean_object* v_args_600_; 
lean_dec_ref(v___f_568_);
lean_dec(v_f_551_);
v_args_600_ = lean_ctor_get(v_e_552_, 1);
lean_inc_ref(v_args_600_);
lean_dec_ref_known(v_e_552_, 2);
v_args_560_ = v_args_600_;
goto v___jp_559_;
}
case 10:
{
lean_object* v_args_601_; 
lean_dec_ref(v___f_568_);
lean_dec(v_f_551_);
v_args_601_ = lean_ctor_get(v_e_552_, 1);
lean_inc_ref(v_args_601_);
lean_dec_ref_known(v_e_552_, 2);
v_args_560_ = v_args_601_;
goto v___jp_559_;
}
case 11:
{
lean_object* v_n_602_; lean_object* v_var_603_; lean_object* v___f_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
lean_inc(v_toPure_555_);
lean_dec_ref(v___f_568_);
lean_dec_ref(v___f_558_);
lean_dec_ref(v___f_557_);
lean_dec_ref(v_inst_550_);
v_n_602_ = lean_ctor_get(v_e_552_, 0);
lean_inc(v_n_602_);
v_var_603_ = lean_ctor_get(v_e_552_, 1);
lean_inc(v_var_603_);
v___f_604_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__8), 4, 3);
lean_closure_set(v___f_604_, 0, v_e_552_);
lean_closure_set(v___f_604_, 1, v_n_602_);
lean_closure_set(v___f_604_, 2, v_toPure_555_);
v___x_605_ = lean_apply_1(v_f_551_, v_var_603_);
v___x_606_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_605_, v___f_604_);
return v___x_606_;
}
case 12:
{
lean_object* v_var_607_; lean_object* v_i_608_; uint8_t v_updateHeader_609_; lean_object* v_args_610_; lean_object* v___x_611_; lean_object* v___f_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
lean_inc(v_toPure_555_);
lean_dec_ref(v___f_568_);
lean_dec_ref(v___f_558_);
v_var_607_ = lean_ctor_get(v_e_552_, 0);
lean_inc(v_var_607_);
v_i_608_ = lean_ctor_get(v_e_552_, 1);
lean_inc_ref(v_i_608_);
v_updateHeader_609_ = lean_ctor_get_uint8(v_e_552_, sizeof(void*)*3);
v_args_610_ = lean_ctor_get(v_e_552_, 2);
lean_inc_ref(v_args_610_);
v___x_611_ = lean_box(v_updateHeader_609_);
lean_inc(v_toBind_554_);
v___f_612_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__4___boxed), 9, 8);
lean_closure_set(v___f_612_, 0, v_e_552_);
lean_closure_set(v___f_612_, 1, v_i_608_);
lean_closure_set(v___f_612_, 2, v___x_611_);
lean_closure_set(v___f_612_, 3, v_toPure_555_);
lean_closure_set(v___f_612_, 4, v_args_610_);
lean_closure_set(v___f_612_, 5, v_inst_550_);
lean_closure_set(v___f_612_, 6, v___f_557_);
lean_closure_set(v___f_612_, 7, v_toBind_554_);
v___x_613_ = lean_apply_1(v_f_551_, v_var_607_);
v___x_614_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_613_, v___f_612_);
return v___x_614_;
}
case 13:
{
lean_object* v_ty_615_; lean_object* v_fvarId_616_; lean_object* v___f_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
lean_inc(v_toPure_555_);
lean_dec_ref(v___f_568_);
lean_dec_ref(v___f_558_);
lean_dec_ref(v___f_557_);
lean_dec_ref(v_inst_550_);
v_ty_615_ = lean_ctor_get(v_e_552_, 0);
lean_inc_ref(v_ty_615_);
v_fvarId_616_ = lean_ctor_get(v_e_552_, 1);
lean_inc(v_fvarId_616_);
v___f_617_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__6), 4, 3);
lean_closure_set(v___f_617_, 0, v_e_552_);
lean_closure_set(v___f_617_, 1, v_ty_615_);
lean_closure_set(v___f_617_, 2, v_toPure_555_);
v___x_618_ = lean_apply_1(v_f_551_, v_fvarId_616_);
v___x_619_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_618_, v___f_617_);
return v___x_619_;
}
case 14:
{
lean_object* v_fvarId_620_; lean_object* v___f_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
lean_inc(v_toPure_555_);
lean_dec_ref(v___f_568_);
lean_dec_ref(v___f_558_);
lean_dec_ref(v___f_557_);
lean_dec_ref(v_inst_550_);
v_fvarId_620_ = lean_ctor_get(v_e_552_, 0);
lean_inc(v_fvarId_620_);
v___f_621_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__9), 3, 2);
lean_closure_set(v___f_621_, 0, v_e_552_);
lean_closure_set(v___f_621_, 1, v_toPure_555_);
v___x_622_ = lean_apply_1(v_f_551_, v_fvarId_620_);
v___x_623_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_622_, v___f_621_);
return v___x_623_;
}
case 15:
{
lean_object* v_fvarId_624_; lean_object* v___f_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
lean_inc(v_toPure_555_);
lean_dec_ref(v___f_568_);
lean_dec_ref(v___f_558_);
lean_dec_ref(v___f_557_);
lean_dec_ref(v_inst_550_);
v_fvarId_624_ = lean_ctor_get(v_e_552_, 0);
lean_inc(v_fvarId_624_);
v___f_625_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___lam__10), 3, 2);
lean_closure_set(v___f_625_, 0, v_e_552_);
lean_closure_set(v___f_625_, 1, v_toPure_555_);
v___x_626_ = lean_apply_1(v_f_551_, v_fvarId_624_);
v___x_627_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_626_, v___f_625_);
return v___x_627_;
}
default: 
{
lean_object* v___x_628_; 
lean_inc(v_toPure_555_);
lean_dec_ref(v___f_568_);
lean_dec_ref(v___f_558_);
lean_dec_ref(v___f_557_);
lean_dec(v_toBind_554_);
lean_dec(v_f_551_);
lean_dec_ref(v_inst_550_);
v___x_628_ = lean_apply_2(v_toPure_555_, lean_box(0), v_e_552_);
return v___x_628_;
}
}
v___jp_559_:
{
size_t v_sz_561_; size_t v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v_sz_561_ = lean_array_size(v_args_560_);
v___x_562_ = ((size_t)0ULL);
v___x_563_ = l_unsafeCast___redArg(v_args_560_);
lean_dec_ref(v_args_560_);
v___x_564_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_550_, v___f_557_, v_sz_561_, v___x_562_, v___x_563_);
v___x_565_ = l_unsafeCast___redArg(v___x_564_);
lean_dec(v___x_564_);
v___x_566_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_565_, v___f_558_);
return v___x_566_;
}
v___jp_569_:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = lean_apply_1(v_f_551_, v_fvarId_570_);
v___x_572_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v___x_571_, v___f_568_);
return v___x_572_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg___boxed(lean_object* v_pu_629_, lean_object* v_inst_630_, lean_object* v_f_631_, lean_object* v_e_632_){
_start:
{
uint8_t v_pu_boxed_633_; lean_object* v_res_634_; 
v_pu_boxed_633_ = lean_unbox(v_pu_629_);
v_res_634_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg(v_pu_boxed_633_, v_inst_630_, v_f_631_, v_e_632_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM(lean_object* v_m_635_, uint8_t v_pu_636_, lean_object* v_inst_637_, lean_object* v_inst_638_, lean_object* v_f_639_, lean_object* v_e_640_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg(v_pu_636_, v_inst_638_, v_f_639_, v_e_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___boxed(lean_object* v_m_642_, lean_object* v_pu_643_, lean_object* v_inst_644_, lean_object* v_inst_645_, lean_object* v_f_646_, lean_object* v_e_647_){
_start:
{
uint8_t v_pu_boxed_648_; lean_object* v_res_649_; 
v_pu_boxed_648_ = lean_unbox(v_pu_643_);
v_res_649_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM(v_m_642_, v_pu_boxed_648_, v_inst_644_, v_inst_645_, v_f_646_, v_e_647_);
lean_dec(v_inst_644_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg___lam__0(lean_object* v_inst_650_, lean_object* v_f_651_, lean_object* v_x_652_, lean_object* v___y_653_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l_Lean_Compiler_LCNF_Arg_forFVarM___redArg(v_inst_650_, v_f_651_, v___y_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg___lam__3(lean_object* v_args_655_, lean_object* v_toPure_656_, lean_object* v_inst_657_, lean_object* v___f_658_, lean_object* v_____r_659_){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; 
v___x_660_ = lean_unsigned_to_nat(0u);
v___x_661_ = lean_array_get_size(v_args_655_);
v___x_662_ = lean_box(0);
v___x_663_ = lean_nat_dec_lt(v___x_660_, v___x_661_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; 
lean_dec(v___f_658_);
lean_dec_ref(v_inst_657_);
lean_dec_ref(v_args_655_);
v___x_664_ = lean_apply_2(v_toPure_656_, lean_box(0), v___x_662_);
return v___x_664_;
}
else
{
uint8_t v___x_665_; 
v___x_665_ = lean_nat_dec_le(v___x_661_, v___x_661_);
if (v___x_665_ == 0)
{
if (v___x_663_ == 0)
{
lean_object* v___x_666_; 
lean_dec(v___f_658_);
lean_dec_ref(v_inst_657_);
lean_dec_ref(v_args_655_);
v___x_666_ = lean_apply_2(v_toPure_656_, lean_box(0), v___x_662_);
return v___x_666_;
}
else
{
size_t v___x_667_; size_t v___x_668_; lean_object* v___x_669_; 
lean_dec(v_toPure_656_);
v___x_667_ = ((size_t)0ULL);
v___x_668_ = lean_usize_of_nat(v___x_661_);
v___x_669_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_657_, v___f_658_, v_args_655_, v___x_667_, v___x_668_, v___x_662_);
return v___x_669_;
}
}
else
{
size_t v___x_670_; size_t v___x_671_; lean_object* v___x_672_; 
lean_dec(v_toPure_656_);
v___x_670_ = ((size_t)0ULL);
v___x_671_ = lean_usize_of_nat(v___x_661_);
v___x_672_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_657_, v___f_658_, v_args_655_, v___x_670_, v___x_671_, v___x_662_);
return v___x_672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg(lean_object* v_inst_673_, lean_object* v_f_674_, lean_object* v_e_675_){
_start:
{
lean_object* v_toApplicative_676_; lean_object* v_toBind_677_; lean_object* v_toPure_678_; lean_object* v___f_679_; lean_object* v_args_681_; 
v_toApplicative_676_ = lean_ctor_get(v_inst_673_, 0);
v_toBind_677_ = lean_ctor_get(v_inst_673_, 1);
v_toPure_678_ = lean_ctor_get(v_toApplicative_676_, 1);
lean_inc(v_f_674_);
lean_inc_ref(v_inst_673_);
v___f_679_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_679_, 0, v_inst_673_);
lean_closure_set(v___f_679_, 1, v_f_674_);
switch(lean_obj_tag(v_e_675_))
{
case 2:
{
lean_object* v_struct_695_; lean_object* v___x_696_; 
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v_struct_695_ = lean_ctor_get(v_e_675_, 2);
lean_inc(v_struct_695_);
lean_dec_ref_known(v_e_675_, 3);
v___x_696_ = lean_apply_1(v_f_674_, v_struct_695_);
return v___x_696_;
}
case 3:
{
lean_object* v_args_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
lean_dec(v_f_674_);
v_args_697_ = lean_ctor_get(v_e_675_, 2);
lean_inc_ref(v_args_697_);
lean_dec_ref_known(v_e_675_, 3);
v___x_698_ = lean_unsigned_to_nat(0u);
v___x_699_ = lean_array_get_size(v_args_697_);
v___x_700_ = lean_box(0);
v___x_701_ = lean_nat_dec_lt(v___x_698_, v___x_699_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; 
lean_inc(v_toPure_678_);
lean_dec_ref(v_args_697_);
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v___x_702_ = lean_apply_2(v_toPure_678_, lean_box(0), v___x_700_);
return v___x_702_;
}
else
{
uint8_t v___x_703_; 
v___x_703_ = lean_nat_dec_le(v___x_699_, v___x_699_);
if (v___x_703_ == 0)
{
if (v___x_701_ == 0)
{
lean_object* v___x_704_; 
lean_inc(v_toPure_678_);
lean_dec_ref(v_args_697_);
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v___x_704_ = lean_apply_2(v_toPure_678_, lean_box(0), v___x_700_);
return v___x_704_;
}
else
{
size_t v___x_705_; size_t v___x_706_; lean_object* v___x_707_; 
v___x_705_ = ((size_t)0ULL);
v___x_706_ = lean_usize_of_nat(v___x_699_);
v___x_707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_673_, v___f_679_, v_args_697_, v___x_705_, v___x_706_, v___x_700_);
return v___x_707_;
}
}
else
{
size_t v___x_708_; size_t v___x_709_; lean_object* v___x_710_; 
v___x_708_ = ((size_t)0ULL);
v___x_709_ = lean_usize_of_nat(v___x_699_);
v___x_710_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_673_, v___f_679_, v_args_697_, v___x_708_, v___x_709_, v___x_700_);
return v___x_710_;
}
}
}
case 4:
{
lean_object* v_fvarId_711_; lean_object* v_args_712_; lean_object* v___f_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
lean_inc(v_toPure_678_);
lean_inc(v_toBind_677_);
v_fvarId_711_ = lean_ctor_get(v_e_675_, 0);
lean_inc(v_fvarId_711_);
v_args_712_ = lean_ctor_get(v_e_675_, 1);
lean_inc_ref(v_args_712_);
lean_dec_ref_known(v_e_675_, 2);
v___f_713_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg___lam__3), 5, 4);
lean_closure_set(v___f_713_, 0, v_args_712_);
lean_closure_set(v___f_713_, 1, v_toPure_678_);
lean_closure_set(v___f_713_, 2, v_inst_673_);
lean_closure_set(v___f_713_, 3, v___f_679_);
v___x_714_ = lean_apply_1(v_f_674_, v_fvarId_711_);
v___x_715_ = lean_apply_4(v_toBind_677_, lean_box(0), lean_box(0), v___x_714_, v___f_713_);
return v___x_715_;
}
case 5:
{
lean_object* v_args_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; uint8_t v___x_720_; 
lean_dec(v_f_674_);
v_args_716_ = lean_ctor_get(v_e_675_, 1);
lean_inc_ref(v_args_716_);
lean_dec_ref_known(v_e_675_, 2);
v___x_717_ = lean_unsigned_to_nat(0u);
v___x_718_ = lean_array_get_size(v_args_716_);
v___x_719_ = lean_box(0);
v___x_720_ = lean_nat_dec_lt(v___x_717_, v___x_718_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; 
lean_inc(v_toPure_678_);
lean_dec_ref(v_args_716_);
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v___x_721_ = lean_apply_2(v_toPure_678_, lean_box(0), v___x_719_);
return v___x_721_;
}
else
{
uint8_t v___x_722_; 
v___x_722_ = lean_nat_dec_le(v___x_718_, v___x_718_);
if (v___x_722_ == 0)
{
if (v___x_720_ == 0)
{
lean_object* v___x_723_; 
lean_inc(v_toPure_678_);
lean_dec_ref(v_args_716_);
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v___x_723_ = lean_apply_2(v_toPure_678_, lean_box(0), v___x_719_);
return v___x_723_;
}
else
{
size_t v___x_724_; size_t v___x_725_; lean_object* v___x_726_; 
v___x_724_ = ((size_t)0ULL);
v___x_725_ = lean_usize_of_nat(v___x_718_);
v___x_726_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_673_, v___f_679_, v_args_716_, v___x_724_, v___x_725_, v___x_719_);
return v___x_726_;
}
}
else
{
size_t v___x_727_; size_t v___x_728_; lean_object* v___x_729_; 
v___x_727_ = ((size_t)0ULL);
v___x_728_ = lean_usize_of_nat(v___x_718_);
v___x_729_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_673_, v___f_679_, v_args_716_, v___x_727_, v___x_728_, v___x_719_);
return v___x_729_;
}
}
}
case 6:
{
lean_object* v_var_730_; lean_object* v___x_731_; 
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v_var_730_ = lean_ctor_get(v_e_675_, 1);
lean_inc(v_var_730_);
lean_dec_ref_known(v_e_675_, 2);
v___x_731_ = lean_apply_1(v_f_674_, v_var_730_);
return v___x_731_;
}
case 7:
{
lean_object* v_var_732_; lean_object* v___x_733_; 
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v_var_732_ = lean_ctor_get(v_e_675_, 1);
lean_inc(v_var_732_);
lean_dec_ref_known(v_e_675_, 2);
v___x_733_ = lean_apply_1(v_f_674_, v_var_732_);
return v___x_733_;
}
case 8:
{
lean_object* v_var_734_; lean_object* v___x_735_; 
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v_var_734_ = lean_ctor_get(v_e_675_, 2);
lean_inc(v_var_734_);
lean_dec_ref_known(v_e_675_, 3);
v___x_735_ = lean_apply_1(v_f_674_, v_var_734_);
return v___x_735_;
}
case 9:
{
lean_object* v_args_736_; 
lean_dec(v_f_674_);
v_args_736_ = lean_ctor_get(v_e_675_, 1);
lean_inc_ref(v_args_736_);
lean_dec_ref_known(v_e_675_, 2);
v_args_681_ = v_args_736_;
goto v___jp_680_;
}
case 10:
{
lean_object* v_args_737_; 
lean_dec(v_f_674_);
v_args_737_ = lean_ctor_get(v_e_675_, 1);
lean_inc_ref(v_args_737_);
lean_dec_ref_known(v_e_675_, 2);
v_args_681_ = v_args_737_;
goto v___jp_680_;
}
case 11:
{
lean_object* v_var_738_; lean_object* v___x_739_; 
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v_var_738_ = lean_ctor_get(v_e_675_, 1);
lean_inc(v_var_738_);
lean_dec_ref_known(v_e_675_, 2);
v___x_739_ = lean_apply_1(v_f_674_, v_var_738_);
return v___x_739_;
}
case 12:
{
lean_object* v_var_740_; lean_object* v_args_741_; lean_object* v___f_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
lean_inc(v_toPure_678_);
lean_inc(v_toBind_677_);
v_var_740_ = lean_ctor_get(v_e_675_, 0);
lean_inc(v_var_740_);
v_args_741_ = lean_ctor_get(v_e_675_, 2);
lean_inc_ref(v_args_741_);
lean_dec_ref_known(v_e_675_, 3);
v___f_742_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg___lam__3), 5, 4);
lean_closure_set(v___f_742_, 0, v_args_741_);
lean_closure_set(v___f_742_, 1, v_toPure_678_);
lean_closure_set(v___f_742_, 2, v_inst_673_);
lean_closure_set(v___f_742_, 3, v___f_679_);
v___x_743_ = lean_apply_1(v_f_674_, v_var_740_);
v___x_744_ = lean_apply_4(v_toBind_677_, lean_box(0), lean_box(0), v___x_743_, v___f_742_);
return v___x_744_;
}
case 13:
{
lean_object* v_fvarId_745_; lean_object* v___x_746_; 
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v_fvarId_745_ = lean_ctor_get(v_e_675_, 1);
lean_inc(v_fvarId_745_);
lean_dec_ref_known(v_e_675_, 2);
v___x_746_ = lean_apply_1(v_f_674_, v_fvarId_745_);
return v___x_746_;
}
case 14:
{
lean_object* v_fvarId_747_; lean_object* v___x_748_; 
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v_fvarId_747_ = lean_ctor_get(v_e_675_, 0);
lean_inc(v_fvarId_747_);
lean_dec_ref_known(v_e_675_, 1);
v___x_748_ = lean_apply_1(v_f_674_, v_fvarId_747_);
return v___x_748_;
}
case 15:
{
lean_object* v_fvarId_749_; lean_object* v___x_750_; 
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v_fvarId_749_ = lean_ctor_get(v_e_675_, 0);
lean_inc(v_fvarId_749_);
lean_dec_ref_known(v_e_675_, 1);
v___x_750_ = lean_apply_1(v_f_674_, v_fvarId_749_);
return v___x_750_;
}
default: 
{
lean_object* v___x_751_; lean_object* v___x_752_; 
lean_inc(v_toPure_678_);
lean_dec_ref(v___f_679_);
lean_dec(v_e_675_);
lean_dec(v_f_674_);
lean_dec_ref(v_inst_673_);
v___x_751_ = lean_box(0);
v___x_752_ = lean_apply_2(v_toPure_678_, lean_box(0), v___x_751_);
return v___x_752_;
}
}
v___jp_680_:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; uint8_t v___x_685_; 
v___x_682_ = lean_unsigned_to_nat(0u);
v___x_683_ = lean_array_get_size(v_args_681_);
v___x_684_ = lean_box(0);
v___x_685_ = lean_nat_dec_lt(v___x_682_, v___x_683_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; 
lean_inc(v_toPure_678_);
lean_dec_ref(v_args_681_);
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v___x_686_ = lean_apply_2(v_toPure_678_, lean_box(0), v___x_684_);
return v___x_686_;
}
else
{
uint8_t v___x_687_; 
v___x_687_ = lean_nat_dec_le(v___x_683_, v___x_683_);
if (v___x_687_ == 0)
{
if (v___x_685_ == 0)
{
lean_object* v___x_688_; 
lean_inc(v_toPure_678_);
lean_dec_ref(v_args_681_);
lean_dec_ref(v___f_679_);
lean_dec_ref(v_inst_673_);
v___x_688_ = lean_apply_2(v_toPure_678_, lean_box(0), v___x_684_);
return v___x_688_;
}
else
{
size_t v___x_689_; size_t v___x_690_; lean_object* v___x_691_; 
v___x_689_ = ((size_t)0ULL);
v___x_690_ = lean_usize_of_nat(v___x_683_);
v___x_691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_673_, v___f_679_, v_args_681_, v___x_689_, v___x_690_, v___x_684_);
return v___x_691_;
}
}
else
{
size_t v___x_692_; size_t v___x_693_; lean_object* v___x_694_; 
v___x_692_ = ((size_t)0ULL);
v___x_693_ = lean_usize_of_nat(v___x_683_);
v___x_694_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_673_, v___f_679_, v_args_681_, v___x_692_, v___x_693_, v___x_684_);
return v___x_694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM(lean_object* v_m_753_, uint8_t v_pu_754_, lean_object* v_inst_755_, lean_object* v_f_756_, lean_object* v_e_757_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg(v_inst_755_, v_f_756_, v_e_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___boxed(lean_object* v_m_759_, lean_object* v_pu_760_, lean_object* v_inst_761_, lean_object* v_f_762_, lean_object* v_e_763_){
_start:
{
uint8_t v_pu_boxed_764_; lean_object* v_res_765_; 
v_pu_boxed_764_ = lean_unbox(v_pu_760_);
v_res_765_ = l_Lean_Compiler_LCNF_LetValue_forFVarM(v_m_759_, v_pu_boxed_764_, v_inst_761_, v_f_762_, v_e_763_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetValue___lam__0(uint8_t v_pu_766_, lean_object* v_m_767_, lean_object* v_inst_768_, lean_object* v_inst_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg(v_pu_766_, v_inst_769_, v___y_770_, v___y_771_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetValue___lam__0___boxed(lean_object* v_pu_773_, lean_object* v_m_774_, lean_object* v_inst_775_, lean_object* v_inst_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
uint8_t v_pu_boxed_779_; lean_object* v_res_780_; 
v_pu_boxed_779_ = lean_unbox(v_pu_773_);
v_res_780_ = l_Lean_Compiler_LCNF_instTraverseFVarLetValue___lam__0(v_pu_boxed_779_, v_m_774_, v_inst_775_, v_inst_776_, v___y_777_, v___y_778_);
lean_dec(v_inst_775_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetValue___lam__1(lean_object* v_m_781_, lean_object* v_inst_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg(v_inst_782_, v___y_783_, v___y_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetValue(uint8_t v_pu_787_){
_start:
{
lean_object* v___x_788_; lean_object* v___f_789_; lean_object* v___f_790_; lean_object* v___x_791_; 
v___x_788_ = lean_box(v_pu_787_);
v___f_789_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarLetValue___lam__0___boxed), 6, 1);
lean_closure_set(v___f_789_, 0, v___x_788_);
v___f_790_ = ((lean_object*)(l_Lean_Compiler_LCNF_instTraverseFVarLetValue___closed__0));
v___x_791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_791_, 0, v___f_789_);
lean_ctor_set(v___x_791_, 1, v___f_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetValue___boxed(lean_object* v_pu_792_){
_start:
{
uint8_t v_pu_boxed_793_; lean_object* v_res_794_; 
v_pu_boxed_793_ = lean_unbox(v_pu_792_);
v_res_794_ = l_Lean_Compiler_LCNF_instTraverseFVarLetValue(v_pu_boxed_793_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__0(uint8_t v_pu_795_, lean_object* v_decl_796_, lean_object* v_____do__lift_797_, lean_object* v_inst_798_, lean_object* v_____do__lift_799_){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_800_ = lean_box(v_pu_795_);
v___x_801_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___boxed), 9, 4);
lean_closure_set(v___x_801_, 0, v___x_800_);
lean_closure_set(v___x_801_, 1, v_decl_796_);
lean_closure_set(v___x_801_, 2, v_____do__lift_797_);
lean_closure_set(v___x_801_, 3, v_____do__lift_799_);
v___x_802_ = lean_apply_2(v_inst_798_, lean_box(0), v___x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__0___boxed(lean_object* v_pu_803_, lean_object* v_decl_804_, lean_object* v_____do__lift_805_, lean_object* v_inst_806_, lean_object* v_____do__lift_807_){
_start:
{
uint8_t v_pu_boxed_808_; lean_object* v_res_809_; 
v_pu_boxed_808_ = lean_unbox(v_pu_803_);
v_res_809_ = l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__0(v_pu_boxed_808_, v_decl_804_, v_____do__lift_805_, v_inst_806_, v_____do__lift_807_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__1(uint8_t v_pu_810_, lean_object* v_decl_811_, lean_object* v_inst_812_, lean_object* v_inst_813_, lean_object* v_f_814_, lean_object* v_value_815_, lean_object* v_toBind_816_, lean_object* v_____do__lift_817_){
_start:
{
lean_object* v___x_818_; lean_object* v___f_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_818_ = lean_box(v_pu_810_);
v___f_819_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_819_, 0, v___x_818_);
lean_closure_set(v___f_819_, 1, v_decl_811_);
lean_closure_set(v___f_819_, 2, v_____do__lift_817_);
lean_closure_set(v___f_819_, 3, v_inst_812_);
v___x_820_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___redArg(v_pu_810_, v_inst_813_, v_f_814_, v_value_815_);
v___x_821_ = lean_apply_4(v_toBind_816_, lean_box(0), lean_box(0), v___x_820_, v___f_819_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__1___boxed(lean_object* v_pu_822_, lean_object* v_decl_823_, lean_object* v_inst_824_, lean_object* v_inst_825_, lean_object* v_f_826_, lean_object* v_value_827_, lean_object* v_toBind_828_, lean_object* v_____do__lift_829_){
_start:
{
uint8_t v_pu_boxed_830_; lean_object* v_res_831_; 
v_pu_boxed_830_ = lean_unbox(v_pu_822_);
v_res_831_ = l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__1(v_pu_boxed_830_, v_decl_823_, v_inst_824_, v_inst_825_, v_f_826_, v_value_827_, v_toBind_828_, v_____do__lift_829_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg(uint8_t v_pu_832_, lean_object* v_inst_833_, lean_object* v_inst_834_, lean_object* v_f_835_, lean_object* v_decl_836_){
_start:
{
lean_object* v_toBind_837_; lean_object* v_type_838_; lean_object* v_value_839_; lean_object* v___x_840_; lean_object* v___f_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v_toBind_837_ = lean_ctor_get(v_inst_834_, 1);
lean_inc_n(v_toBind_837_, 2);
v_type_838_ = lean_ctor_get(v_decl_836_, 2);
lean_inc_ref(v_type_838_);
v_value_839_ = lean_ctor_get(v_decl_836_, 3);
lean_inc(v_value_839_);
v___x_840_ = lean_box(v_pu_832_);
lean_inc(v_f_835_);
lean_inc_ref(v_inst_834_);
v___f_841_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_841_, 0, v___x_840_);
lean_closure_set(v___f_841_, 1, v_decl_836_);
lean_closure_set(v___f_841_, 2, v_inst_833_);
lean_closure_set(v___f_841_, 3, v_inst_834_);
lean_closure_set(v___f_841_, 4, v_f_835_);
lean_closure_set(v___f_841_, 5, v_value_839_);
lean_closure_set(v___f_841_, 6, v_toBind_837_);
v___x_842_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_834_, v_f_835_, v_type_838_);
v___x_843_ = lean_apply_4(v_toBind_837_, lean_box(0), lean_box(0), v___x_842_, v___f_841_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg___boxed(lean_object* v_pu_844_, lean_object* v_inst_845_, lean_object* v_inst_846_, lean_object* v_f_847_, lean_object* v_decl_848_){
_start:
{
uint8_t v_pu_boxed_849_; lean_object* v_res_850_; 
v_pu_boxed_849_ = lean_unbox(v_pu_844_);
v_res_850_ = l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg(v_pu_boxed_849_, v_inst_845_, v_inst_846_, v_f_847_, v_decl_848_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM(lean_object* v_m_851_, uint8_t v_pu_852_, lean_object* v_inst_853_, lean_object* v_inst_854_, lean_object* v_f_855_, lean_object* v_decl_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg(v_pu_852_, v_inst_853_, v_inst_854_, v_f_855_, v_decl_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_mapFVarM___boxed(lean_object* v_m_858_, lean_object* v_pu_859_, lean_object* v_inst_860_, lean_object* v_inst_861_, lean_object* v_f_862_, lean_object* v_decl_863_){
_start:
{
uint8_t v_pu_boxed_864_; lean_object* v_res_865_; 
v_pu_boxed_864_ = lean_unbox(v_pu_859_);
v_res_865_ = l_Lean_Compiler_LCNF_LetDecl_mapFVarM(v_m_858_, v_pu_boxed_864_, v_inst_860_, v_inst_861_, v_f_862_, v_decl_863_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___redArg___lam__0(lean_object* v_inst_866_, lean_object* v_f_867_, lean_object* v_value_868_, lean_object* v_____r_869_){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___redArg(v_inst_866_, v_f_867_, v_value_868_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___redArg(lean_object* v_inst_871_, lean_object* v_f_872_, lean_object* v_decl_873_){
_start:
{
lean_object* v_toBind_874_; lean_object* v_type_875_; lean_object* v_value_876_; lean_object* v___f_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v_toBind_874_ = lean_ctor_get(v_inst_871_, 1);
lean_inc(v_toBind_874_);
v_type_875_ = lean_ctor_get(v_decl_873_, 2);
lean_inc_ref(v_type_875_);
v_value_876_ = lean_ctor_get(v_decl_873_, 3);
lean_inc(v_value_876_);
lean_dec_ref(v_decl_873_);
lean_inc(v_f_872_);
lean_inc_ref(v_inst_871_);
v___f_877_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_LetDecl_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_877_, 0, v_inst_871_);
lean_closure_set(v___f_877_, 1, v_f_872_);
lean_closure_set(v___f_877_, 2, v_value_876_);
v___x_878_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_871_, v_f_872_, v_type_875_);
v___x_879_ = lean_apply_4(v_toBind_874_, lean_box(0), lean_box(0), v___x_878_, v___f_877_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM(lean_object* v_m_880_, uint8_t v_pu_881_, lean_object* v_inst_882_, lean_object* v_f_883_, lean_object* v_decl_884_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___redArg(v_inst_882_, v_f_883_, v_decl_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_forFVarM___boxed(lean_object* v_m_886_, lean_object* v_pu_887_, lean_object* v_inst_888_, lean_object* v_f_889_, lean_object* v_decl_890_){
_start:
{
uint8_t v_pu_boxed_891_; lean_object* v_res_892_; 
v_pu_boxed_891_ = lean_unbox(v_pu_887_);
v_res_892_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM(v_m_886_, v_pu_boxed_891_, v_inst_888_, v_f_889_, v_decl_890_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___lam__0(uint8_t v_pu_893_, lean_object* v_m_894_, lean_object* v_inst_895_, lean_object* v_inst_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg(v_pu_893_, v_inst_895_, v_inst_896_, v___y_897_, v___y_898_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___lam__0___boxed(lean_object* v_pu_900_, lean_object* v_m_901_, lean_object* v_inst_902_, lean_object* v_inst_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
uint8_t v_pu_boxed_906_; lean_object* v_res_907_; 
v_pu_boxed_906_ = lean_unbox(v_pu_900_);
v_res_907_ = l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___lam__0(v_pu_boxed_906_, v_m_901_, v_inst_902_, v_inst_903_, v___y_904_, v___y_905_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___lam__1(lean_object* v_m_908_, lean_object* v_inst_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v___x_912_; 
v___x_912_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___redArg(v_inst_909_, v___y_910_, v___y_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetDecl(uint8_t v_pu_914_){
_start:
{
lean_object* v___x_915_; lean_object* v___f_916_; lean_object* v___f_917_; lean_object* v___x_918_; 
v___x_915_ = lean_box(v_pu_914_);
v___f_916_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___lam__0___boxed), 6, 1);
lean_closure_set(v___f_916_, 0, v___x_915_);
v___f_917_ = ((lean_object*)(l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___closed__0));
v___x_918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_918_, 0, v___f_916_);
lean_ctor_set(v___x_918_, 1, v___f_917_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarLetDecl___boxed(lean_object* v_pu_919_){
_start:
{
uint8_t v_pu_boxed_920_; lean_object* v_res_921_; 
v_pu_boxed_920_ = lean_unbox(v_pu_919_);
v_res_921_ = l_Lean_Compiler_LCNF_instTraverseFVarLetDecl(v_pu_boxed_920_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM___redArg___lam__0(uint8_t v_pu_922_, lean_object* v_param_923_, lean_object* v_inst_924_, lean_object* v_____do__lift_925_){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_926_ = lean_box(v_pu_922_);
v___x_927_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___boxed), 8, 3);
lean_closure_set(v___x_927_, 0, v___x_926_);
lean_closure_set(v___x_927_, 1, v_param_923_);
lean_closure_set(v___x_927_, 2, v_____do__lift_925_);
v___x_928_ = lean_apply_2(v_inst_924_, lean_box(0), v___x_927_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM___redArg___lam__0___boxed(lean_object* v_pu_929_, lean_object* v_param_930_, lean_object* v_inst_931_, lean_object* v_____do__lift_932_){
_start:
{
uint8_t v_pu_boxed_933_; lean_object* v_res_934_; 
v_pu_boxed_933_ = lean_unbox(v_pu_929_);
v_res_934_ = l_Lean_Compiler_LCNF_Param_mapFVarM___redArg___lam__0(v_pu_boxed_933_, v_param_930_, v_inst_931_, v_____do__lift_932_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM___redArg(uint8_t v_pu_935_, lean_object* v_inst_936_, lean_object* v_inst_937_, lean_object* v_f_938_, lean_object* v_param_939_){
_start:
{
lean_object* v_toBind_940_; lean_object* v_type_941_; lean_object* v___x_942_; lean_object* v___f_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v_toBind_940_ = lean_ctor_get(v_inst_937_, 1);
lean_inc(v_toBind_940_);
v_type_941_ = lean_ctor_get(v_param_939_, 2);
lean_inc_ref(v_type_941_);
v___x_942_ = lean_box(v_pu_935_);
v___f_943_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Param_mapFVarM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_943_, 0, v___x_942_);
lean_closure_set(v___f_943_, 1, v_param_939_);
lean_closure_set(v___f_943_, 2, v_inst_936_);
v___x_944_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_937_, v_f_938_, v_type_941_);
v___x_945_ = lean_apply_4(v_toBind_940_, lean_box(0), lean_box(0), v___x_944_, v___f_943_);
return v___x_945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM___redArg___boxed(lean_object* v_pu_946_, lean_object* v_inst_947_, lean_object* v_inst_948_, lean_object* v_f_949_, lean_object* v_param_950_){
_start:
{
uint8_t v_pu_boxed_951_; lean_object* v_res_952_; 
v_pu_boxed_951_ = lean_unbox(v_pu_946_);
v_res_952_ = l_Lean_Compiler_LCNF_Param_mapFVarM___redArg(v_pu_boxed_951_, v_inst_947_, v_inst_948_, v_f_949_, v_param_950_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM(lean_object* v_m_953_, uint8_t v_pu_954_, lean_object* v_inst_955_, lean_object* v_inst_956_, lean_object* v_f_957_, lean_object* v_param_958_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = l_Lean_Compiler_LCNF_Param_mapFVarM___redArg(v_pu_954_, v_inst_955_, v_inst_956_, v_f_957_, v_param_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_mapFVarM___boxed(lean_object* v_m_960_, lean_object* v_pu_961_, lean_object* v_inst_962_, lean_object* v_inst_963_, lean_object* v_f_964_, lean_object* v_param_965_){
_start:
{
uint8_t v_pu_boxed_966_; lean_object* v_res_967_; 
v_pu_boxed_966_ = lean_unbox(v_pu_961_);
v_res_967_ = l_Lean_Compiler_LCNF_Param_mapFVarM(v_m_960_, v_pu_boxed_966_, v_inst_962_, v_inst_963_, v_f_964_, v_param_965_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___redArg(lean_object* v_inst_968_, lean_object* v_f_969_, lean_object* v_param_970_){
_start:
{
lean_object* v_type_971_; lean_object* v___x_972_; 
v_type_971_ = lean_ctor_get(v_param_970_, 2);
lean_inc_ref(v_type_971_);
lean_dec_ref(v_param_970_);
v___x_972_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_968_, v_f_969_, v_type_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM(lean_object* v_m_973_, uint8_t v_pu_974_, lean_object* v_inst_975_, lean_object* v_f_976_, lean_object* v_param_977_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = l_Lean_Compiler_LCNF_Param_forFVarM___redArg(v_inst_975_, v_f_976_, v_param_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_forFVarM___boxed(lean_object* v_m_979_, lean_object* v_pu_980_, lean_object* v_inst_981_, lean_object* v_f_982_, lean_object* v_param_983_){
_start:
{
uint8_t v_pu_boxed_984_; lean_object* v_res_985_; 
v_pu_boxed_984_ = lean_unbox(v_pu_980_);
v_res_985_ = l_Lean_Compiler_LCNF_Param_forFVarM(v_m_979_, v_pu_boxed_984_, v_inst_981_, v_f_982_, v_param_983_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarParam___lam__0(uint8_t v_pu_986_, lean_object* v_m_987_, lean_object* v_inst_988_, lean_object* v_inst_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v___x_992_; 
v___x_992_ = l_Lean_Compiler_LCNF_Param_mapFVarM___redArg(v_pu_986_, v_inst_988_, v_inst_989_, v___y_990_, v___y_991_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarParam___lam__0___boxed(lean_object* v_pu_993_, lean_object* v_m_994_, lean_object* v_inst_995_, lean_object* v_inst_996_, lean_object* v___y_997_, lean_object* v___y_998_){
_start:
{
uint8_t v_pu_boxed_999_; lean_object* v_res_1000_; 
v_pu_boxed_999_ = lean_unbox(v_pu_993_);
v_res_1000_ = l_Lean_Compiler_LCNF_instTraverseFVarParam___lam__0(v_pu_boxed_999_, v_m_994_, v_inst_995_, v_inst_996_, v___y_997_, v___y_998_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarParam___lam__1(lean_object* v_m_1001_, lean_object* v_inst_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = l_Lean_Compiler_LCNF_Param_forFVarM___redArg(v_inst_1002_, v___y_1003_, v___y_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarParam(uint8_t v_pu_1007_){
_start:
{
lean_object* v___x_1008_; lean_object* v___f_1009_; lean_object* v___f_1010_; lean_object* v___x_1011_; 
v___x_1008_ = lean_box(v_pu_1007_);
v___f_1009_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarParam___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1009_, 0, v___x_1008_);
v___f_1010_ = ((lean_object*)(l_Lean_Compiler_LCNF_instTraverseFVarParam___closed__0));
v___x_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___f_1009_);
lean_ctor_set(v___x_1011_, 1, v___f_1010_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarParam___boxed(lean_object* v_pu_1012_){
_start:
{
uint8_t v_pu_boxed_1013_; lean_object* v_res_1014_; 
v_pu_boxed_1013_ = lean_unbox(v_pu_1012_);
v_res_1014_ = l_Lean_Compiler_LCNF_instTraverseFVarParam(v_pu_boxed_1013_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__0(lean_object* v_k_1015_, lean_object* v_decl_1016_, lean_object* v_toPure_1017_, lean_object* v_decl_1018_, lean_object* v_c_1019_, lean_object* v_____do__lift_1020_){
_start:
{
size_t v___x_1021_; size_t v___x_1022_; uint8_t v___x_1023_; 
v___x_1021_ = lean_ptr_addr(v_k_1015_);
v___x_1022_ = lean_ptr_addr(v_____do__lift_1020_);
v___x_1023_ = lean_usize_dec_eq(v___x_1021_, v___x_1022_);
if (v___x_1023_ == 0)
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
lean_dec_ref(v_c_1019_);
v___x_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1024_, 0, v_decl_1016_);
lean_ctor_set(v___x_1024_, 1, v_____do__lift_1020_);
v___x_1025_ = lean_apply_2(v_toPure_1017_, lean_box(0), v___x_1024_);
return v___x_1025_;
}
else
{
size_t v___x_1026_; size_t v___x_1027_; uint8_t v___x_1028_; 
v___x_1026_ = lean_ptr_addr(v_decl_1018_);
v___x_1027_ = lean_ptr_addr(v_decl_1016_);
v___x_1028_ = lean_usize_dec_eq(v___x_1026_, v___x_1027_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
lean_dec_ref(v_c_1019_);
v___x_1029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1029_, 0, v_decl_1016_);
lean_ctor_set(v___x_1029_, 1, v_____do__lift_1020_);
v___x_1030_ = lean_apply_2(v_toPure_1017_, lean_box(0), v___x_1029_);
return v___x_1030_;
}
else
{
lean_object* v___x_1031_; 
lean_dec_ref(v_____do__lift_1020_);
lean_dec_ref(v_decl_1016_);
v___x_1031_ = lean_apply_2(v_toPure_1017_, lean_box(0), v_c_1019_);
return v___x_1031_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__0___boxed(lean_object* v_k_1032_, lean_object* v_decl_1033_, lean_object* v_toPure_1034_, lean_object* v_decl_1035_, lean_object* v_c_1036_, lean_object* v_____do__lift_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__0(v_k_1032_, v_decl_1033_, v_toPure_1034_, v_decl_1035_, v_c_1036_, v_____do__lift_1037_);
lean_dec_ref(v_decl_1035_);
lean_dec_ref(v_k_1032_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__17(lean_object* v_fvarId_1039_, lean_object* v_____do__lift_1040_, lean_object* v_i_1041_, lean_object* v_____do__lift_1042_, lean_object* v_toPure_1043_, lean_object* v_y_1044_, lean_object* v_k_1045_, lean_object* v_c_1046_, lean_object* v_____do__lift_1047_){
_start:
{
size_t v___x_1048_; size_t v___x_1049_; uint8_t v___x_1050_; 
v___x_1048_ = lean_ptr_addr(v_fvarId_1039_);
v___x_1049_ = lean_ptr_addr(v_____do__lift_1040_);
v___x_1050_ = lean_usize_dec_eq(v___x_1048_, v___x_1049_);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
lean_dec_ref(v_c_1046_);
v___x_1051_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v___x_1051_, 0, v_____do__lift_1040_);
lean_ctor_set(v___x_1051_, 1, v_i_1041_);
lean_ctor_set(v___x_1051_, 2, v_____do__lift_1042_);
lean_ctor_set(v___x_1051_, 3, v_____do__lift_1047_);
v___x_1052_ = lean_apply_2(v_toPure_1043_, lean_box(0), v___x_1051_);
return v___x_1052_;
}
else
{
uint8_t v___x_1053_; 
v___x_1053_ = lean_nat_dec_eq(v_i_1041_, v_i_1041_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
lean_dec_ref(v_c_1046_);
v___x_1054_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v___x_1054_, 0, v_____do__lift_1040_);
lean_ctor_set(v___x_1054_, 1, v_i_1041_);
lean_ctor_set(v___x_1054_, 2, v_____do__lift_1042_);
lean_ctor_set(v___x_1054_, 3, v_____do__lift_1047_);
v___x_1055_ = lean_apply_2(v_toPure_1043_, lean_box(0), v___x_1054_);
return v___x_1055_;
}
else
{
size_t v___x_1056_; size_t v___x_1057_; uint8_t v___x_1058_; 
v___x_1056_ = lean_ptr_addr(v_y_1044_);
v___x_1057_ = lean_ptr_addr(v_____do__lift_1042_);
v___x_1058_ = lean_usize_dec_eq(v___x_1056_, v___x_1057_);
if (v___x_1058_ == 0)
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
lean_dec_ref(v_c_1046_);
v___x_1059_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v___x_1059_, 0, v_____do__lift_1040_);
lean_ctor_set(v___x_1059_, 1, v_i_1041_);
lean_ctor_set(v___x_1059_, 2, v_____do__lift_1042_);
lean_ctor_set(v___x_1059_, 3, v_____do__lift_1047_);
v___x_1060_ = lean_apply_2(v_toPure_1043_, lean_box(0), v___x_1059_);
return v___x_1060_;
}
else
{
size_t v___x_1061_; size_t v___x_1062_; uint8_t v___x_1063_; 
v___x_1061_ = lean_ptr_addr(v_k_1045_);
v___x_1062_ = lean_ptr_addr(v_____do__lift_1047_);
v___x_1063_ = lean_usize_dec_eq(v___x_1061_, v___x_1062_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
lean_dec_ref(v_c_1046_);
v___x_1064_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v___x_1064_, 0, v_____do__lift_1040_);
lean_ctor_set(v___x_1064_, 1, v_i_1041_);
lean_ctor_set(v___x_1064_, 2, v_____do__lift_1042_);
lean_ctor_set(v___x_1064_, 3, v_____do__lift_1047_);
v___x_1065_ = lean_apply_2(v_toPure_1043_, lean_box(0), v___x_1064_);
return v___x_1065_;
}
else
{
lean_object* v___x_1066_; 
lean_dec_ref(v_____do__lift_1047_);
lean_dec(v_____do__lift_1042_);
lean_dec(v_i_1041_);
lean_dec(v_____do__lift_1040_);
v___x_1066_ = lean_apply_2(v_toPure_1043_, lean_box(0), v_c_1046_);
return v___x_1066_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__17___boxed(lean_object* v_fvarId_1067_, lean_object* v_____do__lift_1068_, lean_object* v_i_1069_, lean_object* v_____do__lift_1070_, lean_object* v_toPure_1071_, lean_object* v_y_1072_, lean_object* v_k_1073_, lean_object* v_c_1074_, lean_object* v_____do__lift_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__17(v_fvarId_1067_, v_____do__lift_1068_, v_i_1069_, v_____do__lift_1070_, v_toPure_1071_, v_y_1072_, v_k_1073_, v_c_1074_, v_____do__lift_1075_);
lean_dec_ref(v_k_1073_);
lean_dec(v_y_1072_);
lean_dec(v_fvarId_1067_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__15(lean_object* v_fvarId_1077_, lean_object* v_toPure_1078_, lean_object* v_c_1079_, lean_object* v_____do__lift_1080_){
_start:
{
uint8_t v___x_1081_; 
v___x_1081_ = l_Lean_instBEqFVarId_beq(v_fvarId_1077_, v_____do__lift_1080_);
if (v___x_1081_ == 0)
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
lean_dec_ref(v_c_1079_);
v___x_1082_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1082_, 0, v_____do__lift_1080_);
v___x_1083_ = lean_apply_2(v_toPure_1078_, lean_box(0), v___x_1082_);
return v___x_1083_;
}
else
{
lean_object* v___x_1084_; 
lean_dec(v_____do__lift_1080_);
v___x_1084_ = lean_apply_2(v_toPure_1078_, lean_box(0), v_c_1079_);
return v___x_1084_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__15___boxed(lean_object* v_fvarId_1085_, lean_object* v_toPure_1086_, lean_object* v_c_1087_, lean_object* v_____do__lift_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__15(v_fvarId_1085_, v_toPure_1086_, v_c_1087_, v_____do__lift_1088_);
lean_dec(v_fvarId_1085_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__27(lean_object* v_fvarId_1090_, lean_object* v_____do__lift_1091_, lean_object* v_cidx_1092_, lean_object* v_toPure_1093_, lean_object* v_k_1094_, lean_object* v_c_1095_, lean_object* v_____do__lift_1096_){
_start:
{
size_t v___x_1097_; size_t v___x_1098_; uint8_t v___x_1099_; 
v___x_1097_ = lean_ptr_addr(v_fvarId_1090_);
v___x_1098_ = lean_ptr_addr(v_____do__lift_1091_);
v___x_1099_ = lean_usize_dec_eq(v___x_1097_, v___x_1098_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
lean_dec_ref(v_c_1095_);
v___x_1100_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v___x_1100_, 0, v_____do__lift_1091_);
lean_ctor_set(v___x_1100_, 1, v_cidx_1092_);
lean_ctor_set(v___x_1100_, 2, v_____do__lift_1096_);
v___x_1101_ = lean_apply_2(v_toPure_1093_, lean_box(0), v___x_1100_);
return v___x_1101_;
}
else
{
uint8_t v___x_1102_; 
v___x_1102_ = lean_nat_dec_eq(v_cidx_1092_, v_cidx_1092_);
if (v___x_1102_ == 0)
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
lean_dec_ref(v_c_1095_);
v___x_1103_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v___x_1103_, 0, v_____do__lift_1091_);
lean_ctor_set(v___x_1103_, 1, v_cidx_1092_);
lean_ctor_set(v___x_1103_, 2, v_____do__lift_1096_);
v___x_1104_ = lean_apply_2(v_toPure_1093_, lean_box(0), v___x_1103_);
return v___x_1104_;
}
else
{
size_t v___x_1105_; size_t v___x_1106_; uint8_t v___x_1107_; 
v___x_1105_ = lean_ptr_addr(v_k_1094_);
v___x_1106_ = lean_ptr_addr(v_____do__lift_1096_);
v___x_1107_ = lean_usize_dec_eq(v___x_1105_, v___x_1106_);
if (v___x_1107_ == 0)
{
lean_object* v___x_1108_; lean_object* v___x_1109_; 
lean_dec_ref(v_c_1095_);
v___x_1108_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v___x_1108_, 0, v_____do__lift_1091_);
lean_ctor_set(v___x_1108_, 1, v_cidx_1092_);
lean_ctor_set(v___x_1108_, 2, v_____do__lift_1096_);
v___x_1109_ = lean_apply_2(v_toPure_1093_, lean_box(0), v___x_1108_);
return v___x_1109_;
}
else
{
lean_object* v___x_1110_; 
lean_dec_ref(v_____do__lift_1096_);
lean_dec(v_cidx_1092_);
lean_dec(v_____do__lift_1091_);
v___x_1110_ = lean_apply_2(v_toPure_1093_, lean_box(0), v_c_1095_);
return v___x_1110_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__27___boxed(lean_object* v_fvarId_1111_, lean_object* v_____do__lift_1112_, lean_object* v_cidx_1113_, lean_object* v_toPure_1114_, lean_object* v_k_1115_, lean_object* v_c_1116_, lean_object* v_____do__lift_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__27(v_fvarId_1111_, v_____do__lift_1112_, v_cidx_1113_, v_toPure_1114_, v_k_1115_, v_c_1116_, v_____do__lift_1117_);
lean_dec_ref(v_k_1115_);
lean_dec(v_fvarId_1111_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__29(lean_object* v_fvarId_1119_, lean_object* v_____do__lift_1120_, lean_object* v_n_1121_, uint8_t v_check_1122_, uint8_t v_persistent_1123_, lean_object* v_toPure_1124_, lean_object* v_k_1125_, lean_object* v_c_1126_, lean_object* v_____do__lift_1127_){
_start:
{
size_t v___x_1128_; size_t v___x_1129_; uint8_t v___x_1130_; 
v___x_1128_ = lean_ptr_addr(v_fvarId_1119_);
v___x_1129_ = lean_ptr_addr(v_____do__lift_1120_);
v___x_1130_ = lean_usize_dec_eq(v___x_1128_, v___x_1129_);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
lean_dec_ref(v_c_1126_);
v___x_1131_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_1131_, 0, v_____do__lift_1120_);
lean_ctor_set(v___x_1131_, 1, v_n_1121_);
lean_ctor_set(v___x_1131_, 2, v_____do__lift_1127_);
lean_ctor_set_uint8(v___x_1131_, sizeof(void*)*3, v_check_1122_);
lean_ctor_set_uint8(v___x_1131_, sizeof(void*)*3 + 1, v_persistent_1123_);
v___x_1132_ = lean_apply_2(v_toPure_1124_, lean_box(0), v___x_1131_);
return v___x_1132_;
}
else
{
uint8_t v___x_1133_; 
v___x_1133_ = lean_nat_dec_eq(v_n_1121_, v_n_1121_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
lean_dec_ref(v_c_1126_);
v___x_1134_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_1134_, 0, v_____do__lift_1120_);
lean_ctor_set(v___x_1134_, 1, v_n_1121_);
lean_ctor_set(v___x_1134_, 2, v_____do__lift_1127_);
lean_ctor_set_uint8(v___x_1134_, sizeof(void*)*3, v_check_1122_);
lean_ctor_set_uint8(v___x_1134_, sizeof(void*)*3 + 1, v_persistent_1123_);
v___x_1135_ = lean_apply_2(v_toPure_1124_, lean_box(0), v___x_1134_);
return v___x_1135_;
}
else
{
size_t v___x_1136_; size_t v___x_1137_; uint8_t v___x_1138_; 
v___x_1136_ = lean_ptr_addr(v_k_1125_);
v___x_1137_ = lean_ptr_addr(v_____do__lift_1127_);
v___x_1138_ = lean_usize_dec_eq(v___x_1136_, v___x_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
lean_dec_ref(v_c_1126_);
v___x_1139_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_1139_, 0, v_____do__lift_1120_);
lean_ctor_set(v___x_1139_, 1, v_n_1121_);
lean_ctor_set(v___x_1139_, 2, v_____do__lift_1127_);
lean_ctor_set_uint8(v___x_1139_, sizeof(void*)*3, v_check_1122_);
lean_ctor_set_uint8(v___x_1139_, sizeof(void*)*3 + 1, v_persistent_1123_);
v___x_1140_ = lean_apply_2(v_toPure_1124_, lean_box(0), v___x_1139_);
return v___x_1140_;
}
else
{
lean_object* v___x_1141_; 
lean_dec_ref(v_____do__lift_1127_);
lean_dec(v_n_1121_);
lean_dec(v_____do__lift_1120_);
v___x_1141_ = lean_apply_2(v_toPure_1124_, lean_box(0), v_c_1126_);
return v___x_1141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__29___boxed(lean_object* v_fvarId_1142_, lean_object* v_____do__lift_1143_, lean_object* v_n_1144_, lean_object* v_check_1145_, lean_object* v_persistent_1146_, lean_object* v_toPure_1147_, lean_object* v_k_1148_, lean_object* v_c_1149_, lean_object* v_____do__lift_1150_){
_start:
{
uint8_t v_check_1987__boxed_1151_; uint8_t v_persistent_1988__boxed_1152_; lean_object* v_res_1153_; 
v_check_1987__boxed_1151_ = lean_unbox(v_check_1145_);
v_persistent_1988__boxed_1152_ = lean_unbox(v_persistent_1146_);
v_res_1153_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__29(v_fvarId_1142_, v_____do__lift_1143_, v_n_1144_, v_check_1987__boxed_1151_, v_persistent_1988__boxed_1152_, v_toPure_1147_, v_k_1148_, v_c_1149_, v_____do__lift_1150_);
lean_dec_ref(v_k_1148_);
lean_dec(v_fvarId_1142_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__23(lean_object* v_fvarId_1154_, lean_object* v_____do__lift_1155_, lean_object* v_i_1156_, lean_object* v_offset_1157_, lean_object* v_____do__lift_1158_, lean_object* v_____do__lift_1159_, lean_object* v_toPure_1160_, lean_object* v_y_1161_, lean_object* v_ty_1162_, lean_object* v_k_1163_, lean_object* v_c_1164_, lean_object* v_____do__lift_1165_){
_start:
{
size_t v___x_1166_; size_t v___x_1167_; uint8_t v___x_1168_; 
v___x_1166_ = lean_ptr_addr(v_fvarId_1154_);
v___x_1167_ = lean_ptr_addr(v_____do__lift_1155_);
v___x_1168_ = lean_usize_dec_eq(v___x_1166_, v___x_1167_);
if (v___x_1168_ == 0)
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
lean_dec_ref(v_c_1164_);
v___x_1169_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1169_, 0, v_____do__lift_1155_);
lean_ctor_set(v___x_1169_, 1, v_i_1156_);
lean_ctor_set(v___x_1169_, 2, v_offset_1157_);
lean_ctor_set(v___x_1169_, 3, v_____do__lift_1158_);
lean_ctor_set(v___x_1169_, 4, v_____do__lift_1159_);
lean_ctor_set(v___x_1169_, 5, v_____do__lift_1165_);
v___x_1170_ = lean_apply_2(v_toPure_1160_, lean_box(0), v___x_1169_);
return v___x_1170_;
}
else
{
uint8_t v___x_1171_; 
v___x_1171_ = lean_nat_dec_eq(v_i_1156_, v_i_1156_);
if (v___x_1171_ == 0)
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
lean_dec_ref(v_c_1164_);
v___x_1172_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1172_, 0, v_____do__lift_1155_);
lean_ctor_set(v___x_1172_, 1, v_i_1156_);
lean_ctor_set(v___x_1172_, 2, v_offset_1157_);
lean_ctor_set(v___x_1172_, 3, v_____do__lift_1158_);
lean_ctor_set(v___x_1172_, 4, v_____do__lift_1159_);
lean_ctor_set(v___x_1172_, 5, v_____do__lift_1165_);
v___x_1173_ = lean_apply_2(v_toPure_1160_, lean_box(0), v___x_1172_);
return v___x_1173_;
}
else
{
uint8_t v___x_1174_; 
v___x_1174_ = lean_nat_dec_eq(v_offset_1157_, v_offset_1157_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
lean_dec_ref(v_c_1164_);
v___x_1175_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1175_, 0, v_____do__lift_1155_);
lean_ctor_set(v___x_1175_, 1, v_i_1156_);
lean_ctor_set(v___x_1175_, 2, v_offset_1157_);
lean_ctor_set(v___x_1175_, 3, v_____do__lift_1158_);
lean_ctor_set(v___x_1175_, 4, v_____do__lift_1159_);
lean_ctor_set(v___x_1175_, 5, v_____do__lift_1165_);
v___x_1176_ = lean_apply_2(v_toPure_1160_, lean_box(0), v___x_1175_);
return v___x_1176_;
}
else
{
size_t v___x_1177_; size_t v___x_1178_; uint8_t v___x_1179_; 
v___x_1177_ = lean_ptr_addr(v_y_1161_);
v___x_1178_ = lean_ptr_addr(v_____do__lift_1158_);
v___x_1179_ = lean_usize_dec_eq(v___x_1177_, v___x_1178_);
if (v___x_1179_ == 0)
{
lean_object* v___x_1180_; lean_object* v___x_1181_; 
lean_dec_ref(v_c_1164_);
v___x_1180_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1180_, 0, v_____do__lift_1155_);
lean_ctor_set(v___x_1180_, 1, v_i_1156_);
lean_ctor_set(v___x_1180_, 2, v_offset_1157_);
lean_ctor_set(v___x_1180_, 3, v_____do__lift_1158_);
lean_ctor_set(v___x_1180_, 4, v_____do__lift_1159_);
lean_ctor_set(v___x_1180_, 5, v_____do__lift_1165_);
v___x_1181_ = lean_apply_2(v_toPure_1160_, lean_box(0), v___x_1180_);
return v___x_1181_;
}
else
{
size_t v___x_1182_; size_t v___x_1183_; uint8_t v___x_1184_; 
v___x_1182_ = lean_ptr_addr(v_ty_1162_);
v___x_1183_ = lean_ptr_addr(v_____do__lift_1159_);
v___x_1184_ = lean_usize_dec_eq(v___x_1182_, v___x_1183_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
lean_dec_ref(v_c_1164_);
v___x_1185_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1185_, 0, v_____do__lift_1155_);
lean_ctor_set(v___x_1185_, 1, v_i_1156_);
lean_ctor_set(v___x_1185_, 2, v_offset_1157_);
lean_ctor_set(v___x_1185_, 3, v_____do__lift_1158_);
lean_ctor_set(v___x_1185_, 4, v_____do__lift_1159_);
lean_ctor_set(v___x_1185_, 5, v_____do__lift_1165_);
v___x_1186_ = lean_apply_2(v_toPure_1160_, lean_box(0), v___x_1185_);
return v___x_1186_;
}
else
{
size_t v___x_1187_; size_t v___x_1188_; uint8_t v___x_1189_; 
v___x_1187_ = lean_ptr_addr(v_k_1163_);
v___x_1188_ = lean_ptr_addr(v_____do__lift_1165_);
v___x_1189_ = lean_usize_dec_eq(v___x_1187_, v___x_1188_);
if (v___x_1189_ == 0)
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
lean_dec_ref(v_c_1164_);
v___x_1190_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_1190_, 0, v_____do__lift_1155_);
lean_ctor_set(v___x_1190_, 1, v_i_1156_);
lean_ctor_set(v___x_1190_, 2, v_offset_1157_);
lean_ctor_set(v___x_1190_, 3, v_____do__lift_1158_);
lean_ctor_set(v___x_1190_, 4, v_____do__lift_1159_);
lean_ctor_set(v___x_1190_, 5, v_____do__lift_1165_);
v___x_1191_ = lean_apply_2(v_toPure_1160_, lean_box(0), v___x_1190_);
return v___x_1191_;
}
else
{
lean_object* v___x_1192_; 
lean_dec_ref(v_____do__lift_1165_);
lean_dec_ref(v_____do__lift_1159_);
lean_dec(v_____do__lift_1158_);
lean_dec(v_offset_1157_);
lean_dec(v_i_1156_);
lean_dec(v_____do__lift_1155_);
v___x_1192_ = lean_apply_2(v_toPure_1160_, lean_box(0), v_c_1164_);
return v___x_1192_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__23___boxed(lean_object* v_fvarId_1193_, lean_object* v_____do__lift_1194_, lean_object* v_i_1195_, lean_object* v_offset_1196_, lean_object* v_____do__lift_1197_, lean_object* v_____do__lift_1198_, lean_object* v_toPure_1199_, lean_object* v_y_1200_, lean_object* v_ty_1201_, lean_object* v_k_1202_, lean_object* v_c_1203_, lean_object* v_____do__lift_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__23(v_fvarId_1193_, v_____do__lift_1194_, v_i_1195_, v_offset_1196_, v_____do__lift_1197_, v_____do__lift_1198_, v_toPure_1199_, v_y_1200_, v_ty_1201_, v_k_1202_, v_c_1203_, v_____do__lift_1204_);
lean_dec_ref(v_k_1202_);
lean_dec_ref(v_ty_1201_);
lean_dec(v_y_1200_);
lean_dec(v_fvarId_1193_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__4(uint8_t v_pu_1206_, lean_object* v_decl_1207_, lean_object* v_____do__lift_1208_, lean_object* v_params_1209_, lean_object* v_inst_1210_, lean_object* v_toBind_1211_, lean_object* v___f_1212_, lean_object* v_____do__lift_1213_){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1214_ = lean_box(v_pu_1206_);
v___x_1215_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___boxed), 10, 5);
lean_closure_set(v___x_1215_, 0, v___x_1214_);
lean_closure_set(v___x_1215_, 1, v_decl_1207_);
lean_closure_set(v___x_1215_, 2, v_____do__lift_1208_);
lean_closure_set(v___x_1215_, 3, v_params_1209_);
lean_closure_set(v___x_1215_, 4, v_____do__lift_1213_);
v___x_1216_ = lean_apply_2(v_inst_1210_, lean_box(0), v___x_1215_);
v___x_1217_ = lean_apply_4(v_toBind_1211_, lean_box(0), lean_box(0), v___x_1216_, v___f_1212_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__4___boxed(lean_object* v_pu_1218_, lean_object* v_decl_1219_, lean_object* v_____do__lift_1220_, lean_object* v_params_1221_, lean_object* v_inst_1222_, lean_object* v_toBind_1223_, lean_object* v___f_1224_, lean_object* v_____do__lift_1225_){
_start:
{
uint8_t v_pu_boxed_1226_; lean_object* v_res_1227_; 
v_pu_boxed_1226_ = lean_unbox(v_pu_1218_);
v_res_1227_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__4(v_pu_boxed_1226_, v_decl_1219_, v_____do__lift_1220_, v_params_1221_, v_inst_1222_, v_toBind_1223_, v___f_1224_, v_____do__lift_1225_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__12(lean_object* v_____do__lift_1228_, lean_object* v_toPure_1229_, lean_object* v_c_1230_, lean_object* v_fvarId_1231_, lean_object* v_args_1232_, lean_object* v_____do__lift_1233_){
_start:
{
uint8_t v___y_1235_; uint8_t v___x_1239_; 
v___x_1239_ = l_Lean_instBEqFVarId_beq(v_fvarId_1231_, v_____do__lift_1228_);
if (v___x_1239_ == 0)
{
v___y_1235_ = v___x_1239_;
goto v___jp_1234_;
}
else
{
size_t v___x_1240_; size_t v___x_1241_; uint8_t v___x_1242_; 
v___x_1240_ = lean_ptr_addr(v_args_1232_);
v___x_1241_ = lean_ptr_addr(v_____do__lift_1233_);
v___x_1242_ = lean_usize_dec_eq(v___x_1240_, v___x_1241_);
v___y_1235_ = v___x_1242_;
goto v___jp_1234_;
}
v___jp_1234_:
{
if (v___y_1235_ == 0)
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
lean_dec_ref(v_c_1230_);
v___x_1236_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1236_, 0, v_____do__lift_1228_);
lean_ctor_set(v___x_1236_, 1, v_____do__lift_1233_);
v___x_1237_ = lean_apply_2(v_toPure_1229_, lean_box(0), v___x_1236_);
return v___x_1237_;
}
else
{
lean_object* v___x_1238_; 
lean_dec_ref(v_____do__lift_1233_);
lean_dec(v_____do__lift_1228_);
v___x_1238_ = lean_apply_2(v_toPure_1229_, lean_box(0), v_c_1230_);
return v___x_1238_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__12___boxed(lean_object* v_____do__lift_1243_, lean_object* v_toPure_1244_, lean_object* v_c_1245_, lean_object* v_fvarId_1246_, lean_object* v_args_1247_, lean_object* v_____do__lift_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__12(v_____do__lift_1243_, v_toPure_1244_, v_c_1245_, v_fvarId_1246_, v_args_1247_, v_____do__lift_1248_);
lean_dec_ref(v_args_1247_);
lean_dec(v_fvarId_1246_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__9(lean_object* v_toPure_1250_, lean_object* v_c_1251_, lean_object* v_fvarId_1252_, lean_object* v_args_1253_, uint8_t v_pu_1254_, lean_object* v_inst_1255_, lean_object* v_inst_1256_, lean_object* v_f_1257_, lean_object* v_toBind_1258_, lean_object* v_____do__lift_1259_){
_start:
{
lean_object* v___f_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; size_t v_sz_1263_; size_t v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
lean_inc_ref(v_args_1253_);
v___f_1260_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__12___boxed), 6, 5);
lean_closure_set(v___f_1260_, 0, v_____do__lift_1259_);
lean_closure_set(v___f_1260_, 1, v_toPure_1250_);
lean_closure_set(v___f_1260_, 2, v_c_1251_);
lean_closure_set(v___f_1260_, 3, v_fvarId_1252_);
lean_closure_set(v___f_1260_, 4, v_args_1253_);
v___x_1261_ = lean_box(v_pu_1254_);
lean_inc_ref(v_inst_1256_);
v___x_1262_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Arg_mapFVarM___boxed), 6, 5);
lean_closure_set(v___x_1262_, 0, lean_box(0));
lean_closure_set(v___x_1262_, 1, v___x_1261_);
lean_closure_set(v___x_1262_, 2, v_inst_1255_);
lean_closure_set(v___x_1262_, 3, v_inst_1256_);
lean_closure_set(v___x_1262_, 4, v_f_1257_);
v_sz_1263_ = lean_array_size(v_args_1253_);
v___x_1264_ = ((size_t)0ULL);
v___x_1265_ = l_unsafeCast___redArg(v_args_1253_);
lean_dec_ref(v_args_1253_);
v___x_1266_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_1256_, v___x_1262_, v_sz_1263_, v___x_1264_, v___x_1265_);
v___x_1267_ = l_unsafeCast___redArg(v___x_1266_);
lean_dec(v___x_1266_);
v___x_1268_ = lean_apply_4(v_toBind_1258_, lean_box(0), lean_box(0), v___x_1267_, v___f_1260_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__9___boxed(lean_object* v_toPure_1269_, lean_object* v_c_1270_, lean_object* v_fvarId_1271_, lean_object* v_args_1272_, lean_object* v_pu_1273_, lean_object* v_inst_1274_, lean_object* v_inst_1275_, lean_object* v_f_1276_, lean_object* v_toBind_1277_, lean_object* v_____do__lift_1278_){
_start:
{
uint8_t v_pu_boxed_1279_; lean_object* v_res_1280_; 
v_pu_boxed_1279_ = lean_unbox(v_pu_1273_);
v_res_1280_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__9(v_toPure_1269_, v_c_1270_, v_fvarId_1271_, v_args_1272_, v_pu_boxed_1279_, v_inst_1274_, v_inst_1275_, v_f_1276_, v_toBind_1277_, v_____do__lift_1278_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__11(lean_object* v_typeName_1281_, lean_object* v_____do__lift_1282_, lean_object* v_____do__lift_1283_, lean_object* v_toPure_1284_, lean_object* v_alts_1285_, lean_object* v_resultType_1286_, lean_object* v_discr_1287_, lean_object* v_c_1288_, lean_object* v_____do__lift_1289_){
_start:
{
size_t v___x_1294_; size_t v___x_1295_; uint8_t v___x_1296_; 
v___x_1294_ = lean_ptr_addr(v_alts_1285_);
v___x_1295_ = lean_ptr_addr(v_____do__lift_1289_);
v___x_1296_ = lean_usize_dec_eq(v___x_1294_, v___x_1295_);
if (v___x_1296_ == 0)
{
lean_dec_ref(v_c_1288_);
goto v___jp_1290_;
}
else
{
size_t v___x_1297_; size_t v___x_1298_; uint8_t v___x_1299_; 
v___x_1297_ = lean_ptr_addr(v_resultType_1286_);
v___x_1298_ = lean_ptr_addr(v_____do__lift_1282_);
v___x_1299_ = lean_usize_dec_eq(v___x_1297_, v___x_1298_);
if (v___x_1299_ == 0)
{
lean_dec_ref(v_c_1288_);
goto v___jp_1290_;
}
else
{
uint8_t v___x_1300_; 
v___x_1300_ = l_Lean_instBEqFVarId_beq(v_discr_1287_, v_____do__lift_1283_);
if (v___x_1300_ == 0)
{
lean_dec_ref(v_c_1288_);
goto v___jp_1290_;
}
else
{
lean_object* v___x_1301_; 
lean_dec_ref(v_____do__lift_1289_);
lean_dec(v_____do__lift_1283_);
lean_dec_ref(v_____do__lift_1282_);
lean_dec(v_typeName_1281_);
v___x_1301_ = lean_apply_2(v_toPure_1284_, lean_box(0), v_c_1288_);
return v___x_1301_;
}
}
}
v___jp_1290_:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1291_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1291_, 0, v_typeName_1281_);
lean_ctor_set(v___x_1291_, 1, v_____do__lift_1282_);
lean_ctor_set(v___x_1291_, 2, v_____do__lift_1283_);
lean_ctor_set(v___x_1291_, 3, v_____do__lift_1289_);
v___x_1292_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
v___x_1293_ = lean_apply_2(v_toPure_1284_, lean_box(0), v___x_1292_);
return v___x_1293_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__11___boxed(lean_object* v_typeName_1302_, lean_object* v_____do__lift_1303_, lean_object* v_____do__lift_1304_, lean_object* v_toPure_1305_, lean_object* v_alts_1306_, lean_object* v_resultType_1307_, lean_object* v_discr_1308_, lean_object* v_c_1309_, lean_object* v_____do__lift_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__11(v_typeName_1302_, v_____do__lift_1303_, v_____do__lift_1304_, v_toPure_1305_, v_alts_1306_, v_resultType_1307_, v_discr_1308_, v_c_1309_, v_____do__lift_1310_);
lean_dec(v_discr_1308_);
lean_dec_ref(v_resultType_1307_);
lean_dec_ref(v_alts_1306_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__13(lean_object* v_typeName_1312_, lean_object* v_____do__lift_1313_, lean_object* v_toPure_1314_, lean_object* v_alts_1315_, lean_object* v_resultType_1316_, lean_object* v_discr_1317_, lean_object* v_c_1318_, lean_object* v_inst_1319_, lean_object* v___f_1320_, lean_object* v_toBind_1321_, lean_object* v_____do__lift_1322_){
_start:
{
lean_object* v___f_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
lean_inc_ref(v_alts_1315_);
v___f_1323_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__11___boxed), 9, 8);
lean_closure_set(v___f_1323_, 0, v_typeName_1312_);
lean_closure_set(v___f_1323_, 1, v_____do__lift_1313_);
lean_closure_set(v___f_1323_, 2, v_____do__lift_1322_);
lean_closure_set(v___f_1323_, 3, v_toPure_1314_);
lean_closure_set(v___f_1323_, 4, v_alts_1315_);
lean_closure_set(v___f_1323_, 5, v_resultType_1316_);
lean_closure_set(v___f_1323_, 6, v_discr_1317_);
lean_closure_set(v___f_1323_, 7, v_c_1318_);
v___x_1324_ = lean_unsigned_to_nat(0u);
v___x_1325_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go(lean_box(0), lean_box(0), v_inst_1319_, v___f_1320_, v___x_1324_, v_alts_1315_);
v___x_1326_ = lean_apply_4(v_toBind_1321_, lean_box(0), lean_box(0), v___x_1325_, v___f_1323_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__14(lean_object* v_typeName_1327_, lean_object* v_toPure_1328_, lean_object* v_alts_1329_, lean_object* v_resultType_1330_, lean_object* v_discr_1331_, lean_object* v_c_1332_, lean_object* v_inst_1333_, lean_object* v___f_1334_, lean_object* v_toBind_1335_, lean_object* v_f_1336_, lean_object* v_____do__lift_1337_){
_start:
{
lean_object* v___f_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
lean_inc(v_toBind_1335_);
lean_inc(v_discr_1331_);
v___f_1338_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__13), 11, 10);
lean_closure_set(v___f_1338_, 0, v_typeName_1327_);
lean_closure_set(v___f_1338_, 1, v_____do__lift_1337_);
lean_closure_set(v___f_1338_, 2, v_toPure_1328_);
lean_closure_set(v___f_1338_, 3, v_alts_1329_);
lean_closure_set(v___f_1338_, 4, v_resultType_1330_);
lean_closure_set(v___f_1338_, 5, v_discr_1331_);
lean_closure_set(v___f_1338_, 6, v_c_1332_);
lean_closure_set(v___f_1338_, 7, v_inst_1333_);
lean_closure_set(v___f_1338_, 8, v___f_1334_);
lean_closure_set(v___f_1338_, 9, v_toBind_1335_);
v___x_1339_ = lean_apply_1(v_f_1336_, v_discr_1331_);
v___x_1340_ = lean_apply_4(v_toBind_1335_, lean_box(0), lean_box(0), v___x_1339_, v___f_1338_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__31(lean_object* v_fvarId_1341_, lean_object* v_____do__lift_1342_, lean_object* v_n_1343_, uint8_t v_check_1344_, uint8_t v_persistent_1345_, lean_object* v_objs_x3f_1346_, lean_object* v_toPure_1347_, lean_object* v_k_1348_, lean_object* v_c_1349_, lean_object* v_____do__lift_1350_){
_start:
{
size_t v___x_1351_; size_t v___x_1352_; uint8_t v___x_1353_; 
v___x_1351_ = lean_ptr_addr(v_fvarId_1341_);
v___x_1352_ = lean_ptr_addr(v_____do__lift_1342_);
v___x_1353_ = lean_usize_dec_eq(v___x_1351_, v___x_1352_);
if (v___x_1353_ == 0)
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
lean_dec_ref(v_c_1349_);
v___x_1354_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v___x_1354_, 0, v_____do__lift_1342_);
lean_ctor_set(v___x_1354_, 1, v_n_1343_);
lean_ctor_set(v___x_1354_, 2, v_objs_x3f_1346_);
lean_ctor_set(v___x_1354_, 3, v_____do__lift_1350_);
lean_ctor_set_uint8(v___x_1354_, sizeof(void*)*4, v_check_1344_);
lean_ctor_set_uint8(v___x_1354_, sizeof(void*)*4 + 1, v_persistent_1345_);
v___x_1355_ = lean_apply_2(v_toPure_1347_, lean_box(0), v___x_1354_);
return v___x_1355_;
}
else
{
uint8_t v___x_1356_; 
v___x_1356_ = lean_nat_dec_eq(v_n_1343_, v_n_1343_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
lean_dec_ref(v_c_1349_);
v___x_1357_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v___x_1357_, 0, v_____do__lift_1342_);
lean_ctor_set(v___x_1357_, 1, v_n_1343_);
lean_ctor_set(v___x_1357_, 2, v_objs_x3f_1346_);
lean_ctor_set(v___x_1357_, 3, v_____do__lift_1350_);
lean_ctor_set_uint8(v___x_1357_, sizeof(void*)*4, v_check_1344_);
lean_ctor_set_uint8(v___x_1357_, sizeof(void*)*4 + 1, v_persistent_1345_);
v___x_1358_ = lean_apply_2(v_toPure_1347_, lean_box(0), v___x_1357_);
return v___x_1358_;
}
else
{
size_t v___x_1359_; uint8_t v___x_1360_; 
v___x_1359_ = lean_ptr_addr(v_objs_x3f_1346_);
v___x_1360_ = lean_usize_dec_eq(v___x_1359_, v___x_1359_);
if (v___x_1360_ == 0)
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
lean_dec_ref(v_c_1349_);
v___x_1361_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v___x_1361_, 0, v_____do__lift_1342_);
lean_ctor_set(v___x_1361_, 1, v_n_1343_);
lean_ctor_set(v___x_1361_, 2, v_objs_x3f_1346_);
lean_ctor_set(v___x_1361_, 3, v_____do__lift_1350_);
lean_ctor_set_uint8(v___x_1361_, sizeof(void*)*4, v_check_1344_);
lean_ctor_set_uint8(v___x_1361_, sizeof(void*)*4 + 1, v_persistent_1345_);
v___x_1362_ = lean_apply_2(v_toPure_1347_, lean_box(0), v___x_1361_);
return v___x_1362_;
}
else
{
size_t v___x_1363_; size_t v___x_1364_; uint8_t v___x_1365_; 
v___x_1363_ = lean_ptr_addr(v_k_1348_);
v___x_1364_ = lean_ptr_addr(v_____do__lift_1350_);
v___x_1365_ = lean_usize_dec_eq(v___x_1363_, v___x_1364_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
lean_dec_ref(v_c_1349_);
v___x_1366_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v___x_1366_, 0, v_____do__lift_1342_);
lean_ctor_set(v___x_1366_, 1, v_n_1343_);
lean_ctor_set(v___x_1366_, 2, v_objs_x3f_1346_);
lean_ctor_set(v___x_1366_, 3, v_____do__lift_1350_);
lean_ctor_set_uint8(v___x_1366_, sizeof(void*)*4, v_check_1344_);
lean_ctor_set_uint8(v___x_1366_, sizeof(void*)*4 + 1, v_persistent_1345_);
v___x_1367_ = lean_apply_2(v_toPure_1347_, lean_box(0), v___x_1366_);
return v___x_1367_;
}
else
{
lean_object* v___x_1368_; 
lean_dec_ref(v_____do__lift_1350_);
lean_dec(v_objs_x3f_1346_);
lean_dec(v_n_1343_);
lean_dec(v_____do__lift_1342_);
v___x_1368_ = lean_apply_2(v_toPure_1347_, lean_box(0), v_c_1349_);
return v___x_1368_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__31___boxed(lean_object* v_fvarId_1369_, lean_object* v_____do__lift_1370_, lean_object* v_n_1371_, lean_object* v_check_1372_, lean_object* v_persistent_1373_, lean_object* v_objs_x3f_1374_, lean_object* v_toPure_1375_, lean_object* v_k_1376_, lean_object* v_c_1377_, lean_object* v_____do__lift_1378_){
_start:
{
uint8_t v_check_2293__boxed_1379_; uint8_t v_persistent_2294__boxed_1380_; lean_object* v_res_1381_; 
v_check_2293__boxed_1379_ = lean_unbox(v_check_1372_);
v_persistent_2294__boxed_1380_ = lean_unbox(v_persistent_1373_);
v_res_1381_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__31(v_fvarId_1369_, v_____do__lift_1370_, v_n_1371_, v_check_2293__boxed_1379_, v_persistent_2294__boxed_1380_, v_objs_x3f_1374_, v_toPure_1375_, v_k_1376_, v_c_1377_, v_____do__lift_1378_);
lean_dec_ref(v_k_1376_);
lean_dec(v_fvarId_1369_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__7(lean_object* v_k_1382_, lean_object* v_decl_1383_, lean_object* v_toPure_1384_, lean_object* v_decl_1385_, lean_object* v_c_1386_, lean_object* v_____do__lift_1387_){
_start:
{
size_t v___x_1388_; size_t v___x_1389_; uint8_t v___x_1390_; 
v___x_1388_ = lean_ptr_addr(v_k_1382_);
v___x_1389_ = lean_ptr_addr(v_____do__lift_1387_);
v___x_1390_ = lean_usize_dec_eq(v___x_1388_, v___x_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
lean_dec_ref(v_c_1386_);
v___x_1391_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1391_, 0, v_decl_1383_);
lean_ctor_set(v___x_1391_, 1, v_____do__lift_1387_);
v___x_1392_ = lean_apply_2(v_toPure_1384_, lean_box(0), v___x_1391_);
return v___x_1392_;
}
else
{
size_t v___x_1393_; size_t v___x_1394_; uint8_t v___x_1395_; 
v___x_1393_ = lean_ptr_addr(v_decl_1385_);
v___x_1394_ = lean_ptr_addr(v_decl_1383_);
v___x_1395_ = lean_usize_dec_eq(v___x_1393_, v___x_1394_);
if (v___x_1395_ == 0)
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
lean_dec_ref(v_c_1386_);
v___x_1396_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1396_, 0, v_decl_1383_);
lean_ctor_set(v___x_1396_, 1, v_____do__lift_1387_);
v___x_1397_ = lean_apply_2(v_toPure_1384_, lean_box(0), v___x_1396_);
return v___x_1397_;
}
else
{
lean_object* v___x_1398_; 
lean_dec_ref(v_____do__lift_1387_);
lean_dec_ref(v_decl_1383_);
v___x_1398_ = lean_apply_2(v_toPure_1384_, lean_box(0), v_c_1386_);
return v___x_1398_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__7___boxed(lean_object* v_k_1399_, lean_object* v_decl_1400_, lean_object* v_toPure_1401_, lean_object* v_decl_1402_, lean_object* v_c_1403_, lean_object* v_____do__lift_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__7(v_k_1399_, v_decl_1400_, v_toPure_1401_, v_decl_1402_, v_c_1403_, v_____do__lift_1404_);
lean_dec_ref(v_decl_1402_);
lean_dec_ref(v_k_1399_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__2(lean_object* v_k_1406_, lean_object* v_decl_1407_, lean_object* v_toPure_1408_, lean_object* v_decl_1409_, lean_object* v_c_1410_, lean_object* v_____do__lift_1411_){
_start:
{
size_t v___x_1412_; size_t v___x_1413_; uint8_t v___x_1414_; 
v___x_1412_ = lean_ptr_addr(v_k_1406_);
v___x_1413_ = lean_ptr_addr(v_____do__lift_1411_);
v___x_1414_ = lean_usize_dec_eq(v___x_1412_, v___x_1413_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1415_; lean_object* v___x_1416_; 
lean_dec_ref(v_c_1410_);
v___x_1415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1415_, 0, v_decl_1407_);
lean_ctor_set(v___x_1415_, 1, v_____do__lift_1411_);
v___x_1416_ = lean_apply_2(v_toPure_1408_, lean_box(0), v___x_1415_);
return v___x_1416_;
}
else
{
size_t v___x_1417_; size_t v___x_1418_; uint8_t v___x_1419_; 
v___x_1417_ = lean_ptr_addr(v_decl_1409_);
v___x_1418_ = lean_ptr_addr(v_decl_1407_);
v___x_1419_ = lean_usize_dec_eq(v___x_1417_, v___x_1418_);
if (v___x_1419_ == 0)
{
lean_object* v___x_1420_; lean_object* v___x_1421_; 
lean_dec_ref(v_c_1410_);
v___x_1420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1420_, 0, v_decl_1407_);
lean_ctor_set(v___x_1420_, 1, v_____do__lift_1411_);
v___x_1421_ = lean_apply_2(v_toPure_1408_, lean_box(0), v___x_1420_);
return v___x_1421_;
}
else
{
lean_object* v___x_1422_; 
lean_dec_ref(v_____do__lift_1411_);
lean_dec_ref(v_decl_1407_);
v___x_1422_ = lean_apply_2(v_toPure_1408_, lean_box(0), v_c_1410_);
return v___x_1422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__2___boxed(lean_object* v_k_1423_, lean_object* v_decl_1424_, lean_object* v_toPure_1425_, lean_object* v_decl_1426_, lean_object* v_c_1427_, lean_object* v_____do__lift_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__2(v_k_1423_, v_decl_1424_, v_toPure_1425_, v_decl_1426_, v_c_1427_, v_____do__lift_1428_);
lean_dec_ref(v_decl_1426_);
lean_dec_ref(v_k_1423_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__20(lean_object* v_fvarId_1430_, lean_object* v_____do__lift_1431_, lean_object* v_i_1432_, lean_object* v_____do__lift_1433_, lean_object* v_toPure_1434_, lean_object* v_y_1435_, lean_object* v_k_1436_, lean_object* v_c_1437_, lean_object* v_____do__lift_1438_){
_start:
{
size_t v___x_1439_; size_t v___x_1440_; uint8_t v___x_1441_; 
v___x_1439_ = lean_ptr_addr(v_fvarId_1430_);
v___x_1440_ = lean_ptr_addr(v_____do__lift_1431_);
v___x_1441_ = lean_usize_dec_eq(v___x_1439_, v___x_1440_);
if (v___x_1441_ == 0)
{
lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_dec_ref(v_c_1437_);
v___x_1442_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v___x_1442_, 0, v_____do__lift_1431_);
lean_ctor_set(v___x_1442_, 1, v_i_1432_);
lean_ctor_set(v___x_1442_, 2, v_____do__lift_1433_);
lean_ctor_set(v___x_1442_, 3, v_____do__lift_1438_);
v___x_1443_ = lean_apply_2(v_toPure_1434_, lean_box(0), v___x_1442_);
return v___x_1443_;
}
else
{
uint8_t v___x_1444_; 
v___x_1444_ = lean_nat_dec_eq(v_i_1432_, v_i_1432_);
if (v___x_1444_ == 0)
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
lean_dec_ref(v_c_1437_);
v___x_1445_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v___x_1445_, 0, v_____do__lift_1431_);
lean_ctor_set(v___x_1445_, 1, v_i_1432_);
lean_ctor_set(v___x_1445_, 2, v_____do__lift_1433_);
lean_ctor_set(v___x_1445_, 3, v_____do__lift_1438_);
v___x_1446_ = lean_apply_2(v_toPure_1434_, lean_box(0), v___x_1445_);
return v___x_1446_;
}
else
{
size_t v___x_1447_; size_t v___x_1448_; uint8_t v___x_1449_; 
v___x_1447_ = lean_ptr_addr(v_y_1435_);
v___x_1448_ = lean_ptr_addr(v_____do__lift_1433_);
v___x_1449_ = lean_usize_dec_eq(v___x_1447_, v___x_1448_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1450_; lean_object* v___x_1451_; 
lean_dec_ref(v_c_1437_);
v___x_1450_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v___x_1450_, 0, v_____do__lift_1431_);
lean_ctor_set(v___x_1450_, 1, v_i_1432_);
lean_ctor_set(v___x_1450_, 2, v_____do__lift_1433_);
lean_ctor_set(v___x_1450_, 3, v_____do__lift_1438_);
v___x_1451_ = lean_apply_2(v_toPure_1434_, lean_box(0), v___x_1450_);
return v___x_1451_;
}
else
{
size_t v___x_1452_; size_t v___x_1453_; uint8_t v___x_1454_; 
v___x_1452_ = lean_ptr_addr(v_k_1436_);
v___x_1453_ = lean_ptr_addr(v_____do__lift_1438_);
v___x_1454_ = lean_usize_dec_eq(v___x_1452_, v___x_1453_);
if (v___x_1454_ == 0)
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
lean_dec_ref(v_c_1437_);
v___x_1455_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v___x_1455_, 0, v_____do__lift_1431_);
lean_ctor_set(v___x_1455_, 1, v_i_1432_);
lean_ctor_set(v___x_1455_, 2, v_____do__lift_1433_);
lean_ctor_set(v___x_1455_, 3, v_____do__lift_1438_);
v___x_1456_ = lean_apply_2(v_toPure_1434_, lean_box(0), v___x_1455_);
return v___x_1456_;
}
else
{
lean_object* v___x_1457_; 
lean_dec_ref(v_____do__lift_1438_);
lean_dec(v_____do__lift_1433_);
lean_dec(v_i_1432_);
lean_dec(v_____do__lift_1431_);
v___x_1457_ = lean_apply_2(v_toPure_1434_, lean_box(0), v_c_1437_);
return v___x_1457_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__20___boxed(lean_object* v_fvarId_1458_, lean_object* v_____do__lift_1459_, lean_object* v_i_1460_, lean_object* v_____do__lift_1461_, lean_object* v_toPure_1462_, lean_object* v_y_1463_, lean_object* v_k_1464_, lean_object* v_c_1465_, lean_object* v_____do__lift_1466_){
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__20(v_fvarId_1458_, v_____do__lift_1459_, v_i_1460_, v_____do__lift_1461_, v_toPure_1462_, v_y_1463_, v_k_1464_, v_c_1465_, v_____do__lift_1466_);
lean_dec_ref(v_k_1464_);
lean_dec(v_y_1463_);
lean_dec(v_fvarId_1458_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__33(lean_object* v_fvarId_1468_, lean_object* v_____do__lift_1469_, lean_object* v_toPure_1470_, lean_object* v_k_1471_, lean_object* v_c_1472_, lean_object* v_____do__lift_1473_){
_start:
{
size_t v___x_1474_; size_t v___x_1475_; uint8_t v___x_1476_; 
v___x_1474_ = lean_ptr_addr(v_fvarId_1468_);
v___x_1475_ = lean_ptr_addr(v_____do__lift_1469_);
v___x_1476_ = lean_usize_dec_eq(v___x_1474_, v___x_1475_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
lean_dec_ref(v_c_1472_);
v___x_1477_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v___x_1477_, 0, v_____do__lift_1469_);
lean_ctor_set(v___x_1477_, 1, v_____do__lift_1473_);
v___x_1478_ = lean_apply_2(v_toPure_1470_, lean_box(0), v___x_1477_);
return v___x_1478_;
}
else
{
size_t v___x_1479_; size_t v___x_1480_; uint8_t v___x_1481_; 
v___x_1479_ = lean_ptr_addr(v_k_1471_);
v___x_1480_ = lean_ptr_addr(v_____do__lift_1473_);
v___x_1481_ = lean_usize_dec_eq(v___x_1479_, v___x_1480_);
if (v___x_1481_ == 0)
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
lean_dec_ref(v_c_1472_);
v___x_1482_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v___x_1482_, 0, v_____do__lift_1469_);
lean_ctor_set(v___x_1482_, 1, v_____do__lift_1473_);
v___x_1483_ = lean_apply_2(v_toPure_1470_, lean_box(0), v___x_1482_);
return v___x_1483_;
}
else
{
lean_object* v___x_1484_; 
lean_dec_ref(v_____do__lift_1473_);
lean_dec(v_____do__lift_1469_);
v___x_1484_ = lean_apply_2(v_toPure_1470_, lean_box(0), v_c_1472_);
return v___x_1484_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__33___boxed(lean_object* v_fvarId_1485_, lean_object* v_____do__lift_1486_, lean_object* v_toPure_1487_, lean_object* v_k_1488_, lean_object* v_c_1489_, lean_object* v_____do__lift_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__33(v_fvarId_1485_, v_____do__lift_1486_, v_toPure_1487_, v_k_1488_, v_c_1489_, v_____do__lift_1490_);
lean_dec_ref(v_k_1488_);
lean_dec(v_fvarId_1485_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__16(lean_object* v_type_1492_, lean_object* v_toPure_1493_, lean_object* v_c_1494_, lean_object* v_____do__lift_1495_){
_start:
{
size_t v___x_1496_; size_t v___x_1497_; uint8_t v___x_1498_; 
v___x_1496_ = lean_ptr_addr(v_type_1492_);
v___x_1497_ = lean_ptr_addr(v_____do__lift_1495_);
v___x_1498_ = lean_usize_dec_eq(v___x_1496_, v___x_1497_);
if (v___x_1498_ == 0)
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
lean_dec_ref(v_c_1494_);
v___x_1499_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1499_, 0, v_____do__lift_1495_);
v___x_1500_ = lean_apply_2(v_toPure_1493_, lean_box(0), v___x_1499_);
return v___x_1500_;
}
else
{
lean_object* v___x_1501_; 
lean_dec_ref(v_____do__lift_1495_);
v___x_1501_ = lean_apply_2(v_toPure_1493_, lean_box(0), v_c_1494_);
return v___x_1501_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__16___boxed(lean_object* v_type_1502_, lean_object* v_toPure_1503_, lean_object* v_c_1504_, lean_object* v_____do__lift_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__16(v_type_1502_, v_toPure_1503_, v_c_1504_, v_____do__lift_1505_);
lean_dec_ref(v_type_1502_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__1(lean_object* v_k_1507_, lean_object* v_toPure_1508_, lean_object* v_decl_1509_, lean_object* v_c_1510_, uint8_t v_pu_1511_, lean_object* v_inst_1512_, lean_object* v_inst_1513_, lean_object* v_f_1514_, lean_object* v_toBind_1515_, lean_object* v_decl_1516_){
_start:
{
lean_object* v___f_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
lean_inc_ref(v_k_1507_);
v___f_1517_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1517_, 0, v_k_1507_);
lean_closure_set(v___f_1517_, 1, v_decl_1516_);
lean_closure_set(v___f_1517_, 2, v_toPure_1508_);
lean_closure_set(v___f_1517_, 3, v_decl_1509_);
lean_closure_set(v___f_1517_, 4, v_c_1510_);
v___x_1518_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_1511_, v_inst_1512_, v_inst_1513_, v_f_1514_, v_k_1507_);
v___x_1519_ = lean_apply_4(v_toBind_1515_, lean_box(0), lean_box(0), v___x_1518_, v___f_1517_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__1___boxed(lean_object* v_k_1520_, lean_object* v_toPure_1521_, lean_object* v_decl_1522_, lean_object* v_c_1523_, lean_object* v_pu_1524_, lean_object* v_inst_1525_, lean_object* v_inst_1526_, lean_object* v_f_1527_, lean_object* v_toBind_1528_, lean_object* v_decl_1529_){
_start:
{
uint8_t v_pu_boxed_1530_; lean_object* v_res_1531_; 
v_pu_boxed_1530_ = lean_unbox(v_pu_1524_);
v_res_1531_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__1(v_k_1520_, v_toPure_1521_, v_decl_1522_, v_c_1523_, v_pu_boxed_1530_, v_inst_1525_, v_inst_1526_, v_f_1527_, v_toBind_1528_, v_decl_1529_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__3(lean_object* v_k_1532_, lean_object* v_toPure_1533_, lean_object* v_decl_1534_, lean_object* v_c_1535_, uint8_t v_pu_1536_, lean_object* v_inst_1537_, lean_object* v_inst_1538_, lean_object* v_f_1539_, lean_object* v_toBind_1540_, lean_object* v_decl_1541_){
_start:
{
lean_object* v___f_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
lean_inc_ref(v_k_1532_);
v___f_1542_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_1542_, 0, v_k_1532_);
lean_closure_set(v___f_1542_, 1, v_decl_1541_);
lean_closure_set(v___f_1542_, 2, v_toPure_1533_);
lean_closure_set(v___f_1542_, 3, v_decl_1534_);
lean_closure_set(v___f_1542_, 4, v_c_1535_);
v___x_1543_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_1536_, v_inst_1537_, v_inst_1538_, v_f_1539_, v_k_1532_);
v___x_1544_ = lean_apply_4(v_toBind_1540_, lean_box(0), lean_box(0), v___x_1543_, v___f_1542_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__3___boxed(lean_object* v_k_1545_, lean_object* v_toPure_1546_, lean_object* v_decl_1547_, lean_object* v_c_1548_, lean_object* v_pu_1549_, lean_object* v_inst_1550_, lean_object* v_inst_1551_, lean_object* v_f_1552_, lean_object* v_toBind_1553_, lean_object* v_decl_1554_){
_start:
{
uint8_t v_pu_boxed_1555_; lean_object* v_res_1556_; 
v_pu_boxed_1555_ = lean_unbox(v_pu_1549_);
v_res_1556_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__3(v_k_1545_, v_toPure_1546_, v_decl_1547_, v_c_1548_, v_pu_boxed_1555_, v_inst_1550_, v_inst_1551_, v_f_1552_, v_toBind_1553_, v_decl_1554_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__5(uint8_t v_pu_1557_, lean_object* v_decl_1558_, lean_object* v_params_1559_, lean_object* v_inst_1560_, lean_object* v_toBind_1561_, lean_object* v___f_1562_, lean_object* v_inst_1563_, lean_object* v_f_1564_, lean_object* v_value_1565_, lean_object* v_____do__lift_1566_){
_start:
{
lean_object* v___x_1567_; lean_object* v___f_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1567_ = lean_box(v_pu_1557_);
lean_inc(v_toBind_1561_);
lean_inc(v_inst_1560_);
v___f_1568_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__4___boxed), 8, 7);
lean_closure_set(v___f_1568_, 0, v___x_1567_);
lean_closure_set(v___f_1568_, 1, v_decl_1558_);
lean_closure_set(v___f_1568_, 2, v_____do__lift_1566_);
lean_closure_set(v___f_1568_, 3, v_params_1559_);
lean_closure_set(v___f_1568_, 4, v_inst_1560_);
lean_closure_set(v___f_1568_, 5, v_toBind_1561_);
lean_closure_set(v___f_1568_, 6, v___f_1562_);
v___x_1569_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_1557_, v_inst_1560_, v_inst_1563_, v_f_1564_, v_value_1565_);
v___x_1570_ = lean_apply_4(v_toBind_1561_, lean_box(0), lean_box(0), v___x_1569_, v___f_1568_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__5___boxed(lean_object* v_pu_1571_, lean_object* v_decl_1572_, lean_object* v_params_1573_, lean_object* v_inst_1574_, lean_object* v_toBind_1575_, lean_object* v___f_1576_, lean_object* v_inst_1577_, lean_object* v_f_1578_, lean_object* v_value_1579_, lean_object* v_____do__lift_1580_){
_start:
{
uint8_t v_pu_boxed_1581_; lean_object* v_res_1582_; 
v_pu_boxed_1581_ = lean_unbox(v_pu_1571_);
v_res_1582_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__5(v_pu_boxed_1581_, v_decl_1572_, v_params_1573_, v_inst_1574_, v_toBind_1575_, v___f_1576_, v_inst_1577_, v_f_1578_, v_value_1579_, v_____do__lift_1580_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__6(uint8_t v_pu_1583_, lean_object* v_decl_1584_, lean_object* v_inst_1585_, lean_object* v_toBind_1586_, lean_object* v___f_1587_, lean_object* v_inst_1588_, lean_object* v_f_1589_, lean_object* v_value_1590_, lean_object* v_type_1591_, lean_object* v_params_1592_){
_start:
{
lean_object* v___x_1593_; lean_object* v___f_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1593_ = lean_box(v_pu_1583_);
lean_inc(v_f_1589_);
lean_inc_ref(v_inst_1588_);
lean_inc(v_toBind_1586_);
v___f_1594_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__5___boxed), 10, 9);
lean_closure_set(v___f_1594_, 0, v___x_1593_);
lean_closure_set(v___f_1594_, 1, v_decl_1584_);
lean_closure_set(v___f_1594_, 2, v_params_1592_);
lean_closure_set(v___f_1594_, 3, v_inst_1585_);
lean_closure_set(v___f_1594_, 4, v_toBind_1586_);
lean_closure_set(v___f_1594_, 5, v___f_1587_);
lean_closure_set(v___f_1594_, 6, v_inst_1588_);
lean_closure_set(v___f_1594_, 7, v_f_1589_);
lean_closure_set(v___f_1594_, 8, v_value_1590_);
v___x_1595_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_1588_, v_f_1589_, v_type_1591_);
v___x_1596_ = lean_apply_4(v_toBind_1586_, lean_box(0), lean_box(0), v___x_1595_, v___f_1594_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__6___boxed(lean_object* v_pu_1597_, lean_object* v_decl_1598_, lean_object* v_inst_1599_, lean_object* v_toBind_1600_, lean_object* v___f_1601_, lean_object* v_inst_1602_, lean_object* v_f_1603_, lean_object* v_value_1604_, lean_object* v_type_1605_, lean_object* v_params_1606_){
_start:
{
uint8_t v_pu_boxed_1607_; lean_object* v_res_1608_; 
v_pu_boxed_1607_ = lean_unbox(v_pu_1597_);
v_res_1608_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__6(v_pu_boxed_1607_, v_decl_1598_, v_inst_1599_, v_toBind_1600_, v___f_1601_, v_inst_1602_, v_f_1603_, v_value_1604_, v_type_1605_, v_params_1606_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__8(lean_object* v_k_1609_, lean_object* v_toPure_1610_, lean_object* v_decl_1611_, lean_object* v_c_1612_, uint8_t v_pu_1613_, lean_object* v_inst_1614_, lean_object* v_inst_1615_, lean_object* v_f_1616_, lean_object* v_toBind_1617_, lean_object* v_decl_1618_){
_start:
{
lean_object* v___f_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
lean_inc_ref(v_k_1609_);
v___f_1619_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_1619_, 0, v_k_1609_);
lean_closure_set(v___f_1619_, 1, v_decl_1618_);
lean_closure_set(v___f_1619_, 2, v_toPure_1610_);
lean_closure_set(v___f_1619_, 3, v_decl_1611_);
lean_closure_set(v___f_1619_, 4, v_c_1612_);
v___x_1620_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_1613_, v_inst_1614_, v_inst_1615_, v_f_1616_, v_k_1609_);
v___x_1621_ = lean_apply_4(v_toBind_1617_, lean_box(0), lean_box(0), v___x_1620_, v___f_1619_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__8___boxed(lean_object* v_k_1622_, lean_object* v_toPure_1623_, lean_object* v_decl_1624_, lean_object* v_c_1625_, lean_object* v_pu_1626_, lean_object* v_inst_1627_, lean_object* v_inst_1628_, lean_object* v_f_1629_, lean_object* v_toBind_1630_, lean_object* v_decl_1631_){
_start:
{
uint8_t v_pu_boxed_1632_; lean_object* v_res_1633_; 
v_pu_boxed_1632_ = lean_unbox(v_pu_1626_);
v_res_1633_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__8(v_k_1622_, v_toPure_1623_, v_decl_1624_, v_c_1625_, v_pu_boxed_1632_, v_inst_1627_, v_inst_1628_, v_f_1629_, v_toBind_1630_, v_decl_1631_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__10___boxed(lean_object* v_pu_1634_, lean_object* v_inst_1635_, lean_object* v_inst_1636_, lean_object* v_f_1637_, lean_object* v_x_1638_){
_start:
{
uint8_t v_pu_boxed_1639_; lean_object* v_res_1640_; 
v_pu_boxed_1639_ = lean_unbox(v_pu_1634_);
v_res_1640_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__10(v_pu_boxed_1639_, v_inst_1635_, v_inst_1636_, v_f_1637_, v_x_1638_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__18(lean_object* v_fvarId_1641_, lean_object* v_____do__lift_1642_, lean_object* v_i_1643_, lean_object* v_toPure_1644_, lean_object* v_y_1645_, lean_object* v_k_1646_, lean_object* v_c_1647_, uint8_t v_pu_1648_, lean_object* v_inst_1649_, lean_object* v_inst_1650_, lean_object* v_f_1651_, lean_object* v_toBind_1652_, lean_object* v_____do__lift_1653_){
_start:
{
lean_object* v___f_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
lean_inc_ref(v_k_1646_);
v___f_1654_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__17___boxed), 9, 8);
lean_closure_set(v___f_1654_, 0, v_fvarId_1641_);
lean_closure_set(v___f_1654_, 1, v_____do__lift_1642_);
lean_closure_set(v___f_1654_, 2, v_i_1643_);
lean_closure_set(v___f_1654_, 3, v_____do__lift_1653_);
lean_closure_set(v___f_1654_, 4, v_toPure_1644_);
lean_closure_set(v___f_1654_, 5, v_y_1645_);
lean_closure_set(v___f_1654_, 6, v_k_1646_);
lean_closure_set(v___f_1654_, 7, v_c_1647_);
v___x_1655_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_1648_, v_inst_1649_, v_inst_1650_, v_f_1651_, v_k_1646_);
v___x_1656_ = lean_apply_4(v_toBind_1652_, lean_box(0), lean_box(0), v___x_1655_, v___f_1654_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__18___boxed(lean_object* v_fvarId_1657_, lean_object* v_____do__lift_1658_, lean_object* v_i_1659_, lean_object* v_toPure_1660_, lean_object* v_y_1661_, lean_object* v_k_1662_, lean_object* v_c_1663_, lean_object* v_pu_1664_, lean_object* v_inst_1665_, lean_object* v_inst_1666_, lean_object* v_f_1667_, lean_object* v_toBind_1668_, lean_object* v_____do__lift_1669_){
_start:
{
uint8_t v_pu_boxed_1670_; lean_object* v_res_1671_; 
v_pu_boxed_1670_ = lean_unbox(v_pu_1664_);
v_res_1671_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__18(v_fvarId_1657_, v_____do__lift_1658_, v_i_1659_, v_toPure_1660_, v_y_1661_, v_k_1662_, v_c_1663_, v_pu_boxed_1670_, v_inst_1665_, v_inst_1666_, v_f_1667_, v_toBind_1668_, v_____do__lift_1669_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__19(lean_object* v_fvarId_1672_, lean_object* v_i_1673_, lean_object* v_toPure_1674_, lean_object* v_y_1675_, lean_object* v_k_1676_, lean_object* v_c_1677_, uint8_t v_pu_1678_, lean_object* v_inst_1679_, lean_object* v_inst_1680_, lean_object* v_f_1681_, lean_object* v_toBind_1682_, lean_object* v_____do__lift_1683_){
_start:
{
lean_object* v___x_1684_; lean_object* v___f_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1684_ = lean_box(v_pu_1678_);
lean_inc(v_toBind_1682_);
lean_inc(v_f_1681_);
lean_inc_ref(v_inst_1680_);
lean_inc(v_y_1675_);
v___f_1685_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__18___boxed), 13, 12);
lean_closure_set(v___f_1685_, 0, v_fvarId_1672_);
lean_closure_set(v___f_1685_, 1, v_____do__lift_1683_);
lean_closure_set(v___f_1685_, 2, v_i_1673_);
lean_closure_set(v___f_1685_, 3, v_toPure_1674_);
lean_closure_set(v___f_1685_, 4, v_y_1675_);
lean_closure_set(v___f_1685_, 5, v_k_1676_);
lean_closure_set(v___f_1685_, 6, v_c_1677_);
lean_closure_set(v___f_1685_, 7, v___x_1684_);
lean_closure_set(v___f_1685_, 8, v_inst_1679_);
lean_closure_set(v___f_1685_, 9, v_inst_1680_);
lean_closure_set(v___f_1685_, 10, v_f_1681_);
lean_closure_set(v___f_1685_, 11, v_toBind_1682_);
v___x_1686_ = l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg(v_pu_1678_, v_inst_1680_, v_f_1681_, v_y_1675_);
v___x_1687_ = lean_apply_4(v_toBind_1682_, lean_box(0), lean_box(0), v___x_1686_, v___f_1685_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__19___boxed(lean_object* v_fvarId_1688_, lean_object* v_i_1689_, lean_object* v_toPure_1690_, lean_object* v_y_1691_, lean_object* v_k_1692_, lean_object* v_c_1693_, lean_object* v_pu_1694_, lean_object* v_inst_1695_, lean_object* v_inst_1696_, lean_object* v_f_1697_, lean_object* v_toBind_1698_, lean_object* v_____do__lift_1699_){
_start:
{
uint8_t v_pu_boxed_1700_; lean_object* v_res_1701_; 
v_pu_boxed_1700_ = lean_unbox(v_pu_1694_);
v_res_1701_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__19(v_fvarId_1688_, v_i_1689_, v_toPure_1690_, v_y_1691_, v_k_1692_, v_c_1693_, v_pu_boxed_1700_, v_inst_1695_, v_inst_1696_, v_f_1697_, v_toBind_1698_, v_____do__lift_1699_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__21(lean_object* v_fvarId_1702_, lean_object* v_____do__lift_1703_, lean_object* v_i_1704_, lean_object* v_toPure_1705_, lean_object* v_y_1706_, lean_object* v_k_1707_, lean_object* v_c_1708_, uint8_t v_pu_1709_, lean_object* v_inst_1710_, lean_object* v_inst_1711_, lean_object* v_f_1712_, lean_object* v_toBind_1713_, lean_object* v_____do__lift_1714_){
_start:
{
lean_object* v___f_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
lean_inc_ref(v_k_1707_);
v___f_1715_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__20___boxed), 9, 8);
lean_closure_set(v___f_1715_, 0, v_fvarId_1702_);
lean_closure_set(v___f_1715_, 1, v_____do__lift_1703_);
lean_closure_set(v___f_1715_, 2, v_i_1704_);
lean_closure_set(v___f_1715_, 3, v_____do__lift_1714_);
lean_closure_set(v___f_1715_, 4, v_toPure_1705_);
lean_closure_set(v___f_1715_, 5, v_y_1706_);
lean_closure_set(v___f_1715_, 6, v_k_1707_);
lean_closure_set(v___f_1715_, 7, v_c_1708_);
v___x_1716_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_1709_, v_inst_1710_, v_inst_1711_, v_f_1712_, v_k_1707_);
v___x_1717_ = lean_apply_4(v_toBind_1713_, lean_box(0), lean_box(0), v___x_1716_, v___f_1715_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__21___boxed(lean_object* v_fvarId_1718_, lean_object* v_____do__lift_1719_, lean_object* v_i_1720_, lean_object* v_toPure_1721_, lean_object* v_y_1722_, lean_object* v_k_1723_, lean_object* v_c_1724_, lean_object* v_pu_1725_, lean_object* v_inst_1726_, lean_object* v_inst_1727_, lean_object* v_f_1728_, lean_object* v_toBind_1729_, lean_object* v_____do__lift_1730_){
_start:
{
uint8_t v_pu_boxed_1731_; lean_object* v_res_1732_; 
v_pu_boxed_1731_ = lean_unbox(v_pu_1725_);
v_res_1732_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__21(v_fvarId_1718_, v_____do__lift_1719_, v_i_1720_, v_toPure_1721_, v_y_1722_, v_k_1723_, v_c_1724_, v_pu_boxed_1731_, v_inst_1726_, v_inst_1727_, v_f_1728_, v_toBind_1729_, v_____do__lift_1730_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__22(lean_object* v_fvarId_1733_, lean_object* v_i_1734_, lean_object* v_toPure_1735_, lean_object* v_y_1736_, lean_object* v_k_1737_, lean_object* v_c_1738_, uint8_t v_pu_1739_, lean_object* v_inst_1740_, lean_object* v_inst_1741_, lean_object* v_f_1742_, lean_object* v_toBind_1743_, lean_object* v_____do__lift_1744_){
_start:
{
lean_object* v___x_1745_; lean_object* v___f_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1745_ = lean_box(v_pu_1739_);
lean_inc(v_toBind_1743_);
lean_inc(v_f_1742_);
lean_inc(v_y_1736_);
v___f_1746_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__21___boxed), 13, 12);
lean_closure_set(v___f_1746_, 0, v_fvarId_1733_);
lean_closure_set(v___f_1746_, 1, v_____do__lift_1744_);
lean_closure_set(v___f_1746_, 2, v_i_1734_);
lean_closure_set(v___f_1746_, 3, v_toPure_1735_);
lean_closure_set(v___f_1746_, 4, v_y_1736_);
lean_closure_set(v___f_1746_, 5, v_k_1737_);
lean_closure_set(v___f_1746_, 6, v_c_1738_);
lean_closure_set(v___f_1746_, 7, v___x_1745_);
lean_closure_set(v___f_1746_, 8, v_inst_1740_);
lean_closure_set(v___f_1746_, 9, v_inst_1741_);
lean_closure_set(v___f_1746_, 10, v_f_1742_);
lean_closure_set(v___f_1746_, 11, v_toBind_1743_);
v___x_1747_ = lean_apply_1(v_f_1742_, v_y_1736_);
v___x_1748_ = lean_apply_4(v_toBind_1743_, lean_box(0), lean_box(0), v___x_1747_, v___f_1746_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__22___boxed(lean_object* v_fvarId_1749_, lean_object* v_i_1750_, lean_object* v_toPure_1751_, lean_object* v_y_1752_, lean_object* v_k_1753_, lean_object* v_c_1754_, lean_object* v_pu_1755_, lean_object* v_inst_1756_, lean_object* v_inst_1757_, lean_object* v_f_1758_, lean_object* v_toBind_1759_, lean_object* v_____do__lift_1760_){
_start:
{
uint8_t v_pu_boxed_1761_; lean_object* v_res_1762_; 
v_pu_boxed_1761_ = lean_unbox(v_pu_1755_);
v_res_1762_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__22(v_fvarId_1749_, v_i_1750_, v_toPure_1751_, v_y_1752_, v_k_1753_, v_c_1754_, v_pu_boxed_1761_, v_inst_1756_, v_inst_1757_, v_f_1758_, v_toBind_1759_, v_____do__lift_1760_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__24(lean_object* v_fvarId_1763_, lean_object* v_____do__lift_1764_, lean_object* v_i_1765_, lean_object* v_offset_1766_, lean_object* v_____do__lift_1767_, lean_object* v_toPure_1768_, lean_object* v_y_1769_, lean_object* v_ty_1770_, lean_object* v_k_1771_, lean_object* v_c_1772_, uint8_t v_pu_1773_, lean_object* v_inst_1774_, lean_object* v_inst_1775_, lean_object* v_f_1776_, lean_object* v_toBind_1777_, lean_object* v_____do__lift_1778_){
_start:
{
lean_object* v___f_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
lean_inc_ref(v_k_1771_);
v___f_1779_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__23___boxed), 12, 11);
lean_closure_set(v___f_1779_, 0, v_fvarId_1763_);
lean_closure_set(v___f_1779_, 1, v_____do__lift_1764_);
lean_closure_set(v___f_1779_, 2, v_i_1765_);
lean_closure_set(v___f_1779_, 3, v_offset_1766_);
lean_closure_set(v___f_1779_, 4, v_____do__lift_1767_);
lean_closure_set(v___f_1779_, 5, v_____do__lift_1778_);
lean_closure_set(v___f_1779_, 6, v_toPure_1768_);
lean_closure_set(v___f_1779_, 7, v_y_1769_);
lean_closure_set(v___f_1779_, 8, v_ty_1770_);
lean_closure_set(v___f_1779_, 9, v_k_1771_);
lean_closure_set(v___f_1779_, 10, v_c_1772_);
v___x_1780_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_1773_, v_inst_1774_, v_inst_1775_, v_f_1776_, v_k_1771_);
v___x_1781_ = lean_apply_4(v_toBind_1777_, lean_box(0), lean_box(0), v___x_1780_, v___f_1779_);
return v___x_1781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__24___boxed(lean_object* v_fvarId_1782_, lean_object* v_____do__lift_1783_, lean_object* v_i_1784_, lean_object* v_offset_1785_, lean_object* v_____do__lift_1786_, lean_object* v_toPure_1787_, lean_object* v_y_1788_, lean_object* v_ty_1789_, lean_object* v_k_1790_, lean_object* v_c_1791_, lean_object* v_pu_1792_, lean_object* v_inst_1793_, lean_object* v_inst_1794_, lean_object* v_f_1795_, lean_object* v_toBind_1796_, lean_object* v_____do__lift_1797_){
_start:
{
uint8_t v_pu_boxed_1798_; lean_object* v_res_1799_; 
v_pu_boxed_1798_ = lean_unbox(v_pu_1792_);
v_res_1799_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__24(v_fvarId_1782_, v_____do__lift_1783_, v_i_1784_, v_offset_1785_, v_____do__lift_1786_, v_toPure_1787_, v_y_1788_, v_ty_1789_, v_k_1790_, v_c_1791_, v_pu_boxed_1798_, v_inst_1793_, v_inst_1794_, v_f_1795_, v_toBind_1796_, v_____do__lift_1797_);
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__25(lean_object* v_fvarId_1800_, lean_object* v_____do__lift_1801_, lean_object* v_i_1802_, lean_object* v_offset_1803_, lean_object* v_toPure_1804_, lean_object* v_y_1805_, lean_object* v_ty_1806_, lean_object* v_k_1807_, lean_object* v_c_1808_, uint8_t v_pu_1809_, lean_object* v_inst_1810_, lean_object* v_inst_1811_, lean_object* v_f_1812_, lean_object* v_toBind_1813_, lean_object* v_____do__lift_1814_){
_start:
{
lean_object* v___x_1815_; lean_object* v___f_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1815_ = lean_box(v_pu_1809_);
lean_inc(v_toBind_1813_);
lean_inc(v_f_1812_);
lean_inc_ref(v_inst_1811_);
lean_inc_ref(v_ty_1806_);
v___f_1816_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__24___boxed), 16, 15);
lean_closure_set(v___f_1816_, 0, v_fvarId_1800_);
lean_closure_set(v___f_1816_, 1, v_____do__lift_1801_);
lean_closure_set(v___f_1816_, 2, v_i_1802_);
lean_closure_set(v___f_1816_, 3, v_offset_1803_);
lean_closure_set(v___f_1816_, 4, v_____do__lift_1814_);
lean_closure_set(v___f_1816_, 5, v_toPure_1804_);
lean_closure_set(v___f_1816_, 6, v_y_1805_);
lean_closure_set(v___f_1816_, 7, v_ty_1806_);
lean_closure_set(v___f_1816_, 8, v_k_1807_);
lean_closure_set(v___f_1816_, 9, v_c_1808_);
lean_closure_set(v___f_1816_, 10, v___x_1815_);
lean_closure_set(v___f_1816_, 11, v_inst_1810_);
lean_closure_set(v___f_1816_, 12, v_inst_1811_);
lean_closure_set(v___f_1816_, 13, v_f_1812_);
lean_closure_set(v___f_1816_, 14, v_toBind_1813_);
v___x_1817_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_1811_, v_f_1812_, v_ty_1806_);
v___x_1818_ = lean_apply_4(v_toBind_1813_, lean_box(0), lean_box(0), v___x_1817_, v___f_1816_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__25___boxed(lean_object* v_fvarId_1819_, lean_object* v_____do__lift_1820_, lean_object* v_i_1821_, lean_object* v_offset_1822_, lean_object* v_toPure_1823_, lean_object* v_y_1824_, lean_object* v_ty_1825_, lean_object* v_k_1826_, lean_object* v_c_1827_, lean_object* v_pu_1828_, lean_object* v_inst_1829_, lean_object* v_inst_1830_, lean_object* v_f_1831_, lean_object* v_toBind_1832_, lean_object* v_____do__lift_1833_){
_start:
{
uint8_t v_pu_boxed_1834_; lean_object* v_res_1835_; 
v_pu_boxed_1834_ = lean_unbox(v_pu_1828_);
v_res_1835_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__25(v_fvarId_1819_, v_____do__lift_1820_, v_i_1821_, v_offset_1822_, v_toPure_1823_, v_y_1824_, v_ty_1825_, v_k_1826_, v_c_1827_, v_pu_boxed_1834_, v_inst_1829_, v_inst_1830_, v_f_1831_, v_toBind_1832_, v_____do__lift_1833_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__26(lean_object* v_fvarId_1836_, lean_object* v_i_1837_, lean_object* v_offset_1838_, lean_object* v_toPure_1839_, lean_object* v_y_1840_, lean_object* v_ty_1841_, lean_object* v_k_1842_, lean_object* v_c_1843_, uint8_t v_pu_1844_, lean_object* v_inst_1845_, lean_object* v_inst_1846_, lean_object* v_f_1847_, lean_object* v_toBind_1848_, lean_object* v_____do__lift_1849_){
_start:
{
lean_object* v___x_1850_; lean_object* v___f_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; 
v___x_1850_ = lean_box(v_pu_1844_);
lean_inc(v_toBind_1848_);
lean_inc(v_f_1847_);
lean_inc(v_y_1840_);
v___f_1851_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__25___boxed), 15, 14);
lean_closure_set(v___f_1851_, 0, v_fvarId_1836_);
lean_closure_set(v___f_1851_, 1, v_____do__lift_1849_);
lean_closure_set(v___f_1851_, 2, v_i_1837_);
lean_closure_set(v___f_1851_, 3, v_offset_1838_);
lean_closure_set(v___f_1851_, 4, v_toPure_1839_);
lean_closure_set(v___f_1851_, 5, v_y_1840_);
lean_closure_set(v___f_1851_, 6, v_ty_1841_);
lean_closure_set(v___f_1851_, 7, v_k_1842_);
lean_closure_set(v___f_1851_, 8, v_c_1843_);
lean_closure_set(v___f_1851_, 9, v___x_1850_);
lean_closure_set(v___f_1851_, 10, v_inst_1845_);
lean_closure_set(v___f_1851_, 11, v_inst_1846_);
lean_closure_set(v___f_1851_, 12, v_f_1847_);
lean_closure_set(v___f_1851_, 13, v_toBind_1848_);
v___x_1852_ = lean_apply_1(v_f_1847_, v_y_1840_);
v___x_1853_ = lean_apply_4(v_toBind_1848_, lean_box(0), lean_box(0), v___x_1852_, v___f_1851_);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__26___boxed(lean_object* v_fvarId_1854_, lean_object* v_i_1855_, lean_object* v_offset_1856_, lean_object* v_toPure_1857_, lean_object* v_y_1858_, lean_object* v_ty_1859_, lean_object* v_k_1860_, lean_object* v_c_1861_, lean_object* v_pu_1862_, lean_object* v_inst_1863_, lean_object* v_inst_1864_, lean_object* v_f_1865_, lean_object* v_toBind_1866_, lean_object* v_____do__lift_1867_){
_start:
{
uint8_t v_pu_boxed_1868_; lean_object* v_res_1869_; 
v_pu_boxed_1868_ = lean_unbox(v_pu_1862_);
v_res_1869_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__26(v_fvarId_1854_, v_i_1855_, v_offset_1856_, v_toPure_1857_, v_y_1858_, v_ty_1859_, v_k_1860_, v_c_1861_, v_pu_boxed_1868_, v_inst_1863_, v_inst_1864_, v_f_1865_, v_toBind_1866_, v_____do__lift_1867_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__28(lean_object* v_fvarId_1870_, lean_object* v_cidx_1871_, lean_object* v_toPure_1872_, lean_object* v_k_1873_, lean_object* v_c_1874_, uint8_t v_pu_1875_, lean_object* v_inst_1876_, lean_object* v_inst_1877_, lean_object* v_f_1878_, lean_object* v_toBind_1879_, lean_object* v_____do__lift_1880_){
_start:
{
lean_object* v___f_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
lean_inc_ref(v_k_1873_);
v___f_1881_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__27___boxed), 7, 6);
lean_closure_set(v___f_1881_, 0, v_fvarId_1870_);
lean_closure_set(v___f_1881_, 1, v_____do__lift_1880_);
lean_closure_set(v___f_1881_, 2, v_cidx_1871_);
lean_closure_set(v___f_1881_, 3, v_toPure_1872_);
lean_closure_set(v___f_1881_, 4, v_k_1873_);
lean_closure_set(v___f_1881_, 5, v_c_1874_);
v___x_1882_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_1875_, v_inst_1876_, v_inst_1877_, v_f_1878_, v_k_1873_);
v___x_1883_ = lean_apply_4(v_toBind_1879_, lean_box(0), lean_box(0), v___x_1882_, v___f_1881_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__28___boxed(lean_object* v_fvarId_1884_, lean_object* v_cidx_1885_, lean_object* v_toPure_1886_, lean_object* v_k_1887_, lean_object* v_c_1888_, lean_object* v_pu_1889_, lean_object* v_inst_1890_, lean_object* v_inst_1891_, lean_object* v_f_1892_, lean_object* v_toBind_1893_, lean_object* v_____do__lift_1894_){
_start:
{
uint8_t v_pu_boxed_1895_; lean_object* v_res_1896_; 
v_pu_boxed_1895_ = lean_unbox(v_pu_1889_);
v_res_1896_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__28(v_fvarId_1884_, v_cidx_1885_, v_toPure_1886_, v_k_1887_, v_c_1888_, v_pu_boxed_1895_, v_inst_1890_, v_inst_1891_, v_f_1892_, v_toBind_1893_, v_____do__lift_1894_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__30(lean_object* v_fvarId_1897_, lean_object* v_n_1898_, uint8_t v_check_1899_, uint8_t v_persistent_1900_, lean_object* v_toPure_1901_, lean_object* v_k_1902_, lean_object* v_c_1903_, uint8_t v_pu_1904_, lean_object* v_inst_1905_, lean_object* v_inst_1906_, lean_object* v_f_1907_, lean_object* v_toBind_1908_, lean_object* v_____do__lift_1909_){
_start:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___f_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1910_ = lean_box(v_check_1899_);
v___x_1911_ = lean_box(v_persistent_1900_);
lean_inc_ref(v_k_1902_);
v___f_1912_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__29___boxed), 9, 8);
lean_closure_set(v___f_1912_, 0, v_fvarId_1897_);
lean_closure_set(v___f_1912_, 1, v_____do__lift_1909_);
lean_closure_set(v___f_1912_, 2, v_n_1898_);
lean_closure_set(v___f_1912_, 3, v___x_1910_);
lean_closure_set(v___f_1912_, 4, v___x_1911_);
lean_closure_set(v___f_1912_, 5, v_toPure_1901_);
lean_closure_set(v___f_1912_, 6, v_k_1902_);
lean_closure_set(v___f_1912_, 7, v_c_1903_);
v___x_1913_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_1904_, v_inst_1905_, v_inst_1906_, v_f_1907_, v_k_1902_);
v___x_1914_ = lean_apply_4(v_toBind_1908_, lean_box(0), lean_box(0), v___x_1913_, v___f_1912_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__30___boxed(lean_object* v_fvarId_1915_, lean_object* v_n_1916_, lean_object* v_check_1917_, lean_object* v_persistent_1918_, lean_object* v_toPure_1919_, lean_object* v_k_1920_, lean_object* v_c_1921_, lean_object* v_pu_1922_, lean_object* v_inst_1923_, lean_object* v_inst_1924_, lean_object* v_f_1925_, lean_object* v_toBind_1926_, lean_object* v_____do__lift_1927_){
_start:
{
uint8_t v_check_2634__boxed_1928_; uint8_t v_persistent_2635__boxed_1929_; uint8_t v_pu_boxed_1930_; lean_object* v_res_1931_; 
v_check_2634__boxed_1928_ = lean_unbox(v_check_1917_);
v_persistent_2635__boxed_1929_ = lean_unbox(v_persistent_1918_);
v_pu_boxed_1930_ = lean_unbox(v_pu_1922_);
v_res_1931_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__30(v_fvarId_1915_, v_n_1916_, v_check_2634__boxed_1928_, v_persistent_2635__boxed_1929_, v_toPure_1919_, v_k_1920_, v_c_1921_, v_pu_boxed_1930_, v_inst_1923_, v_inst_1924_, v_f_1925_, v_toBind_1926_, v_____do__lift_1927_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__32(lean_object* v_fvarId_1932_, lean_object* v_n_1933_, uint8_t v_check_1934_, uint8_t v_persistent_1935_, lean_object* v_objs_x3f_1936_, lean_object* v_toPure_1937_, lean_object* v_k_1938_, lean_object* v_c_1939_, uint8_t v_pu_1940_, lean_object* v_inst_1941_, lean_object* v_inst_1942_, lean_object* v_f_1943_, lean_object* v_toBind_1944_, lean_object* v_____do__lift_1945_){
_start:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___f_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1946_ = lean_box(v_check_1934_);
v___x_1947_ = lean_box(v_persistent_1935_);
lean_inc_ref(v_k_1938_);
v___f_1948_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__31___boxed), 10, 9);
lean_closure_set(v___f_1948_, 0, v_fvarId_1932_);
lean_closure_set(v___f_1948_, 1, v_____do__lift_1945_);
lean_closure_set(v___f_1948_, 2, v_n_1933_);
lean_closure_set(v___f_1948_, 3, v___x_1946_);
lean_closure_set(v___f_1948_, 4, v___x_1947_);
lean_closure_set(v___f_1948_, 5, v_objs_x3f_1936_);
lean_closure_set(v___f_1948_, 6, v_toPure_1937_);
lean_closure_set(v___f_1948_, 7, v_k_1938_);
lean_closure_set(v___f_1948_, 8, v_c_1939_);
v___x_1949_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_1940_, v_inst_1941_, v_inst_1942_, v_f_1943_, v_k_1938_);
v___x_1950_ = lean_apply_4(v_toBind_1944_, lean_box(0), lean_box(0), v___x_1949_, v___f_1948_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__32___boxed(lean_object* v_fvarId_1951_, lean_object* v_n_1952_, lean_object* v_check_1953_, lean_object* v_persistent_1954_, lean_object* v_objs_x3f_1955_, lean_object* v_toPure_1956_, lean_object* v_k_1957_, lean_object* v_c_1958_, lean_object* v_pu_1959_, lean_object* v_inst_1960_, lean_object* v_inst_1961_, lean_object* v_f_1962_, lean_object* v_toBind_1963_, lean_object* v_____do__lift_1964_){
_start:
{
uint8_t v_check_2645__boxed_1965_; uint8_t v_persistent_2646__boxed_1966_; uint8_t v_pu_boxed_1967_; lean_object* v_res_1968_; 
v_check_2645__boxed_1965_ = lean_unbox(v_check_1953_);
v_persistent_2646__boxed_1966_ = lean_unbox(v_persistent_1954_);
v_pu_boxed_1967_ = lean_unbox(v_pu_1959_);
v_res_1968_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__32(v_fvarId_1951_, v_n_1952_, v_check_2645__boxed_1965_, v_persistent_2646__boxed_1966_, v_objs_x3f_1955_, v_toPure_1956_, v_k_1957_, v_c_1958_, v_pu_boxed_1967_, v_inst_1960_, v_inst_1961_, v_f_1962_, v_toBind_1963_, v_____do__lift_1964_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__34(lean_object* v_fvarId_1969_, lean_object* v_toPure_1970_, lean_object* v_k_1971_, lean_object* v_c_1972_, uint8_t v_pu_1973_, lean_object* v_inst_1974_, lean_object* v_inst_1975_, lean_object* v_f_1976_, lean_object* v_toBind_1977_, lean_object* v_____do__lift_1978_){
_start:
{
lean_object* v___f_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
lean_inc_ref(v_k_1971_);
v___f_1979_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__33___boxed), 6, 5);
lean_closure_set(v___f_1979_, 0, v_fvarId_1969_);
lean_closure_set(v___f_1979_, 1, v_____do__lift_1978_);
lean_closure_set(v___f_1979_, 2, v_toPure_1970_);
lean_closure_set(v___f_1979_, 3, v_k_1971_);
lean_closure_set(v___f_1979_, 4, v_c_1972_);
v___x_1980_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_1973_, v_inst_1974_, v_inst_1975_, v_f_1976_, v_k_1971_);
v___x_1981_ = lean_apply_4(v_toBind_1977_, lean_box(0), lean_box(0), v___x_1980_, v___f_1979_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__34___boxed(lean_object* v_fvarId_1982_, lean_object* v_toPure_1983_, lean_object* v_k_1984_, lean_object* v_c_1985_, lean_object* v_pu_1986_, lean_object* v_inst_1987_, lean_object* v_inst_1988_, lean_object* v_f_1989_, lean_object* v_toBind_1990_, lean_object* v_____do__lift_1991_){
_start:
{
uint8_t v_pu_boxed_1992_; lean_object* v_res_1993_; 
v_pu_boxed_1992_ = lean_unbox(v_pu_1986_);
v_res_1993_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__34(v_fvarId_1982_, v_toPure_1983_, v_k_1984_, v_c_1985_, v_pu_boxed_1992_, v_inst_1987_, v_inst_1988_, v_f_1989_, v_toBind_1990_, v_____do__lift_1991_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(uint8_t v_pu_1994_, lean_object* v_inst_1995_, lean_object* v_inst_1996_, lean_object* v_f_1997_, lean_object* v_c_1998_){
_start:
{
switch(lean_obj_tag(v_c_1998_))
{
case 0:
{
lean_object* v_toApplicative_1999_; lean_object* v_toBind_2000_; lean_object* v_toPure_2001_; lean_object* v_decl_2002_; lean_object* v_k_2003_; lean_object* v___x_2004_; lean_object* v___f_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v_toApplicative_1999_ = lean_ctor_get(v_inst_1996_, 0);
v_toBind_2000_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2000_, 2);
v_toPure_2001_ = lean_ctor_get(v_toApplicative_1999_, 1);
v_decl_2002_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_ref_n(v_decl_2002_, 2);
v_k_2003_ = lean_ctor_get(v_c_1998_, 1);
lean_inc_ref(v_k_2003_);
v___x_2004_ = lean_box(v_pu_1994_);
lean_inc(v_f_1997_);
lean_inc_ref(v_inst_1996_);
lean_inc(v_inst_1995_);
lean_inc(v_toPure_2001_);
v___f_2005_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__1___boxed), 10, 9);
lean_closure_set(v___f_2005_, 0, v_k_2003_);
lean_closure_set(v___f_2005_, 1, v_toPure_2001_);
lean_closure_set(v___f_2005_, 2, v_decl_2002_);
lean_closure_set(v___f_2005_, 3, v_c_1998_);
lean_closure_set(v___f_2005_, 4, v___x_2004_);
lean_closure_set(v___f_2005_, 5, v_inst_1995_);
lean_closure_set(v___f_2005_, 6, v_inst_1996_);
lean_closure_set(v___f_2005_, 7, v_f_1997_);
lean_closure_set(v___f_2005_, 8, v_toBind_2000_);
v___x_2006_ = l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg(v_pu_1994_, v_inst_1995_, v_inst_1996_, v_f_1997_, v_decl_2002_);
v___x_2007_ = lean_apply_4(v_toBind_2000_, lean_box(0), lean_box(0), v___x_2006_, v___f_2005_);
return v___x_2007_;
}
case 1:
{
lean_object* v_toApplicative_2008_; lean_object* v_decl_2009_; lean_object* v_toBind_2010_; lean_object* v_toPure_2011_; lean_object* v_k_2012_; lean_object* v_params_2013_; lean_object* v_type_2014_; lean_object* v_value_2015_; lean_object* v___x_2016_; lean_object* v___f_2017_; lean_object* v___x_2018_; lean_object* v___f_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; size_t v_sz_2022_; size_t v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; 
v_toApplicative_2008_ = lean_ctor_get(v_inst_1996_, 0);
v_decl_2009_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_ref_n(v_decl_2009_, 2);
v_toBind_2010_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2010_, 3);
v_toPure_2011_ = lean_ctor_get(v_toApplicative_2008_, 1);
v_k_2012_ = lean_ctor_get(v_c_1998_, 1);
lean_inc_ref(v_k_2012_);
v_params_2013_ = lean_ctor_get(v_decl_2009_, 2);
lean_inc_ref(v_params_2013_);
v_type_2014_ = lean_ctor_get(v_decl_2009_, 3);
lean_inc_ref(v_type_2014_);
v_value_2015_ = lean_ctor_get(v_decl_2009_, 4);
lean_inc_ref(v_value_2015_);
v___x_2016_ = lean_box(v_pu_1994_);
lean_inc_n(v_f_1997_, 2);
lean_inc_ref_n(v_inst_1996_, 3);
lean_inc_n(v_inst_1995_, 2);
lean_inc(v_toPure_2011_);
v___f_2017_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__3___boxed), 10, 9);
lean_closure_set(v___f_2017_, 0, v_k_2012_);
lean_closure_set(v___f_2017_, 1, v_toPure_2011_);
lean_closure_set(v___f_2017_, 2, v_decl_2009_);
lean_closure_set(v___f_2017_, 3, v_c_1998_);
lean_closure_set(v___f_2017_, 4, v___x_2016_);
lean_closure_set(v___f_2017_, 5, v_inst_1995_);
lean_closure_set(v___f_2017_, 6, v_inst_1996_);
lean_closure_set(v___f_2017_, 7, v_f_1997_);
lean_closure_set(v___f_2017_, 8, v_toBind_2010_);
v___x_2018_ = lean_box(v_pu_1994_);
v___f_2019_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__6___boxed), 10, 9);
lean_closure_set(v___f_2019_, 0, v___x_2018_);
lean_closure_set(v___f_2019_, 1, v_decl_2009_);
lean_closure_set(v___f_2019_, 2, v_inst_1995_);
lean_closure_set(v___f_2019_, 3, v_toBind_2010_);
lean_closure_set(v___f_2019_, 4, v___f_2017_);
lean_closure_set(v___f_2019_, 5, v_inst_1996_);
lean_closure_set(v___f_2019_, 6, v_f_1997_);
lean_closure_set(v___f_2019_, 7, v_value_2015_);
lean_closure_set(v___f_2019_, 8, v_type_2014_);
v___x_2020_ = lean_box(v_pu_1994_);
v___x_2021_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Param_mapFVarM___boxed), 6, 5);
lean_closure_set(v___x_2021_, 0, lean_box(0));
lean_closure_set(v___x_2021_, 1, v___x_2020_);
lean_closure_set(v___x_2021_, 2, v_inst_1995_);
lean_closure_set(v___x_2021_, 3, v_inst_1996_);
lean_closure_set(v___x_2021_, 4, v_f_1997_);
v_sz_2022_ = lean_array_size(v_params_2013_);
v___x_2023_ = ((size_t)0ULL);
v___x_2024_ = l_unsafeCast___redArg(v_params_2013_);
lean_dec_ref(v_params_2013_);
v___x_2025_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_1996_, v___x_2021_, v_sz_2022_, v___x_2023_, v___x_2024_);
v___x_2026_ = l_unsafeCast___redArg(v___x_2025_);
lean_dec(v___x_2025_);
v___x_2027_ = lean_apply_4(v_toBind_2010_, lean_box(0), lean_box(0), v___x_2026_, v___f_2019_);
return v___x_2027_;
}
case 2:
{
lean_object* v_toApplicative_2028_; lean_object* v_decl_2029_; lean_object* v_toBind_2030_; lean_object* v_toPure_2031_; lean_object* v_k_2032_; lean_object* v_params_2033_; lean_object* v_type_2034_; lean_object* v_value_2035_; lean_object* v___x_2036_; lean_object* v___f_2037_; lean_object* v___x_2038_; lean_object* v___f_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; size_t v_sz_2042_; size_t v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; 
v_toApplicative_2028_ = lean_ctor_get(v_inst_1996_, 0);
v_decl_2029_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_ref_n(v_decl_2029_, 2);
v_toBind_2030_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2030_, 3);
v_toPure_2031_ = lean_ctor_get(v_toApplicative_2028_, 1);
v_k_2032_ = lean_ctor_get(v_c_1998_, 1);
lean_inc_ref(v_k_2032_);
v_params_2033_ = lean_ctor_get(v_decl_2029_, 2);
lean_inc_ref(v_params_2033_);
v_type_2034_ = lean_ctor_get(v_decl_2029_, 3);
lean_inc_ref(v_type_2034_);
v_value_2035_ = lean_ctor_get(v_decl_2029_, 4);
lean_inc_ref(v_value_2035_);
v___x_2036_ = lean_box(v_pu_1994_);
lean_inc_n(v_f_1997_, 2);
lean_inc_ref_n(v_inst_1996_, 3);
lean_inc_n(v_inst_1995_, 2);
lean_inc(v_toPure_2031_);
v___f_2037_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__8___boxed), 10, 9);
lean_closure_set(v___f_2037_, 0, v_k_2032_);
lean_closure_set(v___f_2037_, 1, v_toPure_2031_);
lean_closure_set(v___f_2037_, 2, v_decl_2029_);
lean_closure_set(v___f_2037_, 3, v_c_1998_);
lean_closure_set(v___f_2037_, 4, v___x_2036_);
lean_closure_set(v___f_2037_, 5, v_inst_1995_);
lean_closure_set(v___f_2037_, 6, v_inst_1996_);
lean_closure_set(v___f_2037_, 7, v_f_1997_);
lean_closure_set(v___f_2037_, 8, v_toBind_2030_);
v___x_2038_ = lean_box(v_pu_1994_);
v___f_2039_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__6___boxed), 10, 9);
lean_closure_set(v___f_2039_, 0, v___x_2038_);
lean_closure_set(v___f_2039_, 1, v_decl_2029_);
lean_closure_set(v___f_2039_, 2, v_inst_1995_);
lean_closure_set(v___f_2039_, 3, v_toBind_2030_);
lean_closure_set(v___f_2039_, 4, v___f_2037_);
lean_closure_set(v___f_2039_, 5, v_inst_1996_);
lean_closure_set(v___f_2039_, 6, v_f_1997_);
lean_closure_set(v___f_2039_, 7, v_value_2035_);
lean_closure_set(v___f_2039_, 8, v_type_2034_);
v___x_2040_ = lean_box(v_pu_1994_);
v___x_2041_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Param_mapFVarM___boxed), 6, 5);
lean_closure_set(v___x_2041_, 0, lean_box(0));
lean_closure_set(v___x_2041_, 1, v___x_2040_);
lean_closure_set(v___x_2041_, 2, v_inst_1995_);
lean_closure_set(v___x_2041_, 3, v_inst_1996_);
lean_closure_set(v___x_2041_, 4, v_f_1997_);
v_sz_2042_ = lean_array_size(v_params_2033_);
v___x_2043_ = ((size_t)0ULL);
v___x_2044_ = l_unsafeCast___redArg(v_params_2033_);
lean_dec_ref(v_params_2033_);
v___x_2045_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_1996_, v___x_2041_, v_sz_2042_, v___x_2043_, v___x_2044_);
v___x_2046_ = l_unsafeCast___redArg(v___x_2045_);
lean_dec(v___x_2045_);
v___x_2047_ = lean_apply_4(v_toBind_2030_, lean_box(0), lean_box(0), v___x_2046_, v___f_2039_);
return v___x_2047_;
}
case 3:
{
lean_object* v_toApplicative_2048_; lean_object* v_toBind_2049_; lean_object* v_toPure_2050_; lean_object* v_fvarId_2051_; lean_object* v_args_2052_; lean_object* v___x_2053_; lean_object* v___f_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
v_toApplicative_2048_ = lean_ctor_get(v_inst_1996_, 0);
v_toBind_2049_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2049_, 2);
v_toPure_2050_ = lean_ctor_get(v_toApplicative_2048_, 1);
lean_inc(v_toPure_2050_);
v_fvarId_2051_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_n(v_fvarId_2051_, 2);
v_args_2052_ = lean_ctor_get(v_c_1998_, 1);
lean_inc_ref(v_args_2052_);
v___x_2053_ = lean_box(v_pu_1994_);
lean_inc(v_f_1997_);
v___f_2054_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__9___boxed), 10, 9);
lean_closure_set(v___f_2054_, 0, v_toPure_2050_);
lean_closure_set(v___f_2054_, 1, v_c_1998_);
lean_closure_set(v___f_2054_, 2, v_fvarId_2051_);
lean_closure_set(v___f_2054_, 3, v_args_2052_);
lean_closure_set(v___f_2054_, 4, v___x_2053_);
lean_closure_set(v___f_2054_, 5, v_inst_1995_);
lean_closure_set(v___f_2054_, 6, v_inst_1996_);
lean_closure_set(v___f_2054_, 7, v_f_1997_);
lean_closure_set(v___f_2054_, 8, v_toBind_2049_);
v___x_2055_ = lean_apply_1(v_f_1997_, v_fvarId_2051_);
v___x_2056_ = lean_apply_4(v_toBind_2049_, lean_box(0), lean_box(0), v___x_2055_, v___f_2054_);
return v___x_2056_;
}
case 4:
{
lean_object* v_toApplicative_2057_; lean_object* v_cases_2058_; lean_object* v_toBind_2059_; lean_object* v_toPure_2060_; lean_object* v_typeName_2061_; lean_object* v_resultType_2062_; lean_object* v_discr_2063_; lean_object* v_alts_2064_; lean_object* v___x_2065_; lean_object* v___f_2066_; lean_object* v___f_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
v_toApplicative_2057_ = lean_ctor_get(v_inst_1996_, 0);
v_cases_2058_ = lean_ctor_get(v_c_1998_, 0);
v_toBind_2059_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2059_, 2);
v_toPure_2060_ = lean_ctor_get(v_toApplicative_2057_, 1);
v_typeName_2061_ = lean_ctor_get(v_cases_2058_, 0);
lean_inc(v_typeName_2061_);
v_resultType_2062_ = lean_ctor_get(v_cases_2058_, 1);
lean_inc_ref_n(v_resultType_2062_, 2);
v_discr_2063_ = lean_ctor_get(v_cases_2058_, 2);
lean_inc(v_discr_2063_);
v_alts_2064_ = lean_ctor_get(v_cases_2058_, 3);
lean_inc_ref(v_alts_2064_);
v___x_2065_ = lean_box(v_pu_1994_);
lean_inc_n(v_f_1997_, 2);
lean_inc_ref_n(v_inst_1996_, 2);
v___f_2066_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__10___boxed), 5, 4);
lean_closure_set(v___f_2066_, 0, v___x_2065_);
lean_closure_set(v___f_2066_, 1, v_inst_1995_);
lean_closure_set(v___f_2066_, 2, v_inst_1996_);
lean_closure_set(v___f_2066_, 3, v_f_1997_);
lean_inc(v_toPure_2060_);
v___f_2067_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__14), 11, 10);
lean_closure_set(v___f_2067_, 0, v_typeName_2061_);
lean_closure_set(v___f_2067_, 1, v_toPure_2060_);
lean_closure_set(v___f_2067_, 2, v_alts_2064_);
lean_closure_set(v___f_2067_, 3, v_resultType_2062_);
lean_closure_set(v___f_2067_, 4, v_discr_2063_);
lean_closure_set(v___f_2067_, 5, v_c_1998_);
lean_closure_set(v___f_2067_, 6, v_inst_1996_);
lean_closure_set(v___f_2067_, 7, v___f_2066_);
lean_closure_set(v___f_2067_, 8, v_toBind_2059_);
lean_closure_set(v___f_2067_, 9, v_f_1997_);
v___x_2068_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_1996_, v_f_1997_, v_resultType_2062_);
v___x_2069_ = lean_apply_4(v_toBind_2059_, lean_box(0), lean_box(0), v___x_2068_, v___f_2067_);
return v___x_2069_;
}
case 5:
{
lean_object* v_toApplicative_2070_; lean_object* v_toBind_2071_; lean_object* v_toPure_2072_; lean_object* v_fvarId_2073_; lean_object* v___f_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; 
v_toApplicative_2070_ = lean_ctor_get(v_inst_1996_, 0);
lean_inc_ref(v_toApplicative_2070_);
lean_dec(v_inst_1995_);
v_toBind_2071_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc(v_toBind_2071_);
lean_dec_ref(v_inst_1996_);
v_toPure_2072_ = lean_ctor_get(v_toApplicative_2070_, 1);
lean_inc(v_toPure_2072_);
lean_dec_ref(v_toApplicative_2070_);
v_fvarId_2073_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_n(v_fvarId_2073_, 2);
v___f_2074_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__15___boxed), 4, 3);
lean_closure_set(v___f_2074_, 0, v_fvarId_2073_);
lean_closure_set(v___f_2074_, 1, v_toPure_2072_);
lean_closure_set(v___f_2074_, 2, v_c_1998_);
v___x_2075_ = lean_apply_1(v_f_1997_, v_fvarId_2073_);
v___x_2076_ = lean_apply_4(v_toBind_2071_, lean_box(0), lean_box(0), v___x_2075_, v___f_2074_);
return v___x_2076_;
}
case 6:
{
lean_object* v_toApplicative_2077_; lean_object* v_toBind_2078_; lean_object* v_toPure_2079_; lean_object* v_type_2080_; lean_object* v___f_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v_toApplicative_2077_ = lean_ctor_get(v_inst_1996_, 0);
lean_dec(v_inst_1995_);
v_toBind_2078_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc(v_toBind_2078_);
v_toPure_2079_ = lean_ctor_get(v_toApplicative_2077_, 1);
v_type_2080_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_ref_n(v_type_2080_, 2);
lean_inc(v_toPure_2079_);
v___f_2081_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__16___boxed), 4, 3);
lean_closure_set(v___f_2081_, 0, v_type_2080_);
lean_closure_set(v___f_2081_, 1, v_toPure_2079_);
lean_closure_set(v___f_2081_, 2, v_c_1998_);
v___x_2082_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_1996_, v_f_1997_, v_type_2080_);
v___x_2083_ = lean_apply_4(v_toBind_2078_, lean_box(0), lean_box(0), v___x_2082_, v___f_2081_);
return v___x_2083_;
}
case 7:
{
lean_object* v_toApplicative_2084_; lean_object* v_toBind_2085_; lean_object* v_toPure_2086_; lean_object* v_fvarId_2087_; lean_object* v_i_2088_; lean_object* v_y_2089_; lean_object* v_k_2090_; lean_object* v___x_2091_; lean_object* v___f_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v_toApplicative_2084_ = lean_ctor_get(v_inst_1996_, 0);
v_toBind_2085_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2085_, 2);
v_toPure_2086_ = lean_ctor_get(v_toApplicative_2084_, 1);
lean_inc(v_toPure_2086_);
v_fvarId_2087_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_n(v_fvarId_2087_, 2);
v_i_2088_ = lean_ctor_get(v_c_1998_, 1);
lean_inc(v_i_2088_);
v_y_2089_ = lean_ctor_get(v_c_1998_, 2);
lean_inc(v_y_2089_);
v_k_2090_ = lean_ctor_get(v_c_1998_, 3);
lean_inc_ref(v_k_2090_);
v___x_2091_ = lean_box(v_pu_1994_);
lean_inc(v_f_1997_);
v___f_2092_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__19___boxed), 12, 11);
lean_closure_set(v___f_2092_, 0, v_fvarId_2087_);
lean_closure_set(v___f_2092_, 1, v_i_2088_);
lean_closure_set(v___f_2092_, 2, v_toPure_2086_);
lean_closure_set(v___f_2092_, 3, v_y_2089_);
lean_closure_set(v___f_2092_, 4, v_k_2090_);
lean_closure_set(v___f_2092_, 5, v_c_1998_);
lean_closure_set(v___f_2092_, 6, v___x_2091_);
lean_closure_set(v___f_2092_, 7, v_inst_1995_);
lean_closure_set(v___f_2092_, 8, v_inst_1996_);
lean_closure_set(v___f_2092_, 9, v_f_1997_);
lean_closure_set(v___f_2092_, 10, v_toBind_2085_);
v___x_2093_ = lean_apply_1(v_f_1997_, v_fvarId_2087_);
v___x_2094_ = lean_apply_4(v_toBind_2085_, lean_box(0), lean_box(0), v___x_2093_, v___f_2092_);
return v___x_2094_;
}
case 8:
{
lean_object* v_toApplicative_2095_; lean_object* v_toBind_2096_; lean_object* v_toPure_2097_; lean_object* v_fvarId_2098_; lean_object* v_i_2099_; lean_object* v_y_2100_; lean_object* v_k_2101_; lean_object* v___x_2102_; lean_object* v___f_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v_toApplicative_2095_ = lean_ctor_get(v_inst_1996_, 0);
v_toBind_2096_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2096_, 2);
v_toPure_2097_ = lean_ctor_get(v_toApplicative_2095_, 1);
lean_inc(v_toPure_2097_);
v_fvarId_2098_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_n(v_fvarId_2098_, 2);
v_i_2099_ = lean_ctor_get(v_c_1998_, 1);
lean_inc(v_i_2099_);
v_y_2100_ = lean_ctor_get(v_c_1998_, 2);
lean_inc(v_y_2100_);
v_k_2101_ = lean_ctor_get(v_c_1998_, 3);
lean_inc_ref(v_k_2101_);
v___x_2102_ = lean_box(v_pu_1994_);
lean_inc(v_f_1997_);
v___f_2103_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__22___boxed), 12, 11);
lean_closure_set(v___f_2103_, 0, v_fvarId_2098_);
lean_closure_set(v___f_2103_, 1, v_i_2099_);
lean_closure_set(v___f_2103_, 2, v_toPure_2097_);
lean_closure_set(v___f_2103_, 3, v_y_2100_);
lean_closure_set(v___f_2103_, 4, v_k_2101_);
lean_closure_set(v___f_2103_, 5, v_c_1998_);
lean_closure_set(v___f_2103_, 6, v___x_2102_);
lean_closure_set(v___f_2103_, 7, v_inst_1995_);
lean_closure_set(v___f_2103_, 8, v_inst_1996_);
lean_closure_set(v___f_2103_, 9, v_f_1997_);
lean_closure_set(v___f_2103_, 10, v_toBind_2096_);
v___x_2104_ = lean_apply_1(v_f_1997_, v_fvarId_2098_);
v___x_2105_ = lean_apply_4(v_toBind_2096_, lean_box(0), lean_box(0), v___x_2104_, v___f_2103_);
return v___x_2105_;
}
case 9:
{
lean_object* v_toApplicative_2106_; lean_object* v_toBind_2107_; lean_object* v_toPure_2108_; lean_object* v_fvarId_2109_; lean_object* v_i_2110_; lean_object* v_offset_2111_; lean_object* v_y_2112_; lean_object* v_ty_2113_; lean_object* v_k_2114_; lean_object* v___x_2115_; lean_object* v___f_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v_toApplicative_2106_ = lean_ctor_get(v_inst_1996_, 0);
v_toBind_2107_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2107_, 2);
v_toPure_2108_ = lean_ctor_get(v_toApplicative_2106_, 1);
lean_inc(v_toPure_2108_);
v_fvarId_2109_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_n(v_fvarId_2109_, 2);
v_i_2110_ = lean_ctor_get(v_c_1998_, 1);
lean_inc(v_i_2110_);
v_offset_2111_ = lean_ctor_get(v_c_1998_, 2);
lean_inc(v_offset_2111_);
v_y_2112_ = lean_ctor_get(v_c_1998_, 3);
lean_inc(v_y_2112_);
v_ty_2113_ = lean_ctor_get(v_c_1998_, 4);
lean_inc_ref(v_ty_2113_);
v_k_2114_ = lean_ctor_get(v_c_1998_, 5);
lean_inc_ref(v_k_2114_);
v___x_2115_ = lean_box(v_pu_1994_);
lean_inc(v_f_1997_);
v___f_2116_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__26___boxed), 14, 13);
lean_closure_set(v___f_2116_, 0, v_fvarId_2109_);
lean_closure_set(v___f_2116_, 1, v_i_2110_);
lean_closure_set(v___f_2116_, 2, v_offset_2111_);
lean_closure_set(v___f_2116_, 3, v_toPure_2108_);
lean_closure_set(v___f_2116_, 4, v_y_2112_);
lean_closure_set(v___f_2116_, 5, v_ty_2113_);
lean_closure_set(v___f_2116_, 6, v_k_2114_);
lean_closure_set(v___f_2116_, 7, v_c_1998_);
lean_closure_set(v___f_2116_, 8, v___x_2115_);
lean_closure_set(v___f_2116_, 9, v_inst_1995_);
lean_closure_set(v___f_2116_, 10, v_inst_1996_);
lean_closure_set(v___f_2116_, 11, v_f_1997_);
lean_closure_set(v___f_2116_, 12, v_toBind_2107_);
v___x_2117_ = lean_apply_1(v_f_1997_, v_fvarId_2109_);
v___x_2118_ = lean_apply_4(v_toBind_2107_, lean_box(0), lean_box(0), v___x_2117_, v___f_2116_);
return v___x_2118_;
}
case 10:
{
lean_object* v_toApplicative_2119_; lean_object* v_toBind_2120_; lean_object* v_toPure_2121_; lean_object* v_fvarId_2122_; lean_object* v_cidx_2123_; lean_object* v_k_2124_; lean_object* v___x_2125_; lean_object* v___f_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v_toApplicative_2119_ = lean_ctor_get(v_inst_1996_, 0);
v_toBind_2120_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2120_, 2);
v_toPure_2121_ = lean_ctor_get(v_toApplicative_2119_, 1);
lean_inc(v_toPure_2121_);
v_fvarId_2122_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_n(v_fvarId_2122_, 2);
v_cidx_2123_ = lean_ctor_get(v_c_1998_, 1);
lean_inc(v_cidx_2123_);
v_k_2124_ = lean_ctor_get(v_c_1998_, 2);
lean_inc_ref(v_k_2124_);
v___x_2125_ = lean_box(v_pu_1994_);
lean_inc(v_f_1997_);
v___f_2126_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__28___boxed), 11, 10);
lean_closure_set(v___f_2126_, 0, v_fvarId_2122_);
lean_closure_set(v___f_2126_, 1, v_cidx_2123_);
lean_closure_set(v___f_2126_, 2, v_toPure_2121_);
lean_closure_set(v___f_2126_, 3, v_k_2124_);
lean_closure_set(v___f_2126_, 4, v_c_1998_);
lean_closure_set(v___f_2126_, 5, v___x_2125_);
lean_closure_set(v___f_2126_, 6, v_inst_1995_);
lean_closure_set(v___f_2126_, 7, v_inst_1996_);
lean_closure_set(v___f_2126_, 8, v_f_1997_);
lean_closure_set(v___f_2126_, 9, v_toBind_2120_);
v___x_2127_ = lean_apply_1(v_f_1997_, v_fvarId_2122_);
v___x_2128_ = lean_apply_4(v_toBind_2120_, lean_box(0), lean_box(0), v___x_2127_, v___f_2126_);
return v___x_2128_;
}
case 11:
{
lean_object* v_toApplicative_2129_; lean_object* v_toBind_2130_; lean_object* v_toPure_2131_; lean_object* v_fvarId_2132_; lean_object* v_n_2133_; uint8_t v_check_2134_; uint8_t v_persistent_2135_; lean_object* v_k_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___f_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; 
v_toApplicative_2129_ = lean_ctor_get(v_inst_1996_, 0);
v_toBind_2130_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2130_, 2);
v_toPure_2131_ = lean_ctor_get(v_toApplicative_2129_, 1);
lean_inc(v_toPure_2131_);
v_fvarId_2132_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_n(v_fvarId_2132_, 2);
v_n_2133_ = lean_ctor_get(v_c_1998_, 1);
lean_inc(v_n_2133_);
v_check_2134_ = lean_ctor_get_uint8(v_c_1998_, sizeof(void*)*3);
v_persistent_2135_ = lean_ctor_get_uint8(v_c_1998_, sizeof(void*)*3 + 1);
v_k_2136_ = lean_ctor_get(v_c_1998_, 2);
lean_inc_ref(v_k_2136_);
v___x_2137_ = lean_box(v_check_2134_);
v___x_2138_ = lean_box(v_persistent_2135_);
v___x_2139_ = lean_box(v_pu_1994_);
lean_inc(v_f_1997_);
v___f_2140_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__30___boxed), 13, 12);
lean_closure_set(v___f_2140_, 0, v_fvarId_2132_);
lean_closure_set(v___f_2140_, 1, v_n_2133_);
lean_closure_set(v___f_2140_, 2, v___x_2137_);
lean_closure_set(v___f_2140_, 3, v___x_2138_);
lean_closure_set(v___f_2140_, 4, v_toPure_2131_);
lean_closure_set(v___f_2140_, 5, v_k_2136_);
lean_closure_set(v___f_2140_, 6, v_c_1998_);
lean_closure_set(v___f_2140_, 7, v___x_2139_);
lean_closure_set(v___f_2140_, 8, v_inst_1995_);
lean_closure_set(v___f_2140_, 9, v_inst_1996_);
lean_closure_set(v___f_2140_, 10, v_f_1997_);
lean_closure_set(v___f_2140_, 11, v_toBind_2130_);
v___x_2141_ = lean_apply_1(v_f_1997_, v_fvarId_2132_);
v___x_2142_ = lean_apply_4(v_toBind_2130_, lean_box(0), lean_box(0), v___x_2141_, v___f_2140_);
return v___x_2142_;
}
case 12:
{
lean_object* v_toApplicative_2143_; lean_object* v_toBind_2144_; lean_object* v_toPure_2145_; lean_object* v_fvarId_2146_; lean_object* v_n_2147_; uint8_t v_check_2148_; uint8_t v_persistent_2149_; lean_object* v_objs_x3f_2150_; lean_object* v_k_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___f_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v_toApplicative_2143_ = lean_ctor_get(v_inst_1996_, 0);
v_toBind_2144_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2144_, 2);
v_toPure_2145_ = lean_ctor_get(v_toApplicative_2143_, 1);
lean_inc(v_toPure_2145_);
v_fvarId_2146_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_n(v_fvarId_2146_, 2);
v_n_2147_ = lean_ctor_get(v_c_1998_, 1);
lean_inc(v_n_2147_);
v_check_2148_ = lean_ctor_get_uint8(v_c_1998_, sizeof(void*)*4);
v_persistent_2149_ = lean_ctor_get_uint8(v_c_1998_, sizeof(void*)*4 + 1);
v_objs_x3f_2150_ = lean_ctor_get(v_c_1998_, 2);
lean_inc(v_objs_x3f_2150_);
v_k_2151_ = lean_ctor_get(v_c_1998_, 3);
lean_inc_ref(v_k_2151_);
v___x_2152_ = lean_box(v_check_2148_);
v___x_2153_ = lean_box(v_persistent_2149_);
v___x_2154_ = lean_box(v_pu_1994_);
lean_inc(v_f_1997_);
v___f_2155_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__32___boxed), 14, 13);
lean_closure_set(v___f_2155_, 0, v_fvarId_2146_);
lean_closure_set(v___f_2155_, 1, v_n_2147_);
lean_closure_set(v___f_2155_, 2, v___x_2152_);
lean_closure_set(v___f_2155_, 3, v___x_2153_);
lean_closure_set(v___f_2155_, 4, v_objs_x3f_2150_);
lean_closure_set(v___f_2155_, 5, v_toPure_2145_);
lean_closure_set(v___f_2155_, 6, v_k_2151_);
lean_closure_set(v___f_2155_, 7, v_c_1998_);
lean_closure_set(v___f_2155_, 8, v___x_2154_);
lean_closure_set(v___f_2155_, 9, v_inst_1995_);
lean_closure_set(v___f_2155_, 10, v_inst_1996_);
lean_closure_set(v___f_2155_, 11, v_f_1997_);
lean_closure_set(v___f_2155_, 12, v_toBind_2144_);
v___x_2156_ = lean_apply_1(v_f_1997_, v_fvarId_2146_);
v___x_2157_ = lean_apply_4(v_toBind_2144_, lean_box(0), lean_box(0), v___x_2156_, v___f_2155_);
return v___x_2157_;
}
default: 
{
lean_object* v_toApplicative_2158_; lean_object* v_toBind_2159_; lean_object* v_toPure_2160_; lean_object* v_fvarId_2161_; lean_object* v_k_2162_; lean_object* v___x_2163_; lean_object* v___f_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v_toApplicative_2158_ = lean_ctor_get(v_inst_1996_, 0);
v_toBind_2159_ = lean_ctor_get(v_inst_1996_, 1);
lean_inc_n(v_toBind_2159_, 2);
v_toPure_2160_ = lean_ctor_get(v_toApplicative_2158_, 1);
lean_inc(v_toPure_2160_);
v_fvarId_2161_ = lean_ctor_get(v_c_1998_, 0);
lean_inc_n(v_fvarId_2161_, 2);
v_k_2162_ = lean_ctor_get(v_c_1998_, 1);
lean_inc_ref(v_k_2162_);
v___x_2163_ = lean_box(v_pu_1994_);
lean_inc(v_f_1997_);
v___f_2164_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__34___boxed), 10, 9);
lean_closure_set(v___f_2164_, 0, v_fvarId_2161_);
lean_closure_set(v___f_2164_, 1, v_toPure_2160_);
lean_closure_set(v___f_2164_, 2, v_k_2162_);
lean_closure_set(v___f_2164_, 3, v_c_1998_);
lean_closure_set(v___f_2164_, 4, v___x_2163_);
lean_closure_set(v___f_2164_, 5, v_inst_1995_);
lean_closure_set(v___f_2164_, 6, v_inst_1996_);
lean_closure_set(v___f_2164_, 7, v_f_1997_);
lean_closure_set(v___f_2164_, 8, v_toBind_2159_);
v___x_2165_ = lean_apply_1(v_f_1997_, v_fvarId_2161_);
v___x_2166_ = lean_apply_4(v_toBind_2159_, lean_box(0), lean_box(0), v___x_2165_, v___f_2164_);
return v___x_2166_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___boxed(lean_object* v_pu_2167_, lean_object* v_inst_2168_, lean_object* v_inst_2169_, lean_object* v_f_2170_, lean_object* v_c_2171_){
_start:
{
uint8_t v_pu_boxed_2172_; lean_object* v_res_2173_; 
v_pu_boxed_2172_ = lean_unbox(v_pu_2167_);
v_res_2173_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_boxed_2172_, v_inst_2168_, v_inst_2169_, v_f_2170_, v_c_2171_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___lam__10(uint8_t v_pu_2174_, lean_object* v_inst_2175_, lean_object* v_inst_2176_, lean_object* v_f_2177_, lean_object* v_x_2178_){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2179_ = lean_box(v_pu_2174_);
lean_inc_ref(v_inst_2176_);
v___x_2180_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_mapFVarM___redArg___boxed), 5, 4);
lean_closure_set(v___x_2180_, 0, v___x_2179_);
lean_closure_set(v___x_2180_, 1, v_inst_2175_);
lean_closure_set(v___x_2180_, 2, v_inst_2176_);
lean_closure_set(v___x_2180_, 3, v_f_2177_);
v___x_2181_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___redArg(v_inst_2176_, v_x_2178_, v___x_2180_);
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM(lean_object* v_m_2182_, uint8_t v_pu_2183_, lean_object* v_inst_2184_, lean_object* v_inst_2185_, lean_object* v_f_2186_, lean_object* v_c_2187_){
_start:
{
lean_object* v___x_2188_; 
v___x_2188_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_2183_, v_inst_2184_, v_inst_2185_, v_f_2186_, v_c_2187_);
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_mapFVarM___boxed(lean_object* v_m_2189_, lean_object* v_pu_2190_, lean_object* v_inst_2191_, lean_object* v_inst_2192_, lean_object* v_f_2193_, lean_object* v_c_2194_){
_start:
{
uint8_t v_pu_boxed_2195_; lean_object* v_res_2196_; 
v_pu_boxed_2195_ = lean_unbox(v_pu_2190_);
v_res_2196_ = l_Lean_Compiler_LCNF_Code_mapFVarM(v_m_2189_, v_pu_boxed_2195_, v_inst_2191_, v_inst_2192_, v_f_2193_, v_c_2194_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__1(lean_object* v_inst_2197_, lean_object* v_f_2198_, lean_object* v_type_2199_, lean_object* v_toBind_2200_, lean_object* v___f_2201_, lean_object* v_____r_2202_){
_start:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2203_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_2197_, v_f_2198_, v_type_2199_);
v___x_2204_ = lean_apply_4(v_toBind_2200_, lean_box(0), lean_box(0), v___x_2203_, v___f_2201_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__12(lean_object* v_inst_2205_, lean_object* v_f_2206_, lean_object* v_ty_2207_, lean_object* v_toBind_2208_, lean_object* v___f_2209_, lean_object* v_____r_2210_){
_start:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2211_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_2205_, v_f_2206_, v_ty_2207_);
v___x_2212_ = lean_apply_4(v_toBind_2208_, lean_box(0), lean_box(0), v___x_2211_, v___f_2209_);
return v___x_2212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__4(lean_object* v_toApplicative_2213_, lean_object* v_args_2214_, lean_object* v_inst_2215_, lean_object* v___f_2216_, lean_object* v_____r_2217_){
_start:
{
lean_object* v_toPure_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; uint8_t v___x_2222_; 
v_toPure_2218_ = lean_ctor_get(v_toApplicative_2213_, 1);
lean_inc(v_toPure_2218_);
lean_dec_ref(v_toApplicative_2213_);
v___x_2219_ = lean_unsigned_to_nat(0u);
v___x_2220_ = lean_array_get_size(v_args_2214_);
v___x_2221_ = lean_box(0);
v___x_2222_ = lean_nat_dec_lt(v___x_2219_, v___x_2220_);
if (v___x_2222_ == 0)
{
lean_object* v___x_2223_; 
lean_dec(v___f_2216_);
lean_dec_ref(v_inst_2215_);
lean_dec_ref(v_args_2214_);
v___x_2223_ = lean_apply_2(v_toPure_2218_, lean_box(0), v___x_2221_);
return v___x_2223_;
}
else
{
uint8_t v___x_2224_; 
v___x_2224_ = lean_nat_dec_le(v___x_2220_, v___x_2220_);
if (v___x_2224_ == 0)
{
if (v___x_2222_ == 0)
{
lean_object* v___x_2225_; 
lean_dec(v___f_2216_);
lean_dec_ref(v_inst_2215_);
lean_dec_ref(v_args_2214_);
v___x_2225_ = lean_apply_2(v_toPure_2218_, lean_box(0), v___x_2221_);
return v___x_2225_;
}
else
{
size_t v___x_2226_; size_t v___x_2227_; lean_object* v___x_2228_; 
lean_dec(v_toPure_2218_);
v___x_2226_ = ((size_t)0ULL);
v___x_2227_ = lean_usize_of_nat(v___x_2220_);
v___x_2228_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2215_, v___f_2216_, v_args_2214_, v___x_2226_, v___x_2227_, v___x_2221_);
return v___x_2228_;
}
}
else
{
size_t v___x_2229_; size_t v___x_2230_; lean_object* v___x_2231_; 
lean_dec(v_toPure_2218_);
v___x_2229_ = ((size_t)0ULL);
v___x_2230_ = lean_usize_of_nat(v___x_2220_);
v___x_2231_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2215_, v___f_2216_, v_args_2214_, v___x_2229_, v___x_2230_, v___x_2221_);
return v___x_2231_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__3(lean_object* v_inst_2232_, lean_object* v_f_2233_, lean_object* v_x_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v___x_2236_; 
v___x_2236_ = l_Lean_Compiler_LCNF_Param_forFVarM___redArg(v_inst_2232_, v_f_2233_, v___y_2235_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__10(lean_object* v_inst_2237_, lean_object* v_f_2238_, lean_object* v_y_2239_, lean_object* v_toBind_2240_, lean_object* v___f_2241_, lean_object* v_____r_2242_){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2243_ = l_Lean_Compiler_LCNF_Arg_forFVarM___redArg(v_inst_2237_, v_f_2238_, v_y_2239_);
v___x_2244_ = lean_apply_4(v_toBind_2240_, lean_box(0), lean_box(0), v___x_2243_, v___f_2241_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__11(lean_object* v_f_2245_, lean_object* v_y_2246_, lean_object* v_toBind_2247_, lean_object* v___f_2248_, lean_object* v_____r_2249_){
_start:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = lean_apply_1(v_f_2245_, v_y_2246_);
v___x_2251_ = lean_apply_4(v_toBind_2247_, lean_box(0), lean_box(0), v___x_2250_, v___f_2248_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__7(lean_object* v_f_2252_, lean_object* v_discr_2253_, lean_object* v_toBind_2254_, lean_object* v___f_2255_, lean_object* v_____r_2256_){
_start:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2257_ = lean_apply_1(v_f_2252_, v_discr_2253_);
v___x_2258_ = lean_apply_4(v_toBind_2254_, lean_box(0), lean_box(0), v___x_2257_, v___f_2255_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__6(lean_object* v_toApplicative_2259_, lean_object* v_alts_2260_, lean_object* v_inst_2261_, lean_object* v___f_2262_, lean_object* v_____r_2263_){
_start:
{
lean_object* v_toPure_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; uint8_t v___x_2268_; 
v_toPure_2264_ = lean_ctor_get(v_toApplicative_2259_, 1);
lean_inc(v_toPure_2264_);
lean_dec_ref(v_toApplicative_2259_);
v___x_2265_ = lean_unsigned_to_nat(0u);
v___x_2266_ = lean_array_get_size(v_alts_2260_);
v___x_2267_ = lean_box(0);
v___x_2268_ = lean_nat_dec_lt(v___x_2265_, v___x_2266_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; 
lean_dec(v___f_2262_);
lean_dec_ref(v_inst_2261_);
lean_dec_ref(v_alts_2260_);
v___x_2269_ = lean_apply_2(v_toPure_2264_, lean_box(0), v___x_2267_);
return v___x_2269_;
}
else
{
uint8_t v___x_2270_; 
v___x_2270_ = lean_nat_dec_le(v___x_2266_, v___x_2266_);
if (v___x_2270_ == 0)
{
if (v___x_2268_ == 0)
{
lean_object* v___x_2271_; 
lean_dec(v___f_2262_);
lean_dec_ref(v_inst_2261_);
lean_dec_ref(v_alts_2260_);
v___x_2271_ = lean_apply_2(v_toPure_2264_, lean_box(0), v___x_2267_);
return v___x_2271_;
}
else
{
size_t v___x_2272_; size_t v___x_2273_; lean_object* v___x_2274_; 
lean_dec(v_toPure_2264_);
v___x_2272_ = ((size_t)0ULL);
v___x_2273_ = lean_usize_of_nat(v___x_2266_);
v___x_2274_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2261_, v___f_2262_, v_alts_2260_, v___x_2272_, v___x_2273_, v___x_2267_);
return v___x_2274_;
}
}
else
{
size_t v___x_2275_; size_t v___x_2276_; lean_object* v___x_2277_; 
lean_dec(v_toPure_2264_);
v___x_2275_ = ((size_t)0ULL);
v___x_2276_ = lean_usize_of_nat(v___x_2266_);
v___x_2277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2261_, v___f_2262_, v_alts_2260_, v___x_2275_, v___x_2276_, v___x_2267_);
return v___x_2277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__8(lean_object* v_inst_2278_, lean_object* v_f_2279_, lean_object* v_x_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v___x_2282_; 
v___x_2282_ = l_Lean_Compiler_LCNF_Arg_forFVarM___redArg(v_inst_2278_, v_f_2279_, v___y_2281_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__5(lean_object* v_inst_2283_, lean_object* v_f_2284_, lean_object* v_x_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2287_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg), 3, 2);
lean_closure_set(v___x_2287_, 0, v_inst_2283_);
lean_closure_set(v___x_2287_, 1, v_f_2284_);
v___x_2288_ = l_Lean_Compiler_LCNF_Alt_forCodeM___redArg(v___y_2286_, v___x_2287_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__2(lean_object* v_inst_2289_, lean_object* v_f_2290_, lean_object* v_value_2291_, lean_object* v_toBind_2292_, lean_object* v___f_2293_, lean_object* v_____r_2294_){
_start:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; 
v___x_2295_ = l_Lean_Compiler_LCNF_Code_forFVarM___redArg(v_inst_2289_, v_f_2290_, v_value_2291_);
v___x_2296_ = lean_apply_4(v_toBind_2292_, lean_box(0), lean_box(0), v___x_2295_, v___f_2293_);
return v___x_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg(lean_object* v_inst_2297_, lean_object* v_f_2298_, lean_object* v_c_2299_){
_start:
{
switch(lean_obj_tag(v_c_2299_))
{
case 0:
{
lean_object* v_toBind_2300_; lean_object* v_decl_2301_; lean_object* v_k_2302_; lean_object* v___f_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v_toBind_2300_ = lean_ctor_get(v_inst_2297_, 1);
lean_inc(v_toBind_2300_);
v_decl_2301_ = lean_ctor_get(v_c_2299_, 0);
lean_inc_ref(v_decl_2301_);
v_k_2302_ = lean_ctor_get(v_c_2299_, 1);
lean_inc_ref(v_k_2302_);
lean_dec_ref_known(v_c_2299_, 2);
lean_inc(v_f_2298_);
lean_inc_ref(v_inst_2297_);
v___f_2303_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2303_, 0, v_inst_2297_);
lean_closure_set(v___f_2303_, 1, v_f_2298_);
lean_closure_set(v___f_2303_, 2, v_k_2302_);
v___x_2304_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___redArg(v_inst_2297_, v_f_2298_, v_decl_2301_);
v___x_2305_ = lean_apply_4(v_toBind_2300_, lean_box(0), lean_box(0), v___x_2304_, v___f_2303_);
return v___x_2305_;
}
case 3:
{
lean_object* v_toApplicative_2306_; lean_object* v_toBind_2307_; lean_object* v_fvarId_2308_; lean_object* v_args_2309_; lean_object* v___f_2310_; lean_object* v___f_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v_toApplicative_2306_ = lean_ctor_get(v_inst_2297_, 0);
lean_inc_ref(v_toApplicative_2306_);
v_toBind_2307_ = lean_ctor_get(v_inst_2297_, 1);
lean_inc(v_toBind_2307_);
v_fvarId_2308_ = lean_ctor_get(v_c_2299_, 0);
lean_inc(v_fvarId_2308_);
v_args_2309_ = lean_ctor_get(v_c_2299_, 1);
lean_inc_ref(v_args_2309_);
lean_dec_ref_known(v_c_2299_, 2);
lean_inc(v_f_2298_);
lean_inc_ref(v_inst_2297_);
v___f_2310_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__8), 4, 2);
lean_closure_set(v___f_2310_, 0, v_inst_2297_);
lean_closure_set(v___f_2310_, 1, v_f_2298_);
v___f_2311_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__4), 5, 4);
lean_closure_set(v___f_2311_, 0, v_toApplicative_2306_);
lean_closure_set(v___f_2311_, 1, v_args_2309_);
lean_closure_set(v___f_2311_, 2, v_inst_2297_);
lean_closure_set(v___f_2311_, 3, v___f_2310_);
v___x_2312_ = lean_apply_1(v_f_2298_, v_fvarId_2308_);
v___x_2313_ = lean_apply_4(v_toBind_2307_, lean_box(0), lean_box(0), v___x_2312_, v___f_2311_);
return v___x_2313_;
}
case 4:
{
lean_object* v_cases_2314_; lean_object* v_toApplicative_2315_; lean_object* v_toBind_2316_; lean_object* v_resultType_2317_; lean_object* v_discr_2318_; lean_object* v_alts_2319_; lean_object* v___f_2320_; lean_object* v___f_2321_; lean_object* v___f_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v_cases_2314_ = lean_ctor_get(v_c_2299_, 0);
lean_inc_ref(v_cases_2314_);
lean_dec_ref_known(v_c_2299_, 1);
v_toApplicative_2315_ = lean_ctor_get(v_inst_2297_, 0);
v_toBind_2316_ = lean_ctor_get(v_inst_2297_, 1);
lean_inc_n(v_toBind_2316_, 2);
v_resultType_2317_ = lean_ctor_get(v_cases_2314_, 1);
lean_inc_ref(v_resultType_2317_);
v_discr_2318_ = lean_ctor_get(v_cases_2314_, 2);
lean_inc(v_discr_2318_);
v_alts_2319_ = lean_ctor_get(v_cases_2314_, 3);
lean_inc_ref(v_alts_2319_);
lean_dec_ref(v_cases_2314_);
lean_inc_n(v_f_2298_, 2);
lean_inc_ref_n(v_inst_2297_, 2);
v___f_2320_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__5), 4, 2);
lean_closure_set(v___f_2320_, 0, v_inst_2297_);
lean_closure_set(v___f_2320_, 1, v_f_2298_);
lean_inc_ref(v_toApplicative_2315_);
v___f_2321_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__6), 5, 4);
lean_closure_set(v___f_2321_, 0, v_toApplicative_2315_);
lean_closure_set(v___f_2321_, 1, v_alts_2319_);
lean_closure_set(v___f_2321_, 2, v_inst_2297_);
lean_closure_set(v___f_2321_, 3, v___f_2320_);
v___f_2322_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__7), 5, 4);
lean_closure_set(v___f_2322_, 0, v_f_2298_);
lean_closure_set(v___f_2322_, 1, v_discr_2318_);
lean_closure_set(v___f_2322_, 2, v_toBind_2316_);
lean_closure_set(v___f_2322_, 3, v___f_2321_);
v___x_2323_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_2297_, v_f_2298_, v_resultType_2317_);
v___x_2324_ = lean_apply_4(v_toBind_2316_, lean_box(0), lean_box(0), v___x_2323_, v___f_2322_);
return v___x_2324_;
}
case 5:
{
lean_object* v_fvarId_2325_; lean_object* v___x_2326_; 
lean_dec_ref(v_inst_2297_);
v_fvarId_2325_ = lean_ctor_get(v_c_2299_, 0);
lean_inc(v_fvarId_2325_);
lean_dec_ref_known(v_c_2299_, 1);
v___x_2326_ = lean_apply_1(v_f_2298_, v_fvarId_2325_);
return v___x_2326_;
}
case 6:
{
lean_object* v_type_2327_; lean_object* v___x_2328_; 
v_type_2327_ = lean_ctor_get(v_c_2299_, 0);
lean_inc_ref(v_type_2327_);
lean_dec_ref_known(v_c_2299_, 1);
v___x_2328_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_2297_, v_f_2298_, v_type_2327_);
return v___x_2328_;
}
case 7:
{
lean_object* v_toBind_2329_; lean_object* v_fvarId_2330_; lean_object* v_y_2331_; lean_object* v_k_2332_; lean_object* v___f_2333_; lean_object* v___f_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v_toBind_2329_ = lean_ctor_get(v_inst_2297_, 1);
lean_inc_n(v_toBind_2329_, 2);
v_fvarId_2330_ = lean_ctor_get(v_c_2299_, 0);
lean_inc(v_fvarId_2330_);
v_y_2331_ = lean_ctor_get(v_c_2299_, 2);
lean_inc(v_y_2331_);
v_k_2332_ = lean_ctor_get(v_c_2299_, 3);
lean_inc_ref(v_k_2332_);
lean_dec_ref_known(v_c_2299_, 4);
lean_inc_n(v_f_2298_, 2);
lean_inc_ref(v_inst_2297_);
v___f_2333_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2333_, 0, v_inst_2297_);
lean_closure_set(v___f_2333_, 1, v_f_2298_);
lean_closure_set(v___f_2333_, 2, v_k_2332_);
v___f_2334_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__10), 6, 5);
lean_closure_set(v___f_2334_, 0, v_inst_2297_);
lean_closure_set(v___f_2334_, 1, v_f_2298_);
lean_closure_set(v___f_2334_, 2, v_y_2331_);
lean_closure_set(v___f_2334_, 3, v_toBind_2329_);
lean_closure_set(v___f_2334_, 4, v___f_2333_);
v___x_2335_ = lean_apply_1(v_f_2298_, v_fvarId_2330_);
v___x_2336_ = lean_apply_4(v_toBind_2329_, lean_box(0), lean_box(0), v___x_2335_, v___f_2334_);
return v___x_2336_;
}
case 8:
{
lean_object* v_toBind_2337_; lean_object* v_fvarId_2338_; lean_object* v_y_2339_; lean_object* v_k_2340_; lean_object* v___f_2341_; lean_object* v___f_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v_toBind_2337_ = lean_ctor_get(v_inst_2297_, 1);
lean_inc_n(v_toBind_2337_, 2);
v_fvarId_2338_ = lean_ctor_get(v_c_2299_, 0);
lean_inc(v_fvarId_2338_);
v_y_2339_ = lean_ctor_get(v_c_2299_, 2);
lean_inc(v_y_2339_);
v_k_2340_ = lean_ctor_get(v_c_2299_, 3);
lean_inc_ref(v_k_2340_);
lean_dec_ref_known(v_c_2299_, 4);
lean_inc_n(v_f_2298_, 2);
v___f_2341_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2341_, 0, v_inst_2297_);
lean_closure_set(v___f_2341_, 1, v_f_2298_);
lean_closure_set(v___f_2341_, 2, v_k_2340_);
v___f_2342_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__11), 5, 4);
lean_closure_set(v___f_2342_, 0, v_f_2298_);
lean_closure_set(v___f_2342_, 1, v_y_2339_);
lean_closure_set(v___f_2342_, 2, v_toBind_2337_);
lean_closure_set(v___f_2342_, 3, v___f_2341_);
v___x_2343_ = lean_apply_1(v_f_2298_, v_fvarId_2338_);
v___x_2344_ = lean_apply_4(v_toBind_2337_, lean_box(0), lean_box(0), v___x_2343_, v___f_2342_);
return v___x_2344_;
}
case 9:
{
lean_object* v_toBind_2345_; lean_object* v_fvarId_2346_; lean_object* v_y_2347_; lean_object* v_ty_2348_; lean_object* v_k_2349_; lean_object* v___f_2350_; lean_object* v___f_2351_; lean_object* v___f_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v_toBind_2345_ = lean_ctor_get(v_inst_2297_, 1);
lean_inc_n(v_toBind_2345_, 3);
v_fvarId_2346_ = lean_ctor_get(v_c_2299_, 0);
lean_inc(v_fvarId_2346_);
v_y_2347_ = lean_ctor_get(v_c_2299_, 3);
lean_inc(v_y_2347_);
v_ty_2348_ = lean_ctor_get(v_c_2299_, 4);
lean_inc_ref(v_ty_2348_);
v_k_2349_ = lean_ctor_get(v_c_2299_, 5);
lean_inc_ref(v_k_2349_);
lean_dec_ref_known(v_c_2299_, 6);
lean_inc_n(v_f_2298_, 3);
lean_inc_ref(v_inst_2297_);
v___f_2350_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2350_, 0, v_inst_2297_);
lean_closure_set(v___f_2350_, 1, v_f_2298_);
lean_closure_set(v___f_2350_, 2, v_k_2349_);
v___f_2351_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__12), 6, 5);
lean_closure_set(v___f_2351_, 0, v_inst_2297_);
lean_closure_set(v___f_2351_, 1, v_f_2298_);
lean_closure_set(v___f_2351_, 2, v_ty_2348_);
lean_closure_set(v___f_2351_, 3, v_toBind_2345_);
lean_closure_set(v___f_2351_, 4, v___f_2350_);
v___f_2352_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__11), 5, 4);
lean_closure_set(v___f_2352_, 0, v_f_2298_);
lean_closure_set(v___f_2352_, 1, v_y_2347_);
lean_closure_set(v___f_2352_, 2, v_toBind_2345_);
lean_closure_set(v___f_2352_, 3, v___f_2351_);
v___x_2353_ = lean_apply_1(v_f_2298_, v_fvarId_2346_);
v___x_2354_ = lean_apply_4(v_toBind_2345_, lean_box(0), lean_box(0), v___x_2353_, v___f_2352_);
return v___x_2354_;
}
case 10:
{
lean_object* v_toBind_2355_; lean_object* v_fvarId_2356_; lean_object* v_k_2357_; lean_object* v___f_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v_toBind_2355_ = lean_ctor_get(v_inst_2297_, 1);
lean_inc(v_toBind_2355_);
v_fvarId_2356_ = lean_ctor_get(v_c_2299_, 0);
lean_inc(v_fvarId_2356_);
v_k_2357_ = lean_ctor_get(v_c_2299_, 2);
lean_inc_ref(v_k_2357_);
lean_dec_ref_known(v_c_2299_, 3);
lean_inc(v_f_2298_);
v___f_2358_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2358_, 0, v_inst_2297_);
lean_closure_set(v___f_2358_, 1, v_f_2298_);
lean_closure_set(v___f_2358_, 2, v_k_2357_);
v___x_2359_ = lean_apply_1(v_f_2298_, v_fvarId_2356_);
v___x_2360_ = lean_apply_4(v_toBind_2355_, lean_box(0), lean_box(0), v___x_2359_, v___f_2358_);
return v___x_2360_;
}
case 11:
{
lean_object* v_toBind_2361_; lean_object* v_fvarId_2362_; lean_object* v_k_2363_; lean_object* v___f_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v_toBind_2361_ = lean_ctor_get(v_inst_2297_, 1);
lean_inc(v_toBind_2361_);
v_fvarId_2362_ = lean_ctor_get(v_c_2299_, 0);
lean_inc(v_fvarId_2362_);
v_k_2363_ = lean_ctor_get(v_c_2299_, 2);
lean_inc_ref(v_k_2363_);
lean_dec_ref_known(v_c_2299_, 3);
lean_inc(v_f_2298_);
v___f_2364_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2364_, 0, v_inst_2297_);
lean_closure_set(v___f_2364_, 1, v_f_2298_);
lean_closure_set(v___f_2364_, 2, v_k_2363_);
v___x_2365_ = lean_apply_1(v_f_2298_, v_fvarId_2362_);
v___x_2366_ = lean_apply_4(v_toBind_2361_, lean_box(0), lean_box(0), v___x_2365_, v___f_2364_);
return v___x_2366_;
}
case 12:
{
lean_object* v_toBind_2367_; lean_object* v_fvarId_2368_; lean_object* v_k_2369_; lean_object* v___f_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
v_toBind_2367_ = lean_ctor_get(v_inst_2297_, 1);
lean_inc(v_toBind_2367_);
v_fvarId_2368_ = lean_ctor_get(v_c_2299_, 0);
lean_inc(v_fvarId_2368_);
v_k_2369_ = lean_ctor_get(v_c_2299_, 3);
lean_inc_ref(v_k_2369_);
lean_dec_ref_known(v_c_2299_, 4);
lean_inc(v_f_2298_);
v___f_2370_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2370_, 0, v_inst_2297_);
lean_closure_set(v___f_2370_, 1, v_f_2298_);
lean_closure_set(v___f_2370_, 2, v_k_2369_);
v___x_2371_ = lean_apply_1(v_f_2298_, v_fvarId_2368_);
v___x_2372_ = lean_apply_4(v_toBind_2367_, lean_box(0), lean_box(0), v___x_2371_, v___f_2370_);
return v___x_2372_;
}
case 13:
{
lean_object* v_toBind_2373_; lean_object* v_fvarId_2374_; lean_object* v_k_2375_; lean_object* v___f_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
v_toBind_2373_ = lean_ctor_get(v_inst_2297_, 1);
lean_inc(v_toBind_2373_);
v_fvarId_2374_ = lean_ctor_get(v_c_2299_, 0);
lean_inc(v_fvarId_2374_);
v_k_2375_ = lean_ctor_get(v_c_2299_, 1);
lean_inc_ref(v_k_2375_);
lean_dec_ref_known(v_c_2299_, 2);
lean_inc(v_f_2298_);
v___f_2376_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2376_, 0, v_inst_2297_);
lean_closure_set(v___f_2376_, 1, v_f_2298_);
lean_closure_set(v___f_2376_, 2, v_k_2375_);
v___x_2377_ = lean_apply_1(v_f_2298_, v_fvarId_2374_);
v___x_2378_ = lean_apply_4(v_toBind_2373_, lean_box(0), lean_box(0), v___x_2377_, v___f_2376_);
return v___x_2378_;
}
default: 
{
lean_object* v_decl_2379_; lean_object* v_toApplicative_2380_; lean_object* v_toBind_2381_; lean_object* v_k_2382_; lean_object* v_params_2383_; lean_object* v_type_2384_; lean_object* v_value_2385_; lean_object* v_toPure_2386_; lean_object* v___f_2387_; lean_object* v___f_2388_; lean_object* v___f_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; uint8_t v___x_2393_; 
v_decl_2379_ = lean_ctor_get(v_c_2299_, 0);
lean_inc_ref(v_decl_2379_);
v_toApplicative_2380_ = lean_ctor_get(v_inst_2297_, 0);
v_toBind_2381_ = lean_ctor_get(v_inst_2297_, 1);
lean_inc_n(v_toBind_2381_, 3);
v_k_2382_ = lean_ctor_get(v_c_2299_, 1);
lean_inc_ref(v_k_2382_);
lean_dec_ref(v_c_2299_);
v_params_2383_ = lean_ctor_get(v_decl_2379_, 2);
lean_inc_ref(v_params_2383_);
v_type_2384_ = lean_ctor_get(v_decl_2379_, 3);
lean_inc_ref(v_type_2384_);
v_value_2385_ = lean_ctor_get(v_decl_2379_, 4);
lean_inc_ref(v_value_2385_);
lean_dec_ref(v_decl_2379_);
v_toPure_2386_ = lean_ctor_get(v_toApplicative_2380_, 1);
lean_inc_n(v_f_2298_, 3);
lean_inc_ref_n(v_inst_2297_, 3);
v___f_2387_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2387_, 0, v_inst_2297_);
lean_closure_set(v___f_2387_, 1, v_f_2298_);
lean_closure_set(v___f_2387_, 2, v_k_2382_);
v___f_2388_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2388_, 0, v_inst_2297_);
lean_closure_set(v___f_2388_, 1, v_f_2298_);
lean_closure_set(v___f_2388_, 2, v_value_2385_);
lean_closure_set(v___f_2388_, 3, v_toBind_2381_);
lean_closure_set(v___f_2388_, 4, v___f_2387_);
v___f_2389_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__1), 6, 5);
lean_closure_set(v___f_2389_, 0, v_inst_2297_);
lean_closure_set(v___f_2389_, 1, v_f_2298_);
lean_closure_set(v___f_2389_, 2, v_type_2384_);
lean_closure_set(v___f_2389_, 3, v_toBind_2381_);
lean_closure_set(v___f_2389_, 4, v___f_2388_);
v___x_2390_ = lean_unsigned_to_nat(0u);
v___x_2391_ = lean_array_get_size(v_params_2383_);
v___x_2392_ = lean_box(0);
v___x_2393_ = lean_nat_dec_lt(v___x_2390_, v___x_2391_);
if (v___x_2393_ == 0)
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
lean_inc(v_toPure_2386_);
lean_dec_ref(v_params_2383_);
lean_dec(v_f_2298_);
lean_dec_ref(v_inst_2297_);
v___x_2394_ = lean_apply_2(v_toPure_2386_, lean_box(0), v___x_2392_);
v___x_2395_ = lean_apply_4(v_toBind_2381_, lean_box(0), lean_box(0), v___x_2394_, v___f_2389_);
return v___x_2395_;
}
else
{
lean_object* v___f_2396_; uint8_t v___x_2397_; 
lean_inc_ref(v_inst_2297_);
v___f_2396_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2396_, 0, v_inst_2297_);
lean_closure_set(v___f_2396_, 1, v_f_2298_);
v___x_2397_ = lean_nat_dec_le(v___x_2391_, v___x_2391_);
if (v___x_2397_ == 0)
{
if (v___x_2393_ == 0)
{
lean_object* v___x_2398_; lean_object* v___x_2399_; 
lean_inc(v_toPure_2386_);
lean_dec_ref(v___f_2396_);
lean_dec_ref(v_params_2383_);
lean_dec_ref(v_inst_2297_);
v___x_2398_ = lean_apply_2(v_toPure_2386_, lean_box(0), v___x_2392_);
v___x_2399_ = lean_apply_4(v_toBind_2381_, lean_box(0), lean_box(0), v___x_2398_, v___f_2389_);
return v___x_2399_;
}
else
{
size_t v___x_2400_; size_t v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2400_ = ((size_t)0ULL);
v___x_2401_ = lean_usize_of_nat(v___x_2391_);
v___x_2402_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2297_, v___f_2396_, v_params_2383_, v___x_2400_, v___x_2401_, v___x_2392_);
v___x_2403_ = lean_apply_4(v_toBind_2381_, lean_box(0), lean_box(0), v___x_2402_, v___f_2389_);
return v___x_2403_;
}
}
else
{
size_t v___x_2404_; size_t v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2404_ = ((size_t)0ULL);
v___x_2405_ = lean_usize_of_nat(v___x_2391_);
v___x_2406_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2297_, v___f_2396_, v_params_2383_, v___x_2404_, v___x_2405_, v___x_2392_);
v___x_2407_ = lean_apply_4(v_toBind_2381_, lean_box(0), lean_box(0), v___x_2406_, v___f_2389_);
return v___x_2407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___redArg___lam__0(lean_object* v_inst_2408_, lean_object* v_f_2409_, lean_object* v_k_2410_, lean_object* v_____r_2411_){
_start:
{
lean_object* v___x_2412_; 
v___x_2412_ = l_Lean_Compiler_LCNF_Code_forFVarM___redArg(v_inst_2408_, v_f_2409_, v_k_2410_);
return v___x_2412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM(lean_object* v_m_2413_, uint8_t v_pu_2414_, lean_object* v_inst_2415_, lean_object* v_f_2416_, lean_object* v_c_2417_){
_start:
{
lean_object* v___x_2418_; 
v___x_2418_ = l_Lean_Compiler_LCNF_Code_forFVarM___redArg(v_inst_2415_, v_f_2416_, v_c_2417_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_forFVarM___boxed(lean_object* v_m_2419_, lean_object* v_pu_2420_, lean_object* v_inst_2421_, lean_object* v_f_2422_, lean_object* v_c_2423_){
_start:
{
uint8_t v_pu_boxed_2424_; lean_object* v_res_2425_; 
v_pu_boxed_2424_ = lean_unbox(v_pu_2420_);
v_res_2425_ = l_Lean_Compiler_LCNF_Code_forFVarM(v_m_2419_, v_pu_boxed_2424_, v_inst_2421_, v_f_2422_, v_c_2423_);
return v_res_2425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCode___lam__0(uint8_t v_pu_2426_, lean_object* v_m_2427_, lean_object* v_inst_2428_, lean_object* v_inst_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v___x_2432_; 
v___x_2432_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_2426_, v_inst_2428_, v_inst_2429_, v___y_2430_, v___y_2431_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCode___lam__0___boxed(lean_object* v_pu_2433_, lean_object* v_m_2434_, lean_object* v_inst_2435_, lean_object* v_inst_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_){
_start:
{
uint8_t v_pu_boxed_2439_; lean_object* v_res_2440_; 
v_pu_boxed_2439_ = lean_unbox(v_pu_2433_);
v_res_2440_ = l_Lean_Compiler_LCNF_instTraverseFVarCode___lam__0(v_pu_boxed_2439_, v_m_2434_, v_inst_2435_, v_inst_2436_, v___y_2437_, v___y_2438_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCode___lam__1(lean_object* v_m_2441_, lean_object* v_inst_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v___x_2445_; 
v___x_2445_ = l_Lean_Compiler_LCNF_Code_forFVarM___redArg(v_inst_2442_, v___y_2443_, v___y_2444_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCode(uint8_t v_pu_2447_){
_start:
{
lean_object* v___x_2448_; lean_object* v___f_2449_; lean_object* v___f_2450_; lean_object* v___x_2451_; 
v___x_2448_ = lean_box(v_pu_2447_);
v___f_2449_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCode___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2449_, 0, v___x_2448_);
v___f_2450_ = ((lean_object*)(l_Lean_Compiler_LCNF_instTraverseFVarCode___closed__0));
v___x_2451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2451_, 0, v___f_2449_);
lean_ctor_set(v___x_2451_, 1, v___f_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCode___boxed(lean_object* v_pu_2452_){
_start:
{
uint8_t v_pu_boxed_2453_; lean_object* v_res_2454_; 
v_pu_boxed_2453_ = lean_unbox(v_pu_2452_);
v_res_2454_ = l_Lean_Compiler_LCNF_instTraverseFVarCode(v_pu_boxed_2453_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__0(uint8_t v_pu_2455_, lean_object* v_decl_2456_, lean_object* v_____do__lift_2457_, lean_object* v_params_2458_, lean_object* v_inst_2459_, lean_object* v_____do__lift_2460_){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2461_ = lean_box(v_pu_2455_);
v___x_2462_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___boxed), 10, 5);
lean_closure_set(v___x_2462_, 0, v___x_2461_);
lean_closure_set(v___x_2462_, 1, v_decl_2456_);
lean_closure_set(v___x_2462_, 2, v_____do__lift_2457_);
lean_closure_set(v___x_2462_, 3, v_params_2458_);
lean_closure_set(v___x_2462_, 4, v_____do__lift_2460_);
v___x_2463_ = lean_apply_2(v_inst_2459_, lean_box(0), v___x_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__0___boxed(lean_object* v_pu_2464_, lean_object* v_decl_2465_, lean_object* v_____do__lift_2466_, lean_object* v_params_2467_, lean_object* v_inst_2468_, lean_object* v_____do__lift_2469_){
_start:
{
uint8_t v_pu_boxed_2470_; lean_object* v_res_2471_; 
v_pu_boxed_2470_ = lean_unbox(v_pu_2464_);
v_res_2471_ = l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__0(v_pu_boxed_2470_, v_decl_2465_, v_____do__lift_2466_, v_params_2467_, v_inst_2468_, v_____do__lift_2469_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__1(uint8_t v_pu_2472_, lean_object* v_decl_2473_, lean_object* v_params_2474_, lean_object* v_inst_2475_, lean_object* v_inst_2476_, lean_object* v_f_2477_, lean_object* v_value_2478_, lean_object* v_toBind_2479_, lean_object* v_____do__lift_2480_){
_start:
{
lean_object* v___x_2481_; lean_object* v___f_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2481_ = lean_box(v_pu_2472_);
lean_inc(v_inst_2475_);
v___f_2482_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2482_, 0, v___x_2481_);
lean_closure_set(v___f_2482_, 1, v_decl_2473_);
lean_closure_set(v___f_2482_, 2, v_____do__lift_2480_);
lean_closure_set(v___f_2482_, 3, v_params_2474_);
lean_closure_set(v___f_2482_, 4, v_inst_2475_);
v___x_2483_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_2472_, v_inst_2475_, v_inst_2476_, v_f_2477_, v_value_2478_);
v___x_2484_ = lean_apply_4(v_toBind_2479_, lean_box(0), lean_box(0), v___x_2483_, v___f_2482_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__1___boxed(lean_object* v_pu_2485_, lean_object* v_decl_2486_, lean_object* v_params_2487_, lean_object* v_inst_2488_, lean_object* v_inst_2489_, lean_object* v_f_2490_, lean_object* v_value_2491_, lean_object* v_toBind_2492_, lean_object* v_____do__lift_2493_){
_start:
{
uint8_t v_pu_boxed_2494_; lean_object* v_res_2495_; 
v_pu_boxed_2494_ = lean_unbox(v_pu_2485_);
v_res_2495_ = l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__1(v_pu_boxed_2494_, v_decl_2486_, v_params_2487_, v_inst_2488_, v_inst_2489_, v_f_2490_, v_value_2491_, v_toBind_2492_, v_____do__lift_2493_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__2(uint8_t v_pu_2496_, lean_object* v_decl_2497_, lean_object* v_inst_2498_, lean_object* v_inst_2499_, lean_object* v_f_2500_, lean_object* v_value_2501_, lean_object* v_toBind_2502_, lean_object* v_type_2503_, lean_object* v_params_2504_){
_start:
{
lean_object* v___x_2505_; lean_object* v___f_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2505_ = lean_box(v_pu_2496_);
lean_inc(v_toBind_2502_);
lean_inc(v_f_2500_);
lean_inc_ref(v_inst_2499_);
v___f_2506_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_2506_, 0, v___x_2505_);
lean_closure_set(v___f_2506_, 1, v_decl_2497_);
lean_closure_set(v___f_2506_, 2, v_params_2504_);
lean_closure_set(v___f_2506_, 3, v_inst_2498_);
lean_closure_set(v___f_2506_, 4, v_inst_2499_);
lean_closure_set(v___f_2506_, 5, v_f_2500_);
lean_closure_set(v___f_2506_, 6, v_value_2501_);
lean_closure_set(v___f_2506_, 7, v_toBind_2502_);
v___x_2507_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_2499_, v_f_2500_, v_type_2503_);
v___x_2508_ = lean_apply_4(v_toBind_2502_, lean_box(0), lean_box(0), v___x_2507_, v___f_2506_);
return v___x_2508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__2___boxed(lean_object* v_pu_2509_, lean_object* v_decl_2510_, lean_object* v_inst_2511_, lean_object* v_inst_2512_, lean_object* v_f_2513_, lean_object* v_value_2514_, lean_object* v_toBind_2515_, lean_object* v_type_2516_, lean_object* v_params_2517_){
_start:
{
uint8_t v_pu_boxed_2518_; lean_object* v_res_2519_; 
v_pu_boxed_2518_ = lean_unbox(v_pu_2509_);
v_res_2519_ = l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__2(v_pu_boxed_2518_, v_decl_2510_, v_inst_2511_, v_inst_2512_, v_f_2513_, v_value_2514_, v_toBind_2515_, v_type_2516_, v_params_2517_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg(uint8_t v_pu_2520_, lean_object* v_inst_2521_, lean_object* v_inst_2522_, lean_object* v_f_2523_, lean_object* v_decl_2524_){
_start:
{
lean_object* v_toBind_2525_; lean_object* v_params_2526_; lean_object* v_type_2527_; lean_object* v_value_2528_; lean_object* v___x_2529_; lean_object* v___f_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; size_t v_sz_2533_; size_t v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v_toBind_2525_ = lean_ctor_get(v_inst_2522_, 1);
lean_inc_n(v_toBind_2525_, 2);
v_params_2526_ = lean_ctor_get(v_decl_2524_, 2);
lean_inc_ref(v_params_2526_);
v_type_2527_ = lean_ctor_get(v_decl_2524_, 3);
lean_inc_ref(v_type_2527_);
v_value_2528_ = lean_ctor_get(v_decl_2524_, 4);
lean_inc_ref(v_value_2528_);
v___x_2529_ = lean_box(v_pu_2520_);
lean_inc(v_f_2523_);
lean_inc_ref_n(v_inst_2522_, 2);
lean_inc(v_inst_2521_);
v___f_2530_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2530_, 0, v___x_2529_);
lean_closure_set(v___f_2530_, 1, v_decl_2524_);
lean_closure_set(v___f_2530_, 2, v_inst_2521_);
lean_closure_set(v___f_2530_, 3, v_inst_2522_);
lean_closure_set(v___f_2530_, 4, v_f_2523_);
lean_closure_set(v___f_2530_, 5, v_value_2528_);
lean_closure_set(v___f_2530_, 6, v_toBind_2525_);
lean_closure_set(v___f_2530_, 7, v_type_2527_);
v___x_2531_ = lean_box(v_pu_2520_);
v___x_2532_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Param_mapFVarM___boxed), 6, 5);
lean_closure_set(v___x_2532_, 0, lean_box(0));
lean_closure_set(v___x_2532_, 1, v___x_2531_);
lean_closure_set(v___x_2532_, 2, v_inst_2521_);
lean_closure_set(v___x_2532_, 3, v_inst_2522_);
lean_closure_set(v___x_2532_, 4, v_f_2523_);
v_sz_2533_ = lean_array_size(v_params_2526_);
v___x_2534_ = ((size_t)0ULL);
v___x_2535_ = l_unsafeCast___redArg(v_params_2526_);
lean_dec_ref(v_params_2526_);
v___x_2536_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_2522_, v___x_2532_, v_sz_2533_, v___x_2534_, v___x_2535_);
v___x_2537_ = l_unsafeCast___redArg(v___x_2536_);
lean_dec(v___x_2536_);
v___x_2538_ = lean_apply_4(v_toBind_2525_, lean_box(0), lean_box(0), v___x_2537_, v___f_2530_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg___boxed(lean_object* v_pu_2539_, lean_object* v_inst_2540_, lean_object* v_inst_2541_, lean_object* v_f_2542_, lean_object* v_decl_2543_){
_start:
{
uint8_t v_pu_boxed_2544_; lean_object* v_res_2545_; 
v_pu_boxed_2544_ = lean_unbox(v_pu_2539_);
v_res_2545_ = l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg(v_pu_boxed_2544_, v_inst_2540_, v_inst_2541_, v_f_2542_, v_decl_2543_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM(lean_object* v_m_2546_, uint8_t v_pu_2547_, lean_object* v_inst_2548_, lean_object* v_inst_2549_, lean_object* v_f_2550_, lean_object* v_decl_2551_){
_start:
{
lean_object* v___x_2552_; 
v___x_2552_ = l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg(v_pu_2547_, v_inst_2548_, v_inst_2549_, v_f_2550_, v_decl_2551_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_mapFVarM___boxed(lean_object* v_m_2553_, lean_object* v_pu_2554_, lean_object* v_inst_2555_, lean_object* v_inst_2556_, lean_object* v_f_2557_, lean_object* v_decl_2558_){
_start:
{
uint8_t v_pu_boxed_2559_; lean_object* v_res_2560_; 
v_pu_boxed_2559_ = lean_unbox(v_pu_2554_);
v_res_2560_ = l_Lean_Compiler_LCNF_FunDecl_mapFVarM(v_m_2553_, v_pu_boxed_2559_, v_inst_2555_, v_inst_2556_, v_f_2557_, v_decl_2558_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg___lam__0(lean_object* v_inst_2561_, lean_object* v_f_2562_, lean_object* v_value_2563_, lean_object* v_____r_2564_){
_start:
{
lean_object* v___x_2565_; 
v___x_2565_ = l_Lean_Compiler_LCNF_Code_forFVarM___redArg(v_inst_2561_, v_f_2562_, v_value_2563_);
return v___x_2565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg___lam__1(lean_object* v_inst_2566_, lean_object* v_f_2567_, lean_object* v_type_2568_, lean_object* v_toBind_2569_, lean_object* v___f_2570_, lean_object* v_____r_2571_){
_start:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2572_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_2566_, v_f_2567_, v_type_2568_);
v___x_2573_ = lean_apply_4(v_toBind_2569_, lean_box(0), lean_box(0), v___x_2572_, v___f_2570_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg___lam__2(lean_object* v_inst_2574_, lean_object* v_f_2575_, lean_object* v_x_2576_, lean_object* v___y_2577_){
_start:
{
lean_object* v___x_2578_; 
v___x_2578_ = l_Lean_Compiler_LCNF_Param_forFVarM___redArg(v_inst_2574_, v_f_2575_, v___y_2577_);
return v___x_2578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg(lean_object* v_inst_2579_, lean_object* v_f_2580_, lean_object* v_decl_2581_){
_start:
{
lean_object* v_toApplicative_2582_; lean_object* v_toBind_2583_; lean_object* v_params_2584_; lean_object* v_type_2585_; lean_object* v_value_2586_; lean_object* v_toPure_2587_; lean_object* v___f_2588_; lean_object* v___f_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; uint8_t v___x_2593_; 
v_toApplicative_2582_ = lean_ctor_get(v_inst_2579_, 0);
v_toBind_2583_ = lean_ctor_get(v_inst_2579_, 1);
lean_inc_n(v_toBind_2583_, 2);
v_params_2584_ = lean_ctor_get(v_decl_2581_, 2);
lean_inc_ref(v_params_2584_);
v_type_2585_ = lean_ctor_get(v_decl_2581_, 3);
lean_inc_ref(v_type_2585_);
v_value_2586_ = lean_ctor_get(v_decl_2581_, 4);
lean_inc_ref(v_value_2586_);
lean_dec_ref(v_decl_2581_);
v_toPure_2587_ = lean_ctor_get(v_toApplicative_2582_, 1);
lean_inc_n(v_f_2580_, 2);
lean_inc_ref_n(v_inst_2579_, 2);
v___f_2588_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2588_, 0, v_inst_2579_);
lean_closure_set(v___f_2588_, 1, v_f_2580_);
lean_closure_set(v___f_2588_, 2, v_value_2586_);
v___f_2589_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg___lam__1), 6, 5);
lean_closure_set(v___f_2589_, 0, v_inst_2579_);
lean_closure_set(v___f_2589_, 1, v_f_2580_);
lean_closure_set(v___f_2589_, 2, v_type_2585_);
lean_closure_set(v___f_2589_, 3, v_toBind_2583_);
lean_closure_set(v___f_2589_, 4, v___f_2588_);
v___x_2590_ = lean_unsigned_to_nat(0u);
v___x_2591_ = lean_array_get_size(v_params_2584_);
v___x_2592_ = lean_box(0);
v___x_2593_ = lean_nat_dec_lt(v___x_2590_, v___x_2591_);
if (v___x_2593_ == 0)
{
lean_object* v___x_2594_; lean_object* v___x_2595_; 
lean_inc(v_toPure_2587_);
lean_dec_ref(v_params_2584_);
lean_dec(v_f_2580_);
lean_dec_ref(v_inst_2579_);
v___x_2594_ = lean_apply_2(v_toPure_2587_, lean_box(0), v___x_2592_);
v___x_2595_ = lean_apply_4(v_toBind_2583_, lean_box(0), lean_box(0), v___x_2594_, v___f_2589_);
return v___x_2595_;
}
else
{
lean_object* v___f_2596_; uint8_t v___x_2597_; 
lean_inc_ref(v_inst_2579_);
v___f_2596_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg___lam__2), 4, 2);
lean_closure_set(v___f_2596_, 0, v_inst_2579_);
lean_closure_set(v___f_2596_, 1, v_f_2580_);
v___x_2597_ = lean_nat_dec_le(v___x_2591_, v___x_2591_);
if (v___x_2597_ == 0)
{
if (v___x_2593_ == 0)
{
lean_object* v___x_2598_; lean_object* v___x_2599_; 
lean_inc(v_toPure_2587_);
lean_dec_ref(v___f_2596_);
lean_dec_ref(v_params_2584_);
lean_dec_ref(v_inst_2579_);
v___x_2598_ = lean_apply_2(v_toPure_2587_, lean_box(0), v___x_2592_);
v___x_2599_ = lean_apply_4(v_toBind_2583_, lean_box(0), lean_box(0), v___x_2598_, v___f_2589_);
return v___x_2599_;
}
else
{
size_t v___x_2600_; size_t v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2600_ = ((size_t)0ULL);
v___x_2601_ = lean_usize_of_nat(v___x_2591_);
v___x_2602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2579_, v___f_2596_, v_params_2584_, v___x_2600_, v___x_2601_, v___x_2592_);
v___x_2603_ = lean_apply_4(v_toBind_2583_, lean_box(0), lean_box(0), v___x_2602_, v___f_2589_);
return v___x_2603_;
}
}
else
{
size_t v___x_2604_; size_t v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2604_ = ((size_t)0ULL);
v___x_2605_ = lean_usize_of_nat(v___x_2591_);
v___x_2606_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2579_, v___f_2596_, v_params_2584_, v___x_2604_, v___x_2605_, v___x_2592_);
v___x_2607_ = lean_apply_4(v_toBind_2583_, lean_box(0), lean_box(0), v___x_2606_, v___f_2589_);
return v___x_2607_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM(lean_object* v_m_2608_, uint8_t v_pu_2609_, lean_object* v_inst_2610_, lean_object* v_f_2611_, lean_object* v_decl_2612_){
_start:
{
lean_object* v___x_2613_; 
v___x_2613_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg(v_inst_2610_, v_f_2611_, v_decl_2612_);
return v___x_2613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_forFVarM___boxed(lean_object* v_m_2614_, lean_object* v_pu_2615_, lean_object* v_inst_2616_, lean_object* v_f_2617_, lean_object* v_decl_2618_){
_start:
{
uint8_t v_pu_boxed_2619_; lean_object* v_res_2620_; 
v_pu_boxed_2619_ = lean_unbox(v_pu_2615_);
v_res_2620_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM(v_m_2614_, v_pu_boxed_2619_, v_inst_2616_, v_f_2617_, v_decl_2618_);
return v_res_2620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___lam__0(uint8_t v_pu_2621_, lean_object* v_m_2622_, lean_object* v_inst_2623_, lean_object* v_inst_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_){
_start:
{
lean_object* v___x_2627_; 
v___x_2627_ = l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg(v_pu_2621_, v_inst_2623_, v_inst_2624_, v___y_2625_, v___y_2626_);
return v___x_2627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___lam__0___boxed(lean_object* v_pu_2628_, lean_object* v_m_2629_, lean_object* v_inst_2630_, lean_object* v_inst_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
uint8_t v_pu_boxed_2634_; lean_object* v_res_2635_; 
v_pu_boxed_2634_ = lean_unbox(v_pu_2628_);
v_res_2635_ = l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___lam__0(v_pu_boxed_2634_, v_m_2629_, v_inst_2630_, v_inst_2631_, v___y_2632_, v___y_2633_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___lam__1(lean_object* v_m_2636_, lean_object* v_inst_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_){
_start:
{
lean_object* v___x_2640_; 
v___x_2640_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg(v_inst_2637_, v___y_2638_, v___y_2639_);
return v___x_2640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarFunDecl(uint8_t v_pu_2642_){
_start:
{
lean_object* v___x_2643_; lean_object* v___f_2644_; lean_object* v___f_2645_; lean_object* v___x_2646_; 
v___x_2643_ = lean_box(v_pu_2642_);
v___f_2644_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2644_, 0, v___x_2643_);
v___f_2645_ = ((lean_object*)(l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___closed__0));
v___x_2646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___f_2644_);
lean_ctor_set(v___x_2646_, 1, v___f_2645_);
return v___x_2646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarFunDecl___boxed(lean_object* v_pu_2647_){
_start:
{
uint8_t v_pu_boxed_2648_; lean_object* v_res_2649_; 
v_pu_boxed_2648_ = lean_unbox(v_pu_2647_);
v_res_2649_ = l_Lean_Compiler_LCNF_instTraverseFVarFunDecl(v_pu_boxed_2648_);
return v_res_2649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__0(lean_object* v_toPure_2650_, lean_object* v_____do__lift_2651_){
_start:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2652_, 0, v_____do__lift_2651_);
v___x_2653_ = lean_apply_2(v_toPure_2650_, lean_box(0), v___x_2652_);
return v___x_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__1(lean_object* v_toPure_2654_, lean_object* v_____do__lift_2655_){
_start:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2656_, 0, v_____do__lift_2655_);
v___x_2657_ = lean_apply_2(v_toPure_2654_, lean_box(0), v___x_2656_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__2(lean_object* v_toPure_2658_, lean_object* v_____do__lift_2659_){
_start:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2660_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2660_, 0, v_____do__lift_2659_);
v___x_2661_ = lean_apply_2(v_toPure_2658_, lean_box(0), v___x_2660_);
return v___x_2661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__3(lean_object* v_____do__lift_2662_, lean_object* v_i_2663_, lean_object* v_toPure_2664_, lean_object* v_____do__lift_2665_){
_start:
{
lean_object* v___x_2666_; lean_object* v___x_2667_; 
v___x_2666_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2666_, 0, v_____do__lift_2662_);
lean_ctor_set(v___x_2666_, 1, v_i_2663_);
lean_ctor_set(v___x_2666_, 2, v_____do__lift_2665_);
v___x_2667_ = lean_apply_2(v_toPure_2664_, lean_box(0), v___x_2666_);
return v___x_2667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__4(lean_object* v_i_2668_, lean_object* v_toPure_2669_, uint8_t v_pu_2670_, lean_object* v_inst_2671_, lean_object* v_f_2672_, lean_object* v_y_2673_, lean_object* v_toBind_2674_, lean_object* v_____do__lift_2675_){
_start:
{
lean_object* v___f_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___f_2676_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__3), 4, 3);
lean_closure_set(v___f_2676_, 0, v_____do__lift_2675_);
lean_closure_set(v___f_2676_, 1, v_i_2668_);
lean_closure_set(v___f_2676_, 2, v_toPure_2669_);
v___x_2677_ = l_Lean_Compiler_LCNF_Arg_mapFVarM___redArg(v_pu_2670_, v_inst_2671_, v_f_2672_, v_y_2673_);
v___x_2678_ = lean_apply_4(v_toBind_2674_, lean_box(0), lean_box(0), v___x_2677_, v___f_2676_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__4___boxed(lean_object* v_i_2679_, lean_object* v_toPure_2680_, lean_object* v_pu_2681_, lean_object* v_inst_2682_, lean_object* v_f_2683_, lean_object* v_y_2684_, lean_object* v_toBind_2685_, lean_object* v_____do__lift_2686_){
_start:
{
uint8_t v_pu_boxed_2687_; lean_object* v_res_2688_; 
v_pu_boxed_2687_ = lean_unbox(v_pu_2681_);
v_res_2688_ = l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__4(v_i_2679_, v_toPure_2680_, v_pu_boxed_2687_, v_inst_2682_, v_f_2683_, v_y_2684_, v_toBind_2685_, v_____do__lift_2686_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__5(lean_object* v_____do__lift_2689_, lean_object* v_i_2690_, lean_object* v_toPure_2691_, lean_object* v_____do__lift_2692_){
_start:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2693_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_2693_, 0, v_____do__lift_2689_);
lean_ctor_set(v___x_2693_, 1, v_i_2690_);
lean_ctor_set(v___x_2693_, 2, v_____do__lift_2692_);
v___x_2694_ = lean_apply_2(v_toPure_2691_, lean_box(0), v___x_2693_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__6(lean_object* v_i_2695_, lean_object* v_toPure_2696_, lean_object* v_f_2697_, lean_object* v_y_2698_, lean_object* v_toBind_2699_, lean_object* v_____do__lift_2700_){
_start:
{
lean_object* v___f_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___f_2701_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__5), 4, 3);
lean_closure_set(v___f_2701_, 0, v_____do__lift_2700_);
lean_closure_set(v___f_2701_, 1, v_i_2695_);
lean_closure_set(v___f_2701_, 2, v_toPure_2696_);
v___x_2702_ = lean_apply_1(v_f_2697_, v_y_2698_);
v___x_2703_ = lean_apply_4(v_toBind_2699_, lean_box(0), lean_box(0), v___x_2702_, v___f_2701_);
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__7(lean_object* v_____do__lift_2704_, lean_object* v_i_2705_, lean_object* v_offset_2706_, lean_object* v_____do__lift_2707_, lean_object* v_toPure_2708_, lean_object* v_____do__lift_2709_){
_start:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; 
v___x_2710_ = lean_alloc_ctor(5, 5, 0);
lean_ctor_set(v___x_2710_, 0, v_____do__lift_2704_);
lean_ctor_set(v___x_2710_, 1, v_i_2705_);
lean_ctor_set(v___x_2710_, 2, v_offset_2706_);
lean_ctor_set(v___x_2710_, 3, v_____do__lift_2707_);
lean_ctor_set(v___x_2710_, 4, v_____do__lift_2709_);
v___x_2711_ = lean_apply_2(v_toPure_2708_, lean_box(0), v___x_2710_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__8(lean_object* v_____do__lift_2712_, lean_object* v_i_2713_, lean_object* v_offset_2714_, lean_object* v_toPure_2715_, lean_object* v_inst_2716_, lean_object* v_f_2717_, lean_object* v_ty_2718_, lean_object* v_toBind_2719_, lean_object* v_____do__lift_2720_){
_start:
{
lean_object* v___f_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___f_2721_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__7), 6, 5);
lean_closure_set(v___f_2721_, 0, v_____do__lift_2712_);
lean_closure_set(v___f_2721_, 1, v_i_2713_);
lean_closure_set(v___f_2721_, 2, v_offset_2714_);
lean_closure_set(v___f_2721_, 3, v_____do__lift_2720_);
lean_closure_set(v___f_2721_, 4, v_toPure_2715_);
v___x_2722_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___redArg(v_inst_2716_, v_f_2717_, v_ty_2718_);
v___x_2723_ = lean_apply_4(v_toBind_2719_, lean_box(0), lean_box(0), v___x_2722_, v___f_2721_);
return v___x_2723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__9(lean_object* v_i_2724_, lean_object* v_offset_2725_, lean_object* v_toPure_2726_, lean_object* v_inst_2727_, lean_object* v_f_2728_, lean_object* v_ty_2729_, lean_object* v_toBind_2730_, lean_object* v_y_2731_, lean_object* v_____do__lift_2732_){
_start:
{
lean_object* v___f_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
lean_inc(v_toBind_2730_);
lean_inc(v_f_2728_);
v___f_2733_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__8), 9, 8);
lean_closure_set(v___f_2733_, 0, v_____do__lift_2732_);
lean_closure_set(v___f_2733_, 1, v_i_2724_);
lean_closure_set(v___f_2733_, 2, v_offset_2725_);
lean_closure_set(v___f_2733_, 3, v_toPure_2726_);
lean_closure_set(v___f_2733_, 4, v_inst_2727_);
lean_closure_set(v___f_2733_, 5, v_f_2728_);
lean_closure_set(v___f_2733_, 6, v_ty_2729_);
lean_closure_set(v___f_2733_, 7, v_toBind_2730_);
v___x_2734_ = lean_apply_1(v_f_2728_, v_y_2731_);
v___x_2735_ = lean_apply_4(v_toBind_2730_, lean_box(0), lean_box(0), v___x_2734_, v___f_2733_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__10(lean_object* v_cidx_2736_, lean_object* v_toPure_2737_, lean_object* v_____do__lift_2738_){
_start:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; 
v___x_2739_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_2739_, 0, v_____do__lift_2738_);
lean_ctor_set(v___x_2739_, 1, v_cidx_2736_);
v___x_2740_ = lean_apply_2(v_toPure_2737_, lean_box(0), v___x_2739_);
return v___x_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__11(lean_object* v_n_2741_, uint8_t v_check_2742_, uint8_t v_persistent_2743_, lean_object* v_toPure_2744_, lean_object* v_____do__lift_2745_){
_start:
{
lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2746_ = lean_alloc_ctor(7, 2, 2);
lean_ctor_set(v___x_2746_, 0, v_____do__lift_2745_);
lean_ctor_set(v___x_2746_, 1, v_n_2741_);
lean_ctor_set_uint8(v___x_2746_, sizeof(void*)*2, v_check_2742_);
lean_ctor_set_uint8(v___x_2746_, sizeof(void*)*2 + 1, v_persistent_2743_);
v___x_2747_ = lean_apply_2(v_toPure_2744_, lean_box(0), v___x_2746_);
return v___x_2747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__11___boxed(lean_object* v_n_2748_, lean_object* v_check_2749_, lean_object* v_persistent_2750_, lean_object* v_toPure_2751_, lean_object* v_____do__lift_2752_){
_start:
{
uint8_t v_check_933__boxed_2753_; uint8_t v_persistent_934__boxed_2754_; lean_object* v_res_2755_; 
v_check_933__boxed_2753_ = lean_unbox(v_check_2749_);
v_persistent_934__boxed_2754_ = lean_unbox(v_persistent_2750_);
v_res_2755_ = l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__11(v_n_2748_, v_check_933__boxed_2753_, v_persistent_934__boxed_2754_, v_toPure_2751_, v_____do__lift_2752_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__12(lean_object* v_n_2756_, uint8_t v_check_2757_, uint8_t v_persistent_2758_, lean_object* v_objs_x3f_2759_, lean_object* v_toPure_2760_, lean_object* v_____do__lift_2761_){
_start:
{
lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___x_2762_ = lean_alloc_ctor(8, 3, 2);
lean_ctor_set(v___x_2762_, 0, v_____do__lift_2761_);
lean_ctor_set(v___x_2762_, 1, v_n_2756_);
lean_ctor_set(v___x_2762_, 2, v_objs_x3f_2759_);
lean_ctor_set_uint8(v___x_2762_, sizeof(void*)*3, v_check_2757_);
lean_ctor_set_uint8(v___x_2762_, sizeof(void*)*3 + 1, v_persistent_2758_);
v___x_2763_ = lean_apply_2(v_toPure_2760_, lean_box(0), v___x_2762_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__12___boxed(lean_object* v_n_2764_, lean_object* v_check_2765_, lean_object* v_persistent_2766_, lean_object* v_objs_x3f_2767_, lean_object* v_toPure_2768_, lean_object* v_____do__lift_2769_){
_start:
{
uint8_t v_check_949__boxed_2770_; uint8_t v_persistent_950__boxed_2771_; lean_object* v_res_2772_; 
v_check_949__boxed_2770_ = lean_unbox(v_check_2765_);
v_persistent_950__boxed_2771_ = lean_unbox(v_persistent_2766_);
v_res_2772_ = l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__12(v_n_2764_, v_check_949__boxed_2770_, v_persistent_950__boxed_2771_, v_objs_x3f_2767_, v_toPure_2768_, v_____do__lift_2769_);
return v_res_2772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__13(lean_object* v_toPure_2773_, lean_object* v_____do__lift_2774_){
_start:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2775_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_2775_, 0, v_____do__lift_2774_);
v___x_2776_ = lean_apply_2(v_toPure_2773_, lean_box(0), v___x_2775_);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__14(uint8_t v_pu_2777_, lean_object* v_m_2778_, lean_object* v_inst_2779_, lean_object* v_inst_2780_, lean_object* v_f_2781_, lean_object* v_decl_2782_){
_start:
{
switch(lean_obj_tag(v_decl_2782_))
{
case 0:
{
lean_object* v_toApplicative_2783_; lean_object* v_toBind_2784_; lean_object* v_toPure_2785_; lean_object* v_decl_2786_; lean_object* v___f_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v_toApplicative_2783_ = lean_ctor_get(v_inst_2780_, 0);
v_toBind_2784_ = lean_ctor_get(v_inst_2780_, 1);
lean_inc(v_toBind_2784_);
v_toPure_2785_ = lean_ctor_get(v_toApplicative_2783_, 1);
v_decl_2786_ = lean_ctor_get(v_decl_2782_, 0);
lean_inc_ref(v_decl_2786_);
lean_dec_ref_known(v_decl_2782_, 1);
lean_inc(v_toPure_2785_);
v___f_2787_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__0), 2, 1);
lean_closure_set(v___f_2787_, 0, v_toPure_2785_);
v___x_2788_ = l_Lean_Compiler_LCNF_LetDecl_mapFVarM___redArg(v_pu_2777_, v_inst_2779_, v_inst_2780_, v_f_2781_, v_decl_2786_);
v___x_2789_ = lean_apply_4(v_toBind_2784_, lean_box(0), lean_box(0), v___x_2788_, v___f_2787_);
return v___x_2789_;
}
case 1:
{
lean_object* v_toApplicative_2790_; lean_object* v_toBind_2791_; lean_object* v_toPure_2792_; lean_object* v_decl_2793_; lean_object* v___f_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
v_toApplicative_2790_ = lean_ctor_get(v_inst_2780_, 0);
v_toBind_2791_ = lean_ctor_get(v_inst_2780_, 1);
lean_inc(v_toBind_2791_);
v_toPure_2792_ = lean_ctor_get(v_toApplicative_2790_, 1);
v_decl_2793_ = lean_ctor_get(v_decl_2782_, 0);
lean_inc_ref(v_decl_2793_);
lean_dec_ref_known(v_decl_2782_, 1);
lean_inc(v_toPure_2792_);
v___f_2794_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__1), 2, 1);
lean_closure_set(v___f_2794_, 0, v_toPure_2792_);
v___x_2795_ = l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg(v_pu_2777_, v_inst_2779_, v_inst_2780_, v_f_2781_, v_decl_2793_);
v___x_2796_ = lean_apply_4(v_toBind_2791_, lean_box(0), lean_box(0), v___x_2795_, v___f_2794_);
return v___x_2796_;
}
case 2:
{
lean_object* v_toApplicative_2797_; lean_object* v_toBind_2798_; lean_object* v_toPure_2799_; lean_object* v_decl_2800_; lean_object* v___f_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v_toApplicative_2797_ = lean_ctor_get(v_inst_2780_, 0);
v_toBind_2798_ = lean_ctor_get(v_inst_2780_, 1);
lean_inc(v_toBind_2798_);
v_toPure_2799_ = lean_ctor_get(v_toApplicative_2797_, 1);
v_decl_2800_ = lean_ctor_get(v_decl_2782_, 0);
lean_inc_ref(v_decl_2800_);
lean_dec_ref_known(v_decl_2782_, 1);
lean_inc(v_toPure_2799_);
v___f_2801_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__2), 2, 1);
lean_closure_set(v___f_2801_, 0, v_toPure_2799_);
v___x_2802_ = l_Lean_Compiler_LCNF_FunDecl_mapFVarM___redArg(v_pu_2777_, v_inst_2779_, v_inst_2780_, v_f_2781_, v_decl_2800_);
v___x_2803_ = lean_apply_4(v_toBind_2798_, lean_box(0), lean_box(0), v___x_2802_, v___f_2801_);
return v___x_2803_;
}
case 3:
{
lean_object* v_toApplicative_2804_; lean_object* v_toBind_2805_; lean_object* v_toPure_2806_; lean_object* v_fvarId_2807_; lean_object* v_i_2808_; lean_object* v_y_2809_; lean_object* v___x_2810_; lean_object* v___f_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v_toApplicative_2804_ = lean_ctor_get(v_inst_2780_, 0);
lean_dec(v_inst_2779_);
v_toBind_2805_ = lean_ctor_get(v_inst_2780_, 1);
lean_inc_n(v_toBind_2805_, 2);
v_toPure_2806_ = lean_ctor_get(v_toApplicative_2804_, 1);
lean_inc(v_toPure_2806_);
v_fvarId_2807_ = lean_ctor_get(v_decl_2782_, 0);
lean_inc(v_fvarId_2807_);
v_i_2808_ = lean_ctor_get(v_decl_2782_, 1);
lean_inc(v_i_2808_);
v_y_2809_ = lean_ctor_get(v_decl_2782_, 2);
lean_inc(v_y_2809_);
lean_dec_ref_known(v_decl_2782_, 3);
v___x_2810_ = lean_box(v_pu_2777_);
lean_inc(v_f_2781_);
v___f_2811_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__4___boxed), 8, 7);
lean_closure_set(v___f_2811_, 0, v_i_2808_);
lean_closure_set(v___f_2811_, 1, v_toPure_2806_);
lean_closure_set(v___f_2811_, 2, v___x_2810_);
lean_closure_set(v___f_2811_, 3, v_inst_2780_);
lean_closure_set(v___f_2811_, 4, v_f_2781_);
lean_closure_set(v___f_2811_, 5, v_y_2809_);
lean_closure_set(v___f_2811_, 6, v_toBind_2805_);
v___x_2812_ = lean_apply_1(v_f_2781_, v_fvarId_2807_);
v___x_2813_ = lean_apply_4(v_toBind_2805_, lean_box(0), lean_box(0), v___x_2812_, v___f_2811_);
return v___x_2813_;
}
case 4:
{
lean_object* v_toApplicative_2814_; lean_object* v_toBind_2815_; lean_object* v_toPure_2816_; lean_object* v_fvarId_2817_; lean_object* v_i_2818_; lean_object* v_y_2819_; lean_object* v___f_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; 
v_toApplicative_2814_ = lean_ctor_get(v_inst_2780_, 0);
lean_inc_ref(v_toApplicative_2814_);
lean_dec(v_inst_2779_);
v_toBind_2815_ = lean_ctor_get(v_inst_2780_, 1);
lean_inc_n(v_toBind_2815_, 2);
lean_dec_ref(v_inst_2780_);
v_toPure_2816_ = lean_ctor_get(v_toApplicative_2814_, 1);
lean_inc(v_toPure_2816_);
lean_dec_ref(v_toApplicative_2814_);
v_fvarId_2817_ = lean_ctor_get(v_decl_2782_, 0);
lean_inc(v_fvarId_2817_);
v_i_2818_ = lean_ctor_get(v_decl_2782_, 1);
lean_inc(v_i_2818_);
v_y_2819_ = lean_ctor_get(v_decl_2782_, 2);
lean_inc(v_y_2819_);
lean_dec_ref_known(v_decl_2782_, 3);
lean_inc(v_f_2781_);
v___f_2820_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__6), 6, 5);
lean_closure_set(v___f_2820_, 0, v_i_2818_);
lean_closure_set(v___f_2820_, 1, v_toPure_2816_);
lean_closure_set(v___f_2820_, 2, v_f_2781_);
lean_closure_set(v___f_2820_, 3, v_y_2819_);
lean_closure_set(v___f_2820_, 4, v_toBind_2815_);
v___x_2821_ = lean_apply_1(v_f_2781_, v_fvarId_2817_);
v___x_2822_ = lean_apply_4(v_toBind_2815_, lean_box(0), lean_box(0), v___x_2821_, v___f_2820_);
return v___x_2822_;
}
case 5:
{
lean_object* v_toApplicative_2823_; lean_object* v_toBind_2824_; lean_object* v_toPure_2825_; lean_object* v_fvarId_2826_; lean_object* v_i_2827_; lean_object* v_offset_2828_; lean_object* v_y_2829_; lean_object* v_ty_2830_; lean_object* v___f_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v_toApplicative_2823_ = lean_ctor_get(v_inst_2780_, 0);
lean_dec(v_inst_2779_);
v_toBind_2824_ = lean_ctor_get(v_inst_2780_, 1);
lean_inc_n(v_toBind_2824_, 2);
v_toPure_2825_ = lean_ctor_get(v_toApplicative_2823_, 1);
lean_inc(v_toPure_2825_);
v_fvarId_2826_ = lean_ctor_get(v_decl_2782_, 0);
lean_inc(v_fvarId_2826_);
v_i_2827_ = lean_ctor_get(v_decl_2782_, 1);
lean_inc(v_i_2827_);
v_offset_2828_ = lean_ctor_get(v_decl_2782_, 2);
lean_inc(v_offset_2828_);
v_y_2829_ = lean_ctor_get(v_decl_2782_, 3);
lean_inc(v_y_2829_);
v_ty_2830_ = lean_ctor_get(v_decl_2782_, 4);
lean_inc_ref(v_ty_2830_);
lean_dec_ref_known(v_decl_2782_, 5);
lean_inc(v_f_2781_);
v___f_2831_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__9), 9, 8);
lean_closure_set(v___f_2831_, 0, v_i_2827_);
lean_closure_set(v___f_2831_, 1, v_offset_2828_);
lean_closure_set(v___f_2831_, 2, v_toPure_2825_);
lean_closure_set(v___f_2831_, 3, v_inst_2780_);
lean_closure_set(v___f_2831_, 4, v_f_2781_);
lean_closure_set(v___f_2831_, 5, v_ty_2830_);
lean_closure_set(v___f_2831_, 6, v_toBind_2824_);
lean_closure_set(v___f_2831_, 7, v_y_2829_);
v___x_2832_ = lean_apply_1(v_f_2781_, v_fvarId_2826_);
v___x_2833_ = lean_apply_4(v_toBind_2824_, lean_box(0), lean_box(0), v___x_2832_, v___f_2831_);
return v___x_2833_;
}
case 6:
{
lean_object* v_toApplicative_2834_; lean_object* v_toBind_2835_; lean_object* v_toPure_2836_; lean_object* v_fvarId_2837_; lean_object* v_cidx_2838_; lean_object* v___f_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v_toApplicative_2834_ = lean_ctor_get(v_inst_2780_, 0);
lean_inc_ref(v_toApplicative_2834_);
lean_dec(v_inst_2779_);
v_toBind_2835_ = lean_ctor_get(v_inst_2780_, 1);
lean_inc(v_toBind_2835_);
lean_dec_ref(v_inst_2780_);
v_toPure_2836_ = lean_ctor_get(v_toApplicative_2834_, 1);
lean_inc(v_toPure_2836_);
lean_dec_ref(v_toApplicative_2834_);
v_fvarId_2837_ = lean_ctor_get(v_decl_2782_, 0);
lean_inc(v_fvarId_2837_);
v_cidx_2838_ = lean_ctor_get(v_decl_2782_, 1);
lean_inc(v_cidx_2838_);
lean_dec_ref_known(v_decl_2782_, 2);
v___f_2839_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__10), 3, 2);
lean_closure_set(v___f_2839_, 0, v_cidx_2838_);
lean_closure_set(v___f_2839_, 1, v_toPure_2836_);
v___x_2840_ = lean_apply_1(v_f_2781_, v_fvarId_2837_);
v___x_2841_ = lean_apply_4(v_toBind_2835_, lean_box(0), lean_box(0), v___x_2840_, v___f_2839_);
return v___x_2841_;
}
case 7:
{
lean_object* v_toApplicative_2842_; lean_object* v_toBind_2843_; lean_object* v_toPure_2844_; lean_object* v_fvarId_2845_; lean_object* v_n_2846_; uint8_t v_check_2847_; uint8_t v_persistent_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___f_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; 
v_toApplicative_2842_ = lean_ctor_get(v_inst_2780_, 0);
lean_inc_ref(v_toApplicative_2842_);
lean_dec(v_inst_2779_);
v_toBind_2843_ = lean_ctor_get(v_inst_2780_, 1);
lean_inc(v_toBind_2843_);
lean_dec_ref(v_inst_2780_);
v_toPure_2844_ = lean_ctor_get(v_toApplicative_2842_, 1);
lean_inc(v_toPure_2844_);
lean_dec_ref(v_toApplicative_2842_);
v_fvarId_2845_ = lean_ctor_get(v_decl_2782_, 0);
lean_inc(v_fvarId_2845_);
v_n_2846_ = lean_ctor_get(v_decl_2782_, 1);
lean_inc(v_n_2846_);
v_check_2847_ = lean_ctor_get_uint8(v_decl_2782_, sizeof(void*)*2);
v_persistent_2848_ = lean_ctor_get_uint8(v_decl_2782_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_decl_2782_, 2);
v___x_2849_ = lean_box(v_check_2847_);
v___x_2850_ = lean_box(v_persistent_2848_);
v___f_2851_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__11___boxed), 5, 4);
lean_closure_set(v___f_2851_, 0, v_n_2846_);
lean_closure_set(v___f_2851_, 1, v___x_2849_);
lean_closure_set(v___f_2851_, 2, v___x_2850_);
lean_closure_set(v___f_2851_, 3, v_toPure_2844_);
v___x_2852_ = lean_apply_1(v_f_2781_, v_fvarId_2845_);
v___x_2853_ = lean_apply_4(v_toBind_2843_, lean_box(0), lean_box(0), v___x_2852_, v___f_2851_);
return v___x_2853_;
}
case 8:
{
lean_object* v_toApplicative_2854_; lean_object* v_toBind_2855_; lean_object* v_toPure_2856_; lean_object* v_fvarId_2857_; lean_object* v_n_2858_; uint8_t v_check_2859_; uint8_t v_persistent_2860_; lean_object* v_objs_x3f_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___f_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
v_toApplicative_2854_ = lean_ctor_get(v_inst_2780_, 0);
lean_inc_ref(v_toApplicative_2854_);
lean_dec(v_inst_2779_);
v_toBind_2855_ = lean_ctor_get(v_inst_2780_, 1);
lean_inc(v_toBind_2855_);
lean_dec_ref(v_inst_2780_);
v_toPure_2856_ = lean_ctor_get(v_toApplicative_2854_, 1);
lean_inc(v_toPure_2856_);
lean_dec_ref(v_toApplicative_2854_);
v_fvarId_2857_ = lean_ctor_get(v_decl_2782_, 0);
lean_inc(v_fvarId_2857_);
v_n_2858_ = lean_ctor_get(v_decl_2782_, 1);
lean_inc(v_n_2858_);
v_check_2859_ = lean_ctor_get_uint8(v_decl_2782_, sizeof(void*)*3);
v_persistent_2860_ = lean_ctor_get_uint8(v_decl_2782_, sizeof(void*)*3 + 1);
v_objs_x3f_2861_ = lean_ctor_get(v_decl_2782_, 2);
lean_inc(v_objs_x3f_2861_);
lean_dec_ref_known(v_decl_2782_, 3);
v___x_2862_ = lean_box(v_check_2859_);
v___x_2863_ = lean_box(v_persistent_2860_);
v___f_2864_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__12___boxed), 6, 5);
lean_closure_set(v___f_2864_, 0, v_n_2858_);
lean_closure_set(v___f_2864_, 1, v___x_2862_);
lean_closure_set(v___f_2864_, 2, v___x_2863_);
lean_closure_set(v___f_2864_, 3, v_objs_x3f_2861_);
lean_closure_set(v___f_2864_, 4, v_toPure_2856_);
v___x_2865_ = lean_apply_1(v_f_2781_, v_fvarId_2857_);
v___x_2866_ = lean_apply_4(v_toBind_2855_, lean_box(0), lean_box(0), v___x_2865_, v___f_2864_);
return v___x_2866_;
}
default: 
{
lean_object* v_toApplicative_2867_; lean_object* v_toBind_2868_; lean_object* v_toPure_2869_; lean_object* v_fvarId_2870_; lean_object* v___f_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
v_toApplicative_2867_ = lean_ctor_get(v_inst_2780_, 0);
lean_inc_ref(v_toApplicative_2867_);
lean_dec(v_inst_2779_);
v_toBind_2868_ = lean_ctor_get(v_inst_2780_, 1);
lean_inc(v_toBind_2868_);
lean_dec_ref(v_inst_2780_);
v_toPure_2869_ = lean_ctor_get(v_toApplicative_2867_, 1);
lean_inc(v_toPure_2869_);
lean_dec_ref(v_toApplicative_2867_);
v_fvarId_2870_ = lean_ctor_get(v_decl_2782_, 0);
lean_inc(v_fvarId_2870_);
lean_dec_ref_known(v_decl_2782_, 1);
v___f_2871_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__13), 2, 1);
lean_closure_set(v___f_2871_, 0, v_toPure_2869_);
v___x_2872_ = lean_apply_1(v_f_2781_, v_fvarId_2870_);
v___x_2873_ = lean_apply_4(v_toBind_2868_, lean_box(0), lean_box(0), v___x_2872_, v___f_2871_);
return v___x_2873_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__14___boxed(lean_object* v_pu_2874_, lean_object* v_m_2875_, lean_object* v_inst_2876_, lean_object* v_inst_2877_, lean_object* v_f_2878_, lean_object* v_decl_2879_){
_start:
{
uint8_t v_pu_boxed_2880_; lean_object* v_res_2881_; 
v_pu_boxed_2880_ = lean_unbox(v_pu_2874_);
v_res_2881_ = l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__14(v_pu_boxed_2880_, v_m_2875_, v_inst_2876_, v_inst_2877_, v_f_2878_, v_decl_2879_);
return v_res_2881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__15(lean_object* v_inst_2882_, lean_object* v_f_2883_, lean_object* v_y_2884_, lean_object* v_____r_2885_){
_start:
{
lean_object* v___x_2886_; 
v___x_2886_ = l_Lean_Compiler_LCNF_Arg_forFVarM___redArg(v_inst_2882_, v_f_2883_, v_y_2884_);
return v___x_2886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__16(lean_object* v_f_2887_, lean_object* v_y_2888_, lean_object* v_____r_2889_){
_start:
{
lean_object* v___x_2890_; 
v___x_2890_ = lean_apply_1(v_f_2887_, v_y_2888_);
return v___x_2890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__17(lean_object* v_inst_2891_, lean_object* v_f_2892_, lean_object* v_ty_2893_, lean_object* v_____r_2894_){
_start:
{
lean_object* v___x_2895_; 
v___x_2895_ = l_Lean_Compiler_LCNF_Expr_forFVarM___redArg(v_inst_2891_, v_f_2892_, v_ty_2893_);
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__18(lean_object* v_f_2896_, lean_object* v_y_2897_, lean_object* v_toBind_2898_, lean_object* v___f_2899_, lean_object* v_____r_2900_){
_start:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; 
v___x_2901_ = lean_apply_1(v_f_2896_, v_y_2897_);
v___x_2902_ = lean_apply_4(v_toBind_2898_, lean_box(0), lean_box(0), v___x_2901_, v___f_2899_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__19(lean_object* v_m_2903_, lean_object* v_inst_2904_, lean_object* v_f_2905_, lean_object* v_decl_2906_){
_start:
{
switch(lean_obj_tag(v_decl_2906_))
{
case 0:
{
lean_object* v_decl_2907_; lean_object* v___x_2908_; 
v_decl_2907_ = lean_ctor_get(v_decl_2906_, 0);
lean_inc_ref(v_decl_2907_);
lean_dec_ref_known(v_decl_2906_, 1);
v___x_2908_ = l_Lean_Compiler_LCNF_LetDecl_forFVarM___redArg(v_inst_2904_, v_f_2905_, v_decl_2907_);
return v___x_2908_;
}
case 1:
{
lean_object* v_decl_2909_; lean_object* v___x_2910_; 
v_decl_2909_ = lean_ctor_get(v_decl_2906_, 0);
lean_inc_ref(v_decl_2909_);
lean_dec_ref_known(v_decl_2906_, 1);
v___x_2910_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg(v_inst_2904_, v_f_2905_, v_decl_2909_);
return v___x_2910_;
}
case 2:
{
lean_object* v_decl_2911_; lean_object* v___x_2912_; 
v_decl_2911_ = lean_ctor_get(v_decl_2906_, 0);
lean_inc_ref(v_decl_2911_);
lean_dec_ref_known(v_decl_2906_, 1);
v___x_2912_ = l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg(v_inst_2904_, v_f_2905_, v_decl_2911_);
return v___x_2912_;
}
case 3:
{
lean_object* v_toBind_2913_; lean_object* v_fvarId_2914_; lean_object* v_y_2915_; lean_object* v___f_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v_toBind_2913_ = lean_ctor_get(v_inst_2904_, 1);
lean_inc(v_toBind_2913_);
v_fvarId_2914_ = lean_ctor_get(v_decl_2906_, 0);
lean_inc(v_fvarId_2914_);
v_y_2915_ = lean_ctor_get(v_decl_2906_, 2);
lean_inc(v_y_2915_);
lean_dec_ref_known(v_decl_2906_, 3);
lean_inc(v_f_2905_);
v___f_2916_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__15), 4, 3);
lean_closure_set(v___f_2916_, 0, v_inst_2904_);
lean_closure_set(v___f_2916_, 1, v_f_2905_);
lean_closure_set(v___f_2916_, 2, v_y_2915_);
v___x_2917_ = lean_apply_1(v_f_2905_, v_fvarId_2914_);
v___x_2918_ = lean_apply_4(v_toBind_2913_, lean_box(0), lean_box(0), v___x_2917_, v___f_2916_);
return v___x_2918_;
}
case 4:
{
lean_object* v_toBind_2919_; lean_object* v_fvarId_2920_; lean_object* v_y_2921_; lean_object* v___f_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v_toBind_2919_ = lean_ctor_get(v_inst_2904_, 1);
lean_inc(v_toBind_2919_);
lean_dec_ref(v_inst_2904_);
v_fvarId_2920_ = lean_ctor_get(v_decl_2906_, 0);
lean_inc(v_fvarId_2920_);
v_y_2921_ = lean_ctor_get(v_decl_2906_, 2);
lean_inc(v_y_2921_);
lean_dec_ref_known(v_decl_2906_, 3);
lean_inc(v_f_2905_);
v___f_2922_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__16), 3, 2);
lean_closure_set(v___f_2922_, 0, v_f_2905_);
lean_closure_set(v___f_2922_, 1, v_y_2921_);
v___x_2923_ = lean_apply_1(v_f_2905_, v_fvarId_2920_);
v___x_2924_ = lean_apply_4(v_toBind_2919_, lean_box(0), lean_box(0), v___x_2923_, v___f_2922_);
return v___x_2924_;
}
case 5:
{
lean_object* v_toBind_2925_; lean_object* v_fvarId_2926_; lean_object* v_y_2927_; lean_object* v_ty_2928_; lean_object* v___f_2929_; lean_object* v___f_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; 
v_toBind_2925_ = lean_ctor_get(v_inst_2904_, 1);
lean_inc_n(v_toBind_2925_, 2);
v_fvarId_2926_ = lean_ctor_get(v_decl_2906_, 0);
lean_inc(v_fvarId_2926_);
v_y_2927_ = lean_ctor_get(v_decl_2906_, 3);
lean_inc(v_y_2927_);
v_ty_2928_ = lean_ctor_get(v_decl_2906_, 4);
lean_inc_ref(v_ty_2928_);
lean_dec_ref_known(v_decl_2906_, 5);
lean_inc_n(v_f_2905_, 2);
v___f_2929_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__17), 4, 3);
lean_closure_set(v___f_2929_, 0, v_inst_2904_);
lean_closure_set(v___f_2929_, 1, v_f_2905_);
lean_closure_set(v___f_2929_, 2, v_ty_2928_);
v___f_2930_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__18), 5, 4);
lean_closure_set(v___f_2930_, 0, v_f_2905_);
lean_closure_set(v___f_2930_, 1, v_y_2927_);
lean_closure_set(v___f_2930_, 2, v_toBind_2925_);
lean_closure_set(v___f_2930_, 3, v___f_2929_);
v___x_2931_ = lean_apply_1(v_f_2905_, v_fvarId_2926_);
v___x_2932_ = lean_apply_4(v_toBind_2925_, lean_box(0), lean_box(0), v___x_2931_, v___f_2930_);
return v___x_2932_;
}
default: 
{
lean_object* v_fvarId_2933_; lean_object* v___x_2934_; 
lean_dec_ref(v_inst_2904_);
v_fvarId_2933_ = lean_ctor_get(v_decl_2906_, 0);
lean_inc(v_fvarId_2933_);
lean_dec_ref(v_decl_2906_);
v___x_2934_ = lean_apply_1(v_f_2905_, v_fvarId_2933_);
return v___x_2934_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl(uint8_t v_pu_2936_){
_start:
{
lean_object* v___x_2937_; lean_object* v___f_2938_; lean_object* v___f_2939_; lean_object* v___x_2940_; 
v___x_2937_ = lean_box(v_pu_2936_);
v___f_2938_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___lam__14___boxed), 6, 1);
lean_closure_set(v___f_2938_, 0, v___x_2937_);
v___f_2939_ = ((lean_object*)(l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___closed__0));
v___x_2940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2940_, 0, v___f_2938_);
lean_ctor_set(v___x_2940_, 1, v___f_2939_);
return v___x_2940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl___boxed(lean_object* v_pu_2941_){
_start:
{
uint8_t v_pu_boxed_2942_; lean_object* v_res_2943_; 
v_pu_boxed_2942_ = lean_unbox(v_pu_2941_);
v_res_2943_ = l_Lean_Compiler_LCNF_instTraverseFVarCodeDecl(v_pu_boxed_2942_);
return v_res_2943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__0(lean_object* v_ctorName_2944_, lean_object* v_params_2945_, lean_object* v_toPure_2946_, lean_object* v_____do__lift_2947_){
_start:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2948_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2948_, 0, v_ctorName_2944_);
lean_ctor_set(v___x_2948_, 1, v_params_2945_);
lean_ctor_set(v___x_2948_, 2, v_____do__lift_2947_);
v___x_2949_ = lean_apply_2(v_toPure_2946_, lean_box(0), v___x_2948_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__1(lean_object* v_ctorName_2950_, lean_object* v_toPure_2951_, uint8_t v_pu_2952_, lean_object* v_inst_2953_, lean_object* v_inst_2954_, lean_object* v_f_2955_, lean_object* v_code_2956_, lean_object* v_toBind_2957_, lean_object* v_params_2958_){
_start:
{
lean_object* v___f_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___f_2959_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__0), 4, 3);
lean_closure_set(v___f_2959_, 0, v_ctorName_2950_);
lean_closure_set(v___f_2959_, 1, v_params_2958_);
lean_closure_set(v___f_2959_, 2, v_toPure_2951_);
v___x_2960_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_2952_, v_inst_2953_, v_inst_2954_, v_f_2955_, v_code_2956_);
v___x_2961_ = lean_apply_4(v_toBind_2957_, lean_box(0), lean_box(0), v___x_2960_, v___f_2959_);
return v___x_2961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__1___boxed(lean_object* v_ctorName_2962_, lean_object* v_toPure_2963_, lean_object* v_pu_2964_, lean_object* v_inst_2965_, lean_object* v_inst_2966_, lean_object* v_f_2967_, lean_object* v_code_2968_, lean_object* v_toBind_2969_, lean_object* v_params_2970_){
_start:
{
uint8_t v_pu_boxed_2971_; lean_object* v_res_2972_; 
v_pu_boxed_2971_ = lean_unbox(v_pu_2964_);
v_res_2972_ = l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__1(v_ctorName_2962_, v_toPure_2963_, v_pu_boxed_2971_, v_inst_2965_, v_inst_2966_, v_f_2967_, v_code_2968_, v_toBind_2969_, v_params_2970_);
return v_res_2972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__2(lean_object* v_info_2973_, lean_object* v_toPure_2974_, lean_object* v_____do__lift_2975_){
_start:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; 
v___x_2976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2976_, 0, v_info_2973_);
lean_ctor_set(v___x_2976_, 1, v_____do__lift_2975_);
v___x_2977_ = lean_apply_2(v_toPure_2974_, lean_box(0), v___x_2976_);
return v___x_2977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__3(lean_object* v_toPure_2978_, lean_object* v_____do__lift_2979_){
_start:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2980_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2980_, 0, v_____do__lift_2979_);
v___x_2981_ = lean_apply_2(v_toPure_2978_, lean_box(0), v___x_2980_);
return v___x_2981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__4(uint8_t v_pu_2982_, lean_object* v_m_2983_, lean_object* v_inst_2984_, lean_object* v_inst_2985_, lean_object* v_f_2986_, lean_object* v_alt_2987_){
_start:
{
switch(lean_obj_tag(v_alt_2987_))
{
case 0:
{
lean_object* v_toApplicative_2988_; lean_object* v_toBind_2989_; lean_object* v_toPure_2990_; lean_object* v_ctorName_2991_; lean_object* v_params_2992_; lean_object* v_code_2993_; lean_object* v___x_2994_; lean_object* v___f_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; size_t v_sz_2998_; size_t v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v_toApplicative_2988_ = lean_ctor_get(v_inst_2985_, 0);
v_toBind_2989_ = lean_ctor_get(v_inst_2985_, 1);
lean_inc_n(v_toBind_2989_, 2);
v_toPure_2990_ = lean_ctor_get(v_toApplicative_2988_, 1);
v_ctorName_2991_ = lean_ctor_get(v_alt_2987_, 0);
lean_inc(v_ctorName_2991_);
v_params_2992_ = lean_ctor_get(v_alt_2987_, 1);
lean_inc_ref(v_params_2992_);
v_code_2993_ = lean_ctor_get(v_alt_2987_, 2);
lean_inc_ref(v_code_2993_);
lean_dec_ref_known(v_alt_2987_, 3);
v___x_2994_ = lean_box(v_pu_2982_);
lean_inc(v_f_2986_);
lean_inc_ref_n(v_inst_2985_, 2);
lean_inc(v_inst_2984_);
lean_inc(v_toPure_2990_);
v___f_2995_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__1___boxed), 9, 8);
lean_closure_set(v___f_2995_, 0, v_ctorName_2991_);
lean_closure_set(v___f_2995_, 1, v_toPure_2990_);
lean_closure_set(v___f_2995_, 2, v___x_2994_);
lean_closure_set(v___f_2995_, 3, v_inst_2984_);
lean_closure_set(v___f_2995_, 4, v_inst_2985_);
lean_closure_set(v___f_2995_, 5, v_f_2986_);
lean_closure_set(v___f_2995_, 6, v_code_2993_);
lean_closure_set(v___f_2995_, 7, v_toBind_2989_);
v___x_2996_ = lean_box(v_pu_2982_);
v___x_2997_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Param_mapFVarM___boxed), 6, 5);
lean_closure_set(v___x_2997_, 0, lean_box(0));
lean_closure_set(v___x_2997_, 1, v___x_2996_);
lean_closure_set(v___x_2997_, 2, v_inst_2984_);
lean_closure_set(v___x_2997_, 3, v_inst_2985_);
lean_closure_set(v___x_2997_, 4, v_f_2986_);
v_sz_2998_ = lean_array_size(v_params_2992_);
v___x_2999_ = ((size_t)0ULL);
v___x_3000_ = l_unsafeCast___redArg(v_params_2992_);
lean_dec_ref(v_params_2992_);
v___x_3001_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_2985_, v___x_2997_, v_sz_2998_, v___x_2999_, v___x_3000_);
v___x_3002_ = l_unsafeCast___redArg(v___x_3001_);
lean_dec(v___x_3001_);
v___x_3003_ = lean_apply_4(v_toBind_2989_, lean_box(0), lean_box(0), v___x_3002_, v___f_2995_);
return v___x_3003_;
}
case 1:
{
lean_object* v_toApplicative_3004_; lean_object* v_toBind_3005_; lean_object* v_toPure_3006_; lean_object* v_info_3007_; lean_object* v_code_3008_; lean_object* v___f_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; 
v_toApplicative_3004_ = lean_ctor_get(v_inst_2985_, 0);
v_toBind_3005_ = lean_ctor_get(v_inst_2985_, 1);
lean_inc(v_toBind_3005_);
v_toPure_3006_ = lean_ctor_get(v_toApplicative_3004_, 1);
v_info_3007_ = lean_ctor_get(v_alt_2987_, 0);
lean_inc_ref(v_info_3007_);
v_code_3008_ = lean_ctor_get(v_alt_2987_, 1);
lean_inc_ref(v_code_3008_);
lean_dec_ref_known(v_alt_2987_, 2);
lean_inc(v_toPure_3006_);
v___f_3009_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__2), 3, 2);
lean_closure_set(v___f_3009_, 0, v_info_3007_);
lean_closure_set(v___f_3009_, 1, v_toPure_3006_);
v___x_3010_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_2982_, v_inst_2984_, v_inst_2985_, v_f_2986_, v_code_3008_);
v___x_3011_ = lean_apply_4(v_toBind_3005_, lean_box(0), lean_box(0), v___x_3010_, v___f_3009_);
return v___x_3011_;
}
default: 
{
lean_object* v_toApplicative_3012_; lean_object* v_toBind_3013_; lean_object* v_toPure_3014_; lean_object* v_code_3015_; lean_object* v___f_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; 
v_toApplicative_3012_ = lean_ctor_get(v_inst_2985_, 0);
v_toBind_3013_ = lean_ctor_get(v_inst_2985_, 1);
lean_inc(v_toBind_3013_);
v_toPure_3014_ = lean_ctor_get(v_toApplicative_3012_, 1);
v_code_3015_ = lean_ctor_get(v_alt_2987_, 0);
lean_inc_ref(v_code_3015_);
lean_dec_ref_known(v_alt_2987_, 1);
lean_inc(v_toPure_3014_);
v___f_3016_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__3), 2, 1);
lean_closure_set(v___f_3016_, 0, v_toPure_3014_);
v___x_3017_ = l_Lean_Compiler_LCNF_Code_mapFVarM___redArg(v_pu_2982_, v_inst_2984_, v_inst_2985_, v_f_2986_, v_code_3015_);
v___x_3018_ = lean_apply_4(v_toBind_3013_, lean_box(0), lean_box(0), v___x_3017_, v___f_3016_);
return v___x_3018_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__4___boxed(lean_object* v_pu_3019_, lean_object* v_m_3020_, lean_object* v_inst_3021_, lean_object* v_inst_3022_, lean_object* v_f_3023_, lean_object* v_alt_3024_){
_start:
{
uint8_t v_pu_boxed_3025_; lean_object* v_res_3026_; 
v_pu_boxed_3025_ = lean_unbox(v_pu_3019_);
v_res_3026_ = l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__4(v_pu_boxed_3025_, v_m_3020_, v_inst_3021_, v_inst_3022_, v_f_3023_, v_alt_3024_);
return v_res_3026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__5(lean_object* v_inst_3027_, lean_object* v_f_3028_, lean_object* v_code_3029_, lean_object* v_____r_3030_){
_start:
{
lean_object* v___x_3031_; 
v___x_3031_ = l_Lean_Compiler_LCNF_Code_forFVarM___redArg(v_inst_3027_, v_f_3028_, v_code_3029_);
return v___x_3031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__7(lean_object* v_m_3032_, lean_object* v_inst_3033_, lean_object* v_f_3034_, lean_object* v_alt_3035_){
_start:
{
switch(lean_obj_tag(v_alt_3035_))
{
case 0:
{
lean_object* v_toApplicative_3036_; lean_object* v_toBind_3037_; lean_object* v_params_3038_; lean_object* v_code_3039_; lean_object* v_toPure_3040_; lean_object* v___f_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; uint8_t v___x_3045_; 
v_toApplicative_3036_ = lean_ctor_get(v_inst_3033_, 0);
v_toBind_3037_ = lean_ctor_get(v_inst_3033_, 1);
lean_inc(v_toBind_3037_);
v_params_3038_ = lean_ctor_get(v_alt_3035_, 1);
lean_inc_ref(v_params_3038_);
v_code_3039_ = lean_ctor_get(v_alt_3035_, 2);
lean_inc_ref(v_code_3039_);
lean_dec_ref_known(v_alt_3035_, 3);
v_toPure_3040_ = lean_ctor_get(v_toApplicative_3036_, 1);
lean_inc(v_f_3034_);
lean_inc_ref(v_inst_3033_);
v___f_3041_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__5), 4, 3);
lean_closure_set(v___f_3041_, 0, v_inst_3033_);
lean_closure_set(v___f_3041_, 1, v_f_3034_);
lean_closure_set(v___f_3041_, 2, v_code_3039_);
v___x_3042_ = lean_unsigned_to_nat(0u);
v___x_3043_ = lean_array_get_size(v_params_3038_);
v___x_3044_ = lean_box(0);
v___x_3045_ = lean_nat_dec_lt(v___x_3042_, v___x_3043_);
if (v___x_3045_ == 0)
{
lean_object* v___x_3046_; lean_object* v___x_3047_; 
lean_inc(v_toPure_3040_);
lean_dec_ref(v_params_3038_);
lean_dec(v_f_3034_);
lean_dec_ref(v_inst_3033_);
v___x_3046_ = lean_apply_2(v_toPure_3040_, lean_box(0), v___x_3044_);
v___x_3047_ = lean_apply_4(v_toBind_3037_, lean_box(0), lean_box(0), v___x_3046_, v___f_3041_);
return v___x_3047_;
}
else
{
lean_object* v___f_3048_; uint8_t v___x_3049_; 
lean_inc_ref(v_inst_3033_);
v___f_3048_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FunDecl_forFVarM___redArg___lam__2), 4, 2);
lean_closure_set(v___f_3048_, 0, v_inst_3033_);
lean_closure_set(v___f_3048_, 1, v_f_3034_);
v___x_3049_ = lean_nat_dec_le(v___x_3043_, v___x_3043_);
if (v___x_3049_ == 0)
{
if (v___x_3045_ == 0)
{
lean_object* v___x_3050_; lean_object* v___x_3051_; 
lean_inc(v_toPure_3040_);
lean_dec_ref(v___f_3048_);
lean_dec_ref(v_params_3038_);
lean_dec_ref(v_inst_3033_);
v___x_3050_ = lean_apply_2(v_toPure_3040_, lean_box(0), v___x_3044_);
v___x_3051_ = lean_apply_4(v_toBind_3037_, lean_box(0), lean_box(0), v___x_3050_, v___f_3041_);
return v___x_3051_;
}
else
{
size_t v___x_3052_; size_t v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3052_ = ((size_t)0ULL);
v___x_3053_ = lean_usize_of_nat(v___x_3043_);
v___x_3054_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3033_, v___f_3048_, v_params_3038_, v___x_3052_, v___x_3053_, v___x_3044_);
v___x_3055_ = lean_apply_4(v_toBind_3037_, lean_box(0), lean_box(0), v___x_3054_, v___f_3041_);
return v___x_3055_;
}
}
else
{
size_t v___x_3056_; size_t v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3056_ = ((size_t)0ULL);
v___x_3057_ = lean_usize_of_nat(v___x_3043_);
v___x_3058_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3033_, v___f_3048_, v_params_3038_, v___x_3056_, v___x_3057_, v___x_3044_);
v___x_3059_ = lean_apply_4(v_toBind_3037_, lean_box(0), lean_box(0), v___x_3058_, v___f_3041_);
return v___x_3059_;
}
}
}
case 1:
{
lean_object* v_code_3060_; lean_object* v___x_3061_; 
v_code_3060_ = lean_ctor_get(v_alt_3035_, 1);
lean_inc_ref(v_code_3060_);
lean_dec_ref_known(v_alt_3035_, 2);
v___x_3061_ = l_Lean_Compiler_LCNF_Code_forFVarM___redArg(v_inst_3033_, v_f_3034_, v_code_3060_);
return v___x_3061_;
}
default: 
{
lean_object* v_code_3062_; lean_object* v___x_3063_; 
v_code_3062_ = lean_ctor_get(v_alt_3035_, 0);
lean_inc_ref(v_code_3062_);
lean_dec_ref_known(v_alt_3035_, 1);
v___x_3063_ = l_Lean_Compiler_LCNF_Code_forFVarM___redArg(v_inst_3033_, v_f_3034_, v_code_3062_);
return v___x_3063_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt(uint8_t v_pu_3065_){
_start:
{
lean_object* v___x_3066_; lean_object* v___f_3067_; lean_object* v___f_3068_; lean_object* v___x_3069_; 
v___x_3066_ = lean_box(v_pu_3065_);
v___f_3067_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instTraverseFVarAlt___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3067_, 0, v___x_3066_);
v___f_3068_ = ((lean_object*)(l_Lean_Compiler_LCNF_instTraverseFVarAlt___closed__0));
v___x_3069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3069_, 0, v___f_3067_);
lean_ctor_set(v___x_3069_, 1, v___f_3068_);
return v___x_3069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instTraverseFVarAlt___boxed(lean_object* v_pu_3070_){
_start:
{
uint8_t v_pu_boxed_3071_; lean_object* v_res_3072_; 
v_pu_boxed_3071_ = lean_unbox(v_pu_3070_);
v_res_3072_ = l_Lean_Compiler_LCNF_instTraverseFVarAlt(v_pu_boxed_3071_);
return v_res_3072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__0(lean_object* v_toPure_3075_, lean_object* v_____do__lift_3076_){
_start:
{
if (lean_obj_tag(v_____do__lift_3076_) == 0)
{
lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3077_ = lean_box(0);
v___x_3078_ = lean_apply_2(v_toPure_3075_, lean_box(0), v___x_3077_);
return v___x_3078_;
}
else
{
lean_object* v_val_3079_; uint8_t v___x_3080_; 
v_val_3079_ = lean_ctor_get(v_____do__lift_3076_, 0);
v___x_3080_ = lean_unbox(v_val_3079_);
if (v___x_3080_ == 0)
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__0___closed__0));
v___x_3082_ = lean_apply_2(v_toPure_3075_, lean_box(0), v___x_3081_);
return v___x_3082_;
}
else
{
lean_object* v___x_3083_; lean_object* v___x_3084_; 
v___x_3083_ = lean_box(0);
v___x_3084_ = lean_apply_2(v_toPure_3075_, lean_box(0), v___x_3083_);
return v___x_3084_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__0___boxed(lean_object* v_toPure_3085_, lean_object* v_____do__lift_3086_){
_start:
{
lean_object* v_res_3087_; 
v_res_3087_ = l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__0(v_toPure_3085_, v_____do__lift_3086_);
lean_dec(v_____do__lift_3086_);
return v_res_3087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__1(lean_object* v_toPure_3088_, uint8_t v_____do__lift_3089_){
_start:
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___x_3090_ = lean_box(v_____do__lift_3089_);
v___x_3091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3090_);
v___x_3092_ = lean_apply_2(v_toPure_3088_, lean_box(0), v___x_3091_);
return v___x_3092_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__1___boxed(lean_object* v_toPure_3093_, lean_object* v_____do__lift_3094_){
_start:
{
uint8_t v_____do__lift_371__boxed_3095_; lean_object* v_res_3096_; 
v_____do__lift_371__boxed_3095_ = lean_unbox(v_____do__lift_3094_);
v_res_3096_ = l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__1(v_toPure_3093_, v_____do__lift_371__boxed_3095_);
return v_res_3096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg(lean_object* v_inst_3097_, lean_object* v_f_3098_, lean_object* v_fvar_3099_){
_start:
{
lean_object* v_toApplicative_3100_; lean_object* v_toBind_3101_; lean_object* v_toPure_3102_; lean_object* v___x_3103_; lean_object* v___f_3104_; lean_object* v___f_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v_toApplicative_3100_ = lean_ctor_get(v_inst_3097_, 0);
lean_inc_ref(v_toApplicative_3100_);
v_toBind_3101_ = lean_ctor_get(v_inst_3097_, 1);
lean_inc_n(v_toBind_3101_, 2);
lean_dec_ref(v_inst_3097_);
v_toPure_3102_ = lean_ctor_get(v_toApplicative_3100_, 1);
lean_inc_n(v_toPure_3102_, 2);
lean_dec_ref(v_toApplicative_3100_);
v___x_3103_ = lean_apply_1(v_f_3098_, v_fvar_3099_);
v___f_3104_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3104_, 0, v_toPure_3102_);
v___f_3105_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_3105_, 0, v_toPure_3102_);
v___x_3106_ = lean_apply_4(v_toBind_3101_, lean_box(0), lean_box(0), v___x_3103_, v___f_3105_);
v___x_3107_ = lean_apply_4(v_toBind_3101_, lean_box(0), lean_box(0), v___x_3106_, v___f_3104_);
return v___x_3107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go(lean_object* v_m_3108_, lean_object* v_inst_3109_, lean_object* v_f_3110_, lean_object* v_fvar_3111_){
_start:
{
lean_object* v___x_3112_; 
v___x_3112_ = l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg(v_inst_3109_, v_f_3110_, v_fvar_3111_);
return v___x_3112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVarM___redArg___lam__0(lean_object* v_toPure_3113_, lean_object* v_____do__lift_3114_){
_start:
{
if (lean_obj_tag(v_____do__lift_3114_) == 0)
{
uint8_t v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; 
v___x_3115_ = 1;
v___x_3116_ = lean_box(v___x_3115_);
v___x_3117_ = lean_apply_2(v_toPure_3113_, lean_box(0), v___x_3116_);
return v___x_3117_;
}
else
{
uint8_t v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
v___x_3118_ = 0;
v___x_3119_ = lean_box(v___x_3118_);
v___x_3120_ = lean_apply_2(v_toPure_3113_, lean_box(0), v___x_3119_);
return v___x_3120_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVarM___redArg___lam__0___boxed(lean_object* v_toPure_3121_, lean_object* v_____do__lift_3122_){
_start:
{
lean_object* v_res_3123_; 
v_res_3123_ = l_Lean_Compiler_LCNF_anyFVarM___redArg___lam__0(v_toPure_3121_, v_____do__lift_3122_);
lean_dec(v_____do__lift_3122_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVarM___redArg(lean_object* v_inst_3124_, lean_object* v_inst_3125_, lean_object* v_f_3126_, lean_object* v_x_3127_){
_start:
{
lean_object* v_toApplicative_3128_; lean_object* v_toBind_3129_; lean_object* v_forFVarM_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3151_; 
v_toApplicative_3128_ = lean_ctor_get(v_inst_3124_, 0);
v_toBind_3129_ = lean_ctor_get(v_inst_3124_, 1);
lean_inc(v_toBind_3129_);
v_forFVarM_3130_ = lean_ctor_get(v_inst_3125_, 1);
v_isSharedCheck_3151_ = !lean_is_exclusive(v_inst_3125_);
if (v_isSharedCheck_3151_ == 0)
{
lean_object* v_unused_3152_; 
v_unused_3152_ = lean_ctor_get(v_inst_3125_, 0);
lean_dec(v_unused_3152_);
v___x_3132_ = v_inst_3125_;
v_isShared_3133_ = v_isSharedCheck_3151_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_forFVarM_3130_);
lean_dec(v_inst_3125_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3151_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___f_3134_; lean_object* v___f_3135_; lean_object* v___f_3136_; lean_object* v___f_3137_; lean_object* v___f_3138_; lean_object* v___x_3140_; 
lean_inc_ref_n(v_inst_3124_, 5);
v___f_3134_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3134_, 0, v_inst_3124_);
v___f_3135_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3135_, 0, v_inst_3124_);
v___f_3136_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3136_, 0, v_inst_3124_);
v___f_3137_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3137_, 0, v_inst_3124_);
v___f_3138_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3138_, 0, v_inst_3124_);
if (v_isShared_3133_ == 0)
{
lean_ctor_set(v___x_3132_, 1, v___f_3135_);
lean_ctor_set(v___x_3132_, 0, v___f_3134_);
v___x_3140_ = v___x_3132_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___f_3134_);
lean_ctor_set(v_reuseFailAlloc_3150_, 1, v___f_3135_);
v___x_3140_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v_toPure_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___f_3148_; lean_object* v___x_3149_; 
lean_inc_ref_n(v_inst_3124_, 2);
v___x_3141_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3141_, 0, lean_box(0));
lean_closure_set(v___x_3141_, 1, v_inst_3124_);
v___x_3142_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3140_);
lean_ctor_set(v___x_3142_, 1, v___x_3141_);
lean_ctor_set(v___x_3142_, 2, v___f_3136_);
lean_ctor_set(v___x_3142_, 3, v___f_3137_);
lean_ctor_set(v___x_3142_, 4, v___f_3138_);
v___x_3143_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3143_, 0, lean_box(0));
lean_closure_set(v___x_3143_, 1, v_inst_3124_);
v___x_3144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3142_);
lean_ctor_set(v___x_3144_, 1, v___x_3143_);
v_toPure_3145_ = lean_ctor_get(v_toApplicative_3128_, 1);
lean_inc(v_toPure_3145_);
v___x_3146_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go), 4, 3);
lean_closure_set(v___x_3146_, 0, lean_box(0));
lean_closure_set(v___x_3146_, 1, v_inst_3124_);
lean_closure_set(v___x_3146_, 2, v_f_3126_);
v___x_3147_ = lean_apply_4(v_forFVarM_3130_, lean_box(0), v___x_3144_, v___x_3146_, v_x_3127_);
v___f_3148_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_anyFVarM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3148_, 0, v_toPure_3145_);
v___x_3149_ = lean_apply_4(v_toBind_3129_, lean_box(0), lean_box(0), v___x_3147_, v___f_3148_);
return v___x_3149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVarM(lean_object* v_m_3153_, lean_object* v_00_u03b1_3154_, lean_object* v_inst_3155_, lean_object* v_inst_3156_, lean_object* v_f_3157_, lean_object* v_x_3158_){
_start:
{
lean_object* v___x_3159_; 
v___x_3159_ = l_Lean_Compiler_LCNF_anyFVarM___redArg(v_inst_3155_, v_inst_3156_, v_f_3157_, v_x_3158_);
return v___x_3159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___redArg___lam__0(lean_object* v_toPure_3160_, lean_object* v_____do__lift_3161_){
_start:
{
if (lean_obj_tag(v_____do__lift_3161_) == 0)
{
lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3162_ = lean_box(0);
v___x_3163_ = lean_apply_2(v_toPure_3160_, lean_box(0), v___x_3162_);
return v___x_3163_;
}
else
{
lean_object* v_val_3164_; uint8_t v___x_3165_; 
v_val_3164_ = lean_ctor_get(v_____do__lift_3161_, 0);
v___x_3165_ = lean_unbox(v_val_3164_);
if (v___x_3165_ == 0)
{
lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3166_ = lean_box(0);
v___x_3167_ = lean_apply_2(v_toPure_3160_, lean_box(0), v___x_3166_);
return v___x_3167_;
}
else
{
lean_object* v___x_3168_; lean_object* v___x_3169_; 
v___x_3168_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__0___closed__0));
v___x_3169_ = lean_apply_2(v_toPure_3160_, lean_box(0), v___x_3168_);
return v___x_3169_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___redArg___lam__0___boxed(lean_object* v_toPure_3170_, lean_object* v_____do__lift_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___redArg___lam__0(v_toPure_3170_, v_____do__lift_3171_);
lean_dec(v_____do__lift_3171_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___redArg(lean_object* v_inst_3173_, lean_object* v_f_3174_, lean_object* v_fvar_3175_){
_start:
{
lean_object* v_toApplicative_3176_; lean_object* v_toBind_3177_; lean_object* v_toPure_3178_; lean_object* v___x_3179_; lean_object* v___f_3180_; lean_object* v___f_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v_toApplicative_3176_ = lean_ctor_get(v_inst_3173_, 0);
lean_inc_ref(v_toApplicative_3176_);
v_toBind_3177_ = lean_ctor_get(v_inst_3173_, 1);
lean_inc_n(v_toBind_3177_, 2);
lean_dec_ref(v_inst_3173_);
v_toPure_3178_ = lean_ctor_get(v_toApplicative_3176_, 1);
lean_inc_n(v_toPure_3178_, 2);
lean_dec_ref(v_toApplicative_3176_);
v___x_3179_ = lean_apply_1(v_f_3174_, v_fvar_3175_);
v___f_3180_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3180_, 0, v_toPure_3178_);
v___f_3181_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_anyFVarM_go___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_3181_, 0, v_toPure_3178_);
v___x_3182_ = lean_apply_4(v_toBind_3177_, lean_box(0), lean_box(0), v___x_3179_, v___f_3181_);
v___x_3183_ = lean_apply_4(v_toBind_3177_, lean_box(0), lean_box(0), v___x_3182_, v___f_3180_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go(lean_object* v_m_3184_, lean_object* v_inst_3185_, lean_object* v_f_3186_, lean_object* v_fvar_3187_){
_start:
{
lean_object* v___x_3188_; 
v___x_3188_ = l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___redArg(v_inst_3185_, v_f_3186_, v_fvar_3187_);
return v___x_3188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___redArg___lam__0(lean_object* v_toPure_3189_, lean_object* v_____do__lift_3190_){
_start:
{
if (lean_obj_tag(v_____do__lift_3190_) == 1)
{
uint8_t v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
v___x_3191_ = 1;
v___x_3192_ = lean_box(v___x_3191_);
v___x_3193_ = lean_apply_2(v_toPure_3189_, lean_box(0), v___x_3192_);
return v___x_3193_;
}
else
{
uint8_t v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3194_ = 0;
v___x_3195_ = lean_box(v___x_3194_);
v___x_3196_ = lean_apply_2(v_toPure_3189_, lean_box(0), v___x_3195_);
return v___x_3196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___redArg___lam__0___boxed(lean_object* v_toPure_3197_, lean_object* v_____do__lift_3198_){
_start:
{
lean_object* v_res_3199_; 
v_res_3199_ = l_Lean_Compiler_LCNF_allFVarM___redArg___lam__0(v_toPure_3197_, v_____do__lift_3198_);
lean_dec(v_____do__lift_3198_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___redArg(lean_object* v_inst_3200_, lean_object* v_inst_3201_, lean_object* v_f_3202_, lean_object* v_x_3203_){
_start:
{
lean_object* v_toApplicative_3204_; lean_object* v_toBind_3205_; lean_object* v_forFVarM_3206_; lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3227_; 
v_toApplicative_3204_ = lean_ctor_get(v_inst_3200_, 0);
v_toBind_3205_ = lean_ctor_get(v_inst_3200_, 1);
lean_inc(v_toBind_3205_);
v_forFVarM_3206_ = lean_ctor_get(v_inst_3201_, 1);
v_isSharedCheck_3227_ = !lean_is_exclusive(v_inst_3201_);
if (v_isSharedCheck_3227_ == 0)
{
lean_object* v_unused_3228_; 
v_unused_3228_ = lean_ctor_get(v_inst_3201_, 0);
lean_dec(v_unused_3228_);
v___x_3208_ = v_inst_3201_;
v_isShared_3209_ = v_isSharedCheck_3227_;
goto v_resetjp_3207_;
}
else
{
lean_inc(v_forFVarM_3206_);
lean_dec(v_inst_3201_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3227_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
lean_object* v___f_3210_; lean_object* v___f_3211_; lean_object* v___f_3212_; lean_object* v___f_3213_; lean_object* v___f_3214_; lean_object* v___x_3216_; 
lean_inc_ref_n(v_inst_3200_, 5);
v___f_3210_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3210_, 0, v_inst_3200_);
v___f_3211_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3211_, 0, v_inst_3200_);
v___f_3212_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3212_, 0, v_inst_3200_);
v___f_3213_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3213_, 0, v_inst_3200_);
v___f_3214_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3214_, 0, v_inst_3200_);
if (v_isShared_3209_ == 0)
{
lean_ctor_set(v___x_3208_, 1, v___f_3211_);
lean_ctor_set(v___x_3208_, 0, v___f_3210_);
v___x_3216_ = v___x_3208_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v___f_3210_);
lean_ctor_set(v_reuseFailAlloc_3226_, 1, v___f_3211_);
v___x_3216_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v_toPure_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___f_3224_; lean_object* v___x_3225_; 
lean_inc_ref_n(v_inst_3200_, 2);
v___x_3217_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3217_, 0, lean_box(0));
lean_closure_set(v___x_3217_, 1, v_inst_3200_);
v___x_3218_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3218_, 0, v___x_3216_);
lean_ctor_set(v___x_3218_, 1, v___x_3217_);
lean_ctor_set(v___x_3218_, 2, v___f_3212_);
lean_ctor_set(v___x_3218_, 3, v___f_3213_);
lean_ctor_set(v___x_3218_, 4, v___f_3214_);
v___x_3219_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3219_, 0, lean_box(0));
lean_closure_set(v___x_3219_, 1, v_inst_3200_);
v___x_3220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3220_, 0, v___x_3218_);
lean_ctor_set(v___x_3220_, 1, v___x_3219_);
v_toPure_3221_ = lean_ctor_get(v_toApplicative_3204_, 1);
lean_inc(v_toPure_3221_);
v___x_3222_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go), 4, 3);
lean_closure_set(v___x_3222_, 0, lean_box(0));
lean_closure_set(v___x_3222_, 1, v_inst_3200_);
lean_closure_set(v___x_3222_, 2, v_f_3202_);
v___x_3223_ = lean_apply_4(v_forFVarM_3206_, lean_box(0), v___x_3220_, v___x_3222_, v_x_3203_);
v___f_3224_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_allFVarM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3224_, 0, v_toPure_3221_);
v___x_3225_ = lean_apply_4(v_toBind_3205_, lean_box(0), lean_box(0), v___x_3223_, v___f_3224_);
return v___x_3225_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM(lean_object* v_m_3229_, lean_object* v_00_u03b1_3230_, lean_object* v_inst_3231_, lean_object* v_inst_3232_, lean_object* v_f_3233_, lean_object* v_x_3234_){
_start:
{
lean_object* v___x_3235_; 
v___x_3235_ = l_Lean_Compiler_LCNF_allFVarM___redArg(v_inst_3231_, v_inst_3232_, v_f_3233_, v_x_3234_);
return v___x_3235_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_anyFVar___redArg___lam__0(lean_object* v_f_3236_, lean_object* v_x_3237_){
_start:
{
lean_object* v___x_3238_; uint8_t v___x_3239_; 
v___x_3238_ = lean_apply_1(v_f_3236_, v_x_3237_);
v___x_3239_ = lean_unbox(v___x_3238_);
return v___x_3239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg___lam__0___boxed(lean_object* v_f_3240_, lean_object* v_x_3241_){
_start:
{
uint8_t v_res_3242_; lean_object* v_r_3243_; 
v_res_3242_ = l_Lean_Compiler_LCNF_anyFVar___redArg___lam__0(v_f_3240_, v_x_3241_);
v_r_3243_ = lean_box(v_res_3242_);
return v_r_3243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVar___redArg(lean_object* v_inst_3263_, lean_object* v_f_3264_, lean_object* v_x_3265_){
_start:
{
lean_object* v___f_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___f_3266_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_anyFVar___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3266_, 0, v_f_3264_);
v___x_3267_ = ((lean_object*)(l_Lean_Compiler_LCNF_anyFVar___redArg___closed__9));
v___x_3268_ = l_Lean_Compiler_LCNF_anyFVarM___redArg(v___x_3267_, v_inst_3263_, v___f_3266_, v_x_3265_);
return v___x_3268_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_anyFVar(lean_object* v_00_u03b1_3269_, lean_object* v_inst_3270_, lean_object* v_f_3271_, lean_object* v_x_3272_){
_start:
{
lean_object* v___x_3273_; uint8_t v___x_3274_; 
v___x_3273_ = l_Lean_Compiler_LCNF_anyFVar___redArg(v_inst_3270_, v_f_3271_, v_x_3272_);
v___x_3274_ = lean_unbox(v___x_3273_);
lean_dec(v___x_3273_);
return v___x_3274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_anyFVar___boxed(lean_object* v_00_u03b1_3275_, lean_object* v_inst_3276_, lean_object* v_f_3277_, lean_object* v_x_3278_){
_start:
{
uint8_t v_res_3279_; lean_object* v_r_3280_; 
v_res_3279_ = l_Lean_Compiler_LCNF_anyFVar(v_00_u03b1_3275_, v_inst_3276_, v_f_3277_, v_x_3278_);
v_r_3280_ = lean_box(v_res_3279_);
return v_r_3280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVar___redArg(lean_object* v_inst_3281_, lean_object* v_f_3282_, lean_object* v_x_3283_){
_start:
{
lean_object* v___f_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
v___f_3284_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_anyFVar___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3284_, 0, v_f_3282_);
v___x_3285_ = ((lean_object*)(l_Lean_Compiler_LCNF_anyFVar___redArg___closed__9));
v___x_3286_ = l_Lean_Compiler_LCNF_allFVarM___redArg(v___x_3285_, v_inst_3281_, v___f_3284_, v_x_3283_);
return v___x_3286_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_allFVar(lean_object* v_00_u03b1_3287_, lean_object* v_inst_3288_, lean_object* v_f_3289_, lean_object* v_x_3290_){
_start:
{
lean_object* v___x_3291_; uint8_t v___x_3292_; 
v___x_3291_ = l_Lean_Compiler_LCNF_allFVar___redArg(v_inst_3288_, v_f_3289_, v_x_3290_);
v___x_3292_ = lean_unbox(v___x_3291_);
lean_dec(v___x_3291_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVar___boxed(lean_object* v_00_u03b1_3293_, lean_object* v_inst_3294_, lean_object* v_f_3295_, lean_object* v_x_3296_){
_start:
{
uint8_t v_res_3297_; lean_object* v_r_3298_; 
v_res_3297_ = l_Lean_Compiler_LCNF_allFVar(v_00_u03b1_3293_, v_inst_3294_, v_f_3295_, v_x_3296_);
v_r_3298_ = lean_box(v_res_3297_);
return v_r_3298_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_FVarUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_FVarUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_FVarUtil(builtin);
}
#ifdef __cplusplus
}
#endif

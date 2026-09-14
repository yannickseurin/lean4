// Lean compiler output
// Module: Lean.Compiler.LCNF.Internalize
// Imports: public import Lean.Compiler.LCNF.Bind
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Purity_ctorIdx(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_erasedExpr;
lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg(uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_anyExpr;
lean_object* l_Lean_Expr_fvar___override(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addParam(uint8_t, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateTypeImp(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateFVarImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateResetImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateReuseImp___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateBoxImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateUnboxImp___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateIsSharedImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkReturnErased(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCodeDecl_default___redArg();
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_liftIOCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftBaseIOEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg(lean_object*);
lean_object* l_instMonadStateOfOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadStateOfOfMonadLift___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadStateOfMonadStateOf___redArg(lean_object*);
lean_object* l_modify(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(uint8_t, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_CompilerM_run___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run_x27___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run_x27(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_liftIOCore___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftBaseIOEIO___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__5_value),((lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__4_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__6_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__6_value),((lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__3_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__7_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__2_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__8_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__1_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__9_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__9_value),((lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__0_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__11;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "_private.Lean.Compiler.LCNF.Internalize.0.Lean.Compiler.LCNF.Internalize.internalizeExpr.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Compiler.LCNF.Internalize"};
static const lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_goApp(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_goApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeArg(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeArgs_spec__0(uint8_t, size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_Internalize_internalizeArgs___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeArgs___boxed__const__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_internalizeArgs___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeArgs(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeLetValue(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeLetDecl(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeFunDecl_spec__0(uint8_t, size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeFunDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeCode_spec__2(uint8_t, size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeCode_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCode(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeFunDecl(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Lean.Compiler.LCNF.Internalize.internalizeCodeDecl"};
static const lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__7;
static lean_once_cell_t l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__9;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_internalize(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_internalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_internalize(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_internalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_cleanup___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_cleanup___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_cleanup___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_cleanup___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_cleanup(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_cleanup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normalizeFVarIds___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normalizeFVarIds___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_normalizeFVarIds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_Lean_Compiler_LCNF_normalizeFVarIds___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_normalizeFVarIds___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_normalizeFVarIds___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_normalizeFVarIds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_Lean_Compiler_LCNF_normalizeFVarIds___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_normalizeFVarIds___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_normalizeFVarIds___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_normalizeFVarIds___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_normalizeFVarIds___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_normalizeFVarIds___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normalizeFVarIds(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normalizeFVarIds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run___redArg(lean_object* v_x_1_, lean_object* v_state_2_, uint8_t v_ctx_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = lean_st_mk_ref(v_state_2_);
v___x_10_ = lean_box(v_ctx_3_);
lean_inc(v_a_7_);
lean_inc_ref(v_a_6_);
lean_inc(v_a_5_);
lean_inc_ref(v_a_4_);
lean_inc(v___x_9_);
v___x_11_ = lean_apply_7(v_x_1_, v___x_10_, v___x_9_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, lean_box(0));
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v_a_12_; lean_object* v___x_14_; uint8_t v_isShared_15_; uint8_t v_isSharedCheck_21_; 
v_a_12_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_21_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_21_ == 0)
{
v___x_14_ = v___x_11_;
v_isShared_15_ = v_isSharedCheck_21_;
goto v_resetjp_13_;
}
else
{
lean_inc(v_a_12_);
lean_dec(v___x_11_);
v___x_14_ = lean_box(0);
v_isShared_15_ = v_isSharedCheck_21_;
goto v_resetjp_13_;
}
v_resetjp_13_:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_19_; 
v___x_16_ = lean_st_ref_get(v___x_9_);
lean_dec(v___x_9_);
v___x_17_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_17_, 0, v_a_12_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
if (v_isShared_15_ == 0)
{
lean_ctor_set(v___x_14_, 0, v___x_17_);
v___x_19_ = v___x_14_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v___x_17_);
v___x_19_ = v_reuseFailAlloc_20_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
return v___x_19_;
}
}
}
else
{
lean_object* v_a_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_29_; 
lean_dec(v___x_9_);
v_a_22_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_29_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_29_ == 0)
{
v___x_24_ = v___x_11_;
v_isShared_25_ = v_isSharedCheck_29_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_a_22_);
lean_dec(v___x_11_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_29_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_27_; 
if (v_isShared_25_ == 0)
{
v___x_27_ = v___x_24_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v_a_22_);
v___x_27_ = v_reuseFailAlloc_28_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
return v___x_27_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run___redArg___boxed(lean_object* v_x_30_, lean_object* v_state_31_, lean_object* v_ctx_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
uint8_t v_ctx_boxed_38_; lean_object* v_res_39_; 
v_ctx_boxed_38_ = lean_unbox(v_ctx_32_);
v_res_39_ = l_Lean_Compiler_LCNF_Internalize_InternalizeM_run___redArg(v_x_30_, v_state_31_, v_ctx_boxed_38_, v_a_33_, v_a_34_, v_a_35_, v_a_36_);
lean_dec(v_a_36_);
lean_dec_ref(v_a_35_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run(uint8_t v_pu_40_, lean_object* v_00_u03b1_41_, lean_object* v_x_42_, lean_object* v_state_43_, uint8_t v_ctx_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = lean_st_mk_ref(v_state_43_);
v___x_51_ = lean_box(v_ctx_44_);
lean_inc(v_a_48_);
lean_inc_ref(v_a_47_);
lean_inc(v_a_46_);
lean_inc_ref(v_a_45_);
lean_inc(v___x_50_);
v___x_52_ = lean_apply_7(v_x_42_, v___x_51_, v___x_50_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, lean_box(0));
if (lean_obj_tag(v___x_52_) == 0)
{
lean_object* v_a_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_62_; 
v_a_53_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_62_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_62_ == 0)
{
v___x_55_ = v___x_52_;
v_isShared_56_ = v_isSharedCheck_62_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_a_53_);
lean_dec(v___x_52_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_62_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_60_; 
v___x_57_ = lean_st_ref_get(v___x_50_);
lean_dec(v___x_50_);
v___x_58_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_58_, 0, v_a_53_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_58_);
v___x_60_ = v___x_55_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v___x_58_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
return v___x_60_;
}
}
}
else
{
lean_object* v_a_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_70_; 
lean_dec(v___x_50_);
v_a_63_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_70_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_70_ == 0)
{
v___x_65_ = v___x_52_;
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_a_63_);
lean_dec(v___x_52_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_68_; 
if (v_isShared_66_ == 0)
{
v___x_68_ = v___x_65_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_a_63_);
v___x_68_ = v_reuseFailAlloc_69_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
return v___x_68_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run___boxed(lean_object* v_pu_71_, lean_object* v_00_u03b1_72_, lean_object* v_x_73_, lean_object* v_state_74_, lean_object* v_ctx_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
uint8_t v_pu_boxed_81_; uint8_t v_ctx_boxed_82_; lean_object* v_res_83_; 
v_pu_boxed_81_ = lean_unbox(v_pu_71_);
v_ctx_boxed_82_ = lean_unbox(v_ctx_75_);
v_res_83_ = l_Lean_Compiler_LCNF_Internalize_InternalizeM_run(v_pu_boxed_81_, v_00_u03b1_72_, v_x_73_, v_state_74_, v_ctx_boxed_82_, v_a_76_, v_a_77_, v_a_78_, v_a_79_);
lean_dec(v_a_79_);
lean_dec_ref(v_a_78_);
lean_dec(v_a_77_);
lean_dec_ref(v_a_76_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run_x27___redArg(lean_object* v_x_84_, lean_object* v_state_85_, uint8_t v_ctx_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = lean_st_mk_ref(v_state_85_);
v___x_93_ = lean_box(v_ctx_86_);
lean_inc(v_a_90_);
lean_inc_ref(v_a_89_);
lean_inc(v_a_88_);
lean_inc_ref(v_a_87_);
lean_inc(v___x_92_);
v___x_94_ = lean_apply_7(v_x_84_, v___x_93_, v___x_92_, v_a_87_, v_a_88_, v_a_89_, v_a_90_, lean_box(0));
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_103_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_103_ == 0)
{
v___x_97_ = v___x_94_;
v_isShared_98_ = v_isSharedCheck_103_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_94_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_103_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_99_; lean_object* v___x_101_; 
v___x_99_ = lean_st_ref_get(v___x_92_);
lean_dec(v___x_92_);
lean_dec(v___x_99_);
if (v_isShared_98_ == 0)
{
v___x_101_ = v___x_97_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_a_95_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
else
{
lean_dec(v___x_92_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run_x27___redArg___boxed(lean_object* v_x_104_, lean_object* v_state_105_, lean_object* v_ctx_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
uint8_t v_ctx_boxed_112_; lean_object* v_res_113_; 
v_ctx_boxed_112_ = lean_unbox(v_ctx_106_);
v_res_113_ = l_Lean_Compiler_LCNF_Internalize_InternalizeM_run_x27___redArg(v_x_104_, v_state_105_, v_ctx_boxed_112_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run_x27(uint8_t v_pu_114_, lean_object* v_00_u03b1_115_, lean_object* v_x_116_, lean_object* v_state_117_, uint8_t v_ctx_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = lean_st_mk_ref(v_state_117_);
v___x_125_ = lean_box(v_ctx_118_);
lean_inc(v_a_122_);
lean_inc_ref(v_a_121_);
lean_inc(v_a_120_);
lean_inc_ref(v_a_119_);
lean_inc(v___x_124_);
v___x_126_ = lean_apply_7(v_x_116_, v___x_125_, v___x_124_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, lean_box(0));
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v_a_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_135_; 
v_a_127_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_135_ == 0)
{
v___x_129_ = v___x_126_;
v_isShared_130_ = v_isSharedCheck_135_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_a_127_);
lean_dec(v___x_126_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_135_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_131_; lean_object* v___x_133_; 
v___x_131_ = lean_st_ref_get(v___x_124_);
lean_dec(v___x_124_);
lean_dec(v___x_131_);
if (v_isShared_130_ == 0)
{
v___x_133_ = v___x_129_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_127_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
else
{
lean_dec(v___x_124_);
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_InternalizeM_run_x27___boxed(lean_object* v_pu_136_, lean_object* v_00_u03b1_137_, lean_object* v_x_138_, lean_object* v_state_139_, lean_object* v_ctx_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
uint8_t v_pu_boxed_146_; uint8_t v_ctx_boxed_147_; lean_object* v_res_148_; 
v_pu_boxed_146_ = lean_unbox(v_pu_136_);
v_ctx_boxed_147_ = lean_unbox(v_ctx_140_);
v_res_148_ = l_Lean_Compiler_LCNF_Internalize_InternalizeM_run_x27(v_pu_boxed_146_, v_00_u03b1_137_, v_x_138_, v_state_139_, v_ctx_boxed_147_, v_a_141_, v_a_142_, v_a_143_, v_a_144_);
lean_dec(v_a_144_);
lean_dec_ref(v_a_143_);
lean_dec(v_a_142_);
lean_dec_ref(v_a_141_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName___redArg(lean_object* v_binderName_149_, uint8_t v_a_150_, lean_object* v_a_151_){
_start:
{
if (lean_obj_tag(v_binderName_149_) == 2)
{
lean_object* v_pre_153_; lean_object* v___x_154_; lean_object* v_lctx_155_; lean_object* v_nextIdx_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_168_; 
v_pre_153_ = lean_ctor_get(v_binderName_149_, 0);
lean_inc(v_pre_153_);
lean_dec_ref_known(v_binderName_149_, 2);
v___x_154_ = lean_st_ref_take(v_a_151_);
v_lctx_155_ = lean_ctor_get(v___x_154_, 0);
v_nextIdx_156_ = lean_ctor_get(v___x_154_, 1);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_168_ == 0)
{
v___x_158_ = v___x_154_;
v_isShared_159_ = v_isSharedCheck_168_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_nextIdx_156_);
lean_inc(v_lctx_155_);
lean_dec(v___x_154_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_168_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_160_ = lean_unsigned_to_nat(1u);
v___x_161_ = lean_nat_add(v_nextIdx_156_, v___x_160_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v___x_161_);
v___x_163_ = v___x_158_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_lctx_155_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v___x_161_);
v___x_163_ = v_reuseFailAlloc_167_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_164_ = lean_st_ref_put(v_a_151_, v___x_163_);
v___x_165_ = l_Lean_Name_num___override(v_pre_153_, v_nextIdx_156_);
v___x_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
return v___x_166_;
}
}
}
else
{
if (v_a_150_ == 0)
{
lean_object* v___x_169_; 
v___x_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_169_, 0, v_binderName_149_);
return v___x_169_;
}
else
{
lean_object* v___x_170_; lean_object* v_lctx_171_; lean_object* v_nextIdx_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_184_; 
v___x_170_ = lean_st_ref_take(v_a_151_);
v_lctx_171_ = lean_ctor_get(v___x_170_, 0);
v_nextIdx_172_ = lean_ctor_get(v___x_170_, 1);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_184_ == 0)
{
v___x_174_ = v___x_170_;
v_isShared_175_ = v_isSharedCheck_184_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_nextIdx_172_);
lean_inc(v_lctx_171_);
lean_dec(v___x_170_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_184_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
v___x_176_ = lean_unsigned_to_nat(1u);
v___x_177_ = lean_nat_add(v_nextIdx_172_, v___x_176_);
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 1, v___x_177_);
v___x_179_ = v___x_174_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_lctx_171_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v___x_177_);
v___x_179_ = v_reuseFailAlloc_183_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = lean_st_ref_put(v_a_151_, v___x_179_);
v___x_181_ = l_Lean_Name_num___override(v_binderName_149_, v_nextIdx_172_);
v___x_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName___redArg___boxed(lean_object* v_binderName_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
uint8_t v_a_boxed_189_; lean_object* v_res_190_; 
v_a_boxed_189_ = lean_unbox(v_a_186_);
v_res_190_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName___redArg(v_binderName_185_, v_a_boxed_189_, v_a_187_);
lean_dec(v_a_187_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName(uint8_t v_pu_191_, lean_object* v_binderName_192_, uint8_t v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName___redArg(v_binderName_192_, v_a_193_, v_a_196_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName___boxed(lean_object* v_pu_201_, lean_object* v_binderName_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
uint8_t v_pu_boxed_210_; uint8_t v_a_boxed_211_; lean_object* v_res_212_; 
v_pu_boxed_210_ = lean_unbox(v_pu_201_);
v_a_boxed_211_ = lean_unbox(v_a_203_);
v_res_212_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName(v_pu_boxed_210_, v_binderName_202_, v_a_boxed_211_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_);
lean_dec(v_a_208_);
lean_dec_ref(v_a_207_);
lean_dec(v_a_206_);
lean_dec_ref(v_a_205_);
lean_dec(v_a_204_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___lam__0(uint8_t v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = lean_st_ref_get(v___y_214_);
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___lam__0___boxed(lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_){
_start:
{
uint8_t v___y_199__boxed_229_; lean_object* v_res_230_; 
v___y_199__boxed_229_ = lean_unbox(v___y_222_);
v_res_230_ = l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___lam__0(v___y_199__boxed_229_, v___y_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
lean_dec(v___y_223_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg(){
_start:
{
lean_object* v___f_233_; 
v___f_233_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___closed__0));
return v___f_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___boxed(lean_object* v___dummy_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg();
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue(uint8_t v_pu_236_){
_start:
{
lean_object* v___f_237_; 
v___f_237_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___redArg___closed__0));
return v___f_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue___boxed(lean_object* v_pu_238_){
_start:
{
uint8_t v_pu_boxed_239_; lean_object* v_res_240_; 
v_pu_boxed_239_ = lean_unbox(v_pu_238_);
v_res_240_ = l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstInternalizeMTrue(v_pu_boxed_239_);
return v_res_240_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__11(void){
_start:
{
lean_object* v___f_262_; lean_object* v___x_263_; 
v___f_262_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__10));
v___x_263_ = l_StateRefT_x27_instMonadStateOfOfMonadLiftTST___redArg(v___f_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg(){
_start:
{
lean_object* v___f_265_; lean_object* v___x_266_; lean_object* v_get_267_; lean_object* v_set_268_; lean_object* v_modifyGet_269_; lean_object* v___f_270_; lean_object* v___f_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___f_265_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__0));
v___x_266_ = lean_obj_once(&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__11, &l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___closed__11);
v_get_267_ = lean_ctor_get(v___x_266_, 0);
v_set_268_ = lean_ctor_get(v___x_266_, 1);
v_modifyGet_269_ = lean_ctor_get(v___x_266_, 2);
lean_inc(v_set_268_);
v___f_270_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_270_, 0, v_set_268_);
lean_closure_set(v___f_270_, 1, v___f_265_);
lean_inc(v_modifyGet_269_);
v___f_271_ = lean_alloc_closure((void*)(l_instMonadStateOfOfMonadLift___redArg___lam__1), 4, 2);
lean_closure_set(v___f_271_, 0, v_modifyGet_269_);
lean_closure_set(v___f_271_, 1, v___f_265_);
lean_inc(v_get_267_);
v___x_272_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_272_, 0, lean_box(0));
lean_closure_set(v___x_272_, 1, v_get_267_);
v___x_273_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
lean_ctor_set(v___x_273_, 1, v___f_270_);
lean_ctor_set(v___x_273_, 2, v___f_271_);
v___x_274_ = l_instMonadStateOfMonadStateOf___redArg(v___x_273_);
v___x_275_ = lean_alloc_closure((void*)(l_modify), 4, 3);
lean_closure_set(v___x_275_, 0, lean_box(0));
lean_closure_set(v___x_275_, 1, lean_box(0));
lean_closure_set(v___x_275_, 2, v___x_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg___boxed(lean_object* v___dummy_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg();
return v_res_277_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___closed__0(void){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___redArg();
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM(uint8_t v_pu_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_obj_once(&l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___closed__0, &l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___closed__0_once, _init_l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___closed__0);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM___boxed(lean_object* v_pu_281_){
_start:
{
uint8_t v_pu_boxed_282_; lean_object* v_res_283_; 
v_pu_boxed_282_ = lean_unbox(v_pu_281_);
v_res_283_ = l_Lean_Compiler_LCNF_Internalize_instMonadFVarSubstStateInternalizeM(v_pu_boxed_282_);
return v_res_283_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2___redArg(lean_object* v_a_284_, lean_object* v_x_285_){
_start:
{
if (lean_obj_tag(v_x_285_) == 0)
{
uint8_t v___x_286_; 
v___x_286_ = 0;
return v___x_286_;
}
else
{
lean_object* v_key_287_; lean_object* v_tail_288_; uint8_t v___x_289_; 
v_key_287_ = lean_ctor_get(v_x_285_, 0);
v_tail_288_ = lean_ctor_get(v_x_285_, 2);
v___x_289_ = l_Lean_instBEqFVarId_beq(v_key_287_, v_a_284_);
if (v___x_289_ == 0)
{
v_x_285_ = v_tail_288_;
goto _start;
}
else
{
return v___x_289_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2___redArg___boxed(lean_object* v_a_291_, lean_object* v_x_292_){
_start:
{
uint8_t v_res_293_; lean_object* v_r_294_; 
v_res_293_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2___redArg(v_a_291_, v_x_292_);
lean_dec(v_x_292_);
lean_dec(v_a_291_);
v_r_294_ = lean_box(v_res_293_);
return v_r_294_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__4___redArg(lean_object* v_a_295_, lean_object* v_b_296_, lean_object* v_x_297_){
_start:
{
if (lean_obj_tag(v_x_297_) == 0)
{
lean_dec(v_b_296_);
lean_dec(v_a_295_);
return v_x_297_;
}
else
{
lean_object* v_key_298_; lean_object* v_value_299_; lean_object* v_tail_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_312_; 
v_key_298_ = lean_ctor_get(v_x_297_, 0);
v_value_299_ = lean_ctor_get(v_x_297_, 1);
v_tail_300_ = lean_ctor_get(v_x_297_, 2);
v_isSharedCheck_312_ = !lean_is_exclusive(v_x_297_);
if (v_isSharedCheck_312_ == 0)
{
v___x_302_ = v_x_297_;
v_isShared_303_ = v_isSharedCheck_312_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_tail_300_);
lean_inc(v_value_299_);
lean_inc(v_key_298_);
lean_dec(v_x_297_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_312_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
uint8_t v___x_304_; 
v___x_304_ = l_Lean_instBEqFVarId_beq(v_key_298_, v_a_295_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; lean_object* v___x_307_; 
v___x_305_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__4___redArg(v_a_295_, v_b_296_, v_tail_300_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 2, v___x_305_);
v___x_307_ = v___x_302_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_key_298_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v_value_299_);
lean_ctor_set(v_reuseFailAlloc_308_, 2, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
else
{
lean_object* v___x_310_; 
lean_dec(v_value_299_);
lean_dec(v_key_298_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 1, v_b_296_);
lean_ctor_set(v___x_302_, 0, v_a_295_);
v___x_310_ = v___x_302_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_295_);
lean_ctor_set(v_reuseFailAlloc_311_, 1, v_b_296_);
lean_ctor_set(v_reuseFailAlloc_311_, 2, v_tail_300_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_313_, lean_object* v_x_314_){
_start:
{
if (lean_obj_tag(v_x_314_) == 0)
{
return v_x_313_;
}
else
{
lean_object* v_key_315_; lean_object* v_value_316_; lean_object* v_tail_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_340_; 
v_key_315_ = lean_ctor_get(v_x_314_, 0);
v_value_316_ = lean_ctor_get(v_x_314_, 1);
v_tail_317_ = lean_ctor_get(v_x_314_, 2);
v_isSharedCheck_340_ = !lean_is_exclusive(v_x_314_);
if (v_isSharedCheck_340_ == 0)
{
v___x_319_ = v_x_314_;
v_isShared_320_ = v_isSharedCheck_340_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_tail_317_);
lean_inc(v_value_316_);
lean_inc(v_key_315_);
lean_dec(v_x_314_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_340_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_321_; uint64_t v___x_322_; uint64_t v___x_323_; uint64_t v___x_324_; uint64_t v_fold_325_; uint64_t v___x_326_; uint64_t v___x_327_; uint64_t v___x_328_; size_t v___x_329_; size_t v___x_330_; size_t v___x_331_; size_t v___x_332_; size_t v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_321_ = lean_array_get_size(v_x_313_);
v___x_322_ = l_Lean_instHashableFVarId_hash(v_key_315_);
v___x_323_ = 32ULL;
v___x_324_ = lean_uint64_shift_right(v___x_322_, v___x_323_);
v_fold_325_ = lean_uint64_xor(v___x_322_, v___x_324_);
v___x_326_ = 16ULL;
v___x_327_ = lean_uint64_shift_right(v_fold_325_, v___x_326_);
v___x_328_ = lean_uint64_xor(v_fold_325_, v___x_327_);
v___x_329_ = lean_uint64_to_usize(v___x_328_);
v___x_330_ = lean_usize_of_nat(v___x_321_);
v___x_331_ = ((size_t)1ULL);
v___x_332_ = lean_usize_sub(v___x_330_, v___x_331_);
v___x_333_ = lean_usize_land(v___x_329_, v___x_332_);
v___x_334_ = lean_array_uget_borrowed(v_x_313_, v___x_333_);
lean_inc(v___x_334_);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 2, v___x_334_);
v___x_336_ = v___x_319_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_key_315_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v_value_316_);
lean_ctor_set(v_reuseFailAlloc_339_, 2, v___x_334_);
v___x_336_ = v_reuseFailAlloc_339_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
lean_object* v___x_337_; 
v___x_337_ = lean_array_uset(v_x_313_, v___x_333_, v___x_336_);
v_x_313_ = v___x_337_;
v_x_314_ = v_tail_317_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4___redArg(lean_object* v_i_341_, lean_object* v_source_342_, lean_object* v_target_343_){
_start:
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = lean_array_get_size(v_source_342_);
v___x_345_ = lean_nat_dec_lt(v_i_341_, v___x_344_);
if (v___x_345_ == 0)
{
lean_dec_ref(v_source_342_);
lean_dec(v_i_341_);
return v_target_343_;
}
else
{
lean_object* v_es_346_; lean_object* v___x_347_; lean_object* v_source_348_; lean_object* v_target_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_es_346_ = lean_array_fget(v_source_342_, v_i_341_);
v___x_347_ = lean_box(0);
v_source_348_ = lean_array_fset(v_source_342_, v_i_341_, v___x_347_);
v_target_349_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4_spec__5___redArg(v_target_343_, v_es_346_);
v___x_350_ = lean_unsigned_to_nat(1u);
v___x_351_ = lean_nat_add(v_i_341_, v___x_350_);
lean_dec(v_i_341_);
v_i_341_ = v___x_351_;
v_source_342_ = v_source_348_;
v_target_343_ = v_target_349_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3___redArg(lean_object* v_data_353_){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v_nbuckets_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_354_ = lean_array_get_size(v_data_353_);
v___x_355_ = lean_unsigned_to_nat(2u);
v_nbuckets_356_ = lean_nat_mul(v___x_354_, v___x_355_);
v___x_357_ = lean_unsigned_to_nat(0u);
v___x_358_ = lean_box(0);
v___x_359_ = lean_mk_array(v_nbuckets_356_, v___x_358_);
v___x_360_ = lean_array_propagate_mark(v_data_353_, v___x_359_);
v___x_361_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4___redArg(v___x_357_, v_data_353_, v___x_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1___redArg(lean_object* v_m_362_, lean_object* v_a_363_, lean_object* v_b_364_){
_start:
{
lean_object* v_size_365_; lean_object* v_buckets_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_409_; 
v_size_365_ = lean_ctor_get(v_m_362_, 0);
v_buckets_366_ = lean_ctor_get(v_m_362_, 1);
v_isSharedCheck_409_ = !lean_is_exclusive(v_m_362_);
if (v_isSharedCheck_409_ == 0)
{
v___x_368_ = v_m_362_;
v_isShared_369_ = v_isSharedCheck_409_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_buckets_366_);
lean_inc(v_size_365_);
lean_dec(v_m_362_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_409_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; uint64_t v___x_371_; uint64_t v___x_372_; uint64_t v___x_373_; uint64_t v_fold_374_; uint64_t v___x_375_; uint64_t v___x_376_; uint64_t v___x_377_; size_t v___x_378_; size_t v___x_379_; size_t v___x_380_; size_t v___x_381_; size_t v___x_382_; lean_object* v_bkt_383_; uint8_t v___x_384_; 
v___x_370_ = lean_array_get_size(v_buckets_366_);
v___x_371_ = l_Lean_instHashableFVarId_hash(v_a_363_);
v___x_372_ = 32ULL;
v___x_373_ = lean_uint64_shift_right(v___x_371_, v___x_372_);
v_fold_374_ = lean_uint64_xor(v___x_371_, v___x_373_);
v___x_375_ = 16ULL;
v___x_376_ = lean_uint64_shift_right(v_fold_374_, v___x_375_);
v___x_377_ = lean_uint64_xor(v_fold_374_, v___x_376_);
v___x_378_ = lean_uint64_to_usize(v___x_377_);
v___x_379_ = lean_usize_of_nat(v___x_370_);
v___x_380_ = ((size_t)1ULL);
v___x_381_ = lean_usize_sub(v___x_379_, v___x_380_);
v___x_382_ = lean_usize_land(v___x_378_, v___x_381_);
v_bkt_383_ = lean_array_uget_borrowed(v_buckets_366_, v___x_382_);
v___x_384_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2___redArg(v_a_363_, v_bkt_383_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; lean_object* v_size_x27_386_; lean_object* v___x_387_; lean_object* v_buckets_x27_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_385_ = lean_unsigned_to_nat(1u);
v_size_x27_386_ = lean_nat_add(v_size_365_, v___x_385_);
lean_dec(v_size_365_);
lean_inc(v_bkt_383_);
v___x_387_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_387_, 0, v_a_363_);
lean_ctor_set(v___x_387_, 1, v_b_364_);
lean_ctor_set(v___x_387_, 2, v_bkt_383_);
v_buckets_x27_388_ = lean_array_uset(v_buckets_366_, v___x_382_, v___x_387_);
v___x_389_ = lean_unsigned_to_nat(4u);
v___x_390_ = lean_nat_mul(v_size_x27_386_, v___x_389_);
v___x_391_ = lean_unsigned_to_nat(3u);
v___x_392_ = lean_nat_div(v___x_390_, v___x_391_);
lean_dec(v___x_390_);
v___x_393_ = lean_array_get_size(v_buckets_x27_388_);
v___x_394_ = lean_nat_dec_le(v___x_392_, v___x_393_);
lean_dec(v___x_392_);
if (v___x_394_ == 0)
{
lean_object* v_val_395_; lean_object* v___x_397_; 
v_val_395_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3___redArg(v_buckets_x27_388_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 1, v_val_395_);
lean_ctor_set(v___x_368_, 0, v_size_x27_386_);
v___x_397_ = v___x_368_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_size_x27_386_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v_val_395_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
else
{
lean_object* v___x_400_; 
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 1, v_buckets_x27_388_);
lean_ctor_set(v___x_368_, 0, v_size_x27_386_);
v___x_400_ = v___x_368_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_size_x27_386_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_buckets_x27_388_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
else
{
lean_object* v___x_402_; lean_object* v_buckets_x27_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_407_; 
lean_inc(v_bkt_383_);
v___x_402_ = lean_box(0);
v_buckets_x27_403_ = lean_array_uset(v_buckets_366_, v___x_382_, v___x_402_);
v___x_404_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__4___redArg(v_a_363_, v_b_364_, v_bkt_383_);
v___x_405_ = lean_array_uset(v_buckets_x27_403_, v___x_382_, v___x_404_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 1, v___x_405_);
v___x_407_ = v___x_368_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_size_365_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v___x_405_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0___redArg(lean_object* v___y_410_){
_start:
{
lean_object* v___x_412_; lean_object* v_ngen_413_; lean_object* v_namePrefix_414_; lean_object* v_idx_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_444_; 
v___x_412_ = lean_st_ref_get(v___y_410_);
v_ngen_413_ = lean_ctor_get(v___x_412_, 2);
lean_inc_ref(v_ngen_413_);
lean_dec(v___x_412_);
v_namePrefix_414_ = lean_ctor_get(v_ngen_413_, 0);
v_idx_415_ = lean_ctor_get(v_ngen_413_, 1);
v_isSharedCheck_444_ = !lean_is_exclusive(v_ngen_413_);
if (v_isSharedCheck_444_ == 0)
{
v___x_417_ = v_ngen_413_;
v_isShared_418_ = v_isSharedCheck_444_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_idx_415_);
lean_inc(v_namePrefix_414_);
lean_dec(v_ngen_413_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_444_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v_r_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_423_; 
lean_inc(v_idx_415_);
lean_inc(v_namePrefix_414_);
v_r_419_ = l_Lean_Name_num___override(v_namePrefix_414_, v_idx_415_);
v___x_420_ = lean_unsigned_to_nat(1u);
v___x_421_ = lean_nat_add(v_idx_415_, v___x_420_);
lean_dec(v_idx_415_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 1, v___x_421_);
v___x_423_ = v___x_417_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_namePrefix_414_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v___x_421_);
v___x_423_ = v_reuseFailAlloc_443_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
lean_object* v___x_424_; lean_object* v_env_425_; lean_object* v_nextMacroScope_426_; lean_object* v_auxDeclNGen_427_; lean_object* v_traceState_428_; lean_object* v_cache_429_; lean_object* v_messages_430_; lean_object* v_infoState_431_; lean_object* v_snapshotTasks_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_441_; 
v___x_424_ = lean_st_ref_take(v___y_410_);
v_env_425_ = lean_ctor_get(v___x_424_, 0);
v_nextMacroScope_426_ = lean_ctor_get(v___x_424_, 1);
v_auxDeclNGen_427_ = lean_ctor_get(v___x_424_, 3);
v_traceState_428_ = lean_ctor_get(v___x_424_, 4);
v_cache_429_ = lean_ctor_get(v___x_424_, 5);
v_messages_430_ = lean_ctor_get(v___x_424_, 6);
v_infoState_431_ = lean_ctor_get(v___x_424_, 7);
v_snapshotTasks_432_ = lean_ctor_get(v___x_424_, 8);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_441_ == 0)
{
lean_object* v_unused_442_; 
v_unused_442_ = lean_ctor_get(v___x_424_, 2);
lean_dec(v_unused_442_);
v___x_434_ = v___x_424_;
v_isShared_435_ = v_isSharedCheck_441_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_snapshotTasks_432_);
lean_inc(v_infoState_431_);
lean_inc(v_messages_430_);
lean_inc(v_cache_429_);
lean_inc(v_traceState_428_);
lean_inc(v_auxDeclNGen_427_);
lean_inc(v_nextMacroScope_426_);
lean_inc(v_env_425_);
lean_dec(v___x_424_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_441_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 2, v___x_423_);
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_env_425_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v_nextMacroScope_426_);
lean_ctor_set(v_reuseFailAlloc_440_, 2, v___x_423_);
lean_ctor_set(v_reuseFailAlloc_440_, 3, v_auxDeclNGen_427_);
lean_ctor_set(v_reuseFailAlloc_440_, 4, v_traceState_428_);
lean_ctor_set(v_reuseFailAlloc_440_, 5, v_cache_429_);
lean_ctor_set(v_reuseFailAlloc_440_, 6, v_messages_430_);
lean_ctor_set(v_reuseFailAlloc_440_, 7, v_infoState_431_);
lean_ctor_set(v_reuseFailAlloc_440_, 8, v_snapshotTasks_432_);
v___x_437_ = v_reuseFailAlloc_440_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_st_ref_put(v___y_410_, v___x_437_);
v___x_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_439_, 0, v_r_419_);
return v___x_439_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0___redArg___boxed(lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0___redArg(v___y_445_);
lean_dec(v___y_445_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0(uint8_t v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
lean_object* v___x_455_; lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
v___x_455_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0___redArg(v___y_453_);
v_a_456_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_455_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_455_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0___boxed(lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
uint8_t v___y_3111__boxed_471_; lean_object* v_res_472_; 
v___y_3111__boxed_471_ = lean_unbox(v___y_464_);
v_res_472_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0(v___y_3111__boxed_471_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___redArg(lean_object* v_fvarId_473_, uint8_t v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0(v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_, v_a_479_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_493_; 
v_a_482_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_493_ == 0)
{
v___x_484_ = v___x_481_;
v_isShared_485_ = v_isSharedCheck_493_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_481_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_493_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_491_; 
v___x_486_ = lean_st_ref_take(v_a_475_);
lean_inc(v_a_482_);
v___x_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_487_, 0, v_a_482_);
v___x_488_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1___redArg(v___x_486_, v_fvarId_473_, v___x_487_);
v___x_489_ = lean_st_ref_put(v_a_475_, v___x_488_);
if (v_isShared_485_ == 0)
{
v___x_491_ = v___x_484_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_a_482_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
else
{
lean_dec(v_fvarId_473_);
return v___x_481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___redArg___boxed(lean_object* v_fvarId_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_){
_start:
{
uint8_t v_a_boxed_502_; lean_object* v_res_503_; 
v_a_boxed_502_ = lean_unbox(v_a_495_);
v_res_503_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___redArg(v_fvarId_494_, v_a_boxed_502_, v_a_496_, v_a_497_, v_a_498_, v_a_499_, v_a_500_);
lean_dec(v_a_500_);
lean_dec_ref(v_a_499_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
lean_dec(v_a_496_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId(uint8_t v_pu_504_, lean_object* v_fvarId_505_, uint8_t v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___redArg(v_fvarId_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___boxed(lean_object* v_pu_514_, lean_object* v_fvarId_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
uint8_t v_pu_boxed_523_; uint8_t v_a_boxed_524_; lean_object* v_res_525_; 
v_pu_boxed_523_ = lean_unbox(v_pu_514_);
v_a_boxed_524_ = lean_unbox(v_a_516_);
v_res_525_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId(v_pu_boxed_523_, v_fvarId_515_, v_a_boxed_524_, v_a_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_);
lean_dec(v_a_521_);
lean_dec_ref(v_a_520_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
lean_dec(v_a_517_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0(uint8_t v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0___redArg(v___y_531_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0___boxed(lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
uint8_t v___y_3186__boxed_541_; lean_object* v_res_542_; 
v___y_3186__boxed_541_ = lean_unbox(v___y_534_);
v_res_542_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__0_spec__0(v___y_3186__boxed_541_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
lean_dec(v___y_535_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1(lean_object* v_00_u03b2_543_, lean_object* v_m_544_, lean_object* v_a_545_, lean_object* v_b_546_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1___redArg(v_m_544_, v_a_545_, v_b_546_);
return v___x_547_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2(lean_object* v_00_u03b2_548_, lean_object* v_a_549_, lean_object* v_x_550_){
_start:
{
uint8_t v___x_551_; 
v___x_551_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2___redArg(v_a_549_, v_x_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2___boxed(lean_object* v_00_u03b2_552_, lean_object* v_a_553_, lean_object* v_x_554_){
_start:
{
uint8_t v_res_555_; lean_object* v_r_556_; 
v_res_555_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__2(v_00_u03b2_552_, v_a_553_, v_x_554_);
lean_dec(v_x_554_);
lean_dec(v_a_553_);
v_r_556_ = lean_box(v_res_555_);
return v_r_556_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3(lean_object* v_00_u03b2_557_, lean_object* v_data_558_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3___redArg(v_data_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__4(lean_object* v_00_u03b2_560_, lean_object* v_a_561_, lean_object* v_b_562_, lean_object* v_x_563_){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__4___redArg(v_a_561_, v_b_562_, v_x_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_565_, lean_object* v_i_566_, lean_object* v_source_567_, lean_object* v_target_568_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4___redArg(v_i_566_, v_source_567_, v_target_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_570_, lean_object* v_x_571_, lean_object* v_x_572_){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId_spec__1_spec__3_spec__4_spec__5___redArg(v_x_571_, v_x_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1___redArg(lean_object* v_a_574_, lean_object* v_x_575_){
_start:
{
if (lean_obj_tag(v_x_575_) == 0)
{
lean_object* v___x_576_; 
v___x_576_ = lean_box(0);
return v___x_576_;
}
else
{
lean_object* v_key_577_; lean_object* v_value_578_; lean_object* v_tail_579_; uint8_t v___x_580_; 
v_key_577_ = lean_ctor_get(v_x_575_, 0);
v_value_578_ = lean_ctor_get(v_x_575_, 1);
v_tail_579_ = lean_ctor_get(v_x_575_, 2);
v___x_580_ = l_Lean_instBEqFVarId_beq(v_key_577_, v_a_574_);
if (v___x_580_ == 0)
{
v_x_575_ = v_tail_579_;
goto _start;
}
else
{
lean_object* v___x_582_; 
lean_inc(v_value_578_);
v___x_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_582_, 0, v_value_578_);
return v___x_582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1___redArg___boxed(lean_object* v_a_583_, lean_object* v_x_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1___redArg(v_a_583_, v_x_584_);
lean_dec(v_x_584_);
lean_dec(v_a_583_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1___redArg(lean_object* v_m_586_, lean_object* v_a_587_){
_start:
{
lean_object* v_buckets_588_; lean_object* v___x_589_; uint64_t v___x_590_; uint64_t v___x_591_; uint64_t v___x_592_; uint64_t v_fold_593_; uint64_t v___x_594_; uint64_t v___x_595_; uint64_t v___x_596_; size_t v___x_597_; size_t v___x_598_; size_t v___x_599_; size_t v___x_600_; size_t v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v_buckets_588_ = lean_ctor_get(v_m_586_, 1);
v___x_589_ = lean_array_get_size(v_buckets_588_);
v___x_590_ = l_Lean_instHashableFVarId_hash(v_a_587_);
v___x_591_ = 32ULL;
v___x_592_ = lean_uint64_shift_right(v___x_590_, v___x_591_);
v_fold_593_ = lean_uint64_xor(v___x_590_, v___x_592_);
v___x_594_ = 16ULL;
v___x_595_ = lean_uint64_shift_right(v_fold_593_, v___x_594_);
v___x_596_ = lean_uint64_xor(v_fold_593_, v___x_595_);
v___x_597_ = lean_uint64_to_usize(v___x_596_);
v___x_598_ = lean_usize_of_nat(v___x_589_);
v___x_599_ = ((size_t)1ULL);
v___x_600_ = lean_usize_sub(v___x_598_, v___x_599_);
v___x_601_ = lean_usize_land(v___x_597_, v___x_600_);
v___x_602_ = lean_array_uget_borrowed(v_buckets_588_, v___x_601_);
v___x_603_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1___redArg(v_a_587_, v___x_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1___redArg___boxed(lean_object* v_m_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1___redArg(v_m_604_, v_a_605_);
lean_dec(v_a_605_);
lean_dec_ref(v_m_604_);
return v_res_606_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__0(void){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_instMonadEIO___redArg();
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2(lean_object* v_msg_612_, uint8_t v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v_toApplicative_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_686_; 
v___x_620_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__0);
v___x_621_ = l_StateRefT_x27_instMonad___redArg(v___x_620_);
v_toApplicative_622_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_686_ == 0)
{
lean_object* v_unused_687_; 
v_unused_687_ = lean_ctor_get(v___x_621_, 1);
lean_dec(v_unused_687_);
v___x_624_ = v___x_621_;
v_isShared_625_ = v_isSharedCheck_686_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_toApplicative_622_);
lean_dec(v___x_621_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_686_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v_toFunctor_626_; lean_object* v_toSeq_627_; lean_object* v_toSeqLeft_628_; lean_object* v_toSeqRight_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_684_; 
v_toFunctor_626_ = lean_ctor_get(v_toApplicative_622_, 0);
v_toSeq_627_ = lean_ctor_get(v_toApplicative_622_, 2);
v_toSeqLeft_628_ = lean_ctor_get(v_toApplicative_622_, 3);
v_toSeqRight_629_ = lean_ctor_get(v_toApplicative_622_, 4);
v_isSharedCheck_684_ = !lean_is_exclusive(v_toApplicative_622_);
if (v_isSharedCheck_684_ == 0)
{
lean_object* v_unused_685_; 
v_unused_685_ = lean_ctor_get(v_toApplicative_622_, 1);
lean_dec(v_unused_685_);
v___x_631_ = v_toApplicative_622_;
v_isShared_632_ = v_isSharedCheck_684_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_toSeqRight_629_);
lean_inc(v_toSeqLeft_628_);
lean_inc(v_toSeq_627_);
lean_inc(v_toFunctor_626_);
lean_dec(v_toApplicative_622_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_684_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___f_633_; lean_object* v___f_634_; lean_object* v___f_635_; lean_object* v___f_636_; lean_object* v___x_637_; lean_object* v___f_638_; lean_object* v___f_639_; lean_object* v___f_640_; lean_object* v___x_642_; 
v___f_633_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__1));
v___f_634_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__2));
lean_inc_ref(v_toFunctor_626_);
v___f_635_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_635_, 0, v_toFunctor_626_);
v___f_636_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_636_, 0, v_toFunctor_626_);
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v___f_635_);
lean_ctor_set(v___x_637_, 1, v___f_636_);
v___f_638_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_638_, 0, v_toSeqRight_629_);
v___f_639_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_639_, 0, v_toSeqLeft_628_);
v___f_640_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_640_, 0, v_toSeq_627_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 4, v___f_638_);
lean_ctor_set(v___x_631_, 3, v___f_639_);
lean_ctor_set(v___x_631_, 2, v___f_640_);
lean_ctor_set(v___x_631_, 1, v___f_633_);
lean_ctor_set(v___x_631_, 0, v___x_637_);
v___x_642_ = v___x_631_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_637_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v___f_633_);
lean_ctor_set(v_reuseFailAlloc_683_, 2, v___f_640_);
lean_ctor_set(v_reuseFailAlloc_683_, 3, v___f_639_);
lean_ctor_set(v_reuseFailAlloc_683_, 4, v___f_638_);
v___x_642_ = v_reuseFailAlloc_683_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
lean_object* v___x_644_; 
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 1, v___f_634_);
lean_ctor_set(v___x_624_, 0, v___x_642_);
v___x_644_ = v___x_624_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v___f_634_);
v___x_644_ = v_reuseFailAlloc_682_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
lean_object* v___x_645_; lean_object* v_toApplicative_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_680_; 
v___x_645_ = l_StateRefT_x27_instMonad___redArg(v___x_644_);
v_toApplicative_646_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_680_ == 0)
{
lean_object* v_unused_681_; 
v_unused_681_ = lean_ctor_get(v___x_645_, 1);
lean_dec(v_unused_681_);
v___x_648_ = v___x_645_;
v_isShared_649_ = v_isSharedCheck_680_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_toApplicative_646_);
lean_dec(v___x_645_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_680_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v_toFunctor_650_; lean_object* v_toSeq_651_; lean_object* v_toSeqLeft_652_; lean_object* v_toSeqRight_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_678_; 
v_toFunctor_650_ = lean_ctor_get(v_toApplicative_646_, 0);
v_toSeq_651_ = lean_ctor_get(v_toApplicative_646_, 2);
v_toSeqLeft_652_ = lean_ctor_get(v_toApplicative_646_, 3);
v_toSeqRight_653_ = lean_ctor_get(v_toApplicative_646_, 4);
v_isSharedCheck_678_ = !lean_is_exclusive(v_toApplicative_646_);
if (v_isSharedCheck_678_ == 0)
{
lean_object* v_unused_679_; 
v_unused_679_ = lean_ctor_get(v_toApplicative_646_, 1);
lean_dec(v_unused_679_);
v___x_655_ = v_toApplicative_646_;
v_isShared_656_ = v_isSharedCheck_678_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_toSeqRight_653_);
lean_inc(v_toSeqLeft_652_);
lean_inc(v_toSeq_651_);
lean_inc(v_toFunctor_650_);
lean_dec(v_toApplicative_646_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_678_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___f_657_; lean_object* v___f_658_; lean_object* v___f_659_; lean_object* v___f_660_; lean_object* v___x_661_; lean_object* v___f_662_; lean_object* v___f_663_; lean_object* v___f_664_; lean_object* v___x_666_; 
v___f_657_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__3));
v___f_658_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__4));
lean_inc_ref(v_toFunctor_650_);
v___f_659_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_659_, 0, v_toFunctor_650_);
v___f_660_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_660_, 0, v_toFunctor_650_);
v___x_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_661_, 0, v___f_659_);
lean_ctor_set(v___x_661_, 1, v___f_660_);
v___f_662_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_662_, 0, v_toSeqRight_653_);
v___f_663_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_663_, 0, v_toSeqLeft_652_);
v___f_664_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_664_, 0, v_toSeq_651_);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 4, v___f_662_);
lean_ctor_set(v___x_655_, 3, v___f_663_);
lean_ctor_set(v___x_655_, 2, v___f_664_);
lean_ctor_set(v___x_655_, 1, v___f_657_);
lean_ctor_set(v___x_655_, 0, v___x_661_);
v___x_666_ = v___x_655_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_661_);
lean_ctor_set(v_reuseFailAlloc_677_, 1, v___f_657_);
lean_ctor_set(v_reuseFailAlloc_677_, 2, v___f_664_);
lean_ctor_set(v_reuseFailAlloc_677_, 3, v___f_663_);
lean_ctor_set(v_reuseFailAlloc_677_, 4, v___f_662_);
v___x_666_ = v_reuseFailAlloc_677_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_668_; 
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 1, v___f_658_);
lean_ctor_set(v___x_648_, 0, v___x_666_);
v___x_668_ = v___x_648_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v___f_658_);
v___x_668_ = v_reuseFailAlloc_676_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___f_672_; lean_object* v___x_7100__overap_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_669_ = l_StateRefT_x27_instMonad___redArg(v___x_668_);
v___x_670_ = l_Lean_instInhabitedExpr;
v___x_671_ = l_instInhabitedOfMonad___redArg(v___x_669_, v___x_670_);
v___f_672_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_672_, 0, v___x_671_);
v___x_7100__overap_673_ = lean_panic_fn_borrowed(v___f_672_, v_msg_612_);
lean_dec_ref(v___f_672_);
v___x_674_ = lean_box(v___y_613_);
lean_inc(v___y_618_);
lean_inc_ref(v___y_617_);
lean_inc(v___y_616_);
lean_inc_ref(v___y_615_);
lean_inc(v___y_614_);
v___x_675_ = lean_apply_7(v___x_7100__overap_673_, v___x_674_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_, lean_box(0));
return v___x_675_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___boxed(lean_object* v_msg_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
uint8_t v___y_7249__boxed_696_; lean_object* v_res_697_; 
v___y_7249__boxed_696_ = lean_unbox(v___y_689_);
v_res_697_ = l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2(v_msg_688_, v___y_7249__boxed_696_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
return v_res_697_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__3(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_701_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2));
v___x_702_ = lean_unsigned_to_nat(20u);
v___x_703_ = lean_unsigned_to_nat(88u);
v___x_704_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__1));
v___x_705_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0));
v___x_706_ = l_mkPanicMessageWithDecl(v___x_705_, v___x_704_, v___x_703_, v___x_702_, v___x_701_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(uint8_t v_pu_707_, lean_object* v_e_708_, uint8_t v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_){
_start:
{
uint8_t v___x_716_; 
v___x_716_ = l_Lean_Expr_hasFVar(v_e_708_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; 
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v_e_708_);
return v___x_717_;
}
else
{
switch(lean_obj_tag(v_e_708_))
{
case 1:
{
lean_object* v_fvarId_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v_fvarId_718_ = lean_ctor_get(v_e_708_, 0);
v___x_719_ = lean_st_ref_get(v_a_710_);
v___x_720_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1___redArg(v___x_719_, v_fvarId_718_);
lean_dec(v___x_719_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v___x_721_; 
v___x_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_721_, 0, v_e_708_);
return v___x_721_;
}
else
{
lean_object* v_val_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_767_; 
lean_dec_ref_known(v_e_708_, 1);
v_val_722_ = lean_ctor_get(v___x_720_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_767_ == 0)
{
v___x_724_ = v___x_720_;
v_isShared_725_ = v_isSharedCheck_767_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_val_722_);
lean_dec(v___x_720_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_767_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
switch(lean_obj_tag(v_val_722_))
{
case 0:
{
lean_object* v___x_726_; lean_object* v___x_728_; 
v___x_726_ = l_Lean_Compiler_LCNF_erasedExpr;
if (v_isShared_725_ == 0)
{
lean_ctor_set_tag(v___x_724_, 0);
lean_ctor_set(v___x_724_, 0, v___x_726_);
v___x_728_ = v___x_724_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
case 1:
{
lean_object* v_fvarId_730_; lean_object* v___x_731_; 
lean_del_object(v___x_724_);
v_fvarId_730_ = lean_ctor_get(v_val_722_, 0);
lean_inc(v_fvarId_730_);
lean_dec_ref_known(v_val_722_, 1);
v___x_731_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v_pu_707_, v_fvarId_730_, v_a_712_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_750_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_750_ == 0)
{
v___x_734_ = v___x_731_;
v_isShared_735_ = v_isSharedCheck_750_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_731_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_750_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
if (lean_obj_tag(v_a_732_) == 0)
{
lean_dec(v_fvarId_730_);
goto v___jp_736_;
}
else
{
lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_748_; 
v_isSharedCheck_748_ = !lean_is_exclusive(v_a_732_);
if (v_isSharedCheck_748_ == 0)
{
lean_object* v_unused_749_; 
v_unused_749_ = lean_ctor_get(v_a_732_, 0);
lean_dec(v_unused_749_);
v___x_742_ = v_a_732_;
v_isShared_743_ = v_isSharedCheck_748_;
goto v_resetjp_741_;
}
else
{
lean_dec(v_a_732_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_748_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
if (v___x_716_ == 0)
{
lean_del_object(v___x_742_);
lean_dec(v_fvarId_730_);
goto v___jp_736_;
}
else
{
lean_object* v___x_744_; lean_object* v___x_746_; 
lean_del_object(v___x_734_);
v___x_744_ = l_Lean_Expr_fvar___override(v_fvarId_730_);
if (v_isShared_743_ == 0)
{
lean_ctor_set_tag(v___x_742_, 0);
lean_ctor_set(v___x_742_, 0, v___x_744_);
v___x_746_ = v___x_742_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_744_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
v___jp_736_:
{
lean_object* v___x_737_; lean_object* v___x_739_; 
v___x_737_ = l_Lean_Compiler_LCNF_anyExpr;
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 0, v___x_737_);
v___x_739_ = v___x_734_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v___x_737_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec(v_fvarId_730_);
v_a_751_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_731_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_731_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
default: 
{
lean_object* v_expr_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_766_; 
lean_del_object(v___x_724_);
v_expr_759_ = lean_ctor_get(v_val_722_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v_val_722_);
if (v_isSharedCheck_766_ == 0)
{
v___x_761_ = v_val_722_;
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_expr_759_);
lean_dec(v_val_722_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
lean_ctor_set_tag(v___x_761_, 0);
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_expr_759_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
}
}
}
case 5:
{
lean_object* v_fn_768_; lean_object* v_arg_769_; lean_object* v___x_770_; 
v_fn_768_ = lean_ctor_get(v_e_708_, 0);
v_arg_769_ = lean_ctor_get(v_e_708_, 1);
lean_inc_ref(v_fn_768_);
v___x_770_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_goApp(v_pu_707_, v_fn_768_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_772_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_771_);
lean_dec_ref_known(v___x_770_, 1);
lean_inc_ref(v_arg_769_);
v___x_772_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(v_pu_707_, v_arg_769_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_791_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_791_ == 0)
{
v___x_775_ = v___x_772_;
v_isShared_776_ = v_isSharedCheck_791_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_772_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_791_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___y_778_; size_t v___x_783_; size_t v___x_784_; uint8_t v___x_785_; 
v___x_783_ = lean_ptr_addr(v_fn_768_);
v___x_784_ = lean_ptr_addr(v_a_771_);
v___x_785_ = lean_usize_dec_eq(v___x_783_, v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; 
lean_dec_ref_known(v_e_708_, 2);
v___x_786_ = l_Lean_Expr_app___override(v_a_771_, v_a_773_);
v___y_778_ = v___x_786_;
goto v___jp_777_;
}
else
{
size_t v___x_787_; size_t v___x_788_; uint8_t v___x_789_; 
v___x_787_ = lean_ptr_addr(v_arg_769_);
v___x_788_ = lean_ptr_addr(v_a_773_);
v___x_789_ = lean_usize_dec_eq(v___x_787_, v___x_788_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; 
lean_dec_ref_known(v_e_708_, 2);
v___x_790_ = l_Lean_Expr_app___override(v_a_771_, v_a_773_);
v___y_778_ = v___x_790_;
goto v___jp_777_;
}
else
{
lean_dec(v_a_773_);
lean_dec(v_a_771_);
v___y_778_ = v_e_708_;
goto v___jp_777_;
}
}
v___jp_777_:
{
lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_779_ = l_Lean_Expr_headBeta(v___y_778_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v___x_779_);
v___x_781_ = v___x_775_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
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
else
{
lean_dec(v_a_771_);
lean_dec_ref_known(v_e_708_, 2);
return v___x_772_;
}
}
else
{
lean_dec_ref_known(v_e_708_, 2);
return v___x_770_;
}
}
case 6:
{
lean_object* v_binderName_792_; lean_object* v_binderType_793_; lean_object* v_body_794_; uint8_t v_binderInfo_795_; lean_object* v___x_796_; 
v_binderName_792_ = lean_ctor_get(v_e_708_, 0);
v_binderType_793_ = lean_ctor_get(v_e_708_, 1);
v_body_794_ = lean_ctor_get(v_e_708_, 2);
v_binderInfo_795_ = lean_ctor_get_uint8(v_e_708_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_793_);
v___x_796_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(v_pu_707_, v_binderType_793_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v_a_797_; lean_object* v___x_798_; 
v_a_797_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v___x_796_, 1);
lean_inc_ref(v_body_794_);
v___x_798_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(v_pu_707_, v_body_794_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_825_; 
v_a_799_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_825_ == 0)
{
v___x_801_ = v___x_798_;
v_isShared_802_ = v_isSharedCheck_825_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_798_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_825_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
size_t v___x_803_; size_t v___x_804_; uint8_t v___x_805_; 
v___x_803_ = lean_ptr_addr(v_binderType_793_);
v___x_804_ = lean_ptr_addr(v_a_797_);
v___x_805_ = lean_usize_dec_eq(v___x_803_, v___x_804_);
if (v___x_805_ == 0)
{
lean_object* v___x_806_; lean_object* v___x_808_; 
lean_inc(v_binderName_792_);
lean_dec_ref_known(v_e_708_, 3);
v___x_806_ = l_Lean_Expr_lam___override(v_binderName_792_, v_a_797_, v_a_799_, v_binderInfo_795_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 0, v___x_806_);
v___x_808_ = v___x_801_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v___x_806_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
else
{
size_t v___x_810_; size_t v___x_811_; uint8_t v___x_812_; 
v___x_810_ = lean_ptr_addr(v_body_794_);
v___x_811_ = lean_ptr_addr(v_a_799_);
v___x_812_ = lean_usize_dec_eq(v___x_810_, v___x_811_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; lean_object* v___x_815_; 
lean_inc(v_binderName_792_);
lean_dec_ref_known(v_e_708_, 3);
v___x_813_ = l_Lean_Expr_lam___override(v_binderName_792_, v_a_797_, v_a_799_, v_binderInfo_795_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 0, v___x_813_);
v___x_815_ = v___x_801_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_813_);
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
uint8_t v___x_817_; 
v___x_817_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_795_, v_binderInfo_795_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; lean_object* v___x_820_; 
lean_inc(v_binderName_792_);
lean_dec_ref_known(v_e_708_, 3);
v___x_818_ = l_Lean_Expr_lam___override(v_binderName_792_, v_a_797_, v_a_799_, v_binderInfo_795_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 0, v___x_818_);
v___x_820_ = v___x_801_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v___x_818_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
else
{
lean_object* v___x_823_; 
lean_dec(v_a_799_);
lean_dec(v_a_797_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 0, v_e_708_);
v___x_823_ = v___x_801_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_e_708_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
}
}
else
{
lean_dec(v_a_797_);
lean_dec_ref_known(v_e_708_, 3);
return v___x_798_;
}
}
else
{
lean_dec_ref_known(v_e_708_, 3);
return v___x_796_;
}
}
case 7:
{
lean_object* v_binderName_826_; lean_object* v_binderType_827_; lean_object* v_body_828_; uint8_t v_binderInfo_829_; lean_object* v___x_830_; 
v_binderName_826_ = lean_ctor_get(v_e_708_, 0);
v_binderType_827_ = lean_ctor_get(v_e_708_, 1);
v_body_828_ = lean_ctor_get(v_e_708_, 2);
v_binderInfo_829_ = lean_ctor_get_uint8(v_e_708_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_827_);
v___x_830_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(v_pu_707_, v_binderType_827_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v_a_831_; lean_object* v___x_832_; 
v_a_831_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_a_831_);
lean_dec_ref_known(v___x_830_, 1);
lean_inc_ref(v_body_828_);
v___x_832_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(v_pu_707_, v_body_828_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_859_; 
v_a_833_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_859_ == 0)
{
v___x_835_ = v___x_832_;
v_isShared_836_ = v_isSharedCheck_859_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_832_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_859_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
size_t v___x_837_; size_t v___x_838_; uint8_t v___x_839_; 
v___x_837_ = lean_ptr_addr(v_binderType_827_);
v___x_838_ = lean_ptr_addr(v_a_831_);
v___x_839_ = lean_usize_dec_eq(v___x_837_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; lean_object* v___x_842_; 
lean_inc(v_binderName_826_);
lean_dec_ref_known(v_e_708_, 3);
v___x_840_ = l_Lean_Expr_forallE___override(v_binderName_826_, v_a_831_, v_a_833_, v_binderInfo_829_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v___x_840_);
v___x_842_ = v___x_835_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v___x_840_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
else
{
size_t v___x_844_; size_t v___x_845_; uint8_t v___x_846_; 
v___x_844_ = lean_ptr_addr(v_body_828_);
v___x_845_ = lean_ptr_addr(v_a_833_);
v___x_846_ = lean_usize_dec_eq(v___x_844_, v___x_845_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; lean_object* v___x_849_; 
lean_inc(v_binderName_826_);
lean_dec_ref_known(v_e_708_, 3);
v___x_847_ = l_Lean_Expr_forallE___override(v_binderName_826_, v_a_831_, v_a_833_, v_binderInfo_829_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v___x_847_);
v___x_849_ = v___x_835_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_847_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
else
{
uint8_t v___x_851_; 
v___x_851_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_829_, v_binderInfo_829_);
if (v___x_851_ == 0)
{
lean_object* v___x_852_; lean_object* v___x_854_; 
lean_inc(v_binderName_826_);
lean_dec_ref_known(v_e_708_, 3);
v___x_852_ = l_Lean_Expr_forallE___override(v_binderName_826_, v_a_831_, v_a_833_, v_binderInfo_829_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v___x_852_);
v___x_854_ = v___x_835_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v___x_852_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
else
{
lean_object* v___x_857_; 
lean_dec(v_a_833_);
lean_dec(v_a_831_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v_e_708_);
v___x_857_ = v___x_835_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_e_708_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
}
}
else
{
lean_dec(v_a_831_);
lean_dec_ref_known(v_e_708_, 3);
return v___x_832_;
}
}
else
{
lean_dec_ref_known(v_e_708_, 3);
return v___x_830_;
}
}
case 8:
{
lean_object* v___x_860_; lean_object* v___x_861_; 
lean_dec_ref_known(v_e_708_, 4);
v___x_860_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__3, &l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__3);
v___x_861_ = l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2(v___x_860_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
return v___x_861_;
}
case 10:
{
lean_object* v_data_862_; lean_object* v_expr_863_; lean_object* v___x_864_; 
v_data_862_ = lean_ctor_get(v_e_708_, 0);
v_expr_863_ = lean_ctor_get(v_e_708_, 1);
lean_inc_ref(v_expr_863_);
v___x_864_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(v_pu_707_, v_expr_863_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_879_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_879_ == 0)
{
v___x_867_ = v___x_864_;
v_isShared_868_ = v_isSharedCheck_879_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_864_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_879_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
size_t v___x_869_; size_t v___x_870_; uint8_t v___x_871_; 
v___x_869_ = lean_ptr_addr(v_expr_863_);
v___x_870_ = lean_ptr_addr(v_a_865_);
v___x_871_ = lean_usize_dec_eq(v___x_869_, v___x_870_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; lean_object* v___x_874_; 
lean_inc(v_data_862_);
lean_dec_ref_known(v_e_708_, 2);
v___x_872_ = l_Lean_Expr_mdata___override(v_data_862_, v_a_865_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v___x_872_);
v___x_874_ = v___x_867_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
else
{
lean_object* v___x_877_; 
lean_dec(v_a_865_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v_e_708_);
v___x_877_ = v___x_867_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_e_708_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_708_, 2);
return v___x_864_;
}
}
case 11:
{
lean_object* v_typeName_880_; lean_object* v_idx_881_; lean_object* v_struct_882_; lean_object* v___x_883_; 
v_typeName_880_ = lean_ctor_get(v_e_708_, 0);
v_idx_881_ = lean_ctor_get(v_e_708_, 1);
v_struct_882_ = lean_ctor_get(v_e_708_, 2);
lean_inc_ref(v_struct_882_);
v___x_883_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(v_pu_707_, v_struct_882_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_898_; 
v_a_884_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_898_ == 0)
{
v___x_886_ = v___x_883_;
v_isShared_887_ = v_isSharedCheck_898_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_883_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_898_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
size_t v___x_888_; size_t v___x_889_; uint8_t v___x_890_; 
v___x_888_ = lean_ptr_addr(v_struct_882_);
v___x_889_ = lean_ptr_addr(v_a_884_);
v___x_890_ = lean_usize_dec_eq(v___x_888_, v___x_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; lean_object* v___x_893_; 
lean_inc(v_idx_881_);
lean_inc(v_typeName_880_);
lean_dec_ref_known(v_e_708_, 3);
v___x_891_ = l_Lean_Expr_proj___override(v_typeName_880_, v_idx_881_, v_a_884_);
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 0, v___x_891_);
v___x_893_ = v___x_886_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v___x_891_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
else
{
lean_object* v___x_896_; 
lean_dec(v_a_884_);
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 0, v_e_708_);
v___x_896_ = v___x_886_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_e_708_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_708_, 3);
return v___x_883_;
}
}
default: 
{
lean_object* v___x_899_; 
v___x_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_899_, 0, v_e_708_);
return v___x_899_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_goApp(uint8_t v_pu_900_, lean_object* v_e_901_, uint8_t v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_){
_start:
{
if (lean_obj_tag(v_e_901_) == 5)
{
lean_object* v_fn_909_; lean_object* v_arg_910_; lean_object* v___x_911_; 
v_fn_909_ = lean_ctor_get(v_e_901_, 0);
v_arg_910_ = lean_ctor_get(v_e_901_, 1);
lean_inc_ref(v_fn_909_);
v___x_911_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_goApp(v_pu_900_, v_fn_909_, v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_913_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v___x_911_, 1);
lean_inc_ref(v_arg_910_);
v___x_913_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(v_pu_900_, v_arg_910_, v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_935_; 
v_a_914_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_935_ == 0)
{
v___x_916_ = v___x_913_;
v_isShared_917_ = v_isSharedCheck_935_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_913_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_935_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
size_t v___x_918_; size_t v___x_919_; uint8_t v___x_920_; 
v___x_918_ = lean_ptr_addr(v_fn_909_);
v___x_919_ = lean_ptr_addr(v_a_912_);
v___x_920_ = lean_usize_dec_eq(v___x_918_, v___x_919_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; lean_object* v___x_923_; 
lean_dec_ref_known(v_e_901_, 2);
v___x_921_ = l_Lean_Expr_app___override(v_a_912_, v_a_914_);
if (v_isShared_917_ == 0)
{
lean_ctor_set(v___x_916_, 0, v___x_921_);
v___x_923_ = v___x_916_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_921_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
else
{
size_t v___x_925_; size_t v___x_926_; uint8_t v___x_927_; 
v___x_925_ = lean_ptr_addr(v_arg_910_);
v___x_926_ = lean_ptr_addr(v_a_914_);
v___x_927_ = lean_usize_dec_eq(v___x_925_, v___x_926_);
if (v___x_927_ == 0)
{
lean_object* v___x_928_; lean_object* v___x_930_; 
lean_dec_ref_known(v_e_901_, 2);
v___x_928_ = l_Lean_Expr_app___override(v_a_912_, v_a_914_);
if (v_isShared_917_ == 0)
{
lean_ctor_set(v___x_916_, 0, v___x_928_);
v___x_930_ = v___x_916_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v___x_928_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
else
{
lean_object* v___x_933_; 
lean_dec(v_a_914_);
lean_dec(v_a_912_);
if (v_isShared_917_ == 0)
{
lean_ctor_set(v___x_916_, 0, v_e_901_);
v___x_933_ = v___x_916_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_e_901_);
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
else
{
lean_dec(v_a_912_);
lean_dec_ref_known(v_e_901_, 2);
return v___x_913_;
}
}
else
{
lean_dec_ref_known(v_e_901_, 2);
return v___x_911_;
}
}
else
{
lean_object* v___x_936_; 
v___x_936_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(v_pu_900_, v_e_901_, v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_);
return v___x_936_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_goApp___boxed(lean_object* v_pu_937_, lean_object* v_e_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_){
_start:
{
uint8_t v_pu_boxed_946_; uint8_t v_a_boxed_947_; lean_object* v_res_948_; 
v_pu_boxed_946_ = lean_unbox(v_pu_937_);
v_a_boxed_947_ = lean_unbox(v_a_939_);
v_res_948_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_goApp(v_pu_boxed_946_, v_e_938_, v_a_boxed_947_, v_a_940_, v_a_941_, v_a_942_, v_a_943_, v_a_944_);
lean_dec(v_a_944_);
lean_dec_ref(v_a_943_);
lean_dec(v_a_942_);
lean_dec_ref(v_a_941_);
lean_dec(v_a_940_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___boxed(lean_object* v_pu_949_, lean_object* v_e_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_){
_start:
{
uint8_t v_pu_boxed_958_; uint8_t v_a_boxed_959_; lean_object* v_res_960_; 
v_pu_boxed_958_ = lean_unbox(v_pu_949_);
v_a_boxed_959_ = lean_unbox(v_a_951_);
v_res_960_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(v_pu_boxed_958_, v_e_950_, v_a_boxed_959_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_);
lean_dec(v_a_956_);
lean_dec_ref(v_a_955_);
lean_dec(v_a_954_);
lean_dec_ref(v_a_953_);
lean_dec(v_a_952_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1(lean_object* v_00_u03b2_961_, lean_object* v_m_962_, lean_object* v_a_963_){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1___redArg(v_m_962_, v_a_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1___boxed(lean_object* v_00_u03b2_965_, lean_object* v_m_966_, lean_object* v_a_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1(v_00_u03b2_965_, v_m_966_, v_a_967_);
lean_dec(v_a_967_);
lean_dec_ref(v_m_966_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1(lean_object* v_00_u03b2_969_, lean_object* v_a_970_, lean_object* v_x_971_){
_start:
{
lean_object* v___x_972_; 
v___x_972_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1___redArg(v_a_970_, v_x_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1___boxed(lean_object* v_00_u03b2_973_, lean_object* v_a_974_, lean_object* v_x_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1_spec__1(v_00_u03b2_973_, v_a_974_, v_x_975_);
lean_dec(v_x_975_);
lean_dec(v_a_974_);
return v_res_976_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr___closed__0(void){
_start:
{
uint8_t v___x_977_; lean_object* v___x_978_; 
v___x_977_ = 1;
v___x_978_ = l_Lean_Compiler_LCNF_Purity_ctorIdx(v___x_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr(uint8_t v_pu_979_, lean_object* v_e_980_, uint8_t v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; uint8_t v___x_990_; 
v___x_988_ = l_Lean_Compiler_LCNF_Purity_ctorIdx(v_pu_979_);
v___x_989_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr___closed__0, &l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr___closed__0);
v___x_990_ = lean_nat_dec_eq(v___x_988_, v___x_989_);
lean_dec(v___x_988_);
if (v___x_990_ == 0)
{
lean_object* v___x_991_; 
v___x_991_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go(v_pu_979_, v_e_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_);
return v___x_991_;
}
else
{
lean_object* v___x_992_; 
v___x_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_992_, 0, v_e_980_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr___boxed(lean_object* v_pu_993_, lean_object* v_e_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_){
_start:
{
uint8_t v_pu_boxed_1002_; uint8_t v_a_boxed_1003_; lean_object* v_res_1004_; 
v_pu_boxed_1002_ = lean_unbox(v_pu_993_);
v_a_boxed_1003_ = lean_unbox(v_a_995_);
v_res_1004_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr(v_pu_boxed_1002_, v_e_994_, v_a_boxed_1003_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_);
lean_dec(v_a_1000_);
lean_dec_ref(v_a_999_);
lean_dec(v_a_998_);
lean_dec_ref(v_a_997_);
lean_dec(v_a_996_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeParam(uint8_t v_pu_1005_, lean_object* v_p_1006_, uint8_t v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_fvarId_1014_; lean_object* v_binderName_1015_; lean_object* v_type_1016_; uint8_t v_borrow_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1065_; 
v_fvarId_1014_ = lean_ctor_get(v_p_1006_, 0);
v_binderName_1015_ = lean_ctor_get(v_p_1006_, 1);
v_type_1016_ = lean_ctor_get(v_p_1006_, 2);
v_borrow_1017_ = lean_ctor_get_uint8(v_p_1006_, sizeof(void*)*3);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_p_1006_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1019_ = v_p_1006_;
v_isShared_1020_ = v_isSharedCheck_1065_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_type_1016_);
lean_inc(v_binderName_1015_);
lean_inc(v_fvarId_1014_);
lean_dec(v_p_1006_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1065_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1021_; lean_object* v_a_1022_; lean_object* v___x_1023_; 
v___x_1021_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName___redArg(v_binderName_1015_, v_a_1007_, v_a_1010_);
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref(v___x_1021_);
v___x_1023_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr(v_pu_1005_, v_type_1016_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1025_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_a_1024_);
lean_dec_ref_known(v___x_1023_, 1);
v___x_1025_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___redArg(v_fvarId_1014_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1048_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1028_ = v___x_1025_;
v_isShared_1029_ = v_isSharedCheck_1048_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_1025_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1048_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 2, v_a_1024_);
lean_ctor_set(v___x_1019_, 1, v_a_1022_);
lean_ctor_set(v___x_1019_, 0, v_a_1026_);
v___x_1031_ = v___x_1019_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1026_);
lean_ctor_set(v_reuseFailAlloc_1047_, 1, v_a_1022_);
lean_ctor_set(v_reuseFailAlloc_1047_, 2, v_a_1024_);
lean_ctor_set_uint8(v_reuseFailAlloc_1047_, sizeof(void*)*3, v_borrow_1017_);
v___x_1031_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
lean_object* v___x_1032_; lean_object* v_lctx_1033_; lean_object* v_nextIdx_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1046_; 
v___x_1032_ = lean_st_ref_take(v_a_1010_);
v_lctx_1033_ = lean_ctor_get(v___x_1032_, 0);
v_nextIdx_1034_ = lean_ctor_get(v___x_1032_, 1);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1036_ = v___x_1032_;
v_isShared_1037_ = v_isSharedCheck_1046_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_nextIdx_1034_);
lean_inc(v_lctx_1033_);
lean_dec(v___x_1032_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1046_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1038_; lean_object* v___x_1040_; 
lean_inc_ref(v___x_1031_);
v___x_1038_ = l_Lean_Compiler_LCNF_LCtx_addParam(v_pu_1005_, v_lctx_1033_, v___x_1031_);
if (v_isShared_1037_ == 0)
{
lean_ctor_set(v___x_1036_, 0, v___x_1038_);
v___x_1040_ = v___x_1036_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v_nextIdx_1034_);
v___x_1040_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1041_; lean_object* v___x_1043_; 
v___x_1041_ = lean_st_ref_put(v_a_1010_, v___x_1040_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 0, v___x_1031_);
v___x_1043_ = v___x_1028_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1031_);
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
}
}
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
lean_dec(v_a_1024_);
lean_dec(v_a_1022_);
lean_del_object(v___x_1019_);
v_a_1049_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_1025_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1025_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
else
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1064_; 
lean_dec(v_a_1022_);
lean_del_object(v___x_1019_);
lean_dec(v_fvarId_1014_);
v_a_1057_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1059_ = v___x_1023_;
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1023_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
if (v_isShared_1060_ == 0)
{
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_a_1057_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeParam___boxed(lean_object* v_pu_1066_, lean_object* v_p_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_){
_start:
{
uint8_t v_pu_boxed_1075_; uint8_t v_a_boxed_1076_; lean_object* v_res_1077_; 
v_pu_boxed_1075_ = lean_unbox(v_pu_1066_);
v_a_boxed_1076_ = lean_unbox(v_a_1068_);
v_res_1077_ = l_Lean_Compiler_LCNF_Internalize_internalizeParam(v_pu_boxed_1075_, v_p_1067_, v_a_boxed_1076_, v_a_1069_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_);
lean_dec(v_a_1073_);
lean_dec_ref(v_a_1072_);
lean_dec(v_a_1071_);
lean_dec_ref(v_a_1070_);
lean_dec(v_a_1069_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeArg(uint8_t v_pu_1078_, lean_object* v_arg_1079_, uint8_t v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_){
_start:
{
switch(lean_obj_tag(v_arg_1079_))
{
case 0:
{
lean_object* v___x_1087_; 
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v_arg_1079_);
return v___x_1087_;
}
case 1:
{
lean_object* v_fvarId_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v_fvarId_1088_ = lean_ctor_get(v_arg_1079_, 0);
v___x_1089_ = lean_st_ref_get(v_a_1081_);
v___x_1090_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__1___redArg(v___x_1089_, v_fvarId_1088_);
lean_dec(v___x_1089_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v___x_1091_; 
v___x_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1091_, 0, v_arg_1079_);
return v___x_1091_;
}
else
{
lean_object* v_val_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1122_; 
lean_dec_ref_known(v_arg_1079_, 1);
v_val_1092_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1094_ = v___x_1090_;
v_isShared_1095_ = v_isSharedCheck_1122_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_val_1092_);
lean_dec(v___x_1090_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1122_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
switch(lean_obj_tag(v_val_1092_))
{
case 0:
{
lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___x_1096_ = lean_box(0);
if (v_isShared_1095_ == 0)
{
lean_ctor_set_tag(v___x_1094_, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1096_);
v___x_1098_ = v___x_1094_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
case 1:
{
lean_object* v_fvarId_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1110_; 
v_fvarId_1100_ = lean_ctor_get(v_val_1092_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v_val_1092_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1102_ = v_val_1092_;
v_isShared_1103_ = v_isSharedCheck_1110_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_fvarId_1100_);
lean_dec(v_val_1092_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1110_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_fvarId_1100_);
v___x_1105_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
lean_object* v___x_1107_; 
if (v_isShared_1095_ == 0)
{
lean_ctor_set_tag(v___x_1094_, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1105_);
v___x_1107_ = v___x_1094_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v___x_1105_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
default: 
{
lean_object* v_expr_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1121_; 
v_expr_1111_ = lean_ctor_get(v_val_1092_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_val_1092_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1113_ = v_val_1092_;
v_isShared_1114_ = v_isSharedCheck_1121_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_expr_1111_);
lean_dec(v_val_1092_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1121_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_expr_1111_);
v___x_1116_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
lean_object* v___x_1118_; 
if (v_isShared_1095_ == 0)
{
lean_ctor_set_tag(v___x_1094_, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1116_);
v___x_1118_ = v___x_1094_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1116_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
}
}
}
}
}
default: 
{
lean_object* v_expr_1123_; lean_object* v___x_1124_; 
v_expr_1123_ = lean_ctor_get(v_arg_1079_, 0);
lean_inc_ref(v_expr_1123_);
v___x_1124_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr(v_pu_1078_, v_expr_1123_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1133_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1127_ = v___x_1124_;
v_isShared_1128_ = v_isSharedCheck_1133_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1124_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1133_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1129_; lean_object* v___x_1131_; 
v___x_1129_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateTypeImp(v_pu_1078_, v_arg_1079_, v_a_1125_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 0, v___x_1129_);
v___x_1131_ = v___x_1127_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1141_; 
lean_dec_ref_known(v_arg_1079_, 1);
v_a_1134_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1136_ = v___x_1124_;
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1124_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1139_; 
if (v_isShared_1137_ == 0)
{
v___x_1139_ = v___x_1136_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1134_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeArg___boxed(lean_object* v_pu_1142_, lean_object* v_arg_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_){
_start:
{
uint8_t v_pu_boxed_1151_; uint8_t v_a_boxed_1152_; lean_object* v_res_1153_; 
v_pu_boxed_1151_ = lean_unbox(v_pu_1142_);
v_a_boxed_1152_ = lean_unbox(v_a_1144_);
v_res_1153_ = l_Lean_Compiler_LCNF_Internalize_internalizeArg(v_pu_boxed_1151_, v_arg_1143_, v_a_boxed_1152_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_);
lean_dec(v_a_1149_);
lean_dec_ref(v_a_1148_);
lean_dec(v_a_1147_);
lean_dec_ref(v_a_1146_);
lean_dec(v_a_1145_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeArgs_spec__0(uint8_t v_pu_1154_, size_t v_sz_1155_, size_t v_i_1156_, lean_object* v_bs_1157_, uint8_t v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
uint8_t v___x_1165_; 
v___x_1165_ = lean_usize_dec_lt(v_i_1156_, v_sz_1155_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1166_ = l_unsafeCast___redArg(v_bs_1157_);
lean_dec_ref(v_bs_1157_);
v___x_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1166_);
return v___x_1167_;
}
else
{
lean_object* v_v_1168_; lean_object* v___x_1169_; lean_object* v_bs_x27_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v_v_1168_ = lean_array_uget(v_bs_1157_, v_i_1156_);
v___x_1169_ = lean_unsigned_to_nat(0u);
v_bs_x27_1170_ = lean_array_uset(v_bs_1157_, v_i_1156_, v___x_1169_);
v___x_1171_ = l_unsafeCast___redArg(v_v_1168_);
lean_dec(v_v_1168_);
v___x_1172_ = l_Lean_Compiler_LCNF_Internalize_internalizeArg(v_pu_1154_, v___x_1171_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; size_t v___x_1174_; size_t v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1173_);
lean_dec_ref_known(v___x_1172_, 1);
v___x_1174_ = ((size_t)1ULL);
v___x_1175_ = lean_usize_add(v_i_1156_, v___x_1174_);
v___x_1176_ = l_unsafeCast___redArg(v_a_1173_);
lean_dec(v_a_1173_);
v___x_1177_ = lean_array_uset(v_bs_x27_1170_, v_i_1156_, v___x_1176_);
v_i_1156_ = v___x_1175_;
v_bs_1157_ = v___x_1177_;
goto _start;
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
lean_dec_ref(v_bs_x27_1170_);
v_a_1179_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1172_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1172_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeArgs_spec__0___boxed(lean_object* v_pu_1187_, lean_object* v_sz_1188_, lean_object* v_i_1189_, lean_object* v_bs_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
uint8_t v_pu_boxed_1198_; size_t v_sz_boxed_1199_; size_t v_i_boxed_1200_; uint8_t v___y_360__boxed_1201_; lean_object* v_res_1202_; 
v_pu_boxed_1198_ = lean_unbox(v_pu_1187_);
v_sz_boxed_1199_ = lean_unbox_usize(v_sz_1188_);
lean_dec(v_sz_1188_);
v_i_boxed_1200_ = lean_unbox_usize(v_i_1189_);
lean_dec(v_i_1189_);
v___y_360__boxed_1201_ = lean_unbox(v___y_1191_);
v_res_1202_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeArgs_spec__0(v_pu_boxed_1198_, v_sz_boxed_1199_, v_i_boxed_1200_, v_bs_1190_, v___y_360__boxed_1201_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_);
lean_dec(v___y_1196_);
lean_dec_ref(v___y_1195_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeArgs(uint8_t v_pu_1205_, lean_object* v_args_1206_, uint8_t v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_){
_start:
{
size_t v_sz_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_355__overap_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v_sz_1214_ = lean_array_size(v_args_1206_);
v___x_1215_ = l_unsafeCast___redArg(v_args_1206_);
v___x_1216_ = lean_box(v_pu_1205_);
v___x_1217_ = lean_box_usize(v_sz_1214_);
v___x_1218_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeArgs___boxed__const__1));
v___x_1219_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeArgs_spec__0___boxed), 11, 4);
lean_closure_set(v___x_1219_, 0, v___x_1216_);
lean_closure_set(v___x_1219_, 1, v___x_1217_);
lean_closure_set(v___x_1219_, 2, v___x_1218_);
lean_closure_set(v___x_1219_, 3, v___x_1215_);
v___x_355__overap_1220_ = l_unsafeCast___redArg(v___x_1219_);
lean_dec_ref(v___x_1219_);
v___x_1221_ = lean_box(v_a_1207_);
lean_inc(v_a_1212_);
lean_inc_ref(v_a_1211_);
lean_inc(v_a_1210_);
lean_inc_ref(v_a_1209_);
lean_inc(v_a_1208_);
v___x_1222_ = lean_apply_7(v___x_355__overap_1220_, v___x_1221_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, lean_box(0));
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeArgs___boxed(lean_object* v_pu_1223_, lean_object* v_args_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_){
_start:
{
uint8_t v_pu_boxed_1232_; uint8_t v_a_boxed_1233_; lean_object* v_res_1234_; 
v_pu_boxed_1232_ = lean_unbox(v_pu_1223_);
v_a_boxed_1233_ = lean_unbox(v_a_1225_);
v_res_1234_ = l_Lean_Compiler_LCNF_Internalize_internalizeArgs(v_pu_boxed_1232_, v_args_1224_, v_a_boxed_1233_, v_a_1226_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_);
lean_dec(v_a_1230_);
lean_dec_ref(v_a_1229_);
lean_dec(v_a_1228_);
lean_dec_ref(v_a_1227_);
lean_dec(v_a_1226_);
lean_dec_ref(v_args_1224_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeLetValue(uint8_t v_pu_1235_, lean_object* v_e_1236_, uint8_t v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_){
_start:
{
lean_object* v_fvarId_1245_; lean_object* v___y_1246_; lean_object* v_args_1262_; uint8_t v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1265_; lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; 
switch(lean_obj_tag(v_e_1236_))
{
case 2:
{
lean_object* v_struct_1287_; uint8_t v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v_struct_1287_ = lean_ctor_get(v_e_1236_, 2);
v___x_1288_ = 1;
v___x_1289_ = lean_st_ref_get(v_a_1238_);
lean_inc(v_struct_1287_);
v___x_1290_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1289_, v_struct_1287_, v___x_1288_);
lean_dec(v___x_1289_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_fvarId_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1299_; 
v_fvarId_1291_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1293_ = v___x_1290_;
v_isShared_1294_ = v_isSharedCheck_1299_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_fvarId_1291_);
lean_dec(v___x_1290_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1299_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1295_; lean_object* v___x_1297_; 
v___x_1295_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_1235_, v_e_1236_, v_fvarId_1291_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 0, v___x_1295_);
v___x_1297_ = v___x_1293_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
else
{
lean_object* v___x_1300_; lean_object* v___x_1301_; 
lean_dec_ref_known(v_e_1236_, 3);
v___x_1300_ = lean_box(1);
v___x_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
return v___x_1301_;
}
}
case 3:
{
lean_object* v_args_1302_; lean_object* v___x_1303_; 
v_args_1302_ = lean_ctor_get(v_e_1236_, 2);
v___x_1303_ = l_Lean_Compiler_LCNF_Internalize_internalizeArgs(v_pu_1235_, v_args_1302_, v_a_1237_, v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v_a_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1312_; 
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1306_ = v___x_1303_;
v_isShared_1307_ = v_isSharedCheck_1312_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_a_1304_);
lean_dec(v___x_1303_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1312_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1308_; lean_object* v___x_1310_; 
v___x_1308_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_e_1236_, v_a_1304_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 0, v___x_1308_);
v___x_1310_ = v___x_1306_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
else
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1320_; 
lean_dec_ref_known(v_e_1236_, 3);
v_a_1313_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1315_ = v___x_1303_;
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1303_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_a_1313_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
case 4:
{
lean_object* v_fvarId_1321_; lean_object* v_args_1322_; uint8_t v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v_fvarId_1321_ = lean_ctor_get(v_e_1236_, 0);
v_args_1322_ = lean_ctor_get(v_e_1236_, 1);
v___x_1323_ = 1;
v___x_1324_ = lean_st_ref_get(v_a_1238_);
lean_inc(v_fvarId_1321_);
v___x_1325_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1324_, v_fvarId_1321_, v___x_1323_);
lean_dec(v___x_1324_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_fvarId_1326_; lean_object* v___x_1327_; 
v_fvarId_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_fvarId_1326_);
lean_dec_ref_known(v___x_1325_, 1);
v___x_1327_ = l_Lean_Compiler_LCNF_Internalize_internalizeArgs(v_pu_1235_, v_args_1322_, v_a_1237_, v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_);
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1336_; 
v_a_1328_ = lean_ctor_get(v___x_1327_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1330_ = v___x_1327_;
v_isShared_1331_ = v_isSharedCheck_1336_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v___x_1327_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1336_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1332_; lean_object* v___x_1334_; 
v___x_1332_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateFVarImp___redArg(v_e_1236_, v_fvarId_1326_, v_a_1328_);
lean_dec_ref_known(v_e_1236_, 2);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 0, v___x_1332_);
v___x_1334_ = v___x_1330_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v___x_1332_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1344_; 
lean_dec(v_fvarId_1326_);
lean_dec_ref_known(v_e_1236_, 2);
v_a_1337_ = lean_ctor_get(v___x_1327_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1339_ = v___x_1327_;
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1327_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
v___x_1342_ = v___x_1339_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_a_1337_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
}
else
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
lean_dec_ref_known(v_e_1236_, 2);
v___x_1345_ = lean_box(1);
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
return v___x_1346_;
}
}
case 5:
{
lean_object* v_args_1347_; lean_object* v___x_1348_; 
v_args_1347_ = lean_ctor_get(v_e_1236_, 1);
v___x_1348_ = l_Lean_Compiler_LCNF_Internalize_internalizeArgs(v_pu_1235_, v_args_1347_, v_a_1237_, v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1357_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1351_ = v___x_1348_;
v_isShared_1352_ = v_isSharedCheck_1357_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1348_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1357_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1353_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_e_1236_, v_a_1349_);
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 0, v___x_1353_);
v___x_1355_ = v___x_1351_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1353_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
else
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1365_; 
lean_dec_ref_known(v_e_1236_, 2);
v_a_1358_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1360_ = v___x_1348_;
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v___x_1348_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1363_; 
if (v_isShared_1361_ == 0)
{
v___x_1363_ = v___x_1360_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_a_1358_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
}
case 6:
{
lean_object* v_var_1366_; 
v_var_1366_ = lean_ctor_get(v_e_1236_, 1);
lean_inc(v_var_1366_);
v_fvarId_1245_ = v_var_1366_;
v___y_1246_ = v_a_1238_;
goto v___jp_1244_;
}
case 7:
{
lean_object* v_var_1367_; 
v_var_1367_ = lean_ctor_get(v_e_1236_, 1);
lean_inc(v_var_1367_);
v_fvarId_1245_ = v_var_1367_;
v___y_1246_ = v_a_1238_;
goto v___jp_1244_;
}
case 8:
{
lean_object* v_var_1368_; uint8_t v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v_var_1368_ = lean_ctor_get(v_e_1236_, 2);
v___x_1369_ = 1;
v___x_1370_ = lean_st_ref_get(v_a_1238_);
lean_inc(v_var_1368_);
v___x_1371_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1370_, v_var_1368_, v___x_1369_);
lean_dec(v___x_1370_);
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_object* v_fvarId_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1380_; 
v_fvarId_1372_ = lean_ctor_get(v___x_1371_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1371_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1374_ = v___x_1371_;
v_isShared_1375_ = v_isSharedCheck_1380_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_fvarId_1372_);
lean_dec(v___x_1371_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1380_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1376_; lean_object* v___x_1378_; 
v___x_1376_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_1235_, v_e_1236_, v_fvarId_1372_);
if (v_isShared_1375_ == 0)
{
lean_ctor_set(v___x_1374_, 0, v___x_1376_);
v___x_1378_ = v___x_1374_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v___x_1376_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
else
{
lean_object* v___x_1381_; lean_object* v___x_1382_; 
lean_dec_ref_known(v_e_1236_, 3);
v___x_1381_ = lean_box(1);
v___x_1382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1381_);
return v___x_1382_;
}
}
case 9:
{
lean_object* v_args_1383_; 
v_args_1383_ = lean_ctor_get(v_e_1236_, 1);
lean_inc_ref(v_args_1383_);
v_args_1262_ = v_args_1383_;
v___y_1263_ = v_a_1237_;
v___y_1264_ = v_a_1238_;
v___y_1265_ = v_a_1239_;
v___y_1266_ = v_a_1240_;
v___y_1267_ = v_a_1241_;
v___y_1268_ = v_a_1242_;
goto v___jp_1261_;
}
case 10:
{
lean_object* v_args_1384_; 
v_args_1384_ = lean_ctor_get(v_e_1236_, 1);
lean_inc_ref(v_args_1384_);
v_args_1262_ = v_args_1384_;
v___y_1263_ = v_a_1237_;
v___y_1264_ = v_a_1238_;
v___y_1265_ = v_a_1239_;
v___y_1266_ = v_a_1240_;
v___y_1267_ = v_a_1241_;
v___y_1268_ = v_a_1242_;
goto v___jp_1261_;
}
case 11:
{
lean_object* v_n_1385_; lean_object* v_var_1386_; uint8_t v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v_n_1385_ = lean_ctor_get(v_e_1236_, 0);
lean_inc(v_n_1385_);
v_var_1386_ = lean_ctor_get(v_e_1236_, 1);
v___x_1387_ = 1;
v___x_1388_ = lean_st_ref_get(v_a_1238_);
lean_inc(v_var_1386_);
v___x_1389_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1388_, v_var_1386_, v___x_1387_);
lean_dec(v___x_1388_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v_fvarId_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1398_; 
v_fvarId_1390_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1392_ = v___x_1389_;
v_isShared_1393_ = v_isSharedCheck_1398_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_fvarId_1390_);
lean_dec(v___x_1389_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1398_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1394_; lean_object* v___x_1396_; 
v___x_1394_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateResetImp___redArg(v_e_1236_, v_n_1385_, v_fvarId_1390_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 0, v___x_1394_);
v___x_1396_ = v___x_1392_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1394_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
else
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
lean_dec(v_n_1385_);
lean_dec_ref_known(v_e_1236_, 2);
v___x_1399_ = lean_box(1);
v___x_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
return v___x_1400_;
}
}
case 12:
{
lean_object* v_var_1401_; lean_object* v_i_1402_; uint8_t v_updateHeader_1403_; lean_object* v_args_1404_; uint8_t v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v_var_1401_ = lean_ctor_get(v_e_1236_, 0);
v_i_1402_ = lean_ctor_get(v_e_1236_, 1);
lean_inc_ref(v_i_1402_);
v_updateHeader_1403_ = lean_ctor_get_uint8(v_e_1236_, sizeof(void*)*3);
v_args_1404_ = lean_ctor_get(v_e_1236_, 2);
v___x_1405_ = 1;
v___x_1406_ = lean_st_ref_get(v_a_1238_);
lean_inc(v_var_1401_);
v___x_1407_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1406_, v_var_1401_, v___x_1405_);
lean_dec(v___x_1406_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_fvarId_1408_; lean_object* v___x_1409_; 
v_fvarId_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_fvarId_1408_);
lean_dec_ref_known(v___x_1407_, 1);
v___x_1409_ = l_Lean_Compiler_LCNF_Internalize_internalizeArgs(v_pu_1235_, v_args_1404_, v_a_1237_, v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1418_; 
v_a_1410_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1412_ = v___x_1409_;
v_isShared_1413_ = v_isSharedCheck_1418_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1409_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1418_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1414_; lean_object* v___x_1416_; 
v___x_1414_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateReuseImp___redArg(v_e_1236_, v_fvarId_1408_, v_i_1402_, v_updateHeader_1403_, v_a_1410_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 0, v___x_1414_);
v___x_1416_ = v___x_1412_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v___x_1414_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
lean_dec(v_fvarId_1408_);
lean_dec_ref(v_i_1402_);
lean_dec_ref_known(v_e_1236_, 3);
v_a_1419_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1409_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1409_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
lean_dec_ref(v_i_1402_);
lean_dec_ref_known(v_e_1236_, 3);
v___x_1427_ = lean_box(1);
v___x_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
return v___x_1428_;
}
}
case 13:
{
lean_object* v_ty_1429_; lean_object* v_fvarId_1430_; uint8_t v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v_ty_1429_ = lean_ctor_get(v_e_1236_, 0);
lean_inc_ref(v_ty_1429_);
v_fvarId_1430_ = lean_ctor_get(v_e_1236_, 1);
v___x_1431_ = 1;
v___x_1432_ = lean_st_ref_get(v_a_1238_);
lean_inc(v_fvarId_1430_);
v___x_1433_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1432_, v_fvarId_1430_, v___x_1431_);
lean_dec(v___x_1432_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v_fvarId_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1442_; 
v_fvarId_1434_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1436_ = v___x_1433_;
v_isShared_1437_ = v_isSharedCheck_1442_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_fvarId_1434_);
lean_dec(v___x_1433_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1442_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1438_; lean_object* v___x_1440_; 
v___x_1438_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateBoxImp___redArg(v_e_1236_, v_ty_1429_, v_fvarId_1434_);
if (v_isShared_1437_ == 0)
{
lean_ctor_set(v___x_1436_, 0, v___x_1438_);
v___x_1440_ = v___x_1436_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1438_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
else
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
lean_dec_ref(v_ty_1429_);
lean_dec_ref_known(v_e_1236_, 2);
v___x_1443_ = lean_box(1);
v___x_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
return v___x_1444_;
}
}
case 14:
{
lean_object* v_fvarId_1445_; uint8_t v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v_fvarId_1445_ = lean_ctor_get(v_e_1236_, 0);
v___x_1446_ = 1;
v___x_1447_ = lean_st_ref_get(v_a_1238_);
lean_inc(v_fvarId_1445_);
v___x_1448_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1447_, v_fvarId_1445_, v___x_1446_);
lean_dec(v___x_1447_);
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_object* v_fvarId_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1457_; 
v_fvarId_1449_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1451_ = v___x_1448_;
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_fvarId_1449_);
lean_dec(v___x_1448_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1453_; lean_object* v___x_1455_; 
v___x_1453_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateUnboxImp___redArg(v_e_1236_, v_fvarId_1449_);
if (v_isShared_1452_ == 0)
{
lean_ctor_set(v___x_1451_, 0, v___x_1453_);
v___x_1455_ = v___x_1451_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1453_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
else
{
lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1465_; 
v_isSharedCheck_1465_ = !lean_is_exclusive(v_e_1236_);
if (v_isSharedCheck_1465_ == 0)
{
lean_object* v_unused_1466_; 
v_unused_1466_ = lean_ctor_get(v_e_1236_, 0);
lean_dec(v_unused_1466_);
v___x_1459_ = v_e_1236_;
v_isShared_1460_ = v_isSharedCheck_1465_;
goto v_resetjp_1458_;
}
else
{
lean_dec(v_e_1236_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1465_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1461_; lean_object* v___x_1463_; 
v___x_1461_ = lean_box(1);
if (v_isShared_1460_ == 0)
{
lean_ctor_set_tag(v___x_1459_, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1461_);
v___x_1463_ = v___x_1459_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1461_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
case 15:
{
lean_object* v_fvarId_1467_; uint8_t v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v_fvarId_1467_ = lean_ctor_get(v_e_1236_, 0);
v___x_1468_ = 1;
v___x_1469_ = lean_st_ref_get(v_a_1238_);
lean_inc(v_fvarId_1467_);
v___x_1470_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1469_, v_fvarId_1467_, v___x_1468_);
lean_dec(v___x_1469_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_fvarId_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1479_; 
v_fvarId_1471_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1473_ = v___x_1470_;
v_isShared_1474_ = v_isSharedCheck_1479_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_fvarId_1471_);
lean_dec(v___x_1470_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1479_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1475_; lean_object* v___x_1477_; 
v___x_1475_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateIsSharedImp___redArg(v_e_1236_, v_fvarId_1471_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v___x_1475_);
v___x_1477_ = v___x_1473_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___x_1475_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
else
{
lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1487_; 
v_isSharedCheck_1487_ = !lean_is_exclusive(v_e_1236_);
if (v_isSharedCheck_1487_ == 0)
{
lean_object* v_unused_1488_; 
v_unused_1488_ = lean_ctor_get(v_e_1236_, 0);
lean_dec(v_unused_1488_);
v___x_1481_ = v_e_1236_;
v_isShared_1482_ = v_isSharedCheck_1487_;
goto v_resetjp_1480_;
}
else
{
lean_dec(v_e_1236_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1487_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1483_; lean_object* v___x_1485_; 
v___x_1483_ = lean_box(1);
if (v_isShared_1482_ == 0)
{
lean_ctor_set_tag(v___x_1481_, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1483_);
v___x_1485_ = v___x_1481_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
default: 
{
lean_object* v___x_1489_; 
v___x_1489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1489_, 0, v_e_1236_);
return v___x_1489_;
}
}
v___jp_1244_:
{
uint8_t v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1247_ = 1;
v___x_1248_ = lean_st_ref_get(v___y_1246_);
v___x_1249_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1248_, v_fvarId_1245_, v___x_1247_);
lean_dec(v___x_1248_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v_fvarId_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1258_; 
v_fvarId_1250_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1252_ = v___x_1249_;
v_isShared_1253_ = v_isSharedCheck_1258_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_fvarId_1250_);
lean_dec(v___x_1249_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1258_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; lean_object* v___x_1256_; 
v___x_1254_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_1235_, v_e_1236_, v_fvarId_1250_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v___x_1254_);
v___x_1256_ = v___x_1252_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v___x_1254_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
else
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
lean_dec(v_e_1236_);
v___x_1259_ = lean_box(1);
v___x_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
return v___x_1260_;
}
}
v___jp_1261_:
{
lean_object* v___x_1269_; 
v___x_1269_ = l_Lean_Compiler_LCNF_Internalize_internalizeArgs(v_pu_1235_, v_args_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_);
lean_dec_ref(v_args_1262_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1278_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1272_ = v___x_1269_;
v_isShared_1273_ = v_isSharedCheck_1278_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1269_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1278_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; lean_object* v___x_1276_; 
v___x_1274_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_e_1236_, v_a_1270_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1274_);
v___x_1276_ = v___x_1272_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v___x_1274_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
else
{
lean_object* v_a_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1286_; 
lean_dec(v_e_1236_);
v_a_1279_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1281_ = v___x_1269_;
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_a_1279_);
lean_dec(v___x_1269_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1284_; 
if (v_isShared_1282_ == 0)
{
v___x_1284_ = v___x_1281_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_a_1279_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeLetValue___boxed(lean_object* v_pu_1490_, lean_object* v_e_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_){
_start:
{
uint8_t v_pu_boxed_1499_; uint8_t v_a_boxed_1500_; lean_object* v_res_1501_; 
v_pu_boxed_1499_ = lean_unbox(v_pu_1490_);
v_a_boxed_1500_ = lean_unbox(v_a_1492_);
v_res_1501_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeLetValue(v_pu_boxed_1499_, v_e_1491_, v_a_boxed_1500_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_, v_a_1497_);
lean_dec(v_a_1497_);
lean_dec_ref(v_a_1496_);
lean_dec(v_a_1495_);
lean_dec_ref(v_a_1494_);
lean_dec(v_a_1493_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeLetDecl(uint8_t v_pu_1502_, lean_object* v_decl_1503_, uint8_t v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v_fvarId_1511_; lean_object* v_binderName_1512_; lean_object* v_type_1513_; lean_object* v_value_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1572_; 
v_fvarId_1511_ = lean_ctor_get(v_decl_1503_, 0);
v_binderName_1512_ = lean_ctor_get(v_decl_1503_, 1);
v_type_1513_ = lean_ctor_get(v_decl_1503_, 2);
v_value_1514_ = lean_ctor_get(v_decl_1503_, 3);
v_isSharedCheck_1572_ = !lean_is_exclusive(v_decl_1503_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1516_ = v_decl_1503_;
v_isShared_1517_ = v_isSharedCheck_1572_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_value_1514_);
lean_inc(v_type_1513_);
lean_inc(v_binderName_1512_);
lean_inc(v_fvarId_1511_);
lean_dec(v_decl_1503_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1572_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1518_; lean_object* v_a_1519_; lean_object* v___x_1520_; 
v___x_1518_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName___redArg(v_binderName_1512_, v_a_1504_, v_a_1507_);
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
lean_inc(v_a_1519_);
lean_dec_ref(v___x_1518_);
v___x_1520_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr(v_pu_1502_, v_type_1513_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1522_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_a_1521_);
lean_dec_ref_known(v___x_1520_, 1);
v___x_1522_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeLetValue(v_pu_1502_, v_value_1514_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; lean_object* v___x_1524_; 
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_a_1523_);
lean_dec_ref_known(v___x_1522_, 1);
v___x_1524_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___redArg(v_fvarId_1511_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1547_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1527_ = v___x_1524_;
v_isShared_1528_ = v_isSharedCheck_1547_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1524_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1547_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 3, v_a_1523_);
lean_ctor_set(v___x_1516_, 2, v_a_1521_);
lean_ctor_set(v___x_1516_, 1, v_a_1519_);
lean_ctor_set(v___x_1516_, 0, v_a_1525_);
v___x_1530_ = v___x_1516_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1525_);
lean_ctor_set(v_reuseFailAlloc_1546_, 1, v_a_1519_);
lean_ctor_set(v_reuseFailAlloc_1546_, 2, v_a_1521_);
lean_ctor_set(v_reuseFailAlloc_1546_, 3, v_a_1523_);
v___x_1530_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
lean_object* v___x_1531_; lean_object* v_lctx_1532_; lean_object* v_nextIdx_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1545_; 
v___x_1531_ = lean_st_ref_take(v_a_1507_);
v_lctx_1532_ = lean_ctor_get(v___x_1531_, 0);
v_nextIdx_1533_ = lean_ctor_get(v___x_1531_, 1);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1535_ = v___x_1531_;
v_isShared_1536_ = v_isSharedCheck_1545_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_nextIdx_1533_);
lean_inc(v_lctx_1532_);
lean_dec(v___x_1531_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1545_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1537_; lean_object* v___x_1539_; 
lean_inc_ref(v___x_1530_);
v___x_1537_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v_pu_1502_, v_lctx_1532_, v___x_1530_);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 0, v___x_1537_);
v___x_1539_ = v___x_1535_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v___x_1537_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v_nextIdx_1533_);
v___x_1539_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
lean_object* v___x_1540_; lean_object* v___x_1542_; 
v___x_1540_ = lean_st_ref_put(v_a_1507_, v___x_1539_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 0, v___x_1530_);
v___x_1542_ = v___x_1527_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1530_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
}
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
lean_dec(v_a_1523_);
lean_dec(v_a_1521_);
lean_dec(v_a_1519_);
lean_del_object(v___x_1516_);
v_a_1548_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1524_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1524_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_dec(v_a_1521_);
lean_dec(v_a_1519_);
lean_del_object(v___x_1516_);
lean_dec(v_fvarId_1511_);
v_a_1556_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1522_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1522_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
else
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
lean_dec(v_a_1519_);
lean_del_object(v___x_1516_);
lean_dec(v_value_1514_);
lean_dec(v_fvarId_1511_);
v_a_1564_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v___x_1520_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1520_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeLetDecl___boxed(lean_object* v_pu_1573_, lean_object* v_decl_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_){
_start:
{
uint8_t v_pu_boxed_1582_; uint8_t v_a_boxed_1583_; lean_object* v_res_1584_; 
v_pu_boxed_1582_ = lean_unbox(v_pu_1573_);
v_a_boxed_1583_ = lean_unbox(v_a_1575_);
v_res_1584_ = l_Lean_Compiler_LCNF_Internalize_internalizeLetDecl(v_pu_boxed_1582_, v_decl_1574_, v_a_boxed_1583_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_, v_a_1580_);
lean_dec(v_a_1580_);
lean_dec_ref(v_a_1579_);
lean_dec(v_a_1578_);
lean_dec_ref(v_a_1577_);
lean_dec(v_a_1576_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeFunDecl_spec__0(uint8_t v_pu_1585_, size_t v_sz_1586_, size_t v_i_1587_, lean_object* v_bs_1588_, uint8_t v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_){
_start:
{
uint8_t v___x_1596_; 
v___x_1596_ = lean_usize_dec_lt(v_i_1587_, v_sz_1586_);
if (v___x_1596_ == 0)
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1597_ = l_unsafeCast___redArg(v_bs_1588_);
lean_dec_ref(v_bs_1588_);
v___x_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1597_);
return v___x_1598_;
}
else
{
lean_object* v_v_1599_; lean_object* v___x_1600_; lean_object* v_bs_x27_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v_v_1599_ = lean_array_uget(v_bs_1588_, v_i_1587_);
v___x_1600_ = lean_unsigned_to_nat(0u);
v_bs_x27_1601_ = lean_array_uset(v_bs_1588_, v_i_1587_, v___x_1600_);
v___x_1602_ = l_unsafeCast___redArg(v_v_1599_);
lean_dec(v_v_1599_);
v___x_1603_ = l_Lean_Compiler_LCNF_Internalize_internalizeParam(v_pu_1585_, v___x_1602_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_a_1604_; size_t v___x_1605_; size_t v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v_a_1604_ = lean_ctor_get(v___x_1603_, 0);
lean_inc(v_a_1604_);
lean_dec_ref_known(v___x_1603_, 1);
v___x_1605_ = ((size_t)1ULL);
v___x_1606_ = lean_usize_add(v_i_1587_, v___x_1605_);
v___x_1607_ = l_unsafeCast___redArg(v_a_1604_);
lean_dec(v_a_1604_);
v___x_1608_ = lean_array_uset(v_bs_x27_1601_, v_i_1587_, v___x_1607_);
v_i_1587_ = v___x_1606_;
v_bs_1588_ = v___x_1608_;
goto _start;
}
else
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
lean_dec_ref(v_bs_x27_1601_);
v_a_1610_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1612_ = v___x_1603_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1603_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeFunDecl_spec__0___boxed(lean_object* v_pu_1618_, lean_object* v_sz_1619_, lean_object* v_i_1620_, lean_object* v_bs_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
uint8_t v_pu_boxed_1629_; size_t v_sz_boxed_1630_; size_t v_i_boxed_1631_; uint8_t v___y_26930__boxed_1632_; lean_object* v_res_1633_; 
v_pu_boxed_1629_ = lean_unbox(v_pu_1618_);
v_sz_boxed_1630_ = lean_unbox_usize(v_sz_1619_);
lean_dec(v_sz_1619_);
v_i_boxed_1631_ = lean_unbox_usize(v_i_1620_);
lean_dec(v_i_1620_);
v___y_26930__boxed_1632_ = lean_unbox(v___y_1622_);
v_res_1633_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeFunDecl_spec__0(v_pu_boxed_1629_, v_sz_boxed_1630_, v_i_boxed_1631_, v_bs_1621_, v___y_26930__boxed_1632_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
lean_dec(v___y_1623_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeCode_spec__2(uint8_t v_pu_1634_, size_t v_sz_1635_, size_t v_i_1636_, lean_object* v_bs_1637_, uint8_t v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
uint8_t v___x_1645_; 
v___x_1645_ = lean_usize_dec_lt(v_i_1636_, v_sz_1635_);
if (v___x_1645_ == 0)
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1646_ = l_unsafeCast___redArg(v_bs_1637_);
lean_dec_ref(v_bs_1637_);
v___x_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
return v___x_1647_;
}
else
{
lean_object* v_v_1648_; lean_object* v___x_1649_; lean_object* v_bs_x27_1650_; lean_object* v_a_1652_; lean_object* v___x_1658_; 
v_v_1648_ = lean_array_uget(v_bs_1637_, v_i_1636_);
v___x_1649_ = lean_unsigned_to_nat(0u);
v_bs_x27_1650_ = lean_array_uset(v_bs_1637_, v_i_1636_, v___x_1649_);
v___x_1658_ = l_unsafeCast___redArg(v_v_1648_);
lean_dec(v_v_1648_);
switch(lean_obj_tag(v___x_1658_))
{
case 0:
{
lean_object* v_ctorName_1659_; lean_object* v_params_1660_; lean_object* v_code_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1696_; 
v_ctorName_1659_ = lean_ctor_get(v___x_1658_, 0);
v_params_1660_ = lean_ctor_get(v___x_1658_, 1);
v_code_1661_ = lean_ctor_get(v___x_1658_, 2);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1663_ = v___x_1658_;
v_isShared_1664_ = v_isSharedCheck_1696_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_code_1661_);
lean_inc(v_params_1660_);
lean_inc(v_ctorName_1659_);
lean_dec(v___x_1658_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1696_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
size_t v_sz_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_26929__overap_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v_sz_1665_ = lean_array_size(v_params_1660_);
v___x_1666_ = l_unsafeCast___redArg(v_params_1660_);
lean_dec_ref(v_params_1660_);
v___x_1667_ = lean_box(v_pu_1634_);
v___x_1668_ = lean_box_usize(v_sz_1665_);
v___x_1669_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeArgs___boxed__const__1));
v___x_1670_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeFunDecl_spec__0___boxed), 11, 4);
lean_closure_set(v___x_1670_, 0, v___x_1667_);
lean_closure_set(v___x_1670_, 1, v___x_1668_);
lean_closure_set(v___x_1670_, 2, v___x_1669_);
lean_closure_set(v___x_1670_, 3, v___x_1666_);
v___x_26929__overap_1671_ = l_unsafeCast___redArg(v___x_1670_);
lean_dec_ref(v___x_1670_);
v___x_1672_ = lean_box(v___y_1638_);
lean_inc(v___y_1643_);
lean_inc_ref(v___y_1642_);
lean_inc(v___y_1641_);
lean_inc_ref(v___y_1640_);
lean_inc(v___y_1639_);
v___x_1673_ = lean_apply_7(v___x_26929__overap_1671_, v___x_1672_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, lean_box(0));
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; lean_object* v___x_1675_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v___x_1673_, 1);
v___x_1675_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1634_, v_code_1661_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
if (lean_obj_tag(v___x_1675_) == 0)
{
lean_object* v_a_1676_; lean_object* v___x_1678_; 
v_a_1676_ = lean_ctor_get(v___x_1675_, 0);
lean_inc(v_a_1676_);
lean_dec_ref_known(v___x_1675_, 1);
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 2, v_a_1676_);
lean_ctor_set(v___x_1663_, 1, v_a_1674_);
v___x_1678_ = v___x_1663_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_ctorName_1659_);
lean_ctor_set(v_reuseFailAlloc_1679_, 1, v_a_1674_);
lean_ctor_set(v_reuseFailAlloc_1679_, 2, v_a_1676_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
v_a_1652_ = v___x_1678_;
goto v___jp_1651_;
}
}
else
{
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1687_; 
lean_dec(v_a_1674_);
lean_del_object(v___x_1663_);
lean_dec(v_ctorName_1659_);
lean_dec_ref(v_bs_x27_1650_);
v_a_1680_ = lean_ctor_get(v___x_1675_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1675_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1682_ = v___x_1675_;
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1675_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1685_; 
if (v_isShared_1683_ == 0)
{
v___x_1685_ = v___x_1682_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_a_1680_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
}
else
{
lean_object* v_a_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1695_; 
lean_del_object(v___x_1663_);
lean_dec_ref(v_code_1661_);
lean_dec(v_ctorName_1659_);
lean_dec_ref(v_bs_x27_1650_);
v_a_1688_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1690_ = v___x_1673_;
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_a_1688_);
lean_dec(v___x_1673_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1693_; 
if (v_isShared_1691_ == 0)
{
v___x_1693_ = v___x_1690_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_a_1688_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
}
}
case 1:
{
lean_object* v_info_1697_; lean_object* v_code_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1715_; 
v_info_1697_ = lean_ctor_get(v___x_1658_, 0);
v_code_1698_ = lean_ctor_get(v___x_1658_, 1);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1700_ = v___x_1658_;
v_isShared_1701_ = v_isSharedCheck_1715_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_code_1698_);
lean_inc(v_info_1697_);
lean_dec(v___x_1658_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1715_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1702_; 
v___x_1702_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1634_, v_code_1698_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v_a_1703_; lean_object* v___x_1705_; 
v_a_1703_ = lean_ctor_get(v___x_1702_, 0);
lean_inc(v_a_1703_);
lean_dec_ref_known(v___x_1702_, 1);
if (v_isShared_1701_ == 0)
{
lean_ctor_set(v___x_1700_, 1, v_a_1703_);
v___x_1705_ = v___x_1700_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_info_1697_);
lean_ctor_set(v_reuseFailAlloc_1706_, 1, v_a_1703_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
v_a_1652_ = v___x_1705_;
goto v___jp_1651_;
}
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1714_; 
lean_del_object(v___x_1700_);
lean_dec_ref(v_info_1697_);
lean_dec_ref(v_bs_x27_1650_);
v_a_1707_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1709_ = v___x_1702_;
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1702_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
}
default: 
{
lean_object* v_code_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1733_; 
v_code_1716_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1718_ = v___x_1658_;
v_isShared_1719_ = v_isSharedCheck_1733_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_code_1716_);
lean_dec(v___x_1658_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1733_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1634_, v_code_1716_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v_a_1721_; lean_object* v___x_1723_; 
v_a_1721_ = lean_ctor_get(v___x_1720_, 0);
lean_inc(v_a_1721_);
lean_dec_ref_known(v___x_1720_, 1);
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v_a_1721_);
v___x_1723_ = v___x_1718_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_a_1721_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
v_a_1652_ = v___x_1723_;
goto v___jp_1651_;
}
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
lean_del_object(v___x_1718_);
lean_dec_ref(v_bs_x27_1650_);
v_a_1725_ = lean_ctor_get(v___x_1720_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1720_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1720_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
}
}
v___jp_1651_:
{
size_t v___x_1653_; size_t v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1653_ = ((size_t)1ULL);
v___x_1654_ = lean_usize_add(v_i_1636_, v___x_1653_);
v___x_1655_ = l_unsafeCast___redArg(v_a_1652_);
lean_dec_ref(v_a_1652_);
v___x_1656_ = lean_array_uset(v_bs_x27_1650_, v_i_1636_, v___x_1655_);
v_i_1636_ = v___x_1654_;
v_bs_1637_ = v___x_1656_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeCode_spec__2___boxed(lean_object* v_pu_1734_, lean_object* v_sz_1735_, lean_object* v_i_1736_, lean_object* v_bs_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
uint8_t v_pu_boxed_1745_; size_t v_sz_boxed_1746_; size_t v_i_boxed_1747_; uint8_t v___y_27026__boxed_1748_; lean_object* v_res_1749_; 
v_pu_boxed_1745_ = lean_unbox(v_pu_1734_);
v_sz_boxed_1746_ = lean_unbox_usize(v_sz_1735_);
lean_dec(v_sz_1735_);
v_i_boxed_1747_ = lean_unbox_usize(v_i_1736_);
lean_dec(v_i_1736_);
v___y_27026__boxed_1748_ = lean_unbox(v___y_1738_);
v_res_1749_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeCode_spec__2(v_pu_boxed_1745_, v_sz_boxed_1746_, v_i_boxed_1747_, v_bs_1737_, v___y_27026__boxed_1748_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec(v___y_1739_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCode(uint8_t v_pu_1750_, lean_object* v_code_1751_, uint8_t v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_){
_start:
{
switch(lean_obj_tag(v_code_1751_))
{
case 0:
{
lean_object* v_decl_1759_; lean_object* v_k_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1786_; 
v_decl_1759_ = lean_ctor_get(v_code_1751_, 0);
v_k_1760_ = lean_ctor_get(v_code_1751_, 1);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1762_ = v_code_1751_;
v_isShared_1763_ = v_isSharedCheck_1786_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_k_1760_);
lean_inc(v_decl_1759_);
lean_dec(v_code_1751_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1786_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1764_; 
v___x_1764_ = l_Lean_Compiler_LCNF_Internalize_internalizeLetDecl(v_pu_1750_, v_decl_1759_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1766_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
lean_inc(v_a_1765_);
lean_dec_ref_known(v___x_1764_, 1);
v___x_1766_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1750_, v_k_1760_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1777_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1769_ = v___x_1766_;
v_isShared_1770_ = v_isSharedCheck_1777_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_a_1767_);
lean_dec(v___x_1766_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1777_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1772_; 
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 1, v_a_1767_);
lean_ctor_set(v___x_1762_, 0, v_a_1765_);
v___x_1772_ = v___x_1762_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_a_1765_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v_a_1767_);
v___x_1772_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
lean_object* v___x_1774_; 
if (v_isShared_1770_ == 0)
{
lean_ctor_set(v___x_1769_, 0, v___x_1772_);
v___x_1774_ = v___x_1769_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v___x_1772_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
else
{
lean_dec(v_a_1765_);
lean_del_object(v___x_1762_);
return v___x_1766_;
}
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
lean_del_object(v___x_1762_);
lean_dec_ref(v_k_1760_);
v_a_1778_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1764_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1764_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1778_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
}
case 1:
{
lean_object* v_decl_1787_; lean_object* v_k_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1814_; 
v_decl_1787_ = lean_ctor_get(v_code_1751_, 0);
v_k_1788_ = lean_ctor_get(v_code_1751_, 1);
v_isSharedCheck_1814_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1790_ = v_code_1751_;
v_isShared_1791_ = v_isSharedCheck_1814_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_k_1788_);
lean_inc(v_decl_1787_);
lean_dec(v_code_1751_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1814_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1792_; 
v___x_1792_ = l_Lean_Compiler_LCNF_Internalize_internalizeFunDecl(v_pu_1750_, v_decl_1787_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; lean_object* v___x_1794_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1792_, 1);
v___x_1794_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1750_, v_k_1788_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1805_; 
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1797_ = v___x_1794_;
v_isShared_1798_ = v_isSharedCheck_1805_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1794_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1805_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1791_ == 0)
{
lean_ctor_set(v___x_1790_, 1, v_a_1795_);
lean_ctor_set(v___x_1790_, 0, v_a_1793_);
v___x_1800_ = v___x_1790_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1793_);
lean_ctor_set(v_reuseFailAlloc_1804_, 1, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
lean_object* v___x_1802_; 
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 0, v___x_1800_);
v___x_1802_ = v___x_1797_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v___x_1800_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
}
else
{
lean_dec(v_a_1793_);
lean_del_object(v___x_1790_);
return v___x_1794_;
}
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
lean_del_object(v___x_1790_);
lean_dec_ref(v_k_1788_);
v_a_1806_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___x_1792_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___x_1792_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
}
case 2:
{
lean_object* v_decl_1815_; lean_object* v_k_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1842_; 
v_decl_1815_ = lean_ctor_get(v_code_1751_, 0);
v_k_1816_ = lean_ctor_get(v_code_1751_, 1);
v_isSharedCheck_1842_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1818_ = v_code_1751_;
v_isShared_1819_ = v_isSharedCheck_1842_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_k_1816_);
lean_inc(v_decl_1815_);
lean_dec(v_code_1751_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1842_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1820_; 
v___x_1820_ = l_Lean_Compiler_LCNF_Internalize_internalizeFunDecl(v_pu_1750_, v_decl_1815_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; lean_object* v___x_1822_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1821_);
lean_dec_ref_known(v___x_1820_, 1);
v___x_1822_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1750_, v_k_1816_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1833_; 
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1825_ = v___x_1822_;
v_isShared_1826_ = v_isSharedCheck_1833_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1822_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1833_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 1, v_a_1823_);
lean_ctor_set(v___x_1818_, 0, v_a_1821_);
v___x_1828_ = v___x_1818_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1821_);
lean_ctor_set(v_reuseFailAlloc_1832_, 1, v_a_1823_);
v___x_1828_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
lean_object* v___x_1830_; 
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 0, v___x_1828_);
v___x_1830_ = v___x_1825_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v___x_1828_);
v___x_1830_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
return v___x_1830_;
}
}
}
}
else
{
lean_dec(v_a_1821_);
lean_del_object(v___x_1818_);
return v___x_1822_;
}
}
else
{
lean_object* v_a_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1841_; 
lean_del_object(v___x_1818_);
lean_dec_ref(v_k_1816_);
v_a_1834_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1836_ = v___x_1820_;
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_a_1834_);
lean_dec(v___x_1820_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1839_; 
if (v_isShared_1837_ == 0)
{
v___x_1839_ = v___x_1836_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_a_1834_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
return v___x_1839_;
}
}
}
}
}
case 3:
{
lean_object* v_fvarId_1843_; lean_object* v_args_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1873_; 
v_fvarId_1843_ = lean_ctor_get(v_code_1751_, 0);
v_args_1844_ = lean_ctor_get(v_code_1751_, 1);
v_isSharedCheck_1873_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1846_ = v_code_1751_;
v_isShared_1847_ = v_isSharedCheck_1873_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_args_1844_);
lean_inc(v_fvarId_1843_);
lean_dec(v_code_1751_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1873_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
uint8_t v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1848_ = 1;
v___x_1849_ = lean_st_ref_get(v_a_1753_);
v___x_1850_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1849_, v_fvarId_1843_, v___x_1848_);
lean_dec(v___x_1849_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_fvarId_1851_; lean_object* v___x_1852_; 
v_fvarId_1851_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_fvarId_1851_);
lean_dec_ref_known(v___x_1850_, 1);
v___x_1852_ = l_Lean_Compiler_LCNF_Internalize_internalizeArgs(v_pu_1750_, v_args_1844_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
lean_dec_ref(v_args_1844_);
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1863_; 
v_a_1853_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1855_ = v___x_1852_;
v_isShared_1856_ = v_isSharedCheck_1863_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1852_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1863_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 1, v_a_1853_);
lean_ctor_set(v___x_1846_, 0, v_fvarId_1851_);
v___x_1858_ = v___x_1846_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_fvarId_1851_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v_a_1853_);
v___x_1858_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
lean_object* v___x_1860_; 
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v___x_1858_);
v___x_1860_ = v___x_1855_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
lean_dec(v_fvarId_1851_);
lean_del_object(v___x_1846_);
v_a_1864_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1866_ = v___x_1852_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1852_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
else
{
lean_object* v___x_1872_; 
lean_del_object(v___x_1846_);
lean_dec_ref(v_args_1844_);
v___x_1872_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_1872_;
}
}
}
case 4:
{
lean_object* v_cases_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1932_; 
v_cases_1874_ = lean_ctor_get(v_code_1751_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1876_ = v_code_1751_;
v_isShared_1877_ = v_isSharedCheck_1932_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_cases_1874_);
lean_dec(v_code_1751_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1932_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v_typeName_1878_; lean_object* v_resultType_1879_; lean_object* v_discr_1880_; lean_object* v_alts_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1931_; 
v_typeName_1878_ = lean_ctor_get(v_cases_1874_, 0);
v_resultType_1879_ = lean_ctor_get(v_cases_1874_, 1);
v_discr_1880_ = lean_ctor_get(v_cases_1874_, 2);
v_alts_1881_ = lean_ctor_get(v_cases_1874_, 3);
v_isSharedCheck_1931_ = !lean_is_exclusive(v_cases_1874_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1883_ = v_cases_1874_;
v_isShared_1884_ = v_isSharedCheck_1931_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_alts_1881_);
lean_inc(v_discr_1880_);
lean_inc(v_resultType_1879_);
lean_inc(v_typeName_1878_);
lean_dec(v_cases_1874_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1931_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
uint8_t v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1885_ = 1;
v___x_1886_ = lean_st_ref_get(v_a_1753_);
v___x_1887_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1886_, v_discr_1880_, v___x_1885_);
lean_dec(v___x_1886_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v_fvarId_1888_; lean_object* v___x_1889_; 
v_fvarId_1888_ = lean_ctor_get(v___x_1887_, 0);
lean_inc(v_fvarId_1888_);
lean_dec_ref_known(v___x_1887_, 1);
v___x_1889_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr(v_pu_1750_, v_resultType_1879_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v_a_1890_; size_t v_sz_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_26908__overap_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v_a_1890_ = lean_ctor_get(v___x_1889_, 0);
lean_inc(v_a_1890_);
lean_dec_ref_known(v___x_1889_, 1);
v_sz_1891_ = lean_array_size(v_alts_1881_);
v___x_1892_ = l_unsafeCast___redArg(v_alts_1881_);
lean_dec_ref(v_alts_1881_);
v___x_1893_ = lean_box(v_pu_1750_);
v___x_1894_ = lean_box_usize(v_sz_1891_);
v___x_1895_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeArgs___boxed__const__1));
v___x_1896_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeCode_spec__2___boxed), 11, 4);
lean_closure_set(v___x_1896_, 0, v___x_1893_);
lean_closure_set(v___x_1896_, 1, v___x_1894_);
lean_closure_set(v___x_1896_, 2, v___x_1895_);
lean_closure_set(v___x_1896_, 3, v___x_1892_);
v___x_26908__overap_1897_ = l_unsafeCast___redArg(v___x_1896_);
lean_dec_ref(v___x_1896_);
v___x_1898_ = lean_box(v_a_1752_);
lean_inc(v_a_1757_);
lean_inc_ref(v_a_1756_);
lean_inc(v_a_1755_);
lean_inc_ref(v_a_1754_);
lean_inc(v_a_1753_);
v___x_1899_ = lean_apply_7(v___x_26908__overap_1897_, v___x_1898_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_, lean_box(0));
if (lean_obj_tag(v___x_1899_) == 0)
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1913_; 
v_a_1900_ = lean_ctor_get(v___x_1899_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1902_ = v___x_1899_;
v_isShared_1903_ = v_isSharedCheck_1913_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1899_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1913_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1884_ == 0)
{
lean_ctor_set(v___x_1883_, 3, v_a_1900_);
lean_ctor_set(v___x_1883_, 2, v_fvarId_1888_);
lean_ctor_set(v___x_1883_, 1, v_a_1890_);
v___x_1905_ = v___x_1883_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_typeName_1878_);
lean_ctor_set(v_reuseFailAlloc_1912_, 1, v_a_1890_);
lean_ctor_set(v_reuseFailAlloc_1912_, 2, v_fvarId_1888_);
lean_ctor_set(v_reuseFailAlloc_1912_, 3, v_a_1900_);
v___x_1905_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
lean_object* v___x_1907_; 
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v___x_1905_);
v___x_1907_ = v___x_1876_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1905_);
v___x_1907_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
lean_object* v___x_1909_; 
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 0, v___x_1907_);
v___x_1909_ = v___x_1902_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1907_);
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
else
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
lean_dec(v_a_1890_);
lean_dec(v_fvarId_1888_);
lean_del_object(v___x_1883_);
lean_dec(v_typeName_1878_);
lean_del_object(v___x_1876_);
v_a_1914_ = lean_ctor_get(v___x_1899_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1916_ = v___x_1899_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1899_);
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
else
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
lean_dec(v_fvarId_1888_);
lean_del_object(v___x_1883_);
lean_dec_ref(v_alts_1881_);
lean_dec(v_typeName_1878_);
lean_del_object(v___x_1876_);
v_a_1922_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1889_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1889_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1927_; 
if (v_isShared_1925_ == 0)
{
v___x_1927_ = v___x_1924_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_a_1922_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
}
else
{
lean_object* v___x_1930_; 
lean_del_object(v___x_1883_);
lean_dec_ref(v_alts_1881_);
lean_dec_ref(v_resultType_1879_);
lean_dec(v_typeName_1878_);
lean_del_object(v___x_1876_);
v___x_1930_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_1930_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1952_; 
v_fvarId_1933_ = lean_ctor_get(v_code_1751_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1935_ = v_code_1751_;
v_isShared_1936_ = v_isSharedCheck_1952_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_fvarId_1933_);
lean_dec(v_code_1751_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1952_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
uint8_t v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1937_ = 1;
v___x_1938_ = lean_st_ref_get(v_a_1753_);
v___x_1939_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1938_, v_fvarId_1933_, v___x_1937_);
lean_dec(v___x_1938_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_fvarId_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1950_; 
v_fvarId_1940_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1942_ = v___x_1939_;
v_isShared_1943_ = v_isSharedCheck_1950_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_fvarId_1940_);
lean_dec(v___x_1939_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1950_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 0, v_fvarId_1940_);
v___x_1945_ = v___x_1935_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_fvarId_1940_);
v___x_1945_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
lean_object* v___x_1947_; 
if (v_isShared_1943_ == 0)
{
lean_ctor_set(v___x_1942_, 0, v___x_1945_);
v___x_1947_ = v___x_1942_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v___x_1945_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
else
{
lean_object* v___x_1951_; 
lean_del_object(v___x_1935_);
v___x_1951_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_1951_;
}
}
}
case 6:
{
lean_object* v_type_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1977_; 
v_type_1953_ = lean_ctor_get(v_code_1751_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1955_ = v_code_1751_;
v_isShared_1956_ = v_isSharedCheck_1977_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_type_1953_);
lean_dec(v_code_1751_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1977_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1957_; 
v___x_1957_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr(v_pu_1750_, v_type_1953_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1968_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1960_ = v___x_1957_;
v_isShared_1961_ = v_isSharedCheck_1968_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1957_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1968_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 0, v_a_1958_);
v___x_1963_ = v___x_1955_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
lean_object* v___x_1965_; 
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 0, v___x_1963_);
v___x_1965_ = v___x_1960_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
else
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
lean_del_object(v___x_1955_);
v_a_1969_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___x_1957_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1957_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1972_ == 0)
{
v___x_1974_ = v___x_1971_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1969_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_1978_; lean_object* v_i_1979_; lean_object* v_y_1980_; lean_object* v_k_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_2004_; 
v_fvarId_1978_ = lean_ctor_get(v_code_1751_, 0);
v_i_1979_ = lean_ctor_get(v_code_1751_, 1);
v_y_1980_ = lean_ctor_get(v_code_1751_, 2);
v_k_1981_ = lean_ctor_get(v_code_1751_, 3);
v_isSharedCheck_2004_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1983_ = v_code_1751_;
v_isShared_1984_ = v_isSharedCheck_2004_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_k_1981_);
lean_inc(v_y_1980_);
lean_inc(v_i_1979_);
lean_inc(v_fvarId_1978_);
lean_dec(v_code_1751_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_2004_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
uint8_t v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___x_1985_ = 1;
v___x_1986_ = lean_st_ref_get(v_a_1753_);
v___x_1987_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_1986_, v_fvarId_1978_, v___x_1985_);
lean_dec(v___x_1986_);
if (lean_obj_tag(v___x_1987_) == 0)
{
lean_object* v_fvarId_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
v_fvarId_1988_ = lean_ctor_get(v___x_1987_, 0);
lean_inc(v_fvarId_1988_);
lean_dec_ref_known(v___x_1987_, 1);
v___x_1989_ = lean_st_ref_get(v_a_1753_);
v___x_1990_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(v_pu_1750_, v___x_1989_, v_y_1980_, v___x_1985_);
lean_dec(v___x_1989_);
v___x_1991_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1750_, v_k_1981_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2002_; 
v_a_1992_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1994_ = v___x_1991_;
v_isShared_1995_ = v_isSharedCheck_2002_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1991_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2002_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 3, v_a_1992_);
lean_ctor_set(v___x_1983_, 2, v___x_1990_);
lean_ctor_set(v___x_1983_, 0, v_fvarId_1988_);
v___x_1997_ = v___x_1983_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_fvarId_1988_);
lean_ctor_set(v_reuseFailAlloc_2001_, 1, v_i_1979_);
lean_ctor_set(v_reuseFailAlloc_2001_, 2, v___x_1990_);
lean_ctor_set(v_reuseFailAlloc_2001_, 3, v_a_1992_);
v___x_1997_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
lean_object* v___x_1999_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_1997_);
v___x_1999_ = v___x_1994_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1997_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
else
{
lean_dec(v___x_1990_);
lean_dec(v_fvarId_1988_);
lean_del_object(v___x_1983_);
lean_dec(v_i_1979_);
return v___x_1991_;
}
}
else
{
lean_object* v___x_2003_; 
lean_del_object(v___x_1983_);
lean_dec_ref(v_k_1981_);
lean_dec(v_y_1980_);
lean_dec(v_i_1979_);
v___x_2003_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_2003_;
}
}
}
case 8:
{
lean_object* v_fvarId_2005_; lean_object* v_i_2006_; lean_object* v_y_2007_; lean_object* v_k_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2033_; 
v_fvarId_2005_ = lean_ctor_get(v_code_1751_, 0);
v_i_2006_ = lean_ctor_get(v_code_1751_, 1);
v_y_2007_ = lean_ctor_get(v_code_1751_, 2);
v_k_2008_ = lean_ctor_get(v_code_1751_, 3);
v_isSharedCheck_2033_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2010_ = v_code_1751_;
v_isShared_2011_ = v_isSharedCheck_2033_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_k_2008_);
lean_inc(v_y_2007_);
lean_inc(v_i_2006_);
lean_inc(v_fvarId_2005_);
lean_dec(v_code_1751_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2033_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
uint8_t v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2012_ = 1;
v___x_2013_ = lean_st_ref_get(v_a_1753_);
v___x_2014_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2013_, v_fvarId_2005_, v___x_2012_);
lean_dec(v___x_2013_);
if (lean_obj_tag(v___x_2014_) == 0)
{
lean_object* v_fvarId_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v_fvarId_2015_ = lean_ctor_get(v___x_2014_, 0);
lean_inc(v_fvarId_2015_);
lean_dec_ref_known(v___x_2014_, 1);
v___x_2016_ = lean_st_ref_get(v_a_1753_);
v___x_2017_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2016_, v_y_2007_, v___x_2012_);
lean_dec(v___x_2016_);
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_object* v_fvarId_2018_; lean_object* v___x_2019_; 
v_fvarId_2018_ = lean_ctor_get(v___x_2017_, 0);
lean_inc(v_fvarId_2018_);
lean_dec_ref_known(v___x_2017_, 1);
v___x_2019_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1750_, v_k_2008_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2030_; 
v_a_2020_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2030_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2022_ = v___x_2019_;
v_isShared_2023_ = v_isSharedCheck_2030_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_2019_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2030_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 3, v_a_2020_);
lean_ctor_set(v___x_2010_, 2, v_fvarId_2018_);
lean_ctor_set(v___x_2010_, 0, v_fvarId_2015_);
v___x_2025_ = v___x_2010_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_fvarId_2015_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v_i_2006_);
lean_ctor_set(v_reuseFailAlloc_2029_, 2, v_fvarId_2018_);
lean_ctor_set(v_reuseFailAlloc_2029_, 3, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2027_; 
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 0, v___x_2025_);
v___x_2027_ = v___x_2022_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v___x_2025_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
else
{
lean_dec(v_fvarId_2018_);
lean_dec(v_fvarId_2015_);
lean_del_object(v___x_2010_);
lean_dec(v_i_2006_);
return v___x_2019_;
}
}
else
{
lean_object* v___x_2031_; 
lean_dec(v_fvarId_2015_);
lean_del_object(v___x_2010_);
lean_dec_ref(v_k_2008_);
lean_dec(v_i_2006_);
v___x_2031_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_2031_;
}
}
else
{
lean_object* v___x_2032_; 
lean_del_object(v___x_2010_);
lean_dec_ref(v_k_2008_);
lean_dec(v_y_2007_);
lean_dec(v_i_2006_);
v___x_2032_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_2032_;
}
}
}
case 9:
{
lean_object* v_fvarId_2034_; lean_object* v_i_2035_; lean_object* v_offset_2036_; lean_object* v_y_2037_; lean_object* v_ty_2038_; lean_object* v_k_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2074_; 
v_fvarId_2034_ = lean_ctor_get(v_code_1751_, 0);
v_i_2035_ = lean_ctor_get(v_code_1751_, 1);
v_offset_2036_ = lean_ctor_get(v_code_1751_, 2);
v_y_2037_ = lean_ctor_get(v_code_1751_, 3);
v_ty_2038_ = lean_ctor_get(v_code_1751_, 4);
v_k_2039_ = lean_ctor_get(v_code_1751_, 5);
v_isSharedCheck_2074_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2041_ = v_code_1751_;
v_isShared_2042_ = v_isSharedCheck_2074_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_k_2039_);
lean_inc(v_ty_2038_);
lean_inc(v_y_2037_);
lean_inc(v_offset_2036_);
lean_inc(v_i_2035_);
lean_inc(v_fvarId_2034_);
lean_dec(v_code_1751_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2074_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
uint8_t v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2043_ = 1;
v___x_2044_ = lean_st_ref_get(v_a_1753_);
v___x_2045_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2044_, v_fvarId_2034_, v___x_2043_);
lean_dec(v___x_2044_);
if (lean_obj_tag(v___x_2045_) == 0)
{
lean_object* v_fvarId_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v_fvarId_2046_ = lean_ctor_get(v___x_2045_, 0);
lean_inc(v_fvarId_2046_);
lean_dec_ref_known(v___x_2045_, 1);
v___x_2047_ = lean_st_ref_get(v_a_1753_);
v___x_2048_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2047_, v_y_2037_, v___x_2043_);
lean_dec(v___x_2047_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v_fvarId_2049_; lean_object* v___x_2050_; 
v_fvarId_2049_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_fvarId_2049_);
lean_dec_ref_known(v___x_2048_, 1);
v___x_2050_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr(v_pu_1750_, v_ty_2038_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; lean_object* v___x_2052_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_a_2051_);
lean_dec_ref_known(v___x_2050_, 1);
v___x_2052_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1750_, v_k_2039_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_2052_) == 0)
{
lean_object* v_a_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2063_; 
v_a_2053_ = lean_ctor_get(v___x_2052_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2052_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2055_ = v___x_2052_;
v_isShared_2056_ = v_isSharedCheck_2063_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_a_2053_);
lean_dec(v___x_2052_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2063_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2058_; 
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 5, v_a_2053_);
lean_ctor_set(v___x_2041_, 4, v_a_2051_);
lean_ctor_set(v___x_2041_, 3, v_fvarId_2049_);
lean_ctor_set(v___x_2041_, 0, v_fvarId_2046_);
v___x_2058_ = v___x_2041_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_fvarId_2046_);
lean_ctor_set(v_reuseFailAlloc_2062_, 1, v_i_2035_);
lean_ctor_set(v_reuseFailAlloc_2062_, 2, v_offset_2036_);
lean_ctor_set(v_reuseFailAlloc_2062_, 3, v_fvarId_2049_);
lean_ctor_set(v_reuseFailAlloc_2062_, 4, v_a_2051_);
lean_ctor_set(v_reuseFailAlloc_2062_, 5, v_a_2053_);
v___x_2058_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2060_; 
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 0, v___x_2058_);
v___x_2060_ = v___x_2055_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___x_2058_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
else
{
lean_dec(v_a_2051_);
lean_dec(v_fvarId_2049_);
lean_dec(v_fvarId_2046_);
lean_del_object(v___x_2041_);
lean_dec(v_offset_2036_);
lean_dec(v_i_2035_);
return v___x_2052_;
}
}
else
{
lean_object* v_a_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2071_; 
lean_dec(v_fvarId_2049_);
lean_dec(v_fvarId_2046_);
lean_del_object(v___x_2041_);
lean_dec_ref(v_k_2039_);
lean_dec(v_offset_2036_);
lean_dec(v_i_2035_);
v_a_2064_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2066_ = v___x_2050_;
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_a_2064_);
lean_dec(v___x_2050_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2069_; 
if (v_isShared_2067_ == 0)
{
v___x_2069_ = v___x_2066_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_a_2064_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
else
{
lean_object* v___x_2072_; 
lean_dec(v_fvarId_2046_);
lean_del_object(v___x_2041_);
lean_dec_ref(v_k_2039_);
lean_dec_ref(v_ty_2038_);
lean_dec(v_offset_2036_);
lean_dec(v_i_2035_);
v___x_2072_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_2072_;
}
}
else
{
lean_object* v___x_2073_; 
lean_del_object(v___x_2041_);
lean_dec_ref(v_k_2039_);
lean_dec_ref(v_ty_2038_);
lean_dec(v_y_2037_);
lean_dec(v_offset_2036_);
lean_dec(v_i_2035_);
v___x_2073_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_2073_;
}
}
}
case 10:
{
lean_object* v_fvarId_2075_; lean_object* v_cidx_2076_; lean_object* v_k_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2098_; 
v_fvarId_2075_ = lean_ctor_get(v_code_1751_, 0);
v_cidx_2076_ = lean_ctor_get(v_code_1751_, 1);
v_k_2077_ = lean_ctor_get(v_code_1751_, 2);
v_isSharedCheck_2098_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2079_ = v_code_1751_;
v_isShared_2080_ = v_isSharedCheck_2098_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_k_2077_);
lean_inc(v_cidx_2076_);
lean_inc(v_fvarId_2075_);
lean_dec(v_code_1751_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2098_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
uint8_t v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___x_2081_ = 1;
v___x_2082_ = lean_st_ref_get(v_a_1753_);
v___x_2083_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2082_, v_fvarId_2075_, v___x_2081_);
lean_dec(v___x_2082_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v_fvarId_2084_; lean_object* v___x_2085_; 
v_fvarId_2084_ = lean_ctor_get(v___x_2083_, 0);
lean_inc(v_fvarId_2084_);
lean_dec_ref_known(v___x_2083_, 1);
v___x_2085_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1750_, v_k_2077_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2096_; 
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2085_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2088_ = v___x_2085_;
v_isShared_2089_ = v_isSharedCheck_2096_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2085_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2096_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2080_ == 0)
{
lean_ctor_set(v___x_2079_, 2, v_a_2086_);
lean_ctor_set(v___x_2079_, 0, v_fvarId_2084_);
v___x_2091_ = v___x_2079_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_fvarId_2084_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v_cidx_2076_);
lean_ctor_set(v_reuseFailAlloc_2095_, 2, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
lean_object* v___x_2093_; 
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 0, v___x_2091_);
v___x_2093_ = v___x_2088_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v___x_2091_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
}
}
}
}
else
{
lean_dec(v_fvarId_2084_);
lean_del_object(v___x_2079_);
lean_dec(v_cidx_2076_);
return v___x_2085_;
}
}
else
{
lean_object* v___x_2097_; 
lean_del_object(v___x_2079_);
lean_dec_ref(v_k_2077_);
lean_dec(v_cidx_2076_);
v___x_2097_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_2097_;
}
}
}
case 11:
{
lean_object* v_fvarId_2099_; lean_object* v_n_2100_; uint8_t v_check_2101_; uint8_t v_persistent_2102_; lean_object* v_k_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2124_; 
v_fvarId_2099_ = lean_ctor_get(v_code_1751_, 0);
v_n_2100_ = lean_ctor_get(v_code_1751_, 1);
v_check_2101_ = lean_ctor_get_uint8(v_code_1751_, sizeof(void*)*3);
v_persistent_2102_ = lean_ctor_get_uint8(v_code_1751_, sizeof(void*)*3 + 1);
v_k_2103_ = lean_ctor_get(v_code_1751_, 2);
v_isSharedCheck_2124_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2105_ = v_code_1751_;
v_isShared_2106_ = v_isSharedCheck_2124_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_k_2103_);
lean_inc(v_n_2100_);
lean_inc(v_fvarId_2099_);
lean_dec(v_code_1751_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2124_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
uint8_t v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2107_ = 1;
v___x_2108_ = lean_st_ref_get(v_a_1753_);
v___x_2109_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2108_, v_fvarId_2099_, v___x_2107_);
lean_dec(v___x_2108_);
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v_fvarId_2110_; lean_object* v___x_2111_; 
v_fvarId_2110_ = lean_ctor_get(v___x_2109_, 0);
lean_inc(v_fvarId_2110_);
lean_dec_ref_known(v___x_2109_, 1);
v___x_2111_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1750_, v_k_2103_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_2111_) == 0)
{
lean_object* v_a_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2122_; 
v_a_2112_ = lean_ctor_get(v___x_2111_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2111_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2114_ = v___x_2111_;
v_isShared_2115_ = v_isSharedCheck_2122_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_a_2112_);
lean_dec(v___x_2111_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2122_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v___x_2117_; 
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 2, v_a_2112_);
lean_ctor_set(v___x_2105_, 0, v_fvarId_2110_);
v___x_2117_ = v___x_2105_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_fvarId_2110_);
lean_ctor_set(v_reuseFailAlloc_2121_, 1, v_n_2100_);
lean_ctor_set(v_reuseFailAlloc_2121_, 2, v_a_2112_);
lean_ctor_set_uint8(v_reuseFailAlloc_2121_, sizeof(void*)*3, v_check_2101_);
lean_ctor_set_uint8(v_reuseFailAlloc_2121_, sizeof(void*)*3 + 1, v_persistent_2102_);
v___x_2117_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
lean_object* v___x_2119_; 
if (v_isShared_2115_ == 0)
{
lean_ctor_set(v___x_2114_, 0, v___x_2117_);
v___x_2119_ = v___x_2114_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v___x_2117_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
return v___x_2119_;
}
}
}
}
else
{
lean_dec(v_fvarId_2110_);
lean_del_object(v___x_2105_);
lean_dec(v_n_2100_);
return v___x_2111_;
}
}
else
{
lean_object* v___x_2123_; 
lean_del_object(v___x_2105_);
lean_dec_ref(v_k_2103_);
lean_dec(v_n_2100_);
v___x_2123_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_2123_;
}
}
}
case 12:
{
lean_object* v_fvarId_2125_; lean_object* v_n_2126_; uint8_t v_check_2127_; uint8_t v_persistent_2128_; lean_object* v_objs_x3f_2129_; lean_object* v_k_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2151_; 
v_fvarId_2125_ = lean_ctor_get(v_code_1751_, 0);
v_n_2126_ = lean_ctor_get(v_code_1751_, 1);
v_check_2127_ = lean_ctor_get_uint8(v_code_1751_, sizeof(void*)*4);
v_persistent_2128_ = lean_ctor_get_uint8(v_code_1751_, sizeof(void*)*4 + 1);
v_objs_x3f_2129_ = lean_ctor_get(v_code_1751_, 2);
v_k_2130_ = lean_ctor_get(v_code_1751_, 3);
v_isSharedCheck_2151_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_2151_ == 0)
{
v___x_2132_ = v_code_1751_;
v_isShared_2133_ = v_isSharedCheck_2151_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_k_2130_);
lean_inc(v_objs_x3f_2129_);
lean_inc(v_n_2126_);
lean_inc(v_fvarId_2125_);
lean_dec(v_code_1751_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2151_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
uint8_t v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2134_ = 1;
v___x_2135_ = lean_st_ref_get(v_a_1753_);
v___x_2136_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2135_, v_fvarId_2125_, v___x_2134_);
lean_dec(v___x_2135_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_fvarId_2137_; lean_object* v___x_2138_; 
v_fvarId_2137_ = lean_ctor_get(v___x_2136_, 0);
lean_inc(v_fvarId_2137_);
lean_dec_ref_known(v___x_2136_, 1);
v___x_2138_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1750_, v_k_2130_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2149_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2141_ = v___x_2138_;
v_isShared_2142_ = v_isSharedCheck_2149_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2138_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2149_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 3, v_a_2139_);
lean_ctor_set(v___x_2132_, 0, v_fvarId_2137_);
v___x_2144_ = v___x_2132_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v_fvarId_2137_);
lean_ctor_set(v_reuseFailAlloc_2148_, 1, v_n_2126_);
lean_ctor_set(v_reuseFailAlloc_2148_, 2, v_objs_x3f_2129_);
lean_ctor_set(v_reuseFailAlloc_2148_, 3, v_a_2139_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, sizeof(void*)*4, v_check_2127_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, sizeof(void*)*4 + 1, v_persistent_2128_);
v___x_2144_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
lean_object* v___x_2146_; 
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 0, v___x_2144_);
v___x_2146_ = v___x_2141_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v___x_2144_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
}
else
{
lean_dec(v_fvarId_2137_);
lean_del_object(v___x_2132_);
lean_dec(v_objs_x3f_2129_);
lean_dec(v_n_2126_);
return v___x_2138_;
}
}
else
{
lean_object* v___x_2150_; 
lean_del_object(v___x_2132_);
lean_dec_ref(v_k_2130_);
lean_dec(v_objs_x3f_2129_);
lean_dec(v_n_2126_);
v___x_2150_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_2150_;
}
}
}
default: 
{
lean_object* v_fvarId_2152_; lean_object* v_k_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2174_; 
v_fvarId_2152_ = lean_ctor_get(v_code_1751_, 0);
v_k_2153_ = lean_ctor_get(v_code_1751_, 1);
v_isSharedCheck_2174_ = !lean_is_exclusive(v_code_1751_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2155_ = v_code_1751_;
v_isShared_2156_ = v_isSharedCheck_2174_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_k_2153_);
lean_inc(v_fvarId_2152_);
lean_dec(v_code_1751_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2174_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
uint8_t v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2157_ = 1;
v___x_2158_ = lean_st_ref_get(v_a_1753_);
v___x_2159_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2158_, v_fvarId_2152_, v___x_2157_);
lean_dec(v___x_2158_);
if (lean_obj_tag(v___x_2159_) == 0)
{
lean_object* v_fvarId_2160_; lean_object* v___x_2161_; 
v_fvarId_2160_ = lean_ctor_get(v___x_2159_, 0);
lean_inc(v_fvarId_2160_);
lean_dec_ref_known(v___x_2159_, 1);
v___x_2161_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_1750_, v_k_2153_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2172_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2164_ = v___x_2161_;
v_isShared_2165_ = v_isSharedCheck_2172_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2161_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2172_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2156_ == 0)
{
lean_ctor_set(v___x_2155_, 1, v_a_2162_);
lean_ctor_set(v___x_2155_, 0, v_fvarId_2160_);
v___x_2167_ = v___x_2155_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_fvarId_2160_);
lean_ctor_set(v_reuseFailAlloc_2171_, 1, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
lean_object* v___x_2169_; 
if (v_isShared_2165_ == 0)
{
lean_ctor_set(v___x_2164_, 0, v___x_2167_);
v___x_2169_ = v___x_2164_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v___x_2167_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
}
else
{
lean_dec(v_fvarId_2160_);
lean_del_object(v___x_2155_);
return v___x_2161_;
}
}
else
{
lean_object* v___x_2173_; 
lean_del_object(v___x_2155_);
lean_dec_ref(v_k_2153_);
v___x_2173_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_1750_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_2173_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeFunDecl(uint8_t v_pu_2175_, lean_object* v_decl_2176_, uint8_t v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_){
_start:
{
lean_object* v_fvarId_2184_; lean_object* v_binderName_2185_; lean_object* v_params_2186_; lean_object* v_type_2187_; lean_object* v_value_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2272_; 
v_fvarId_2184_ = lean_ctor_get(v_decl_2176_, 0);
v_binderName_2185_ = lean_ctor_get(v_decl_2176_, 1);
v_params_2186_ = lean_ctor_get(v_decl_2176_, 2);
v_type_2187_ = lean_ctor_get(v_decl_2176_, 3);
v_value_2188_ = lean_ctor_get(v_decl_2176_, 4);
v_isSharedCheck_2272_ = !lean_is_exclusive(v_decl_2176_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2190_ = v_decl_2176_;
v_isShared_2191_ = v_isSharedCheck_2272_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_value_2188_);
lean_inc(v_type_2187_);
lean_inc(v_params_2186_);
lean_inc(v_binderName_2185_);
lean_inc(v_fvarId_2184_);
lean_dec(v_decl_2176_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2272_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v___x_2192_; 
v___x_2192_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr(v_pu_2175_, v_type_2187_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v_a_2193_; lean_object* v___x_2194_; 
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_a_2193_);
lean_dec_ref_known(v___x_2192_, 1);
v___x_2194_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_refreshBinderName___redArg(v_binderName_2185_, v_a_2177_, v_a_2180_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; size_t v_sz_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_26902__overap_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
lean_inc(v_a_2195_);
lean_dec_ref_known(v___x_2194_, 1);
v_sz_2196_ = lean_array_size(v_params_2186_);
v___x_2197_ = l_unsafeCast___redArg(v_params_2186_);
lean_dec_ref(v_params_2186_);
v___x_2198_ = lean_box(v_pu_2175_);
v___x_2199_ = lean_box_usize(v_sz_2196_);
v___x_2200_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeArgs___boxed__const__1));
v___x_2201_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeFunDecl_spec__0___boxed), 11, 4);
lean_closure_set(v___x_2201_, 0, v___x_2198_);
lean_closure_set(v___x_2201_, 1, v___x_2199_);
lean_closure_set(v___x_2201_, 2, v___x_2200_);
lean_closure_set(v___x_2201_, 3, v___x_2197_);
v___x_26902__overap_2202_ = l_unsafeCast___redArg(v___x_2201_);
lean_dec_ref(v___x_2201_);
v___x_2203_ = lean_box(v_a_2177_);
lean_inc(v_a_2182_);
lean_inc_ref(v_a_2181_);
lean_inc(v_a_2180_);
lean_inc_ref(v_a_2179_);
lean_inc(v_a_2178_);
v___x_2204_ = lean_apply_7(v___x_26902__overap_2202_, v___x_2203_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_, lean_box(0));
if (lean_obj_tag(v___x_2204_) == 0)
{
lean_object* v_a_2205_; lean_object* v___x_2206_; 
v_a_2205_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_a_2205_);
lean_dec_ref_known(v___x_2204_, 1);
v___x_2206_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_2175_, v_value_2188_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
if (lean_obj_tag(v___x_2206_) == 0)
{
lean_object* v_a_2207_; lean_object* v___x_2208_; 
v_a_2207_ = lean_ctor_get(v___x_2206_, 0);
lean_inc(v_a_2207_);
lean_dec_ref_known(v___x_2206_, 1);
v___x_2208_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_mkNewFVarId___redArg(v_fvarId_2184_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_object* v_a_2209_; lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2231_; 
v_a_2209_ = lean_ctor_get(v___x_2208_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2211_ = v___x_2208_;
v_isShared_2212_ = v_isSharedCheck_2231_;
goto v_resetjp_2210_;
}
else
{
lean_inc(v_a_2209_);
lean_dec(v___x_2208_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2231_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2214_; 
if (v_isShared_2191_ == 0)
{
lean_ctor_set(v___x_2190_, 4, v_a_2207_);
lean_ctor_set(v___x_2190_, 3, v_a_2193_);
lean_ctor_set(v___x_2190_, 2, v_a_2205_);
lean_ctor_set(v___x_2190_, 1, v_a_2195_);
lean_ctor_set(v___x_2190_, 0, v_a_2209_);
v___x_2214_ = v___x_2190_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_a_2209_);
lean_ctor_set(v_reuseFailAlloc_2230_, 1, v_a_2195_);
lean_ctor_set(v_reuseFailAlloc_2230_, 2, v_a_2205_);
lean_ctor_set(v_reuseFailAlloc_2230_, 3, v_a_2193_);
lean_ctor_set(v_reuseFailAlloc_2230_, 4, v_a_2207_);
v___x_2214_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
lean_object* v___x_2215_; lean_object* v_lctx_2216_; lean_object* v_nextIdx_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2229_; 
v___x_2215_ = lean_st_ref_take(v_a_2180_);
v_lctx_2216_ = lean_ctor_get(v___x_2215_, 0);
v_nextIdx_2217_ = lean_ctor_get(v___x_2215_, 1);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2215_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2219_ = v___x_2215_;
v_isShared_2220_ = v_isSharedCheck_2229_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_nextIdx_2217_);
lean_inc(v_lctx_2216_);
lean_dec(v___x_2215_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2229_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2221_; lean_object* v___x_2223_; 
lean_inc_ref(v___x_2214_);
v___x_2221_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v_pu_2175_, v_lctx_2216_, v___x_2214_);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 0, v___x_2221_);
v___x_2223_ = v___x_2219_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v___x_2221_);
lean_ctor_set(v_reuseFailAlloc_2228_, 1, v_nextIdx_2217_);
v___x_2223_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
lean_object* v___x_2224_; lean_object* v___x_2226_; 
v___x_2224_ = lean_st_ref_put(v_a_2180_, v___x_2223_);
if (v_isShared_2212_ == 0)
{
lean_ctor_set(v___x_2211_, 0, v___x_2214_);
v___x_2226_ = v___x_2211_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2214_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
}
}
else
{
lean_object* v_a_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2239_; 
lean_dec(v_a_2207_);
lean_dec(v_a_2205_);
lean_dec(v_a_2195_);
lean_dec(v_a_2193_);
lean_del_object(v___x_2190_);
v_a_2232_ = lean_ctor_get(v___x_2208_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2234_ = v___x_2208_;
v_isShared_2235_ = v_isSharedCheck_2239_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_a_2232_);
lean_dec(v___x_2208_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2239_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2237_; 
if (v_isShared_2235_ == 0)
{
v___x_2237_ = v___x_2234_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v_a_2232_);
v___x_2237_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
return v___x_2237_;
}
}
}
}
else
{
lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2247_; 
lean_dec(v_a_2205_);
lean_dec(v_a_2195_);
lean_dec(v_a_2193_);
lean_del_object(v___x_2190_);
lean_dec(v_fvarId_2184_);
v_a_2240_ = lean_ctor_get(v___x_2206_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2206_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2242_ = v___x_2206_;
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v___x_2206_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2245_; 
if (v_isShared_2243_ == 0)
{
v___x_2245_ = v___x_2242_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2240_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
else
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2255_; 
lean_dec(v_a_2195_);
lean_dec(v_a_2193_);
lean_del_object(v___x_2190_);
lean_dec_ref(v_value_2188_);
lean_dec(v_fvarId_2184_);
v_a_2248_ = lean_ctor_get(v___x_2204_, 0);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2204_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2250_ = v___x_2204_;
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___x_2204_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2253_; 
if (v_isShared_2251_ == 0)
{
v___x_2253_ = v___x_2250_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_a_2248_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
}
else
{
lean_object* v_a_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2263_; 
lean_dec(v_a_2193_);
lean_del_object(v___x_2190_);
lean_dec_ref(v_value_2188_);
lean_dec_ref(v_params_2186_);
lean_dec(v_fvarId_2184_);
v_a_2256_ = lean_ctor_get(v___x_2194_, 0);
v_isSharedCheck_2263_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2263_ == 0)
{
v___x_2258_ = v___x_2194_;
v_isShared_2259_ = v_isSharedCheck_2263_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_a_2256_);
lean_dec(v___x_2194_);
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
else
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2271_; 
lean_del_object(v___x_2190_);
lean_dec_ref(v_value_2188_);
lean_dec_ref(v_params_2186_);
lean_dec(v_binderName_2185_);
lean_dec(v_fvarId_2184_);
v_a_2264_ = lean_ctor_get(v___x_2192_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2266_ = v___x_2192_;
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2192_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2269_; 
if (v_isShared_2267_ == 0)
{
v___x_2269_ = v___x_2266_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_a_2264_);
v___x_2269_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
return v___x_2269_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeFunDecl___boxed(lean_object* v_pu_2273_, lean_object* v_decl_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_, lean_object* v_a_2277_, lean_object* v_a_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_){
_start:
{
uint8_t v_pu_boxed_2282_; uint8_t v_a_boxed_2283_; lean_object* v_res_2284_; 
v_pu_boxed_2282_ = lean_unbox(v_pu_2273_);
v_a_boxed_2283_ = lean_unbox(v_a_2275_);
v_res_2284_ = l_Lean_Compiler_LCNF_Internalize_internalizeFunDecl(v_pu_boxed_2282_, v_decl_2274_, v_a_boxed_2283_, v_a_2276_, v_a_2277_, v_a_2278_, v_a_2279_, v_a_2280_);
lean_dec(v_a_2280_);
lean_dec_ref(v_a_2279_);
lean_dec(v_a_2278_);
lean_dec_ref(v_a_2277_);
lean_dec(v_a_2276_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCode___boxed(lean_object* v_pu_2285_, lean_object* v_code_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_){
_start:
{
uint8_t v_pu_boxed_2294_; uint8_t v_a_boxed_2295_; lean_object* v_res_2296_; 
v_pu_boxed_2294_ = lean_unbox(v_pu_2285_);
v_a_boxed_2295_ = lean_unbox(v_a_2287_);
v_res_2296_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_boxed_2294_, v_code_2286_, v_a_boxed_2295_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_, v_a_2292_);
lean_dec(v_a_2292_);
lean_dec_ref(v_a_2291_);
lean_dec(v_a_2290_);
lean_dec_ref(v_a_2289_);
lean_dec(v_a_2288_);
return v_res_2296_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2297_; 
v___x_2297_ = l_Lean_Compiler_LCNF_instInhabitedCodeDecl_default___redArg();
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(lean_object* v_msg_2298_, uint8_t v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_){
_start:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v_toApplicative_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2372_; 
v___x_2306_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__0);
v___x_2307_ = l_StateRefT_x27_instMonad___redArg(v___x_2306_);
v_toApplicative_2308_ = lean_ctor_get(v___x_2307_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2307_);
if (v_isSharedCheck_2372_ == 0)
{
lean_object* v_unused_2373_; 
v_unused_2373_ = lean_ctor_get(v___x_2307_, 1);
lean_dec(v_unused_2373_);
v___x_2310_ = v___x_2307_;
v_isShared_2311_ = v_isSharedCheck_2372_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_toApplicative_2308_);
lean_dec(v___x_2307_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2372_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v_toFunctor_2312_; lean_object* v_toSeq_2313_; lean_object* v_toSeqLeft_2314_; lean_object* v_toSeqRight_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2370_; 
v_toFunctor_2312_ = lean_ctor_get(v_toApplicative_2308_, 0);
v_toSeq_2313_ = lean_ctor_get(v_toApplicative_2308_, 2);
v_toSeqLeft_2314_ = lean_ctor_get(v_toApplicative_2308_, 3);
v_toSeqRight_2315_ = lean_ctor_get(v_toApplicative_2308_, 4);
v_isSharedCheck_2370_ = !lean_is_exclusive(v_toApplicative_2308_);
if (v_isSharedCheck_2370_ == 0)
{
lean_object* v_unused_2371_; 
v_unused_2371_ = lean_ctor_get(v_toApplicative_2308_, 1);
lean_dec(v_unused_2371_);
v___x_2317_ = v_toApplicative_2308_;
v_isShared_2318_ = v_isSharedCheck_2370_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_toSeqRight_2315_);
lean_inc(v_toSeqLeft_2314_);
lean_inc(v_toSeq_2313_);
lean_inc(v_toFunctor_2312_);
lean_dec(v_toApplicative_2308_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2370_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___f_2319_; lean_object* v___f_2320_; lean_object* v___f_2321_; lean_object* v___f_2322_; lean_object* v___x_2323_; lean_object* v___f_2324_; lean_object* v___f_2325_; lean_object* v___f_2326_; lean_object* v___x_2328_; 
v___f_2319_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__1));
v___f_2320_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__2));
lean_inc_ref(v_toFunctor_2312_);
v___f_2321_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2321_, 0, v_toFunctor_2312_);
v___f_2322_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2322_, 0, v_toFunctor_2312_);
v___x_2323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2323_, 0, v___f_2321_);
lean_ctor_set(v___x_2323_, 1, v___f_2322_);
v___f_2324_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2324_, 0, v_toSeqRight_2315_);
v___f_2325_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2325_, 0, v_toSeqLeft_2314_);
v___f_2326_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2326_, 0, v_toSeq_2313_);
if (v_isShared_2318_ == 0)
{
lean_ctor_set(v___x_2317_, 4, v___f_2324_);
lean_ctor_set(v___x_2317_, 3, v___f_2325_);
lean_ctor_set(v___x_2317_, 2, v___f_2326_);
lean_ctor_set(v___x_2317_, 1, v___f_2319_);
lean_ctor_set(v___x_2317_, 0, v___x_2323_);
v___x_2328_ = v___x_2317_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2323_);
lean_ctor_set(v_reuseFailAlloc_2369_, 1, v___f_2319_);
lean_ctor_set(v_reuseFailAlloc_2369_, 2, v___f_2326_);
lean_ctor_set(v_reuseFailAlloc_2369_, 3, v___f_2325_);
lean_ctor_set(v_reuseFailAlloc_2369_, 4, v___f_2324_);
v___x_2328_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
lean_object* v___x_2330_; 
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 1, v___f_2320_);
lean_ctor_set(v___x_2310_, 0, v___x_2328_);
v___x_2330_ = v___x_2310_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v___x_2328_);
lean_ctor_set(v_reuseFailAlloc_2368_, 1, v___f_2320_);
v___x_2330_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
lean_object* v___x_2331_; lean_object* v_toApplicative_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2366_; 
v___x_2331_ = l_StateRefT_x27_instMonad___redArg(v___x_2330_);
v_toApplicative_2332_ = lean_ctor_get(v___x_2331_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2331_);
if (v_isSharedCheck_2366_ == 0)
{
lean_object* v_unused_2367_; 
v_unused_2367_ = lean_ctor_get(v___x_2331_, 1);
lean_dec(v_unused_2367_);
v___x_2334_ = v___x_2331_;
v_isShared_2335_ = v_isSharedCheck_2366_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_toApplicative_2332_);
lean_dec(v___x_2331_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2366_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v_toFunctor_2336_; lean_object* v_toSeq_2337_; lean_object* v_toSeqLeft_2338_; lean_object* v_toSeqRight_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2364_; 
v_toFunctor_2336_ = lean_ctor_get(v_toApplicative_2332_, 0);
v_toSeq_2337_ = lean_ctor_get(v_toApplicative_2332_, 2);
v_toSeqLeft_2338_ = lean_ctor_get(v_toApplicative_2332_, 3);
v_toSeqRight_2339_ = lean_ctor_get(v_toApplicative_2332_, 4);
v_isSharedCheck_2364_ = !lean_is_exclusive(v_toApplicative_2332_);
if (v_isSharedCheck_2364_ == 0)
{
lean_object* v_unused_2365_; 
v_unused_2365_ = lean_ctor_get(v_toApplicative_2332_, 1);
lean_dec(v_unused_2365_);
v___x_2341_ = v_toApplicative_2332_;
v_isShared_2342_ = v_isSharedCheck_2364_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_toSeqRight_2339_);
lean_inc(v_toSeqLeft_2338_);
lean_inc(v_toSeq_2337_);
lean_inc(v_toFunctor_2336_);
lean_dec(v_toApplicative_2332_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2364_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___f_2343_; lean_object* v___f_2344_; lean_object* v___f_2345_; lean_object* v___f_2346_; lean_object* v___x_2347_; lean_object* v___f_2348_; lean_object* v___f_2349_; lean_object* v___f_2350_; lean_object* v___x_2352_; 
v___f_2343_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__3));
v___f_2344_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go_spec__2___closed__4));
lean_inc_ref(v_toFunctor_2336_);
v___f_2345_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2345_, 0, v_toFunctor_2336_);
v___f_2346_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2346_, 0, v_toFunctor_2336_);
v___x_2347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2347_, 0, v___f_2345_);
lean_ctor_set(v___x_2347_, 1, v___f_2346_);
v___f_2348_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2348_, 0, v_toSeqRight_2339_);
v___f_2349_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2349_, 0, v_toSeqLeft_2338_);
v___f_2350_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2350_, 0, v_toSeq_2337_);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 4, v___f_2348_);
lean_ctor_set(v___x_2341_, 3, v___f_2349_);
lean_ctor_set(v___x_2341_, 2, v___f_2350_);
lean_ctor_set(v___x_2341_, 1, v___f_2343_);
lean_ctor_set(v___x_2341_, 0, v___x_2347_);
v___x_2352_ = v___x_2341_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v___x_2347_);
lean_ctor_set(v_reuseFailAlloc_2363_, 1, v___f_2343_);
lean_ctor_set(v_reuseFailAlloc_2363_, 2, v___f_2350_);
lean_ctor_set(v_reuseFailAlloc_2363_, 3, v___f_2349_);
lean_ctor_set(v_reuseFailAlloc_2363_, 4, v___f_2348_);
v___x_2352_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_object* v___x_2354_; 
if (v_isShared_2335_ == 0)
{
lean_ctor_set(v___x_2334_, 1, v___f_2344_);
lean_ctor_set(v___x_2334_, 0, v___x_2352_);
v___x_2354_ = v___x_2334_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v___x_2352_);
lean_ctor_set(v_reuseFailAlloc_2362_, 1, v___f_2344_);
v___x_2354_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___f_2358_; lean_object* v___x_10948__overap_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; 
v___x_2355_ = l_StateRefT_x27_instMonad___redArg(v___x_2354_);
v___x_2356_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg___closed__0);
v___x_2357_ = l_instInhabitedOfMonad___redArg(v___x_2355_, v___x_2356_);
v___f_2358_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2358_, 0, v___x_2357_);
v___x_10948__overap_2359_ = lean_panic_fn_borrowed(v___f_2358_, v_msg_2298_);
lean_dec_ref(v___f_2358_);
v___x_2360_ = lean_box(v___y_2299_);
lean_inc(v___y_2304_);
lean_inc_ref(v___y_2303_);
lean_inc(v___y_2302_);
lean_inc_ref(v___y_2301_);
lean_inc(v___y_2300_);
v___x_2361_ = lean_apply_7(v___x_10948__overap_2359_, v___x_2360_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_, lean_box(0));
return v___x_2361_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg___boxed(lean_object* v_msg_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
uint8_t v___y_11009__boxed_2382_; lean_object* v_res_2383_; 
v___y_11009__boxed_2382_ = lean_unbox(v___y_2375_);
v_res_2383_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(v_msg_2374_, v___y_11009__boxed_2382_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
lean_dec(v___y_2376_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0(uint8_t v_pu_2384_, lean_object* v_msg_2385_, uint8_t v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_){
_start:
{
lean_object* v___x_2393_; 
v___x_2393_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(v_msg_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___boxed(lean_object* v_pu_2394_, lean_object* v_msg_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_){
_start:
{
uint8_t v_pu_boxed_2403_; uint8_t v___y_11145__boxed_2404_; lean_object* v_res_2405_; 
v_pu_boxed_2403_ = lean_unbox(v_pu_2394_);
v___y_11145__boxed_2404_ = lean_unbox(v___y_2396_);
v_res_2405_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0(v_pu_boxed_2403_, v_msg_2395_, v___y_11145__boxed_2404_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
lean_dec(v___y_2397_);
return v_res_2405_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__1(void){
_start:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2407_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2));
v___x_2408_ = lean_unsigned_to_nat(41u);
v___x_2409_ = lean_unsigned_to_nat(217u);
v___x_2410_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0));
v___x_2411_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0));
v___x_2412_ = l_mkPanicMessageWithDecl(v___x_2411_, v___x_2410_, v___x_2409_, v___x_2408_, v___x_2407_);
return v___x_2412_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__2(void){
_start:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2413_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2));
v___x_2414_ = lean_unsigned_to_nat(31u);
v___x_2415_ = lean_unsigned_to_nat(222u);
v___x_2416_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0));
v___x_2417_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0));
v___x_2418_ = l_mkPanicMessageWithDecl(v___x_2417_, v___x_2416_, v___x_2415_, v___x_2414_, v___x_2413_);
return v___x_2418_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__3(void){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2419_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2));
v___x_2420_ = lean_unsigned_to_nat(41u);
v___x_2421_ = lean_unsigned_to_nat(221u);
v___x_2422_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0));
v___x_2423_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0));
v___x_2424_ = l_mkPanicMessageWithDecl(v___x_2423_, v___x_2422_, v___x_2421_, v___x_2420_, v___x_2419_);
return v___x_2424_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__4(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2425_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2));
v___x_2426_ = lean_unsigned_to_nat(31u);
v___x_2427_ = lean_unsigned_to_nat(226u);
v___x_2428_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0));
v___x_2429_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0));
v___x_2430_ = l_mkPanicMessageWithDecl(v___x_2429_, v___x_2428_, v___x_2427_, v___x_2426_, v___x_2425_);
return v___x_2430_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__5(void){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2431_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2));
v___x_2432_ = lean_unsigned_to_nat(41u);
v___x_2433_ = lean_unsigned_to_nat(225u);
v___x_2434_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0));
v___x_2435_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0));
v___x_2436_ = l_mkPanicMessageWithDecl(v___x_2435_, v___x_2434_, v___x_2433_, v___x_2432_, v___x_2431_);
return v___x_2436_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__6(void){
_start:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2437_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2));
v___x_2438_ = lean_unsigned_to_nat(41u);
v___x_2439_ = lean_unsigned_to_nat(230u);
v___x_2440_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0));
v___x_2441_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0));
v___x_2442_ = l_mkPanicMessageWithDecl(v___x_2441_, v___x_2440_, v___x_2439_, v___x_2438_, v___x_2437_);
return v___x_2442_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__7(void){
_start:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2443_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2));
v___x_2444_ = lean_unsigned_to_nat(41u);
v___x_2445_ = lean_unsigned_to_nat(233u);
v___x_2446_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0));
v___x_2447_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0));
v___x_2448_ = l_mkPanicMessageWithDecl(v___x_2447_, v___x_2446_, v___x_2445_, v___x_2444_, v___x_2443_);
return v___x_2448_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__8(void){
_start:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
v___x_2449_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2));
v___x_2450_ = lean_unsigned_to_nat(41u);
v___x_2451_ = lean_unsigned_to_nat(236u);
v___x_2452_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0));
v___x_2453_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0));
v___x_2454_ = l_mkPanicMessageWithDecl(v___x_2453_, v___x_2452_, v___x_2451_, v___x_2450_, v___x_2449_);
return v___x_2454_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__9(void){
_start:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2455_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__2));
v___x_2456_ = lean_unsigned_to_nat(41u);
v___x_2457_ = lean_unsigned_to_nat(239u);
v___x_2458_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__0));
v___x_2459_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr_go___closed__0));
v___x_2460_ = l_mkPanicMessageWithDecl(v___x_2459_, v___x_2458_, v___x_2457_, v___x_2456_, v___x_2455_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl(uint8_t v_pu_2461_, lean_object* v_decl_2462_, uint8_t v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_){
_start:
{
switch(lean_obj_tag(v_decl_2462_))
{
case 0:
{
lean_object* v_decl_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2494_; 
v_decl_2470_ = lean_ctor_get(v_decl_2462_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v_decl_2462_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2472_ = v_decl_2462_;
v_isShared_2473_ = v_isSharedCheck_2494_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_decl_2470_);
lean_dec(v_decl_2462_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2494_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2474_; 
v___x_2474_ = l_Lean_Compiler_LCNF_Internalize_internalizeLetDecl(v_pu_2461_, v_decl_2470_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2485_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2477_ = v___x_2474_;
v_isShared_2478_ = v_isSharedCheck_2485_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2474_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2485_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2473_ == 0)
{
lean_ctor_set(v___x_2472_, 0, v_a_2475_);
v___x_2480_ = v___x_2472_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
lean_object* v___x_2482_; 
if (v_isShared_2478_ == 0)
{
lean_ctor_set(v___x_2477_, 0, v___x_2480_);
v___x_2482_ = v___x_2477_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v___x_2480_);
v___x_2482_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
return v___x_2482_;
}
}
}
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_del_object(v___x_2472_);
v_a_2486_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2474_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2474_);
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
case 1:
{
lean_object* v_decl_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2519_; 
v_decl_2495_ = lean_ctor_get(v_decl_2462_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v_decl_2462_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2497_ = v_decl_2462_;
v_isShared_2498_ = v_isSharedCheck_2519_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_decl_2495_);
lean_dec(v_decl_2462_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2519_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2499_; 
v___x_2499_ = l_Lean_Compiler_LCNF_Internalize_internalizeFunDecl(v_pu_2461_, v_decl_2495_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2510_; 
v_a_2500_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2502_ = v___x_2499_;
v_isShared_2503_ = v_isSharedCheck_2510_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2499_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2510_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2498_ == 0)
{
lean_ctor_set(v___x_2497_, 0, v_a_2500_);
v___x_2505_ = v___x_2497_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2500_);
v___x_2505_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
lean_object* v___x_2507_; 
if (v_isShared_2503_ == 0)
{
lean_ctor_set(v___x_2502_, 0, v___x_2505_);
v___x_2507_ = v___x_2502_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v___x_2505_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
}
}
}
}
else
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2518_; 
lean_del_object(v___x_2497_);
v_a_2511_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2513_ = v___x_2499_;
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2499_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2516_; 
if (v_isShared_2514_ == 0)
{
v___x_2516_ = v___x_2513_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2511_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
return v___x_2516_;
}
}
}
}
}
case 2:
{
lean_object* v_decl_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2544_; 
v_decl_2520_ = lean_ctor_get(v_decl_2462_, 0);
v_isSharedCheck_2544_ = !lean_is_exclusive(v_decl_2462_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2522_ = v_decl_2462_;
v_isShared_2523_ = v_isSharedCheck_2544_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_decl_2520_);
lean_dec(v_decl_2462_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2544_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2524_; 
v___x_2524_ = l_Lean_Compiler_LCNF_Internalize_internalizeFunDecl(v_pu_2461_, v_decl_2520_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
if (lean_obj_tag(v___x_2524_) == 0)
{
lean_object* v_a_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2535_; 
v_a_2525_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2527_ = v___x_2524_;
v_isShared_2528_ = v_isSharedCheck_2535_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_a_2525_);
lean_dec(v___x_2524_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2535_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2530_; 
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 0, v_a_2525_);
v___x_2530_ = v___x_2522_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2525_);
v___x_2530_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
lean_object* v___x_2532_; 
if (v_isShared_2528_ == 0)
{
lean_ctor_set(v___x_2527_, 0, v___x_2530_);
v___x_2532_ = v___x_2527_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v___x_2530_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
return v___x_2532_;
}
}
}
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2543_; 
lean_del_object(v___x_2522_);
v_a_2536_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2538_ = v___x_2524_;
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2524_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2541_; 
if (v_isShared_2539_ == 0)
{
v___x_2541_ = v___x_2538_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_a_2536_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
}
}
case 3:
{
lean_object* v_fvarId_2545_; lean_object* v_i_2546_; lean_object* v_y_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2569_; 
v_fvarId_2545_ = lean_ctor_get(v_decl_2462_, 0);
v_i_2546_ = lean_ctor_get(v_decl_2462_, 1);
v_y_2547_ = lean_ctor_get(v_decl_2462_, 2);
v_isSharedCheck_2569_ = !lean_is_exclusive(v_decl_2462_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2549_ = v_decl_2462_;
v_isShared_2550_ = v_isSharedCheck_2569_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_y_2547_);
lean_inc(v_i_2546_);
lean_inc(v_fvarId_2545_);
lean_dec(v_decl_2462_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2569_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
uint8_t v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2551_ = 1;
v___x_2552_ = lean_st_ref_get(v_a_2464_);
v___x_2553_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2552_, v_fvarId_2545_, v___x_2551_);
lean_dec(v___x_2552_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_fvarId_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2566_; 
v_fvarId_2554_ = lean_ctor_get(v___x_2553_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2553_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2556_ = v___x_2553_;
v_isShared_2557_ = v_isSharedCheck_2566_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_fvarId_2554_);
lean_dec(v___x_2553_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2566_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2561_; 
v___x_2558_ = lean_st_ref_get(v_a_2464_);
v___x_2559_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(v_pu_2461_, v___x_2558_, v_y_2547_, v___x_2551_);
lean_dec(v___x_2558_);
if (v_isShared_2550_ == 0)
{
lean_ctor_set(v___x_2549_, 2, v___x_2559_);
lean_ctor_set(v___x_2549_, 0, v_fvarId_2554_);
v___x_2561_ = v___x_2549_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_fvarId_2554_);
lean_ctor_set(v_reuseFailAlloc_2565_, 1, v_i_2546_);
lean_ctor_set(v_reuseFailAlloc_2565_, 2, v___x_2559_);
v___x_2561_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
lean_object* v___x_2563_; 
if (v_isShared_2557_ == 0)
{
lean_ctor_set(v___x_2556_, 0, v___x_2561_);
v___x_2563_ = v___x_2556_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v___x_2561_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
}
else
{
lean_object* v___x_2567_; lean_object* v___x_2568_; 
lean_dec(v___x_2553_);
lean_del_object(v___x_2549_);
lean_dec(v_y_2547_);
lean_dec(v_i_2546_);
v___x_2567_ = lean_obj_once(&l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__1, &l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__1);
v___x_2568_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(v___x_2567_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
return v___x_2568_;
}
}
}
case 4:
{
lean_object* v_fvarId_2570_; lean_object* v_i_2571_; lean_object* v_y_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2597_; 
v_fvarId_2570_ = lean_ctor_get(v_decl_2462_, 0);
v_i_2571_ = lean_ctor_get(v_decl_2462_, 1);
v_y_2572_ = lean_ctor_get(v_decl_2462_, 2);
v_isSharedCheck_2597_ = !lean_is_exclusive(v_decl_2462_);
if (v_isSharedCheck_2597_ == 0)
{
v___x_2574_ = v_decl_2462_;
v_isShared_2575_ = v_isSharedCheck_2597_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_y_2572_);
lean_inc(v_i_2571_);
lean_inc(v_fvarId_2570_);
lean_dec(v_decl_2462_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2597_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
uint8_t v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2576_ = 1;
v___x_2577_ = lean_st_ref_get(v_a_2464_);
v___x_2578_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2577_, v_fvarId_2570_, v___x_2576_);
lean_dec(v___x_2577_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_fvarId_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v_fvarId_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_fvarId_2579_);
lean_dec_ref_known(v___x_2578_, 1);
v___x_2580_ = lean_st_ref_get(v_a_2464_);
v___x_2581_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2580_, v_y_2572_, v___x_2576_);
lean_dec(v___x_2580_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v_fvarId_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2592_; 
v_fvarId_2582_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2584_ = v___x_2581_;
v_isShared_2585_ = v_isSharedCheck_2592_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_fvarId_2582_);
lean_dec(v___x_2581_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2592_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2587_; 
if (v_isShared_2575_ == 0)
{
lean_ctor_set(v___x_2574_, 2, v_fvarId_2582_);
lean_ctor_set(v___x_2574_, 0, v_fvarId_2579_);
v___x_2587_ = v___x_2574_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v_fvarId_2579_);
lean_ctor_set(v_reuseFailAlloc_2591_, 1, v_i_2571_);
lean_ctor_set(v_reuseFailAlloc_2591_, 2, v_fvarId_2582_);
v___x_2587_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
lean_object* v___x_2589_; 
if (v_isShared_2585_ == 0)
{
lean_ctor_set(v___x_2584_, 0, v___x_2587_);
v___x_2589_ = v___x_2584_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v___x_2587_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
}
else
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
lean_dec(v___x_2581_);
lean_dec(v_fvarId_2579_);
lean_del_object(v___x_2574_);
lean_dec(v_i_2571_);
v___x_2593_ = lean_obj_once(&l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__2, &l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__2_once, _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__2);
v___x_2594_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(v___x_2593_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
return v___x_2594_;
}
}
else
{
lean_object* v___x_2595_; lean_object* v___x_2596_; 
lean_dec(v___x_2578_);
lean_del_object(v___x_2574_);
lean_dec(v_y_2572_);
lean_dec(v_i_2571_);
v___x_2595_ = lean_obj_once(&l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__3, &l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__3_once, _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__3);
v___x_2596_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(v___x_2595_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
return v___x_2596_;
}
}
}
case 5:
{
lean_object* v_fvarId_2598_; lean_object* v_i_2599_; lean_object* v_offset_2600_; lean_object* v_y_2601_; lean_object* v_ty_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2629_; 
v_fvarId_2598_ = lean_ctor_get(v_decl_2462_, 0);
v_i_2599_ = lean_ctor_get(v_decl_2462_, 1);
v_offset_2600_ = lean_ctor_get(v_decl_2462_, 2);
v_y_2601_ = lean_ctor_get(v_decl_2462_, 3);
v_ty_2602_ = lean_ctor_get(v_decl_2462_, 4);
v_isSharedCheck_2629_ = !lean_is_exclusive(v_decl_2462_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2604_ = v_decl_2462_;
v_isShared_2605_ = v_isSharedCheck_2629_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_ty_2602_);
lean_inc(v_y_2601_);
lean_inc(v_offset_2600_);
lean_inc(v_i_2599_);
lean_inc(v_fvarId_2598_);
lean_dec(v_decl_2462_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2629_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
uint8_t v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2606_ = 1;
v___x_2607_ = lean_st_ref_get(v_a_2464_);
v___x_2608_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2607_, v_fvarId_2598_, v___x_2606_);
lean_dec(v___x_2607_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_fvarId_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
v_fvarId_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_fvarId_2609_);
lean_dec_ref_known(v___x_2608_, 1);
v___x_2610_ = lean_st_ref_get(v_a_2464_);
v___x_2611_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2610_, v_y_2601_, v___x_2606_);
lean_dec(v___x_2610_);
if (lean_obj_tag(v___x_2611_) == 0)
{
lean_object* v_fvarId_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2624_; 
v_fvarId_2612_ = lean_ctor_get(v___x_2611_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2611_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2614_ = v___x_2611_;
v_isShared_2615_ = v_isSharedCheck_2624_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_fvarId_2612_);
lean_dec(v___x_2611_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2624_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2619_; 
v___x_2616_ = lean_st_ref_get(v_a_2464_);
v___x_2617_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_2461_, v___x_2616_, v___x_2606_, v_ty_2602_);
lean_dec(v___x_2616_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 4, v___x_2617_);
lean_ctor_set(v___x_2604_, 3, v_fvarId_2612_);
lean_ctor_set(v___x_2604_, 0, v_fvarId_2609_);
v___x_2619_ = v___x_2604_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(5, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_fvarId_2609_);
lean_ctor_set(v_reuseFailAlloc_2623_, 1, v_i_2599_);
lean_ctor_set(v_reuseFailAlloc_2623_, 2, v_offset_2600_);
lean_ctor_set(v_reuseFailAlloc_2623_, 3, v_fvarId_2612_);
lean_ctor_set(v_reuseFailAlloc_2623_, 4, v___x_2617_);
v___x_2619_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
lean_object* v___x_2621_; 
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 0, v___x_2619_);
v___x_2621_ = v___x_2614_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2619_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
}
else
{
lean_object* v___x_2625_; lean_object* v___x_2626_; 
lean_dec(v___x_2611_);
lean_dec(v_fvarId_2609_);
lean_del_object(v___x_2604_);
lean_dec_ref(v_ty_2602_);
lean_dec(v_offset_2600_);
lean_dec(v_i_2599_);
v___x_2625_ = lean_obj_once(&l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__4, &l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__4_once, _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__4);
v___x_2626_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(v___x_2625_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
return v___x_2626_;
}
}
else
{
lean_object* v___x_2627_; lean_object* v___x_2628_; 
lean_dec(v___x_2608_);
lean_del_object(v___x_2604_);
lean_dec_ref(v_ty_2602_);
lean_dec(v_y_2601_);
lean_dec(v_offset_2600_);
lean_dec(v_i_2599_);
v___x_2627_ = lean_obj_once(&l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__5, &l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__5_once, _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__5);
v___x_2628_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(v___x_2627_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
return v___x_2628_;
}
}
}
case 6:
{
lean_object* v_fvarId_2630_; lean_object* v_cidx_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2651_; 
v_fvarId_2630_ = lean_ctor_get(v_decl_2462_, 0);
v_cidx_2631_ = lean_ctor_get(v_decl_2462_, 1);
v_isSharedCheck_2651_ = !lean_is_exclusive(v_decl_2462_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2633_ = v_decl_2462_;
v_isShared_2634_ = v_isSharedCheck_2651_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_cidx_2631_);
lean_inc(v_fvarId_2630_);
lean_dec(v_decl_2462_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2651_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
uint8_t v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2635_ = 1;
v___x_2636_ = lean_st_ref_get(v_a_2464_);
v___x_2637_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2636_, v_fvarId_2630_, v___x_2635_);
lean_dec(v___x_2636_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_fvarId_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2648_; 
v_fvarId_2638_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2640_ = v___x_2637_;
v_isShared_2641_ = v_isSharedCheck_2648_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_fvarId_2638_);
lean_dec(v___x_2637_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2648_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 0, v_fvarId_2638_);
v___x_2643_ = v___x_2633_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_fvarId_2638_);
lean_ctor_set(v_reuseFailAlloc_2647_, 1, v_cidx_2631_);
v___x_2643_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
lean_object* v___x_2645_; 
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 0, v___x_2643_);
v___x_2645_ = v___x_2640_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v___x_2643_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
}
}
else
{
lean_object* v___x_2649_; lean_object* v___x_2650_; 
lean_dec(v___x_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_cidx_2631_);
v___x_2649_ = lean_obj_once(&l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__6, &l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__6_once, _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__6);
v___x_2650_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(v___x_2649_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
return v___x_2650_;
}
}
}
case 7:
{
lean_object* v_fvarId_2652_; lean_object* v_n_2653_; uint8_t v_check_2654_; uint8_t v_persistent_2655_; lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2675_; 
v_fvarId_2652_ = lean_ctor_get(v_decl_2462_, 0);
v_n_2653_ = lean_ctor_get(v_decl_2462_, 1);
v_check_2654_ = lean_ctor_get_uint8(v_decl_2462_, sizeof(void*)*2);
v_persistent_2655_ = lean_ctor_get_uint8(v_decl_2462_, sizeof(void*)*2 + 1);
v_isSharedCheck_2675_ = !lean_is_exclusive(v_decl_2462_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2657_ = v_decl_2462_;
v_isShared_2658_ = v_isSharedCheck_2675_;
goto v_resetjp_2656_;
}
else
{
lean_inc(v_n_2653_);
lean_inc(v_fvarId_2652_);
lean_dec(v_decl_2462_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2675_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
uint8_t v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2659_ = 1;
v___x_2660_ = lean_st_ref_get(v_a_2464_);
v___x_2661_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2660_, v_fvarId_2652_, v___x_2659_);
lean_dec(v___x_2660_);
if (lean_obj_tag(v___x_2661_) == 0)
{
lean_object* v_fvarId_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2672_; 
v_fvarId_2662_ = lean_ctor_get(v___x_2661_, 0);
v_isSharedCheck_2672_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2672_ == 0)
{
v___x_2664_ = v___x_2661_;
v_isShared_2665_ = v_isSharedCheck_2672_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_fvarId_2662_);
lean_dec(v___x_2661_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2672_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2658_ == 0)
{
lean_ctor_set(v___x_2657_, 0, v_fvarId_2662_);
v___x_2667_ = v___x_2657_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(7, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v_fvarId_2662_);
lean_ctor_set(v_reuseFailAlloc_2671_, 1, v_n_2653_);
lean_ctor_set_uint8(v_reuseFailAlloc_2671_, sizeof(void*)*2, v_check_2654_);
lean_ctor_set_uint8(v_reuseFailAlloc_2671_, sizeof(void*)*2 + 1, v_persistent_2655_);
v___x_2667_ = v_reuseFailAlloc_2671_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
lean_object* v___x_2669_; 
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 0, v___x_2667_);
v___x_2669_ = v___x_2664_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v___x_2667_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
return v___x_2669_;
}
}
}
}
else
{
lean_object* v___x_2673_; lean_object* v___x_2674_; 
lean_dec(v___x_2661_);
lean_del_object(v___x_2657_);
lean_dec(v_n_2653_);
v___x_2673_ = lean_obj_once(&l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__7, &l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__7_once, _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__7);
v___x_2674_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(v___x_2673_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
return v___x_2674_;
}
}
}
case 8:
{
lean_object* v_fvarId_2676_; lean_object* v_n_2677_; uint8_t v_check_2678_; uint8_t v_persistent_2679_; lean_object* v_objs_x3f_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2700_; 
v_fvarId_2676_ = lean_ctor_get(v_decl_2462_, 0);
v_n_2677_ = lean_ctor_get(v_decl_2462_, 1);
v_check_2678_ = lean_ctor_get_uint8(v_decl_2462_, sizeof(void*)*3);
v_persistent_2679_ = lean_ctor_get_uint8(v_decl_2462_, sizeof(void*)*3 + 1);
v_objs_x3f_2680_ = lean_ctor_get(v_decl_2462_, 2);
v_isSharedCheck_2700_ = !lean_is_exclusive(v_decl_2462_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2682_ = v_decl_2462_;
v_isShared_2683_ = v_isSharedCheck_2700_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_objs_x3f_2680_);
lean_inc(v_n_2677_);
lean_inc(v_fvarId_2676_);
lean_dec(v_decl_2462_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2700_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
uint8_t v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; 
v___x_2684_ = 1;
v___x_2685_ = lean_st_ref_get(v_a_2464_);
v___x_2686_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2685_, v_fvarId_2676_, v___x_2684_);
lean_dec(v___x_2685_);
if (lean_obj_tag(v___x_2686_) == 0)
{
lean_object* v_fvarId_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2697_; 
v_fvarId_2687_ = lean_ctor_get(v___x_2686_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2686_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2689_ = v___x_2686_;
v_isShared_2690_ = v_isSharedCheck_2697_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_fvarId_2687_);
lean_dec(v___x_2686_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2697_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v___x_2692_; 
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 0, v_fvarId_2687_);
v___x_2692_ = v___x_2682_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(8, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_fvarId_2687_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v_n_2677_);
lean_ctor_set(v_reuseFailAlloc_2696_, 2, v_objs_x3f_2680_);
lean_ctor_set_uint8(v_reuseFailAlloc_2696_, sizeof(void*)*3, v_check_2678_);
lean_ctor_set_uint8(v_reuseFailAlloc_2696_, sizeof(void*)*3 + 1, v_persistent_2679_);
v___x_2692_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
lean_object* v___x_2694_; 
if (v_isShared_2690_ == 0)
{
lean_ctor_set(v___x_2689_, 0, v___x_2692_);
v___x_2694_ = v___x_2689_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v___x_2692_);
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
lean_object* v___x_2698_; lean_object* v___x_2699_; 
lean_dec(v___x_2686_);
lean_del_object(v___x_2682_);
lean_dec(v_objs_x3f_2680_);
lean_dec(v_n_2677_);
v___x_2698_ = lean_obj_once(&l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__8, &l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__8_once, _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__8);
v___x_2699_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(v___x_2698_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
return v___x_2699_;
}
}
}
default: 
{
lean_object* v_fvarId_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2721_; 
v_fvarId_2701_ = lean_ctor_get(v_decl_2462_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v_decl_2462_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2703_ = v_decl_2462_;
v_isShared_2704_ = v_isSharedCheck_2721_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_fvarId_2701_);
lean_dec(v_decl_2462_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2721_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
uint8_t v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2705_ = 1;
v___x_2706_ = lean_st_ref_get(v_a_2464_);
v___x_2707_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___x_2706_, v_fvarId_2701_, v___x_2705_);
lean_dec(v___x_2706_);
if (lean_obj_tag(v___x_2707_) == 0)
{
lean_object* v_fvarId_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2718_; 
v_fvarId_2708_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2710_ = v___x_2707_;
v_isShared_2711_ = v_isSharedCheck_2718_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_fvarId_2708_);
lean_dec(v___x_2707_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2718_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2704_ == 0)
{
lean_ctor_set(v___x_2703_, 0, v_fvarId_2708_);
v___x_2713_ = v___x_2703_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_fvarId_2708_);
v___x_2713_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
lean_object* v___x_2715_; 
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 0, v___x_2713_);
v___x_2715_ = v___x_2710_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v___x_2713_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
}
else
{
lean_object* v___x_2719_; lean_object* v___x_2720_; 
lean_dec(v___x_2707_);
lean_del_object(v___x_2703_);
v___x_2719_ = lean_obj_once(&l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__9, &l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__9_once, _init_l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___closed__9);
v___x_2720_ = l_panic___at___00Lean_Compiler_LCNF_Internalize_internalizeCodeDecl_spec__0___redArg(v___x_2719_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
return v___x_2720_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl___boxed(lean_object* v_pu_2722_, lean_object* v_decl_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_){
_start:
{
uint8_t v_pu_boxed_2731_; uint8_t v_a_boxed_2732_; lean_object* v_res_2733_; 
v_pu_boxed_2731_ = lean_unbox(v_pu_2722_);
v_a_boxed_2732_ = lean_unbox(v_a_2724_);
v_res_2733_ = l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl(v_pu_boxed_2731_, v_decl_2723_, v_a_boxed_2732_, v_a_2725_, v_a_2726_, v_a_2727_, v_a_2728_, v_a_2729_);
lean_dec(v_a_2729_);
lean_dec_ref(v_a_2728_);
lean_dec(v_a_2727_);
lean_dec_ref(v_a_2726_);
lean_dec(v_a_2725_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_internalize(uint8_t v_pu_2734_, lean_object* v_code_2735_, lean_object* v_s_2736_, uint8_t v_uniqueIdents_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2743_ = lean_st_mk_ref(v_s_2736_);
v___x_2744_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v_pu_2734_, v_code_2735_, v_uniqueIdents_2737_, v___x_2743_, v_a_2738_, v_a_2739_, v_a_2740_, v_a_2741_);
if (lean_obj_tag(v___x_2744_) == 0)
{
lean_object* v_a_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2753_; 
v_a_2745_ = lean_ctor_get(v___x_2744_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2744_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2747_ = v___x_2744_;
v_isShared_2748_ = v_isSharedCheck_2753_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2744_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2753_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2749_; lean_object* v___x_2751_; 
v___x_2749_ = lean_st_ref_get(v___x_2743_);
lean_dec(v___x_2743_);
lean_dec(v___x_2749_);
if (v_isShared_2748_ == 0)
{
v___x_2751_ = v___x_2747_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_a_2745_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
}
}
}
else
{
lean_dec(v___x_2743_);
return v___x_2744_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_internalize___boxed(lean_object* v_pu_2754_, lean_object* v_code_2755_, lean_object* v_s_2756_, lean_object* v_uniqueIdents_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_){
_start:
{
uint8_t v_pu_boxed_2763_; uint8_t v_uniqueIdents_boxed_2764_; lean_object* v_res_2765_; 
v_pu_boxed_2763_ = lean_unbox(v_pu_2754_);
v_uniqueIdents_boxed_2764_ = lean_unbox(v_uniqueIdents_2757_);
v_res_2765_ = l_Lean_Compiler_LCNF_Code_internalize(v_pu_boxed_2763_, v_code_2755_, v_s_2756_, v_uniqueIdents_boxed_2764_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_);
lean_dec(v_a_2761_);
lean_dec_ref(v_a_2760_);
lean_dec(v_a_2759_);
lean_dec_ref(v_a_2758_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0___redArg(lean_object* v_f_2766_, lean_object* v_v_2767_, uint8_t v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_){
_start:
{
if (lean_obj_tag(v_v_2767_) == 0)
{
lean_object* v_code_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2800_; 
v_code_2775_ = lean_ctor_get(v_v_2767_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v_v_2767_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2777_ = v_v_2767_;
v_isShared_2778_ = v_isSharedCheck_2800_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_code_2775_);
lean_dec(v_v_2767_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2800_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2779_ = lean_box(v___y_2768_);
lean_inc(v___y_2773_);
lean_inc_ref(v___y_2772_);
lean_inc(v___y_2771_);
lean_inc_ref(v___y_2770_);
lean_inc(v___y_2769_);
v___x_2780_ = lean_apply_8(v_f_2766_, v_code_2775_, v___x_2779_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_, lean_box(0));
if (lean_obj_tag(v___x_2780_) == 0)
{
lean_object* v_a_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2791_; 
v_a_2781_ = lean_ctor_get(v___x_2780_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___x_2780_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2783_ = v___x_2780_;
v_isShared_2784_ = v_isSharedCheck_2791_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_a_2781_);
lean_dec(v___x_2780_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2791_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2786_; 
if (v_isShared_2778_ == 0)
{
lean_ctor_set(v___x_2777_, 0, v_a_2781_);
v___x_2786_ = v___x_2777_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v_a_2781_);
v___x_2786_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
lean_object* v___x_2788_; 
if (v_isShared_2784_ == 0)
{
lean_ctor_set(v___x_2783_, 0, v___x_2786_);
v___x_2788_ = v___x_2783_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v___x_2786_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
}
else
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2799_; 
lean_del_object(v___x_2777_);
v_a_2792_ = lean_ctor_get(v___x_2780_, 0);
v_isSharedCheck_2799_ = !lean_is_exclusive(v___x_2780_);
if (v_isSharedCheck_2799_ == 0)
{
v___x_2794_ = v___x_2780_;
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v___x_2780_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2797_; 
if (v_isShared_2795_ == 0)
{
v___x_2797_ = v___x_2794_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_a_2792_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
}
}
else
{
lean_object* v___x_2801_; 
lean_dec_ref(v_f_2766_);
v___x_2801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2801_, 0, v_v_2767_);
return v___x_2801_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0___redArg___boxed(lean_object* v_f_2802_, lean_object* v_v_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
uint8_t v___y_1417__boxed_2811_; lean_object* v_res_2812_; 
v___y_1417__boxed_2811_ = lean_unbox(v___y_2804_);
v_res_2812_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0___redArg(v_f_2802_, v_v_2803_, v___y_1417__boxed_2811_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
lean_dec(v___y_2805_);
return v_res_2812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0(uint8_t v_pu_2813_, lean_object* v_f_2814_, lean_object* v_v_2815_, uint8_t v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_){
_start:
{
lean_object* v___x_2823_; 
v___x_2823_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0___redArg(v_f_2814_, v_v_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0___boxed(lean_object* v_pu_2824_, lean_object* v_f_2825_, lean_object* v_v_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_){
_start:
{
uint8_t v_pu_boxed_2834_; uint8_t v___y_1493__boxed_2835_; lean_object* v_res_2836_; 
v_pu_boxed_2834_ = lean_unbox(v_pu_2824_);
v___y_1493__boxed_2835_ = lean_unbox(v___y_2827_);
v_res_2836_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0(v_pu_boxed_2834_, v_f_2825_, v_v_2826_, v___y_1493__boxed_2835_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v___y_2828_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go(uint8_t v_pu_2837_, lean_object* v_decl_2838_, uint8_t v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_){
_start:
{
lean_object* v_toSignature_2846_; lean_object* v_value_2847_; uint8_t v_recursive_2848_; lean_object* v_inlineAttr_x3f_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2915_; 
v_toSignature_2846_ = lean_ctor_get(v_decl_2838_, 0);
v_value_2847_ = lean_ctor_get(v_decl_2838_, 1);
v_recursive_2848_ = lean_ctor_get_uint8(v_decl_2838_, sizeof(void*)*3);
v_inlineAttr_x3f_2849_ = lean_ctor_get(v_decl_2838_, 2);
v_isSharedCheck_2915_ = !lean_is_exclusive(v_decl_2838_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2851_ = v_decl_2838_;
v_isShared_2852_ = v_isSharedCheck_2915_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_inlineAttr_x3f_2849_);
lean_inc(v_value_2847_);
lean_inc(v_toSignature_2846_);
lean_dec(v_decl_2838_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2915_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v_name_2853_; lean_object* v_levelParams_2854_; lean_object* v_type_2855_; lean_object* v_params_2856_; uint8_t v_safe_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2914_; 
v_name_2853_ = lean_ctor_get(v_toSignature_2846_, 0);
v_levelParams_2854_ = lean_ctor_get(v_toSignature_2846_, 1);
v_type_2855_ = lean_ctor_get(v_toSignature_2846_, 2);
v_params_2856_ = lean_ctor_get(v_toSignature_2846_, 3);
v_safe_2857_ = lean_ctor_get_uint8(v_toSignature_2846_, sizeof(void*)*4);
v_isSharedCheck_2914_ = !lean_is_exclusive(v_toSignature_2846_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2859_ = v_toSignature_2846_;
v_isShared_2860_ = v_isSharedCheck_2914_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_params_2856_);
lean_inc(v_type_2855_);
lean_inc(v_levelParams_2854_);
lean_inc(v_name_2853_);
lean_dec(v_toSignature_2846_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2914_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2861_; 
v___x_2861_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Internalize_internalizeExpr(v_pu_2837_, v_type_2855_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_);
if (lean_obj_tag(v___x_2861_) == 0)
{
lean_object* v_a_2862_; size_t v_sz_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_1407__overap_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v_a_2862_ = lean_ctor_get(v___x_2861_, 0);
lean_inc(v_a_2862_);
lean_dec_ref_known(v___x_2861_, 1);
v_sz_2863_ = lean_array_size(v_params_2856_);
v___x_2864_ = l_unsafeCast___redArg(v_params_2856_);
lean_dec_ref(v_params_2856_);
v___x_2865_ = lean_box(v_pu_2837_);
v___x_2866_ = lean_box_usize(v_sz_2863_);
v___x_2867_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeArgs___boxed__const__1));
v___x_2868_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Internalize_internalizeFunDecl_spec__0___boxed), 11, 4);
lean_closure_set(v___x_2868_, 0, v___x_2865_);
lean_closure_set(v___x_2868_, 1, v___x_2866_);
lean_closure_set(v___x_2868_, 2, v___x_2867_);
lean_closure_set(v___x_2868_, 3, v___x_2864_);
v___x_1407__overap_2869_ = l_unsafeCast___redArg(v___x_2868_);
lean_dec_ref(v___x_2868_);
v___x_2870_ = lean_box(v_a_2839_);
lean_inc(v_a_2844_);
lean_inc_ref(v_a_2843_);
lean_inc(v_a_2842_);
lean_inc_ref(v_a_2841_);
lean_inc(v_a_2840_);
v___x_2871_ = lean_apply_7(v___x_1407__overap_2869_, v___x_2870_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, lean_box(0));
if (lean_obj_tag(v___x_2871_) == 0)
{
lean_object* v_a_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
v_a_2872_ = lean_ctor_get(v___x_2871_, 0);
lean_inc(v_a_2872_);
lean_dec_ref_known(v___x_2871_, 1);
v___x_2873_ = lean_box(v_pu_2837_);
v___x_2874_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Internalize_internalizeCode___boxed), 9, 1);
lean_closure_set(v___x_2874_, 0, v___x_2873_);
v___x_2875_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go_spec__0___redArg(v___x_2874_, v_value_2847_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_);
if (lean_obj_tag(v___x_2875_) == 0)
{
lean_object* v_a_2876_; lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_2889_; 
v_a_2876_ = lean_ctor_get(v___x_2875_, 0);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2875_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2878_ = v___x_2875_;
v_isShared_2879_ = v_isSharedCheck_2889_;
goto v_resetjp_2877_;
}
else
{
lean_inc(v_a_2876_);
lean_dec(v___x_2875_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_2889_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
lean_object* v___x_2881_; 
if (v_isShared_2860_ == 0)
{
lean_ctor_set(v___x_2859_, 3, v_a_2872_);
lean_ctor_set(v___x_2859_, 2, v_a_2862_);
v___x_2881_ = v___x_2859_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v_name_2853_);
lean_ctor_set(v_reuseFailAlloc_2888_, 1, v_levelParams_2854_);
lean_ctor_set(v_reuseFailAlloc_2888_, 2, v_a_2862_);
lean_ctor_set(v_reuseFailAlloc_2888_, 3, v_a_2872_);
lean_ctor_set_uint8(v_reuseFailAlloc_2888_, sizeof(void*)*4, v_safe_2857_);
v___x_2881_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
lean_object* v___x_2883_; 
if (v_isShared_2852_ == 0)
{
lean_ctor_set(v___x_2851_, 1, v_a_2876_);
lean_ctor_set(v___x_2851_, 0, v___x_2881_);
v___x_2883_ = v___x_2851_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v___x_2881_);
lean_ctor_set(v_reuseFailAlloc_2887_, 1, v_a_2876_);
lean_ctor_set(v_reuseFailAlloc_2887_, 2, v_inlineAttr_x3f_2849_);
lean_ctor_set_uint8(v_reuseFailAlloc_2887_, sizeof(void*)*3, v_recursive_2848_);
v___x_2883_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
lean_object* v___x_2885_; 
if (v_isShared_2879_ == 0)
{
lean_ctor_set(v___x_2878_, 0, v___x_2883_);
v___x_2885_ = v___x_2878_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v___x_2883_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
}
}
}
else
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
lean_dec(v_a_2872_);
lean_dec(v_a_2862_);
lean_del_object(v___x_2859_);
lean_dec(v_levelParams_2854_);
lean_dec(v_name_2853_);
lean_del_object(v___x_2851_);
lean_dec(v_inlineAttr_x3f_2849_);
v_a_2890_ = lean_ctor_get(v___x_2875_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2875_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___x_2875_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2875_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
else
{
lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2905_; 
lean_dec(v_a_2862_);
lean_del_object(v___x_2859_);
lean_dec(v_levelParams_2854_);
lean_dec(v_name_2853_);
lean_del_object(v___x_2851_);
lean_dec(v_inlineAttr_x3f_2849_);
lean_dec_ref(v_value_2847_);
v_a_2898_ = lean_ctor_get(v___x_2871_, 0);
v_isSharedCheck_2905_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_2905_ == 0)
{
v___x_2900_ = v___x_2871_;
v_isShared_2901_ = v_isSharedCheck_2905_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_dec(v___x_2871_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2905_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v___x_2903_; 
if (v_isShared_2901_ == 0)
{
v___x_2903_ = v___x_2900_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v_a_2898_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
return v___x_2903_;
}
}
}
}
else
{
lean_object* v_a_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2913_; 
lean_del_object(v___x_2859_);
lean_dec_ref(v_params_2856_);
lean_dec(v_levelParams_2854_);
lean_dec(v_name_2853_);
lean_del_object(v___x_2851_);
lean_dec(v_inlineAttr_x3f_2849_);
lean_dec_ref(v_value_2847_);
v_a_2906_ = lean_ctor_get(v___x_2861_, 0);
v_isSharedCheck_2913_ = !lean_is_exclusive(v___x_2861_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2908_ = v___x_2861_;
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_a_2906_);
lean_dec(v___x_2861_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2911_; 
if (v_isShared_2909_ == 0)
{
v___x_2911_ = v___x_2908_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_a_2906_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go___boxed(lean_object* v_pu_2916_, lean_object* v_decl_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_, lean_object* v_a_2923_, lean_object* v_a_2924_){
_start:
{
uint8_t v_pu_boxed_2925_; uint8_t v_a_boxed_2926_; lean_object* v_res_2927_; 
v_pu_boxed_2925_ = lean_unbox(v_pu_2916_);
v_a_boxed_2926_ = lean_unbox(v_a_2918_);
v_res_2927_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go(v_pu_boxed_2925_, v_decl_2917_, v_a_boxed_2926_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_);
lean_dec(v_a_2923_);
lean_dec_ref(v_a_2922_);
lean_dec(v_a_2921_);
lean_dec_ref(v_a_2920_);
lean_dec(v_a_2919_);
return v_res_2927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_internalize(uint8_t v_pu_2928_, lean_object* v_decl_2929_, lean_object* v_s_2930_, uint8_t v_uniqueIdents_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_){
_start:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2937_ = lean_st_mk_ref(v_s_2930_);
v___x_2938_ = l___private_Lean_Compiler_LCNF_Internalize_0__Lean_Compiler_LCNF_Decl_internalize_go(v_pu_2928_, v_decl_2929_, v_uniqueIdents_2931_, v___x_2937_, v_a_2932_, v_a_2933_, v_a_2934_, v_a_2935_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2947_; 
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2941_ = v___x_2938_;
v_isShared_2942_ = v_isSharedCheck_2947_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v___x_2938_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2947_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2943_; lean_object* v___x_2945_; 
v___x_2943_ = lean_st_ref_get(v___x_2937_);
lean_dec(v___x_2937_);
lean_dec(v___x_2943_);
if (v_isShared_2942_ == 0)
{
v___x_2945_ = v___x_2941_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_a_2939_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
return v___x_2945_;
}
}
}
else
{
lean_dec(v___x_2937_);
return v___x_2938_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_internalize___boxed(lean_object* v_pu_2948_, lean_object* v_decl_2949_, lean_object* v_s_2950_, lean_object* v_uniqueIdents_2951_, lean_object* v_a_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_){
_start:
{
uint8_t v_pu_boxed_2957_; uint8_t v_uniqueIdents_boxed_2958_; lean_object* v_res_2959_; 
v_pu_boxed_2957_ = lean_unbox(v_pu_2948_);
v_uniqueIdents_boxed_2958_ = lean_unbox(v_uniqueIdents_2951_);
v_res_2959_ = l_Lean_Compiler_LCNF_Decl_internalize(v_pu_boxed_2957_, v_decl_2949_, v_s_2950_, v_uniqueIdents_boxed_2958_, v_a_2952_, v_a_2953_, v_a_2954_, v_a_2955_);
lean_dec(v_a_2955_);
lean_dec_ref(v_a_2954_);
lean_dec(v_a_2953_);
lean_dec_ref(v_a_2952_);
return v_res_2959_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2960_ = lean_box(0);
v___x_2961_ = lean_unsigned_to_nat(16u);
v___x_2962_ = lean_mk_array(v___x_2961_, v___x_2960_);
return v___x_2962_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2963_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__0);
v___x_2964_ = lean_unsigned_to_nat(0u);
v___x_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
lean_ctor_set(v___x_2965_, 1, v___x_2963_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0(uint8_t v_pu_2966_, size_t v_sz_2967_, size_t v_i_2968_, lean_object* v_bs_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_){
_start:
{
uint8_t v___x_2975_; 
v___x_2975_ = lean_usize_dec_lt(v_i_2968_, v_sz_2967_);
if (v___x_2975_ == 0)
{
lean_object* v___x_2976_; lean_object* v___x_2977_; 
v___x_2976_ = l_unsafeCast___redArg(v_bs_2969_);
lean_dec_ref(v_bs_2969_);
v___x_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2976_);
return v___x_2977_;
}
else
{
lean_object* v_v_2978_; lean_object* v___x_2979_; lean_object* v_bs_x27_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v_lctx_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_3009_; 
v_v_2978_ = lean_array_uget(v_bs_2969_, v_i_2968_);
v___x_2979_ = lean_unsigned_to_nat(0u);
v_bs_x27_2980_ = lean_array_uset(v_bs_2969_, v_i_2968_, v___x_2979_);
v___x_2981_ = l_unsafeCast___redArg(v_v_2978_);
lean_dec(v_v_2978_);
v___x_2982_ = lean_st_ref_take(v___y_2971_);
v_lctx_2983_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3009_ == 0)
{
lean_object* v_unused_3010_; 
v_unused_3010_ = lean_ctor_get(v___x_2982_, 1);
lean_dec(v_unused_3010_);
v___x_2985_ = v___x_2982_;
v_isShared_2986_ = v_isSharedCheck_3009_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_lctx_2983_);
lean_dec(v___x_2982_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_3009_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v___x_2987_; lean_object* v___x_2989_; 
v___x_2987_ = lean_unsigned_to_nat(1u);
if (v_isShared_2986_ == 0)
{
lean_ctor_set(v___x_2985_, 1, v___x_2987_);
v___x_2989_ = v___x_2985_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_lctx_2983_);
lean_ctor_set(v_reuseFailAlloc_3008_, 1, v___x_2987_);
v___x_2989_ = v_reuseFailAlloc_3008_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
lean_object* v___x_2990_; lean_object* v___x_2991_; uint8_t v___x_2992_; lean_object* v___x_2993_; 
v___x_2990_ = lean_st_ref_put(v___y_2971_, v___x_2989_);
v___x_2991_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1);
v___x_2992_ = 0;
v___x_2993_ = l_Lean_Compiler_LCNF_Decl_internalize(v_pu_2966_, v___x_2981_, v___x_2991_, v___x_2992_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v_a_2994_; size_t v___x_2995_; size_t v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; 
v_a_2994_ = lean_ctor_get(v___x_2993_, 0);
lean_inc(v_a_2994_);
lean_dec_ref_known(v___x_2993_, 1);
v___x_2995_ = ((size_t)1ULL);
v___x_2996_ = lean_usize_add(v_i_2968_, v___x_2995_);
v___x_2997_ = l_unsafeCast___redArg(v_a_2994_);
lean_dec(v_a_2994_);
v___x_2998_ = lean_array_uset(v_bs_x27_2980_, v_i_2968_, v___x_2997_);
v_i_2968_ = v___x_2996_;
v_bs_2969_ = v___x_2998_;
goto _start;
}
else
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3007_; 
lean_dec_ref(v_bs_x27_2980_);
v_a_3000_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_3002_ = v___x_2993_;
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2993_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3005_; 
if (v_isShared_3003_ == 0)
{
v___x_3005_ = v___x_3002_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_3000_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___boxed(lean_object* v_pu_3011_, lean_object* v_sz_3012_, lean_object* v_i_3013_, lean_object* v_bs_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_){
_start:
{
uint8_t v_pu_boxed_3020_; size_t v_sz_boxed_3021_; size_t v_i_boxed_3022_; lean_object* v_res_3023_; 
v_pu_boxed_3020_ = lean_unbox(v_pu_3011_);
v_sz_boxed_3021_ = lean_unbox_usize(v_sz_3012_);
lean_dec(v_sz_3012_);
v_i_boxed_3022_ = lean_unbox_usize(v_i_3013_);
lean_dec(v_i_3013_);
v_res_3023_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0(v_pu_boxed_3020_, v_sz_boxed_3021_, v_i_boxed_3022_, v_bs_3014_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_);
lean_dec(v___y_3018_);
lean_dec_ref(v___y_3017_);
lean_dec(v___y_3016_);
lean_dec_ref(v___y_3015_);
return v_res_3023_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_cleanup___closed__0(void){
_start:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3024_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1);
v___x_3025_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3024_);
lean_ctor_set(v___x_3025_, 1, v___x_3024_);
lean_ctor_set(v___x_3025_, 2, v___x_3024_);
lean_ctor_set(v___x_3025_, 3, v___x_3024_);
lean_ctor_set(v___x_3025_, 4, v___x_3024_);
lean_ctor_set(v___x_3025_, 5, v___x_3024_);
return v___x_3025_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_cleanup___closed__1(void){
_start:
{
lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3026_ = lean_unsigned_to_nat(1u);
v___x_3027_ = lean_obj_once(&l_Lean_Compiler_LCNF_cleanup___closed__0, &l_Lean_Compiler_LCNF_cleanup___closed__0_once, _init_l_Lean_Compiler_LCNF_cleanup___closed__0);
v___x_3028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3027_);
lean_ctor_set(v___x_3028_, 1, v___x_3026_);
return v___x_3028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_cleanup(uint8_t v_pu_3029_, lean_object* v_decl_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_){
_start:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; size_t v_sz_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_1051__overap_3045_; lean_object* v___x_3046_; 
v___x_3036_ = lean_st_ref_take(v_a_3032_);
lean_dec(v___x_3036_);
v___x_3037_ = lean_obj_once(&l_Lean_Compiler_LCNF_cleanup___closed__1, &l_Lean_Compiler_LCNF_cleanup___closed__1_once, _init_l_Lean_Compiler_LCNF_cleanup___closed__1);
v___x_3038_ = lean_st_ref_put(v_a_3032_, v___x_3037_);
v_sz_3039_ = lean_array_size(v_decl_3030_);
v___x_3040_ = l_unsafeCast___redArg(v_decl_3030_);
v___x_3041_ = lean_box(v_pu_3029_);
v___x_3042_ = lean_box_usize(v_sz_3039_);
v___x_3043_ = ((lean_object*)(l_Lean_Compiler_LCNF_Internalize_internalizeArgs___boxed__const__1));
v___x_3044_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___boxed), 9, 4);
lean_closure_set(v___x_3044_, 0, v___x_3041_);
lean_closure_set(v___x_3044_, 1, v___x_3042_);
lean_closure_set(v___x_3044_, 2, v___x_3043_);
lean_closure_set(v___x_3044_, 3, v___x_3040_);
v___x_1051__overap_3045_ = l_unsafeCast___redArg(v___x_3044_);
lean_dec_ref(v___x_3044_);
lean_inc(v_a_3034_);
lean_inc_ref(v_a_3033_);
lean_inc(v_a_3032_);
lean_inc_ref(v_a_3031_);
v___x_3046_ = lean_apply_5(v___x_1051__overap_3045_, v_a_3031_, v_a_3032_, v_a_3033_, v_a_3034_, lean_box(0));
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_cleanup___boxed(lean_object* v_pu_3047_, lean_object* v_decl_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_){
_start:
{
uint8_t v_pu_boxed_3054_; lean_object* v_res_3055_; 
v_pu_boxed_3054_ = lean_unbox(v_pu_3047_);
v_res_3055_ = l_Lean_Compiler_LCNF_cleanup(v_pu_boxed_3054_, v_decl_3048_, v_a_3049_, v_a_3050_, v_a_3051_, v_a_3052_);
lean_dec(v_a_3052_);
lean_dec_ref(v_a_3051_);
lean_dec(v_a_3050_);
lean_dec_ref(v_a_3049_);
lean_dec_ref(v_decl_3048_);
return v_res_3055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normalizeFVarIds___lam__0(lean_object* v_a_3056_, lean_object* v_ngen_3057_, lean_object* v_a_x3f_3058_){
_start:
{
lean_object* v___x_3060_; lean_object* v_env_3061_; lean_object* v_nextMacroScope_3062_; lean_object* v_auxDeclNGen_3063_; lean_object* v_traceState_3064_; lean_object* v_cache_3065_; lean_object* v_messages_3066_; lean_object* v_infoState_3067_; lean_object* v_snapshotTasks_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3078_; 
v___x_3060_ = lean_st_ref_take(v_a_3056_);
v_env_3061_ = lean_ctor_get(v___x_3060_, 0);
v_nextMacroScope_3062_ = lean_ctor_get(v___x_3060_, 1);
v_auxDeclNGen_3063_ = lean_ctor_get(v___x_3060_, 3);
v_traceState_3064_ = lean_ctor_get(v___x_3060_, 4);
v_cache_3065_ = lean_ctor_get(v___x_3060_, 5);
v_messages_3066_ = lean_ctor_get(v___x_3060_, 6);
v_infoState_3067_ = lean_ctor_get(v___x_3060_, 7);
v_snapshotTasks_3068_ = lean_ctor_get(v___x_3060_, 8);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3078_ == 0)
{
lean_object* v_unused_3079_; 
v_unused_3079_ = lean_ctor_get(v___x_3060_, 2);
lean_dec(v_unused_3079_);
v___x_3070_ = v___x_3060_;
v_isShared_3071_ = v_isSharedCheck_3078_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_snapshotTasks_3068_);
lean_inc(v_infoState_3067_);
lean_inc(v_messages_3066_);
lean_inc(v_cache_3065_);
lean_inc(v_traceState_3064_);
lean_inc(v_auxDeclNGen_3063_);
lean_inc(v_nextMacroScope_3062_);
lean_inc(v_env_3061_);
lean_dec(v___x_3060_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3078_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3072_; lean_object* v___x_3074_; 
v___x_3072_ = lean_box(0);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 2, v_ngen_3057_);
v___x_3074_ = v___x_3070_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_env_3061_);
lean_ctor_set(v_reuseFailAlloc_3077_, 1, v_nextMacroScope_3062_);
lean_ctor_set(v_reuseFailAlloc_3077_, 2, v_ngen_3057_);
lean_ctor_set(v_reuseFailAlloc_3077_, 3, v_auxDeclNGen_3063_);
lean_ctor_set(v_reuseFailAlloc_3077_, 4, v_traceState_3064_);
lean_ctor_set(v_reuseFailAlloc_3077_, 5, v_cache_3065_);
lean_ctor_set(v_reuseFailAlloc_3077_, 6, v_messages_3066_);
lean_ctor_set(v_reuseFailAlloc_3077_, 7, v_infoState_3067_);
lean_ctor_set(v_reuseFailAlloc_3077_, 8, v_snapshotTasks_3068_);
v___x_3074_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3075_ = lean_st_ref_put(v_a_3056_, v___x_3074_);
v___x_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3072_);
return v___x_3076_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normalizeFVarIds___lam__0___boxed(lean_object* v_a_3080_, lean_object* v_ngen_3081_, lean_object* v_a_x3f_3082_, lean_object* v___y_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l_Lean_Compiler_LCNF_normalizeFVarIds___lam__0(v_a_3080_, v_ngen_3081_, v_a_x3f_3082_);
lean_dec(v_a_x3f_3082_);
lean_dec(v_a_3080_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normalizeFVarIds(uint8_t v_pu_3091_, lean_object* v_decl_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_){
_start:
{
lean_object* v___x_3096_; lean_object* v_ngen_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v_env_3100_; lean_object* v_nextMacroScope_3101_; lean_object* v_auxDeclNGen_3102_; lean_object* v_traceState_3103_; lean_object* v_cache_3104_; lean_object* v_messages_3105_; lean_object* v_infoState_3106_; lean_object* v_snapshotTasks_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3151_; 
v___x_3096_ = lean_st_ref_get(v_a_3094_);
v_ngen_3097_ = lean_ctor_get(v___x_3096_, 2);
lean_inc_ref(v_ngen_3097_);
lean_dec(v___x_3096_);
v___x_3098_ = ((lean_object*)(l_Lean_Compiler_LCNF_normalizeFVarIds___closed__2));
v___x_3099_ = lean_st_ref_take(v_a_3094_);
v_env_3100_ = lean_ctor_get(v___x_3099_, 0);
v_nextMacroScope_3101_ = lean_ctor_get(v___x_3099_, 1);
v_auxDeclNGen_3102_ = lean_ctor_get(v___x_3099_, 3);
v_traceState_3103_ = lean_ctor_get(v___x_3099_, 4);
v_cache_3104_ = lean_ctor_get(v___x_3099_, 5);
v_messages_3105_ = lean_ctor_get(v___x_3099_, 6);
v_infoState_3106_ = lean_ctor_get(v___x_3099_, 7);
v_snapshotTasks_3107_ = lean_ctor_get(v___x_3099_, 8);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3151_ == 0)
{
lean_object* v_unused_3152_; 
v_unused_3152_ = lean_ctor_get(v___x_3099_, 2);
lean_dec(v_unused_3152_);
v___x_3109_ = v___x_3099_;
v_isShared_3110_ = v_isSharedCheck_3151_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_snapshotTasks_3107_);
lean_inc(v_infoState_3106_);
lean_inc(v_messages_3105_);
lean_inc(v_cache_3104_);
lean_inc(v_traceState_3103_);
lean_inc(v_auxDeclNGen_3102_);
lean_inc(v_nextMacroScope_3101_);
lean_inc(v_env_3100_);
lean_dec(v___x_3099_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3151_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
lean_ctor_set(v___x_3109_, 2, v___x_3098_);
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_env_3100_);
lean_ctor_set(v_reuseFailAlloc_3150_, 1, v_nextMacroScope_3101_);
lean_ctor_set(v_reuseFailAlloc_3150_, 2, v___x_3098_);
lean_ctor_set(v_reuseFailAlloc_3150_, 3, v_auxDeclNGen_3102_);
lean_ctor_set(v_reuseFailAlloc_3150_, 4, v_traceState_3103_);
lean_ctor_set(v_reuseFailAlloc_3150_, 5, v_cache_3104_);
lean_ctor_set(v_reuseFailAlloc_3150_, 6, v_messages_3105_);
lean_ctor_set(v_reuseFailAlloc_3150_, 7, v_infoState_3106_);
lean_ctor_set(v_reuseFailAlloc_3150_, 8, v_snapshotTasks_3107_);
v___x_3112_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; uint8_t v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; uint8_t v___x_3120_; lean_object* v_r_3121_; 
v___x_3113_ = lean_st_ref_put(v_a_3094_, v___x_3112_);
v___x_3114_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_cleanup_spec__0___closed__1);
v___x_3115_ = 0;
v___x_3116_ = lean_box(v_pu_3091_);
v___x_3117_ = lean_box(v___x_3115_);
v___x_3118_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_internalize___boxed), 9, 4);
lean_closure_set(v___x_3118_, 0, v___x_3116_);
lean_closure_set(v___x_3118_, 1, v_decl_3092_);
lean_closure_set(v___x_3118_, 2, v___x_3114_);
lean_closure_set(v___x_3118_, 3, v___x_3117_);
v___x_3119_ = lean_obj_once(&l_Lean_Compiler_LCNF_cleanup___closed__1, &l_Lean_Compiler_LCNF_cleanup___closed__1_once, _init_l_Lean_Compiler_LCNF_cleanup___closed__1);
v___x_3120_ = 0;
v_r_3121_ = l_Lean_Compiler_LCNF_CompilerM_run___redArg(v___x_3118_, v___x_3119_, v___x_3120_, v_a_3093_, v_a_3094_);
if (lean_obj_tag(v_r_3121_) == 0)
{
lean_object* v_a_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3138_; 
v_a_3122_ = lean_ctor_get(v_r_3121_, 0);
v_isSharedCheck_3138_ = !lean_is_exclusive(v_r_3121_);
if (v_isSharedCheck_3138_ == 0)
{
v___x_3124_ = v_r_3121_;
v_isShared_3125_ = v_isSharedCheck_3138_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_a_3122_);
lean_dec(v_r_3121_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3138_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
lean_object* v___x_3127_; 
lean_inc(v_a_3122_);
if (v_isShared_3125_ == 0)
{
lean_ctor_set_tag(v___x_3124_, 1);
v___x_3127_ = v___x_3124_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v_a_3122_);
v___x_3127_ = v_reuseFailAlloc_3137_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
lean_object* v___x_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
v___x_3128_ = l_Lean_Compiler_LCNF_normalizeFVarIds___lam__0(v_a_3094_, v_ngen_3097_, v___x_3127_);
lean_dec_ref(v___x_3127_);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3135_ == 0)
{
lean_object* v_unused_3136_; 
v_unused_3136_ = lean_ctor_get(v___x_3128_, 0);
lean_dec(v_unused_3136_);
v___x_3130_ = v___x_3128_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_dec(v___x_3128_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
lean_ctor_set(v___x_3130_, 0, v_a_3122_);
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3122_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
}
else
{
lean_object* v_a_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3148_; 
v_a_3139_ = lean_ctor_get(v_r_3121_, 0);
lean_inc(v_a_3139_);
lean_dec_ref_known(v_r_3121_, 1);
v___x_3140_ = lean_box(0);
v___x_3141_ = l_Lean_Compiler_LCNF_normalizeFVarIds___lam__0(v_a_3094_, v_ngen_3097_, v___x_3140_);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3148_ == 0)
{
lean_object* v_unused_3149_; 
v_unused_3149_ = lean_ctor_get(v___x_3141_, 0);
lean_dec(v_unused_3149_);
v___x_3143_ = v___x_3141_;
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
else
{
lean_dec(v___x_3141_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3146_; 
if (v_isShared_3144_ == 0)
{
lean_ctor_set_tag(v___x_3143_, 1);
lean_ctor_set(v___x_3143_, 0, v_a_3139_);
v___x_3146_ = v___x_3143_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_a_3139_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
return v___x_3146_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normalizeFVarIds___boxed(lean_object* v_pu_3153_, lean_object* v_decl_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_){
_start:
{
uint8_t v_pu_boxed_3158_; lean_object* v_res_3159_; 
v_pu_boxed_3158_ = lean_unbox(v_pu_3153_);
v_res_3159_ = l_Lean_Compiler_LCNF_normalizeFVarIds(v_pu_boxed_3158_, v_decl_3154_, v_a_3155_, v_a_3156_);
lean_dec(v_a_3156_);
lean_dec_ref(v_a_3155_);
return v_res_3159_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Bind(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Bind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Bind(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Bind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Internalize(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Compiler.LCNF.ExpandResetReuse
// Imports: public import Lean.Compiler.LCNF.PassManager import Init.While
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
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCodeDecl_default___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(uint8_t, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(uint8_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_attachCodeDecls___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkParam(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__2_value;
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__3;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__0;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.ExpandResetReuse"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "_private.Lean.Compiler.LCNF.ExpandResetReuse.0.Lean.Compiler.LCNF.eraseProjIncFor"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__2_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "assertion violation: n > 0 -- 0 incs should not be happening\n      "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__0(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "_private.Lean.Compiler.LCNF.ExpandResetReuse.0.Lean.Compiler.LCNF.remapSets"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "_private.Lean.Compiler.LCNF.ExpandResetReuse.0.Lean.Compiler.LCNF.partitionSelfSets"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___closed__0_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unused"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(189, 23, 1, 196, 228, 87, 228, 117)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tobj"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(25, 168, 138, 20, 203, 141, 233, 12)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__3_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__4;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "reuseFailAlloc"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath___closed__0_value),LEAN_SCALAR_PTR_LITERAL(162, 58, 180, 100, 190, 122, 70, 27)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "reusejp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 245, 4, 252, 178, 144, 44, 230)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__2_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__3_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "assertion violation: n == 1 -- n must be one since `resetToken := reset ...`\n      "};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "_private.Lean.Compiler.LCNF.ExpandResetReuse.0.Lean.Compiler.LCNF.processResetCont"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__5_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isShared"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__0_value),LEAN_SCALAR_PTR_LITERAL(230, 21, 27, 150, 131, 176, 68, 226)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "resetjp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 44, 28, 106, 212, 154, 129, 104)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "isSharedCheck"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 46, 40, 117, 142, 84, 34, 112)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_expandResetReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "expandResetReuse"};
static const lean_object* l_Lean_Compiler_LCNF_expandResetReuse___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_expandResetReuse___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_expandResetReuse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_expandResetReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 183, 62, 154, 7, 128, 85, 195)}};
static const lean_object* l_Lean_Compiler_LCNF_expandResetReuse___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_expandResetReuse___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_expandResetReuse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_expandResetReuse___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_expandResetReuse___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_expandResetReuse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_expandResetReuse___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_expandResetReuse;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_expandResetReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(218, 164, 249, 156, 95, 195, 57, 65)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ExpandResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_instMonadEIO___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = l_Array_instInhabited___redArg();
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0(lean_object* v_msg_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v_toApplicative_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_49_; 
v___x_11_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0);
v___x_12_ = l_StateRefT_x27_instMonad___redArg(v___x_11_);
v_toApplicative_13_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_49_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_49_ == 0)
{
lean_object* v_unused_50_; 
v_unused_50_ = lean_ctor_get(v___x_12_, 1);
lean_dec(v_unused_50_);
v___x_15_ = v___x_12_;
v_isShared_16_ = v_isSharedCheck_49_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_toApplicative_13_);
lean_dec(v___x_12_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_49_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v_toFunctor_17_; lean_object* v_toSeq_18_; lean_object* v_toSeqLeft_19_; lean_object* v_toSeqRight_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_47_; 
v_toFunctor_17_ = lean_ctor_get(v_toApplicative_13_, 0);
v_toSeq_18_ = lean_ctor_get(v_toApplicative_13_, 2);
v_toSeqLeft_19_ = lean_ctor_get(v_toApplicative_13_, 3);
v_toSeqRight_20_ = lean_ctor_get(v_toApplicative_13_, 4);
v_isSharedCheck_47_ = !lean_is_exclusive(v_toApplicative_13_);
if (v_isSharedCheck_47_ == 0)
{
lean_object* v_unused_48_; 
v_unused_48_ = lean_ctor_get(v_toApplicative_13_, 1);
lean_dec(v_unused_48_);
v___x_22_ = v_toApplicative_13_;
v_isShared_23_ = v_isSharedCheck_47_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_toSeqRight_20_);
lean_inc(v_toSeqLeft_19_);
lean_inc(v_toSeq_18_);
lean_inc(v_toFunctor_17_);
lean_dec(v_toApplicative_13_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_47_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___f_24_; lean_object* v___f_25_; lean_object* v___f_26_; lean_object* v___f_27_; lean_object* v___x_28_; lean_object* v___f_29_; lean_object* v___f_30_; lean_object* v___f_31_; lean_object* v___x_33_; 
v___f_24_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__1));
v___f_25_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__2));
lean_inc_ref(v_toFunctor_17_);
v___f_26_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_26_, 0, v_toFunctor_17_);
v___f_27_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_27_, 0, v_toFunctor_17_);
v___x_28_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_28_, 0, v___f_26_);
lean_ctor_set(v___x_28_, 1, v___f_27_);
v___f_29_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_29_, 0, v_toSeqRight_20_);
v___f_30_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_30_, 0, v_toSeqLeft_19_);
v___f_31_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_31_, 0, v_toSeq_18_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 4, v___f_29_);
lean_ctor_set(v___x_22_, 3, v___f_30_);
lean_ctor_set(v___x_22_, 2, v___f_31_);
lean_ctor_set(v___x_22_, 1, v___f_24_);
lean_ctor_set(v___x_22_, 0, v___x_28_);
v___x_33_ = v___x_22_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_28_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v___f_24_);
lean_ctor_set(v_reuseFailAlloc_46_, 2, v___f_31_);
lean_ctor_set(v_reuseFailAlloc_46_, 3, v___f_30_);
lean_ctor_set(v_reuseFailAlloc_46_, 4, v___f_29_);
v___x_33_ = v_reuseFailAlloc_46_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
lean_object* v___x_35_; 
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 1, v___f_25_);
lean_ctor_set(v___x_15_, 0, v___x_33_);
v___x_35_ = v___x_15_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v___x_33_);
lean_ctor_set(v_reuseFailAlloc_45_, 1, v___f_25_);
v___x_35_ = v_reuseFailAlloc_45_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___f_42_; lean_object* v___x_2594__overap_43_; lean_object* v___x_44_; 
v___x_36_ = l_StateRefT_x27_instMonad___redArg(v___x_35_);
v___x_37_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__3, &l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__3_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__3);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_39_, 0, v___x_37_);
lean_ctor_set(v___x_39_, 1, v___x_38_);
v___x_40_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
v___x_41_ = l_instInhabitedOfMonad___redArg(v___x_36_, v___x_40_);
v___f_42_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_42_, 0, v___x_41_);
v___x_2594__overap_43_ = lean_panic_fn_borrowed(v___f_42_, v_msg_5_);
lean_dec_ref(v___f_42_);
lean_inc(v___y_9_);
lean_inc_ref(v___y_8_);
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
v___x_44_ = lean_apply_5(v___x_2594__overap_43_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, lean_box(0));
return v___x_44_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___boxed(lean_object* v_msg_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0(v_msg_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___lam__0(lean_object* v_fst_58_, lean_object* v_snd_59_, lean_object* v_fst_60_, lean_object* v_x_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_67_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_67_, 0, v_fst_58_);
lean_ctor_set(v___x_67_, 1, v_snd_59_);
v___x_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_68_, 0, v_fst_60_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
v___x_70_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___lam__0___boxed(lean_object* v_fst_71_, lean_object* v_snd_72_, lean_object* v_fst_73_, lean_object* v_x_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___lam__0(v_fst_71_, v_snd_72_, v_fst_73_, v_x_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
lean_dec_ref(v_x_74_);
return v_res_80_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Lean_Compiler_LCNF_instInhabitedCodeDecl_default___redArg();
return v___x_81_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_85_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__3));
v___x_86_ = lean_unsigned_to_nat(6u);
v___x_87_ = lean_unsigned_to_nat(87u);
v___x_88_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__2));
v___x_89_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__1));
v___x_90_ = l_mkPanicMessageWithDecl(v___x_89_, v___x_88_, v___x_87_, v___x_86_, v___x_85_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg(lean_object* v_targetId_91_, lean_object* v_a_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v___y_99_; lean_object* v___y_100_; lean_object* v___y_101_; lean_object* v___y_106_; lean_object* v_snd_126_; lean_object* v_fst_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_269_; 
v_snd_126_ = lean_ctor_get(v_a_92_, 1);
v_fst_127_ = lean_ctor_get(v_a_92_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v_a_92_);
if (v_isSharedCheck_269_ == 0)
{
v___x_129_ = v_a_92_;
v_isShared_130_ = v_isSharedCheck_269_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_snd_126_);
lean_inc(v_fst_127_);
lean_dec(v_a_92_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_269_;
goto v_resetjp_128_;
}
v___jp_98_:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_102_, 0, v___y_101_);
lean_ctor_set(v___x_102_, 1, v___y_100_);
v___x_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_103_, 0, v___y_99_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
v_a_92_ = v___x_103_;
goto _start;
}
v___jp_105_:
{
if (lean_obj_tag(v___y_106_) == 0)
{
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_117_; 
v_a_107_ = lean_ctor_get(v___y_106_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___y_106_);
if (v_isSharedCheck_117_ == 0)
{
v___x_109_ = v___y_106_;
v_isShared_110_ = v_isSharedCheck_117_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___y_106_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_117_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
if (lean_obj_tag(v_a_107_) == 0)
{
lean_object* v_a_111_; lean_object* v___x_113_; 
v_a_111_ = lean_ctor_get(v_a_107_, 0);
lean_inc(v_a_111_);
lean_dec_ref_known(v_a_107_, 1);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 0, v_a_111_);
v___x_113_ = v___x_109_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_111_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
else
{
lean_object* v_a_115_; 
lean_del_object(v___x_109_);
v_a_115_ = lean_ctor_get(v_a_107_, 0);
lean_inc(v_a_115_);
lean_dec_ref_known(v_a_107_, 1);
v_a_92_ = v_a_115_;
goto _start;
}
}
}
else
{
lean_object* v_a_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_125_; 
v_a_118_ = lean_ctor_get(v___y_106_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___y_106_);
if (v_isSharedCheck_125_ == 0)
{
v___x_120_ = v___y_106_;
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_a_118_);
lean_dec(v___y_106_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_123_; 
if (v_isShared_121_ == 0)
{
v___x_123_ = v___x_120_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_a_118_);
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
v_resetjp_128_:
{
lean_object* v_fst_131_; lean_object* v_snd_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_268_; 
v_fst_131_ = lean_ctor_get(v_snd_126_, 0);
v_snd_132_ = lean_ctor_get(v_snd_126_, 1);
v_isSharedCheck_268_ = !lean_is_exclusive(v_snd_126_);
if (v_isSharedCheck_268_ == 0)
{
v___x_134_ = v_snd_126_;
v_isShared_135_ = v_isSharedCheck_268_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_snd_132_);
lean_inc(v_fst_131_);
lean_dec(v_snd_126_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_268_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_136_ = lean_unsigned_to_nat(2u);
v___x_137_ = lean_array_get_size(v_fst_127_);
v___x_138_ = lean_nat_dec_le(v___x_136_, v___x_137_);
if (v___x_138_ == 0)
{
lean_object* v___x_140_; 
if (v_isShared_135_ == 0)
{
v___x_140_ = v___x_134_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_fst_131_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_snd_132_);
v___x_140_ = v_reuseFailAlloc_145_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
lean_object* v___x_142_; 
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 1, v___x_140_);
v___x_142_ = v___x_129_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_fst_127_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v___x_140_);
v___x_142_ = v_reuseFailAlloc_144_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_143_; 
v___x_143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
return v___x_143_;
}
}
}
else
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_146_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__0);
v___x_147_ = lean_unsigned_to_nat(1u);
v___x_148_ = lean_nat_sub(v___x_137_, v___x_147_);
v___x_149_ = lean_array_get(v___x_146_, v_fst_127_, v___x_148_);
lean_dec(v___x_148_);
switch(lean_obj_tag(v___x_149_))
{
case 0:
{
lean_object* v_decl_150_; lean_object* v_value_151_; 
v_decl_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc_ref(v_decl_150_);
v_value_151_ = lean_ctor_get(v_decl_150_, 3);
lean_inc(v_value_151_);
switch(lean_obj_tag(v_value_151_))
{
case 8:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_155_; 
lean_dec_ref_known(v_value_151_, 3);
lean_dec_ref(v_decl_150_);
v___x_152_ = lean_array_pop(v_fst_127_);
v___x_153_ = lean_array_push(v_fst_131_, v___x_149_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v___x_153_);
v___x_155_ = v___x_134_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v___x_153_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_snd_132_);
v___x_155_ = v_reuseFailAlloc_160_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
lean_object* v___x_157_; 
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 1, v___x_155_);
lean_ctor_set(v___x_129_, 0, v___x_152_);
v___x_157_ = v___x_129_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_152_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v___x_155_);
v___x_157_ = v_reuseFailAlloc_159_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
v_a_92_ = v___x_157_;
goto _start;
}
}
}
case 7:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_164_; 
lean_dec_ref_known(v_value_151_, 2);
lean_dec_ref(v_decl_150_);
v___x_161_ = lean_array_pop(v_fst_127_);
v___x_162_ = lean_array_push(v_fst_131_, v___x_149_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v___x_162_);
v___x_164_ = v___x_134_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v_snd_132_);
v___x_164_ = v_reuseFailAlloc_169_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_166_; 
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 1, v___x_164_);
lean_ctor_set(v___x_129_, 0, v___x_161_);
v___x_166_ = v___x_129_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_161_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v___x_164_);
v___x_166_ = v_reuseFailAlloc_168_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
v_a_92_ = v___x_166_;
goto _start;
}
}
}
default: 
{
lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_188_; 
lean_del_object(v___x_134_);
lean_del_object(v___x_129_);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_188_ == 0)
{
lean_object* v_unused_189_; 
v_unused_189_ = lean_ctor_get(v___x_149_, 0);
lean_dec(v_unused_189_);
v___x_171_ = v___x_149_;
v_isShared_172_ = v_isSharedCheck_188_;
goto v_resetjp_170_;
}
else
{
lean_dec(v___x_149_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_188_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v_fvarId_173_; lean_object* v_binderName_174_; lean_object* v_type_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_186_; 
v_fvarId_173_ = lean_ctor_get(v_decl_150_, 0);
v_binderName_174_ = lean_ctor_get(v_decl_150_, 1);
v_type_175_ = lean_ctor_get(v_decl_150_, 2);
v_isSharedCheck_186_ = !lean_is_exclusive(v_decl_150_);
if (v_isSharedCheck_186_ == 0)
{
lean_object* v_unused_187_; 
v_unused_187_ = lean_ctor_get(v_decl_150_, 3);
lean_dec(v_unused_187_);
v___x_177_ = v_decl_150_;
v_isShared_178_ = v_isSharedCheck_186_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_type_175_);
lean_inc(v_binderName_174_);
lean_inc(v_fvarId_173_);
lean_dec(v_decl_150_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_186_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_180_; 
if (v_isShared_178_ == 0)
{
v___x_180_ = v___x_177_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_fvarId_173_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v_binderName_174_);
lean_ctor_set(v_reuseFailAlloc_185_, 2, v_type_175_);
lean_ctor_set(v_reuseFailAlloc_185_, 3, v_value_151_);
v___x_180_ = v_reuseFailAlloc_185_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
lean_object* v___x_182_; 
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_180_);
v___x_182_ = v___x_171_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_180_);
v___x_182_ = v_reuseFailAlloc_184_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_183_; 
v___x_183_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___lam__0(v_fst_131_, v_snd_132_, v_fst_127_, v___x_182_, v___y_93_, v___y_94_, v___y_95_, v___y_96_);
lean_dec_ref(v___x_182_);
v___y_106_ = v___x_183_;
goto v___jp_105_;
}
}
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_190_; lean_object* v_n_191_; uint8_t v_check_192_; uint8_t v_persistent_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
v_fvarId_190_ = lean_ctor_get(v___x_149_, 0);
v_n_191_ = lean_ctor_get(v___x_149_, 1);
v_check_192_ = lean_ctor_get_uint8(v___x_149_, sizeof(void*)*2);
v_persistent_193_ = lean_ctor_get_uint8(v___x_149_, sizeof(void*)*2 + 1);
v___x_194_ = lean_unsigned_to_nat(0u);
v___x_195_ = lean_nat_dec_lt(v___x_194_, v_n_191_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; 
lean_dec_ref_known(v___x_149_, 2);
lean_del_object(v___x_134_);
lean_dec(v_snd_132_);
lean_dec(v_fst_131_);
lean_del_object(v___x_129_);
lean_dec(v_fst_127_);
v___x_196_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__4);
v___x_197_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0(v___x_196_, v___y_93_, v___y_94_, v___y_95_, v___y_96_);
v___y_106_ = v___x_197_;
goto v___jp_105_;
}
else
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_nat_sub(v___x_137_, v___x_136_);
v___x_199_ = lean_array_get(v___x_146_, v_fst_127_, v___x_198_);
lean_dec(v___x_198_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v_decl_200_; lean_object* v_value_201_; 
v_decl_200_ = lean_ctor_get(v___x_199_, 0);
lean_inc_ref(v_decl_200_);
v_value_201_ = lean_ctor_get(v_decl_200_, 3);
lean_inc(v_value_201_);
if (lean_obj_tag(v_value_201_) == 6)
{
lean_object* v_fvarId_202_; lean_object* v_i_203_; lean_object* v_var_204_; lean_object* v___x_205_; uint8_t v___y_207_; uint8_t v___x_244_; 
v_fvarId_202_ = lean_ctor_get(v_decl_200_, 0);
lean_inc(v_fvarId_202_);
lean_dec_ref(v_decl_200_);
v_i_203_ = lean_ctor_get(v_value_201_, 0);
lean_inc(v_i_203_);
v_var_204_ = lean_ctor_get(v_value_201_, 1);
lean_inc(v_var_204_);
lean_dec_ref_known(v_value_201_, 2);
v___x_205_ = lean_box(0);
v___x_244_ = l_Lean_instBEqFVarId_beq(v_fvarId_202_, v_fvarId_190_);
lean_dec(v_fvarId_202_);
if (v___x_244_ == 0)
{
lean_dec(v_var_204_);
v___y_207_ = v___x_244_;
goto v___jp_206_;
}
else
{
uint8_t v___x_245_; 
v___x_245_ = l_Lean_instBEqFVarId_beq(v_targetId_91_, v_var_204_);
lean_dec(v_var_204_);
v___y_207_ = v___x_245_;
goto v___jp_206_;
}
v___jp_206_:
{
if (v___y_207_ == 0)
{
lean_object* v___x_209_; 
lean_dec(v_i_203_);
lean_dec_ref_known(v___x_199_, 1);
lean_dec_ref_known(v___x_149_, 2);
if (v_isShared_135_ == 0)
{
v___x_209_ = v___x_134_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_fst_131_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v_snd_132_);
v___x_209_ = v_reuseFailAlloc_214_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_211_; 
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 1, v___x_209_);
v___x_211_ = v___x_129_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_fst_127_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v___x_209_);
v___x_211_ = v_reuseFailAlloc_213_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
lean_object* v___x_212_; 
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
return v___x_212_;
}
}
}
else
{
lean_object* v___x_215_; 
v___x_215_ = lean_array_get_borrowed(v___x_205_, v_snd_132_, v_i_203_);
if (lean_obj_tag(v___x_215_) == 0)
{
lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_230_; 
lean_inc(v_n_191_);
lean_inc(v_fvarId_190_);
lean_del_object(v___x_134_);
lean_del_object(v___x_129_);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_230_ == 0)
{
lean_object* v_unused_231_; lean_object* v_unused_232_; 
v_unused_231_ = lean_ctor_get(v___x_149_, 1);
lean_dec(v_unused_231_);
v_unused_232_ = lean_ctor_get(v___x_149_, 0);
lean_dec(v_unused_232_);
v___x_217_ = v___x_149_;
v_isShared_218_ = v_isSharedCheck_230_;
goto v_resetjp_216_;
}
else
{
lean_dec(v___x_149_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_230_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_219_ = lean_array_pop(v_fst_127_);
v___x_220_ = lean_array_pop(v___x_219_);
lean_inc(v_fvarId_190_);
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v_fvarId_190_);
v___x_222_ = lean_array_set(v_snd_132_, v_i_203_, v___x_221_);
lean_dec(v_i_203_);
v___x_223_ = lean_array_push(v_fst_131_, v___x_199_);
v___x_224_ = lean_nat_dec_eq(v_n_191_, v___x_147_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; lean_object* v___x_227_; 
v___x_225_ = lean_nat_sub(v_n_191_, v___x_147_);
lean_dec(v_n_191_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 1, v___x_225_);
v___x_227_ = v___x_217_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(7, 2, 2);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_fvarId_190_);
lean_ctor_set(v_reuseFailAlloc_229_, 1, v___x_225_);
lean_ctor_set_uint8(v_reuseFailAlloc_229_, sizeof(void*)*2, v_check_192_);
lean_ctor_set_uint8(v_reuseFailAlloc_229_, sizeof(void*)*2 + 1, v_persistent_193_);
v___x_227_ = v_reuseFailAlloc_229_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
lean_object* v___x_228_; 
v___x_228_ = lean_array_push(v___x_223_, v___x_227_);
v___y_99_ = v___x_220_;
v___y_100_ = v___x_222_;
v___y_101_ = v___x_228_;
goto v___jp_98_;
}
}
else
{
lean_del_object(v___x_217_);
lean_dec(v_n_191_);
lean_dec(v_fvarId_190_);
v___y_99_ = v___x_220_;
v___y_100_ = v___x_222_;
v___y_101_ = v___x_223_;
goto v___jp_98_;
}
}
}
else
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
lean_dec(v_i_203_);
v___x_233_ = lean_array_push(v_fst_131_, v___x_149_);
v___x_234_ = lean_array_push(v___x_233_, v___x_199_);
v___x_235_ = lean_array_pop(v_fst_127_);
v___x_236_ = lean_array_pop(v___x_235_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v___x_234_);
v___x_238_ = v___x_134_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_234_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v_snd_132_);
v___x_238_ = v_reuseFailAlloc_243_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_240_; 
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 1, v___x_238_);
lean_ctor_set(v___x_129_, 0, v___x_236_);
v___x_240_ = v___x_129_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v___x_238_);
v___x_240_ = v_reuseFailAlloc_242_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
v_a_92_ = v___x_240_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_264_; 
lean_dec_ref_known(v___x_149_, 2);
lean_del_object(v___x_134_);
lean_del_object(v___x_129_);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_264_ == 0)
{
lean_object* v_unused_265_; 
v_unused_265_ = lean_ctor_get(v___x_199_, 0);
lean_dec(v_unused_265_);
v___x_247_ = v___x_199_;
v_isShared_248_ = v_isSharedCheck_264_;
goto v_resetjp_246_;
}
else
{
lean_dec(v___x_199_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_264_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v_fvarId_249_; lean_object* v_binderName_250_; lean_object* v_type_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_262_; 
v_fvarId_249_ = lean_ctor_get(v_decl_200_, 0);
v_binderName_250_ = lean_ctor_get(v_decl_200_, 1);
v_type_251_ = lean_ctor_get(v_decl_200_, 2);
v_isSharedCheck_262_ = !lean_is_exclusive(v_decl_200_);
if (v_isSharedCheck_262_ == 0)
{
lean_object* v_unused_263_; 
v_unused_263_ = lean_ctor_get(v_decl_200_, 3);
lean_dec(v_unused_263_);
v___x_253_ = v_decl_200_;
v_isShared_254_ = v_isSharedCheck_262_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_type_251_);
lean_inc(v_binderName_250_);
lean_inc(v_fvarId_249_);
lean_dec(v_decl_200_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_262_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_256_; 
if (v_isShared_254_ == 0)
{
v___x_256_ = v___x_253_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_fvarId_249_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v_binderName_250_);
lean_ctor_set(v_reuseFailAlloc_261_, 2, v_type_251_);
lean_ctor_set(v_reuseFailAlloc_261_, 3, v_value_201_);
v___x_256_ = v_reuseFailAlloc_261_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
lean_object* v___x_258_; 
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 0, v___x_256_);
v___x_258_ = v___x_247_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_256_);
v___x_258_ = v_reuseFailAlloc_260_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_object* v___x_259_; 
v___x_259_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___lam__0(v_fst_131_, v_snd_132_, v_fst_127_, v___x_258_, v___y_93_, v___y_94_, v___y_95_, v___y_96_);
lean_dec_ref(v___x_258_);
v___y_106_ = v___x_259_;
goto v___jp_105_;
}
}
}
}
}
}
else
{
lean_object* v___x_266_; 
lean_dec_ref_known(v___x_149_, 2);
lean_del_object(v___x_134_);
lean_del_object(v___x_129_);
v___x_266_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___lam__0(v_fst_131_, v_snd_132_, v_fst_127_, v___x_199_, v___y_93_, v___y_94_, v___y_95_, v___y_96_);
lean_dec(v___x_199_);
v___y_106_ = v___x_266_;
goto v___jp_105_;
}
}
}
default: 
{
lean_object* v___x_267_; 
lean_del_object(v___x_134_);
lean_del_object(v___x_129_);
v___x_267_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___lam__0(v_fst_131_, v_snd_132_, v_fst_127_, v___x_149_, v___y_93_, v___y_94_, v___y_95_, v___y_96_);
lean_dec(v___x_149_);
v___y_106_ = v___x_267_;
goto v___jp_105_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___boxed(lean_object* v_targetId_270_, lean_object* v_a_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg(v_targetId_270_, v_a_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v_targetId_270_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor(lean_object* v_nFields_280_, lean_object* v_targetId_281_, lean_object* v_ds_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_){
_start:
{
lean_object* v_keep_288_; lean_object* v___x_289_; lean_object* v_mask_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v_keep_288_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___closed__0));
v___x_289_ = lean_box(0);
v_mask_290_ = lean_mk_array(v_nFields_280_, v___x_289_);
v___x_291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_291_, 0, v_keep_288_);
lean_ctor_set(v___x_291_, 1, v_mask_290_);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v_ds_282_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg(v_targetId_281_, v___x_292_, v_a_283_, v_a_284_, v_a_285_, v_a_286_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_314_; 
v_a_294_ = lean_ctor_get(v___x_293_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_314_ == 0)
{
v___x_296_ = v___x_293_;
v_isShared_297_ = v_isSharedCheck_314_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_293_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_314_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v_snd_298_; lean_object* v_fst_299_; lean_object* v_fst_300_; lean_object* v_snd_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_313_; 
v_snd_298_ = lean_ctor_get(v_a_294_, 1);
lean_inc(v_snd_298_);
v_fst_299_ = lean_ctor_get(v_a_294_, 0);
lean_inc(v_fst_299_);
lean_dec(v_a_294_);
v_fst_300_ = lean_ctor_get(v_snd_298_, 0);
v_snd_301_ = lean_ctor_get(v_snd_298_, 1);
v_isSharedCheck_313_ = !lean_is_exclusive(v_snd_298_);
if (v_isSharedCheck_313_ == 0)
{
v___x_303_ = v_snd_298_;
v_isShared_304_ = v_isSharedCheck_313_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_snd_301_);
lean_inc(v_fst_300_);
lean_dec(v_snd_298_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_313_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
v___x_305_ = l_Array_reverse___redArg(v_fst_300_);
v___x_306_ = l_Array_append___redArg(v_fst_299_, v___x_305_);
lean_dec_ref(v___x_305_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 0, v___x_306_);
v___x_308_ = v___x_303_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_306_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v_snd_301_);
v___x_308_ = v_reuseFailAlloc_312_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
lean_object* v___x_310_; 
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 0, v___x_308_);
v___x_310_ = v___x_296_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_308_);
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
else
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
v_a_315_ = lean_ctor_get(v___x_293_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_293_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_293_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___boxed(lean_object* v_nFields_323_, lean_object* v_targetId_324_, lean_object* v_ds_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor(v_nFields_323_, v_targetId_324_, v_ds_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_);
lean_dec(v_a_329_);
lean_dec_ref(v_a_328_);
lean_dec(v_a_327_);
lean_dec_ref(v_a_326_);
lean_dec(v_targetId_324_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1(lean_object* v_targetId_332_, lean_object* v_inst_333_, lean_object* v_a_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg(v_targetId_332_, v_a_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___boxed(lean_object* v_targetId_341_, lean_object* v_inst_342_, lean_object* v_a_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1(v_targetId_341_, v_inst_342_, v_a_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_);
lean_dec(v___y_347_);
lean_dec_ref(v___y_346_);
lean_dec(v___y_345_);
lean_dec_ref(v___y_344_);
lean_dec(v_targetId_341_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg(lean_object* v_discr_366_, lean_object* v_discrType_367_, lean_object* v_resultType_368_, lean_object* v_t_369_, lean_object* v_e_370_){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_372_ = l_Lean_Expr_getAppFn(v_discrType_367_);
v___x_373_ = l_Lean_Expr_constName_x21(v___x_372_);
lean_dec_ref(v___x_372_);
v___x_374_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__3));
v___x_375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
lean_ctor_set(v___x_375_, 1, v_e_370_);
v___x_376_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___closed__6));
v___x_377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
lean_ctor_set(v___x_377_, 1, v_t_369_);
v___x_378_ = lean_unsigned_to_nat(2u);
v___x_379_ = lean_mk_empty_array_with_capacity(v___x_378_);
v___x_380_ = lean_array_push(v___x_379_, v___x_375_);
v___x_381_ = lean_array_push(v___x_380_, v___x_377_);
v___x_382_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_382_, 0, v___x_373_);
lean_ctor_set(v___x_382_, 1, v_resultType_368_);
lean_ctor_set(v___x_382_, 2, v_discr_366_);
lean_ctor_set(v___x_382_, 3, v___x_381_);
v___x_383_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
v___x_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg___boxed(lean_object* v_discr_385_, lean_object* v_discrType_386_, lean_object* v_resultType_387_, lean_object* v_t_388_, lean_object* v_e_389_, lean_object* v_a_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg(v_discr_385_, v_discrType_386_, v_resultType_387_, v_t_388_, v_e_389_);
lean_dec_ref(v_discrType_386_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf(lean_object* v_discr_392_, lean_object* v_discrType_393_, lean_object* v_resultType_394_, lean_object* v_t_395_, lean_object* v_e_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg(v_discr_392_, v_discrType_393_, v_resultType_394_, v_t_395_, v_e_396_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___boxed(lean_object* v_discr_403_, lean_object* v_discrType_404_, lean_object* v_resultType_405_, lean_object* v_t_406_, lean_object* v_e_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf(v_discr_403_, v_discrType_404_, v_resultType_405_, v_t_406_, v_e_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_);
lean_dec(v_a_411_);
lean_dec_ref(v_a_410_);
lean_dec(v_a_409_);
lean_dec_ref(v_a_408_);
lean_dec_ref(v_discrType_404_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__0(lean_object* v_msg_414_){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__0);
v___x_416_ = lean_panic_fn_borrowed(v___x_415_, v_msg_414_);
return v___x_416_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__2(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_419_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__1));
v___x_420_ = lean_unsigned_to_nat(11u);
v___x_421_ = lean_unsigned_to_nat(138u);
v___x_422_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__0));
v___x_423_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__1));
v___x_424_ = l_mkPanicMessageWithDecl(v___x_423_, v___x_422_, v___x_421_, v___x_420_, v___x_419_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1(lean_object* v_targetId_425_, size_t v_sz_426_, size_t v_i_427_, lean_object* v_bs_428_){
_start:
{
uint8_t v___x_429_; 
v___x_429_ = lean_usize_dec_lt(v_i_427_, v_sz_426_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; 
lean_dec(v_targetId_425_);
v___x_430_ = l_unsafeCast___redArg(v_bs_428_);
lean_dec_ref(v_bs_428_);
return v___x_430_;
}
else
{
lean_object* v_v_431_; lean_object* v___x_432_; lean_object* v_bs_x27_433_; lean_object* v___y_435_; lean_object* v___x_441_; 
v_v_431_ = lean_array_uget(v_bs_428_, v_i_427_);
v___x_432_ = lean_unsigned_to_nat(0u);
v_bs_x27_433_ = lean_array_uset(v_bs_428_, v_i_427_, v___x_432_);
v___x_441_ = l_unsafeCast___redArg(v_v_431_);
lean_dec(v_v_431_);
switch(lean_obj_tag(v___x_441_))
{
case 3:
{
lean_object* v_i_442_; lean_object* v_y_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
v_i_442_ = lean_ctor_get(v___x_441_, 1);
v_y_443_ = lean_ctor_get(v___x_441_, 2);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; 
v_unused_451_ = lean_ctor_get(v___x_441_, 0);
lean_dec(v_unused_451_);
v___x_445_ = v___x_441_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_y_443_);
lean_inc(v_i_442_);
lean_dec(v___x_441_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
lean_inc(v_targetId_425_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v_targetId_425_);
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_targetId_425_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_i_442_);
lean_ctor_set(v_reuseFailAlloc_449_, 2, v_y_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
v___y_435_ = v___x_448_;
goto v___jp_434_;
}
}
}
case 5:
{
lean_object* v_i_452_; lean_object* v_offset_453_; lean_object* v_y_454_; lean_object* v_ty_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_462_; 
v_i_452_ = lean_ctor_get(v___x_441_, 1);
v_offset_453_ = lean_ctor_get(v___x_441_, 2);
v_y_454_ = lean_ctor_get(v___x_441_, 3);
v_ty_455_ = lean_ctor_get(v___x_441_, 4);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_462_ == 0)
{
lean_object* v_unused_463_; 
v_unused_463_ = lean_ctor_get(v___x_441_, 0);
lean_dec(v_unused_463_);
v___x_457_ = v___x_441_;
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_ty_455_);
lean_inc(v_y_454_);
lean_inc(v_offset_453_);
lean_inc(v_i_452_);
lean_dec(v___x_441_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
lean_inc(v_targetId_425_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v_targetId_425_);
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(5, 5, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_targetId_425_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_i_452_);
lean_ctor_set(v_reuseFailAlloc_461_, 2, v_offset_453_);
lean_ctor_set(v_reuseFailAlloc_461_, 3, v_y_454_);
lean_ctor_set(v_reuseFailAlloc_461_, 4, v_ty_455_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
v___y_435_ = v___x_460_;
goto v___jp_434_;
}
}
}
case 4:
{
lean_object* v_i_464_; lean_object* v_y_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
v_i_464_ = lean_ctor_get(v___x_441_, 1);
v_y_465_ = lean_ctor_get(v___x_441_, 2);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_472_ == 0)
{
lean_object* v_unused_473_; 
v_unused_473_ = lean_ctor_get(v___x_441_, 0);
lean_dec(v_unused_473_);
v___x_467_ = v___x_441_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_y_465_);
lean_inc(v_i_464_);
lean_dec(v___x_441_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
lean_inc(v_targetId_425_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v_targetId_425_);
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_targetId_425_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v_i_464_);
lean_ctor_set(v_reuseFailAlloc_471_, 2, v_y_465_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
v___y_435_ = v___x_470_;
goto v___jp_434_;
}
}
}
default: 
{
lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec(v___x_441_);
v___x_474_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__2);
v___x_475_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__0(v___x_474_);
v___y_435_ = v___x_475_;
goto v___jp_434_;
}
}
v___jp_434_:
{
size_t v___x_436_; size_t v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_436_ = ((size_t)1ULL);
v___x_437_ = lean_usize_add(v_i_427_, v___x_436_);
v___x_438_ = l_unsafeCast___redArg(v___y_435_);
lean_dec_ref(v___y_435_);
v___x_439_ = lean_array_uset(v_bs_x27_433_, v_i_427_, v___x_438_);
v_i_427_ = v___x_437_;
v_bs_428_ = v___x_439_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___boxed(lean_object* v_targetId_476_, lean_object* v_sz_477_, lean_object* v_i_478_, lean_object* v_bs_479_){
_start:
{
size_t v_sz_boxed_480_; size_t v_i_boxed_481_; lean_object* v_res_482_; 
v_sz_boxed_480_ = lean_unbox_usize(v_sz_477_);
lean_dec(v_sz_477_);
v_i_boxed_481_ = lean_unbox_usize(v_i_478_);
lean_dec(v_i_478_);
v_res_482_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1(v_targetId_476_, v_sz_boxed_480_, v_i_boxed_481_, v_bs_479_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets___redArg(lean_object* v_targetId_483_, lean_object* v_sets_484_){
_start:
{
size_t v_sz_486_; size_t v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v_sz_486_ = lean_array_size(v_sets_484_);
v___x_487_ = ((size_t)0ULL);
v___x_488_ = l_unsafeCast___redArg(v_sets_484_);
v___x_489_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1(v_targetId_483_, v_sz_486_, v___x_487_, v___x_488_);
v___x_490_ = l_unsafeCast___redArg(v___x_489_);
lean_dec_ref(v___x_489_);
v___x_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets___redArg___boxed(lean_object* v_targetId_492_, lean_object* v_sets_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets___redArg(v_targetId_492_, v_sets_493_);
lean_dec_ref(v_sets_493_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets(lean_object* v_targetId_496_, lean_object* v_sets_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets___redArg(v_targetId_496_, v_sets_497_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets___boxed(lean_object* v_targetId_504_, lean_object* v_sets_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets(v_targetId_504_, v_sets_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_);
lean_dec(v_a_509_);
lean_dec_ref(v_a_508_);
lean_dec(v_a_507_);
lean_dec_ref(v_a_506_);
lean_dec_ref(v_sets_505_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset___redArg(lean_object* v_fvarId_512_, lean_object* v_i_513_, lean_object* v_y_514_, lean_object* v_a_515_){
_start:
{
if (lean_obj_tag(v_y_514_) == 0)
{
uint8_t v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_517_ = 0;
v___x_518_ = lean_box(v___x_517_);
v___x_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
return v___x_519_;
}
else
{
lean_object* v_fvarId_520_; uint8_t v___x_521_; lean_object* v___x_522_; 
v_fvarId_520_ = lean_ctor_get(v_y_514_, 0);
v___x_521_ = 1;
v___x_522_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v___x_521_, v_fvarId_520_, v_a_515_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_550_; 
v_a_523_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_550_ == 0)
{
v___x_525_ = v___x_522_;
v_isShared_526_ = v_isSharedCheck_550_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_522_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_550_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
if (lean_obj_tag(v_a_523_) == 1)
{
lean_object* v_val_527_; 
v_val_527_ = lean_ctor_get(v_a_523_, 0);
lean_inc(v_val_527_);
lean_dec_ref_known(v_a_523_, 1);
if (lean_obj_tag(v_val_527_) == 6)
{
lean_object* v_i_528_; lean_object* v_var_529_; uint8_t v___x_530_; 
v_i_528_ = lean_ctor_get(v_val_527_, 0);
lean_inc(v_i_528_);
v_var_529_ = lean_ctor_get(v_val_527_, 1);
lean_inc(v_var_529_);
lean_dec_ref_known(v_val_527_, 2);
v___x_530_ = lean_nat_dec_eq(v_i_513_, v_i_528_);
lean_dec(v_i_528_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; lean_object* v___x_533_; 
lean_dec(v_var_529_);
v___x_531_ = lean_box(v___x_530_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 0, v___x_531_);
v___x_533_ = v___x_525_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_531_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
else
{
uint8_t v___x_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
v___x_535_ = l_Lean_instBEqFVarId_beq(v_fvarId_512_, v_var_529_);
lean_dec(v_var_529_);
v___x_536_ = lean_box(v___x_535_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 0, v___x_536_);
v___x_538_ = v___x_525_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
else
{
uint8_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
lean_dec(v_val_527_);
v___x_540_ = 0;
v___x_541_ = lean_box(v___x_540_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 0, v___x_541_);
v___x_543_ = v___x_525_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
else
{
uint8_t v___x_545_; lean_object* v___x_546_; lean_object* v___x_548_; 
lean_dec(v_a_523_);
v___x_545_ = 0;
v___x_546_ = lean_box(v___x_545_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 0, v___x_546_);
v___x_548_ = v___x_525_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_546_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
v_a_551_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_522_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_522_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset___redArg___boxed(lean_object* v_fvarId_559_, lean_object* v_i_560_, lean_object* v_y_561_, lean_object* v_a_562_, lean_object* v_a_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset___redArg(v_fvarId_559_, v_i_560_, v_y_561_, v_a_562_);
lean_dec(v_a_562_);
lean_dec(v_y_561_);
lean_dec(v_i_560_);
lean_dec(v_fvarId_559_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset(lean_object* v_fvarId_565_, lean_object* v_i_566_, lean_object* v_y_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset___redArg(v_fvarId_565_, v_i_566_, v_y_567_, v_a_569_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset___boxed(lean_object* v_fvarId_574_, lean_object* v_i_575_, lean_object* v_y_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset(v_fvarId_574_, v_i_575_, v_y_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_);
lean_dec(v_a_580_);
lean_dec_ref(v_a_579_);
lean_dec(v_a_578_);
lean_dec_ref(v_a_577_);
lean_dec(v_y_576_);
lean_dec(v_i_575_);
lean_dec(v_fvarId_574_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset___redArg(lean_object* v_fvarId_583_, lean_object* v_i_584_, lean_object* v_y_585_, lean_object* v_a_586_){
_start:
{
uint8_t v___x_588_; lean_object* v___x_589_; 
v___x_588_ = 1;
v___x_589_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v___x_588_, v_y_585_, v_a_586_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_617_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_617_ == 0)
{
v___x_592_ = v___x_589_;
v_isShared_593_ = v_isSharedCheck_617_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_589_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_617_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
if (lean_obj_tag(v_a_590_) == 1)
{
lean_object* v_val_594_; 
v_val_594_ = lean_ctor_get(v_a_590_, 0);
lean_inc(v_val_594_);
lean_dec_ref_known(v_a_590_, 1);
if (lean_obj_tag(v_val_594_) == 7)
{
lean_object* v_i_595_; lean_object* v_var_596_; uint8_t v___x_597_; 
v_i_595_ = lean_ctor_get(v_val_594_, 0);
lean_inc(v_i_595_);
v_var_596_ = lean_ctor_get(v_val_594_, 1);
lean_inc(v_var_596_);
lean_dec_ref_known(v_val_594_, 2);
v___x_597_ = lean_nat_dec_eq(v_i_584_, v_i_595_);
lean_dec(v_i_595_);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; lean_object* v___x_600_; 
lean_dec(v_var_596_);
v___x_598_ = lean_box(v___x_597_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v___x_598_);
v___x_600_ = v___x_592_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_598_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
else
{
uint8_t v___x_602_; lean_object* v___x_603_; lean_object* v___x_605_; 
v___x_602_ = l_Lean_instBEqFVarId_beq(v_fvarId_583_, v_var_596_);
lean_dec(v_var_596_);
v___x_603_ = lean_box(v___x_602_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v___x_603_);
v___x_605_ = v___x_592_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_603_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
else
{
uint8_t v___x_607_; lean_object* v___x_608_; lean_object* v___x_610_; 
lean_dec(v_val_594_);
v___x_607_ = 0;
v___x_608_ = lean_box(v___x_607_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v___x_608_);
v___x_610_ = v___x_592_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
else
{
uint8_t v___x_612_; lean_object* v___x_613_; lean_object* v___x_615_; 
lean_dec(v_a_590_);
v___x_612_ = 0;
v___x_613_ = lean_box(v___x_612_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v___x_613_);
v___x_615_ = v___x_592_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_613_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
v_a_618_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_589_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_589_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset___redArg___boxed(lean_object* v_fvarId_626_, lean_object* v_i_627_, lean_object* v_y_628_, lean_object* v_a_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset___redArg(v_fvarId_626_, v_i_627_, v_y_628_, v_a_629_);
lean_dec(v_a_629_);
lean_dec(v_y_628_);
lean_dec(v_i_627_);
lean_dec(v_fvarId_626_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset(lean_object* v_fvarId_632_, lean_object* v_i_633_, lean_object* v_y_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset___redArg(v_fvarId_632_, v_i_633_, v_y_634_, v_a_636_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset___boxed(lean_object* v_fvarId_641_, lean_object* v_i_642_, lean_object* v_y_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset(v_fvarId_641_, v_i_642_, v_y_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_);
lean_dec(v_a_647_);
lean_dec_ref(v_a_646_);
lean_dec(v_a_645_);
lean_dec_ref(v_a_644_);
lean_dec(v_y_643_);
lean_dec(v_i_642_);
lean_dec(v_fvarId_641_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset___redArg(lean_object* v_fvarId_650_, lean_object* v_i_651_, lean_object* v_offset_652_, lean_object* v_y_653_, lean_object* v_a_654_){
_start:
{
uint8_t v___x_656_; lean_object* v___x_657_; 
v___x_656_ = 1;
v___x_657_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v___x_656_, v_y_653_, v_a_654_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_691_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_691_ == 0)
{
v___x_660_ = v___x_657_;
v_isShared_661_ = v_isSharedCheck_691_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_657_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_691_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
if (lean_obj_tag(v_a_658_) == 1)
{
lean_object* v_val_662_; 
v_val_662_ = lean_ctor_get(v_a_658_, 0);
lean_inc(v_val_662_);
lean_dec_ref_known(v_a_658_, 1);
if (lean_obj_tag(v_val_662_) == 8)
{
lean_object* v_n_663_; lean_object* v_offset_664_; lean_object* v_var_665_; uint8_t v___x_666_; 
v_n_663_ = lean_ctor_get(v_val_662_, 0);
lean_inc(v_n_663_);
v_offset_664_ = lean_ctor_get(v_val_662_, 1);
lean_inc(v_offset_664_);
v_var_665_ = lean_ctor_get(v_val_662_, 2);
lean_inc(v_var_665_);
lean_dec_ref_known(v_val_662_, 3);
v___x_666_ = lean_nat_dec_eq(v_i_651_, v_n_663_);
lean_dec(v_n_663_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v___x_669_; 
lean_dec(v_var_665_);
lean_dec(v_offset_664_);
v___x_667_ = lean_box(v___x_666_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 0, v___x_667_);
v___x_669_ = v___x_660_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v___x_667_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
else
{
uint8_t v___x_671_; 
v___x_671_ = lean_nat_dec_eq(v_offset_652_, v_offset_664_);
lean_dec(v_offset_664_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; lean_object* v___x_674_; 
lean_dec(v_var_665_);
v___x_672_ = lean_box(v___x_671_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 0, v___x_672_);
v___x_674_ = v___x_660_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_672_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
else
{
uint8_t v___x_676_; lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_676_ = l_Lean_instBEqFVarId_beq(v_fvarId_650_, v_var_665_);
lean_dec(v_var_665_);
v___x_677_ = lean_box(v___x_676_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 0, v___x_677_);
v___x_679_ = v___x_660_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_677_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
else
{
uint8_t v___x_681_; lean_object* v___x_682_; lean_object* v___x_684_; 
lean_dec(v_val_662_);
v___x_681_ = 0;
v___x_682_ = lean_box(v___x_681_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 0, v___x_682_);
v___x_684_ = v___x_660_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
else
{
uint8_t v___x_686_; lean_object* v___x_687_; lean_object* v___x_689_; 
lean_dec(v_a_658_);
v___x_686_ = 0;
v___x_687_ = lean_box(v___x_686_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 0, v___x_687_);
v___x_689_ = v___x_660_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v___x_687_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
}
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
v_a_692_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_657_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_657_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset___redArg___boxed(lean_object* v_fvarId_700_, lean_object* v_i_701_, lean_object* v_offset_702_, lean_object* v_y_703_, lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset___redArg(v_fvarId_700_, v_i_701_, v_offset_702_, v_y_703_, v_a_704_);
lean_dec(v_a_704_);
lean_dec(v_y_703_);
lean_dec(v_offset_702_);
lean_dec(v_i_701_);
lean_dec(v_fvarId_700_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset(lean_object* v_fvarId_707_, lean_object* v_i_708_, lean_object* v_offset_709_, lean_object* v_y_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset___redArg(v_fvarId_707_, v_i_708_, v_offset_709_, v_y_710_, v_a_712_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset___boxed(lean_object* v_fvarId_717_, lean_object* v_i_718_, lean_object* v_offset_719_, lean_object* v_y_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset(v_fvarId_717_, v_i_718_, v_offset_719_, v_y_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_);
lean_dec(v_a_724_);
lean_dec_ref(v_a_723_);
lean_dec(v_a_722_);
lean_dec_ref(v_a_721_);
lean_dec(v_y_720_);
lean_dec(v_offset_719_);
lean_dec(v_i_718_);
lean_dec(v_fvarId_717_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__0(lean_object* v_msg_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_){
_start:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v_toApplicative_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_769_; 
v___x_733_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0);
v___x_734_ = l_StateRefT_x27_instMonad___redArg(v___x_733_);
v_toApplicative_735_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_769_ == 0)
{
lean_object* v_unused_770_; 
v_unused_770_ = lean_ctor_get(v___x_734_, 1);
lean_dec(v_unused_770_);
v___x_737_ = v___x_734_;
v_isShared_738_ = v_isSharedCheck_769_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_toApplicative_735_);
lean_dec(v___x_734_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_769_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v_toFunctor_739_; lean_object* v_toSeq_740_; lean_object* v_toSeqLeft_741_; lean_object* v_toSeqRight_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_767_; 
v_toFunctor_739_ = lean_ctor_get(v_toApplicative_735_, 0);
v_toSeq_740_ = lean_ctor_get(v_toApplicative_735_, 2);
v_toSeqLeft_741_ = lean_ctor_get(v_toApplicative_735_, 3);
v_toSeqRight_742_ = lean_ctor_get(v_toApplicative_735_, 4);
v_isSharedCheck_767_ = !lean_is_exclusive(v_toApplicative_735_);
if (v_isSharedCheck_767_ == 0)
{
lean_object* v_unused_768_; 
v_unused_768_ = lean_ctor_get(v_toApplicative_735_, 1);
lean_dec(v_unused_768_);
v___x_744_ = v_toApplicative_735_;
v_isShared_745_ = v_isSharedCheck_767_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_toSeqRight_742_);
lean_inc(v_toSeqLeft_741_);
lean_inc(v_toSeq_740_);
lean_inc(v_toFunctor_739_);
lean_dec(v_toApplicative_735_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_767_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___f_746_; lean_object* v___f_747_; lean_object* v___f_748_; lean_object* v___f_749_; lean_object* v___x_750_; lean_object* v___f_751_; lean_object* v___f_752_; lean_object* v___f_753_; lean_object* v___x_755_; 
v___f_746_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__1));
v___f_747_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__2));
lean_inc_ref(v_toFunctor_739_);
v___f_748_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_748_, 0, v_toFunctor_739_);
v___f_749_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_749_, 0, v_toFunctor_739_);
v___x_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_750_, 0, v___f_748_);
lean_ctor_set(v___x_750_, 1, v___f_749_);
v___f_751_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_751_, 0, v_toSeqRight_742_);
v___f_752_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_752_, 0, v_toSeqLeft_741_);
v___f_753_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_753_, 0, v_toSeq_740_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 4, v___f_751_);
lean_ctor_set(v___x_744_, 3, v___f_752_);
lean_ctor_set(v___x_744_, 2, v___f_753_);
lean_ctor_set(v___x_744_, 1, v___f_746_);
lean_ctor_set(v___x_744_, 0, v___x_750_);
v___x_755_ = v___x_744_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_750_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v___f_746_);
lean_ctor_set(v_reuseFailAlloc_766_, 2, v___f_753_);
lean_ctor_set(v_reuseFailAlloc_766_, 3, v___f_752_);
lean_ctor_set(v_reuseFailAlloc_766_, 4, v___f_751_);
v___x_755_ = v_reuseFailAlloc_766_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
lean_object* v___x_757_; 
if (v_isShared_738_ == 0)
{
lean_ctor_set(v___x_737_, 1, v___f_747_);
lean_ctor_set(v___x_737_, 0, v___x_755_);
v___x_757_ = v___x_737_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v___x_755_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v___f_747_);
v___x_757_ = v_reuseFailAlloc_765_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
lean_object* v___x_758_; uint8_t v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___f_762_; lean_object* v___x_883__overap_763_; lean_object* v___x_764_; 
v___x_758_ = l_StateRefT_x27_instMonad___redArg(v___x_757_);
v___x_759_ = 0;
v___x_760_ = lean_box(v___x_759_);
v___x_761_ = l_instInhabitedOfMonad___redArg(v___x_758_, v___x_760_);
v___f_762_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_762_, 0, v___x_761_);
v___x_883__overap_763_ = lean_panic_fn_borrowed(v___f_762_, v_msg_727_);
lean_dec_ref(v___f_762_);
lean_inc(v___y_731_);
lean_inc_ref(v___y_730_);
lean_inc(v___y_729_);
lean_inc_ref(v___y_728_);
v___x_764_ = lean_apply_5(v___x_883__overap_763_, v___y_728_, v___y_729_, v___y_730_, v___y_731_, lean_box(0));
return v___x_764_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__0___boxed(lean_object* v_msg_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__0(v_msg_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
return v_res_777_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___closed__1(void){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_779_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets_spec__1___closed__1));
v___x_780_ = lean_unsigned_to_nat(13u);
v___x_781_ = lean_unsigned_to_nat(174u);
v___x_782_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___closed__0));
v___x_783_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__1));
v___x_784_ = l_mkPanicMessageWithDecl(v___x_783_, v___x_782_, v___x_781_, v___x_780_, v___x_779_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1(lean_object* v_selfId_785_, lean_object* v_as_786_, size_t v_sz_787_, size_t v_i_788_, lean_object* v_b_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
lean_object* v_a_796_; uint8_t v___x_800_; 
v___x_800_ = lean_usize_dec_lt(v_i_788_, v_sz_787_);
if (v___x_800_ == 0)
{
lean_object* v___x_801_; 
v___x_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_801_, 0, v_b_789_);
return v___x_801_;
}
else
{
lean_object* v_fst_802_; lean_object* v_snd_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_840_; 
v_fst_802_ = lean_ctor_get(v_b_789_, 0);
v_snd_803_ = lean_ctor_get(v_b_789_, 1);
v_isSharedCheck_840_ = !lean_is_exclusive(v_b_789_);
if (v_isSharedCheck_840_ == 0)
{
v___x_805_ = v_b_789_;
v_isShared_806_ = v_isSharedCheck_840_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_snd_803_);
lean_inc(v_fst_802_);
lean_dec(v_b_789_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_840_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v_a_807_; lean_object* v___y_809_; 
v_a_807_ = lean_array_uget_borrowed(v_as_786_, v_i_788_);
switch(lean_obj_tag(v_a_807_))
{
case 3:
{
lean_object* v_i_828_; lean_object* v_y_829_; lean_object* v___x_830_; 
v_i_828_ = lean_ctor_get(v_a_807_, 1);
v_y_829_ = lean_ctor_get(v_a_807_, 2);
v___x_830_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset___redArg(v_selfId_785_, v_i_828_, v_y_829_, v___y_791_);
v___y_809_ = v___x_830_;
goto v___jp_808_;
}
case 4:
{
lean_object* v_i_831_; lean_object* v_y_832_; lean_object* v___x_833_; 
v_i_831_ = lean_ctor_get(v_a_807_, 1);
v_y_832_ = lean_ctor_get(v_a_807_, 2);
v___x_833_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfUset___redArg(v_selfId_785_, v_i_831_, v_y_832_, v___y_791_);
v___y_809_ = v___x_833_;
goto v___jp_808_;
}
case 5:
{
lean_object* v_i_834_; lean_object* v_offset_835_; lean_object* v_y_836_; lean_object* v___x_837_; 
v_i_834_ = lean_ctor_get(v_a_807_, 1);
v_offset_835_ = lean_ctor_get(v_a_807_, 2);
v_y_836_ = lean_ctor_get(v_a_807_, 3);
v___x_837_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfSset___redArg(v_selfId_785_, v_i_834_, v_offset_835_, v_y_836_, v___y_791_);
v___y_809_ = v___x_837_;
goto v___jp_808_;
}
default: 
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___closed__1);
v___x_839_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__0(v___x_838_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
v___y_809_ = v___x_839_;
goto v___jp_808_;
}
}
v___jp_808_:
{
if (lean_obj_tag(v___y_809_) == 0)
{
lean_object* v_a_810_; uint8_t v___x_811_; 
v_a_810_ = lean_ctor_get(v___y_809_, 0);
lean_inc(v_a_810_);
lean_dec_ref_known(v___y_809_, 1);
v___x_811_ = lean_unbox(v_a_810_);
lean_dec(v_a_810_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; lean_object* v___x_814_; 
lean_inc(v_a_807_);
v___x_812_ = lean_array_push(v_fst_802_, v_a_807_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 0, v___x_812_);
v___x_814_ = v___x_805_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v___x_812_);
lean_ctor_set(v_reuseFailAlloc_815_, 1, v_snd_803_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
v_a_796_ = v___x_814_;
goto v___jp_795_;
}
}
else
{
lean_object* v___x_816_; lean_object* v___x_818_; 
lean_inc(v_a_807_);
v___x_816_ = lean_array_push(v_snd_803_, v_a_807_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 1, v___x_816_);
v___x_818_ = v___x_805_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_fst_802_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
v_a_796_ = v___x_818_;
goto v___jp_795_;
}
}
}
else
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
lean_del_object(v___x_805_);
lean_dec(v_snd_803_);
lean_dec(v_fst_802_);
v_a_820_ = lean_ctor_get(v___y_809_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___y_809_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___y_809_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___y_809_);
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
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
v___jp_795_:
{
size_t v___x_797_; size_t v___x_798_; 
v___x_797_ = ((size_t)1ULL);
v___x_798_ = lean_usize_add(v_i_788_, v___x_797_);
v_i_788_ = v___x_798_;
v_b_789_ = v_a_796_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1___boxed(lean_object* v_selfId_841_, lean_object* v_as_842_, lean_object* v_sz_843_, lean_object* v_i_844_, lean_object* v_b_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
size_t v_sz_boxed_851_; size_t v_i_boxed_852_; lean_object* v_res_853_; 
v_sz_boxed_851_ = lean_unbox_usize(v_sz_843_);
lean_dec(v_sz_843_);
v_i_boxed_852_ = lean_unbox_usize(v_i_844_);
lean_dec(v_i_844_);
v_res_853_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1(v_selfId_841_, v_as_842_, v_sz_boxed_851_, v_i_boxed_852_, v_b_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
lean_dec(v___y_849_);
lean_dec_ref(v___y_848_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec_ref(v_as_842_);
lean_dec(v_selfId_841_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets(lean_object* v_selfId_856_, lean_object* v_sets_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_){
_start:
{
lean_object* v___x_863_; size_t v_sz_864_; size_t v___x_865_; lean_object* v___x_866_; 
v___x_863_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets___closed__0));
v_sz_864_ = lean_array_size(v_sets_857_);
v___x_865_ = ((size_t)0ULL);
v___x_866_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets_spec__1(v_selfId_856_, v_sets_857_, v_sz_864_, v___x_865_, v___x_863_, v_a_858_, v_a_859_, v_a_860_, v_a_861_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_883_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_883_ == 0)
{
v___x_869_ = v___x_866_;
v_isShared_870_ = v_isSharedCheck_883_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_866_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_883_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v_fst_871_; lean_object* v_snd_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_882_; 
v_fst_871_ = lean_ctor_get(v_a_867_, 0);
v_snd_872_ = lean_ctor_get(v_a_867_, 1);
v_isSharedCheck_882_ = !lean_is_exclusive(v_a_867_);
if (v_isSharedCheck_882_ == 0)
{
v___x_874_ = v_a_867_;
v_isShared_875_ = v_isSharedCheck_882_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_snd_872_);
lean_inc(v_fst_871_);
lean_dec(v_a_867_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_882_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 1, v_fst_871_);
lean_ctor_set(v___x_874_, 0, v_snd_872_);
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_snd_872_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_fst_871_);
v___x_877_ = v_reuseFailAlloc_881_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
lean_object* v___x_879_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 0, v___x_877_);
v___x_879_ = v___x_869_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_877_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
}
}
else
{
return v___x_866_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets___boxed(lean_object* v_selfId_884_, lean_object* v_sets_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets(v_selfId_884_, v_sets_885_, v_a_886_, v_a_887_, v_a_888_, v_a_889_);
lean_dec(v_a_889_);
lean_dec_ref(v_a_888_);
lean_dec(v_a_887_);
lean_dec_ref(v_a_886_);
lean_dec_ref(v_sets_885_);
lean_dec(v_selfId_884_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0___redArg(lean_object* v_target_892_, lean_object* v_a_893_){
_start:
{
lean_object* v_snd_895_; 
v_snd_895_ = lean_ctor_get(v_a_893_, 1);
lean_inc(v_snd_895_);
switch(lean_obj_tag(v_snd_895_))
{
case 7:
{
lean_object* v_fst_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_914_; 
v_fst_896_ = lean_ctor_get(v_a_893_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v_a_893_);
if (v_isSharedCheck_914_ == 0)
{
lean_object* v_unused_915_; 
v_unused_915_ = lean_ctor_get(v_a_893_, 1);
lean_dec(v_unused_915_);
v___x_898_ = v_a_893_;
v_isShared_899_ = v_isSharedCheck_914_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_fst_896_);
lean_dec(v_a_893_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_914_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v_fvarId_900_; lean_object* v_k_901_; uint8_t v___x_902_; 
v_fvarId_900_ = lean_ctor_get(v_snd_895_, 0);
v_k_901_ = lean_ctor_get(v_snd_895_, 3);
v___x_902_ = l_Lean_instBEqFVarId_beq(v_target_892_, v_fvarId_900_);
if (v___x_902_ == 0)
{
lean_object* v___x_904_; 
if (v_isShared_899_ == 0)
{
v___x_904_ = v___x_898_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_fst_896_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_snd_895_);
v___x_904_ = v_reuseFailAlloc_906_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
lean_object* v___x_905_; 
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
return v___x_905_;
}
}
else
{
uint8_t v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_911_; 
lean_inc_ref(v_k_901_);
v___x_907_ = 1;
v___x_908_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_907_, v_snd_895_);
lean_dec_ref_known(v_snd_895_, 4);
v___x_909_ = lean_array_push(v_fst_896_, v___x_908_);
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 1, v_k_901_);
lean_ctor_set(v___x_898_, 0, v___x_909_);
v___x_911_ = v___x_898_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v___x_909_);
lean_ctor_set(v_reuseFailAlloc_913_, 1, v_k_901_);
v___x_911_ = v_reuseFailAlloc_913_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
v_a_893_ = v___x_911_;
goto _start;
}
}
}
}
case 9:
{
lean_object* v_fst_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_934_; 
v_fst_916_ = lean_ctor_get(v_a_893_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v_a_893_);
if (v_isSharedCheck_934_ == 0)
{
lean_object* v_unused_935_; 
v_unused_935_ = lean_ctor_get(v_a_893_, 1);
lean_dec(v_unused_935_);
v___x_918_ = v_a_893_;
v_isShared_919_ = v_isSharedCheck_934_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_fst_916_);
lean_dec(v_a_893_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_934_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v_fvarId_920_; lean_object* v_k_921_; uint8_t v___x_922_; 
v_fvarId_920_ = lean_ctor_get(v_snd_895_, 0);
v_k_921_ = lean_ctor_get(v_snd_895_, 5);
v___x_922_ = l_Lean_instBEqFVarId_beq(v_target_892_, v_fvarId_920_);
if (v___x_922_ == 0)
{
lean_object* v___x_924_; 
if (v_isShared_919_ == 0)
{
v___x_924_ = v___x_918_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_fst_916_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_snd_895_);
v___x_924_ = v_reuseFailAlloc_926_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
lean_object* v___x_925_; 
v___x_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
return v___x_925_;
}
}
else
{
uint8_t v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_931_; 
lean_inc_ref(v_k_921_);
v___x_927_ = 1;
v___x_928_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_927_, v_snd_895_);
lean_dec_ref_known(v_snd_895_, 6);
v___x_929_ = lean_array_push(v_fst_916_, v___x_928_);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 1, v_k_921_);
lean_ctor_set(v___x_918_, 0, v___x_929_);
v___x_931_ = v___x_918_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v_k_921_);
v___x_931_ = v_reuseFailAlloc_933_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
v_a_893_ = v___x_931_;
goto _start;
}
}
}
}
case 8:
{
lean_object* v_fst_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_954_; 
v_fst_936_ = lean_ctor_get(v_a_893_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v_a_893_);
if (v_isSharedCheck_954_ == 0)
{
lean_object* v_unused_955_; 
v_unused_955_ = lean_ctor_get(v_a_893_, 1);
lean_dec(v_unused_955_);
v___x_938_ = v_a_893_;
v_isShared_939_ = v_isSharedCheck_954_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_fst_936_);
lean_dec(v_a_893_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_954_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v_fvarId_940_; lean_object* v_k_941_; uint8_t v___x_942_; 
v_fvarId_940_ = lean_ctor_get(v_snd_895_, 0);
v_k_941_ = lean_ctor_get(v_snd_895_, 3);
v___x_942_ = l_Lean_instBEqFVarId_beq(v_target_892_, v_fvarId_940_);
if (v___x_942_ == 0)
{
lean_object* v___x_944_; 
if (v_isShared_939_ == 0)
{
v___x_944_ = v___x_938_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_fst_936_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_snd_895_);
v___x_944_ = v_reuseFailAlloc_946_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
lean_object* v___x_945_; 
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
return v___x_945_;
}
}
else
{
uint8_t v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_951_; 
lean_inc_ref(v_k_941_);
v___x_947_ = 1;
v___x_948_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_947_, v_snd_895_);
lean_dec_ref_known(v_snd_895_, 4);
v___x_949_ = lean_array_push(v_fst_936_, v___x_948_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 1, v_k_941_);
lean_ctor_set(v___x_938_, 0, v___x_949_);
v___x_951_ = v___x_938_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_949_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v_k_941_);
v___x_951_ = v_reuseFailAlloc_953_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
v_a_893_ = v___x_951_;
goto _start;
}
}
}
}
default: 
{
lean_object* v_fst_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_964_; 
v_fst_956_ = lean_ctor_get(v_a_893_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v_a_893_);
if (v_isSharedCheck_964_ == 0)
{
lean_object* v_unused_965_; 
v_unused_965_ = lean_ctor_get(v_a_893_, 1);
lean_dec(v_unused_965_);
v___x_958_ = v_a_893_;
v_isShared_959_ = v_isSharedCheck_964_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_fst_956_);
lean_dec(v_a_893_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_964_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_fst_956_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v_snd_895_);
v___x_961_ = v_reuseFailAlloc_963_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
lean_object* v___x_962_; 
v___x_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
return v___x_962_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0___redArg___boxed(lean_object* v_target_966_, lean_object* v_a_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0___redArg(v_target_966_, v_a_967_);
lean_dec(v_target_966_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets(lean_object* v_target_970_, lean_object* v_k_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_sets_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v_sets_977_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___closed__0));
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v_sets_977_);
lean_ctor_set(v___x_978_, 1, v_k_971_);
v___x_979_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0___redArg(v_target_970_, v___x_978_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_996_; 
v_a_980_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_996_ == 0)
{
v___x_982_ = v___x_979_;
v_isShared_983_ = v_isSharedCheck_996_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_979_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_996_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v_fst_984_; lean_object* v_snd_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_995_; 
v_fst_984_ = lean_ctor_get(v_a_980_, 0);
v_snd_985_ = lean_ctor_get(v_a_980_, 1);
v_isSharedCheck_995_ = !lean_is_exclusive(v_a_980_);
if (v_isSharedCheck_995_ == 0)
{
v___x_987_ = v_a_980_;
v_isShared_988_ = v_isSharedCheck_995_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_snd_985_);
lean_inc(v_fst_984_);
lean_dec(v_a_980_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_995_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_fst_984_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_snd_985_);
v___x_990_ = v_reuseFailAlloc_994_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_992_; 
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 0, v___x_990_);
v___x_992_ = v___x_982_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_990_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
}
}
else
{
return v___x_979_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets___boxed(lean_object* v_target_997_, lean_object* v_k_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets(v_target_997_, v_k_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_a_1002_);
lean_dec_ref(v_a_1001_);
lean_dec(v_a_1000_);
lean_dec_ref(v_a_999_);
lean_dec(v_target_997_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0(lean_object* v_target_1005_, lean_object* v_inst_1006_, lean_object* v_a_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v___x_1013_; 
v___x_1013_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0___redArg(v_target_1005_, v_a_1007_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0___boxed(lean_object* v_target_1014_, lean_object* v_inst_1015_, lean_object* v_a_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v_res_1022_; 
v_res_1022_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets_spec__0(v_target_1014_, v_inst_1015_, v_a_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
lean_dec(v___y_1018_);
lean_dec_ref(v___y_1017_);
lean_dec(v_target_1014_);
return v_res_1022_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1029_ = lean_box(0);
v___x_1030_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__3));
v___x_1031_ = l_Lean_Expr_const___override(v___x_1030_, v___x_1029_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg(lean_object* v_upperBound_1032_, lean_object* v_mask_1033_, lean_object* v_origAllocId_1034_, lean_object* v_a_1035_, lean_object* v_b_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_a_1043_; uint8_t v___x_1047_; 
v___x_1047_ = lean_nat_dec_lt(v_a_1035_, v_upperBound_1032_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; 
lean_dec(v_a_1035_);
lean_dec(v_origAllocId_1034_);
v___x_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1048_, 0, v_b_1036_);
return v___x_1048_;
}
else
{
lean_object* v___x_1049_; 
v___x_1049_ = lean_array_fget_borrowed(v_mask_1033_, v_a_1035_);
if (lean_obj_tag(v___x_1049_) == 0)
{
uint8_t v___x_1050_; uint8_t v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1050_ = 1;
v___x_1051_ = 0;
v___x_1052_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__1));
v___x_1053_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_1052_, v___y_1038_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1054_);
lean_dec_ref_known(v___x_1053_, 1);
v___x_1055_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__4);
lean_inc(v_origAllocId_1034_);
lean_inc(v_a_1035_);
v___x_1056_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1056_, 0, v_a_1035_);
lean_ctor_set(v___x_1056_, 1, v_origAllocId_1034_);
v___x_1057_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_1050_, v_a_1054_, v___x_1055_, v___x_1056_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; lean_object* v_fvarId_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
lean_inc(v_a_1058_);
lean_dec_ref_known(v___x_1057_, 1);
v_fvarId_1059_ = lean_ctor_get(v_a_1058_, 0);
v___x_1060_ = lean_unsigned_to_nat(1u);
v___x_1061_ = lean_box(0);
lean_inc(v_fvarId_1059_);
v___x_1062_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v___x_1062_, 0, v_fvarId_1059_);
lean_ctor_set(v___x_1062_, 1, v___x_1060_);
lean_ctor_set(v___x_1062_, 2, v___x_1061_);
lean_ctor_set(v___x_1062_, 3, v_b_1036_);
lean_ctor_set_uint8(v___x_1062_, sizeof(void*)*4, v___x_1047_);
lean_ctor_set_uint8(v___x_1062_, sizeof(void*)*4 + 1, v___x_1051_);
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v_a_1058_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v_a_1043_ = v___x_1063_;
goto v___jp_1042_;
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
lean_dec_ref(v_b_1036_);
lean_dec(v_a_1035_);
lean_dec(v_origAllocId_1034_);
v_a_1064_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v___x_1057_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___x_1057_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_a_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
lean_dec_ref(v_b_1036_);
lean_dec(v_a_1035_);
lean_dec(v_origAllocId_1034_);
v_a_1072_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1053_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1053_);
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
v_a_1043_ = v_b_1036_;
goto v___jp_1042_;
}
}
v___jp_1042_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(1u);
v___x_1045_ = lean_nat_add(v_a_1035_, v___x_1044_);
lean_dec(v_a_1035_);
v_a_1035_ = v___x_1045_;
v_b_1036_ = v_a_1043_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___boxed(lean_object* v_upperBound_1080_, lean_object* v_mask_1081_, lean_object* v_origAllocId_1082_, lean_object* v_a_1083_, lean_object* v_b_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg(v_upperBound_1080_, v_mask_1081_, v_origAllocId_1082_, v_a_1083_, v_b_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
lean_dec_ref(v_mask_1081_);
lean_dec(v_upperBound_1080_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath(lean_object* v_origAllocId_1091_, lean_object* v_mask_1092_, lean_object* v_resetJpId_1093_, lean_object* v_isSharedId_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v_code_1108_; lean_object* v___x_1109_; 
lean_inc(v_origAllocId_1091_);
v___x_1100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1100_, 0, v_origAllocId_1091_);
v___x_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_isSharedId_1094_);
v___x_1102_ = lean_unsigned_to_nat(0u);
v___x_1103_ = lean_array_get_size(v_mask_1092_);
v___x_1104_ = lean_unsigned_to_nat(2u);
v___x_1105_ = lean_mk_empty_array_with_capacity(v___x_1104_);
v___x_1106_ = lean_array_push(v___x_1105_, v___x_1100_);
v___x_1107_ = lean_array_push(v___x_1106_, v___x_1101_);
v_code_1108_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_code_1108_, 0, v_resetJpId_1093_);
lean_ctor_set(v_code_1108_, 1, v___x_1107_);
v___x_1109_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg(v___x_1103_, v_mask_1092_, v_origAllocId_1091_, v___x_1102_, v_code_1108_, v_a_1095_, v_a_1096_, v_a_1097_, v_a_1098_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath___boxed(lean_object* v_origAllocId_1110_, lean_object* v_mask_1111_, lean_object* v_resetJpId_1112_, lean_object* v_isSharedId_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath(v_origAllocId_1110_, v_mask_1111_, v_resetJpId_1112_, v_isSharedId_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
lean_dec(v_a_1117_);
lean_dec_ref(v_a_1116_);
lean_dec(v_a_1115_);
lean_dec_ref(v_a_1114_);
lean_dec_ref(v_mask_1111_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0(lean_object* v_upperBound_1120_, lean_object* v_mask_1121_, lean_object* v_origAllocId_1122_, lean_object* v_inst_1123_, lean_object* v_R_1124_, lean_object* v_a_1125_, lean_object* v_b_1126_, lean_object* v_c_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v___x_1133_; 
v___x_1133_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg(v_upperBound_1120_, v_mask_1121_, v_origAllocId_1122_, v_a_1125_, v_b_1126_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___boxed(lean_object* v_upperBound_1134_, lean_object* v_mask_1135_, lean_object* v_origAllocId_1136_, lean_object* v_inst_1137_, lean_object* v_R_1138_, lean_object* v_a_1139_, lean_object* v_b_1140_, lean_object* v_c_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0(v_upperBound_1134_, v_mask_1135_, v_origAllocId_1136_, v_inst_1137_, v_R_1138_, v_a_1139_, v_b_1140_, v_c_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec_ref(v_mask_1135_);
lean_dec(v_upperBound_1134_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0___redArg(lean_object* v_as_1148_, size_t v_sz_1149_, size_t v_i_1150_, lean_object* v_b_1151_){
_start:
{
lean_object* v_a_1154_; uint8_t v___x_1158_; 
v___x_1158_ = lean_usize_dec_lt(v_i_1150_, v_sz_1149_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; 
v___x_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1159_, 0, v_b_1151_);
return v___x_1159_;
}
else
{
lean_object* v_a_1160_; 
v_a_1160_ = lean_array_uget_borrowed(v_as_1148_, v_i_1150_);
if (lean_obj_tag(v_a_1160_) == 1)
{
lean_object* v_val_1161_; lean_object* v___x_1162_; uint8_t v___x_1163_; lean_object* v___x_1164_; 
v_val_1161_ = lean_ctor_get(v_a_1160_, 0);
v___x_1162_ = lean_unsigned_to_nat(1u);
v___x_1163_ = 0;
lean_inc(v_val_1161_);
v___x_1164_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_1164_, 0, v_val_1161_);
lean_ctor_set(v___x_1164_, 1, v___x_1162_);
lean_ctor_set(v___x_1164_, 2, v_b_1151_);
lean_ctor_set_uint8(v___x_1164_, sizeof(void*)*3, v___x_1158_);
lean_ctor_set_uint8(v___x_1164_, sizeof(void*)*3 + 1, v___x_1163_);
v_a_1154_ = v___x_1164_;
goto v___jp_1153_;
}
else
{
v_a_1154_ = v_b_1151_;
goto v___jp_1153_;
}
}
v___jp_1153_:
{
size_t v___x_1155_; size_t v___x_1156_; 
v___x_1155_ = ((size_t)1ULL);
v___x_1156_ = lean_usize_add(v_i_1150_, v___x_1155_);
v_i_1150_ = v___x_1156_;
v_b_1151_ = v_a_1154_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0___redArg___boxed(lean_object* v_as_1165_, lean_object* v_sz_1166_, lean_object* v_i_1167_, lean_object* v_b_1168_, lean_object* v___y_1169_){
_start:
{
size_t v_sz_boxed_1170_; size_t v_i_boxed_1171_; lean_object* v_res_1172_; 
v_sz_boxed_1170_ = lean_unbox_usize(v_sz_1166_);
lean_dec(v_sz_1166_);
v_i_boxed_1171_ = lean_unbox_usize(v_i_1167_);
lean_dec(v_i_1167_);
v_res_1172_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0___redArg(v_as_1165_, v_sz_boxed_1170_, v_i_boxed_1171_, v_b_1168_);
lean_dec_ref(v_as_1165_);
return v_res_1172_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath___closed__0(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1173_ = lean_box(0);
v___x_1174_ = lean_unsigned_to_nat(2u);
v___x_1175_ = lean_mk_empty_array_with_capacity(v___x_1174_);
v___x_1176_ = lean_array_push(v___x_1175_, v___x_1173_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath(lean_object* v_origAllocId_1177_, lean_object* v_mask_1178_, lean_object* v_resetJpId_1179_, lean_object* v_isSharedId_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v_code_1189_; lean_object* v___x_1190_; uint8_t v___x_1191_; uint8_t v___x_1192_; lean_object* v___x_1193_; lean_object* v_code_1194_; size_t v_sz_1195_; size_t v___x_1196_; lean_object* v___x_1197_; 
v___x_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1186_, 0, v_isSharedId_1180_);
v___x_1187_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath___closed__0, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath___closed__0);
v___x_1188_ = lean_array_push(v___x_1187_, v___x_1186_);
v_code_1189_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_code_1189_, 0, v_resetJpId_1179_);
lean_ctor_set(v_code_1189_, 1, v___x_1188_);
v___x_1190_ = lean_unsigned_to_nat(1u);
v___x_1191_ = 1;
v___x_1192_ = 0;
v___x_1193_ = lean_box(0);
v_code_1194_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_code_1194_, 0, v_origAllocId_1177_);
lean_ctor_set(v_code_1194_, 1, v___x_1190_);
lean_ctor_set(v_code_1194_, 2, v___x_1193_);
lean_ctor_set(v_code_1194_, 3, v_code_1189_);
lean_ctor_set_uint8(v_code_1194_, sizeof(void*)*4, v___x_1191_);
lean_ctor_set_uint8(v_code_1194_, sizeof(void*)*4 + 1, v___x_1192_);
v_sz_1195_ = lean_array_size(v_mask_1178_);
v___x_1196_ = ((size_t)0ULL);
v___x_1197_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0___redArg(v_mask_1178_, v_sz_1195_, v___x_1196_, v_code_1194_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath___boxed(lean_object* v_origAllocId_1198_, lean_object* v_mask_1199_, lean_object* v_resetJpId_1200_, lean_object* v_isSharedId_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath(v_origAllocId_1198_, v_mask_1199_, v_resetJpId_1200_, v_isSharedId_1201_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_);
lean_dec(v_a_1205_);
lean_dec_ref(v_a_1204_);
lean_dec(v_a_1203_);
lean_dec_ref(v_a_1202_);
lean_dec_ref(v_mask_1199_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0(lean_object* v_as_1208_, size_t v_sz_1209_, size_t v_i_1210_, lean_object* v_b_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0___redArg(v_as_1208_, v_sz_1209_, v_i_1210_, v_b_1211_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0___boxed(lean_object* v_as_1218_, lean_object* v_sz_1219_, lean_object* v_i_1220_, lean_object* v_b_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
size_t v_sz_boxed_1227_; size_t v_i_boxed_1228_; lean_object* v_res_1229_; 
v_sz_boxed_1227_ = lean_unbox_usize(v_sz_1219_);
lean_dec(v_sz_1219_);
v_i_boxed_1228_ = lean_unbox_usize(v_i_1220_);
lean_dec(v_i_1220_);
v_res_1229_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath_spec__0(v_as_1218_, v_sz_boxed_1227_, v_i_boxed_1228_, v_b_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1222_);
lean_dec_ref(v_as_1218_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0___redArg(lean_object* v_upperBound_1230_, lean_object* v_args_1231_, lean_object* v_origAllocId_1232_, lean_object* v_resetTokenId_1233_, lean_object* v_a_1234_, lean_object* v_b_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v_a_1239_; uint8_t v___x_1243_; 
v___x_1243_ = lean_nat_dec_lt(v_a_1234_, v_upperBound_1230_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; 
lean_dec(v_a_1234_);
lean_dec(v_resetTokenId_1233_);
v___x_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1244_, 0, v_b_1235_);
return v___x_1244_;
}
else
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1245_ = lean_array_fget_borrowed(v_args_1231_, v_a_1234_);
v___x_1246_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_isSelfOset___redArg(v_origAllocId_1232_, v_a_1234_, v___x_1245_, v___y_1236_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; uint8_t v___x_1248_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
lean_inc(v_a_1247_);
lean_dec_ref_known(v___x_1246_, 1);
v___x_1248_ = lean_unbox(v_a_1247_);
lean_dec(v_a_1247_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; 
lean_inc(v___x_1245_);
lean_inc(v_a_1234_);
lean_inc(v_resetTokenId_1233_);
v___x_1249_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v___x_1249_, 0, v_resetTokenId_1233_);
lean_ctor_set(v___x_1249_, 1, v_a_1234_);
lean_ctor_set(v___x_1249_, 2, v___x_1245_);
lean_ctor_set(v___x_1249_, 3, v_b_1235_);
v_a_1239_ = v___x_1249_;
goto v___jp_1238_;
}
else
{
v_a_1239_ = v_b_1235_;
goto v___jp_1238_;
}
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
lean_dec_ref(v_b_1235_);
lean_dec(v_a_1234_);
lean_dec(v_resetTokenId_1233_);
v_a_1250_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1246_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1246_);
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
v___jp_1238_:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1240_ = lean_unsigned_to_nat(1u);
v___x_1241_ = lean_nat_add(v_a_1234_, v___x_1240_);
lean_dec(v_a_1234_);
v_a_1234_ = v___x_1241_;
v_b_1235_ = v_a_1239_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0___redArg___boxed(lean_object* v_upperBound_1258_, lean_object* v_args_1259_, lean_object* v_origAllocId_1260_, lean_object* v_resetTokenId_1261_, lean_object* v_a_1262_, lean_object* v_b_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0___redArg(v_upperBound_1258_, v_args_1259_, v_origAllocId_1260_, v_resetTokenId_1261_, v_a_1262_, v_b_1263_, v___y_1264_);
lean_dec(v___y_1264_);
lean_dec(v_origAllocId_1260_);
lean_dec_ref(v_args_1259_);
lean_dec(v_upperBound_1258_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath(lean_object* v_resetTokenId_1267_, lean_object* v_info_1268_, uint8_t v_update_1269_, lean_object* v_args_1270_, lean_object* v_contJpId_1271_, lean_object* v_origAllocId_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_){
_start:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v_code_1284_; lean_object* v___x_1285_; 
lean_inc_n(v_resetTokenId_1267_, 2);
v___x_1278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1278_, 0, v_resetTokenId_1267_);
v___x_1279_ = lean_unsigned_to_nat(0u);
v___x_1280_ = lean_array_get_size(v_args_1270_);
v___x_1281_ = lean_unsigned_to_nat(1u);
v___x_1282_ = lean_mk_empty_array_with_capacity(v___x_1281_);
v___x_1283_ = lean_array_push(v___x_1282_, v___x_1278_);
v_code_1284_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_code_1284_, 0, v_contJpId_1271_);
lean_ctor_set(v_code_1284_, 1, v___x_1283_);
v___x_1285_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0___redArg(v___x_1280_, v_args_1270_, v_origAllocId_1272_, v_resetTokenId_1267_, v___x_1279_, v_code_1284_, v_a_1274_);
if (lean_obj_tag(v___x_1285_) == 0)
{
if (v_update_1269_ == 0)
{
lean_dec(v_resetTokenId_1267_);
return v___x_1285_;
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1295_; 
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1288_ = v___x_1285_;
v_isShared_1289_ = v_isSharedCheck_1295_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1285_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1295_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v_cidx_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
v_cidx_1290_ = lean_ctor_get(v_info_1268_, 1);
lean_inc(v_cidx_1290_);
v___x_1291_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v___x_1291_, 0, v_resetTokenId_1267_);
lean_ctor_set(v___x_1291_, 1, v_cidx_1290_);
lean_ctor_set(v___x_1291_, 2, v_a_1286_);
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1291_);
v___x_1293_ = v___x_1288_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v___x_1291_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
}
else
{
lean_dec(v_resetTokenId_1267_);
return v___x_1285_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath___boxed(lean_object* v_resetTokenId_1296_, lean_object* v_info_1297_, lean_object* v_update_1298_, lean_object* v_args_1299_, lean_object* v_contJpId_1300_, lean_object* v_origAllocId_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_){
_start:
{
uint8_t v_update_boxed_1307_; lean_object* v_res_1308_; 
v_update_boxed_1307_ = lean_unbox(v_update_1298_);
v_res_1308_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath(v_resetTokenId_1296_, v_info_1297_, v_update_boxed_1307_, v_args_1299_, v_contJpId_1300_, v_origAllocId_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
lean_dec(v_a_1305_);
lean_dec_ref(v_a_1304_);
lean_dec(v_a_1303_);
lean_dec_ref(v_a_1302_);
lean_dec(v_origAllocId_1301_);
lean_dec_ref(v_args_1299_);
lean_dec_ref(v_info_1297_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0(lean_object* v_upperBound_1309_, lean_object* v_args_1310_, lean_object* v_origAllocId_1311_, lean_object* v_resetTokenId_1312_, lean_object* v_inst_1313_, lean_object* v_R_1314_, lean_object* v_a_1315_, lean_object* v_b_1316_, lean_object* v_c_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v___x_1323_; 
v___x_1323_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0___redArg(v_upperBound_1309_, v_args_1310_, v_origAllocId_1311_, v_resetTokenId_1312_, v_a_1315_, v_b_1316_, v___y_1319_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0___boxed(lean_object* v_upperBound_1324_, lean_object* v_args_1325_, lean_object* v_origAllocId_1326_, lean_object* v_resetTokenId_1327_, lean_object* v_inst_1328_, lean_object* v_R_1329_, lean_object* v_a_1330_, lean_object* v_b_1331_, lean_object* v_c_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath_spec__0(v_upperBound_1324_, v_args_1325_, v_origAllocId_1326_, v_resetTokenId_1327_, v_inst_1328_, v_R_1329_, v_a_1330_, v_b_1331_, v_c_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v_origAllocId_1326_);
lean_dec_ref(v_args_1325_);
lean_dec(v_upperBound_1324_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath(lean_object* v_decl_1342_, lean_object* v_info_1343_, lean_object* v_args_1344_, lean_object* v_contJpId_1345_, lean_object* v_selfSets_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_){
_start:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1352_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath___closed__1));
v___x_1353_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_1352_, v_a_1348_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; lean_object* v_type_1355_; uint8_t v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1354_);
lean_dec_ref_known(v___x_1353_, 1);
v_type_1355_ = lean_ctor_get(v_decl_1342_, 2);
lean_inc_ref(v_type_1355_);
lean_dec_ref(v_decl_1342_);
v___x_1356_ = 1;
v___x_1357_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1357_, 0, v_info_1343_);
lean_ctor_set(v___x_1357_, 1, v_args_1344_);
v___x_1358_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_1356_, v_a_1354_, v_type_1355_, v___x_1357_, v_a_1347_, v_a_1348_, v_a_1349_, v_a_1350_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v_a_1359_; lean_object* v_fvarId_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1376_; 
v_a_1359_ = lean_ctor_get(v___x_1358_, 0);
lean_inc(v_a_1359_);
lean_dec_ref_known(v___x_1358_, 1);
v_fvarId_1360_ = lean_ctor_get(v_a_1359_, 0);
lean_inc_n(v_fvarId_1360_, 2);
v___x_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1361_, 0, v_fvarId_1360_);
v___x_1362_ = lean_unsigned_to_nat(1u);
v___x_1363_ = lean_mk_empty_array_with_capacity(v___x_1362_);
v___x_1364_ = lean_array_push(v___x_1363_, v___x_1361_);
v___x_1365_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1365_, 0, v_contJpId_1345_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
v___x_1366_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_remapSets___redArg(v_fvarId_1360_, v_selfSets_1346_);
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1369_ = v___x_1366_;
v_isShared_1370_ = v_isSharedCheck_1376_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1366_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1376_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1374_; 
v___x_1371_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_a_1367_, v___x_1365_);
lean_dec(v_a_1367_);
v___x_1372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1372_, 0, v_a_1359_);
lean_ctor_set(v___x_1372_, 1, v___x_1371_);
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 0, v___x_1372_);
v___x_1374_ = v___x_1369_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1372_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
else
{
lean_object* v_a_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1384_; 
lean_dec(v_contJpId_1345_);
v_a_1377_ = lean_ctor_get(v___x_1358_, 0);
v_isSharedCheck_1384_ = !lean_is_exclusive(v___x_1358_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1379_ = v___x_1358_;
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_a_1377_);
lean_dec(v___x_1358_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v___x_1382_; 
if (v_isShared_1380_ == 0)
{
v___x_1382_ = v___x_1379_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_a_1377_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
}
else
{
lean_object* v_a_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1392_; 
lean_dec(v_contJpId_1345_);
lean_dec_ref(v_args_1344_);
lean_dec_ref(v_info_1343_);
lean_dec_ref(v_decl_1342_);
v_a_1385_ = lean_ctor_get(v___x_1353_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1387_ = v___x_1353_;
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_a_1385_);
lean_dec(v___x_1353_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1390_; 
if (v_isShared_1388_ == 0)
{
v___x_1390_ = v___x_1387_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v_a_1385_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
return v___x_1390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath___boxed(lean_object* v_decl_1393_, lean_object* v_info_1394_, lean_object* v_args_1395_, lean_object* v_contJpId_1396_, lean_object* v_selfSets_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath(v_decl_1393_, v_info_1394_, v_args_1395_, v_contJpId_1396_, v_selfSets_1397_, v_a_1398_, v_a_1399_, v_a_1400_, v_a_1401_);
lean_dec(v_a_1401_);
lean_dec_ref(v_a_1400_);
lean_dec(v_a_1399_);
lean_dec_ref(v_a_1398_);
lean_dec_ref(v_selfSets_1397_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0___redArg(lean_object* v_alt_1404_, lean_object* v_f_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v___y_1412_; 
switch(lean_obj_tag(v_alt_1404_))
{
case 0:
{
lean_object* v_code_1431_; 
v_code_1431_ = lean_ctor_get(v_alt_1404_, 2);
lean_inc_ref(v_code_1431_);
v___y_1412_ = v_code_1431_;
goto v___jp_1411_;
}
case 1:
{
lean_object* v_code_1432_; 
v_code_1432_ = lean_ctor_get(v_alt_1404_, 1);
lean_inc_ref(v_code_1432_);
v___y_1412_ = v_code_1432_;
goto v___jp_1411_;
}
default: 
{
lean_object* v_code_1433_; 
v_code_1433_ = lean_ctor_get(v_alt_1404_, 0);
lean_inc_ref(v_code_1433_);
v___y_1412_ = v_code_1433_;
goto v___jp_1411_;
}
}
v___jp_1411_:
{
lean_object* v___x_1413_; 
lean_inc(v___y_1409_);
lean_inc_ref(v___y_1408_);
lean_inc(v___y_1407_);
lean_inc_ref(v___y_1406_);
v___x_1413_ = lean_apply_6(v_f_1405_, v___y_1412_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, lean_box(0));
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1422_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1416_ = v___x_1413_;
v_isShared_1417_ = v_isSharedCheck_1422_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1413_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1422_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1418_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_1404_, v_a_1414_);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v___x_1418_);
v___x_1420_ = v___x_1416_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec_ref(v_alt_1404_);
v_a_1423_ = lean_ctor_get(v___x_1413_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1413_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1413_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1423_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0___redArg___boxed(lean_object* v_alt_1434_, lean_object* v_f_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0___redArg(v_alt_1434_, v_f_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0(uint8_t v_pu_1442_, lean_object* v_alt_1443_, lean_object* v_f_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0___redArg(v_alt_1443_, v_f_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0___boxed(lean_object* v_pu_1451_, lean_object* v_alt_1452_, lean_object* v_f_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
uint8_t v_pu_boxed_1459_; lean_object* v_res_1460_; 
v_pu_boxed_1459_ = lean_unbox(v_pu_1451_);
v_res_1460_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0(v_pu_boxed_1459_, v_alt_1452_, v_f_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
return v_res_1460_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1461_; 
v___x_1461_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2(lean_object* v_msg_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v_toApplicative_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1503_; 
v___x_1468_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__0);
v___x_1469_ = l_StateRefT_x27_instMonad___redArg(v___x_1468_);
v_toApplicative_1470_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1503_ == 0)
{
lean_object* v_unused_1504_; 
v_unused_1504_ = lean_ctor_get(v___x_1469_, 1);
lean_dec(v_unused_1504_);
v___x_1472_ = v___x_1469_;
v_isShared_1473_ = v_isSharedCheck_1503_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_toApplicative_1470_);
lean_dec(v___x_1469_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1503_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v_toFunctor_1474_; lean_object* v_toSeq_1475_; lean_object* v_toSeqLeft_1476_; lean_object* v_toSeqRight_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1501_; 
v_toFunctor_1474_ = lean_ctor_get(v_toApplicative_1470_, 0);
v_toSeq_1475_ = lean_ctor_get(v_toApplicative_1470_, 2);
v_toSeqLeft_1476_ = lean_ctor_get(v_toApplicative_1470_, 3);
v_toSeqRight_1477_ = lean_ctor_get(v_toApplicative_1470_, 4);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_toApplicative_1470_);
if (v_isSharedCheck_1501_ == 0)
{
lean_object* v_unused_1502_; 
v_unused_1502_ = lean_ctor_get(v_toApplicative_1470_, 1);
lean_dec(v_unused_1502_);
v___x_1479_ = v_toApplicative_1470_;
v_isShared_1480_ = v_isSharedCheck_1501_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_toSeqRight_1477_);
lean_inc(v_toSeqLeft_1476_);
lean_inc(v_toSeq_1475_);
lean_inc(v_toFunctor_1474_);
lean_dec(v_toApplicative_1470_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1501_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___f_1481_; lean_object* v___f_1482_; lean_object* v___f_1483_; lean_object* v___f_1484_; lean_object* v___x_1485_; lean_object* v___f_1486_; lean_object* v___f_1487_; lean_object* v___f_1488_; lean_object* v___x_1490_; 
v___f_1481_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__1));
v___f_1482_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1474_);
v___f_1483_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1483_, 0, v_toFunctor_1474_);
v___f_1484_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1484_, 0, v_toFunctor_1474_);
v___x_1485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1485_, 0, v___f_1483_);
lean_ctor_set(v___x_1485_, 1, v___f_1484_);
v___f_1486_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1486_, 0, v_toSeqRight_1477_);
v___f_1487_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1487_, 0, v_toSeqLeft_1476_);
v___f_1488_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1488_, 0, v_toSeq_1475_);
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 4, v___f_1486_);
lean_ctor_set(v___x_1479_, 3, v___f_1487_);
lean_ctor_set(v___x_1479_, 2, v___f_1488_);
lean_ctor_set(v___x_1479_, 1, v___f_1481_);
lean_ctor_set(v___x_1479_, 0, v___x_1485_);
v___x_1490_ = v___x_1479_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v___x_1485_);
lean_ctor_set(v_reuseFailAlloc_1500_, 1, v___f_1481_);
lean_ctor_set(v_reuseFailAlloc_1500_, 2, v___f_1488_);
lean_ctor_set(v_reuseFailAlloc_1500_, 3, v___f_1487_);
lean_ctor_set(v_reuseFailAlloc_1500_, 4, v___f_1486_);
v___x_1490_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
lean_object* v___x_1492_; 
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 1, v___f_1482_);
lean_ctor_set(v___x_1472_, 0, v___x_1490_);
v___x_1492_ = v___x_1472_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1490_);
lean_ctor_set(v_reuseFailAlloc_1499_, 1, v___f_1482_);
v___x_1492_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___f_1496_; lean_object* v___x_6838__overap_1497_; lean_object* v___x_1498_; 
v___x_1493_ = l_StateRefT_x27_instMonad___redArg(v___x_1492_);
v___x_1494_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2___closed__0);
v___x_1495_ = l_instInhabitedOfMonad___redArg(v___x_1493_, v___x_1494_);
v___f_1496_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1496_, 0, v___x_1495_);
v___x_6838__overap_1497_ = lean_panic_fn_borrowed(v___f_1496_, v_msg_1462_);
lean_dec_ref(v___f_1496_);
lean_inc(v___y_1466_);
lean_inc_ref(v___y_1465_);
lean_inc(v___y_1464_);
lean_inc_ref(v___y_1463_);
v___x_1498_ = lean_apply_5(v___x_6838__overap_1497_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, lean_box(0));
return v___x_1498_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2___boxed(lean_object* v_msg_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2(v_msg_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
return v_res_1511_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__4(void){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1518_ = lean_box(0);
v___x_1519_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__3));
v___x_1520_ = l_Lean_Expr_const___override(v___x_1519_, v___x_1518_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1___lam__0___boxed(lean_object* v_resetTokenId_1521_, lean_object* v_origAllocId_1522_, lean_object* v_isSharedId_1523_, lean_object* v_resultType_1524_, lean_object* v_x_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1___lam__0(v_resetTokenId_1521_, v_origAllocId_1522_, v_isSharedId_1523_, v_resultType_1524_, v_x_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1(lean_object* v_resetTokenId_1532_, lean_object* v_origAllocId_1533_, lean_object* v_isSharedId_1534_, lean_object* v_resultType_1535_, lean_object* v_i_1536_, lean_object* v_as_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v___x_1543_; uint8_t v___x_1544_; 
v___x_1543_ = lean_array_get_size(v_as_1537_);
v___x_1544_ = lean_nat_dec_lt(v_i_1536_, v___x_1543_);
if (v___x_1544_ == 0)
{
lean_object* v___x_1545_; 
lean_dec(v_i_1536_);
lean_dec_ref(v_resultType_1535_);
lean_dec(v_isSharedId_1534_);
lean_dec(v_origAllocId_1533_);
lean_dec(v_resetTokenId_1532_);
v___x_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1545_, 0, v_as_1537_);
return v___x_1545_;
}
else
{
lean_object* v___f_1546_; lean_object* v_a_1547_; lean_object* v___x_1548_; 
lean_inc_ref(v_resultType_1535_);
lean_inc(v_isSharedId_1534_);
lean_inc(v_origAllocId_1533_);
lean_inc(v_resetTokenId_1532_);
v___f_1546_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1546_, 0, v_resetTokenId_1532_);
lean_closure_set(v___f_1546_, 1, v_origAllocId_1533_);
lean_closure_set(v___f_1546_, 2, v_isSharedId_1534_);
lean_closure_set(v___f_1546_, 3, v_resultType_1535_);
v_a_1547_ = lean_array_fget_borrowed(v_as_1537_, v_i_1536_);
lean_inc(v_a_1547_);
v___x_1548_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0___redArg(v_a_1547_, v___f_1546_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_object* v_a_1549_; size_t v___x_1550_; size_t v___x_1551_; uint8_t v___x_1552_; 
v_a_1549_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_a_1549_);
lean_dec_ref_known(v___x_1548_, 1);
v___x_1550_ = lean_ptr_addr(v_a_1547_);
v___x_1551_ = lean_ptr_addr(v_a_1549_);
v___x_1552_ = lean_usize_dec_eq(v___x_1550_, v___x_1551_);
if (v___x_1552_ == 0)
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1553_ = lean_unsigned_to_nat(1u);
v___x_1554_ = lean_nat_add(v_i_1536_, v___x_1553_);
v___x_1555_ = lean_array_fset(v_as_1537_, v_i_1536_, v_a_1549_);
lean_dec(v_i_1536_);
v_i_1536_ = v___x_1554_;
v_as_1537_ = v___x_1555_;
goto _start;
}
else
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_dec(v_a_1549_);
v___x_1557_ = lean_unsigned_to_nat(1u);
v___x_1558_ = lean_nat_add(v_i_1536_, v___x_1557_);
lean_dec(v_i_1536_);
v_i_1536_ = v___x_1558_;
goto _start;
}
}
else
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1567_; 
lean_dec_ref(v_as_1537_);
lean_dec(v_i_1536_);
lean_dec_ref(v_resultType_1535_);
lean_dec(v_isSharedId_1534_);
lean_dec(v_origAllocId_1533_);
lean_dec(v_resetTokenId_1532_);
v_a_1560_ = lean_ctor_get(v___x_1548_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1548_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1562_ = v___x_1548_;
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1548_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1565_; 
if (v_isShared_1563_ == 0)
{
v___x_1565_ = v___x_1562_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_a_1560_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__7(void){
_start:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1570_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__6));
v___x_1571_ = lean_unsigned_to_nat(6u);
v___x_1572_ = lean_unsigned_to_nat(208u);
v___x_1573_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__5));
v___x_1574_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor_spec__1___redArg___closed__1));
v___x_1575_ = l_mkPanicMessageWithDecl(v___x_1574_, v___x_1573_, v___x_1572_, v___x_1571_, v___x_1570_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(lean_object* v_resetTokenId_1576_, lean_object* v_code_1577_, lean_object* v_origAllocId_1578_, lean_object* v_isSharedId_1579_, lean_object* v_currentRetType_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_){
_start:
{
switch(lean_obj_tag(v_code_1577_))
{
case 0:
{
lean_object* v_decl_1586_; lean_object* v_value_1587_; 
v_decl_1586_ = lean_ctor_get(v_code_1577_, 0);
v_value_1587_ = lean_ctor_get(v_decl_1586_, 3);
lean_inc(v_value_1587_);
if (lean_obj_tag(v_value_1587_) == 12)
{
lean_object* v_k_1588_; lean_object* v_fvarId_1589_; lean_object* v_binderName_1590_; lean_object* v_type_1591_; lean_object* v_var_1592_; lean_object* v_i_1593_; uint8_t v_updateHeader_1594_; lean_object* v_args_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1711_; 
v_k_1588_ = lean_ctor_get(v_code_1577_, 1);
v_fvarId_1589_ = lean_ctor_get(v_decl_1586_, 0);
v_binderName_1590_ = lean_ctor_get(v_decl_1586_, 1);
v_type_1591_ = lean_ctor_get(v_decl_1586_, 2);
v_var_1592_ = lean_ctor_get(v_value_1587_, 0);
v_i_1593_ = lean_ctor_get(v_value_1587_, 1);
v_updateHeader_1594_ = lean_ctor_get_uint8(v_value_1587_, sizeof(void*)*3);
v_args_1595_ = lean_ctor_get(v_value_1587_, 2);
v_isSharedCheck_1711_ = !lean_is_exclusive(v_value_1587_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1597_ = v_value_1587_;
v_isShared_1598_ = v_isSharedCheck_1711_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_args_1595_);
lean_inc(v_i_1593_);
lean_inc(v_var_1592_);
lean_dec(v_value_1587_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1711_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
uint8_t v___x_1599_; 
v___x_1599_ = l_Lean_instBEqFVarId_beq(v_resetTokenId_1576_, v_var_1592_);
lean_dec(v_var_1592_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; 
lean_del_object(v___x_1597_);
lean_dec_ref(v_args_1595_);
lean_dec_ref(v_i_1593_);
lean_inc_ref(v_k_1588_);
v___x_1600_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_1576_, v_k_1588_, v_origAllocId_1578_, v_isSharedId_1579_, v_currentRetType_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_object* v_a_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1623_; 
v_a_1601_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1603_ = v___x_1600_;
v_isShared_1604_ = v_isSharedCheck_1623_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_a_1601_);
lean_dec(v___x_1600_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1623_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
size_t v___x_1605_; size_t v___x_1606_; uint8_t v___x_1607_; 
v___x_1605_ = lean_ptr_addr(v_k_1588_);
v___x_1606_ = lean_ptr_addr(v_a_1601_);
v___x_1607_ = lean_usize_dec_eq(v___x_1605_, v___x_1606_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1617_; 
lean_inc_ref(v_decl_1586_);
v_isSharedCheck_1617_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_1617_ == 0)
{
lean_object* v_unused_1618_; lean_object* v_unused_1619_; 
v_unused_1618_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_1618_);
v_unused_1619_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_1619_);
v___x_1609_ = v_code_1577_;
v_isShared_1610_ = v_isSharedCheck_1617_;
goto v_resetjp_1608_;
}
else
{
lean_dec(v_code_1577_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1617_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 1, v_a_1601_);
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_decl_1586_);
lean_ctor_set(v_reuseFailAlloc_1616_, 1, v_a_1601_);
v___x_1612_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
lean_object* v___x_1614_; 
if (v_isShared_1604_ == 0)
{
lean_ctor_set(v___x_1603_, 0, v___x_1612_);
v___x_1614_ = v___x_1603_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v___x_1612_);
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
lean_object* v___x_1621_; 
lean_dec(v_a_1601_);
if (v_isShared_1604_ == 0)
{
lean_ctor_set(v___x_1603_, 0, v_code_1577_);
v___x_1621_ = v___x_1603_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_code_1577_);
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
lean_dec_ref_known(v_code_1577_, 2);
return v___x_1600_;
}
}
else
{
lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1708_; 
lean_inc_ref(v_k_1588_);
lean_inc_ref(v_decl_1586_);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_1708_ == 0)
{
lean_object* v_unused_1709_; lean_object* v_unused_1710_; 
v_unused_1709_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_1709_);
v_unused_1710_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_1710_);
v___x_1625_ = v_code_1577_;
v_isShared_1626_ = v_isSharedCheck_1708_;
goto v_resetjp_1624_;
}
else
{
lean_dec(v_code_1577_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1708_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
uint8_t v___x_1627_; lean_object* v___x_1628_; 
v___x_1627_ = 0;
v___x_1628_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_collectSucceedingSets(v_fvarId_1589_, v_k_1588_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_object* v_a_1629_; lean_object* v_fst_1630_; lean_object* v_snd_1631_; lean_object* v___x_1632_; 
v_a_1629_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_a_1629_);
lean_dec_ref_known(v___x_1628_, 1);
v_fst_1630_ = lean_ctor_get(v_a_1629_, 0);
lean_inc(v_fst_1630_);
v_snd_1631_ = lean_ctor_get(v_a_1629_, 1);
lean_inc(v_snd_1631_);
lean_dec(v_a_1629_);
v___x_1632_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_partitionSelfSets(v_origAllocId_1578_, v_fst_1630_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
lean_dec(v_fst_1630_);
if (lean_obj_tag(v___x_1632_) == 0)
{
lean_object* v_a_1633_; lean_object* v_fst_1634_; lean_object* v_snd_1635_; uint8_t v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1639_; 
v_a_1633_ = lean_ctor_get(v___x_1632_, 0);
lean_inc(v_a_1633_);
lean_dec_ref_known(v___x_1632_, 1);
v_fst_1634_ = lean_ctor_get(v_a_1633_, 0);
lean_inc(v_fst_1634_);
v_snd_1635_ = lean_ctor_get(v_a_1633_, 1);
lean_inc(v_snd_1635_);
lean_dec(v_a_1633_);
v___x_1636_ = 1;
v___x_1637_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_snd_1635_, v_snd_1631_);
lean_dec(v_snd_1635_);
lean_inc_ref(v_type_1591_);
lean_inc(v_binderName_1590_);
lean_inc(v_fvarId_1589_);
if (v_isShared_1598_ == 0)
{
lean_ctor_set_tag(v___x_1597_, 0);
lean_ctor_set(v___x_1597_, 2, v_type_1591_);
lean_ctor_set(v___x_1597_, 1, v_binderName_1590_);
lean_ctor_set(v___x_1597_, 0, v_fvarId_1589_);
v___x_1639_ = v___x_1597_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_fvarId_1589_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v_binderName_1590_);
lean_ctor_set(v_reuseFailAlloc_1691_, 2, v_type_1591_);
v___x_1639_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; 
lean_ctor_set_uint8(v___x_1639_, sizeof(void*)*3, v___x_1627_);
v___x_1640_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__1));
v___x_1641_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_1640_, v_a_1582_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
lean_inc(v_a_1642_);
lean_dec_ref_known(v___x_1641_, 1);
v___x_1643_ = lean_unsigned_to_nat(1u);
v___x_1644_ = lean_mk_empty_array_with_capacity(v___x_1643_);
v___x_1645_ = lean_array_push(v___x_1644_, v___x_1639_);
lean_inc_ref(v_currentRetType_1580_);
v___x_1646_ = l_Lean_Compiler_LCNF_mkFunDecl(v___x_1636_, v_a_1642_, v_currentRetType_1580_, v___x_1645_, v___x_1637_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v_fvarId_1648_; lean_object* v___x_1649_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_a_1647_);
lean_dec_ref_known(v___x_1646_, 1);
v_fvarId_1648_ = lean_ctor_get(v_a_1647_, 0);
lean_inc(v_fvarId_1648_);
lean_inc_ref(v_args_1595_);
lean_inc_ref(v_i_1593_);
lean_inc_ref(v_decl_1586_);
v___x_1649_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkSlowPath(v_decl_1586_, v_i_1593_, v_args_1595_, v_fvarId_1648_, v_fst_1634_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
lean_dec(v_fst_1634_);
if (lean_obj_tag(v___x_1649_) == 0)
{
lean_object* v_a_1650_; lean_object* v___x_1651_; 
v_a_1650_ = lean_ctor_get(v___x_1649_, 0);
lean_inc(v_a_1650_);
lean_dec_ref_known(v___x_1649_, 1);
lean_inc(v_fvarId_1648_);
v___x_1651_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_mkFastPath(v_resetTokenId_1576_, v_i_1593_, v_updateHeader_1594_, v_args_1595_, v_fvarId_1648_, v_origAllocId_1578_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
lean_dec(v_origAllocId_1578_);
lean_dec_ref(v_args_1595_);
lean_dec_ref(v_i_1593_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v_a_1652_; lean_object* v___x_1653_; 
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
lean_inc(v_a_1652_);
lean_dec_ref_known(v___x_1651_, 1);
v___x_1653_ = l_Lean_Compiler_LCNF_eraseLetDecl___redArg(v___x_1636_, v_decl_1586_, v_a_1582_);
lean_dec_ref(v_decl_1586_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
lean_dec_ref_known(v___x_1653_, 1);
v___x_1654_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__4, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__4);
v___x_1655_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg(v_isSharedId_1579_, v___x_1654_, v_currentRetType_1580_, v_a_1650_, v_a_1652_);
if (lean_obj_tag(v___x_1655_) == 0)
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1666_; 
v_a_1656_ = lean_ctor_get(v___x_1655_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1658_ = v___x_1655_;
v_isShared_1659_ = v_isSharedCheck_1666_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1655_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1666_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1626_ == 0)
{
lean_ctor_set_tag(v___x_1625_, 2);
lean_ctor_set(v___x_1625_, 1, v_a_1656_);
lean_ctor_set(v___x_1625_, 0, v_a_1647_);
v___x_1661_ = v___x_1625_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_a_1647_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
lean_object* v___x_1663_; 
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 0, v___x_1661_);
v___x_1663_ = v___x_1658_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v___x_1661_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
else
{
lean_dec(v_a_1647_);
lean_del_object(v___x_1625_);
return v___x_1655_;
}
}
else
{
lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1674_; 
lean_dec(v_a_1652_);
lean_dec(v_a_1650_);
lean_dec(v_a_1647_);
lean_del_object(v___x_1625_);
lean_dec_ref(v_currentRetType_1580_);
lean_dec(v_isSharedId_1579_);
v_a_1667_ = lean_ctor_get(v___x_1653_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1669_ = v___x_1653_;
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_dec(v___x_1653_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1672_; 
if (v_isShared_1670_ == 0)
{
v___x_1672_ = v___x_1669_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_a_1667_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
else
{
lean_dec(v_a_1650_);
lean_dec(v_a_1647_);
lean_del_object(v___x_1625_);
lean_dec_ref(v_decl_1586_);
lean_dec_ref(v_currentRetType_1580_);
lean_dec(v_isSharedId_1579_);
return v___x_1651_;
}
}
else
{
lean_dec(v_a_1647_);
lean_del_object(v___x_1625_);
lean_dec_ref(v_args_1595_);
lean_dec_ref(v_i_1593_);
lean_dec_ref(v_decl_1586_);
lean_dec_ref(v_currentRetType_1580_);
lean_dec(v_isSharedId_1579_);
lean_dec(v_origAllocId_1578_);
lean_dec(v_resetTokenId_1576_);
return v___x_1649_;
}
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_dec(v_fst_1634_);
lean_del_object(v___x_1625_);
lean_dec_ref(v_args_1595_);
lean_dec_ref(v_i_1593_);
lean_dec_ref(v_decl_1586_);
lean_dec_ref(v_currentRetType_1580_);
lean_dec(v_isSharedId_1579_);
lean_dec(v_origAllocId_1578_);
lean_dec(v_resetTokenId_1576_);
v_a_1675_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1646_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1646_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
else
{
lean_object* v_a_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1690_; 
lean_dec_ref(v___x_1639_);
lean_dec_ref(v___x_1637_);
lean_dec(v_fst_1634_);
lean_del_object(v___x_1625_);
lean_dec_ref(v_args_1595_);
lean_dec_ref(v_i_1593_);
lean_dec_ref(v_decl_1586_);
lean_dec_ref(v_currentRetType_1580_);
lean_dec(v_isSharedId_1579_);
lean_dec(v_origAllocId_1578_);
lean_dec(v_resetTokenId_1576_);
v_a_1683_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1685_ = v___x_1641_;
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_a_1683_);
lean_dec(v___x_1641_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1688_; 
if (v_isShared_1686_ == 0)
{
v___x_1688_ = v___x_1685_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_a_1683_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
}
}
else
{
lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1699_; 
lean_dec(v_snd_1631_);
lean_del_object(v___x_1625_);
lean_del_object(v___x_1597_);
lean_dec_ref(v_args_1595_);
lean_dec_ref(v_i_1593_);
lean_dec_ref(v_decl_1586_);
lean_dec_ref(v_currentRetType_1580_);
lean_dec(v_isSharedId_1579_);
lean_dec(v_origAllocId_1578_);
lean_dec(v_resetTokenId_1576_);
v_a_1692_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1694_ = v___x_1632_;
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_dec(v___x_1632_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
if (v_isShared_1695_ == 0)
{
v___x_1697_ = v___x_1694_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_a_1692_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
else
{
lean_object* v_a_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1707_; 
lean_del_object(v___x_1625_);
lean_del_object(v___x_1597_);
lean_dec_ref(v_args_1595_);
lean_dec_ref(v_i_1593_);
lean_dec_ref(v_decl_1586_);
lean_dec_ref(v_currentRetType_1580_);
lean_dec(v_isSharedId_1579_);
lean_dec(v_origAllocId_1578_);
lean_dec(v_resetTokenId_1576_);
v_a_1700_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1702_ = v___x_1628_;
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_a_1700_);
lean_dec(v___x_1628_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1705_; 
if (v_isShared_1703_ == 0)
{
v___x_1705_ = v___x_1702_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_a_1700_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
}
}
}
}
else
{
lean_object* v_k_1712_; lean_object* v___x_1713_; 
lean_dec(v_value_1587_);
v_k_1712_ = lean_ctor_get(v_code_1577_, 1);
lean_inc_ref(v_k_1712_);
v___x_1713_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_1576_, v_k_1712_, v_origAllocId_1578_, v_isSharedId_1579_, v_currentRetType_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1736_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1716_ = v___x_1713_;
v_isShared_1717_ = v_isSharedCheck_1736_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1713_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1736_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
size_t v___x_1718_; size_t v___x_1719_; uint8_t v___x_1720_; 
v___x_1718_ = lean_ptr_addr(v_k_1712_);
v___x_1719_ = lean_ptr_addr(v_a_1714_);
v___x_1720_ = lean_usize_dec_eq(v___x_1718_, v___x_1719_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1730_; 
lean_inc_ref(v_decl_1586_);
v_isSharedCheck_1730_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_1730_ == 0)
{
lean_object* v_unused_1731_; lean_object* v_unused_1732_; 
v_unused_1731_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_1731_);
v_unused_1732_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_1732_);
v___x_1722_ = v_code_1577_;
v_isShared_1723_ = v_isSharedCheck_1730_;
goto v_resetjp_1721_;
}
else
{
lean_dec(v_code_1577_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1730_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
lean_ctor_set(v___x_1722_, 1, v_a_1714_);
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_decl_1586_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v_a_1714_);
v___x_1725_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
lean_object* v___x_1727_; 
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v___x_1725_);
v___x_1727_ = v___x_1716_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v___x_1725_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
else
{
lean_object* v___x_1734_; 
lean_dec(v_a_1714_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v_code_1577_);
v___x_1734_ = v___x_1716_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_code_1577_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1577_, 2);
return v___x_1713_;
}
}
}
case 2:
{
lean_object* v_decl_1737_; lean_object* v_k_1738_; lean_object* v_params_1739_; lean_object* v_type_1740_; lean_object* v_value_1741_; uint8_t v___x_1742_; lean_object* v___x_1743_; 
v_decl_1737_ = lean_ctor_get(v_code_1577_, 0);
v_k_1738_ = lean_ctor_get(v_code_1577_, 1);
v_params_1739_ = lean_ctor_get(v_decl_1737_, 2);
v_type_1740_ = lean_ctor_get(v_decl_1737_, 3);
v_value_1741_ = lean_ctor_get(v_decl_1737_, 4);
v___x_1742_ = 1;
lean_inc_ref(v_type_1740_);
lean_inc(v_isSharedId_1579_);
lean_inc(v_origAllocId_1578_);
lean_inc_ref(v_value_1741_);
lean_inc(v_resetTokenId_1576_);
v___x_1743_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_1576_, v_value_1741_, v_origAllocId_1578_, v_isSharedId_1579_, v_type_1740_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1743_) == 0)
{
lean_object* v_a_1744_; lean_object* v___x_1745_; 
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1744_);
lean_dec_ref_known(v___x_1743_, 1);
lean_inc_ref(v_params_1739_);
lean_inc_ref(v_type_1740_);
lean_inc_ref(v_decl_1737_);
v___x_1745_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1742_, v_decl_1737_, v_type_1740_, v_params_1739_, v_a_1744_, v_a_1582_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; lean_object* v___x_1747_; 
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1745_, 1);
lean_inc_ref(v_k_1738_);
v___x_1747_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_1576_, v_k_1738_, v_origAllocId_1578_, v_isSharedId_1579_, v_currentRetType_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1785_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1750_ = v___x_1747_;
v_isShared_1751_ = v_isSharedCheck_1785_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1747_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1785_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
size_t v___x_1752_; size_t v___x_1753_; uint8_t v___x_1754_; 
v___x_1752_ = lean_ptr_addr(v_k_1738_);
v___x_1753_ = lean_ptr_addr(v_a_1748_);
v___x_1754_ = lean_usize_dec_eq(v___x_1752_, v___x_1753_);
if (v___x_1754_ == 0)
{
lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1764_; 
v_isSharedCheck_1764_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_1764_ == 0)
{
lean_object* v_unused_1765_; lean_object* v_unused_1766_; 
v_unused_1765_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_1765_);
v_unused_1766_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_1766_);
v___x_1756_ = v_code_1577_;
v_isShared_1757_ = v_isSharedCheck_1764_;
goto v_resetjp_1755_;
}
else
{
lean_dec(v_code_1577_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1764_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 1, v_a_1748_);
lean_ctor_set(v___x_1756_, 0, v_a_1746_);
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_a_1746_);
lean_ctor_set(v_reuseFailAlloc_1763_, 1, v_a_1748_);
v___x_1759_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
lean_object* v___x_1761_; 
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v___x_1759_);
v___x_1761_ = v___x_1750_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___x_1759_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
}
else
{
size_t v___x_1767_; size_t v___x_1768_; uint8_t v___x_1769_; 
v___x_1767_ = lean_ptr_addr(v_decl_1737_);
v___x_1768_ = lean_ptr_addr(v_a_1746_);
v___x_1769_ = lean_usize_dec_eq(v___x_1767_, v___x_1768_);
if (v___x_1769_ == 0)
{
lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1779_; 
v_isSharedCheck_1779_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_1779_ == 0)
{
lean_object* v_unused_1780_; lean_object* v_unused_1781_; 
v_unused_1780_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_1780_);
v_unused_1781_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_1781_);
v___x_1771_ = v_code_1577_;
v_isShared_1772_ = v_isSharedCheck_1779_;
goto v_resetjp_1770_;
}
else
{
lean_dec(v_code_1577_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1779_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 1, v_a_1748_);
lean_ctor_set(v___x_1771_, 0, v_a_1746_);
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v_a_1746_);
lean_ctor_set(v_reuseFailAlloc_1778_, 1, v_a_1748_);
v___x_1774_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1776_; 
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v___x_1774_);
v___x_1776_ = v___x_1750_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1774_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
else
{
lean_object* v___x_1783_; 
lean_dec(v_a_1748_);
lean_dec(v_a_1746_);
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v_code_1577_);
v___x_1783_ = v___x_1750_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_code_1577_);
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
else
{
lean_dec(v_a_1746_);
lean_dec_ref_known(v_code_1577_, 2);
return v___x_1747_;
}
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1793_; 
lean_dec_ref_known(v_code_1577_, 2);
lean_dec_ref(v_currentRetType_1580_);
lean_dec(v_isSharedId_1579_);
lean_dec(v_origAllocId_1578_);
lean_dec(v_resetTokenId_1576_);
v_a_1786_ = lean_ctor_get(v___x_1745_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1745_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1788_ = v___x_1745_;
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_a_1786_);
lean_dec(v___x_1745_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___x_1791_; 
if (v_isShared_1789_ == 0)
{
v___x_1791_ = v___x_1788_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_a_1786_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1577_, 2);
lean_dec_ref(v_currentRetType_1580_);
lean_dec(v_isSharedId_1579_);
lean_dec(v_origAllocId_1578_);
lean_dec(v_resetTokenId_1576_);
return v___x_1743_;
}
}
case 4:
{
lean_object* v_cases_1794_; lean_object* v_typeName_1795_; lean_object* v_resultType_1796_; lean_object* v_discr_1797_; lean_object* v_alts_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1837_; 
lean_dec_ref(v_currentRetType_1580_);
v_cases_1794_ = lean_ctor_get(v_code_1577_, 0);
lean_inc_ref(v_cases_1794_);
v_typeName_1795_ = lean_ctor_get(v_cases_1794_, 0);
v_resultType_1796_ = lean_ctor_get(v_cases_1794_, 1);
v_discr_1797_ = lean_ctor_get(v_cases_1794_, 2);
v_alts_1798_ = lean_ctor_get(v_cases_1794_, 3);
v_isSharedCheck_1837_ = !lean_is_exclusive(v_cases_1794_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1800_ = v_cases_1794_;
v_isShared_1801_ = v_isSharedCheck_1837_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_alts_1798_);
lean_inc(v_discr_1797_);
lean_inc(v_resultType_1796_);
lean_inc(v_typeName_1795_);
lean_dec(v_cases_1794_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1837_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_1798_);
lean_inc_ref(v_resultType_1796_);
v___x_1803_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1(v_resetTokenId_1576_, v_origAllocId_1578_, v_isSharedId_1579_, v_resultType_1796_, v___x_1802_, v_alts_1798_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1828_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1806_ = v___x_1803_;
v_isShared_1807_ = v_isSharedCheck_1828_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1803_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1828_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
size_t v___x_1808_; size_t v___x_1809_; uint8_t v___x_1810_; 
v___x_1808_ = lean_ptr_addr(v_alts_1798_);
lean_dec_ref(v_alts_1798_);
v___x_1809_ = lean_ptr_addr(v_a_1804_);
v___x_1810_ = lean_usize_dec_eq(v___x_1808_, v___x_1809_);
if (v___x_1810_ == 0)
{
lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1823_; 
v_isSharedCheck_1823_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_1823_ == 0)
{
lean_object* v_unused_1824_; 
v_unused_1824_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_1824_);
v___x_1812_ = v_code_1577_;
v_isShared_1813_ = v_isSharedCheck_1823_;
goto v_resetjp_1811_;
}
else
{
lean_dec(v_code_1577_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1823_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1815_; 
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 3, v_a_1804_);
v___x_1815_ = v___x_1800_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_typeName_1795_);
lean_ctor_set(v_reuseFailAlloc_1822_, 1, v_resultType_1796_);
lean_ctor_set(v_reuseFailAlloc_1822_, 2, v_discr_1797_);
lean_ctor_set(v_reuseFailAlloc_1822_, 3, v_a_1804_);
v___x_1815_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
lean_object* v___x_1817_; 
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 0, v___x_1815_);
v___x_1817_ = v___x_1812_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v___x_1815_);
v___x_1817_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
lean_object* v___x_1819_; 
if (v_isShared_1807_ == 0)
{
lean_ctor_set(v___x_1806_, 0, v___x_1817_);
v___x_1819_ = v___x_1806_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v___x_1817_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
}
}
else
{
lean_object* v___x_1826_; 
lean_dec(v_a_1804_);
lean_del_object(v___x_1800_);
lean_dec(v_discr_1797_);
lean_dec_ref(v_resultType_1796_);
lean_dec(v_typeName_1795_);
if (v_isShared_1807_ == 0)
{
lean_ctor_set(v___x_1806_, 0, v_code_1577_);
v___x_1826_ = v___x_1806_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_code_1577_);
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
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
lean_del_object(v___x_1800_);
lean_dec_ref(v_alts_1798_);
lean_dec(v_discr_1797_);
lean_dec_ref(v_resultType_1796_);
lean_dec(v_typeName_1795_);
lean_dec_ref_known(v_code_1577_, 1);
v_a_1829_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1831_ = v___x_1803_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1803_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_1838_; lean_object* v_i_1839_; lean_object* v_y_1840_; lean_object* v_k_1841_; lean_object* v___x_1842_; 
v_fvarId_1838_ = lean_ctor_get(v_code_1577_, 0);
v_i_1839_ = lean_ctor_get(v_code_1577_, 1);
v_y_1840_ = lean_ctor_get(v_code_1577_, 2);
v_k_1841_ = lean_ctor_get(v_code_1577_, 3);
lean_inc_ref(v_k_1841_);
v___x_1842_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_1576_, v_k_1841_, v_origAllocId_1578_, v_isSharedId_1579_, v_currentRetType_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1867_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1845_ = v___x_1842_;
v_isShared_1846_ = v_isSharedCheck_1867_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1867_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
size_t v___x_1847_; size_t v___x_1848_; uint8_t v___x_1849_; 
v___x_1847_ = lean_ptr_addr(v_k_1841_);
v___x_1848_ = lean_ptr_addr(v_a_1843_);
v___x_1849_ = lean_usize_dec_eq(v___x_1847_, v___x_1848_);
if (v___x_1849_ == 0)
{
lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1859_; 
lean_inc(v_y_1840_);
lean_inc(v_i_1839_);
lean_inc(v_fvarId_1838_);
v_isSharedCheck_1859_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_1859_ == 0)
{
lean_object* v_unused_1860_; lean_object* v_unused_1861_; lean_object* v_unused_1862_; lean_object* v_unused_1863_; 
v_unused_1860_ = lean_ctor_get(v_code_1577_, 3);
lean_dec(v_unused_1860_);
v_unused_1861_ = lean_ctor_get(v_code_1577_, 2);
lean_dec(v_unused_1861_);
v_unused_1862_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_1862_);
v_unused_1863_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_1863_);
v___x_1851_ = v_code_1577_;
v_isShared_1852_ = v_isSharedCheck_1859_;
goto v_resetjp_1850_;
}
else
{
lean_dec(v_code_1577_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1859_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1854_; 
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 3, v_a_1843_);
v___x_1854_ = v___x_1851_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_fvarId_1838_);
lean_ctor_set(v_reuseFailAlloc_1858_, 1, v_i_1839_);
lean_ctor_set(v_reuseFailAlloc_1858_, 2, v_y_1840_);
lean_ctor_set(v_reuseFailAlloc_1858_, 3, v_a_1843_);
v___x_1854_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
lean_object* v___x_1856_; 
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 0, v___x_1854_);
v___x_1856_ = v___x_1845_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v___x_1854_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
else
{
lean_object* v___x_1865_; 
lean_dec(v_a_1843_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 0, v_code_1577_);
v___x_1865_ = v___x_1845_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_code_1577_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1577_, 4);
return v___x_1842_;
}
}
case 8:
{
lean_object* v_fvarId_1868_; lean_object* v_i_1869_; lean_object* v_y_1870_; lean_object* v_k_1871_; lean_object* v___x_1872_; 
v_fvarId_1868_ = lean_ctor_get(v_code_1577_, 0);
v_i_1869_ = lean_ctor_get(v_code_1577_, 1);
v_y_1870_ = lean_ctor_get(v_code_1577_, 2);
v_k_1871_ = lean_ctor_get(v_code_1577_, 3);
lean_inc_ref(v_k_1871_);
v___x_1872_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_1576_, v_k_1871_, v_origAllocId_1578_, v_isSharedId_1579_, v_currentRetType_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1897_; 
v_a_1873_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1875_ = v___x_1872_;
v_isShared_1876_ = v_isSharedCheck_1897_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1872_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1897_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
size_t v___x_1877_; size_t v___x_1878_; uint8_t v___x_1879_; 
v___x_1877_ = lean_ptr_addr(v_k_1871_);
v___x_1878_ = lean_ptr_addr(v_a_1873_);
v___x_1879_ = lean_usize_dec_eq(v___x_1877_, v___x_1878_);
if (v___x_1879_ == 0)
{
lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1889_; 
lean_inc(v_y_1870_);
lean_inc(v_i_1869_);
lean_inc(v_fvarId_1868_);
v_isSharedCheck_1889_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_1889_ == 0)
{
lean_object* v_unused_1890_; lean_object* v_unused_1891_; lean_object* v_unused_1892_; lean_object* v_unused_1893_; 
v_unused_1890_ = lean_ctor_get(v_code_1577_, 3);
lean_dec(v_unused_1890_);
v_unused_1891_ = lean_ctor_get(v_code_1577_, 2);
lean_dec(v_unused_1891_);
v_unused_1892_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_1892_);
v_unused_1893_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_1893_);
v___x_1881_ = v_code_1577_;
v_isShared_1882_ = v_isSharedCheck_1889_;
goto v_resetjp_1880_;
}
else
{
lean_dec(v_code_1577_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1889_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1884_; 
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 3, v_a_1873_);
v___x_1884_ = v___x_1881_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_fvarId_1868_);
lean_ctor_set(v_reuseFailAlloc_1888_, 1, v_i_1869_);
lean_ctor_set(v_reuseFailAlloc_1888_, 2, v_y_1870_);
lean_ctor_set(v_reuseFailAlloc_1888_, 3, v_a_1873_);
v___x_1884_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
lean_object* v___x_1886_; 
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 0, v___x_1884_);
v___x_1886_ = v___x_1875_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v___x_1884_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
else
{
lean_object* v___x_1895_; 
lean_dec(v_a_1873_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 0, v_code_1577_);
v___x_1895_ = v___x_1875_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_code_1577_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1577_, 4);
return v___x_1872_;
}
}
case 9:
{
lean_object* v_fvarId_1898_; lean_object* v_i_1899_; lean_object* v_offset_1900_; lean_object* v_y_1901_; lean_object* v_ty_1902_; lean_object* v_k_1903_; lean_object* v___x_1904_; 
v_fvarId_1898_ = lean_ctor_get(v_code_1577_, 0);
v_i_1899_ = lean_ctor_get(v_code_1577_, 1);
v_offset_1900_ = lean_ctor_get(v_code_1577_, 2);
v_y_1901_ = lean_ctor_get(v_code_1577_, 3);
v_ty_1902_ = lean_ctor_get(v_code_1577_, 4);
v_k_1903_ = lean_ctor_get(v_code_1577_, 5);
lean_inc_ref(v_k_1903_);
v___x_1904_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_1576_, v_k_1903_, v_origAllocId_1578_, v_isSharedId_1579_, v_currentRetType_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1931_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1907_ = v___x_1904_;
v_isShared_1908_ = v_isSharedCheck_1931_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1904_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1931_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
size_t v___x_1909_; size_t v___x_1910_; uint8_t v___x_1911_; 
v___x_1909_ = lean_ptr_addr(v_k_1903_);
v___x_1910_ = lean_ptr_addr(v_a_1905_);
v___x_1911_ = lean_usize_dec_eq(v___x_1909_, v___x_1910_);
if (v___x_1911_ == 0)
{
lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1921_; 
lean_inc_ref(v_ty_1902_);
lean_inc(v_y_1901_);
lean_inc(v_offset_1900_);
lean_inc(v_i_1899_);
lean_inc(v_fvarId_1898_);
v_isSharedCheck_1921_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_1921_ == 0)
{
lean_object* v_unused_1922_; lean_object* v_unused_1923_; lean_object* v_unused_1924_; lean_object* v_unused_1925_; lean_object* v_unused_1926_; lean_object* v_unused_1927_; 
v_unused_1922_ = lean_ctor_get(v_code_1577_, 5);
lean_dec(v_unused_1922_);
v_unused_1923_ = lean_ctor_get(v_code_1577_, 4);
lean_dec(v_unused_1923_);
v_unused_1924_ = lean_ctor_get(v_code_1577_, 3);
lean_dec(v_unused_1924_);
v_unused_1925_ = lean_ctor_get(v_code_1577_, 2);
lean_dec(v_unused_1925_);
v_unused_1926_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_1926_);
v_unused_1927_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_1927_);
v___x_1913_ = v_code_1577_;
v_isShared_1914_ = v_isSharedCheck_1921_;
goto v_resetjp_1912_;
}
else
{
lean_dec(v_code_1577_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1921_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 5, v_a_1905_);
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_fvarId_1898_);
lean_ctor_set(v_reuseFailAlloc_1920_, 1, v_i_1899_);
lean_ctor_set(v_reuseFailAlloc_1920_, 2, v_offset_1900_);
lean_ctor_set(v_reuseFailAlloc_1920_, 3, v_y_1901_);
lean_ctor_set(v_reuseFailAlloc_1920_, 4, v_ty_1902_);
lean_ctor_set(v_reuseFailAlloc_1920_, 5, v_a_1905_);
v___x_1916_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
lean_object* v___x_1918_; 
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 0, v___x_1916_);
v___x_1918_ = v___x_1907_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v___x_1916_);
v___x_1918_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
return v___x_1918_;
}
}
}
}
else
{
lean_object* v___x_1929_; 
lean_dec(v_a_1905_);
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 0, v_code_1577_);
v___x_1929_ = v___x_1907_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_code_1577_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1577_, 6);
return v___x_1904_;
}
}
case 10:
{
lean_object* v_fvarId_1932_; lean_object* v_cidx_1933_; lean_object* v_k_1934_; lean_object* v___x_1935_; 
v_fvarId_1932_ = lean_ctor_get(v_code_1577_, 0);
v_cidx_1933_ = lean_ctor_get(v_code_1577_, 1);
v_k_1934_ = lean_ctor_get(v_code_1577_, 2);
lean_inc_ref(v_k_1934_);
v___x_1935_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_1576_, v_k_1934_, v_origAllocId_1578_, v_isSharedId_1579_, v_currentRetType_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1959_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1938_ = v___x_1935_;
v_isShared_1939_ = v_isSharedCheck_1959_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1935_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1959_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
size_t v___x_1940_; size_t v___x_1941_; uint8_t v___x_1942_; 
v___x_1940_ = lean_ptr_addr(v_k_1934_);
v___x_1941_ = lean_ptr_addr(v_a_1936_);
v___x_1942_ = lean_usize_dec_eq(v___x_1940_, v___x_1941_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1952_; 
lean_inc(v_cidx_1933_);
lean_inc(v_fvarId_1932_);
v_isSharedCheck_1952_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_1952_ == 0)
{
lean_object* v_unused_1953_; lean_object* v_unused_1954_; lean_object* v_unused_1955_; 
v_unused_1953_ = lean_ctor_get(v_code_1577_, 2);
lean_dec(v_unused_1953_);
v_unused_1954_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_1954_);
v_unused_1955_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_1955_);
v___x_1944_ = v_code_1577_;
v_isShared_1945_ = v_isSharedCheck_1952_;
goto v_resetjp_1943_;
}
else
{
lean_dec(v_code_1577_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1952_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 2, v_a_1936_);
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_fvarId_1932_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v_cidx_1933_);
lean_ctor_set(v_reuseFailAlloc_1951_, 2, v_a_1936_);
v___x_1947_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
lean_object* v___x_1949_; 
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 0, v___x_1947_);
v___x_1949_ = v___x_1938_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v___x_1947_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
else
{
lean_object* v___x_1957_; 
lean_dec(v_a_1936_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 0, v_code_1577_);
v___x_1957_ = v___x_1938_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_code_1577_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1577_, 3);
return v___x_1935_;
}
}
case 11:
{
lean_object* v_fvarId_1960_; lean_object* v_n_1961_; uint8_t v_check_1962_; uint8_t v_persistent_1963_; lean_object* v_k_1964_; lean_object* v___x_1965_; 
v_fvarId_1960_ = lean_ctor_get(v_code_1577_, 0);
v_n_1961_ = lean_ctor_get(v_code_1577_, 1);
v_check_1962_ = lean_ctor_get_uint8(v_code_1577_, sizeof(void*)*3);
v_persistent_1963_ = lean_ctor_get_uint8(v_code_1577_, sizeof(void*)*3 + 1);
v_k_1964_ = lean_ctor_get(v_code_1577_, 2);
lean_inc_ref(v_k_1964_);
v___x_1965_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_1576_, v_k_1964_, v_origAllocId_1578_, v_isSharedId_1579_, v_currentRetType_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v_a_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1989_; 
v_a_1966_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1968_ = v___x_1965_;
v_isShared_1969_ = v_isSharedCheck_1989_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_a_1966_);
lean_dec(v___x_1965_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1989_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
size_t v___x_1970_; size_t v___x_1971_; uint8_t v___x_1972_; 
v___x_1970_ = lean_ptr_addr(v_k_1964_);
v___x_1971_ = lean_ptr_addr(v_a_1966_);
v___x_1972_ = lean_usize_dec_eq(v___x_1970_, v___x_1971_);
if (v___x_1972_ == 0)
{
lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1982_; 
lean_inc(v_n_1961_);
lean_inc(v_fvarId_1960_);
v_isSharedCheck_1982_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_1982_ == 0)
{
lean_object* v_unused_1983_; lean_object* v_unused_1984_; lean_object* v_unused_1985_; 
v_unused_1983_ = lean_ctor_get(v_code_1577_, 2);
lean_dec(v_unused_1983_);
v_unused_1984_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_1984_);
v_unused_1985_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_1985_);
v___x_1974_ = v_code_1577_;
v_isShared_1975_ = v_isSharedCheck_1982_;
goto v_resetjp_1973_;
}
else
{
lean_dec(v_code_1577_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1982_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
lean_ctor_set(v___x_1974_, 2, v_a_1966_);
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_fvarId_1960_);
lean_ctor_set(v_reuseFailAlloc_1981_, 1, v_n_1961_);
lean_ctor_set(v_reuseFailAlloc_1981_, 2, v_a_1966_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*3, v_check_1962_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*3 + 1, v_persistent_1963_);
v___x_1977_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
lean_object* v___x_1979_; 
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 0, v___x_1977_);
v___x_1979_ = v___x_1968_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v___x_1977_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
}
}
else
{
lean_object* v___x_1987_; 
lean_dec(v_a_1966_);
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 0, v_code_1577_);
v___x_1987_ = v___x_1968_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_code_1577_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1577_, 3);
return v___x_1965_;
}
}
case 12:
{
lean_object* v_fvarId_1990_; lean_object* v_n_1991_; uint8_t v_check_1992_; uint8_t v_persistent_1993_; lean_object* v_objs_x3f_1994_; lean_object* v_k_1995_; uint8_t v___x_1996_; 
v_fvarId_1990_ = lean_ctor_get(v_code_1577_, 0);
v_n_1991_ = lean_ctor_get(v_code_1577_, 1);
v_check_1992_ = lean_ctor_get_uint8(v_code_1577_, sizeof(void*)*4);
v_persistent_1993_ = lean_ctor_get_uint8(v_code_1577_, sizeof(void*)*4 + 1);
v_objs_x3f_1994_ = lean_ctor_get(v_code_1577_, 2);
v_k_1995_ = lean_ctor_get(v_code_1577_, 3);
v___x_1996_ = l_Lean_instBEqFVarId_beq(v_resetTokenId_1576_, v_fvarId_1990_);
if (v___x_1996_ == 0)
{
lean_object* v___x_1997_; 
lean_inc_ref(v_k_1995_);
v___x_1997_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_1576_, v_k_1995_, v_origAllocId_1578_, v_isSharedId_1579_, v_currentRetType_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2022_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2000_ = v___x_1997_;
v_isShared_2001_ = v_isSharedCheck_2022_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1997_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2022_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
size_t v___x_2002_; size_t v___x_2003_; uint8_t v___x_2004_; 
v___x_2002_ = lean_ptr_addr(v_k_1995_);
v___x_2003_ = lean_ptr_addr(v_a_1998_);
v___x_2004_ = lean_usize_dec_eq(v___x_2002_, v___x_2003_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2014_; 
lean_inc(v_objs_x3f_1994_);
lean_inc(v_n_1991_);
lean_inc(v_fvarId_1990_);
v_isSharedCheck_2014_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_2014_ == 0)
{
lean_object* v_unused_2015_; lean_object* v_unused_2016_; lean_object* v_unused_2017_; lean_object* v_unused_2018_; 
v_unused_2015_ = lean_ctor_get(v_code_1577_, 3);
lean_dec(v_unused_2015_);
v_unused_2016_ = lean_ctor_get(v_code_1577_, 2);
lean_dec(v_unused_2016_);
v_unused_2017_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_2017_);
v_unused_2018_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_2018_);
v___x_2006_ = v_code_1577_;
v_isShared_2007_ = v_isSharedCheck_2014_;
goto v_resetjp_2005_;
}
else
{
lean_dec(v_code_1577_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2014_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2009_; 
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 3, v_a_1998_);
v___x_2009_ = v___x_2006_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_fvarId_1990_);
lean_ctor_set(v_reuseFailAlloc_2013_, 1, v_n_1991_);
lean_ctor_set(v_reuseFailAlloc_2013_, 2, v_objs_x3f_1994_);
lean_ctor_set(v_reuseFailAlloc_2013_, 3, v_a_1998_);
lean_ctor_set_uint8(v_reuseFailAlloc_2013_, sizeof(void*)*4, v_check_1992_);
lean_ctor_set_uint8(v_reuseFailAlloc_2013_, sizeof(void*)*4 + 1, v_persistent_1993_);
v___x_2009_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
lean_object* v___x_2011_; 
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 0, v___x_2009_);
v___x_2011_ = v___x_2000_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_2009_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
else
{
lean_object* v___x_2020_; 
lean_dec(v_a_1998_);
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 0, v_code_1577_);
v___x_2020_ = v___x_2000_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_code_1577_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1577_, 4);
return v___x_1997_;
}
}
else
{
lean_object* v___x_2023_; uint8_t v___x_2024_; 
lean_inc_ref(v_k_1995_);
lean_inc(v_n_1991_);
lean_dec_ref_known(v_code_1577_, 4);
lean_dec_ref(v_currentRetType_1580_);
lean_dec(v_isSharedId_1579_);
lean_dec(v_origAllocId_1578_);
v___x_2023_ = lean_unsigned_to_nat(1u);
v___x_2024_ = lean_nat_dec_eq(v_n_1991_, v___x_2023_);
lean_dec(v_n_1991_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
lean_dec_ref(v_k_1995_);
lean_dec(v_resetTokenId_1576_);
v___x_2025_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__7, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__7_once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__7);
v___x_2026_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__2(v___x_2025_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
return v___x_2026_;
}
else
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v___x_2027_, 0, v_resetTokenId_1576_);
lean_ctor_set(v___x_2027_, 1, v_k_1995_);
v___x_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2027_);
return v___x_2028_;
}
}
}
case 13:
{
lean_object* v_fvarId_2029_; lean_object* v_k_2030_; lean_object* v___x_2031_; 
v_fvarId_2029_ = lean_ctor_get(v_code_1577_, 0);
v_k_2030_ = lean_ctor_get(v_code_1577_, 1);
lean_inc_ref(v_k_2030_);
v___x_2031_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_1576_, v_k_2030_, v_origAllocId_1578_, v_isSharedId_1579_, v_currentRetType_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2054_; 
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2034_ = v___x_2031_;
v_isShared_2035_ = v_isSharedCheck_2054_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v___x_2031_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2054_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
size_t v___x_2036_; size_t v___x_2037_; uint8_t v___x_2038_; 
v___x_2036_ = lean_ptr_addr(v_k_2030_);
v___x_2037_ = lean_ptr_addr(v_a_2032_);
v___x_2038_ = lean_usize_dec_eq(v___x_2036_, v___x_2037_);
if (v___x_2038_ == 0)
{
lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2048_; 
lean_inc(v_fvarId_2029_);
v_isSharedCheck_2048_ = !lean_is_exclusive(v_code_1577_);
if (v_isSharedCheck_2048_ == 0)
{
lean_object* v_unused_2049_; lean_object* v_unused_2050_; 
v_unused_2049_ = lean_ctor_get(v_code_1577_, 1);
lean_dec(v_unused_2049_);
v_unused_2050_ = lean_ctor_get(v_code_1577_, 0);
lean_dec(v_unused_2050_);
v___x_2040_ = v_code_1577_;
v_isShared_2041_ = v_isSharedCheck_2048_;
goto v_resetjp_2039_;
}
else
{
lean_dec(v_code_1577_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2048_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 1, v_a_2032_);
v___x_2043_ = v___x_2040_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_fvarId_2029_);
lean_ctor_set(v_reuseFailAlloc_2047_, 1, v_a_2032_);
v___x_2043_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
lean_object* v___x_2045_; 
if (v_isShared_2035_ == 0)
{
lean_ctor_set(v___x_2034_, 0, v___x_2043_);
v___x_2045_ = v___x_2034_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
}
else
{
lean_object* v___x_2052_; 
lean_dec(v_a_2032_);
if (v_isShared_2035_ == 0)
{
lean_ctor_set(v___x_2034_, 0, v_code_1577_);
v___x_2052_ = v___x_2034_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_code_1577_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1577_, 2);
return v___x_2031_;
}
}
default: 
{
lean_object* v___x_2055_; 
lean_dec_ref(v_currentRetType_1580_);
lean_dec(v_isSharedId_1579_);
lean_dec(v_origAllocId_1578_);
lean_dec(v_resetTokenId_1576_);
v___x_2055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2055_, 0, v_code_1577_);
return v___x_2055_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1___lam__0(lean_object* v_resetTokenId_2056_, lean_object* v_origAllocId_2057_, lean_object* v_isSharedId_2058_, lean_object* v_resultType_2059_, lean_object* v_x_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_){
_start:
{
lean_object* v___x_2066_; 
v___x_2066_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_2056_, v_x_2060_, v_origAllocId_2057_, v_isSharedId_2058_, v_resultType_2059_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
return v___x_2066_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1___boxed(lean_object* v_resetTokenId_2067_, lean_object* v_origAllocId_2068_, lean_object* v_isSharedId_2069_, lean_object* v_resultType_2070_, lean_object* v_i_2071_, lean_object* v_as_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__1(v_resetTokenId_2067_, v_origAllocId_2068_, v_isSharedId_2069_, v_resultType_2070_, v_i_2071_, v_as_2072_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___boxed(lean_object* v_resetTokenId_2079_, lean_object* v_code_2080_, lean_object* v_origAllocId_2081_, lean_object* v_isSharedId_2082_, lean_object* v_currentRetType_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_){
_start:
{
lean_object* v_res_2089_; 
v_res_2089_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_resetTokenId_2079_, v_code_2080_, v_origAllocId_2081_, v_isSharedId_2082_, v_currentRetType_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
lean_dec(v_a_2087_);
lean_dec_ref(v_a_2086_);
lean_dec(v_a_2085_);
lean_dec_ref(v_a_2084_);
return v_res_2089_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand(lean_object* v_currentRetType_2099_, lean_object* v_ds_2100_, lean_object* v_decl_2101_, lean_object* v_nFields_2102_, lean_object* v_origAllocId_2103_, lean_object* v_k_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_){
_start:
{
lean_object* v___x_2110_; 
v___x_2110_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor(v_nFields_2102_, v_origAllocId_2103_, v_ds_2100_, v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_);
if (lean_obj_tag(v___x_2110_) == 0)
{
lean_object* v_a_2111_; lean_object* v_fst_2112_; lean_object* v_snd_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2234_; 
v_a_2111_ = lean_ctor_get(v___x_2110_, 0);
lean_inc(v_a_2111_);
lean_dec_ref_known(v___x_2110_, 1);
v_fst_2112_ = lean_ctor_get(v_a_2111_, 0);
v_snd_2113_ = lean_ctor_get(v_a_2111_, 1);
v_isSharedCheck_2234_ = !lean_is_exclusive(v_a_2111_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2115_ = v_a_2111_;
v_isShared_2116_ = v_isSharedCheck_2234_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_snd_2113_);
lean_inc(v_fst_2112_);
lean_dec(v_a_2111_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2234_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__1));
v___x_2118_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_2117_, v_a_2106_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; uint8_t v___x_2120_; lean_object* v___x_2121_; uint8_t v___x_2122_; lean_object* v___x_2123_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
lean_inc(v_a_2119_);
lean_dec_ref_known(v___x_2118_, 1);
v___x_2120_ = 1;
v___x_2121_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__4, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont___closed__4);
v___x_2122_ = 0;
v___x_2123_ = l_Lean_Compiler_LCNF_mkParam(v___x_2120_, v_a_2119_, v___x_2121_, v___x_2122_, v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_);
if (lean_obj_tag(v___x_2123_) == 0)
{
lean_object* v_a_2124_; lean_object* v_fvarId_2125_; lean_object* v_binderName_2126_; lean_object* v_fvarId_2127_; lean_object* v___x_2128_; 
v_a_2124_ = lean_ctor_get(v___x_2123_, 0);
lean_inc(v_a_2124_);
lean_dec_ref_known(v___x_2123_, 1);
v_fvarId_2125_ = lean_ctor_get(v_decl_2101_, 0);
v_binderName_2126_ = lean_ctor_get(v_decl_2101_, 1);
v_fvarId_2127_ = lean_ctor_get(v_a_2124_, 0);
lean_inc_ref(v_currentRetType_2099_);
lean_inc(v_fvarId_2127_);
lean_inc(v_origAllocId_2103_);
lean_inc(v_fvarId_2125_);
v___x_2128_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont(v_fvarId_2125_, v_k_2104_, v_origAllocId_2103_, v_fvarId_2127_, v_currentRetType_2099_, v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v_a_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; 
v_a_2129_ = lean_ctor_get(v___x_2128_, 0);
lean_inc(v_a_2129_);
lean_dec_ref_known(v___x_2128_, 1);
v___x_2130_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___closed__0));
lean_inc_ref(v_currentRetType_2099_);
v___x_2131_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse(v_a_2129_, v___x_2130_, v_currentRetType_2099_, v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_);
if (lean_obj_tag(v___x_2131_) == 0)
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2217_; 
v_a_2132_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2134_ = v___x_2131_;
v_isShared_2135_ = v_isSharedCheck_2217_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2131_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2217_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2136_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath_spec__0___redArg___closed__4);
lean_inc(v_binderName_2126_);
lean_inc(v_fvarId_2125_);
v___x_2137_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2137_, 0, v_fvarId_2125_);
lean_ctor_set(v___x_2137_, 1, v_binderName_2126_);
lean_ctor_set(v___x_2137_, 2, v___x_2136_);
lean_ctor_set_uint8(v___x_2137_, sizeof(void*)*3, v___x_2122_);
v___x_2138_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__3));
v___x_2139_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_2138_, v_a_2106_);
if (lean_obj_tag(v___x_2139_) == 0)
{
lean_object* v_a_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v_a_2140_ = lean_ctor_get(v___x_2139_, 0);
lean_inc(v_a_2140_);
lean_dec_ref_known(v___x_2139_, 1);
v___x_2141_ = lean_unsigned_to_nat(2u);
v___x_2142_ = lean_mk_empty_array_with_capacity(v___x_2141_);
v___x_2143_ = lean_array_push(v___x_2142_, v___x_2137_);
v___x_2144_ = lean_array_push(v___x_2143_, v_a_2124_);
lean_inc_ref(v_currentRetType_2099_);
v___x_2145_ = l_Lean_Compiler_LCNF_mkFunDecl(v___x_2120_, v_a_2140_, v_currentRetType_2099_, v___x_2144_, v_a_2132_, v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_a_2146_);
lean_dec_ref_known(v___x_2145_, 1);
v___x_2147_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___closed__5));
v___x_2148_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_2147_, v_a_2106_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2151_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2148_, 1);
lean_inc(v_origAllocId_2103_);
if (v_isShared_2135_ == 0)
{
lean_ctor_set_tag(v___x_2134_, 15);
lean_ctor_set(v___x_2134_, 0, v_origAllocId_2103_);
v___x_2151_ = v___x_2134_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(15, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_origAllocId_2103_);
v___x_2151_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
lean_object* v___x_2152_; 
v___x_2152_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2120_, v_a_2149_, v___x_2121_, v___x_2151_, v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_);
if (lean_obj_tag(v___x_2152_) == 0)
{
lean_object* v_a_2153_; lean_object* v_fvarId_2154_; lean_object* v_fvarId_2155_; lean_object* v___x_2156_; 
v_a_2153_ = lean_ctor_get(v___x_2152_, 0);
lean_inc(v_a_2153_);
lean_dec_ref_known(v___x_2152_, 1);
v_fvarId_2154_ = lean_ctor_get(v_a_2146_, 0);
v_fvarId_2155_ = lean_ctor_get(v_a_2153_, 0);
lean_inc(v_fvarId_2155_);
lean_inc(v_fvarId_2154_);
lean_inc(v_origAllocId_2103_);
v___x_2156_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkSlowPath(v_origAllocId_2103_, v_snd_2113_, v_fvarId_2154_, v_fvarId_2155_, v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_);
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_a_2157_; lean_object* v___x_2158_; 
v_a_2157_ = lean_ctor_get(v___x_2156_, 0);
lean_inc(v_a_2157_);
lean_dec_ref_known(v___x_2156_, 1);
lean_inc(v_fvarId_2155_);
lean_inc(v_fvarId_2154_);
v___x_2158_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_mkFastPath(v_origAllocId_2103_, v_snd_2113_, v_fvarId_2154_, v_fvarId_2155_, v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_);
lean_dec(v_snd_2113_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2160_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2159_);
lean_dec_ref_known(v___x_2158_, 1);
lean_inc(v_fvarId_2155_);
v___x_2160_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_mkIf___redArg(v_fvarId_2155_, v___x_2121_, v_currentRetType_2099_, v_a_2157_, v_a_2159_);
if (lean_obj_tag(v___x_2160_) == 0)
{
lean_object* v_a_2161_; lean_object* v___x_2163_; 
v_a_2161_ = lean_ctor_get(v___x_2160_, 0);
lean_inc(v_a_2161_);
lean_dec_ref_known(v___x_2160_, 1);
if (v_isShared_2116_ == 0)
{
lean_ctor_set(v___x_2115_, 1, v_a_2161_);
lean_ctor_set(v___x_2115_, 0, v_a_2153_);
v___x_2163_ = v___x_2115_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2153_);
lean_ctor_set(v_reuseFailAlloc_2183_, 1, v_a_2161_);
v___x_2163_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
lean_object* v___x_2164_; 
v___x_2164_ = l_Lean_Compiler_LCNF_eraseLetDecl___redArg(v___x_2120_, v_decl_2101_, v_a_2106_);
lean_dec_ref(v_decl_2101_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2173_; 
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2173_ == 0)
{
lean_object* v_unused_2174_; 
v_unused_2174_ = lean_ctor_get(v___x_2164_, 0);
lean_dec(v_unused_2174_);
v___x_2166_ = v___x_2164_;
v_isShared_2167_ = v_isSharedCheck_2173_;
goto v_resetjp_2165_;
}
else
{
lean_dec(v___x_2164_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2173_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2171_; 
v___x_2168_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2168_, 0, v_a_2146_);
lean_ctor_set(v___x_2168_, 1, v___x_2163_);
v___x_2169_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_fst_2112_, v___x_2168_);
lean_dec(v_fst_2112_);
if (v_isShared_2167_ == 0)
{
lean_ctor_set(v___x_2166_, 0, v___x_2169_);
v___x_2171_ = v___x_2166_;
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
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2182_; 
lean_dec_ref(v___x_2163_);
lean_dec(v_a_2146_);
lean_dec(v_fst_2112_);
v_a_2175_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2177_ = v___x_2164_;
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2164_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2180_; 
if (v_isShared_2178_ == 0)
{
v___x_2180_ = v___x_2177_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_a_2175_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
}
else
{
lean_dec(v_a_2153_);
lean_dec(v_a_2146_);
lean_del_object(v___x_2115_);
lean_dec(v_fst_2112_);
lean_dec_ref(v_decl_2101_);
return v___x_2160_;
}
}
else
{
lean_dec(v_a_2157_);
lean_dec(v_a_2153_);
lean_dec(v_a_2146_);
lean_del_object(v___x_2115_);
lean_dec(v_fst_2112_);
lean_dec_ref(v_decl_2101_);
lean_dec_ref(v_currentRetType_2099_);
return v___x_2158_;
}
}
else
{
lean_dec(v_a_2153_);
lean_dec(v_a_2146_);
lean_del_object(v___x_2115_);
lean_dec(v_snd_2113_);
lean_dec(v_fst_2112_);
lean_dec(v_origAllocId_2103_);
lean_dec_ref(v_decl_2101_);
lean_dec_ref(v_currentRetType_2099_);
return v___x_2156_;
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_dec(v_a_2146_);
lean_del_object(v___x_2115_);
lean_dec(v_snd_2113_);
lean_dec(v_fst_2112_);
lean_dec(v_origAllocId_2103_);
lean_dec_ref(v_decl_2101_);
lean_dec_ref(v_currentRetType_2099_);
v_a_2184_ = lean_ctor_get(v___x_2152_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2152_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2152_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2152_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
}
else
{
lean_object* v_a_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2200_; 
lean_dec(v_a_2146_);
lean_del_object(v___x_2134_);
lean_del_object(v___x_2115_);
lean_dec(v_snd_2113_);
lean_dec(v_fst_2112_);
lean_dec(v_origAllocId_2103_);
lean_dec_ref(v_decl_2101_);
lean_dec_ref(v_currentRetType_2099_);
v_a_2193_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2195_ = v___x_2148_;
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_a_2193_);
lean_dec(v___x_2148_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v___x_2198_; 
if (v_isShared_2196_ == 0)
{
v___x_2198_ = v___x_2195_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_a_2193_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
}
}
else
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
lean_del_object(v___x_2134_);
lean_del_object(v___x_2115_);
lean_dec(v_snd_2113_);
lean_dec(v_fst_2112_);
lean_dec(v_origAllocId_2103_);
lean_dec_ref(v_decl_2101_);
lean_dec_ref(v_currentRetType_2099_);
v_a_2201_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2203_ = v___x_2145_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2145_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_a_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
}
else
{
lean_object* v_a_2209_; lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2216_; 
lean_dec_ref_known(v___x_2137_, 3);
lean_del_object(v___x_2134_);
lean_dec(v_a_2132_);
lean_dec(v_a_2124_);
lean_del_object(v___x_2115_);
lean_dec(v_snd_2113_);
lean_dec(v_fst_2112_);
lean_dec(v_origAllocId_2103_);
lean_dec_ref(v_decl_2101_);
lean_dec_ref(v_currentRetType_2099_);
v_a_2209_ = lean_ctor_get(v___x_2139_, 0);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___x_2139_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2211_ = v___x_2139_;
v_isShared_2212_ = v_isSharedCheck_2216_;
goto v_resetjp_2210_;
}
else
{
lean_inc(v_a_2209_);
lean_dec(v___x_2139_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2216_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2214_; 
if (v_isShared_2212_ == 0)
{
v___x_2214_ = v___x_2211_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_a_2209_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
return v___x_2214_;
}
}
}
}
}
else
{
lean_dec(v_a_2124_);
lean_del_object(v___x_2115_);
lean_dec(v_snd_2113_);
lean_dec(v_fst_2112_);
lean_dec(v_origAllocId_2103_);
lean_dec_ref(v_decl_2101_);
lean_dec_ref(v_currentRetType_2099_);
return v___x_2131_;
}
}
else
{
lean_dec(v_a_2124_);
lean_del_object(v___x_2115_);
lean_dec(v_snd_2113_);
lean_dec(v_fst_2112_);
lean_dec(v_origAllocId_2103_);
lean_dec_ref(v_decl_2101_);
lean_dec_ref(v_currentRetType_2099_);
return v___x_2128_;
}
}
else
{
lean_object* v_a_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2225_; 
lean_del_object(v___x_2115_);
lean_dec(v_snd_2113_);
lean_dec(v_fst_2112_);
lean_dec_ref(v_k_2104_);
lean_dec(v_origAllocId_2103_);
lean_dec_ref(v_decl_2101_);
lean_dec_ref(v_currentRetType_2099_);
v_a_2218_ = lean_ctor_get(v___x_2123_, 0);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2220_ = v___x_2123_;
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_a_2218_);
lean_dec(v___x_2123_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v___x_2223_; 
if (v_isShared_2221_ == 0)
{
v___x_2223_ = v___x_2220_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_a_2218_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
return v___x_2223_;
}
}
}
}
else
{
lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2233_; 
lean_del_object(v___x_2115_);
lean_dec(v_snd_2113_);
lean_dec(v_fst_2112_);
lean_dec_ref(v_k_2104_);
lean_dec(v_origAllocId_2103_);
lean_dec_ref(v_decl_2101_);
lean_dec_ref(v_currentRetType_2099_);
v_a_2226_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2228_ = v___x_2118_;
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___x_2118_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2229_ == 0)
{
v___x_2231_ = v___x_2228_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_a_2226_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
lean_dec_ref(v_k_2104_);
lean_dec(v_origAllocId_2103_);
lean_dec_ref(v_decl_2101_);
lean_dec_ref(v_currentRetType_2099_);
v_a_2235_ = lean_ctor_get(v___x_2110_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2110_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2110_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2110_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1___lam__0___boxed(lean_object* v_resultType_2243_, lean_object* v_x_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1___lam__0(v_resultType_2243_, v_x_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1(lean_object* v_resultType_2251_, lean_object* v_i_2252_, lean_object* v_as_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_){
_start:
{
lean_object* v___x_2259_; uint8_t v___x_2260_; 
v___x_2259_ = lean_array_get_size(v_as_2253_);
v___x_2260_ = lean_nat_dec_lt(v_i_2252_, v___x_2259_);
if (v___x_2260_ == 0)
{
lean_object* v___x_2261_; 
lean_dec(v_i_2252_);
lean_dec_ref(v_resultType_2251_);
v___x_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2261_, 0, v_as_2253_);
return v___x_2261_;
}
else
{
lean_object* v___f_2262_; lean_object* v_a_2263_; lean_object* v___x_2264_; 
lean_inc_ref(v_resultType_2251_);
v___f_2262_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2262_, 0, v_resultType_2251_);
v_a_2263_ = lean_array_fget_borrowed(v_as_2253_, v_i_2252_);
lean_inc(v_a_2263_);
v___x_2264_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_processResetCont_spec__0___redArg(v_a_2263_, v___f_2262_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; size_t v___x_2266_; size_t v___x_2267_; uint8_t v___x_2268_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
lean_inc(v_a_2265_);
lean_dec_ref_known(v___x_2264_, 1);
v___x_2266_ = lean_ptr_addr(v_a_2263_);
v___x_2267_ = lean_ptr_addr(v_a_2265_);
v___x_2268_ = lean_usize_dec_eq(v___x_2266_, v___x_2267_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2269_ = lean_unsigned_to_nat(1u);
v___x_2270_ = lean_nat_add(v_i_2252_, v___x_2269_);
v___x_2271_ = lean_array_fset(v_as_2253_, v_i_2252_, v_a_2265_);
lean_dec(v_i_2252_);
v_i_2252_ = v___x_2270_;
v_as_2253_ = v___x_2271_;
goto _start;
}
else
{
lean_object* v___x_2273_; lean_object* v___x_2274_; 
lean_dec(v_a_2265_);
v___x_2273_ = lean_unsigned_to_nat(1u);
v___x_2274_ = lean_nat_add(v_i_2252_, v___x_2273_);
lean_dec(v_i_2252_);
v_i_2252_ = v___x_2274_;
goto _start;
}
}
else
{
lean_object* v_a_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2283_; 
lean_dec_ref(v_as_2253_);
lean_dec(v_i_2252_);
lean_dec_ref(v_resultType_2251_);
v_a_2276_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2283_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2278_ = v___x_2264_;
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_a_2276_);
lean_dec(v___x_2264_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse(lean_object* v_code_2284_, lean_object* v_ds_2285_, lean_object* v_currentRetType_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_){
_start:
{
lean_object* v_code_2293_; lean_object* v_ds_2294_; lean_object* v_k_2295_; lean_object* v___y_2296_; lean_object* v___y_2297_; lean_object* v___y_2298_; lean_object* v___y_2299_; 
switch(lean_obj_tag(v_code_2284_))
{
case 0:
{
lean_object* v_decl_2304_; lean_object* v_value_2305_; 
v_decl_2304_ = lean_ctor_get(v_code_2284_, 0);
v_value_2305_ = lean_ctor_get(v_decl_2304_, 3);
if (lean_obj_tag(v_value_2305_) == 11)
{
lean_object* v_k_2306_; lean_object* v_n_2307_; lean_object* v_var_2308_; lean_object* v___x_2309_; 
lean_inc_ref(v_decl_2304_);
v_k_2306_ = lean_ctor_get(v_code_2284_, 1);
lean_inc_ref(v_k_2306_);
lean_dec_ref_known(v_code_2284_, 2);
v_n_2307_ = lean_ctor_get(v_value_2305_, 0);
lean_inc(v_n_2307_);
v_var_2308_ = lean_ctor_get(v_value_2305_, 1);
lean_inc(v_var_2308_);
v___x_2309_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand(v_currentRetType_2286_, v_ds_2285_, v_decl_2304_, v_n_2307_, v_var_2308_, v_k_2306_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
return v___x_2309_;
}
else
{
lean_object* v_k_2310_; 
v_k_2310_ = lean_ctor_get(v_code_2284_, 1);
lean_inc_ref(v_k_2310_);
v_code_2293_ = v_code_2284_;
v_ds_2294_ = v_ds_2285_;
v_k_2295_ = v_k_2310_;
v___y_2296_ = v_a_2287_;
v___y_2297_ = v_a_2288_;
v___y_2298_ = v_a_2289_;
v___y_2299_ = v_a_2290_;
goto v___jp_2292_;
}
}
case 2:
{
lean_object* v_decl_2311_; lean_object* v_k_2312_; lean_object* v_params_2313_; lean_object* v_type_2314_; lean_object* v_value_2315_; uint8_t v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v_decl_2311_ = lean_ctor_get(v_code_2284_, 0);
lean_inc_ref(v_decl_2311_);
v_k_2312_ = lean_ctor_get(v_code_2284_, 1);
lean_inc_ref(v_k_2312_);
lean_dec_ref_known(v_code_2284_, 2);
v_params_2313_ = lean_ctor_get(v_decl_2311_, 2);
lean_inc_ref(v_params_2313_);
v_type_2314_ = lean_ctor_get(v_decl_2311_, 3);
lean_inc_ref_n(v_type_2314_, 2);
v_value_2315_ = lean_ctor_get(v_decl_2311_, 4);
v___x_2316_ = 1;
v___x_2317_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___closed__0));
lean_inc_ref(v_value_2315_);
v___x_2318_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse(v_value_2315_, v___x_2317_, v_type_2314_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2338_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2321_ = v___x_2318_;
v_isShared_2322_ = v_isSharedCheck_2338_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2318_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2338_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2323_; 
v___x_2323_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_2316_, v_decl_2311_, v_type_2314_, v_params_2313_, v_a_2319_, v_a_2288_);
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_object* v_a_2324_; lean_object* v___x_2326_; 
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2324_);
lean_dec_ref_known(v___x_2323_, 1);
if (v_isShared_2322_ == 0)
{
lean_ctor_set_tag(v___x_2321_, 2);
lean_ctor_set(v___x_2321_, 0, v_a_2324_);
v___x_2326_ = v___x_2321_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_a_2324_);
v___x_2326_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
lean_object* v___x_2327_; 
v___x_2327_ = lean_array_push(v_ds_2285_, v___x_2326_);
v_code_2284_ = v_k_2312_;
v_ds_2285_ = v___x_2327_;
goto _start;
}
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
lean_del_object(v___x_2321_);
lean_dec_ref(v_k_2312_);
lean_dec_ref(v_currentRetType_2286_);
lean_dec_ref(v_ds_2285_);
v_a_2330_ = lean_ctor_get(v___x_2323_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2332_ = v___x_2323_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2323_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
}
else
{
lean_dec_ref(v_type_2314_);
lean_dec_ref(v_params_2313_);
lean_dec_ref(v_k_2312_);
lean_dec_ref(v_decl_2311_);
lean_dec_ref(v_currentRetType_2286_);
lean_dec_ref(v_ds_2285_);
return v___x_2318_;
}
}
case 4:
{
lean_object* v_cases_2339_; lean_object* v_typeName_2340_; lean_object* v_resultType_2341_; lean_object* v_discr_2342_; lean_object* v_alts_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2382_; 
lean_dec_ref(v_currentRetType_2286_);
v_cases_2339_ = lean_ctor_get(v_code_2284_, 0);
lean_inc_ref(v_cases_2339_);
v_typeName_2340_ = lean_ctor_get(v_cases_2339_, 0);
v_resultType_2341_ = lean_ctor_get(v_cases_2339_, 1);
v_discr_2342_ = lean_ctor_get(v_cases_2339_, 2);
v_alts_2343_ = lean_ctor_get(v_cases_2339_, 3);
v_isSharedCheck_2382_ = !lean_is_exclusive(v_cases_2339_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2345_ = v_cases_2339_;
v_isShared_2346_ = v_isSharedCheck_2382_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_alts_2343_);
lean_inc(v_discr_2342_);
lean_inc(v_resultType_2341_);
lean_inc(v_typeName_2340_);
lean_dec(v_cases_2339_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2382_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2347_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_2343_);
lean_inc_ref(v_resultType_2341_);
v___x_2348_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1(v_resultType_2341_, v___x_2347_, v_alts_2343_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2373_; 
v_a_2349_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2351_ = v___x_2348_;
v_isShared_2352_ = v_isSharedCheck_2373_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2348_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2373_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___y_2354_; size_t v___x_2359_; size_t v___x_2360_; uint8_t v___x_2361_; 
v___x_2359_ = lean_ptr_addr(v_alts_2343_);
lean_dec_ref(v_alts_2343_);
v___x_2360_ = lean_ptr_addr(v_a_2349_);
v___x_2361_ = lean_usize_dec_eq(v___x_2359_, v___x_2360_);
if (v___x_2361_ == 0)
{
lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2371_; 
v_isSharedCheck_2371_ = !lean_is_exclusive(v_code_2284_);
if (v_isSharedCheck_2371_ == 0)
{
lean_object* v_unused_2372_; 
v_unused_2372_ = lean_ctor_get(v_code_2284_, 0);
lean_dec(v_unused_2372_);
v___x_2363_ = v_code_2284_;
v_isShared_2364_ = v_isSharedCheck_2371_;
goto v_resetjp_2362_;
}
else
{
lean_dec(v_code_2284_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2371_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 3, v_a_2349_);
v___x_2366_ = v___x_2345_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_typeName_2340_);
lean_ctor_set(v_reuseFailAlloc_2370_, 1, v_resultType_2341_);
lean_ctor_set(v_reuseFailAlloc_2370_, 2, v_discr_2342_);
lean_ctor_set(v_reuseFailAlloc_2370_, 3, v_a_2349_);
v___x_2366_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
lean_object* v___x_2368_; 
if (v_isShared_2364_ == 0)
{
lean_ctor_set(v___x_2363_, 0, v___x_2366_);
v___x_2368_ = v___x_2363_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2366_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
v___y_2354_ = v___x_2368_;
goto v___jp_2353_;
}
}
}
}
else
{
lean_dec(v_a_2349_);
lean_del_object(v___x_2345_);
lean_dec(v_discr_2342_);
lean_dec_ref(v_resultType_2341_);
lean_dec(v_typeName_2340_);
v___y_2354_ = v_code_2284_;
goto v___jp_2353_;
}
v___jp_2353_:
{
lean_object* v___x_2355_; lean_object* v___x_2357_; 
v___x_2355_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_ds_2285_, v___y_2354_);
lean_dec_ref(v_ds_2285_);
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 0, v___x_2355_);
v___x_2357_ = v___x_2351_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v___x_2355_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
else
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2381_; 
lean_del_object(v___x_2345_);
lean_dec_ref(v_alts_2343_);
lean_dec(v_discr_2342_);
lean_dec_ref(v_resultType_2341_);
lean_dec(v_typeName_2340_);
lean_dec_ref_known(v_code_2284_, 1);
lean_dec_ref(v_ds_2285_);
v_a_2374_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2376_ = v___x_2348_;
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2348_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2379_; 
if (v_isShared_2377_ == 0)
{
v___x_2379_ = v___x_2376_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_a_2374_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
}
}
}
case 7:
{
lean_object* v_k_2383_; 
v_k_2383_ = lean_ctor_get(v_code_2284_, 3);
lean_inc_ref(v_k_2383_);
v_code_2293_ = v_code_2284_;
v_ds_2294_ = v_ds_2285_;
v_k_2295_ = v_k_2383_;
v___y_2296_ = v_a_2287_;
v___y_2297_ = v_a_2288_;
v___y_2298_ = v_a_2289_;
v___y_2299_ = v_a_2290_;
goto v___jp_2292_;
}
case 8:
{
lean_object* v_k_2384_; 
v_k_2384_ = lean_ctor_get(v_code_2284_, 3);
lean_inc_ref(v_k_2384_);
v_code_2293_ = v_code_2284_;
v_ds_2294_ = v_ds_2285_;
v_k_2295_ = v_k_2384_;
v___y_2296_ = v_a_2287_;
v___y_2297_ = v_a_2288_;
v___y_2298_ = v_a_2289_;
v___y_2299_ = v_a_2290_;
goto v___jp_2292_;
}
case 9:
{
lean_object* v_k_2385_; 
v_k_2385_ = lean_ctor_get(v_code_2284_, 5);
lean_inc_ref(v_k_2385_);
v_code_2293_ = v_code_2284_;
v_ds_2294_ = v_ds_2285_;
v_k_2295_ = v_k_2385_;
v___y_2296_ = v_a_2287_;
v___y_2297_ = v_a_2288_;
v___y_2298_ = v_a_2289_;
v___y_2299_ = v_a_2290_;
goto v___jp_2292_;
}
case 10:
{
lean_object* v_k_2386_; 
v_k_2386_ = lean_ctor_get(v_code_2284_, 2);
lean_inc_ref(v_k_2386_);
v_code_2293_ = v_code_2284_;
v_ds_2294_ = v_ds_2285_;
v_k_2295_ = v_k_2386_;
v___y_2296_ = v_a_2287_;
v___y_2297_ = v_a_2288_;
v___y_2298_ = v_a_2289_;
v___y_2299_ = v_a_2290_;
goto v___jp_2292_;
}
case 11:
{
lean_object* v_k_2387_; 
v_k_2387_ = lean_ctor_get(v_code_2284_, 2);
lean_inc_ref(v_k_2387_);
v_code_2293_ = v_code_2284_;
v_ds_2294_ = v_ds_2285_;
v_k_2295_ = v_k_2387_;
v___y_2296_ = v_a_2287_;
v___y_2297_ = v_a_2288_;
v___y_2298_ = v_a_2289_;
v___y_2299_ = v_a_2290_;
goto v___jp_2292_;
}
case 12:
{
lean_object* v_k_2388_; 
v_k_2388_ = lean_ctor_get(v_code_2284_, 3);
lean_inc_ref(v_k_2388_);
v_code_2293_ = v_code_2284_;
v_ds_2294_ = v_ds_2285_;
v_k_2295_ = v_k_2388_;
v___y_2296_ = v_a_2287_;
v___y_2297_ = v_a_2288_;
v___y_2298_ = v_a_2289_;
v___y_2299_ = v_a_2290_;
goto v___jp_2292_;
}
case 13:
{
lean_object* v_k_2389_; 
v_k_2389_ = lean_ctor_get(v_code_2284_, 1);
lean_inc_ref(v_k_2389_);
v_code_2293_ = v_code_2284_;
v_ds_2294_ = v_ds_2285_;
v_k_2295_ = v_k_2389_;
v___y_2296_ = v_a_2287_;
v___y_2297_ = v_a_2288_;
v___y_2298_ = v_a_2289_;
v___y_2299_ = v_a_2290_;
goto v___jp_2292_;
}
default: 
{
lean_object* v___x_2390_; lean_object* v___x_2391_; 
lean_dec_ref(v_currentRetType_2286_);
v___x_2390_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_ds_2285_, v_code_2284_);
lean_dec_ref(v_ds_2285_);
v___x_2391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2390_);
return v___x_2391_;
}
}
v___jp_2292_:
{
uint8_t v___x_2300_; lean_object* v_d_2301_; lean_object* v___x_2302_; 
v___x_2300_ = 1;
v_d_2301_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_2300_, v_code_2293_);
lean_dec_ref(v_code_2293_);
v___x_2302_ = lean_array_push(v_ds_2294_, v_d_2301_);
v_code_2284_ = v_k_2295_;
v_ds_2285_ = v___x_2302_;
v_a_2287_ = v___y_2296_;
v_a_2288_ = v___y_2297_;
v_a_2289_ = v___y_2298_;
v_a_2290_ = v___y_2299_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1___lam__0(lean_object* v_resultType_2392_, lean_object* v_x_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_){
_start:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2399_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___closed__0));
v___x_2400_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse(v_x_2393_, v___x_2399_, v_resultType_2392_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1___boxed(lean_object* v_resultType_2401_, lean_object* v_i_2402_, lean_object* v_as_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_spec__1(v_resultType_2401_, v_i_2402_, v_as_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v___y_2405_);
lean_dec_ref(v___y_2404_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse___boxed(lean_object* v_code_2410_, lean_object* v_ds_2411_, lean_object* v_currentRetType_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_){
_start:
{
lean_object* v_res_2418_; 
v_res_2418_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse(v_code_2410_, v_ds_2411_, v_currentRetType_2412_, v_a_2413_, v_a_2414_, v_a_2415_, v_a_2416_);
lean_dec(v_a_2416_);
lean_dec_ref(v_a_2415_);
lean_dec(v_a_2414_);
lean_dec_ref(v_a_2413_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand___boxed(lean_object* v_currentRetType_2419_, lean_object* v_ds_2420_, lean_object* v_decl_2421_, lean_object* v_nFields_2422_, lean_object* v_origAllocId_2423_, lean_object* v_k_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse_expand(v_currentRetType_2419_, v_ds_2420_, v_decl_2421_, v_nFields_2422_, v_origAllocId_2423_, v_k_2424_, v_a_2425_, v_a_2426_, v_a_2427_, v_a_2428_);
lean_dec(v_a_2428_);
lean_dec_ref(v_a_2427_);
lean_dec(v_a_2426_);
lean_dec_ref(v_a_2425_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0___redArg(lean_object* v_f_2431_, lean_object* v_v_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
if (lean_obj_tag(v_v_2432_) == 0)
{
lean_object* v_code_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2462_; 
v_code_2438_ = lean_ctor_get(v_v_2432_, 0);
v_isSharedCheck_2462_ = !lean_is_exclusive(v_v_2432_);
if (v_isSharedCheck_2462_ == 0)
{
v___x_2440_ = v_v_2432_;
v_isShared_2441_ = v_isSharedCheck_2462_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_code_2438_);
lean_dec(v_v_2432_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2462_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
lean_object* v___x_2442_; 
lean_inc(v___y_2436_);
lean_inc_ref(v___y_2435_);
lean_inc(v___y_2434_);
lean_inc_ref(v___y_2433_);
v___x_2442_ = lean_apply_6(v_f_2431_, v_code_2438_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, lean_box(0));
if (lean_obj_tag(v___x_2442_) == 0)
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2453_; 
v_a_2443_ = lean_ctor_get(v___x_2442_, 0);
v_isSharedCheck_2453_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2445_ = v___x_2442_;
v_isShared_2446_ = v_isSharedCheck_2453_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2442_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2453_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2448_; 
if (v_isShared_2441_ == 0)
{
lean_ctor_set(v___x_2440_, 0, v_a_2443_);
v___x_2448_ = v___x_2440_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v_a_2443_);
v___x_2448_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
lean_object* v___x_2450_; 
if (v_isShared_2446_ == 0)
{
lean_ctor_set(v___x_2445_, 0, v___x_2448_);
v___x_2450_ = v___x_2445_;
goto v_reusejp_2449_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v___x_2448_);
v___x_2450_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2449_;
}
v_reusejp_2449_:
{
return v___x_2450_;
}
}
}
}
else
{
lean_object* v_a_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2461_; 
lean_del_object(v___x_2440_);
v_a_2454_ = lean_ctor_get(v___x_2442_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2456_ = v___x_2442_;
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_a_2454_);
lean_dec(v___x_2442_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2459_; 
if (v_isShared_2457_ == 0)
{
v___x_2459_ = v___x_2456_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_a_2454_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
}
}
else
{
lean_object* v___x_2463_; 
lean_dec_ref(v_f_2431_);
v___x_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2463_, 0, v_v_2432_);
return v___x_2463_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0___redArg___boxed(lean_object* v_f_2464_, lean_object* v_v_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
lean_object* v_res_2471_; 
v_res_2471_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0___redArg(v_f_2464_, v_v_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
lean_dec(v___y_2467_);
lean_dec_ref(v___y_2466_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0(uint8_t v_pu_2472_, lean_object* v_f_2473_, lean_object* v_v_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_){
_start:
{
lean_object* v___x_2480_; 
v___x_2480_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0___redArg(v_f_2473_, v_v_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_);
return v___x_2480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0___boxed(lean_object* v_pu_2481_, lean_object* v_f_2482_, lean_object* v_v_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_){
_start:
{
uint8_t v_pu_boxed_2489_; lean_object* v_res_2490_; 
v_pu_boxed_2489_ = lean_unbox(v_pu_2481_);
v_res_2490_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0(v_pu_boxed_2489_, v_f_2482_, v_v_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
lean_dec(v___y_2487_);
lean_dec_ref(v___y_2486_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse___lam__0(lean_object* v_decl_2491_, lean_object* v_x_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_){
_start:
{
lean_object* v_toSignature_2498_; lean_object* v_type_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v_toSignature_2498_ = lean_ctor_get(v_decl_2491_, 0);
lean_inc_ref(v_toSignature_2498_);
lean_dec_ref(v_decl_2491_);
v_type_2499_ = lean_ctor_get(v_toSignature_2498_, 2);
lean_inc_ref(v_type_2499_);
lean_dec_ref(v_toSignature_2498_);
v___x_2500_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_eraseProjIncFor___closed__0));
v___x_2501_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Code_expandResetReuse(v_x_2492_, v___x_2500_, v_type_2499_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse___lam__0___boxed(lean_object* v_decl_2502_, lean_object* v_x_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v_res_2509_; 
v_res_2509_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse___lam__0(v_decl_2502_, v_x_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
return v_res_2509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse(lean_object* v_decl_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_){
_start:
{
lean_object* v___f_2516_; lean_object* v___x_2517_; 
lean_inc_ref(v_decl_2510_);
v___f_2516_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2516_, 0, v_decl_2510_);
v___x_2517_ = l_Lean_Compiler_LCNF_getConfig___redArg(v_a_2511_);
if (lean_obj_tag(v___x_2517_) == 0)
{
lean_object* v_a_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2554_; 
v_a_2518_ = lean_ctor_get(v___x_2517_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2520_ = v___x_2517_;
v_isShared_2521_ = v_isSharedCheck_2554_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_a_2518_);
lean_dec(v___x_2517_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2554_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
uint8_t v_resetReuse_2522_; 
v_resetReuse_2522_ = lean_ctor_get_uint8(v_a_2518_, sizeof(void*)*4 + 2);
lean_dec(v_a_2518_);
if (v_resetReuse_2522_ == 0)
{
lean_object* v___x_2524_; 
lean_dec_ref(v___f_2516_);
if (v_isShared_2521_ == 0)
{
lean_ctor_set(v___x_2520_, 0, v_decl_2510_);
v___x_2524_ = v___x_2520_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v_decl_2510_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
else
{
lean_object* v_toSignature_2526_; lean_object* v_value_2527_; uint8_t v_recursive_2528_; lean_object* v_inlineAttr_x3f_2529_; lean_object* v___x_2531_; uint8_t v_isShared_2532_; uint8_t v_isSharedCheck_2553_; 
lean_del_object(v___x_2520_);
v_toSignature_2526_ = lean_ctor_get(v_decl_2510_, 0);
v_value_2527_ = lean_ctor_get(v_decl_2510_, 1);
v_recursive_2528_ = lean_ctor_get_uint8(v_decl_2510_, sizeof(void*)*3);
v_inlineAttr_x3f_2529_ = lean_ctor_get(v_decl_2510_, 2);
v_isSharedCheck_2553_ = !lean_is_exclusive(v_decl_2510_);
if (v_isSharedCheck_2553_ == 0)
{
v___x_2531_ = v_decl_2510_;
v_isShared_2532_ = v_isSharedCheck_2553_;
goto v_resetjp_2530_;
}
else
{
lean_inc(v_inlineAttr_x3f_2529_);
lean_inc(v_value_2527_);
lean_inc(v_toSignature_2526_);
lean_dec(v_decl_2510_);
v___x_2531_ = lean_box(0);
v_isShared_2532_ = v_isSharedCheck_2553_;
goto v_resetjp_2530_;
}
v_resetjp_2530_:
{
lean_object* v___x_2533_; 
v___x_2533_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse_spec__0___redArg(v___f_2516_, v_value_2527_, v_a_2511_, v_a_2512_, v_a_2513_, v_a_2514_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2544_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2536_ = v___x_2533_;
v_isShared_2537_ = v_isSharedCheck_2544_;
goto v_resetjp_2535_;
}
else
{
lean_inc(v_a_2534_);
lean_dec(v___x_2533_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2544_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2539_; 
if (v_isShared_2532_ == 0)
{
lean_ctor_set(v___x_2531_, 1, v_a_2534_);
v___x_2539_ = v___x_2531_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v_toSignature_2526_);
lean_ctor_set(v_reuseFailAlloc_2543_, 1, v_a_2534_);
lean_ctor_set(v_reuseFailAlloc_2543_, 2, v_inlineAttr_x3f_2529_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*3, v_recursive_2528_);
v___x_2539_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
lean_object* v___x_2541_; 
if (v_isShared_2537_ == 0)
{
lean_ctor_set(v___x_2536_, 0, v___x_2539_);
v___x_2541_ = v___x_2536_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v___x_2539_);
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
else
{
lean_object* v_a_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2552_; 
lean_del_object(v___x_2531_);
lean_dec(v_inlineAttr_x3f_2529_);
lean_dec_ref(v_toSignature_2526_);
v_a_2545_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2552_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2552_ == 0)
{
v___x_2547_ = v___x_2533_;
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_a_2545_);
lean_dec(v___x_2533_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v___x_2550_; 
if (v_isShared_2548_ == 0)
{
v___x_2550_ = v___x_2547_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v_a_2545_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
return v___x_2550_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2562_; 
lean_dec_ref(v___f_2516_);
lean_dec_ref(v_decl_2510_);
v_a_2555_ = lean_ctor_get(v___x_2517_, 0);
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2562_ == 0)
{
v___x_2557_ = v___x_2517_;
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_a_2555_);
lean_dec(v___x_2517_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2560_; 
if (v_isShared_2558_ == 0)
{
v___x_2560_ = v___x_2557_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_a_2555_);
v___x_2560_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
return v___x_2560_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse___boxed(lean_object* v_decl_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_Decl_expandResetReuse(v_decl_2563_, v_a_2564_, v_a_2565_, v_a_2566_, v_a_2567_);
lean_dec(v_a_2567_);
lean_dec_ref(v_a_2566_);
lean_dec(v_a_2565_);
lean_dec_ref(v_a_2564_);
return v_res_2569_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_expandResetReuse___closed__3(void){
_start:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; uint8_t v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2574_ = lean_unsigned_to_nat(0u);
v___x_2575_ = ((lean_object*)(l_Lean_Compiler_LCNF_expandResetReuse___closed__2));
v___x_2576_ = 2;
v___x_2577_ = ((lean_object*)(l_Lean_Compiler_LCNF_expandResetReuse___closed__1));
v___x_2578_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_2577_, v___x_2576_, v___x_2575_, v___x_2574_);
return v___x_2578_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_expandResetReuse(void){
_start:
{
lean_object* v___x_2579_; 
v___x_2579_ = lean_obj_once(&l_Lean_Compiler_LCNF_expandResetReuse___closed__3, &l_Lean_Compiler_LCNF_expandResetReuse___closed__3_once, _init_l_Lean_Compiler_LCNF_expandResetReuse___closed__3);
return v___x_2579_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2584_ = lean_box(0);
v___x_2585_ = l_unsafeCast___redArg(v___x_2584_);
return v___x_2585_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2587_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2588_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2589_ = l_Lean_Name_str___override(v___x_2588_, v___x_2587_);
return v___x_2589_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2591_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2592_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2593_ = l_Lean_Name_str___override(v___x_2592_, v___x_2591_);
return v___x_2593_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
v___x_2594_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2595_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2596_ = l_Lean_Name_str___override(v___x_2595_, v___x_2594_);
return v___x_2596_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2598_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2599_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2600_ = l_Lean_Name_str___override(v___x_2599_, v___x_2598_);
return v___x_2600_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2602_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2603_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2604_ = l_Lean_Name_str___override(v___x_2603_, v___x_2602_);
return v___x_2604_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2605_ = lean_unsigned_to_nat(0u);
v___x_2606_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2607_ = l_Lean_Name_num___override(v___x_2606_, v___x_2605_);
return v___x_2607_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2608_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2609_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2610_ = l_Lean_Name_str___override(v___x_2609_, v___x_2608_);
return v___x_2610_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2611_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2612_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2613_ = l_Lean_Name_str___override(v___x_2612_, v___x_2611_);
return v___x_2613_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2614_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2615_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2616_ = l_Lean_Name_str___override(v___x_2615_, v___x_2614_);
return v___x_2616_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2618_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2619_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2620_ = l_Lean_Name_str___override(v___x_2619_, v___x_2618_);
return v___x_2620_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2622_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2623_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2624_ = l_Lean_Name_str___override(v___x_2623_, v___x_2622_);
return v___x_2624_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2625_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2626_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2627_ = l_Lean_Name_str___override(v___x_2626_, v___x_2625_);
return v___x_2627_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2628_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2629_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2630_ = l_Lean_Name_str___override(v___x_2629_, v___x_2628_);
return v___x_2630_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___x_2631_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2632_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2633_ = l_Lean_Name_str___override(v___x_2632_, v___x_2631_);
return v___x_2633_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2634_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2635_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2636_ = l_Lean_Name_str___override(v___x_2635_, v___x_2634_);
return v___x_2636_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2637_ = lean_unsigned_to_nat(2743268278u);
v___x_2638_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2639_ = l_Lean_Name_num___override(v___x_2638_, v___x_2637_);
return v___x_2639_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2641_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2642_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2643_ = l_Lean_Name_str___override(v___x_2642_, v___x_2641_);
return v___x_2643_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2645_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2646_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2647_ = l_Lean_Name_str___override(v___x_2646_, v___x_2645_);
return v___x_2647_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2648_ = lean_unsigned_to_nat(2u);
v___x_2649_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2650_ = l_Lean_Name_num___override(v___x_2649_, v___x_2648_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2652_; uint8_t v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2652_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_));
v___x_2653_ = 1;
v___x_2654_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_);
v___x_2655_ = l_Lean_registerTraceClass(v___x_2652_, v___x_2653_, v___x_2654_);
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2____boxed(lean_object* v_a_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_();
return v_res_2657_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ExpandResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_expandResetReuse = _init_l_Lean_Compiler_LCNF_expandResetReuse();
lean_mark_persistent(l_Lean_Compiler_LCNF_expandResetReuse);
res = l___private_Lean_Compiler_LCNF_ExpandResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExpandResetReuse_2743268278____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ExpandResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ExpandResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ExpandResetReuse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ExpandResetReuse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ExpandResetReuse(builtin);
}
#ifdef __cplusplus
}
#endif

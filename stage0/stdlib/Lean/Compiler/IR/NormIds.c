// Lean compiler output
// Module: Lean.Compiler.IR.NormIds
// Imports: public import Lean.Compiler.IR.Basic
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
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_IR_Alt_body(lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lean_IR_instBEqVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_updateBody_x21(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkId(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkParams___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkFnBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkDecl(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_Decl_uniqueIds(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_uniqueIds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normIndex___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normJP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normJP___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normExpr___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_NormalizeIds_withVar___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_NormalizeIds_withVar___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_NormalizeIds_withVar___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withVar___redArg___closed__0 = (const lean_object*)&l_Lean_IR_NormalizeIds_withVar___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__0 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__0_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__1 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__1_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__2 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__2_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__3 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__3_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__4 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__4_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__5 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__5_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__6 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__6_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__0_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__1_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__7 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__7_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__7_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__2_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__3_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__4_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__5_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__8 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__8_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__8_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__6_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__9 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__10 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__10_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__4, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__11 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__11_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__7, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__12 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__12_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__9, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__13 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__13_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_map, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__14 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__14_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__14_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__10_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__15 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__15_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_pure, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__16 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__16_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__15_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__16_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__11_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__12_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__13_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__17 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__17_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__18 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__18_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__17_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__18_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__19 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__19_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_NormalizeIds_withParams___redArg___lam__2, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withVar___redArg___closed__0_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__20 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__20_value;
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_instMonadLiftMN___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_NormalizeIds_instMonadLiftMN___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_NormalizeIds_instMonadLiftMN___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_instMonadLiftMN___closed__0 = (const lean_object*)&l_Lean_IR_NormalizeIds_instMonadLiftMN___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_NormalizeIds_instMonadLiftMN = (const lean_object*)&l_Lean_IR_NormalizeIds_instMonadLiftMN___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_IR_NormalizeIds_normFnBody___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_IR_NormalizeIds_normFnBody___boxed__const__1 = (const lean_object*)&l_Lean_IR_NormalizeIds_normFnBody___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normFnBody(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normFnBody___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normDecl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_normalizeIds(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapFnBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_mapVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg(lean_object* v_k_1_, lean_object* v_t_2_){
_start:
{
if (lean_obj_tag(v_t_2_) == 0)
{
lean_object* v_k_3_; lean_object* v_l_4_; lean_object* v_r_5_; uint8_t v___x_6_; 
v_k_3_ = lean_ctor_get(v_t_2_, 1);
v_l_4_ = lean_ctor_get(v_t_2_, 3);
v_r_5_ = lean_ctor_get(v_t_2_, 4);
v___x_6_ = lean_nat_dec_lt(v_k_1_, v_k_3_);
if (v___x_6_ == 0)
{
uint8_t v___x_7_; 
v___x_7_ = lean_nat_dec_eq(v_k_1_, v_k_3_);
if (v___x_7_ == 0)
{
v_t_2_ = v_r_5_;
goto _start;
}
else
{
return v___x_7_;
}
}
else
{
v_t_2_ = v_l_4_;
goto _start;
}
}
else
{
uint8_t v___x_10_; 
v___x_10_ = 0;
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg___boxed(lean_object* v_k_11_, lean_object* v_t_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg(v_k_11_, v_t_12_);
lean_dec(v_t_12_);
lean_dec(v_k_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(lean_object* v_k_15_, lean_object* v_v_16_, lean_object* v_t_17_){
_start:
{
if (lean_obj_tag(v_t_17_) == 0)
{
lean_object* v_size_18_; lean_object* v_k_19_; lean_object* v_v_20_; lean_object* v_l_21_; lean_object* v_r_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_303_; 
v_size_18_ = lean_ctor_get(v_t_17_, 0);
v_k_19_ = lean_ctor_get(v_t_17_, 1);
v_v_20_ = lean_ctor_get(v_t_17_, 2);
v_l_21_ = lean_ctor_get(v_t_17_, 3);
v_r_22_ = lean_ctor_get(v_t_17_, 4);
v_isSharedCheck_303_ = !lean_is_exclusive(v_t_17_);
if (v_isSharedCheck_303_ == 0)
{
v___x_24_ = v_t_17_;
v_isShared_25_ = v_isSharedCheck_303_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_r_22_);
lean_inc(v_l_21_);
lean_inc(v_v_20_);
lean_inc(v_k_19_);
lean_inc(v_size_18_);
lean_dec(v_t_17_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_303_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
uint8_t v___x_26_; 
v___x_26_ = lean_nat_dec_lt(v_k_15_, v_k_19_);
if (v___x_26_ == 0)
{
uint8_t v___x_27_; 
v___x_27_ = lean_nat_dec_eq(v_k_15_, v_k_19_);
if (v___x_27_ == 0)
{
lean_object* v_impl_28_; lean_object* v___x_29_; 
lean_dec(v_size_18_);
v_impl_28_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_k_15_, v_v_16_, v_r_22_);
v___x_29_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_21_) == 0)
{
lean_object* v_size_30_; lean_object* v_size_31_; lean_object* v_k_32_; lean_object* v_v_33_; lean_object* v_l_34_; lean_object* v_r_35_; lean_object* v___x_36_; lean_object* v___x_37_; uint8_t v___x_38_; 
v_size_30_ = lean_ctor_get(v_l_21_, 0);
v_size_31_ = lean_ctor_get(v_impl_28_, 0);
lean_inc(v_size_31_);
v_k_32_ = lean_ctor_get(v_impl_28_, 1);
lean_inc(v_k_32_);
v_v_33_ = lean_ctor_get(v_impl_28_, 2);
lean_inc(v_v_33_);
v_l_34_ = lean_ctor_get(v_impl_28_, 3);
lean_inc(v_l_34_);
v_r_35_ = lean_ctor_get(v_impl_28_, 4);
lean_inc(v_r_35_);
v___x_36_ = lean_unsigned_to_nat(3u);
v___x_37_ = lean_nat_mul(v___x_36_, v_size_30_);
v___x_38_ = lean_nat_dec_lt(v___x_37_, v_size_31_);
lean_dec(v___x_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_42_; 
lean_dec(v_r_35_);
lean_dec(v_l_34_);
lean_dec(v_v_33_);
lean_dec(v_k_32_);
v___x_39_ = lean_nat_add(v___x_29_, v_size_30_);
v___x_40_ = lean_nat_add(v___x_39_, v_size_31_);
lean_dec(v_size_31_);
lean_dec(v___x_39_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_impl_28_);
lean_ctor_set(v___x_24_, 0, v___x_40_);
v___x_42_ = v___x_24_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v___x_40_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_43_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_43_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_43_, 4, v_impl_28_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
else
{
lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_107_; 
v_isSharedCheck_107_ = !lean_is_exclusive(v_impl_28_);
if (v_isSharedCheck_107_ == 0)
{
lean_object* v_unused_108_; lean_object* v_unused_109_; lean_object* v_unused_110_; lean_object* v_unused_111_; lean_object* v_unused_112_; 
v_unused_108_ = lean_ctor_get(v_impl_28_, 4);
lean_dec(v_unused_108_);
v_unused_109_ = lean_ctor_get(v_impl_28_, 3);
lean_dec(v_unused_109_);
v_unused_110_ = lean_ctor_get(v_impl_28_, 2);
lean_dec(v_unused_110_);
v_unused_111_ = lean_ctor_get(v_impl_28_, 1);
lean_dec(v_unused_111_);
v_unused_112_ = lean_ctor_get(v_impl_28_, 0);
lean_dec(v_unused_112_);
v___x_45_ = v_impl_28_;
v_isShared_46_ = v_isSharedCheck_107_;
goto v_resetjp_44_;
}
else
{
lean_dec(v_impl_28_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_107_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v_size_47_; lean_object* v_k_48_; lean_object* v_v_49_; lean_object* v_l_50_; lean_object* v_r_51_; lean_object* v_size_52_; lean_object* v___x_53_; lean_object* v___x_54_; uint8_t v___x_55_; 
v_size_47_ = lean_ctor_get(v_l_34_, 0);
v_k_48_ = lean_ctor_get(v_l_34_, 1);
v_v_49_ = lean_ctor_get(v_l_34_, 2);
v_l_50_ = lean_ctor_get(v_l_34_, 3);
v_r_51_ = lean_ctor_get(v_l_34_, 4);
v_size_52_ = lean_ctor_get(v_r_35_, 0);
v___x_53_ = lean_unsigned_to_nat(2u);
v___x_54_ = lean_nat_mul(v___x_53_, v_size_52_);
v___x_55_ = lean_nat_dec_lt(v_size_47_, v___x_54_);
lean_dec(v___x_54_);
if (v___x_55_ == 0)
{
lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_83_; 
lean_inc(v_r_51_);
lean_inc(v_l_50_);
lean_inc(v_v_49_);
lean_inc(v_k_48_);
v_isSharedCheck_83_ = !lean_is_exclusive(v_l_34_);
if (v_isSharedCheck_83_ == 0)
{
lean_object* v_unused_84_; lean_object* v_unused_85_; lean_object* v_unused_86_; lean_object* v_unused_87_; lean_object* v_unused_88_; 
v_unused_84_ = lean_ctor_get(v_l_34_, 4);
lean_dec(v_unused_84_);
v_unused_85_ = lean_ctor_get(v_l_34_, 3);
lean_dec(v_unused_85_);
v_unused_86_ = lean_ctor_get(v_l_34_, 2);
lean_dec(v_unused_86_);
v_unused_87_ = lean_ctor_get(v_l_34_, 1);
lean_dec(v_unused_87_);
v_unused_88_ = lean_ctor_get(v_l_34_, 0);
lean_dec(v_unused_88_);
v___x_57_ = v_l_34_;
v_isShared_58_ = v_isSharedCheck_83_;
goto v_resetjp_56_;
}
else
{
lean_dec(v_l_34_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_83_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___y_62_; lean_object* v___y_63_; lean_object* v___y_64_; lean_object* v___y_73_; 
v___x_59_ = lean_nat_add(v___x_29_, v_size_30_);
v___x_60_ = lean_nat_add(v___x_59_, v_size_31_);
lean_dec(v_size_31_);
if (lean_obj_tag(v_l_50_) == 0)
{
lean_object* v_size_81_; 
v_size_81_ = lean_ctor_get(v_l_50_, 0);
lean_inc(v_size_81_);
v___y_73_ = v_size_81_;
goto v___jp_72_;
}
else
{
lean_object* v___x_82_; 
v___x_82_ = lean_unsigned_to_nat(0u);
v___y_73_ = v___x_82_;
goto v___jp_72_;
}
v___jp_61_:
{
lean_object* v___x_65_; lean_object* v___x_67_; 
v___x_65_ = lean_nat_add(v___y_63_, v___y_64_);
lean_dec(v___y_64_);
lean_dec(v___y_63_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 4, v_r_35_);
lean_ctor_set(v___x_57_, 3, v_r_51_);
lean_ctor_set(v___x_57_, 2, v_v_33_);
lean_ctor_set(v___x_57_, 1, v_k_32_);
lean_ctor_set(v___x_57_, 0, v___x_65_);
v___x_67_ = v___x_57_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_65_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_k_32_);
lean_ctor_set(v_reuseFailAlloc_71_, 2, v_v_33_);
lean_ctor_set(v_reuseFailAlloc_71_, 3, v_r_51_);
lean_ctor_set(v_reuseFailAlloc_71_, 4, v_r_35_);
v___x_67_ = v_reuseFailAlloc_71_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
lean_object* v___x_69_; 
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 4, v___x_67_);
lean_ctor_set(v___x_45_, 3, v___y_62_);
lean_ctor_set(v___x_45_, 2, v_v_49_);
lean_ctor_set(v___x_45_, 1, v_k_48_);
lean_ctor_set(v___x_45_, 0, v___x_60_);
v___x_69_ = v___x_45_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_60_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v_k_48_);
lean_ctor_set(v_reuseFailAlloc_70_, 2, v_v_49_);
lean_ctor_set(v_reuseFailAlloc_70_, 3, v___y_62_);
lean_ctor_set(v_reuseFailAlloc_70_, 4, v___x_67_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
v___jp_72_:
{
lean_object* v___x_74_; lean_object* v___x_76_; 
v___x_74_ = lean_nat_add(v___x_59_, v___y_73_);
lean_dec(v___y_73_);
lean_dec(v___x_59_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_l_50_);
lean_ctor_set(v___x_24_, 0, v___x_74_);
v___x_76_ = v___x_24_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v___x_74_);
lean_ctor_set(v_reuseFailAlloc_80_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_80_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_80_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_80_, 4, v_l_50_);
v___x_76_ = v_reuseFailAlloc_80_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
lean_object* v___x_77_; 
v___x_77_ = lean_nat_add(v___x_29_, v_size_52_);
if (lean_obj_tag(v_r_51_) == 0)
{
lean_object* v_size_78_; 
v_size_78_ = lean_ctor_get(v_r_51_, 0);
lean_inc(v_size_78_);
v___y_62_ = v___x_76_;
v___y_63_ = v___x_77_;
v___y_64_ = v_size_78_;
goto v___jp_61_;
}
else
{
lean_object* v___x_79_; 
v___x_79_ = lean_unsigned_to_nat(0u);
v___y_62_ = v___x_76_;
v___y_63_ = v___x_77_;
v___y_64_ = v___x_79_;
goto v___jp_61_;
}
}
}
}
}
else
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_93_; 
lean_del_object(v___x_24_);
v___x_89_ = lean_nat_add(v___x_29_, v_size_30_);
v___x_90_ = lean_nat_add(v___x_89_, v_size_31_);
lean_dec(v_size_31_);
v___x_91_ = lean_nat_add(v___x_89_, v_size_47_);
lean_dec(v___x_89_);
lean_inc_ref(v_l_21_);
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 4, v_l_34_);
lean_ctor_set(v___x_45_, 3, v_l_21_);
lean_ctor_set(v___x_45_, 2, v_v_20_);
lean_ctor_set(v___x_45_, 1, v_k_19_);
lean_ctor_set(v___x_45_, 0, v___x_91_);
v___x_93_ = v___x_45_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_91_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_106_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_106_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_106_, 4, v_l_34_);
v___x_93_ = v_reuseFailAlloc_106_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_100_; 
v_isSharedCheck_100_ = !lean_is_exclusive(v_l_21_);
if (v_isSharedCheck_100_ == 0)
{
lean_object* v_unused_101_; lean_object* v_unused_102_; lean_object* v_unused_103_; lean_object* v_unused_104_; lean_object* v_unused_105_; 
v_unused_101_ = lean_ctor_get(v_l_21_, 4);
lean_dec(v_unused_101_);
v_unused_102_ = lean_ctor_get(v_l_21_, 3);
lean_dec(v_unused_102_);
v_unused_103_ = lean_ctor_get(v_l_21_, 2);
lean_dec(v_unused_103_);
v_unused_104_ = lean_ctor_get(v_l_21_, 1);
lean_dec(v_unused_104_);
v_unused_105_ = lean_ctor_get(v_l_21_, 0);
lean_dec(v_unused_105_);
v___x_95_ = v_l_21_;
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
else
{
lean_dec(v_l_21_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 4, v_r_35_);
lean_ctor_set(v___x_95_, 3, v___x_93_);
lean_ctor_set(v___x_95_, 2, v_v_33_);
lean_ctor_set(v___x_95_, 1, v_k_32_);
lean_ctor_set(v___x_95_, 0, v___x_90_);
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v___x_90_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v_k_32_);
lean_ctor_set(v_reuseFailAlloc_99_, 2, v_v_33_);
lean_ctor_set(v_reuseFailAlloc_99_, 3, v___x_93_);
lean_ctor_set(v_reuseFailAlloc_99_, 4, v_r_35_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_113_; 
v_l_113_ = lean_ctor_get(v_impl_28_, 3);
lean_inc(v_l_113_);
if (lean_obj_tag(v_l_113_) == 0)
{
lean_object* v_r_114_; lean_object* v_k_115_; lean_object* v_v_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_139_; 
v_r_114_ = lean_ctor_get(v_impl_28_, 4);
v_k_115_ = lean_ctor_get(v_impl_28_, 1);
v_v_116_ = lean_ctor_get(v_impl_28_, 2);
v_isSharedCheck_139_ = !lean_is_exclusive(v_impl_28_);
if (v_isSharedCheck_139_ == 0)
{
lean_object* v_unused_140_; lean_object* v_unused_141_; 
v_unused_140_ = lean_ctor_get(v_impl_28_, 3);
lean_dec(v_unused_140_);
v_unused_141_ = lean_ctor_get(v_impl_28_, 0);
lean_dec(v_unused_141_);
v___x_118_ = v_impl_28_;
v_isShared_119_ = v_isSharedCheck_139_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_r_114_);
lean_inc(v_v_116_);
lean_inc(v_k_115_);
lean_dec(v_impl_28_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_139_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v_k_120_; lean_object* v_v_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_135_; 
v_k_120_ = lean_ctor_get(v_l_113_, 1);
v_v_121_ = lean_ctor_get(v_l_113_, 2);
v_isSharedCheck_135_ = !lean_is_exclusive(v_l_113_);
if (v_isSharedCheck_135_ == 0)
{
lean_object* v_unused_136_; lean_object* v_unused_137_; lean_object* v_unused_138_; 
v_unused_136_ = lean_ctor_get(v_l_113_, 4);
lean_dec(v_unused_136_);
v_unused_137_ = lean_ctor_get(v_l_113_, 3);
lean_dec(v_unused_137_);
v_unused_138_ = lean_ctor_get(v_l_113_, 0);
lean_dec(v_unused_138_);
v___x_123_ = v_l_113_;
v_isShared_124_ = v_isSharedCheck_135_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_v_121_);
lean_inc(v_k_120_);
lean_dec(v_l_113_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_135_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; lean_object* v___x_127_; 
v___x_125_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_114_, 2);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 4, v_r_114_);
lean_ctor_set(v___x_123_, 3, v_r_114_);
lean_ctor_set(v___x_123_, 2, v_v_20_);
lean_ctor_set(v___x_123_, 1, v_k_19_);
lean_ctor_set(v___x_123_, 0, v___x_29_);
v___x_127_ = v___x_123_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_29_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_134_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_134_, 3, v_r_114_);
lean_ctor_set(v_reuseFailAlloc_134_, 4, v_r_114_);
v___x_127_ = v_reuseFailAlloc_134_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
lean_object* v___x_129_; 
lean_inc(v_r_114_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 3, v_r_114_);
lean_ctor_set(v___x_118_, 0, v___x_29_);
v___x_129_ = v___x_118_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_29_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v_k_115_);
lean_ctor_set(v_reuseFailAlloc_133_, 2, v_v_116_);
lean_ctor_set(v_reuseFailAlloc_133_, 3, v_r_114_);
lean_ctor_set(v_reuseFailAlloc_133_, 4, v_r_114_);
v___x_129_ = v_reuseFailAlloc_133_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_131_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v___x_129_);
lean_ctor_set(v___x_24_, 3, v___x_127_);
lean_ctor_set(v___x_24_, 2, v_v_121_);
lean_ctor_set(v___x_24_, 1, v_k_120_);
lean_ctor_set(v___x_24_, 0, v___x_125_);
v___x_131_ = v___x_24_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_125_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v_k_120_);
lean_ctor_set(v_reuseFailAlloc_132_, 2, v_v_121_);
lean_ctor_set(v_reuseFailAlloc_132_, 3, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_132_, 4, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
}
}
else
{
lean_object* v_r_142_; 
v_r_142_ = lean_ctor_get(v_impl_28_, 4);
lean_inc(v_r_142_);
if (lean_obj_tag(v_r_142_) == 0)
{
lean_object* v_k_143_; lean_object* v_v_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_155_; 
v_k_143_ = lean_ctor_get(v_impl_28_, 1);
v_v_144_ = lean_ctor_get(v_impl_28_, 2);
v_isSharedCheck_155_ = !lean_is_exclusive(v_impl_28_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; lean_object* v_unused_157_; lean_object* v_unused_158_; 
v_unused_156_ = lean_ctor_get(v_impl_28_, 4);
lean_dec(v_unused_156_);
v_unused_157_ = lean_ctor_get(v_impl_28_, 3);
lean_dec(v_unused_157_);
v_unused_158_ = lean_ctor_get(v_impl_28_, 0);
lean_dec(v_unused_158_);
v___x_146_ = v_impl_28_;
v_isShared_147_ = v_isSharedCheck_155_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_v_144_);
lean_inc(v_k_143_);
lean_dec(v_impl_28_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_155_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_148_; lean_object* v___x_150_; 
v___x_148_ = lean_unsigned_to_nat(3u);
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 4, v_l_113_);
lean_ctor_set(v___x_146_, 2, v_v_20_);
lean_ctor_set(v___x_146_, 1, v_k_19_);
lean_ctor_set(v___x_146_, 0, v___x_29_);
v___x_150_ = v___x_146_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_29_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_154_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_154_, 3, v_l_113_);
lean_ctor_set(v_reuseFailAlloc_154_, 4, v_l_113_);
v___x_150_ = v_reuseFailAlloc_154_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v___x_152_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_r_142_);
lean_ctor_set(v___x_24_, 3, v___x_150_);
lean_ctor_set(v___x_24_, 2, v_v_144_);
lean_ctor_set(v___x_24_, 1, v_k_143_);
lean_ctor_set(v___x_24_, 0, v___x_148_);
v___x_152_ = v___x_24_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v___x_148_);
lean_ctor_set(v_reuseFailAlloc_153_, 1, v_k_143_);
lean_ctor_set(v_reuseFailAlloc_153_, 2, v_v_144_);
lean_ctor_set(v_reuseFailAlloc_153_, 3, v___x_150_);
lean_ctor_set(v_reuseFailAlloc_153_, 4, v_r_142_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
else
{
lean_object* v___x_159_; lean_object* v___x_161_; 
v___x_159_ = lean_unsigned_to_nat(2u);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_impl_28_);
lean_ctor_set(v___x_24_, 3, v_r_142_);
lean_ctor_set(v___x_24_, 0, v___x_159_);
v___x_161_ = v___x_24_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_159_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_162_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_162_, 3, v_r_142_);
lean_ctor_set(v_reuseFailAlloc_162_, 4, v_impl_28_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
}
else
{
lean_object* v___x_164_; 
lean_dec(v_v_20_);
lean_dec(v_k_19_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 2, v_v_16_);
lean_ctor_set(v___x_24_, 1, v_k_15_);
v___x_164_ = v___x_24_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_size_18_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v_k_15_);
lean_ctor_set(v_reuseFailAlloc_165_, 2, v_v_16_);
lean_ctor_set(v_reuseFailAlloc_165_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_165_, 4, v_r_22_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
else
{
lean_object* v_impl_166_; lean_object* v___x_167_; 
lean_dec(v_size_18_);
v_impl_166_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_k_15_, v_v_16_, v_l_21_);
v___x_167_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_22_) == 0)
{
lean_object* v_size_168_; lean_object* v_size_169_; lean_object* v_k_170_; lean_object* v_v_171_; lean_object* v_l_172_; lean_object* v_r_173_; lean_object* v___x_174_; lean_object* v___x_175_; uint8_t v___x_176_; 
v_size_168_ = lean_ctor_get(v_r_22_, 0);
v_size_169_ = lean_ctor_get(v_impl_166_, 0);
lean_inc(v_size_169_);
v_k_170_ = lean_ctor_get(v_impl_166_, 1);
lean_inc(v_k_170_);
v_v_171_ = lean_ctor_get(v_impl_166_, 2);
lean_inc(v_v_171_);
v_l_172_ = lean_ctor_get(v_impl_166_, 3);
lean_inc(v_l_172_);
v_r_173_ = lean_ctor_get(v_impl_166_, 4);
lean_inc(v_r_173_);
v___x_174_ = lean_unsigned_to_nat(3u);
v___x_175_ = lean_nat_mul(v___x_174_, v_size_168_);
v___x_176_ = lean_nat_dec_lt(v___x_175_, v_size_169_);
lean_dec(v___x_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
lean_dec(v_r_173_);
lean_dec(v_l_172_);
lean_dec(v_v_171_);
lean_dec(v_k_170_);
v___x_177_ = lean_nat_add(v___x_167_, v_size_169_);
lean_dec(v_size_169_);
v___x_178_ = lean_nat_add(v___x_177_, v_size_168_);
lean_dec(v___x_177_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 3, v_impl_166_);
lean_ctor_set(v___x_24_, 0, v___x_178_);
v___x_180_ = v___x_24_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_178_);
lean_ctor_set(v_reuseFailAlloc_181_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_181_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_181_, 3, v_impl_166_);
lean_ctor_set(v_reuseFailAlloc_181_, 4, v_r_22_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
else
{
lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_247_; 
v_isSharedCheck_247_ = !lean_is_exclusive(v_impl_166_);
if (v_isSharedCheck_247_ == 0)
{
lean_object* v_unused_248_; lean_object* v_unused_249_; lean_object* v_unused_250_; lean_object* v_unused_251_; lean_object* v_unused_252_; 
v_unused_248_ = lean_ctor_get(v_impl_166_, 4);
lean_dec(v_unused_248_);
v_unused_249_ = lean_ctor_get(v_impl_166_, 3);
lean_dec(v_unused_249_);
v_unused_250_ = lean_ctor_get(v_impl_166_, 2);
lean_dec(v_unused_250_);
v_unused_251_ = lean_ctor_get(v_impl_166_, 1);
lean_dec(v_unused_251_);
v_unused_252_ = lean_ctor_get(v_impl_166_, 0);
lean_dec(v_unused_252_);
v___x_183_ = v_impl_166_;
v_isShared_184_ = v_isSharedCheck_247_;
goto v_resetjp_182_;
}
else
{
lean_dec(v_impl_166_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_247_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v_size_185_; lean_object* v_size_186_; lean_object* v_k_187_; lean_object* v_v_188_; lean_object* v_l_189_; lean_object* v_r_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v_size_185_ = lean_ctor_get(v_l_172_, 0);
v_size_186_ = lean_ctor_get(v_r_173_, 0);
v_k_187_ = lean_ctor_get(v_r_173_, 1);
v_v_188_ = lean_ctor_get(v_r_173_, 2);
v_l_189_ = lean_ctor_get(v_r_173_, 3);
v_r_190_ = lean_ctor_get(v_r_173_, 4);
v___x_191_ = lean_unsigned_to_nat(2u);
v___x_192_ = lean_nat_mul(v___x_191_, v_size_185_);
v___x_193_ = lean_nat_dec_lt(v_size_186_, v___x_192_);
lean_dec(v___x_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_222_; 
lean_inc(v_r_190_);
lean_inc(v_l_189_);
lean_inc(v_v_188_);
lean_inc(v_k_187_);
v_isSharedCheck_222_ = !lean_is_exclusive(v_r_173_);
if (v_isSharedCheck_222_ == 0)
{
lean_object* v_unused_223_; lean_object* v_unused_224_; lean_object* v_unused_225_; lean_object* v_unused_226_; lean_object* v_unused_227_; 
v_unused_223_ = lean_ctor_get(v_r_173_, 4);
lean_dec(v_unused_223_);
v_unused_224_ = lean_ctor_get(v_r_173_, 3);
lean_dec(v_unused_224_);
v_unused_225_ = lean_ctor_get(v_r_173_, 2);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_r_173_, 1);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_r_173_, 0);
lean_dec(v_unused_227_);
v___x_195_ = v_r_173_;
v_isShared_196_ = v_isSharedCheck_222_;
goto v_resetjp_194_;
}
else
{
lean_dec(v_r_173_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_222_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___y_200_; lean_object* v___y_201_; lean_object* v___y_202_; lean_object* v___x_210_; lean_object* v___y_212_; 
v___x_197_ = lean_nat_add(v___x_167_, v_size_169_);
lean_dec(v_size_169_);
v___x_198_ = lean_nat_add(v___x_197_, v_size_168_);
lean_dec(v___x_197_);
v___x_210_ = lean_nat_add(v___x_167_, v_size_185_);
if (lean_obj_tag(v_l_189_) == 0)
{
lean_object* v_size_220_; 
v_size_220_ = lean_ctor_get(v_l_189_, 0);
lean_inc(v_size_220_);
v___y_212_ = v_size_220_;
goto v___jp_211_;
}
else
{
lean_object* v___x_221_; 
v___x_221_ = lean_unsigned_to_nat(0u);
v___y_212_ = v___x_221_;
goto v___jp_211_;
}
v___jp_199_:
{
lean_object* v___x_203_; lean_object* v___x_205_; 
v___x_203_ = lean_nat_add(v___y_201_, v___y_202_);
lean_dec(v___y_202_);
lean_dec(v___y_201_);
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 4, v_r_22_);
lean_ctor_set(v___x_195_, 3, v_r_190_);
lean_ctor_set(v___x_195_, 2, v_v_20_);
lean_ctor_set(v___x_195_, 1, v_k_19_);
lean_ctor_set(v___x_195_, 0, v___x_203_);
v___x_205_ = v___x_195_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_209_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_209_, 3, v_r_190_);
lean_ctor_set(v_reuseFailAlloc_209_, 4, v_r_22_);
v___x_205_ = v_reuseFailAlloc_209_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
lean_object* v___x_207_; 
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 4, v___x_205_);
lean_ctor_set(v___x_183_, 3, v___y_200_);
lean_ctor_set(v___x_183_, 2, v_v_188_);
lean_ctor_set(v___x_183_, 1, v_k_187_);
lean_ctor_set(v___x_183_, 0, v___x_198_);
v___x_207_ = v___x_183_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v___x_198_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_k_187_);
lean_ctor_set(v_reuseFailAlloc_208_, 2, v_v_188_);
lean_ctor_set(v_reuseFailAlloc_208_, 3, v___y_200_);
lean_ctor_set(v_reuseFailAlloc_208_, 4, v___x_205_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
v___jp_211_:
{
lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_213_ = lean_nat_add(v___x_210_, v___y_212_);
lean_dec(v___y_212_);
lean_dec(v___x_210_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_l_189_);
lean_ctor_set(v___x_24_, 3, v_l_172_);
lean_ctor_set(v___x_24_, 2, v_v_171_);
lean_ctor_set(v___x_24_, 1, v_k_170_);
lean_ctor_set(v___x_24_, 0, v___x_213_);
v___x_215_ = v___x_24_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_213_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_k_170_);
lean_ctor_set(v_reuseFailAlloc_219_, 2, v_v_171_);
lean_ctor_set(v_reuseFailAlloc_219_, 3, v_l_172_);
lean_ctor_set(v_reuseFailAlloc_219_, 4, v_l_189_);
v___x_215_ = v_reuseFailAlloc_219_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_object* v___x_216_; 
v___x_216_ = lean_nat_add(v___x_167_, v_size_168_);
if (lean_obj_tag(v_r_190_) == 0)
{
lean_object* v_size_217_; 
v_size_217_ = lean_ctor_get(v_r_190_, 0);
lean_inc(v_size_217_);
v___y_200_ = v___x_215_;
v___y_201_ = v___x_216_;
v___y_202_ = v_size_217_;
goto v___jp_199_;
}
else
{
lean_object* v___x_218_; 
v___x_218_ = lean_unsigned_to_nat(0u);
v___y_200_ = v___x_215_;
v___y_201_ = v___x_216_;
v___y_202_ = v___x_218_;
goto v___jp_199_;
}
}
}
}
}
else
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
lean_del_object(v___x_24_);
v___x_228_ = lean_nat_add(v___x_167_, v_size_169_);
lean_dec(v_size_169_);
v___x_229_ = lean_nat_add(v___x_228_, v_size_168_);
lean_dec(v___x_228_);
v___x_230_ = lean_nat_add(v___x_167_, v_size_168_);
v___x_231_ = lean_nat_add(v___x_230_, v_size_186_);
lean_dec(v___x_230_);
lean_inc_ref(v_r_22_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 4, v_r_22_);
lean_ctor_set(v___x_183_, 3, v_r_173_);
lean_ctor_set(v___x_183_, 2, v_v_20_);
lean_ctor_set(v___x_183_, 1, v_k_19_);
lean_ctor_set(v___x_183_, 0, v___x_231_);
v___x_233_ = v___x_183_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_231_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_246_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_246_, 3, v_r_173_);
lean_ctor_set(v_reuseFailAlloc_246_, 4, v_r_22_);
v___x_233_ = v_reuseFailAlloc_246_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
v_isSharedCheck_240_ = !lean_is_exclusive(v_r_22_);
if (v_isSharedCheck_240_ == 0)
{
lean_object* v_unused_241_; lean_object* v_unused_242_; lean_object* v_unused_243_; lean_object* v_unused_244_; lean_object* v_unused_245_; 
v_unused_241_ = lean_ctor_get(v_r_22_, 4);
lean_dec(v_unused_241_);
v_unused_242_ = lean_ctor_get(v_r_22_, 3);
lean_dec(v_unused_242_);
v_unused_243_ = lean_ctor_get(v_r_22_, 2);
lean_dec(v_unused_243_);
v_unused_244_ = lean_ctor_get(v_r_22_, 1);
lean_dec(v_unused_244_);
v_unused_245_ = lean_ctor_get(v_r_22_, 0);
lean_dec(v_unused_245_);
v___x_235_ = v_r_22_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_dec(v_r_22_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 4, v___x_233_);
lean_ctor_set(v___x_235_, 3, v_l_172_);
lean_ctor_set(v___x_235_, 2, v_v_171_);
lean_ctor_set(v___x_235_, 1, v_k_170_);
lean_ctor_set(v___x_235_, 0, v___x_229_);
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v_k_170_);
lean_ctor_set(v_reuseFailAlloc_239_, 2, v_v_171_);
lean_ctor_set(v_reuseFailAlloc_239_, 3, v_l_172_);
lean_ctor_set(v_reuseFailAlloc_239_, 4, v___x_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_253_; 
v_l_253_ = lean_ctor_get(v_impl_166_, 3);
lean_inc(v_l_253_);
if (lean_obj_tag(v_l_253_) == 0)
{
lean_object* v_r_254_; lean_object* v_k_255_; lean_object* v_v_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_267_; 
v_r_254_ = lean_ctor_get(v_impl_166_, 4);
v_k_255_ = lean_ctor_get(v_impl_166_, 1);
v_v_256_ = lean_ctor_get(v_impl_166_, 2);
v_isSharedCheck_267_ = !lean_is_exclusive(v_impl_166_);
if (v_isSharedCheck_267_ == 0)
{
lean_object* v_unused_268_; lean_object* v_unused_269_; 
v_unused_268_ = lean_ctor_get(v_impl_166_, 3);
lean_dec(v_unused_268_);
v_unused_269_ = lean_ctor_get(v_impl_166_, 0);
lean_dec(v_unused_269_);
v___x_258_ = v_impl_166_;
v_isShared_259_ = v_isSharedCheck_267_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_r_254_);
lean_inc(v_v_256_);
lean_inc(v_k_255_);
lean_dec(v_impl_166_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_267_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_260_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_254_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 3, v_r_254_);
lean_ctor_set(v___x_258_, 2, v_v_20_);
lean_ctor_set(v___x_258_, 1, v_k_19_);
lean_ctor_set(v___x_258_, 0, v___x_167_);
v___x_262_ = v___x_258_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_266_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_266_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_266_, 3, v_r_254_);
lean_ctor_set(v_reuseFailAlloc_266_, 4, v_r_254_);
v___x_262_ = v_reuseFailAlloc_266_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
lean_object* v___x_264_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v___x_262_);
lean_ctor_set(v___x_24_, 3, v_l_253_);
lean_ctor_set(v___x_24_, 2, v_v_256_);
lean_ctor_set(v___x_24_, 1, v_k_255_);
lean_ctor_set(v___x_24_, 0, v___x_260_);
v___x_264_ = v___x_24_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_260_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_k_255_);
lean_ctor_set(v_reuseFailAlloc_265_, 2, v_v_256_);
lean_ctor_set(v_reuseFailAlloc_265_, 3, v_l_253_);
lean_ctor_set(v_reuseFailAlloc_265_, 4, v___x_262_);
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
lean_object* v_r_270_; 
v_r_270_ = lean_ctor_get(v_impl_166_, 4);
lean_inc(v_r_270_);
if (lean_obj_tag(v_r_270_) == 0)
{
lean_object* v_k_271_; lean_object* v_v_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_295_; 
v_k_271_ = lean_ctor_get(v_impl_166_, 1);
v_v_272_ = lean_ctor_get(v_impl_166_, 2);
v_isSharedCheck_295_ = !lean_is_exclusive(v_impl_166_);
if (v_isSharedCheck_295_ == 0)
{
lean_object* v_unused_296_; lean_object* v_unused_297_; lean_object* v_unused_298_; 
v_unused_296_ = lean_ctor_get(v_impl_166_, 4);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_impl_166_, 3);
lean_dec(v_unused_297_);
v_unused_298_ = lean_ctor_get(v_impl_166_, 0);
lean_dec(v_unused_298_);
v___x_274_ = v_impl_166_;
v_isShared_275_ = v_isSharedCheck_295_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_v_272_);
lean_inc(v_k_271_);
lean_dec(v_impl_166_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_295_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v_k_276_; lean_object* v_v_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_291_; 
v_k_276_ = lean_ctor_get(v_r_270_, 1);
v_v_277_ = lean_ctor_get(v_r_270_, 2);
v_isSharedCheck_291_ = !lean_is_exclusive(v_r_270_);
if (v_isSharedCheck_291_ == 0)
{
lean_object* v_unused_292_; lean_object* v_unused_293_; lean_object* v_unused_294_; 
v_unused_292_ = lean_ctor_get(v_r_270_, 4);
lean_dec(v_unused_292_);
v_unused_293_ = lean_ctor_get(v_r_270_, 3);
lean_dec(v_unused_293_);
v_unused_294_ = lean_ctor_get(v_r_270_, 0);
lean_dec(v_unused_294_);
v___x_279_ = v_r_270_;
v_isShared_280_ = v_isSharedCheck_291_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_v_277_);
lean_inc(v_k_276_);
lean_dec(v_r_270_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_291_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_281_; lean_object* v___x_283_; 
v___x_281_ = lean_unsigned_to_nat(3u);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 4, v_l_253_);
lean_ctor_set(v___x_279_, 3, v_l_253_);
lean_ctor_set(v___x_279_, 2, v_v_272_);
lean_ctor_set(v___x_279_, 1, v_k_271_);
lean_ctor_set(v___x_279_, 0, v___x_167_);
v___x_283_ = v___x_279_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v_k_271_);
lean_ctor_set(v_reuseFailAlloc_290_, 2, v_v_272_);
lean_ctor_set(v_reuseFailAlloc_290_, 3, v_l_253_);
lean_ctor_set(v_reuseFailAlloc_290_, 4, v_l_253_);
v___x_283_ = v_reuseFailAlloc_290_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
lean_object* v___x_285_; 
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 4, v_l_253_);
lean_ctor_set(v___x_274_, 2, v_v_20_);
lean_ctor_set(v___x_274_, 1, v_k_19_);
lean_ctor_set(v___x_274_, 0, v___x_167_);
v___x_285_ = v___x_274_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_289_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_289_, 3, v_l_253_);
lean_ctor_set(v_reuseFailAlloc_289_, 4, v_l_253_);
v___x_285_ = v_reuseFailAlloc_289_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
lean_object* v___x_287_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v___x_285_);
lean_ctor_set(v___x_24_, 3, v___x_283_);
lean_ctor_set(v___x_24_, 2, v_v_277_);
lean_ctor_set(v___x_24_, 1, v_k_276_);
lean_ctor_set(v___x_24_, 0, v___x_281_);
v___x_287_ = v___x_24_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v_k_276_);
lean_ctor_set(v_reuseFailAlloc_288_, 2, v_v_277_);
lean_ctor_set(v_reuseFailAlloc_288_, 3, v___x_283_);
lean_ctor_set(v_reuseFailAlloc_288_, 4, v___x_285_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
}
}
else
{
lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_299_ = lean_unsigned_to_nat(2u);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_r_270_);
lean_ctor_set(v___x_24_, 3, v_impl_166_);
lean_ctor_set(v___x_24_, 0, v___x_299_);
v___x_301_ = v___x_24_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_302_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_302_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_302_, 3, v_impl_166_);
lean_ctor_set(v_reuseFailAlloc_302_, 4, v_r_270_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_unsigned_to_nat(1u);
v___x_305_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v_k_15_);
lean_ctor_set(v___x_305_, 2, v_v_16_);
lean_ctor_set(v___x_305_, 3, v_t_17_);
lean_ctor_set(v___x_305_, 4, v_t_17_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkId(lean_object* v_id_306_, lean_object* v_a_307_){
_start:
{
uint8_t v___x_308_; 
v___x_308_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg(v_id_306_, v_a_307_);
if (v___x_308_ == 0)
{
uint8_t v___x_309_; 
v___x_309_ = 1;
if (v___x_308_ == 0)
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_310_ = lean_box(0);
v___x_311_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_id_306_, v___x_310_, v_a_307_);
v___x_312_ = lean_box(v___x_309_);
v___x_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
lean_ctor_set(v___x_313_, 1, v___x_311_);
return v___x_313_;
}
else
{
lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec(v_id_306_);
v___x_314_ = lean_box(v___x_309_);
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
lean_ctor_set(v___x_315_, 1, v_a_307_);
return v___x_315_;
}
}
else
{
uint8_t v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
lean_dec(v_id_306_);
v___x_316_ = 0;
v___x_317_ = lean_box(v___x_316_);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
lean_ctor_set(v___x_318_, 1, v_a_307_);
return v___x_318_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0(lean_object* v_00_u03b2_319_, lean_object* v_k_320_, lean_object* v_t_321_){
_start:
{
uint8_t v___x_322_; 
v___x_322_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg(v_k_320_, v_t_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___boxed(lean_object* v_00_u03b2_323_, lean_object* v_k_324_, lean_object* v_t_325_){
_start:
{
uint8_t v_res_326_; lean_object* v_r_327_; 
v_res_326_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0(v_00_u03b2_323_, v_k_324_, v_t_325_);
lean_dec(v_t_325_);
lean_dec(v_k_324_);
v_r_327_ = lean_box(v_res_326_);
return v_r_327_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1(lean_object* v_00_u03b2_328_, lean_object* v_k_329_, lean_object* v_v_330_, lean_object* v_t_331_, lean_object* v_hl_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_k_329_, v_v_330_, v_t_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0(lean_object* v_as_334_, size_t v_i_335_, size_t v_stop_336_, lean_object* v___y_337_){
_start:
{
uint8_t v___x_338_; 
v___x_338_ = lean_usize_dec_eq(v_i_335_, v_stop_336_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; lean_object* v_x_340_; lean_object* v___x_341_; lean_object* v_fst_342_; uint8_t v___x_343_; 
v___x_339_ = lean_array_uget_borrowed(v_as_334_, v_i_335_);
v_x_340_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_x_340_);
v___x_341_ = l_Lean_IR_UniqueIds_checkId(v_x_340_, v___y_337_);
v_fst_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_fst_342_);
v___x_343_ = lean_unbox(v_fst_342_);
lean_dec(v_fst_342_);
if (v___x_343_ == 0)
{
lean_object* v_snd_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_353_; 
v_snd_344_ = lean_ctor_get(v___x_341_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_353_ == 0)
{
lean_object* v_unused_354_; 
v_unused_354_ = lean_ctor_get(v___x_341_, 0);
lean_dec(v_unused_354_);
v___x_346_ = v___x_341_;
v_isShared_347_ = v_isSharedCheck_353_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_snd_344_);
lean_dec(v___x_341_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_353_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
uint8_t v___x_348_; lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_348_ = 1;
v___x_349_ = lean_box(v___x_348_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 0, v___x_349_);
v___x_351_ = v___x_346_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_snd_344_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
else
{
lean_object* v_snd_355_; size_t v___x_356_; size_t v___x_357_; 
v_snd_355_ = lean_ctor_get(v___x_341_, 1);
lean_inc(v_snd_355_);
lean_dec_ref(v___x_341_);
v___x_356_ = ((size_t)1ULL);
v___x_357_ = lean_usize_add(v_i_335_, v___x_356_);
v_i_335_ = v___x_357_;
v___y_337_ = v_snd_355_;
goto _start;
}
}
else
{
uint8_t v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_359_ = 0;
v___x_360_ = lean_box(v___x_359_);
v___x_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v___y_337_);
return v___x_361_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0___boxed(lean_object* v_as_362_, lean_object* v_i_363_, lean_object* v_stop_364_, lean_object* v___y_365_){
_start:
{
size_t v_i_boxed_366_; size_t v_stop_boxed_367_; lean_object* v_res_368_; 
v_i_boxed_366_ = lean_unbox_usize(v_i_363_);
lean_dec(v_i_363_);
v_stop_boxed_367_ = lean_unbox_usize(v_stop_364_);
lean_dec(v_stop_364_);
v_res_368_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0(v_as_362_, v_i_boxed_366_, v_stop_boxed_367_, v___y_365_);
lean_dec_ref(v_as_362_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkParams(lean_object* v_ps_369_, lean_object* v_a_370_){
_start:
{
lean_object* v___y_372_; lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_376_ = lean_unsigned_to_nat(0u);
v___x_377_ = lean_array_get_size(v_ps_369_);
v___x_378_ = lean_nat_dec_lt(v___x_376_, v___x_377_);
if (v___x_378_ == 0)
{
v___y_372_ = v_a_370_;
goto v___jp_371_;
}
else
{
if (v___x_378_ == 0)
{
v___y_372_ = v_a_370_;
goto v___jp_371_;
}
else
{
size_t v___x_379_; size_t v___x_380_; lean_object* v___x_381_; lean_object* v_fst_382_; uint8_t v___x_383_; 
v___x_379_ = ((size_t)0ULL);
v___x_380_ = lean_usize_of_nat(v___x_377_);
v___x_381_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0(v_ps_369_, v___x_379_, v___x_380_, v_a_370_);
v_fst_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_fst_382_);
v___x_383_ = lean_unbox(v_fst_382_);
lean_dec(v_fst_382_);
if (v___x_383_ == 0)
{
lean_object* v_snd_384_; 
v_snd_384_ = lean_ctor_get(v___x_381_, 1);
lean_inc(v_snd_384_);
lean_dec_ref(v___x_381_);
v___y_372_ = v_snd_384_;
goto v___jp_371_;
}
else
{
lean_object* v_snd_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_394_; 
v_snd_385_ = lean_ctor_get(v___x_381_, 1);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_394_ == 0)
{
lean_object* v_unused_395_; 
v_unused_395_ = lean_ctor_get(v___x_381_, 0);
lean_dec(v_unused_395_);
v___x_387_ = v___x_381_;
v_isShared_388_ = v_isSharedCheck_394_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_snd_385_);
lean_dec(v___x_381_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_394_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
uint8_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_392_; 
v___x_389_ = 0;
v___x_390_ = lean_box(v___x_389_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 0, v___x_390_);
v___x_392_ = v___x_387_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v___x_390_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v_snd_385_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
}
}
v___jp_371_:
{
uint8_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_373_ = 1;
v___x_374_ = lean_box(v___x_373_);
v___x_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
lean_ctor_set(v___x_375_, 1, v___y_372_);
return v___x_375_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkParams___boxed(lean_object* v_ps_396_, lean_object* v_a_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_IR_UniqueIds_checkParams(v_ps_396_, v_a_397_);
lean_dec_ref(v_ps_396_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkFnBody(lean_object* v_x_399_, lean_object* v_a_400_){
_start:
{
lean_object* v___y_402_; 
switch(lean_obj_tag(v_x_399_))
{
case 0:
{
lean_object* v_x_406_; lean_object* v_b_407_; lean_object* v___x_408_; lean_object* v_fst_409_; uint8_t v___x_410_; 
v_x_406_ = lean_ctor_get(v_x_399_, 0);
lean_inc(v_x_406_);
v_b_407_ = lean_ctor_get(v_x_399_, 3);
lean_inc(v_b_407_);
lean_dec_ref_known(v_x_399_, 4);
v___x_408_ = l_Lean_IR_UniqueIds_checkId(v_x_406_, v_a_400_);
v_fst_409_ = lean_ctor_get(v___x_408_, 0);
lean_inc(v_fst_409_);
v___x_410_ = lean_unbox(v_fst_409_);
lean_dec(v_fst_409_);
if (v___x_410_ == 0)
{
lean_dec(v_b_407_);
return v___x_408_;
}
else
{
lean_object* v_snd_411_; 
v_snd_411_ = lean_ctor_get(v___x_408_, 1);
lean_inc(v_snd_411_);
lean_dec_ref(v___x_408_);
v_x_399_ = v_b_407_;
v_a_400_ = v_snd_411_;
goto _start;
}
}
case 1:
{
lean_object* v_j_413_; lean_object* v_xs_414_; lean_object* v_b_415_; lean_object* v___x_416_; lean_object* v_fst_417_; uint8_t v___x_418_; 
v_j_413_ = lean_ctor_get(v_x_399_, 0);
lean_inc(v_j_413_);
v_xs_414_ = lean_ctor_get(v_x_399_, 1);
lean_inc_ref(v_xs_414_);
v_b_415_ = lean_ctor_get(v_x_399_, 3);
lean_inc(v_b_415_);
lean_dec_ref_known(v_x_399_, 4);
v___x_416_ = l_Lean_IR_UniqueIds_checkId(v_j_413_, v_a_400_);
v_fst_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_fst_417_);
v___x_418_ = lean_unbox(v_fst_417_);
lean_dec(v_fst_417_);
if (v___x_418_ == 0)
{
lean_dec(v_b_415_);
lean_dec_ref(v_xs_414_);
return v___x_416_;
}
else
{
lean_object* v_snd_419_; lean_object* v___x_420_; lean_object* v_fst_421_; uint8_t v___x_422_; 
v_snd_419_ = lean_ctor_get(v___x_416_, 1);
lean_inc(v_snd_419_);
lean_dec_ref(v___x_416_);
v___x_420_ = l_Lean_IR_UniqueIds_checkParams(v_xs_414_, v_snd_419_);
lean_dec_ref(v_xs_414_);
v_fst_421_ = lean_ctor_get(v___x_420_, 0);
lean_inc(v_fst_421_);
v___x_422_ = lean_unbox(v_fst_421_);
lean_dec(v_fst_421_);
if (v___x_422_ == 0)
{
lean_dec(v_b_415_);
return v___x_420_;
}
else
{
lean_object* v_snd_423_; 
v_snd_423_ = lean_ctor_get(v___x_420_, 1);
lean_inc(v_snd_423_);
lean_dec_ref(v___x_420_);
v_x_399_ = v_b_415_;
v_a_400_ = v_snd_423_;
goto _start;
}
}
}
case 9:
{
lean_object* v_cs_425_; lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; 
v_cs_425_ = lean_ctor_get(v_x_399_, 3);
lean_inc_ref(v_cs_425_);
lean_dec_ref_known(v_x_399_, 4);
v___x_426_ = lean_unsigned_to_nat(0u);
v___x_427_ = lean_array_get_size(v_cs_425_);
v___x_428_ = lean_nat_dec_lt(v___x_426_, v___x_427_);
if (v___x_428_ == 0)
{
lean_dec_ref(v_cs_425_);
v___y_402_ = v_a_400_;
goto v___jp_401_;
}
else
{
if (v___x_428_ == 0)
{
lean_dec_ref(v_cs_425_);
v___y_402_ = v_a_400_;
goto v___jp_401_;
}
else
{
size_t v___x_429_; size_t v___x_430_; lean_object* v___x_431_; lean_object* v_fst_432_; uint8_t v___x_433_; 
v___x_429_ = ((size_t)0ULL);
v___x_430_ = lean_usize_of_nat(v___x_427_);
v___x_431_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0(v_cs_425_, v___x_429_, v___x_430_, v_a_400_);
lean_dec_ref(v_cs_425_);
v_fst_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_fst_432_);
v___x_433_ = lean_unbox(v_fst_432_);
lean_dec(v_fst_432_);
if (v___x_433_ == 0)
{
lean_object* v_snd_434_; 
v_snd_434_ = lean_ctor_get(v___x_431_, 1);
lean_inc(v_snd_434_);
lean_dec_ref(v___x_431_);
v___y_402_ = v_snd_434_;
goto v___jp_401_;
}
else
{
lean_object* v_snd_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_444_; 
v_snd_435_ = lean_ctor_get(v___x_431_, 1);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_444_ == 0)
{
lean_object* v_unused_445_; 
v_unused_445_ = lean_ctor_get(v___x_431_, 0);
lean_dec(v_unused_445_);
v___x_437_ = v___x_431_;
v_isShared_438_ = v_isSharedCheck_444_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_snd_435_);
lean_dec(v___x_431_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_444_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
uint8_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_439_ = 0;
v___x_440_ = lean_box(v___x_439_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v___x_440_);
v___x_442_ = v___x_437_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_440_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v_snd_435_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
}
}
}
default: 
{
uint8_t v___x_446_; 
v___x_446_ = l_Lean_IR_FnBody_isTerminal(v_x_399_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; 
v___x_447_ = l_Lean_IR_FnBody_body(v_x_399_);
lean_dec(v_x_399_);
v_x_399_ = v___x_447_;
goto _start;
}
else
{
lean_object* v___x_449_; lean_object* v___x_450_; 
lean_dec(v_x_399_);
v___x_449_ = lean_box(v___x_446_);
v___x_450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
lean_ctor_set(v___x_450_, 1, v_a_400_);
return v___x_450_;
}
}
}
v___jp_401_:
{
uint8_t v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_403_ = 1;
v___x_404_ = lean_box(v___x_403_);
v___x_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v___y_402_);
return v___x_405_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0(lean_object* v_as_451_, size_t v_i_452_, size_t v_stop_453_, lean_object* v___y_454_){
_start:
{
uint8_t v___x_455_; 
v___x_455_ = lean_usize_dec_eq(v_i_452_, v_stop_453_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v_fst_459_; uint8_t v___x_460_; 
v___x_456_ = lean_array_uget_borrowed(v_as_451_, v_i_452_);
v___x_457_ = l_Lean_IR_Alt_body(v___x_456_);
v___x_458_ = l_Lean_IR_UniqueIds_checkFnBody(v___x_457_, v___y_454_);
v_fst_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_fst_459_);
v___x_460_ = lean_unbox(v_fst_459_);
lean_dec(v_fst_459_);
if (v___x_460_ == 0)
{
lean_object* v_snd_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_470_; 
v_snd_461_ = lean_ctor_get(v___x_458_, 1);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_470_ == 0)
{
lean_object* v_unused_471_; 
v_unused_471_ = lean_ctor_get(v___x_458_, 0);
lean_dec(v_unused_471_);
v___x_463_ = v___x_458_;
v_isShared_464_ = v_isSharedCheck_470_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_snd_461_);
lean_dec(v___x_458_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_470_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
uint8_t v___x_465_; lean_object* v___x_466_; lean_object* v___x_468_; 
v___x_465_ = 1;
v___x_466_ = lean_box(v___x_465_);
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 0, v___x_466_);
v___x_468_ = v___x_463_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_466_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_snd_461_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
else
{
lean_object* v_snd_472_; size_t v___x_473_; size_t v___x_474_; 
v_snd_472_ = lean_ctor_get(v___x_458_, 1);
lean_inc(v_snd_472_);
lean_dec_ref(v___x_458_);
v___x_473_ = ((size_t)1ULL);
v___x_474_ = lean_usize_add(v_i_452_, v___x_473_);
v_i_452_ = v___x_474_;
v___y_454_ = v_snd_472_;
goto _start;
}
}
else
{
uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_476_ = 0;
v___x_477_ = lean_box(v___x_476_);
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
lean_ctor_set(v___x_478_, 1, v___y_454_);
return v___x_478_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0___boxed(lean_object* v_as_479_, lean_object* v_i_480_, lean_object* v_stop_481_, lean_object* v___y_482_){
_start:
{
size_t v_i_boxed_483_; size_t v_stop_boxed_484_; lean_object* v_res_485_; 
v_i_boxed_483_ = lean_unbox_usize(v_i_480_);
lean_dec(v_i_480_);
v_stop_boxed_484_ = lean_unbox_usize(v_stop_481_);
lean_dec(v_stop_481_);
v_res_485_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0(v_as_479_, v_i_boxed_483_, v_stop_boxed_484_, v___y_482_);
lean_dec_ref(v_as_479_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkDecl(lean_object* v_x_486_, lean_object* v_a_487_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
lean_object* v_xs_488_; lean_object* v_body_489_; lean_object* v___x_490_; lean_object* v_fst_491_; uint8_t v___x_492_; 
v_xs_488_ = lean_ctor_get(v_x_486_, 1);
lean_inc_ref(v_xs_488_);
v_body_489_ = lean_ctor_get(v_x_486_, 3);
lean_inc(v_body_489_);
lean_dec_ref_known(v_x_486_, 5);
v___x_490_ = l_Lean_IR_UniqueIds_checkParams(v_xs_488_, v_a_487_);
lean_dec_ref(v_xs_488_);
v_fst_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_fst_491_);
v___x_492_ = lean_unbox(v_fst_491_);
lean_dec(v_fst_491_);
if (v___x_492_ == 0)
{
lean_dec(v_body_489_);
return v___x_490_;
}
else
{
lean_object* v_snd_493_; lean_object* v___x_494_; 
v_snd_493_ = lean_ctor_get(v___x_490_, 1);
lean_inc(v_snd_493_);
lean_dec_ref(v___x_490_);
v___x_494_ = l_Lean_IR_UniqueIds_checkFnBody(v_body_489_, v_snd_493_);
return v___x_494_;
}
}
else
{
lean_object* v_xs_495_; lean_object* v___x_496_; 
v_xs_495_ = lean_ctor_get(v_x_486_, 1);
lean_inc_ref(v_xs_495_);
lean_dec_ref_known(v_x_486_, 4);
v___x_496_ = l_Lean_IR_UniqueIds_checkParams(v_xs_495_, v_a_487_);
lean_dec_ref(v_xs_495_);
return v___x_496_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_IR_Decl_uniqueIds(lean_object* v_d_497_){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v_fst_500_; uint8_t v___x_501_; 
v___x_498_ = lean_box(1);
v___x_499_ = l_Lean_IR_UniqueIds_checkDecl(v_d_497_, v___x_498_);
v_fst_500_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_fst_500_);
lean_dec_ref(v___x_499_);
v___x_501_ = lean_unbox(v_fst_500_);
lean_dec(v_fst_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_uniqueIds___boxed(lean_object* v_d_502_){
_start:
{
uint8_t v_res_503_; lean_object* v_r_504_; 
v_res_503_ = l_Lean_IR_Decl_uniqueIds(v_d_502_);
v_r_504_ = lean_box(v_res_503_);
return v_r_504_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg(lean_object* v_t_505_, lean_object* v_k_506_){
_start:
{
if (lean_obj_tag(v_t_505_) == 0)
{
lean_object* v_k_507_; lean_object* v_v_508_; lean_object* v_l_509_; lean_object* v_r_510_; uint8_t v___x_511_; 
v_k_507_ = lean_ctor_get(v_t_505_, 1);
v_v_508_ = lean_ctor_get(v_t_505_, 2);
v_l_509_ = lean_ctor_get(v_t_505_, 3);
v_r_510_ = lean_ctor_get(v_t_505_, 4);
v___x_511_ = lean_nat_dec_lt(v_k_506_, v_k_507_);
if (v___x_511_ == 0)
{
uint8_t v___x_512_; 
v___x_512_ = lean_nat_dec_eq(v_k_506_, v_k_507_);
if (v___x_512_ == 0)
{
v_t_505_ = v_r_510_;
goto _start;
}
else
{
lean_object* v___x_514_; 
lean_inc(v_v_508_);
v___x_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_514_, 0, v_v_508_);
return v___x_514_;
}
}
else
{
v_t_505_ = v_l_509_;
goto _start;
}
}
else
{
lean_object* v___x_516_; 
v___x_516_ = lean_box(0);
return v___x_516_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg___boxed(lean_object* v_t_517_, lean_object* v_k_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg(v_t_517_, v_k_518_);
lean_dec(v_k_518_);
lean_dec(v_t_517_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normIndex(lean_object* v_x_520_, lean_object* v_m_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg(v_m_521_, v_x_520_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_inc(v_x_520_);
return v_x_520_;
}
else
{
lean_object* v_val_523_; 
v_val_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_val_523_);
lean_dec_ref_known(v___x_522_, 1);
return v_val_523_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normIndex___boxed(lean_object* v_x_524_, lean_object* v_m_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_IR_NormalizeIds_normIndex(v_x_524_, v_m_525_);
lean_dec(v_m_525_);
lean_dec(v_x_524_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0(lean_object* v_00_u03b4_527_, lean_object* v_t_528_, lean_object* v_k_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg(v_t_528_, v_k_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___boxed(lean_object* v_00_u03b4_531_, lean_object* v_t_532_, lean_object* v_k_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0(v_00_u03b4_531_, v_t_532_, v_k_533_);
lean_dec(v_k_533_);
lean_dec(v_t_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normVar(lean_object* v_x_535_, lean_object* v_a_536_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = l_Lean_IR_NormalizeIds_normIndex(v_x_535_, v_a_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normVar___boxed(lean_object* v_x_538_, lean_object* v_a_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_IR_NormalizeIds_normVar(v_x_538_, v_a_539_);
lean_dec(v_a_539_);
lean_dec(v_x_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normJP(lean_object* v_x_541_, lean_object* v_a_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l_Lean_IR_NormalizeIds_normIndex(v_x_541_, v_a_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normJP___boxed(lean_object* v_x_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_IR_NormalizeIds_normJP(v_x_544_, v_a_545_);
lean_dec(v_a_545_);
lean_dec(v_x_544_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArg(lean_object* v_x_547_, lean_object* v_a_548_){
_start:
{
if (lean_obj_tag(v_x_547_) == 0)
{
lean_object* v_id_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_557_; 
v_id_549_ = lean_ctor_get(v_x_547_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v_x_547_);
if (v_isSharedCheck_557_ == 0)
{
v___x_551_ = v_x_547_;
v_isShared_552_ = v_isSharedCheck_557_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_id_549_);
lean_dec(v_x_547_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_557_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_553_; lean_object* v___x_555_; 
v___x_553_ = l_Lean_IR_NormalizeIds_normIndex(v_id_549_, v_a_548_);
lean_dec(v_id_549_);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 0, v___x_553_);
v___x_555_ = v___x_551_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v___x_553_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
else
{
return v_x_547_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArg___boxed(lean_object* v_x_558_, lean_object* v_a_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_IR_NormalizeIds_normArg(v_x_558_, v_a_559_);
lean_dec(v_a_559_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0(lean_object* v_m_561_, size_t v_sz_562_, size_t v_i_563_, lean_object* v_bs_564_){
_start:
{
uint8_t v___x_565_; 
v___x_565_ = lean_usize_dec_lt(v_i_563_, v_sz_562_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; 
v___x_566_ = l_unsafeCast___redArg(v_bs_564_);
lean_dec_ref(v_bs_564_);
return v___x_566_;
}
else
{
lean_object* v_v_567_; lean_object* v___x_568_; lean_object* v_bs_x27_569_; lean_object* v___x_570_; lean_object* v___x_571_; size_t v___x_572_; size_t v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v_v_567_ = lean_array_uget(v_bs_564_, v_i_563_);
v___x_568_ = lean_unsigned_to_nat(0u);
v_bs_x27_569_ = lean_array_uset(v_bs_564_, v_i_563_, v___x_568_);
v___x_570_ = l_unsafeCast___redArg(v_v_567_);
lean_dec(v_v_567_);
v___x_571_ = l_Lean_IR_NormalizeIds_normArg(v___x_570_, v_m_561_);
v___x_572_ = ((size_t)1ULL);
v___x_573_ = lean_usize_add(v_i_563_, v___x_572_);
v___x_574_ = l_unsafeCast___redArg(v___x_571_);
lean_dec(v___x_571_);
v___x_575_ = lean_array_uset(v_bs_x27_569_, v_i_563_, v___x_574_);
v_i_563_ = v___x_573_;
v_bs_564_ = v___x_575_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0___boxed(lean_object* v_m_577_, lean_object* v_sz_578_, lean_object* v_i_579_, lean_object* v_bs_580_){
_start:
{
size_t v_sz_boxed_581_; size_t v_i_boxed_582_; lean_object* v_res_583_; 
v_sz_boxed_581_ = lean_unbox_usize(v_sz_578_);
lean_dec(v_sz_578_);
v_i_boxed_582_ = lean_unbox_usize(v_i_579_);
lean_dec(v_i_579_);
v_res_583_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0(v_m_577_, v_sz_boxed_581_, v_i_boxed_582_, v_bs_580_);
lean_dec(v_m_577_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArgs(lean_object* v_as_584_, lean_object* v_m_585_){
_start:
{
size_t v_sz_586_; size_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v_sz_586_ = lean_array_size(v_as_584_);
v___x_587_ = ((size_t)0ULL);
v___x_588_ = l_unsafeCast___redArg(v_as_584_);
v___x_589_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0(v_m_585_, v_sz_586_, v___x_587_, v___x_588_);
v___x_590_ = l_unsafeCast___redArg(v___x_589_);
lean_dec_ref(v___x_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArgs___boxed(lean_object* v_as_591_, lean_object* v_m_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_IR_NormalizeIds_normArgs(v_as_591_, v_m_592_);
lean_dec(v_m_592_);
lean_dec_ref(v_as_591_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normExpr(lean_object* v_x_594_, lean_object* v_x_595_){
_start:
{
switch(lean_obj_tag(v_x_594_))
{
case 0:
{
lean_object* v_i_596_; lean_object* v_ys_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_605_; 
v_i_596_ = lean_ctor_get(v_x_594_, 0);
v_ys_597_ = lean_ctor_get(v_x_594_, 1);
v_isSharedCheck_605_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_605_ == 0)
{
v___x_599_ = v_x_594_;
v_isShared_600_ = v_isSharedCheck_605_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_ys_597_);
lean_inc(v_i_596_);
lean_dec(v_x_594_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_605_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_601_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_597_, v_x_595_);
lean_dec_ref(v_ys_597_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 1, v___x_601_);
v___x_603_ = v___x_599_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_i_596_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
case 1:
{
lean_object* v_n_606_; lean_object* v_x_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_615_; 
v_n_606_ = lean_ctor_get(v_x_594_, 0);
v_x_607_ = lean_ctor_get(v_x_594_, 1);
v_isSharedCheck_615_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_615_ == 0)
{
v___x_609_ = v_x_594_;
v_isShared_610_ = v_isSharedCheck_615_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_x_607_);
lean_inc(v_n_606_);
lean_dec(v_x_594_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_615_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_611_; lean_object* v___x_613_; 
v___x_611_ = l_Lean_IR_NormalizeIds_normIndex(v_x_607_, v_x_595_);
lean_dec(v_x_607_);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 1, v___x_611_);
v___x_613_ = v___x_609_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_n_606_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v___x_611_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
case 2:
{
lean_object* v_x_616_; lean_object* v_i_617_; uint8_t v_updtHeader_618_; lean_object* v_ys_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_628_; 
v_x_616_ = lean_ctor_get(v_x_594_, 0);
v_i_617_ = lean_ctor_get(v_x_594_, 1);
v_updtHeader_618_ = lean_ctor_get_uint8(v_x_594_, sizeof(void*)*3);
v_ys_619_ = lean_ctor_get(v_x_594_, 2);
v_isSharedCheck_628_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_628_ == 0)
{
v___x_621_ = v_x_594_;
v_isShared_622_ = v_isSharedCheck_628_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_ys_619_);
lean_inc(v_i_617_);
lean_inc(v_x_616_);
lean_dec(v_x_594_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_628_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_626_; 
v___x_623_ = l_Lean_IR_NormalizeIds_normIndex(v_x_616_, v_x_595_);
lean_dec(v_x_616_);
v___x_624_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_619_, v_x_595_);
lean_dec_ref(v_ys_619_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 2, v___x_624_);
lean_ctor_set(v___x_621_, 0, v___x_623_);
v___x_626_ = v___x_621_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_623_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v_i_617_);
lean_ctor_set(v_reuseFailAlloc_627_, 2, v___x_624_);
lean_ctor_set_uint8(v_reuseFailAlloc_627_, sizeof(void*)*3, v_updtHeader_618_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
case 3:
{
lean_object* v_i_629_; lean_object* v_x_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_638_; 
v_i_629_ = lean_ctor_get(v_x_594_, 0);
v_x_630_ = lean_ctor_get(v_x_594_, 1);
v_isSharedCheck_638_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_638_ == 0)
{
v___x_632_ = v_x_594_;
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_x_630_);
lean_inc(v_i_629_);
lean_dec(v_x_594_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_634_ = l_Lean_IR_NormalizeIds_normIndex(v_x_630_, v_x_595_);
lean_dec(v_x_630_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 1, v___x_634_);
v___x_636_ = v___x_632_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_i_629_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v___x_634_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
case 4:
{
lean_object* v_i_639_; lean_object* v_x_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_648_; 
v_i_639_ = lean_ctor_get(v_x_594_, 0);
v_x_640_ = lean_ctor_get(v_x_594_, 1);
v_isSharedCheck_648_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_648_ == 0)
{
v___x_642_ = v_x_594_;
v_isShared_643_ = v_isSharedCheck_648_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_x_640_);
lean_inc(v_i_639_);
lean_dec(v_x_594_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_648_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_644_ = l_Lean_IR_NormalizeIds_normIndex(v_x_640_, v_x_595_);
lean_dec(v_x_640_);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 1, v___x_644_);
v___x_646_ = v___x_642_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_i_639_);
lean_ctor_set(v_reuseFailAlloc_647_, 1, v___x_644_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
case 5:
{
lean_object* v_n_649_; lean_object* v_offset_650_; lean_object* v_x_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_659_; 
v_n_649_ = lean_ctor_get(v_x_594_, 0);
v_offset_650_ = lean_ctor_get(v_x_594_, 1);
v_x_651_ = lean_ctor_get(v_x_594_, 2);
v_isSharedCheck_659_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_659_ == 0)
{
v___x_653_ = v_x_594_;
v_isShared_654_ = v_isSharedCheck_659_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_x_651_);
lean_inc(v_offset_650_);
lean_inc(v_n_649_);
lean_dec(v_x_594_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_659_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_655_; lean_object* v___x_657_; 
v___x_655_ = l_Lean_IR_NormalizeIds_normIndex(v_x_651_, v_x_595_);
lean_dec(v_x_651_);
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 2, v___x_655_);
v___x_657_ = v___x_653_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_n_649_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v_offset_650_);
lean_ctor_set(v_reuseFailAlloc_658_, 2, v___x_655_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
case 6:
{
lean_object* v_c_660_; lean_object* v_ys_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_669_; 
v_c_660_ = lean_ctor_get(v_x_594_, 0);
v_ys_661_ = lean_ctor_get(v_x_594_, 1);
v_isSharedCheck_669_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_669_ == 0)
{
v___x_663_ = v_x_594_;
v_isShared_664_ = v_isSharedCheck_669_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_ys_661_);
lean_inc(v_c_660_);
lean_dec(v_x_594_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_669_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___x_667_; 
v___x_665_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_661_, v_x_595_);
lean_dec_ref(v_ys_661_);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 1, v___x_665_);
v___x_667_ = v___x_663_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_c_660_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v___x_665_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
case 7:
{
lean_object* v_c_670_; lean_object* v_ys_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_679_; 
v_c_670_ = lean_ctor_get(v_x_594_, 0);
v_ys_671_ = lean_ctor_get(v_x_594_, 1);
v_isSharedCheck_679_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_679_ == 0)
{
v___x_673_ = v_x_594_;
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_ys_671_);
lean_inc(v_c_670_);
lean_dec(v_x_594_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_671_, v_x_595_);
lean_dec_ref(v_ys_671_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 1, v___x_675_);
v___x_677_ = v___x_673_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_c_670_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v___x_675_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
case 8:
{
lean_object* v_x_680_; lean_object* v_ys_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_690_; 
v_x_680_ = lean_ctor_get(v_x_594_, 0);
v_ys_681_ = lean_ctor_get(v_x_594_, 1);
v_isSharedCheck_690_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_690_ == 0)
{
v___x_683_ = v_x_594_;
v_isShared_684_ = v_isSharedCheck_690_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_ys_681_);
lean_inc(v_x_680_);
lean_dec(v_x_594_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_690_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_688_; 
v___x_685_ = l_Lean_IR_NormalizeIds_normIndex(v_x_680_, v_x_595_);
lean_dec(v_x_680_);
v___x_686_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_681_, v_x_595_);
lean_dec_ref(v_ys_681_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 1, v___x_686_);
lean_ctor_set(v___x_683_, 0, v___x_685_);
v___x_688_ = v___x_683_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_685_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v___x_686_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
case 9:
{
lean_object* v_ty_691_; lean_object* v_x_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_700_; 
v_ty_691_ = lean_ctor_get(v_x_594_, 0);
v_x_692_ = lean_ctor_get(v_x_594_, 1);
v_isSharedCheck_700_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_700_ == 0)
{
v___x_694_ = v_x_594_;
v_isShared_695_ = v_isSharedCheck_700_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_x_692_);
lean_inc(v_ty_691_);
lean_dec(v_x_594_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_700_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_696_; lean_object* v___x_698_; 
v___x_696_ = l_Lean_IR_NormalizeIds_normIndex(v_x_692_, v_x_595_);
lean_dec(v_x_692_);
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 1, v___x_696_);
v___x_698_ = v___x_694_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_ty_691_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v___x_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
case 10:
{
lean_object* v_x_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_709_; 
v_x_701_ = lean_ctor_get(v_x_594_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_709_ == 0)
{
v___x_703_ = v_x_594_;
v_isShared_704_ = v_isSharedCheck_709_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_x_701_);
lean_dec(v_x_594_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_709_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_705_ = l_Lean_IR_NormalizeIds_normIndex(v_x_701_, v_x_595_);
lean_dec(v_x_701_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v___x_705_);
v___x_707_ = v___x_703_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___x_705_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
case 11:
{
return v_x_594_;
}
default: 
{
lean_object* v_x_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_718_; 
v_x_710_ = lean_ctor_get(v_x_594_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v_x_594_);
if (v_isSharedCheck_718_ == 0)
{
v___x_712_ = v_x_594_;
v_isShared_713_ = v_isSharedCheck_718_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_x_710_);
lean_dec(v_x_594_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_718_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_714_ = l_Lean_IR_NormalizeIds_normIndex(v_x_710_, v_x_595_);
lean_dec(v_x_710_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v___x_714_);
v___x_716_ = v___x_712_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normExpr___boxed(lean_object* v_x_719_, lean_object* v_x_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l_Lean_IR_NormalizeIds_normExpr(v_x_719_, v_x_720_);
lean_dec(v_x_720_);
return v_res_721_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_NormalizeIds_withVar___redArg___lam__0(lean_object* v_x_722_, lean_object* v_y_723_){
_start:
{
uint8_t v___x_724_; 
v___x_724_ = lean_nat_dec_lt(v_x_722_, v_y_723_);
if (v___x_724_ == 0)
{
uint8_t v___x_725_; 
v___x_725_ = lean_nat_dec_eq(v_x_722_, v_y_723_);
if (v___x_725_ == 0)
{
uint8_t v___x_726_; 
v___x_726_ = 2;
return v___x_726_;
}
else
{
uint8_t v___x_727_; 
v___x_727_ = 1;
return v___x_727_;
}
}
else
{
uint8_t v___x_728_; 
v___x_728_ = 0;
return v___x_728_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg___lam__0___boxed(lean_object* v_x_729_, lean_object* v_y_730_){
_start:
{
uint8_t v_res_731_; lean_object* v_r_732_; 
v_res_731_ = l_Lean_IR_NormalizeIds_withVar___redArg___lam__0(v_x_729_, v_y_730_);
lean_dec(v_y_730_);
lean_dec(v_x_729_);
v_r_732_ = lean_box(v_res_731_);
return v_r_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg(lean_object* v_x_734_, lean_object* v_k_735_, lean_object* v_m_736_, lean_object* v_a_737_){
_start:
{
lean_object* v___f_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___f_738_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withVar___redArg___closed__0));
v___x_739_ = lean_unsigned_to_nat(1u);
v___x_740_ = lean_nat_add(v_a_737_, v___x_739_);
lean_inc(v_m_736_);
lean_inc(v_a_737_);
v___x_741_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_738_, v_x_734_, v_a_737_, v_m_736_);
v___x_742_ = lean_apply_3(v_k_735_, v_a_737_, v___x_741_, v___x_740_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg___boxed(lean_object* v_x_743_, lean_object* v_k_744_, lean_object* v_m_745_, lean_object* v_a_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_Lean_IR_NormalizeIds_withVar___redArg(v_x_743_, v_k_744_, v_m_745_, v_a_746_);
lean_dec(v_m_745_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar(lean_object* v_00_u03b1_748_, lean_object* v_x_749_, lean_object* v_k_750_, lean_object* v_m_751_, lean_object* v_a_752_){
_start:
{
lean_object* v___f_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v___f_753_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withVar___redArg___closed__0));
v___x_754_ = lean_unsigned_to_nat(1u);
v___x_755_ = lean_nat_add(v_a_752_, v___x_754_);
lean_inc(v_m_751_);
lean_inc(v_a_752_);
v___x_756_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_753_, v_x_749_, v_a_752_, v_m_751_);
v___x_757_ = lean_apply_3(v_k_750_, v_a_752_, v___x_756_, v___x_755_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___boxed(lean_object* v_00_u03b1_758_, lean_object* v_x_759_, lean_object* v_k_760_, lean_object* v_m_761_, lean_object* v_a_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l_Lean_IR_NormalizeIds_withVar(v_00_u03b1_758_, v_x_759_, v_k_760_, v_m_761_, v_a_762_);
lean_dec(v_m_761_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___redArg(lean_object* v_x_764_, lean_object* v_k_765_, lean_object* v_m_766_, lean_object* v_a_767_){
_start:
{
lean_object* v___f_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___f_768_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withVar___redArg___closed__0));
v___x_769_ = lean_unsigned_to_nat(1u);
v___x_770_ = lean_nat_add(v_a_767_, v___x_769_);
lean_inc(v_m_766_);
lean_inc(v_a_767_);
v___x_771_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_768_, v_x_764_, v_a_767_, v_m_766_);
v___x_772_ = lean_apply_3(v_k_765_, v_a_767_, v___x_771_, v___x_770_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___redArg___boxed(lean_object* v_x_773_, lean_object* v_k_774_, lean_object* v_m_775_, lean_object* v_a_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Lean_IR_NormalizeIds_withJP___redArg(v_x_773_, v_k_774_, v_m_775_, v_a_776_);
lean_dec(v_m_775_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP(lean_object* v_00_u03b1_778_, lean_object* v_x_779_, lean_object* v_k_780_, lean_object* v_m_781_, lean_object* v_a_782_){
_start:
{
lean_object* v___f_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___f_783_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withVar___redArg___closed__0));
v___x_784_ = lean_unsigned_to_nat(1u);
v___x_785_ = lean_nat_add(v_a_782_, v___x_784_);
lean_inc(v_m_781_);
lean_inc(v_a_782_);
v___x_786_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_783_, v_x_779_, v_a_782_, v_m_781_);
v___x_787_ = lean_apply_3(v_k_780_, v_a_782_, v___x_786_, v___x_785_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___boxed(lean_object* v_00_u03b1_788_, lean_object* v_x_789_, lean_object* v_k_790_, lean_object* v_m_791_, lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l_Lean_IR_NormalizeIds_withJP(v_00_u03b1_788_, v_x_789_, v_k_790_, v_m_791_, v_a_792_);
lean_dec(v_m_791_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__0(lean_object* v_fst_794_, lean_object* v_x_795_){
_start:
{
lean_object* v_x_796_; uint8_t v_borrow_797_; lean_object* v_ty_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_806_; 
v_x_796_ = lean_ctor_get(v_x_795_, 0);
v_borrow_797_ = lean_ctor_get_uint8(v_x_795_, sizeof(void*)*2);
v_ty_798_ = lean_ctor_get(v_x_795_, 1);
v_isSharedCheck_806_ = !lean_is_exclusive(v_x_795_);
if (v_isSharedCheck_806_ == 0)
{
v___x_800_ = v_x_795_;
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_ty_798_);
lean_inc(v_x_796_);
lean_dec(v_x_795_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_802_ = l_Lean_IR_NormalizeIds_normIndex(v_x_796_, v_fst_794_);
lean_dec(v_x_796_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v___x_802_);
v___x_804_ = v___x_800_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_802_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_ty_798_);
lean_ctor_set_uint8(v_reuseFailAlloc_805_, sizeof(void*)*2, v_borrow_797_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__0___boxed(lean_object* v_fst_807_, lean_object* v_x_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Lean_IR_NormalizeIds_withParams___redArg___lam__0(v_fst_807_, v_x_808_);
lean_dec(v_fst_807_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__2(lean_object* v___f_810_, lean_object* v_m_811_, lean_object* v_p_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v_x_814_ = lean_ctor_get(v_p_812_, 0);
lean_inc(v_x_814_);
lean_dec_ref(v_p_812_);
v___x_815_ = lean_unsigned_to_nat(1u);
v___x_816_ = lean_nat_add(v___y_813_, v___x_815_);
v___x_817_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_810_, v_x_814_, v___y_813_, v_m_811_);
v___x_818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_818_, 0, v___x_817_);
lean_ctor_set(v___x_818_, 1, v___x_816_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg(lean_object* v_ps_866_, lean_object* v_k_867_, lean_object* v_m_868_, lean_object* v_a_869_){
_start:
{
lean_object* v___x_870_; lean_object* v_fst_872_; lean_object* v_snd_873_; lean_object* v___y_882_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; uint8_t v___x_888_; 
v___x_870_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__9));
v___x_885_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__19));
v___x_886_ = lean_unsigned_to_nat(0u);
v___x_887_ = lean_array_get_size(v_ps_866_);
v___x_888_ = lean_nat_dec_lt(v___x_886_, v___x_887_);
if (v___x_888_ == 0)
{
lean_inc(v_m_868_);
v_fst_872_ = v_m_868_;
v_snd_873_ = v_a_869_;
goto v___jp_871_;
}
else
{
lean_object* v___f_889_; uint8_t v___x_890_; 
v___f_889_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__20));
v___x_890_ = lean_nat_dec_le(v___x_887_, v___x_887_);
if (v___x_890_ == 0)
{
if (v___x_888_ == 0)
{
lean_inc(v_m_868_);
v_fst_872_ = v_m_868_;
v_snd_873_ = v_a_869_;
goto v___jp_871_;
}
else
{
size_t v___x_891_; size_t v___x_892_; lean_object* v___x_793__overap_893_; lean_object* v___x_894_; 
v___x_891_ = ((size_t)0ULL);
v___x_892_ = lean_usize_of_nat(v___x_887_);
lean_inc(v_m_868_);
lean_inc_ref(v_ps_866_);
v___x_793__overap_893_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_885_, v___f_889_, v_ps_866_, v___x_891_, v___x_892_, v_m_868_);
v___x_894_ = lean_apply_1(v___x_793__overap_893_, v_a_869_);
v___y_882_ = v___x_894_;
goto v___jp_881_;
}
}
else
{
size_t v___x_895_; size_t v___x_896_; lean_object* v___x_797__overap_897_; lean_object* v___x_898_; 
v___x_895_ = ((size_t)0ULL);
v___x_896_ = lean_usize_of_nat(v___x_887_);
lean_inc(v_m_868_);
lean_inc_ref(v_ps_866_);
v___x_797__overap_897_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_885_, v___f_889_, v_ps_866_, v___x_895_, v___x_896_, v_m_868_);
v___x_898_ = lean_apply_1(v___x_797__overap_897_, v_a_869_);
v___y_882_ = v___x_898_;
goto v___jp_881_;
}
}
v___jp_871_:
{
lean_object* v___f_874_; size_t v_sz_875_; size_t v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
lean_inc(v_fst_872_);
v___f_874_ = lean_alloc_closure((void*)(l_Lean_IR_NormalizeIds_withParams___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_874_, 0, v_fst_872_);
v_sz_875_ = lean_array_size(v_ps_866_);
v___x_876_ = ((size_t)0ULL);
v___x_877_ = l_unsafeCast___redArg(v_ps_866_);
lean_dec_ref(v_ps_866_);
v___x_878_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_870_, v___f_874_, v_sz_875_, v___x_876_, v___x_877_);
v___x_879_ = l_unsafeCast___redArg(v___x_878_);
lean_dec(v___x_878_);
v___x_880_ = lean_apply_3(v_k_867_, v___x_879_, v_fst_872_, v_snd_873_);
return v___x_880_;
}
v___jp_881_:
{
lean_object* v_fst_883_; lean_object* v_snd_884_; 
v_fst_883_ = lean_ctor_get(v___y_882_, 0);
lean_inc(v_fst_883_);
v_snd_884_ = lean_ctor_get(v___y_882_, 1);
lean_inc(v_snd_884_);
lean_dec_ref(v___y_882_);
v_fst_872_ = v_fst_883_;
v_snd_873_ = v_snd_884_;
goto v___jp_871_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___boxed(lean_object* v_ps_899_, lean_object* v_k_900_, lean_object* v_m_901_, lean_object* v_a_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_Lean_IR_NormalizeIds_withParams___redArg(v_ps_899_, v_k_900_, v_m_901_, v_a_902_);
lean_dec(v_m_901_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams(lean_object* v_00_u03b1_904_, lean_object* v_ps_905_, lean_object* v_k_906_, lean_object* v_m_907_, lean_object* v_a_908_){
_start:
{
lean_object* v___x_909_; lean_object* v_fst_911_; lean_object* v_snd_912_; lean_object* v___y_921_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; uint8_t v___x_927_; 
v___x_909_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__9));
v___x_924_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__19));
v___x_925_ = lean_unsigned_to_nat(0u);
v___x_926_ = lean_array_get_size(v_ps_905_);
v___x_927_ = lean_nat_dec_lt(v___x_925_, v___x_926_);
if (v___x_927_ == 0)
{
lean_inc(v_m_907_);
v_fst_911_ = v_m_907_;
v_snd_912_ = v_a_908_;
goto v___jp_910_;
}
else
{
lean_object* v___f_928_; uint8_t v___x_929_; 
v___f_928_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__20));
v___x_929_ = lean_nat_dec_le(v___x_926_, v___x_926_);
if (v___x_929_ == 0)
{
if (v___x_927_ == 0)
{
lean_inc(v_m_907_);
v_fst_911_ = v_m_907_;
v_snd_912_ = v_a_908_;
goto v___jp_910_;
}
else
{
size_t v___x_930_; size_t v___x_931_; lean_object* v___x_984__overap_932_; lean_object* v___x_933_; 
v___x_930_ = ((size_t)0ULL);
v___x_931_ = lean_usize_of_nat(v___x_926_);
lean_inc(v_m_907_);
lean_inc_ref(v_ps_905_);
v___x_984__overap_932_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_924_, v___f_928_, v_ps_905_, v___x_930_, v___x_931_, v_m_907_);
v___x_933_ = lean_apply_1(v___x_984__overap_932_, v_a_908_);
v___y_921_ = v___x_933_;
goto v___jp_920_;
}
}
else
{
size_t v___x_934_; size_t v___x_935_; lean_object* v___x_987__overap_936_; lean_object* v___x_937_; 
v___x_934_ = ((size_t)0ULL);
v___x_935_ = lean_usize_of_nat(v___x_926_);
lean_inc(v_m_907_);
lean_inc_ref(v_ps_905_);
v___x_987__overap_936_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_924_, v___f_928_, v_ps_905_, v___x_934_, v___x_935_, v_m_907_);
v___x_937_ = lean_apply_1(v___x_987__overap_936_, v_a_908_);
v___y_921_ = v___x_937_;
goto v___jp_920_;
}
}
v___jp_910_:
{
lean_object* v___f_913_; size_t v_sz_914_; size_t v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
lean_inc(v_fst_911_);
v___f_913_ = lean_alloc_closure((void*)(l_Lean_IR_NormalizeIds_withParams___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_913_, 0, v_fst_911_);
v_sz_914_ = lean_array_size(v_ps_905_);
v___x_915_ = ((size_t)0ULL);
v___x_916_ = l_unsafeCast___redArg(v_ps_905_);
lean_dec_ref(v_ps_905_);
v___x_917_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_909_, v___f_913_, v_sz_914_, v___x_915_, v___x_916_);
v___x_918_ = l_unsafeCast___redArg(v___x_917_);
lean_dec(v___x_917_);
v___x_919_ = lean_apply_3(v_k_906_, v___x_918_, v_fst_911_, v_snd_912_);
return v___x_919_;
}
v___jp_920_:
{
lean_object* v_fst_922_; lean_object* v_snd_923_; 
v_fst_922_ = lean_ctor_get(v___y_921_, 0);
lean_inc(v_fst_922_);
v_snd_923_ = lean_ctor_get(v___y_921_, 1);
lean_inc(v_snd_923_);
lean_dec_ref(v___y_921_);
v_fst_911_ = v_fst_922_;
v_snd_912_ = v_snd_923_;
goto v___jp_910_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___boxed(lean_object* v_00_u03b1_938_, lean_object* v_ps_939_, lean_object* v_k_940_, lean_object* v_m_941_, lean_object* v_a_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Lean_IR_NormalizeIds_withParams(v_00_u03b1_938_, v_ps_939_, v_k_940_, v_m_941_, v_a_942_);
lean_dec(v_m_941_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_instMonadLiftMN___lam__0(lean_object* v_00_u03b1_944_, lean_object* v_x_945_, lean_object* v_m_946_, lean_object* v___y_947_){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_948_ = lean_apply_1(v_x_945_, v_m_946_);
v___x_949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
lean_ctor_set(v___x_949_, 1, v___y_947_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0(lean_object* v_fst_952_, size_t v_sz_953_, size_t v_i_954_, lean_object* v_bs_955_){
_start:
{
uint8_t v___x_956_; 
v___x_956_ = lean_usize_dec_lt(v_i_954_, v_sz_953_);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; 
v___x_957_ = l_unsafeCast___redArg(v_bs_955_);
lean_dec_ref(v_bs_955_);
return v___x_957_;
}
else
{
lean_object* v_v_958_; lean_object* v___x_959_; lean_object* v_x_960_; uint8_t v_borrow_961_; lean_object* v_ty_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_977_; 
v_v_958_ = lean_array_uget_borrowed(v_bs_955_, v_i_954_);
v___x_959_ = l_unsafeCast___redArg(v_v_958_);
v_x_960_ = lean_ctor_get(v___x_959_, 0);
v_borrow_961_ = lean_ctor_get_uint8(v___x_959_, sizeof(void*)*2);
v_ty_962_ = lean_ctor_get(v___x_959_, 1);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_977_ == 0)
{
v___x_964_ = v___x_959_;
v_isShared_965_ = v_isSharedCheck_977_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_ty_962_);
lean_inc(v_x_960_);
lean_dec(v___x_959_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_977_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_966_; lean_object* v_bs_x27_967_; lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_966_ = lean_unsigned_to_nat(0u);
v_bs_x27_967_ = lean_array_uset(v_bs_955_, v_i_954_, v___x_966_);
v___x_968_ = l_Lean_IR_NormalizeIds_normIndex(v_x_960_, v_fst_952_);
lean_dec(v_x_960_);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 0, v___x_968_);
v___x_970_ = v___x_964_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_968_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v_ty_962_);
lean_ctor_set_uint8(v_reuseFailAlloc_976_, sizeof(void*)*2, v_borrow_961_);
v___x_970_ = v_reuseFailAlloc_976_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
size_t v___x_971_; size_t v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_971_ = ((size_t)1ULL);
v___x_972_ = lean_usize_add(v_i_954_, v___x_971_);
v___x_973_ = l_unsafeCast___redArg(v___x_970_);
lean_dec_ref(v___x_970_);
v___x_974_ = lean_array_uset(v_bs_x27_967_, v_i_954_, v___x_973_);
v_i_954_ = v___x_972_;
v_bs_955_ = v___x_974_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0___boxed(lean_object* v_fst_978_, lean_object* v_sz_979_, lean_object* v_i_980_, lean_object* v_bs_981_){
_start:
{
size_t v_sz_boxed_982_; size_t v_i_boxed_983_; lean_object* v_res_984_; 
v_sz_boxed_982_ = lean_unbox_usize(v_sz_979_);
lean_dec(v_sz_979_);
v_i_boxed_983_ = lean_unbox_usize(v_i_980_);
lean_dec(v_i_980_);
v_res_984_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0(v_fst_978_, v_sz_boxed_982_, v_i_boxed_983_, v_bs_981_);
lean_dec(v_fst_978_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1(lean_object* v_as_985_, size_t v_i_986_, size_t v_stop_987_, lean_object* v_b_988_, lean_object* v___y_989_){
_start:
{
uint8_t v___x_990_; 
v___x_990_ = lean_usize_dec_eq(v_i_986_, v_stop_987_);
if (v___x_990_ == 0)
{
lean_object* v___x_991_; lean_object* v_x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; size_t v___x_996_; size_t v___x_997_; 
v___x_991_ = lean_array_uget_borrowed(v_as_985_, v_i_986_);
v_x_992_ = lean_ctor_get(v___x_991_, 0);
v___x_993_ = lean_unsigned_to_nat(1u);
v___x_994_ = lean_nat_add(v___y_989_, v___x_993_);
lean_inc(v_x_992_);
v___x_995_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_x_992_, v___y_989_, v_b_988_);
v___x_996_ = ((size_t)1ULL);
v___x_997_ = lean_usize_add(v_i_986_, v___x_996_);
v_i_986_ = v___x_997_;
v_b_988_ = v___x_995_;
v___y_989_ = v___x_994_;
goto _start;
}
else
{
lean_object* v___x_999_; 
v___x_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_999_, 0, v_b_988_);
lean_ctor_set(v___x_999_, 1, v___y_989_);
return v___x_999_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1___boxed(lean_object* v_as_1000_, lean_object* v_i_1001_, lean_object* v_stop_1002_, lean_object* v_b_1003_, lean_object* v___y_1004_){
_start:
{
size_t v_i_boxed_1005_; size_t v_stop_boxed_1006_; lean_object* v_res_1007_; 
v_i_boxed_1005_ = lean_unbox_usize(v_i_1001_);
lean_dec(v_i_1001_);
v_stop_boxed_1006_ = lean_unbox_usize(v_stop_1002_);
lean_dec(v_stop_1002_);
v_res_1007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1(v_as_1000_, v_i_boxed_1005_, v_stop_boxed_1006_, v_b_1003_, v___y_1004_);
lean_dec_ref(v_as_1000_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2___boxed(lean_object* v_sz_1010_, lean_object* v_i_1011_, lean_object* v_bs_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
size_t v_sz_boxed_1015_; size_t v_i_boxed_1016_; lean_object* v_res_1017_; 
v_sz_boxed_1015_ = lean_unbox_usize(v_sz_1010_);
lean_dec(v_sz_1010_);
v_i_boxed_1016_ = lean_unbox_usize(v_i_1011_);
lean_dec(v_i_1011_);
v_res_1017_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2(v_sz_boxed_1015_, v_i_boxed_1016_, v_bs_1012_, v___y_1013_, v___y_1014_);
lean_dec(v___y_1013_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normFnBody(lean_object* v_x_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_){
_start:
{
switch(lean_obj_tag(v_x_1018_))
{
case 0:
{
lean_object* v_x_1021_; lean_object* v_ty_1022_; lean_object* v_e_1023_; lean_object* v_b_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1045_; 
v_x_1021_ = lean_ctor_get(v_x_1018_, 0);
v_ty_1022_ = lean_ctor_get(v_x_1018_, 1);
v_e_1023_ = lean_ctor_get(v_x_1018_, 2);
v_b_1024_ = lean_ctor_get(v_x_1018_, 3);
v_isSharedCheck_1045_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1026_ = v_x_1018_;
v_isShared_1027_ = v_isSharedCheck_1045_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_b_1024_);
lean_inc(v_e_1023_);
lean_inc(v_ty_1022_);
lean_inc(v_x_1021_);
lean_dec(v_x_1018_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1045_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v_fst_1032_; lean_object* v_snd_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1044_; 
v___x_1028_ = lean_unsigned_to_nat(1u);
v___x_1029_ = lean_nat_add(v_a_1020_, v___x_1028_);
lean_inc(v_a_1019_);
lean_inc(v_a_1020_);
v___x_1030_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_x_1021_, v_a_1020_, v_a_1019_);
v___x_1031_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1024_, v___x_1030_, v___x_1029_);
lean_dec(v___x_1030_);
v_fst_1032_ = lean_ctor_get(v___x_1031_, 0);
v_snd_1033_ = lean_ctor_get(v___x_1031_, 1);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1035_ = v___x_1031_;
v_isShared_1036_ = v_isSharedCheck_1044_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_snd_1033_);
lean_inc(v_fst_1032_);
lean_dec(v___x_1031_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1044_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v___x_1039_; 
v___x_1037_ = l_Lean_IR_NormalizeIds_normExpr(v_e_1023_, v_a_1019_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 3, v_fst_1032_);
lean_ctor_set(v___x_1026_, 2, v___x_1037_);
lean_ctor_set(v___x_1026_, 0, v_a_1020_);
v___x_1039_ = v___x_1026_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1020_);
lean_ctor_set(v_reuseFailAlloc_1043_, 1, v_ty_1022_);
lean_ctor_set(v_reuseFailAlloc_1043_, 2, v___x_1037_);
lean_ctor_set(v_reuseFailAlloc_1043_, 3, v_fst_1032_);
v___x_1039_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1041_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 0, v___x_1039_);
v___x_1041_ = v___x_1035_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_1039_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v_snd_1033_);
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
case 1:
{
lean_object* v_j_1046_; lean_object* v_xs_1047_; lean_object* v_v_1048_; lean_object* v_b_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1088_; 
v_j_1046_ = lean_ctor_get(v_x_1018_, 0);
v_xs_1047_ = lean_ctor_get(v_x_1018_, 1);
v_v_1048_ = lean_ctor_get(v_x_1018_, 2);
v_b_1049_ = lean_ctor_get(v_x_1018_, 3);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1051_ = v_x_1018_;
v_isShared_1052_ = v_isSharedCheck_1088_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_b_1049_);
lean_inc(v_v_1048_);
lean_inc(v_xs_1047_);
lean_inc(v_j_1046_);
lean_dec(v_x_1018_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1088_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v_fst_1054_; lean_object* v_snd_1055_; lean_object* v___x_1080_; lean_object* v___x_1081_; uint8_t v___x_1082_; 
v___x_1080_ = lean_unsigned_to_nat(0u);
v___x_1081_ = lean_array_get_size(v_xs_1047_);
v___x_1082_ = lean_nat_dec_lt(v___x_1080_, v___x_1081_);
if (v___x_1082_ == 0)
{
lean_inc(v_a_1019_);
v_fst_1054_ = v_a_1019_;
v_snd_1055_ = v_a_1020_;
goto v___jp_1053_;
}
else
{
size_t v___x_1083_; size_t v___x_1084_; lean_object* v___x_1085_; lean_object* v_fst_1086_; lean_object* v_snd_1087_; 
v___x_1083_ = ((size_t)0ULL);
v___x_1084_ = lean_usize_of_nat(v___x_1081_);
lean_inc(v_a_1019_);
v___x_1085_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1(v_xs_1047_, v___x_1083_, v___x_1084_, v_a_1019_, v_a_1020_);
v_fst_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_fst_1086_);
v_snd_1087_ = lean_ctor_get(v___x_1085_, 1);
lean_inc(v_snd_1087_);
lean_dec_ref(v___x_1085_);
v_fst_1054_ = v_fst_1086_;
v_snd_1055_ = v_snd_1087_;
goto v___jp_1053_;
}
v___jp_1053_:
{
lean_object* v___x_1056_; lean_object* v_fst_1057_; lean_object* v_snd_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v_fst_1063_; lean_object* v_snd_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1079_; 
v___x_1056_ = l_Lean_IR_NormalizeIds_normFnBody(v_v_1048_, v_fst_1054_, v_snd_1055_);
v_fst_1057_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_fst_1057_);
v_snd_1058_ = lean_ctor_get(v___x_1056_, 1);
lean_inc_n(v_snd_1058_, 2);
lean_dec_ref(v___x_1056_);
v___x_1059_ = lean_unsigned_to_nat(1u);
v___x_1060_ = lean_nat_add(v_snd_1058_, v___x_1059_);
lean_inc(v_a_1019_);
v___x_1061_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_j_1046_, v_snd_1058_, v_a_1019_);
v___x_1062_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1049_, v___x_1061_, v___x_1060_);
lean_dec(v___x_1061_);
v_fst_1063_ = lean_ctor_get(v___x_1062_, 0);
v_snd_1064_ = lean_ctor_get(v___x_1062_, 1);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1066_ = v___x_1062_;
v_isShared_1067_ = v_isSharedCheck_1079_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_snd_1064_);
lean_inc(v_fst_1063_);
lean_dec(v___x_1062_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1079_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
size_t v_sz_1068_; size_t v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1074_; 
v_sz_1068_ = lean_array_size(v_xs_1047_);
v___x_1069_ = ((size_t)0ULL);
v___x_1070_ = l_unsafeCast___redArg(v_xs_1047_);
lean_dec_ref(v_xs_1047_);
v___x_1071_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0(v_fst_1054_, v_sz_1068_, v___x_1069_, v___x_1070_);
lean_dec(v_fst_1054_);
v___x_1072_ = l_unsafeCast___redArg(v___x_1071_);
lean_dec_ref(v___x_1071_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 3, v_fst_1063_);
lean_ctor_set(v___x_1051_, 2, v_fst_1057_);
lean_ctor_set(v___x_1051_, 1, v___x_1072_);
lean_ctor_set(v___x_1051_, 0, v_snd_1058_);
v___x_1074_ = v___x_1051_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_snd_1058_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___x_1072_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v_fst_1057_);
lean_ctor_set(v_reuseFailAlloc_1078_, 3, v_fst_1063_);
v___x_1074_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
lean_object* v___x_1076_; 
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 0, v___x_1074_);
v___x_1076_ = v___x_1066_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1074_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v_snd_1064_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
}
case 2:
{
lean_object* v_x_1089_; lean_object* v_i_1090_; lean_object* v_y_1091_; lean_object* v_b_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1111_; 
v_x_1089_ = lean_ctor_get(v_x_1018_, 0);
v_i_1090_ = lean_ctor_get(v_x_1018_, 1);
v_y_1091_ = lean_ctor_get(v_x_1018_, 2);
v_b_1092_ = lean_ctor_get(v_x_1018_, 3);
v_isSharedCheck_1111_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1094_ = v_x_1018_;
v_isShared_1095_ = v_isSharedCheck_1111_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_b_1092_);
lean_inc(v_y_1091_);
lean_inc(v_i_1090_);
lean_inc(v_x_1089_);
lean_dec(v_x_1018_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1111_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v_fst_1099_; lean_object* v_snd_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1110_; 
v___x_1096_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1089_, v_a_1019_);
lean_dec(v_x_1089_);
v___x_1097_ = l_Lean_IR_NormalizeIds_normArg(v_y_1091_, v_a_1019_);
v___x_1098_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1092_, v_a_1019_, v_a_1020_);
v_fst_1099_ = lean_ctor_get(v___x_1098_, 0);
v_snd_1100_ = lean_ctor_get(v___x_1098_, 1);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1102_ = v___x_1098_;
v_isShared_1103_ = v_isSharedCheck_1110_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_snd_1100_);
lean_inc(v_fst_1099_);
lean_dec(v___x_1098_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1110_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 3, v_fst_1099_);
lean_ctor_set(v___x_1094_, 2, v___x_1097_);
lean_ctor_set(v___x_1094_, 0, v___x_1096_);
v___x_1105_ = v___x_1094_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1109_, 1, v_i_1090_);
lean_ctor_set(v_reuseFailAlloc_1109_, 2, v___x_1097_);
lean_ctor_set(v_reuseFailAlloc_1109_, 3, v_fst_1099_);
v___x_1105_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
lean_object* v___x_1107_; 
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 0, v___x_1105_);
v___x_1107_ = v___x_1102_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v___x_1105_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v_snd_1100_);
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
}
case 3:
{
lean_object* v_x_1112_; lean_object* v_cidx_1113_; lean_object* v_b_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1132_; 
v_x_1112_ = lean_ctor_get(v_x_1018_, 0);
v_cidx_1113_ = lean_ctor_get(v_x_1018_, 1);
v_b_1114_ = lean_ctor_get(v_x_1018_, 2);
v_isSharedCheck_1132_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1116_ = v_x_1018_;
v_isShared_1117_ = v_isSharedCheck_1132_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_b_1114_);
lean_inc(v_cidx_1113_);
lean_inc(v_x_1112_);
lean_dec(v_x_1018_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1132_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v_fst_1120_; lean_object* v_snd_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1131_; 
v___x_1118_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1112_, v_a_1019_);
lean_dec(v_x_1112_);
v___x_1119_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1114_, v_a_1019_, v_a_1020_);
v_fst_1120_ = lean_ctor_get(v___x_1119_, 0);
v_snd_1121_ = lean_ctor_get(v___x_1119_, 1);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1123_ = v___x_1119_;
v_isShared_1124_ = v_isSharedCheck_1131_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_snd_1121_);
lean_inc(v_fst_1120_);
lean_dec(v___x_1119_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1131_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1117_ == 0)
{
lean_ctor_set(v___x_1116_, 2, v_fst_1120_);
lean_ctor_set(v___x_1116_, 0, v___x_1118_);
v___x_1126_ = v___x_1116_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v___x_1118_);
lean_ctor_set(v_reuseFailAlloc_1130_, 1, v_cidx_1113_);
lean_ctor_set(v_reuseFailAlloc_1130_, 2, v_fst_1120_);
v___x_1126_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
lean_object* v___x_1128_; 
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 0, v___x_1126_);
v___x_1128_ = v___x_1123_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v___x_1126_);
lean_ctor_set(v_reuseFailAlloc_1129_, 1, v_snd_1121_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
}
case 4:
{
lean_object* v_x_1133_; lean_object* v_i_1134_; lean_object* v_y_1135_; lean_object* v_b_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1155_; 
v_x_1133_ = lean_ctor_get(v_x_1018_, 0);
v_i_1134_ = lean_ctor_get(v_x_1018_, 1);
v_y_1135_ = lean_ctor_get(v_x_1018_, 2);
v_b_1136_ = lean_ctor_get(v_x_1018_, 3);
v_isSharedCheck_1155_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1138_ = v_x_1018_;
v_isShared_1139_ = v_isSharedCheck_1155_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_b_1136_);
lean_inc(v_y_1135_);
lean_inc(v_i_1134_);
lean_inc(v_x_1133_);
lean_dec(v_x_1018_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1155_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v_fst_1143_; lean_object* v_snd_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1154_; 
v___x_1140_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1133_, v_a_1019_);
lean_dec(v_x_1133_);
v___x_1141_ = l_Lean_IR_NormalizeIds_normIndex(v_y_1135_, v_a_1019_);
lean_dec(v_y_1135_);
v___x_1142_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1136_, v_a_1019_, v_a_1020_);
v_fst_1143_ = lean_ctor_get(v___x_1142_, 0);
v_snd_1144_ = lean_ctor_get(v___x_1142_, 1);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1146_ = v___x_1142_;
v_isShared_1147_ = v_isSharedCheck_1154_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_snd_1144_);
lean_inc(v_fst_1143_);
lean_dec(v___x_1142_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1154_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; 
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 3, v_fst_1143_);
lean_ctor_set(v___x_1138_, 2, v___x_1141_);
lean_ctor_set(v___x_1138_, 0, v___x_1140_);
v___x_1149_ = v___x_1138_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1140_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_i_1134_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v___x_1141_);
lean_ctor_set(v_reuseFailAlloc_1153_, 3, v_fst_1143_);
v___x_1149_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
lean_object* v___x_1151_; 
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1149_);
v___x_1151_ = v___x_1146_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v___x_1149_);
lean_ctor_set(v_reuseFailAlloc_1152_, 1, v_snd_1144_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
}
case 5:
{
lean_object* v_x_1156_; lean_object* v_i_1157_; lean_object* v_offset_1158_; lean_object* v_y_1159_; lean_object* v_ty_1160_; lean_object* v_b_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1180_; 
v_x_1156_ = lean_ctor_get(v_x_1018_, 0);
v_i_1157_ = lean_ctor_get(v_x_1018_, 1);
v_offset_1158_ = lean_ctor_get(v_x_1018_, 2);
v_y_1159_ = lean_ctor_get(v_x_1018_, 3);
v_ty_1160_ = lean_ctor_get(v_x_1018_, 4);
v_b_1161_ = lean_ctor_get(v_x_1018_, 5);
v_isSharedCheck_1180_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1163_ = v_x_1018_;
v_isShared_1164_ = v_isSharedCheck_1180_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_b_1161_);
lean_inc(v_ty_1160_);
lean_inc(v_y_1159_);
lean_inc(v_offset_1158_);
lean_inc(v_i_1157_);
lean_inc(v_x_1156_);
lean_dec(v_x_1018_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1180_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v_fst_1168_; lean_object* v_snd_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1179_; 
v___x_1165_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1156_, v_a_1019_);
lean_dec(v_x_1156_);
v___x_1166_ = l_Lean_IR_NormalizeIds_normIndex(v_y_1159_, v_a_1019_);
lean_dec(v_y_1159_);
v___x_1167_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1161_, v_a_1019_, v_a_1020_);
v_fst_1168_ = lean_ctor_get(v___x_1167_, 0);
v_snd_1169_ = lean_ctor_get(v___x_1167_, 1);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1171_ = v___x_1167_;
v_isShared_1172_ = v_isSharedCheck_1179_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_snd_1169_);
lean_inc(v_fst_1168_);
lean_dec(v___x_1167_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1179_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 5, v_fst_1168_);
lean_ctor_set(v___x_1163_, 3, v___x_1166_);
lean_ctor_set(v___x_1163_, 0, v___x_1165_);
v___x_1174_ = v___x_1163_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(5, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v___x_1165_);
lean_ctor_set(v_reuseFailAlloc_1178_, 1, v_i_1157_);
lean_ctor_set(v_reuseFailAlloc_1178_, 2, v_offset_1158_);
lean_ctor_set(v_reuseFailAlloc_1178_, 3, v___x_1166_);
lean_ctor_set(v_reuseFailAlloc_1178_, 4, v_ty_1160_);
lean_ctor_set(v_reuseFailAlloc_1178_, 5, v_fst_1168_);
v___x_1174_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
lean_object* v___x_1176_; 
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 0, v___x_1174_);
v___x_1176_ = v___x_1171_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1174_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v_snd_1169_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
}
}
case 6:
{
lean_object* v_x_1181_; lean_object* v_n_1182_; uint8_t v_c_1183_; uint8_t v_persistent_1184_; lean_object* v_b_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1203_; 
v_x_1181_ = lean_ctor_get(v_x_1018_, 0);
v_n_1182_ = lean_ctor_get(v_x_1018_, 1);
v_c_1183_ = lean_ctor_get_uint8(v_x_1018_, sizeof(void*)*3);
v_persistent_1184_ = lean_ctor_get_uint8(v_x_1018_, sizeof(void*)*3 + 1);
v_b_1185_ = lean_ctor_get(v_x_1018_, 2);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1187_ = v_x_1018_;
v_isShared_1188_ = v_isSharedCheck_1203_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_b_1185_);
lean_inc(v_n_1182_);
lean_inc(v_x_1181_);
lean_dec(v_x_1018_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1203_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v_fst_1191_; lean_object* v_snd_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1202_; 
v___x_1189_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1181_, v_a_1019_);
lean_dec(v_x_1181_);
v___x_1190_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1185_, v_a_1019_, v_a_1020_);
v_fst_1191_ = lean_ctor_get(v___x_1190_, 0);
v_snd_1192_ = lean_ctor_get(v___x_1190_, 1);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1194_ = v___x_1190_;
v_isShared_1195_ = v_isSharedCheck_1202_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_snd_1192_);
lean_inc(v_fst_1191_);
lean_dec(v___x_1190_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1202_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 2, v_fst_1191_);
lean_ctor_set(v___x_1187_, 0, v___x_1189_);
v___x_1197_ = v___x_1187_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(6, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1189_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v_n_1182_);
lean_ctor_set(v_reuseFailAlloc_1201_, 2, v_fst_1191_);
lean_ctor_set_uint8(v_reuseFailAlloc_1201_, sizeof(void*)*3, v_c_1183_);
lean_ctor_set_uint8(v_reuseFailAlloc_1201_, sizeof(void*)*3 + 1, v_persistent_1184_);
v___x_1197_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
lean_object* v___x_1199_; 
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 0, v___x_1197_);
v___x_1199_ = v___x_1194_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v___x_1197_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v_snd_1192_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
}
case 7:
{
lean_object* v_x_1204_; lean_object* v_n_1205_; uint8_t v_c_1206_; uint8_t v_persistent_1207_; lean_object* v_b_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1226_; 
v_x_1204_ = lean_ctor_get(v_x_1018_, 0);
v_n_1205_ = lean_ctor_get(v_x_1018_, 1);
v_c_1206_ = lean_ctor_get_uint8(v_x_1018_, sizeof(void*)*3);
v_persistent_1207_ = lean_ctor_get_uint8(v_x_1018_, sizeof(void*)*3 + 1);
v_b_1208_ = lean_ctor_get(v_x_1018_, 2);
v_isSharedCheck_1226_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1210_ = v_x_1018_;
v_isShared_1211_ = v_isSharedCheck_1226_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_b_1208_);
lean_inc(v_n_1205_);
lean_inc(v_x_1204_);
lean_dec(v_x_1018_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1226_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v_fst_1214_; lean_object* v_snd_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1225_; 
v___x_1212_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1204_, v_a_1019_);
lean_dec(v_x_1204_);
v___x_1213_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1208_, v_a_1019_, v_a_1020_);
v_fst_1214_ = lean_ctor_get(v___x_1213_, 0);
v_snd_1215_ = lean_ctor_get(v___x_1213_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1217_ = v___x_1213_;
v_isShared_1218_ = v_isSharedCheck_1225_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_snd_1215_);
lean_inc(v_fst_1214_);
lean_dec(v___x_1213_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1225_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 2, v_fst_1214_);
lean_ctor_set(v___x_1210_, 0, v___x_1212_);
v___x_1220_ = v___x_1210_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(7, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1212_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_n_1205_);
lean_ctor_set(v_reuseFailAlloc_1224_, 2, v_fst_1214_);
lean_ctor_set_uint8(v_reuseFailAlloc_1224_, sizeof(void*)*3, v_c_1206_);
lean_ctor_set_uint8(v_reuseFailAlloc_1224_, sizeof(void*)*3 + 1, v_persistent_1207_);
v___x_1220_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
lean_object* v___x_1222_; 
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 0, v___x_1220_);
v___x_1222_ = v___x_1217_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v___x_1220_);
lean_ctor_set(v_reuseFailAlloc_1223_, 1, v_snd_1215_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
case 8:
{
lean_object* v_x_1227_; lean_object* v_b_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1246_; 
v_x_1227_ = lean_ctor_get(v_x_1018_, 0);
v_b_1228_ = lean_ctor_get(v_x_1018_, 1);
v_isSharedCheck_1246_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1230_ = v_x_1018_;
v_isShared_1231_ = v_isSharedCheck_1246_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_b_1228_);
lean_inc(v_x_1227_);
lean_dec(v_x_1018_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1246_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v_fst_1234_; lean_object* v_snd_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1245_; 
v___x_1232_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1227_, v_a_1019_);
lean_dec(v_x_1227_);
v___x_1233_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1228_, v_a_1019_, v_a_1020_);
v_fst_1234_ = lean_ctor_get(v___x_1233_, 0);
v_snd_1235_ = lean_ctor_get(v___x_1233_, 1);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1237_ = v___x_1233_;
v_isShared_1238_ = v_isSharedCheck_1245_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_snd_1235_);
lean_inc(v_fst_1234_);
lean_dec(v___x_1233_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1245_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1240_; 
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 1, v_fst_1234_);
lean_ctor_set(v___x_1230_, 0, v___x_1232_);
v___x_1240_ = v___x_1230_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v___x_1232_);
lean_ctor_set(v_reuseFailAlloc_1244_, 1, v_fst_1234_);
v___x_1240_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
lean_object* v___x_1242_; 
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 0, v___x_1240_);
v___x_1242_ = v___x_1237_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v_snd_1235_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
}
}
case 9:
{
lean_object* v_tid_1247_; lean_object* v_x_1248_; lean_object* v_xType_1249_; lean_object* v_cs_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1274_; 
v_tid_1247_ = lean_ctor_get(v_x_1018_, 0);
v_x_1248_ = lean_ctor_get(v_x_1018_, 1);
v_xType_1249_ = lean_ctor_get(v_x_1018_, 2);
v_cs_1250_ = lean_ctor_get(v_x_1018_, 3);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1252_ = v_x_1018_;
v_isShared_1253_ = v_isSharedCheck_1274_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_cs_1250_);
lean_inc(v_xType_1249_);
lean_inc(v_x_1248_);
lean_inc(v_tid_1247_);
lean_dec(v_x_1018_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1274_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; size_t v_sz_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_11627__overap_1260_; lean_object* v___x_1261_; lean_object* v_fst_1262_; lean_object* v_snd_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1273_; 
v___x_1254_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1248_, v_a_1019_);
lean_dec(v_x_1248_);
v_sz_1255_ = lean_array_size(v_cs_1250_);
v___x_1256_ = l_unsafeCast___redArg(v_cs_1250_);
lean_dec_ref(v_cs_1250_);
v___x_1257_ = lean_box_usize(v_sz_1255_);
v___x_1258_ = ((lean_object*)(l_Lean_IR_NormalizeIds_normFnBody___boxed__const__1));
v___x_1259_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2___boxed), 5, 3);
lean_closure_set(v___x_1259_, 0, v___x_1257_);
lean_closure_set(v___x_1259_, 1, v___x_1258_);
lean_closure_set(v___x_1259_, 2, v___x_1256_);
v___x_11627__overap_1260_ = l_unsafeCast___redArg(v___x_1259_);
lean_dec_ref(v___x_1259_);
lean_inc(v_a_1019_);
v___x_1261_ = lean_apply_2(v___x_11627__overap_1260_, v_a_1019_, v_a_1020_);
v_fst_1262_ = lean_ctor_get(v___x_1261_, 0);
v_snd_1263_ = lean_ctor_get(v___x_1261_, 1);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1265_ = v___x_1261_;
v_isShared_1266_ = v_isSharedCheck_1273_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_snd_1263_);
lean_inc(v_fst_1262_);
lean_dec(v___x_1261_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1273_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 3, v_fst_1262_);
lean_ctor_set(v___x_1252_, 1, v___x_1254_);
v___x_1268_ = v___x_1252_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(9, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_tid_1247_);
lean_ctor_set(v_reuseFailAlloc_1272_, 1, v___x_1254_);
lean_ctor_set(v_reuseFailAlloc_1272_, 2, v_xType_1249_);
lean_ctor_set(v_reuseFailAlloc_1272_, 3, v_fst_1262_);
v___x_1268_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
lean_object* v___x_1270_; 
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 0, v___x_1268_);
v___x_1270_ = v___x_1265_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1268_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v_snd_1263_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
}
case 10:
{
lean_object* v_x_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1284_; 
v_x_1275_ = lean_ctor_get(v_x_1018_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1277_ = v_x_1018_;
v_isShared_1278_ = v_isSharedCheck_1284_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_x_1275_);
lean_dec(v_x_1018_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1284_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1279_; lean_object* v___x_1281_; 
v___x_1279_ = l_Lean_IR_NormalizeIds_normArg(v_x_1275_, v_a_1019_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 0, v___x_1279_);
v___x_1281_ = v___x_1277_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1279_);
v___x_1281_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
lean_object* v___x_1282_; 
v___x_1282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
lean_ctor_set(v___x_1282_, 1, v_a_1020_);
return v___x_1282_;
}
}
}
case 11:
{
lean_object* v_j_1285_; lean_object* v_ys_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1296_; 
v_j_1285_ = lean_ctor_get(v_x_1018_, 0);
v_ys_1286_ = lean_ctor_get(v_x_1018_, 1);
v_isSharedCheck_1296_ = !lean_is_exclusive(v_x_1018_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1288_ = v_x_1018_;
v_isShared_1289_ = v_isSharedCheck_1296_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_ys_1286_);
lean_inc(v_j_1285_);
lean_dec(v_x_1018_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1296_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
v___x_1290_ = l_Lean_IR_NormalizeIds_normIndex(v_j_1285_, v_a_1019_);
lean_dec(v_j_1285_);
v___x_1291_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_1286_, v_a_1019_);
lean_dec_ref(v_ys_1286_);
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 1, v___x_1291_);
lean_ctor_set(v___x_1288_, 0, v___x_1290_);
v___x_1293_ = v___x_1288_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1295_, 1, v___x_1291_);
v___x_1293_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
lean_object* v___x_1294_; 
v___x_1294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
lean_ctor_set(v___x_1294_, 1, v_a_1020_);
return v___x_1294_;
}
}
}
default: 
{
lean_object* v___x_1297_; 
v___x_1297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1297_, 0, v_x_1018_);
lean_ctor_set(v___x_1297_, 1, v_a_1020_);
return v___x_1297_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2(size_t v_sz_1298_, size_t v_i_1299_, lean_object* v_bs_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
uint8_t v___x_1303_; 
v___x_1303_ = lean_usize_dec_lt(v_i_1299_, v_sz_1298_);
if (v___x_1303_ == 0)
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = l_unsafeCast___redArg(v_bs_1300_);
lean_dec_ref(v_bs_1300_);
v___x_1305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
lean_ctor_set(v___x_1305_, 1, v___y_1302_);
return v___x_1305_;
}
else
{
lean_object* v_v_1306_; lean_object* v___x_1307_; lean_object* v_bs_x27_1308_; lean_object* v_fst_1310_; lean_object* v_snd_1311_; lean_object* v___x_1317_; 
v_v_1306_ = lean_array_uget(v_bs_1300_, v_i_1299_);
v___x_1307_ = lean_unsigned_to_nat(0u);
v_bs_x27_1308_ = lean_array_uset(v_bs_1300_, v_i_1299_, v___x_1307_);
v___x_1317_ = l_unsafeCast___redArg(v_v_1306_);
lean_dec(v_v_1306_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_info_1318_; lean_object* v_b_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1329_; 
v_info_1318_ = lean_ctor_get(v___x_1317_, 0);
v_b_1319_ = lean_ctor_get(v___x_1317_, 1);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1321_ = v___x_1317_;
v_isShared_1322_ = v_isSharedCheck_1329_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_b_1319_);
lean_inc(v_info_1318_);
lean_dec(v___x_1317_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1329_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1323_; lean_object* v_fst_1324_; lean_object* v_snd_1325_; lean_object* v___x_1327_; 
v___x_1323_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1319_, v___y_1301_, v___y_1302_);
v_fst_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_fst_1324_);
v_snd_1325_ = lean_ctor_get(v___x_1323_, 1);
lean_inc(v_snd_1325_);
lean_dec_ref(v___x_1323_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 1, v_fst_1324_);
v___x_1327_ = v___x_1321_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_info_1318_);
lean_ctor_set(v_reuseFailAlloc_1328_, 1, v_fst_1324_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
v_fst_1310_ = v___x_1327_;
v_snd_1311_ = v_snd_1325_;
goto v___jp_1309_;
}
}
}
else
{
lean_object* v_b_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1340_; 
v_b_1330_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1332_ = v___x_1317_;
v_isShared_1333_ = v_isSharedCheck_1340_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_b_1330_);
lean_dec(v___x_1317_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1340_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1334_; lean_object* v_fst_1335_; lean_object* v_snd_1336_; lean_object* v___x_1338_; 
v___x_1334_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1330_, v___y_1301_, v___y_1302_);
v_fst_1335_ = lean_ctor_get(v___x_1334_, 0);
lean_inc(v_fst_1335_);
v_snd_1336_ = lean_ctor_get(v___x_1334_, 1);
lean_inc(v_snd_1336_);
lean_dec_ref(v___x_1334_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 0, v_fst_1335_);
v___x_1338_ = v___x_1332_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_fst_1335_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
v_fst_1310_ = v___x_1338_;
v_snd_1311_ = v_snd_1336_;
goto v___jp_1309_;
}
}
}
v___jp_1309_:
{
size_t v___x_1312_; size_t v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1312_ = ((size_t)1ULL);
v___x_1313_ = lean_usize_add(v_i_1299_, v___x_1312_);
v___x_1314_ = l_unsafeCast___redArg(v_fst_1310_);
lean_dec_ref(v_fst_1310_);
v___x_1315_ = lean_array_uset(v_bs_x27_1308_, v_i_1299_, v___x_1314_);
v_i_1299_ = v___x_1313_;
v_bs_1300_ = v___x_1315_;
v___y_1302_ = v_snd_1311_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normFnBody___boxed(lean_object* v_x_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Lean_IR_NormalizeIds_normFnBody(v_x_1341_, v_a_1342_, v_a_1343_);
lean_dec(v_a_1342_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normDecl(lean_object* v_d_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_){
_start:
{
if (lean_obj_tag(v_d_1345_) == 0)
{
lean_object* v_xs_1348_; lean_object* v_body_1349_; lean_object* v_fst_1351_; lean_object* v_snd_1352_; lean_object* v___x_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; 
v_xs_1348_ = lean_ctor_get(v_d_1345_, 1);
v_body_1349_ = lean_ctor_get(v_d_1345_, 3);
v___x_1364_ = lean_unsigned_to_nat(0u);
v___x_1365_ = lean_array_get_size(v_xs_1348_);
v___x_1366_ = lean_nat_dec_lt(v___x_1364_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_inc(v_a_1346_);
v_fst_1351_ = v_a_1346_;
v_snd_1352_ = v_a_1347_;
goto v___jp_1350_;
}
else
{
size_t v___x_1367_; size_t v___x_1368_; lean_object* v___x_1369_; lean_object* v_fst_1370_; lean_object* v_snd_1371_; 
v___x_1367_ = ((size_t)0ULL);
v___x_1368_ = lean_usize_of_nat(v___x_1365_);
lean_inc(v_a_1346_);
v___x_1369_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1(v_xs_1348_, v___x_1367_, v___x_1368_, v_a_1346_, v_a_1347_);
v_fst_1370_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_fst_1370_);
v_snd_1371_ = lean_ctor_get(v___x_1369_, 1);
lean_inc(v_snd_1371_);
lean_dec_ref(v___x_1369_);
v_fst_1351_ = v_fst_1370_;
v_snd_1352_ = v_snd_1371_;
goto v___jp_1350_;
}
v___jp_1350_:
{
lean_object* v___x_1353_; lean_object* v_fst_1354_; lean_object* v_snd_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1363_; 
lean_inc(v_body_1349_);
v___x_1353_ = l_Lean_IR_NormalizeIds_normFnBody(v_body_1349_, v_fst_1351_, v_snd_1352_);
lean_dec(v_fst_1351_);
v_fst_1354_ = lean_ctor_get(v___x_1353_, 0);
v_snd_1355_ = lean_ctor_get(v___x_1353_, 1);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1357_ = v___x_1353_;
v_isShared_1358_ = v_isSharedCheck_1363_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_snd_1355_);
lean_inc(v_fst_1354_);
lean_dec(v___x_1353_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1363_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1359_; lean_object* v___x_1361_; 
v___x_1359_ = l_Lean_IR_Decl_updateBody_x21(v_d_1345_, v_fst_1354_);
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 0, v___x_1359_);
v___x_1361_ = v___x_1357_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1359_);
lean_ctor_set(v_reuseFailAlloc_1362_, 1, v_snd_1355_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
else
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1372_, 0, v_d_1345_);
lean_ctor_set(v___x_1372_, 1, v_a_1347_);
return v___x_1372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normDecl___boxed(lean_object* v_d_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l_Lean_IR_NormalizeIds_normDecl(v_d_1373_, v_a_1374_, v_a_1375_);
lean_dec(v_a_1374_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_normalizeIds(lean_object* v_d_1377_){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v_fst_1381_; 
v___x_1378_ = lean_box(1);
v___x_1379_ = lean_unsigned_to_nat(1u);
v___x_1380_ = l_Lean_IR_NormalizeIds_normDecl(v_d_1377_, v___x_1378_, v___x_1379_);
v_fst_1381_ = lean_ctor_get(v___x_1380_, 0);
lean_inc(v_fst_1381_);
lean_dec_ref(v___x_1380_);
return v_fst_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapArg(lean_object* v_f_1382_, lean_object* v_x_1383_){
_start:
{
if (lean_obj_tag(v_x_1383_) == 0)
{
lean_object* v_id_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1392_; 
v_id_1384_ = lean_ctor_get(v_x_1383_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v_x_1383_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1386_ = v_x_1383_;
v_isShared_1387_ = v_isSharedCheck_1392_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_id_1384_);
lean_dec(v_x_1383_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1392_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1388_; lean_object* v___x_1390_; 
v___x_1388_ = lean_apply_1(v_f_1382_, v_id_1384_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 0, v___x_1388_);
v___x_1390_ = v___x_1386_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v___x_1388_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
return v___x_1390_;
}
}
}
else
{
lean_dec_ref(v_f_1382_);
return v_x_1383_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0(lean_object* v_f_1393_, size_t v_sz_1394_, size_t v_i_1395_, lean_object* v_bs_1396_){
_start:
{
uint8_t v___x_1397_; 
v___x_1397_ = lean_usize_dec_lt(v_i_1395_, v_sz_1394_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; 
lean_dec_ref(v_f_1393_);
v___x_1398_ = l_unsafeCast___redArg(v_bs_1396_);
lean_dec_ref(v_bs_1396_);
return v___x_1398_;
}
else
{
lean_object* v_v_1399_; lean_object* v___x_1400_; lean_object* v_bs_x27_1401_; lean_object* v___y_1403_; lean_object* v___x_1409_; 
v_v_1399_ = lean_array_uget(v_bs_1396_, v_i_1395_);
v___x_1400_ = lean_unsigned_to_nat(0u);
v_bs_x27_1401_ = lean_array_uset(v_bs_1396_, v_i_1395_, v___x_1400_);
v___x_1409_ = l_unsafeCast___redArg(v_v_1399_);
lean_dec(v_v_1399_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v_id_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1418_; 
v_id_1410_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1412_ = v___x_1409_;
v_isShared_1413_ = v_isSharedCheck_1418_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_id_1410_);
lean_dec(v___x_1409_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1418_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1414_; lean_object* v___x_1416_; 
lean_inc_ref(v_f_1393_);
v___x_1414_ = lean_apply_1(v_f_1393_, v_id_1410_);
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
v___y_1403_ = v___x_1416_;
goto v___jp_1402_;
}
}
}
else
{
v___y_1403_ = v___x_1409_;
goto v___jp_1402_;
}
v___jp_1402_:
{
size_t v___x_1404_; size_t v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1404_ = ((size_t)1ULL);
v___x_1405_ = lean_usize_add(v_i_1395_, v___x_1404_);
v___x_1406_ = l_unsafeCast___redArg(v___y_1403_);
lean_dec(v___y_1403_);
v___x_1407_ = lean_array_uset(v_bs_x27_1401_, v_i_1395_, v___x_1406_);
v_i_1395_ = v___x_1405_;
v_bs_1396_ = v___x_1407_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0___boxed(lean_object* v_f_1419_, lean_object* v_sz_1420_, lean_object* v_i_1421_, lean_object* v_bs_1422_){
_start:
{
size_t v_sz_boxed_1423_; size_t v_i_boxed_1424_; lean_object* v_res_1425_; 
v_sz_boxed_1423_ = lean_unbox_usize(v_sz_1420_);
lean_dec(v_sz_1420_);
v_i_boxed_1424_ = lean_unbox_usize(v_i_1421_);
lean_dec(v_i_1421_);
v_res_1425_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0(v_f_1419_, v_sz_boxed_1423_, v_i_boxed_1424_, v_bs_1422_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapArgs(lean_object* v_f_1426_, lean_object* v_as_1427_){
_start:
{
size_t v_sz_1428_; size_t v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v_sz_1428_ = lean_array_size(v_as_1427_);
v___x_1429_ = ((size_t)0ULL);
v___x_1430_ = l_unsafeCast___redArg(v_as_1427_);
v___x_1431_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0(v_f_1426_, v_sz_1428_, v___x_1429_, v___x_1430_);
v___x_1432_ = l_unsafeCast___redArg(v___x_1431_);
lean_dec_ref(v___x_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapArgs___boxed(lean_object* v_f_1433_, lean_object* v_as_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l_Lean_IR_MapVars_mapArgs(v_f_1433_, v_as_1434_);
lean_dec_ref(v_as_1434_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapExpr(lean_object* v_f_1436_, lean_object* v_x_1437_){
_start:
{
switch(lean_obj_tag(v_x_1437_))
{
case 0:
{
lean_object* v_i_1438_; lean_object* v_ys_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1447_; 
v_i_1438_ = lean_ctor_get(v_x_1437_, 0);
v_ys_1439_ = lean_ctor_get(v_x_1437_, 1);
v_isSharedCheck_1447_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1441_ = v_x_1437_;
v_isShared_1442_ = v_isSharedCheck_1447_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_ys_1439_);
lean_inc(v_i_1438_);
lean_dec(v_x_1437_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1447_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1443_ = l_Lean_IR_MapVars_mapArgs(v_f_1436_, v_ys_1439_);
lean_dec_ref(v_ys_1439_);
if (v_isShared_1442_ == 0)
{
lean_ctor_set(v___x_1441_, 1, v___x_1443_);
v___x_1445_ = v___x_1441_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_i_1438_);
lean_ctor_set(v_reuseFailAlloc_1446_, 1, v___x_1443_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
case 1:
{
lean_object* v_n_1448_; lean_object* v_x_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1457_; 
v_n_1448_ = lean_ctor_get(v_x_1437_, 0);
v_x_1449_ = lean_ctor_get(v_x_1437_, 1);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1451_ = v_x_1437_;
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_x_1449_);
lean_inc(v_n_1448_);
lean_dec(v_x_1437_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1453_; lean_object* v___x_1455_; 
v___x_1453_ = lean_apply_1(v_f_1436_, v_x_1449_);
if (v_isShared_1452_ == 0)
{
lean_ctor_set(v___x_1451_, 1, v___x_1453_);
v___x_1455_ = v___x_1451_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_n_1448_);
lean_ctor_set(v_reuseFailAlloc_1456_, 1, v___x_1453_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
case 2:
{
lean_object* v_x_1458_; lean_object* v_i_1459_; uint8_t v_updtHeader_1460_; lean_object* v_ys_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1470_; 
v_x_1458_ = lean_ctor_get(v_x_1437_, 0);
v_i_1459_ = lean_ctor_get(v_x_1437_, 1);
v_updtHeader_1460_ = lean_ctor_get_uint8(v_x_1437_, sizeof(void*)*3);
v_ys_1461_ = lean_ctor_get(v_x_1437_, 2);
v_isSharedCheck_1470_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1463_ = v_x_1437_;
v_isShared_1464_ = v_isSharedCheck_1470_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_ys_1461_);
lean_inc(v_i_1459_);
lean_inc(v_x_1458_);
lean_dec(v_x_1437_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1470_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1468_; 
lean_inc_ref(v_f_1436_);
v___x_1465_ = lean_apply_1(v_f_1436_, v_x_1458_);
v___x_1466_ = l_Lean_IR_MapVars_mapArgs(v_f_1436_, v_ys_1461_);
lean_dec_ref(v_ys_1461_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 2, v___x_1466_);
lean_ctor_set(v___x_1463_, 0, v___x_1465_);
v___x_1468_ = v___x_1463_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1465_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v_i_1459_);
lean_ctor_set(v_reuseFailAlloc_1469_, 2, v___x_1466_);
lean_ctor_set_uint8(v_reuseFailAlloc_1469_, sizeof(void*)*3, v_updtHeader_1460_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
case 3:
{
lean_object* v_i_1471_; lean_object* v_x_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1480_; 
v_i_1471_ = lean_ctor_get(v_x_1437_, 0);
v_x_1472_ = lean_ctor_get(v_x_1437_, 1);
v_isSharedCheck_1480_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1474_ = v_x_1437_;
v_isShared_1475_ = v_isSharedCheck_1480_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_x_1472_);
lean_inc(v_i_1471_);
lean_dec(v_x_1437_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1480_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1476_; lean_object* v___x_1478_; 
v___x_1476_ = lean_apply_1(v_f_1436_, v_x_1472_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 1, v___x_1476_);
v___x_1478_ = v___x_1474_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_i_1471_);
lean_ctor_set(v_reuseFailAlloc_1479_, 1, v___x_1476_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
case 4:
{
lean_object* v_i_1481_; lean_object* v_x_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1490_; 
v_i_1481_ = lean_ctor_get(v_x_1437_, 0);
v_x_1482_ = lean_ctor_get(v_x_1437_, 1);
v_isSharedCheck_1490_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1484_ = v_x_1437_;
v_isShared_1485_ = v_isSharedCheck_1490_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_x_1482_);
lean_inc(v_i_1481_);
lean_dec(v_x_1437_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1490_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1486_; lean_object* v___x_1488_; 
v___x_1486_ = lean_apply_1(v_f_1436_, v_x_1482_);
if (v_isShared_1485_ == 0)
{
lean_ctor_set(v___x_1484_, 1, v___x_1486_);
v___x_1488_ = v___x_1484_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_i_1481_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v___x_1486_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
case 5:
{
lean_object* v_n_1491_; lean_object* v_offset_1492_; lean_object* v_x_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1501_; 
v_n_1491_ = lean_ctor_get(v_x_1437_, 0);
v_offset_1492_ = lean_ctor_get(v_x_1437_, 1);
v_x_1493_ = lean_ctor_get(v_x_1437_, 2);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1495_ = v_x_1437_;
v_isShared_1496_ = v_isSharedCheck_1501_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_x_1493_);
lean_inc(v_offset_1492_);
lean_inc(v_n_1491_);
lean_dec(v_x_1437_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1501_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1497_; lean_object* v___x_1499_; 
v___x_1497_ = lean_apply_1(v_f_1436_, v_x_1493_);
if (v_isShared_1496_ == 0)
{
lean_ctor_set(v___x_1495_, 2, v___x_1497_);
v___x_1499_ = v___x_1495_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v_n_1491_);
lean_ctor_set(v_reuseFailAlloc_1500_, 1, v_offset_1492_);
lean_ctor_set(v_reuseFailAlloc_1500_, 2, v___x_1497_);
v___x_1499_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
return v___x_1499_;
}
}
}
case 6:
{
lean_object* v_c_1502_; lean_object* v_ys_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1511_; 
v_c_1502_ = lean_ctor_get(v_x_1437_, 0);
v_ys_1503_ = lean_ctor_get(v_x_1437_, 1);
v_isSharedCheck_1511_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1505_ = v_x_1437_;
v_isShared_1506_ = v_isSharedCheck_1511_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_ys_1503_);
lean_inc(v_c_1502_);
lean_dec(v_x_1437_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1511_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1507_ = l_Lean_IR_MapVars_mapArgs(v_f_1436_, v_ys_1503_);
lean_dec_ref(v_ys_1503_);
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 1, v___x_1507_);
v___x_1509_ = v___x_1505_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_c_1502_);
lean_ctor_set(v_reuseFailAlloc_1510_, 1, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
case 7:
{
lean_object* v_c_1512_; lean_object* v_ys_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1521_; 
v_c_1512_ = lean_ctor_get(v_x_1437_, 0);
v_ys_1513_ = lean_ctor_get(v_x_1437_, 1);
v_isSharedCheck_1521_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1515_ = v_x_1437_;
v_isShared_1516_ = v_isSharedCheck_1521_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_ys_1513_);
lean_inc(v_c_1512_);
lean_dec(v_x_1437_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1521_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1517_; lean_object* v___x_1519_; 
v___x_1517_ = l_Lean_IR_MapVars_mapArgs(v_f_1436_, v_ys_1513_);
lean_dec_ref(v_ys_1513_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 1, v___x_1517_);
v___x_1519_ = v___x_1515_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_c_1512_);
lean_ctor_set(v_reuseFailAlloc_1520_, 1, v___x_1517_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
case 8:
{
lean_object* v_x_1522_; lean_object* v_ys_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1532_; 
v_x_1522_ = lean_ctor_get(v_x_1437_, 0);
v_ys_1523_ = lean_ctor_get(v_x_1437_, 1);
v_isSharedCheck_1532_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1525_ = v_x_1437_;
v_isShared_1526_ = v_isSharedCheck_1532_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_ys_1523_);
lean_inc(v_x_1522_);
lean_dec(v_x_1437_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1532_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1530_; 
lean_inc_ref(v_f_1436_);
v___x_1527_ = lean_apply_1(v_f_1436_, v_x_1522_);
v___x_1528_ = l_Lean_IR_MapVars_mapArgs(v_f_1436_, v_ys_1523_);
lean_dec_ref(v_ys_1523_);
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 1, v___x_1528_);
lean_ctor_set(v___x_1525_, 0, v___x_1527_);
v___x_1530_ = v___x_1525_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v___x_1527_);
lean_ctor_set(v_reuseFailAlloc_1531_, 1, v___x_1528_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
case 9:
{
lean_object* v_ty_1533_; lean_object* v_x_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1542_; 
v_ty_1533_ = lean_ctor_get(v_x_1437_, 0);
v_x_1534_ = lean_ctor_get(v_x_1437_, 1);
v_isSharedCheck_1542_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1536_ = v_x_1437_;
v_isShared_1537_ = v_isSharedCheck_1542_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_x_1534_);
lean_inc(v_ty_1533_);
lean_dec(v_x_1437_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1542_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1538_; lean_object* v___x_1540_; 
v___x_1538_ = lean_apply_1(v_f_1436_, v_x_1534_);
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 1, v___x_1538_);
v___x_1540_ = v___x_1536_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_ty_1533_);
lean_ctor_set(v_reuseFailAlloc_1541_, 1, v___x_1538_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
case 10:
{
lean_object* v_x_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1551_; 
v_x_1543_ = lean_ctor_get(v_x_1437_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1545_ = v_x_1437_;
v_isShared_1546_ = v_isSharedCheck_1551_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_x_1543_);
lean_dec(v_x_1437_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1551_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1547_; lean_object* v___x_1549_; 
v___x_1547_ = lean_apply_1(v_f_1436_, v_x_1543_);
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 0, v___x_1547_);
v___x_1549_ = v___x_1545_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v___x_1547_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
case 11:
{
lean_dec_ref(v_f_1436_);
return v_x_1437_;
}
default: 
{
lean_object* v_x_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1560_; 
v_x_1552_ = lean_ctor_get(v_x_1437_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1554_ = v_x_1437_;
v_isShared_1555_ = v_isSharedCheck_1560_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_x_1552_);
lean_dec(v_x_1437_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1560_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1556_; lean_object* v___x_1558_; 
v___x_1556_ = lean_apply_1(v_f_1436_, v_x_1552_);
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 0, v___x_1556_);
v___x_1558_ = v___x_1554_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v___x_1556_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapFnBody(lean_object* v_f_1561_, lean_object* v_x_1562_){
_start:
{
switch(lean_obj_tag(v_x_1562_))
{
case 0:
{
lean_object* v_x_1563_; lean_object* v_ty_1564_; lean_object* v_e_1565_; lean_object* v_b_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1575_; 
v_x_1563_ = lean_ctor_get(v_x_1562_, 0);
v_ty_1564_ = lean_ctor_get(v_x_1562_, 1);
v_e_1565_ = lean_ctor_get(v_x_1562_, 2);
v_b_1566_ = lean_ctor_get(v_x_1562_, 3);
v_isSharedCheck_1575_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1568_ = v_x_1562_;
v_isShared_1569_ = v_isSharedCheck_1575_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_b_1566_);
lean_inc(v_e_1565_);
lean_inc(v_ty_1564_);
lean_inc(v_x_1563_);
lean_dec(v_x_1562_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1575_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1573_; 
lean_inc_ref(v_f_1561_);
v___x_1570_ = l_Lean_IR_MapVars_mapExpr(v_f_1561_, v_e_1565_);
v___x_1571_ = l_Lean_IR_MapVars_mapFnBody(v_f_1561_, v_b_1566_);
if (v_isShared_1569_ == 0)
{
lean_ctor_set(v___x_1568_, 3, v___x_1571_);
lean_ctor_set(v___x_1568_, 2, v___x_1570_);
v___x_1573_ = v___x_1568_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_x_1563_);
lean_ctor_set(v_reuseFailAlloc_1574_, 1, v_ty_1564_);
lean_ctor_set(v_reuseFailAlloc_1574_, 2, v___x_1570_);
lean_ctor_set(v_reuseFailAlloc_1574_, 3, v___x_1571_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
case 1:
{
lean_object* v_j_1576_; lean_object* v_xs_1577_; lean_object* v_v_1578_; lean_object* v_b_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1588_; 
v_j_1576_ = lean_ctor_get(v_x_1562_, 0);
v_xs_1577_ = lean_ctor_get(v_x_1562_, 1);
v_v_1578_ = lean_ctor_get(v_x_1562_, 2);
v_b_1579_ = lean_ctor_get(v_x_1562_, 3);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1581_ = v_x_1562_;
v_isShared_1582_ = v_isSharedCheck_1588_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_b_1579_);
lean_inc(v_v_1578_);
lean_inc(v_xs_1577_);
lean_inc(v_j_1576_);
lean_dec(v_x_1562_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1588_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1586_; 
lean_inc_ref(v_f_1561_);
v___x_1583_ = l_Lean_IR_MapVars_mapFnBody(v_f_1561_, v_v_1578_);
v___x_1584_ = l_Lean_IR_MapVars_mapFnBody(v_f_1561_, v_b_1579_);
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 3, v___x_1584_);
lean_ctor_set(v___x_1581_, 2, v___x_1583_);
v___x_1586_ = v___x_1581_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_j_1576_);
lean_ctor_set(v_reuseFailAlloc_1587_, 1, v_xs_1577_);
lean_ctor_set(v_reuseFailAlloc_1587_, 2, v___x_1583_);
lean_ctor_set(v_reuseFailAlloc_1587_, 3, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
case 2:
{
lean_object* v_x_1589_; lean_object* v_i_1590_; lean_object* v_y_1591_; lean_object* v_b_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1612_; 
v_x_1589_ = lean_ctor_get(v_x_1562_, 0);
v_i_1590_ = lean_ctor_get(v_x_1562_, 1);
v_y_1591_ = lean_ctor_get(v_x_1562_, 2);
v_b_1592_ = lean_ctor_get(v_x_1562_, 3);
v_isSharedCheck_1612_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1594_ = v_x_1562_;
v_isShared_1595_ = v_isSharedCheck_1612_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_b_1592_);
lean_inc(v_y_1591_);
lean_inc(v_i_1590_);
lean_inc(v_x_1589_);
lean_dec(v_x_1562_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1612_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1596_; lean_object* v___y_1598_; 
lean_inc_ref(v_f_1561_);
v___x_1596_ = lean_apply_1(v_f_1561_, v_x_1589_);
if (lean_obj_tag(v_y_1591_) == 0)
{
lean_object* v_id_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1611_; 
v_id_1603_ = lean_ctor_get(v_y_1591_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v_y_1591_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1605_ = v_y_1591_;
v_isShared_1606_ = v_isSharedCheck_1611_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_id_1603_);
lean_dec(v_y_1591_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1611_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1607_; lean_object* v___x_1609_; 
lean_inc_ref(v_f_1561_);
v___x_1607_ = lean_apply_1(v_f_1561_, v_id_1603_);
if (v_isShared_1606_ == 0)
{
lean_ctor_set(v___x_1605_, 0, v___x_1607_);
v___x_1609_ = v___x_1605_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v___x_1607_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
v___y_1598_ = v___x_1609_;
goto v___jp_1597_;
}
}
}
else
{
v___y_1598_ = v_y_1591_;
goto v___jp_1597_;
}
v___jp_1597_:
{
lean_object* v___x_1599_; lean_object* v___x_1601_; 
v___x_1599_ = l_Lean_IR_MapVars_mapFnBody(v_f_1561_, v_b_1592_);
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 3, v___x_1599_);
lean_ctor_set(v___x_1594_, 2, v___y_1598_);
lean_ctor_set(v___x_1594_, 0, v___x_1596_);
v___x_1601_ = v___x_1594_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1596_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v_i_1590_);
lean_ctor_set(v_reuseFailAlloc_1602_, 2, v___y_1598_);
lean_ctor_set(v_reuseFailAlloc_1602_, 3, v___x_1599_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
}
case 3:
{
lean_object* v_x_1613_; lean_object* v_cidx_1614_; lean_object* v_b_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1624_; 
v_x_1613_ = lean_ctor_get(v_x_1562_, 0);
v_cidx_1614_ = lean_ctor_get(v_x_1562_, 1);
v_b_1615_ = lean_ctor_get(v_x_1562_, 2);
v_isSharedCheck_1624_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1617_ = v_x_1562_;
v_isShared_1618_ = v_isSharedCheck_1624_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_b_1615_);
lean_inc(v_cidx_1614_);
lean_inc(v_x_1613_);
lean_dec(v_x_1562_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1624_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1622_; 
lean_inc_ref(v_f_1561_);
v___x_1619_ = lean_apply_1(v_f_1561_, v_x_1613_);
v___x_1620_ = l_Lean_IR_MapVars_mapFnBody(v_f_1561_, v_b_1615_);
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 2, v___x_1620_);
lean_ctor_set(v___x_1617_, 0, v___x_1619_);
v___x_1622_ = v___x_1617_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v___x_1619_);
lean_ctor_set(v_reuseFailAlloc_1623_, 1, v_cidx_1614_);
lean_ctor_set(v_reuseFailAlloc_1623_, 2, v___x_1620_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
case 4:
{
lean_object* v_x_1625_; lean_object* v_i_1626_; lean_object* v_y_1627_; lean_object* v_b_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1638_; 
v_x_1625_ = lean_ctor_get(v_x_1562_, 0);
v_i_1626_ = lean_ctor_get(v_x_1562_, 1);
v_y_1627_ = lean_ctor_get(v_x_1562_, 2);
v_b_1628_ = lean_ctor_get(v_x_1562_, 3);
v_isSharedCheck_1638_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1630_ = v_x_1562_;
v_isShared_1631_ = v_isSharedCheck_1638_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_b_1628_);
lean_inc(v_y_1627_);
lean_inc(v_i_1626_);
lean_inc(v_x_1625_);
lean_dec(v_x_1562_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1638_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1636_; 
lean_inc_ref_n(v_f_1561_, 2);
v___x_1632_ = lean_apply_1(v_f_1561_, v_x_1625_);
v___x_1633_ = lean_apply_1(v_f_1561_, v_y_1627_);
v___x_1634_ = l_Lean_IR_MapVars_mapFnBody(v_f_1561_, v_b_1628_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 3, v___x_1634_);
lean_ctor_set(v___x_1630_, 2, v___x_1633_);
lean_ctor_set(v___x_1630_, 0, v___x_1632_);
v___x_1636_ = v___x_1630_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v___x_1632_);
lean_ctor_set(v_reuseFailAlloc_1637_, 1, v_i_1626_);
lean_ctor_set(v_reuseFailAlloc_1637_, 2, v___x_1633_);
lean_ctor_set(v_reuseFailAlloc_1637_, 3, v___x_1634_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
case 5:
{
lean_object* v_x_1639_; lean_object* v_i_1640_; lean_object* v_offset_1641_; lean_object* v_y_1642_; lean_object* v_ty_1643_; lean_object* v_b_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1654_; 
v_x_1639_ = lean_ctor_get(v_x_1562_, 0);
v_i_1640_ = lean_ctor_get(v_x_1562_, 1);
v_offset_1641_ = lean_ctor_get(v_x_1562_, 2);
v_y_1642_ = lean_ctor_get(v_x_1562_, 3);
v_ty_1643_ = lean_ctor_get(v_x_1562_, 4);
v_b_1644_ = lean_ctor_get(v_x_1562_, 5);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1646_ = v_x_1562_;
v_isShared_1647_ = v_isSharedCheck_1654_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_b_1644_);
lean_inc(v_ty_1643_);
lean_inc(v_y_1642_);
lean_inc(v_offset_1641_);
lean_inc(v_i_1640_);
lean_inc(v_x_1639_);
lean_dec(v_x_1562_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1654_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1652_; 
lean_inc_ref_n(v_f_1561_, 2);
v___x_1648_ = lean_apply_1(v_f_1561_, v_x_1639_);
v___x_1649_ = lean_apply_1(v_f_1561_, v_y_1642_);
v___x_1650_ = l_Lean_IR_MapVars_mapFnBody(v_f_1561_, v_b_1644_);
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 5, v___x_1650_);
lean_ctor_set(v___x_1646_, 3, v___x_1649_);
lean_ctor_set(v___x_1646_, 0, v___x_1648_);
v___x_1652_ = v___x_1646_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(5, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v___x_1648_);
lean_ctor_set(v_reuseFailAlloc_1653_, 1, v_i_1640_);
lean_ctor_set(v_reuseFailAlloc_1653_, 2, v_offset_1641_);
lean_ctor_set(v_reuseFailAlloc_1653_, 3, v___x_1649_);
lean_ctor_set(v_reuseFailAlloc_1653_, 4, v_ty_1643_);
lean_ctor_set(v_reuseFailAlloc_1653_, 5, v___x_1650_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
case 6:
{
lean_object* v_x_1655_; lean_object* v_n_1656_; uint8_t v_c_1657_; uint8_t v_persistent_1658_; lean_object* v_b_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1668_; 
v_x_1655_ = lean_ctor_get(v_x_1562_, 0);
v_n_1656_ = lean_ctor_get(v_x_1562_, 1);
v_c_1657_ = lean_ctor_get_uint8(v_x_1562_, sizeof(void*)*3);
v_persistent_1658_ = lean_ctor_get_uint8(v_x_1562_, sizeof(void*)*3 + 1);
v_b_1659_ = lean_ctor_get(v_x_1562_, 2);
v_isSharedCheck_1668_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1661_ = v_x_1562_;
v_isShared_1662_ = v_isSharedCheck_1668_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_b_1659_);
lean_inc(v_n_1656_);
lean_inc(v_x_1655_);
lean_dec(v_x_1562_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1668_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1666_; 
lean_inc_ref(v_f_1561_);
v___x_1663_ = lean_apply_1(v_f_1561_, v_x_1655_);
v___x_1664_ = l_Lean_IR_MapVars_mapFnBody(v_f_1561_, v_b_1659_);
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 2, v___x_1664_);
lean_ctor_set(v___x_1661_, 0, v___x_1663_);
v___x_1666_ = v___x_1661_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(6, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1663_);
lean_ctor_set(v_reuseFailAlloc_1667_, 1, v_n_1656_);
lean_ctor_set(v_reuseFailAlloc_1667_, 2, v___x_1664_);
lean_ctor_set_uint8(v_reuseFailAlloc_1667_, sizeof(void*)*3, v_c_1657_);
lean_ctor_set_uint8(v_reuseFailAlloc_1667_, sizeof(void*)*3 + 1, v_persistent_1658_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
}
case 7:
{
lean_object* v_x_1669_; lean_object* v_n_1670_; uint8_t v_c_1671_; uint8_t v_persistent_1672_; lean_object* v_b_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1682_; 
v_x_1669_ = lean_ctor_get(v_x_1562_, 0);
v_n_1670_ = lean_ctor_get(v_x_1562_, 1);
v_c_1671_ = lean_ctor_get_uint8(v_x_1562_, sizeof(void*)*3);
v_persistent_1672_ = lean_ctor_get_uint8(v_x_1562_, sizeof(void*)*3 + 1);
v_b_1673_ = lean_ctor_get(v_x_1562_, 2);
v_isSharedCheck_1682_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1675_ = v_x_1562_;
v_isShared_1676_ = v_isSharedCheck_1682_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_b_1673_);
lean_inc(v_n_1670_);
lean_inc(v_x_1669_);
lean_dec(v_x_1562_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1682_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1680_; 
lean_inc_ref(v_f_1561_);
v___x_1677_ = lean_apply_1(v_f_1561_, v_x_1669_);
v___x_1678_ = l_Lean_IR_MapVars_mapFnBody(v_f_1561_, v_b_1673_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 2, v___x_1678_);
lean_ctor_set(v___x_1675_, 0, v___x_1677_);
v___x_1680_ = v___x_1675_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(7, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v___x_1677_);
lean_ctor_set(v_reuseFailAlloc_1681_, 1, v_n_1670_);
lean_ctor_set(v_reuseFailAlloc_1681_, 2, v___x_1678_);
lean_ctor_set_uint8(v_reuseFailAlloc_1681_, sizeof(void*)*3, v_c_1671_);
lean_ctor_set_uint8(v_reuseFailAlloc_1681_, sizeof(void*)*3 + 1, v_persistent_1672_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
case 8:
{
lean_object* v_x_1683_; lean_object* v_b_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1693_; 
v_x_1683_ = lean_ctor_get(v_x_1562_, 0);
v_b_1684_ = lean_ctor_get(v_x_1562_, 1);
v_isSharedCheck_1693_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1686_ = v_x_1562_;
v_isShared_1687_ = v_isSharedCheck_1693_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_b_1684_);
lean_inc(v_x_1683_);
lean_dec(v_x_1562_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1693_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1691_; 
lean_inc_ref(v_f_1561_);
v___x_1688_ = lean_apply_1(v_f_1561_, v_x_1683_);
v___x_1689_ = l_Lean_IR_MapVars_mapFnBody(v_f_1561_, v_b_1684_);
if (v_isShared_1687_ == 0)
{
lean_ctor_set(v___x_1686_, 1, v___x_1689_);
lean_ctor_set(v___x_1686_, 0, v___x_1688_);
v___x_1691_ = v___x_1686_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1688_);
lean_ctor_set(v_reuseFailAlloc_1692_, 1, v___x_1689_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
case 9:
{
lean_object* v_tid_1694_; lean_object* v_x_1695_; lean_object* v_xType_1696_; lean_object* v_cs_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1710_; 
v_tid_1694_ = lean_ctor_get(v_x_1562_, 0);
v_x_1695_ = lean_ctor_get(v_x_1562_, 1);
v_xType_1696_ = lean_ctor_get(v_x_1562_, 2);
v_cs_1697_ = lean_ctor_get(v_x_1562_, 3);
v_isSharedCheck_1710_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1699_ = v_x_1562_;
v_isShared_1700_ = v_isSharedCheck_1710_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_cs_1697_);
lean_inc(v_xType_1696_);
lean_inc(v_x_1695_);
lean_inc(v_tid_1694_);
lean_dec(v_x_1562_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1710_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1701_; size_t v_sz_1702_; size_t v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1708_; 
lean_inc_ref(v_f_1561_);
v___x_1701_ = lean_apply_1(v_f_1561_, v_x_1695_);
v_sz_1702_ = lean_array_size(v_cs_1697_);
v___x_1703_ = ((size_t)0ULL);
v___x_1704_ = l_unsafeCast___redArg(v_cs_1697_);
lean_dec_ref(v_cs_1697_);
v___x_1705_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0(v_f_1561_, v_sz_1702_, v___x_1703_, v___x_1704_);
v___x_1706_ = l_unsafeCast___redArg(v___x_1705_);
lean_dec_ref(v___x_1705_);
if (v_isShared_1700_ == 0)
{
lean_ctor_set(v___x_1699_, 3, v___x_1706_);
lean_ctor_set(v___x_1699_, 1, v___x_1701_);
v___x_1708_ = v___x_1699_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(9, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_tid_1694_);
lean_ctor_set(v_reuseFailAlloc_1709_, 1, v___x_1701_);
lean_ctor_set(v_reuseFailAlloc_1709_, 2, v_xType_1696_);
lean_ctor_set(v_reuseFailAlloc_1709_, 3, v___x_1706_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
case 10:
{
lean_object* v_x_1711_; 
v_x_1711_ = lean_ctor_get(v_x_1562_, 0);
lean_inc(v_x_1711_);
if (lean_obj_tag(v_x_1711_) == 0)
{
lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1727_; 
v_isSharedCheck_1727_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1727_ == 0)
{
lean_object* v_unused_1728_; 
v_unused_1728_ = lean_ctor_get(v_x_1562_, 0);
lean_dec(v_unused_1728_);
v___x_1713_ = v_x_1562_;
v_isShared_1714_ = v_isSharedCheck_1727_;
goto v_resetjp_1712_;
}
else
{
lean_dec(v_x_1562_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1727_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v_id_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1726_; 
v_id_1715_ = lean_ctor_get(v_x_1711_, 0);
v_isSharedCheck_1726_ = !lean_is_exclusive(v_x_1711_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1717_ = v_x_1711_;
v_isShared_1718_ = v_isSharedCheck_1726_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_id_1715_);
lean_dec(v_x_1711_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1726_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1719_; lean_object* v___x_1721_; 
v___x_1719_ = lean_apply_1(v_f_1561_, v_id_1715_);
if (v_isShared_1718_ == 0)
{
lean_ctor_set(v___x_1717_, 0, v___x_1719_);
v___x_1721_ = v___x_1717_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v___x_1719_);
v___x_1721_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
lean_object* v___x_1723_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1721_);
v___x_1723_ = v___x_1713_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v___x_1721_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
}
else
{
lean_dec_ref(v_f_1561_);
return v_x_1562_;
}
}
case 11:
{
lean_object* v_j_1729_; lean_object* v_ys_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1738_; 
v_j_1729_ = lean_ctor_get(v_x_1562_, 0);
v_ys_1730_ = lean_ctor_get(v_x_1562_, 1);
v_isSharedCheck_1738_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1732_ = v_x_1562_;
v_isShared_1733_ = v_isSharedCheck_1738_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_ys_1730_);
lean_inc(v_j_1729_);
lean_dec(v_x_1562_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1738_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1734_; lean_object* v___x_1736_; 
v___x_1734_ = l_Lean_IR_MapVars_mapArgs(v_f_1561_, v_ys_1730_);
lean_dec_ref(v_ys_1730_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 1, v___x_1734_);
v___x_1736_ = v___x_1732_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_j_1729_);
lean_ctor_set(v_reuseFailAlloc_1737_, 1, v___x_1734_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
default: 
{
lean_dec_ref(v_f_1561_);
return v_x_1562_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0(lean_object* v_f_1739_, size_t v_sz_1740_, size_t v_i_1741_, lean_object* v_bs_1742_){
_start:
{
uint8_t v___x_1743_; 
v___x_1743_ = lean_usize_dec_lt(v_i_1741_, v_sz_1740_);
if (v___x_1743_ == 0)
{
lean_object* v___x_1744_; 
lean_dec_ref(v_f_1739_);
v___x_1744_ = l_unsafeCast___redArg(v_bs_1742_);
lean_dec_ref(v_bs_1742_);
return v___x_1744_;
}
else
{
lean_object* v_v_1745_; lean_object* v___x_1746_; lean_object* v_bs_x27_1747_; lean_object* v___y_1749_; lean_object* v___x_1755_; 
v_v_1745_ = lean_array_uget(v_bs_1742_, v_i_1741_);
v___x_1746_ = lean_unsigned_to_nat(0u);
v_bs_x27_1747_ = lean_array_uset(v_bs_1742_, v_i_1741_, v___x_1746_);
v___x_1755_ = l_unsafeCast___redArg(v_v_1745_);
lean_dec(v_v_1745_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v_info_1756_; lean_object* v_b_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1765_; 
v_info_1756_ = lean_ctor_get(v___x_1755_, 0);
v_b_1757_ = lean_ctor_get(v___x_1755_, 1);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1759_ = v___x_1755_;
v_isShared_1760_ = v_isSharedCheck_1765_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_b_1757_);
lean_inc(v_info_1756_);
lean_dec(v___x_1755_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1765_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1761_; lean_object* v___x_1763_; 
lean_inc_ref(v_f_1739_);
v___x_1761_ = l_Lean_IR_MapVars_mapFnBody(v_f_1739_, v_b_1757_);
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 1, v___x_1761_);
v___x_1763_ = v___x_1759_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_info_1756_);
lean_ctor_set(v_reuseFailAlloc_1764_, 1, v___x_1761_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
v___y_1749_ = v___x_1763_;
goto v___jp_1748_;
}
}
}
else
{
lean_object* v_b_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1774_; 
v_b_1766_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1768_ = v___x_1755_;
v_isShared_1769_ = v_isSharedCheck_1774_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_b_1766_);
lean_dec(v___x_1755_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1774_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1770_; lean_object* v___x_1772_; 
lean_inc_ref(v_f_1739_);
v___x_1770_ = l_Lean_IR_MapVars_mapFnBody(v_f_1739_, v_b_1766_);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 0, v___x_1770_);
v___x_1772_ = v___x_1768_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v___x_1770_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
v___y_1749_ = v___x_1772_;
goto v___jp_1748_;
}
}
}
v___jp_1748_:
{
size_t v___x_1750_; size_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1750_ = ((size_t)1ULL);
v___x_1751_ = lean_usize_add(v_i_1741_, v___x_1750_);
v___x_1752_ = l_unsafeCast___redArg(v___y_1749_);
lean_dec_ref(v___y_1749_);
v___x_1753_ = lean_array_uset(v_bs_x27_1747_, v_i_1741_, v___x_1752_);
v_i_1741_ = v___x_1751_;
v_bs_1742_ = v___x_1753_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0___boxed(lean_object* v_f_1775_, lean_object* v_sz_1776_, lean_object* v_i_1777_, lean_object* v_bs_1778_){
_start:
{
size_t v_sz_boxed_1779_; size_t v_i_boxed_1780_; lean_object* v_res_1781_; 
v_sz_boxed_1779_ = lean_unbox_usize(v_sz_1776_);
lean_dec(v_sz_1776_);
v_i_boxed_1780_ = lean_unbox_usize(v_i_1777_);
lean_dec(v_i_1777_);
v_res_1781_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0(v_f_1775_, v_sz_boxed_1779_, v_i_boxed_1780_, v_bs_1778_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_mapVars(lean_object* v_f_1782_, lean_object* v_b_1783_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Lean_IR_MapVars_mapFnBody(v_f_1782_, v_b_1783_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar___lam__0(lean_object* v_x_1785_, lean_object* v_y_1786_, lean_object* v_z_1787_){
_start:
{
uint8_t v___x_1788_; 
v___x_1788_ = l_Lean_IR_instBEqVarId_beq(v_x_1785_, v_z_1787_);
if (v___x_1788_ == 0)
{
lean_inc(v_z_1787_);
return v_z_1787_;
}
else
{
lean_inc(v_y_1786_);
return v_y_1786_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar___lam__0___boxed(lean_object* v_x_1789_, lean_object* v_y_1790_, lean_object* v_z_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l_Lean_IR_FnBody_replaceVar___lam__0(v_x_1789_, v_y_1790_, v_z_1791_);
lean_dec(v_z_1791_);
lean_dec(v_y_1790_);
lean_dec(v_x_1789_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar(lean_object* v_x_1793_, lean_object* v_y_1794_, lean_object* v_b_1795_){
_start:
{
lean_object* v___f_1796_; lean_object* v___x_1797_; 
v___f_1796_ = lean_alloc_closure((void*)(l_Lean_IR_FnBody_replaceVar___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1796_, 0, v_x_1793_);
lean_closure_set(v___f_1796_, 1, v_y_1794_);
v___x_1797_ = l_Lean_IR_MapVars_mapFnBody(v___f_1796_, v_b_1795_);
return v___x_1797_;
}
}
lean_object* runtime_initialize_Lean_Compiler_IR_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_IR_NormIds(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_IR_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_IR_NormIds(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_IR_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_NormIds(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_NormIds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_IR_NormIds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_IR_NormIds(builtin);
}
#ifdef __cplusplus
}
#endif

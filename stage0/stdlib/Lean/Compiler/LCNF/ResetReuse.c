// Lean compiler output
// Module: Lean.Compiler.LCNF.ResetReuse
// Imports: public import Lean.Compiler.LCNF.CompilerM public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.LiveVars import Lean.Compiler.LCNF.DependsOn import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.PropagateBorrow
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
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(uint8_t, lean_object*);
lean_object* l_Lean_instSingletonFVarIdFVarIdSet___lam__0(lean_object*);
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_CodeDecl_dependsOn(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(uint8_t, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_applyOwnedness(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t l_Lean_Compiler_LCNF_instBEqOwnedness_beq(uint8_t, uint8_t);
uint8_t l_Lean_Compiler_LCNF_CtorInfo_isScalar(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateContImp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed__const__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.S.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Compiler.LCNF.ResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tobj"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value),LEAN_SCALAR_PTR_LITERAL(25, 168, 138, 20, 203, 141, 233, 12)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.D.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.Code.insertResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(uint8_t, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.Decl.insertResetReuseCore.collectResets"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "resetReuse"};
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_insertResetReuse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 201, 93, 114, 179, 16, 247, 72)}};
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_insertResetReuse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_insertResetReuse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_insertResetReuse;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(42, 22, 75, 214, 119, 69, 48, 225)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(lean_object* v_c_u2081_1_, lean_object* v_c_u2082_2_, lean_object* v_a_3_){
_start:
{
lean_object* v_name_5_; lean_object* v_size_6_; lean_object* v_usize_7_; lean_object* v_ssize_8_; lean_object* v_name_9_; lean_object* v_size_10_; lean_object* v_usize_11_; lean_object* v_ssize_12_; uint8_t v___x_13_; 
v_name_5_ = lean_ctor_get(v_c_u2081_1_, 0);
v_size_6_ = lean_ctor_get(v_c_u2081_1_, 2);
v_usize_7_ = lean_ctor_get(v_c_u2081_1_, 3);
v_ssize_8_ = lean_ctor_get(v_c_u2081_1_, 4);
v_name_9_ = lean_ctor_get(v_c_u2082_2_, 0);
v_size_10_ = lean_ctor_get(v_c_u2082_2_, 2);
v_usize_11_ = lean_ctor_get(v_c_u2082_2_, 3);
v_ssize_12_ = lean_ctor_get(v_c_u2082_2_, 4);
v___x_13_ = lean_nat_dec_eq(v_size_6_, v_size_10_);
if (v___x_13_ == 0)
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_box(v___x_13_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
else
{
uint8_t v___x_16_; 
v___x_16_ = lean_nat_dec_eq(v_usize_7_, v_usize_11_);
if (v___x_16_ == 0)
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_box(v___x_16_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
else
{
uint8_t v___x_19_; 
v___x_19_ = lean_nat_dec_eq(v_ssize_8_, v_ssize_12_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_box(v___x_19_);
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
return v___x_21_;
}
else
{
uint8_t v_relaxedReuse_22_; 
v_relaxedReuse_22_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*2);
if (v_relaxedReuse_22_ == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; uint8_t v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_23_ = l_Lean_Name_getPrefix(v_name_5_);
v___x_24_ = l_Lean_Name_getPrefix(v_name_9_);
v___x_25_ = lean_name_eq(v___x_23_, v___x_24_);
lean_dec(v___x_24_);
lean_dec(v___x_23_);
v___x_26_ = lean_box(v___x_25_);
v___x_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
else
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_box(v_relaxedReuse_22_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg___boxed(lean_object* v_c_u2081_30_, lean_object* v_c_u2082_31_, lean_object* v_a_32_, lean_object* v_a_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_c_u2081_30_, v_c_u2082_31_, v_a_32_);
lean_dec_ref(v_a_32_);
lean_dec_ref(v_c_u2082_31_);
lean_dec_ref(v_c_u2081_30_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(lean_object* v_c_u2081_35_, lean_object* v_c_u2082_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_c_u2081_35_, v_c_u2082_36_, v_a_37_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___boxed(lean_object* v_c_u2081_44_, lean_object* v_c_u2082_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(v_c_u2081_44_, v_c_u2082_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_a_46_);
lean_dec_ref(v_c_u2082_45_);
lean_dec_ref(v_c_u2081_44_);
return v_res_52_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(lean_object* v_msg_54_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_56_ = lean_panic_fn_borrowed(v___x_55_, v_msg_54_);
return v___x_56_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_instMonadEIO___redArg();
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(lean_object* v_msg_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v_toApplicative_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_106_; 
v___x_67_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_68_ = l_StateRefT_x27_instMonad___redArg(v___x_67_);
v_toApplicative_69_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_106_ == 0)
{
lean_object* v_unused_107_; 
v_unused_107_ = lean_ctor_get(v___x_68_, 1);
lean_dec(v_unused_107_);
v___x_71_ = v___x_68_;
v_isShared_72_ = v_isSharedCheck_106_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_toApplicative_69_);
lean_dec(v___x_68_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_106_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v_toFunctor_73_; lean_object* v_toSeq_74_; lean_object* v_toSeqLeft_75_; lean_object* v_toSeqRight_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_104_; 
v_toFunctor_73_ = lean_ctor_get(v_toApplicative_69_, 0);
v_toSeq_74_ = lean_ctor_get(v_toApplicative_69_, 2);
v_toSeqLeft_75_ = lean_ctor_get(v_toApplicative_69_, 3);
v_toSeqRight_76_ = lean_ctor_get(v_toApplicative_69_, 4);
v_isSharedCheck_104_ = !lean_is_exclusive(v_toApplicative_69_);
if (v_isSharedCheck_104_ == 0)
{
lean_object* v_unused_105_; 
v_unused_105_ = lean_ctor_get(v_toApplicative_69_, 1);
lean_dec(v_unused_105_);
v___x_78_ = v_toApplicative_69_;
v_isShared_79_ = v_isSharedCheck_104_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_toSeqRight_76_);
lean_inc(v_toSeqLeft_75_);
lean_inc(v_toSeq_74_);
lean_inc(v_toFunctor_73_);
lean_dec(v_toApplicative_69_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_104_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___f_80_; lean_object* v___f_81_; lean_object* v___f_82_; lean_object* v___f_83_; lean_object* v___x_84_; lean_object* v___f_85_; lean_object* v___f_86_; lean_object* v___f_87_; lean_object* v___x_89_; 
v___f_80_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_81_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_73_);
v___f_82_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_82_, 0, v_toFunctor_73_);
v___f_83_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_83_, 0, v_toFunctor_73_);
v___x_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_84_, 0, v___f_82_);
lean_ctor_set(v___x_84_, 1, v___f_83_);
v___f_85_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_85_, 0, v_toSeqRight_76_);
v___f_86_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_86_, 0, v_toSeqLeft_75_);
v___f_87_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_87_, 0, v_toSeq_74_);
if (v_isShared_79_ == 0)
{
lean_ctor_set(v___x_78_, 4, v___f_85_);
lean_ctor_set(v___x_78_, 3, v___f_86_);
lean_ctor_set(v___x_78_, 2, v___f_87_);
lean_ctor_set(v___x_78_, 1, v___f_80_);
lean_ctor_set(v___x_78_, 0, v___x_84_);
v___x_89_ = v___x_78_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_84_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v___f_80_);
lean_ctor_set(v_reuseFailAlloc_103_, 2, v___f_87_);
lean_ctor_set(v_reuseFailAlloc_103_, 3, v___f_86_);
lean_ctor_set(v_reuseFailAlloc_103_, 4, v___f_85_);
v___x_89_ = v_reuseFailAlloc_103_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_91_; 
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 1, v___f_81_);
lean_ctor_set(v___x_71_, 0, v___x_89_);
v___x_91_ = v___x_71_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___x_89_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v___f_81_);
v___x_91_ = v_reuseFailAlloc_102_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___f_98_; lean_object* v___f_99_; lean_object* v___x_3648__overap_100_; lean_object* v___x_101_; 
v___x_92_ = l_StateRefT_x27_instMonad___redArg(v___x_91_);
v___x_93_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_94_ = 0;
v___x_95_ = lean_box(v___x_94_);
v___x_96_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_93_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
v___x_97_ = l_instInhabitedOfMonad___redArg(v___x_92_, v___x_96_);
v___f_98_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_98_, 0, v___x_97_);
v___f_99_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_99_, 0, v___f_98_);
v___x_3648__overap_100_ = lean_panic_fn_borrowed(v___f_99_, v_msg_60_);
lean_dec_ref(v___f_99_);
lean_inc(v___y_65_);
lean_inc_ref(v___y_64_);
lean_inc(v___y_63_);
lean_inc_ref(v___y_62_);
lean_inc_ref(v___y_61_);
v___x_101_ = lean_apply_6(v___x_3648__overap_100_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, lean_box(0));
return v___x_101_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___boxed(lean_object* v_msg_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v_msg_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec_ref(v___y_109_);
return v_res_115_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(lean_object* v_as_116_, size_t v_i_117_, size_t v_stop_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = lean_usize_dec_eq(v_i_117_, v_stop_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = lean_array_uget_borrowed(v_as_116_, v_i_117_);
v___x_121_ = lean_unbox(v___x_120_);
if (v___x_121_ == 0)
{
size_t v___x_122_; size_t v___x_123_; 
v___x_122_ = ((size_t)1ULL);
v___x_123_ = lean_usize_add(v_i_117_, v___x_122_);
v_i_117_ = v___x_123_;
goto _start;
}
else
{
uint8_t v___x_125_; 
v___x_125_ = lean_unbox(v___x_120_);
return v___x_125_;
}
}
else
{
uint8_t v___x_126_; 
v___x_126_ = 0;
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2___boxed(lean_object* v_as_127_, lean_object* v_i_128_, lean_object* v_stop_129_){
_start:
{
size_t v_i_boxed_130_; size_t v_stop_boxed_131_; uint8_t v_res_132_; lean_object* v_r_133_; 
v_i_boxed_130_ = lean_unbox_usize(v_i_128_);
lean_dec(v_i_128_);
v_stop_boxed_131_ = lean_unbox_usize(v_stop_129_);
lean_dec(v_stop_129_);
v_res_132_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(v_as_127_, v_i_boxed_130_, v_stop_boxed_131_);
lean_dec_ref(v_as_127_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_137_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_138_ = lean_unsigned_to_nat(9u);
v___x_139_ = lean_unsigned_to_nat(642u);
v___x_140_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1));
v___x_141_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0));
v___x_142_ = l_mkPanicMessageWithDecl(v___x_141_, v___x_140_, v___x_139_, v___x_138_, v___x_137_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1___boxed(lean_object* v_info_145_, lean_object* v_w_146_, lean_object* v_sz_147_, lean_object* v_i_148_, lean_object* v_bs_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
size_t v_sz_boxed_156_; size_t v_i_boxed_157_; lean_object* v_res_158_; 
v_sz_boxed_156_ = lean_unbox_usize(v_sz_147_);
lean_dec(v_sz_147_);
v_i_boxed_157_ = lean_unbox_usize(v_i_148_);
lean_dec(v_i_148_);
v_res_158_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(v_info_145_, v_w_146_, v_sz_boxed_156_, v_i_boxed_157_, v_bs_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
lean_dec_ref(v___y_150_);
return v_res_158_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_161_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_162_ = lean_unsigned_to_nat(61u);
v___x_163_ = lean_unsigned_to_nat(125u);
v___x_164_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5));
v___x_165_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_166_ = l_mkPanicMessageWithDecl(v___x_165_, v___x_164_, v___x_163_, v___x_162_, v___x_161_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(lean_object* v_info_167_, lean_object* v_w_168_, lean_object* v_c_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_){
_start:
{
uint8_t v___y_177_; lean_object* v___y_178_; lean_object* v_k_183_; lean_object* v___y_184_; lean_object* v___y_185_; lean_object* v___y_186_; lean_object* v___y_187_; lean_object* v___y_188_; 
switch(lean_obj_tag(v_c_169_))
{
case 0:
{
lean_object* v_decl_403_; lean_object* v_value_404_; 
v_decl_403_ = lean_ctor_get(v_c_169_, 0);
lean_inc_ref(v_decl_403_);
v_value_404_ = lean_ctor_get(v_decl_403_, 3);
lean_inc(v_value_404_);
if (lean_obj_tag(v_value_404_) == 5)
{
lean_object* v_k_405_; lean_object* v_fvarId_406_; lean_object* v_binderName_407_; lean_object* v_type_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_463_; 
v_k_405_ = lean_ctor_get(v_c_169_, 1);
v_fvarId_406_ = lean_ctor_get(v_decl_403_, 0);
v_binderName_407_ = lean_ctor_get(v_decl_403_, 1);
v_type_408_ = lean_ctor_get(v_decl_403_, 2);
v_isSharedCheck_463_ = !lean_is_exclusive(v_decl_403_);
if (v_isSharedCheck_463_ == 0)
{
lean_object* v_unused_464_; 
v_unused_464_ = lean_ctor_get(v_decl_403_, 3);
lean_dec(v_unused_464_);
v___x_410_ = v_decl_403_;
v_isShared_411_ = v_isSharedCheck_463_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_type_408_);
lean_inc(v_binderName_407_);
lean_inc(v_fvarId_406_);
lean_dec(v_decl_403_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_463_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v_i_412_; lean_object* v_args_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_462_; 
v_i_412_ = lean_ctor_get(v_value_404_, 0);
v_args_413_ = lean_ctor_get(v_value_404_, 1);
v_isSharedCheck_462_ = !lean_is_exclusive(v_value_404_);
if (v_isSharedCheck_462_ == 0)
{
v___x_415_ = v_value_404_;
v_isShared_416_ = v_isSharedCheck_462_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_args_413_);
lean_inc(v_i_412_);
lean_dec(v_value_404_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_462_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
uint8_t v___x_417_; lean_object* v___x_419_; 
v___x_417_ = 1;
lean_inc_ref(v_args_413_);
lean_inc_ref(v_i_412_);
if (v_isShared_416_ == 0)
{
v___x_419_ = v___x_415_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_i_412_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_args_413_);
v___x_419_ = v_reuseFailAlloc_461_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
lean_object* v___x_421_; 
lean_inc_ref(v_type_408_);
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 3, v___x_419_);
v___x_421_ = v___x_410_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_fvarId_406_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_binderName_407_);
lean_ctor_set(v_reuseFailAlloc_460_, 2, v_type_408_);
lean_ctor_set(v_reuseFailAlloc_460_, 3, v___x_419_);
v___x_421_ = v_reuseFailAlloc_460_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
lean_object* v___x_422_; 
v___x_422_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_info_167_, v_i_412_, v_a_170_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_a_423_; uint8_t v___y_425_; uint8_t v___x_446_; 
v_a_423_ = lean_ctor_get(v___x_422_, 0);
lean_inc(v_a_423_);
lean_dec_ref_known(v___x_422_, 1);
v___x_446_ = lean_unbox(v_a_423_);
if (v___x_446_ == 0)
{
lean_dec(v_a_423_);
lean_dec_ref(v___x_421_);
lean_dec_ref(v_args_413_);
lean_dec_ref(v_i_412_);
lean_dec_ref(v_type_408_);
lean_inc_ref(v_k_405_);
v_k_183_ = v_k_405_;
v___y_184_ = v_a_170_;
v___y_185_ = v_a_171_;
v___y_186_ = v_a_172_;
v___y_187_ = v_a_173_;
v___y_188_ = v_a_174_;
goto v___jp_182_;
}
else
{
lean_object* v_cidx_447_; lean_object* v_cidx_448_; uint8_t v___x_449_; 
lean_inc_ref(v_k_405_);
lean_dec_ref_known(v_c_169_, 2);
v_cidx_447_ = lean_ctor_get(v_info_167_, 1);
lean_inc(v_cidx_447_);
lean_dec_ref(v_info_167_);
v_cidx_448_ = lean_ctor_get(v_i_412_, 1);
v___x_449_ = lean_nat_dec_eq(v_cidx_447_, v_cidx_448_);
lean_dec(v_cidx_447_);
if (v___x_449_ == 0)
{
uint8_t v___x_450_; 
v___x_450_ = lean_unbox(v_a_423_);
v___y_425_ = v___x_450_;
goto v___jp_424_;
}
else
{
uint8_t v___x_451_; 
v___x_451_ = 0;
v___y_425_ = v___x_451_;
goto v___jp_424_;
}
}
v___jp_424_:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = lean_alloc_ctor(12, 3, 1);
lean_ctor_set(v___x_426_, 0, v_w_168_);
lean_ctor_set(v___x_426_, 1, v_i_412_);
lean_ctor_set(v___x_426_, 2, v_args_413_);
lean_ctor_set_uint8(v___x_426_, sizeof(void*)*3, v___y_425_);
v___x_427_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_417_, v___x_421_, v_type_408_, v___x_426_, v_a_172_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_437_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_437_ == 0)
{
v___x_430_ = v___x_427_;
v_isShared_431_ = v_isSharedCheck_437_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_427_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_437_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_435_; 
v___x_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_432_, 0, v_a_428_);
lean_ctor_set(v___x_432_, 1, v_k_405_);
v___x_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
lean_ctor_set(v___x_433_, 1, v_a_423_);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v___x_433_);
v___x_435_ = v___x_430_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_433_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
else
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec(v_a_423_);
lean_dec_ref(v_k_405_);
v_a_438_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_427_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_427_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_438_);
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
}
else
{
lean_object* v_a_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_459_; 
lean_dec_ref(v___x_421_);
lean_dec_ref(v_args_413_);
lean_dec_ref(v_i_412_);
lean_dec_ref(v_type_408_);
lean_dec_ref_known(v_c_169_, 2);
lean_dec(v_w_168_);
lean_dec_ref(v_info_167_);
v_a_452_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_459_ == 0)
{
v___x_454_ = v___x_422_;
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_a_452_);
lean_dec(v___x_422_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_457_; 
if (v_isShared_455_ == 0)
{
v___x_457_ = v___x_454_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_a_452_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
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
lean_object* v_k_465_; 
lean_dec(v_value_404_);
lean_dec_ref(v_decl_403_);
v_k_465_ = lean_ctor_get(v_c_169_, 1);
lean_inc_ref(v_k_465_);
v_k_183_ = v_k_465_;
v___y_184_ = v_a_170_;
v___y_185_ = v_a_171_;
v___y_186_ = v_a_172_;
v___y_187_ = v_a_173_;
v___y_188_ = v_a_174_;
goto v___jp_182_;
}
}
case 2:
{
lean_object* v_decl_466_; lean_object* v_k_467_; lean_object* v_params_468_; lean_object* v_type_469_; lean_object* v_value_470_; uint8_t v___x_471_; lean_object* v___x_472_; 
v_decl_466_ = lean_ctor_get(v_c_169_, 0);
v_k_467_ = lean_ctor_get(v_c_169_, 1);
v_params_468_ = lean_ctor_get(v_decl_466_, 2);
v_type_469_ = lean_ctor_get(v_decl_466_, 3);
v_value_470_ = lean_ctor_get(v_decl_466_, 4);
v___x_471_ = 1;
lean_inc_ref(v_value_470_);
lean_inc(v_w_168_);
lean_inc_ref(v_info_167_);
v___x_472_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_167_, v_w_168_, v_value_470_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v_snd_474_; uint8_t v___x_475_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_473_);
lean_dec_ref_known(v___x_472_, 1);
v_snd_474_ = lean_ctor_get(v_a_473_, 1);
lean_inc(v_snd_474_);
v___x_475_ = lean_unbox(v_snd_474_);
if (v___x_475_ == 0)
{
lean_dec(v_snd_474_);
lean_dec(v_a_473_);
lean_inc_ref(v_k_467_);
v_k_183_ = v_k_467_;
v___y_184_ = v_a_170_;
v___y_185_ = v_a_171_;
v___y_186_ = v_a_172_;
v___y_187_ = v_a_173_;
v___y_188_ = v_a_174_;
goto v___jp_182_;
}
else
{
lean_object* v_fst_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_525_; 
lean_dec(v_w_168_);
lean_dec_ref(v_info_167_);
v_fst_476_ = lean_ctor_get(v_a_473_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v_a_473_);
if (v_isSharedCheck_525_ == 0)
{
lean_object* v_unused_526_; 
v_unused_526_ = lean_ctor_get(v_a_473_, 1);
lean_dec(v_unused_526_);
v___x_478_ = v_a_473_;
v_isShared_479_ = v_isSharedCheck_525_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_fst_476_);
lean_dec(v_a_473_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_525_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_480_; 
lean_inc_ref(v_params_468_);
lean_inc_ref(v_type_469_);
lean_inc_ref(v_decl_466_);
v___x_480_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_471_, v_decl_466_, v_type_469_, v_params_468_, v_fst_476_, v_a_172_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_516_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_516_ == 0)
{
v___x_483_ = v___x_480_;
v_isShared_484_ = v_isSharedCheck_516_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_480_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_516_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___y_486_; size_t v___x_493_; uint8_t v___x_494_; 
v___x_493_ = lean_ptr_addr(v_k_467_);
v___x_494_ = lean_usize_dec_eq(v___x_493_, v___x_493_);
if (v___x_494_ == 0)
{
lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
lean_inc_ref(v_k_467_);
v_isSharedCheck_501_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_501_ == 0)
{
lean_object* v_unused_502_; lean_object* v_unused_503_; 
v_unused_502_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_502_);
v_unused_503_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_503_);
v___x_496_ = v_c_169_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_dec(v_c_169_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 0, v_a_481_);
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_481_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_k_467_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
v___y_486_ = v___x_499_;
goto v___jp_485_;
}
}
}
else
{
size_t v___x_504_; size_t v___x_505_; uint8_t v___x_506_; 
v___x_504_ = lean_ptr_addr(v_decl_466_);
v___x_505_ = lean_ptr_addr(v_a_481_);
v___x_506_ = lean_usize_dec_eq(v___x_504_, v___x_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_513_; 
lean_inc_ref(v_k_467_);
v_isSharedCheck_513_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_513_ == 0)
{
lean_object* v_unused_514_; lean_object* v_unused_515_; 
v_unused_514_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_514_);
v_unused_515_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_515_);
v___x_508_ = v_c_169_;
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
else
{
lean_dec(v_c_169_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 0, v_a_481_);
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_a_481_);
lean_ctor_set(v_reuseFailAlloc_512_, 1, v_k_467_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
v___y_486_ = v___x_511_;
goto v___jp_485_;
}
}
}
else
{
lean_dec(v_a_481_);
v___y_486_ = v_c_169_;
goto v___jp_485_;
}
}
v___jp_485_:
{
lean_object* v___x_488_; 
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v___y_486_);
v___x_488_ = v___x_478_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v___y_486_);
lean_ctor_set(v_reuseFailAlloc_492_, 1, v_snd_474_);
v___x_488_ = v_reuseFailAlloc_492_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
lean_object* v___x_490_; 
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v___x_488_);
v___x_490_ = v___x_483_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___x_488_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
}
else
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
lean_del_object(v___x_478_);
lean_dec(v_snd_474_);
lean_dec_ref_known(v_c_169_, 2);
v_a_517_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_524_ == 0)
{
v___x_519_ = v___x_480_;
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_480_);
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
}
}
else
{
lean_dec_ref_known(v_c_169_, 2);
lean_dec(v_w_168_);
lean_dec_ref(v_info_167_);
return v___x_472_;
}
}
case 3:
{
uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
lean_dec(v_w_168_);
lean_dec_ref(v_info_167_);
v___x_527_ = 0;
v___x_528_ = lean_box(v___x_527_);
v___x_529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_529_, 0, v_c_169_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
v___x_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
return v___x_530_;
}
case 4:
{
lean_object* v_cases_531_; lean_object* v_typeName_532_; lean_object* v_resultType_533_; lean_object* v_discr_534_; lean_object* v_alts_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_592_; 
v_cases_531_ = lean_ctor_get(v_c_169_, 0);
lean_inc_ref(v_cases_531_);
v_typeName_532_ = lean_ctor_get(v_cases_531_, 0);
v_resultType_533_ = lean_ctor_get(v_cases_531_, 1);
v_discr_534_ = lean_ctor_get(v_cases_531_, 2);
v_alts_535_ = lean_ctor_get(v_cases_531_, 3);
v_isSharedCheck_592_ = !lean_is_exclusive(v_cases_531_);
if (v_isSharedCheck_592_ == 0)
{
v___x_537_ = v_cases_531_;
v_isShared_538_ = v_isSharedCheck_592_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_alts_535_);
lean_inc(v_discr_534_);
lean_inc(v_resultType_533_);
lean_inc(v_typeName_532_);
lean_dec(v_cases_531_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_592_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
size_t v_sz_539_; size_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_3766__overap_545_; lean_object* v___x_546_; 
v_sz_539_ = lean_array_size(v_alts_535_);
v___x_540_ = ((size_t)0ULL);
v___x_541_ = l_unsafeCast___redArg(v_alts_535_);
v___x_542_ = lean_box_usize(v_sz_539_);
v___x_543_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed__const__1));
v___x_544_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1___boxed), 11, 5);
lean_closure_set(v___x_544_, 0, v_info_167_);
lean_closure_set(v___x_544_, 1, v_w_168_);
lean_closure_set(v___x_544_, 2, v___x_542_);
lean_closure_set(v___x_544_, 3, v___x_543_);
lean_closure_set(v___x_544_, 4, v___x_541_);
v___x_3766__overap_545_ = l_unsafeCast___redArg(v___x_544_);
lean_dec_ref(v___x_544_);
lean_inc(v_a_174_);
lean_inc_ref(v_a_173_);
lean_inc(v_a_172_);
lean_inc_ref(v_a_171_);
lean_inc_ref(v_a_170_);
v___x_546_ = lean_apply_6(v___x_3766__overap_545_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, lean_box(0));
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_583_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_583_ == 0)
{
v___x_549_ = v___x_546_;
v_isShared_550_ = v_isSharedCheck_583_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_546_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_583_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___y_552_; uint8_t v___y_553_; lean_object* v___x_559_; lean_object* v_fst_560_; lean_object* v_snd_561_; lean_object* v___y_563_; size_t v___x_569_; size_t v___x_570_; uint8_t v___x_571_; 
v___x_559_ = l_Array_unzip___redArg(v_a_547_);
lean_dec(v_a_547_);
v_fst_560_ = lean_ctor_get(v___x_559_, 0);
lean_inc(v_fst_560_);
v_snd_561_ = lean_ctor_get(v___x_559_, 1);
lean_inc(v_snd_561_);
lean_dec_ref(v___x_559_);
v___x_569_ = lean_ptr_addr(v_alts_535_);
lean_dec_ref(v_alts_535_);
v___x_570_ = lean_ptr_addr(v_fst_560_);
v___x_571_ = lean_usize_dec_eq(v___x_569_, v___x_570_);
if (v___x_571_ == 0)
{
lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_581_; 
v_isSharedCheck_581_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; 
v_unused_582_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_582_);
v___x_573_ = v_c_169_;
v_isShared_574_ = v_isSharedCheck_581_;
goto v_resetjp_572_;
}
else
{
lean_dec(v_c_169_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_581_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 3, v_fst_560_);
v___x_576_ = v___x_537_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_typeName_532_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v_resultType_533_);
lean_ctor_set(v_reuseFailAlloc_580_, 2, v_discr_534_);
lean_ctor_set(v_reuseFailAlloc_580_, 3, v_fst_560_);
v___x_576_ = v_reuseFailAlloc_580_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_578_; 
if (v_isShared_574_ == 0)
{
lean_ctor_set(v___x_573_, 0, v___x_576_);
v___x_578_ = v___x_573_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
v___y_563_ = v___x_578_;
goto v___jp_562_;
}
}
}
}
else
{
lean_dec(v_fst_560_);
lean_del_object(v___x_537_);
lean_dec(v_discr_534_);
lean_dec_ref(v_resultType_533_);
lean_dec(v_typeName_532_);
v___y_563_ = v_c_169_;
goto v___jp_562_;
}
v___jp_551_:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_557_; 
v___x_554_ = lean_box(v___y_553_);
v___x_555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_555_, 0, v___y_552_);
lean_ctor_set(v___x_555_, 1, v___x_554_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v___x_555_);
v___x_557_ = v___x_549_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v___x_555_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
v___jp_562_:
{
lean_object* v___x_564_; lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_564_ = lean_unsigned_to_nat(0u);
v___x_565_ = lean_array_get_size(v_snd_561_);
v___x_566_ = lean_nat_dec_lt(v___x_564_, v___x_565_);
if (v___x_566_ == 0)
{
lean_dec(v_snd_561_);
v___y_552_ = v___y_563_;
v___y_553_ = v___x_566_;
goto v___jp_551_;
}
else
{
if (v___x_566_ == 0)
{
lean_dec(v_snd_561_);
v___y_552_ = v___y_563_;
v___y_553_ = v___x_566_;
goto v___jp_551_;
}
else
{
size_t v___x_567_; uint8_t v___x_568_; 
v___x_567_ = lean_usize_of_nat(v___x_565_);
v___x_568_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(v_snd_561_, v___x_540_, v___x_567_);
lean_dec(v_snd_561_);
v___y_552_ = v___y_563_;
v___y_553_ = v___x_568_;
goto v___jp_551_;
}
}
}
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
lean_del_object(v___x_537_);
lean_dec_ref(v_alts_535_);
lean_dec(v_discr_534_);
lean_dec_ref(v_resultType_533_);
lean_dec(v_typeName_532_);
lean_dec_ref_known(v_c_169_, 1);
v_a_584_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_546_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_546_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
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
case 5:
{
uint8_t v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
lean_dec(v_w_168_);
lean_dec_ref(v_info_167_);
v___x_593_ = 0;
v___x_594_ = lean_box(v___x_593_);
v___x_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_595_, 0, v_c_169_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
return v___x_596_;
}
case 6:
{
uint8_t v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
lean_dec(v_w_168_);
lean_dec_ref(v_info_167_);
v___x_597_ = 0;
v___x_598_ = lean_box(v___x_597_);
v___x_599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_599_, 0, v_c_169_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v___x_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
return v___x_600_;
}
case 8:
{
lean_object* v_k_601_; 
v_k_601_ = lean_ctor_get(v_c_169_, 3);
lean_inc_ref(v_k_601_);
v_k_183_ = v_k_601_;
v___y_184_ = v_a_170_;
v___y_185_ = v_a_171_;
v___y_186_ = v_a_172_;
v___y_187_ = v_a_173_;
v___y_188_ = v_a_174_;
goto v___jp_182_;
}
case 9:
{
lean_object* v_k_602_; 
v_k_602_ = lean_ctor_get(v_c_169_, 5);
lean_inc_ref(v_k_602_);
v_k_183_ = v_k_602_;
v___y_184_ = v_a_170_;
v___y_185_ = v_a_171_;
v___y_186_ = v_a_172_;
v___y_187_ = v_a_173_;
v___y_188_ = v_a_174_;
goto v___jp_182_;
}
default: 
{
lean_object* v___x_603_; lean_object* v___x_604_; 
lean_dec_ref(v_c_169_);
lean_dec(v_w_168_);
lean_dec_ref(v_info_167_);
v___x_603_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6);
v___x_604_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v___x_603_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
return v___x_604_;
}
}
v___jp_176_:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_179_ = lean_box(v___y_177_);
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v___y_178_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
v___x_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
return v___x_181_;
}
v___jp_182_:
{
lean_object* v___x_189_; 
v___x_189_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_167_, v_w_168_, v_k_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_190_; 
v_a_190_ = lean_ctor_get(v___x_189_, 0);
lean_inc(v_a_190_);
lean_dec_ref_known(v___x_189_, 1);
switch(lean_obj_tag(v_c_169_))
{
case 0:
{
lean_object* v_fst_191_; lean_object* v_snd_192_; lean_object* v_decl_193_; lean_object* v_k_194_; size_t v___x_195_; size_t v___x_196_; uint8_t v___x_197_; 
v_fst_191_ = lean_ctor_get(v_a_190_, 0);
lean_inc(v_fst_191_);
v_snd_192_ = lean_ctor_get(v_a_190_, 1);
lean_inc(v_snd_192_);
lean_dec(v_a_190_);
v_decl_193_ = lean_ctor_get(v_c_169_, 0);
v_k_194_ = lean_ctor_get(v_c_169_, 1);
v___x_195_ = lean_ptr_addr(v_k_194_);
v___x_196_ = lean_ptr_addr(v_fst_191_);
v___x_197_ = lean_usize_dec_eq(v___x_195_, v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_205_; 
lean_inc_ref(v_decl_193_);
v_isSharedCheck_205_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_205_ == 0)
{
lean_object* v_unused_206_; lean_object* v_unused_207_; 
v_unused_206_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_206_);
v_unused_207_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_207_);
v___x_199_ = v_c_169_;
v_isShared_200_ = v_isSharedCheck_205_;
goto v_resetjp_198_;
}
else
{
lean_dec(v_c_169_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_205_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v_fst_191_);
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_decl_193_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v_fst_191_);
v___x_202_ = v_reuseFailAlloc_204_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
uint8_t v___x_203_; 
v___x_203_ = lean_unbox(v_snd_192_);
lean_dec(v_snd_192_);
v___y_177_ = v___x_203_;
v___y_178_ = v___x_202_;
goto v___jp_176_;
}
}
}
else
{
uint8_t v___x_208_; 
lean_dec(v_fst_191_);
v___x_208_ = lean_unbox(v_snd_192_);
lean_dec(v_snd_192_);
v___y_177_ = v___x_208_;
v___y_178_ = v_c_169_;
goto v___jp_176_;
}
}
case 1:
{
lean_object* v_fst_209_; lean_object* v_snd_210_; lean_object* v_decl_211_; lean_object* v_k_212_; size_t v___x_213_; size_t v___x_214_; uint8_t v___x_215_; 
v_fst_209_ = lean_ctor_get(v_a_190_, 0);
lean_inc(v_fst_209_);
v_snd_210_ = lean_ctor_get(v_a_190_, 1);
lean_inc(v_snd_210_);
lean_dec(v_a_190_);
v_decl_211_ = lean_ctor_get(v_c_169_, 0);
v_k_212_ = lean_ctor_get(v_c_169_, 1);
v___x_213_ = lean_ptr_addr(v_k_212_);
v___x_214_ = lean_ptr_addr(v_fst_209_);
v___x_215_ = lean_usize_dec_eq(v___x_213_, v___x_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_223_; 
lean_inc_ref(v_decl_211_);
v_isSharedCheck_223_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_223_ == 0)
{
lean_object* v_unused_224_; lean_object* v_unused_225_; 
v_unused_224_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_224_);
v_unused_225_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_225_);
v___x_217_ = v_c_169_;
v_isShared_218_ = v_isSharedCheck_223_;
goto v_resetjp_216_;
}
else
{
lean_dec(v_c_169_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_223_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 1, v_fst_209_);
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_decl_211_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v_fst_209_);
v___x_220_ = v_reuseFailAlloc_222_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
uint8_t v___x_221_; 
v___x_221_ = lean_unbox(v_snd_210_);
lean_dec(v_snd_210_);
v___y_177_ = v___x_221_;
v___y_178_ = v___x_220_;
goto v___jp_176_;
}
}
}
else
{
uint8_t v___x_226_; 
lean_dec(v_fst_209_);
v___x_226_ = lean_unbox(v_snd_210_);
lean_dec(v_snd_210_);
v___y_177_ = v___x_226_;
v___y_178_ = v_c_169_;
goto v___jp_176_;
}
}
case 2:
{
lean_object* v_fst_227_; lean_object* v_snd_228_; lean_object* v_decl_229_; lean_object* v_k_230_; size_t v___x_231_; size_t v___x_232_; uint8_t v___x_233_; 
v_fst_227_ = lean_ctor_get(v_a_190_, 0);
lean_inc(v_fst_227_);
v_snd_228_ = lean_ctor_get(v_a_190_, 1);
lean_inc(v_snd_228_);
lean_dec(v_a_190_);
v_decl_229_ = lean_ctor_get(v_c_169_, 0);
v_k_230_ = lean_ctor_get(v_c_169_, 1);
v___x_231_ = lean_ptr_addr(v_k_230_);
v___x_232_ = lean_ptr_addr(v_fst_227_);
v___x_233_ = lean_usize_dec_eq(v___x_231_, v___x_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_241_; 
lean_inc_ref(v_decl_229_);
v_isSharedCheck_241_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_241_ == 0)
{
lean_object* v_unused_242_; lean_object* v_unused_243_; 
v_unused_242_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_242_);
v_unused_243_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_243_);
v___x_235_ = v_c_169_;
v_isShared_236_ = v_isSharedCheck_241_;
goto v_resetjp_234_;
}
else
{
lean_dec(v_c_169_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_241_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v_fst_227_);
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_decl_229_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v_fst_227_);
v___x_238_ = v_reuseFailAlloc_240_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
uint8_t v___x_239_; 
v___x_239_ = lean_unbox(v_snd_228_);
lean_dec(v_snd_228_);
v___y_177_ = v___x_239_;
v___y_178_ = v___x_238_;
goto v___jp_176_;
}
}
}
else
{
uint8_t v___x_244_; 
lean_dec(v_fst_227_);
v___x_244_ = lean_unbox(v_snd_228_);
lean_dec(v_snd_228_);
v___y_177_ = v___x_244_;
v___y_178_ = v_c_169_;
goto v___jp_176_;
}
}
case 7:
{
lean_object* v_fst_245_; lean_object* v_snd_246_; lean_object* v_fvarId_247_; lean_object* v_i_248_; lean_object* v_y_249_; lean_object* v_k_250_; size_t v___x_251_; size_t v___x_252_; uint8_t v___x_253_; 
v_fst_245_ = lean_ctor_get(v_a_190_, 0);
lean_inc(v_fst_245_);
v_snd_246_ = lean_ctor_get(v_a_190_, 1);
lean_inc(v_snd_246_);
lean_dec(v_a_190_);
v_fvarId_247_ = lean_ctor_get(v_c_169_, 0);
v_i_248_ = lean_ctor_get(v_c_169_, 1);
v_y_249_ = lean_ctor_get(v_c_169_, 2);
v_k_250_ = lean_ctor_get(v_c_169_, 3);
v___x_251_ = lean_ptr_addr(v_k_250_);
v___x_252_ = lean_ptr_addr(v_fst_245_);
v___x_253_ = lean_usize_dec_eq(v___x_251_, v___x_252_);
if (v___x_253_ == 0)
{
lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_261_; 
lean_inc(v_y_249_);
lean_inc(v_i_248_);
lean_inc(v_fvarId_247_);
v_isSharedCheck_261_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_261_ == 0)
{
lean_object* v_unused_262_; lean_object* v_unused_263_; lean_object* v_unused_264_; lean_object* v_unused_265_; 
v_unused_262_ = lean_ctor_get(v_c_169_, 3);
lean_dec(v_unused_262_);
v_unused_263_ = lean_ctor_get(v_c_169_, 2);
lean_dec(v_unused_263_);
v_unused_264_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_264_);
v_unused_265_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_265_);
v___x_255_ = v_c_169_;
v_isShared_256_ = v_isSharedCheck_261_;
goto v_resetjp_254_;
}
else
{
lean_dec(v_c_169_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_261_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 3, v_fst_245_);
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_fvarId_247_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v_i_248_);
lean_ctor_set(v_reuseFailAlloc_260_, 2, v_y_249_);
lean_ctor_set(v_reuseFailAlloc_260_, 3, v_fst_245_);
v___x_258_ = v_reuseFailAlloc_260_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
uint8_t v___x_259_; 
v___x_259_ = lean_unbox(v_snd_246_);
lean_dec(v_snd_246_);
v___y_177_ = v___x_259_;
v___y_178_ = v___x_258_;
goto v___jp_176_;
}
}
}
else
{
uint8_t v___x_266_; 
lean_dec(v_fst_245_);
v___x_266_ = lean_unbox(v_snd_246_);
lean_dec(v_snd_246_);
v___y_177_ = v___x_266_;
v___y_178_ = v_c_169_;
goto v___jp_176_;
}
}
case 9:
{
lean_object* v_fst_267_; lean_object* v_snd_268_; lean_object* v_fvarId_269_; lean_object* v_i_270_; lean_object* v_offset_271_; lean_object* v_y_272_; lean_object* v_ty_273_; lean_object* v_k_274_; size_t v___x_275_; size_t v___x_276_; uint8_t v___x_277_; 
v_fst_267_ = lean_ctor_get(v_a_190_, 0);
lean_inc(v_fst_267_);
v_snd_268_ = lean_ctor_get(v_a_190_, 1);
lean_inc(v_snd_268_);
lean_dec(v_a_190_);
v_fvarId_269_ = lean_ctor_get(v_c_169_, 0);
v_i_270_ = lean_ctor_get(v_c_169_, 1);
v_offset_271_ = lean_ctor_get(v_c_169_, 2);
v_y_272_ = lean_ctor_get(v_c_169_, 3);
v_ty_273_ = lean_ctor_get(v_c_169_, 4);
v_k_274_ = lean_ctor_get(v_c_169_, 5);
v___x_275_ = lean_ptr_addr(v_k_274_);
v___x_276_ = lean_ptr_addr(v_fst_267_);
v___x_277_ = lean_usize_dec_eq(v___x_275_, v___x_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_285_; 
lean_inc_ref(v_ty_273_);
lean_inc(v_y_272_);
lean_inc(v_offset_271_);
lean_inc(v_i_270_);
lean_inc(v_fvarId_269_);
v_isSharedCheck_285_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_285_ == 0)
{
lean_object* v_unused_286_; lean_object* v_unused_287_; lean_object* v_unused_288_; lean_object* v_unused_289_; lean_object* v_unused_290_; lean_object* v_unused_291_; 
v_unused_286_ = lean_ctor_get(v_c_169_, 5);
lean_dec(v_unused_286_);
v_unused_287_ = lean_ctor_get(v_c_169_, 4);
lean_dec(v_unused_287_);
v_unused_288_ = lean_ctor_get(v_c_169_, 3);
lean_dec(v_unused_288_);
v_unused_289_ = lean_ctor_get(v_c_169_, 2);
lean_dec(v_unused_289_);
v_unused_290_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_290_);
v_unused_291_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_291_);
v___x_279_ = v_c_169_;
v_isShared_280_ = v_isSharedCheck_285_;
goto v_resetjp_278_;
}
else
{
lean_dec(v_c_169_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_285_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 5, v_fst_267_);
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_fvarId_269_);
lean_ctor_set(v_reuseFailAlloc_284_, 1, v_i_270_);
lean_ctor_set(v_reuseFailAlloc_284_, 2, v_offset_271_);
lean_ctor_set(v_reuseFailAlloc_284_, 3, v_y_272_);
lean_ctor_set(v_reuseFailAlloc_284_, 4, v_ty_273_);
lean_ctor_set(v_reuseFailAlloc_284_, 5, v_fst_267_);
v___x_282_ = v_reuseFailAlloc_284_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
uint8_t v___x_283_; 
v___x_283_ = lean_unbox(v_snd_268_);
lean_dec(v_snd_268_);
v___y_177_ = v___x_283_;
v___y_178_ = v___x_282_;
goto v___jp_176_;
}
}
}
else
{
uint8_t v___x_292_; 
lean_dec(v_fst_267_);
v___x_292_ = lean_unbox(v_snd_268_);
lean_dec(v_snd_268_);
v___y_177_ = v___x_292_;
v___y_178_ = v_c_169_;
goto v___jp_176_;
}
}
case 8:
{
lean_object* v_fst_293_; lean_object* v_snd_294_; lean_object* v_fvarId_295_; lean_object* v_i_296_; lean_object* v_y_297_; lean_object* v_k_298_; size_t v___x_299_; size_t v___x_300_; uint8_t v___x_301_; 
v_fst_293_ = lean_ctor_get(v_a_190_, 0);
lean_inc(v_fst_293_);
v_snd_294_ = lean_ctor_get(v_a_190_, 1);
lean_inc(v_snd_294_);
lean_dec(v_a_190_);
v_fvarId_295_ = lean_ctor_get(v_c_169_, 0);
v_i_296_ = lean_ctor_get(v_c_169_, 1);
v_y_297_ = lean_ctor_get(v_c_169_, 2);
v_k_298_ = lean_ctor_get(v_c_169_, 3);
v___x_299_ = lean_ptr_addr(v_k_298_);
v___x_300_ = lean_ptr_addr(v_fst_293_);
v___x_301_ = lean_usize_dec_eq(v___x_299_, v___x_300_);
if (v___x_301_ == 0)
{
lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_309_; 
lean_inc(v_y_297_);
lean_inc(v_i_296_);
lean_inc(v_fvarId_295_);
v_isSharedCheck_309_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_309_ == 0)
{
lean_object* v_unused_310_; lean_object* v_unused_311_; lean_object* v_unused_312_; lean_object* v_unused_313_; 
v_unused_310_ = lean_ctor_get(v_c_169_, 3);
lean_dec(v_unused_310_);
v_unused_311_ = lean_ctor_get(v_c_169_, 2);
lean_dec(v_unused_311_);
v_unused_312_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_312_);
v_unused_313_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_313_);
v___x_303_ = v_c_169_;
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
else
{
lean_dec(v_c_169_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 3, v_fst_293_);
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_fvarId_295_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v_i_296_);
lean_ctor_set(v_reuseFailAlloc_308_, 2, v_y_297_);
lean_ctor_set(v_reuseFailAlloc_308_, 3, v_fst_293_);
v___x_306_ = v_reuseFailAlloc_308_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
uint8_t v___x_307_; 
v___x_307_ = lean_unbox(v_snd_294_);
lean_dec(v_snd_294_);
v___y_177_ = v___x_307_;
v___y_178_ = v___x_306_;
goto v___jp_176_;
}
}
}
else
{
uint8_t v___x_314_; 
lean_dec(v_fst_293_);
v___x_314_ = lean_unbox(v_snd_294_);
lean_dec(v_snd_294_);
v___y_177_ = v___x_314_;
v___y_178_ = v_c_169_;
goto v___jp_176_;
}
}
case 10:
{
lean_object* v_fst_315_; lean_object* v_snd_316_; lean_object* v_fvarId_317_; lean_object* v_cidx_318_; lean_object* v_k_319_; size_t v___x_320_; size_t v___x_321_; uint8_t v___x_322_; 
v_fst_315_ = lean_ctor_get(v_a_190_, 0);
lean_inc(v_fst_315_);
v_snd_316_ = lean_ctor_get(v_a_190_, 1);
lean_inc(v_snd_316_);
lean_dec(v_a_190_);
v_fvarId_317_ = lean_ctor_get(v_c_169_, 0);
v_cidx_318_ = lean_ctor_get(v_c_169_, 1);
v_k_319_ = lean_ctor_get(v_c_169_, 2);
v___x_320_ = lean_ptr_addr(v_k_319_);
v___x_321_ = lean_ptr_addr(v_fst_315_);
v___x_322_ = lean_usize_dec_eq(v___x_320_, v___x_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_330_; 
lean_inc(v_cidx_318_);
lean_inc(v_fvarId_317_);
v_isSharedCheck_330_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_330_ == 0)
{
lean_object* v_unused_331_; lean_object* v_unused_332_; lean_object* v_unused_333_; 
v_unused_331_ = lean_ctor_get(v_c_169_, 2);
lean_dec(v_unused_331_);
v_unused_332_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_332_);
v_unused_333_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_333_);
v___x_324_ = v_c_169_;
v_isShared_325_ = v_isSharedCheck_330_;
goto v_resetjp_323_;
}
else
{
lean_dec(v_c_169_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_330_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_327_; 
if (v_isShared_325_ == 0)
{
lean_ctor_set(v___x_324_, 2, v_fst_315_);
v___x_327_ = v___x_324_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_fvarId_317_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_cidx_318_);
lean_ctor_set(v_reuseFailAlloc_329_, 2, v_fst_315_);
v___x_327_ = v_reuseFailAlloc_329_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
uint8_t v___x_328_; 
v___x_328_ = lean_unbox(v_snd_316_);
lean_dec(v_snd_316_);
v___y_177_ = v___x_328_;
v___y_178_ = v___x_327_;
goto v___jp_176_;
}
}
}
else
{
uint8_t v___x_334_; 
lean_dec(v_fst_315_);
v___x_334_ = lean_unbox(v_snd_316_);
lean_dec(v_snd_316_);
v___y_177_ = v___x_334_;
v___y_178_ = v_c_169_;
goto v___jp_176_;
}
}
case 11:
{
lean_object* v_fst_335_; lean_object* v_snd_336_; lean_object* v_fvarId_337_; lean_object* v_n_338_; uint8_t v_check_339_; uint8_t v_persistent_340_; lean_object* v_k_341_; size_t v___x_342_; size_t v___x_343_; uint8_t v___x_344_; 
v_fst_335_ = lean_ctor_get(v_a_190_, 0);
lean_inc(v_fst_335_);
v_snd_336_ = lean_ctor_get(v_a_190_, 1);
lean_inc(v_snd_336_);
lean_dec(v_a_190_);
v_fvarId_337_ = lean_ctor_get(v_c_169_, 0);
v_n_338_ = lean_ctor_get(v_c_169_, 1);
v_check_339_ = lean_ctor_get_uint8(v_c_169_, sizeof(void*)*3);
v_persistent_340_ = lean_ctor_get_uint8(v_c_169_, sizeof(void*)*3 + 1);
v_k_341_ = lean_ctor_get(v_c_169_, 2);
v___x_342_ = lean_ptr_addr(v_k_341_);
v___x_343_ = lean_ptr_addr(v_fst_335_);
v___x_344_ = lean_usize_dec_eq(v___x_342_, v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_352_; 
lean_inc(v_n_338_);
lean_inc(v_fvarId_337_);
v_isSharedCheck_352_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_352_ == 0)
{
lean_object* v_unused_353_; lean_object* v_unused_354_; lean_object* v_unused_355_; 
v_unused_353_ = lean_ctor_get(v_c_169_, 2);
lean_dec(v_unused_353_);
v_unused_354_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_354_);
v_unused_355_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_355_);
v___x_346_ = v_c_169_;
v_isShared_347_ = v_isSharedCheck_352_;
goto v_resetjp_345_;
}
else
{
lean_dec(v_c_169_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_352_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 2, v_fst_335_);
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_fvarId_337_);
lean_ctor_set(v_reuseFailAlloc_351_, 1, v_n_338_);
lean_ctor_set(v_reuseFailAlloc_351_, 2, v_fst_335_);
lean_ctor_set_uint8(v_reuseFailAlloc_351_, sizeof(void*)*3, v_check_339_);
lean_ctor_set_uint8(v_reuseFailAlloc_351_, sizeof(void*)*3 + 1, v_persistent_340_);
v___x_349_ = v_reuseFailAlloc_351_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
uint8_t v___x_350_; 
v___x_350_ = lean_unbox(v_snd_336_);
lean_dec(v_snd_336_);
v___y_177_ = v___x_350_;
v___y_178_ = v___x_349_;
goto v___jp_176_;
}
}
}
else
{
uint8_t v___x_356_; 
lean_dec(v_fst_335_);
v___x_356_ = lean_unbox(v_snd_336_);
lean_dec(v_snd_336_);
v___y_177_ = v___x_356_;
v___y_178_ = v_c_169_;
goto v___jp_176_;
}
}
case 12:
{
lean_object* v_fst_357_; lean_object* v_snd_358_; lean_object* v_fvarId_359_; lean_object* v_n_360_; uint8_t v_check_361_; uint8_t v_persistent_362_; lean_object* v_objs_x3f_363_; lean_object* v_k_364_; size_t v___x_365_; size_t v___x_366_; uint8_t v___x_367_; 
v_fst_357_ = lean_ctor_get(v_a_190_, 0);
lean_inc(v_fst_357_);
v_snd_358_ = lean_ctor_get(v_a_190_, 1);
lean_inc(v_snd_358_);
lean_dec(v_a_190_);
v_fvarId_359_ = lean_ctor_get(v_c_169_, 0);
v_n_360_ = lean_ctor_get(v_c_169_, 1);
v_check_361_ = lean_ctor_get_uint8(v_c_169_, sizeof(void*)*4);
v_persistent_362_ = lean_ctor_get_uint8(v_c_169_, sizeof(void*)*4 + 1);
v_objs_x3f_363_ = lean_ctor_get(v_c_169_, 2);
v_k_364_ = lean_ctor_get(v_c_169_, 3);
v___x_365_ = lean_ptr_addr(v_k_364_);
v___x_366_ = lean_ptr_addr(v_fst_357_);
v___x_367_ = lean_usize_dec_eq(v___x_365_, v___x_366_);
if (v___x_367_ == 0)
{
lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_375_; 
lean_inc(v_objs_x3f_363_);
lean_inc(v_n_360_);
lean_inc(v_fvarId_359_);
v_isSharedCheck_375_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_375_ == 0)
{
lean_object* v_unused_376_; lean_object* v_unused_377_; lean_object* v_unused_378_; lean_object* v_unused_379_; 
v_unused_376_ = lean_ctor_get(v_c_169_, 3);
lean_dec(v_unused_376_);
v_unused_377_ = lean_ctor_get(v_c_169_, 2);
lean_dec(v_unused_377_);
v_unused_378_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_378_);
v_unused_379_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_379_);
v___x_369_ = v_c_169_;
v_isShared_370_ = v_isSharedCheck_375_;
goto v_resetjp_368_;
}
else
{
lean_dec(v_c_169_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_375_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 3, v_fst_357_);
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_fvarId_359_);
lean_ctor_set(v_reuseFailAlloc_374_, 1, v_n_360_);
lean_ctor_set(v_reuseFailAlloc_374_, 2, v_objs_x3f_363_);
lean_ctor_set(v_reuseFailAlloc_374_, 3, v_fst_357_);
lean_ctor_set_uint8(v_reuseFailAlloc_374_, sizeof(void*)*4, v_check_361_);
lean_ctor_set_uint8(v_reuseFailAlloc_374_, sizeof(void*)*4 + 1, v_persistent_362_);
v___x_372_ = v_reuseFailAlloc_374_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
uint8_t v___x_373_; 
v___x_373_ = lean_unbox(v_snd_358_);
lean_dec(v_snd_358_);
v___y_177_ = v___x_373_;
v___y_178_ = v___x_372_;
goto v___jp_176_;
}
}
}
else
{
uint8_t v___x_380_; 
lean_dec(v_fst_357_);
v___x_380_ = lean_unbox(v_snd_358_);
lean_dec(v_snd_358_);
v___y_177_ = v___x_380_;
v___y_178_ = v_c_169_;
goto v___jp_176_;
}
}
case 13:
{
lean_object* v_fst_381_; lean_object* v_snd_382_; lean_object* v_fvarId_383_; lean_object* v_k_384_; size_t v___x_385_; size_t v___x_386_; uint8_t v___x_387_; 
v_fst_381_ = lean_ctor_get(v_a_190_, 0);
lean_inc(v_fst_381_);
v_snd_382_ = lean_ctor_get(v_a_190_, 1);
lean_inc(v_snd_382_);
lean_dec(v_a_190_);
v_fvarId_383_ = lean_ctor_get(v_c_169_, 0);
v_k_384_ = lean_ctor_get(v_c_169_, 1);
v___x_385_ = lean_ptr_addr(v_k_384_);
v___x_386_ = lean_ptr_addr(v_fst_381_);
v___x_387_ = lean_usize_dec_eq(v___x_385_, v___x_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_395_; 
lean_inc(v_fvarId_383_);
v_isSharedCheck_395_ = !lean_is_exclusive(v_c_169_);
if (v_isSharedCheck_395_ == 0)
{
lean_object* v_unused_396_; lean_object* v_unused_397_; 
v_unused_396_ = lean_ctor_get(v_c_169_, 1);
lean_dec(v_unused_396_);
v_unused_397_ = lean_ctor_get(v_c_169_, 0);
lean_dec(v_unused_397_);
v___x_389_ = v_c_169_;
v_isShared_390_ = v_isSharedCheck_395_;
goto v_resetjp_388_;
}
else
{
lean_dec(v_c_169_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_395_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_392_; 
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 1, v_fst_381_);
v___x_392_ = v___x_389_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_fvarId_383_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_fst_381_);
v___x_392_ = v_reuseFailAlloc_394_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
uint8_t v___x_393_; 
v___x_393_ = lean_unbox(v_snd_382_);
lean_dec(v_snd_382_);
v___y_177_ = v___x_393_;
v___y_178_ = v___x_392_;
goto v___jp_176_;
}
}
}
else
{
uint8_t v___x_398_; 
lean_dec(v_fst_381_);
v___x_398_ = lean_unbox(v_snd_382_);
lean_dec(v_snd_382_);
v___y_177_ = v___x_398_;
v___y_178_ = v_c_169_;
goto v___jp_176_;
}
}
default: 
{
lean_object* v_snd_399_; lean_object* v___x_400_; lean_object* v___x_401_; uint8_t v___x_402_; 
lean_dec_ref(v_c_169_);
v_snd_399_ = lean_ctor_get(v_a_190_, 1);
lean_inc(v_snd_399_);
lean_dec(v_a_190_);
v___x_400_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3);
v___x_401_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(v___x_400_);
v___x_402_ = lean_unbox(v_snd_399_);
lean_dec(v_snd_399_);
v___y_177_ = v___x_402_;
v___y_178_ = v___x_401_;
goto v___jp_176_;
}
}
}
else
{
lean_dec_ref(v_c_169_);
return v___x_189_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(lean_object* v_info_605_, lean_object* v_w_606_, size_t v_sz_607_, size_t v_i_608_, lean_object* v_bs_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
uint8_t v___x_616_; 
v___x_616_ = lean_usize_dec_lt(v_i_608_, v_sz_607_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; lean_object* v___x_618_; 
lean_dec(v_w_606_);
lean_dec_ref(v_info_605_);
v___x_617_ = l_unsafeCast___redArg(v_bs_609_);
lean_dec_ref(v_bs_609_);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
return v___x_618_;
}
else
{
lean_object* v_v_619_; lean_object* v___x_620_; lean_object* v_bs_x27_621_; lean_object* v___x_622_; lean_object* v___y_624_; 
v_v_619_ = lean_array_uget(v_bs_609_, v_i_608_);
v___x_620_ = lean_unsigned_to_nat(0u);
v_bs_x27_621_ = lean_array_uset(v_bs_609_, v_i_608_, v___x_620_);
v___x_622_ = l_unsafeCast___redArg(v_v_619_);
lean_dec(v_v_619_);
switch(lean_obj_tag(v___x_622_))
{
case 0:
{
lean_object* v_code_650_; 
v_code_650_ = lean_ctor_get(v___x_622_, 2);
lean_inc_ref(v_code_650_);
v___y_624_ = v_code_650_;
goto v___jp_623_;
}
case 1:
{
lean_object* v_code_651_; 
v_code_651_ = lean_ctor_get(v___x_622_, 1);
lean_inc_ref(v_code_651_);
v___y_624_ = v_code_651_;
goto v___jp_623_;
}
default: 
{
lean_object* v_code_652_; 
v_code_652_ = lean_ctor_get(v___x_622_, 0);
lean_inc_ref(v_code_652_);
v___y_624_ = v_code_652_;
goto v___jp_623_;
}
}
v___jp_623_:
{
lean_object* v___x_625_; 
lean_inc(v_w_606_);
lean_inc_ref(v_info_605_);
v___x_625_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_605_, v_w_606_, v___y_624_, v___y_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_);
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v_a_626_; lean_object* v_fst_627_; lean_object* v_snd_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_641_; 
v_a_626_ = lean_ctor_get(v___x_625_, 0);
lean_inc(v_a_626_);
lean_dec_ref_known(v___x_625_, 1);
v_fst_627_ = lean_ctor_get(v_a_626_, 0);
v_snd_628_ = lean_ctor_get(v_a_626_, 1);
v_isSharedCheck_641_ = !lean_is_exclusive(v_a_626_);
if (v_isSharedCheck_641_ == 0)
{
v___x_630_ = v_a_626_;
v_isShared_631_ = v_isSharedCheck_641_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_snd_628_);
lean_inc(v_fst_627_);
lean_dec(v_a_626_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_641_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_632_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v___x_622_, v_fst_627_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 0, v___x_632_);
v___x_634_ = v___x_630_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_640_, 1, v_snd_628_);
v___x_634_ = v_reuseFailAlloc_640_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
size_t v___x_635_; size_t v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_635_ = ((size_t)1ULL);
v___x_636_ = lean_usize_add(v_i_608_, v___x_635_);
v___x_637_ = l_unsafeCast___redArg(v___x_634_);
lean_dec_ref(v___x_634_);
v___x_638_ = lean_array_uset(v_bs_x27_621_, v_i_608_, v___x_637_);
v_i_608_ = v___x_636_;
v_bs_609_ = v___x_638_;
goto _start;
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
lean_dec(v___x_622_);
lean_dec_ref(v_bs_x27_621_);
lean_dec(v_w_606_);
lean_dec_ref(v_info_605_);
v_a_642_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_625_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_625_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed(lean_object* v_info_653_, lean_object* v_w_654_, lean_object* v_c_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_653_, v_w_654_, v_c_655_, v_a_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_);
lean_dec(v_a_660_);
lean_dec_ref(v_a_659_);
lean_dec(v_a_658_);
lean_dec_ref(v_a_657_);
lean_dec_ref(v_a_656_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(lean_object* v___y_663_){
_start:
{
lean_object* v___x_665_; lean_object* v_ngen_666_; lean_object* v_namePrefix_667_; lean_object* v_idx_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_697_; 
v___x_665_ = lean_st_ref_get(v___y_663_);
v_ngen_666_ = lean_ctor_get(v___x_665_, 2);
lean_inc_ref(v_ngen_666_);
lean_dec(v___x_665_);
v_namePrefix_667_ = lean_ctor_get(v_ngen_666_, 0);
v_idx_668_ = lean_ctor_get(v_ngen_666_, 1);
v_isSharedCheck_697_ = !lean_is_exclusive(v_ngen_666_);
if (v_isSharedCheck_697_ == 0)
{
v___x_670_ = v_ngen_666_;
v_isShared_671_ = v_isSharedCheck_697_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_idx_668_);
lean_inc(v_namePrefix_667_);
lean_dec(v_ngen_666_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_697_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v_r_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
lean_inc(v_idx_668_);
lean_inc(v_namePrefix_667_);
v_r_672_ = l_Lean_Name_num___override(v_namePrefix_667_, v_idx_668_);
v___x_673_ = lean_unsigned_to_nat(1u);
v___x_674_ = lean_nat_add(v_idx_668_, v___x_673_);
lean_dec(v_idx_668_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_674_);
v___x_676_ = v___x_670_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_namePrefix_667_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v___x_674_);
v___x_676_ = v_reuseFailAlloc_696_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
lean_object* v___x_677_; lean_object* v_env_678_; lean_object* v_nextMacroScope_679_; lean_object* v_auxDeclNGen_680_; lean_object* v_traceState_681_; lean_object* v_cache_682_; lean_object* v_messages_683_; lean_object* v_infoState_684_; lean_object* v_snapshotTasks_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_694_; 
v___x_677_ = lean_st_ref_take(v___y_663_);
v_env_678_ = lean_ctor_get(v___x_677_, 0);
v_nextMacroScope_679_ = lean_ctor_get(v___x_677_, 1);
v_auxDeclNGen_680_ = lean_ctor_get(v___x_677_, 3);
v_traceState_681_ = lean_ctor_get(v___x_677_, 4);
v_cache_682_ = lean_ctor_get(v___x_677_, 5);
v_messages_683_ = lean_ctor_get(v___x_677_, 6);
v_infoState_684_ = lean_ctor_get(v___x_677_, 7);
v_snapshotTasks_685_ = lean_ctor_get(v___x_677_, 8);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_694_ == 0)
{
lean_object* v_unused_695_; 
v_unused_695_ = lean_ctor_get(v___x_677_, 2);
lean_dec(v_unused_695_);
v___x_687_ = v___x_677_;
v_isShared_688_ = v_isSharedCheck_694_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_snapshotTasks_685_);
lean_inc(v_infoState_684_);
lean_inc(v_messages_683_);
lean_inc(v_cache_682_);
lean_inc(v_traceState_681_);
lean_inc(v_auxDeclNGen_680_);
lean_inc(v_nextMacroScope_679_);
lean_inc(v_env_678_);
lean_dec(v___x_677_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_694_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 2, v___x_676_);
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_env_678_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_nextMacroScope_679_);
lean_ctor_set(v_reuseFailAlloc_693_, 2, v___x_676_);
lean_ctor_set(v_reuseFailAlloc_693_, 3, v_auxDeclNGen_680_);
lean_ctor_set(v_reuseFailAlloc_693_, 4, v_traceState_681_);
lean_ctor_set(v_reuseFailAlloc_693_, 5, v_cache_682_);
lean_ctor_set(v_reuseFailAlloc_693_, 6, v_messages_683_);
lean_ctor_set(v_reuseFailAlloc_693_, 7, v_infoState_684_);
lean_ctor_set(v_reuseFailAlloc_693_, 8, v_snapshotTasks_685_);
v___x_690_ = v_reuseFailAlloc_693_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_st_ref_put(v___y_663_, v___x_690_);
v___x_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_692_, 0, v_r_672_);
return v___x_692_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg___boxed(lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_698_);
lean_dec(v___y_698_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
lean_object* v___x_707_; lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
v___x_707_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_705_);
v_a_708_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___x_707_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___x_707_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0___boxed(lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(v___y_716_, v___y_717_, v___y_718_, v___y_719_, v___y_720_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_717_);
lean_dec_ref(v___y_716_);
return v_res_722_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4(void){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_729_ = lean_box(0);
v___x_730_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3));
v___x_731_ = l_Lean_Expr_const___override(v___x_730_, v___x_729_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(lean_object* v_x_732_, lean_object* v_info_733_, lean_object* v_c_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(v_a_735_, v_a_736_, v_a_737_, v_a_738_, v_a_739_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_743_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc_n(v_a_742_, 2);
lean_dec_ref_known(v___x_741_, 1);
lean_inc_ref(v_info_733_);
v___x_743_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_733_, v_a_742_, v_c_734_, v_a_735_, v_a_736_, v_a_737_, v_a_738_, v_a_739_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_798_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_798_ == 0)
{
v___x_746_ = v___x_743_;
v_isShared_747_ = v_isSharedCheck_798_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_743_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_798_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v_snd_748_; uint8_t v___x_749_; 
v_snd_748_ = lean_ctor_get(v_a_744_, 1);
v___x_749_ = lean_unbox(v_snd_748_);
if (v___x_749_ == 0)
{
lean_object* v_fst_750_; lean_object* v___x_752_; 
lean_dec(v_a_742_);
lean_dec_ref(v_info_733_);
lean_dec(v_x_732_);
v_fst_750_ = lean_ctor_get(v_a_744_, 0);
lean_inc(v_fst_750_);
lean_dec(v_a_744_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v_fst_750_);
v___x_752_ = v___x_746_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_fst_750_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
else
{
lean_object* v_fst_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_796_; 
lean_del_object(v___x_746_);
v_fst_754_ = lean_ctor_get(v_a_744_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v_a_744_);
if (v_isSharedCheck_796_ == 0)
{
lean_object* v_unused_797_; 
v_unused_797_ = lean_ctor_get(v_a_744_, 1);
lean_dec(v_unused_797_);
v___x_756_ = v_a_744_;
v_isShared_757_ = v_isSharedCheck_796_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_fst_754_);
lean_dec(v_a_744_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_796_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1));
v___x_759_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_758_, v_a_737_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_787_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_787_ == 0)
{
v___x_762_ = v___x_759_;
v_isShared_763_ = v_isSharedCheck_787_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_759_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_787_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v_size_764_; uint8_t v___x_765_; lean_object* v___x_766_; lean_object* v___x_768_; 
v_size_764_ = lean_ctor_get(v_info_733_, 2);
lean_inc(v_size_764_);
lean_dec_ref(v_info_733_);
v___x_765_ = 1;
v___x_766_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4);
if (v_isShared_757_ == 0)
{
lean_ctor_set_tag(v___x_756_, 11);
lean_ctor_set(v___x_756_, 1, v_x_732_);
lean_ctor_set(v___x_756_, 0, v_size_764_);
v___x_768_ = v___x_756_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_size_764_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v_x_732_);
v___x_768_ = v_reuseFailAlloc_786_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v_lctx_771_; lean_object* v_nextIdx_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_785_; 
v___x_769_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_769_, 0, v_a_742_);
lean_ctor_set(v___x_769_, 1, v_a_760_);
lean_ctor_set(v___x_769_, 2, v___x_766_);
lean_ctor_set(v___x_769_, 3, v___x_768_);
v___x_770_ = lean_st_ref_take(v_a_737_);
v_lctx_771_ = lean_ctor_get(v___x_770_, 0);
v_nextIdx_772_ = lean_ctor_get(v___x_770_, 1);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_785_ == 0)
{
v___x_774_ = v___x_770_;
v_isShared_775_ = v_isSharedCheck_785_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_nextIdx_772_);
lean_inc(v_lctx_771_);
lean_dec(v___x_770_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_785_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_776_; lean_object* v___x_778_; 
lean_inc_ref(v___x_769_);
v___x_776_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_765_, v_lctx_771_, v___x_769_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v___x_776_);
v___x_778_ = v___x_774_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___x_776_);
lean_ctor_set(v_reuseFailAlloc_784_, 1, v_nextIdx_772_);
v___x_778_ = v_reuseFailAlloc_784_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_782_; 
v___x_779_ = lean_st_ref_put(v_a_737_, v___x_778_);
v___x_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_769_);
lean_ctor_set(v___x_780_, 1, v_fst_754_);
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 0, v___x_780_);
v___x_782_ = v___x_762_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_780_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
}
}
else
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_795_; 
lean_del_object(v___x_756_);
lean_dec(v_fst_754_);
lean_dec(v_a_742_);
lean_dec_ref(v_info_733_);
lean_dec(v_x_732_);
v_a_788_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_795_ == 0)
{
v___x_790_ = v___x_759_;
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_759_);
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
}
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
lean_dec(v_a_742_);
lean_dec_ref(v_info_733_);
lean_dec(v_x_732_);
v_a_799_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_743_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_743_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
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
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v_c_734_);
lean_dec_ref(v_info_733_);
lean_dec(v_x_732_);
v_a_807_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_741_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_741_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___boxed(lean_object* v_x_815_, lean_object* v_info_816_, lean_object* v_c_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_815_, v_info_816_, v_c_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_);
lean_dec(v_a_822_);
lean_dec_ref(v_a_821_);
lean_dec(v_a_820_);
lean_dec_ref(v_a_819_);
lean_dec_ref(v_a_818_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___boxed(lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(v___y_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec_ref(v___y_832_);
return v_res_838_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(lean_object* v_x_839_, lean_object* v_as_840_, size_t v_i_841_, size_t v_stop_842_){
_start:
{
uint8_t v___x_843_; 
v___x_843_ = lean_usize_dec_eq(v_i_841_, v_stop_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; uint8_t v___x_845_; lean_object* v___x_846_; uint8_t v___x_847_; 
v___x_844_ = lean_array_uget_borrowed(v_as_840_, v_i_841_);
v___x_845_ = 1;
lean_inc(v_x_839_);
v___x_846_ = l_Lean_instSingletonFVarIdFVarIdSet___lam__0(v_x_839_);
v___x_847_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(v___x_845_, v___x_844_, v___x_846_);
lean_dec(v___x_846_);
if (v___x_847_ == 0)
{
size_t v___x_848_; size_t v___x_849_; 
v___x_848_ = ((size_t)1ULL);
v___x_849_ = lean_usize_add(v_i_841_, v___x_848_);
v_i_841_ = v___x_849_;
goto _start;
}
else
{
lean_dec(v_x_839_);
return v___x_847_;
}
}
else
{
uint8_t v___x_851_; 
lean_dec(v_x_839_);
v___x_851_ = 0;
return v___x_851_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___boxed(lean_object* v_x_852_, lean_object* v_as_853_, lean_object* v_i_854_, lean_object* v_stop_855_){
_start:
{
size_t v_i_boxed_856_; size_t v_stop_boxed_857_; uint8_t v_res_858_; lean_object* v_r_859_; 
v_i_boxed_856_ = lean_unbox_usize(v_i_854_);
lean_dec(v_i_854_);
v_stop_boxed_857_ = lean_unbox_usize(v_stop_855_);
lean_dec(v_stop_855_);
v_res_858_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(v_x_852_, v_as_853_, v_i_boxed_856_, v_stop_boxed_857_);
lean_dec_ref(v_as_853_);
v_r_859_ = lean_box(v_res_858_);
return v_r_859_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(lean_object* v_instr_860_, lean_object* v_x_861_){
_start:
{
if (lean_obj_tag(v_instr_860_) == 0)
{
lean_object* v_decl_862_; lean_object* v_value_863_; 
v_decl_862_ = lean_ctor_get(v_instr_860_, 0);
v_value_863_ = lean_ctor_get(v_decl_862_, 3);
if (lean_obj_tag(v_value_863_) == 5)
{
lean_object* v_args_864_; lean_object* v___x_865_; lean_object* v___x_866_; uint8_t v___x_867_; 
v_args_864_ = lean_ctor_get(v_value_863_, 1);
v___x_865_ = lean_unsigned_to_nat(0u);
v___x_866_ = lean_array_get_size(v_args_864_);
v___x_867_ = lean_nat_dec_lt(v___x_865_, v___x_866_);
if (v___x_867_ == 0)
{
lean_dec(v_x_861_);
return v___x_867_;
}
else
{
if (v___x_867_ == 0)
{
lean_dec(v_x_861_);
return v___x_867_;
}
else
{
size_t v___x_868_; size_t v___x_869_; uint8_t v___x_870_; 
v___x_868_ = ((size_t)0ULL);
v___x_869_ = lean_usize_of_nat(v___x_866_);
v___x_870_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(v_x_861_, v_args_864_, v___x_868_, v___x_869_);
return v___x_870_;
}
}
}
else
{
uint8_t v___x_871_; 
lean_dec(v_x_861_);
v___x_871_ = 0;
return v___x_871_;
}
}
else
{
uint8_t v___x_872_; 
lean_dec(v_x_861_);
v___x_872_ = 0;
return v___x_872_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing___boxed(lean_object* v_instr_873_, lean_object* v_x_874_){
_start:
{
uint8_t v_res_875_; lean_object* v_r_876_; 
v_res_875_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_873_, v_x_874_);
lean_dec_ref(v_instr_873_);
v_r_876_ = lean_box(v_res_875_);
return v_r_876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(uint8_t v_x_877_){
_start:
{
switch(v_x_877_)
{
case 0:
{
lean_object* v___x_878_; 
v___x_878_ = lean_unsigned_to_nat(0u);
return v___x_878_;
}
case 1:
{
lean_object* v___x_879_; 
v___x_879_ = lean_unsigned_to_nat(1u);
return v___x_879_;
}
default: 
{
lean_object* v___x_880_; 
v___x_880_ = lean_unsigned_to_nat(2u);
return v___x_880_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___boxed(lean_object* v_x_881_){
_start:
{
uint8_t v_x_boxed_882_; lean_object* v_res_883_; 
v_x_boxed_882_ = lean_unbox(v_x_881_);
v_res_883_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(v_x_boxed_882_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(lean_object* v_k_884_){
_start:
{
lean_inc(v_k_884_);
return v_k_884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg___boxed(lean_object* v_k_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(v_k_885_);
lean_dec(v_k_885_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(lean_object* v_motive_887_, lean_object* v_ctorIdx_888_, uint8_t v_t_889_, lean_object* v_h_890_, lean_object* v_k_891_){
_start:
{
lean_inc(v_k_891_);
return v_k_891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___boxed(lean_object* v_motive_892_, lean_object* v_ctorIdx_893_, lean_object* v_t_894_, lean_object* v_h_895_, lean_object* v_k_896_){
_start:
{
uint8_t v_t_boxed_897_; lean_object* v_res_898_; 
v_t_boxed_897_ = lean_unbox(v_t_894_);
v_res_898_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(v_motive_892_, v_ctorIdx_893_, v_t_boxed_897_, v_h_895_, v_k_896_);
lean_dec(v_k_896_);
lean_dec(v_ctorIdx_893_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(lean_object* v_ownedArg_899_){
_start:
{
lean_inc(v_ownedArg_899_);
return v_ownedArg_899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg___boxed(lean_object* v_ownedArg_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(v_ownedArg_900_);
lean_dec(v_ownedArg_900_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(lean_object* v_motive_902_, uint8_t v_t_903_, lean_object* v_h_904_, lean_object* v_ownedArg_905_){
_start:
{
lean_inc(v_ownedArg_905_);
return v_ownedArg_905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___boxed(lean_object* v_motive_906_, lean_object* v_t_907_, lean_object* v_h_908_, lean_object* v_ownedArg_909_){
_start:
{
uint8_t v_t_boxed_910_; lean_object* v_res_911_; 
v_t_boxed_910_ = lean_unbox(v_t_907_);
v_res_911_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(v_motive_906_, v_t_boxed_910_, v_h_908_, v_ownedArg_909_);
lean_dec(v_ownedArg_909_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(lean_object* v_other_912_){
_start:
{
lean_inc(v_other_912_);
return v_other_912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg___boxed(lean_object* v_other_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(v_other_913_);
lean_dec(v_other_913_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(lean_object* v_motive_915_, uint8_t v_t_916_, lean_object* v_h_917_, lean_object* v_other_918_){
_start:
{
lean_inc(v_other_918_);
return v_other_918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___boxed(lean_object* v_motive_919_, lean_object* v_t_920_, lean_object* v_h_921_, lean_object* v_other_922_){
_start:
{
uint8_t v_t_boxed_923_; lean_object* v_res_924_; 
v_t_boxed_923_ = lean_unbox(v_t_920_);
v_res_924_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(v_motive_919_, v_t_boxed_923_, v_h_921_, v_other_922_);
lean_dec(v_other_922_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(lean_object* v_none_925_){
_start:
{
lean_inc(v_none_925_);
return v_none_925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg___boxed(lean_object* v_none_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(v_none_926_);
lean_dec(v_none_926_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(lean_object* v_motive_928_, uint8_t v_t_929_, lean_object* v_h_930_, lean_object* v_none_931_){
_start:
{
lean_inc(v_none_931_);
return v_none_931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___boxed(lean_object* v_motive_932_, lean_object* v_t_933_, lean_object* v_h_934_, lean_object* v_none_935_){
_start:
{
uint8_t v_t_boxed_936_; lean_object* v_res_937_; 
v_t_boxed_936_ = lean_unbox(v_t_933_);
v_res_937_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(v_motive_932_, v_t_boxed_936_, v_h_934_, v_none_935_);
lean_dec(v_none_935_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(lean_object* v_x_938_, lean_object* v_as_939_, size_t v_sz_940_, size_t v_i_941_, lean_object* v_b_942_){
_start:
{
lean_object* v_a_945_; uint8_t v___x_949_; 
v___x_949_ = lean_usize_dec_lt(v_i_941_, v_sz_940_);
if (v___x_949_ == 0)
{
lean_object* v___x_950_; 
v___x_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_950_, 0, v_b_942_);
return v___x_950_;
}
else
{
lean_object* v_snd_951_; lean_object* v_fst_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_996_; 
v_snd_951_ = lean_ctor_get(v_b_942_, 1);
v_fst_952_ = lean_ctor_get(v_b_942_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v_b_942_);
if (v_isSharedCheck_996_ == 0)
{
v___x_954_ = v_b_942_;
v_isShared_955_ = v_isSharedCheck_996_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_snd_951_);
lean_inc(v_fst_952_);
lean_dec(v_b_942_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_996_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v_array_956_; lean_object* v_start_957_; lean_object* v_stop_958_; uint8_t v___x_959_; 
v_array_956_ = lean_ctor_get(v_snd_951_, 0);
v_start_957_ = lean_ctor_get(v_snd_951_, 1);
v_stop_958_ = lean_ctor_get(v_snd_951_, 2);
v___x_959_ = lean_nat_dec_lt(v_start_957_, v_stop_958_);
if (v___x_959_ == 0)
{
lean_object* v___x_961_; 
if (v_isShared_955_ == 0)
{
v___x_961_ = v___x_954_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_fst_952_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v_snd_951_);
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
else
{
lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_992_; 
lean_inc(v_stop_958_);
lean_inc(v_start_957_);
lean_inc_ref(v_array_956_);
v_isSharedCheck_992_ = !lean_is_exclusive(v_snd_951_);
if (v_isSharedCheck_992_ == 0)
{
lean_object* v_unused_993_; lean_object* v_unused_994_; lean_object* v_unused_995_; 
v_unused_993_ = lean_ctor_get(v_snd_951_, 2);
lean_dec(v_unused_993_);
v_unused_994_ = lean_ctor_get(v_snd_951_, 1);
lean_dec(v_unused_994_);
v_unused_995_ = lean_ctor_get(v_snd_951_, 0);
lean_dec(v_unused_995_);
v___x_965_ = v_snd_951_;
v_isShared_966_ = v_isSharedCheck_992_;
goto v_resetjp_964_;
}
else
{
lean_dec(v_snd_951_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_992_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v_a_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_972_; 
v_a_967_ = lean_array_uget_borrowed(v_as_939_, v_i_941_);
v___x_968_ = lean_array_fget(v_array_956_, v_start_957_);
v___x_969_ = lean_unsigned_to_nat(1u);
v___x_970_ = lean_nat_add(v_start_957_, v___x_969_);
lean_dec(v_start_957_);
if (v_isShared_966_ == 0)
{
lean_ctor_set(v___x_965_, 1, v___x_970_);
v___x_972_ = v___x_965_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_array_956_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v___x_970_);
lean_ctor_set(v_reuseFailAlloc_991_, 2, v_stop_958_);
v___x_972_ = v_reuseFailAlloc_991_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
uint8_t v___y_974_; 
if (lean_obj_tag(v_a_967_) == 1)
{
lean_object* v_fvarId_979_; uint8_t v___x_980_; 
v_fvarId_979_ = lean_ctor_get(v_a_967_, 0);
v___x_980_ = l_Lean_instBEqFVarId_beq(v_fvarId_979_, v_x_938_);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; 
lean_dec(v___x_968_);
lean_del_object(v___x_954_);
v___x_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_981_, 0, v_fst_952_);
lean_ctor_set(v___x_981_, 1, v___x_972_);
v_a_945_ = v___x_981_;
goto v___jp_944_;
}
else
{
uint8_t v___x_982_; 
v___x_982_ = lean_unbox(v_fst_952_);
switch(v___x_982_)
{
case 0:
{
uint8_t v_borrow_983_; 
v_borrow_983_ = lean_ctor_get_uint8(v___x_968_, sizeof(void*)*3);
lean_dec(v___x_968_);
if (v_borrow_983_ == 0)
{
uint8_t v___x_984_; 
v___x_984_ = lean_unbox(v_fst_952_);
lean_dec(v_fst_952_);
v___y_974_ = v___x_984_;
goto v___jp_973_;
}
else
{
uint8_t v___x_985_; 
lean_dec(v_fst_952_);
v___x_985_ = 1;
v___y_974_ = v___x_985_;
goto v___jp_973_;
}
}
case 1:
{
uint8_t v___x_986_; 
lean_dec(v___x_968_);
v___x_986_ = lean_unbox(v_fst_952_);
lean_dec(v_fst_952_);
v___y_974_ = v___x_986_;
goto v___jp_973_;
}
default: 
{
uint8_t v_borrow_987_; 
lean_dec(v_fst_952_);
v_borrow_987_ = lean_ctor_get_uint8(v___x_968_, sizeof(void*)*3);
lean_dec(v___x_968_);
if (v_borrow_987_ == 0)
{
uint8_t v___x_988_; 
v___x_988_ = 0;
v___y_974_ = v___x_988_;
goto v___jp_973_;
}
else
{
uint8_t v___x_989_; 
v___x_989_ = 1;
v___y_974_ = v___x_989_;
goto v___jp_973_;
}
}
}
}
}
else
{
lean_object* v___x_990_; 
lean_dec(v___x_968_);
lean_del_object(v___x_954_);
v___x_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_990_, 0, v_fst_952_);
lean_ctor_set(v___x_990_, 1, v___x_972_);
v_a_945_ = v___x_990_;
goto v___jp_944_;
}
v___jp_973_:
{
lean_object* v___x_975_; lean_object* v___x_977_; 
v___x_975_ = lean_box(v___y_974_);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 1, v___x_972_);
lean_ctor_set(v___x_954_, 0, v___x_975_);
v___x_977_ = v___x_954_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v___x_975_);
lean_ctor_set(v_reuseFailAlloc_978_, 1, v___x_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
v_a_945_ = v___x_977_;
goto v___jp_944_;
}
}
}
}
}
}
}
v___jp_944_:
{
size_t v___x_946_; size_t v___x_947_; 
v___x_946_ = ((size_t)1ULL);
v___x_947_ = lean_usize_add(v_i_941_, v___x_946_);
v_i_941_ = v___x_947_;
v_b_942_ = v_a_945_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg___boxed(lean_object* v_x_997_, lean_object* v_as_998_, lean_object* v_sz_999_, lean_object* v_i_1000_, lean_object* v_b_1001_, lean_object* v___y_1002_){
_start:
{
size_t v_sz_boxed_1003_; size_t v_i_boxed_1004_; lean_object* v_res_1005_; 
v_sz_boxed_1003_ = lean_unbox_usize(v_sz_999_);
lean_dec(v_sz_999_);
v_i_boxed_1004_ = lean_unbox_usize(v_i_1000_);
lean_dec(v_i_1000_);
v_res_1005_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_997_, v_as_998_, v_sz_boxed_1003_, v_i_boxed_1004_, v_b_1001_);
lean_dec_ref(v_as_998_);
lean_dec(v_x_997_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(lean_object* v_instr_1006_, lean_object* v_x_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
if (lean_obj_tag(v_instr_1006_) == 0)
{
lean_object* v_decl_1024_; lean_object* v_value_1025_; 
v_decl_1024_ = lean_ctor_get(v_instr_1006_, 0);
v_value_1025_ = lean_ctor_get(v_decl_1024_, 3);
lean_inc(v_value_1025_);
switch(lean_obj_tag(v_value_1025_))
{
case 9:
{
lean_object* v_fn_1026_; lean_object* v_args_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1089_; 
lean_dec_ref_known(v_instr_1006_, 1);
v_fn_1026_ = lean_ctor_get(v_value_1025_, 0);
v_args_1027_ = lean_ctor_get(v_value_1025_, 1);
v_isSharedCheck_1089_ = !lean_is_exclusive(v_value_1025_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1029_ = v_value_1025_;
v_isShared_1030_ = v_isSharedCheck_1089_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_args_1027_);
lean_inc(v_fn_1026_);
lean_dec(v_value_1025_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1089_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
uint8_t v___x_1031_; lean_object* v___x_1033_; 
v___x_1031_ = 1;
lean_inc_ref(v_args_1027_);
lean_inc(v_fn_1026_);
if (v_isShared_1030_ == 0)
{
v___x_1033_ = v___x_1029_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_fn_1026_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_args_1027_);
v___x_1033_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
lean_object* v___x_1034_; 
v___x_1034_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_1026_, v_a_1012_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1079_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1079_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1079_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
if (lean_obj_tag(v_a_1035_) == 1)
{
lean_object* v_val_1039_; lean_object* v_params_1040_; uint8_t v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; size_t v_sz_1047_; size_t v___x_1048_; lean_object* v___x_1049_; 
lean_del_object(v___x_1037_);
lean_dec_ref(v___x_1033_);
v_val_1039_ = lean_ctor_get(v_a_1035_, 0);
lean_inc(v_val_1039_);
lean_dec_ref_known(v_a_1035_, 1);
v_params_1040_ = lean_ctor_get(v_val_1039_, 3);
lean_inc_ref(v_params_1040_);
lean_dec(v_val_1039_);
v___x_1041_ = 2;
v___x_1042_ = lean_unsigned_to_nat(0u);
v___x_1043_ = lean_array_get_size(v_params_1040_);
v___x_1044_ = l_Array_toSubarray___redArg(v_params_1040_, v___x_1042_, v___x_1043_);
v___x_1045_ = lean_box(v___x_1041_);
v___x_1046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
lean_ctor_set(v___x_1046_, 1, v___x_1044_);
v_sz_1047_ = lean_array_size(v_args_1027_);
v___x_1048_ = ((size_t)0ULL);
v___x_1049_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_1007_, v_args_1027_, v_sz_1047_, v___x_1048_, v___x_1046_);
lean_dec_ref(v_args_1027_);
lean_dec(v_x_1007_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1058_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1052_ = v___x_1049_;
v_isShared_1053_ = v_isSharedCheck_1058_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1049_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1058_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v_fst_1054_; lean_object* v___x_1056_; 
v_fst_1054_ = lean_ctor_get(v_a_1050_, 0);
lean_inc(v_fst_1054_);
lean_dec(v_a_1050_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v_fst_1054_);
v___x_1056_ = v___x_1052_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_fst_1054_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
v_a_1059_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1049_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1049_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
else
{
lean_object* v___x_1067_; uint8_t v___x_1068_; 
lean_dec(v_a_1035_);
lean_dec_ref(v_args_1027_);
v___x_1067_ = l_Lean_instSingletonFVarIdFVarIdSet___lam__0(v_x_1007_);
v___x_1068_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1031_, v___x_1033_, v___x_1067_);
lean_dec(v___x_1067_);
lean_dec_ref(v___x_1033_);
if (v___x_1068_ == 0)
{
uint8_t v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1069_ = 2;
v___x_1070_ = lean_box(v___x_1069_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1070_);
v___x_1072_ = v___x_1037_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1070_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
else
{
uint8_t v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1077_; 
v___x_1074_ = 0;
v___x_1075_ = lean_box(v___x_1074_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1075_);
v___x_1077_ = v___x_1037_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1075_);
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
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
lean_dec_ref(v___x_1033_);
lean_dec_ref(v_args_1027_);
lean_dec(v_x_1007_);
v_a_1080_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1034_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1034_);
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
case 10:
{
lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1115_; 
v_isSharedCheck_1115_ = !lean_is_exclusive(v_instr_1006_);
if (v_isSharedCheck_1115_ == 0)
{
lean_object* v_unused_1116_; 
v_unused_1116_ = lean_ctor_get(v_instr_1006_, 0);
lean_dec(v_unused_1116_);
v___x_1091_ = v_instr_1006_;
v_isShared_1092_ = v_isSharedCheck_1115_;
goto v_resetjp_1090_;
}
else
{
lean_dec(v_instr_1006_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1115_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v_fn_1093_; lean_object* v_args_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1114_; 
v_fn_1093_ = lean_ctor_get(v_value_1025_, 0);
v_args_1094_ = lean_ctor_get(v_value_1025_, 1);
v_isSharedCheck_1114_ = !lean_is_exclusive(v_value_1025_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1096_ = v_value_1025_;
v_isShared_1097_ = v_isSharedCheck_1114_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_args_1094_);
lean_inc(v_fn_1093_);
lean_dec(v_value_1025_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1114_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
uint8_t v___x_1098_; lean_object* v___x_1100_; 
v___x_1098_ = 1;
if (v_isShared_1097_ == 0)
{
v___x_1100_ = v___x_1096_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_fn_1093_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v_args_1094_);
v___x_1100_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1101_; uint8_t v___x_1102_; 
v___x_1101_ = l_Lean_instSingletonFVarIdFVarIdSet___lam__0(v_x_1007_);
v___x_1102_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1098_, v___x_1100_, v___x_1101_);
lean_dec(v___x_1101_);
lean_dec_ref(v___x_1100_);
if (v___x_1102_ == 0)
{
uint8_t v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1103_ = 2;
v___x_1104_ = lean_box(v___x_1103_);
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 0, v___x_1104_);
v___x_1106_ = v___x_1091_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
else
{
uint8_t v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1111_; 
v___x_1108_ = 0;
v___x_1109_ = lean_box(v___x_1108_);
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 0, v___x_1109_);
v___x_1111_ = v___x_1091_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1109_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
}
case 4:
{
lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1142_; 
v_isSharedCheck_1142_ = !lean_is_exclusive(v_instr_1006_);
if (v_isSharedCheck_1142_ == 0)
{
lean_object* v_unused_1143_; 
v_unused_1143_ = lean_ctor_get(v_instr_1006_, 0);
lean_dec(v_unused_1143_);
v___x_1118_ = v_instr_1006_;
v_isShared_1119_ = v_isSharedCheck_1142_;
goto v_resetjp_1117_;
}
else
{
lean_dec(v_instr_1006_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1142_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v_fvarId_1120_; lean_object* v_args_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1141_; 
v_fvarId_1120_ = lean_ctor_get(v_value_1025_, 0);
v_args_1121_ = lean_ctor_get(v_value_1025_, 1);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_value_1025_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1123_ = v_value_1025_;
v_isShared_1124_ = v_isSharedCheck_1141_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_args_1121_);
lean_inc(v_fvarId_1120_);
lean_dec(v_value_1025_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1141_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
uint8_t v___x_1125_; lean_object* v___x_1127_; 
v___x_1125_ = 1;
if (v_isShared_1124_ == 0)
{
v___x_1127_ = v___x_1123_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_fvarId_1120_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v_args_1121_);
v___x_1127_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
lean_object* v___x_1128_; uint8_t v___x_1129_; 
v___x_1128_ = l_Lean_instSingletonFVarIdFVarIdSet___lam__0(v_x_1007_);
v___x_1129_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1125_, v___x_1127_, v___x_1128_);
lean_dec(v___x_1128_);
lean_dec_ref(v___x_1127_);
if (v___x_1129_ == 0)
{
uint8_t v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1133_; 
v___x_1130_ = 2;
v___x_1131_ = lean_box(v___x_1130_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 0, v___x_1131_);
v___x_1133_ = v___x_1118_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1131_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
else
{
uint8_t v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1135_ = 0;
v___x_1136_ = lean_box(v___x_1135_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 0, v___x_1136_);
v___x_1138_ = v___x_1118_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
}
}
default: 
{
lean_dec(v_value_1025_);
goto v___jp_1014_;
}
}
}
else
{
goto v___jp_1014_;
}
v___jp_1014_:
{
uint8_t v___x_1015_; lean_object* v___x_1016_; uint8_t v___x_1017_; 
v___x_1015_ = 1;
v___x_1016_ = l_Lean_instSingletonFVarIdFVarIdSet___lam__0(v_x_1007_);
v___x_1017_ = l_Lean_Compiler_LCNF_CodeDecl_dependsOn(v___x_1015_, v_instr_1006_, v___x_1016_);
lean_dec(v___x_1016_);
lean_dec_ref(v_instr_1006_);
if (v___x_1017_ == 0)
{
uint8_t v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1018_ = 2;
v___x_1019_ = lean_box(v___x_1018_);
v___x_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
return v___x_1020_;
}
else
{
uint8_t v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1021_ = 1;
v___x_1022_ = lean_box(v___x_1021_);
v___x_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
return v___x_1023_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse___boxed(lean_object* v_instr_1144_, lean_object* v_x_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1144_, v_x_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_);
lean_dec(v_a_1150_);
lean_dec_ref(v_a_1149_);
lean_dec(v_a_1148_);
lean_dec_ref(v_a_1147_);
lean_dec_ref(v_a_1146_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(lean_object* v_x_1153_, lean_object* v_as_1154_, size_t v_sz_1155_, size_t v_i_1156_, lean_object* v_b_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v___x_1164_; 
v___x_1164_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_1153_, v_as_1154_, v_sz_1155_, v_i_1156_, v_b_1157_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___boxed(lean_object* v_x_1165_, lean_object* v_as_1166_, lean_object* v_sz_1167_, lean_object* v_i_1168_, lean_object* v_b_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
size_t v_sz_boxed_1176_; size_t v_i_boxed_1177_; lean_object* v_res_1178_; 
v_sz_boxed_1176_ = lean_unbox_usize(v_sz_1167_);
lean_dec(v_sz_1167_);
v_i_boxed_1177_ = lean_unbox_usize(v_i_1168_);
lean_dec(v_i_1168_);
v_res_1178_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(v_x_1165_, v_as_1166_, v_sz_boxed_1176_, v_i_boxed_1177_, v_b_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec_ref(v_as_1166_);
lean_dec(v_x_1165_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(lean_object* v_alt_1179_, lean_object* v_f_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v___y_1188_; 
switch(lean_obj_tag(v_alt_1179_))
{
case 0:
{
lean_object* v_code_1207_; 
v_code_1207_ = lean_ctor_get(v_alt_1179_, 2);
lean_inc_ref(v_code_1207_);
v___y_1188_ = v_code_1207_;
goto v___jp_1187_;
}
case 1:
{
lean_object* v_code_1208_; 
v_code_1208_ = lean_ctor_get(v_alt_1179_, 1);
lean_inc_ref(v_code_1208_);
v___y_1188_ = v_code_1208_;
goto v___jp_1187_;
}
default: 
{
lean_object* v_code_1209_; 
v_code_1209_ = lean_ctor_get(v_alt_1179_, 0);
lean_inc_ref(v_code_1209_);
v___y_1188_ = v_code_1209_;
goto v___jp_1187_;
}
}
v___jp_1187_:
{
lean_object* v___x_1189_; 
lean_inc(v___y_1185_);
lean_inc_ref(v___y_1184_);
lean_inc(v___y_1183_);
lean_inc_ref(v___y_1182_);
lean_inc_ref(v___y_1181_);
v___x_1189_ = lean_apply_7(v_f_1180_, v___y_1188_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, lean_box(0));
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1198_; 
v_a_1190_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1192_ = v___x_1189_;
v_isShared_1193_ = v_isSharedCheck_1198_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1189_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1198_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1194_; lean_object* v___x_1196_; 
v___x_1194_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_1179_, v_a_1190_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 0, v___x_1194_);
v___x_1196_ = v___x_1192_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v___x_1194_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
else
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
lean_dec_ref(v_alt_1179_);
v_a_1199_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1189_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1189_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg___boxed(lean_object* v_alt_1210_, lean_object* v_f_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_alt_1210_, v_f_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1212_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed(lean_object* v_x_1219_, lean_object* v_info_1220_, lean_object* v_c_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(v_x_1219_, v_info_1220_, v_c_1221_, v_a_1222_, v_a_1223_, v_a_1224_, v_a_1225_, v_a_1226_);
lean_dec(v_a_1226_);
lean_dec_ref(v_a_1225_);
lean_dec(v_a_1224_);
lean_dec_ref(v_a_1223_);
lean_dec_ref(v_a_1222_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(lean_object* v_x_1229_, lean_object* v_info_1230_, lean_object* v_i_1231_, lean_object* v_as_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_){
_start:
{
lean_object* v___x_1239_; uint8_t v___x_1240_; 
v___x_1239_ = lean_array_get_size(v_as_1232_);
v___x_1240_ = lean_nat_dec_lt(v_i_1231_, v___x_1239_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1241_; 
lean_dec(v_i_1231_);
lean_dec_ref(v_info_1230_);
lean_dec(v_x_1229_);
v___x_1241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1241_, 0, v_as_1232_);
return v___x_1241_;
}
else
{
lean_object* v_a_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v_a_1242_ = lean_array_fget_borrowed(v_as_1232_, v_i_1231_);
lean_inc_ref(v_info_1230_);
lean_inc(v_x_1229_);
v___x_1243_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed), 9, 2);
lean_closure_set(v___x_1243_, 0, v_x_1229_);
lean_closure_set(v___x_1243_, 1, v_info_1230_);
lean_inc(v_a_1242_);
v___x_1244_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_a_1242_, v___x_1243_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; size_t v___x_1246_; size_t v___x_1247_; uint8_t v___x_1248_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
lean_dec_ref_known(v___x_1244_, 1);
v___x_1246_ = lean_ptr_addr(v_a_1242_);
v___x_1247_ = lean_ptr_addr(v_a_1245_);
v___x_1248_ = lean_usize_dec_eq(v___x_1246_, v___x_1247_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1249_ = lean_unsigned_to_nat(1u);
v___x_1250_ = lean_nat_add(v_i_1231_, v___x_1249_);
v___x_1251_ = lean_array_fset(v_as_1232_, v_i_1231_, v_a_1245_);
lean_dec(v_i_1231_);
v_i_1231_ = v___x_1250_;
v_as_1232_ = v___x_1251_;
goto _start;
}
else
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
lean_dec(v_a_1245_);
v___x_1253_ = lean_unsigned_to_nat(1u);
v___x_1254_ = lean_nat_add(v_i_1231_, v___x_1253_);
lean_dec(v_i_1231_);
v_i_1231_ = v___x_1254_;
goto _start;
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
lean_dec_ref(v_as_1232_);
lean_dec(v_i_1231_);
lean_dec_ref(v_info_1230_);
lean_dec(v_x_1229_);
v_a_1256_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1244_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1244_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1256_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1(void){
_start:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1265_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_1266_ = lean_unsigned_to_nat(61u);
v___x_1267_ = lean_unsigned_to_nat(247u);
v___x_1268_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0));
v___x_1269_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_1270_ = l_mkPanicMessageWithDecl(v___x_1269_, v___x_1268_, v___x_1267_, v___x_1266_, v___x_1265_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(lean_object* v_x_1271_, lean_object* v_info_1272_, lean_object* v_c_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_){
_start:
{
switch(lean_obj_tag(v_c_1273_))
{
case 0:
{
lean_object* v_decl_1280_; lean_object* v_k_1281_; uint8_t v___x_1282_; lean_object* v_instr_1283_; uint8_t v___x_1284_; uint8_t v___x_1285_; 
v_decl_1280_ = lean_ctor_get(v_c_1273_, 0);
v_k_1281_ = lean_ctor_get(v_c_1273_, 1);
v___x_1282_ = 1;
v_instr_1283_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1282_, v_c_1273_);
lean_inc(v_x_1271_);
v___x_1284_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1283_, v_x_1271_);
v___x_1285_ = 1;
if (v___x_1284_ == 0)
{
lean_object* v___x_1286_; 
lean_inc_ref(v_k_1281_);
lean_inc_ref(v_info_1272_);
lean_inc(v_x_1271_);
v___x_1286_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1271_, v_info_1272_, v_k_1281_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1404_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1289_ = v___x_1286_;
v_isShared_1290_ = v_isSharedCheck_1404_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1286_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1404_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___y_1292_; lean_object* v_snd_1298_; uint8_t v___x_1299_; 
v_snd_1298_ = lean_ctor_get(v_a_1287_, 1);
v___x_1299_ = lean_unbox(v_snd_1298_);
if (v___x_1299_ == 0)
{
lean_object* v_fst_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1389_; 
lean_inc(v_snd_1298_);
lean_del_object(v___x_1289_);
v_fst_1300_ = lean_ctor_get(v_a_1287_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_a_1287_);
if (v_isSharedCheck_1389_ == 0)
{
lean_object* v_unused_1390_; 
v_unused_1390_ = lean_ctor_get(v_a_1287_, 1);
lean_dec(v_unused_1390_);
v___x_1302_ = v_a_1287_;
v_isShared_1303_ = v_isSharedCheck_1389_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_fst_1300_);
lean_dec(v_a_1287_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1389_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___x_1304_; 
lean_inc(v_x_1271_);
v___x_1304_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1283_, v_x_1271_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v_a_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1380_; 
v_a_1305_ = lean_ctor_get(v___x_1304_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1307_ = v___x_1304_;
v_isShared_1308_ = v_isSharedCheck_1380_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_a_1305_);
lean_dec(v___x_1304_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1380_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___y_1310_; lean_object* v___y_1318_; uint8_t v___x_1322_; 
v___x_1322_ = lean_unbox(v_a_1305_);
lean_dec(v_a_1305_);
switch(v___x_1322_)
{
case 0:
{
size_t v___x_1323_; size_t v___x_1324_; uint8_t v___x_1325_; 
lean_del_object(v___x_1307_);
lean_del_object(v___x_1302_);
lean_dec(v_snd_1298_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1323_ = lean_ptr_addr(v_k_1281_);
v___x_1324_ = lean_ptr_addr(v_fst_1300_);
v___x_1325_ = lean_usize_dec_eq(v___x_1323_, v___x_1324_);
if (v___x_1325_ == 0)
{
lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_inc_ref(v_decl_1280_);
v_isSharedCheck_1332_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1332_ == 0)
{
lean_object* v_unused_1333_; lean_object* v_unused_1334_; 
v_unused_1333_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1333_);
v_unused_1334_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1334_);
v___x_1327_ = v_c_1273_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_dec(v_c_1273_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 1, v_fst_1300_);
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_decl_1280_);
lean_ctor_set(v_reuseFailAlloc_1331_, 1, v_fst_1300_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
v___y_1318_ = v___x_1330_;
goto v___jp_1317_;
}
}
}
else
{
lean_dec(v_fst_1300_);
v___y_1318_ = v_c_1273_;
goto v___jp_1317_;
}
}
case 1:
{
lean_object* v___x_1335_; 
lean_del_object(v___x_1307_);
lean_del_object(v___x_1302_);
lean_dec(v_snd_1298_);
v___x_1335_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1271_, v_info_1272_, v_fst_1300_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1359_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1338_ = v___x_1335_;
v_isShared_1339_ = v_isSharedCheck_1359_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1335_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1359_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___y_1341_; size_t v___x_1347_; size_t v___x_1348_; uint8_t v___x_1349_; 
v___x_1347_ = lean_ptr_addr(v_k_1281_);
v___x_1348_ = lean_ptr_addr(v_a_1336_);
v___x_1349_ = lean_usize_dec_eq(v___x_1347_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1356_; 
lean_inc_ref(v_decl_1280_);
v_isSharedCheck_1356_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1356_ == 0)
{
lean_object* v_unused_1357_; lean_object* v_unused_1358_; 
v_unused_1357_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1357_);
v_unused_1358_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1358_);
v___x_1351_ = v_c_1273_;
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
else
{
lean_dec(v_c_1273_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1354_; 
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 1, v_a_1336_);
v___x_1354_ = v___x_1351_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_decl_1280_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v_a_1336_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
v___y_1341_ = v___x_1354_;
goto v___jp_1340_;
}
}
}
else
{
lean_dec(v_a_1336_);
v___y_1341_ = v_c_1273_;
goto v___jp_1340_;
}
v___jp_1340_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1345_; 
v___x_1342_ = lean_box(v___x_1285_);
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___y_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 0, v___x_1343_);
v___x_1345_ = v___x_1338_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
else
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
lean_dec_ref_known(v_c_1273_, 2);
v_a_1360_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1335_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1335_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
}
default: 
{
size_t v___x_1368_; size_t v___x_1369_; uint8_t v___x_1370_; 
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1368_ = lean_ptr_addr(v_k_1281_);
v___x_1369_ = lean_ptr_addr(v_fst_1300_);
v___x_1370_ = lean_usize_dec_eq(v___x_1368_, v___x_1369_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1377_; 
lean_inc_ref(v_decl_1280_);
v_isSharedCheck_1377_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1377_ == 0)
{
lean_object* v_unused_1378_; lean_object* v_unused_1379_; 
v_unused_1378_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1378_);
v_unused_1379_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1379_);
v___x_1372_ = v_c_1273_;
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
else
{
lean_dec(v_c_1273_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 1, v_fst_1300_);
v___x_1375_ = v___x_1372_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_decl_1280_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v_fst_1300_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
v___y_1310_ = v___x_1375_;
goto v___jp_1309_;
}
}
}
else
{
lean_dec(v_fst_1300_);
v___y_1310_ = v_c_1273_;
goto v___jp_1309_;
}
}
}
v___jp_1309_:
{
lean_object* v___x_1312_; 
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 0, v___y_1310_);
v___x_1312_ = v___x_1302_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v___y_1310_);
lean_ctor_set(v_reuseFailAlloc_1316_, 1, v_snd_1298_);
v___x_1312_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
lean_object* v___x_1314_; 
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 0, v___x_1312_);
v___x_1314_ = v___x_1307_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v___x_1312_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
v___jp_1317_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1319_ = lean_box(v___x_1285_);
v___x_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___y_1318_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_del_object(v___x_1302_);
lean_dec(v_fst_1300_);
lean_dec(v_snd_1298_);
lean_dec_ref_known(v_c_1273_, 2);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_a_1381_ = lean_ctor_get(v___x_1304_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1304_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1304_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
else
{
lean_object* v_fst_1391_; size_t v___x_1392_; size_t v___x_1393_; uint8_t v___x_1394_; 
lean_dec_ref(v_instr_1283_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_fst_1391_ = lean_ctor_get(v_a_1287_, 0);
lean_inc(v_fst_1391_);
lean_dec(v_a_1287_);
v___x_1392_ = lean_ptr_addr(v_k_1281_);
v___x_1393_ = lean_ptr_addr(v_fst_1391_);
v___x_1394_ = lean_usize_dec_eq(v___x_1392_, v___x_1393_);
if (v___x_1394_ == 0)
{
lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1401_; 
lean_inc_ref(v_decl_1280_);
v_isSharedCheck_1401_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1401_ == 0)
{
lean_object* v_unused_1402_; lean_object* v_unused_1403_; 
v_unused_1402_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1402_);
v_unused_1403_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1403_);
v___x_1396_ = v_c_1273_;
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
else
{
lean_dec(v_c_1273_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1399_; 
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 1, v_fst_1391_);
v___x_1399_ = v___x_1396_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_decl_1280_);
lean_ctor_set(v_reuseFailAlloc_1400_, 1, v_fst_1391_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
v___y_1292_ = v___x_1399_;
goto v___jp_1291_;
}
}
}
else
{
lean_dec(v_fst_1391_);
v___y_1292_ = v_c_1273_;
goto v___jp_1291_;
}
}
v___jp_1291_:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1296_; 
v___x_1293_ = lean_box(v___x_1285_);
v___x_1294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___y_1292_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 0, v___x_1294_);
v___x_1296_ = v___x_1289_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1294_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1283_);
lean_dec_ref_known(v_c_1273_, 2);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
return v___x_1286_;
}
}
else
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
lean_dec_ref(v_instr_1283_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1405_ = lean_box(v___x_1285_);
v___x_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1406_, 0, v_c_1273_);
lean_ctor_set(v___x_1406_, 1, v___x_1405_);
v___x_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
return v___x_1407_;
}
}
case 2:
{
lean_object* v_decl_1408_; lean_object* v_k_1409_; lean_object* v___x_1410_; 
v_decl_1408_ = lean_ctor_get(v_c_1273_, 0);
v_k_1409_ = lean_ctor_get(v_c_1273_, 1);
lean_inc_ref(v_k_1409_);
lean_inc_ref(v_info_1272_);
lean_inc(v_x_1271_);
v___x_1410_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1271_, v_info_1272_, v_k_1409_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v_fst_1412_; lean_object* v_snd_1413_; lean_object* v_params_1414_; lean_object* v_type_1415_; lean_object* v_value_1416_; uint8_t v___x_1417_; lean_object* v___x_1418_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
lean_inc(v_a_1411_);
lean_dec_ref_known(v___x_1410_, 1);
v_fst_1412_ = lean_ctor_get(v_a_1411_, 0);
lean_inc(v_fst_1412_);
v_snd_1413_ = lean_ctor_get(v_a_1411_, 1);
lean_inc(v_snd_1413_);
lean_dec(v_a_1411_);
v_params_1414_ = lean_ctor_get(v_decl_1408_, 2);
v_type_1415_ = lean_ctor_get(v_decl_1408_, 3);
v_value_1416_ = lean_ctor_get(v_decl_1408_, 4);
v___x_1417_ = 1;
lean_inc_ref(v_value_1416_);
v___x_1418_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1271_, v_info_1272_, v_value_1416_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v_fst_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1470_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v___x_1418_, 1);
v_fst_1420_ = lean_ctor_get(v_a_1419_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v_a_1419_);
if (v_isSharedCheck_1470_ == 0)
{
lean_object* v_unused_1471_; 
v_unused_1471_ = lean_ctor_get(v_a_1419_, 1);
lean_dec(v_unused_1471_);
v___x_1422_ = v_a_1419_;
v_isShared_1423_ = v_isSharedCheck_1470_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_fst_1420_);
lean_dec(v_a_1419_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1470_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; 
lean_inc_ref(v_params_1414_);
lean_inc_ref(v_type_1415_);
lean_inc_ref(v_decl_1408_);
v___x_1424_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1417_, v_decl_1408_, v_type_1415_, v_params_1414_, v_fst_1420_, v_a_1276_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1461_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1427_ = v___x_1424_;
v_isShared_1428_ = v_isSharedCheck_1461_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1424_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1461_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___y_1430_; size_t v___x_1437_; size_t v___x_1438_; uint8_t v___x_1439_; 
v___x_1437_ = lean_ptr_addr(v_k_1409_);
v___x_1438_ = lean_ptr_addr(v_fst_1412_);
v___x_1439_ = lean_usize_dec_eq(v___x_1437_, v___x_1438_);
if (v___x_1439_ == 0)
{
lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1446_; 
v_isSharedCheck_1446_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1446_ == 0)
{
lean_object* v_unused_1447_; lean_object* v_unused_1448_; 
v_unused_1447_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1447_);
v_unused_1448_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1448_);
v___x_1441_ = v_c_1273_;
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
else
{
lean_dec(v_c_1273_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1444_; 
if (v_isShared_1442_ == 0)
{
lean_ctor_set(v___x_1441_, 1, v_fst_1412_);
lean_ctor_set(v___x_1441_, 0, v_a_1425_);
v___x_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1425_);
lean_ctor_set(v_reuseFailAlloc_1445_, 1, v_fst_1412_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
v___y_1430_ = v___x_1444_;
goto v___jp_1429_;
}
}
}
else
{
size_t v___x_1449_; size_t v___x_1450_; uint8_t v___x_1451_; 
v___x_1449_ = lean_ptr_addr(v_decl_1408_);
v___x_1450_ = lean_ptr_addr(v_a_1425_);
v___x_1451_ = lean_usize_dec_eq(v___x_1449_, v___x_1450_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
v_isSharedCheck_1458_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1458_ == 0)
{
lean_object* v_unused_1459_; lean_object* v_unused_1460_; 
v_unused_1459_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1459_);
v_unused_1460_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1460_);
v___x_1453_ = v_c_1273_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_dec(v_c_1273_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
lean_ctor_set(v___x_1453_, 1, v_fst_1412_);
lean_ctor_set(v___x_1453_, 0, v_a_1425_);
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_a_1425_);
lean_ctor_set(v_reuseFailAlloc_1457_, 1, v_fst_1412_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
v___y_1430_ = v___x_1456_;
goto v___jp_1429_;
}
}
}
else
{
lean_dec(v_a_1425_);
lean_dec(v_fst_1412_);
v___y_1430_ = v_c_1273_;
goto v___jp_1429_;
}
}
v___jp_1429_:
{
lean_object* v___x_1432_; 
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 1, v_snd_1413_);
lean_ctor_set(v___x_1422_, 0, v___y_1430_);
v___x_1432_ = v___x_1422_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___y_1430_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v_snd_1413_);
v___x_1432_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
lean_object* v___x_1434_; 
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 0, v___x_1432_);
v___x_1434_ = v___x_1427_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1432_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
lean_del_object(v___x_1422_);
lean_dec(v_snd_1413_);
lean_dec(v_fst_1412_);
lean_dec_ref_known(v_c_1273_, 2);
v_a_1462_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1424_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1424_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
}
else
{
lean_dec(v_snd_1413_);
lean_dec(v_fst_1412_);
lean_dec_ref_known(v_c_1273_, 2);
return v___x_1418_;
}
}
else
{
lean_dec_ref_known(v_c_1273_, 2);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
return v___x_1410_;
}
}
case 3:
{
lean_object* v___x_1472_; 
lean_dec_ref(v_info_1272_);
lean_inc_ref(v_c_1273_);
v___x_1472_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1273_, v_x_1271_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1481_; 
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1475_ = v___x_1472_;
v_isShared_1476_ = v_isSharedCheck_1481_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1472_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1481_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1477_; lean_object* v___x_1479_; 
v___x_1477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1477_, 0, v_c_1273_);
lean_ctor_set(v___x_1477_, 1, v_a_1473_);
if (v_isShared_1476_ == 0)
{
lean_ctor_set(v___x_1475_, 0, v___x_1477_);
v___x_1479_ = v___x_1475_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1477_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
else
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1489_; 
lean_dec_ref_known(v_c_1273_, 2);
v_a_1482_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1484_ = v___x_1472_;
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1472_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1482_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
case 4:
{
lean_object* v_cases_1490_; lean_object* v___x_1491_; 
v_cases_1490_ = lean_ctor_get(v_c_1273_, 0);
lean_inc_ref(v_cases_1490_);
lean_inc(v_x_1271_);
lean_inc_ref(v_c_1273_);
v___x_1491_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1273_, v_x_1271_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1491_) == 0)
{
lean_object* v_a_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1544_; 
v_a_1492_ = lean_ctor_get(v___x_1491_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1491_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1494_ = v___x_1491_;
v_isShared_1495_ = v_isSharedCheck_1544_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_a_1492_);
lean_dec(v___x_1491_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1544_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
uint8_t v___x_1496_; 
v___x_1496_ = lean_unbox(v_a_1492_);
if (v___x_1496_ == 0)
{
lean_object* v___x_1497_; lean_object* v___x_1499_; 
lean_dec_ref(v_cases_1490_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1497_, 0, v_c_1273_);
lean_ctor_set(v___x_1497_, 1, v_a_1492_);
if (v_isShared_1495_ == 0)
{
lean_ctor_set(v___x_1494_, 0, v___x_1497_);
v___x_1499_ = v___x_1494_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v___x_1497_);
v___x_1499_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
return v___x_1499_;
}
}
else
{
lean_object* v_typeName_1501_; lean_object* v_resultType_1502_; lean_object* v_discr_1503_; lean_object* v_alts_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1543_; 
lean_del_object(v___x_1494_);
v_typeName_1501_ = lean_ctor_get(v_cases_1490_, 0);
v_resultType_1502_ = lean_ctor_get(v_cases_1490_, 1);
v_discr_1503_ = lean_ctor_get(v_cases_1490_, 2);
v_alts_1504_ = lean_ctor_get(v_cases_1490_, 3);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_cases_1490_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1506_ = v_cases_1490_;
v_isShared_1507_ = v_isSharedCheck_1543_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_alts_1504_);
lean_inc(v_discr_1503_);
lean_inc(v_resultType_1502_);
lean_inc(v_typeName_1501_);
lean_dec(v_cases_1490_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1543_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_1504_);
v___x_1509_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(v_x_1271_, v_info_1272_, v___x_1508_, v_alts_1504_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1534_; 
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1512_ = v___x_1509_;
v_isShared_1513_ = v_isSharedCheck_1534_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v___x_1509_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1534_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___y_1515_; size_t v___x_1520_; size_t v___x_1521_; uint8_t v___x_1522_; 
v___x_1520_ = lean_ptr_addr(v_alts_1504_);
lean_dec_ref(v_alts_1504_);
v___x_1521_ = lean_ptr_addr(v_a_1510_);
v___x_1522_ = lean_usize_dec_eq(v___x_1520_, v___x_1521_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1532_; 
v_isSharedCheck_1532_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1532_ == 0)
{
lean_object* v_unused_1533_; 
v_unused_1533_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1533_);
v___x_1524_ = v_c_1273_;
v_isShared_1525_ = v_isSharedCheck_1532_;
goto v_resetjp_1523_;
}
else
{
lean_dec(v_c_1273_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1532_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1507_ == 0)
{
lean_ctor_set(v___x_1506_, 3, v_a_1510_);
v___x_1527_ = v___x_1506_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_typeName_1501_);
lean_ctor_set(v_reuseFailAlloc_1531_, 1, v_resultType_1502_);
lean_ctor_set(v_reuseFailAlloc_1531_, 2, v_discr_1503_);
lean_ctor_set(v_reuseFailAlloc_1531_, 3, v_a_1510_);
v___x_1527_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
lean_object* v___x_1529_; 
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 0, v___x_1527_);
v___x_1529_ = v___x_1524_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v___x_1527_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
v___y_1515_ = v___x_1529_;
goto v___jp_1514_;
}
}
}
}
else
{
lean_dec(v_a_1510_);
lean_del_object(v___x_1506_);
lean_dec(v_discr_1503_);
lean_dec_ref(v_resultType_1502_);
lean_dec(v_typeName_1501_);
v___y_1515_ = v_c_1273_;
goto v___jp_1514_;
}
v___jp_1514_:
{
lean_object* v___x_1516_; lean_object* v___x_1518_; 
v___x_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1516_, 0, v___y_1515_);
lean_ctor_set(v___x_1516_, 1, v_a_1492_);
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 0, v___x_1516_);
v___x_1518_ = v___x_1512_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1516_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
else
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1542_; 
lean_del_object(v___x_1506_);
lean_dec_ref(v_alts_1504_);
lean_dec(v_discr_1503_);
lean_dec_ref(v_resultType_1502_);
lean_dec(v_typeName_1501_);
lean_dec(v_a_1492_);
lean_dec_ref_known(v_c_1273_, 1);
v_a_1535_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1537_ = v___x_1509_;
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1509_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1540_; 
if (v_isShared_1538_ == 0)
{
v___x_1540_ = v___x_1537_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1535_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
lean_dec_ref(v_cases_1490_);
lean_dec_ref_known(v_c_1273_, 1);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_a_1545_ = lean_ctor_get(v___x_1491_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1491_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1491_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1491_);
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
case 5:
{
lean_object* v___x_1553_; 
lean_dec_ref(v_info_1272_);
lean_inc_ref(v_c_1273_);
v___x_1553_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1273_, v_x_1271_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1562_; 
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1556_ = v___x_1553_;
v_isShared_1557_ = v_isSharedCheck_1562_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1553_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1562_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1558_; lean_object* v___x_1560_; 
v___x_1558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1558_, 0, v_c_1273_);
lean_ctor_set(v___x_1558_, 1, v_a_1554_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 0, v___x_1558_);
v___x_1560_ = v___x_1556_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v___x_1558_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
else
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
lean_dec_ref_known(v_c_1273_, 1);
v_a_1563_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v___x_1553_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v___x_1553_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1563_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
}
}
case 6:
{
lean_object* v___x_1571_; 
lean_dec_ref(v_info_1272_);
lean_inc_ref(v_c_1273_);
v___x_1571_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1273_, v_x_1271_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1571_) == 0)
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1580_; 
v_a_1572_ = lean_ctor_get(v___x_1571_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1571_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1574_ = v___x_1571_;
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v___x_1571_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1576_; lean_object* v___x_1578_; 
v___x_1576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1576_, 0, v_c_1273_);
lean_ctor_set(v___x_1576_, 1, v_a_1572_);
if (v_isShared_1575_ == 0)
{
lean_ctor_set(v___x_1574_, 0, v___x_1576_);
v___x_1578_ = v___x_1574_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v___x_1576_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
else
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1588_; 
lean_dec_ref_known(v_c_1273_, 1);
v_a_1581_ = lean_ctor_get(v___x_1571_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1571_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1583_ = v___x_1571_;
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1571_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1584_ == 0)
{
v___x_1586_ = v___x_1583_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_a_1581_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
}
case 8:
{
lean_object* v_fvarId_1589_; lean_object* v_i_1590_; lean_object* v_y_1591_; lean_object* v_k_1592_; uint8_t v___x_1593_; lean_object* v_instr_1594_; uint8_t v___x_1595_; uint8_t v___x_1596_; 
v_fvarId_1589_ = lean_ctor_get(v_c_1273_, 0);
v_i_1590_ = lean_ctor_get(v_c_1273_, 1);
v_y_1591_ = lean_ctor_get(v_c_1273_, 2);
v_k_1592_ = lean_ctor_get(v_c_1273_, 3);
v___x_1593_ = 1;
v_instr_1594_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1593_, v_c_1273_);
lean_inc(v_x_1271_);
v___x_1595_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1594_, v_x_1271_);
v___x_1596_ = 1;
if (v___x_1595_ == 0)
{
lean_object* v___x_1597_; 
lean_inc_ref(v_k_1592_);
lean_inc_ref(v_info_1272_);
lean_inc(v_x_1271_);
v___x_1597_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1271_, v_info_1272_, v_k_1592_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1723_; 
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1600_ = v___x_1597_;
v_isShared_1601_ = v_isSharedCheck_1723_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1597_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1723_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___y_1603_; lean_object* v_snd_1609_; uint8_t v___x_1610_; 
v_snd_1609_ = lean_ctor_get(v_a_1598_, 1);
v___x_1610_ = lean_unbox(v_snd_1609_);
if (v___x_1610_ == 0)
{
lean_object* v_fst_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1706_; 
lean_inc(v_snd_1609_);
lean_del_object(v___x_1600_);
v_fst_1611_ = lean_ctor_get(v_a_1598_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v_a_1598_);
if (v_isSharedCheck_1706_ == 0)
{
lean_object* v_unused_1707_; 
v_unused_1707_ = lean_ctor_get(v_a_1598_, 1);
lean_dec(v_unused_1707_);
v___x_1613_ = v_a_1598_;
v_isShared_1614_ = v_isSharedCheck_1706_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_fst_1611_);
lean_dec(v_a_1598_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1706_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1615_; 
lean_inc(v_x_1271_);
v___x_1615_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1594_, v_x_1271_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1697_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1618_ = v___x_1615_;
v_isShared_1619_ = v_isSharedCheck_1697_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1615_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1697_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___y_1621_; lean_object* v___y_1629_; uint8_t v___x_1633_; 
v___x_1633_ = lean_unbox(v_a_1616_);
lean_dec(v_a_1616_);
switch(v___x_1633_)
{
case 0:
{
size_t v___x_1634_; size_t v___x_1635_; uint8_t v___x_1636_; 
lean_del_object(v___x_1618_);
lean_del_object(v___x_1613_);
lean_dec(v_snd_1609_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1634_ = lean_ptr_addr(v_k_1592_);
v___x_1635_ = lean_ptr_addr(v_fst_1611_);
v___x_1636_ = lean_usize_dec_eq(v___x_1634_, v___x_1635_);
if (v___x_1636_ == 0)
{
lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
lean_inc(v_y_1591_);
lean_inc(v_i_1590_);
lean_inc(v_fvarId_1589_);
v_isSharedCheck_1643_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1643_ == 0)
{
lean_object* v_unused_1644_; lean_object* v_unused_1645_; lean_object* v_unused_1646_; lean_object* v_unused_1647_; 
v_unused_1644_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1644_);
v_unused_1645_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1645_);
v_unused_1646_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1646_);
v_unused_1647_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1647_);
v___x_1638_ = v_c_1273_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_dec(v_c_1273_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 3, v_fst_1611_);
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_fvarId_1589_);
lean_ctor_set(v_reuseFailAlloc_1642_, 1, v_i_1590_);
lean_ctor_set(v_reuseFailAlloc_1642_, 2, v_y_1591_);
lean_ctor_set(v_reuseFailAlloc_1642_, 3, v_fst_1611_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
v___y_1629_ = v___x_1641_;
goto v___jp_1628_;
}
}
}
else
{
lean_dec(v_fst_1611_);
v___y_1629_ = v_c_1273_;
goto v___jp_1628_;
}
}
case 1:
{
lean_object* v___x_1648_; 
lean_del_object(v___x_1618_);
lean_del_object(v___x_1613_);
lean_dec(v_snd_1609_);
v___x_1648_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1271_, v_info_1272_, v_fst_1611_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1674_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1651_ = v___x_1648_;
v_isShared_1652_ = v_isSharedCheck_1674_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1674_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___y_1654_; size_t v___x_1660_; size_t v___x_1661_; uint8_t v___x_1662_; 
v___x_1660_ = lean_ptr_addr(v_k_1592_);
v___x_1661_ = lean_ptr_addr(v_a_1649_);
v___x_1662_ = lean_usize_dec_eq(v___x_1660_, v___x_1661_);
if (v___x_1662_ == 0)
{
lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_inc(v_y_1591_);
lean_inc(v_i_1590_);
lean_inc(v_fvarId_1589_);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1669_ == 0)
{
lean_object* v_unused_1670_; lean_object* v_unused_1671_; lean_object* v_unused_1672_; lean_object* v_unused_1673_; 
v_unused_1670_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1670_);
v_unused_1671_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1671_);
v_unused_1672_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1672_);
v_unused_1673_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1673_);
v___x_1664_ = v_c_1273_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_dec(v_c_1273_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 3, v_a_1649_);
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_fvarId_1589_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v_i_1590_);
lean_ctor_set(v_reuseFailAlloc_1668_, 2, v_y_1591_);
lean_ctor_set(v_reuseFailAlloc_1668_, 3, v_a_1649_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
v___y_1654_ = v___x_1667_;
goto v___jp_1653_;
}
}
}
else
{
lean_dec(v_a_1649_);
v___y_1654_ = v_c_1273_;
goto v___jp_1653_;
}
v___jp_1653_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1658_; 
v___x_1655_ = lean_box(v___x_1596_);
v___x_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___y_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 0, v___x_1656_);
v___x_1658_ = v___x_1651_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v___x_1656_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_dec_ref_known(v_c_1273_, 4);
v_a_1675_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1648_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1648_);
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
default: 
{
size_t v___x_1683_; size_t v___x_1684_; uint8_t v___x_1685_; 
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1683_ = lean_ptr_addr(v_k_1592_);
v___x_1684_ = lean_ptr_addr(v_fst_1611_);
v___x_1685_ = lean_usize_dec_eq(v___x_1683_, v___x_1684_);
if (v___x_1685_ == 0)
{
lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
lean_inc(v_y_1591_);
lean_inc(v_i_1590_);
lean_inc(v_fvarId_1589_);
v_isSharedCheck_1692_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1692_ == 0)
{
lean_object* v_unused_1693_; lean_object* v_unused_1694_; lean_object* v_unused_1695_; lean_object* v_unused_1696_; 
v_unused_1693_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1693_);
v_unused_1694_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1694_);
v_unused_1695_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1695_);
v_unused_1696_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1696_);
v___x_1687_ = v_c_1273_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_dec(v_c_1273_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 3, v_fst_1611_);
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_fvarId_1589_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v_i_1590_);
lean_ctor_set(v_reuseFailAlloc_1691_, 2, v_y_1591_);
lean_ctor_set(v_reuseFailAlloc_1691_, 3, v_fst_1611_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
v___y_1621_ = v___x_1690_;
goto v___jp_1620_;
}
}
}
else
{
lean_dec(v_fst_1611_);
v___y_1621_ = v_c_1273_;
goto v___jp_1620_;
}
}
}
v___jp_1620_:
{
lean_object* v___x_1623_; 
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 0, v___y_1621_);
v___x_1623_ = v___x_1613_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v___y_1621_);
lean_ctor_set(v_reuseFailAlloc_1627_, 1, v_snd_1609_);
v___x_1623_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
lean_object* v___x_1625_; 
if (v_isShared_1619_ == 0)
{
lean_ctor_set(v___x_1618_, 0, v___x_1623_);
v___x_1625_ = v___x_1618_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1623_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
v___jp_1628_:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1630_ = lean_box(v___x_1596_);
v___x_1631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1631_, 0, v___y_1629_);
lean_ctor_set(v___x_1631_, 1, v___x_1630_);
v___x_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
return v___x_1632_;
}
}
}
else
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
lean_del_object(v___x_1613_);
lean_dec(v_fst_1611_);
lean_dec(v_snd_1609_);
lean_dec_ref_known(v_c_1273_, 4);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_a_1698_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v___x_1615_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1615_);
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
}
}
else
{
lean_object* v_fst_1708_; size_t v___x_1709_; size_t v___x_1710_; uint8_t v___x_1711_; 
lean_dec_ref(v_instr_1594_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_fst_1708_ = lean_ctor_get(v_a_1598_, 0);
lean_inc(v_fst_1708_);
lean_dec(v_a_1598_);
v___x_1709_ = lean_ptr_addr(v_k_1592_);
v___x_1710_ = lean_ptr_addr(v_fst_1708_);
v___x_1711_ = lean_usize_dec_eq(v___x_1709_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1718_; 
lean_inc(v_y_1591_);
lean_inc(v_i_1590_);
lean_inc(v_fvarId_1589_);
v_isSharedCheck_1718_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1718_ == 0)
{
lean_object* v_unused_1719_; lean_object* v_unused_1720_; lean_object* v_unused_1721_; lean_object* v_unused_1722_; 
v_unused_1719_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1719_);
v_unused_1720_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1720_);
v_unused_1721_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1721_);
v_unused_1722_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1722_);
v___x_1713_ = v_c_1273_;
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
else
{
lean_dec(v_c_1273_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 3, v_fst_1708_);
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_fvarId_1589_);
lean_ctor_set(v_reuseFailAlloc_1717_, 1, v_i_1590_);
lean_ctor_set(v_reuseFailAlloc_1717_, 2, v_y_1591_);
lean_ctor_set(v_reuseFailAlloc_1717_, 3, v_fst_1708_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
v___y_1603_ = v___x_1716_;
goto v___jp_1602_;
}
}
}
else
{
lean_dec(v_fst_1708_);
v___y_1603_ = v_c_1273_;
goto v___jp_1602_;
}
}
v___jp_1602_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1604_ = lean_box(v___x_1596_);
v___x_1605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1605_, 0, v___y_1603_);
lean_ctor_set(v___x_1605_, 1, v___x_1604_);
if (v_isShared_1601_ == 0)
{
lean_ctor_set(v___x_1600_, 0, v___x_1605_);
v___x_1607_ = v___x_1600_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1594_);
lean_dec_ref_known(v_c_1273_, 4);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
return v___x_1597_;
}
}
else
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
lean_dec_ref(v_instr_1594_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1724_ = lean_box(v___x_1596_);
v___x_1725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1725_, 0, v_c_1273_);
lean_ctor_set(v___x_1725_, 1, v___x_1724_);
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
}
case 9:
{
lean_object* v_fvarId_1727_; lean_object* v_i_1728_; lean_object* v_offset_1729_; lean_object* v_y_1730_; lean_object* v_ty_1731_; lean_object* v_k_1732_; uint8_t v___x_1733_; lean_object* v_instr_1734_; uint8_t v___x_1735_; uint8_t v___x_1736_; 
v_fvarId_1727_ = lean_ctor_get(v_c_1273_, 0);
v_i_1728_ = lean_ctor_get(v_c_1273_, 1);
v_offset_1729_ = lean_ctor_get(v_c_1273_, 2);
v_y_1730_ = lean_ctor_get(v_c_1273_, 3);
v_ty_1731_ = lean_ctor_get(v_c_1273_, 4);
v_k_1732_ = lean_ctor_get(v_c_1273_, 5);
v___x_1733_ = 1;
v_instr_1734_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1733_, v_c_1273_);
lean_inc(v_x_1271_);
v___x_1735_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1734_, v_x_1271_);
v___x_1736_ = 1;
if (v___x_1735_ == 0)
{
lean_object* v___x_1737_; 
lean_inc_ref(v_k_1732_);
lean_inc_ref(v_info_1272_);
lean_inc(v_x_1271_);
v___x_1737_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1271_, v_info_1272_, v_k_1732_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1871_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1740_ = v___x_1737_;
v_isShared_1741_ = v_isSharedCheck_1871_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1737_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1871_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___y_1743_; lean_object* v_snd_1749_; uint8_t v___x_1750_; 
v_snd_1749_ = lean_ctor_get(v_a_1738_, 1);
v___x_1750_ = lean_unbox(v_snd_1749_);
if (v___x_1750_ == 0)
{
lean_object* v_fst_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1852_; 
lean_inc(v_snd_1749_);
lean_del_object(v___x_1740_);
v_fst_1751_ = lean_ctor_get(v_a_1738_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v_a_1738_);
if (v_isSharedCheck_1852_ == 0)
{
lean_object* v_unused_1853_; 
v_unused_1853_ = lean_ctor_get(v_a_1738_, 1);
lean_dec(v_unused_1853_);
v___x_1753_ = v_a_1738_;
v_isShared_1754_ = v_isSharedCheck_1852_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_fst_1751_);
lean_dec(v_a_1738_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1852_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1755_; 
lean_inc(v_x_1271_);
v___x_1755_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1734_, v_x_1271_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1843_; 
v_a_1756_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1758_ = v___x_1755_;
v_isShared_1759_ = v_isSharedCheck_1843_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1755_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1843_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___y_1761_; lean_object* v___y_1769_; uint8_t v___x_1773_; 
v___x_1773_ = lean_unbox(v_a_1756_);
lean_dec(v_a_1756_);
switch(v___x_1773_)
{
case 0:
{
size_t v___x_1774_; size_t v___x_1775_; uint8_t v___x_1776_; 
lean_del_object(v___x_1758_);
lean_del_object(v___x_1753_);
lean_dec(v_snd_1749_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1774_ = lean_ptr_addr(v_k_1732_);
v___x_1775_ = lean_ptr_addr(v_fst_1751_);
v___x_1776_ = lean_usize_dec_eq(v___x_1774_, v___x_1775_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
lean_inc_ref(v_ty_1731_);
lean_inc(v_y_1730_);
lean_inc(v_offset_1729_);
lean_inc(v_i_1728_);
lean_inc(v_fvarId_1727_);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1783_ == 0)
{
lean_object* v_unused_1784_; lean_object* v_unused_1785_; lean_object* v_unused_1786_; lean_object* v_unused_1787_; lean_object* v_unused_1788_; lean_object* v_unused_1789_; 
v_unused_1784_ = lean_ctor_get(v_c_1273_, 5);
lean_dec(v_unused_1784_);
v_unused_1785_ = lean_ctor_get(v_c_1273_, 4);
lean_dec(v_unused_1785_);
v_unused_1786_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1786_);
v_unused_1787_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1787_);
v_unused_1788_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1788_);
v_unused_1789_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1789_);
v___x_1778_ = v_c_1273_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_dec(v_c_1273_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 5, v_fst_1751_);
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_fvarId_1727_);
lean_ctor_set(v_reuseFailAlloc_1782_, 1, v_i_1728_);
lean_ctor_set(v_reuseFailAlloc_1782_, 2, v_offset_1729_);
lean_ctor_set(v_reuseFailAlloc_1782_, 3, v_y_1730_);
lean_ctor_set(v_reuseFailAlloc_1782_, 4, v_ty_1731_);
lean_ctor_set(v_reuseFailAlloc_1782_, 5, v_fst_1751_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
v___y_1769_ = v___x_1781_;
goto v___jp_1768_;
}
}
}
else
{
lean_dec(v_fst_1751_);
v___y_1769_ = v_c_1273_;
goto v___jp_1768_;
}
}
case 1:
{
lean_object* v___x_1790_; 
lean_del_object(v___x_1758_);
lean_del_object(v___x_1753_);
lean_dec(v_snd_1749_);
v___x_1790_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1271_, v_info_1272_, v_fst_1751_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v_a_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1818_; 
v_a_1791_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1793_ = v___x_1790_;
v_isShared_1794_ = v_isSharedCheck_1818_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_a_1791_);
lean_dec(v___x_1790_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1818_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___y_1796_; size_t v___x_1802_; size_t v___x_1803_; uint8_t v___x_1804_; 
v___x_1802_ = lean_ptr_addr(v_k_1732_);
v___x_1803_ = lean_ptr_addr(v_a_1791_);
v___x_1804_ = lean_usize_dec_eq(v___x_1802_, v___x_1803_);
if (v___x_1804_ == 0)
{
lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
lean_inc_ref(v_ty_1731_);
lean_inc(v_y_1730_);
lean_inc(v_offset_1729_);
lean_inc(v_i_1728_);
lean_inc(v_fvarId_1727_);
v_isSharedCheck_1811_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1811_ == 0)
{
lean_object* v_unused_1812_; lean_object* v_unused_1813_; lean_object* v_unused_1814_; lean_object* v_unused_1815_; lean_object* v_unused_1816_; lean_object* v_unused_1817_; 
v_unused_1812_ = lean_ctor_get(v_c_1273_, 5);
lean_dec(v_unused_1812_);
v_unused_1813_ = lean_ctor_get(v_c_1273_, 4);
lean_dec(v_unused_1813_);
v_unused_1814_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1814_);
v_unused_1815_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1815_);
v_unused_1816_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1816_);
v_unused_1817_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1817_);
v___x_1806_ = v_c_1273_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_dec(v_c_1273_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
lean_ctor_set(v___x_1806_, 5, v_a_1791_);
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_fvarId_1727_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v_i_1728_);
lean_ctor_set(v_reuseFailAlloc_1810_, 2, v_offset_1729_);
lean_ctor_set(v_reuseFailAlloc_1810_, 3, v_y_1730_);
lean_ctor_set(v_reuseFailAlloc_1810_, 4, v_ty_1731_);
lean_ctor_set(v_reuseFailAlloc_1810_, 5, v_a_1791_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
v___y_1796_ = v___x_1809_;
goto v___jp_1795_;
}
}
}
else
{
lean_dec(v_a_1791_);
v___y_1796_ = v_c_1273_;
goto v___jp_1795_;
}
v___jp_1795_:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1800_; 
v___x_1797_ = lean_box(v___x_1736_);
v___x_1798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1798_, 0, v___y_1796_);
lean_ctor_set(v___x_1798_, 1, v___x_1797_);
if (v_isShared_1794_ == 0)
{
lean_ctor_set(v___x_1793_, 0, v___x_1798_);
v___x_1800_ = v___x_1793_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v___x_1798_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
else
{
lean_object* v_a_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1826_; 
lean_dec_ref_known(v_c_1273_, 6);
v_a_1819_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1821_ = v___x_1790_;
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_a_1819_);
lean_dec(v___x_1790_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1824_; 
if (v_isShared_1822_ == 0)
{
v___x_1824_ = v___x_1821_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_a_1819_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
}
default: 
{
size_t v___x_1827_; size_t v___x_1828_; uint8_t v___x_1829_; 
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1827_ = lean_ptr_addr(v_k_1732_);
v___x_1828_ = lean_ptr_addr(v_fst_1751_);
v___x_1829_ = lean_usize_dec_eq(v___x_1827_, v___x_1828_);
if (v___x_1829_ == 0)
{
lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
lean_inc_ref(v_ty_1731_);
lean_inc(v_y_1730_);
lean_inc(v_offset_1729_);
lean_inc(v_i_1728_);
lean_inc(v_fvarId_1727_);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1836_ == 0)
{
lean_object* v_unused_1837_; lean_object* v_unused_1838_; lean_object* v_unused_1839_; lean_object* v_unused_1840_; lean_object* v_unused_1841_; lean_object* v_unused_1842_; 
v_unused_1837_ = lean_ctor_get(v_c_1273_, 5);
lean_dec(v_unused_1837_);
v_unused_1838_ = lean_ctor_get(v_c_1273_, 4);
lean_dec(v_unused_1838_);
v_unused_1839_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1839_);
v_unused_1840_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1840_);
v_unused_1841_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1841_);
v_unused_1842_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1842_);
v___x_1831_ = v_c_1273_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_dec(v_c_1273_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 5, v_fst_1751_);
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_fvarId_1727_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v_i_1728_);
lean_ctor_set(v_reuseFailAlloc_1835_, 2, v_offset_1729_);
lean_ctor_set(v_reuseFailAlloc_1835_, 3, v_y_1730_);
lean_ctor_set(v_reuseFailAlloc_1835_, 4, v_ty_1731_);
lean_ctor_set(v_reuseFailAlloc_1835_, 5, v_fst_1751_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
v___y_1761_ = v___x_1834_;
goto v___jp_1760_;
}
}
}
else
{
lean_dec(v_fst_1751_);
v___y_1761_ = v_c_1273_;
goto v___jp_1760_;
}
}
}
v___jp_1760_:
{
lean_object* v___x_1763_; 
if (v_isShared_1754_ == 0)
{
lean_ctor_set(v___x_1753_, 0, v___y_1761_);
v___x_1763_ = v___x_1753_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___y_1761_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v_snd_1749_);
v___x_1763_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
lean_object* v___x_1765_; 
if (v_isShared_1759_ == 0)
{
lean_ctor_set(v___x_1758_, 0, v___x_1763_);
v___x_1765_ = v___x_1758_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v___x_1763_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
return v___x_1765_;
}
}
}
v___jp_1768_:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1770_ = lean_box(v___x_1736_);
v___x_1771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___y_1769_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
v___x_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
return v___x_1772_;
}
}
}
else
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
lean_del_object(v___x_1753_);
lean_dec(v_fst_1751_);
lean_dec(v_snd_1749_);
lean_dec_ref_known(v_c_1273_, 6);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_a_1844_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v___x_1755_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1755_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1844_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
}
else
{
lean_object* v_fst_1854_; size_t v___x_1855_; size_t v___x_1856_; uint8_t v___x_1857_; 
lean_dec_ref(v_instr_1734_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_fst_1854_ = lean_ctor_get(v_a_1738_, 0);
lean_inc(v_fst_1854_);
lean_dec(v_a_1738_);
v___x_1855_ = lean_ptr_addr(v_k_1732_);
v___x_1856_ = lean_ptr_addr(v_fst_1854_);
v___x_1857_ = lean_usize_dec_eq(v___x_1855_, v___x_1856_);
if (v___x_1857_ == 0)
{
lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
lean_inc_ref(v_ty_1731_);
lean_inc(v_y_1730_);
lean_inc(v_offset_1729_);
lean_inc(v_i_1728_);
lean_inc(v_fvarId_1727_);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1864_ == 0)
{
lean_object* v_unused_1865_; lean_object* v_unused_1866_; lean_object* v_unused_1867_; lean_object* v_unused_1868_; lean_object* v_unused_1869_; lean_object* v_unused_1870_; 
v_unused_1865_ = lean_ctor_get(v_c_1273_, 5);
lean_dec(v_unused_1865_);
v_unused_1866_ = lean_ctor_get(v_c_1273_, 4);
lean_dec(v_unused_1866_);
v_unused_1867_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1867_);
v_unused_1868_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1868_);
v_unused_1869_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1869_);
v_unused_1870_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1870_);
v___x_1859_ = v_c_1273_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_dec(v_c_1273_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 5, v_fst_1854_);
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_fvarId_1727_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v_i_1728_);
lean_ctor_set(v_reuseFailAlloc_1863_, 2, v_offset_1729_);
lean_ctor_set(v_reuseFailAlloc_1863_, 3, v_y_1730_);
lean_ctor_set(v_reuseFailAlloc_1863_, 4, v_ty_1731_);
lean_ctor_set(v_reuseFailAlloc_1863_, 5, v_fst_1854_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
v___y_1743_ = v___x_1862_;
goto v___jp_1742_;
}
}
}
else
{
lean_dec(v_fst_1854_);
v___y_1743_ = v_c_1273_;
goto v___jp_1742_;
}
}
v___jp_1742_:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1747_; 
v___x_1744_ = lean_box(v___x_1736_);
v___x_1745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___y_1743_);
lean_ctor_set(v___x_1745_, 1, v___x_1744_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 0, v___x_1745_);
v___x_1747_ = v___x_1740_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v___x_1745_);
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
else
{
lean_dec_ref(v_instr_1734_);
lean_dec_ref_known(v_c_1273_, 6);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
return v___x_1737_;
}
}
else
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
lean_dec_ref(v_instr_1734_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1872_ = lean_box(v___x_1736_);
v___x_1873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1873_, 0, v_c_1273_);
lean_ctor_set(v___x_1873_, 1, v___x_1872_);
v___x_1874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1873_);
return v___x_1874_;
}
}
default: 
{
lean_object* v___x_1875_; lean_object* v___x_1876_; 
lean_dec_ref(v_c_1273_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1875_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1);
v___x_1876_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v___x_1875_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
return v___x_1876_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(lean_object* v_x_1877_, lean_object* v_info_1878_, lean_object* v_c_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_){
_start:
{
lean_object* v___x_1886_; 
lean_inc_ref(v_info_1878_);
lean_inc(v_x_1877_);
v___x_1886_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1877_, v_info_1878_, v_c_1879_, v_a_1880_, v_a_1881_, v_a_1882_, v_a_1883_, v_a_1884_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1899_; 
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1889_ = v___x_1886_;
v_isShared_1890_ = v_isSharedCheck_1899_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1886_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1899_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v_snd_1891_; uint8_t v___x_1892_; 
v_snd_1891_ = lean_ctor_get(v_a_1887_, 1);
v___x_1892_ = lean_unbox(v_snd_1891_);
if (v___x_1892_ == 0)
{
lean_object* v_fst_1893_; lean_object* v___x_1894_; 
lean_del_object(v___x_1889_);
v_fst_1893_ = lean_ctor_get(v_a_1887_, 0);
lean_inc(v_fst_1893_);
lean_dec(v_a_1887_);
v___x_1894_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1877_, v_info_1878_, v_fst_1893_, v_a_1880_, v_a_1881_, v_a_1882_, v_a_1883_, v_a_1884_);
return v___x_1894_;
}
else
{
lean_object* v_fst_1895_; lean_object* v___x_1897_; 
lean_dec_ref(v_info_1878_);
lean_dec(v_x_1877_);
v_fst_1895_ = lean_ctor_get(v_a_1887_, 0);
lean_inc(v_fst_1895_);
lean_dec(v_a_1887_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 0, v_fst_1895_);
v___x_1897_ = v___x_1889_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_fst_1895_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1907_; 
lean_dec_ref(v_info_1878_);
lean_dec(v_x_1877_);
v_a_1900_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1902_ = v___x_1886_;
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1886_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1903_ == 0)
{
v___x_1905_ = v___x_1902_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_a_1900_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1___boxed(lean_object* v_x_1908_, lean_object* v_info_1909_, lean_object* v_i_1910_, lean_object* v_as_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(v_x_1908_, v_info_1909_, v_i_1910_, v_as_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_);
lean_dec(v___y_1916_);
lean_dec_ref(v___y_1915_);
lean_dec(v___y_1914_);
lean_dec_ref(v___y_1913_);
lean_dec_ref(v___y_1912_);
return v_res_1918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___boxed(lean_object* v_x_1919_, lean_object* v_info_1920_, lean_object* v_c_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1919_, v_info_1920_, v_c_1921_, v_a_1922_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_);
lean_dec(v_a_1926_);
lean_dec_ref(v_a_1925_);
lean_dec(v_a_1924_);
lean_dec_ref(v_a_1923_);
lean_dec_ref(v_a_1922_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(uint8_t v_pu_1929_, lean_object* v_alt_1930_, lean_object* v_f_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_){
_start:
{
lean_object* v___x_1938_; 
v___x_1938_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_alt_1930_, v_f_1931_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___boxed(lean_object* v_pu_1939_, lean_object* v_alt_1940_, lean_object* v_f_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
uint8_t v_pu_boxed_1948_; lean_object* v_res_1949_; 
v_pu_boxed_1948_ = lean_unbox(v_pu_1939_);
v_res_1949_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(v_pu_boxed_1948_, v_alt_1940_, v_f_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
lean_dec_ref(v___y_1942_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(lean_object* v_msg_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v_toApplicative_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1993_; 
v___x_1957_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_1958_ = l_StateRefT_x27_instMonad___redArg(v___x_1957_);
v_toApplicative_1959_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1993_ == 0)
{
lean_object* v_unused_1994_; 
v_unused_1994_ = lean_ctor_get(v___x_1958_, 1);
lean_dec(v_unused_1994_);
v___x_1961_ = v___x_1958_;
v_isShared_1962_ = v_isSharedCheck_1993_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_toApplicative_1959_);
lean_dec(v___x_1958_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1993_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v_toFunctor_1963_; lean_object* v_toSeq_1964_; lean_object* v_toSeqLeft_1965_; lean_object* v_toSeqRight_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1991_; 
v_toFunctor_1963_ = lean_ctor_get(v_toApplicative_1959_, 0);
v_toSeq_1964_ = lean_ctor_get(v_toApplicative_1959_, 2);
v_toSeqLeft_1965_ = lean_ctor_get(v_toApplicative_1959_, 3);
v_toSeqRight_1966_ = lean_ctor_get(v_toApplicative_1959_, 4);
v_isSharedCheck_1991_ = !lean_is_exclusive(v_toApplicative_1959_);
if (v_isSharedCheck_1991_ == 0)
{
lean_object* v_unused_1992_; 
v_unused_1992_ = lean_ctor_get(v_toApplicative_1959_, 1);
lean_dec(v_unused_1992_);
v___x_1968_ = v_toApplicative_1959_;
v_isShared_1969_ = v_isSharedCheck_1991_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_toSeqRight_1966_);
lean_inc(v_toSeqLeft_1965_);
lean_inc(v_toSeq_1964_);
lean_inc(v_toFunctor_1963_);
lean_dec(v_toApplicative_1959_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1991_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___f_1970_; lean_object* v___f_1971_; lean_object* v___f_1972_; lean_object* v___f_1973_; lean_object* v___x_1974_; lean_object* v___f_1975_; lean_object* v___f_1976_; lean_object* v___f_1977_; lean_object* v___x_1979_; 
v___f_1970_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_1971_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_1963_);
v___f_1972_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1972_, 0, v_toFunctor_1963_);
v___f_1973_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1973_, 0, v_toFunctor_1963_);
v___x_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1974_, 0, v___f_1972_);
lean_ctor_set(v___x_1974_, 1, v___f_1973_);
v___f_1975_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1975_, 0, v_toSeqRight_1966_);
v___f_1976_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1976_, 0, v_toSeqLeft_1965_);
v___f_1977_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1977_, 0, v_toSeq_1964_);
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 4, v___f_1975_);
lean_ctor_set(v___x_1968_, 3, v___f_1976_);
lean_ctor_set(v___x_1968_, 2, v___f_1977_);
lean_ctor_set(v___x_1968_, 1, v___f_1970_);
lean_ctor_set(v___x_1968_, 0, v___x_1974_);
v___x_1979_ = v___x_1968_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1974_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v___f_1970_);
lean_ctor_set(v_reuseFailAlloc_1990_, 2, v___f_1977_);
lean_ctor_set(v_reuseFailAlloc_1990_, 3, v___f_1976_);
lean_ctor_set(v_reuseFailAlloc_1990_, 4, v___f_1975_);
v___x_1979_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
lean_object* v___x_1981_; 
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 1, v___f_1971_);
lean_ctor_set(v___x_1961_, 0, v___x_1979_);
v___x_1981_ = v___x_1961_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v___x_1979_);
lean_ctor_set(v_reuseFailAlloc_1989_, 1, v___f_1971_);
v___x_1981_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___f_1985_; lean_object* v___f_1986_; lean_object* v___x_5536__overap_1987_; lean_object* v___x_1988_; 
v___x_1982_ = l_StateRefT_x27_instMonad___redArg(v___x_1981_);
v___x_1983_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_1984_ = l_instInhabitedOfMonad___redArg(v___x_1982_, v___x_1983_);
v___f_1985_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1985_, 0, v___x_1984_);
v___f_1986_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1986_, 0, v___f_1985_);
v___x_5536__overap_1987_ = lean_panic_fn_borrowed(v___f_1986_, v_msg_1950_);
lean_dec_ref(v___f_1986_);
lean_inc(v___y_1955_);
lean_inc_ref(v___y_1954_);
lean_inc(v___y_1953_);
lean_inc_ref(v___y_1952_);
lean_inc_ref(v___y_1951_);
v___x_1988_ = lean_apply_6(v___x_5536__overap_1987_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, lean_box(0));
return v___x_1988_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4___boxed(lean_object* v_msg_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_){
_start:
{
lean_object* v_res_2002_; 
v_res_2002_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(v_msg_1995_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
lean_dec(v___y_2000_);
lean_dec_ref(v___y_1999_);
lean_dec(v___y_1998_);
lean_dec_ref(v___y_1997_);
lean_dec_ref(v___y_1996_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(lean_object* v_a_2003_, lean_object* v_fallback_2004_, lean_object* v_x_2005_){
_start:
{
if (lean_obj_tag(v_x_2005_) == 0)
{
lean_inc(v_fallback_2004_);
return v_fallback_2004_;
}
else
{
lean_object* v_key_2006_; lean_object* v_value_2007_; lean_object* v_tail_2008_; uint8_t v___x_2009_; 
v_key_2006_ = lean_ctor_get(v_x_2005_, 0);
v_value_2007_ = lean_ctor_get(v_x_2005_, 1);
v_tail_2008_ = lean_ctor_get(v_x_2005_, 2);
v___x_2009_ = l_Lean_instBEqFVarId_beq(v_key_2006_, v_a_2003_);
if (v___x_2009_ == 0)
{
v_x_2005_ = v_tail_2008_;
goto _start;
}
else
{
lean_inc(v_value_2007_);
return v_value_2007_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg___boxed(lean_object* v_a_2011_, lean_object* v_fallback_2012_, lean_object* v_x_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2011_, v_fallback_2012_, v_x_2013_);
lean_dec(v_x_2013_);
lean_dec(v_fallback_2012_);
lean_dec(v_a_2011_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(lean_object* v_m_2015_, lean_object* v_a_2016_, lean_object* v_fallback_2017_){
_start:
{
lean_object* v_buckets_2018_; lean_object* v___x_2019_; uint64_t v___x_2020_; uint64_t v___x_2021_; uint64_t v___x_2022_; uint64_t v_fold_2023_; uint64_t v___x_2024_; uint64_t v___x_2025_; uint64_t v___x_2026_; size_t v___x_2027_; size_t v___x_2028_; size_t v___x_2029_; size_t v___x_2030_; size_t v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; 
v_buckets_2018_ = lean_ctor_get(v_m_2015_, 1);
v___x_2019_ = lean_array_get_size(v_buckets_2018_);
v___x_2020_ = l_Lean_instHashableFVarId_hash(v_a_2016_);
v___x_2021_ = 32ULL;
v___x_2022_ = lean_uint64_shift_right(v___x_2020_, v___x_2021_);
v_fold_2023_ = lean_uint64_xor(v___x_2020_, v___x_2022_);
v___x_2024_ = 16ULL;
v___x_2025_ = lean_uint64_shift_right(v_fold_2023_, v___x_2024_);
v___x_2026_ = lean_uint64_xor(v_fold_2023_, v___x_2025_);
v___x_2027_ = lean_uint64_to_usize(v___x_2026_);
v___x_2028_ = lean_usize_of_nat(v___x_2019_);
v___x_2029_ = ((size_t)1ULL);
v___x_2030_ = lean_usize_sub(v___x_2028_, v___x_2029_);
v___x_2031_ = lean_usize_land(v___x_2027_, v___x_2030_);
v___x_2032_ = lean_array_uget_borrowed(v_buckets_2018_, v___x_2031_);
v___x_2033_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2016_, v_fallback_2017_, v___x_2032_);
return v___x_2033_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg___boxed(lean_object* v_m_2034_, lean_object* v_a_2035_, lean_object* v_fallback_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_m_2034_, v_a_2035_, v_fallback_2036_);
lean_dec(v_fallback_2036_);
lean_dec(v_a_2035_);
lean_dec_ref(v_m_2034_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(lean_object* v_x_2038_, lean_object* v_x_2039_, lean_object* v_x_2040_, lean_object* v_x_2041_){
_start:
{
lean_object* v_ks_2042_; lean_object* v_vs_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2067_; 
v_ks_2042_ = lean_ctor_get(v_x_2038_, 0);
v_vs_2043_ = lean_ctor_get(v_x_2038_, 1);
v_isSharedCheck_2067_ = !lean_is_exclusive(v_x_2038_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2045_ = v_x_2038_;
v_isShared_2046_ = v_isSharedCheck_2067_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_vs_2043_);
lean_inc(v_ks_2042_);
lean_dec(v_x_2038_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2067_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2047_; uint8_t v___x_2048_; 
v___x_2047_ = lean_array_get_size(v_ks_2042_);
v___x_2048_ = lean_nat_dec_lt(v_x_2039_, v___x_2047_);
if (v___x_2048_ == 0)
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2052_; 
lean_dec(v_x_2039_);
v___x_2049_ = lean_array_push(v_ks_2042_, v_x_2040_);
v___x_2050_ = lean_array_push(v_vs_2043_, v_x_2041_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 1, v___x_2050_);
lean_ctor_set(v___x_2045_, 0, v___x_2049_);
v___x_2052_ = v___x_2045_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___x_2049_);
lean_ctor_set(v_reuseFailAlloc_2053_, 1, v___x_2050_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
else
{
lean_object* v_k_x27_2054_; uint8_t v___x_2055_; 
v_k_x27_2054_ = lean_array_fget_borrowed(v_ks_2042_, v_x_2039_);
v___x_2055_ = l_Lean_instBEqFVarId_beq(v_x_2040_, v_k_x27_2054_);
if (v___x_2055_ == 0)
{
lean_object* v___x_2057_; 
if (v_isShared_2046_ == 0)
{
v___x_2057_ = v___x_2045_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_ks_2042_);
lean_ctor_set(v_reuseFailAlloc_2061_, 1, v_vs_2043_);
v___x_2057_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = lean_unsigned_to_nat(1u);
v___x_2059_ = lean_nat_add(v_x_2039_, v___x_2058_);
lean_dec(v_x_2039_);
v_x_2038_ = v___x_2057_;
v_x_2039_ = v___x_2059_;
goto _start;
}
}
else
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2065_; 
v___x_2062_ = lean_array_fset(v_ks_2042_, v_x_2039_, v_x_2040_);
v___x_2063_ = lean_array_fset(v_vs_2043_, v_x_2039_, v_x_2041_);
lean_dec(v_x_2039_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 1, v___x_2063_);
lean_ctor_set(v___x_2045_, 0, v___x_2062_);
v___x_2065_ = v___x_2045_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v___x_2062_);
lean_ctor_set(v_reuseFailAlloc_2066_, 1, v___x_2063_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(lean_object* v_n_2068_, lean_object* v_k_2069_, lean_object* v_v_2070_){
_start:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2071_ = lean_unsigned_to_nat(0u);
v___x_2072_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(v_n_2068_, v___x_2071_, v_k_2069_, v_v_2070_);
return v___x_2072_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2073_ = lean_box(0);
v___x_2074_ = l_unsafeCast___redArg(v___x_2073_);
return v___x_2074_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_2075_; 
v___x_2075_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2075_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(lean_object* v_x_2076_, size_t v_x_2077_, size_t v_x_2078_, lean_object* v_x_2079_, lean_object* v_x_2080_){
_start:
{
if (lean_obj_tag(v_x_2076_) == 0)
{
lean_object* v_es_2081_; size_t v___x_2082_; size_t v___x_2083_; lean_object* v_j_2084_; lean_object* v___x_2085_; uint8_t v___x_2086_; 
v_es_2081_ = lean_ctor_get(v_x_2076_, 0);
v___x_2082_ = ((size_t)31ULL);
v___x_2083_ = lean_usize_land(v_x_2077_, v___x_2082_);
v_j_2084_ = lean_usize_to_nat(v___x_2083_);
v___x_2085_ = lean_array_get_size(v_es_2081_);
v___x_2086_ = lean_nat_dec_lt(v_j_2084_, v___x_2085_);
if (v___x_2086_ == 0)
{
lean_dec(v_j_2084_);
lean_dec(v_x_2080_);
lean_dec(v_x_2079_);
return v_x_2076_;
}
else
{
lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2125_; 
lean_inc_ref(v_es_2081_);
v_isSharedCheck_2125_ = !lean_is_exclusive(v_x_2076_);
if (v_isSharedCheck_2125_ == 0)
{
lean_object* v_unused_2126_; 
v_unused_2126_ = lean_ctor_get(v_x_2076_, 0);
lean_dec(v_unused_2126_);
v___x_2088_ = v_x_2076_;
v_isShared_2089_ = v_isSharedCheck_2125_;
goto v_resetjp_2087_;
}
else
{
lean_dec(v_x_2076_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2125_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v_v_2090_; lean_object* v___x_2091_; lean_object* v_xs_x27_2092_; lean_object* v___y_2094_; 
v_v_2090_ = lean_array_fget(v_es_2081_, v_j_2084_);
v___x_2091_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0);
v_xs_x27_2092_ = lean_array_fset(v_es_2081_, v_j_2084_, v___x_2091_);
switch(lean_obj_tag(v_v_2090_))
{
case 0:
{
lean_object* v_key_2099_; lean_object* v_val_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2110_; 
v_key_2099_ = lean_ctor_get(v_v_2090_, 0);
v_val_2100_ = lean_ctor_get(v_v_2090_, 1);
v_isSharedCheck_2110_ = !lean_is_exclusive(v_v_2090_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2102_ = v_v_2090_;
v_isShared_2103_ = v_isSharedCheck_2110_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_val_2100_);
lean_inc(v_key_2099_);
lean_dec(v_v_2090_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2110_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
uint8_t v___x_2104_; 
v___x_2104_ = l_Lean_instBEqFVarId_beq(v_x_2079_, v_key_2099_);
if (v___x_2104_ == 0)
{
lean_object* v___x_2105_; lean_object* v___x_2106_; 
lean_del_object(v___x_2102_);
v___x_2105_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2099_, v_val_2100_, v_x_2079_, v_x_2080_);
v___x_2106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2105_);
v___y_2094_ = v___x_2106_;
goto v___jp_2093_;
}
else
{
lean_object* v___x_2108_; 
lean_dec(v_val_2100_);
lean_dec(v_key_2099_);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 1, v_x_2080_);
lean_ctor_set(v___x_2102_, 0, v_x_2079_);
v___x_2108_ = v___x_2102_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_x_2079_);
lean_ctor_set(v_reuseFailAlloc_2109_, 1, v_x_2080_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
v___y_2094_ = v___x_2108_;
goto v___jp_2093_;
}
}
}
}
case 1:
{
lean_object* v_node_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2123_; 
v_node_2111_ = lean_ctor_get(v_v_2090_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_v_2090_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2113_ = v_v_2090_;
v_isShared_2114_ = v_isSharedCheck_2123_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_node_2111_);
lean_dec(v_v_2090_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2123_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
size_t v___x_2115_; size_t v___x_2116_; size_t v___x_2117_; size_t v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2121_; 
v___x_2115_ = ((size_t)5ULL);
v___x_2116_ = lean_usize_shift_right(v_x_2077_, v___x_2115_);
v___x_2117_ = ((size_t)1ULL);
v___x_2118_ = lean_usize_add(v_x_2078_, v___x_2117_);
v___x_2119_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_node_2111_, v___x_2116_, v___x_2118_, v_x_2079_, v_x_2080_);
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 0, v___x_2119_);
v___x_2121_ = v___x_2113_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v___x_2119_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
v___y_2094_ = v___x_2121_;
goto v___jp_2093_;
}
}
}
default: 
{
lean_object* v___x_2124_; 
v___x_2124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2124_, 0, v_x_2079_);
lean_ctor_set(v___x_2124_, 1, v_x_2080_);
v___y_2094_ = v___x_2124_;
goto v___jp_2093_;
}
}
v___jp_2093_:
{
lean_object* v___x_2095_; lean_object* v___x_2097_; 
v___x_2095_ = lean_array_fset(v_xs_x27_2092_, v_j_2084_, v___y_2094_);
lean_dec(v_j_2084_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 0, v___x_2095_);
v___x_2097_ = v___x_2088_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v___x_2095_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
}
}
else
{
lean_object* v_ks_2127_; lean_object* v_vs_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2146_; 
v_ks_2127_ = lean_ctor_get(v_x_2076_, 0);
v_vs_2128_ = lean_ctor_get(v_x_2076_, 1);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_x_2076_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2130_ = v_x_2076_;
v_isShared_2131_ = v_isSharedCheck_2146_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_vs_2128_);
lean_inc(v_ks_2127_);
lean_dec(v_x_2076_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2146_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
if (v_isShared_2131_ == 0)
{
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_ks_2127_);
lean_ctor_set(v_reuseFailAlloc_2145_, 1, v_vs_2128_);
v___x_2133_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
lean_object* v_newNode_2134_; size_t v___x_2135_; uint8_t v___x_2136_; 
v_newNode_2134_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(v___x_2133_, v_x_2079_, v_x_2080_);
v___x_2135_ = ((size_t)7ULL);
v___x_2136_ = lean_usize_dec_le(v___x_2135_, v_x_2078_);
if (v___x_2136_ == 0)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; uint8_t v___x_2139_; 
v___x_2137_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2134_);
v___x_2138_ = lean_unsigned_to_nat(4u);
v___x_2139_ = lean_nat_dec_lt(v___x_2137_, v___x_2138_);
lean_dec(v___x_2137_);
if (v___x_2139_ == 0)
{
lean_object* v_ks_2140_; lean_object* v_vs_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v_ks_2140_ = lean_ctor_get(v_newNode_2134_, 0);
lean_inc_ref(v_ks_2140_);
v_vs_2141_ = lean_ctor_get(v_newNode_2134_, 1);
lean_inc_ref(v_vs_2141_);
lean_dec_ref(v_newNode_2134_);
v___x_2142_ = lean_unsigned_to_nat(0u);
v___x_2143_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1);
v___x_2144_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_x_2078_, v_ks_2140_, v_vs_2141_, v___x_2142_, v___x_2143_);
lean_dec_ref(v_vs_2141_);
lean_dec_ref(v_ks_2140_);
return v___x_2144_;
}
else
{
return v_newNode_2134_;
}
}
else
{
return v_newNode_2134_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(size_t v_depth_2147_, lean_object* v_keys_2148_, lean_object* v_vals_2149_, lean_object* v_i_2150_, lean_object* v_entries_2151_){
_start:
{
lean_object* v___x_2152_; uint8_t v___x_2153_; 
v___x_2152_ = lean_array_get_size(v_keys_2148_);
v___x_2153_ = lean_nat_dec_lt(v_i_2150_, v___x_2152_);
if (v___x_2153_ == 0)
{
lean_dec(v_i_2150_);
return v_entries_2151_;
}
else
{
lean_object* v_k_2154_; lean_object* v_v_2155_; uint64_t v___x_2156_; size_t v_h_2157_; size_t v___x_2158_; lean_object* v___x_2159_; size_t v___x_2160_; size_t v___x_2161_; size_t v___x_2162_; size_t v_h_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v_k_2154_ = lean_array_fget_borrowed(v_keys_2148_, v_i_2150_);
v_v_2155_ = lean_array_fget_borrowed(v_vals_2149_, v_i_2150_);
v___x_2156_ = l_Lean_instHashableFVarId_hash(v_k_2154_);
v_h_2157_ = lean_uint64_to_usize(v___x_2156_);
v___x_2158_ = ((size_t)5ULL);
v___x_2159_ = lean_unsigned_to_nat(1u);
v___x_2160_ = ((size_t)1ULL);
v___x_2161_ = lean_usize_sub(v_depth_2147_, v___x_2160_);
v___x_2162_ = lean_usize_mul(v___x_2158_, v___x_2161_);
v_h_2163_ = lean_usize_shift_right(v_h_2157_, v___x_2162_);
v___x_2164_ = lean_nat_add(v_i_2150_, v___x_2159_);
lean_dec(v_i_2150_);
lean_inc(v_v_2155_);
lean_inc(v_k_2154_);
v___x_2165_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_entries_2151_, v_h_2163_, v_depth_2147_, v_k_2154_, v_v_2155_);
v_i_2150_ = v___x_2164_;
v_entries_2151_ = v___x_2165_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_depth_2167_, lean_object* v_keys_2168_, lean_object* v_vals_2169_, lean_object* v_i_2170_, lean_object* v_entries_2171_){
_start:
{
size_t v_depth_boxed_2172_; lean_object* v_res_2173_; 
v_depth_boxed_2172_ = lean_unbox_usize(v_depth_2167_);
lean_dec(v_depth_2167_);
v_res_2173_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_depth_boxed_2172_, v_keys_2168_, v_vals_2169_, v_i_2170_, v_entries_2171_);
lean_dec_ref(v_vals_2169_);
lean_dec_ref(v_keys_2168_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___boxed(lean_object* v_x_2174_, lean_object* v_x_2175_, lean_object* v_x_2176_, lean_object* v_x_2177_, lean_object* v_x_2178_){
_start:
{
size_t v_x_6194__boxed_2179_; size_t v_x_6195__boxed_2180_; lean_object* v_res_2181_; 
v_x_6194__boxed_2179_ = lean_unbox_usize(v_x_2175_);
lean_dec(v_x_2175_);
v_x_6195__boxed_2180_ = lean_unbox_usize(v_x_2176_);
lean_dec(v_x_2176_);
v_res_2181_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2174_, v_x_6194__boxed_2179_, v_x_6195__boxed_2180_, v_x_2177_, v_x_2178_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(lean_object* v_x_2182_, lean_object* v_x_2183_, lean_object* v_x_2184_){
_start:
{
uint64_t v___x_2185_; size_t v___x_2186_; size_t v___x_2187_; lean_object* v___x_2188_; 
v___x_2185_ = l_Lean_instHashableFVarId_hash(v_x_2183_);
v___x_2186_ = lean_uint64_to_usize(v___x_2185_);
v___x_2187_ = ((size_t)1ULL);
v___x_2188_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2182_, v___x_2186_, v___x_2187_, v_x_2183_, v_x_2184_);
return v___x_2188_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_2189_, lean_object* v_i_2190_, lean_object* v_k_2191_){
_start:
{
lean_object* v___x_2192_; uint8_t v___x_2193_; 
v___x_2192_ = lean_array_get_size(v_keys_2189_);
v___x_2193_ = lean_nat_dec_lt(v_i_2190_, v___x_2192_);
if (v___x_2193_ == 0)
{
lean_dec(v_i_2190_);
return v___x_2193_;
}
else
{
lean_object* v_k_x27_2194_; uint8_t v___x_2195_; 
v_k_x27_2194_ = lean_array_fget_borrowed(v_keys_2189_, v_i_2190_);
v___x_2195_ = l_Lean_instBEqFVarId_beq(v_k_2191_, v_k_x27_2194_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2196_ = lean_unsigned_to_nat(1u);
v___x_2197_ = lean_nat_add(v_i_2190_, v___x_2196_);
lean_dec(v_i_2190_);
v_i_2190_ = v___x_2197_;
goto _start;
}
else
{
lean_dec(v_i_2190_);
return v___x_2193_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_2199_, lean_object* v_i_2200_, lean_object* v_k_2201_){
_start:
{
uint8_t v_res_2202_; lean_object* v_r_2203_; 
v_res_2202_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_keys_2199_, v_i_2200_, v_k_2201_);
lean_dec(v_k_2201_);
lean_dec_ref(v_keys_2199_);
v_r_2203_ = lean_box(v_res_2202_);
return v_r_2203_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(lean_object* v_x_2204_, size_t v_x_2205_, lean_object* v_x_2206_){
_start:
{
if (lean_obj_tag(v_x_2204_) == 0)
{
lean_object* v_es_2207_; lean_object* v___x_2208_; size_t v___x_2209_; size_t v___x_2210_; lean_object* v_j_2211_; lean_object* v___x_2212_; 
v_es_2207_ = lean_ctor_get(v_x_2204_, 0);
v___x_2208_ = lean_box(2);
v___x_2209_ = ((size_t)31ULL);
v___x_2210_ = lean_usize_land(v_x_2205_, v___x_2209_);
v_j_2211_ = lean_usize_to_nat(v___x_2210_);
v___x_2212_ = lean_array_get_borrowed(v___x_2208_, v_es_2207_, v_j_2211_);
lean_dec(v_j_2211_);
switch(lean_obj_tag(v___x_2212_))
{
case 0:
{
lean_object* v_key_2213_; uint8_t v___x_2214_; 
v_key_2213_ = lean_ctor_get(v___x_2212_, 0);
v___x_2214_ = l_Lean_instBEqFVarId_beq(v_x_2206_, v_key_2213_);
return v___x_2214_;
}
case 1:
{
lean_object* v_node_2215_; size_t v___x_2216_; size_t v___x_2217_; 
v_node_2215_ = lean_ctor_get(v___x_2212_, 0);
v___x_2216_ = ((size_t)5ULL);
v___x_2217_ = lean_usize_shift_right(v_x_2205_, v___x_2216_);
v_x_2204_ = v_node_2215_;
v_x_2205_ = v___x_2217_;
goto _start;
}
default: 
{
uint8_t v___x_2219_; 
v___x_2219_ = 0;
return v___x_2219_;
}
}
}
else
{
lean_object* v_ks_2220_; lean_object* v___x_2221_; uint8_t v___x_2222_; 
v_ks_2220_ = lean_ctor_get(v_x_2204_, 0);
v___x_2221_ = lean_unsigned_to_nat(0u);
v___x_2222_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_ks_2220_, v___x_2221_, v_x_2206_);
return v___x_2222_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg___boxed(lean_object* v_x_2223_, lean_object* v_x_2224_, lean_object* v_x_2225_){
_start:
{
size_t v_x_6374__boxed_2226_; uint8_t v_res_2227_; lean_object* v_r_2228_; 
v_x_6374__boxed_2226_ = lean_unbox_usize(v_x_2224_);
lean_dec(v_x_2224_);
v_res_2227_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2223_, v_x_6374__boxed_2226_, v_x_2225_);
lean_dec(v_x_2225_);
lean_dec_ref(v_x_2223_);
v_r_2228_ = lean_box(v_res_2227_);
return v_r_2228_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(lean_object* v_x_2229_, lean_object* v_x_2230_){
_start:
{
uint64_t v___x_2231_; size_t v___x_2232_; uint8_t v___x_2233_; 
v___x_2231_ = l_Lean_instHashableFVarId_hash(v_x_2230_);
v___x_2232_ = lean_uint64_to_usize(v___x_2231_);
v___x_2233_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2229_, v___x_2232_, v_x_2230_);
return v___x_2233_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg___boxed(lean_object* v_x_2234_, lean_object* v_x_2235_){
_start:
{
uint8_t v_res_2236_; lean_object* v_r_2237_; 
v_res_2236_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_x_2234_, v_x_2235_);
lean_dec(v_x_2235_);
lean_dec_ref(v_x_2234_);
v_r_2237_ = lean_box(v_res_2236_);
return v_r_2237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3___boxed(lean_object* v___x_2238_, lean_object* v_discr_2239_, lean_object* v___x_2240_, lean_object* v_sz_2241_, lean_object* v_i_2242_, lean_object* v_bs_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_){
_start:
{
uint8_t v___x_6435__boxed_2250_; uint8_t v___x_6437__boxed_2251_; size_t v_sz_boxed_2252_; size_t v_i_boxed_2253_; lean_object* v_res_2254_; 
v___x_6435__boxed_2250_ = lean_unbox(v___x_2238_);
v___x_6437__boxed_2251_ = lean_unbox(v___x_2240_);
v_sz_boxed_2252_ = lean_unbox_usize(v_sz_2241_);
lean_dec(v_sz_2241_);
v_i_boxed_2253_ = lean_unbox_usize(v_i_2242_);
lean_dec(v_i_2242_);
v_res_2254_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(v___x_6435__boxed_2250_, v_discr_2239_, v___x_6437__boxed_2251_, v_sz_boxed_2252_, v_i_boxed_2253_, v_bs_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec_ref(v___y_2244_);
return v_res_2254_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1(void){
_start:
{
lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___x_2256_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_2257_ = lean_unsigned_to_nat(59u);
v___x_2258_ = lean_unsigned_to_nat(281u);
v___x_2259_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0));
v___x_2260_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_2261_ = l_mkPanicMessageWithDecl(v___x_2260_, v___x_2259_, v___x_2258_, v___x_2257_, v___x_2256_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(lean_object* v_c_2262_, lean_object* v_a_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_){
_start:
{
switch(lean_obj_tag(v_c_2262_))
{
case 0:
{
lean_object* v_decl_2269_; lean_object* v_k_2270_; lean_object* v___x_2271_; 
v_decl_2269_ = lean_ctor_get(v_c_2262_, 0);
v_k_2270_ = lean_ctor_get(v_c_2262_, 1);
lean_inc_ref(v_k_2270_);
v___x_2271_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2270_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2294_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2294_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2294_ == 0)
{
v___x_2274_ = v___x_2271_;
v_isShared_2275_ = v_isSharedCheck_2294_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v___x_2271_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2294_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
size_t v___x_2276_; size_t v___x_2277_; uint8_t v___x_2278_; 
v___x_2276_ = lean_ptr_addr(v_k_2270_);
v___x_2277_ = lean_ptr_addr(v_a_2272_);
v___x_2278_ = lean_usize_dec_eq(v___x_2276_, v___x_2277_);
if (v___x_2278_ == 0)
{
lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2288_; 
lean_inc_ref(v_decl_2269_);
v_isSharedCheck_2288_ = !lean_is_exclusive(v_c_2262_);
if (v_isSharedCheck_2288_ == 0)
{
lean_object* v_unused_2289_; lean_object* v_unused_2290_; 
v_unused_2289_ = lean_ctor_get(v_c_2262_, 1);
lean_dec(v_unused_2289_);
v_unused_2290_ = lean_ctor_get(v_c_2262_, 0);
lean_dec(v_unused_2290_);
v___x_2280_ = v_c_2262_;
v_isShared_2281_ = v_isSharedCheck_2288_;
goto v_resetjp_2279_;
}
else
{
lean_dec(v_c_2262_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2288_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2283_; 
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 1, v_a_2272_);
v___x_2283_ = v___x_2280_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_decl_2269_);
lean_ctor_set(v_reuseFailAlloc_2287_, 1, v_a_2272_);
v___x_2283_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
lean_object* v___x_2285_; 
if (v_isShared_2275_ == 0)
{
lean_ctor_set(v___x_2274_, 0, v___x_2283_);
v___x_2285_ = v___x_2274_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v___x_2283_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
}
}
else
{
lean_object* v___x_2292_; 
lean_dec(v_a_2272_);
if (v_isShared_2275_ == 0)
{
lean_ctor_set(v___x_2274_, 0, v_c_2262_);
v___x_2292_ = v___x_2274_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v_c_2262_);
v___x_2292_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
return v___x_2292_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2262_, 2);
return v___x_2271_;
}
}
case 2:
{
lean_object* v_decl_2295_; lean_object* v_k_2296_; lean_object* v_params_2297_; lean_object* v_type_2298_; lean_object* v_value_2299_; uint8_t v___x_2300_; lean_object* v___x_2301_; 
v_decl_2295_ = lean_ctor_get(v_c_2262_, 0);
v_k_2296_ = lean_ctor_get(v_c_2262_, 1);
v_params_2297_ = lean_ctor_get(v_decl_2295_, 2);
v_type_2298_ = lean_ctor_get(v_decl_2295_, 3);
v_value_2299_ = lean_ctor_get(v_decl_2295_, 4);
v___x_2300_ = 1;
lean_inc_ref(v_value_2299_);
v___x_2301_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_value_2299_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_object* v_a_2302_; lean_object* v___x_2303_; 
v_a_2302_ = lean_ctor_get(v___x_2301_, 0);
lean_inc(v_a_2302_);
lean_dec_ref_known(v___x_2301_, 1);
lean_inc_ref(v_params_2297_);
lean_inc_ref(v_type_2298_);
lean_inc_ref(v_decl_2295_);
v___x_2303_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_2300_, v_decl_2295_, v_type_2298_, v_params_2297_, v_a_2302_, v_a_2265_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2304_; lean_object* v___x_2305_; 
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_a_2304_);
lean_dec_ref_known(v___x_2303_, 1);
lean_inc_ref(v_k_2296_);
v___x_2305_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2296_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2343_; 
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2308_ = v___x_2305_;
v_isShared_2309_ = v_isSharedCheck_2343_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2305_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2343_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
size_t v___x_2310_; size_t v___x_2311_; uint8_t v___x_2312_; 
v___x_2310_ = lean_ptr_addr(v_k_2296_);
v___x_2311_ = lean_ptr_addr(v_a_2306_);
v___x_2312_ = lean_usize_dec_eq(v___x_2310_, v___x_2311_);
if (v___x_2312_ == 0)
{
lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2322_; 
v_isSharedCheck_2322_ = !lean_is_exclusive(v_c_2262_);
if (v_isSharedCheck_2322_ == 0)
{
lean_object* v_unused_2323_; lean_object* v_unused_2324_; 
v_unused_2323_ = lean_ctor_get(v_c_2262_, 1);
lean_dec(v_unused_2323_);
v_unused_2324_ = lean_ctor_get(v_c_2262_, 0);
lean_dec(v_unused_2324_);
v___x_2314_ = v_c_2262_;
v_isShared_2315_ = v_isSharedCheck_2322_;
goto v_resetjp_2313_;
}
else
{
lean_dec(v_c_2262_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2322_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2317_; 
if (v_isShared_2315_ == 0)
{
lean_ctor_set(v___x_2314_, 1, v_a_2306_);
lean_ctor_set(v___x_2314_, 0, v_a_2304_);
v___x_2317_ = v___x_2314_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2304_);
lean_ctor_set(v_reuseFailAlloc_2321_, 1, v_a_2306_);
v___x_2317_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
lean_object* v___x_2319_; 
if (v_isShared_2309_ == 0)
{
lean_ctor_set(v___x_2308_, 0, v___x_2317_);
v___x_2319_ = v___x_2308_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v___x_2317_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
else
{
size_t v___x_2325_; size_t v___x_2326_; uint8_t v___x_2327_; 
v___x_2325_ = lean_ptr_addr(v_decl_2295_);
v___x_2326_ = lean_ptr_addr(v_a_2304_);
v___x_2327_ = lean_usize_dec_eq(v___x_2325_, v___x_2326_);
if (v___x_2327_ == 0)
{
lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2337_; 
v_isSharedCheck_2337_ = !lean_is_exclusive(v_c_2262_);
if (v_isSharedCheck_2337_ == 0)
{
lean_object* v_unused_2338_; lean_object* v_unused_2339_; 
v_unused_2338_ = lean_ctor_get(v_c_2262_, 1);
lean_dec(v_unused_2338_);
v_unused_2339_ = lean_ctor_get(v_c_2262_, 0);
lean_dec(v_unused_2339_);
v___x_2329_ = v_c_2262_;
v_isShared_2330_ = v_isSharedCheck_2337_;
goto v_resetjp_2328_;
}
else
{
lean_dec(v_c_2262_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2337_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2332_; 
if (v_isShared_2330_ == 0)
{
lean_ctor_set(v___x_2329_, 1, v_a_2306_);
lean_ctor_set(v___x_2329_, 0, v_a_2304_);
v___x_2332_ = v___x_2329_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2304_);
lean_ctor_set(v_reuseFailAlloc_2336_, 1, v_a_2306_);
v___x_2332_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
lean_object* v___x_2334_; 
if (v_isShared_2309_ == 0)
{
lean_ctor_set(v___x_2308_, 0, v___x_2332_);
v___x_2334_ = v___x_2308_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v___x_2332_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
else
{
lean_object* v___x_2341_; 
lean_dec(v_a_2306_);
lean_dec(v_a_2304_);
if (v_isShared_2309_ == 0)
{
lean_ctor_set(v___x_2308_, 0, v_c_2262_);
v___x_2341_ = v___x_2308_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_c_2262_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
}
}
else
{
lean_dec(v_a_2304_);
lean_dec_ref_known(v_c_2262_, 2);
return v___x_2305_;
}
}
else
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2351_; 
lean_dec_ref_known(v_c_2262_, 2);
v_a_2344_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2346_ = v___x_2303_;
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2303_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2347_ == 0)
{
v___x_2349_ = v___x_2346_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2344_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2262_, 2);
return v___x_2301_;
}
}
case 3:
{
lean_object* v___x_2352_; 
v___x_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2352_, 0, v_c_2262_);
return v___x_2352_;
}
case 4:
{
lean_object* v_cases_2353_; lean_object* v_typeName_2354_; lean_object* v_resultType_2355_; lean_object* v_discr_2356_; lean_object* v_alts_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2416_; 
v_cases_2353_ = lean_ctor_get(v_c_2262_, 0);
lean_inc_ref(v_cases_2353_);
v_typeName_2354_ = lean_ctor_get(v_cases_2353_, 0);
v_resultType_2355_ = lean_ctor_get(v_cases_2353_, 1);
v_discr_2356_ = lean_ctor_get(v_cases_2353_, 2);
v_alts_2357_ = lean_ctor_get(v_cases_2353_, 3);
v_isSharedCheck_2416_ = !lean_is_exclusive(v_cases_2353_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2359_ = v_cases_2353_;
v_isShared_2360_ = v_isSharedCheck_2416_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_alts_2357_);
lean_inc(v_discr_2356_);
lean_inc(v_resultType_2355_);
lean_inc(v_typeName_2354_);
lean_dec(v_cases_2353_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2416_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v_alreadyFound_2361_; uint8_t v_relaxedReuse_2362_; lean_object* v_ownedness_2363_; uint8_t v___x_2364_; uint8_t v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; uint8_t v___x_2368_; uint8_t v___x_2369_; uint8_t v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; size_t v_sz_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_5927__overap_2381_; lean_object* v___x_2382_; 
v_alreadyFound_2361_ = lean_ctor_get(v_a_2263_, 0);
v_relaxedReuse_2362_ = lean_ctor_get_uint8(v_a_2263_, sizeof(void*)*2);
v_ownedness_2363_ = lean_ctor_get(v_a_2263_, 1);
v___x_2364_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_alreadyFound_2361_, v_discr_2356_);
v___x_2365_ = 0;
v___x_2366_ = lean_box(v___x_2365_);
v___x_2367_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_ownedness_2363_, v_discr_2356_, v___x_2366_);
lean_dec(v___x_2366_);
v___x_2368_ = 1;
v___x_2369_ = lean_unbox(v___x_2367_);
lean_dec(v___x_2367_);
v___x_2370_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_2369_, v___x_2368_);
v___x_2371_ = lean_box(0);
lean_inc_n(v_discr_2356_, 2);
lean_inc_ref(v_alreadyFound_2361_);
v___x_2372_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v_alreadyFound_2361_, v_discr_2356_, v___x_2371_);
lean_inc_ref(v_ownedness_2363_);
v___x_2373_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
lean_ctor_set(v___x_2373_, 1, v_ownedness_2363_);
lean_ctor_set_uint8(v___x_2373_, sizeof(void*)*2, v_relaxedReuse_2362_);
v_sz_2374_ = lean_array_size(v_alts_2357_);
v___x_2375_ = l_unsafeCast___redArg(v_alts_2357_);
v___x_2376_ = lean_box(v___x_2370_);
v___x_2377_ = lean_box(v___x_2364_);
v___x_2378_ = lean_box_usize(v_sz_2374_);
v___x_2379_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed__const__1));
v___x_2380_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3___boxed), 12, 6);
lean_closure_set(v___x_2380_, 0, v___x_2376_);
lean_closure_set(v___x_2380_, 1, v_discr_2356_);
lean_closure_set(v___x_2380_, 2, v___x_2377_);
lean_closure_set(v___x_2380_, 3, v___x_2378_);
lean_closure_set(v___x_2380_, 4, v___x_2379_);
lean_closure_set(v___x_2380_, 5, v___x_2375_);
v___x_5927__overap_2381_ = l_unsafeCast___redArg(v___x_2380_);
lean_dec_ref(v___x_2380_);
lean_inc(v_a_2267_);
lean_inc_ref(v_a_2266_);
lean_inc(v_a_2265_);
lean_inc_ref(v_a_2264_);
v___x_2382_ = lean_apply_6(v___x_5927__overap_2381_, v___x_2373_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_, lean_box(0));
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2407_; 
v_a_2383_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2385_ = v___x_2382_;
v_isShared_2386_ = v_isSharedCheck_2407_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2382_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2407_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
size_t v___x_2387_; size_t v___x_2388_; uint8_t v___x_2389_; 
v___x_2387_ = lean_ptr_addr(v_alts_2357_);
lean_dec_ref(v_alts_2357_);
v___x_2388_ = lean_ptr_addr(v_a_2383_);
v___x_2389_ = lean_usize_dec_eq(v___x_2387_, v___x_2388_);
if (v___x_2389_ == 0)
{
lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2402_; 
v_isSharedCheck_2402_ = !lean_is_exclusive(v_c_2262_);
if (v_isSharedCheck_2402_ == 0)
{
lean_object* v_unused_2403_; 
v_unused_2403_ = lean_ctor_get(v_c_2262_, 0);
lean_dec(v_unused_2403_);
v___x_2391_ = v_c_2262_;
v_isShared_2392_ = v_isSharedCheck_2402_;
goto v_resetjp_2390_;
}
else
{
lean_dec(v_c_2262_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2402_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2394_; 
if (v_isShared_2360_ == 0)
{
lean_ctor_set(v___x_2359_, 3, v_a_2383_);
v___x_2394_ = v___x_2359_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_typeName_2354_);
lean_ctor_set(v_reuseFailAlloc_2401_, 1, v_resultType_2355_);
lean_ctor_set(v_reuseFailAlloc_2401_, 2, v_discr_2356_);
lean_ctor_set(v_reuseFailAlloc_2401_, 3, v_a_2383_);
v___x_2394_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
lean_object* v___x_2396_; 
if (v_isShared_2392_ == 0)
{
lean_ctor_set(v___x_2391_, 0, v___x_2394_);
v___x_2396_ = v___x_2391_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v___x_2394_);
v___x_2396_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
lean_object* v___x_2398_; 
if (v_isShared_2386_ == 0)
{
lean_ctor_set(v___x_2385_, 0, v___x_2396_);
v___x_2398_ = v___x_2385_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v___x_2396_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
}
else
{
lean_object* v___x_2405_; 
lean_dec(v_a_2383_);
lean_del_object(v___x_2359_);
lean_dec(v_discr_2356_);
lean_dec_ref(v_resultType_2355_);
lean_dec(v_typeName_2354_);
if (v_isShared_2386_ == 0)
{
lean_ctor_set(v___x_2385_, 0, v_c_2262_);
v___x_2405_ = v___x_2385_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_c_2262_);
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
else
{
lean_object* v_a_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2415_; 
lean_del_object(v___x_2359_);
lean_dec_ref(v_alts_2357_);
lean_dec(v_discr_2356_);
lean_dec_ref(v_resultType_2355_);
lean_dec(v_typeName_2354_);
lean_dec_ref_known(v_c_2262_, 1);
v_a_2408_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2415_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2415_ == 0)
{
v___x_2410_ = v___x_2382_;
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_a_2408_);
lean_dec(v___x_2382_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2413_; 
if (v_isShared_2411_ == 0)
{
v___x_2413_ = v___x_2410_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v_a_2408_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
}
}
}
case 5:
{
lean_object* v___x_2417_; 
v___x_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2417_, 0, v_c_2262_);
return v___x_2417_;
}
case 6:
{
lean_object* v___x_2418_; 
v___x_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2418_, 0, v_c_2262_);
return v___x_2418_;
}
case 8:
{
lean_object* v_fvarId_2419_; lean_object* v_i_2420_; lean_object* v_y_2421_; lean_object* v_k_2422_; lean_object* v___x_2423_; 
v_fvarId_2419_ = lean_ctor_get(v_c_2262_, 0);
v_i_2420_ = lean_ctor_get(v_c_2262_, 1);
v_y_2421_ = lean_ctor_get(v_c_2262_, 2);
v_k_2422_ = lean_ctor_get(v_c_2262_, 3);
lean_inc_ref(v_k_2422_);
v___x_2423_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2422_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2448_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2426_ = v___x_2423_;
v_isShared_2427_ = v_isSharedCheck_2448_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2423_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2448_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
size_t v___x_2428_; size_t v___x_2429_; uint8_t v___x_2430_; 
v___x_2428_ = lean_ptr_addr(v_k_2422_);
v___x_2429_ = lean_ptr_addr(v_a_2424_);
v___x_2430_ = lean_usize_dec_eq(v___x_2428_, v___x_2429_);
if (v___x_2430_ == 0)
{
lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2440_; 
lean_inc(v_y_2421_);
lean_inc(v_i_2420_);
lean_inc(v_fvarId_2419_);
v_isSharedCheck_2440_ = !lean_is_exclusive(v_c_2262_);
if (v_isSharedCheck_2440_ == 0)
{
lean_object* v_unused_2441_; lean_object* v_unused_2442_; lean_object* v_unused_2443_; lean_object* v_unused_2444_; 
v_unused_2441_ = lean_ctor_get(v_c_2262_, 3);
lean_dec(v_unused_2441_);
v_unused_2442_ = lean_ctor_get(v_c_2262_, 2);
lean_dec(v_unused_2442_);
v_unused_2443_ = lean_ctor_get(v_c_2262_, 1);
lean_dec(v_unused_2443_);
v_unused_2444_ = lean_ctor_get(v_c_2262_, 0);
lean_dec(v_unused_2444_);
v___x_2432_ = v_c_2262_;
v_isShared_2433_ = v_isSharedCheck_2440_;
goto v_resetjp_2431_;
}
else
{
lean_dec(v_c_2262_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2440_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2435_; 
if (v_isShared_2433_ == 0)
{
lean_ctor_set(v___x_2432_, 3, v_a_2424_);
v___x_2435_ = v___x_2432_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_fvarId_2419_);
lean_ctor_set(v_reuseFailAlloc_2439_, 1, v_i_2420_);
lean_ctor_set(v_reuseFailAlloc_2439_, 2, v_y_2421_);
lean_ctor_set(v_reuseFailAlloc_2439_, 3, v_a_2424_);
v___x_2435_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
lean_object* v___x_2437_; 
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 0, v___x_2435_);
v___x_2437_ = v___x_2426_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v___x_2435_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
}
else
{
lean_object* v___x_2446_; 
lean_dec(v_a_2424_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 0, v_c_2262_);
v___x_2446_ = v___x_2426_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_c_2262_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2262_, 4);
return v___x_2423_;
}
}
case 9:
{
lean_object* v_fvarId_2449_; lean_object* v_i_2450_; lean_object* v_offset_2451_; lean_object* v_y_2452_; lean_object* v_ty_2453_; lean_object* v_k_2454_; lean_object* v___x_2455_; 
v_fvarId_2449_ = lean_ctor_get(v_c_2262_, 0);
v_i_2450_ = lean_ctor_get(v_c_2262_, 1);
v_offset_2451_ = lean_ctor_get(v_c_2262_, 2);
v_y_2452_ = lean_ctor_get(v_c_2262_, 3);
v_ty_2453_ = lean_ctor_get(v_c_2262_, 4);
v_k_2454_ = lean_ctor_get(v_c_2262_, 5);
lean_inc_ref(v_k_2454_);
v___x_2455_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2454_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_);
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2482_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2458_ = v___x_2455_;
v_isShared_2459_ = v_isSharedCheck_2482_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_a_2456_);
lean_dec(v___x_2455_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2482_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
size_t v___x_2460_; size_t v___x_2461_; uint8_t v___x_2462_; 
v___x_2460_ = lean_ptr_addr(v_k_2454_);
v___x_2461_ = lean_ptr_addr(v_a_2456_);
v___x_2462_ = lean_usize_dec_eq(v___x_2460_, v___x_2461_);
if (v___x_2462_ == 0)
{
lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2472_; 
lean_inc_ref(v_ty_2453_);
lean_inc(v_y_2452_);
lean_inc(v_offset_2451_);
lean_inc(v_i_2450_);
lean_inc(v_fvarId_2449_);
v_isSharedCheck_2472_ = !lean_is_exclusive(v_c_2262_);
if (v_isSharedCheck_2472_ == 0)
{
lean_object* v_unused_2473_; lean_object* v_unused_2474_; lean_object* v_unused_2475_; lean_object* v_unused_2476_; lean_object* v_unused_2477_; lean_object* v_unused_2478_; 
v_unused_2473_ = lean_ctor_get(v_c_2262_, 5);
lean_dec(v_unused_2473_);
v_unused_2474_ = lean_ctor_get(v_c_2262_, 4);
lean_dec(v_unused_2474_);
v_unused_2475_ = lean_ctor_get(v_c_2262_, 3);
lean_dec(v_unused_2475_);
v_unused_2476_ = lean_ctor_get(v_c_2262_, 2);
lean_dec(v_unused_2476_);
v_unused_2477_ = lean_ctor_get(v_c_2262_, 1);
lean_dec(v_unused_2477_);
v_unused_2478_ = lean_ctor_get(v_c_2262_, 0);
lean_dec(v_unused_2478_);
v___x_2464_ = v_c_2262_;
v_isShared_2465_ = v_isSharedCheck_2472_;
goto v_resetjp_2463_;
}
else
{
lean_dec(v_c_2262_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2472_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2467_; 
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 5, v_a_2456_);
v___x_2467_ = v___x_2464_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_fvarId_2449_);
lean_ctor_set(v_reuseFailAlloc_2471_, 1, v_i_2450_);
lean_ctor_set(v_reuseFailAlloc_2471_, 2, v_offset_2451_);
lean_ctor_set(v_reuseFailAlloc_2471_, 3, v_y_2452_);
lean_ctor_set(v_reuseFailAlloc_2471_, 4, v_ty_2453_);
lean_ctor_set(v_reuseFailAlloc_2471_, 5, v_a_2456_);
v___x_2467_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
lean_object* v___x_2469_; 
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v___x_2467_);
v___x_2469_ = v___x_2458_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v___x_2467_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
else
{
lean_object* v___x_2480_; 
lean_dec(v_a_2456_);
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v_c_2262_);
v___x_2480_ = v___x_2458_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_c_2262_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2262_, 6);
return v___x_2455_;
}
}
default: 
{
lean_object* v___x_2483_; lean_object* v___x_2484_; 
lean_dec_ref(v_c_2262_);
v___x_2483_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1);
v___x_2484_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(v___x_2483_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_);
return v___x_2484_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed(lean_object* v_c_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_, lean_object* v_a_2489_, lean_object* v_a_2490_, lean_object* v_a_2491_){
_start:
{
lean_object* v_res_2492_; 
v_res_2492_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_c_2485_, v_a_2486_, v_a_2487_, v_a_2488_, v_a_2489_, v_a_2490_);
lean_dec(v_a_2490_);
lean_dec_ref(v_a_2489_);
lean_dec(v_a_2488_);
lean_dec_ref(v_a_2487_);
lean_dec_ref(v_a_2486_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(uint8_t v___x_2493_, lean_object* v_discr_2494_, uint8_t v___x_2495_, size_t v_sz_2496_, size_t v_i_2497_, lean_object* v_bs_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_){
_start:
{
uint8_t v___x_2505_; 
v___x_2505_ = lean_usize_dec_lt(v_i_2497_, v_sz_2496_);
if (v___x_2505_ == 0)
{
lean_object* v___x_2506_; lean_object* v___x_2507_; 
lean_dec(v_discr_2494_);
v___x_2506_ = l_unsafeCast___redArg(v_bs_2498_);
lean_dec_ref(v_bs_2498_);
v___x_2507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2506_);
return v___x_2507_;
}
else
{
lean_object* v___f_2508_; lean_object* v_v_2509_; lean_object* v___x_2510_; lean_object* v_bs_x27_2511_; lean_object* v_a_2513_; lean_object* v___y_2520_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___f_2508_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed), 7, 0);
v_v_2509_ = lean_array_uget(v_bs_2498_, v_i_2497_);
v___x_2510_ = lean_unsigned_to_nat(0u);
v_bs_x27_2511_ = lean_array_uset(v_bs_2498_, v_i_2497_, v___x_2510_);
v___x_2530_ = l_unsafeCast___redArg(v_v_2509_);
lean_dec(v_v_2509_);
v___x_2531_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v___x_2530_, v___f_2508_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v_a_2532_; 
v_a_2532_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_a_2532_);
if (lean_obj_tag(v_a_2532_) == 1)
{
lean_object* v_info_2533_; lean_object* v_code_2534_; uint8_t v___y_2536_; uint8_t v___x_2548_; 
v_info_2533_ = lean_ctor_get(v_a_2532_, 0);
v_code_2534_ = lean_ctor_get(v_a_2532_, 1);
v___x_2548_ = l_Lean_Compiler_LCNF_CtorInfo_isScalar(v_info_2533_);
if (v___x_2548_ == 0)
{
v___y_2536_ = v___x_2495_;
goto v___jp_2535_;
}
else
{
v___y_2536_ = v___x_2548_;
goto v___jp_2535_;
}
v___jp_2535_:
{
if (v___y_2536_ == 0)
{
if (v___x_2493_ == 0)
{
lean_object* v___x_2537_; 
lean_dec_ref_known(v___x_2531_, 1);
lean_inc_ref(v_code_2534_);
lean_inc_ref(v_info_2533_);
lean_inc(v_discr_2494_);
v___x_2537_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(v_discr_2494_, v_info_2533_, v_code_2534_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_);
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_object* v_a_2538_; lean_object* v___x_2539_; 
v_a_2538_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_a_2538_);
lean_dec_ref_known(v___x_2537_, 1);
v___x_2539_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2532_, v_a_2538_);
v_a_2513_ = v___x_2539_;
goto v___jp_2512_;
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
lean_dec_ref_known(v_a_2532_, 2);
lean_dec_ref(v_bs_x27_2511_);
lean_dec(v_discr_2494_);
v_a_2540_ = lean_ctor_get(v___x_2537_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2537_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2537_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_2532_, 2);
v___y_2520_ = v___x_2531_;
goto v___jp_2519_;
}
}
else
{
lean_dec_ref_known(v_a_2532_, 2);
v___y_2520_ = v___x_2531_;
goto v___jp_2519_;
}
}
}
else
{
lean_dec_ref_known(v_a_2532_, 1);
v___y_2520_ = v___x_2531_;
goto v___jp_2519_;
}
}
else
{
v___y_2520_ = v___x_2531_;
goto v___jp_2519_;
}
v___jp_2512_:
{
size_t v___x_2514_; size_t v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2514_ = ((size_t)1ULL);
v___x_2515_ = lean_usize_add(v_i_2497_, v___x_2514_);
v___x_2516_ = l_unsafeCast___redArg(v_a_2513_);
lean_dec_ref(v_a_2513_);
v___x_2517_ = lean_array_uset(v_bs_x27_2511_, v_i_2497_, v___x_2516_);
v_i_2497_ = v___x_2515_;
v_bs_2498_ = v___x_2517_;
goto _start;
}
v___jp_2519_:
{
if (lean_obj_tag(v___y_2520_) == 0)
{
lean_object* v_a_2521_; 
v_a_2521_ = lean_ctor_get(v___y_2520_, 0);
lean_inc(v_a_2521_);
lean_dec_ref_known(v___y_2520_, 1);
v_a_2513_ = v_a_2521_;
goto v___jp_2512_;
}
else
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2529_; 
lean_dec_ref(v_bs_x27_2511_);
lean_dec(v_discr_2494_);
v_a_2522_ = lean_ctor_get(v___y_2520_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___y_2520_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2524_ = v___y_2520_;
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___y_2520_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2527_; 
if (v_isShared_2525_ == 0)
{
v___x_2527_ = v___x_2524_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2522_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(lean_object* v_00_u03b2_2549_, lean_object* v_x_2550_, lean_object* v_x_2551_){
_start:
{
uint8_t v___x_2552_; 
v___x_2552_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_x_2550_, v_x_2551_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___boxed(lean_object* v_00_u03b2_2553_, lean_object* v_x_2554_, lean_object* v_x_2555_){
_start:
{
uint8_t v_res_2556_; lean_object* v_r_2557_; 
v_res_2556_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(v_00_u03b2_2553_, v_x_2554_, v_x_2555_);
lean_dec(v_x_2555_);
lean_dec_ref(v_x_2554_);
v_r_2557_ = lean_box(v_res_2556_);
return v_r_2557_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(lean_object* v_00_u03b2_2558_, lean_object* v_m_2559_, lean_object* v_a_2560_, lean_object* v_fallback_2561_){
_start:
{
lean_object* v___x_2562_; 
v___x_2562_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_m_2559_, v_a_2560_, v_fallback_2561_);
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___boxed(lean_object* v_00_u03b2_2563_, lean_object* v_m_2564_, lean_object* v_a_2565_, lean_object* v_fallback_2566_){
_start:
{
lean_object* v_res_2567_; 
v_res_2567_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(v_00_u03b2_2563_, v_m_2564_, v_a_2565_, v_fallback_2566_);
lean_dec(v_fallback_2566_);
lean_dec(v_a_2565_);
lean_dec_ref(v_m_2564_);
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2(lean_object* v_00_u03b2_2568_, lean_object* v_x_2569_, lean_object* v_x_2570_, lean_object* v_x_2571_){
_start:
{
lean_object* v___x_2572_; 
v___x_2572_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v_x_2569_, v_x_2570_, v_x_2571_);
return v___x_2572_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(lean_object* v_00_u03b2_2573_, lean_object* v_x_2574_, size_t v_x_2575_, lean_object* v_x_2576_){
_start:
{
uint8_t v___x_2577_; 
v___x_2577_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2574_, v_x_2575_, v_x_2576_);
return v___x_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2578_, lean_object* v_x_2579_, lean_object* v_x_2580_, lean_object* v_x_2581_){
_start:
{
size_t v_x_7025__boxed_2582_; uint8_t v_res_2583_; lean_object* v_r_2584_; 
v_x_7025__boxed_2582_ = lean_unbox_usize(v_x_2580_);
lean_dec(v_x_2580_);
v_res_2583_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(v_00_u03b2_2578_, v_x_2579_, v_x_7025__boxed_2582_, v_x_2581_);
lean_dec(v_x_2581_);
lean_dec_ref(v_x_2579_);
v_r_2584_ = lean_box(v_res_2583_);
return v_r_2584_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(lean_object* v_00_u03b2_2585_, lean_object* v_a_2586_, lean_object* v_fallback_2587_, lean_object* v_x_2588_){
_start:
{
lean_object* v___x_2589_; 
v___x_2589_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2586_, v_fallback_2587_, v_x_2588_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2590_, lean_object* v_a_2591_, lean_object* v_fallback_2592_, lean_object* v_x_2593_){
_start:
{
lean_object* v_res_2594_; 
v_res_2594_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(v_00_u03b2_2590_, v_a_2591_, v_fallback_2592_, v_x_2593_);
lean_dec(v_x_2593_);
lean_dec(v_fallback_2592_);
lean_dec(v_a_2591_);
return v_res_2594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(lean_object* v_00_u03b2_2595_, lean_object* v_x_2596_, size_t v_x_2597_, size_t v_x_2598_, lean_object* v_x_2599_, lean_object* v_x_2600_){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2596_, v_x_2597_, v_x_2598_, v_x_2599_, v_x_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___boxed(lean_object* v_00_u03b2_2602_, lean_object* v_x_2603_, lean_object* v_x_2604_, lean_object* v_x_2605_, lean_object* v_x_2606_, lean_object* v_x_2607_){
_start:
{
size_t v_x_7041__boxed_2608_; size_t v_x_7042__boxed_2609_; lean_object* v_res_2610_; 
v_x_7041__boxed_2608_ = lean_unbox_usize(v_x_2604_);
lean_dec(v_x_2604_);
v_x_7042__boxed_2609_ = lean_unbox_usize(v_x_2605_);
lean_dec(v_x_2605_);
v_res_2610_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(v_00_u03b2_2602_, v_x_2603_, v_x_7041__boxed_2608_, v_x_7042__boxed_2609_, v_x_2606_, v_x_2607_);
return v_res_2610_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2611_, lean_object* v_keys_2612_, lean_object* v_vals_2613_, lean_object* v_heq_2614_, lean_object* v_i_2615_, lean_object* v_k_2616_){
_start:
{
uint8_t v___x_2617_; 
v___x_2617_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_keys_2612_, v_i_2615_, v_k_2616_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2618_, lean_object* v_keys_2619_, lean_object* v_vals_2620_, lean_object* v_heq_2621_, lean_object* v_i_2622_, lean_object* v_k_2623_){
_start:
{
uint8_t v_res_2624_; lean_object* v_r_2625_; 
v_res_2624_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(v_00_u03b2_2618_, v_keys_2619_, v_vals_2620_, v_heq_2621_, v_i_2622_, v_k_2623_);
lean_dec(v_k_2623_);
lean_dec_ref(v_vals_2620_);
lean_dec_ref(v_keys_2619_);
v_r_2625_ = lean_box(v_res_2624_);
return v_r_2625_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_2626_, lean_object* v_n_2627_, lean_object* v_k_2628_, lean_object* v_v_2629_){
_start:
{
lean_object* v___x_2630_; 
v___x_2630_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(v_n_2627_, v_k_2628_, v_v_2629_);
return v___x_2630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_2631_, size_t v_depth_2632_, lean_object* v_keys_2633_, lean_object* v_vals_2634_, lean_object* v_heq_2635_, lean_object* v_i_2636_, lean_object* v_entries_2637_){
_start:
{
lean_object* v___x_2638_; 
v___x_2638_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_depth_2632_, v_keys_2633_, v_vals_2634_, v_i_2636_, v_entries_2637_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_2639_, lean_object* v_depth_2640_, lean_object* v_keys_2641_, lean_object* v_vals_2642_, lean_object* v_heq_2643_, lean_object* v_i_2644_, lean_object* v_entries_2645_){
_start:
{
size_t v_depth_boxed_2646_; lean_object* v_res_2647_; 
v_depth_boxed_2646_ = lean_unbox_usize(v_depth_2640_);
lean_dec(v_depth_2640_);
v_res_2647_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(v_00_u03b2_2639_, v_depth_boxed_2646_, v_keys_2641_, v_vals_2642_, v_heq_2643_, v_i_2644_, v_entries_2645_);
lean_dec_ref(v_vals_2642_);
lean_dec_ref(v_keys_2641_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9(lean_object* v_00_u03b2_2648_, lean_object* v_x_2649_, lean_object* v_x_2650_, lean_object* v_x_2651_, lean_object* v_x_2652_){
_start:
{
lean_object* v___x_2653_; 
v___x_2653_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(v_x_2649_, v_x_2650_, v_x_2651_, v_x_2652_);
return v___x_2653_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(lean_object* v_msg_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_){
_start:
{
lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v_toApplicative_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2727_; 
v___x_2663_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_2664_ = l_StateRefT_x27_instMonad___redArg(v___x_2663_);
v_toApplicative_2665_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2727_ == 0)
{
lean_object* v_unused_2728_; 
v_unused_2728_ = lean_ctor_get(v___x_2664_, 1);
lean_dec(v_unused_2728_);
v___x_2667_ = v___x_2664_;
v_isShared_2668_ = v_isSharedCheck_2727_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_toApplicative_2665_);
lean_dec(v___x_2664_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2727_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v_toFunctor_2669_; lean_object* v_toSeq_2670_; lean_object* v_toSeqLeft_2671_; lean_object* v_toSeqRight_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2725_; 
v_toFunctor_2669_ = lean_ctor_get(v_toApplicative_2665_, 0);
v_toSeq_2670_ = lean_ctor_get(v_toApplicative_2665_, 2);
v_toSeqLeft_2671_ = lean_ctor_get(v_toApplicative_2665_, 3);
v_toSeqRight_2672_ = lean_ctor_get(v_toApplicative_2665_, 4);
v_isSharedCheck_2725_ = !lean_is_exclusive(v_toApplicative_2665_);
if (v_isSharedCheck_2725_ == 0)
{
lean_object* v_unused_2726_; 
v_unused_2726_ = lean_ctor_get(v_toApplicative_2665_, 1);
lean_dec(v_unused_2726_);
v___x_2674_ = v_toApplicative_2665_;
v_isShared_2675_ = v_isSharedCheck_2725_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_toSeqRight_2672_);
lean_inc(v_toSeqLeft_2671_);
lean_inc(v_toSeq_2670_);
lean_inc(v_toFunctor_2669_);
lean_dec(v_toApplicative_2665_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2725_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___f_2676_; lean_object* v___f_2677_; lean_object* v___f_2678_; lean_object* v___f_2679_; lean_object* v___x_2680_; lean_object* v___f_2681_; lean_object* v___f_2682_; lean_object* v___f_2683_; lean_object* v___x_2685_; 
v___f_2676_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_2677_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_2669_);
v___f_2678_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2678_, 0, v_toFunctor_2669_);
v___f_2679_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2679_, 0, v_toFunctor_2669_);
v___x_2680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2680_, 0, v___f_2678_);
lean_ctor_set(v___x_2680_, 1, v___f_2679_);
v___f_2681_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2681_, 0, v_toSeqRight_2672_);
v___f_2682_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2682_, 0, v_toSeqLeft_2671_);
v___f_2683_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2683_, 0, v_toSeq_2670_);
if (v_isShared_2675_ == 0)
{
lean_ctor_set(v___x_2674_, 4, v___f_2681_);
lean_ctor_set(v___x_2674_, 3, v___f_2682_);
lean_ctor_set(v___x_2674_, 2, v___f_2683_);
lean_ctor_set(v___x_2674_, 1, v___f_2676_);
lean_ctor_set(v___x_2674_, 0, v___x_2680_);
v___x_2685_ = v___x_2674_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v___x_2680_);
lean_ctor_set(v_reuseFailAlloc_2724_, 1, v___f_2676_);
lean_ctor_set(v_reuseFailAlloc_2724_, 2, v___f_2683_);
lean_ctor_set(v_reuseFailAlloc_2724_, 3, v___f_2682_);
lean_ctor_set(v_reuseFailAlloc_2724_, 4, v___f_2681_);
v___x_2685_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2687_; 
if (v_isShared_2668_ == 0)
{
lean_ctor_set(v___x_2667_, 1, v___f_2677_);
lean_ctor_set(v___x_2667_, 0, v___x_2685_);
v___x_2687_ = v___x_2667_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v___x_2685_);
lean_ctor_set(v_reuseFailAlloc_2723_, 1, v___f_2677_);
v___x_2687_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
lean_object* v___x_2688_; lean_object* v_toApplicative_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2721_; 
v___x_2688_ = l_StateRefT_x27_instMonad___redArg(v___x_2687_);
v_toApplicative_2689_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2721_ == 0)
{
lean_object* v_unused_2722_; 
v_unused_2722_ = lean_ctor_get(v___x_2688_, 1);
lean_dec(v_unused_2722_);
v___x_2691_ = v___x_2688_;
v_isShared_2692_ = v_isSharedCheck_2721_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_toApplicative_2689_);
lean_dec(v___x_2688_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2721_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v_toFunctor_2693_; lean_object* v_toSeq_2694_; lean_object* v_toSeqLeft_2695_; lean_object* v_toSeqRight_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2719_; 
v_toFunctor_2693_ = lean_ctor_get(v_toApplicative_2689_, 0);
v_toSeq_2694_ = lean_ctor_get(v_toApplicative_2689_, 2);
v_toSeqLeft_2695_ = lean_ctor_get(v_toApplicative_2689_, 3);
v_toSeqRight_2696_ = lean_ctor_get(v_toApplicative_2689_, 4);
v_isSharedCheck_2719_ = !lean_is_exclusive(v_toApplicative_2689_);
if (v_isSharedCheck_2719_ == 0)
{
lean_object* v_unused_2720_; 
v_unused_2720_ = lean_ctor_get(v_toApplicative_2689_, 1);
lean_dec(v_unused_2720_);
v___x_2698_ = v_toApplicative_2689_;
v_isShared_2699_ = v_isSharedCheck_2719_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_toSeqRight_2696_);
lean_inc(v_toSeqLeft_2695_);
lean_inc(v_toSeq_2694_);
lean_inc(v_toFunctor_2693_);
lean_dec(v_toApplicative_2689_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2719_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___f_2700_; lean_object* v___f_2701_; lean_object* v___f_2702_; lean_object* v___f_2703_; lean_object* v___x_2704_; lean_object* v___f_2705_; lean_object* v___f_2706_; lean_object* v___f_2707_; lean_object* v___x_2709_; 
v___f_2700_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0));
v___f_2701_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1));
lean_inc_ref(v_toFunctor_2693_);
v___f_2702_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2702_, 0, v_toFunctor_2693_);
v___f_2703_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2703_, 0, v_toFunctor_2693_);
v___x_2704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2704_, 0, v___f_2702_);
lean_ctor_set(v___x_2704_, 1, v___f_2703_);
v___f_2705_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2705_, 0, v_toSeqRight_2696_);
v___f_2706_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2706_, 0, v_toSeqLeft_2695_);
v___f_2707_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2707_, 0, v_toSeq_2694_);
if (v_isShared_2699_ == 0)
{
lean_ctor_set(v___x_2698_, 4, v___f_2705_);
lean_ctor_set(v___x_2698_, 3, v___f_2706_);
lean_ctor_set(v___x_2698_, 2, v___f_2707_);
lean_ctor_set(v___x_2698_, 1, v___f_2700_);
lean_ctor_set(v___x_2698_, 0, v___x_2704_);
v___x_2709_ = v___x_2698_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2704_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v___f_2700_);
lean_ctor_set(v_reuseFailAlloc_2718_, 2, v___f_2707_);
lean_ctor_set(v_reuseFailAlloc_2718_, 3, v___f_2706_);
lean_ctor_set(v_reuseFailAlloc_2718_, 4, v___f_2705_);
v___x_2709_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
lean_object* v___x_2711_; 
if (v_isShared_2692_ == 0)
{
lean_ctor_set(v___x_2691_, 1, v___f_2701_);
lean_ctor_set(v___x_2691_, 0, v___x_2709_);
v___x_2711_ = v___x_2691_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v___x_2709_);
lean_ctor_set(v_reuseFailAlloc_2717_, 1, v___f_2701_);
v___x_2711_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2546__overap_2715_; lean_object* v___x_2716_; 
v___x_2712_ = l_StateRefT_x27_instMonad___redArg(v___x_2711_);
v___x_2713_ = lean_box(0);
v___x_2714_ = l_instInhabitedOfMonad___redArg(v___x_2712_, v___x_2713_);
v___x_2546__overap_2715_ = lean_panic_fn_borrowed(v___x_2714_, v_msg_2656_);
lean_dec(v___x_2714_);
lean_inc(v___y_2661_);
lean_inc_ref(v___y_2660_);
lean_inc(v___y_2659_);
lean_inc_ref(v___y_2658_);
lean_inc(v___y_2657_);
v___x_2716_ = lean_apply_6(v___x_2546__overap_2715_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, lean_box(0));
return v___x_2716_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___boxed(lean_object* v_msg_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v_res_2736_; 
v_res_2736_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(v_msg_2729_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
lean_dec(v___y_2734_);
lean_dec_ref(v___y_2733_);
lean_dec(v___y_2732_);
lean_dec_ref(v___y_2731_);
lean_dec(v___y_2730_);
return v_res_2736_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1(void){
_start:
{
lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2738_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_2739_ = lean_unsigned_to_nat(61u);
v___x_2740_ = lean_unsigned_to_nat(304u);
v___x_2741_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0));
v___x_2742_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_2743_ = l_mkPanicMessageWithDecl(v___x_2742_, v___x_2741_, v___x_2740_, v___x_2739_, v___x_2738_);
return v___x_2743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(lean_object* v_c_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_){
_start:
{
switch(lean_obj_tag(v_c_2744_))
{
case 0:
{
lean_object* v_decl_2751_; lean_object* v_value_2752_; 
v_decl_2751_ = lean_ctor_get(v_c_2744_, 0);
v_value_2752_ = lean_ctor_get(v_decl_2751_, 3);
if (lean_obj_tag(v_value_2752_) == 11)
{
lean_object* v_k_2753_; lean_object* v_var_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
lean_inc_ref(v_value_2752_);
v_k_2753_ = lean_ctor_get(v_c_2744_, 1);
lean_inc_ref(v_k_2753_);
lean_dec_ref_known(v_c_2744_, 2);
v_var_2754_ = lean_ctor_get(v_value_2752_, 1);
lean_inc(v_var_2754_);
lean_dec_ref_known(v_value_2752_, 2);
v___x_2755_ = lean_st_ref_take(v_a_2745_);
v___x_2756_ = lean_box(0);
v___x_2757_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v___x_2755_, v_var_2754_, v___x_2756_);
v___x_2758_ = lean_st_ref_put(v_a_2745_, v___x_2757_);
v_c_2744_ = v_k_2753_;
goto _start;
}
else
{
lean_object* v_k_2760_; 
v_k_2760_ = lean_ctor_get(v_c_2744_, 1);
lean_inc_ref(v_k_2760_);
lean_dec_ref_known(v_c_2744_, 2);
v_c_2744_ = v_k_2760_;
goto _start;
}
}
case 2:
{
lean_object* v_decl_2762_; lean_object* v_k_2763_; lean_object* v_value_2764_; lean_object* v___x_2765_; 
v_decl_2762_ = lean_ctor_get(v_c_2744_, 0);
lean_inc_ref(v_decl_2762_);
v_k_2763_ = lean_ctor_get(v_c_2744_, 1);
lean_inc_ref(v_k_2763_);
lean_dec_ref_known(v_c_2744_, 2);
v_value_2764_ = lean_ctor_get(v_decl_2762_, 4);
lean_inc_ref(v_value_2764_);
lean_dec_ref(v_decl_2762_);
v___x_2765_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_value_2764_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_dec_ref_known(v___x_2765_, 1);
v_c_2744_ = v_k_2763_;
goto _start;
}
else
{
lean_dec_ref(v_k_2763_);
return v___x_2765_;
}
}
case 3:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; 
lean_dec_ref_known(v_c_2744_, 2);
v___x_2767_ = lean_box(0);
v___x_2768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2768_, 0, v___x_2767_);
return v___x_2768_;
}
case 4:
{
lean_object* v_cases_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2791_; 
v_cases_2769_ = lean_ctor_get(v_c_2744_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v_c_2744_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2771_ = v_c_2744_;
v_isShared_2772_ = v_isSharedCheck_2791_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_cases_2769_);
lean_dec(v_c_2744_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2791_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v_alts_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; uint8_t v___x_2777_; 
v_alts_2773_ = lean_ctor_get(v_cases_2769_, 3);
lean_inc_ref(v_alts_2773_);
lean_dec_ref(v_cases_2769_);
v___x_2774_ = lean_unsigned_to_nat(0u);
v___x_2775_ = lean_array_get_size(v_alts_2773_);
v___x_2776_ = lean_box(0);
v___x_2777_ = lean_nat_dec_lt(v___x_2774_, v___x_2775_);
if (v___x_2777_ == 0)
{
lean_object* v___x_2779_; 
lean_dec_ref(v_alts_2773_);
if (v_isShared_2772_ == 0)
{
lean_ctor_set_tag(v___x_2771_, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2776_);
v___x_2779_ = v___x_2771_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v___x_2776_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
else
{
uint8_t v___x_2781_; 
v___x_2781_ = lean_nat_dec_le(v___x_2775_, v___x_2775_);
if (v___x_2781_ == 0)
{
if (v___x_2777_ == 0)
{
lean_object* v___x_2783_; 
lean_dec_ref(v_alts_2773_);
if (v_isShared_2772_ == 0)
{
lean_ctor_set_tag(v___x_2771_, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2776_);
v___x_2783_ = v___x_2771_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v___x_2776_);
v___x_2783_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
return v___x_2783_;
}
}
else
{
size_t v___x_2785_; size_t v___x_2786_; lean_object* v___x_2787_; 
lean_del_object(v___x_2771_);
v___x_2785_ = ((size_t)0ULL);
v___x_2786_ = lean_usize_of_nat(v___x_2775_);
v___x_2787_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_alts_2773_, v___x_2785_, v___x_2786_, v___x_2776_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_);
lean_dec_ref(v_alts_2773_);
return v___x_2787_;
}
}
else
{
size_t v___x_2788_; size_t v___x_2789_; lean_object* v___x_2790_; 
lean_del_object(v___x_2771_);
v___x_2788_ = ((size_t)0ULL);
v___x_2789_ = lean_usize_of_nat(v___x_2775_);
v___x_2790_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_alts_2773_, v___x_2788_, v___x_2789_, v___x_2776_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_);
lean_dec_ref(v_alts_2773_);
return v___x_2790_;
}
}
}
}
case 5:
{
lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2799_; 
v_isSharedCheck_2799_ = !lean_is_exclusive(v_c_2744_);
if (v_isSharedCheck_2799_ == 0)
{
lean_object* v_unused_2800_; 
v_unused_2800_ = lean_ctor_get(v_c_2744_, 0);
lean_dec(v_unused_2800_);
v___x_2793_ = v_c_2744_;
v_isShared_2794_ = v_isSharedCheck_2799_;
goto v_resetjp_2792_;
}
else
{
lean_dec(v_c_2744_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2799_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___x_2795_; lean_object* v___x_2797_; 
v___x_2795_ = lean_box(0);
if (v_isShared_2794_ == 0)
{
lean_ctor_set_tag(v___x_2793_, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2795_);
v___x_2797_ = v___x_2793_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v___x_2795_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
case 6:
{
lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2808_; 
v_isSharedCheck_2808_ = !lean_is_exclusive(v_c_2744_);
if (v_isSharedCheck_2808_ == 0)
{
lean_object* v_unused_2809_; 
v_unused_2809_ = lean_ctor_get(v_c_2744_, 0);
lean_dec(v_unused_2809_);
v___x_2802_ = v_c_2744_;
v_isShared_2803_ = v_isSharedCheck_2808_;
goto v_resetjp_2801_;
}
else
{
lean_dec(v_c_2744_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2808_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2804_; lean_object* v___x_2806_; 
v___x_2804_ = lean_box(0);
if (v_isShared_2803_ == 0)
{
lean_ctor_set_tag(v___x_2802_, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2804_);
v___x_2806_ = v___x_2802_;
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
case 8:
{
lean_object* v_k_2810_; 
v_k_2810_ = lean_ctor_get(v_c_2744_, 3);
lean_inc_ref(v_k_2810_);
lean_dec_ref_known(v_c_2744_, 4);
v_c_2744_ = v_k_2810_;
goto _start;
}
case 9:
{
lean_object* v_k_2812_; 
v_k_2812_ = lean_ctor_get(v_c_2744_, 5);
lean_inc_ref(v_k_2812_);
lean_dec_ref_known(v_c_2744_, 6);
v_c_2744_ = v_k_2812_;
goto _start;
}
default: 
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
lean_dec_ref(v_c_2744_);
v___x_2814_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1);
v___x_2815_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(v___x_2814_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_);
return v___x_2815_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(lean_object* v_as_2816_, size_t v_i_2817_, size_t v_stop_2818_, lean_object* v_b_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
lean_object* v___y_2827_; uint8_t v___x_2833_; 
v___x_2833_ = lean_usize_dec_eq(v_i_2817_, v_stop_2818_);
if (v___x_2833_ == 0)
{
lean_object* v___x_2834_; 
v___x_2834_ = lean_array_uget_borrowed(v_as_2816_, v_i_2817_);
switch(lean_obj_tag(v___x_2834_))
{
case 0:
{
lean_object* v_code_2835_; 
v_code_2835_ = lean_ctor_get(v___x_2834_, 2);
lean_inc_ref(v_code_2835_);
v___y_2827_ = v_code_2835_;
goto v___jp_2826_;
}
case 1:
{
lean_object* v_code_2836_; 
v_code_2836_ = lean_ctor_get(v___x_2834_, 1);
lean_inc_ref(v_code_2836_);
v___y_2827_ = v_code_2836_;
goto v___jp_2826_;
}
default: 
{
lean_object* v_code_2837_; 
v_code_2837_ = lean_ctor_get(v___x_2834_, 0);
lean_inc_ref(v_code_2837_);
v___y_2827_ = v_code_2837_;
goto v___jp_2826_;
}
}
}
else
{
lean_object* v___x_2838_; 
v___x_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2838_, 0, v_b_2819_);
return v___x_2838_;
}
v___jp_2826_:
{
lean_object* v___x_2828_; 
v___x_2828_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v___y_2827_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
if (lean_obj_tag(v___x_2828_) == 0)
{
lean_object* v_a_2829_; size_t v___x_2830_; size_t v___x_2831_; 
v_a_2829_ = lean_ctor_get(v___x_2828_, 0);
lean_inc(v_a_2829_);
lean_dec_ref_known(v___x_2828_, 1);
v___x_2830_ = ((size_t)1ULL);
v___x_2831_ = lean_usize_add(v_i_2817_, v___x_2830_);
v_i_2817_ = v___x_2831_;
v_b_2819_ = v_a_2829_;
goto _start;
}
else
{
return v___x_2828_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0___boxed(lean_object* v_as_2839_, lean_object* v_i_2840_, lean_object* v_stop_2841_, lean_object* v_b_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
size_t v_i_boxed_2849_; size_t v_stop_boxed_2850_; lean_object* v_res_2851_; 
v_i_boxed_2849_ = lean_unbox_usize(v_i_2840_);
lean_dec(v_i_2840_);
v_stop_boxed_2850_ = lean_unbox_usize(v_stop_2841_);
lean_dec(v_stop_2841_);
v_res_2851_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_as_2839_, v_i_boxed_2849_, v_stop_boxed_2850_, v_b_2842_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2846_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v_as_2839_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___boxed(lean_object* v_c_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_){
_start:
{
lean_object* v_res_2859_; 
v_res_2859_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_c_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_, v_a_2857_);
lean_dec(v_a_2857_);
lean_dec_ref(v_a_2856_);
lean_dec(v_a_2855_);
lean_dec_ref(v_a_2854_);
lean_dec(v_a_2853_);
return v_res_2859_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2860_; 
v___x_2860_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2860_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2861_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0);
v___x_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2861_);
return v___x_2862_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg(){
_start:
{
lean_object* v___x_2864_; 
v___x_2864_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1);
return v___x_2864_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___boxed(lean_object* v___dummy_2865_){
_start:
{
lean_object* v_res_2866_; 
v_res_2866_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg();
return v_res_2866_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2867_; 
v___x_2867_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg();
return v___x_2867_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0(lean_object* v_00_u03b2_2868_){
_start:
{
lean_object* v___x_2869_; 
v___x_2869_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
return v___x_2869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(lean_object* v_f_2870_, lean_object* v_v_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_){
_start:
{
if (lean_obj_tag(v_v_2871_) == 0)
{
lean_object* v_code_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2902_; 
v_code_2878_ = lean_ctor_get(v_v_2871_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v_v_2871_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2880_ = v_v_2871_;
v_isShared_2881_ = v_isSharedCheck_2902_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_code_2878_);
lean_dec(v_v_2871_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2902_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2882_; 
lean_inc(v___y_2876_);
lean_inc_ref(v___y_2875_);
lean_inc(v___y_2874_);
lean_inc_ref(v___y_2873_);
lean_inc_ref(v___y_2872_);
v___x_2882_ = lean_apply_7(v_f_2870_, v_code_2878_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_, lean_box(0));
if (lean_obj_tag(v___x_2882_) == 0)
{
lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2893_; 
v_a_2883_ = lean_ctor_get(v___x_2882_, 0);
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2882_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2885_ = v___x_2882_;
v_isShared_2886_ = v_isSharedCheck_2893_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_dec(v___x_2882_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2893_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2888_; 
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 0, v_a_2883_);
v___x_2888_ = v___x_2880_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_a_2883_);
v___x_2888_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
lean_object* v___x_2890_; 
if (v_isShared_2886_ == 0)
{
lean_ctor_set(v___x_2885_, 0, v___x_2888_);
v___x_2890_ = v___x_2885_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v___x_2888_);
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
lean_object* v_a_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2901_; 
lean_del_object(v___x_2880_);
v_a_2894_ = lean_ctor_get(v___x_2882_, 0);
v_isSharedCheck_2901_ = !lean_is_exclusive(v___x_2882_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2896_ = v___x_2882_;
v_isShared_2897_ = v_isSharedCheck_2901_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_a_2894_);
lean_dec(v___x_2882_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2901_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
lean_object* v___x_2899_; 
if (v_isShared_2897_ == 0)
{
v___x_2899_ = v___x_2896_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v_a_2894_);
v___x_2899_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
return v___x_2899_;
}
}
}
}
}
else
{
lean_object* v___x_2903_; 
lean_dec_ref(v_f_2870_);
v___x_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2903_, 0, v_v_2871_);
return v___x_2903_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg___boxed(lean_object* v_f_2904_, lean_object* v_v_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
lean_object* v_res_2912_; 
v_res_2912_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v_f_2904_, v_v_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2907_);
lean_dec_ref(v___y_2906_);
return v_res_2912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(uint8_t v_pu_2913_, lean_object* v_f_2914_, lean_object* v_v_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_){
_start:
{
lean_object* v___x_2922_; 
v___x_2922_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v_f_2914_, v_v_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_);
return v___x_2922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___boxed(lean_object* v_pu_2923_, lean_object* v_f_2924_, lean_object* v_v_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_){
_start:
{
uint8_t v_pu_boxed_2932_; lean_object* v_res_2933_; 
v_pu_boxed_2932_ = lean_unbox(v_pu_2923_);
v_res_2933_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(v_pu_boxed_2932_, v_f_2924_, v_v_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_);
lean_dec(v___y_2930_);
lean_dec_ref(v___y_2929_);
lean_dec(v___y_2928_);
lean_dec_ref(v___y_2927_);
lean_dec_ref(v___y_2926_);
return v_res_2933_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(lean_object* v_code_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v_alreadyFound_2942_; uint8_t v_relaxedReuse_2943_; lean_object* v_ownedness_2944_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___y_2947_; lean_object* v___y_2948_; uint8_t v_relaxedReuse_2951_; 
v_relaxedReuse_2951_ = lean_ctor_get_uint8(v___y_2935_, sizeof(void*)*2);
if (v_relaxedReuse_2951_ == 0)
{
lean_object* v_ownedness_2952_; lean_object* v___x_2953_; 
v_ownedness_2952_ = lean_ctor_get(v___y_2935_, 1);
v___x_2953_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v_alreadyFound_2942_ = v___x_2953_;
v_relaxedReuse_2943_ = v_relaxedReuse_2951_;
v_ownedness_2944_ = v_ownedness_2952_;
v___y_2945_ = v___y_2936_;
v___y_2946_ = v___y_2937_;
v___y_2947_ = v___y_2938_;
v___y_2948_ = v___y_2939_;
goto v___jp_2941_;
}
else
{
lean_object* v_ownedness_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v_ownedness_2954_ = lean_ctor_get(v___y_2935_, 1);
v___x_2955_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v___x_2956_ = lean_st_mk_ref(v___x_2955_);
lean_inc_ref(v_code_2934_);
v___x_2957_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_code_2934_, v___x_2956_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v___x_2958_; 
lean_dec_ref_known(v___x_2957_, 1);
v___x_2958_ = lean_st_ref_get(v___x_2956_);
lean_dec(v___x_2956_);
v_alreadyFound_2942_ = v___x_2958_;
v_relaxedReuse_2943_ = v_relaxedReuse_2951_;
v_ownedness_2944_ = v_ownedness_2954_;
v___y_2945_ = v___y_2936_;
v___y_2946_ = v___y_2937_;
v___y_2947_ = v___y_2938_;
v___y_2948_ = v___y_2939_;
goto v___jp_2941_;
}
else
{
lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2966_; 
lean_dec(v___x_2956_);
lean_dec_ref(v_code_2934_);
v_a_2959_ = lean_ctor_get(v___x_2957_, 0);
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_2966_ == 0)
{
v___x_2961_ = v___x_2957_;
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v___x_2957_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2964_; 
if (v_isShared_2962_ == 0)
{
v___x_2964_ = v___x_2961_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v_a_2959_);
v___x_2964_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
return v___x_2964_;
}
}
}
}
v___jp_2941_:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; 
lean_inc_ref(v_ownedness_2944_);
v___x_2949_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2949_, 0, v_alreadyFound_2942_);
lean_ctor_set(v___x_2949_, 1, v_ownedness_2944_);
lean_ctor_set_uint8(v___x_2949_, sizeof(void*)*2, v_relaxedReuse_2943_);
v___x_2950_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_code_2934_, v___x_2949_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
lean_dec_ref_known(v___x_2949_, 2);
return v___x_2950_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed(lean_object* v_code_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_){
_start:
{
lean_object* v_res_2974_; 
v_res_2974_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(v_code_2967_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec_ref(v___y_2968_);
return v_res_2974_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(lean_object* v_decl_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_){
_start:
{
lean_object* v_toSignature_2983_; lean_object* v_value_2984_; uint8_t v_recursive_2985_; lean_object* v_inlineAttr_x3f_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_3011_; 
v_toSignature_2983_ = lean_ctor_get(v_decl_2976_, 0);
v_value_2984_ = lean_ctor_get(v_decl_2976_, 1);
v_recursive_2985_ = lean_ctor_get_uint8(v_decl_2976_, sizeof(void*)*3);
v_inlineAttr_x3f_2986_ = lean_ctor_get(v_decl_2976_, 2);
v_isSharedCheck_3011_ = !lean_is_exclusive(v_decl_2976_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_2988_ = v_decl_2976_;
v_isShared_2989_ = v_isSharedCheck_3011_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_inlineAttr_x3f_2986_);
lean_inc(v_value_2984_);
lean_inc(v_toSignature_2983_);
lean_dec(v_decl_2976_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_3011_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___f_2990_; lean_object* v___x_2991_; 
v___f_2990_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0));
v___x_2991_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v___f_2990_, v_value_2984_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3002_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3002_ == 0)
{
v___x_2994_ = v___x_2991_;
v_isShared_2995_ = v_isSharedCheck_3002_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_a_2992_);
lean_dec(v___x_2991_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3002_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v___x_2997_; 
if (v_isShared_2989_ == 0)
{
lean_ctor_set(v___x_2988_, 1, v_a_2992_);
v___x_2997_ = v___x_2988_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v_toSignature_2983_);
lean_ctor_set(v_reuseFailAlloc_3001_, 1, v_a_2992_);
lean_ctor_set(v_reuseFailAlloc_3001_, 2, v_inlineAttr_x3f_2986_);
lean_ctor_set_uint8(v_reuseFailAlloc_3001_, sizeof(void*)*3, v_recursive_2985_);
v___x_2997_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
lean_object* v___x_2999_; 
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 0, v___x_2997_);
v___x_2999_ = v___x_2994_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3000_, 0, v___x_2997_);
v___x_2999_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
return v___x_2999_;
}
}
}
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3010_; 
lean_del_object(v___x_2988_);
lean_dec(v_inlineAttr_x3f_2986_);
lean_dec_ref(v_toSignature_2983_);
v_a_3003_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_3005_ = v___x_2991_;
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_2991_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3008_; 
if (v_isShared_3006_ == 0)
{
v___x_3008_ = v___x_3005_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_a_3003_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___boxed(lean_object* v_decl_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_, lean_object* v_a_3018_){
_start:
{
lean_object* v_res_3019_; 
v_res_3019_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_decl_3012_, v_a_3013_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_);
lean_dec(v_a_3017_);
lean_dec_ref(v_a_3016_);
lean_dec(v_a_3015_);
lean_dec_ref(v_a_3014_);
lean_dec_ref(v_a_3013_);
return v_res_3019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(lean_object* v_decl_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_){
_start:
{
lean_object* v___x_3026_; 
v___x_3026_ = l_Lean_Compiler_LCNF_getConfig___redArg(v_a_3021_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3054_; 
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
v_isSharedCheck_3054_ = !lean_is_exclusive(v___x_3026_);
if (v_isSharedCheck_3054_ == 0)
{
v___x_3029_ = v___x_3026_;
v_isShared_3030_ = v_isSharedCheck_3054_;
goto v_resetjp_3028_;
}
else
{
lean_inc(v_a_3027_);
lean_dec(v___x_3026_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3054_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
uint8_t v_resetReuse_3031_; 
v_resetReuse_3031_ = lean_ctor_get_uint8(v_a_3027_, sizeof(void*)*4 + 2);
lean_dec(v_a_3027_);
if (v_resetReuse_3031_ == 0)
{
lean_object* v___x_3033_; 
if (v_isShared_3030_ == 0)
{
lean_ctor_set(v___x_3029_, 0, v_decl_3020_);
v___x_3033_ = v___x_3029_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_decl_3020_);
v___x_3033_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
return v___x_3033_;
}
}
else
{
lean_object* v___x_3035_; 
lean_del_object(v___x_3029_);
lean_inc_ref(v_decl_3020_);
v___x_3035_ = l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(v_decl_3020_, v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_);
if (lean_obj_tag(v___x_3035_) == 0)
{
lean_object* v_a_3036_; lean_object* v___x_3037_; 
v_a_3036_ = lean_ctor_get(v___x_3035_, 0);
lean_inc_n(v_a_3036_, 2);
lean_dec_ref_known(v___x_3035_, 1);
v___x_3037_ = l_Lean_Compiler_LCNF_Decl_applyOwnedness(v_decl_3020_, v_a_3036_, v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_);
if (lean_obj_tag(v___x_3037_) == 0)
{
lean_object* v_a_3038_; lean_object* v___x_3039_; uint8_t v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; 
v_a_3038_ = lean_ctor_get(v___x_3037_, 0);
lean_inc(v_a_3038_);
lean_dec_ref_known(v___x_3037_, 1);
v___x_3039_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v___x_3040_ = 0;
lean_inc(v_a_3036_);
v___x_3041_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3041_, 0, v___x_3039_);
lean_ctor_set(v___x_3041_, 1, v_a_3036_);
lean_ctor_set_uint8(v___x_3041_, sizeof(void*)*2, v___x_3040_);
v___x_3042_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_a_3038_, v___x_3041_, v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_);
lean_dec_ref_known(v___x_3041_, 2);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; 
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___x_3042_, 1);
v___x_3044_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3044_, 0, v___x_3039_);
lean_ctor_set(v___x_3044_, 1, v_a_3036_);
lean_ctor_set_uint8(v___x_3044_, sizeof(void*)*2, v_resetReuse_3031_);
v___x_3045_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_a_3043_, v___x_3044_, v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_);
lean_dec_ref_known(v___x_3044_, 2);
return v___x_3045_;
}
else
{
lean_dec(v_a_3036_);
return v___x_3042_;
}
}
else
{
lean_dec(v_a_3036_);
return v___x_3037_;
}
}
else
{
lean_object* v_a_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3053_; 
lean_dec_ref(v_decl_3020_);
v_a_3046_ = lean_ctor_get(v___x_3035_, 0);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3035_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3048_ = v___x_3035_;
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_a_3046_);
lean_dec(v___x_3035_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3051_; 
if (v_isShared_3049_ == 0)
{
v___x_3051_ = v___x_3048_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_a_3046_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
}
}
}
else
{
lean_object* v_a_3055_; lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3062_; 
lean_dec_ref(v_decl_3020_);
v_a_3055_ = lean_ctor_get(v___x_3026_, 0);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3026_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3057_ = v___x_3026_;
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
else
{
lean_inc(v_a_3055_);
lean_dec(v___x_3026_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___x_3060_; 
if (v_isShared_3058_ == 0)
{
v___x_3060_ = v___x_3057_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_a_3055_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed(lean_object* v_decl_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_){
_start:
{
lean_object* v_res_3069_; 
v_res_3069_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(v_decl_3063_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_);
lean_dec(v_a_3067_);
lean_dec_ref(v_a_3066_);
lean_dec(v_a_3065_);
lean_dec_ref(v_a_3064_);
return v_res_3069_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_insertResetReuse___closed__3(void){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; uint8_t v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3074_ = lean_unsigned_to_nat(0u);
v___x_3075_ = ((lean_object*)(l_Lean_Compiler_LCNF_insertResetReuse___closed__2));
v___x_3076_ = 2;
v___x_3077_ = ((lean_object*)(l_Lean_Compiler_LCNF_insertResetReuse___closed__1));
v___x_3078_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_3077_, v___x_3076_, v___x_3075_, v___x_3074_);
return v___x_3078_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_insertResetReuse(void){
_start:
{
lean_object* v___x_3079_; 
v___x_3079_ = lean_obj_once(&l_Lean_Compiler_LCNF_insertResetReuse___closed__3, &l_Lean_Compiler_LCNF_insertResetReuse___closed__3_once, _init_l_Lean_Compiler_LCNF_insertResetReuse___closed__3);
return v___x_3079_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3084_ = lean_box(0);
v___x_3085_ = l_unsafeCast___redArg(v___x_3084_);
return v___x_3085_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3087_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3088_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3089_ = l_Lean_Name_str___override(v___x_3088_, v___x_3087_);
return v___x_3089_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3091_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3092_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3093_ = l_Lean_Name_str___override(v___x_3092_, v___x_3091_);
return v___x_3093_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3094_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3095_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3096_ = l_Lean_Name_str___override(v___x_3095_, v___x_3094_);
return v___x_3096_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3098_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3099_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3100_ = l_Lean_Name_str___override(v___x_3099_, v___x_3098_);
return v___x_3100_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3102_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3103_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3104_ = l_Lean_Name_str___override(v___x_3103_, v___x_3102_);
return v___x_3104_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3105_ = lean_unsigned_to_nat(0u);
v___x_3106_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3107_ = l_Lean_Name_num___override(v___x_3106_, v___x_3105_);
return v___x_3107_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3108_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3109_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3110_ = l_Lean_Name_str___override(v___x_3109_, v___x_3108_);
return v___x_3110_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
v___x_3111_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3112_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3113_ = l_Lean_Name_str___override(v___x_3112_, v___x_3111_);
return v___x_3113_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3114_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3115_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3116_ = l_Lean_Name_str___override(v___x_3115_, v___x_3114_);
return v___x_3116_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
v___x_3118_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3119_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3120_ = l_Lean_Name_str___override(v___x_3119_, v___x_3118_);
return v___x_3120_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3122_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3123_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3124_ = l_Lean_Name_str___override(v___x_3123_, v___x_3122_);
return v___x_3124_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
v___x_3125_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3126_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3127_ = l_Lean_Name_str___override(v___x_3126_, v___x_3125_);
return v___x_3127_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3128_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3129_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3130_ = l_Lean_Name_str___override(v___x_3129_, v___x_3128_);
return v___x_3130_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3131_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3132_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3133_ = l_Lean_Name_str___override(v___x_3132_, v___x_3131_);
return v___x_3133_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3134_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3135_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3136_ = l_Lean_Name_str___override(v___x_3135_, v___x_3134_);
return v___x_3136_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3137_ = lean_unsigned_to_nat(2506150707u);
v___x_3138_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3139_ = l_Lean_Name_num___override(v___x_3138_, v___x_3137_);
return v___x_3139_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
v___x_3141_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3142_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3143_ = l_Lean_Name_str___override(v___x_3142_, v___x_3141_);
return v___x_3143_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3145_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3146_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3147_ = l_Lean_Name_str___override(v___x_3146_, v___x_3145_);
return v___x_3147_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; 
v___x_3148_ = lean_unsigned_to_nat(2u);
v___x_3149_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3150_ = l_Lean_Name_num___override(v___x_3149_, v___x_3148_);
return v___x_3150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3152_; uint8_t v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3152_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3153_ = 1;
v___x_3154_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3155_ = l_Lean_registerTraceClass(v___x_3152_, v___x_3153_, v___x_3154_);
return v___x_3155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2____boxed(lean_object* v_a_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
return v_res_3157_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_LiveVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PropagateBorrow(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_LiveVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PropagateBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_insertResetReuse = _init_l_Lean_Compiler_LCNF_insertResetReuse();
lean_mark_persistent(l_Lean_Compiler_LCNF_insertResetReuse);
res = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_LiveVars(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PropagateBorrow(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_LiveVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PropagateBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
}
#ifdef __cplusplus
}
#endif

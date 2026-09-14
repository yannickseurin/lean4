// Lean compiler output
// Module: Lean.Compiler.LCNF.FixedParams
// Imports: public import Lean.Compiler.LCNF.Basic
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(uint8_t, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalCode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFixedParamsMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx(v_x_5_);
lean_dec(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 2)
{
lean_object* v_i_9_; lean_object* v___x_10_; 
v_i_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_i_9_);
lean_dec_ref_known(v_t_7_, 1);
v___x_10_ = lean_apply_1(v_k_8_, v_i_9_);
return v___x_10_;
}
else
{
lean_dec(v_t_7_);
return v_k_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim___redArg(lean_object* v_t_23_, lean_object* v_top_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_23_, v_top_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_top_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_27_, v_top_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim___redArg(lean_object* v_t_31_, lean_object* v_erased_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_31_, v_erased_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_erased_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_35_, v_erased_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim___redArg(lean_object* v_t_39_, lean_object* v_val_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_39_, v_val_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_val_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_43_, v_val_45_);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_box(0);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_box(0);
return v___x_48_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(lean_object* v_x_49_, lean_object* v_x_50_){
_start:
{
switch(lean_obj_tag(v_x_49_))
{
case 0:
{
if (lean_obj_tag(v_x_50_) == 0)
{
uint8_t v___x_51_; 
v___x_51_ = 1;
return v___x_51_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
}
case 1:
{
if (lean_obj_tag(v_x_50_) == 1)
{
uint8_t v___x_53_; 
v___x_53_ = 1;
return v___x_53_;
}
else
{
uint8_t v___x_54_; 
v___x_54_ = 0;
return v___x_54_;
}
}
default: 
{
if (lean_obj_tag(v_x_50_) == 2)
{
lean_object* v_i_55_; lean_object* v_i_56_; uint8_t v___x_57_; 
v_i_55_ = lean_ctor_get(v_x_49_, 0);
v_i_56_ = lean_ctor_get(v_x_50_, 0);
v___x_57_ = lean_nat_dec_eq(v_i_55_, v_i_56_);
return v___x_57_;
}
else
{
uint8_t v___x_58_; 
v___x_58_ = 0;
return v___x_58_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed(lean_object* v_x_59_, lean_object* v_x_60_){
_start:
{
uint8_t v_res_61_; lean_object* v_r_62_; 
v_res_61_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_x_59_, v_x_60_);
lean_dec(v_x_60_);
lean_dec(v_x_59_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(lean_object* v_x_65_){
_start:
{
switch(lean_obj_tag(v_x_65_))
{
case 0:
{
uint64_t v___x_66_; 
v___x_66_ = 0ULL;
return v___x_66_;
}
case 1:
{
uint64_t v___x_67_; 
v___x_67_ = 1ULL;
return v___x_67_;
}
default: 
{
lean_object* v_i_68_; uint64_t v___x_69_; uint64_t v___x_70_; uint64_t v___x_71_; 
v_i_68_ = lean_ctor_get(v_x_65_, 0);
v___x_69_ = 2ULL;
v___x_70_ = lean_uint64_of_nat(v_i_68_);
v___x_71_ = lean_uint64_mix_hash(v___x_69_, v___x_70_);
return v___x_71_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed(lean_object* v_x_72_){
_start:
{
uint64_t v_res_73_; lean_object* v_r_74_; 
v_res_73_ = l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(v_x_72_);
lean_dec(v_x_72_);
v_r_74_ = lean_box_uint64(v_res_73_);
return v_r_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(uint8_t v_x_77_){
_start:
{
uint8_t v___x_78_; 
v___x_78_ = 0;
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed(lean_object* v_x_79_){
_start:
{
uint8_t v_x_281__boxed_80_; uint8_t v_res_81_; lean_object* v_r_82_; 
v_x_281__boxed_80_ = lean_unbox(v_x_79_);
v_res_81_ = l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(v_x_281__boxed_80_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg(lean_object* v_a_103_){
_start:
{
lean_object* v_visited_104_; lean_object* v_fixed_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_121_; 
v_visited_104_ = lean_ctor_get(v_a_103_, 0);
v_fixed_105_ = lean_ctor_get(v_a_103_, 1);
v_isSharedCheck_121_ = !lean_is_exclusive(v_a_103_);
if (v_isSharedCheck_121_ == 0)
{
v___x_107_ = v_a_103_;
v_isShared_108_ = v_isSharedCheck_121_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_fixed_105_);
lean_inc(v_visited_104_);
lean_dec(v_a_103_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_121_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___f_109_; lean_object* v___x_110_; size_t v_sz_111_; size_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
v___f_109_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0));
v___x_110_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10));
v_sz_111_ = lean_array_size(v_fixed_105_);
v___x_112_ = ((size_t)0ULL);
v___x_113_ = l_unsafeCast___redArg(v_fixed_105_);
lean_dec_ref(v_fixed_105_);
v___x_114_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_110_, v___f_109_, v_sz_111_, v___x_112_, v___x_113_);
v___x_115_ = l_unsafeCast___redArg(v___x_114_);
lean_dec(v___x_114_);
if (v_isShared_108_ == 0)
{
lean_ctor_set(v___x_107_, 1, v___x_115_);
v___x_117_ = v___x_107_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_visited_104_);
lean_ctor_set(v_reuseFailAlloc_120_, 1, v___x_115_);
v___x_117_ = v_reuseFailAlloc_120_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_box(0);
v___x_119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v___x_117_);
return v___x_119_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort(lean_object* v_00_u03b1_122_, lean_object* v_a_123_, lean_object* v_a_124_){
_start:
{
lean_object* v_visited_125_; lean_object* v_fixed_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_142_; 
v_visited_125_ = lean_ctor_get(v_a_124_, 0);
v_fixed_126_ = lean_ctor_get(v_a_124_, 1);
v_isSharedCheck_142_ = !lean_is_exclusive(v_a_124_);
if (v_isSharedCheck_142_ == 0)
{
v___x_128_ = v_a_124_;
v_isShared_129_ = v_isSharedCheck_142_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_fixed_126_);
lean_inc(v_visited_125_);
lean_dec(v_a_124_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_142_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___f_130_; lean_object* v___x_131_; size_t v_sz_132_; size_t v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_138_; 
v___f_130_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0));
v___x_131_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10));
v_sz_132_ = lean_array_size(v_fixed_126_);
v___x_133_ = ((size_t)0ULL);
v___x_134_ = l_unsafeCast___redArg(v_fixed_126_);
lean_dec_ref(v_fixed_126_);
v___x_135_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_131_, v___f_130_, v_sz_132_, v___x_133_, v___x_134_);
v___x_136_ = l_unsafeCast___redArg(v___x_135_);
lean_dec(v___x_135_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 1, v___x_136_);
v___x_138_ = v___x_128_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_visited_125_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v___x_136_);
v___x_138_ = v_reuseFailAlloc_141_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = lean_box(0);
v___x_140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
lean_ctor_set(v___x_140_, 1, v___x_138_);
return v___x_140_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___boxed(lean_object* v_00_u03b1_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_Compiler_LCNF_FixedParams_abort(v_00_u03b1_143_, v_a_144_, v_a_145_);
lean_dec_ref(v_a_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(lean_object* v_t_147_, lean_object* v_k_148_){
_start:
{
if (lean_obj_tag(v_t_147_) == 0)
{
lean_object* v_k_149_; lean_object* v_v_150_; lean_object* v_l_151_; lean_object* v_r_152_; uint8_t v___x_153_; 
v_k_149_ = lean_ctor_get(v_t_147_, 1);
v_v_150_ = lean_ctor_get(v_t_147_, 2);
v_l_151_ = lean_ctor_get(v_t_147_, 3);
v_r_152_ = lean_ctor_get(v_t_147_, 4);
v___x_153_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_148_, v_k_149_);
switch(v___x_153_)
{
case 0:
{
v_t_147_ = v_l_151_;
goto _start;
}
case 1:
{
lean_object* v___x_155_; 
lean_inc(v_v_150_);
v___x_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_155_, 0, v_v_150_);
return v___x_155_;
}
default: 
{
v_t_147_ = v_r_152_;
goto _start;
}
}
}
else
{
lean_object* v___x_157_; 
v___x_157_ = lean_box(0);
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg___boxed(lean_object* v_t_158_, lean_object* v_k_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_t_158_, v_k_159_);
lean_dec(v_k_159_);
lean_dec(v_t_158_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar(lean_object* v_fvarId_161_, lean_object* v_a_162_, lean_object* v_a_163_){
_start:
{
lean_object* v_assignment_164_; lean_object* v___x_165_; 
v_assignment_164_ = lean_ctor_get(v_a_162_, 2);
v___x_165_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_assignment_164_, v_fvarId_161_);
if (lean_obj_tag(v___x_165_) == 1)
{
lean_object* v_val_166_; lean_object* v___x_167_; 
v_val_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc(v_val_166_);
lean_dec_ref_known(v___x_165_, 1);
v___x_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_167_, 0, v_val_166_);
lean_ctor_set(v___x_167_, 1, v_a_163_);
return v___x_167_;
}
else
{
lean_object* v___x_168_; lean_object* v___x_169_; 
lean_dec(v___x_165_);
v___x_168_ = lean_box(0);
v___x_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v_a_163_);
return v___x_169_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar___boxed(lean_object* v_fvarId_170_, lean_object* v_a_171_, lean_object* v_a_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_170_, v_a_171_, v_a_172_);
lean_dec_ref(v_a_171_);
lean_dec(v_fvarId_170_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0(lean_object* v_00_u03b4_174_, lean_object* v_t_175_, lean_object* v_k_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_t_175_, v_k_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___boxed(lean_object* v_00_u03b4_178_, lean_object* v_t_179_, lean_object* v_k_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0(v_00_u03b4_178_, v_t_179_, v_k_180_);
lean_dec(v_k_180_);
lean_dec(v_t_179_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg(lean_object* v_arg_182_, lean_object* v_a_183_, lean_object* v_a_184_){
_start:
{
switch(lean_obj_tag(v_arg_182_))
{
case 0:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_box(1);
v___x_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
lean_ctor_set(v___x_186_, 1, v_a_184_);
return v___x_186_;
}
case 1:
{
lean_object* v_fvarId_187_; lean_object* v___x_188_; 
v_fvarId_187_ = lean_ctor_get(v_arg_182_, 0);
v___x_188_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_187_, v_a_183_, v_a_184_);
return v___x_188_;
}
default: 
{
lean_object* v_expr_189_; 
v_expr_189_ = lean_ctor_get(v_arg_182_, 0);
if (lean_obj_tag(v_expr_189_) == 1)
{
lean_object* v_fvarId_190_; lean_object* v___x_191_; 
v_fvarId_190_ = lean_ctor_get(v_expr_189_, 0);
v___x_191_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_190_, v_a_183_, v_a_184_);
return v___x_191_;
}
else
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = lean_box(0);
v___x_193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v_a_184_);
return v___x_193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg___boxed(lean_object* v_arg_194_, lean_object* v_a_195_, lean_object* v_a_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v_arg_194_, v_a_195_, v_a_196_);
lean_dec_ref(v_a_195_);
lean_dec(v_arg_194_);
return v_res_197_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(lean_object* v_declName_198_, lean_object* v_as_199_, size_t v_i_200_, size_t v_stop_201_){
_start:
{
uint8_t v___x_202_; 
v___x_202_ = lean_usize_dec_eq(v_i_200_, v_stop_201_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; lean_object* v_toSignature_204_; lean_object* v_name_205_; uint8_t v___x_206_; 
v___x_203_ = lean_array_uget_borrowed(v_as_199_, v_i_200_);
v_toSignature_204_ = lean_ctor_get(v___x_203_, 0);
v_name_205_ = lean_ctor_get(v_toSignature_204_, 0);
v___x_206_ = lean_name_eq(v_name_205_, v_declName_198_);
if (v___x_206_ == 0)
{
size_t v___x_207_; size_t v___x_208_; 
v___x_207_ = ((size_t)1ULL);
v___x_208_ = lean_usize_add(v_i_200_, v___x_207_);
v_i_200_ = v___x_208_;
goto _start;
}
else
{
return v___x_206_;
}
}
else
{
uint8_t v___x_210_; 
v___x_210_ = 0;
return v___x_210_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0___boxed(lean_object* v_declName_211_, lean_object* v_as_212_, lean_object* v_i_213_, lean_object* v_stop_214_){
_start:
{
size_t v_i_boxed_215_; size_t v_stop_boxed_216_; uint8_t v_res_217_; lean_object* v_r_218_; 
v_i_boxed_215_ = lean_unbox_usize(v_i_213_);
lean_dec(v_i_213_);
v_stop_boxed_216_ = lean_unbox_usize(v_stop_214_);
lean_dec(v_stop_214_);
v_res_217_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(v_declName_211_, v_as_212_, v_i_boxed_215_, v_stop_boxed_216_);
lean_dec_ref(v_as_212_);
lean_dec(v_declName_211_);
v_r_218_ = lean_box(v_res_217_);
return v_r_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(lean_object* v_declName_219_, lean_object* v_a_220_, lean_object* v_a_221_){
_start:
{
lean_object* v_decls_222_; lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; 
v_decls_222_ = lean_ctor_get(v_a_220_, 0);
v___x_223_ = lean_unsigned_to_nat(0u);
v___x_224_ = lean_array_get_size(v_decls_222_);
v___x_225_ = lean_nat_dec_lt(v___x_223_, v___x_224_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_box(v___x_225_);
v___x_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v_a_221_);
return v___x_227_;
}
else
{
if (v___x_225_ == 0)
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_box(v___x_225_);
v___x_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v_a_221_);
return v___x_229_;
}
else
{
size_t v___x_230_; size_t v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_230_ = ((size_t)0ULL);
v___x_231_ = lean_usize_of_nat(v___x_224_);
v___x_232_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(v_declName_219_, v_decls_222_, v___x_230_, v___x_231_);
v___x_233_ = lean_box(v___x_232_);
v___x_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v_a_221_);
return v___x_234_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock___boxed(lean_object* v_declName_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(v_declName_235_, v_a_236_, v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_declName_235_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(lean_object* v_as_239_, size_t v_sz_240_, size_t v_i_241_, lean_object* v_b_242_){
_start:
{
uint8_t v___x_243_; 
v___x_243_ = lean_usize_dec_lt(v_i_241_, v_sz_240_);
if (v___x_243_ == 0)
{
return v_b_242_;
}
else
{
lean_object* v_snd_244_; lean_object* v_fst_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_278_; 
v_snd_244_ = lean_ctor_get(v_b_242_, 1);
v_fst_245_ = lean_ctor_get(v_b_242_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v_b_242_);
if (v_isSharedCheck_278_ == 0)
{
v___x_247_ = v_b_242_;
v_isShared_248_ = v_isSharedCheck_278_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_snd_244_);
lean_inc(v_fst_245_);
lean_dec(v_b_242_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_278_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v_array_249_; lean_object* v_start_250_; lean_object* v_stop_251_; uint8_t v___x_252_; 
v_array_249_ = lean_ctor_get(v_snd_244_, 0);
v_start_250_ = lean_ctor_get(v_snd_244_, 1);
v_stop_251_ = lean_ctor_get(v_snd_244_, 2);
v___x_252_ = lean_nat_dec_lt(v_start_250_, v_stop_251_);
if (v___x_252_ == 0)
{
lean_object* v___x_254_; 
if (v_isShared_248_ == 0)
{
v___x_254_ = v___x_247_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_fst_245_);
lean_ctor_set(v_reuseFailAlloc_255_, 1, v_snd_244_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
else
{
lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_274_; 
lean_inc(v_stop_251_);
lean_inc(v_start_250_);
lean_inc_ref(v_array_249_);
v_isSharedCheck_274_ = !lean_is_exclusive(v_snd_244_);
if (v_isSharedCheck_274_ == 0)
{
lean_object* v_unused_275_; lean_object* v_unused_276_; lean_object* v_unused_277_; 
v_unused_275_ = lean_ctor_get(v_snd_244_, 2);
lean_dec(v_unused_275_);
v_unused_276_ = lean_ctor_get(v_snd_244_, 1);
lean_dec(v_unused_276_);
v_unused_277_ = lean_ctor_get(v_snd_244_, 0);
lean_dec(v_unused_277_);
v___x_257_ = v_snd_244_;
v_isShared_258_ = v_isSharedCheck_274_;
goto v_resetjp_256_;
}
else
{
lean_dec(v_snd_244_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_274_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v_a_259_; lean_object* v_fvarId_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_265_; 
v_a_259_ = lean_array_uget_borrowed(v_as_239_, v_i_241_);
v_fvarId_260_ = lean_ctor_get(v_a_259_, 0);
v___x_261_ = lean_array_fget(v_array_249_, v_start_250_);
v___x_262_ = lean_unsigned_to_nat(1u);
v___x_263_ = lean_nat_add(v_start_250_, v___x_262_);
lean_dec(v_start_250_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 1, v___x_263_);
v___x_265_ = v___x_257_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_array_249_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v___x_263_);
lean_ctor_set(v_reuseFailAlloc_273_, 2, v_stop_251_);
v___x_265_ = v_reuseFailAlloc_273_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
lean_object* v___x_266_; lean_object* v___x_268_; 
lean_inc(v_fvarId_260_);
v___x_266_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_260_, v___x_261_, v_fst_245_);
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 1, v___x_265_);
lean_ctor_set(v___x_247_, 0, v___x_266_);
v___x_268_ = v___x_247_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v___x_265_);
v___x_268_ = v_reuseFailAlloc_272_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
size_t v___x_269_; size_t v___x_270_; 
v___x_269_ = ((size_t)1ULL);
v___x_270_ = lean_usize_add(v_i_241_, v___x_269_);
v_i_241_ = v___x_270_;
v_b_242_ = v___x_268_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0___boxed(lean_object* v_as_279_, lean_object* v_sz_280_, lean_object* v_i_281_, lean_object* v_b_282_){
_start:
{
size_t v_sz_boxed_283_; size_t v_i_boxed_284_; lean_object* v_res_285_; 
v_sz_boxed_283_ = lean_unbox_usize(v_sz_280_);
lean_dec(v_sz_280_);
v_i_boxed_284_ = lean_unbox_usize(v_i_281_);
lean_dec(v_i_281_);
v_res_285_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(v_as_279_, v_sz_boxed_283_, v_i_boxed_284_, v_b_282_);
lean_dec_ref(v_as_279_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment(lean_object* v_decl_286_, lean_object* v_values_287_){
_start:
{
lean_object* v_toSignature_288_; lean_object* v_params_289_; lean_object* v___x_290_; lean_object* v_assignment_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; size_t v_sz_295_; size_t v___x_296_; lean_object* v___x_297_; lean_object* v_fst_298_; 
v_toSignature_288_ = lean_ctor_get(v_decl_286_, 0);
v_params_289_ = lean_ctor_get(v_toSignature_288_, 3);
v___x_290_ = lean_array_get_size(v_values_287_);
v_assignment_291_ = lean_box(1);
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = l_Array_toSubarray___redArg(v_values_287_, v___x_292_, v___x_290_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v_assignment_291_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v_sz_295_ = lean_array_size(v_params_289_);
v___x_296_ = ((size_t)0ULL);
v___x_297_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(v_params_289_, v_sz_295_, v___x_296_, v___x_294_);
v_fst_298_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_fst_298_);
lean_dec_ref(v___x_297_);
return v_fst_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment___boxed(lean_object* v_decl_299_, lean_object* v_values_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_decl_299_, v_values_300_);
lean_dec_ref(v_decl_299_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(lean_object* v_params_310_, lean_object* v_args_311_, uint8_t v___x_312_, lean_object* v_range_313_, lean_object* v_b_314_, lean_object* v_i_315_, lean_object* v___y_316_){
_start:
{
lean_object* v_stop_317_; lean_object* v_step_318_; uint8_t v___x_319_; 
v_stop_317_ = lean_ctor_get(v_range_313_, 1);
v_step_318_ = lean_ctor_get(v_range_313_, 2);
v___x_319_ = lean_nat_dec_lt(v_i_315_, v_stop_317_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; 
lean_dec(v_i_315_);
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v_b_314_);
lean_ctor_set(v___x_320_, 1, v___y_316_);
return v___x_320_;
}
else
{
lean_object* v___x_321_; lean_object* v_fvarId_322_; lean_object* v___x_323_; lean_object* v_a_325_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v___x_331_; 
lean_dec_ref(v_b_314_);
v___x_321_ = lean_array_fget_borrowed(v_params_310_, v_i_315_);
v_fvarId_322_ = lean_ctor_get(v___x_321_, 0);
v___x_323_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0));
v___x_328_ = lean_box(0);
v___x_329_ = lean_array_get_borrowed(v___x_328_, v_args_311_, v_i_315_);
lean_inc(v_fvarId_322_);
v___x_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_330_, 0, v_fvarId_322_);
v___x_331_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_329_, v___x_330_);
lean_dec_ref_known(v___x_330_, 1);
if (v___x_331_ == 0)
{
if (v___x_312_ == 0)
{
v_a_325_ = v___y_316_;
goto v___jp_324_;
}
else
{
uint8_t v___x_332_; 
v___x_332_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_329_, v___x_328_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; 
lean_dec(v_i_315_);
v___x_333_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2));
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___y_316_);
return v___x_334_;
}
else
{
v_a_325_ = v___y_316_;
goto v___jp_324_;
}
}
}
else
{
v_a_325_ = v___y_316_;
goto v___jp_324_;
}
v___jp_324_:
{
lean_object* v___x_326_; 
v___x_326_ = lean_nat_add(v_i_315_, v_step_318_);
lean_dec(v_i_315_);
v_b_314_ = v___x_323_;
v_i_315_ = v___x_326_;
v___y_316_ = v_a_325_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___boxed(lean_object* v_params_335_, lean_object* v_args_336_, lean_object* v___x_337_, lean_object* v_range_338_, lean_object* v_b_339_, lean_object* v_i_340_, lean_object* v___y_341_){
_start:
{
uint8_t v___x_3431__boxed_342_; lean_object* v_res_343_; 
v___x_3431__boxed_342_ = lean_unbox(v___x_337_);
v_res_343_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_335_, v_args_336_, v___x_3431__boxed_342_, v_range_338_, v_b_339_, v_i_340_, v___y_341_);
lean_dec_ref(v_range_338_);
lean_dec_ref(v_args_336_);
lean_dec_ref(v_params_335_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(lean_object* v_decl_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v___y_348_; lean_object* v___y_352_; lean_object* v_value_355_; 
v_value_355_ = lean_ctor_get(v_decl_344_, 4);
lean_inc_ref(v_value_355_);
if (lean_obj_tag(v_value_355_) == 0)
{
lean_object* v_decl_356_; lean_object* v_value_357_; 
v_decl_356_ = lean_ctor_get(v_value_355_, 0);
lean_inc_ref(v_decl_356_);
v_value_357_ = lean_ctor_get(v_decl_356_, 3);
lean_inc(v_value_357_);
if (lean_obj_tag(v_value_357_) == 4)
{
lean_object* v_params_358_; lean_object* v_k_359_; lean_object* v_fvarId_360_; lean_object* v_fvarId_361_; lean_object* v_args_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_420_; 
v_params_358_ = lean_ctor_get(v_decl_344_, 2);
lean_inc_ref(v_params_358_);
lean_dec_ref(v_decl_344_);
v_k_359_ = lean_ctor_get(v_value_355_, 1);
lean_inc_ref(v_k_359_);
lean_dec_ref_known(v_value_355_, 2);
v_fvarId_360_ = lean_ctor_get(v_decl_356_, 0);
lean_inc(v_fvarId_360_);
lean_dec_ref(v_decl_356_);
v_fvarId_361_ = lean_ctor_get(v_value_357_, 0);
v_args_362_ = lean_ctor_get(v_value_357_, 1);
v_isSharedCheck_420_ = !lean_is_exclusive(v_value_357_);
if (v_isSharedCheck_420_ == 0)
{
v___x_364_ = v_value_357_;
v_isShared_365_ = v_isSharedCheck_420_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_args_362_);
lean_inc(v_fvarId_361_);
lean_dec(v_value_357_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_420_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_366_ = lean_array_get_size(v_args_362_);
v___x_367_ = lean_array_get_size(v_params_358_);
v___x_368_ = lean_nat_dec_eq(v___x_366_, v___x_367_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; lean_object* v___x_371_; 
lean_dec_ref(v_args_362_);
lean_dec(v_fvarId_361_);
lean_dec(v_fvarId_360_);
lean_dec_ref(v_k_359_);
lean_dec_ref(v_params_358_);
v___x_369_ = lean_box(0);
if (v_isShared_365_ == 0)
{
lean_ctor_set_tag(v___x_364_, 0);
lean_ctor_set(v___x_364_, 1, v_a_346_);
lean_ctor_set(v___x_364_, 0, v___x_369_);
v___x_371_ = v___x_364_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v_a_346_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
else
{
if (lean_obj_tag(v_k_359_) == 5)
{
lean_object* v_fvarId_373_; uint8_t v___x_374_; 
v_fvarId_373_ = lean_ctor_get(v_k_359_, 0);
lean_inc(v_fvarId_373_);
lean_dec_ref_known(v_k_359_, 1);
v___x_374_ = l_Lean_instBEqFVarId_beq(v_fvarId_373_, v_fvarId_360_);
lean_dec(v_fvarId_360_);
lean_dec(v_fvarId_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; lean_object* v___x_377_; 
lean_dec_ref(v_args_362_);
lean_dec(v_fvarId_361_);
lean_dec_ref(v_params_358_);
v___x_375_ = lean_box(0);
if (v_isShared_365_ == 0)
{
lean_ctor_set_tag(v___x_364_, 0);
lean_ctor_set(v___x_364_, 1, v_a_346_);
lean_ctor_set(v___x_364_, 0, v___x_375_);
v___x_377_ = v___x_364_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_a_346_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
else
{
lean_object* v_assignment_379_; lean_object* v___x_380_; 
lean_del_object(v___x_364_);
v_assignment_379_ = lean_ctor_get(v_a_345_, 2);
v___x_380_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_assignment_379_, v_fvarId_361_);
lean_dec(v_fvarId_361_);
if (lean_obj_tag(v___x_380_) == 1)
{
lean_object* v_val_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_415_; 
v_val_381_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_415_ == 0)
{
v___x_383_ = v___x_380_;
v_isShared_384_ = v_isSharedCheck_415_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_val_381_);
lean_dec(v___x_380_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_415_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
if (lean_obj_tag(v_val_381_) == 2)
{
lean_object* v_i_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v_a_391_; lean_object* v_fst_392_; 
v_i_385_ = lean_ctor_get(v_val_381_, 0);
lean_inc(v_i_385_);
lean_dec_ref_known(v_val_381_, 1);
v___x_386_ = lean_unsigned_to_nat(0u);
v___x_387_ = lean_unsigned_to_nat(1u);
v___x_388_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_367_);
lean_ctor_set(v___x_388_, 2, v___x_387_);
v___x_389_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0));
v___x_390_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_358_, v_args_362_, v___x_374_, v___x_388_, v___x_389_, v___x_386_, v_a_346_);
lean_dec_ref_known(v___x_388_, 3);
lean_dec_ref(v_args_362_);
lean_dec_ref(v_params_358_);
v_a_391_ = lean_ctor_get(v___x_390_, 0);
lean_inc(v_a_391_);
v_fst_392_ = lean_ctor_get(v_a_391_, 0);
lean_inc(v_fst_392_);
lean_dec(v_a_391_);
if (lean_obj_tag(v_fst_392_) == 0)
{
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_403_; 
v_a_393_ = lean_ctor_get(v___x_390_, 1);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_403_ == 0)
{
lean_object* v_unused_404_; 
v_unused_404_ = lean_ctor_get(v___x_390_, 0);
lean_dec(v_unused_404_);
v___x_395_ = v___x_390_;
v_isShared_396_ = v_isSharedCheck_403_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v___x_390_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_403_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_398_; 
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 0, v_i_385_);
v___x_398_ = v___x_383_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_i_385_);
v___x_398_ = v_reuseFailAlloc_402_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
lean_object* v___x_400_; 
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 0, v___x_398_);
v___x_400_ = v___x_395_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_a_393_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
else
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_413_; 
lean_dec(v_i_385_);
lean_del_object(v___x_383_);
v_a_405_ = lean_ctor_get(v___x_390_, 1);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_413_ == 0)
{
lean_object* v_unused_414_; 
v_unused_414_ = lean_ctor_get(v___x_390_, 0);
lean_dec(v_unused_414_);
v___x_407_ = v___x_390_;
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_390_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v_val_409_; lean_object* v___x_411_; 
v_val_409_ = lean_ctor_get(v_fst_392_, 0);
lean_inc(v_val_409_);
lean_dec_ref_known(v_fst_392_, 1);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v_val_409_);
v___x_411_ = v___x_407_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_val_409_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v_a_405_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
else
{
lean_del_object(v___x_383_);
lean_dec(v_val_381_);
lean_dec_ref(v_args_362_);
lean_dec_ref(v_params_358_);
v___y_352_ = v_a_346_;
goto v___jp_351_;
}
}
}
else
{
lean_dec(v___x_380_);
lean_dec_ref(v_args_362_);
lean_dec_ref(v_params_358_);
v___y_352_ = v_a_346_;
goto v___jp_351_;
}
}
}
else
{
lean_object* v___x_416_; lean_object* v___x_418_; 
lean_dec_ref(v_args_362_);
lean_dec(v_fvarId_361_);
lean_dec(v_fvarId_360_);
lean_dec_ref(v_k_359_);
lean_dec_ref(v_params_358_);
v___x_416_ = lean_box(0);
if (v_isShared_365_ == 0)
{
lean_ctor_set_tag(v___x_364_, 0);
lean_ctor_set(v___x_364_, 1, v_a_346_);
lean_ctor_set(v___x_364_, 0, v___x_416_);
v___x_418_ = v___x_364_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v___x_416_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v_a_346_);
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
}
else
{
lean_dec(v_value_357_);
lean_dec_ref_known(v_value_355_, 2);
lean_dec_ref(v_decl_356_);
lean_dec_ref(v_decl_344_);
v___y_348_ = v_a_346_;
goto v___jp_347_;
}
}
else
{
lean_dec_ref(v_value_355_);
lean_dec_ref(v_decl_344_);
v___y_348_ = v_a_346_;
goto v___jp_347_;
}
v___jp_347_:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_box(0);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
lean_ctor_set(v___x_350_, 1, v___y_348_);
return v___x_350_;
}
v___jp_351_:
{
lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_353_ = lean_box(0);
v___x_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v___y_352_);
return v___x_354_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f___boxed(lean_object* v_decl_421_, lean_object* v_a_422_, lean_object* v_a_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(v_decl_421_, v_a_422_, v_a_423_);
lean_dec_ref(v_a_422_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(lean_object* v_params_425_, lean_object* v_args_426_, uint8_t v___x_427_, lean_object* v_range_428_, lean_object* v_b_429_, lean_object* v_i_430_, lean_object* v_hs_431_, lean_object* v_hl_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_425_, v_args_426_, v___x_427_, v_range_428_, v_b_429_, v_i_430_, v___y_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___boxed(lean_object* v_params_436_, lean_object* v_args_437_, lean_object* v___x_438_, lean_object* v_range_439_, lean_object* v_b_440_, lean_object* v_i_441_, lean_object* v_hs_442_, lean_object* v_hl_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
uint8_t v___x_3635__boxed_446_; lean_object* v_res_447_; 
v___x_3635__boxed_446_ = lean_unbox(v___x_438_);
v_res_447_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(v_params_436_, v_args_437_, v___x_3635__boxed_446_, v_range_439_, v_b_440_, v_i_441_, v_hs_442_, v_hl_443_, v___y_444_, v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec_ref(v_range_439_);
lean_dec_ref(v_args_437_);
lean_dec_ref(v_params_436_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(lean_object* v_upperBound_448_, lean_object* v_args_449_, lean_object* v_a_450_, lean_object* v_b_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
lean_object* v_a_455_; lean_object* v_a_456_; uint8_t v___x_460_; 
v___x_460_ = lean_nat_dec_lt(v_a_450_, v_upperBound_448_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; 
lean_dec(v_a_450_);
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v_b_451_);
lean_ctor_set(v___x_461_, 1, v___y_453_);
return v___x_461_;
}
else
{
lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_462_ = lean_box(0);
v___x_463_ = lean_array_get_size(v_args_449_);
v___x_464_ = lean_nat_dec_lt(v_a_450_, v___x_463_);
if (v___x_464_ == 0)
{
lean_object* v_visited_465_; lean_object* v_fixed_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_475_; 
v_visited_465_ = lean_ctor_get(v___y_453_, 0);
v_fixed_466_ = lean_ctor_get(v___y_453_, 1);
v_isSharedCheck_475_ = !lean_is_exclusive(v___y_453_);
if (v_isSharedCheck_475_ == 0)
{
v___x_468_ = v___y_453_;
v_isShared_469_ = v_isSharedCheck_475_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_fixed_466_);
lean_inc(v_visited_465_);
lean_dec(v___y_453_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_475_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_473_; 
v___x_470_ = lean_box(v___x_464_);
v___x_471_ = lean_array_set(v_fixed_466_, v_a_450_, v___x_470_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 1, v___x_471_);
v___x_473_ = v___x_468_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_visited_465_);
lean_ctor_set(v_reuseFailAlloc_474_, 1, v___x_471_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
v_a_455_ = v___x_462_;
v_a_456_ = v___x_473_;
goto v___jp_454_;
}
}
}
else
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_array_fget_borrowed(v_args_449_, v_a_450_);
v___x_477_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v___x_476_, v___y_452_, v___y_453_);
if (lean_obj_tag(v___x_477_) == 0)
{
lean_object* v_a_478_; lean_object* v_a_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v_a_478_ = lean_ctor_get(v___x_477_, 0);
lean_inc(v_a_478_);
v_a_479_ = lean_ctor_get(v___x_477_, 1);
lean_inc(v_a_479_);
lean_dec_ref_known(v___x_477_, 2);
lean_inc(v_a_450_);
v___x_480_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_480_, 0, v_a_450_);
v___x_481_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_a_478_, v___x_480_);
lean_dec_ref_known(v___x_480_, 1);
if (v___x_481_ == 0)
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = lean_box(1);
v___x_483_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_a_478_, v___x_482_);
lean_dec(v_a_478_);
if (v___x_483_ == 0)
{
lean_object* v_visited_484_; lean_object* v_fixed_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_494_; 
v_visited_484_ = lean_ctor_get(v_a_479_, 0);
v_fixed_485_ = lean_ctor_get(v_a_479_, 1);
v_isSharedCheck_494_ = !lean_is_exclusive(v_a_479_);
if (v_isSharedCheck_494_ == 0)
{
v___x_487_ = v_a_479_;
v_isShared_488_ = v_isSharedCheck_494_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_fixed_485_);
lean_inc(v_visited_484_);
lean_dec(v_a_479_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_494_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_492_; 
v___x_489_ = lean_box(v___x_483_);
v___x_490_ = lean_array_set(v_fixed_485_, v_a_450_, v___x_489_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 1, v___x_490_);
v___x_492_ = v___x_487_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_visited_484_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
v_a_455_ = v___x_462_;
v_a_456_ = v___x_492_;
goto v___jp_454_;
}
}
}
else
{
v_a_455_ = v___x_462_;
v_a_456_ = v_a_479_;
goto v___jp_454_;
}
}
else
{
lean_dec(v_a_478_);
v_a_455_ = v___x_462_;
v_a_456_ = v_a_479_;
goto v___jp_454_;
}
}
else
{
lean_object* v_a_495_; lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
lean_dec(v_a_450_);
v_a_495_ = lean_ctor_get(v___x_477_, 0);
v_a_496_ = lean_ctor_get(v___x_477_, 1);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_477_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_inc(v_a_495_);
lean_dec(v___x_477_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_495_);
lean_ctor_set(v_reuseFailAlloc_502_, 1, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
}
v___jp_454_:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = lean_unsigned_to_nat(1u);
v___x_458_ = lean_nat_add(v_a_450_, v___x_457_);
lean_dec(v_a_450_);
v_a_450_ = v___x_458_;
v_b_451_ = v_a_455_;
v___y_453_ = v_a_456_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg___boxed(lean_object* v_upperBound_504_, lean_object* v_args_505_, lean_object* v_a_506_, lean_object* v_b_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v_upperBound_504_, v_args_505_, v_a_506_, v_b_507_, v___y_508_, v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec_ref(v_args_505_);
lean_dec(v_upperBound_504_);
return v_res_510_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(lean_object* v_xs_511_, lean_object* v_ys_512_, lean_object* v_x_513_){
_start:
{
lean_object* v_zero_514_; uint8_t v_isZero_515_; 
v_zero_514_ = lean_unsigned_to_nat(0u);
v_isZero_515_ = lean_nat_dec_eq(v_x_513_, v_zero_514_);
if (v_isZero_515_ == 1)
{
lean_dec(v_x_513_);
return v_isZero_515_;
}
else
{
lean_object* v_one_516_; lean_object* v_n_517_; lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v_one_516_ = lean_unsigned_to_nat(1u);
v_n_517_ = lean_nat_sub(v_x_513_, v_one_516_);
lean_dec(v_x_513_);
v___x_518_ = lean_array_fget_borrowed(v_xs_511_, v_n_517_);
v___x_519_ = lean_array_fget_borrowed(v_ys_512_, v_n_517_);
v___x_520_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v___x_518_, v___x_519_);
if (v___x_520_ == 0)
{
lean_dec(v_n_517_);
return v___x_520_;
}
else
{
v_x_513_ = v_n_517_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_xs_522_, lean_object* v_ys_523_, lean_object* v_x_524_){
_start:
{
uint8_t v_res_525_; lean_object* v_r_526_; 
v_res_525_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_xs_522_, v_ys_523_, v_x_524_);
lean_dec_ref(v_ys_523_);
lean_dec_ref(v_xs_522_);
v_r_526_ = lean_box(v_res_525_);
return v_r_526_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(lean_object* v_a_527_, lean_object* v_x_528_){
_start:
{
if (lean_obj_tag(v_x_528_) == 0)
{
uint8_t v___x_529_; 
v___x_529_ = 0;
return v___x_529_;
}
else
{
lean_object* v_key_530_; lean_object* v_tail_531_; uint8_t v___y_533_; lean_object* v_fst_535_; lean_object* v_snd_536_; lean_object* v_fst_537_; lean_object* v_snd_538_; uint8_t v___x_539_; 
v_key_530_ = lean_ctor_get(v_x_528_, 0);
v_tail_531_ = lean_ctor_get(v_x_528_, 2);
v_fst_535_ = lean_ctor_get(v_key_530_, 0);
v_snd_536_ = lean_ctor_get(v_key_530_, 1);
v_fst_537_ = lean_ctor_get(v_a_527_, 0);
v_snd_538_ = lean_ctor_get(v_a_527_, 1);
v___x_539_ = lean_name_eq(v_fst_535_, v_fst_537_);
if (v___x_539_ == 0)
{
v___y_533_ = v___x_539_;
goto v___jp_532_;
}
else
{
lean_object* v___x_540_; lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_540_ = lean_array_get_size(v_snd_536_);
v___x_541_ = lean_array_get_size(v_snd_538_);
v___x_542_ = lean_nat_dec_eq(v___x_540_, v___x_541_);
if (v___x_542_ == 0)
{
v_x_528_ = v_tail_531_;
goto _start;
}
else
{
uint8_t v___x_544_; 
v___x_544_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_snd_536_, v_snd_538_, v___x_540_);
v___y_533_ = v___x_544_;
goto v___jp_532_;
}
}
v___jp_532_:
{
if (v___y_533_ == 0)
{
v_x_528_ = v_tail_531_;
goto _start;
}
else
{
return v___y_533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg___boxed(lean_object* v_a_545_, lean_object* v_x_546_){
_start:
{
uint8_t v_res_547_; lean_object* v_r_548_; 
v_res_547_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_545_, v_x_546_);
lean_dec(v_x_546_);
lean_dec_ref(v_a_545_);
v_r_548_ = lean_box(v_res_547_);
return v_r_548_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(lean_object* v_as_549_, size_t v_i_550_, size_t v_stop_551_, uint64_t v_b_552_){
_start:
{
uint8_t v___x_553_; 
v___x_553_ = lean_usize_dec_eq(v_i_550_, v_stop_551_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; uint64_t v___x_555_; uint64_t v___x_556_; size_t v___x_557_; size_t v___x_558_; 
v___x_554_ = lean_array_uget_borrowed(v_as_549_, v_i_550_);
v___x_555_ = l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(v___x_554_);
v___x_556_ = lean_uint64_mix_hash(v_b_552_, v___x_555_);
v___x_557_ = ((size_t)1ULL);
v___x_558_ = lean_usize_add(v_i_550_, v___x_557_);
v_i_550_ = v___x_558_;
v_b_552_ = v___x_556_;
goto _start;
}
else
{
return v_b_552_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2___boxed(lean_object* v_as_560_, lean_object* v_i_561_, lean_object* v_stop_562_, lean_object* v_b_563_){
_start:
{
size_t v_i_boxed_564_; size_t v_stop_boxed_565_; uint64_t v_b_boxed_566_; uint64_t v_res_567_; lean_object* v_r_568_; 
v_i_boxed_564_ = lean_unbox_usize(v_i_561_);
lean_dec(v_i_561_);
v_stop_boxed_565_ = lean_unbox_usize(v_stop_562_);
lean_dec(v_stop_562_);
v_b_boxed_566_ = lean_unbox_uint64(v_b_563_);
lean_dec_ref(v_b_563_);
v_res_567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_as_560_, v_i_boxed_564_, v_stop_boxed_565_, v_b_boxed_566_);
lean_dec_ref(v_as_560_);
v_r_568_ = lean_box_uint64(v_res_567_);
return v_r_568_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(lean_object* v_x_569_, lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
return v_x_569_;
}
else
{
lean_object* v_key_571_; lean_object* v_value_572_; lean_object* v_tail_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_613_; 
v_key_571_ = lean_ctor_get(v_x_570_, 0);
v_value_572_ = lean_ctor_get(v_x_570_, 1);
v_tail_573_ = lean_ctor_get(v_x_570_, 2);
v_isSharedCheck_613_ = !lean_is_exclusive(v_x_570_);
if (v_isSharedCheck_613_ == 0)
{
v___x_575_ = v_x_570_;
v_isShared_576_ = v_isSharedCheck_613_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_tail_573_);
lean_inc(v_value_572_);
lean_inc(v_key_571_);
lean_dec(v_x_570_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_613_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v_fst_577_; lean_object* v_snd_578_; lean_object* v___x_579_; uint64_t v___y_581_; uint64_t v___y_582_; uint64_t v___y_602_; lean_object* v___x_610_; 
v_fst_577_ = lean_ctor_get(v_key_571_, 0);
v_snd_578_ = lean_ctor_get(v_key_571_, 1);
v___x_579_ = lean_array_get_size(v_x_569_);
v___x_610_ = l_unsafeCast___redArg(v_fst_577_);
if (lean_obj_tag(v___x_610_) == 0)
{
uint64_t v___x_611_; 
v___x_611_ = 1723ULL;
v___y_602_ = v___x_611_;
goto v___jp_601_;
}
else
{
uint64_t v_hash_612_; 
v_hash_612_ = lean_ctor_get_uint64(v___x_610_, sizeof(void*)*2);
lean_dec(v___x_610_);
v___y_602_ = v_hash_612_;
goto v___jp_601_;
}
v___jp_580_:
{
uint64_t v___x_583_; uint64_t v___x_584_; uint64_t v___x_585_; uint64_t v_fold_586_; uint64_t v___x_587_; uint64_t v___x_588_; uint64_t v___x_589_; size_t v___x_590_; size_t v___x_591_; size_t v___x_592_; size_t v___x_593_; size_t v___x_594_; lean_object* v___x_595_; lean_object* v___x_597_; 
v___x_583_ = lean_uint64_mix_hash(v___y_581_, v___y_582_);
v___x_584_ = 32ULL;
v___x_585_ = lean_uint64_shift_right(v___x_583_, v___x_584_);
v_fold_586_ = lean_uint64_xor(v___x_583_, v___x_585_);
v___x_587_ = 16ULL;
v___x_588_ = lean_uint64_shift_right(v_fold_586_, v___x_587_);
v___x_589_ = lean_uint64_xor(v_fold_586_, v___x_588_);
v___x_590_ = lean_uint64_to_usize(v___x_589_);
v___x_591_ = lean_usize_of_nat(v___x_579_);
v___x_592_ = ((size_t)1ULL);
v___x_593_ = lean_usize_sub(v___x_591_, v___x_592_);
v___x_594_ = lean_usize_land(v___x_590_, v___x_593_);
v___x_595_ = lean_array_uget_borrowed(v_x_569_, v___x_594_);
lean_inc(v___x_595_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 2, v___x_595_);
v___x_597_ = v___x_575_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_key_571_);
lean_ctor_set(v_reuseFailAlloc_600_, 1, v_value_572_);
lean_ctor_set(v_reuseFailAlloc_600_, 2, v___x_595_);
v___x_597_ = v_reuseFailAlloc_600_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_598_; 
v___x_598_ = lean_array_uset(v_x_569_, v___x_594_, v___x_597_);
v_x_569_ = v___x_598_;
v_x_570_ = v_tail_573_;
goto _start;
}
}
v___jp_601_:
{
uint64_t v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_603_ = 7ULL;
v___x_604_ = lean_unsigned_to_nat(0u);
v___x_605_ = lean_array_get_size(v_snd_578_);
v___x_606_ = lean_nat_dec_lt(v___x_604_, v___x_605_);
if (v___x_606_ == 0)
{
v___y_581_ = v___y_602_;
v___y_582_ = v___x_603_;
goto v___jp_580_;
}
else
{
size_t v___x_607_; size_t v___x_608_; uint64_t v___x_609_; 
v___x_607_ = ((size_t)0ULL);
v___x_608_ = lean_usize_of_nat(v___x_605_);
v___x_609_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_578_, v___x_607_, v___x_608_, v___x_603_);
v___y_581_ = v___y_602_;
v___y_582_ = v___x_609_;
goto v___jp_580_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(lean_object* v_i_614_, lean_object* v_source_615_, lean_object* v_target_616_){
_start:
{
lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_617_ = lean_array_get_size(v_source_615_);
v___x_618_ = lean_nat_dec_lt(v_i_614_, v___x_617_);
if (v___x_618_ == 0)
{
lean_dec_ref(v_source_615_);
lean_dec(v_i_614_);
return v_target_616_;
}
else
{
lean_object* v_es_619_; lean_object* v___x_620_; lean_object* v_source_621_; lean_object* v_target_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v_es_619_ = lean_array_fget(v_source_615_, v_i_614_);
v___x_620_ = lean_box(0);
v_source_621_ = lean_array_fset(v_source_615_, v_i_614_, v___x_620_);
v_target_622_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(v_target_616_, v_es_619_);
v___x_623_ = lean_unsigned_to_nat(1u);
v___x_624_ = lean_nat_add(v_i_614_, v___x_623_);
lean_dec(v_i_614_);
v_i_614_ = v___x_624_;
v_source_615_ = v_source_621_;
v_target_616_ = v_target_622_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(lean_object* v_data_626_){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v_nbuckets_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_627_ = lean_array_get_size(v_data_626_);
v___x_628_ = lean_unsigned_to_nat(2u);
v_nbuckets_629_ = lean_nat_mul(v___x_627_, v___x_628_);
v___x_630_ = lean_unsigned_to_nat(0u);
v___x_631_ = lean_box(0);
v___x_632_ = lean_mk_array(v_nbuckets_629_, v___x_631_);
v___x_633_ = lean_array_propagate_mark(v_data_626_, v___x_632_);
v___x_634_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(v___x_630_, v_data_626_, v___x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(lean_object* v_m_635_, lean_object* v_a_636_, lean_object* v_b_637_){
_start:
{
lean_object* v_size_638_; lean_object* v_buckets_639_; lean_object* v_fst_640_; lean_object* v_snd_641_; lean_object* v___x_642_; uint64_t v___y_644_; uint64_t v___y_645_; uint64_t v___y_684_; lean_object* v___x_692_; 
v_size_638_ = lean_ctor_get(v_m_635_, 0);
v_buckets_639_ = lean_ctor_get(v_m_635_, 1);
v_fst_640_ = lean_ctor_get(v_a_636_, 0);
v_snd_641_ = lean_ctor_get(v_a_636_, 1);
v___x_642_ = lean_array_get_size(v_buckets_639_);
v___x_692_ = l_unsafeCast___redArg(v_fst_640_);
if (lean_obj_tag(v___x_692_) == 0)
{
uint64_t v___x_693_; 
v___x_693_ = 1723ULL;
v___y_684_ = v___x_693_;
goto v___jp_683_;
}
else
{
uint64_t v_hash_694_; 
v_hash_694_ = lean_ctor_get_uint64(v___x_692_, sizeof(void*)*2);
lean_dec(v___x_692_);
v___y_684_ = v_hash_694_;
goto v___jp_683_;
}
v___jp_643_:
{
uint64_t v___x_646_; uint64_t v___x_647_; uint64_t v___x_648_; uint64_t v_fold_649_; uint64_t v___x_650_; uint64_t v___x_651_; uint64_t v___x_652_; size_t v___x_653_; size_t v___x_654_; size_t v___x_655_; size_t v___x_656_; size_t v___x_657_; lean_object* v_bkt_658_; uint8_t v___x_659_; 
v___x_646_ = lean_uint64_mix_hash(v___y_644_, v___y_645_);
v___x_647_ = 32ULL;
v___x_648_ = lean_uint64_shift_right(v___x_646_, v___x_647_);
v_fold_649_ = lean_uint64_xor(v___x_646_, v___x_648_);
v___x_650_ = 16ULL;
v___x_651_ = lean_uint64_shift_right(v_fold_649_, v___x_650_);
v___x_652_ = lean_uint64_xor(v_fold_649_, v___x_651_);
v___x_653_ = lean_uint64_to_usize(v___x_652_);
v___x_654_ = lean_usize_of_nat(v___x_642_);
v___x_655_ = ((size_t)1ULL);
v___x_656_ = lean_usize_sub(v___x_654_, v___x_655_);
v___x_657_ = lean_usize_land(v___x_653_, v___x_656_);
v_bkt_658_ = lean_array_uget_borrowed(v_buckets_639_, v___x_657_);
v___x_659_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_636_, v_bkt_658_);
if (v___x_659_ == 0)
{
lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_680_; 
lean_inc_ref(v_buckets_639_);
lean_inc(v_size_638_);
v_isSharedCheck_680_ = !lean_is_exclusive(v_m_635_);
if (v_isSharedCheck_680_ == 0)
{
lean_object* v_unused_681_; lean_object* v_unused_682_; 
v_unused_681_ = lean_ctor_get(v_m_635_, 1);
lean_dec(v_unused_681_);
v_unused_682_ = lean_ctor_get(v_m_635_, 0);
lean_dec(v_unused_682_);
v___x_661_ = v_m_635_;
v_isShared_662_ = v_isSharedCheck_680_;
goto v_resetjp_660_;
}
else
{
lean_dec(v_m_635_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_680_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v_size_x27_664_; lean_object* v___x_665_; lean_object* v_buckets_x27_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; 
v___x_663_ = lean_unsigned_to_nat(1u);
v_size_x27_664_ = lean_nat_add(v_size_638_, v___x_663_);
lean_dec(v_size_638_);
lean_inc(v_bkt_658_);
v___x_665_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_665_, 0, v_a_636_);
lean_ctor_set(v___x_665_, 1, v_b_637_);
lean_ctor_set(v___x_665_, 2, v_bkt_658_);
v_buckets_x27_666_ = lean_array_uset(v_buckets_639_, v___x_657_, v___x_665_);
v___x_667_ = lean_unsigned_to_nat(4u);
v___x_668_ = lean_nat_mul(v_size_x27_664_, v___x_667_);
v___x_669_ = lean_unsigned_to_nat(3u);
v___x_670_ = lean_nat_div(v___x_668_, v___x_669_);
lean_dec(v___x_668_);
v___x_671_ = lean_array_get_size(v_buckets_x27_666_);
v___x_672_ = lean_nat_dec_le(v___x_670_, v___x_671_);
lean_dec(v___x_670_);
if (v___x_672_ == 0)
{
lean_object* v_val_673_; lean_object* v___x_675_; 
v_val_673_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(v_buckets_x27_666_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v_val_673_);
lean_ctor_set(v___x_661_, 0, v_size_x27_664_);
v___x_675_ = v___x_661_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_size_x27_664_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v_val_673_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
else
{
lean_object* v___x_678_; 
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v_buckets_x27_666_);
lean_ctor_set(v___x_661_, 0, v_size_x27_664_);
v___x_678_ = v___x_661_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_size_x27_664_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v_buckets_x27_666_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
else
{
lean_dec(v_b_637_);
lean_dec_ref(v_a_636_);
return v_m_635_;
}
}
v___jp_683_:
{
uint64_t v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_685_ = 7ULL;
v___x_686_ = lean_unsigned_to_nat(0u);
v___x_687_ = lean_array_get_size(v_snd_641_);
v___x_688_ = lean_nat_dec_lt(v___x_686_, v___x_687_);
if (v___x_688_ == 0)
{
v___y_644_ = v___y_684_;
v___y_645_ = v___x_685_;
goto v___jp_643_;
}
else
{
size_t v___x_689_; size_t v___x_690_; uint64_t v___x_691_; 
v___x_689_ = ((size_t)0ULL);
v___x_690_ = lean_usize_of_nat(v___x_687_);
v___x_691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_641_, v___x_689_, v___x_690_, v___x_685_);
v___y_644_ = v___y_684_;
v___y_645_ = v___x_691_;
goto v___jp_643_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(lean_object* v_f_695_, lean_object* v_v_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
if (lean_obj_tag(v_v_696_) == 0)
{
lean_object* v_code_699_; lean_object* v___x_700_; 
v_code_699_ = lean_ctor_get(v_v_696_, 0);
lean_inc_ref(v_code_699_);
lean_dec_ref_known(v_v_696_, 1);
lean_inc_ref(v___y_697_);
v___x_700_ = lean_apply_3(v_f_695_, v_code_699_, v___y_697_, v___y_698_);
return v___x_700_;
}
else
{
lean_object* v___x_701_; lean_object* v___x_702_; 
lean_dec_ref_known(v_v_696_, 1);
lean_dec_ref(v_f_695_);
v___x_701_ = lean_box(0);
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_701_);
lean_ctor_set(v___x_702_, 1, v___y_698_);
return v___x_702_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg___boxed(lean_object* v_f_703_, lean_object* v_v_704_, lean_object* v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v_f_703_, v_v_704_, v___y_705_, v___y_706_);
lean_dec_ref(v___y_705_);
return v_res_707_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(lean_object* v_m_708_, lean_object* v_a_709_){
_start:
{
lean_object* v_buckets_710_; lean_object* v_fst_711_; lean_object* v_snd_712_; lean_object* v___x_713_; uint64_t v___y_715_; uint64_t v___y_716_; uint64_t v___y_732_; lean_object* v___x_740_; 
v_buckets_710_ = lean_ctor_get(v_m_708_, 1);
v_fst_711_ = lean_ctor_get(v_a_709_, 0);
v_snd_712_ = lean_ctor_get(v_a_709_, 1);
v___x_713_ = lean_array_get_size(v_buckets_710_);
v___x_740_ = l_unsafeCast___redArg(v_fst_711_);
if (lean_obj_tag(v___x_740_) == 0)
{
uint64_t v___x_741_; 
v___x_741_ = 1723ULL;
v___y_732_ = v___x_741_;
goto v___jp_731_;
}
else
{
uint64_t v_hash_742_; 
v_hash_742_ = lean_ctor_get_uint64(v___x_740_, sizeof(void*)*2);
lean_dec(v___x_740_);
v___y_732_ = v_hash_742_;
goto v___jp_731_;
}
v___jp_714_:
{
uint64_t v___x_717_; uint64_t v___x_718_; uint64_t v___x_719_; uint64_t v_fold_720_; uint64_t v___x_721_; uint64_t v___x_722_; uint64_t v___x_723_; size_t v___x_724_; size_t v___x_725_; size_t v___x_726_; size_t v___x_727_; size_t v___x_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v___x_717_ = lean_uint64_mix_hash(v___y_715_, v___y_716_);
v___x_718_ = 32ULL;
v___x_719_ = lean_uint64_shift_right(v___x_717_, v___x_718_);
v_fold_720_ = lean_uint64_xor(v___x_717_, v___x_719_);
v___x_721_ = 16ULL;
v___x_722_ = lean_uint64_shift_right(v_fold_720_, v___x_721_);
v___x_723_ = lean_uint64_xor(v_fold_720_, v___x_722_);
v___x_724_ = lean_uint64_to_usize(v___x_723_);
v___x_725_ = lean_usize_of_nat(v___x_713_);
v___x_726_ = ((size_t)1ULL);
v___x_727_ = lean_usize_sub(v___x_725_, v___x_726_);
v___x_728_ = lean_usize_land(v___x_724_, v___x_727_);
v___x_729_ = lean_array_uget_borrowed(v_buckets_710_, v___x_728_);
v___x_730_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_709_, v___x_729_);
return v___x_730_;
}
v___jp_731_:
{
uint64_t v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; uint8_t v___x_736_; 
v___x_733_ = 7ULL;
v___x_734_ = lean_unsigned_to_nat(0u);
v___x_735_ = lean_array_get_size(v_snd_712_);
v___x_736_ = lean_nat_dec_lt(v___x_734_, v___x_735_);
if (v___x_736_ == 0)
{
v___y_715_ = v___y_732_;
v___y_716_ = v___x_733_;
goto v___jp_714_;
}
else
{
size_t v___x_737_; size_t v___x_738_; uint64_t v___x_739_; 
v___x_737_ = ((size_t)0ULL);
v___x_738_ = lean_usize_of_nat(v___x_735_);
v___x_739_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_712_, v___x_737_, v___x_738_, v___x_733_);
v___y_715_ = v___y_732_;
v___y_716_ = v___x_739_;
goto v___jp_714_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___boxed(lean_object* v_m_743_, lean_object* v_a_744_){
_start:
{
uint8_t v_res_745_; lean_object* v_r_746_; 
v_res_745_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_m_743_, v_a_744_);
lean_dec_ref(v_a_744_);
lean_dec_ref(v_m_743_);
v_r_746_ = lean_box(v_res_745_);
return v_r_746_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(lean_object* v_upperBound_747_, lean_object* v_args_748_, lean_object* v_a_749_, lean_object* v_b_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_a_754_; lean_object* v_a_755_; uint8_t v___x_759_; 
v___x_759_ = lean_nat_dec_lt(v_a_749_, v_upperBound_747_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; 
lean_dec(v_a_749_);
v___x_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_760_, 0, v_b_750_);
lean_ctor_set(v___x_760_, 1, v___y_752_);
return v___x_760_;
}
else
{
lean_object* v___x_761_; uint8_t v___x_762_; 
v___x_761_ = lean_array_get_size(v_args_748_);
v___x_762_ = lean_nat_dec_lt(v_a_749_, v___x_761_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_763_ = lean_box(0);
v___x_764_ = lean_array_push(v_b_750_, v___x_763_);
v_a_754_ = v___x_764_;
v_a_755_ = v___y_752_;
goto v___jp_753_;
}
else
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = lean_array_fget_borrowed(v_args_748_, v_a_749_);
v___x_766_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v___x_765_, v___y_751_, v___y_752_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v_a_768_; lean_object* v___x_769_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
v_a_768_ = lean_ctor_get(v___x_766_, 1);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_766_, 2);
v___x_769_ = lean_array_push(v_b_750_, v_a_767_);
v_a_754_ = v___x_769_;
v_a_755_ = v_a_768_;
goto v___jp_753_;
}
else
{
lean_object* v_a_770_; lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
lean_dec_ref(v_b_750_);
lean_dec(v_a_749_);
v_a_770_ = lean_ctor_get(v___x_766_, 0);
v_a_771_ = lean_ctor_get(v___x_766_, 1);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_766_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_inc(v_a_770_);
lean_dec(v___x_766_);
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
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_770_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
}
v___jp_753_:
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = lean_unsigned_to_nat(1u);
v___x_757_ = lean_nat_add(v_a_749_, v___x_756_);
lean_dec(v_a_749_);
v_a_749_ = v___x_757_;
v_b_750_ = v_a_754_;
v___y_752_ = v_a_755_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg___boxed(lean_object* v_upperBound_779_, lean_object* v_args_780_, lean_object* v_a_781_, lean_object* v_b_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v_upperBound_779_, v_args_780_, v_a_781_, v_b_782_, v___y_783_, v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec_ref(v_args_780_);
lean_dec(v_upperBound_779_);
return v_res_785_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(uint8_t v_a_786_, uint8_t v___x_787_, lean_object* v_as_788_, size_t v_i_789_, size_t v_stop_790_){
_start:
{
uint8_t v___x_791_; 
v___x_791_ = lean_usize_dec_eq(v_i_789_, v_stop_790_);
if (v___x_791_ == 0)
{
uint8_t v___x_792_; uint8_t v___y_794_; lean_object* v___x_798_; uint8_t v___x_799_; 
v___x_792_ = 1;
v___x_798_ = lean_array_uget_borrowed(v_as_788_, v_i_789_);
v___x_799_ = lean_unbox(v___x_798_);
if (v___x_799_ == 0)
{
if (v_a_786_ == 0)
{
v___y_794_ = v___x_787_;
goto v___jp_793_;
}
else
{
uint8_t v___x_800_; 
v___x_800_ = lean_unbox(v___x_798_);
v___y_794_ = v___x_800_;
goto v___jp_793_;
}
}
else
{
v___y_794_ = v_a_786_;
goto v___jp_793_;
}
v___jp_793_:
{
if (v___y_794_ == 0)
{
size_t v___x_795_; size_t v___x_796_; 
v___x_795_ = ((size_t)1ULL);
v___x_796_ = lean_usize_add(v_i_789_, v___x_795_);
v_i_789_ = v___x_796_;
goto _start;
}
else
{
return v___x_792_;
}
}
}
else
{
uint8_t v___x_801_; 
v___x_801_ = 0;
return v___x_801_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9___boxed(lean_object* v_a_802_, lean_object* v___x_803_, lean_object* v_as_804_, lean_object* v_i_805_, lean_object* v_stop_806_){
_start:
{
uint8_t v_a_boxed_807_; uint8_t v___x_13456__boxed_808_; size_t v_i_boxed_809_; size_t v_stop_boxed_810_; uint8_t v_res_811_; lean_object* v_r_812_; 
v_a_boxed_807_ = lean_unbox(v_a_802_);
v___x_13456__boxed_808_ = lean_unbox(v___x_803_);
v_i_boxed_809_ = lean_unbox_usize(v_i_805_);
lean_dec(v_i_805_);
v_stop_boxed_810_ = lean_unbox_usize(v_stop_806_);
lean_dec(v_stop_806_);
v_res_811_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(v_a_boxed_807_, v___x_13456__boxed_808_, v_as_804_, v_i_boxed_809_, v_stop_boxed_810_);
lean_dec_ref(v_as_804_);
v_r_812_ = lean_box(v_res_811_);
return v_r_812_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(uint8_t v___x_813_, lean_object* v_as_814_, uint8_t v_a_815_){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; uint8_t v___x_818_; 
v___x_816_ = lean_unsigned_to_nat(0u);
v___x_817_ = lean_array_get_size(v_as_814_);
v___x_818_ = lean_nat_dec_lt(v___x_816_, v___x_817_);
if (v___x_818_ == 0)
{
return v___x_818_;
}
else
{
if (v___x_818_ == 0)
{
return v___x_818_;
}
else
{
size_t v___x_819_; size_t v___x_820_; uint8_t v___x_821_; 
v___x_819_ = ((size_t)0ULL);
v___x_820_ = lean_usize_of_nat(v___x_817_);
v___x_821_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(v_a_815_, v___x_813_, v_as_814_, v___x_819_, v___x_820_);
return v___x_821_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6___boxed(lean_object* v___x_822_, lean_object* v_as_823_, lean_object* v_a_824_){
_start:
{
uint8_t v___x_13481__boxed_825_; uint8_t v_a_boxed_826_; uint8_t v_res_827_; lean_object* v_r_828_; 
v___x_13481__boxed_825_ = lean_unbox(v___x_822_);
v_a_boxed_826_ = lean_unbox(v_a_824_);
v_res_827_ = l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(v___x_13481__boxed_825_, v_as_823_, v_a_boxed_826_);
lean_dec_ref(v_as_823_);
v_r_828_ = lean_box(v_res_827_);
return v_r_828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed(lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_c_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(v_a_831_, v_a_832_, v_c_833_, v___y_834_, v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec_ref(v_a_831_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(lean_object* v_declName_837_, lean_object* v_args_838_, lean_object* v_as_839_, size_t v_sz_840_, size_t v_i_841_, lean_object* v_b_842_, lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_a_846_; lean_object* v_a_847_; uint8_t v___x_851_; 
v___x_851_ = lean_usize_dec_lt(v_i_841_, v_sz_840_);
if (v___x_851_ == 0)
{
lean_object* v___x_852_; 
lean_dec(v_declName_837_);
v___x_852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_852_, 0, v_b_842_);
lean_ctor_set(v___x_852_, 1, v___y_844_);
return v___x_852_;
}
else
{
lean_object* v_a_853_; lean_object* v_toSignature_854_; lean_object* v_value_855_; lean_object* v_name_856_; lean_object* v_params_857_; lean_object* v___x_858_; uint8_t v___x_859_; 
v_a_853_ = lean_array_uget_borrowed(v_as_839_, v_i_841_);
v_toSignature_854_ = lean_ctor_get(v_a_853_, 0);
v_value_855_ = lean_ctor_get(v_a_853_, 1);
v_name_856_ = lean_ctor_get(v_toSignature_854_, 0);
v_params_857_ = lean_ctor_get(v_toSignature_854_, 3);
v___x_858_ = lean_box(0);
v___x_859_ = lean_name_eq(v_declName_837_, v_name_856_);
if (v___x_859_ == 0)
{
v_a_846_ = v___x_858_;
v_a_847_ = v___y_844_;
goto v___jp_845_;
}
else
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_860_ = lean_array_get_size(v_params_857_);
v___x_861_ = lean_unsigned_to_nat(0u);
v___x_862_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0));
v___x_863_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v___x_860_, v_args_838_, v___x_861_, v___x_862_, v___y_843_, v___y_844_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v_a_865_; lean_object* v_visited_866_; lean_object* v_fixed_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v_a_864_ = lean_ctor_get(v___x_863_, 1);
lean_inc(v_a_864_);
v_a_865_ = lean_ctor_get(v___x_863_, 0);
lean_inc_n(v_a_865_, 2);
lean_dec_ref_known(v___x_863_, 2);
v_visited_866_ = lean_ctor_get(v_a_864_, 0);
v_fixed_867_ = lean_ctor_get(v_a_864_, 1);
lean_inc(v_declName_837_);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v_declName_837_);
lean_ctor_set(v___x_868_, 1, v_a_865_);
v___x_869_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_visited_866_, v___x_868_);
if (v___x_869_ == 0)
{
lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_880_; 
lean_inc_ref(v_fixed_867_);
lean_inc_ref(v_visited_866_);
v_isSharedCheck_880_ = !lean_is_exclusive(v_a_864_);
if (v_isSharedCheck_880_ == 0)
{
lean_object* v_unused_881_; lean_object* v_unused_882_; 
v_unused_881_ = lean_ctor_get(v_a_864_, 1);
lean_dec(v_unused_881_);
v_unused_882_ = lean_ctor_get(v_a_864_, 0);
lean_dec(v_unused_882_);
v___x_871_ = v_a_864_;
v_isShared_872_ = v_isSharedCheck_880_;
goto v_resetjp_870_;
}
else
{
lean_dec(v_a_864_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_880_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___f_873_; lean_object* v___x_874_; lean_object* v___x_876_; 
lean_inc(v_a_853_);
v___f_873_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed), 5, 2);
lean_closure_set(v___f_873_, 0, v_a_853_);
lean_closure_set(v___f_873_, 1, v_a_865_);
v___x_874_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(v_visited_866_, v___x_868_, v___x_858_);
if (v_isShared_872_ == 0)
{
lean_ctor_set(v___x_871_, 0, v___x_874_);
v___x_876_ = v___x_871_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_874_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v_fixed_867_);
v___x_876_ = v_reuseFailAlloc_879_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
lean_object* v___x_877_; 
lean_inc_ref(v_value_855_);
v___x_877_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v___f_873_, v_value_855_, v___y_843_, v___x_876_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; 
v_a_878_ = lean_ctor_get(v___x_877_, 1);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_877_, 2);
v_a_846_ = v___x_858_;
v_a_847_ = v_a_878_;
goto v___jp_845_;
}
else
{
lean_dec(v_declName_837_);
return v___x_877_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_868_, 2);
lean_dec(v_a_865_);
v_a_846_ = v___x_858_;
v_a_847_ = v_a_864_;
goto v___jp_845_;
}
}
else
{
lean_object* v_a_883_; lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
lean_dec(v_declName_837_);
v_a_883_ = lean_ctor_get(v___x_863_, 0);
v_a_884_ = lean_ctor_get(v___x_863_, 1);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_891_ == 0)
{
v___x_886_ = v___x_863_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_inc(v_a_883_);
lean_dec(v___x_863_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_883_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v_a_884_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
}
v___jp_845_:
{
size_t v___x_848_; size_t v___x_849_; 
v___x_848_ = ((size_t)1ULL);
v___x_849_ = lean_usize_add(v_i_841_, v___x_848_);
v_i_841_ = v___x_849_;
v_b_842_ = v_a_846_;
v___y_844_ = v_a_847_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp(lean_object* v_declName_892_, lean_object* v_args_893_, lean_object* v_a_894_, lean_object* v_a_895_){
_start:
{
lean_object* v___y_897_; lean_object* v_decls_898_; lean_object* v___y_899_; lean_object* v_main_913_; lean_object* v_toSignature_914_; lean_object* v_decls_915_; lean_object* v_name_916_; lean_object* v_params_917_; uint8_t v___x_918_; 
v_main_913_ = lean_ctor_get(v_a_894_, 1);
v_toSignature_914_ = lean_ctor_get(v_main_913_, 0);
v_decls_915_ = lean_ctor_get(v_a_894_, 0);
v_name_916_ = lean_ctor_get(v_toSignature_914_, 0);
v_params_917_ = lean_ctor_get(v_toSignature_914_, 3);
v___x_918_ = lean_name_eq(v_declName_892_, v_name_916_);
if (v___x_918_ == 0)
{
v___y_897_ = v_a_894_;
v_decls_898_ = v_decls_915_;
v___y_899_ = v_a_895_;
goto v___jp_896_;
}
else
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_919_ = lean_array_get_size(v_params_917_);
v___x_920_ = lean_unsigned_to_nat(0u);
v___x_921_ = lean_box(0);
v___x_922_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v___x_919_, v_args_893_, v___x_920_, v___x_921_, v_a_894_, v_a_895_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_932_; 
v_a_923_ = lean_ctor_get(v___x_922_, 1);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_932_ == 0)
{
lean_object* v_unused_933_; 
v_unused_933_ = lean_ctor_get(v___x_922_, 0);
lean_dec(v_unused_933_);
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_932_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_932_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v_fixed_927_; uint8_t v___x_928_; 
v_fixed_927_ = lean_ctor_get(v_a_923_, 1);
v___x_928_ = l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(v___x_918_, v_fixed_927_, v___x_918_);
if (v___x_928_ == 0)
{
lean_object* v___x_930_; 
lean_dec(v_declName_892_);
if (v_isShared_926_ == 0)
{
lean_ctor_set_tag(v___x_925_, 1);
lean_ctor_set(v___x_925_, 0, v___x_921_);
v___x_930_ = v___x_925_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v___x_921_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v_a_923_);
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
lean_del_object(v___x_925_);
v___y_897_ = v_a_894_;
v_decls_898_ = v_decls_915_;
v___y_899_ = v_a_923_;
goto v___jp_896_;
}
}
}
else
{
lean_dec(v_declName_892_);
return v___x_922_;
}
}
v___jp_896_:
{
lean_object* v___x_900_; size_t v_sz_901_; size_t v___x_902_; lean_object* v___x_903_; 
v___x_900_ = lean_box(0);
v_sz_901_ = lean_array_size(v_decls_898_);
v___x_902_ = ((size_t)0ULL);
v___x_903_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(v_declName_892_, v_args_893_, v_decls_898_, v_sz_901_, v___x_902_, v___x_900_, v___y_897_, v___y_899_);
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
v_a_904_ = lean_ctor_get(v___x_903_, 1);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; 
v_unused_912_ = lean_ctor_get(v___x_903_, 0);
lean_dec(v_unused_912_);
v___x_906_ = v___x_903_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v___x_900_);
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v___x_900_);
lean_ctor_set(v_reuseFailAlloc_910_, 1, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
else
{
return v___x_903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue(lean_object* v_e_934_, lean_object* v_a_935_, lean_object* v_a_936_){
_start:
{
if (lean_obj_tag(v_e_934_) == 3)
{
lean_object* v_declName_937_; lean_object* v_args_938_; lean_object* v___x_939_; 
v_declName_937_ = lean_ctor_get(v_e_934_, 0);
lean_inc(v_declName_937_);
v_args_938_ = lean_ctor_get(v_e_934_, 2);
lean_inc_ref(v_args_938_);
lean_dec_ref_known(v_e_934_, 3);
v___x_939_ = l_Lean_Compiler_LCNF_FixedParams_evalApp(v_declName_937_, v_args_938_, v_a_935_, v_a_936_);
lean_dec_ref(v_args_938_);
return v___x_939_;
}
else
{
lean_object* v___x_940_; lean_object* v___x_941_; 
lean_dec(v_e_934_);
v___x_940_ = lean_box(0);
v___x_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
lean_ctor_set(v___x_941_, 1, v_a_936_);
return v___x_941_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(lean_object* v_as_942_, size_t v_i_943_, size_t v_stop_944_, lean_object* v_b_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v___y_949_; uint8_t v___x_956_; 
v___x_956_ = lean_usize_dec_eq(v_i_943_, v_stop_944_);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; 
v___x_957_ = lean_array_uget_borrowed(v_as_942_, v_i_943_);
switch(lean_obj_tag(v___x_957_))
{
case 0:
{
lean_object* v_code_958_; 
v_code_958_ = lean_ctor_get(v___x_957_, 2);
lean_inc_ref(v_code_958_);
v___y_949_ = v_code_958_;
goto v___jp_948_;
}
case 1:
{
lean_object* v_code_959_; 
v_code_959_ = lean_ctor_get(v___x_957_, 1);
lean_inc_ref(v_code_959_);
v___y_949_ = v_code_959_;
goto v___jp_948_;
}
default: 
{
lean_object* v_code_960_; 
v_code_960_ = lean_ctor_get(v___x_957_, 0);
lean_inc_ref(v_code_960_);
v___y_949_ = v_code_960_;
goto v___jp_948_;
}
}
}
else
{
lean_object* v___x_961_; 
v___x_961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_961_, 0, v_b_945_);
lean_ctor_set(v___x_961_, 1, v___y_947_);
return v___x_961_;
}
v___jp_948_:
{
lean_object* v___x_950_; 
lean_inc_ref(v___y_946_);
v___x_950_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v___y_949_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v_a_952_; size_t v___x_953_; size_t v___x_954_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_a_951_);
v_a_952_ = lean_ctor_get(v___x_950_, 1);
lean_inc(v_a_952_);
lean_dec_ref_known(v___x_950_, 2);
v___x_953_ = ((size_t)1ULL);
v___x_954_ = lean_usize_add(v_i_943_, v___x_953_);
v_i_943_ = v___x_954_;
v_b_945_ = v_a_951_;
v___y_947_ = v_a_952_;
goto _start;
}
else
{
return v___x_950_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalCode(lean_object* v_code_962_, lean_object* v_a_963_, lean_object* v_a_964_){
_start:
{
switch(lean_obj_tag(v_code_962_))
{
case 0:
{
lean_object* v_decl_965_; lean_object* v_k_966_; lean_object* v_value_967_; lean_object* v___x_968_; 
v_decl_965_ = lean_ctor_get(v_code_962_, 0);
lean_inc_ref(v_decl_965_);
v_k_966_ = lean_ctor_get(v_code_962_, 1);
lean_inc_ref(v_k_966_);
lean_dec_ref_known(v_code_962_, 2);
v_value_967_ = lean_ctor_get(v_decl_965_, 3);
lean_inc(v_value_967_);
lean_dec_ref(v_decl_965_);
v___x_968_ = l_Lean_Compiler_LCNF_FixedParams_evalLetValue(v_value_967_, v_a_963_, v_a_964_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; 
v_a_969_ = lean_ctor_get(v___x_968_, 1);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 2);
v_code_962_ = v_k_966_;
v_a_964_ = v_a_969_;
goto _start;
}
else
{
lean_dec_ref(v_k_966_);
lean_dec_ref(v_a_963_);
return v___x_968_;
}
}
case 1:
{
lean_object* v_decl_971_; lean_object* v_k_972_; lean_object* v___x_973_; 
v_decl_971_ = lean_ctor_get(v_code_962_, 0);
lean_inc_ref_n(v_decl_971_, 2);
v_k_972_ = lean_ctor_get(v_code_962_, 1);
lean_inc_ref(v_k_972_);
lean_dec_ref_known(v_code_962_, 2);
v___x_973_ = l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(v_decl_971_, v_a_963_, v_a_964_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v_a_974_; 
v_a_974_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_a_974_);
if (lean_obj_tag(v_a_974_) == 1)
{
lean_object* v_a_975_; lean_object* v_val_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_990_; 
v_a_975_ = lean_ctor_get(v___x_973_, 1);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_973_, 2);
v_val_976_ = lean_ctor_get(v_a_974_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v_a_974_);
if (v_isSharedCheck_990_ == 0)
{
v___x_978_ = v_a_974_;
v_isShared_979_ = v_isSharedCheck_990_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_val_976_);
lean_dec(v_a_974_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_990_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v_fvarId_980_; lean_object* v_decls_981_; lean_object* v_main_982_; lean_object* v_assignment_983_; lean_object* v___x_985_; 
v_fvarId_980_ = lean_ctor_get(v_decl_971_, 0);
lean_inc(v_fvarId_980_);
lean_dec_ref(v_decl_971_);
v_decls_981_ = lean_ctor_get(v_a_963_, 0);
lean_inc_ref(v_decls_981_);
v_main_982_ = lean_ctor_get(v_a_963_, 1);
lean_inc_ref(v_main_982_);
v_assignment_983_ = lean_ctor_get(v_a_963_, 2);
lean_inc(v_assignment_983_);
lean_dec_ref(v_a_963_);
if (v_isShared_979_ == 0)
{
lean_ctor_set_tag(v___x_978_, 2);
v___x_985_ = v___x_978_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_val_976_);
v___x_985_ = v_reuseFailAlloc_989_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_986_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_980_, v___x_985_, v_assignment_983_);
v___x_987_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_987_, 0, v_decls_981_);
lean_ctor_set(v___x_987_, 1, v_main_982_);
lean_ctor_set(v___x_987_, 2, v___x_986_);
v_code_962_ = v_k_972_;
v_a_963_ = v___x_987_;
v_a_964_ = v_a_975_;
goto _start;
}
}
}
else
{
lean_object* v_a_991_; lean_object* v_value_992_; lean_object* v___x_993_; 
lean_dec(v_a_974_);
v_a_991_ = lean_ctor_get(v___x_973_, 1);
lean_inc(v_a_991_);
lean_dec_ref_known(v___x_973_, 2);
v_value_992_ = lean_ctor_get(v_decl_971_, 4);
lean_inc_ref(v_value_992_);
lean_dec_ref(v_decl_971_);
lean_inc_ref(v_a_963_);
v___x_993_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_value_992_, v_a_963_, v_a_991_);
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; 
v_a_994_ = lean_ctor_get(v___x_993_, 1);
lean_inc(v_a_994_);
lean_dec_ref_known(v___x_993_, 2);
v_code_962_ = v_k_972_;
v_a_964_ = v_a_994_;
goto _start;
}
else
{
lean_dec_ref(v_k_972_);
lean_dec_ref(v_a_963_);
return v___x_993_;
}
}
}
else
{
lean_object* v_a_996_; lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
lean_dec_ref(v_k_972_);
lean_dec_ref(v_decl_971_);
lean_dec_ref(v_a_963_);
v_a_996_ = lean_ctor_get(v___x_973_, 0);
v_a_997_ = lean_ctor_get(v___x_973_, 1);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_973_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_inc(v_a_996_);
lean_dec(v___x_973_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_996_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
case 2:
{
lean_object* v_decl_1005_; lean_object* v_k_1006_; lean_object* v_value_1007_; lean_object* v___x_1008_; 
v_decl_1005_ = lean_ctor_get(v_code_962_, 0);
lean_inc_ref(v_decl_1005_);
v_k_1006_ = lean_ctor_get(v_code_962_, 1);
lean_inc_ref(v_k_1006_);
lean_dec_ref_known(v_code_962_, 2);
v_value_1007_ = lean_ctor_get(v_decl_1005_, 4);
lean_inc_ref(v_value_1007_);
lean_dec_ref(v_decl_1005_);
lean_inc_ref(v_a_963_);
v___x_1008_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_value_1007_, v_a_963_, v_a_964_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 1);
lean_inc(v_a_1009_);
lean_dec_ref_known(v___x_1008_, 2);
v_code_962_ = v_k_1006_;
v_a_964_ = v_a_1009_;
goto _start;
}
else
{
lean_dec_ref(v_k_1006_);
lean_dec_ref(v_a_963_);
return v___x_1008_;
}
}
case 3:
{
lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1018_; 
lean_dec_ref(v_a_963_);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_code_962_);
if (v_isSharedCheck_1018_ == 0)
{
lean_object* v_unused_1019_; lean_object* v_unused_1020_; 
v_unused_1019_ = lean_ctor_get(v_code_962_, 1);
lean_dec(v_unused_1019_);
v_unused_1020_ = lean_ctor_get(v_code_962_, 0);
lean_dec(v_unused_1020_);
v___x_1012_ = v_code_962_;
v_isShared_1013_ = v_isSharedCheck_1018_;
goto v_resetjp_1011_;
}
else
{
lean_dec(v_code_962_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1018_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1014_; lean_object* v___x_1016_; 
v___x_1014_ = lean_box(0);
if (v_isShared_1013_ == 0)
{
lean_ctor_set_tag(v___x_1012_, 0);
lean_ctor_set(v___x_1012_, 1, v_a_964_);
lean_ctor_set(v___x_1012_, 0, v___x_1014_);
v___x_1016_ = v___x_1012_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1017_, 1, v_a_964_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
case 4:
{
lean_object* v_cases_1021_; lean_object* v_alts_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; uint8_t v___x_1026_; 
v_cases_1021_ = lean_ctor_get(v_code_962_, 0);
lean_inc_ref(v_cases_1021_);
lean_dec_ref_known(v_code_962_, 1);
v_alts_1022_ = lean_ctor_get(v_cases_1021_, 3);
lean_inc_ref(v_alts_1022_);
lean_dec_ref(v_cases_1021_);
v___x_1023_ = lean_unsigned_to_nat(0u);
v___x_1024_ = lean_array_get_size(v_alts_1022_);
v___x_1025_ = lean_box(0);
v___x_1026_ = lean_nat_dec_lt(v___x_1023_, v___x_1024_);
if (v___x_1026_ == 0)
{
lean_object* v___x_1027_; 
lean_dec_ref(v_alts_1022_);
lean_dec_ref(v_a_963_);
v___x_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1025_);
lean_ctor_set(v___x_1027_, 1, v_a_964_);
return v___x_1027_;
}
else
{
uint8_t v___x_1028_; 
v___x_1028_ = lean_nat_dec_le(v___x_1024_, v___x_1024_);
if (v___x_1028_ == 0)
{
if (v___x_1026_ == 0)
{
lean_object* v___x_1029_; 
lean_dec_ref(v_alts_1022_);
lean_dec_ref(v_a_963_);
v___x_1029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1025_);
lean_ctor_set(v___x_1029_, 1, v_a_964_);
return v___x_1029_;
}
else
{
size_t v___x_1030_; size_t v___x_1031_; lean_object* v___x_1032_; 
v___x_1030_ = ((size_t)0ULL);
v___x_1031_ = lean_usize_of_nat(v___x_1024_);
v___x_1032_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(v_alts_1022_, v___x_1030_, v___x_1031_, v___x_1025_, v_a_963_, v_a_964_);
lean_dec_ref(v_a_963_);
lean_dec_ref(v_alts_1022_);
return v___x_1032_;
}
}
else
{
size_t v___x_1033_; size_t v___x_1034_; lean_object* v___x_1035_; 
v___x_1033_ = ((size_t)0ULL);
v___x_1034_ = lean_usize_of_nat(v___x_1024_);
v___x_1035_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(v_alts_1022_, v___x_1033_, v___x_1034_, v___x_1025_, v_a_963_, v_a_964_);
lean_dec_ref(v_a_963_);
lean_dec_ref(v_alts_1022_);
return v___x_1035_;
}
}
}
default: 
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
lean_dec_ref(v_a_963_);
lean_dec_ref(v_code_962_);
v___x_1036_ = lean_box(0);
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1036_);
lean_ctor_set(v___x_1037_, 1, v_a_964_);
return v___x_1037_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_c_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_decls_1043_; lean_object* v_main_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v_decls_1043_ = lean_ctor_get(v___y_1041_, 0);
v_main_1044_ = lean_ctor_get(v___y_1041_, 1);
v___x_1045_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_a_1038_, v_a_1039_);
lean_inc_ref(v_main_1044_);
lean_inc_ref(v_decls_1043_);
v___x_1046_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1046_, 0, v_decls_1043_);
lean_ctor_set(v___x_1046_, 1, v_main_1044_);
lean_ctor_set(v___x_1046_, 2, v___x_1045_);
v___x_1047_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_c_1040_, v___x_1046_, v___y_1042_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue___boxed(lean_object* v_e_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lean_Compiler_LCNF_FixedParams_evalLetValue(v_e_1048_, v_a_1049_, v_a_1050_);
lean_dec_ref(v_a_1049_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9___boxed(lean_object* v_as_1052_, lean_object* v_i_1053_, lean_object* v_stop_1054_, lean_object* v_b_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
size_t v_i_boxed_1058_; size_t v_stop_boxed_1059_; lean_object* v_res_1060_; 
v_i_boxed_1058_ = lean_unbox_usize(v_i_1053_);
lean_dec(v_i_1053_);
v_stop_boxed_1059_ = lean_unbox_usize(v_stop_1054_);
lean_dec(v_stop_1054_);
v_res_1060_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(v_as_1052_, v_i_boxed_1058_, v_stop_boxed_1059_, v_b_1055_, v___y_1056_, v___y_1057_);
lean_dec_ref(v___y_1056_);
lean_dec_ref(v_as_1052_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp___boxed(lean_object* v_declName_1061_, lean_object* v_args_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lean_Compiler_LCNF_FixedParams_evalApp(v_declName_1061_, v_args_1062_, v_a_1063_, v_a_1064_);
lean_dec_ref(v_a_1063_);
lean_dec_ref(v_args_1062_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___boxed(lean_object* v_declName_1066_, lean_object* v_args_1067_, lean_object* v_as_1068_, lean_object* v_sz_1069_, lean_object* v_i_1070_, lean_object* v_b_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
size_t v_sz_boxed_1074_; size_t v_i_boxed_1075_; lean_object* v_res_1076_; 
v_sz_boxed_1074_ = lean_unbox_usize(v_sz_1069_);
lean_dec(v_sz_1069_);
v_i_boxed_1075_ = lean_unbox_usize(v_i_1070_);
lean_dec(v_i_1070_);
v_res_1076_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(v_declName_1066_, v_args_1067_, v_as_1068_, v_sz_boxed_1074_, v_i_boxed_1075_, v_b_1071_, v___y_1072_, v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec_ref(v_as_1068_);
lean_dec_ref(v_args_1067_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(uint8_t v_pu_1077_, lean_object* v_f_1078_, lean_object* v_v_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v_f_1078_, v_v_1079_, v___y_1080_, v___y_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___boxed(lean_object* v_pu_1083_, lean_object* v_f_1084_, lean_object* v_v_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
uint8_t v_pu_boxed_1088_; lean_object* v_res_1089_; 
v_pu_boxed_1088_ = lean_unbox(v_pu_1083_);
v_res_1089_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(v_pu_boxed_1088_, v_f_1084_, v_v_1085_, v___y_1086_, v___y_1087_);
lean_dec_ref(v___y_1086_);
return v_res_1089_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(lean_object* v_00_u03b2_1090_, lean_object* v_m_1091_, lean_object* v_a_1092_){
_start:
{
uint8_t v___x_1093_; 
v___x_1093_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_m_1091_, v_a_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___boxed(lean_object* v_00_u03b2_1094_, lean_object* v_m_1095_, lean_object* v_a_1096_){
_start:
{
uint8_t v_res_1097_; lean_object* v_r_1098_; 
v_res_1097_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(v_00_u03b2_1094_, v_m_1095_, v_a_1096_);
lean_dec_ref(v_a_1096_);
lean_dec_ref(v_m_1095_);
v_r_1098_ = lean_box(v_res_1097_);
return v_r_1098_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2(lean_object* v_00_u03b2_1099_, lean_object* v_m_1100_, lean_object* v_a_1101_, lean_object* v_b_1102_){
_start:
{
lean_object* v___x_1103_; 
v___x_1103_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(v_m_1100_, v_a_1101_, v_b_1102_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(lean_object* v_upperBound_1104_, lean_object* v_args_1105_, lean_object* v_inst_1106_, lean_object* v_R_1107_, lean_object* v_a_1108_, lean_object* v_b_1109_, lean_object* v_c_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v___x_1113_; 
v___x_1113_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v_upperBound_1104_, v_args_1105_, v_a_1108_, v_b_1109_, v___y_1111_, v___y_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___boxed(lean_object* v_upperBound_1114_, lean_object* v_args_1115_, lean_object* v_inst_1116_, lean_object* v_R_1117_, lean_object* v_a_1118_, lean_object* v_b_1119_, lean_object* v_c_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(v_upperBound_1114_, v_args_1115_, v_inst_1116_, v_R_1117_, v_a_1118_, v_b_1119_, v_c_1120_, v___y_1121_, v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec_ref(v_args_1115_);
lean_dec(v_upperBound_1114_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(lean_object* v_upperBound_1124_, lean_object* v_args_1125_, lean_object* v_inst_1126_, lean_object* v_R_1127_, lean_object* v_a_1128_, lean_object* v_b_1129_, lean_object* v_c_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
lean_object* v___x_1133_; 
v___x_1133_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v_upperBound_1124_, v_args_1125_, v_a_1128_, v_b_1129_, v___y_1131_, v___y_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___boxed(lean_object* v_upperBound_1134_, lean_object* v_args_1135_, lean_object* v_inst_1136_, lean_object* v_R_1137_, lean_object* v_a_1138_, lean_object* v_b_1139_, lean_object* v_c_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(v_upperBound_1134_, v_args_1135_, v_inst_1136_, v_R_1137_, v_a_1138_, v_b_1139_, v_c_1140_, v___y_1141_, v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec_ref(v_args_1135_);
lean_dec(v_upperBound_1134_);
return v_res_1143_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(lean_object* v_00_u03b2_1144_, lean_object* v_a_1145_, lean_object* v_x_1146_){
_start:
{
uint8_t v___x_1147_; 
v___x_1147_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_1145_, v_x_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1148_, lean_object* v_a_1149_, lean_object* v_x_1150_){
_start:
{
uint8_t v_res_1151_; lean_object* v_r_1152_; 
v_res_1151_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(v_00_u03b2_1148_, v_a_1149_, v_x_1150_);
lean_dec(v_x_1150_);
lean_dec_ref(v_a_1149_);
v_r_1152_ = lean_box(v_res_1151_);
return v_r_1152_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4(lean_object* v_00_u03b2_1153_, lean_object* v_data_1154_){
_start:
{
lean_object* v___x_1155_; 
v___x_1155_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(v_data_1154_);
return v___x_1155_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(lean_object* v_xs_1156_, lean_object* v_ys_1157_, lean_object* v_hsz_1158_, lean_object* v_x_1159_, lean_object* v_x_1160_){
_start:
{
uint8_t v___x_1161_; 
v___x_1161_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_xs_1156_, v_ys_1157_, v_x_1159_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___boxed(lean_object* v_xs_1162_, lean_object* v_ys_1163_, lean_object* v_hsz_1164_, lean_object* v_x_1165_, lean_object* v_x_1166_){
_start:
{
uint8_t v_res_1167_; lean_object* v_r_1168_; 
v_res_1167_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(v_xs_1162_, v_ys_1163_, v_hsz_1164_, v_x_1165_, v_x_1166_);
lean_dec_ref(v_ys_1163_);
lean_dec_ref(v_xs_1162_);
v_r_1168_ = lean_box(v_res_1167_);
return v_r_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_1169_, lean_object* v_i_1170_, lean_object* v_source_1171_, lean_object* v_target_1172_){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(v_i_1170_, v_source_1171_, v_target_1172_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14(lean_object* v_00_u03b2_1174_, lean_object* v_x_1175_, lean_object* v_x_1176_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(v_x_1175_, v_x_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(lean_object* v_upperBound_1178_, lean_object* v_a_1179_, lean_object* v_b_1180_){
_start:
{
uint8_t v___x_1181_; 
v___x_1181_ = lean_nat_dec_lt(v_a_1179_, v_upperBound_1178_);
if (v___x_1181_ == 0)
{
lean_dec(v_a_1179_);
return v_b_1180_;
}
else
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
lean_inc(v_a_1179_);
v___x_1182_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1182_, 0, v_a_1179_);
v___x_1183_ = lean_array_push(v_b_1180_, v___x_1182_);
v___x_1184_ = lean_unsigned_to_nat(1u);
v___x_1185_ = lean_nat_add(v_a_1179_, v___x_1184_);
lean_dec(v_a_1179_);
v_a_1179_ = v___x_1185_;
v_b_1180_ = v___x_1183_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg___boxed(lean_object* v_upperBound_1187_, lean_object* v_a_1188_, lean_object* v_b_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_upperBound_1187_, v_a_1188_, v_b_1189_);
lean_dec(v_upperBound_1187_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(lean_object* v_numParams_1191_){
_start:
{
lean_object* v___x_1192_; lean_object* v_values_1193_; lean_object* v___x_1194_; 
v___x_1192_ = lean_unsigned_to_nat(0u);
v_values_1193_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0));
v___x_1194_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_numParams_1191_, v___x_1192_, v_values_1193_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues___boxed(lean_object* v_numParams_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(v_numParams_1195_);
lean_dec(v_numParams_1195_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(lean_object* v_upperBound_1197_, lean_object* v_inst_1198_, lean_object* v_R_1199_, lean_object* v_a_1200_, lean_object* v_b_1201_, lean_object* v_c_1202_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_upperBound_1197_, v_a_1200_, v_b_1201_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___boxed(lean_object* v_upperBound_1204_, lean_object* v_inst_1205_, lean_object* v_R_1206_, lean_object* v_a_1207_, lean_object* v_b_1208_, lean_object* v_c_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(v_upperBound_1204_, v_inst_1205_, v_R_1206_, v_a_1207_, v_b_1208_, v_c_1209_);
lean_dec(v_upperBound_1204_);
return v_res_1210_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1211_ = lean_box(0);
v___x_1212_ = lean_unsigned_to_nat(16u);
v___x_1213_ = lean_mk_array(v___x_1212_, v___x_1211_);
return v___x_1213_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1214_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0);
v___x_1215_ = lean_unsigned_to_nat(0u);
v___x_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
lean_ctor_set(v___x_1216_, 1, v___x_1214_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(lean_object* v_decls_1217_, lean_object* v_as_1218_, size_t v_sz_1219_, size_t v_i_1220_, lean_object* v_b_1221_){
_start:
{
lean_object* v_a_1223_; uint8_t v___x_1227_; 
v___x_1227_ = lean_usize_dec_lt(v_i_1220_, v_sz_1219_);
if (v___x_1227_ == 0)
{
lean_dec_ref(v_decls_1217_);
return v_b_1221_;
}
else
{
lean_object* v_a_1228_; lean_object* v_toSignature_1229_; lean_object* v_value_1230_; lean_object* v_name_1231_; lean_object* v_params_1232_; lean_object* v_s_1234_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v_a_1228_ = lean_array_uget_borrowed(v_as_1218_, v_i_1220_);
v_toSignature_1229_ = lean_ctor_get(v_a_1228_, 0);
v_value_1230_ = lean_ctor_get(v_a_1228_, 1);
v_name_1231_ = lean_ctor_get(v_toSignature_1229_, 0);
v_params_1232_ = lean_ctor_get(v_toSignature_1229_, 3);
v___x_1237_ = lean_array_get_size(v_params_1232_);
v___x_1238_ = l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(v___x_1237_);
v___x_1239_ = lean_box(v___x_1227_);
v___x_1240_ = lean_mk_array(v___x_1237_, v___x_1239_);
if (lean_obj_tag(v_value_1230_) == 0)
{
lean_object* v_code_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v_a_1247_; 
v_code_1241_ = lean_ctor_get(v_value_1230_, 0);
v___x_1242_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_a_1228_, v___x_1238_);
lean_inc(v_a_1228_);
lean_inc_ref(v_decls_1217_);
v___x_1243_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1243_, 0, v_decls_1217_);
lean_ctor_set(v___x_1243_, 1, v_a_1228_);
lean_ctor_set(v___x_1243_, 2, v___x_1242_);
v___x_1244_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1);
v___x_1245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1244_);
lean_ctor_set(v___x_1245_, 1, v___x_1240_);
lean_inc_ref(v_code_1241_);
v___x_1246_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_code_1241_, v___x_1243_, v___x_1245_);
v_a_1247_ = lean_ctor_get(v___x_1246_, 1);
lean_inc(v_a_1247_);
lean_dec_ref(v___x_1246_);
v_s_1234_ = v_a_1247_;
goto v___jp_1233_;
}
else
{
lean_object* v___x_1248_; 
lean_dec_ref(v___x_1238_);
lean_inc(v_name_1231_);
v___x_1248_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1231_, v___x_1240_, v_b_1221_);
v_a_1223_ = v___x_1248_;
goto v___jp_1222_;
}
v___jp_1233_:
{
lean_object* v_fixed_1235_; lean_object* v___x_1236_; 
v_fixed_1235_ = lean_ctor_get(v_s_1234_, 1);
lean_inc_ref(v_fixed_1235_);
lean_dec_ref(v_s_1234_);
lean_inc(v_name_1231_);
v___x_1236_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1231_, v_fixed_1235_, v_b_1221_);
v_a_1223_ = v___x_1236_;
goto v___jp_1222_;
}
}
v___jp_1222_:
{
size_t v___x_1224_; size_t v___x_1225_; 
v___x_1224_ = ((size_t)1ULL);
v___x_1225_ = lean_usize_add(v_i_1220_, v___x_1224_);
v_i_1220_ = v___x_1225_;
v_b_1221_ = v_a_1223_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___boxed(lean_object* v_decls_1249_, lean_object* v_as_1250_, lean_object* v_sz_1251_, lean_object* v_i_1252_, lean_object* v_b_1253_){
_start:
{
size_t v_sz_boxed_1254_; size_t v_i_boxed_1255_; lean_object* v_res_1256_; 
v_sz_boxed_1254_ = lean_unbox_usize(v_sz_1251_);
lean_dec(v_sz_1251_);
v_i_boxed_1255_ = lean_unbox_usize(v_i_1252_);
lean_dec(v_i_1252_);
v_res_1256_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(v_decls_1249_, v_as_1250_, v_sz_boxed_1254_, v_i_boxed_1255_, v_b_1253_);
lean_dec_ref(v_as_1250_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFixedParamsMap(lean_object* v_decls_1257_){
_start:
{
lean_object* v_result_1258_; size_t v_sz_1259_; size_t v___x_1260_; lean_object* v___x_1261_; 
v_result_1258_ = lean_box(1);
v_sz_1259_ = lean_array_size(v_decls_1257_);
v___x_1260_ = ((size_t)0ULL);
lean_inc_ref(v_decls_1257_);
v___x_1261_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(v_decls_1257_, v_decls_1257_, v_sz_1259_, v___x_1260_, v_result_1258_);
lean_dec_ref(v_decls_1257_);
return v___x_1261_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default = _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default);
l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue = _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue();
lean_mark_persistent(l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_FixedParams(builtin);
}
#ifdef __cplusplus
}
#endif

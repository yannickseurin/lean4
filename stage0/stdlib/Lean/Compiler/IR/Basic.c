// Lean compiler output
// Module: Lean.Compiler.IR.Basic
// Imports: public import Lean.Compiler.ExternAttr import Init.Data.Range.Polymorphic.Iterators
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedVarId_default;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedVarId;
LEAN_EXPORT uint8_t l_Lean_IR_instBEqVarId_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instBEqVarId_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instBEqVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instBEqVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instBEqVarId___closed__0 = (const lean_object*)&l_Lean_IR_instBEqVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instBEqVarId = (const lean_object*)&l_Lean_IR_instBEqVarId___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_IR_instHashableVarId_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instHashableVarId_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_IR_instHashableVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instHashableVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instHashableVarId___closed__0 = (const lean_object*)&l_Lean_IR_instHashableVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instHashableVarId = (const lean_object*)&l_Lean_IR_instHashableVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_IR_instReprVarId_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_IR_instReprVarId_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__0 = (const lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_IR_instReprVarId_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "idx"};
static const lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__1 = (const lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_IR_instReprVarId_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__2 = (const lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_IR_instReprVarId_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__3 = (const lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_IR_instReprVarId_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__4 = (const lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_IR_instReprVarId_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__5 = (const lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_IR_instReprVarId_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__3_value),((lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__6 = (const lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_IR_instReprVarId_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__7;
static const lean_string_object l_Lean_IR_instReprVarId_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__8 = (const lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lean_IR_instReprVarId_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__9;
static lean_once_cell_t l_Lean_IR_instReprVarId_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__10;
static const lean_ctor_object l_Lean_IR_instReprVarId_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__11 = (const lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_IR_instReprVarId_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_IR_instReprVarId_repr___redArg___closed__12 = (const lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_IR_instReprVarId_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instReprVarId_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instReprVarId_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instReprVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instReprVarId_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instReprVarId___closed__0 = (const lean_object*)&l_Lean_IR_instReprVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instReprVarId = (const lean_object*)&l_Lean_IR_instReprVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedJoinPointId_default;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedJoinPointId;
LEAN_EXPORT uint8_t l_Lean_IR_instBEqJoinPointId_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instBEqJoinPointId_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instBEqJoinPointId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instBEqJoinPointId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instBEqJoinPointId___closed__0 = (const lean_object*)&l_Lean_IR_instBEqJoinPointId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instBEqJoinPointId = (const lean_object*)&l_Lean_IR_instBEqJoinPointId___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_IR_instHashableJoinPointId_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instHashableJoinPointId_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_IR_instHashableJoinPointId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instHashableJoinPointId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instHashableJoinPointId___closed__0 = (const lean_object*)&l_Lean_IR_instHashableJoinPointId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instHashableJoinPointId = (const lean_object*)&l_Lean_IR_instHashableJoinPointId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_instReprJoinPointId_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instReprJoinPointId_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instReprJoinPointId_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instReprJoinPointId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instReprJoinPointId_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instReprJoinPointId___closed__0 = (const lean_object*)&l_Lean_IR_instReprJoinPointId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instReprJoinPointId = (const lean_object*)&l_Lean_IR_instReprJoinPointId___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_IR_Index_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Index_lt___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_instToStringVarId___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "x_"};
static const lean_object* l_Lean_IR_instToStringVarId___lam__0___closed__0 = (const lean_object*)&l_Lean_IR_instToStringVarId___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_instToStringVarId___lam__0(lean_object*);
static const lean_closure_object l_Lean_IR_instToStringVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToStringVarId___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToStringVarId___closed__0 = (const lean_object*)&l_Lean_IR_instToStringVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToStringVarId = (const lean_object*)&l_Lean_IR_instToStringVarId___closed__0_value;
static const lean_string_object l_Lean_IR_instToStringJoinPointId___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "block_"};
static const lean_object* l_Lean_IR_instToStringJoinPointId___lam__0___closed__0 = (const lean_object*)&l_Lean_IR_instToStringJoinPointId___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_instToStringJoinPointId___lam__0(lean_object*);
static const lean_closure_object l_Lean_IR_instToStringJoinPointId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instToStringJoinPointId___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instToStringJoinPointId___closed__0 = (const lean_object*)&l_Lean_IR_instToStringJoinPointId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instToStringJoinPointId = (const lean_object*)&l_Lean_IR_instToStringJoinPointId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_IRType_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_float_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_float_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint8_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint8_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint16_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint16_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint32_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint32_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint64_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint64_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_usize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_usize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_erased_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_erased_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_tobject_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_tobject_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_float32_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_float32_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_struct_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_struct_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_union_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_union_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_tagged_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_tagged_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_void_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_void_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedIRType_default;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedIRType;
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_IR_instBEqIRType_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_IR_instBEqIRType_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_instBEqIRType_beq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instBEqIRType_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instBEqIRType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instBEqIRType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instBEqIRType___closed__0 = (const lean_object*)&l_Lean_IR_instBEqIRType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instBEqIRType = (const lean_object*)&l_Lean_IR_instBEqIRType___closed__0_value;
static const lean_string_object l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.IR.IRType.float"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__0 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__0_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__0_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__1 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__1_value;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.IR.IRType.uint8"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__2 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__2_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__2_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__3 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__3_value;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.IR.IRType.uint16"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__4 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__4_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__4_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__5 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__5_value;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.IR.IRType.uint32"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__6 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__6_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__6_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__7 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__7_value;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.IR.IRType.uint64"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__8 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__8_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__8_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__9 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__9_value;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.IR.IRType.usize"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__10 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__10_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__10_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__11 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__11_value;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.IR.IRType.erased"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__12 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__12_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__12_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__13 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__13_value;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.IR.IRType.object"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__14 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__14_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__14_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__15 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__15_value;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.IR.IRType.tobject"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__16 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__16_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__16_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__17 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__17_value;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.IR.IRType.float32"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__18 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__18_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__18_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__19 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__19_value;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.IR.IRType.tagged"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__20 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__20_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__20_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__21 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__21_value;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.IR.IRType.void"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__22 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__22_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__22_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__23 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__23_value;
static lean_once_cell_t l_Lean_IR_instReprIRType_repr___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instReprIRType_repr___closed__24;
static lean_once_cell_t l_Lean_IR_instReprIRType_repr___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instReprIRType_repr___closed__25;
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.IR.IRType.struct"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__26 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__26_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__26_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__27 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__27_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__27_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__28 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__28_value;
static const lean_string_object l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__0_value;
static lean_once_cell_t l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__6;
static const lean_ctor_object l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__7_value;
static const lean_string_object l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__8_value;
static const lean_string_object l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__9 = (const lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__10 = (const lean_object*)&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1(lean_object*);
static const lean_string_object l_Lean_IR_instReprIRType_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.IR.IRType.union"};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__29 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__29_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__29_value)}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__30 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__30_value;
static const lean_ctor_object l_Lean_IR_instReprIRType_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_IR_instReprIRType_repr___closed__30_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_IR_instReprIRType_repr___closed__31 = (const lean_object*)&l_Lean_IR_instReprIRType_repr___closed__31_value;
LEAN_EXPORT lean_object* l_Lean_IR_instReprIRType_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instReprIRType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instReprIRType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instReprIRType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instReprIRType___closed__0 = (const lean_object*)&l_Lean_IR_instReprIRType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instReprIRType = (const lean_object*)&l_Lean_IR_instReprIRType___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isScalar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isScalar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isObj(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isObj___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isPossibleRef(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isPossibleRef___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isDefiniteRef(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isDefiniteRef___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isErased(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isErased___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isVoid(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isVoid___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_IRType_boxed___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Arg_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Arg_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Arg_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Arg_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Arg_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Arg_var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Arg_var_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Arg_erased_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Arg_erased_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_IR_instInhabitedArg_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_IR_instInhabitedArg_default___closed__0 = (const lean_object*)&l_Lean_IR_instInhabitedArg_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instInhabitedArg_default = (const lean_object*)&l_Lean_IR_instInhabitedArg_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instInhabitedArg = (const lean_object*)&l_Lean_IR_instInhabitedArg_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_IR_instBEqArg_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instBEqArg_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instBEqArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instBEqArg_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instBEqArg___closed__0 = (const lean_object*)&l_Lean_IR_instBEqArg___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instBEqArg = (const lean_object*)&l_Lean_IR_instBEqArg___closed__0_value;
static const lean_string_object l_Lean_IR_instReprArg_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.IR.Arg.erased"};
static const lean_object* l_Lean_IR_instReprArg_repr___closed__0 = (const lean_object*)&l_Lean_IR_instReprArg_repr___closed__0_value;
static const lean_ctor_object l_Lean_IR_instReprArg_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprArg_repr___closed__0_value)}};
static const lean_object* l_Lean_IR_instReprArg_repr___closed__1 = (const lean_object*)&l_Lean_IR_instReprArg_repr___closed__1_value;
static const lean_string_object l_Lean_IR_instReprArg_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.IR.Arg.var"};
static const lean_object* l_Lean_IR_instReprArg_repr___closed__2 = (const lean_object*)&l_Lean_IR_instReprArg_repr___closed__2_value;
static const lean_ctor_object l_Lean_IR_instReprArg_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprArg_repr___closed__2_value)}};
static const lean_object* l_Lean_IR_instReprArg_repr___closed__3 = (const lean_object*)&l_Lean_IR_instReprArg_repr___closed__3_value;
static const lean_ctor_object l_Lean_IR_instReprArg_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_IR_instReprArg_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_IR_instReprArg_repr___closed__4 = (const lean_object*)&l_Lean_IR_instReprArg_repr___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_IR_instReprArg_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instReprArg_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instReprArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instReprArg_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instReprArg___closed__0 = (const lean_object*)&l_Lean_IR_instReprArg___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instReprArg = (const lean_object*)&l_Lean_IR_instReprArg___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_IR_Arg_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Arg_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_num_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_num_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_str_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_str_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_IR_instInhabitedLitVal_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_IR_instInhabitedLitVal_default___closed__0 = (const lean_object*)&l_Lean_IR_instInhabitedLitVal_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instInhabitedLitVal_default = (const lean_object*)&l_Lean_IR_instInhabitedLitVal_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instInhabitedLitVal = (const lean_object*)&l_Lean_IR_instInhabitedLitVal_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_IR_instBEqLitVal_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instBEqLitVal_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instBEqLitVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instBEqLitVal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instBEqLitVal___closed__0 = (const lean_object*)&l_Lean_IR_instBEqLitVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instBEqLitVal = (const lean_object*)&l_Lean_IR_instBEqLitVal___closed__0_value;
static lean_once_cell_t l_Lean_IR_instInhabitedCtorInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instInhabitedCtorInfo_default___closed__0;
static lean_once_cell_t l_Lean_IR_instInhabitedCtorInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instInhabitedCtorInfo_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedCtorInfo_default;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedCtorInfo;
LEAN_EXPORT uint8_t l_Lean_IR_instBEqCtorInfo_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instBEqCtorInfo_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instBEqCtorInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instBEqCtorInfo_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instBEqCtorInfo___closed__0 = (const lean_object*)&l_Lean_IR_instBEqCtorInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instBEqCtorInfo = (const lean_object*)&l_Lean_IR_instBEqCtorInfo___closed__0_value;
static const lean_string_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__2_value),((lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_IR_instReprCtorInfo_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__4;
static const lean_string_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cidx"};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__6 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__6_value;
static const lean_string_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__7 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__7_value)}};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__8_value;
static const lean_string_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "usize"};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__9_value)}};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__10 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__10_value;
static lean_once_cell_t l_Lean_IR_instReprCtorInfo_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__11;
static const lean_string_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ssize"};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__12 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_IR_instReprCtorInfo_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg___closed__13 = (const lean_object*)&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instReprCtorInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instReprCtorInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instReprCtorInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instReprCtorInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instReprCtorInfo___closed__0 = (const lean_object*)&l_Lean_IR_instReprCtorInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instReprCtorInfo = (const lean_object*)&l_Lean_IR_instReprCtorInfo___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_IR_CtorInfo_isRef(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CtorInfo_isRef___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_CtorInfo_isScalar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CtorInfo_isScalar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CtorInfo_type(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CtorInfo_type___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_reset_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_reset_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_reuse_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_reuse_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_proj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_proj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_uproj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_uproj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_sproj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_sproj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_fap_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_fap_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_pap_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_pap_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ap_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ap_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_box_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_box_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_unbox_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_unbox_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_lit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_lit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_isShared_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_isShared_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_IR_instInhabitedExpr_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_IR_instInhabitedExpr_default___closed__0 = (const lean_object*)&l_Lean_IR_instInhabitedExpr_default___closed__0_value;
static lean_once_cell_t l_Lean_IR_instInhabitedExpr_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instInhabitedExpr_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedExpr_default;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedExpr;
static const lean_ctor_object l_Lean_IR_instInhabitedParam_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_IR_instInhabitedParam_default___closed__0 = (const lean_object*)&l_Lean_IR_instInhabitedParam_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instInhabitedParam_default = (const lean_object*)&l_Lean_IR_instInhabitedParam_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instInhabitedParam = (const lean_object*)&l_Lean_IR_instInhabitedParam_default___closed__0_value;
static const lean_string_object l_Lean_IR_instReprParam_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_IR_instReprParam_repr___redArg___closed__0 = (const lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_IR_instReprParam_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_IR_instReprParam_repr___redArg___closed__1 = (const lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_IR_instReprParam_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_IR_instReprParam_repr___redArg___closed__2 = (const lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_IR_instReprParam_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__2_value),((lean_object*)&l_Lean_IR_instReprVarId_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_IR_instReprParam_repr___redArg___closed__3 = (const lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_IR_instReprParam_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instReprParam_repr___redArg___closed__4;
static const lean_string_object l_Lean_IR_instReprParam_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "borrow"};
static const lean_object* l_Lean_IR_instReprParam_repr___redArg___closed__5 = (const lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_IR_instReprParam_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_IR_instReprParam_repr___redArg___closed__6 = (const lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_IR_instReprParam_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instReprParam_repr___redArg___closed__7;
static const lean_string_object l_Lean_IR_instReprParam_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ty"};
static const lean_object* l_Lean_IR_instReprParam_repr___redArg___closed__8 = (const lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_IR_instReprParam_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_IR_instReprParam_repr___redArg___closed__9 = (const lean_object*)&l_Lean_IR_instReprParam_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_IR_instReprParam_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instReprParam_repr___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lean_IR_instReprParam_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instReprParam_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_instReprParam_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instReprParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instReprParam_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instReprParam___closed__0 = (const lean_object*)&l_Lean_IR_instReprParam___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instReprParam = (const lean_object*)&l_Lean_IR_instReprParam___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_default_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_default_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_vdecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_vdecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_jdecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_jdecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_set_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_set_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_setTag_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_setTag_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_uset_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_uset_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_sset_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_sset_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_inc_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_inc_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_dec_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_dec_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_del_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_del_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_case_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_case_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ret_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ret_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_jmp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_jmp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_unreachable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_unreachable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_IR_instInhabitedFnBody_default__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_IR_instInhabitedFnBody_default__1___closed__0 = (const lean_object*)&l_Lean_IR_instInhabitedFnBody_default__1___closed__0_value;
static lean_once_cell_t l_Lean_IR_instInhabitedFnBody_default__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instInhabitedFnBody_default__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedFnBody_default__1;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedFnBody;
static lean_once_cell_t l_Lean_IR_instInhabitedAlt_default__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instInhabitedAlt_default__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedAlt_default__1;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedAlt;
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_nil;
LEAN_EXPORT uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_isTerminal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_body(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_body___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_setBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_resetBody(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_split(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_body(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_body___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_setBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_modifyBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_modifyBodyM___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_modifyBodyM___redArg___lam__1(lean_object*);
static const lean_closure_object l_Lean_IR_Alt_modifyBodyM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_Alt_modifyBodyM___redArg___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_Alt_modifyBodyM___redArg___closed__0 = (const lean_object*)&l_Lean_IR_Alt_modifyBodyM___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_Alt_modifyBodyM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_modifyBodyM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_Alt_isDefault(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Alt_isDefault___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_flattenAux(lean_object*, lean_object*);
static const lean_array_object l_Lean_IR_FnBody_flatten___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_IR_FnBody_flatten___closed__0 = (const lean_object*)&l_Lean_IR_FnBody_flatten___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_flatten(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_reshapeAux_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_reshapeAux_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_reshapeAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Init.Data.Array.Basic"};
static const lean_object* l_Lean_IR_reshapeAux___closed__0 = (const lean_object*)&l_Lean_IR_reshapeAux___closed__0_value;
static const lean_string_object l_Lean_IR_reshapeAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Array.swapAt!"};
static const lean_object* l_Lean_IR_reshapeAux___closed__1 = (const lean_object*)&l_Lean_IR_reshapeAux___closed__1_value;
static const lean_string_object l_Lean_IR_reshapeAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "index "};
static const lean_object* l_Lean_IR_reshapeAux___closed__2 = (const lean_object*)&l_Lean_IR_reshapeAux___closed__2_value;
static const lean_string_object l_Lean_IR_reshapeAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " out of bounds"};
static const lean_object* l_Lean_IR_reshapeAux___closed__3 = (const lean_object*)&l_Lean_IR_reshapeAux___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_IR_reshapeAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_reshape(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPs___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_modifyJPs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_modifyJPs___closed__0 = (const lean_object*)&l_Lean_IR_modifyJPs___closed__0_value;
static const lean_closure_object l_Lean_IR_modifyJPs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_modifyJPs___closed__1 = (const lean_object*)&l_Lean_IR_modifyJPs___closed__1_value;
static const lean_closure_object l_Lean_IR_modifyJPs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_modifyJPs___closed__2 = (const lean_object*)&l_Lean_IR_modifyJPs___closed__2_value;
static const lean_closure_object l_Lean_IR_modifyJPs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_modifyJPs___closed__3 = (const lean_object*)&l_Lean_IR_modifyJPs___closed__3_value;
static const lean_closure_object l_Lean_IR_modifyJPs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_modifyJPs___closed__4 = (const lean_object*)&l_Lean_IR_modifyJPs___closed__4_value;
static const lean_closure_object l_Lean_IR_modifyJPs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_modifyJPs___closed__5 = (const lean_object*)&l_Lean_IR_modifyJPs___closed__5_value;
static const lean_closure_object l_Lean_IR_modifyJPs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_modifyJPs___closed__6 = (const lean_object*)&l_Lean_IR_modifyJPs___closed__6_value;
static const lean_ctor_object l_Lean_IR_modifyJPs___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_modifyJPs___closed__0_value),((lean_object*)&l_Lean_IR_modifyJPs___closed__1_value)}};
static const lean_object* l_Lean_IR_modifyJPs___closed__7 = (const lean_object*)&l_Lean_IR_modifyJPs___closed__7_value;
static const lean_ctor_object l_Lean_IR_modifyJPs___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_modifyJPs___closed__7_value),((lean_object*)&l_Lean_IR_modifyJPs___closed__2_value),((lean_object*)&l_Lean_IR_modifyJPs___closed__3_value),((lean_object*)&l_Lean_IR_modifyJPs___closed__4_value),((lean_object*)&l_Lean_IR_modifyJPs___closed__5_value)}};
static const lean_object* l_Lean_IR_modifyJPs___closed__8 = (const lean_object*)&l_Lean_IR_modifyJPs___closed__8_value;
static const lean_ctor_object l_Lean_IR_modifyJPs___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_modifyJPs___closed__8_value),((lean_object*)&l_Lean_IR_modifyJPs___closed__6_value)}};
static const lean_object* l_Lean_IR_modifyJPs___closed__9 = (const lean_object*)&l_Lean_IR_modifyJPs___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_fdecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_fdecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_extern_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_extern_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_IR_instInhabitedDecl_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_IR_instInhabitedDecl_default___closed__0 = (const lean_object*)&l_Lean_IR_instInhabitedDecl_default___closed__0_value;
static lean_once_cell_t l_Lean_IR_instInhabitedDecl_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_instInhabitedDecl_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedDecl_default;
LEAN_EXPORT lean_object* l_Lean_IR_instInhabitedDecl;
LEAN_EXPORT lean_object* l_Lean_IR_Decl_name(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_name___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_params(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_params___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_resultType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_resultType___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_Decl_isExtern(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_isExtern___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_getInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_getInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_Decl_updateBody_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_IR_Decl_updateBody_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Compiler.IR.Basic"};
static const lean_object* l_Lean_IR_Decl_updateBody_x21___closed__0 = (const lean_object*)&l_Lean_IR_Decl_updateBody_x21___closed__0_value;
static const lean_string_object l_Lean_IR_Decl_updateBody_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.IR.Decl.updateBody!"};
static const lean_object* l_Lean_IR_Decl_updateBody_x21___closed__1 = (const lean_object*)&l_Lean_IR_Decl_updateBody_x21___closed__1_value;
static const lean_string_object l_Lean_IR_Decl_updateBody_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected definition"};
static const lean_object* l_Lean_IR_Decl_updateBody_x21___closed__2 = (const lean_object*)&l_Lean_IR_Decl_updateBody_x21___closed__2_value;
static lean_once_cell_t l_Lean_IR_Decl_updateBody_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_Decl_updateBody_x21___closed__3;
LEAN_EXPORT lean_object* l_Lean_IR_Decl_updateBody_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_mkDummyExternDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_mkIndexSet(lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_param_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_param_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_localVar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_localVar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_joinPoint_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_joinPoint_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_addLocal(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_addJP(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_addParam(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LocalContext_addParams_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LocalContext_addParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_addParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_addParams___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_LocalContext_isJP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_isJP___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getJPBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getJPBody___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getJPParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getJPParams___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_LocalContext_isParam(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_isParam___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_LocalContext_isLocalVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_isLocalVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_LocalContext_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_eraseJoinPointDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_eraseJoinPointDecl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getType___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_VarId_alphaEqv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_VarId_alphaEqv___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instAlphaEqvVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_VarId_alphaEqv___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instAlphaEqvVarId___closed__0 = (const lean_object*)&l_Lean_IR_instAlphaEqvVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instAlphaEqvVarId = (const lean_object*)&l_Lean_IR_instAlphaEqvVarId___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_IR_Arg_alphaEqv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Arg_alphaEqv___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instAlphaEqvArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_Arg_alphaEqv___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instAlphaEqvArg___closed__0 = (const lean_object*)&l_Lean_IR_instAlphaEqvArg___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instAlphaEqvArg = (const lean_object*)&l_Lean_IR_instAlphaEqvArg___closed__0_value;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_args_alphaEqv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_args_alphaEqv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instAlphaEqvArrayArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_args_alphaEqv___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instAlphaEqvArrayArg___closed__0 = (const lean_object*)&l_Lean_IR_instAlphaEqvArrayArg___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instAlphaEqvArrayArg = (const lean_object*)&l_Lean_IR_instAlphaEqvArrayArg___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_IR_Expr_alphaEqv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Expr_alphaEqv___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instAlphaEqvExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_Expr_alphaEqv___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instAlphaEqvExpr___closed__0 = (const lean_object*)&l_Lean_IR_instAlphaEqvExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instAlphaEqvExpr = (const lean_object*)&l_Lean_IR_instAlphaEqvExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_addVarRename(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addParamRename(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addParamsRename(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addParamsRename___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_FnBody_alphaEqv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_alphaEqv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_FnBody_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_instBEqFnBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_FnBody_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_instBEqFnBody___closed__0 = (const lean_object*)&l_Lean_IR_instBEqFnBody___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_instBEqFnBody = (const lean_object*)&l_Lean_IR_instBEqFnBody___closed__0_value;
static const lean_string_object l_Lean_IR_mkIf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_IR_mkIf___closed__0 = (const lean_object*)&l_Lean_IR_mkIf___closed__0_value;
static const lean_ctor_object l_Lean_IR_mkIf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_mkIf___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_IR_mkIf___closed__1 = (const lean_object*)&l_Lean_IR_mkIf___closed__1_value;
static const lean_string_object l_Lean_IR_mkIf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_IR_mkIf___closed__2 = (const lean_object*)&l_Lean_IR_mkIf___closed__2_value;
static const lean_ctor_object l_Lean_IR_mkIf___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_mkIf___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_IR_mkIf___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_IR_mkIf___closed__3_value_aux_0),((lean_object*)&l_Lean_IR_mkIf___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_IR_mkIf___closed__3 = (const lean_object*)&l_Lean_IR_mkIf___closed__3_value;
static const lean_ctor_object l_Lean_IR_mkIf___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_mkIf___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_IR_mkIf___closed__4 = (const lean_object*)&l_Lean_IR_mkIf___closed__4_value;
static const lean_string_object l_Lean_IR_mkIf___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_IR_mkIf___closed__5 = (const lean_object*)&l_Lean_IR_mkIf___closed__5_value;
static const lean_ctor_object l_Lean_IR_mkIf___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_mkIf___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_IR_mkIf___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_IR_mkIf___closed__6_value_aux_0),((lean_object*)&l_Lean_IR_mkIf___closed__5_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_IR_mkIf___closed__6 = (const lean_object*)&l_Lean_IR_mkIf___closed__6_value;
static const lean_ctor_object l_Lean_IR_mkIf___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_mkIf___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_IR_mkIf___closed__7 = (const lean_object*)&l_Lean_IR_mkIf___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_IR_mkIf(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_getUnboxOpName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "lean_unbox_usize"};
static const lean_object* l_Lean_IR_getUnboxOpName___closed__0 = (const lean_object*)&l_Lean_IR_getUnboxOpName___closed__0_value;
static const lean_string_object l_Lean_IR_getUnboxOpName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "lean_unbox_uint32"};
static const lean_object* l_Lean_IR_getUnboxOpName___closed__1 = (const lean_object*)&l_Lean_IR_getUnboxOpName___closed__1_value;
static const lean_string_object l_Lean_IR_getUnboxOpName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "lean_unbox_uint64"};
static const lean_object* l_Lean_IR_getUnboxOpName___closed__2 = (const lean_object*)&l_Lean_IR_getUnboxOpName___closed__2_value;
static const lean_string_object l_Lean_IR_getUnboxOpName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "lean_unbox_float"};
static const lean_object* l_Lean_IR_getUnboxOpName___closed__3 = (const lean_object*)&l_Lean_IR_getUnboxOpName___closed__3_value;
static const lean_string_object l_Lean_IR_getUnboxOpName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "lean_unbox_float32"};
static const lean_object* l_Lean_IR_getUnboxOpName___closed__4 = (const lean_object*)&l_Lean_IR_getUnboxOpName___closed__4_value;
static const lean_string_object l_Lean_IR_getUnboxOpName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "lean_unbox"};
static const lean_object* l_Lean_IR_getUnboxOpName___closed__5 = (const lean_object*)&l_Lean_IR_getUnboxOpName___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_IR_getUnboxOpName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_getUnboxOpName___boxed(lean_object*);
static lean_object* _init_l_Lean_IR_instInhabitedVarId_default(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_unsigned_to_nat(0u);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedVarId(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_instBEqVarId_beq(lean_object* v_x_3_, lean_object* v_x_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_nat_dec_eq(v_x_3_, v_x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instBEqVarId_beq___boxed(lean_object* v_x_6_, lean_object* v_x_7_){
_start:
{
uint8_t v_res_8_; lean_object* v_r_9_; 
v_res_8_ = l_Lean_IR_instBEqVarId_beq(v_x_6_, v_x_7_);
lean_dec(v_x_7_);
lean_dec(v_x_6_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
LEAN_EXPORT uint64_t l_Lean_IR_instHashableVarId_hash(lean_object* v_x_12_){
_start:
{
uint64_t v___x_13_; uint64_t v___x_14_; uint64_t v___x_15_; 
v___x_13_ = 0ULL;
v___x_14_ = lean_uint64_of_nat(v_x_12_);
v___x_15_ = lean_uint64_mix_hash(v___x_13_, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instHashableVarId_hash___boxed(lean_object* v_x_16_){
_start:
{
uint64_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_Lean_IR_instHashableVarId_hash(v_x_16_);
lean_dec(v_x_16_);
v_r_18_ = lean_box_uint64(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_IR_instReprVarId_repr_spec__0(lean_object* v_a_21_){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lean_nat_to_int(v_a_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_IR_instReprVarId_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(7u);
v___x_37_ = lean_nat_to_int(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_IR_instReprVarId_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__0));
v___x_40_ = lean_string_length(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_IR_instReprVarId_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_obj_once(&l_Lean_IR_instReprVarId_repr___redArg___closed__9, &l_Lean_IR_instReprVarId_repr___redArg___closed__9_once, _init_l_Lean_IR_instReprVarId_repr___redArg___closed__9);
v___x_42_ = lean_nat_to_int(v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprVarId_repr___redArg(lean_object* v_x_47_){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; uint8_t v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_48_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__6));
v___x_49_ = lean_obj_once(&l_Lean_IR_instReprVarId_repr___redArg___closed__7, &l_Lean_IR_instReprVarId_repr___redArg___closed__7_once, _init_l_Lean_IR_instReprVarId_repr___redArg___closed__7);
v___x_50_ = l_Nat_reprFast(v_x_47_);
v___x_51_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
v___x_52_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_49_);
lean_ctor_set(v___x_52_, 1, v___x_51_);
v___x_53_ = 0;
v___x_54_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_54_, 0, v___x_52_);
lean_ctor_set_uint8(v___x_54_, sizeof(void*)*1, v___x_53_);
v___x_55_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_48_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
v___x_56_ = lean_obj_once(&l_Lean_IR_instReprVarId_repr___redArg___closed__10, &l_Lean_IR_instReprVarId_repr___redArg___closed__10_once, _init_l_Lean_IR_instReprVarId_repr___redArg___closed__10);
v___x_57_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__11));
v___x_58_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
lean_ctor_set(v___x_58_, 1, v___x_55_);
v___x_59_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__12));
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_58_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_56_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
v___x_62_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set_uint8(v___x_62_, sizeof(void*)*1, v___x_53_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprVarId_repr(lean_object* v_x_63_, lean_object* v_prec_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_IR_instReprVarId_repr___redArg(v_x_63_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprVarId_repr___boxed(lean_object* v_x_66_, lean_object* v_prec_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lean_IR_instReprVarId_repr(v_x_66_, v_prec_67_);
lean_dec(v_prec_67_);
return v_res_68_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedJoinPointId_default(void){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_unsigned_to_nat(0u);
return v___x_71_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedJoinPointId(void){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_unsigned_to_nat(0u);
return v___x_72_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_instBEqJoinPointId_beq(lean_object* v_x_73_, lean_object* v_x_74_){
_start:
{
uint8_t v___x_75_; 
v___x_75_ = lean_nat_dec_eq(v_x_73_, v_x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instBEqJoinPointId_beq___boxed(lean_object* v_x_76_, lean_object* v_x_77_){
_start:
{
uint8_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = l_Lean_IR_instBEqJoinPointId_beq(v_x_76_, v_x_77_);
lean_dec(v_x_77_);
lean_dec(v_x_76_);
v_r_79_ = lean_box(v_res_78_);
return v_r_79_;
}
}
LEAN_EXPORT uint64_t l_Lean_IR_instHashableJoinPointId_hash(lean_object* v_x_82_){
_start:
{
uint64_t v___x_83_; uint64_t v___x_84_; uint64_t v___x_85_; 
v___x_83_ = 0ULL;
v___x_84_ = lean_uint64_of_nat(v_x_82_);
v___x_85_ = lean_uint64_mix_hash(v___x_83_, v___x_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instHashableJoinPointId_hash___boxed(lean_object* v_x_86_){
_start:
{
uint64_t v_res_87_; lean_object* v_r_88_; 
v_res_87_ = l_Lean_IR_instHashableJoinPointId_hash(v_x_86_);
lean_dec(v_x_86_);
v_r_88_ = lean_box_uint64(v_res_87_);
return v_r_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprJoinPointId_repr___redArg(lean_object* v_x_91_){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_92_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__6));
v___x_93_ = lean_obj_once(&l_Lean_IR_instReprVarId_repr___redArg___closed__7, &l_Lean_IR_instReprVarId_repr___redArg___closed__7_once, _init_l_Lean_IR_instReprVarId_repr___redArg___closed__7);
v___x_94_ = l_Nat_reprFast(v_x_91_);
v___x_95_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
v___x_96_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_93_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
v___x_97_ = 0;
v___x_98_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_98_, 0, v___x_96_);
lean_ctor_set_uint8(v___x_98_, sizeof(void*)*1, v___x_97_);
v___x_99_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_92_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = lean_obj_once(&l_Lean_IR_instReprVarId_repr___redArg___closed__10, &l_Lean_IR_instReprVarId_repr___redArg___closed__10_once, _init_l_Lean_IR_instReprVarId_repr___redArg___closed__10);
v___x_101_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__11));
v___x_102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v___x_99_);
v___x_103_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__12));
v___x_104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_102_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_100_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
v___x_106_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set_uint8(v___x_106_, sizeof(void*)*1, v___x_97_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprJoinPointId_repr(lean_object* v_x_107_, lean_object* v_prec_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l_Lean_IR_instReprJoinPointId_repr___redArg(v_x_107_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprJoinPointId_repr___boxed(lean_object* v_x_110_, lean_object* v_prec_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lean_IR_instReprJoinPointId_repr(v_x_110_, v_prec_111_);
lean_dec(v_prec_111_);
return v_res_112_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_Index_lt(lean_object* v_a_115_, lean_object* v_b_116_){
_start:
{
uint8_t v___x_117_; 
v___x_117_ = lean_nat_dec_lt(v_a_115_, v_b_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Index_lt___boxed(lean_object* v_a_118_, lean_object* v_b_119_){
_start:
{
uint8_t v_res_120_; lean_object* v_r_121_; 
v_res_120_ = l_Lean_IR_Index_lt(v_a_118_, v_b_119_);
lean_dec(v_b_119_);
lean_dec(v_a_118_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToStringVarId___lam__0(lean_object* v_a_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = ((lean_object*)(l_Lean_IR_instToStringVarId___lam__0___closed__0));
v___x_125_ = l_Nat_reprFast(v_a_123_);
v___x_126_ = lean_string_append(v___x_124_, v___x_125_);
lean_dec_ref(v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instToStringJoinPointId___lam__0(lean_object* v_a_130_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = ((lean_object*)(l_Lean_IR_instToStringJoinPointId___lam__0___closed__0));
v___x_132_ = l_Nat_reprFast(v_a_130_);
v___x_133_ = lean_string_append(v___x_131_, v___x_132_);
lean_dec_ref(v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_ctorIdx(lean_object* v_x_136_){
_start:
{
switch(lean_obj_tag(v_x_136_))
{
case 0:
{
lean_object* v___x_137_; 
v___x_137_ = lean_unsigned_to_nat(0u);
return v___x_137_;
}
case 1:
{
lean_object* v___x_138_; 
v___x_138_ = lean_unsigned_to_nat(1u);
return v___x_138_;
}
case 2:
{
lean_object* v___x_139_; 
v___x_139_ = lean_unsigned_to_nat(2u);
return v___x_139_;
}
case 3:
{
lean_object* v___x_140_; 
v___x_140_ = lean_unsigned_to_nat(3u);
return v___x_140_;
}
case 4:
{
lean_object* v___x_141_; 
v___x_141_ = lean_unsigned_to_nat(4u);
return v___x_141_;
}
case 5:
{
lean_object* v___x_142_; 
v___x_142_ = lean_unsigned_to_nat(5u);
return v___x_142_;
}
case 6:
{
lean_object* v___x_143_; 
v___x_143_ = lean_unsigned_to_nat(6u);
return v___x_143_;
}
case 7:
{
lean_object* v___x_144_; 
v___x_144_ = lean_unsigned_to_nat(7u);
return v___x_144_;
}
case 8:
{
lean_object* v___x_145_; 
v___x_145_ = lean_unsigned_to_nat(8u);
return v___x_145_;
}
case 9:
{
lean_object* v___x_146_; 
v___x_146_ = lean_unsigned_to_nat(9u);
return v___x_146_;
}
case 10:
{
lean_object* v___x_147_; 
v___x_147_ = lean_unsigned_to_nat(10u);
return v___x_147_;
}
case 11:
{
lean_object* v___x_148_; 
v___x_148_ = lean_unsigned_to_nat(11u);
return v___x_148_;
}
case 12:
{
lean_object* v___x_149_; 
v___x_149_ = lean_unsigned_to_nat(12u);
return v___x_149_;
}
default: 
{
lean_object* v___x_150_; 
v___x_150_ = lean_unsigned_to_nat(13u);
return v___x_150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_ctorIdx___boxed(lean_object* v_x_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lean_IR_IRType_ctorIdx(v_x_151_);
lean_dec(v_x_151_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_ctorElim___redArg(lean_object* v_t_153_, lean_object* v_k_154_){
_start:
{
switch(lean_obj_tag(v_t_153_))
{
case 10:
{
lean_object* v_leanTypeName_155_; lean_object* v_types_156_; lean_object* v___x_157_; 
v_leanTypeName_155_ = lean_ctor_get(v_t_153_, 0);
lean_inc(v_leanTypeName_155_);
v_types_156_ = lean_ctor_get(v_t_153_, 1);
lean_inc_ref(v_types_156_);
lean_dec_ref_known(v_t_153_, 2);
v___x_157_ = lean_apply_2(v_k_154_, v_leanTypeName_155_, v_types_156_);
return v___x_157_;
}
case 11:
{
lean_object* v_leanTypeName_158_; lean_object* v_types_159_; lean_object* v___x_160_; 
v_leanTypeName_158_ = lean_ctor_get(v_t_153_, 0);
lean_inc(v_leanTypeName_158_);
v_types_159_ = lean_ctor_get(v_t_153_, 1);
lean_inc_ref(v_types_159_);
lean_dec_ref_known(v_t_153_, 2);
v___x_160_ = lean_apply_2(v_k_154_, v_leanTypeName_158_, v_types_159_);
return v___x_160_;
}
default: 
{
lean_dec(v_t_153_);
return v_k_154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_ctorElim(lean_object* v_motive__1_161_, lean_object* v_ctorIdx_162_, lean_object* v_t_163_, lean_object* v_h_164_, lean_object* v_k_165_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_163_, v_k_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_ctorElim___boxed(lean_object* v_motive__1_167_, lean_object* v_ctorIdx_168_, lean_object* v_t_169_, lean_object* v_h_170_, lean_object* v_k_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_IR_IRType_ctorElim(v_motive__1_167_, v_ctorIdx_168_, v_t_169_, v_h_170_, v_k_171_);
lean_dec(v_ctorIdx_168_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_float_elim___redArg(lean_object* v_t_173_, lean_object* v_float_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_173_, v_float_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_float_elim(lean_object* v_motive__1_176_, lean_object* v_t_177_, lean_object* v_h_178_, lean_object* v_float_179_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_177_, v_float_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint8_elim___redArg(lean_object* v_t_181_, lean_object* v_uint8_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_181_, v_uint8_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint8_elim(lean_object* v_motive__1_184_, lean_object* v_t_185_, lean_object* v_h_186_, lean_object* v_uint8_187_){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_185_, v_uint8_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint16_elim___redArg(lean_object* v_t_189_, lean_object* v_uint16_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_189_, v_uint16_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint16_elim(lean_object* v_motive__1_192_, lean_object* v_t_193_, lean_object* v_h_194_, lean_object* v_uint16_195_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_193_, v_uint16_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint32_elim___redArg(lean_object* v_t_197_, lean_object* v_uint32_198_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_197_, v_uint32_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint32_elim(lean_object* v_motive__1_200_, lean_object* v_t_201_, lean_object* v_h_202_, lean_object* v_uint32_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_201_, v_uint32_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint64_elim___redArg(lean_object* v_t_205_, lean_object* v_uint64_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_205_, v_uint64_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_uint64_elim(lean_object* v_motive__1_208_, lean_object* v_t_209_, lean_object* v_h_210_, lean_object* v_uint64_211_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_209_, v_uint64_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_usize_elim___redArg(lean_object* v_t_213_, lean_object* v_usize_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_213_, v_usize_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_usize_elim(lean_object* v_motive__1_216_, lean_object* v_t_217_, lean_object* v_h_218_, lean_object* v_usize_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_217_, v_usize_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_erased_elim___redArg(lean_object* v_t_221_, lean_object* v_erased_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_221_, v_erased_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_erased_elim(lean_object* v_motive__1_224_, lean_object* v_t_225_, lean_object* v_h_226_, lean_object* v_erased_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_225_, v_erased_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_object_elim___redArg(lean_object* v_t_229_, lean_object* v_object_230_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_229_, v_object_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_object_elim(lean_object* v_motive__1_232_, lean_object* v_t_233_, lean_object* v_h_234_, lean_object* v_object_235_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_233_, v_object_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_tobject_elim___redArg(lean_object* v_t_237_, lean_object* v_tobject_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_237_, v_tobject_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_tobject_elim(lean_object* v_motive__1_240_, lean_object* v_t_241_, lean_object* v_h_242_, lean_object* v_tobject_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_241_, v_tobject_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_float32_elim___redArg(lean_object* v_t_245_, lean_object* v_float32_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_245_, v_float32_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_float32_elim(lean_object* v_motive__1_248_, lean_object* v_t_249_, lean_object* v_h_250_, lean_object* v_float32_251_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_249_, v_float32_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_struct_elim___redArg(lean_object* v_t_253_, lean_object* v_struct_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_253_, v_struct_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_struct_elim(lean_object* v_motive__1_256_, lean_object* v_t_257_, lean_object* v_h_258_, lean_object* v_struct_259_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_257_, v_struct_259_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_union_elim___redArg(lean_object* v_t_261_, lean_object* v_union_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_261_, v_union_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_union_elim(lean_object* v_motive__1_264_, lean_object* v_t_265_, lean_object* v_h_266_, lean_object* v_union_267_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_265_, v_union_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_tagged_elim___redArg(lean_object* v_t_269_, lean_object* v_tagged_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_269_, v_tagged_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_tagged_elim(lean_object* v_motive__1_272_, lean_object* v_t_273_, lean_object* v_h_274_, lean_object* v_tagged_275_){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_273_, v_tagged_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_void_elim___redArg(lean_object* v_t_277_, lean_object* v_void_278_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_277_, v_void_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_void_elim(lean_object* v_motive__1_280_, lean_object* v_t_281_, lean_object* v_h_282_, lean_object* v_void_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Lean_IR_IRType_ctorElim___redArg(v_t_281_, v_void_283_);
return v___x_284_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedIRType_default(void){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lean_box(0);
return v___x_285_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedIRType(void){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = lean_box(0);
return v___x_286_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_IR_instBEqIRType_beq_spec__0(lean_object* v_x_287_, lean_object* v_x_288_){
_start:
{
if (lean_obj_tag(v_x_287_) == 0)
{
if (lean_obj_tag(v_x_288_) == 0)
{
uint8_t v___x_289_; 
v___x_289_ = 1;
return v___x_289_;
}
else
{
uint8_t v___x_290_; 
v___x_290_ = 0;
return v___x_290_;
}
}
else
{
if (lean_obj_tag(v_x_288_) == 0)
{
uint8_t v___x_291_; 
v___x_291_ = 0;
return v___x_291_;
}
else
{
lean_object* v_val_292_; lean_object* v_val_293_; uint8_t v___x_294_; 
v_val_292_ = lean_ctor_get(v_x_287_, 0);
v_val_293_ = lean_ctor_get(v_x_288_, 0);
v___x_294_ = lean_name_eq(v_val_292_, v_val_293_);
return v___x_294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_IR_instBEqIRType_beq_spec__0___boxed(lean_object* v_x_295_, lean_object* v_x_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = l_Option_instBEq_beq___at___00Lean_IR_instBEqIRType_beq_spec__0(v_x_295_, v_x_296_);
lean_dec(v_x_296_);
lean_dec(v_x_295_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_instBEqIRType_beq(lean_object* v_x_299_, lean_object* v_x_300_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; uint8_t v_decide_303_; 
v___x_301_ = l_Lean_IR_IRType_ctorIdx(v_x_299_);
v___x_302_ = l_Lean_IR_IRType_ctorIdx(v_x_300_);
v_decide_303_ = lean_nat_dec_eq(v___x_301_, v___x_302_);
lean_dec(v___x_302_);
lean_dec(v___x_301_);
if (v_decide_303_ == 0)
{
return v_decide_303_;
}
else
{
switch(lean_obj_tag(v_x_299_))
{
case 10:
{
lean_object* v_leanTypeName_304_; lean_object* v_types_305_; lean_object* v_leanTypeName_306_; lean_object* v_types_307_; uint8_t v___x_308_; 
v_leanTypeName_304_ = lean_ctor_get(v_x_299_, 0);
v_types_305_ = lean_ctor_get(v_x_299_, 1);
v_leanTypeName_306_ = lean_ctor_get(v_x_300_, 0);
v_types_307_ = lean_ctor_get(v_x_300_, 1);
v___x_308_ = l_Option_instBEq_beq___at___00Lean_IR_instBEqIRType_beq_spec__0(v_leanTypeName_304_, v_leanTypeName_306_);
if (v___x_308_ == 0)
{
return v___x_308_;
}
else
{
lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_309_ = lean_array_get_size(v_types_305_);
v___x_310_ = lean_array_get_size(v_types_307_);
v___x_311_ = lean_nat_dec_eq(v___x_309_, v___x_310_);
if (v___x_311_ == 0)
{
return v___x_311_;
}
else
{
uint8_t v___x_312_; 
v___x_312_ = l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1___redArg(v_types_305_, v_types_307_, v___x_309_);
return v___x_312_;
}
}
}
case 11:
{
lean_object* v_leanTypeName_313_; lean_object* v_types_314_; lean_object* v_leanTypeName_315_; lean_object* v_types_316_; uint8_t v___x_317_; 
v_leanTypeName_313_ = lean_ctor_get(v_x_299_, 0);
v_types_314_ = lean_ctor_get(v_x_299_, 1);
v_leanTypeName_315_ = lean_ctor_get(v_x_300_, 0);
v_types_316_ = lean_ctor_get(v_x_300_, 1);
v___x_317_ = lean_name_eq(v_leanTypeName_313_, v_leanTypeName_315_);
if (v___x_317_ == 0)
{
return v___x_317_;
}
else
{
lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_318_ = lean_array_get_size(v_types_314_);
v___x_319_ = lean_array_get_size(v_types_316_);
v___x_320_ = lean_nat_dec_eq(v___x_318_, v___x_319_);
if (v___x_320_ == 0)
{
return v___x_320_;
}
else
{
uint8_t v___x_321_; 
v___x_321_ = l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1___redArg(v_types_314_, v_types_316_, v___x_318_);
return v___x_321_;
}
}
}
default: 
{
return v_decide_303_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1___redArg(lean_object* v_xs_322_, lean_object* v_ys_323_, lean_object* v_x_324_){
_start:
{
lean_object* v_zero_325_; uint8_t v_isZero_326_; 
v_zero_325_ = lean_unsigned_to_nat(0u);
v_isZero_326_ = lean_nat_dec_eq(v_x_324_, v_zero_325_);
if (v_isZero_326_ == 1)
{
lean_dec(v_x_324_);
return v_isZero_326_;
}
else
{
lean_object* v_one_327_; lean_object* v_n_328_; lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v___x_331_; 
v_one_327_ = lean_unsigned_to_nat(1u);
v_n_328_ = lean_nat_sub(v_x_324_, v_one_327_);
lean_dec(v_x_324_);
v___x_329_ = lean_array_fget_borrowed(v_xs_322_, v_n_328_);
v___x_330_ = lean_array_fget_borrowed(v_ys_323_, v_n_328_);
v___x_331_ = l_Lean_IR_instBEqIRType_beq(v___x_329_, v___x_330_);
if (v___x_331_ == 0)
{
lean_dec(v_n_328_);
return v___x_331_;
}
else
{
v_x_324_ = v_n_328_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1___redArg___boxed(lean_object* v_xs_333_, lean_object* v_ys_334_, lean_object* v_x_335_){
_start:
{
uint8_t v_res_336_; lean_object* v_r_337_; 
v_res_336_ = l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1___redArg(v_xs_333_, v_ys_334_, v_x_335_);
lean_dec_ref(v_ys_334_);
lean_dec_ref(v_xs_333_);
v_r_337_ = lean_box(v_res_336_);
return v_r_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instBEqIRType_beq___boxed(lean_object* v_x_338_, lean_object* v_x_339_){
_start:
{
uint8_t v_res_340_; lean_object* v_r_341_; 
v_res_340_ = l_Lean_IR_instBEqIRType_beq(v_x_338_, v_x_339_);
lean_dec(v_x_339_);
lean_dec(v_x_338_);
v_r_341_ = lean_box(v_res_340_);
return v_r_341_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1(lean_object* v_xs_342_, lean_object* v_ys_343_, lean_object* v_hsz_344_, lean_object* v_x_345_, lean_object* v_x_346_){
_start:
{
uint8_t v___x_347_; 
v___x_347_ = l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1___redArg(v_xs_342_, v_ys_343_, v_x_345_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1___boxed(lean_object* v_xs_348_, lean_object* v_ys_349_, lean_object* v_hsz_350_, lean_object* v_x_351_, lean_object* v_x_352_){
_start:
{
uint8_t v_res_353_; lean_object* v_r_354_; 
v_res_353_ = l_Array_isEqvAux___at___00Lean_IR_instBEqIRType_beq_spec__1(v_xs_348_, v_ys_349_, v_hsz_350_, v_x_351_, v_x_352_);
lean_dec_ref(v_ys_349_);
lean_dec_ref(v_xs_348_);
v_r_354_ = lean_box(v_res_353_);
return v_r_354_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0(lean_object* v_x_363_, lean_object* v_x_364_){
_start:
{
if (lean_obj_tag(v_x_363_) == 0)
{
lean_object* v___x_365_; 
v___x_365_ = ((lean_object*)(l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__1));
return v___x_365_;
}
else
{
lean_object* v_val_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v_val_366_ = lean_ctor_get(v_x_363_, 0);
lean_inc(v_val_366_);
lean_dec_ref_known(v_x_363_, 1);
v___x_367_ = ((lean_object*)(l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___closed__3));
v___x_368_ = lean_unsigned_to_nat(1024u);
v___x_369_ = l_Lean_Name_reprPrec(v_val_366_, v___x_368_);
v___x_370_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_367_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
v___x_371_ = l_Repr_addAppParen(v___x_370_, v_x_364_);
return v___x_371_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0___boxed(lean_object* v_x_372_, lean_object* v_x_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0(v_x_372_, v_x_373_);
lean_dec(v_x_373_);
return v_res_374_;
}
}
static lean_object* _init_l_Lean_IR_instReprIRType_repr___closed__24(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = lean_unsigned_to_nat(2u);
v___x_412_ = lean_nat_to_int(v___x_411_);
return v___x_412_;
}
}
static lean_object* _init_l_Lean_IR_instReprIRType_repr___closed__25(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lean_unsigned_to_nat(1u);
v___x_414_ = lean_nat_to_int(v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1_spec__2_spec__3(lean_object* v_x_427_, lean_object* v_x_428_, lean_object* v_x_429_){
_start:
{
if (lean_obj_tag(v_x_429_) == 0)
{
lean_dec(v_x_427_);
return v_x_428_;
}
else
{
lean_object* v_head_430_; lean_object* v_tail_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_442_; 
v_head_430_ = lean_ctor_get(v_x_429_, 0);
v_tail_431_ = lean_ctor_get(v_x_429_, 1);
v_isSharedCheck_442_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_442_ == 0)
{
v___x_433_ = v_x_429_;
v_isShared_434_ = v_isSharedCheck_442_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_tail_431_);
lean_inc(v_head_430_);
lean_dec(v_x_429_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_442_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_436_; 
lean_inc(v_x_427_);
if (v_isShared_434_ == 0)
{
lean_ctor_set_tag(v___x_433_, 5);
lean_ctor_set(v___x_433_, 1, v_x_427_);
lean_ctor_set(v___x_433_, 0, v_x_428_);
v___x_436_ = v___x_433_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_x_428_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_x_427_);
v___x_436_ = v_reuseFailAlloc_441_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_437_ = lean_unsigned_to_nat(0u);
v___x_438_ = l_Lean_IR_instReprIRType_repr(v_head_430_, v___x_437_);
v___x_439_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_436_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v_x_428_ = v___x_439_;
v_x_429_ = v_tail_431_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1_spec__2(lean_object* v_x_443_, lean_object* v_x_444_, lean_object* v_x_445_){
_start:
{
if (lean_obj_tag(v_x_445_) == 0)
{
lean_dec(v_x_443_);
return v_x_444_;
}
else
{
lean_object* v_head_446_; lean_object* v_tail_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_458_; 
v_head_446_ = lean_ctor_get(v_x_445_, 0);
v_tail_447_ = lean_ctor_get(v_x_445_, 1);
v_isSharedCheck_458_ = !lean_is_exclusive(v_x_445_);
if (v_isSharedCheck_458_ == 0)
{
v___x_449_ = v_x_445_;
v_isShared_450_ = v_isSharedCheck_458_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_tail_447_);
lean_inc(v_head_446_);
lean_dec(v_x_445_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_458_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
lean_inc(v_x_443_);
if (v_isShared_450_ == 0)
{
lean_ctor_set_tag(v___x_449_, 5);
lean_ctor_set(v___x_449_, 1, v_x_443_);
lean_ctor_set(v___x_449_, 0, v_x_444_);
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_x_444_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_x_443_);
v___x_452_ = v_reuseFailAlloc_457_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = l_Lean_IR_instReprIRType_repr(v_head_446_, v___x_453_);
v___x_455_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_452_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
v___x_456_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1_spec__2_spec__3(v_x_443_, v___x_455_, v_tail_447_);
return v___x_456_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1(lean_object* v_x_459_, lean_object* v_x_460_){
_start:
{
if (lean_obj_tag(v_x_459_) == 0)
{
lean_object* v___x_461_; 
lean_dec(v_x_460_);
v___x_461_ = lean_box(0);
return v___x_461_;
}
else
{
lean_object* v_tail_462_; 
v_tail_462_ = lean_ctor_get(v_x_459_, 1);
if (lean_obj_tag(v_tail_462_) == 0)
{
lean_object* v_head_463_; lean_object* v___x_464_; 
lean_dec(v_x_460_);
v_head_463_ = lean_ctor_get(v_x_459_, 0);
lean_inc(v_head_463_);
lean_dec_ref_known(v_x_459_, 2);
v___x_464_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1___lam__0(v_head_463_);
return v___x_464_;
}
else
{
lean_object* v_head_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
lean_inc(v_tail_462_);
v_head_465_ = lean_ctor_get(v_x_459_, 0);
lean_inc(v_head_465_);
lean_dec_ref_known(v_x_459_, 2);
v___x_466_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1___lam__0(v_head_465_);
v___x_467_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1_spec__2(v_x_460_, v___x_466_, v_tail_462_);
return v___x_467_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__5(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = ((lean_object*)(l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__0));
v___x_470_ = lean_string_length(v___x_469_);
return v___x_470_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__6(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_obj_once(&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__5, &l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__5_once, _init_l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__5);
v___x_472_ = lean_nat_to_int(v___x_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1(lean_object* v_xs_481_){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_482_ = lean_array_get_size(v_xs_481_);
v___x_483_ = lean_unsigned_to_nat(0u);
v___x_484_ = lean_nat_dec_eq(v___x_482_, v___x_483_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_485_ = lean_array_to_list(v_xs_481_);
v___x_486_ = ((lean_object*)(l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__3));
v___x_487_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1(v___x_485_, v___x_486_);
v___x_488_ = lean_obj_once(&l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__6, &l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__6_once, _init_l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__6);
v___x_489_ = ((lean_object*)(l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__7));
v___x_490_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
lean_ctor_set(v___x_490_, 1, v___x_487_);
v___x_491_ = ((lean_object*)(l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__8));
v___x_492_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_490_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
v___x_493_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_488_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = l_Std_Format_fill(v___x_493_);
return v___x_494_;
}
else
{
lean_object* v___x_495_; 
lean_dec_ref(v_xs_481_);
v___x_495_ = ((lean_object*)(l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__10));
return v___x_495_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprIRType_repr(lean_object* v_x_502_, lean_object* v_prec_503_){
_start:
{
lean_object* v___y_505_; lean_object* v___y_512_; lean_object* v___y_519_; lean_object* v___y_526_; lean_object* v___y_533_; lean_object* v___y_540_; lean_object* v___y_547_; lean_object* v___y_554_; lean_object* v___y_561_; lean_object* v___y_568_; lean_object* v___y_575_; lean_object* v___y_582_; 
switch(lean_obj_tag(v_x_502_))
{
case 0:
{
lean_object* v___x_588_; uint8_t v___x_589_; 
v___x_588_ = lean_unsigned_to_nat(1024u);
v___x_589_ = lean_nat_dec_le(v___x_588_, v_prec_503_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; 
v___x_590_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_505_ = v___x_590_;
goto v___jp_504_;
}
else
{
lean_object* v___x_591_; 
v___x_591_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_505_ = v___x_591_;
goto v___jp_504_;
}
}
case 1:
{
lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_592_ = lean_unsigned_to_nat(1024u);
v___x_593_ = lean_nat_dec_le(v___x_592_, v_prec_503_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; 
v___x_594_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_512_ = v___x_594_;
goto v___jp_511_;
}
else
{
lean_object* v___x_595_; 
v___x_595_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_512_ = v___x_595_;
goto v___jp_511_;
}
}
case 2:
{
lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_596_ = lean_unsigned_to_nat(1024u);
v___x_597_ = lean_nat_dec_le(v___x_596_, v_prec_503_);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; 
v___x_598_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_519_ = v___x_598_;
goto v___jp_518_;
}
else
{
lean_object* v___x_599_; 
v___x_599_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_519_ = v___x_599_;
goto v___jp_518_;
}
}
case 3:
{
lean_object* v___x_600_; uint8_t v___x_601_; 
v___x_600_ = lean_unsigned_to_nat(1024u);
v___x_601_ = lean_nat_dec_le(v___x_600_, v_prec_503_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; 
v___x_602_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_526_ = v___x_602_;
goto v___jp_525_;
}
else
{
lean_object* v___x_603_; 
v___x_603_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_526_ = v___x_603_;
goto v___jp_525_;
}
}
case 4:
{
lean_object* v___x_604_; uint8_t v___x_605_; 
v___x_604_ = lean_unsigned_to_nat(1024u);
v___x_605_ = lean_nat_dec_le(v___x_604_, v_prec_503_);
if (v___x_605_ == 0)
{
lean_object* v___x_606_; 
v___x_606_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_533_ = v___x_606_;
goto v___jp_532_;
}
else
{
lean_object* v___x_607_; 
v___x_607_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_533_ = v___x_607_;
goto v___jp_532_;
}
}
case 5:
{
lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_608_ = lean_unsigned_to_nat(1024u);
v___x_609_ = lean_nat_dec_le(v___x_608_, v_prec_503_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; 
v___x_610_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_540_ = v___x_610_;
goto v___jp_539_;
}
else
{
lean_object* v___x_611_; 
v___x_611_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_540_ = v___x_611_;
goto v___jp_539_;
}
}
case 6:
{
lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_612_ = lean_unsigned_to_nat(1024u);
v___x_613_ = lean_nat_dec_le(v___x_612_, v_prec_503_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; 
v___x_614_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_547_ = v___x_614_;
goto v___jp_546_;
}
else
{
lean_object* v___x_615_; 
v___x_615_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_547_ = v___x_615_;
goto v___jp_546_;
}
}
case 7:
{
lean_object* v___x_616_; uint8_t v___x_617_; 
v___x_616_ = lean_unsigned_to_nat(1024u);
v___x_617_ = lean_nat_dec_le(v___x_616_, v_prec_503_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; 
v___x_618_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_554_ = v___x_618_;
goto v___jp_553_;
}
else
{
lean_object* v___x_619_; 
v___x_619_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_554_ = v___x_619_;
goto v___jp_553_;
}
}
case 8:
{
lean_object* v___x_620_; uint8_t v___x_621_; 
v___x_620_ = lean_unsigned_to_nat(1024u);
v___x_621_ = lean_nat_dec_le(v___x_620_, v_prec_503_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; 
v___x_622_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_561_ = v___x_622_;
goto v___jp_560_;
}
else
{
lean_object* v___x_623_; 
v___x_623_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_561_ = v___x_623_;
goto v___jp_560_;
}
}
case 9:
{
lean_object* v___x_624_; uint8_t v___x_625_; 
v___x_624_ = lean_unsigned_to_nat(1024u);
v___x_625_ = lean_nat_dec_le(v___x_624_, v_prec_503_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; 
v___x_626_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_568_ = v___x_626_;
goto v___jp_567_;
}
else
{
lean_object* v___x_627_; 
v___x_627_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_568_ = v___x_627_;
goto v___jp_567_;
}
}
case 10:
{
lean_object* v_leanTypeName_628_; lean_object* v_types_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_653_; 
v_leanTypeName_628_ = lean_ctor_get(v_x_502_, 0);
v_types_629_ = lean_ctor_get(v_x_502_, 1);
v_isSharedCheck_653_ = !lean_is_exclusive(v_x_502_);
if (v_isSharedCheck_653_ == 0)
{
v___x_631_ = v_x_502_;
v_isShared_632_ = v_isSharedCheck_653_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_types_629_);
lean_inc(v_leanTypeName_628_);
lean_dec(v_x_502_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_653_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___y_634_; lean_object* v___x_649_; uint8_t v___x_650_; 
v___x_649_ = lean_unsigned_to_nat(1024u);
v___x_650_ = lean_nat_dec_le(v___x_649_, v_prec_503_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; 
v___x_651_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_634_ = v___x_651_;
goto v___jp_633_;
}
else
{
lean_object* v___x_652_; 
v___x_652_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_634_ = v___x_652_;
goto v___jp_633_;
}
v___jp_633_:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_640_; 
v___x_635_ = lean_box(1);
v___x_636_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__28));
v___x_637_ = lean_unsigned_to_nat(1024u);
v___x_638_ = l_Option_repr___at___00Lean_IR_instReprIRType_repr_spec__0(v_leanTypeName_628_, v___x_637_);
if (v_isShared_632_ == 0)
{
lean_ctor_set_tag(v___x_631_, 5);
lean_ctor_set(v___x_631_, 1, v___x_638_);
lean_ctor_set(v___x_631_, 0, v___x_636_);
v___x_640_ = v___x_631_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_636_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v___x_638_);
v___x_640_ = v_reuseFailAlloc_648_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; uint8_t v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_641_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
lean_ctor_set(v___x_641_, 1, v___x_635_);
v___x_642_ = l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1(v_types_629_);
v___x_643_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_641_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
lean_inc(v___y_634_);
v___x_644_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_644_, 0, v___y_634_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = 0;
v___x_646_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_646_, 0, v___x_644_);
lean_ctor_set_uint8(v___x_646_, sizeof(void*)*1, v___x_645_);
v___x_647_ = l_Repr_addAppParen(v___x_646_, v_prec_503_);
return v___x_647_;
}
}
}
}
case 11:
{
lean_object* v_leanTypeName_654_; lean_object* v_types_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_679_; 
v_leanTypeName_654_ = lean_ctor_get(v_x_502_, 0);
v_types_655_ = lean_ctor_get(v_x_502_, 1);
v_isSharedCheck_679_ = !lean_is_exclusive(v_x_502_);
if (v_isSharedCheck_679_ == 0)
{
v___x_657_ = v_x_502_;
v_isShared_658_ = v_isSharedCheck_679_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_types_655_);
lean_inc(v_leanTypeName_654_);
lean_dec(v_x_502_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_679_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___y_660_; lean_object* v___x_675_; uint8_t v___x_676_; 
v___x_675_ = lean_unsigned_to_nat(1024u);
v___x_676_ = lean_nat_dec_le(v___x_675_, v_prec_503_);
if (v___x_676_ == 0)
{
lean_object* v___x_677_; 
v___x_677_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_660_ = v___x_677_;
goto v___jp_659_;
}
else
{
lean_object* v___x_678_; 
v___x_678_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_660_ = v___x_678_;
goto v___jp_659_;
}
v___jp_659_:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_666_; 
v___x_661_ = lean_box(1);
v___x_662_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__31));
v___x_663_ = lean_unsigned_to_nat(1024u);
v___x_664_ = l_Lean_Name_reprPrec(v_leanTypeName_654_, v___x_663_);
if (v_isShared_658_ == 0)
{
lean_ctor_set_tag(v___x_657_, 5);
lean_ctor_set(v___x_657_, 1, v___x_664_);
lean_ctor_set(v___x_657_, 0, v___x_662_);
v___x_666_ = v___x_657_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_662_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v___x_664_);
v___x_666_ = v_reuseFailAlloc_674_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_667_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
lean_ctor_set(v___x_667_, 1, v___x_661_);
v___x_668_ = l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1(v_types_655_);
v___x_669_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
lean_inc(v___y_660_);
v___x_670_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_670_, 0, v___y_660_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v___x_671_ = 0;
v___x_672_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_672_, 0, v___x_670_);
lean_ctor_set_uint8(v___x_672_, sizeof(void*)*1, v___x_671_);
v___x_673_ = l_Repr_addAppParen(v___x_672_, v_prec_503_);
return v___x_673_;
}
}
}
}
case 12:
{
lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = lean_unsigned_to_nat(1024u);
v___x_681_ = lean_nat_dec_le(v___x_680_, v_prec_503_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; 
v___x_682_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_575_ = v___x_682_;
goto v___jp_574_;
}
else
{
lean_object* v___x_683_; 
v___x_683_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_575_ = v___x_683_;
goto v___jp_574_;
}
}
default: 
{
lean_object* v___x_684_; uint8_t v___x_685_; 
v___x_684_ = lean_unsigned_to_nat(1024u);
v___x_685_ = lean_nat_dec_le(v___x_684_, v_prec_503_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; 
v___x_686_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_582_ = v___x_686_;
goto v___jp_581_;
}
else
{
lean_object* v___x_687_; 
v___x_687_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_582_ = v___x_687_;
goto v___jp_581_;
}
}
}
v___jp_504_:
{
lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_506_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__1));
lean_inc(v___y_505_);
v___x_507_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_507_, 0, v___y_505_);
lean_ctor_set(v___x_507_, 1, v___x_506_);
v___x_508_ = 0;
v___x_509_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_509_, 0, v___x_507_);
lean_ctor_set_uint8(v___x_509_, sizeof(void*)*1, v___x_508_);
v___x_510_ = l_Repr_addAppParen(v___x_509_, v_prec_503_);
return v___x_510_;
}
v___jp_511_:
{
lean_object* v___x_513_; lean_object* v___x_514_; uint8_t v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_513_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__3));
lean_inc(v___y_512_);
v___x_514_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_514_, 0, v___y_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = 0;
v___x_516_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_516_, 0, v___x_514_);
lean_ctor_set_uint8(v___x_516_, sizeof(void*)*1, v___x_515_);
v___x_517_ = l_Repr_addAppParen(v___x_516_, v_prec_503_);
return v___x_517_;
}
v___jp_518_:
{
lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_520_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__5));
lean_inc(v___y_519_);
v___x_521_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_521_, 0, v___y_519_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = 0;
v___x_523_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set_uint8(v___x_523_, sizeof(void*)*1, v___x_522_);
v___x_524_ = l_Repr_addAppParen(v___x_523_, v_prec_503_);
return v___x_524_;
}
v___jp_525_:
{
lean_object* v___x_527_; lean_object* v___x_528_; uint8_t v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_527_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__7));
lean_inc(v___y_526_);
v___x_528_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_528_, 0, v___y_526_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
v___x_529_ = 0;
v___x_530_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set_uint8(v___x_530_, sizeof(void*)*1, v___x_529_);
v___x_531_ = l_Repr_addAppParen(v___x_530_, v_prec_503_);
return v___x_531_;
}
v___jp_532_:
{
lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_534_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__9));
lean_inc(v___y_533_);
v___x_535_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_535_, 0, v___y_533_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = 0;
v___x_537_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_537_, 0, v___x_535_);
lean_ctor_set_uint8(v___x_537_, sizeof(void*)*1, v___x_536_);
v___x_538_ = l_Repr_addAppParen(v___x_537_, v_prec_503_);
return v___x_538_;
}
v___jp_539_:
{
lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_541_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__11));
lean_inc(v___y_540_);
v___x_542_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_542_, 0, v___y_540_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
v___x_543_ = 0;
v___x_544_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_544_, 0, v___x_542_);
lean_ctor_set_uint8(v___x_544_, sizeof(void*)*1, v___x_543_);
v___x_545_ = l_Repr_addAppParen(v___x_544_, v_prec_503_);
return v___x_545_;
}
v___jp_546_:
{
lean_object* v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_548_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__13));
lean_inc(v___y_547_);
v___x_549_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_549_, 0, v___y_547_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
v___x_550_ = 0;
v___x_551_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_551_, 0, v___x_549_);
lean_ctor_set_uint8(v___x_551_, sizeof(void*)*1, v___x_550_);
v___x_552_ = l_Repr_addAppParen(v___x_551_, v_prec_503_);
return v___x_552_;
}
v___jp_553_:
{
lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_555_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__15));
lean_inc(v___y_554_);
v___x_556_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_556_, 0, v___y_554_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
v___x_557_ = 0;
v___x_558_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_558_, 0, v___x_556_);
lean_ctor_set_uint8(v___x_558_, sizeof(void*)*1, v___x_557_);
v___x_559_ = l_Repr_addAppParen(v___x_558_, v_prec_503_);
return v___x_559_;
}
v___jp_560_:
{
lean_object* v___x_562_; lean_object* v___x_563_; uint8_t v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_562_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__17));
lean_inc(v___y_561_);
v___x_563_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_563_, 0, v___y_561_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
v___x_564_ = 0;
v___x_565_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_565_, 0, v___x_563_);
lean_ctor_set_uint8(v___x_565_, sizeof(void*)*1, v___x_564_);
v___x_566_ = l_Repr_addAppParen(v___x_565_, v_prec_503_);
return v___x_566_;
}
v___jp_567_:
{
lean_object* v___x_569_; lean_object* v___x_570_; uint8_t v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_569_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__19));
lean_inc(v___y_568_);
v___x_570_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_570_, 0, v___y_568_);
lean_ctor_set(v___x_570_, 1, v___x_569_);
v___x_571_ = 0;
v___x_572_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_572_, 0, v___x_570_);
lean_ctor_set_uint8(v___x_572_, sizeof(void*)*1, v___x_571_);
v___x_573_ = l_Repr_addAppParen(v___x_572_, v_prec_503_);
return v___x_573_;
}
v___jp_574_:
{
lean_object* v___x_576_; lean_object* v___x_577_; uint8_t v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_576_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__21));
lean_inc(v___y_575_);
v___x_577_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_577_, 0, v___y_575_);
lean_ctor_set(v___x_577_, 1, v___x_576_);
v___x_578_ = 0;
v___x_579_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_579_, 0, v___x_577_);
lean_ctor_set_uint8(v___x_579_, sizeof(void*)*1, v___x_578_);
v___x_580_ = l_Repr_addAppParen(v___x_579_, v_prec_503_);
return v___x_580_;
}
v___jp_581_:
{
lean_object* v___x_583_; lean_object* v___x_584_; uint8_t v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_583_ = ((lean_object*)(l_Lean_IR_instReprIRType_repr___closed__23));
lean_inc(v___y_582_);
v___x_584_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_584_, 0, v___y_582_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v___x_585_ = 0;
v___x_586_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_586_, 0, v___x_584_);
lean_ctor_set_uint8(v___x_586_, sizeof(void*)*1, v___x_585_);
v___x_587_ = l_Repr_addAppParen(v___x_586_, v_prec_503_);
return v___x_587_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1_spec__1___lam__0(lean_object* v___y_688_){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = lean_unsigned_to_nat(0u);
v___x_690_ = l_Lean_IR_instReprIRType_repr(v___y_688_, v___x_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprIRType_repr___boxed(lean_object* v_x_691_, lean_object* v_prec_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lean_IR_instReprIRType_repr(v_x_691_, v_prec_692_);
lean_dec(v_prec_692_);
return v_res_693_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isScalar(lean_object* v_x_696_){
_start:
{
switch(lean_obj_tag(v_x_696_))
{
case 0:
{
uint8_t v___x_697_; 
v___x_697_ = 1;
return v___x_697_;
}
case 9:
{
uint8_t v___x_698_; 
v___x_698_ = 1;
return v___x_698_;
}
case 1:
{
uint8_t v___x_699_; 
v___x_699_ = 1;
return v___x_699_;
}
case 2:
{
uint8_t v___x_700_; 
v___x_700_ = 1;
return v___x_700_;
}
case 3:
{
uint8_t v___x_701_; 
v___x_701_ = 1;
return v___x_701_;
}
case 4:
{
uint8_t v___x_702_; 
v___x_702_ = 1;
return v___x_702_;
}
case 5:
{
uint8_t v___x_703_; 
v___x_703_ = 1;
return v___x_703_;
}
default: 
{
uint8_t v___x_704_; 
v___x_704_ = 0;
return v___x_704_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isScalar___boxed(lean_object* v_x_705_){
_start:
{
uint8_t v_res_706_; lean_object* v_r_707_; 
v_res_706_ = l_Lean_IR_IRType_isScalar(v_x_705_);
lean_dec(v_x_705_);
v_r_707_ = lean_box(v_res_706_);
return v_r_707_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isObj(lean_object* v_x_708_){
_start:
{
switch(lean_obj_tag(v_x_708_))
{
case 7:
{
uint8_t v___x_709_; 
v___x_709_ = 1;
return v___x_709_;
}
case 12:
{
uint8_t v___x_710_; 
v___x_710_ = 1;
return v___x_710_;
}
case 8:
{
uint8_t v___x_711_; 
v___x_711_ = 1;
return v___x_711_;
}
case 13:
{
uint8_t v___x_712_; 
v___x_712_ = 1;
return v___x_712_;
}
default: 
{
uint8_t v___x_713_; 
v___x_713_ = 0;
return v___x_713_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isObj___boxed(lean_object* v_x_714_){
_start:
{
uint8_t v_res_715_; lean_object* v_r_716_; 
v_res_715_ = l_Lean_IR_IRType_isObj(v_x_714_);
lean_dec(v_x_714_);
v_r_716_ = lean_box(v_res_715_);
return v_r_716_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isPossibleRef(lean_object* v_x_717_){
_start:
{
switch(lean_obj_tag(v_x_717_))
{
case 7:
{
uint8_t v___x_718_; 
v___x_718_ = 1;
return v___x_718_;
}
case 8:
{
uint8_t v___x_719_; 
v___x_719_ = 1;
return v___x_719_;
}
default: 
{
uint8_t v___x_720_; 
v___x_720_ = 0;
return v___x_720_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isPossibleRef___boxed(lean_object* v_x_721_){
_start:
{
uint8_t v_res_722_; lean_object* v_r_723_; 
v_res_722_ = l_Lean_IR_IRType_isPossibleRef(v_x_721_);
lean_dec(v_x_721_);
v_r_723_ = lean_box(v_res_722_);
return v_r_723_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isDefiniteRef(lean_object* v_x_724_){
_start:
{
if (lean_obj_tag(v_x_724_) == 7)
{
uint8_t v___x_725_; 
v___x_725_ = 1;
return v___x_725_;
}
else
{
uint8_t v___x_726_; 
v___x_726_ = 0;
return v___x_726_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isDefiniteRef___boxed(lean_object* v_x_727_){
_start:
{
uint8_t v_res_728_; lean_object* v_r_729_; 
v_res_728_ = l_Lean_IR_IRType_isDefiniteRef(v_x_727_);
lean_dec(v_x_727_);
v_r_729_ = lean_box(v_res_728_);
return v_r_729_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isErased(lean_object* v_x_730_){
_start:
{
if (lean_obj_tag(v_x_730_) == 6)
{
uint8_t v___x_731_; 
v___x_731_ = 1;
return v___x_731_;
}
else
{
uint8_t v___x_732_; 
v___x_732_ = 0;
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isErased___boxed(lean_object* v_x_733_){
_start:
{
uint8_t v_res_734_; lean_object* v_r_735_; 
v_res_734_ = l_Lean_IR_IRType_isErased(v_x_733_);
lean_dec(v_x_733_);
v_r_735_ = lean_box(v_res_734_);
return v_r_735_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_IRType_isVoid(lean_object* v_x_736_){
_start:
{
if (lean_obj_tag(v_x_736_) == 13)
{
uint8_t v___x_737_; 
v___x_737_ = 1;
return v___x_737_;
}
else
{
uint8_t v___x_738_; 
v___x_738_ = 0;
return v___x_738_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_isVoid___boxed(lean_object* v_x_739_){
_start:
{
uint8_t v_res_740_; lean_object* v_r_741_; 
v_res_740_ = l_Lean_IR_IRType_isVoid(v_x_739_);
lean_dec(v_x_739_);
v_r_741_ = lean_box(v_res_740_);
return v_r_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_boxed(lean_object* v_x_742_){
_start:
{
switch(lean_obj_tag(v_x_742_))
{
case 7:
{
return v_x_742_;
}
case 0:
{
lean_object* v___x_743_; 
v___x_743_ = lean_box(7);
return v___x_743_;
}
case 9:
{
lean_object* v___x_744_; 
v___x_744_ = lean_box(7);
return v___x_744_;
}
case 13:
{
lean_object* v___x_745_; 
v___x_745_ = lean_box(12);
return v___x_745_;
}
case 12:
{
return v_x_742_;
}
case 1:
{
lean_object* v___x_746_; 
v___x_746_ = lean_box(12);
return v___x_746_;
}
case 2:
{
lean_object* v___x_747_; 
v___x_747_ = lean_box(12);
return v___x_747_;
}
default: 
{
lean_object* v___x_748_; 
v___x_748_ = lean_box(8);
return v___x_748_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_IRType_boxed___boxed(lean_object* v_x_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lean_IR_IRType_boxed(v_x_749_);
lean_dec(v_x_749_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Arg_ctorIdx(lean_object* v_x_751_){
_start:
{
if (lean_obj_tag(v_x_751_) == 0)
{
lean_object* v___x_752_; 
v___x_752_ = lean_unsigned_to_nat(0u);
return v___x_752_;
}
else
{
lean_object* v___x_753_; 
v___x_753_ = lean_unsigned_to_nat(1u);
return v___x_753_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Arg_ctorIdx___boxed(lean_object* v_x_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Lean_IR_Arg_ctorIdx(v_x_754_);
lean_dec(v_x_754_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Arg_ctorElim___redArg(lean_object* v_t_756_, lean_object* v_k_757_){
_start:
{
if (lean_obj_tag(v_t_756_) == 0)
{
lean_object* v_id_758_; lean_object* v___x_759_; 
v_id_758_ = lean_ctor_get(v_t_756_, 0);
lean_inc(v_id_758_);
lean_dec_ref_known(v_t_756_, 1);
v___x_759_ = lean_apply_1(v_k_757_, v_id_758_);
return v___x_759_;
}
else
{
return v_k_757_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Arg_ctorElim(lean_object* v_motive_760_, lean_object* v_ctorIdx_761_, lean_object* v_t_762_, lean_object* v_h_763_, lean_object* v_k_764_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_Lean_IR_Arg_ctorElim___redArg(v_t_762_, v_k_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Arg_ctorElim___boxed(lean_object* v_motive_766_, lean_object* v_ctorIdx_767_, lean_object* v_t_768_, lean_object* v_h_769_, lean_object* v_k_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lean_IR_Arg_ctorElim(v_motive_766_, v_ctorIdx_767_, v_t_768_, v_h_769_, v_k_770_);
lean_dec(v_ctorIdx_767_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Arg_var_elim___redArg(lean_object* v_t_772_, lean_object* v_var_773_){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = l_Lean_IR_Arg_ctorElim___redArg(v_t_772_, v_var_773_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Arg_var_elim(lean_object* v_motive_775_, lean_object* v_t_776_, lean_object* v_h_777_, lean_object* v_var_778_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = l_Lean_IR_Arg_ctorElim___redArg(v_t_776_, v_var_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Arg_erased_elim___redArg(lean_object* v_t_780_, lean_object* v_erased_781_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Lean_IR_Arg_ctorElim___redArg(v_t_780_, v_erased_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Arg_erased_elim(lean_object* v_motive_783_, lean_object* v_t_784_, lean_object* v_h_785_, lean_object* v_erased_786_){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = l_Lean_IR_Arg_ctorElim___redArg(v_t_784_, v_erased_786_);
return v___x_787_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_instBEqArg_beq(lean_object* v_x_792_, lean_object* v_x_793_){
_start:
{
if (lean_obj_tag(v_x_792_) == 0)
{
if (lean_obj_tag(v_x_793_) == 0)
{
lean_object* v_id_794_; lean_object* v_id_795_; uint8_t v___x_796_; 
v_id_794_ = lean_ctor_get(v_x_792_, 0);
v_id_795_ = lean_ctor_get(v_x_793_, 0);
v___x_796_ = lean_nat_dec_eq(v_id_794_, v_id_795_);
return v___x_796_;
}
else
{
uint8_t v___x_797_; 
v___x_797_ = 0;
return v___x_797_;
}
}
else
{
if (lean_obj_tag(v_x_793_) == 1)
{
uint8_t v___x_798_; 
v___x_798_ = 1;
return v___x_798_;
}
else
{
uint8_t v___x_799_; 
v___x_799_ = 0;
return v___x_799_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instBEqArg_beq___boxed(lean_object* v_x_800_, lean_object* v_x_801_){
_start:
{
uint8_t v_res_802_; lean_object* v_r_803_; 
v_res_802_ = l_Lean_IR_instBEqArg_beq(v_x_800_, v_x_801_);
lean_dec(v_x_801_);
lean_dec(v_x_800_);
v_r_803_ = lean_box(v_res_802_);
return v_r_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprArg_repr(lean_object* v_x_815_, lean_object* v_prec_816_){
_start:
{
lean_object* v___y_818_; 
if (lean_obj_tag(v_x_815_) == 0)
{
lean_object* v_id_824_; lean_object* v___y_826_; lean_object* v___x_834_; uint8_t v___x_835_; 
v_id_824_ = lean_ctor_get(v_x_815_, 0);
lean_inc(v_id_824_);
lean_dec_ref_known(v_x_815_, 1);
v___x_834_ = lean_unsigned_to_nat(1024u);
v___x_835_ = lean_nat_dec_le(v___x_834_, v_prec_816_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; 
v___x_836_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_826_ = v___x_836_;
goto v___jp_825_;
}
else
{
lean_object* v___x_837_; 
v___x_837_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_826_ = v___x_837_;
goto v___jp_825_;
}
v___jp_825_:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; uint8_t v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_827_ = ((lean_object*)(l_Lean_IR_instReprArg_repr___closed__4));
v___x_828_ = l_Lean_IR_instReprVarId_repr___redArg(v_id_824_);
v___x_829_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_829_, 0, v___x_827_);
lean_ctor_set(v___x_829_, 1, v___x_828_);
lean_inc(v___y_826_);
v___x_830_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_830_, 0, v___y_826_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = 0;
v___x_832_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_832_, 0, v___x_830_);
lean_ctor_set_uint8(v___x_832_, sizeof(void*)*1, v___x_831_);
v___x_833_ = l_Repr_addAppParen(v___x_832_, v_prec_816_);
return v___x_833_;
}
}
else
{
lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_838_ = lean_unsigned_to_nat(1024u);
v___x_839_ = lean_nat_dec_le(v___x_838_, v_prec_816_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; 
v___x_840_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__24, &l_Lean_IR_instReprIRType_repr___closed__24_once, _init_l_Lean_IR_instReprIRType_repr___closed__24);
v___y_818_ = v___x_840_;
goto v___jp_817_;
}
else
{
lean_object* v___x_841_; 
v___x_841_ = lean_obj_once(&l_Lean_IR_instReprIRType_repr___closed__25, &l_Lean_IR_instReprIRType_repr___closed__25_once, _init_l_Lean_IR_instReprIRType_repr___closed__25);
v___y_818_ = v___x_841_;
goto v___jp_817_;
}
}
v___jp_817_:
{
lean_object* v___x_819_; lean_object* v___x_820_; uint8_t v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_819_ = ((lean_object*)(l_Lean_IR_instReprArg_repr___closed__1));
lean_inc(v___y_818_);
v___x_820_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_820_, 0, v___y_818_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
v___x_821_ = 0;
v___x_822_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_822_, 0, v___x_820_);
lean_ctor_set_uint8(v___x_822_, sizeof(void*)*1, v___x_821_);
v___x_823_ = l_Repr_addAppParen(v___x_822_, v_prec_816_);
return v___x_823_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprArg_repr___boxed(lean_object* v_x_842_, lean_object* v_prec_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lean_IR_instReprArg_repr(v_x_842_, v_prec_843_);
lean_dec(v_prec_843_);
return v_res_844_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_Arg_beq(lean_object* v_x_847_, lean_object* v_x_848_){
_start:
{
if (lean_obj_tag(v_x_847_) == 0)
{
if (lean_obj_tag(v_x_848_) == 0)
{
lean_object* v_id_849_; lean_object* v_id_850_; uint8_t v___x_851_; 
v_id_849_ = lean_ctor_get(v_x_847_, 0);
v_id_850_ = lean_ctor_get(v_x_848_, 0);
v___x_851_ = lean_nat_dec_eq(v_id_849_, v_id_850_);
return v___x_851_;
}
else
{
uint8_t v___x_852_; 
v___x_852_ = 0;
return v___x_852_;
}
}
else
{
if (lean_obj_tag(v_x_848_) == 1)
{
uint8_t v___x_853_; 
v___x_853_ = 1;
return v___x_853_;
}
else
{
uint8_t v___x_854_; 
v___x_854_ = 0;
return v___x_854_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Arg_beq___boxed(lean_object* v_x_855_, lean_object* v_x_856_){
_start:
{
uint8_t v_res_857_; lean_object* v_r_858_; 
v_res_857_ = l_Lean_IR_Arg_beq(v_x_855_, v_x_856_);
lean_dec(v_x_856_);
lean_dec(v_x_855_);
v_r_858_ = lean_box(v_res_857_);
return v_r_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_ctorIdx(lean_object* v_x_859_){
_start:
{
if (lean_obj_tag(v_x_859_) == 0)
{
lean_object* v___x_860_; 
v___x_860_ = lean_unsigned_to_nat(0u);
return v___x_860_;
}
else
{
lean_object* v___x_861_; 
v___x_861_ = lean_unsigned_to_nat(1u);
return v___x_861_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_ctorIdx___boxed(lean_object* v_x_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Lean_IR_LitVal_ctorIdx(v_x_862_);
lean_dec_ref(v_x_862_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_ctorElim___redArg(lean_object* v_t_864_, lean_object* v_k_865_){
_start:
{
if (lean_obj_tag(v_t_864_) == 0)
{
lean_object* v_v_866_; lean_object* v___x_867_; 
v_v_866_ = lean_ctor_get(v_t_864_, 0);
lean_inc(v_v_866_);
lean_dec_ref_known(v_t_864_, 1);
v___x_867_ = lean_apply_1(v_k_865_, v_v_866_);
return v___x_867_;
}
else
{
lean_object* v_v_868_; lean_object* v___x_869_; 
v_v_868_ = lean_ctor_get(v_t_864_, 0);
lean_inc_ref(v_v_868_);
lean_dec_ref_known(v_t_864_, 1);
v___x_869_ = lean_apply_1(v_k_865_, v_v_868_);
return v___x_869_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_ctorElim(lean_object* v_motive_870_, lean_object* v_ctorIdx_871_, lean_object* v_t_872_, lean_object* v_h_873_, lean_object* v_k_874_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = l_Lean_IR_LitVal_ctorElim___redArg(v_t_872_, v_k_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_ctorElim___boxed(lean_object* v_motive_876_, lean_object* v_ctorIdx_877_, lean_object* v_t_878_, lean_object* v_h_879_, lean_object* v_k_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Lean_IR_LitVal_ctorElim(v_motive_876_, v_ctorIdx_877_, v_t_878_, v_h_879_, v_k_880_);
lean_dec(v_ctorIdx_877_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_num_elim___redArg(lean_object* v_t_882_, lean_object* v_num_883_){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = l_Lean_IR_LitVal_ctorElim___redArg(v_t_882_, v_num_883_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_num_elim(lean_object* v_motive_885_, lean_object* v_t_886_, lean_object* v_h_887_, lean_object* v_num_888_){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = l_Lean_IR_LitVal_ctorElim___redArg(v_t_886_, v_num_888_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_str_elim___redArg(lean_object* v_t_890_, lean_object* v_str_891_){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = l_Lean_IR_LitVal_ctorElim___redArg(v_t_890_, v_str_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LitVal_str_elim(lean_object* v_motive_893_, lean_object* v_t_894_, lean_object* v_h_895_, lean_object* v_str_896_){
_start:
{
lean_object* v___x_897_; 
v___x_897_ = l_Lean_IR_LitVal_ctorElim___redArg(v_t_894_, v_str_896_);
return v___x_897_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_instBEqLitVal_beq(lean_object* v_x_902_, lean_object* v_x_903_){
_start:
{
if (lean_obj_tag(v_x_902_) == 0)
{
if (lean_obj_tag(v_x_903_) == 0)
{
lean_object* v_v_904_; lean_object* v_v_905_; uint8_t v___x_906_; 
v_v_904_ = lean_ctor_get(v_x_902_, 0);
v_v_905_ = lean_ctor_get(v_x_903_, 0);
v___x_906_ = lean_nat_dec_eq(v_v_904_, v_v_905_);
return v___x_906_;
}
else
{
uint8_t v___x_907_; 
v___x_907_ = 0;
return v___x_907_;
}
}
else
{
if (lean_obj_tag(v_x_903_) == 1)
{
lean_object* v_v_908_; lean_object* v_v_909_; uint8_t v___x_910_; 
v_v_908_ = lean_ctor_get(v_x_902_, 0);
v_v_909_ = lean_ctor_get(v_x_903_, 0);
v___x_910_ = lean_string_dec_eq(v_v_908_, v_v_909_);
return v___x_910_;
}
else
{
uint8_t v___x_911_; 
v___x_911_ = 0;
return v___x_911_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instBEqLitVal_beq___boxed(lean_object* v_x_912_, lean_object* v_x_913_){
_start:
{
uint8_t v_res_914_; lean_object* v_r_915_; 
v_res_914_ = l_Lean_IR_instBEqLitVal_beq(v_x_912_, v_x_913_);
lean_dec_ref(v_x_913_);
lean_dec_ref(v_x_912_);
v_r_915_ = lean_box(v_res_914_);
return v_r_915_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedCtorInfo_default___closed__0(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_918_ = lean_box(0);
v___x_919_ = l_unsafeCast___redArg(v___x_918_);
return v___x_919_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedCtorInfo_default___closed__1(void){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_920_ = lean_unsigned_to_nat(0u);
v___x_921_ = lean_obj_once(&l_Lean_IR_instInhabitedCtorInfo_default___closed__0, &l_Lean_IR_instInhabitedCtorInfo_default___closed__0_once, _init_l_Lean_IR_instInhabitedCtorInfo_default___closed__0);
v___x_922_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
lean_ctor_set(v___x_922_, 1, v___x_920_);
lean_ctor_set(v___x_922_, 2, v___x_920_);
lean_ctor_set(v___x_922_, 3, v___x_920_);
lean_ctor_set(v___x_922_, 4, v___x_920_);
return v___x_922_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedCtorInfo_default(void){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = lean_obj_once(&l_Lean_IR_instInhabitedCtorInfo_default___closed__1, &l_Lean_IR_instInhabitedCtorInfo_default___closed__1_once, _init_l_Lean_IR_instInhabitedCtorInfo_default___closed__1);
return v___x_923_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedCtorInfo(void){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_Lean_IR_instInhabitedCtorInfo_default;
return v___x_924_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_instBEqCtorInfo_beq(lean_object* v_x_925_, lean_object* v_x_926_){
_start:
{
lean_object* v_name_927_; lean_object* v_cidx_928_; lean_object* v_size_929_; lean_object* v_usize_930_; lean_object* v_ssize_931_; lean_object* v_name_932_; lean_object* v_cidx_933_; lean_object* v_size_934_; lean_object* v_usize_935_; lean_object* v_ssize_936_; uint8_t v___x_937_; 
v_name_927_ = lean_ctor_get(v_x_925_, 0);
v_cidx_928_ = lean_ctor_get(v_x_925_, 1);
v_size_929_ = lean_ctor_get(v_x_925_, 2);
v_usize_930_ = lean_ctor_get(v_x_925_, 3);
v_ssize_931_ = lean_ctor_get(v_x_925_, 4);
v_name_932_ = lean_ctor_get(v_x_926_, 0);
v_cidx_933_ = lean_ctor_get(v_x_926_, 1);
v_size_934_ = lean_ctor_get(v_x_926_, 2);
v_usize_935_ = lean_ctor_get(v_x_926_, 3);
v_ssize_936_ = lean_ctor_get(v_x_926_, 4);
v___x_937_ = lean_name_eq(v_name_927_, v_name_932_);
if (v___x_937_ == 0)
{
return v___x_937_;
}
else
{
uint8_t v___x_938_; 
v___x_938_ = lean_nat_dec_eq(v_cidx_928_, v_cidx_933_);
if (v___x_938_ == 0)
{
return v___x_938_;
}
else
{
uint8_t v___x_939_; 
v___x_939_ = lean_nat_dec_eq(v_size_929_, v_size_934_);
if (v___x_939_ == 0)
{
return v___x_939_;
}
else
{
uint8_t v___x_940_; 
v___x_940_ = lean_nat_dec_eq(v_usize_930_, v_usize_935_);
if (v___x_940_ == 0)
{
return v___x_940_;
}
else
{
uint8_t v___x_941_; 
v___x_941_ = lean_nat_dec_eq(v_ssize_931_, v_ssize_936_);
return v___x_941_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instBEqCtorInfo_beq___boxed(lean_object* v_x_942_, lean_object* v_x_943_){
_start:
{
uint8_t v_res_944_; lean_object* v_r_945_; 
v_res_944_ = l_Lean_IR_instBEqCtorInfo_beq(v_x_942_, v_x_943_);
lean_dec_ref(v_x_943_);
lean_dec_ref(v_x_942_);
v_r_945_ = lean_box(v_res_944_);
return v_r_945_;
}
}
static lean_object* _init_l_Lean_IR_instReprCtorInfo_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = lean_unsigned_to_nat(8u);
v___x_958_ = lean_nat_to_int(v___x_957_);
return v___x_958_;
}
}
static lean_object* _init_l_Lean_IR_instReprCtorInfo_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = lean_unsigned_to_nat(9u);
v___x_969_ = lean_nat_to_int(v___x_968_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprCtorInfo_repr___redArg(lean_object* v_x_973_){
_start:
{
lean_object* v_name_974_; lean_object* v_cidx_975_; lean_object* v_size_976_; lean_object* v_usize_977_; lean_object* v_ssize_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; uint8_t v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v_name_974_ = lean_ctor_get(v_x_973_, 0);
lean_inc(v_name_974_);
v_cidx_975_ = lean_ctor_get(v_x_973_, 1);
lean_inc(v_cidx_975_);
v_size_976_ = lean_ctor_get(v_x_973_, 2);
lean_inc(v_size_976_);
v_usize_977_ = lean_ctor_get(v_x_973_, 3);
lean_inc(v_usize_977_);
v_ssize_978_ = lean_ctor_get(v_x_973_, 4);
lean_inc(v_ssize_978_);
lean_dec_ref(v_x_973_);
v___x_979_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__5));
v___x_980_ = ((lean_object*)(l_Lean_IR_instReprCtorInfo_repr___redArg___closed__3));
v___x_981_ = lean_obj_once(&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__4, &l_Lean_IR_instReprCtorInfo_repr___redArg___closed__4_once, _init_l_Lean_IR_instReprCtorInfo_repr___redArg___closed__4);
v___x_982_ = lean_unsigned_to_nat(0u);
v___x_983_ = l_Lean_Name_reprPrec(v_name_974_, v___x_982_);
v___x_984_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_981_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = 0;
v___x_986_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_986_, 0, v___x_984_);
lean_ctor_set_uint8(v___x_986_, sizeof(void*)*1, v___x_985_);
v___x_987_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_980_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = ((lean_object*)(l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__2));
v___x_989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_987_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = lean_box(1);
v___x_991_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_989_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = ((lean_object*)(l_Lean_IR_instReprCtorInfo_repr___redArg___closed__6));
v___x_993_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_991_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
lean_ctor_set(v___x_994_, 1, v___x_979_);
v___x_995_ = l_Nat_reprFast(v_cidx_975_);
v___x_996_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
v___x_997_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_981_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_998_, 0, v___x_997_);
lean_ctor_set_uint8(v___x_998_, sizeof(void*)*1, v___x_985_);
v___x_999_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_994_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
v___x_1000_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
lean_ctor_set(v___x_1000_, 1, v___x_988_);
v___x_1001_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___x_1000_);
lean_ctor_set(v___x_1001_, 1, v___x_990_);
v___x_1002_ = ((lean_object*)(l_Lean_IR_instReprCtorInfo_repr___redArg___closed__8));
v___x_1003_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1001_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
lean_ctor_set(v___x_1004_, 1, v___x_979_);
v___x_1005_ = l_Nat_reprFast(v_size_976_);
v___x_1006_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
v___x_1007_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_981_);
lean_ctor_set(v___x_1007_, 1, v___x_1006_);
v___x_1008_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set_uint8(v___x_1008_, sizeof(void*)*1, v___x_985_);
v___x_1009_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1004_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
lean_ctor_set(v___x_1010_, 1, v___x_988_);
v___x_1011_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
lean_ctor_set(v___x_1011_, 1, v___x_990_);
v___x_1012_ = ((lean_object*)(l_Lean_IR_instReprCtorInfo_repr___redArg___closed__10));
v___x_1013_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1011_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
lean_ctor_set(v___x_1014_, 1, v___x_979_);
v___x_1015_ = lean_obj_once(&l_Lean_IR_instReprCtorInfo_repr___redArg___closed__11, &l_Lean_IR_instReprCtorInfo_repr___redArg___closed__11_once, _init_l_Lean_IR_instReprCtorInfo_repr___redArg___closed__11);
v___x_1016_ = l_Nat_reprFast(v_usize_977_);
v___x_1017_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
v___x_1018_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1015_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
lean_ctor_set_uint8(v___x_1019_, sizeof(void*)*1, v___x_985_);
v___x_1020_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1014_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1020_);
lean_ctor_set(v___x_1021_, 1, v___x_988_);
v___x_1022_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1021_);
lean_ctor_set(v___x_1022_, 1, v___x_990_);
v___x_1023_ = ((lean_object*)(l_Lean_IR_instReprCtorInfo_repr___redArg___closed__13));
v___x_1024_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v___x_1025_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
lean_ctor_set(v___x_1025_, 1, v___x_979_);
v___x_1026_ = l_Nat_reprFast(v_ssize_978_);
v___x_1027_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
v___x_1028_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1015_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
lean_ctor_set_uint8(v___x_1029_, sizeof(void*)*1, v___x_985_);
v___x_1030_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1025_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___x_1031_ = lean_obj_once(&l_Lean_IR_instReprVarId_repr___redArg___closed__10, &l_Lean_IR_instReprVarId_repr___redArg___closed__10_once, _init_l_Lean_IR_instReprVarId_repr___redArg___closed__10);
v___x_1032_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__11));
v___x_1033_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1032_);
lean_ctor_set(v___x_1033_, 1, v___x_1030_);
v___x_1034_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__12));
v___x_1035_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1033_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1031_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1037_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1037_, 0, v___x_1036_);
lean_ctor_set_uint8(v___x_1037_, sizeof(void*)*1, v___x_985_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprCtorInfo_repr(lean_object* v_x_1038_, lean_object* v_prec_1039_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lean_IR_instReprCtorInfo_repr___redArg(v_x_1038_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprCtorInfo_repr___boxed(lean_object* v_x_1041_, lean_object* v_prec_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lean_IR_instReprCtorInfo_repr(v_x_1041_, v_prec_1042_);
lean_dec(v_prec_1042_);
return v_res_1043_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_CtorInfo_isRef(lean_object* v_info_1046_){
_start:
{
lean_object* v_size_1047_; lean_object* v_usize_1048_; lean_object* v_ssize_1049_; lean_object* v___x_1050_; uint8_t v___x_1051_; 
v_size_1047_ = lean_ctor_get(v_info_1046_, 2);
v_usize_1048_ = lean_ctor_get(v_info_1046_, 3);
v_ssize_1049_ = lean_ctor_get(v_info_1046_, 4);
v___x_1050_ = lean_unsigned_to_nat(0u);
v___x_1051_ = lean_nat_dec_lt(v___x_1050_, v_size_1047_);
if (v___x_1051_ == 0)
{
uint8_t v___x_1052_; 
v___x_1052_ = lean_nat_dec_lt(v___x_1050_, v_usize_1048_);
if (v___x_1052_ == 0)
{
uint8_t v___x_1053_; 
v___x_1053_ = lean_nat_dec_lt(v___x_1050_, v_ssize_1049_);
return v___x_1053_;
}
else
{
return v___x_1052_;
}
}
else
{
return v___x_1051_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CtorInfo_isRef___boxed(lean_object* v_info_1054_){
_start:
{
uint8_t v_res_1055_; lean_object* v_r_1056_; 
v_res_1055_ = l_Lean_IR_CtorInfo_isRef(v_info_1054_);
lean_dec_ref(v_info_1054_);
v_r_1056_ = lean_box(v_res_1055_);
return v_r_1056_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_CtorInfo_isScalar(lean_object* v_info_1057_){
_start:
{
uint8_t v___x_1058_; 
v___x_1058_ = l_Lean_IR_CtorInfo_isRef(v_info_1057_);
if (v___x_1058_ == 0)
{
uint8_t v___x_1059_; 
v___x_1059_ = 1;
return v___x_1059_;
}
else
{
uint8_t v___x_1060_; 
v___x_1060_ = 0;
return v___x_1060_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CtorInfo_isScalar___boxed(lean_object* v_info_1061_){
_start:
{
uint8_t v_res_1062_; lean_object* v_r_1063_; 
v_res_1062_ = l_Lean_IR_CtorInfo_isScalar(v_info_1061_);
lean_dec_ref(v_info_1061_);
v_r_1063_ = lean_box(v_res_1062_);
return v_r_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CtorInfo_type(lean_object* v_info_1064_){
_start:
{
uint8_t v___x_1065_; 
v___x_1065_ = l_Lean_IR_CtorInfo_isRef(v_info_1064_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; 
v___x_1066_ = lean_box(12);
return v___x_1066_;
}
else
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_box(7);
return v___x_1067_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CtorInfo_type___boxed(lean_object* v_info_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lean_IR_CtorInfo_type(v_info_1068_);
lean_dec_ref(v_info_1068_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctorIdx(lean_object* v_x_1070_){
_start:
{
switch(lean_obj_tag(v_x_1070_))
{
case 0:
{
lean_object* v___x_1071_; 
v___x_1071_ = lean_unsigned_to_nat(0u);
return v___x_1071_;
}
case 1:
{
lean_object* v___x_1072_; 
v___x_1072_ = lean_unsigned_to_nat(1u);
return v___x_1072_;
}
case 2:
{
lean_object* v___x_1073_; 
v___x_1073_ = lean_unsigned_to_nat(2u);
return v___x_1073_;
}
case 3:
{
lean_object* v___x_1074_; 
v___x_1074_ = lean_unsigned_to_nat(3u);
return v___x_1074_;
}
case 4:
{
lean_object* v___x_1075_; 
v___x_1075_ = lean_unsigned_to_nat(4u);
return v___x_1075_;
}
case 5:
{
lean_object* v___x_1076_; 
v___x_1076_ = lean_unsigned_to_nat(5u);
return v___x_1076_;
}
case 6:
{
lean_object* v___x_1077_; 
v___x_1077_ = lean_unsigned_to_nat(6u);
return v___x_1077_;
}
case 7:
{
lean_object* v___x_1078_; 
v___x_1078_ = lean_unsigned_to_nat(7u);
return v___x_1078_;
}
case 8:
{
lean_object* v___x_1079_; 
v___x_1079_ = lean_unsigned_to_nat(8u);
return v___x_1079_;
}
case 9:
{
lean_object* v___x_1080_; 
v___x_1080_ = lean_unsigned_to_nat(9u);
return v___x_1080_;
}
case 10:
{
lean_object* v___x_1081_; 
v___x_1081_ = lean_unsigned_to_nat(10u);
return v___x_1081_;
}
case 11:
{
lean_object* v___x_1082_; 
v___x_1082_ = lean_unsigned_to_nat(11u);
return v___x_1082_;
}
default: 
{
lean_object* v___x_1083_; 
v___x_1083_ = lean_unsigned_to_nat(12u);
return v___x_1083_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctorIdx___boxed(lean_object* v_x_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Lean_IR_Expr_ctorIdx(v_x_1084_);
lean_dec_ref(v_x_1084_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctorElim___redArg(lean_object* v_t_1086_, lean_object* v_k_1087_){
_start:
{
switch(lean_obj_tag(v_t_1086_))
{
case 0:
{
lean_object* v_i_1088_; lean_object* v_ys_1089_; lean_object* v___x_1090_; 
v_i_1088_ = lean_ctor_get(v_t_1086_, 0);
lean_inc_ref(v_i_1088_);
v_ys_1089_ = lean_ctor_get(v_t_1086_, 1);
lean_inc_ref(v_ys_1089_);
lean_dec_ref_known(v_t_1086_, 2);
v___x_1090_ = lean_apply_2(v_k_1087_, v_i_1088_, v_ys_1089_);
return v___x_1090_;
}
case 2:
{
lean_object* v_x_1091_; lean_object* v_i_1092_; uint8_t v_updtHeader_1093_; lean_object* v_ys_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v_x_1091_ = lean_ctor_get(v_t_1086_, 0);
lean_inc(v_x_1091_);
v_i_1092_ = lean_ctor_get(v_t_1086_, 1);
lean_inc_ref(v_i_1092_);
v_updtHeader_1093_ = lean_ctor_get_uint8(v_t_1086_, sizeof(void*)*3);
v_ys_1094_ = lean_ctor_get(v_t_1086_, 2);
lean_inc_ref(v_ys_1094_);
lean_dec_ref_known(v_t_1086_, 3);
v___x_1095_ = lean_box(v_updtHeader_1093_);
v___x_1096_ = lean_apply_4(v_k_1087_, v_x_1091_, v_i_1092_, v___x_1095_, v_ys_1094_);
return v___x_1096_;
}
case 5:
{
lean_object* v_n_1097_; lean_object* v_offset_1098_; lean_object* v_x_1099_; lean_object* v___x_1100_; 
v_n_1097_ = lean_ctor_get(v_t_1086_, 0);
lean_inc(v_n_1097_);
v_offset_1098_ = lean_ctor_get(v_t_1086_, 1);
lean_inc(v_offset_1098_);
v_x_1099_ = lean_ctor_get(v_t_1086_, 2);
lean_inc(v_x_1099_);
lean_dec_ref_known(v_t_1086_, 3);
v___x_1100_ = lean_apply_3(v_k_1087_, v_n_1097_, v_offset_1098_, v_x_1099_);
return v___x_1100_;
}
case 6:
{
lean_object* v_c_1101_; lean_object* v_ys_1102_; lean_object* v___x_1103_; 
v_c_1101_ = lean_ctor_get(v_t_1086_, 0);
lean_inc(v_c_1101_);
v_ys_1102_ = lean_ctor_get(v_t_1086_, 1);
lean_inc_ref(v_ys_1102_);
lean_dec_ref_known(v_t_1086_, 2);
v___x_1103_ = lean_apply_2(v_k_1087_, v_c_1101_, v_ys_1102_);
return v___x_1103_;
}
case 7:
{
lean_object* v_c_1104_; lean_object* v_ys_1105_; lean_object* v___x_1106_; 
v_c_1104_ = lean_ctor_get(v_t_1086_, 0);
lean_inc(v_c_1104_);
v_ys_1105_ = lean_ctor_get(v_t_1086_, 1);
lean_inc_ref(v_ys_1105_);
lean_dec_ref_known(v_t_1086_, 2);
v___x_1106_ = lean_apply_2(v_k_1087_, v_c_1104_, v_ys_1105_);
return v___x_1106_;
}
case 8:
{
lean_object* v_x_1107_; lean_object* v_ys_1108_; lean_object* v___x_1109_; 
v_x_1107_ = lean_ctor_get(v_t_1086_, 0);
lean_inc(v_x_1107_);
v_ys_1108_ = lean_ctor_get(v_t_1086_, 1);
lean_inc_ref(v_ys_1108_);
lean_dec_ref_known(v_t_1086_, 2);
v___x_1109_ = lean_apply_2(v_k_1087_, v_x_1107_, v_ys_1108_);
return v___x_1109_;
}
case 10:
{
lean_object* v_x_1110_; lean_object* v___x_1111_; 
v_x_1110_ = lean_ctor_get(v_t_1086_, 0);
lean_inc(v_x_1110_);
lean_dec_ref_known(v_t_1086_, 1);
v___x_1111_ = lean_apply_1(v_k_1087_, v_x_1110_);
return v___x_1111_;
}
case 11:
{
lean_object* v_v_1112_; lean_object* v___x_1113_; 
v_v_1112_ = lean_ctor_get(v_t_1086_, 0);
lean_inc_ref(v_v_1112_);
lean_dec_ref_known(v_t_1086_, 1);
v___x_1113_ = lean_apply_1(v_k_1087_, v_v_1112_);
return v___x_1113_;
}
case 12:
{
lean_object* v_x_1114_; lean_object* v___x_1115_; 
v_x_1114_ = lean_ctor_get(v_t_1086_, 0);
lean_inc(v_x_1114_);
lean_dec_ref_known(v_t_1086_, 1);
v___x_1115_ = lean_apply_1(v_k_1087_, v_x_1114_);
return v___x_1115_;
}
default: 
{
lean_object* v_n_1116_; lean_object* v_x_1117_; lean_object* v___x_1118_; 
v_n_1116_ = lean_ctor_get(v_t_1086_, 0);
lean_inc(v_n_1116_);
v_x_1117_ = lean_ctor_get(v_t_1086_, 1);
lean_inc(v_x_1117_);
lean_dec_ref(v_t_1086_);
v___x_1118_ = lean_apply_2(v_k_1087_, v_n_1116_, v_x_1117_);
return v___x_1118_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctorElim(lean_object* v_motive_1119_, lean_object* v_ctorIdx_1120_, lean_object* v_t_1121_, lean_object* v_h_1122_, lean_object* v_k_1123_){
_start:
{
lean_object* v___x_1124_; 
v___x_1124_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1121_, v_k_1123_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctorElim___boxed(lean_object* v_motive_1125_, lean_object* v_ctorIdx_1126_, lean_object* v_t_1127_, lean_object* v_h_1128_, lean_object* v_k_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lean_IR_Expr_ctorElim(v_motive_1125_, v_ctorIdx_1126_, v_t_1127_, v_h_1128_, v_k_1129_);
lean_dec(v_ctorIdx_1126_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctor_elim___redArg(lean_object* v_t_1131_, lean_object* v_ctor_1132_){
_start:
{
lean_object* v___x_1133_; 
v___x_1133_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1131_, v_ctor_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ctor_elim(lean_object* v_motive_1134_, lean_object* v_t_1135_, lean_object* v_h_1136_, lean_object* v_ctor_1137_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1135_, v_ctor_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_reset_elim___redArg(lean_object* v_t_1139_, lean_object* v_reset_1140_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1139_, v_reset_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_reset_elim(lean_object* v_motive_1142_, lean_object* v_t_1143_, lean_object* v_h_1144_, lean_object* v_reset_1145_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1143_, v_reset_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_reuse_elim___redArg(lean_object* v_t_1147_, lean_object* v_reuse_1148_){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1147_, v_reuse_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_reuse_elim(lean_object* v_motive_1150_, lean_object* v_t_1151_, lean_object* v_h_1152_, lean_object* v_reuse_1153_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1151_, v_reuse_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_proj_elim___redArg(lean_object* v_t_1155_, lean_object* v_proj_1156_){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1155_, v_proj_1156_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_proj_elim(lean_object* v_motive_1158_, lean_object* v_t_1159_, lean_object* v_h_1160_, lean_object* v_proj_1161_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1159_, v_proj_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_uproj_elim___redArg(lean_object* v_t_1163_, lean_object* v_uproj_1164_){
_start:
{
lean_object* v___x_1165_; 
v___x_1165_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1163_, v_uproj_1164_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_uproj_elim(lean_object* v_motive_1166_, lean_object* v_t_1167_, lean_object* v_h_1168_, lean_object* v_uproj_1169_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1167_, v_uproj_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_sproj_elim___redArg(lean_object* v_t_1171_, lean_object* v_sproj_1172_){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1171_, v_sproj_1172_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_sproj_elim(lean_object* v_motive_1174_, lean_object* v_t_1175_, lean_object* v_h_1176_, lean_object* v_sproj_1177_){
_start:
{
lean_object* v___x_1178_; 
v___x_1178_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1175_, v_sproj_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_fap_elim___redArg(lean_object* v_t_1179_, lean_object* v_fap_1180_){
_start:
{
lean_object* v___x_1181_; 
v___x_1181_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1179_, v_fap_1180_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_fap_elim(lean_object* v_motive_1182_, lean_object* v_t_1183_, lean_object* v_h_1184_, lean_object* v_fap_1185_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1183_, v_fap_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_pap_elim___redArg(lean_object* v_t_1187_, lean_object* v_pap_1188_){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1187_, v_pap_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_pap_elim(lean_object* v_motive_1190_, lean_object* v_t_1191_, lean_object* v_h_1192_, lean_object* v_pap_1193_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1191_, v_pap_1193_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ap_elim___redArg(lean_object* v_t_1195_, lean_object* v_ap_1196_){
_start:
{
lean_object* v___x_1197_; 
v___x_1197_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1195_, v_ap_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_ap_elim(lean_object* v_motive_1198_, lean_object* v_t_1199_, lean_object* v_h_1200_, lean_object* v_ap_1201_){
_start:
{
lean_object* v___x_1202_; 
v___x_1202_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1199_, v_ap_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_box_elim___redArg(lean_object* v_t_1203_, lean_object* v_box_1204_){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1203_, v_box_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_box_elim(lean_object* v_motive_1206_, lean_object* v_t_1207_, lean_object* v_h_1208_, lean_object* v_box_1209_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1207_, v_box_1209_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_unbox_elim___redArg(lean_object* v_t_1211_, lean_object* v_unbox_1212_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1211_, v_unbox_1212_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_unbox_elim(lean_object* v_motive_1214_, lean_object* v_t_1215_, lean_object* v_h_1216_, lean_object* v_unbox_1217_){
_start:
{
lean_object* v___x_1218_; 
v___x_1218_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1215_, v_unbox_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_lit_elim___redArg(lean_object* v_t_1219_, lean_object* v_lit_1220_){
_start:
{
lean_object* v___x_1221_; 
v___x_1221_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1219_, v_lit_1220_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_lit_elim(lean_object* v_motive_1222_, lean_object* v_t_1223_, lean_object* v_h_1224_, lean_object* v_lit_1225_){
_start:
{
lean_object* v___x_1226_; 
v___x_1226_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1223_, v_lit_1225_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_isShared_elim___redArg(lean_object* v_t_1227_, lean_object* v_isShared_1228_){
_start:
{
lean_object* v___x_1229_; 
v___x_1229_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1227_, v_isShared_1228_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_isShared_elim(lean_object* v_motive_1230_, lean_object* v_t_1231_, lean_object* v_h_1232_, lean_object* v_isShared_1233_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lean_IR_Expr_ctorElim___redArg(v_t_1231_, v_isShared_1233_);
return v___x_1234_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedExpr_default___closed__1(void){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1237_ = ((lean_object*)(l_Lean_IR_instInhabitedExpr_default___closed__0));
v___x_1238_ = l_Lean_IR_instInhabitedCtorInfo_default;
v___x_1239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
lean_ctor_set(v___x_1239_, 1, v___x_1237_);
return v___x_1239_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedExpr_default(void){
_start:
{
lean_object* v___x_1240_; 
v___x_1240_ = lean_obj_once(&l_Lean_IR_instInhabitedExpr_default___closed__1, &l_Lean_IR_instInhabitedExpr_default___closed__1_once, _init_l_Lean_IR_instInhabitedExpr_default___closed__1);
return v___x_1240_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedExpr(void){
_start:
{
lean_object* v___x_1241_; 
v___x_1241_ = l_Lean_IR_instInhabitedExpr_default;
return v___x_1241_;
}
}
static lean_object* _init_l_Lean_IR_instReprParam_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = lean_unsigned_to_nat(5u);
v___x_1258_ = lean_nat_to_int(v___x_1257_);
return v___x_1258_;
}
}
static lean_object* _init_l_Lean_IR_instReprParam_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1262_ = lean_unsigned_to_nat(10u);
v___x_1263_ = lean_nat_to_int(v___x_1262_);
return v___x_1263_;
}
}
static lean_object* _init_l_Lean_IR_instReprParam_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1267_ = lean_unsigned_to_nat(6u);
v___x_1268_ = lean_nat_to_int(v___x_1267_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprParam_repr___redArg(lean_object* v_x_1269_){
_start:
{
lean_object* v_x_1270_; uint8_t v_borrow_1271_; lean_object* v_ty_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; uint8_t v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_x_1270_ = lean_ctor_get(v_x_1269_, 0);
lean_inc(v_x_1270_);
v_borrow_1271_ = lean_ctor_get_uint8(v_x_1269_, sizeof(void*)*2);
v_ty_1272_ = lean_ctor_get(v_x_1269_, 1);
lean_inc(v_ty_1272_);
lean_dec_ref(v_x_1269_);
v___x_1273_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__5));
v___x_1274_ = ((lean_object*)(l_Lean_IR_instReprParam_repr___redArg___closed__3));
v___x_1275_ = lean_obj_once(&l_Lean_IR_instReprParam_repr___redArg___closed__4, &l_Lean_IR_instReprParam_repr___redArg___closed__4_once, _init_l_Lean_IR_instReprParam_repr___redArg___closed__4);
v___x_1276_ = lean_unsigned_to_nat(0u);
v___x_1277_ = l_Lean_IR_instReprVarId_repr___redArg(v_x_1270_);
v___x_1278_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1275_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = 0;
v___x_1280_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1280_, 0, v___x_1278_);
lean_ctor_set_uint8(v___x_1280_, sizeof(void*)*1, v___x_1279_);
v___x_1281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1274_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
v___x_1282_ = ((lean_object*)(l_Array_repr___at___00Lean_IR_instReprIRType_repr_spec__1___closed__2));
v___x_1283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1281_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
v___x_1284_ = lean_box(1);
v___x_1285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1283_);
lean_ctor_set(v___x_1285_, 1, v___x_1284_);
v___x_1286_ = ((lean_object*)(l_Lean_IR_instReprParam_repr___redArg___closed__6));
v___x_1287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1285_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
lean_ctor_set(v___x_1288_, 1, v___x_1273_);
v___x_1289_ = lean_obj_once(&l_Lean_IR_instReprParam_repr___redArg___closed__7, &l_Lean_IR_instReprParam_repr___redArg___closed__7_once, _init_l_Lean_IR_instReprParam_repr___redArg___closed__7);
v___x_1290_ = l_Bool_repr___redArg(v_borrow_1271_);
v___x_1291_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1289_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
v___x_1292_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
lean_ctor_set_uint8(v___x_1292_, sizeof(void*)*1, v___x_1279_);
v___x_1293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1288_);
lean_ctor_set(v___x_1293_, 1, v___x_1292_);
v___x_1294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
lean_ctor_set(v___x_1294_, 1, v___x_1282_);
v___x_1295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
lean_ctor_set(v___x_1295_, 1, v___x_1284_);
v___x_1296_ = ((lean_object*)(l_Lean_IR_instReprParam_repr___redArg___closed__9));
v___x_1297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1295_);
lean_ctor_set(v___x_1297_, 1, v___x_1296_);
v___x_1298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
lean_ctor_set(v___x_1298_, 1, v___x_1273_);
v___x_1299_ = lean_obj_once(&l_Lean_IR_instReprParam_repr___redArg___closed__10, &l_Lean_IR_instReprParam_repr___redArg___closed__10_once, _init_l_Lean_IR_instReprParam_repr___redArg___closed__10);
v___x_1300_ = l_Lean_IR_instReprIRType_repr(v_ty_1272_, v___x_1276_);
v___x_1301_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1299_);
lean_ctor_set(v___x_1301_, 1, v___x_1300_);
v___x_1302_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
lean_ctor_set_uint8(v___x_1302_, sizeof(void*)*1, v___x_1279_);
v___x_1303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1298_);
lean_ctor_set(v___x_1303_, 1, v___x_1302_);
v___x_1304_ = lean_obj_once(&l_Lean_IR_instReprVarId_repr___redArg___closed__10, &l_Lean_IR_instReprVarId_repr___redArg___closed__10_once, _init_l_Lean_IR_instReprVarId_repr___redArg___closed__10);
v___x_1305_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__11));
v___x_1306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
lean_ctor_set(v___x_1306_, 1, v___x_1303_);
v___x_1307_ = ((lean_object*)(l_Lean_IR_instReprVarId_repr___redArg___closed__12));
v___x_1308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1304_);
lean_ctor_set(v___x_1309_, 1, v___x_1308_);
v___x_1310_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
lean_ctor_set_uint8(v___x_1310_, sizeof(void*)*1, v___x_1279_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprParam_repr(lean_object* v_x_1311_, lean_object* v_prec_1312_){
_start:
{
lean_object* v___x_1313_; 
v___x_1313_ = l_Lean_IR_instReprParam_repr___redArg(v_x_1311_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_instReprParam_repr___boxed(lean_object* v_x_1314_, lean_object* v_prec_1315_){
_start:
{
lean_object* v_res_1316_; 
v_res_1316_ = l_Lean_IR_instReprParam_repr(v_x_1314_, v_prec_1315_);
lean_dec(v_prec_1315_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctorIdx(lean_object* v_x_1319_){
_start:
{
if (lean_obj_tag(v_x_1319_) == 0)
{
lean_object* v___x_1320_; 
v___x_1320_ = lean_unsigned_to_nat(0u);
return v___x_1320_;
}
else
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_unsigned_to_nat(1u);
return v___x_1321_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctorIdx___boxed(lean_object* v_x_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Lean_IR_Alt_ctorIdx(v_x_1322_);
lean_dec_ref(v_x_1322_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctorElim___redArg(lean_object* v_t_1324_, lean_object* v_k_1325_){
_start:
{
if (lean_obj_tag(v_t_1324_) == 0)
{
lean_object* v_info_1326_; lean_object* v_b_1327_; lean_object* v___x_1328_; 
v_info_1326_ = lean_ctor_get(v_t_1324_, 0);
lean_inc_ref(v_info_1326_);
v_b_1327_ = lean_ctor_get(v_t_1324_, 1);
lean_inc(v_b_1327_);
lean_dec_ref_known(v_t_1324_, 2);
v___x_1328_ = lean_apply_2(v_k_1325_, v_info_1326_, v_b_1327_);
return v___x_1328_;
}
else
{
lean_object* v_b_1329_; lean_object* v___x_1330_; 
v_b_1329_ = lean_ctor_get(v_t_1324_, 0);
lean_inc(v_b_1329_);
lean_dec_ref_known(v_t_1324_, 1);
v___x_1330_ = lean_apply_1(v_k_1325_, v_b_1329_);
return v___x_1330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctorElim(lean_object* v_motive__1_1331_, lean_object* v_ctorIdx_1332_, lean_object* v_t_1333_, lean_object* v_h_1334_, lean_object* v_k_1335_){
_start:
{
lean_object* v___x_1336_; 
v___x_1336_ = l_Lean_IR_Alt_ctorElim___redArg(v_t_1333_, v_k_1335_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctorElim___boxed(lean_object* v_motive__1_1337_, lean_object* v_ctorIdx_1338_, lean_object* v_t_1339_, lean_object* v_h_1340_, lean_object* v_k_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = l_Lean_IR_Alt_ctorElim(v_motive__1_1337_, v_ctorIdx_1338_, v_t_1339_, v_h_1340_, v_k_1341_);
lean_dec(v_ctorIdx_1338_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctor_elim___redArg(lean_object* v_t_1343_, lean_object* v_ctor_1344_){
_start:
{
lean_object* v___x_1345_; 
v___x_1345_ = l_Lean_IR_Alt_ctorElim___redArg(v_t_1343_, v_ctor_1344_);
return v___x_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_ctor_elim(lean_object* v_motive__1_1346_, lean_object* v_t_1347_, lean_object* v_h_1348_, lean_object* v_ctor_1349_){
_start:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lean_IR_Alt_ctorElim___redArg(v_t_1347_, v_ctor_1349_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_default_elim___redArg(lean_object* v_t_1351_, lean_object* v_default_1352_){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = l_Lean_IR_Alt_ctorElim___redArg(v_t_1351_, v_default_1352_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_default_elim(lean_object* v_motive__1_1354_, lean_object* v_t_1355_, lean_object* v_h_1356_, lean_object* v_default_1357_){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l_Lean_IR_Alt_ctorElim___redArg(v_t_1355_, v_default_1357_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ctorIdx(lean_object* v_x_1359_){
_start:
{
switch(lean_obj_tag(v_x_1359_))
{
case 0:
{
lean_object* v___x_1360_; 
v___x_1360_ = lean_unsigned_to_nat(0u);
return v___x_1360_;
}
case 1:
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_unsigned_to_nat(1u);
return v___x_1361_;
}
case 2:
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_unsigned_to_nat(2u);
return v___x_1362_;
}
case 3:
{
lean_object* v___x_1363_; 
v___x_1363_ = lean_unsigned_to_nat(3u);
return v___x_1363_;
}
case 4:
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_unsigned_to_nat(4u);
return v___x_1364_;
}
case 5:
{
lean_object* v___x_1365_; 
v___x_1365_ = lean_unsigned_to_nat(5u);
return v___x_1365_;
}
case 6:
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_unsigned_to_nat(6u);
return v___x_1366_;
}
case 7:
{
lean_object* v___x_1367_; 
v___x_1367_ = lean_unsigned_to_nat(7u);
return v___x_1367_;
}
case 8:
{
lean_object* v___x_1368_; 
v___x_1368_ = lean_unsigned_to_nat(8u);
return v___x_1368_;
}
case 9:
{
lean_object* v___x_1369_; 
v___x_1369_ = lean_unsigned_to_nat(9u);
return v___x_1369_;
}
case 10:
{
lean_object* v___x_1370_; 
v___x_1370_ = lean_unsigned_to_nat(10u);
return v___x_1370_;
}
case 11:
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_unsigned_to_nat(11u);
return v___x_1371_;
}
default: 
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_unsigned_to_nat(12u);
return v___x_1372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ctorIdx___boxed(lean_object* v_x_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l_Lean_IR_FnBody_ctorIdx(v_x_1373_);
lean_dec(v_x_1373_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ctorElim___redArg(lean_object* v_t_1375_, lean_object* v_k_1376_){
_start:
{
switch(lean_obj_tag(v_t_1375_))
{
case 0:
{
lean_object* v_x_1377_; lean_object* v_ty_1378_; lean_object* v_e_1379_; lean_object* v_b_1380_; lean_object* v___x_1381_; 
v_x_1377_ = lean_ctor_get(v_t_1375_, 0);
lean_inc(v_x_1377_);
v_ty_1378_ = lean_ctor_get(v_t_1375_, 1);
lean_inc(v_ty_1378_);
v_e_1379_ = lean_ctor_get(v_t_1375_, 2);
lean_inc_ref(v_e_1379_);
v_b_1380_ = lean_ctor_get(v_t_1375_, 3);
lean_inc(v_b_1380_);
lean_dec_ref_known(v_t_1375_, 4);
v___x_1381_ = lean_apply_4(v_k_1376_, v_x_1377_, v_ty_1378_, v_e_1379_, v_b_1380_);
return v___x_1381_;
}
case 1:
{
lean_object* v_j_1382_; lean_object* v_xs_1383_; lean_object* v_v_1384_; lean_object* v_b_1385_; lean_object* v___x_1386_; 
v_j_1382_ = lean_ctor_get(v_t_1375_, 0);
lean_inc(v_j_1382_);
v_xs_1383_ = lean_ctor_get(v_t_1375_, 1);
lean_inc_ref(v_xs_1383_);
v_v_1384_ = lean_ctor_get(v_t_1375_, 2);
lean_inc(v_v_1384_);
v_b_1385_ = lean_ctor_get(v_t_1375_, 3);
lean_inc(v_b_1385_);
lean_dec_ref_known(v_t_1375_, 4);
v___x_1386_ = lean_apply_4(v_k_1376_, v_j_1382_, v_xs_1383_, v_v_1384_, v_b_1385_);
return v___x_1386_;
}
case 3:
{
lean_object* v_x_1387_; lean_object* v_cidx_1388_; lean_object* v_b_1389_; lean_object* v___x_1390_; 
v_x_1387_ = lean_ctor_get(v_t_1375_, 0);
lean_inc(v_x_1387_);
v_cidx_1388_ = lean_ctor_get(v_t_1375_, 1);
lean_inc(v_cidx_1388_);
v_b_1389_ = lean_ctor_get(v_t_1375_, 2);
lean_inc(v_b_1389_);
lean_dec_ref_known(v_t_1375_, 3);
v___x_1390_ = lean_apply_3(v_k_1376_, v_x_1387_, v_cidx_1388_, v_b_1389_);
return v___x_1390_;
}
case 5:
{
lean_object* v_x_1391_; lean_object* v_i_1392_; lean_object* v_offset_1393_; lean_object* v_y_1394_; lean_object* v_ty_1395_; lean_object* v_b_1396_; lean_object* v___x_1397_; 
v_x_1391_ = lean_ctor_get(v_t_1375_, 0);
lean_inc(v_x_1391_);
v_i_1392_ = lean_ctor_get(v_t_1375_, 1);
lean_inc(v_i_1392_);
v_offset_1393_ = lean_ctor_get(v_t_1375_, 2);
lean_inc(v_offset_1393_);
v_y_1394_ = lean_ctor_get(v_t_1375_, 3);
lean_inc(v_y_1394_);
v_ty_1395_ = lean_ctor_get(v_t_1375_, 4);
lean_inc(v_ty_1395_);
v_b_1396_ = lean_ctor_get(v_t_1375_, 5);
lean_inc(v_b_1396_);
lean_dec_ref_known(v_t_1375_, 6);
v___x_1397_ = lean_apply_6(v_k_1376_, v_x_1391_, v_i_1392_, v_offset_1393_, v_y_1394_, v_ty_1395_, v_b_1396_);
return v___x_1397_;
}
case 6:
{
lean_object* v_x_1398_; lean_object* v_n_1399_; uint8_t v_c_1400_; uint8_t v_persistent_1401_; lean_object* v_b_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v_x_1398_ = lean_ctor_get(v_t_1375_, 0);
lean_inc(v_x_1398_);
v_n_1399_ = lean_ctor_get(v_t_1375_, 1);
lean_inc(v_n_1399_);
v_c_1400_ = lean_ctor_get_uint8(v_t_1375_, sizeof(void*)*3);
v_persistent_1401_ = lean_ctor_get_uint8(v_t_1375_, sizeof(void*)*3 + 1);
v_b_1402_ = lean_ctor_get(v_t_1375_, 2);
lean_inc(v_b_1402_);
lean_dec_ref_known(v_t_1375_, 3);
v___x_1403_ = lean_box(v_c_1400_);
v___x_1404_ = lean_box(v_persistent_1401_);
v___x_1405_ = lean_apply_5(v_k_1376_, v_x_1398_, v_n_1399_, v___x_1403_, v___x_1404_, v_b_1402_);
return v___x_1405_;
}
case 7:
{
lean_object* v_x_1406_; lean_object* v_n_1407_; uint8_t v_c_1408_; uint8_t v_persistent_1409_; lean_object* v_b_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v_x_1406_ = lean_ctor_get(v_t_1375_, 0);
lean_inc(v_x_1406_);
v_n_1407_ = lean_ctor_get(v_t_1375_, 1);
lean_inc(v_n_1407_);
v_c_1408_ = lean_ctor_get_uint8(v_t_1375_, sizeof(void*)*3);
v_persistent_1409_ = lean_ctor_get_uint8(v_t_1375_, sizeof(void*)*3 + 1);
v_b_1410_ = lean_ctor_get(v_t_1375_, 2);
lean_inc(v_b_1410_);
lean_dec_ref_known(v_t_1375_, 3);
v___x_1411_ = lean_box(v_c_1408_);
v___x_1412_ = lean_box(v_persistent_1409_);
v___x_1413_ = lean_apply_5(v_k_1376_, v_x_1406_, v_n_1407_, v___x_1411_, v___x_1412_, v_b_1410_);
return v___x_1413_;
}
case 8:
{
lean_object* v_x_1414_; lean_object* v_b_1415_; lean_object* v___x_1416_; 
v_x_1414_ = lean_ctor_get(v_t_1375_, 0);
lean_inc(v_x_1414_);
v_b_1415_ = lean_ctor_get(v_t_1375_, 1);
lean_inc(v_b_1415_);
lean_dec_ref_known(v_t_1375_, 2);
v___x_1416_ = lean_apply_2(v_k_1376_, v_x_1414_, v_b_1415_);
return v___x_1416_;
}
case 9:
{
lean_object* v_tid_1417_; lean_object* v_x_1418_; lean_object* v_xType_1419_; lean_object* v_cs_1420_; lean_object* v___x_1421_; 
v_tid_1417_ = lean_ctor_get(v_t_1375_, 0);
lean_inc(v_tid_1417_);
v_x_1418_ = lean_ctor_get(v_t_1375_, 1);
lean_inc(v_x_1418_);
v_xType_1419_ = lean_ctor_get(v_t_1375_, 2);
lean_inc(v_xType_1419_);
v_cs_1420_ = lean_ctor_get(v_t_1375_, 3);
lean_inc_ref(v_cs_1420_);
lean_dec_ref_known(v_t_1375_, 4);
v___x_1421_ = lean_apply_4(v_k_1376_, v_tid_1417_, v_x_1418_, v_xType_1419_, v_cs_1420_);
return v___x_1421_;
}
case 10:
{
lean_object* v_x_1422_; lean_object* v___x_1423_; 
v_x_1422_ = lean_ctor_get(v_t_1375_, 0);
lean_inc(v_x_1422_);
lean_dec_ref_known(v_t_1375_, 1);
v___x_1423_ = lean_apply_1(v_k_1376_, v_x_1422_);
return v___x_1423_;
}
case 11:
{
lean_object* v_j_1424_; lean_object* v_ys_1425_; lean_object* v___x_1426_; 
v_j_1424_ = lean_ctor_get(v_t_1375_, 0);
lean_inc(v_j_1424_);
v_ys_1425_ = lean_ctor_get(v_t_1375_, 1);
lean_inc_ref(v_ys_1425_);
lean_dec_ref_known(v_t_1375_, 2);
v___x_1426_ = lean_apply_2(v_k_1376_, v_j_1424_, v_ys_1425_);
return v___x_1426_;
}
case 12:
{
return v_k_1376_;
}
default: 
{
lean_object* v_x_1427_; lean_object* v_i_1428_; lean_object* v_y_1429_; lean_object* v_b_1430_; lean_object* v___x_1431_; 
v_x_1427_ = lean_ctor_get(v_t_1375_, 0);
lean_inc(v_x_1427_);
v_i_1428_ = lean_ctor_get(v_t_1375_, 1);
lean_inc(v_i_1428_);
v_y_1429_ = lean_ctor_get(v_t_1375_, 2);
lean_inc(v_y_1429_);
v_b_1430_ = lean_ctor_get(v_t_1375_, 3);
lean_inc(v_b_1430_);
lean_dec(v_t_1375_);
v___x_1431_ = lean_apply_4(v_k_1376_, v_x_1427_, v_i_1428_, v_y_1429_, v_b_1430_);
return v___x_1431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ctorElim(lean_object* v_motive__2_1432_, lean_object* v_ctorIdx_1433_, lean_object* v_t_1434_, lean_object* v_h_1435_, lean_object* v_k_1436_){
_start:
{
lean_object* v___x_1437_; 
v___x_1437_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1434_, v_k_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ctorElim___boxed(lean_object* v_motive__2_1438_, lean_object* v_ctorIdx_1439_, lean_object* v_t_1440_, lean_object* v_h_1441_, lean_object* v_k_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Lean_IR_FnBody_ctorElim(v_motive__2_1438_, v_ctorIdx_1439_, v_t_1440_, v_h_1441_, v_k_1442_);
lean_dec(v_ctorIdx_1439_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_vdecl_elim___redArg(lean_object* v_t_1444_, lean_object* v_vdecl_1445_){
_start:
{
lean_object* v___x_1446_; 
v___x_1446_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1444_, v_vdecl_1445_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_vdecl_elim(lean_object* v_motive__2_1447_, lean_object* v_t_1448_, lean_object* v_h_1449_, lean_object* v_vdecl_1450_){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1448_, v_vdecl_1450_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_jdecl_elim___redArg(lean_object* v_t_1452_, lean_object* v_jdecl_1453_){
_start:
{
lean_object* v___x_1454_; 
v___x_1454_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1452_, v_jdecl_1453_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_jdecl_elim(lean_object* v_motive__2_1455_, lean_object* v_t_1456_, lean_object* v_h_1457_, lean_object* v_jdecl_1458_){
_start:
{
lean_object* v___x_1459_; 
v___x_1459_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1456_, v_jdecl_1458_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_set_elim___redArg(lean_object* v_t_1460_, lean_object* v_set_1461_){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1460_, v_set_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_set_elim(lean_object* v_motive__2_1463_, lean_object* v_t_1464_, lean_object* v_h_1465_, lean_object* v_set_1466_){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1464_, v_set_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_setTag_elim___redArg(lean_object* v_t_1468_, lean_object* v_setTag_1469_){
_start:
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1468_, v_setTag_1469_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_setTag_elim(lean_object* v_motive__2_1471_, lean_object* v_t_1472_, lean_object* v_h_1473_, lean_object* v_setTag_1474_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1472_, v_setTag_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_uset_elim___redArg(lean_object* v_t_1476_, lean_object* v_uset_1477_){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1476_, v_uset_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_uset_elim(lean_object* v_motive__2_1479_, lean_object* v_t_1480_, lean_object* v_h_1481_, lean_object* v_uset_1482_){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1480_, v_uset_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_sset_elim___redArg(lean_object* v_t_1484_, lean_object* v_sset_1485_){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1484_, v_sset_1485_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_sset_elim(lean_object* v_motive__2_1487_, lean_object* v_t_1488_, lean_object* v_h_1489_, lean_object* v_sset_1490_){
_start:
{
lean_object* v___x_1491_; 
v___x_1491_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1488_, v_sset_1490_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_inc_elim___redArg(lean_object* v_t_1492_, lean_object* v_inc_1493_){
_start:
{
lean_object* v___x_1494_; 
v___x_1494_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1492_, v_inc_1493_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_inc_elim(lean_object* v_motive__2_1495_, lean_object* v_t_1496_, lean_object* v_h_1497_, lean_object* v_inc_1498_){
_start:
{
lean_object* v___x_1499_; 
v___x_1499_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1496_, v_inc_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_dec_elim___redArg(lean_object* v_t_1500_, lean_object* v_dec_1501_){
_start:
{
lean_object* v___x_1502_; 
v___x_1502_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1500_, v_dec_1501_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_dec_elim(lean_object* v_motive__2_1503_, lean_object* v_t_1504_, lean_object* v_h_1505_, lean_object* v_dec_1506_){
_start:
{
lean_object* v___x_1507_; 
v___x_1507_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1504_, v_dec_1506_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_del_elim___redArg(lean_object* v_t_1508_, lean_object* v_del_1509_){
_start:
{
lean_object* v___x_1510_; 
v___x_1510_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1508_, v_del_1509_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_del_elim(lean_object* v_motive__2_1511_, lean_object* v_t_1512_, lean_object* v_h_1513_, lean_object* v_del_1514_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1512_, v_del_1514_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_case_elim___redArg(lean_object* v_t_1516_, lean_object* v_case_1517_){
_start:
{
lean_object* v___x_1518_; 
v___x_1518_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1516_, v_case_1517_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_case_elim(lean_object* v_motive__2_1519_, lean_object* v_t_1520_, lean_object* v_h_1521_, lean_object* v_case_1522_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1520_, v_case_1522_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ret_elim___redArg(lean_object* v_t_1524_, lean_object* v_ret_1525_){
_start:
{
lean_object* v___x_1526_; 
v___x_1526_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1524_, v_ret_1525_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_ret_elim(lean_object* v_motive__2_1527_, lean_object* v_t_1528_, lean_object* v_h_1529_, lean_object* v_ret_1530_){
_start:
{
lean_object* v___x_1531_; 
v___x_1531_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1528_, v_ret_1530_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_jmp_elim___redArg(lean_object* v_t_1532_, lean_object* v_jmp_1533_){
_start:
{
lean_object* v___x_1534_; 
v___x_1534_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1532_, v_jmp_1533_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_jmp_elim(lean_object* v_motive__2_1535_, lean_object* v_t_1536_, lean_object* v_h_1537_, lean_object* v_jmp_1538_){
_start:
{
lean_object* v___x_1539_; 
v___x_1539_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1536_, v_jmp_1538_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_unreachable_elim___redArg(lean_object* v_t_1540_, lean_object* v_unreachable_1541_){
_start:
{
lean_object* v___x_1542_; 
v___x_1542_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1540_, v_unreachable_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_unreachable_elim(lean_object* v_motive__2_1543_, lean_object* v_t_1544_, lean_object* v_h_1545_, lean_object* v_unreachable_1546_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Lean_IR_FnBody_ctorElim___redArg(v_t_1544_, v_unreachable_1546_);
return v___x_1547_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedFnBody_default__1___closed__1(void){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1550_ = ((lean_object*)(l_Lean_IR_instInhabitedFnBody_default__1___closed__0));
v___x_1551_ = lean_box(0);
v___x_1552_ = lean_unsigned_to_nat(0u);
v___x_1553_ = lean_obj_once(&l_Lean_IR_instInhabitedCtorInfo_default___closed__0, &l_Lean_IR_instInhabitedCtorInfo_default___closed__0_once, _init_l_Lean_IR_instInhabitedCtorInfo_default___closed__0);
v___x_1554_ = lean_alloc_ctor(9, 4, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1553_);
lean_ctor_set(v___x_1554_, 1, v___x_1552_);
lean_ctor_set(v___x_1554_, 2, v___x_1551_);
lean_ctor_set(v___x_1554_, 3, v___x_1550_);
return v___x_1554_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedFnBody_default__1(void){
_start:
{
lean_object* v___x_1555_; 
v___x_1555_ = lean_obj_once(&l_Lean_IR_instInhabitedFnBody_default__1___closed__1, &l_Lean_IR_instInhabitedFnBody_default__1___closed__1_once, _init_l_Lean_IR_instInhabitedFnBody_default__1___closed__1);
return v___x_1555_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedFnBody(void){
_start:
{
lean_object* v___x_1556_; 
v___x_1556_ = l_Lean_IR_instInhabitedFnBody_default__1;
return v___x_1556_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedAlt_default__1___closed__0(void){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1557_ = l_Lean_IR_instInhabitedFnBody_default__1;
v___x_1558_ = l_Lean_IR_instInhabitedCtorInfo_default;
v___x_1559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
lean_ctor_set(v___x_1559_, 1, v___x_1557_);
return v___x_1559_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedAlt_default__1(void){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_obj_once(&l_Lean_IR_instInhabitedAlt_default__1___closed__0, &l_Lean_IR_instInhabitedAlt_default__1___closed__0_once, _init_l_Lean_IR_instInhabitedAlt_default__1___closed__0);
return v___x_1560_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedAlt(void){
_start:
{
lean_object* v___x_1561_; 
v___x_1561_ = l_Lean_IR_instInhabitedAlt_default__1;
return v___x_1561_;
}
}
static lean_object* _init_l_Lean_IR_FnBody_nil(void){
_start:
{
lean_object* v___x_1562_; 
v___x_1562_ = lean_box(12);
return v___x_1562_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_FnBody_isTerminal(lean_object* v_x_1563_){
_start:
{
switch(lean_obj_tag(v_x_1563_))
{
case 9:
{
uint8_t v___x_1564_; 
v___x_1564_ = 1;
return v___x_1564_;
}
case 10:
{
uint8_t v___x_1565_; 
v___x_1565_ = 1;
return v___x_1565_;
}
case 11:
{
uint8_t v___x_1566_; 
v___x_1566_ = 1;
return v___x_1566_;
}
case 12:
{
uint8_t v___x_1567_; 
v___x_1567_ = 1;
return v___x_1567_;
}
default: 
{
uint8_t v___x_1568_; 
v___x_1568_ = 0;
return v___x_1568_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_isTerminal___boxed(lean_object* v_x_1569_){
_start:
{
uint8_t v_res_1570_; lean_object* v_r_1571_; 
v_res_1570_ = l_Lean_IR_FnBody_isTerminal(v_x_1569_);
lean_dec(v_x_1569_);
v_r_1571_ = lean_box(v_res_1570_);
return v_r_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_body(lean_object* v_x_1572_){
_start:
{
switch(lean_obj_tag(v_x_1572_))
{
case 0:
{
lean_object* v_b_1573_; 
v_b_1573_ = lean_ctor_get(v_x_1572_, 3);
lean_inc(v_b_1573_);
return v_b_1573_;
}
case 1:
{
lean_object* v_b_1574_; 
v_b_1574_ = lean_ctor_get(v_x_1572_, 3);
lean_inc(v_b_1574_);
return v_b_1574_;
}
case 2:
{
lean_object* v_b_1575_; 
v_b_1575_ = lean_ctor_get(v_x_1572_, 3);
lean_inc(v_b_1575_);
return v_b_1575_;
}
case 4:
{
lean_object* v_b_1576_; 
v_b_1576_ = lean_ctor_get(v_x_1572_, 3);
lean_inc(v_b_1576_);
return v_b_1576_;
}
case 5:
{
lean_object* v_b_1577_; 
v_b_1577_ = lean_ctor_get(v_x_1572_, 5);
lean_inc(v_b_1577_);
return v_b_1577_;
}
case 3:
{
lean_object* v_b_1578_; 
v_b_1578_ = lean_ctor_get(v_x_1572_, 2);
lean_inc(v_b_1578_);
return v_b_1578_;
}
case 6:
{
lean_object* v_b_1579_; 
v_b_1579_ = lean_ctor_get(v_x_1572_, 2);
lean_inc(v_b_1579_);
return v_b_1579_;
}
case 7:
{
lean_object* v_b_1580_; 
v_b_1580_ = lean_ctor_get(v_x_1572_, 2);
lean_inc(v_b_1580_);
return v_b_1580_;
}
case 8:
{
lean_object* v_b_1581_; 
v_b_1581_ = lean_ctor_get(v_x_1572_, 1);
lean_inc(v_b_1581_);
return v_b_1581_;
}
default: 
{
lean_inc(v_x_1572_);
return v_x_1572_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_body___boxed(lean_object* v_x_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lean_IR_FnBody_body(v_x_1582_);
lean_dec(v_x_1582_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_setBody(lean_object* v_x_1584_, lean_object* v_x_1585_){
_start:
{
switch(lean_obj_tag(v_x_1584_))
{
case 0:
{
lean_object* v_x_1586_; lean_object* v_ty_1587_; lean_object* v_e_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1595_; 
v_x_1586_ = lean_ctor_get(v_x_1584_, 0);
v_ty_1587_ = lean_ctor_get(v_x_1584_, 1);
v_e_1588_ = lean_ctor_get(v_x_1584_, 2);
v_isSharedCheck_1595_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1595_ == 0)
{
lean_object* v_unused_1596_; 
v_unused_1596_ = lean_ctor_get(v_x_1584_, 3);
lean_dec(v_unused_1596_);
v___x_1590_ = v_x_1584_;
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_e_1588_);
lean_inc(v_ty_1587_);
lean_inc(v_x_1586_);
lean_dec(v_x_1584_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1593_; 
if (v_isShared_1591_ == 0)
{
lean_ctor_set(v___x_1590_, 3, v_x_1585_);
v___x_1593_ = v___x_1590_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v_x_1586_);
lean_ctor_set(v_reuseFailAlloc_1594_, 1, v_ty_1587_);
lean_ctor_set(v_reuseFailAlloc_1594_, 2, v_e_1588_);
lean_ctor_set(v_reuseFailAlloc_1594_, 3, v_x_1585_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
case 1:
{
lean_object* v_j_1597_; lean_object* v_xs_1598_; lean_object* v_v_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
v_j_1597_ = lean_ctor_get(v_x_1584_, 0);
v_xs_1598_ = lean_ctor_get(v_x_1584_, 1);
v_v_1599_ = lean_ctor_get(v_x_1584_, 2);
v_isSharedCheck_1606_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1606_ == 0)
{
lean_object* v_unused_1607_; 
v_unused_1607_ = lean_ctor_get(v_x_1584_, 3);
lean_dec(v_unused_1607_);
v___x_1601_ = v_x_1584_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_v_1599_);
lean_inc(v_xs_1598_);
lean_inc(v_j_1597_);
lean_dec(v_x_1584_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
lean_ctor_set(v___x_1601_, 3, v_x_1585_);
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_j_1597_);
lean_ctor_set(v_reuseFailAlloc_1605_, 1, v_xs_1598_);
lean_ctor_set(v_reuseFailAlloc_1605_, 2, v_v_1599_);
lean_ctor_set(v_reuseFailAlloc_1605_, 3, v_x_1585_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
case 2:
{
lean_object* v_x_1608_; lean_object* v_i_1609_; lean_object* v_y_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
v_x_1608_ = lean_ctor_get(v_x_1584_, 0);
v_i_1609_ = lean_ctor_get(v_x_1584_, 1);
v_y_1610_ = lean_ctor_get(v_x_1584_, 2);
v_isSharedCheck_1617_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1617_ == 0)
{
lean_object* v_unused_1618_; 
v_unused_1618_ = lean_ctor_get(v_x_1584_, 3);
lean_dec(v_unused_1618_);
v___x_1612_ = v_x_1584_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_y_1610_);
lean_inc(v_i_1609_);
lean_inc(v_x_1608_);
lean_dec(v_x_1584_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1615_; 
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 3, v_x_1585_);
v___x_1615_ = v___x_1612_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_x_1608_);
lean_ctor_set(v_reuseFailAlloc_1616_, 1, v_i_1609_);
lean_ctor_set(v_reuseFailAlloc_1616_, 2, v_y_1610_);
lean_ctor_set(v_reuseFailAlloc_1616_, 3, v_x_1585_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
case 4:
{
lean_object* v_x_1619_; lean_object* v_i_1620_; lean_object* v_y_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1628_; 
v_x_1619_ = lean_ctor_get(v_x_1584_, 0);
v_i_1620_ = lean_ctor_get(v_x_1584_, 1);
v_y_1621_ = lean_ctor_get(v_x_1584_, 2);
v_isSharedCheck_1628_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1628_ == 0)
{
lean_object* v_unused_1629_; 
v_unused_1629_ = lean_ctor_get(v_x_1584_, 3);
lean_dec(v_unused_1629_);
v___x_1623_ = v_x_1584_;
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_y_1621_);
lean_inc(v_i_1620_);
lean_inc(v_x_1619_);
lean_dec(v_x_1584_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1626_; 
if (v_isShared_1624_ == 0)
{
lean_ctor_set(v___x_1623_, 3, v_x_1585_);
v___x_1626_ = v___x_1623_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_x_1619_);
lean_ctor_set(v_reuseFailAlloc_1627_, 1, v_i_1620_);
lean_ctor_set(v_reuseFailAlloc_1627_, 2, v_y_1621_);
lean_ctor_set(v_reuseFailAlloc_1627_, 3, v_x_1585_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
return v___x_1626_;
}
}
}
case 5:
{
lean_object* v_x_1630_; lean_object* v_i_1631_; lean_object* v_offset_1632_; lean_object* v_y_1633_; lean_object* v_ty_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1641_; 
v_x_1630_ = lean_ctor_get(v_x_1584_, 0);
v_i_1631_ = lean_ctor_get(v_x_1584_, 1);
v_offset_1632_ = lean_ctor_get(v_x_1584_, 2);
v_y_1633_ = lean_ctor_get(v_x_1584_, 3);
v_ty_1634_ = lean_ctor_get(v_x_1584_, 4);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1641_ == 0)
{
lean_object* v_unused_1642_; 
v_unused_1642_ = lean_ctor_get(v_x_1584_, 5);
lean_dec(v_unused_1642_);
v___x_1636_ = v_x_1584_;
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_ty_1634_);
lean_inc(v_y_1633_);
lean_inc(v_offset_1632_);
lean_inc(v_i_1631_);
lean_inc(v_x_1630_);
lean_dec(v_x_1584_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1639_; 
if (v_isShared_1637_ == 0)
{
lean_ctor_set(v___x_1636_, 5, v_x_1585_);
v___x_1639_ = v___x_1636_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(5, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_x_1630_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v_i_1631_);
lean_ctor_set(v_reuseFailAlloc_1640_, 2, v_offset_1632_);
lean_ctor_set(v_reuseFailAlloc_1640_, 3, v_y_1633_);
lean_ctor_set(v_reuseFailAlloc_1640_, 4, v_ty_1634_);
lean_ctor_set(v_reuseFailAlloc_1640_, 5, v_x_1585_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
case 3:
{
lean_object* v_x_1643_; lean_object* v_cidx_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1651_; 
v_x_1643_ = lean_ctor_get(v_x_1584_, 0);
v_cidx_1644_ = lean_ctor_get(v_x_1584_, 1);
v_isSharedCheck_1651_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1651_ == 0)
{
lean_object* v_unused_1652_; 
v_unused_1652_ = lean_ctor_get(v_x_1584_, 2);
lean_dec(v_unused_1652_);
v___x_1646_ = v_x_1584_;
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_cidx_1644_);
lean_inc(v_x_1643_);
lean_dec(v_x_1584_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 2, v_x_1585_);
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_x_1643_);
lean_ctor_set(v_reuseFailAlloc_1650_, 1, v_cidx_1644_);
lean_ctor_set(v_reuseFailAlloc_1650_, 2, v_x_1585_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
case 6:
{
lean_object* v_x_1653_; lean_object* v_n_1654_; uint8_t v_c_1655_; uint8_t v_persistent_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
v_x_1653_ = lean_ctor_get(v_x_1584_, 0);
v_n_1654_ = lean_ctor_get(v_x_1584_, 1);
v_c_1655_ = lean_ctor_get_uint8(v_x_1584_, sizeof(void*)*3);
v_persistent_1656_ = lean_ctor_get_uint8(v_x_1584_, sizeof(void*)*3 + 1);
v_isSharedCheck_1663_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1663_ == 0)
{
lean_object* v_unused_1664_; 
v_unused_1664_ = lean_ctor_get(v_x_1584_, 2);
lean_dec(v_unused_1664_);
v___x_1658_ = v_x_1584_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_n_1654_);
lean_inc(v_x_1653_);
lean_dec(v_x_1584_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 2, v_x_1585_);
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(6, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_x_1653_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v_n_1654_);
lean_ctor_set(v_reuseFailAlloc_1662_, 2, v_x_1585_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*3, v_c_1655_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*3 + 1, v_persistent_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
case 7:
{
lean_object* v_x_1665_; lean_object* v_n_1666_; uint8_t v_c_1667_; uint8_t v_persistent_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
v_x_1665_ = lean_ctor_get(v_x_1584_, 0);
v_n_1666_ = lean_ctor_get(v_x_1584_, 1);
v_c_1667_ = lean_ctor_get_uint8(v_x_1584_, sizeof(void*)*3);
v_persistent_1668_ = lean_ctor_get_uint8(v_x_1584_, sizeof(void*)*3 + 1);
v_isSharedCheck_1675_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1675_ == 0)
{
lean_object* v_unused_1676_; 
v_unused_1676_ = lean_ctor_get(v_x_1584_, 2);
lean_dec(v_unused_1676_);
v___x_1670_ = v_x_1584_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_n_1666_);
lean_inc(v_x_1665_);
lean_dec(v_x_1584_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
lean_ctor_set(v___x_1670_, 2, v_x_1585_);
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(7, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_x_1665_);
lean_ctor_set(v_reuseFailAlloc_1674_, 1, v_n_1666_);
lean_ctor_set(v_reuseFailAlloc_1674_, 2, v_x_1585_);
lean_ctor_set_uint8(v_reuseFailAlloc_1674_, sizeof(void*)*3, v_c_1667_);
lean_ctor_set_uint8(v_reuseFailAlloc_1674_, sizeof(void*)*3 + 1, v_persistent_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
case 8:
{
lean_object* v_x_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1684_; 
v_x_1677_ = lean_ctor_get(v_x_1584_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v_x_1584_);
if (v_isSharedCheck_1684_ == 0)
{
lean_object* v_unused_1685_; 
v_unused_1685_ = lean_ctor_get(v_x_1584_, 1);
lean_dec(v_unused_1685_);
v___x_1679_ = v_x_1584_;
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_x_1677_);
lean_dec(v_x_1584_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
lean_ctor_set(v___x_1679_, 1, v_x_1585_);
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_x_1677_);
lean_ctor_set(v_reuseFailAlloc_1683_, 1, v_x_1585_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
default: 
{
lean_dec(v_x_1585_);
return v_x_1584_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_resetBody(lean_object* v_b_1686_){
_start:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = lean_box(12);
v___x_1688_ = l_Lean_IR_FnBody_setBody(v_b_1686_, v___x_1687_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_split(lean_object* v_b_1689_){
_start:
{
lean_object* v___y_1691_; 
switch(lean_obj_tag(v_b_1689_))
{
case 0:
{
lean_object* v_b_1695_; 
v_b_1695_ = lean_ctor_get(v_b_1689_, 3);
lean_inc(v_b_1695_);
v___y_1691_ = v_b_1695_;
goto v___jp_1690_;
}
case 1:
{
lean_object* v_b_1696_; 
v_b_1696_ = lean_ctor_get(v_b_1689_, 3);
lean_inc(v_b_1696_);
v___y_1691_ = v_b_1696_;
goto v___jp_1690_;
}
case 2:
{
lean_object* v_b_1697_; 
v_b_1697_ = lean_ctor_get(v_b_1689_, 3);
lean_inc(v_b_1697_);
v___y_1691_ = v_b_1697_;
goto v___jp_1690_;
}
case 4:
{
lean_object* v_b_1698_; 
v_b_1698_ = lean_ctor_get(v_b_1689_, 3);
lean_inc(v_b_1698_);
v___y_1691_ = v_b_1698_;
goto v___jp_1690_;
}
case 5:
{
lean_object* v_b_1699_; 
v_b_1699_ = lean_ctor_get(v_b_1689_, 5);
lean_inc(v_b_1699_);
v___y_1691_ = v_b_1699_;
goto v___jp_1690_;
}
case 3:
{
lean_object* v_b_1700_; 
v_b_1700_ = lean_ctor_get(v_b_1689_, 2);
lean_inc(v_b_1700_);
v___y_1691_ = v_b_1700_;
goto v___jp_1690_;
}
case 6:
{
lean_object* v_b_1701_; 
v_b_1701_ = lean_ctor_get(v_b_1689_, 2);
lean_inc(v_b_1701_);
v___y_1691_ = v_b_1701_;
goto v___jp_1690_;
}
case 7:
{
lean_object* v_b_1702_; 
v_b_1702_ = lean_ctor_get(v_b_1689_, 2);
lean_inc(v_b_1702_);
v___y_1691_ = v_b_1702_;
goto v___jp_1690_;
}
case 8:
{
lean_object* v_b_1703_; 
v_b_1703_ = lean_ctor_get(v_b_1689_, 1);
lean_inc(v_b_1703_);
v___y_1691_ = v_b_1703_;
goto v___jp_1690_;
}
default: 
{
lean_inc(v_b_1689_);
v___y_1691_ = v_b_1689_;
goto v___jp_1690_;
}
}
v___jp_1690_:
{
lean_object* v___x_1692_; lean_object* v_c_1693_; lean_object* v___x_1694_; 
v___x_1692_ = lean_box(12);
v_c_1693_ = l_Lean_IR_FnBody_setBody(v_b_1689_, v___x_1692_);
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v_c_1693_);
lean_ctor_set(v___x_1694_, 1, v___y_1691_);
return v___x_1694_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_body(lean_object* v_x_1704_){
_start:
{
if (lean_obj_tag(v_x_1704_) == 0)
{
lean_object* v_b_1705_; 
v_b_1705_ = lean_ctor_get(v_x_1704_, 1);
lean_inc(v_b_1705_);
return v_b_1705_;
}
else
{
lean_object* v_b_1706_; 
v_b_1706_ = lean_ctor_get(v_x_1704_, 0);
lean_inc(v_b_1706_);
return v_b_1706_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_body___boxed(lean_object* v_x_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l_Lean_IR_Alt_body(v_x_1707_);
lean_dec_ref(v_x_1707_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_setBody(lean_object* v_x_1709_, lean_object* v_x_1710_){
_start:
{
if (lean_obj_tag(v_x_1709_) == 0)
{
lean_object* v_info_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1718_; 
v_info_1711_ = lean_ctor_get(v_x_1709_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v_x_1709_);
if (v_isSharedCheck_1718_ == 0)
{
lean_object* v_unused_1719_; 
v_unused_1719_ = lean_ctor_get(v_x_1709_, 1);
lean_dec(v_unused_1719_);
v___x_1713_ = v_x_1709_;
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_info_1711_);
lean_dec(v_x_1709_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 1, v_x_1710_);
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_info_1711_);
lean_ctor_set(v_reuseFailAlloc_1717_, 1, v_x_1710_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
else
{
lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1726_; 
v_isSharedCheck_1726_ = !lean_is_exclusive(v_x_1709_);
if (v_isSharedCheck_1726_ == 0)
{
lean_object* v_unused_1727_; 
v_unused_1727_ = lean_ctor_get(v_x_1709_, 0);
lean_dec(v_unused_1727_);
v___x_1721_ = v_x_1709_;
v_isShared_1722_ = v_isSharedCheck_1726_;
goto v_resetjp_1720_;
}
else
{
lean_dec(v_x_1709_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1726_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1724_; 
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 0, v_x_1710_);
v___x_1724_ = v___x_1721_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v_x_1710_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_modifyBody(lean_object* v_f_1728_, lean_object* v_x_1729_){
_start:
{
if (lean_obj_tag(v_x_1729_) == 0)
{
lean_object* v_info_1730_; lean_object* v_b_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1739_; 
v_info_1730_ = lean_ctor_get(v_x_1729_, 0);
v_b_1731_ = lean_ctor_get(v_x_1729_, 1);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_x_1729_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1733_ = v_x_1729_;
v_isShared_1734_ = v_isSharedCheck_1739_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_b_1731_);
lean_inc(v_info_1730_);
lean_dec(v_x_1729_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1739_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1735_; lean_object* v___x_1737_; 
v___x_1735_ = lean_apply_1(v_f_1728_, v_b_1731_);
if (v_isShared_1734_ == 0)
{
lean_ctor_set(v___x_1733_, 1, v___x_1735_);
v___x_1737_ = v___x_1733_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_info_1730_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v___x_1735_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
else
{
lean_object* v_b_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1748_; 
v_b_1740_ = lean_ctor_get(v_x_1729_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v_x_1729_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1742_ = v_x_1729_;
v_isShared_1743_ = v_isSharedCheck_1748_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_b_1740_);
lean_dec(v_x_1729_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1748_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1744_; lean_object* v___x_1746_; 
v___x_1744_ = lean_apply_1(v_f_1728_, v_b_1740_);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 0, v___x_1744_);
v___x_1746_ = v___x_1742_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1744_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_modifyBodyM___redArg___lam__0(lean_object* v_info_1749_, lean_object* v_b_1750_){
_start:
{
lean_object* v___x_1751_; 
v___x_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1751_, 0, v_info_1749_);
lean_ctor_set(v___x_1751_, 1, v_b_1750_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_modifyBodyM___redArg___lam__1(lean_object* v_b_1752_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1753_, 0, v_b_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_modifyBodyM___redArg(lean_object* v_inst_1755_, lean_object* v_f_1756_, lean_object* v_x_1757_){
_start:
{
lean_object* v_toApplicative_1758_; 
v_toApplicative_1758_ = lean_ctor_get(v_inst_1755_, 0);
lean_inc_ref(v_toApplicative_1758_);
lean_dec_ref(v_inst_1755_);
if (lean_obj_tag(v_x_1757_) == 0)
{
lean_object* v_toFunctor_1759_; lean_object* v_info_1760_; lean_object* v_b_1761_; lean_object* v_map_1762_; lean_object* v___f_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; 
v_toFunctor_1759_ = lean_ctor_get(v_toApplicative_1758_, 0);
lean_inc_ref(v_toFunctor_1759_);
lean_dec_ref(v_toApplicative_1758_);
v_info_1760_ = lean_ctor_get(v_x_1757_, 0);
lean_inc_ref(v_info_1760_);
v_b_1761_ = lean_ctor_get(v_x_1757_, 1);
lean_inc(v_b_1761_);
lean_dec_ref_known(v_x_1757_, 2);
v_map_1762_ = lean_ctor_get(v_toFunctor_1759_, 0);
lean_inc(v_map_1762_);
lean_dec_ref(v_toFunctor_1759_);
v___f_1763_ = lean_alloc_closure((void*)(l_Lean_IR_Alt_modifyBodyM___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1763_, 0, v_info_1760_);
v___x_1764_ = lean_apply_1(v_f_1756_, v_b_1761_);
v___x_1765_ = lean_apply_4(v_map_1762_, lean_box(0), lean_box(0), v___f_1763_, v___x_1764_);
return v___x_1765_;
}
else
{
lean_object* v_toFunctor_1766_; lean_object* v_b_1767_; lean_object* v_map_1768_; lean_object* v___f_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v_toFunctor_1766_ = lean_ctor_get(v_toApplicative_1758_, 0);
lean_inc_ref(v_toFunctor_1766_);
lean_dec_ref(v_toApplicative_1758_);
v_b_1767_ = lean_ctor_get(v_x_1757_, 0);
lean_inc(v_b_1767_);
lean_dec_ref_known(v_x_1757_, 1);
v_map_1768_ = lean_ctor_get(v_toFunctor_1766_, 0);
lean_inc(v_map_1768_);
lean_dec_ref(v_toFunctor_1766_);
v___f_1769_ = ((lean_object*)(l_Lean_IR_Alt_modifyBodyM___redArg___closed__0));
v___x_1770_ = lean_apply_1(v_f_1756_, v_b_1767_);
v___x_1771_ = lean_apply_4(v_map_1768_, lean_box(0), lean_box(0), v___f_1769_, v___x_1770_);
return v___x_1771_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_modifyBodyM(lean_object* v_m_1772_, lean_object* v_inst_1773_, lean_object* v_f_1774_, lean_object* v_x_1775_){
_start:
{
lean_object* v_toApplicative_1776_; 
v_toApplicative_1776_ = lean_ctor_get(v_inst_1773_, 0);
lean_inc_ref(v_toApplicative_1776_);
lean_dec_ref(v_inst_1773_);
if (lean_obj_tag(v_x_1775_) == 0)
{
lean_object* v_toFunctor_1777_; lean_object* v_info_1778_; lean_object* v_b_1779_; lean_object* v_map_1780_; lean_object* v___f_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v_toFunctor_1777_ = lean_ctor_get(v_toApplicative_1776_, 0);
lean_inc_ref(v_toFunctor_1777_);
lean_dec_ref(v_toApplicative_1776_);
v_info_1778_ = lean_ctor_get(v_x_1775_, 0);
lean_inc_ref(v_info_1778_);
v_b_1779_ = lean_ctor_get(v_x_1775_, 1);
lean_inc(v_b_1779_);
lean_dec_ref_known(v_x_1775_, 2);
v_map_1780_ = lean_ctor_get(v_toFunctor_1777_, 0);
lean_inc(v_map_1780_);
lean_dec_ref(v_toFunctor_1777_);
v___f_1781_ = lean_alloc_closure((void*)(l_Lean_IR_Alt_modifyBodyM___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1781_, 0, v_info_1778_);
v___x_1782_ = lean_apply_1(v_f_1774_, v_b_1779_);
v___x_1783_ = lean_apply_4(v_map_1780_, lean_box(0), lean_box(0), v___f_1781_, v___x_1782_);
return v___x_1783_;
}
else
{
lean_object* v_toFunctor_1784_; lean_object* v_b_1785_; lean_object* v_map_1786_; lean_object* v___f_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v_toFunctor_1784_ = lean_ctor_get(v_toApplicative_1776_, 0);
lean_inc_ref(v_toFunctor_1784_);
lean_dec_ref(v_toApplicative_1776_);
v_b_1785_ = lean_ctor_get(v_x_1775_, 0);
lean_inc(v_b_1785_);
lean_dec_ref_known(v_x_1775_, 1);
v_map_1786_ = lean_ctor_get(v_toFunctor_1784_, 0);
lean_inc(v_map_1786_);
lean_dec_ref(v_toFunctor_1784_);
v___f_1787_ = ((lean_object*)(l_Lean_IR_Alt_modifyBodyM___redArg___closed__0));
v___x_1788_ = lean_apply_1(v_f_1774_, v_b_1785_);
v___x_1789_ = lean_apply_4(v_map_1786_, lean_box(0), lean_box(0), v___f_1787_, v___x_1788_);
return v___x_1789_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_IR_Alt_isDefault(lean_object* v_x_1790_){
_start:
{
if (lean_obj_tag(v_x_1790_) == 0)
{
uint8_t v___x_1791_; 
v___x_1791_ = 0;
return v___x_1791_;
}
else
{
uint8_t v___x_1792_; 
v___x_1792_ = 1;
return v___x_1792_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Alt_isDefault___boxed(lean_object* v_x_1793_){
_start:
{
uint8_t v_res_1794_; lean_object* v_r_1795_; 
v_res_1794_ = l_Lean_IR_Alt_isDefault(v_x_1793_);
lean_dec_ref(v_x_1793_);
v_r_1795_ = lean_box(v_res_1794_);
return v_r_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_push(lean_object* v_bs_1796_, lean_object* v_b_1797_){
_start:
{
lean_object* v___x_1798_; lean_object* v_b_1799_; lean_object* v___x_1800_; 
v___x_1798_ = lean_box(12);
v_b_1799_ = l_Lean_IR_FnBody_setBody(v_b_1797_, v___x_1798_);
v___x_1800_ = lean_array_push(v_bs_1796_, v_b_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_flattenAux(lean_object* v_b_1801_, lean_object* v_r_1802_){
_start:
{
lean_object* v___y_1804_; uint8_t v___x_1807_; 
v___x_1807_ = l_Lean_IR_FnBody_isTerminal(v_b_1801_);
if (v___x_1807_ == 0)
{
switch(lean_obj_tag(v_b_1801_))
{
case 0:
{
lean_object* v_b_1808_; 
v_b_1808_ = lean_ctor_get(v_b_1801_, 3);
lean_inc(v_b_1808_);
v___y_1804_ = v_b_1808_;
goto v___jp_1803_;
}
case 1:
{
lean_object* v_b_1809_; 
v_b_1809_ = lean_ctor_get(v_b_1801_, 3);
lean_inc(v_b_1809_);
v___y_1804_ = v_b_1809_;
goto v___jp_1803_;
}
case 2:
{
lean_object* v_b_1810_; 
v_b_1810_ = lean_ctor_get(v_b_1801_, 3);
lean_inc(v_b_1810_);
v___y_1804_ = v_b_1810_;
goto v___jp_1803_;
}
case 4:
{
lean_object* v_b_1811_; 
v_b_1811_ = lean_ctor_get(v_b_1801_, 3);
lean_inc(v_b_1811_);
v___y_1804_ = v_b_1811_;
goto v___jp_1803_;
}
case 5:
{
lean_object* v_b_1812_; 
v_b_1812_ = lean_ctor_get(v_b_1801_, 5);
lean_inc(v_b_1812_);
v___y_1804_ = v_b_1812_;
goto v___jp_1803_;
}
case 3:
{
lean_object* v_b_1813_; 
v_b_1813_ = lean_ctor_get(v_b_1801_, 2);
lean_inc(v_b_1813_);
v___y_1804_ = v_b_1813_;
goto v___jp_1803_;
}
case 6:
{
lean_object* v_b_1814_; 
v_b_1814_ = lean_ctor_get(v_b_1801_, 2);
lean_inc(v_b_1814_);
v___y_1804_ = v_b_1814_;
goto v___jp_1803_;
}
case 7:
{
lean_object* v_b_1815_; 
v_b_1815_ = lean_ctor_get(v_b_1801_, 2);
lean_inc(v_b_1815_);
v___y_1804_ = v_b_1815_;
goto v___jp_1803_;
}
case 8:
{
lean_object* v_b_1816_; 
v_b_1816_ = lean_ctor_get(v_b_1801_, 1);
lean_inc(v_b_1816_);
v___y_1804_ = v_b_1816_;
goto v___jp_1803_;
}
default: 
{
lean_inc(v_b_1801_);
v___y_1804_ = v_b_1801_;
goto v___jp_1803_;
}
}
}
else
{
lean_object* v___x_1817_; 
v___x_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1817_, 0, v_r_1802_);
lean_ctor_set(v___x_1817_, 1, v_b_1801_);
return v___x_1817_;
}
v___jp_1803_:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Lean_IR_push(v_r_1802_, v_b_1801_);
v_b_1801_ = v___y_1804_;
v_r_1802_ = v___x_1805_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_flatten(lean_object* v_b_1820_){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___x_1821_ = ((lean_object*)(l_Lean_IR_FnBody_flatten___closed__0));
v___x_1822_ = l_Lean_IR_flattenAux(v_b_1820_, v___x_1821_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_reshapeAux_spec__0(lean_object* v___x_1823_, lean_object* v_msg_1824_){
_start:
{
lean_object* v___x_1825_; 
v___x_1825_ = lean_panic_fn_borrowed(v___x_1823_, v_msg_1824_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_reshapeAux_spec__0___boxed(lean_object* v___x_1826_, lean_object* v_msg_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l_panic___at___00Lean_IR_reshapeAux_spec__0(v___x_1826_, v_msg_1827_);
lean_dec_ref(v___x_1826_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_reshapeAux(lean_object* v_a_1833_, lean_object* v_i_1834_, lean_object* v_b_1835_){
_start:
{
lean_object* v___x_1836_; uint8_t v___x_1837_; 
v___x_1836_ = lean_unsigned_to_nat(0u);
v___x_1837_ = lean_nat_dec_eq(v_i_1834_, v___x_1836_);
if (v___x_1837_ == 0)
{
lean_object* v___x_1838_; lean_object* v_i_1839_; lean_object* v_fst_1841_; lean_object* v_snd_1842_; lean_object* v___x_1845_; lean_object* v___x_1846_; uint8_t v___x_1847_; 
v___x_1838_ = lean_unsigned_to_nat(1u);
v_i_1839_ = lean_nat_sub(v_i_1834_, v___x_1838_);
lean_dec(v_i_1834_);
v___x_1845_ = l_Lean_IR_instInhabitedFnBody_default__1;
v___x_1846_ = lean_array_get_size(v_a_1833_);
v___x_1847_ = lean_nat_dec_lt(v_i_1839_, v___x_1846_);
if (v___x_1847_ == 0)
{
lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v_fst_1860_; lean_object* v_snd_1861_; 
v___x_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1845_);
lean_ctor_set(v___x_1848_, 1, v_a_1833_);
v___x_1849_ = ((lean_object*)(l_Lean_IR_reshapeAux___closed__0));
v___x_1850_ = ((lean_object*)(l_Lean_IR_reshapeAux___closed__1));
v___x_1851_ = lean_unsigned_to_nat(463u);
v___x_1852_ = lean_unsigned_to_nat(4u);
v___x_1853_ = ((lean_object*)(l_Lean_IR_reshapeAux___closed__2));
lean_inc(v_i_1839_);
v___x_1854_ = l_Nat_reprFast(v_i_1839_);
v___x_1855_ = lean_string_append(v___x_1853_, v___x_1854_);
lean_dec_ref(v___x_1854_);
v___x_1856_ = ((lean_object*)(l_Lean_IR_reshapeAux___closed__3));
v___x_1857_ = lean_string_append(v___x_1855_, v___x_1856_);
v___x_1858_ = l_mkPanicMessageWithDecl(v___x_1849_, v___x_1850_, v___x_1851_, v___x_1852_, v___x_1857_);
lean_dec_ref(v___x_1857_);
v___x_1859_ = lean_panic_fn_borrowed(v___x_1848_, v___x_1858_);
lean_dec_ref_known(v___x_1848_, 2);
v_fst_1860_ = lean_ctor_get(v___x_1859_, 0);
lean_inc(v_fst_1860_);
v_snd_1861_ = lean_ctor_get(v___x_1859_, 1);
lean_inc(v_snd_1861_);
lean_dec(v___x_1859_);
v_fst_1841_ = v_fst_1860_;
v_snd_1842_ = v_snd_1861_;
goto v___jp_1840_;
}
else
{
lean_object* v_e_1862_; lean_object* v_xs_x27_1863_; 
v_e_1862_ = lean_array_fget(v_a_1833_, v_i_1839_);
v_xs_x27_1863_ = lean_array_fset(v_a_1833_, v_i_1839_, v___x_1845_);
v_fst_1841_ = v_e_1862_;
v_snd_1842_ = v_xs_x27_1863_;
goto v___jp_1840_;
}
v___jp_1840_:
{
lean_object* v_b_1843_; 
v_b_1843_ = l_Lean_IR_FnBody_setBody(v_fst_1841_, v_b_1835_);
v_a_1833_ = v_snd_1842_;
v_i_1834_ = v_i_1839_;
v_b_1835_ = v_b_1843_;
goto _start;
}
}
else
{
lean_dec(v_i_1834_);
lean_dec_ref(v_a_1833_);
return v_b_1835_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_reshape(lean_object* v_bs_1864_, lean_object* v_term_1865_){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = lean_array_get_size(v_bs_1864_);
v___x_1867_ = l_Lean_IR_reshapeAux(v_bs_1864_, v___x_1866_, v_term_1865_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPs___lam__0(lean_object* v_f_1868_, lean_object* v_x_1869_){
_start:
{
if (lean_obj_tag(v_x_1869_) == 1)
{
lean_object* v_j_1870_; lean_object* v_xs_1871_; lean_object* v_v_1872_; lean_object* v_b_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1881_; 
v_j_1870_ = lean_ctor_get(v_x_1869_, 0);
v_xs_1871_ = lean_ctor_get(v_x_1869_, 1);
v_v_1872_ = lean_ctor_get(v_x_1869_, 2);
v_b_1873_ = lean_ctor_get(v_x_1869_, 3);
v_isSharedCheck_1881_ = !lean_is_exclusive(v_x_1869_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1875_ = v_x_1869_;
v_isShared_1876_ = v_isSharedCheck_1881_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_b_1873_);
lean_inc(v_v_1872_);
lean_inc(v_xs_1871_);
lean_inc(v_j_1870_);
lean_dec(v_x_1869_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1881_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v___x_1879_; 
v___x_1877_ = lean_apply_1(v_f_1868_, v_v_1872_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 2, v___x_1877_);
v___x_1879_ = v___x_1875_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_j_1870_);
lean_ctor_set(v_reuseFailAlloc_1880_, 1, v_xs_1871_);
lean_ctor_set(v_reuseFailAlloc_1880_, 2, v___x_1877_);
lean_ctor_set(v_reuseFailAlloc_1880_, 3, v_b_1873_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
else
{
lean_dec_ref(v_f_1868_);
return v_x_1869_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPs(lean_object* v_bs_1901_, lean_object* v_f_1902_){
_start:
{
lean_object* v___f_1903_; lean_object* v___x_1904_; size_t v_sz_1905_; size_t v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___f_1903_ = lean_alloc_closure((void*)(l_Lean_IR_modifyJPs___lam__0), 2, 1);
lean_closure_set(v___f_1903_, 0, v_f_1902_);
v___x_1904_ = ((lean_object*)(l_Lean_IR_modifyJPs___closed__9));
v_sz_1905_ = lean_array_size(v_bs_1901_);
v___x_1906_ = ((size_t)0ULL);
v___x_1907_ = l_unsafeCast___redArg(v_bs_1901_);
v___x_1908_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1904_, v___f_1903_, v_sz_1905_, v___x_1906_, v___x_1907_);
v___x_1909_ = l_unsafeCast___redArg(v___x_1908_);
lean_dec(v___x_1908_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPs___boxed(lean_object* v_bs_1910_, lean_object* v_f_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lean_IR_modifyJPs(v_bs_1910_, v_f_1911_);
lean_dec_ref(v_bs_1910_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM___redArg___lam__0(lean_object* v_j_1913_, lean_object* v_xs_1914_, lean_object* v_b_1915_, lean_object* v_toPure_1916_, lean_object* v_____do__lift_1917_){
_start:
{
lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1918_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1918_, 0, v_j_1913_);
lean_ctor_set(v___x_1918_, 1, v_xs_1914_);
lean_ctor_set(v___x_1918_, 2, v_____do__lift_1917_);
lean_ctor_set(v___x_1918_, 3, v_b_1915_);
v___x_1919_ = lean_apply_2(v_toPure_1916_, lean_box(0), v___x_1918_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM___redArg___lam__1(lean_object* v_toPure_1920_, lean_object* v_f_1921_, lean_object* v_toBind_1922_, lean_object* v_b_1923_){
_start:
{
if (lean_obj_tag(v_b_1923_) == 1)
{
lean_object* v_j_1924_; lean_object* v_xs_1925_; lean_object* v_v_1926_; lean_object* v_b_1927_; lean_object* v___f_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v_j_1924_ = lean_ctor_get(v_b_1923_, 0);
lean_inc(v_j_1924_);
v_xs_1925_ = lean_ctor_get(v_b_1923_, 1);
lean_inc_ref(v_xs_1925_);
v_v_1926_ = lean_ctor_get(v_b_1923_, 2);
lean_inc(v_v_1926_);
v_b_1927_ = lean_ctor_get(v_b_1923_, 3);
lean_inc(v_b_1927_);
lean_dec_ref_known(v_b_1923_, 4);
v___f_1928_ = lean_alloc_closure((void*)(l_Lean_IR_modifyJPsM___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1928_, 0, v_j_1924_);
lean_closure_set(v___f_1928_, 1, v_xs_1925_);
lean_closure_set(v___f_1928_, 2, v_b_1927_);
lean_closure_set(v___f_1928_, 3, v_toPure_1920_);
v___x_1929_ = lean_apply_1(v_f_1921_, v_v_1926_);
v___x_1930_ = lean_apply_4(v_toBind_1922_, lean_box(0), lean_box(0), v___x_1929_, v___f_1928_);
return v___x_1930_;
}
else
{
lean_object* v___x_1931_; 
lean_dec(v_toBind_1922_);
lean_dec(v_f_1921_);
v___x_1931_ = lean_apply_2(v_toPure_1920_, lean_box(0), v_b_1923_);
return v___x_1931_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM___redArg(lean_object* v_inst_1932_, lean_object* v_bs_1933_, lean_object* v_f_1934_){
_start:
{
lean_object* v_toApplicative_1935_; lean_object* v_toBind_1936_; lean_object* v_toPure_1937_; lean_object* v___f_1938_; size_t v_sz_1939_; size_t v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v_toApplicative_1935_ = lean_ctor_get(v_inst_1932_, 0);
v_toBind_1936_ = lean_ctor_get(v_inst_1932_, 1);
v_toPure_1937_ = lean_ctor_get(v_toApplicative_1935_, 1);
lean_inc(v_toBind_1936_);
lean_inc(v_toPure_1937_);
v___f_1938_ = lean_alloc_closure((void*)(l_Lean_IR_modifyJPsM___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1938_, 0, v_toPure_1937_);
lean_closure_set(v___f_1938_, 1, v_f_1934_);
lean_closure_set(v___f_1938_, 2, v_toBind_1936_);
v_sz_1939_ = lean_array_size(v_bs_1933_);
v___x_1940_ = ((size_t)0ULL);
v___x_1941_ = l_unsafeCast___redArg(v_bs_1933_);
v___x_1942_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_1932_, v___f_1938_, v_sz_1939_, v___x_1940_, v___x_1941_);
v___x_1943_ = l_unsafeCast___redArg(v___x_1942_);
lean_dec(v___x_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM___redArg___boxed(lean_object* v_inst_1944_, lean_object* v_bs_1945_, lean_object* v_f_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l_Lean_IR_modifyJPsM___redArg(v_inst_1944_, v_bs_1945_, v_f_1946_);
lean_dec_ref(v_bs_1945_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM(lean_object* v_m_1948_, lean_object* v_inst_1949_, lean_object* v_bs_1950_, lean_object* v_f_1951_){
_start:
{
lean_object* v_toApplicative_1952_; lean_object* v_toBind_1953_; lean_object* v_toPure_1954_; lean_object* v___f_1955_; size_t v_sz_1956_; size_t v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
v_toApplicative_1952_ = lean_ctor_get(v_inst_1949_, 0);
v_toBind_1953_ = lean_ctor_get(v_inst_1949_, 1);
v_toPure_1954_ = lean_ctor_get(v_toApplicative_1952_, 1);
lean_inc(v_toBind_1953_);
lean_inc(v_toPure_1954_);
v___f_1955_ = lean_alloc_closure((void*)(l_Lean_IR_modifyJPsM___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1955_, 0, v_toPure_1954_);
lean_closure_set(v___f_1955_, 1, v_f_1951_);
lean_closure_set(v___f_1955_, 2, v_toBind_1953_);
v_sz_1956_ = lean_array_size(v_bs_1950_);
v___x_1957_ = ((size_t)0ULL);
v___x_1958_ = l_unsafeCast___redArg(v_bs_1950_);
v___x_1959_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_1949_, v___f_1955_, v_sz_1956_, v___x_1957_, v___x_1958_);
v___x_1960_ = l_unsafeCast___redArg(v___x_1959_);
lean_dec(v___x_1959_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_modifyJPsM___boxed(lean_object* v_m_1961_, lean_object* v_inst_1962_, lean_object* v_bs_1963_, lean_object* v_f_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = l_Lean_IR_modifyJPsM(v_m_1961_, v_inst_1962_, v_bs_1963_, v_f_1964_);
lean_dec_ref(v_bs_1963_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_ctorIdx(lean_object* v_x_1966_){
_start:
{
if (lean_obj_tag(v_x_1966_) == 0)
{
lean_object* v___x_1967_; 
v___x_1967_ = lean_unsigned_to_nat(0u);
return v___x_1967_;
}
else
{
lean_object* v___x_1968_; 
v___x_1968_ = lean_unsigned_to_nat(1u);
return v___x_1968_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_ctorIdx___boxed(lean_object* v_x_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_Lean_IR_Decl_ctorIdx(v_x_1969_);
lean_dec_ref(v_x_1969_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_ctorElim___redArg(lean_object* v_t_1971_, lean_object* v_k_1972_){
_start:
{
if (lean_obj_tag(v_t_1971_) == 0)
{
lean_object* v_f_1973_; lean_object* v_xs_1974_; lean_object* v_type_1975_; lean_object* v_body_1976_; lean_object* v_info_1977_; lean_object* v___x_1978_; 
v_f_1973_ = lean_ctor_get(v_t_1971_, 0);
lean_inc(v_f_1973_);
v_xs_1974_ = lean_ctor_get(v_t_1971_, 1);
lean_inc_ref(v_xs_1974_);
v_type_1975_ = lean_ctor_get(v_t_1971_, 2);
lean_inc(v_type_1975_);
v_body_1976_ = lean_ctor_get(v_t_1971_, 3);
lean_inc(v_body_1976_);
v_info_1977_ = lean_ctor_get(v_t_1971_, 4);
lean_inc(v_info_1977_);
lean_dec_ref_known(v_t_1971_, 5);
v___x_1978_ = lean_apply_5(v_k_1972_, v_f_1973_, v_xs_1974_, v_type_1975_, v_body_1976_, v_info_1977_);
return v___x_1978_;
}
else
{
lean_object* v_f_1979_; lean_object* v_xs_1980_; lean_object* v_type_1981_; lean_object* v_ext_1982_; lean_object* v___x_1983_; 
v_f_1979_ = lean_ctor_get(v_t_1971_, 0);
lean_inc(v_f_1979_);
v_xs_1980_ = lean_ctor_get(v_t_1971_, 1);
lean_inc_ref(v_xs_1980_);
v_type_1981_ = lean_ctor_get(v_t_1971_, 2);
lean_inc(v_type_1981_);
v_ext_1982_ = lean_ctor_get(v_t_1971_, 3);
lean_inc(v_ext_1982_);
lean_dec_ref_known(v_t_1971_, 4);
v___x_1983_ = lean_apply_4(v_k_1972_, v_f_1979_, v_xs_1980_, v_type_1981_, v_ext_1982_);
return v___x_1983_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_ctorElim(lean_object* v_motive_1984_, lean_object* v_ctorIdx_1985_, lean_object* v_t_1986_, lean_object* v_h_1987_, lean_object* v_k_1988_){
_start:
{
lean_object* v___x_1989_; 
v___x_1989_ = l_Lean_IR_Decl_ctorElim___redArg(v_t_1986_, v_k_1988_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_ctorElim___boxed(lean_object* v_motive_1990_, lean_object* v_ctorIdx_1991_, lean_object* v_t_1992_, lean_object* v_h_1993_, lean_object* v_k_1994_){
_start:
{
lean_object* v_res_1995_; 
v_res_1995_ = l_Lean_IR_Decl_ctorElim(v_motive_1990_, v_ctorIdx_1991_, v_t_1992_, v_h_1993_, v_k_1994_);
lean_dec(v_ctorIdx_1991_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_fdecl_elim___redArg(lean_object* v_t_1996_, lean_object* v_fdecl_1997_){
_start:
{
lean_object* v___x_1998_; 
v___x_1998_ = l_Lean_IR_Decl_ctorElim___redArg(v_t_1996_, v_fdecl_1997_);
return v___x_1998_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_fdecl_elim(lean_object* v_motive_1999_, lean_object* v_t_2000_, lean_object* v_h_2001_, lean_object* v_fdecl_2002_){
_start:
{
lean_object* v___x_2003_; 
v___x_2003_ = l_Lean_IR_Decl_ctorElim___redArg(v_t_2000_, v_fdecl_2002_);
return v___x_2003_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_extern_elim___redArg(lean_object* v_t_2004_, lean_object* v_extern_2005_){
_start:
{
lean_object* v___x_2006_; 
v___x_2006_ = l_Lean_IR_Decl_ctorElim___redArg(v_t_2004_, v_extern_2005_);
return v___x_2006_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_extern_elim(lean_object* v_motive_2007_, lean_object* v_t_2008_, lean_object* v_h_2009_, lean_object* v_extern_2010_){
_start:
{
lean_object* v___x_2011_; 
v___x_2011_ = l_Lean_IR_Decl_ctorElim___redArg(v_t_2008_, v_extern_2010_);
return v___x_2011_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedDecl_default___closed__1(void){
_start:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2014_ = lean_box(0);
v___x_2015_ = lean_box(0);
v___x_2016_ = ((lean_object*)(l_Lean_IR_instInhabitedDecl_default___closed__0));
v___x_2017_ = lean_obj_once(&l_Lean_IR_instInhabitedCtorInfo_default___closed__0, &l_Lean_IR_instInhabitedCtorInfo_default___closed__0_once, _init_l_Lean_IR_instInhabitedCtorInfo_default___closed__0);
v___x_2018_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2017_);
lean_ctor_set(v___x_2018_, 1, v___x_2016_);
lean_ctor_set(v___x_2018_, 2, v___x_2015_);
lean_ctor_set(v___x_2018_, 3, v___x_2014_);
return v___x_2018_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedDecl_default(void){
_start:
{
lean_object* v___x_2019_; 
v___x_2019_ = lean_obj_once(&l_Lean_IR_instInhabitedDecl_default___closed__1, &l_Lean_IR_instInhabitedDecl_default___closed__1_once, _init_l_Lean_IR_instInhabitedDecl_default___closed__1);
return v___x_2019_;
}
}
static lean_object* _init_l_Lean_IR_instInhabitedDecl(void){
_start:
{
lean_object* v___x_2020_; 
v___x_2020_ = l_Lean_IR_instInhabitedDecl_default;
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_name(lean_object* v_x_2021_){
_start:
{
lean_object* v_f_2022_; 
v_f_2022_ = lean_ctor_get(v_x_2021_, 0);
lean_inc(v_f_2022_);
return v_f_2022_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_name___boxed(lean_object* v_x_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l_Lean_IR_Decl_name(v_x_2023_);
lean_dec_ref(v_x_2023_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_params(lean_object* v_x_2025_){
_start:
{
lean_object* v_xs_2026_; 
v_xs_2026_ = lean_ctor_get(v_x_2025_, 1);
lean_inc_ref(v_xs_2026_);
return v_xs_2026_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_params___boxed(lean_object* v_x_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_Lean_IR_Decl_params(v_x_2027_);
lean_dec_ref(v_x_2027_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_resultType(lean_object* v_x_2029_){
_start:
{
lean_object* v_type_2030_; 
v_type_2030_ = lean_ctor_get(v_x_2029_, 2);
lean_inc(v_type_2030_);
return v_type_2030_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_resultType___boxed(lean_object* v_x_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Lean_IR_Decl_resultType(v_x_2031_);
lean_dec_ref(v_x_2031_);
return v_res_2032_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_Decl_isExtern(lean_object* v_x_2033_){
_start:
{
if (lean_obj_tag(v_x_2033_) == 1)
{
uint8_t v___x_2034_; 
v___x_2034_ = 1;
return v___x_2034_;
}
else
{
uint8_t v___x_2035_; 
v___x_2035_ = 0;
return v___x_2035_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_isExtern___boxed(lean_object* v_x_2036_){
_start:
{
uint8_t v_res_2037_; lean_object* v_r_2038_; 
v_res_2037_ = l_Lean_IR_Decl_isExtern(v_x_2036_);
lean_dec_ref(v_x_2036_);
v_r_2038_ = lean_box(v_res_2037_);
return v_r_2038_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_getInfo(lean_object* v_x_2039_){
_start:
{
if (lean_obj_tag(v_x_2039_) == 0)
{
lean_object* v_info_2040_; 
v_info_2040_ = lean_ctor_get(v_x_2039_, 4);
lean_inc(v_info_2040_);
return v_info_2040_;
}
else
{
lean_object* v___x_2041_; 
v___x_2041_ = lean_box(0);
return v___x_2041_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_getInfo___boxed(lean_object* v_x_2042_){
_start:
{
lean_object* v_res_2043_; 
v_res_2043_ = l_Lean_IR_Decl_getInfo(v_x_2042_);
lean_dec_ref(v_x_2042_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_Decl_updateBody_x21_spec__0(lean_object* v_msg_2044_){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2045_ = l_Lean_IR_instInhabitedDecl_default;
v___x_2046_ = lean_panic_fn_borrowed(v___x_2045_, v_msg_2044_);
return v___x_2046_;
}
}
static lean_object* _init_l_Lean_IR_Decl_updateBody_x21___closed__3(void){
_start:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2050_ = ((lean_object*)(l_Lean_IR_Decl_updateBody_x21___closed__2));
v___x_2051_ = lean_unsigned_to_nat(9u);
v___x_2052_ = lean_unsigned_to_nat(382u);
v___x_2053_ = ((lean_object*)(l_Lean_IR_Decl_updateBody_x21___closed__1));
v___x_2054_ = ((lean_object*)(l_Lean_IR_Decl_updateBody_x21___closed__0));
v___x_2055_ = l_mkPanicMessageWithDecl(v___x_2054_, v___x_2053_, v___x_2052_, v___x_2051_, v___x_2050_);
return v___x_2055_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_updateBody_x21(lean_object* v_d_2056_, lean_object* v_bNew_2057_){
_start:
{
if (lean_obj_tag(v_d_2056_) == 0)
{
lean_object* v_f_2058_; lean_object* v_xs_2059_; lean_object* v_type_2060_; lean_object* v_info_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
v_f_2058_ = lean_ctor_get(v_d_2056_, 0);
v_xs_2059_ = lean_ctor_get(v_d_2056_, 1);
v_type_2060_ = lean_ctor_get(v_d_2056_, 2);
v_info_2061_ = lean_ctor_get(v_d_2056_, 4);
v_isSharedCheck_2068_ = !lean_is_exclusive(v_d_2056_);
if (v_isSharedCheck_2068_ == 0)
{
lean_object* v_unused_2069_; 
v_unused_2069_ = lean_ctor_get(v_d_2056_, 3);
lean_dec(v_unused_2069_);
v___x_2063_ = v_d_2056_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_info_2061_);
lean_inc(v_type_2060_);
lean_inc(v_xs_2059_);
lean_inc(v_f_2058_);
lean_dec(v_d_2056_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 3, v_bNew_2057_);
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_f_2058_);
lean_ctor_set(v_reuseFailAlloc_2067_, 1, v_xs_2059_);
lean_ctor_set(v_reuseFailAlloc_2067_, 2, v_type_2060_);
lean_ctor_set(v_reuseFailAlloc_2067_, 3, v_bNew_2057_);
lean_ctor_set(v_reuseFailAlloc_2067_, 4, v_info_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
else
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
lean_dec(v_bNew_2057_);
lean_dec_ref(v_d_2056_);
v___x_2070_ = lean_obj_once(&l_Lean_IR_Decl_updateBody_x21___closed__3, &l_Lean_IR_Decl_updateBody_x21___closed__3_once, _init_l_Lean_IR_Decl_updateBody_x21___closed__3);
v___x_2071_ = l_panic___at___00Lean_IR_Decl_updateBody_x21_spec__0(v___x_2070_);
return v___x_2071_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_mkDummyExternDecl(lean_object* v_f_2072_, lean_object* v_xs_2073_, lean_object* v_ty_2074_){
_start:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2075_ = lean_box(12);
v___x_2076_ = lean_box(0);
v___x_2077_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2077_, 0, v_f_2072_);
lean_ctor_set(v___x_2077_, 1, v_xs_2073_);
lean_ctor_set(v___x_2077_, 2, v_ty_2074_);
lean_ctor_set(v___x_2077_, 3, v___x_2075_);
lean_ctor_set(v___x_2077_, 4, v___x_2076_);
return v___x_2077_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1___redArg(lean_object* v_k_2078_, lean_object* v_v_2079_, lean_object* v_t_2080_){
_start:
{
if (lean_obj_tag(v_t_2080_) == 0)
{
lean_object* v_size_2081_; lean_object* v_k_2082_; lean_object* v_v_2083_; lean_object* v_l_2084_; lean_object* v_r_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2366_; 
v_size_2081_ = lean_ctor_get(v_t_2080_, 0);
v_k_2082_ = lean_ctor_get(v_t_2080_, 1);
v_v_2083_ = lean_ctor_get(v_t_2080_, 2);
v_l_2084_ = lean_ctor_get(v_t_2080_, 3);
v_r_2085_ = lean_ctor_get(v_t_2080_, 4);
v_isSharedCheck_2366_ = !lean_is_exclusive(v_t_2080_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2087_ = v_t_2080_;
v_isShared_2088_ = v_isSharedCheck_2366_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_r_2085_);
lean_inc(v_l_2084_);
lean_inc(v_v_2083_);
lean_inc(v_k_2082_);
lean_inc(v_size_2081_);
lean_dec(v_t_2080_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2366_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
uint8_t v___x_2089_; 
v___x_2089_ = lean_nat_dec_lt(v_k_2078_, v_k_2082_);
if (v___x_2089_ == 0)
{
uint8_t v___x_2090_; 
v___x_2090_ = lean_nat_dec_eq(v_k_2078_, v_k_2082_);
if (v___x_2090_ == 0)
{
lean_object* v_impl_2091_; lean_object* v___x_2092_; 
lean_dec(v_size_2081_);
v_impl_2091_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1___redArg(v_k_2078_, v_v_2079_, v_r_2085_);
v___x_2092_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_2084_) == 0)
{
lean_object* v_size_2093_; lean_object* v_size_2094_; lean_object* v_k_2095_; lean_object* v_v_2096_; lean_object* v_l_2097_; lean_object* v_r_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; uint8_t v___x_2101_; 
v_size_2093_ = lean_ctor_get(v_l_2084_, 0);
v_size_2094_ = lean_ctor_get(v_impl_2091_, 0);
lean_inc(v_size_2094_);
v_k_2095_ = lean_ctor_get(v_impl_2091_, 1);
lean_inc(v_k_2095_);
v_v_2096_ = lean_ctor_get(v_impl_2091_, 2);
lean_inc(v_v_2096_);
v_l_2097_ = lean_ctor_get(v_impl_2091_, 3);
lean_inc(v_l_2097_);
v_r_2098_ = lean_ctor_get(v_impl_2091_, 4);
lean_inc(v_r_2098_);
v___x_2099_ = lean_unsigned_to_nat(3u);
v___x_2100_ = lean_nat_mul(v___x_2099_, v_size_2093_);
v___x_2101_ = lean_nat_dec_lt(v___x_2100_, v_size_2094_);
lean_dec(v___x_2100_);
if (v___x_2101_ == 0)
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2105_; 
lean_dec(v_r_2098_);
lean_dec(v_l_2097_);
lean_dec(v_v_2096_);
lean_dec(v_k_2095_);
v___x_2102_ = lean_nat_add(v___x_2092_, v_size_2093_);
v___x_2103_ = lean_nat_add(v___x_2102_, v_size_2094_);
lean_dec(v_size_2094_);
lean_dec(v___x_2102_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 4, v_impl_2091_);
lean_ctor_set(v___x_2087_, 0, v___x_2103_);
v___x_2105_ = v___x_2087_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v___x_2103_);
lean_ctor_set(v_reuseFailAlloc_2106_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2106_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2106_, 3, v_l_2084_);
lean_ctor_set(v_reuseFailAlloc_2106_, 4, v_impl_2091_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
else
{
lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2170_; 
v_isSharedCheck_2170_ = !lean_is_exclusive(v_impl_2091_);
if (v_isSharedCheck_2170_ == 0)
{
lean_object* v_unused_2171_; lean_object* v_unused_2172_; lean_object* v_unused_2173_; lean_object* v_unused_2174_; lean_object* v_unused_2175_; 
v_unused_2171_ = lean_ctor_get(v_impl_2091_, 4);
lean_dec(v_unused_2171_);
v_unused_2172_ = lean_ctor_get(v_impl_2091_, 3);
lean_dec(v_unused_2172_);
v_unused_2173_ = lean_ctor_get(v_impl_2091_, 2);
lean_dec(v_unused_2173_);
v_unused_2174_ = lean_ctor_get(v_impl_2091_, 1);
lean_dec(v_unused_2174_);
v_unused_2175_ = lean_ctor_get(v_impl_2091_, 0);
lean_dec(v_unused_2175_);
v___x_2108_ = v_impl_2091_;
v_isShared_2109_ = v_isSharedCheck_2170_;
goto v_resetjp_2107_;
}
else
{
lean_dec(v_impl_2091_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2170_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v_size_2110_; lean_object* v_k_2111_; lean_object* v_v_2112_; lean_object* v_l_2113_; lean_object* v_r_2114_; lean_object* v_size_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; uint8_t v___x_2118_; 
v_size_2110_ = lean_ctor_get(v_l_2097_, 0);
v_k_2111_ = lean_ctor_get(v_l_2097_, 1);
v_v_2112_ = lean_ctor_get(v_l_2097_, 2);
v_l_2113_ = lean_ctor_get(v_l_2097_, 3);
v_r_2114_ = lean_ctor_get(v_l_2097_, 4);
v_size_2115_ = lean_ctor_get(v_r_2098_, 0);
v___x_2116_ = lean_unsigned_to_nat(2u);
v___x_2117_ = lean_nat_mul(v___x_2116_, v_size_2115_);
v___x_2118_ = lean_nat_dec_lt(v_size_2110_, v___x_2117_);
lean_dec(v___x_2117_);
if (v___x_2118_ == 0)
{
lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2146_; 
lean_inc(v_r_2114_);
lean_inc(v_l_2113_);
lean_inc(v_v_2112_);
lean_inc(v_k_2111_);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_l_2097_);
if (v_isSharedCheck_2146_ == 0)
{
lean_object* v_unused_2147_; lean_object* v_unused_2148_; lean_object* v_unused_2149_; lean_object* v_unused_2150_; lean_object* v_unused_2151_; 
v_unused_2147_ = lean_ctor_get(v_l_2097_, 4);
lean_dec(v_unused_2147_);
v_unused_2148_ = lean_ctor_get(v_l_2097_, 3);
lean_dec(v_unused_2148_);
v_unused_2149_ = lean_ctor_get(v_l_2097_, 2);
lean_dec(v_unused_2149_);
v_unused_2150_ = lean_ctor_get(v_l_2097_, 1);
lean_dec(v_unused_2150_);
v_unused_2151_ = lean_ctor_get(v_l_2097_, 0);
lean_dec(v_unused_2151_);
v___x_2120_ = v_l_2097_;
v_isShared_2121_ = v_isSharedCheck_2146_;
goto v_resetjp_2119_;
}
else
{
lean_dec(v_l_2097_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2146_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___y_2125_; lean_object* v___y_2126_; lean_object* v___y_2127_; lean_object* v___y_2136_; 
v___x_2122_ = lean_nat_add(v___x_2092_, v_size_2093_);
v___x_2123_ = lean_nat_add(v___x_2122_, v_size_2094_);
lean_dec(v_size_2094_);
if (lean_obj_tag(v_l_2113_) == 0)
{
lean_object* v_size_2144_; 
v_size_2144_ = lean_ctor_get(v_l_2113_, 0);
lean_inc(v_size_2144_);
v___y_2136_ = v_size_2144_;
goto v___jp_2135_;
}
else
{
lean_object* v___x_2145_; 
v___x_2145_ = lean_unsigned_to_nat(0u);
v___y_2136_ = v___x_2145_;
goto v___jp_2135_;
}
v___jp_2124_:
{
lean_object* v___x_2128_; lean_object* v___x_2130_; 
v___x_2128_ = lean_nat_add(v___y_2126_, v___y_2127_);
lean_dec(v___y_2127_);
lean_dec(v___y_2126_);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 4, v_r_2098_);
lean_ctor_set(v___x_2120_, 3, v_r_2114_);
lean_ctor_set(v___x_2120_, 2, v_v_2096_);
lean_ctor_set(v___x_2120_, 1, v_k_2095_);
lean_ctor_set(v___x_2120_, 0, v___x_2128_);
v___x_2130_ = v___x_2120_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2128_);
lean_ctor_set(v_reuseFailAlloc_2134_, 1, v_k_2095_);
lean_ctor_set(v_reuseFailAlloc_2134_, 2, v_v_2096_);
lean_ctor_set(v_reuseFailAlloc_2134_, 3, v_r_2114_);
lean_ctor_set(v_reuseFailAlloc_2134_, 4, v_r_2098_);
v___x_2130_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
lean_object* v___x_2132_; 
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 4, v___x_2130_);
lean_ctor_set(v___x_2108_, 3, v___y_2125_);
lean_ctor_set(v___x_2108_, 2, v_v_2112_);
lean_ctor_set(v___x_2108_, 1, v_k_2111_);
lean_ctor_set(v___x_2108_, 0, v___x_2123_);
v___x_2132_ = v___x_2108_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2123_);
lean_ctor_set(v_reuseFailAlloc_2133_, 1, v_k_2111_);
lean_ctor_set(v_reuseFailAlloc_2133_, 2, v_v_2112_);
lean_ctor_set(v_reuseFailAlloc_2133_, 3, v___y_2125_);
lean_ctor_set(v_reuseFailAlloc_2133_, 4, v___x_2130_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
v___jp_2135_:
{
lean_object* v___x_2137_; lean_object* v___x_2139_; 
v___x_2137_ = lean_nat_add(v___x_2122_, v___y_2136_);
lean_dec(v___y_2136_);
lean_dec(v___x_2122_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 4, v_l_2113_);
lean_ctor_set(v___x_2087_, 0, v___x_2137_);
v___x_2139_ = v___x_2087_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v___x_2137_);
lean_ctor_set(v_reuseFailAlloc_2143_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2143_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2143_, 3, v_l_2084_);
lean_ctor_set(v_reuseFailAlloc_2143_, 4, v_l_2113_);
v___x_2139_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
lean_object* v___x_2140_; 
v___x_2140_ = lean_nat_add(v___x_2092_, v_size_2115_);
if (lean_obj_tag(v_r_2114_) == 0)
{
lean_object* v_size_2141_; 
v_size_2141_ = lean_ctor_get(v_r_2114_, 0);
lean_inc(v_size_2141_);
v___y_2125_ = v___x_2139_;
v___y_2126_ = v___x_2140_;
v___y_2127_ = v_size_2141_;
goto v___jp_2124_;
}
else
{
lean_object* v___x_2142_; 
v___x_2142_ = lean_unsigned_to_nat(0u);
v___y_2125_ = v___x_2139_;
v___y_2126_ = v___x_2140_;
v___y_2127_ = v___x_2142_;
goto v___jp_2124_;
}
}
}
}
}
else
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2156_; 
lean_del_object(v___x_2087_);
v___x_2152_ = lean_nat_add(v___x_2092_, v_size_2093_);
v___x_2153_ = lean_nat_add(v___x_2152_, v_size_2094_);
lean_dec(v_size_2094_);
v___x_2154_ = lean_nat_add(v___x_2152_, v_size_2110_);
lean_dec(v___x_2152_);
lean_inc_ref(v_l_2084_);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 4, v_l_2097_);
lean_ctor_set(v___x_2108_, 3, v_l_2084_);
lean_ctor_set(v___x_2108_, 2, v_v_2083_);
lean_ctor_set(v___x_2108_, 1, v_k_2082_);
lean_ctor_set(v___x_2108_, 0, v___x_2154_);
v___x_2156_ = v___x_2108_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v___x_2154_);
lean_ctor_set(v_reuseFailAlloc_2169_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2169_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2169_, 3, v_l_2084_);
lean_ctor_set(v_reuseFailAlloc_2169_, 4, v_l_2097_);
v___x_2156_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
v_isSharedCheck_2163_ = !lean_is_exclusive(v_l_2084_);
if (v_isSharedCheck_2163_ == 0)
{
lean_object* v_unused_2164_; lean_object* v_unused_2165_; lean_object* v_unused_2166_; lean_object* v_unused_2167_; lean_object* v_unused_2168_; 
v_unused_2164_ = lean_ctor_get(v_l_2084_, 4);
lean_dec(v_unused_2164_);
v_unused_2165_ = lean_ctor_get(v_l_2084_, 3);
lean_dec(v_unused_2165_);
v_unused_2166_ = lean_ctor_get(v_l_2084_, 2);
lean_dec(v_unused_2166_);
v_unused_2167_ = lean_ctor_get(v_l_2084_, 1);
lean_dec(v_unused_2167_);
v_unused_2168_ = lean_ctor_get(v_l_2084_, 0);
lean_dec(v_unused_2168_);
v___x_2158_ = v_l_2084_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_dec(v_l_2084_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 4, v_r_2098_);
lean_ctor_set(v___x_2158_, 3, v___x_2156_);
lean_ctor_set(v___x_2158_, 2, v_v_2096_);
lean_ctor_set(v___x_2158_, 1, v_k_2095_);
lean_ctor_set(v___x_2158_, 0, v___x_2153_);
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v___x_2153_);
lean_ctor_set(v_reuseFailAlloc_2162_, 1, v_k_2095_);
lean_ctor_set(v_reuseFailAlloc_2162_, 2, v_v_2096_);
lean_ctor_set(v_reuseFailAlloc_2162_, 3, v___x_2156_);
lean_ctor_set(v_reuseFailAlloc_2162_, 4, v_r_2098_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2176_; 
v_l_2176_ = lean_ctor_get(v_impl_2091_, 3);
lean_inc(v_l_2176_);
if (lean_obj_tag(v_l_2176_) == 0)
{
lean_object* v_r_2177_; lean_object* v_k_2178_; lean_object* v_v_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2202_; 
v_r_2177_ = lean_ctor_get(v_impl_2091_, 4);
v_k_2178_ = lean_ctor_get(v_impl_2091_, 1);
v_v_2179_ = lean_ctor_get(v_impl_2091_, 2);
v_isSharedCheck_2202_ = !lean_is_exclusive(v_impl_2091_);
if (v_isSharedCheck_2202_ == 0)
{
lean_object* v_unused_2203_; lean_object* v_unused_2204_; 
v_unused_2203_ = lean_ctor_get(v_impl_2091_, 3);
lean_dec(v_unused_2203_);
v_unused_2204_ = lean_ctor_get(v_impl_2091_, 0);
lean_dec(v_unused_2204_);
v___x_2181_ = v_impl_2091_;
v_isShared_2182_ = v_isSharedCheck_2202_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_r_2177_);
lean_inc(v_v_2179_);
lean_inc(v_k_2178_);
lean_dec(v_impl_2091_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2202_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v_k_2183_; lean_object* v_v_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2198_; 
v_k_2183_ = lean_ctor_get(v_l_2176_, 1);
v_v_2184_ = lean_ctor_get(v_l_2176_, 2);
v_isSharedCheck_2198_ = !lean_is_exclusive(v_l_2176_);
if (v_isSharedCheck_2198_ == 0)
{
lean_object* v_unused_2199_; lean_object* v_unused_2200_; lean_object* v_unused_2201_; 
v_unused_2199_ = lean_ctor_get(v_l_2176_, 4);
lean_dec(v_unused_2199_);
v_unused_2200_ = lean_ctor_get(v_l_2176_, 3);
lean_dec(v_unused_2200_);
v_unused_2201_ = lean_ctor_get(v_l_2176_, 0);
lean_dec(v_unused_2201_);
v___x_2186_ = v_l_2176_;
v_isShared_2187_ = v_isSharedCheck_2198_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_v_2184_);
lean_inc(v_k_2183_);
lean_dec(v_l_2176_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2198_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2188_; lean_object* v___x_2190_; 
v___x_2188_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2177_, 2);
if (v_isShared_2187_ == 0)
{
lean_ctor_set(v___x_2186_, 4, v_r_2177_);
lean_ctor_set(v___x_2186_, 3, v_r_2177_);
lean_ctor_set(v___x_2186_, 2, v_v_2083_);
lean_ctor_set(v___x_2186_, 1, v_k_2082_);
lean_ctor_set(v___x_2186_, 0, v___x_2092_);
v___x_2190_ = v___x_2186_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v___x_2092_);
lean_ctor_set(v_reuseFailAlloc_2197_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2197_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2197_, 3, v_r_2177_);
lean_ctor_set(v_reuseFailAlloc_2197_, 4, v_r_2177_);
v___x_2190_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2192_; 
lean_inc(v_r_2177_);
if (v_isShared_2182_ == 0)
{
lean_ctor_set(v___x_2181_, 3, v_r_2177_);
lean_ctor_set(v___x_2181_, 0, v___x_2092_);
v___x_2192_ = v___x_2181_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v___x_2092_);
lean_ctor_set(v_reuseFailAlloc_2196_, 1, v_k_2178_);
lean_ctor_set(v_reuseFailAlloc_2196_, 2, v_v_2179_);
lean_ctor_set(v_reuseFailAlloc_2196_, 3, v_r_2177_);
lean_ctor_set(v_reuseFailAlloc_2196_, 4, v_r_2177_);
v___x_2192_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2194_; 
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 4, v___x_2192_);
lean_ctor_set(v___x_2087_, 3, v___x_2190_);
lean_ctor_set(v___x_2087_, 2, v_v_2184_);
lean_ctor_set(v___x_2087_, 1, v_k_2183_);
lean_ctor_set(v___x_2087_, 0, v___x_2188_);
v___x_2194_ = v___x_2087_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v___x_2188_);
lean_ctor_set(v_reuseFailAlloc_2195_, 1, v_k_2183_);
lean_ctor_set(v_reuseFailAlloc_2195_, 2, v_v_2184_);
lean_ctor_set(v_reuseFailAlloc_2195_, 3, v___x_2190_);
lean_ctor_set(v_reuseFailAlloc_2195_, 4, v___x_2192_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
}
}
}
}
else
{
lean_object* v_r_2205_; 
v_r_2205_ = lean_ctor_get(v_impl_2091_, 4);
lean_inc(v_r_2205_);
if (lean_obj_tag(v_r_2205_) == 0)
{
lean_object* v_k_2206_; lean_object* v_v_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2218_; 
v_k_2206_ = lean_ctor_get(v_impl_2091_, 1);
v_v_2207_ = lean_ctor_get(v_impl_2091_, 2);
v_isSharedCheck_2218_ = !lean_is_exclusive(v_impl_2091_);
if (v_isSharedCheck_2218_ == 0)
{
lean_object* v_unused_2219_; lean_object* v_unused_2220_; lean_object* v_unused_2221_; 
v_unused_2219_ = lean_ctor_get(v_impl_2091_, 4);
lean_dec(v_unused_2219_);
v_unused_2220_ = lean_ctor_get(v_impl_2091_, 3);
lean_dec(v_unused_2220_);
v_unused_2221_ = lean_ctor_get(v_impl_2091_, 0);
lean_dec(v_unused_2221_);
v___x_2209_ = v_impl_2091_;
v_isShared_2210_ = v_isSharedCheck_2218_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_v_2207_);
lean_inc(v_k_2206_);
lean_dec(v_impl_2091_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2218_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2211_; lean_object* v___x_2213_; 
v___x_2211_ = lean_unsigned_to_nat(3u);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 4, v_l_2176_);
lean_ctor_set(v___x_2209_, 2, v_v_2083_);
lean_ctor_set(v___x_2209_, 1, v_k_2082_);
lean_ctor_set(v___x_2209_, 0, v___x_2092_);
v___x_2213_ = v___x_2209_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v___x_2092_);
lean_ctor_set(v_reuseFailAlloc_2217_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2217_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2217_, 3, v_l_2176_);
lean_ctor_set(v_reuseFailAlloc_2217_, 4, v_l_2176_);
v___x_2213_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
lean_object* v___x_2215_; 
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 4, v_r_2205_);
lean_ctor_set(v___x_2087_, 3, v___x_2213_);
lean_ctor_set(v___x_2087_, 2, v_v_2207_);
lean_ctor_set(v___x_2087_, 1, v_k_2206_);
lean_ctor_set(v___x_2087_, 0, v___x_2211_);
v___x_2215_ = v___x_2087_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v___x_2211_);
lean_ctor_set(v_reuseFailAlloc_2216_, 1, v_k_2206_);
lean_ctor_set(v_reuseFailAlloc_2216_, 2, v_v_2207_);
lean_ctor_set(v_reuseFailAlloc_2216_, 3, v___x_2213_);
lean_ctor_set(v_reuseFailAlloc_2216_, 4, v_r_2205_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
else
{
lean_object* v___x_2222_; lean_object* v___x_2224_; 
v___x_2222_ = lean_unsigned_to_nat(2u);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 4, v_impl_2091_);
lean_ctor_set(v___x_2087_, 3, v_r_2205_);
lean_ctor_set(v___x_2087_, 0, v___x_2222_);
v___x_2224_ = v___x_2087_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v___x_2222_);
lean_ctor_set(v_reuseFailAlloc_2225_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2225_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2225_, 3, v_r_2205_);
lean_ctor_set(v_reuseFailAlloc_2225_, 4, v_impl_2091_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
}
else
{
lean_object* v___x_2227_; 
lean_dec(v_v_2083_);
lean_dec(v_k_2082_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 2, v_v_2079_);
lean_ctor_set(v___x_2087_, 1, v_k_2078_);
v___x_2227_ = v___x_2087_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_size_2081_);
lean_ctor_set(v_reuseFailAlloc_2228_, 1, v_k_2078_);
lean_ctor_set(v_reuseFailAlloc_2228_, 2, v_v_2079_);
lean_ctor_set(v_reuseFailAlloc_2228_, 3, v_l_2084_);
lean_ctor_set(v_reuseFailAlloc_2228_, 4, v_r_2085_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
else
{
lean_object* v_impl_2229_; lean_object* v___x_2230_; 
lean_dec(v_size_2081_);
v_impl_2229_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1___redArg(v_k_2078_, v_v_2079_, v_l_2084_);
v___x_2230_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_2085_) == 0)
{
lean_object* v_size_2231_; lean_object* v_size_2232_; lean_object* v_k_2233_; lean_object* v_v_2234_; lean_object* v_l_2235_; lean_object* v_r_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; uint8_t v___x_2239_; 
v_size_2231_ = lean_ctor_get(v_r_2085_, 0);
v_size_2232_ = lean_ctor_get(v_impl_2229_, 0);
lean_inc(v_size_2232_);
v_k_2233_ = lean_ctor_get(v_impl_2229_, 1);
lean_inc(v_k_2233_);
v_v_2234_ = lean_ctor_get(v_impl_2229_, 2);
lean_inc(v_v_2234_);
v_l_2235_ = lean_ctor_get(v_impl_2229_, 3);
lean_inc(v_l_2235_);
v_r_2236_ = lean_ctor_get(v_impl_2229_, 4);
lean_inc(v_r_2236_);
v___x_2237_ = lean_unsigned_to_nat(3u);
v___x_2238_ = lean_nat_mul(v___x_2237_, v_size_2231_);
v___x_2239_ = lean_nat_dec_lt(v___x_2238_, v_size_2232_);
lean_dec(v___x_2238_);
if (v___x_2239_ == 0)
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2243_; 
lean_dec(v_r_2236_);
lean_dec(v_l_2235_);
lean_dec(v_v_2234_);
lean_dec(v_k_2233_);
v___x_2240_ = lean_nat_add(v___x_2230_, v_size_2232_);
lean_dec(v_size_2232_);
v___x_2241_ = lean_nat_add(v___x_2240_, v_size_2231_);
lean_dec(v___x_2240_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 3, v_impl_2229_);
lean_ctor_set(v___x_2087_, 0, v___x_2241_);
v___x_2243_ = v___x_2087_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v___x_2241_);
lean_ctor_set(v_reuseFailAlloc_2244_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2244_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2244_, 3, v_impl_2229_);
lean_ctor_set(v_reuseFailAlloc_2244_, 4, v_r_2085_);
v___x_2243_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
return v___x_2243_;
}
}
else
{
lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2310_; 
v_isSharedCheck_2310_ = !lean_is_exclusive(v_impl_2229_);
if (v_isSharedCheck_2310_ == 0)
{
lean_object* v_unused_2311_; lean_object* v_unused_2312_; lean_object* v_unused_2313_; lean_object* v_unused_2314_; lean_object* v_unused_2315_; 
v_unused_2311_ = lean_ctor_get(v_impl_2229_, 4);
lean_dec(v_unused_2311_);
v_unused_2312_ = lean_ctor_get(v_impl_2229_, 3);
lean_dec(v_unused_2312_);
v_unused_2313_ = lean_ctor_get(v_impl_2229_, 2);
lean_dec(v_unused_2313_);
v_unused_2314_ = lean_ctor_get(v_impl_2229_, 1);
lean_dec(v_unused_2314_);
v_unused_2315_ = lean_ctor_get(v_impl_2229_, 0);
lean_dec(v_unused_2315_);
v___x_2246_ = v_impl_2229_;
v_isShared_2247_ = v_isSharedCheck_2310_;
goto v_resetjp_2245_;
}
else
{
lean_dec(v_impl_2229_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2310_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v_size_2248_; lean_object* v_size_2249_; lean_object* v_k_2250_; lean_object* v_v_2251_; lean_object* v_l_2252_; lean_object* v_r_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; uint8_t v___x_2256_; 
v_size_2248_ = lean_ctor_get(v_l_2235_, 0);
v_size_2249_ = lean_ctor_get(v_r_2236_, 0);
v_k_2250_ = lean_ctor_get(v_r_2236_, 1);
v_v_2251_ = lean_ctor_get(v_r_2236_, 2);
v_l_2252_ = lean_ctor_get(v_r_2236_, 3);
v_r_2253_ = lean_ctor_get(v_r_2236_, 4);
v___x_2254_ = lean_unsigned_to_nat(2u);
v___x_2255_ = lean_nat_mul(v___x_2254_, v_size_2248_);
v___x_2256_ = lean_nat_dec_lt(v_size_2249_, v___x_2255_);
lean_dec(v___x_2255_);
if (v___x_2256_ == 0)
{
lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2285_; 
lean_inc(v_r_2253_);
lean_inc(v_l_2252_);
lean_inc(v_v_2251_);
lean_inc(v_k_2250_);
v_isSharedCheck_2285_ = !lean_is_exclusive(v_r_2236_);
if (v_isSharedCheck_2285_ == 0)
{
lean_object* v_unused_2286_; lean_object* v_unused_2287_; lean_object* v_unused_2288_; lean_object* v_unused_2289_; lean_object* v_unused_2290_; 
v_unused_2286_ = lean_ctor_get(v_r_2236_, 4);
lean_dec(v_unused_2286_);
v_unused_2287_ = lean_ctor_get(v_r_2236_, 3);
lean_dec(v_unused_2287_);
v_unused_2288_ = lean_ctor_get(v_r_2236_, 2);
lean_dec(v_unused_2288_);
v_unused_2289_ = lean_ctor_get(v_r_2236_, 1);
lean_dec(v_unused_2289_);
v_unused_2290_ = lean_ctor_get(v_r_2236_, 0);
lean_dec(v_unused_2290_);
v___x_2258_ = v_r_2236_;
v_isShared_2259_ = v_isSharedCheck_2285_;
goto v_resetjp_2257_;
}
else
{
lean_dec(v_r_2236_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2285_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___x_2273_; lean_object* v___y_2275_; 
v___x_2260_ = lean_nat_add(v___x_2230_, v_size_2232_);
lean_dec(v_size_2232_);
v___x_2261_ = lean_nat_add(v___x_2260_, v_size_2231_);
lean_dec(v___x_2260_);
v___x_2273_ = lean_nat_add(v___x_2230_, v_size_2248_);
if (lean_obj_tag(v_l_2252_) == 0)
{
lean_object* v_size_2283_; 
v_size_2283_ = lean_ctor_get(v_l_2252_, 0);
lean_inc(v_size_2283_);
v___y_2275_ = v_size_2283_;
goto v___jp_2274_;
}
else
{
lean_object* v___x_2284_; 
v___x_2284_ = lean_unsigned_to_nat(0u);
v___y_2275_ = v___x_2284_;
goto v___jp_2274_;
}
v___jp_2262_:
{
lean_object* v___x_2266_; lean_object* v___x_2268_; 
v___x_2266_ = lean_nat_add(v___y_2263_, v___y_2265_);
lean_dec(v___y_2265_);
lean_dec(v___y_2263_);
if (v_isShared_2259_ == 0)
{
lean_ctor_set(v___x_2258_, 4, v_r_2085_);
lean_ctor_set(v___x_2258_, 3, v_r_2253_);
lean_ctor_set(v___x_2258_, 2, v_v_2083_);
lean_ctor_set(v___x_2258_, 1, v_k_2082_);
lean_ctor_set(v___x_2258_, 0, v___x_2266_);
v___x_2268_ = v___x_2258_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v___x_2266_);
lean_ctor_set(v_reuseFailAlloc_2272_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2272_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2272_, 3, v_r_2253_);
lean_ctor_set(v_reuseFailAlloc_2272_, 4, v_r_2085_);
v___x_2268_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
lean_object* v___x_2270_; 
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 4, v___x_2268_);
lean_ctor_set(v___x_2246_, 3, v___y_2264_);
lean_ctor_set(v___x_2246_, 2, v_v_2251_);
lean_ctor_set(v___x_2246_, 1, v_k_2250_);
lean_ctor_set(v___x_2246_, 0, v___x_2261_);
v___x_2270_ = v___x_2246_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v___x_2261_);
lean_ctor_set(v_reuseFailAlloc_2271_, 1, v_k_2250_);
lean_ctor_set(v_reuseFailAlloc_2271_, 2, v_v_2251_);
lean_ctor_set(v_reuseFailAlloc_2271_, 3, v___y_2264_);
lean_ctor_set(v_reuseFailAlloc_2271_, 4, v___x_2268_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
}
}
}
v___jp_2274_:
{
lean_object* v___x_2276_; lean_object* v___x_2278_; 
v___x_2276_ = lean_nat_add(v___x_2273_, v___y_2275_);
lean_dec(v___y_2275_);
lean_dec(v___x_2273_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 4, v_l_2252_);
lean_ctor_set(v___x_2087_, 3, v_l_2235_);
lean_ctor_set(v___x_2087_, 2, v_v_2234_);
lean_ctor_set(v___x_2087_, 1, v_k_2233_);
lean_ctor_set(v___x_2087_, 0, v___x_2276_);
v___x_2278_ = v___x_2087_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v___x_2276_);
lean_ctor_set(v_reuseFailAlloc_2282_, 1, v_k_2233_);
lean_ctor_set(v_reuseFailAlloc_2282_, 2, v_v_2234_);
lean_ctor_set(v_reuseFailAlloc_2282_, 3, v_l_2235_);
lean_ctor_set(v_reuseFailAlloc_2282_, 4, v_l_2252_);
v___x_2278_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
lean_object* v___x_2279_; 
v___x_2279_ = lean_nat_add(v___x_2230_, v_size_2231_);
if (lean_obj_tag(v_r_2253_) == 0)
{
lean_object* v_size_2280_; 
v_size_2280_ = lean_ctor_get(v_r_2253_, 0);
lean_inc(v_size_2280_);
v___y_2263_ = v___x_2279_;
v___y_2264_ = v___x_2278_;
v___y_2265_ = v_size_2280_;
goto v___jp_2262_;
}
else
{
lean_object* v___x_2281_; 
v___x_2281_ = lean_unsigned_to_nat(0u);
v___y_2263_ = v___x_2279_;
v___y_2264_ = v___x_2278_;
v___y_2265_ = v___x_2281_;
goto v___jp_2262_;
}
}
}
}
}
else
{
lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2296_; 
lean_del_object(v___x_2087_);
v___x_2291_ = lean_nat_add(v___x_2230_, v_size_2232_);
lean_dec(v_size_2232_);
v___x_2292_ = lean_nat_add(v___x_2291_, v_size_2231_);
lean_dec(v___x_2291_);
v___x_2293_ = lean_nat_add(v___x_2230_, v_size_2231_);
v___x_2294_ = lean_nat_add(v___x_2293_, v_size_2249_);
lean_dec(v___x_2293_);
lean_inc_ref(v_r_2085_);
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 4, v_r_2085_);
lean_ctor_set(v___x_2246_, 3, v_r_2236_);
lean_ctor_set(v___x_2246_, 2, v_v_2083_);
lean_ctor_set(v___x_2246_, 1, v_k_2082_);
lean_ctor_set(v___x_2246_, 0, v___x_2294_);
v___x_2296_ = v___x_2246_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v___x_2294_);
lean_ctor_set(v_reuseFailAlloc_2309_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2309_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2309_, 3, v_r_2236_);
lean_ctor_set(v_reuseFailAlloc_2309_, 4, v_r_2085_);
v___x_2296_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2303_; 
v_isSharedCheck_2303_ = !lean_is_exclusive(v_r_2085_);
if (v_isSharedCheck_2303_ == 0)
{
lean_object* v_unused_2304_; lean_object* v_unused_2305_; lean_object* v_unused_2306_; lean_object* v_unused_2307_; lean_object* v_unused_2308_; 
v_unused_2304_ = lean_ctor_get(v_r_2085_, 4);
lean_dec(v_unused_2304_);
v_unused_2305_ = lean_ctor_get(v_r_2085_, 3);
lean_dec(v_unused_2305_);
v_unused_2306_ = lean_ctor_get(v_r_2085_, 2);
lean_dec(v_unused_2306_);
v_unused_2307_ = lean_ctor_get(v_r_2085_, 1);
lean_dec(v_unused_2307_);
v_unused_2308_ = lean_ctor_get(v_r_2085_, 0);
lean_dec(v_unused_2308_);
v___x_2298_ = v_r_2085_;
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
else
{
lean_dec(v_r_2085_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2301_; 
if (v_isShared_2299_ == 0)
{
lean_ctor_set(v___x_2298_, 4, v___x_2296_);
lean_ctor_set(v___x_2298_, 3, v_l_2235_);
lean_ctor_set(v___x_2298_, 2, v_v_2234_);
lean_ctor_set(v___x_2298_, 1, v_k_2233_);
lean_ctor_set(v___x_2298_, 0, v___x_2292_);
v___x_2301_ = v___x_2298_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v___x_2292_);
lean_ctor_set(v_reuseFailAlloc_2302_, 1, v_k_2233_);
lean_ctor_set(v_reuseFailAlloc_2302_, 2, v_v_2234_);
lean_ctor_set(v_reuseFailAlloc_2302_, 3, v_l_2235_);
lean_ctor_set(v_reuseFailAlloc_2302_, 4, v___x_2296_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2316_; 
v_l_2316_ = lean_ctor_get(v_impl_2229_, 3);
lean_inc(v_l_2316_);
if (lean_obj_tag(v_l_2316_) == 0)
{
lean_object* v_r_2317_; lean_object* v_k_2318_; lean_object* v_v_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2330_; 
v_r_2317_ = lean_ctor_get(v_impl_2229_, 4);
v_k_2318_ = lean_ctor_get(v_impl_2229_, 1);
v_v_2319_ = lean_ctor_get(v_impl_2229_, 2);
v_isSharedCheck_2330_ = !lean_is_exclusive(v_impl_2229_);
if (v_isSharedCheck_2330_ == 0)
{
lean_object* v_unused_2331_; lean_object* v_unused_2332_; 
v_unused_2331_ = lean_ctor_get(v_impl_2229_, 3);
lean_dec(v_unused_2331_);
v_unused_2332_ = lean_ctor_get(v_impl_2229_, 0);
lean_dec(v_unused_2332_);
v___x_2321_ = v_impl_2229_;
v_isShared_2322_ = v_isSharedCheck_2330_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_r_2317_);
lean_inc(v_v_2319_);
lean_inc(v_k_2318_);
lean_dec(v_impl_2229_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2330_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2323_; lean_object* v___x_2325_; 
v___x_2323_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2317_);
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 3, v_r_2317_);
lean_ctor_set(v___x_2321_, 2, v_v_2083_);
lean_ctor_set(v___x_2321_, 1, v_k_2082_);
lean_ctor_set(v___x_2321_, 0, v___x_2230_);
v___x_2325_ = v___x_2321_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v___x_2230_);
lean_ctor_set(v_reuseFailAlloc_2329_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2329_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2329_, 3, v_r_2317_);
lean_ctor_set(v_reuseFailAlloc_2329_, 4, v_r_2317_);
v___x_2325_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
lean_object* v___x_2327_; 
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 4, v___x_2325_);
lean_ctor_set(v___x_2087_, 3, v_l_2316_);
lean_ctor_set(v___x_2087_, 2, v_v_2319_);
lean_ctor_set(v___x_2087_, 1, v_k_2318_);
lean_ctor_set(v___x_2087_, 0, v___x_2323_);
v___x_2327_ = v___x_2087_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v___x_2323_);
lean_ctor_set(v_reuseFailAlloc_2328_, 1, v_k_2318_);
lean_ctor_set(v_reuseFailAlloc_2328_, 2, v_v_2319_);
lean_ctor_set(v_reuseFailAlloc_2328_, 3, v_l_2316_);
lean_ctor_set(v_reuseFailAlloc_2328_, 4, v___x_2325_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
else
{
lean_object* v_r_2333_; 
v_r_2333_ = lean_ctor_get(v_impl_2229_, 4);
lean_inc(v_r_2333_);
if (lean_obj_tag(v_r_2333_) == 0)
{
lean_object* v_k_2334_; lean_object* v_v_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2358_; 
v_k_2334_ = lean_ctor_get(v_impl_2229_, 1);
v_v_2335_ = lean_ctor_get(v_impl_2229_, 2);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_impl_2229_);
if (v_isSharedCheck_2358_ == 0)
{
lean_object* v_unused_2359_; lean_object* v_unused_2360_; lean_object* v_unused_2361_; 
v_unused_2359_ = lean_ctor_get(v_impl_2229_, 4);
lean_dec(v_unused_2359_);
v_unused_2360_ = lean_ctor_get(v_impl_2229_, 3);
lean_dec(v_unused_2360_);
v_unused_2361_ = lean_ctor_get(v_impl_2229_, 0);
lean_dec(v_unused_2361_);
v___x_2337_ = v_impl_2229_;
v_isShared_2338_ = v_isSharedCheck_2358_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_v_2335_);
lean_inc(v_k_2334_);
lean_dec(v_impl_2229_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2358_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v_k_2339_; lean_object* v_v_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2354_; 
v_k_2339_ = lean_ctor_get(v_r_2333_, 1);
v_v_2340_ = lean_ctor_get(v_r_2333_, 2);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_r_2333_);
if (v_isSharedCheck_2354_ == 0)
{
lean_object* v_unused_2355_; lean_object* v_unused_2356_; lean_object* v_unused_2357_; 
v_unused_2355_ = lean_ctor_get(v_r_2333_, 4);
lean_dec(v_unused_2355_);
v_unused_2356_ = lean_ctor_get(v_r_2333_, 3);
lean_dec(v_unused_2356_);
v_unused_2357_ = lean_ctor_get(v_r_2333_, 0);
lean_dec(v_unused_2357_);
v___x_2342_ = v_r_2333_;
v_isShared_2343_ = v_isSharedCheck_2354_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_v_2340_);
lean_inc(v_k_2339_);
lean_dec(v_r_2333_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2354_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2344_; lean_object* v___x_2346_; 
v___x_2344_ = lean_unsigned_to_nat(3u);
if (v_isShared_2343_ == 0)
{
lean_ctor_set(v___x_2342_, 4, v_l_2316_);
lean_ctor_set(v___x_2342_, 3, v_l_2316_);
lean_ctor_set(v___x_2342_, 2, v_v_2335_);
lean_ctor_set(v___x_2342_, 1, v_k_2334_);
lean_ctor_set(v___x_2342_, 0, v___x_2230_);
v___x_2346_ = v___x_2342_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2230_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v_k_2334_);
lean_ctor_set(v_reuseFailAlloc_2353_, 2, v_v_2335_);
lean_ctor_set(v_reuseFailAlloc_2353_, 3, v_l_2316_);
lean_ctor_set(v_reuseFailAlloc_2353_, 4, v_l_2316_);
v___x_2346_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
lean_object* v___x_2348_; 
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 4, v_l_2316_);
lean_ctor_set(v___x_2337_, 2, v_v_2083_);
lean_ctor_set(v___x_2337_, 1, v_k_2082_);
lean_ctor_set(v___x_2337_, 0, v___x_2230_);
v___x_2348_ = v___x_2337_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2230_);
lean_ctor_set(v_reuseFailAlloc_2352_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2352_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2352_, 3, v_l_2316_);
lean_ctor_set(v_reuseFailAlloc_2352_, 4, v_l_2316_);
v___x_2348_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
lean_object* v___x_2350_; 
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 4, v___x_2348_);
lean_ctor_set(v___x_2087_, 3, v___x_2346_);
lean_ctor_set(v___x_2087_, 2, v_v_2340_);
lean_ctor_set(v___x_2087_, 1, v_k_2339_);
lean_ctor_set(v___x_2087_, 0, v___x_2344_);
v___x_2350_ = v___x_2087_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v___x_2344_);
lean_ctor_set(v_reuseFailAlloc_2351_, 1, v_k_2339_);
lean_ctor_set(v_reuseFailAlloc_2351_, 2, v_v_2340_);
lean_ctor_set(v_reuseFailAlloc_2351_, 3, v___x_2346_);
lean_ctor_set(v_reuseFailAlloc_2351_, 4, v___x_2348_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
}
}
}
}
else
{
lean_object* v___x_2362_; lean_object* v___x_2364_; 
v___x_2362_ = lean_unsigned_to_nat(2u);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 4, v_r_2333_);
lean_ctor_set(v___x_2087_, 3, v_impl_2229_);
lean_ctor_set(v___x_2087_, 0, v___x_2362_);
v___x_2364_ = v___x_2087_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v___x_2362_);
lean_ctor_set(v_reuseFailAlloc_2365_, 1, v_k_2082_);
lean_ctor_set(v_reuseFailAlloc_2365_, 2, v_v_2083_);
lean_ctor_set(v_reuseFailAlloc_2365_, 3, v_impl_2229_);
lean_ctor_set(v_reuseFailAlloc_2365_, 4, v_r_2333_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2367_ = lean_unsigned_to_nat(1u);
v___x_2368_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2368_, 0, v___x_2367_);
lean_ctor_set(v___x_2368_, 1, v_k_2078_);
lean_ctor_set(v___x_2368_, 2, v_v_2079_);
lean_ctor_set(v___x_2368_, 3, v_t_2080_);
lean_ctor_set(v___x_2368_, 4, v_t_2080_);
return v___x_2368_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0___redArg(lean_object* v_k_2369_, lean_object* v_t_2370_){
_start:
{
if (lean_obj_tag(v_t_2370_) == 0)
{
lean_object* v_k_2371_; lean_object* v_l_2372_; lean_object* v_r_2373_; uint8_t v___x_2374_; 
v_k_2371_ = lean_ctor_get(v_t_2370_, 1);
v_l_2372_ = lean_ctor_get(v_t_2370_, 3);
v_r_2373_ = lean_ctor_get(v_t_2370_, 4);
v___x_2374_ = lean_nat_dec_lt(v_k_2369_, v_k_2371_);
if (v___x_2374_ == 0)
{
uint8_t v___x_2375_; 
v___x_2375_ = lean_nat_dec_eq(v_k_2369_, v_k_2371_);
if (v___x_2375_ == 0)
{
v_t_2370_ = v_r_2373_;
goto _start;
}
else
{
return v___x_2375_;
}
}
else
{
v_t_2370_ = v_l_2372_;
goto _start;
}
}
else
{
uint8_t v___x_2378_; 
v___x_2378_ = 0;
return v___x_2378_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0___redArg___boxed(lean_object* v_k_2379_, lean_object* v_t_2380_){
_start:
{
uint8_t v_res_2381_; lean_object* v_r_2382_; 
v_res_2381_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0___redArg(v_k_2379_, v_t_2380_);
lean_dec(v_t_2380_);
lean_dec(v_k_2379_);
v_r_2382_ = lean_box(v_res_2381_);
return v_r_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_mkIndexSet(lean_object* v_idx_2383_){
_start:
{
lean_object* v___x_2384_; uint8_t v___x_2385_; 
v___x_2384_ = lean_box(1);
v___x_2385_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0___redArg(v_idx_2383_, v___x_2384_);
if (v___x_2385_ == 0)
{
lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2386_ = lean_box(0);
v___x_2387_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1___redArg(v_idx_2383_, v___x_2386_, v___x_2384_);
return v___x_2387_;
}
else
{
lean_dec(v_idx_2383_);
return v___x_2384_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0(lean_object* v_00_u03b2_2388_, lean_object* v_k_2389_, lean_object* v_t_2390_){
_start:
{
uint8_t v___x_2391_; 
v___x_2391_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0___redArg(v_k_2389_, v_t_2390_);
return v___x_2391_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0___boxed(lean_object* v_00_u03b2_2392_, lean_object* v_k_2393_, lean_object* v_t_2394_){
_start:
{
uint8_t v_res_2395_; lean_object* v_r_2396_; 
v_res_2395_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0(v_00_u03b2_2392_, v_k_2393_, v_t_2394_);
lean_dec(v_t_2394_);
lean_dec(v_k_2393_);
v_r_2396_ = lean_box(v_res_2395_);
return v_r_2396_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1(lean_object* v_00_u03b2_2397_, lean_object* v_k_2398_, lean_object* v_v_2399_, lean_object* v_t_2400_, lean_object* v_hl_2401_){
_start:
{
lean_object* v___x_2402_; 
v___x_2402_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1___redArg(v_k_2398_, v_v_2399_, v_t_2400_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_ctorIdx(lean_object* v_x_2403_){
_start:
{
switch(lean_obj_tag(v_x_2403_))
{
case 0:
{
lean_object* v___x_2404_; 
v___x_2404_ = lean_unsigned_to_nat(0u);
return v___x_2404_;
}
case 1:
{
lean_object* v___x_2405_; 
v___x_2405_ = lean_unsigned_to_nat(1u);
return v___x_2405_;
}
default: 
{
lean_object* v___x_2406_; 
v___x_2406_ = lean_unsigned_to_nat(2u);
return v___x_2406_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_ctorIdx___boxed(lean_object* v_x_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l_Lean_IR_LocalContextEntry_ctorIdx(v_x_2407_);
lean_dec_ref(v_x_2407_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_ctorElim___redArg(lean_object* v_t_2409_, lean_object* v_k_2410_){
_start:
{
switch(lean_obj_tag(v_t_2409_))
{
case 0:
{
lean_object* v_a_2411_; lean_object* v___x_2412_; 
v_a_2411_ = lean_ctor_get(v_t_2409_, 0);
lean_inc(v_a_2411_);
lean_dec_ref_known(v_t_2409_, 1);
v___x_2412_ = lean_apply_1(v_k_2410_, v_a_2411_);
return v___x_2412_;
}
case 1:
{
lean_object* v_a_2413_; lean_object* v_a_2414_; lean_object* v___x_2415_; 
v_a_2413_ = lean_ctor_get(v_t_2409_, 0);
lean_inc(v_a_2413_);
v_a_2414_ = lean_ctor_get(v_t_2409_, 1);
lean_inc_ref(v_a_2414_);
lean_dec_ref_known(v_t_2409_, 2);
v___x_2415_ = lean_apply_2(v_k_2410_, v_a_2413_, v_a_2414_);
return v___x_2415_;
}
default: 
{
lean_object* v_a_2416_; lean_object* v_a_2417_; lean_object* v___x_2418_; 
v_a_2416_ = lean_ctor_get(v_t_2409_, 0);
lean_inc_ref(v_a_2416_);
v_a_2417_ = lean_ctor_get(v_t_2409_, 1);
lean_inc(v_a_2417_);
lean_dec_ref_known(v_t_2409_, 2);
v___x_2418_ = lean_apply_2(v_k_2410_, v_a_2416_, v_a_2417_);
return v___x_2418_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_ctorElim(lean_object* v_motive_2419_, lean_object* v_ctorIdx_2420_, lean_object* v_t_2421_, lean_object* v_h_2422_, lean_object* v_k_2423_){
_start:
{
lean_object* v___x_2424_; 
v___x_2424_ = l_Lean_IR_LocalContextEntry_ctorElim___redArg(v_t_2421_, v_k_2423_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_ctorElim___boxed(lean_object* v_motive_2425_, lean_object* v_ctorIdx_2426_, lean_object* v_t_2427_, lean_object* v_h_2428_, lean_object* v_k_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Lean_IR_LocalContextEntry_ctorElim(v_motive_2425_, v_ctorIdx_2426_, v_t_2427_, v_h_2428_, v_k_2429_);
lean_dec(v_ctorIdx_2426_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_param_elim___redArg(lean_object* v_t_2431_, lean_object* v_param_2432_){
_start:
{
lean_object* v___x_2433_; 
v___x_2433_ = l_Lean_IR_LocalContextEntry_ctorElim___redArg(v_t_2431_, v_param_2432_);
return v___x_2433_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_param_elim(lean_object* v_motive_2434_, lean_object* v_t_2435_, lean_object* v_h_2436_, lean_object* v_param_2437_){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = l_Lean_IR_LocalContextEntry_ctorElim___redArg(v_t_2435_, v_param_2437_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_localVar_elim___redArg(lean_object* v_t_2439_, lean_object* v_localVar_2440_){
_start:
{
lean_object* v___x_2441_; 
v___x_2441_ = l_Lean_IR_LocalContextEntry_ctorElim___redArg(v_t_2439_, v_localVar_2440_);
return v___x_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_localVar_elim(lean_object* v_motive_2442_, lean_object* v_t_2443_, lean_object* v_h_2444_, lean_object* v_localVar_2445_){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = l_Lean_IR_LocalContextEntry_ctorElim___redArg(v_t_2443_, v_localVar_2445_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_joinPoint_elim___redArg(lean_object* v_t_2447_, lean_object* v_joinPoint_2448_){
_start:
{
lean_object* v___x_2449_; 
v___x_2449_ = l_Lean_IR_LocalContextEntry_ctorElim___redArg(v_t_2447_, v_joinPoint_2448_);
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContextEntry_joinPoint_elim(lean_object* v_motive_2450_, lean_object* v_t_2451_, lean_object* v_h_2452_, lean_object* v_joinPoint_2453_){
_start:
{
lean_object* v___x_2454_; 
v___x_2454_ = l_Lean_IR_LocalContextEntry_ctorElim___redArg(v_t_2451_, v_joinPoint_2453_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_addLocal(lean_object* v_ctx_2455_, lean_object* v_x_2456_, lean_object* v_t_2457_, lean_object* v_v_2458_){
_start:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2459_, 0, v_t_2457_);
lean_ctor_set(v___x_2459_, 1, v_v_2458_);
v___x_2460_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1___redArg(v_x_2456_, v___x_2459_, v_ctx_2455_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_addJP(lean_object* v_ctx_2461_, lean_object* v_j_2462_, lean_object* v_xs_2463_, lean_object* v_b_2464_){
_start:
{
lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2465_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2465_, 0, v_xs_2463_);
lean_ctor_set(v___x_2465_, 1, v_b_2464_);
v___x_2466_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1___redArg(v_j_2462_, v___x_2465_, v_ctx_2461_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_addParam(lean_object* v_ctx_2467_, lean_object* v_p_2468_){
_start:
{
lean_object* v_x_2469_; lean_object* v_ty_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; 
v_x_2469_ = lean_ctor_get(v_p_2468_, 0);
lean_inc(v_x_2469_);
v_ty_2470_ = lean_ctor_get(v_p_2468_, 1);
lean_inc(v_ty_2470_);
lean_dec_ref(v_p_2468_);
v___x_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2471_, 0, v_ty_2470_);
v___x_2472_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1___redArg(v_x_2469_, v___x_2471_, v_ctx_2467_);
return v___x_2472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LocalContext_addParams_spec__0(lean_object* v_as_2473_, size_t v_i_2474_, size_t v_stop_2475_, lean_object* v_b_2476_){
_start:
{
uint8_t v___x_2477_; 
v___x_2477_ = lean_usize_dec_eq(v_i_2474_, v_stop_2475_);
if (v___x_2477_ == 0)
{
lean_object* v___x_2478_; lean_object* v___x_2479_; size_t v___x_2480_; size_t v___x_2481_; 
v___x_2478_ = lean_array_uget_borrowed(v_as_2473_, v_i_2474_);
lean_inc(v___x_2478_);
v___x_2479_ = l_Lean_IR_LocalContext_addParam(v_b_2476_, v___x_2478_);
v___x_2480_ = ((size_t)1ULL);
v___x_2481_ = lean_usize_add(v_i_2474_, v___x_2480_);
v_i_2474_ = v___x_2481_;
v_b_2476_ = v___x_2479_;
goto _start;
}
else
{
return v_b_2476_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LocalContext_addParams_spec__0___boxed(lean_object* v_as_2483_, lean_object* v_i_2484_, lean_object* v_stop_2485_, lean_object* v_b_2486_){
_start:
{
size_t v_i_boxed_2487_; size_t v_stop_boxed_2488_; lean_object* v_res_2489_; 
v_i_boxed_2487_ = lean_unbox_usize(v_i_2484_);
lean_dec(v_i_2484_);
v_stop_boxed_2488_ = lean_unbox_usize(v_stop_2485_);
lean_dec(v_stop_2485_);
v_res_2489_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LocalContext_addParams_spec__0(v_as_2483_, v_i_boxed_2487_, v_stop_boxed_2488_, v_b_2486_);
lean_dec_ref(v_as_2483_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_addParams(lean_object* v_ctx_2490_, lean_object* v_ps_2491_){
_start:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; uint8_t v___x_2494_; 
v___x_2492_ = lean_unsigned_to_nat(0u);
v___x_2493_ = lean_array_get_size(v_ps_2491_);
v___x_2494_ = lean_nat_dec_lt(v___x_2492_, v___x_2493_);
if (v___x_2494_ == 0)
{
return v_ctx_2490_;
}
else
{
uint8_t v___x_2495_; 
v___x_2495_ = lean_nat_dec_le(v___x_2493_, v___x_2493_);
if (v___x_2495_ == 0)
{
if (v___x_2494_ == 0)
{
return v_ctx_2490_;
}
else
{
size_t v___x_2496_; size_t v___x_2497_; lean_object* v___x_2498_; 
v___x_2496_ = ((size_t)0ULL);
v___x_2497_ = lean_usize_of_nat(v___x_2493_);
v___x_2498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LocalContext_addParams_spec__0(v_ps_2491_, v___x_2496_, v___x_2497_, v_ctx_2490_);
return v___x_2498_;
}
}
else
{
size_t v___x_2499_; size_t v___x_2500_; lean_object* v___x_2501_; 
v___x_2499_ = ((size_t)0ULL);
v___x_2500_ = lean_usize_of_nat(v___x_2493_);
v___x_2501_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LocalContext_addParams_spec__0(v_ps_2491_, v___x_2499_, v___x_2500_, v_ctx_2490_);
return v___x_2501_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_addParams___boxed(lean_object* v_ctx_2502_, lean_object* v_ps_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l_Lean_IR_LocalContext_addParams(v_ctx_2502_, v_ps_2503_);
lean_dec_ref(v_ps_2503_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(lean_object* v_t_2505_, lean_object* v_k_2506_){
_start:
{
if (lean_obj_tag(v_t_2505_) == 0)
{
lean_object* v_k_2507_; lean_object* v_v_2508_; lean_object* v_l_2509_; lean_object* v_r_2510_; uint8_t v___x_2511_; 
v_k_2507_ = lean_ctor_get(v_t_2505_, 1);
v_v_2508_ = lean_ctor_get(v_t_2505_, 2);
v_l_2509_ = lean_ctor_get(v_t_2505_, 3);
v_r_2510_ = lean_ctor_get(v_t_2505_, 4);
v___x_2511_ = lean_nat_dec_lt(v_k_2506_, v_k_2507_);
if (v___x_2511_ == 0)
{
uint8_t v___x_2512_; 
v___x_2512_ = lean_nat_dec_eq(v_k_2506_, v_k_2507_);
if (v___x_2512_ == 0)
{
v_t_2505_ = v_r_2510_;
goto _start;
}
else
{
lean_object* v___x_2514_; 
lean_inc(v_v_2508_);
v___x_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2514_, 0, v_v_2508_);
return v___x_2514_;
}
}
else
{
v_t_2505_ = v_l_2509_;
goto _start;
}
}
else
{
lean_object* v___x_2516_; 
v___x_2516_ = lean_box(0);
return v___x_2516_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg___boxed(lean_object* v_t_2517_, lean_object* v_k_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(v_t_2517_, v_k_2518_);
lean_dec(v_k_2518_);
lean_dec(v_t_2517_);
return v_res_2519_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_LocalContext_isJP(lean_object* v_ctx_2520_, lean_object* v_idx_2521_){
_start:
{
lean_object* v___x_2522_; 
v___x_2522_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(v_ctx_2520_, v_idx_2521_);
if (lean_obj_tag(v___x_2522_) == 1)
{
lean_object* v_val_2523_; 
v_val_2523_ = lean_ctor_get(v___x_2522_, 0);
lean_inc(v_val_2523_);
lean_dec_ref_known(v___x_2522_, 1);
if (lean_obj_tag(v_val_2523_) == 2)
{
uint8_t v___x_2524_; 
lean_dec_ref_known(v_val_2523_, 2);
v___x_2524_ = 1;
return v___x_2524_;
}
else
{
uint8_t v___x_2525_; 
lean_dec(v_val_2523_);
v___x_2525_ = 0;
return v___x_2525_;
}
}
else
{
uint8_t v___x_2526_; 
lean_dec(v___x_2522_);
v___x_2526_ = 0;
return v___x_2526_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_isJP___boxed(lean_object* v_ctx_2527_, lean_object* v_idx_2528_){
_start:
{
uint8_t v_res_2529_; lean_object* v_r_2530_; 
v_res_2529_ = l_Lean_IR_LocalContext_isJP(v_ctx_2527_, v_idx_2528_);
lean_dec(v_idx_2528_);
lean_dec(v_ctx_2527_);
v_r_2530_ = lean_box(v_res_2529_);
return v_r_2530_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0(lean_object* v_00_u03b4_2531_, lean_object* v_t_2532_, lean_object* v_k_2533_){
_start:
{
lean_object* v___x_2534_; 
v___x_2534_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(v_t_2532_, v_k_2533_);
return v___x_2534_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___boxed(lean_object* v_00_u03b4_2535_, lean_object* v_t_2536_, lean_object* v_k_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0(v_00_u03b4_2535_, v_t_2536_, v_k_2537_);
lean_dec(v_k_2537_);
lean_dec(v_t_2536_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getJPBody(lean_object* v_ctx_2539_, lean_object* v_j_2540_){
_start:
{
lean_object* v___x_2541_; 
v___x_2541_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(v_ctx_2539_, v_j_2540_);
if (lean_obj_tag(v___x_2541_) == 1)
{
lean_object* v_val_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2551_; 
v_val_2542_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2544_ = v___x_2541_;
v_isShared_2545_ = v_isSharedCheck_2551_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_val_2542_);
lean_dec(v___x_2541_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2551_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
if (lean_obj_tag(v_val_2542_) == 2)
{
lean_object* v_a_2546_; lean_object* v___x_2548_; 
v_a_2546_ = lean_ctor_get(v_val_2542_, 1);
lean_inc(v_a_2546_);
lean_dec_ref_known(v_val_2542_, 2);
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 0, v_a_2546_);
v___x_2548_ = v___x_2544_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2546_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
else
{
lean_object* v___x_2550_; 
lean_del_object(v___x_2544_);
lean_dec(v_val_2542_);
v___x_2550_ = lean_box(0);
return v___x_2550_;
}
}
}
else
{
lean_object* v___x_2552_; 
lean_dec(v___x_2541_);
v___x_2552_ = lean_box(0);
return v___x_2552_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getJPBody___boxed(lean_object* v_ctx_2553_, lean_object* v_j_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l_Lean_IR_LocalContext_getJPBody(v_ctx_2553_, v_j_2554_);
lean_dec(v_j_2554_);
lean_dec(v_ctx_2553_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getJPParams(lean_object* v_ctx_2556_, lean_object* v_j_2557_){
_start:
{
lean_object* v___x_2558_; 
v___x_2558_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(v_ctx_2556_, v_j_2557_);
if (lean_obj_tag(v___x_2558_) == 1)
{
lean_object* v_val_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2568_; 
v_val_2559_ = lean_ctor_get(v___x_2558_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2558_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2561_ = v___x_2558_;
v_isShared_2562_ = v_isSharedCheck_2568_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_val_2559_);
lean_dec(v___x_2558_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2568_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
if (lean_obj_tag(v_val_2559_) == 2)
{
lean_object* v_a_2563_; lean_object* v___x_2565_; 
v_a_2563_ = lean_ctor_get(v_val_2559_, 0);
lean_inc_ref(v_a_2563_);
lean_dec_ref_known(v_val_2559_, 2);
if (v_isShared_2562_ == 0)
{
lean_ctor_set(v___x_2561_, 0, v_a_2563_);
v___x_2565_ = v___x_2561_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_a_2563_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
else
{
lean_object* v___x_2567_; 
lean_del_object(v___x_2561_);
lean_dec(v_val_2559_);
v___x_2567_ = lean_box(0);
return v___x_2567_;
}
}
}
else
{
lean_object* v___x_2569_; 
lean_dec(v___x_2558_);
v___x_2569_ = lean_box(0);
return v___x_2569_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getJPParams___boxed(lean_object* v_ctx_2570_, lean_object* v_j_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Lean_IR_LocalContext_getJPParams(v_ctx_2570_, v_j_2571_);
lean_dec(v_j_2571_);
lean_dec(v_ctx_2570_);
return v_res_2572_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_LocalContext_isParam(lean_object* v_ctx_2573_, lean_object* v_idx_2574_){
_start:
{
lean_object* v___x_2575_; 
v___x_2575_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(v_ctx_2573_, v_idx_2574_);
if (lean_obj_tag(v___x_2575_) == 1)
{
lean_object* v_val_2576_; 
v_val_2576_ = lean_ctor_get(v___x_2575_, 0);
lean_inc(v_val_2576_);
lean_dec_ref_known(v___x_2575_, 1);
if (lean_obj_tag(v_val_2576_) == 0)
{
uint8_t v___x_2577_; 
lean_dec_ref_known(v_val_2576_, 1);
v___x_2577_ = 1;
return v___x_2577_;
}
else
{
uint8_t v___x_2578_; 
lean_dec(v_val_2576_);
v___x_2578_ = 0;
return v___x_2578_;
}
}
else
{
uint8_t v___x_2579_; 
lean_dec(v___x_2575_);
v___x_2579_ = 0;
return v___x_2579_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_isParam___boxed(lean_object* v_ctx_2580_, lean_object* v_idx_2581_){
_start:
{
uint8_t v_res_2582_; lean_object* v_r_2583_; 
v_res_2582_ = l_Lean_IR_LocalContext_isParam(v_ctx_2580_, v_idx_2581_);
lean_dec(v_idx_2581_);
lean_dec(v_ctx_2580_);
v_r_2583_ = lean_box(v_res_2582_);
return v_r_2583_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_LocalContext_isLocalVar(lean_object* v_ctx_2584_, lean_object* v_idx_2585_){
_start:
{
lean_object* v___x_2586_; 
v___x_2586_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(v_ctx_2584_, v_idx_2585_);
if (lean_obj_tag(v___x_2586_) == 1)
{
lean_object* v_val_2587_; 
v_val_2587_ = lean_ctor_get(v___x_2586_, 0);
lean_inc(v_val_2587_);
lean_dec_ref_known(v___x_2586_, 1);
if (lean_obj_tag(v_val_2587_) == 1)
{
uint8_t v___x_2588_; 
lean_dec_ref_known(v_val_2587_, 2);
v___x_2588_ = 1;
return v___x_2588_;
}
else
{
uint8_t v___x_2589_; 
lean_dec(v_val_2587_);
v___x_2589_ = 0;
return v___x_2589_;
}
}
else
{
uint8_t v___x_2590_; 
lean_dec(v___x_2586_);
v___x_2590_ = 0;
return v___x_2590_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_isLocalVar___boxed(lean_object* v_ctx_2591_, lean_object* v_idx_2592_){
_start:
{
uint8_t v_res_2593_; lean_object* v_r_2594_; 
v_res_2593_ = l_Lean_IR_LocalContext_isLocalVar(v_ctx_2591_, v_idx_2592_);
lean_dec(v_idx_2592_);
lean_dec(v_ctx_2591_);
v_r_2594_ = lean_box(v_res_2593_);
return v_r_2594_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_LocalContext_contains(lean_object* v_ctx_2595_, lean_object* v_idx_2596_){
_start:
{
uint8_t v___x_2597_; 
v___x_2597_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_mkIndexSet_spec__0___redArg(v_idx_2596_, v_ctx_2595_);
return v___x_2597_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_contains___boxed(lean_object* v_ctx_2598_, lean_object* v_idx_2599_){
_start:
{
uint8_t v_res_2600_; lean_object* v_r_2601_; 
v_res_2600_ = l_Lean_IR_LocalContext_contains(v_ctx_2598_, v_idx_2599_);
lean_dec(v_idx_2599_);
lean_dec(v_ctx_2598_);
v_r_2601_ = lean_box(v_res_2600_);
return v_r_2601_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg(lean_object* v_k_2602_, lean_object* v_t_2603_){
_start:
{
if (lean_obj_tag(v_t_2603_) == 0)
{
lean_object* v_k_2604_; lean_object* v_v_2605_; lean_object* v_l_2606_; lean_object* v_r_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_3262_; 
v_k_2604_ = lean_ctor_get(v_t_2603_, 1);
v_v_2605_ = lean_ctor_get(v_t_2603_, 2);
v_l_2606_ = lean_ctor_get(v_t_2603_, 3);
v_r_2607_ = lean_ctor_get(v_t_2603_, 4);
v_isSharedCheck_3262_ = !lean_is_exclusive(v_t_2603_);
if (v_isSharedCheck_3262_ == 0)
{
lean_object* v_unused_3263_; 
v_unused_3263_ = lean_ctor_get(v_t_2603_, 0);
lean_dec(v_unused_3263_);
v___x_2609_ = v_t_2603_;
v_isShared_2610_ = v_isSharedCheck_3262_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_r_2607_);
lean_inc(v_l_2606_);
lean_inc(v_v_2605_);
lean_inc(v_k_2604_);
lean_dec(v_t_2603_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_3262_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
uint8_t v___x_2611_; 
v___x_2611_ = lean_nat_dec_lt(v_k_2602_, v_k_2604_);
if (v___x_2611_ == 0)
{
uint8_t v___x_2612_; 
v___x_2612_ = lean_nat_dec_eq(v_k_2602_, v_k_2604_);
if (v___x_2612_ == 0)
{
lean_object* v_impl_2613_; lean_object* v___x_2614_; 
v_impl_2613_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg(v_k_2602_, v_r_2607_);
v___x_2614_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_2613_) == 0)
{
if (lean_obj_tag(v_l_2606_) == 0)
{
lean_object* v_size_2615_; lean_object* v_size_2616_; lean_object* v_k_2617_; lean_object* v_v_2618_; lean_object* v_l_2619_; lean_object* v_r_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; uint8_t v___x_2623_; 
v_size_2615_ = lean_ctor_get(v_impl_2613_, 0);
lean_inc(v_size_2615_);
v_size_2616_ = lean_ctor_get(v_l_2606_, 0);
v_k_2617_ = lean_ctor_get(v_l_2606_, 1);
v_v_2618_ = lean_ctor_get(v_l_2606_, 2);
v_l_2619_ = lean_ctor_get(v_l_2606_, 3);
v_r_2620_ = lean_ctor_get(v_l_2606_, 4);
lean_inc(v_r_2620_);
v___x_2621_ = lean_unsigned_to_nat(3u);
v___x_2622_ = lean_nat_mul(v___x_2621_, v_size_2615_);
v___x_2623_ = lean_nat_dec_lt(v___x_2622_, v_size_2616_);
lean_dec(v___x_2622_);
if (v___x_2623_ == 0)
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2627_; 
lean_dec(v_r_2620_);
v___x_2624_ = lean_nat_add(v___x_2614_, v_size_2616_);
v___x_2625_ = lean_nat_add(v___x_2624_, v_size_2615_);
lean_dec(v_size_2615_);
lean_dec(v___x_2624_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v_impl_2613_);
lean_ctor_set(v___x_2609_, 0, v___x_2625_);
v___x_2627_ = v___x_2609_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v___x_2625_);
lean_ctor_set(v_reuseFailAlloc_2628_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_2628_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_2628_, 3, v_l_2606_);
lean_ctor_set(v_reuseFailAlloc_2628_, 4, v_impl_2613_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
return v___x_2627_;
}
}
else
{
lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2694_; 
lean_inc(v_l_2619_);
lean_inc(v_v_2618_);
lean_inc(v_k_2617_);
lean_inc(v_size_2616_);
v_isSharedCheck_2694_ = !lean_is_exclusive(v_l_2606_);
if (v_isSharedCheck_2694_ == 0)
{
lean_object* v_unused_2695_; lean_object* v_unused_2696_; lean_object* v_unused_2697_; lean_object* v_unused_2698_; lean_object* v_unused_2699_; 
v_unused_2695_ = lean_ctor_get(v_l_2606_, 4);
lean_dec(v_unused_2695_);
v_unused_2696_ = lean_ctor_get(v_l_2606_, 3);
lean_dec(v_unused_2696_);
v_unused_2697_ = lean_ctor_get(v_l_2606_, 2);
lean_dec(v_unused_2697_);
v_unused_2698_ = lean_ctor_get(v_l_2606_, 1);
lean_dec(v_unused_2698_);
v_unused_2699_ = lean_ctor_get(v_l_2606_, 0);
lean_dec(v_unused_2699_);
v___x_2630_ = v_l_2606_;
v_isShared_2631_ = v_isSharedCheck_2694_;
goto v_resetjp_2629_;
}
else
{
lean_dec(v_l_2606_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2694_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v_size_2632_; lean_object* v_size_2633_; lean_object* v_k_2634_; lean_object* v_v_2635_; lean_object* v_l_2636_; lean_object* v_r_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; uint8_t v___x_2640_; 
v_size_2632_ = lean_ctor_get(v_l_2619_, 0);
v_size_2633_ = lean_ctor_get(v_r_2620_, 0);
v_k_2634_ = lean_ctor_get(v_r_2620_, 1);
v_v_2635_ = lean_ctor_get(v_r_2620_, 2);
v_l_2636_ = lean_ctor_get(v_r_2620_, 3);
v_r_2637_ = lean_ctor_get(v_r_2620_, 4);
v___x_2638_ = lean_unsigned_to_nat(2u);
v___x_2639_ = lean_nat_mul(v___x_2638_, v_size_2632_);
v___x_2640_ = lean_nat_dec_lt(v_size_2633_, v___x_2639_);
lean_dec(v___x_2639_);
if (v___x_2640_ == 0)
{
lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2669_; 
lean_inc(v_r_2637_);
lean_inc(v_l_2636_);
lean_inc(v_v_2635_);
lean_inc(v_k_2634_);
v_isSharedCheck_2669_ = !lean_is_exclusive(v_r_2620_);
if (v_isSharedCheck_2669_ == 0)
{
lean_object* v_unused_2670_; lean_object* v_unused_2671_; lean_object* v_unused_2672_; lean_object* v_unused_2673_; lean_object* v_unused_2674_; 
v_unused_2670_ = lean_ctor_get(v_r_2620_, 4);
lean_dec(v_unused_2670_);
v_unused_2671_ = lean_ctor_get(v_r_2620_, 3);
lean_dec(v_unused_2671_);
v_unused_2672_ = lean_ctor_get(v_r_2620_, 2);
lean_dec(v_unused_2672_);
v_unused_2673_ = lean_ctor_get(v_r_2620_, 1);
lean_dec(v_unused_2673_);
v_unused_2674_ = lean_ctor_get(v_r_2620_, 0);
lean_dec(v_unused_2674_);
v___x_2642_ = v_r_2620_;
v_isShared_2643_ = v_isSharedCheck_2669_;
goto v_resetjp_2641_;
}
else
{
lean_dec(v_r_2620_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2669_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___x_2657_; lean_object* v___y_2659_; 
v___x_2644_ = lean_nat_add(v___x_2614_, v_size_2616_);
lean_dec(v_size_2616_);
v___x_2645_ = lean_nat_add(v___x_2644_, v_size_2615_);
lean_dec(v___x_2644_);
v___x_2657_ = lean_nat_add(v___x_2614_, v_size_2632_);
if (lean_obj_tag(v_l_2636_) == 0)
{
lean_object* v_size_2667_; 
v_size_2667_ = lean_ctor_get(v_l_2636_, 0);
lean_inc(v_size_2667_);
v___y_2659_ = v_size_2667_;
goto v___jp_2658_;
}
else
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_unsigned_to_nat(0u);
v___y_2659_ = v___x_2668_;
goto v___jp_2658_;
}
v___jp_2646_:
{
lean_object* v___x_2650_; lean_object* v___x_2652_; 
v___x_2650_ = lean_nat_add(v___y_2647_, v___y_2649_);
lean_dec(v___y_2649_);
lean_dec(v___y_2647_);
if (v_isShared_2643_ == 0)
{
lean_ctor_set(v___x_2642_, 4, v_impl_2613_);
lean_ctor_set(v___x_2642_, 3, v_r_2637_);
lean_ctor_set(v___x_2642_, 2, v_v_2605_);
lean_ctor_set(v___x_2642_, 1, v_k_2604_);
lean_ctor_set(v___x_2642_, 0, v___x_2650_);
v___x_2652_ = v___x_2642_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v___x_2650_);
lean_ctor_set(v_reuseFailAlloc_2656_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_2656_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_2656_, 3, v_r_2637_);
lean_ctor_set(v_reuseFailAlloc_2656_, 4, v_impl_2613_);
v___x_2652_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
lean_object* v___x_2654_; 
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 4, v___x_2652_);
lean_ctor_set(v___x_2630_, 3, v___y_2648_);
lean_ctor_set(v___x_2630_, 2, v_v_2635_);
lean_ctor_set(v___x_2630_, 1, v_k_2634_);
lean_ctor_set(v___x_2630_, 0, v___x_2645_);
v___x_2654_ = v___x_2630_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v___x_2645_);
lean_ctor_set(v_reuseFailAlloc_2655_, 1, v_k_2634_);
lean_ctor_set(v_reuseFailAlloc_2655_, 2, v_v_2635_);
lean_ctor_set(v_reuseFailAlloc_2655_, 3, v___y_2648_);
lean_ctor_set(v_reuseFailAlloc_2655_, 4, v___x_2652_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
}
v___jp_2658_:
{
lean_object* v___x_2660_; lean_object* v___x_2662_; 
v___x_2660_ = lean_nat_add(v___x_2657_, v___y_2659_);
lean_dec(v___y_2659_);
lean_dec(v___x_2657_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v_l_2636_);
lean_ctor_set(v___x_2609_, 3, v_l_2619_);
lean_ctor_set(v___x_2609_, 2, v_v_2618_);
lean_ctor_set(v___x_2609_, 1, v_k_2617_);
lean_ctor_set(v___x_2609_, 0, v___x_2660_);
v___x_2662_ = v___x_2609_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v___x_2660_);
lean_ctor_set(v_reuseFailAlloc_2666_, 1, v_k_2617_);
lean_ctor_set(v_reuseFailAlloc_2666_, 2, v_v_2618_);
lean_ctor_set(v_reuseFailAlloc_2666_, 3, v_l_2619_);
lean_ctor_set(v_reuseFailAlloc_2666_, 4, v_l_2636_);
v___x_2662_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
lean_object* v___x_2663_; 
v___x_2663_ = lean_nat_add(v___x_2614_, v_size_2615_);
lean_dec(v_size_2615_);
if (lean_obj_tag(v_r_2637_) == 0)
{
lean_object* v_size_2664_; 
v_size_2664_ = lean_ctor_get(v_r_2637_, 0);
lean_inc(v_size_2664_);
v___y_2647_ = v___x_2663_;
v___y_2648_ = v___x_2662_;
v___y_2649_ = v_size_2664_;
goto v___jp_2646_;
}
else
{
lean_object* v___x_2665_; 
v___x_2665_ = lean_unsigned_to_nat(0u);
v___y_2647_ = v___x_2663_;
v___y_2648_ = v___x_2662_;
v___y_2649_ = v___x_2665_;
goto v___jp_2646_;
}
}
}
}
}
else
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2680_; 
lean_del_object(v___x_2609_);
v___x_2675_ = lean_nat_add(v___x_2614_, v_size_2616_);
lean_dec(v_size_2616_);
v___x_2676_ = lean_nat_add(v___x_2675_, v_size_2615_);
lean_dec(v___x_2675_);
v___x_2677_ = lean_nat_add(v___x_2614_, v_size_2615_);
lean_dec(v_size_2615_);
v___x_2678_ = lean_nat_add(v___x_2677_, v_size_2633_);
lean_dec(v___x_2677_);
lean_inc_ref(v_impl_2613_);
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 4, v_impl_2613_);
lean_ctor_set(v___x_2630_, 3, v_r_2620_);
lean_ctor_set(v___x_2630_, 2, v_v_2605_);
lean_ctor_set(v___x_2630_, 1, v_k_2604_);
lean_ctor_set(v___x_2630_, 0, v___x_2678_);
v___x_2680_ = v___x_2630_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v___x_2678_);
lean_ctor_set(v_reuseFailAlloc_2693_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_2693_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_2693_, 3, v_r_2620_);
lean_ctor_set(v_reuseFailAlloc_2693_, 4, v_impl_2613_);
v___x_2680_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
v_isSharedCheck_2687_ = !lean_is_exclusive(v_impl_2613_);
if (v_isSharedCheck_2687_ == 0)
{
lean_object* v_unused_2688_; lean_object* v_unused_2689_; lean_object* v_unused_2690_; lean_object* v_unused_2691_; lean_object* v_unused_2692_; 
v_unused_2688_ = lean_ctor_get(v_impl_2613_, 4);
lean_dec(v_unused_2688_);
v_unused_2689_ = lean_ctor_get(v_impl_2613_, 3);
lean_dec(v_unused_2689_);
v_unused_2690_ = lean_ctor_get(v_impl_2613_, 2);
lean_dec(v_unused_2690_);
v_unused_2691_ = lean_ctor_get(v_impl_2613_, 1);
lean_dec(v_unused_2691_);
v_unused_2692_ = lean_ctor_get(v_impl_2613_, 0);
lean_dec(v_unused_2692_);
v___x_2682_ = v_impl_2613_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_dec(v_impl_2613_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 4, v___x_2680_);
lean_ctor_set(v___x_2682_, 3, v_l_2619_);
lean_ctor_set(v___x_2682_, 2, v_v_2618_);
lean_ctor_set(v___x_2682_, 1, v_k_2617_);
lean_ctor_set(v___x_2682_, 0, v___x_2676_);
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v___x_2676_);
lean_ctor_set(v_reuseFailAlloc_2686_, 1, v_k_2617_);
lean_ctor_set(v_reuseFailAlloc_2686_, 2, v_v_2618_);
lean_ctor_set(v_reuseFailAlloc_2686_, 3, v_l_2619_);
lean_ctor_set(v_reuseFailAlloc_2686_, 4, v___x_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_2700_; lean_object* v___x_2701_; lean_object* v___x_2703_; 
v_size_2700_ = lean_ctor_get(v_impl_2613_, 0);
lean_inc(v_size_2700_);
v___x_2701_ = lean_nat_add(v___x_2614_, v_size_2700_);
lean_dec(v_size_2700_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v_impl_2613_);
lean_ctor_set(v___x_2609_, 0, v___x_2701_);
v___x_2703_ = v___x_2609_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2701_);
lean_ctor_set(v_reuseFailAlloc_2704_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_2704_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_2704_, 3, v_l_2606_);
lean_ctor_set(v_reuseFailAlloc_2704_, 4, v_impl_2613_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
else
{
if (lean_obj_tag(v_l_2606_) == 0)
{
lean_object* v_l_2705_; 
v_l_2705_ = lean_ctor_get(v_l_2606_, 3);
if (lean_obj_tag(v_l_2705_) == 0)
{
lean_object* v_r_2706_; 
lean_inc_ref(v_l_2705_);
v_r_2706_ = lean_ctor_get(v_l_2606_, 4);
lean_inc(v_r_2706_);
if (lean_obj_tag(v_r_2706_) == 0)
{
lean_object* v_size_2707_; lean_object* v_k_2708_; lean_object* v_v_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2722_; 
v_size_2707_ = lean_ctor_get(v_l_2606_, 0);
v_k_2708_ = lean_ctor_get(v_l_2606_, 1);
v_v_2709_ = lean_ctor_get(v_l_2606_, 2);
v_isSharedCheck_2722_ = !lean_is_exclusive(v_l_2606_);
if (v_isSharedCheck_2722_ == 0)
{
lean_object* v_unused_2723_; lean_object* v_unused_2724_; 
v_unused_2723_ = lean_ctor_get(v_l_2606_, 4);
lean_dec(v_unused_2723_);
v_unused_2724_ = lean_ctor_get(v_l_2606_, 3);
lean_dec(v_unused_2724_);
v___x_2711_ = v_l_2606_;
v_isShared_2712_ = v_isSharedCheck_2722_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_v_2709_);
lean_inc(v_k_2708_);
lean_inc(v_size_2707_);
lean_dec(v_l_2606_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2722_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v_size_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2717_; 
v_size_2713_ = lean_ctor_get(v_r_2706_, 0);
v___x_2714_ = lean_nat_add(v___x_2614_, v_size_2707_);
lean_dec(v_size_2707_);
v___x_2715_ = lean_nat_add(v___x_2614_, v_size_2713_);
if (v_isShared_2712_ == 0)
{
lean_ctor_set(v___x_2711_, 4, v_impl_2613_);
lean_ctor_set(v___x_2711_, 3, v_r_2706_);
lean_ctor_set(v___x_2711_, 2, v_v_2605_);
lean_ctor_set(v___x_2711_, 1, v_k_2604_);
lean_ctor_set(v___x_2711_, 0, v___x_2715_);
v___x_2717_ = v___x_2711_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v___x_2715_);
lean_ctor_set(v_reuseFailAlloc_2721_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_2721_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_2721_, 3, v_r_2706_);
lean_ctor_set(v_reuseFailAlloc_2721_, 4, v_impl_2613_);
v___x_2717_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
lean_object* v___x_2719_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v___x_2717_);
lean_ctor_set(v___x_2609_, 3, v_l_2705_);
lean_ctor_set(v___x_2609_, 2, v_v_2709_);
lean_ctor_set(v___x_2609_, 1, v_k_2708_);
lean_ctor_set(v___x_2609_, 0, v___x_2714_);
v___x_2719_ = v___x_2609_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2714_);
lean_ctor_set(v_reuseFailAlloc_2720_, 1, v_k_2708_);
lean_ctor_set(v_reuseFailAlloc_2720_, 2, v_v_2709_);
lean_ctor_set(v_reuseFailAlloc_2720_, 3, v_l_2705_);
lean_ctor_set(v_reuseFailAlloc_2720_, 4, v___x_2717_);
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
else
{
lean_object* v_k_2725_; lean_object* v_v_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2737_; 
v_k_2725_ = lean_ctor_get(v_l_2606_, 1);
v_v_2726_ = lean_ctor_get(v_l_2606_, 2);
v_isSharedCheck_2737_ = !lean_is_exclusive(v_l_2606_);
if (v_isSharedCheck_2737_ == 0)
{
lean_object* v_unused_2738_; lean_object* v_unused_2739_; lean_object* v_unused_2740_; 
v_unused_2738_ = lean_ctor_get(v_l_2606_, 4);
lean_dec(v_unused_2738_);
v_unused_2739_ = lean_ctor_get(v_l_2606_, 3);
lean_dec(v_unused_2739_);
v_unused_2740_ = lean_ctor_get(v_l_2606_, 0);
lean_dec(v_unused_2740_);
v___x_2728_ = v_l_2606_;
v_isShared_2729_ = v_isSharedCheck_2737_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_v_2726_);
lean_inc(v_k_2725_);
lean_dec(v_l_2606_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2737_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2730_; lean_object* v___x_2732_; 
v___x_2730_ = lean_unsigned_to_nat(3u);
if (v_isShared_2729_ == 0)
{
lean_ctor_set(v___x_2728_, 3, v_r_2706_);
lean_ctor_set(v___x_2728_, 2, v_v_2605_);
lean_ctor_set(v___x_2728_, 1, v_k_2604_);
lean_ctor_set(v___x_2728_, 0, v___x_2614_);
v___x_2732_ = v___x_2728_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v___x_2614_);
lean_ctor_set(v_reuseFailAlloc_2736_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_2736_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_2736_, 3, v_r_2706_);
lean_ctor_set(v_reuseFailAlloc_2736_, 4, v_r_2706_);
v___x_2732_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
lean_object* v___x_2734_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v___x_2732_);
lean_ctor_set(v___x_2609_, 3, v_l_2705_);
lean_ctor_set(v___x_2609_, 2, v_v_2726_);
lean_ctor_set(v___x_2609_, 1, v_k_2725_);
lean_ctor_set(v___x_2609_, 0, v___x_2730_);
v___x_2734_ = v___x_2609_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2730_);
lean_ctor_set(v_reuseFailAlloc_2735_, 1, v_k_2725_);
lean_ctor_set(v_reuseFailAlloc_2735_, 2, v_v_2726_);
lean_ctor_set(v_reuseFailAlloc_2735_, 3, v_l_2705_);
lean_ctor_set(v_reuseFailAlloc_2735_, 4, v___x_2732_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
return v___x_2734_;
}
}
}
}
}
else
{
lean_object* v_r_2741_; 
v_r_2741_ = lean_ctor_get(v_l_2606_, 4);
lean_inc(v_r_2741_);
if (lean_obj_tag(v_r_2741_) == 0)
{
lean_object* v_k_2742_; lean_object* v_v_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2766_; 
lean_inc(v_l_2705_);
v_k_2742_ = lean_ctor_get(v_l_2606_, 1);
v_v_2743_ = lean_ctor_get(v_l_2606_, 2);
v_isSharedCheck_2766_ = !lean_is_exclusive(v_l_2606_);
if (v_isSharedCheck_2766_ == 0)
{
lean_object* v_unused_2767_; lean_object* v_unused_2768_; lean_object* v_unused_2769_; 
v_unused_2767_ = lean_ctor_get(v_l_2606_, 4);
lean_dec(v_unused_2767_);
v_unused_2768_ = lean_ctor_get(v_l_2606_, 3);
lean_dec(v_unused_2768_);
v_unused_2769_ = lean_ctor_get(v_l_2606_, 0);
lean_dec(v_unused_2769_);
v___x_2745_ = v_l_2606_;
v_isShared_2746_ = v_isSharedCheck_2766_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_v_2743_);
lean_inc(v_k_2742_);
lean_dec(v_l_2606_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2766_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v_k_2747_; lean_object* v_v_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2762_; 
v_k_2747_ = lean_ctor_get(v_r_2741_, 1);
v_v_2748_ = lean_ctor_get(v_r_2741_, 2);
v_isSharedCheck_2762_ = !lean_is_exclusive(v_r_2741_);
if (v_isSharedCheck_2762_ == 0)
{
lean_object* v_unused_2763_; lean_object* v_unused_2764_; lean_object* v_unused_2765_; 
v_unused_2763_ = lean_ctor_get(v_r_2741_, 4);
lean_dec(v_unused_2763_);
v_unused_2764_ = lean_ctor_get(v_r_2741_, 3);
lean_dec(v_unused_2764_);
v_unused_2765_ = lean_ctor_get(v_r_2741_, 0);
lean_dec(v_unused_2765_);
v___x_2750_ = v_r_2741_;
v_isShared_2751_ = v_isSharedCheck_2762_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_v_2748_);
lean_inc(v_k_2747_);
lean_dec(v_r_2741_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2762_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2752_; lean_object* v___x_2754_; 
v___x_2752_ = lean_unsigned_to_nat(3u);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 4, v_l_2705_);
lean_ctor_set(v___x_2750_, 3, v_l_2705_);
lean_ctor_set(v___x_2750_, 2, v_v_2743_);
lean_ctor_set(v___x_2750_, 1, v_k_2742_);
lean_ctor_set(v___x_2750_, 0, v___x_2614_);
v___x_2754_ = v___x_2750_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v___x_2614_);
lean_ctor_set(v_reuseFailAlloc_2761_, 1, v_k_2742_);
lean_ctor_set(v_reuseFailAlloc_2761_, 2, v_v_2743_);
lean_ctor_set(v_reuseFailAlloc_2761_, 3, v_l_2705_);
lean_ctor_set(v_reuseFailAlloc_2761_, 4, v_l_2705_);
v___x_2754_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
lean_object* v___x_2756_; 
if (v_isShared_2746_ == 0)
{
lean_ctor_set(v___x_2745_, 4, v_l_2705_);
lean_ctor_set(v___x_2745_, 2, v_v_2605_);
lean_ctor_set(v___x_2745_, 1, v_k_2604_);
lean_ctor_set(v___x_2745_, 0, v___x_2614_);
v___x_2756_ = v___x_2745_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v___x_2614_);
lean_ctor_set(v_reuseFailAlloc_2760_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_2760_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_2760_, 3, v_l_2705_);
lean_ctor_set(v_reuseFailAlloc_2760_, 4, v_l_2705_);
v___x_2756_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
lean_object* v___x_2758_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v___x_2756_);
lean_ctor_set(v___x_2609_, 3, v___x_2754_);
lean_ctor_set(v___x_2609_, 2, v_v_2748_);
lean_ctor_set(v___x_2609_, 1, v_k_2747_);
lean_ctor_set(v___x_2609_, 0, v___x_2752_);
v___x_2758_ = v___x_2609_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v___x_2752_);
lean_ctor_set(v_reuseFailAlloc_2759_, 1, v_k_2747_);
lean_ctor_set(v_reuseFailAlloc_2759_, 2, v_v_2748_);
lean_ctor_set(v_reuseFailAlloc_2759_, 3, v___x_2754_);
lean_ctor_set(v_reuseFailAlloc_2759_, 4, v___x_2756_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
}
}
else
{
lean_object* v___x_2770_; lean_object* v___x_2772_; 
v___x_2770_ = lean_unsigned_to_nat(2u);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v_r_2741_);
lean_ctor_set(v___x_2609_, 0, v___x_2770_);
v___x_2772_ = v___x_2609_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v___x_2770_);
lean_ctor_set(v_reuseFailAlloc_2773_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_2773_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_2773_, 3, v_l_2606_);
lean_ctor_set(v_reuseFailAlloc_2773_, 4, v_r_2741_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
return v___x_2772_;
}
}
}
}
else
{
lean_object* v___x_2775_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v_l_2606_);
lean_ctor_set(v___x_2609_, 0, v___x_2614_);
v___x_2775_ = v___x_2609_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v___x_2614_);
lean_ctor_set(v_reuseFailAlloc_2776_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_2776_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_2776_, 3, v_l_2606_);
lean_ctor_set(v_reuseFailAlloc_2776_, 4, v_l_2606_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
}
else
{
lean_del_object(v___x_2609_);
lean_dec(v_v_2605_);
lean_dec(v_k_2604_);
if (lean_obj_tag(v_l_2606_) == 0)
{
if (lean_obj_tag(v_r_2607_) == 0)
{
lean_object* v_size_2777_; lean_object* v_k_2778_; lean_object* v_v_2779_; lean_object* v_l_2780_; lean_object* v_r_2781_; lean_object* v_size_2782_; lean_object* v_k_2783_; lean_object* v_v_2784_; lean_object* v_l_2785_; lean_object* v_r_2786_; lean_object* v___x_2787_; uint8_t v___x_2788_; 
v_size_2777_ = lean_ctor_get(v_l_2606_, 0);
v_k_2778_ = lean_ctor_get(v_l_2606_, 1);
v_v_2779_ = lean_ctor_get(v_l_2606_, 2);
v_l_2780_ = lean_ctor_get(v_l_2606_, 3);
v_r_2781_ = lean_ctor_get(v_l_2606_, 4);
lean_inc(v_r_2781_);
v_size_2782_ = lean_ctor_get(v_r_2607_, 0);
v_k_2783_ = lean_ctor_get(v_r_2607_, 1);
v_v_2784_ = lean_ctor_get(v_r_2607_, 2);
v_l_2785_ = lean_ctor_get(v_r_2607_, 3);
lean_inc(v_l_2785_);
v_r_2786_ = lean_ctor_get(v_r_2607_, 4);
v___x_2787_ = lean_unsigned_to_nat(1u);
v___x_2788_ = lean_nat_dec_lt(v_size_2777_, v_size_2782_);
if (v___x_2788_ == 0)
{
lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2924_; 
lean_inc(v_l_2780_);
lean_inc(v_v_2779_);
lean_inc(v_k_2778_);
v_isSharedCheck_2924_ = !lean_is_exclusive(v_l_2606_);
if (v_isSharedCheck_2924_ == 0)
{
lean_object* v_unused_2925_; lean_object* v_unused_2926_; lean_object* v_unused_2927_; lean_object* v_unused_2928_; lean_object* v_unused_2929_; 
v_unused_2925_ = lean_ctor_get(v_l_2606_, 4);
lean_dec(v_unused_2925_);
v_unused_2926_ = lean_ctor_get(v_l_2606_, 3);
lean_dec(v_unused_2926_);
v_unused_2927_ = lean_ctor_get(v_l_2606_, 2);
lean_dec(v_unused_2927_);
v_unused_2928_ = lean_ctor_get(v_l_2606_, 1);
lean_dec(v_unused_2928_);
v_unused_2929_ = lean_ctor_get(v_l_2606_, 0);
lean_dec(v_unused_2929_);
v___x_2790_ = v_l_2606_;
v_isShared_2791_ = v_isSharedCheck_2924_;
goto v_resetjp_2789_;
}
else
{
lean_dec(v_l_2606_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2924_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2792_; lean_object* v_tree_2793_; 
v___x_2792_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_2778_, v_v_2779_, v_l_2780_, v_r_2781_);
v_tree_2793_ = lean_ctor_get(v___x_2792_, 2);
lean_inc(v_tree_2793_);
if (lean_obj_tag(v_tree_2793_) == 0)
{
lean_object* v_k_2794_; lean_object* v_v_2795_; lean_object* v_size_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; uint8_t v___x_2799_; 
v_k_2794_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_k_2794_);
v_v_2795_ = lean_ctor_get(v___x_2792_, 1);
lean_inc(v_v_2795_);
lean_dec_ref(v___x_2792_);
v_size_2796_ = lean_ctor_get(v_tree_2793_, 0);
v___x_2797_ = lean_unsigned_to_nat(3u);
v___x_2798_ = lean_nat_mul(v___x_2797_, v_size_2796_);
v___x_2799_ = lean_nat_dec_lt(v___x_2798_, v_size_2782_);
lean_dec(v___x_2798_);
if (v___x_2799_ == 0)
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2803_; 
lean_dec(v_l_2785_);
v___x_2800_ = lean_nat_add(v___x_2787_, v_size_2796_);
v___x_2801_ = lean_nat_add(v___x_2800_, v_size_2782_);
lean_dec(v___x_2800_);
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 4, v_r_2607_);
lean_ctor_set(v___x_2790_, 3, v_tree_2793_);
lean_ctor_set(v___x_2790_, 2, v_v_2795_);
lean_ctor_set(v___x_2790_, 1, v_k_2794_);
lean_ctor_set(v___x_2790_, 0, v___x_2801_);
v___x_2803_ = v___x_2790_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v___x_2801_);
lean_ctor_set(v_reuseFailAlloc_2804_, 1, v_k_2794_);
lean_ctor_set(v_reuseFailAlloc_2804_, 2, v_v_2795_);
lean_ctor_set(v_reuseFailAlloc_2804_, 3, v_tree_2793_);
lean_ctor_set(v_reuseFailAlloc_2804_, 4, v_r_2607_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
else
{
lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2859_; 
lean_inc(v_r_2786_);
lean_inc(v_v_2784_);
lean_inc(v_k_2783_);
lean_inc(v_size_2782_);
v_isSharedCheck_2859_ = !lean_is_exclusive(v_r_2607_);
if (v_isSharedCheck_2859_ == 0)
{
lean_object* v_unused_2860_; lean_object* v_unused_2861_; lean_object* v_unused_2862_; lean_object* v_unused_2863_; lean_object* v_unused_2864_; 
v_unused_2860_ = lean_ctor_get(v_r_2607_, 4);
lean_dec(v_unused_2860_);
v_unused_2861_ = lean_ctor_get(v_r_2607_, 3);
lean_dec(v_unused_2861_);
v_unused_2862_ = lean_ctor_get(v_r_2607_, 2);
lean_dec(v_unused_2862_);
v_unused_2863_ = lean_ctor_get(v_r_2607_, 1);
lean_dec(v_unused_2863_);
v_unused_2864_ = lean_ctor_get(v_r_2607_, 0);
lean_dec(v_unused_2864_);
v___x_2806_ = v_r_2607_;
v_isShared_2807_ = v_isSharedCheck_2859_;
goto v_resetjp_2805_;
}
else
{
lean_dec(v_r_2607_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2859_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v_size_2808_; lean_object* v_k_2809_; lean_object* v_v_2810_; lean_object* v_l_2811_; lean_object* v_r_2812_; lean_object* v_size_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; uint8_t v___x_2816_; 
v_size_2808_ = lean_ctor_get(v_l_2785_, 0);
v_k_2809_ = lean_ctor_get(v_l_2785_, 1);
v_v_2810_ = lean_ctor_get(v_l_2785_, 2);
v_l_2811_ = lean_ctor_get(v_l_2785_, 3);
v_r_2812_ = lean_ctor_get(v_l_2785_, 4);
v_size_2813_ = lean_ctor_get(v_r_2786_, 0);
v___x_2814_ = lean_unsigned_to_nat(2u);
v___x_2815_ = lean_nat_mul(v___x_2814_, v_size_2813_);
v___x_2816_ = lean_nat_dec_lt(v_size_2808_, v___x_2815_);
lean_dec(v___x_2815_);
if (v___x_2816_ == 0)
{
lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2844_; 
lean_inc(v_r_2812_);
lean_inc(v_l_2811_);
lean_inc(v_v_2810_);
lean_inc(v_k_2809_);
v_isSharedCheck_2844_ = !lean_is_exclusive(v_l_2785_);
if (v_isSharedCheck_2844_ == 0)
{
lean_object* v_unused_2845_; lean_object* v_unused_2846_; lean_object* v_unused_2847_; lean_object* v_unused_2848_; lean_object* v_unused_2849_; 
v_unused_2845_ = lean_ctor_get(v_l_2785_, 4);
lean_dec(v_unused_2845_);
v_unused_2846_ = lean_ctor_get(v_l_2785_, 3);
lean_dec(v_unused_2846_);
v_unused_2847_ = lean_ctor_get(v_l_2785_, 2);
lean_dec(v_unused_2847_);
v_unused_2848_ = lean_ctor_get(v_l_2785_, 1);
lean_dec(v_unused_2848_);
v_unused_2849_ = lean_ctor_get(v_l_2785_, 0);
lean_dec(v_unused_2849_);
v___x_2818_ = v_l_2785_;
v_isShared_2819_ = v_isSharedCheck_2844_;
goto v_resetjp_2817_;
}
else
{
lean_dec(v_l_2785_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2844_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___y_2823_; lean_object* v___y_2824_; lean_object* v___y_2825_; lean_object* v___y_2834_; 
v___x_2820_ = lean_nat_add(v___x_2787_, v_size_2796_);
v___x_2821_ = lean_nat_add(v___x_2820_, v_size_2782_);
lean_dec(v_size_2782_);
if (lean_obj_tag(v_l_2811_) == 0)
{
lean_object* v_size_2842_; 
v_size_2842_ = lean_ctor_get(v_l_2811_, 0);
lean_inc(v_size_2842_);
v___y_2834_ = v_size_2842_;
goto v___jp_2833_;
}
else
{
lean_object* v___x_2843_; 
v___x_2843_ = lean_unsigned_to_nat(0u);
v___y_2834_ = v___x_2843_;
goto v___jp_2833_;
}
v___jp_2822_:
{
lean_object* v___x_2826_; lean_object* v___x_2828_; 
v___x_2826_ = lean_nat_add(v___y_2824_, v___y_2825_);
lean_dec(v___y_2825_);
lean_dec(v___y_2824_);
if (v_isShared_2819_ == 0)
{
lean_ctor_set(v___x_2818_, 4, v_r_2786_);
lean_ctor_set(v___x_2818_, 3, v_r_2812_);
lean_ctor_set(v___x_2818_, 2, v_v_2784_);
lean_ctor_set(v___x_2818_, 1, v_k_2783_);
lean_ctor_set(v___x_2818_, 0, v___x_2826_);
v___x_2828_ = v___x_2818_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v___x_2826_);
lean_ctor_set(v_reuseFailAlloc_2832_, 1, v_k_2783_);
lean_ctor_set(v_reuseFailAlloc_2832_, 2, v_v_2784_);
lean_ctor_set(v_reuseFailAlloc_2832_, 3, v_r_2812_);
lean_ctor_set(v_reuseFailAlloc_2832_, 4, v_r_2786_);
v___x_2828_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
lean_object* v___x_2830_; 
if (v_isShared_2807_ == 0)
{
lean_ctor_set(v___x_2806_, 4, v___x_2828_);
lean_ctor_set(v___x_2806_, 3, v___y_2823_);
lean_ctor_set(v___x_2806_, 2, v_v_2810_);
lean_ctor_set(v___x_2806_, 1, v_k_2809_);
lean_ctor_set(v___x_2806_, 0, v___x_2821_);
v___x_2830_ = v___x_2806_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v___x_2821_);
lean_ctor_set(v_reuseFailAlloc_2831_, 1, v_k_2809_);
lean_ctor_set(v_reuseFailAlloc_2831_, 2, v_v_2810_);
lean_ctor_set(v_reuseFailAlloc_2831_, 3, v___y_2823_);
lean_ctor_set(v_reuseFailAlloc_2831_, 4, v___x_2828_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
v___jp_2833_:
{
lean_object* v___x_2835_; lean_object* v___x_2837_; 
v___x_2835_ = lean_nat_add(v___x_2820_, v___y_2834_);
lean_dec(v___y_2834_);
lean_dec(v___x_2820_);
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 4, v_l_2811_);
lean_ctor_set(v___x_2790_, 3, v_tree_2793_);
lean_ctor_set(v___x_2790_, 2, v_v_2795_);
lean_ctor_set(v___x_2790_, 1, v_k_2794_);
lean_ctor_set(v___x_2790_, 0, v___x_2835_);
v___x_2837_ = v___x_2790_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v___x_2835_);
lean_ctor_set(v_reuseFailAlloc_2841_, 1, v_k_2794_);
lean_ctor_set(v_reuseFailAlloc_2841_, 2, v_v_2795_);
lean_ctor_set(v_reuseFailAlloc_2841_, 3, v_tree_2793_);
lean_ctor_set(v_reuseFailAlloc_2841_, 4, v_l_2811_);
v___x_2837_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
lean_object* v___x_2838_; 
v___x_2838_ = lean_nat_add(v___x_2787_, v_size_2813_);
if (lean_obj_tag(v_r_2812_) == 0)
{
lean_object* v_size_2839_; 
v_size_2839_ = lean_ctor_get(v_r_2812_, 0);
lean_inc(v_size_2839_);
v___y_2823_ = v___x_2837_;
v___y_2824_ = v___x_2838_;
v___y_2825_ = v_size_2839_;
goto v___jp_2822_;
}
else
{
lean_object* v___x_2840_; 
v___x_2840_ = lean_unsigned_to_nat(0u);
v___y_2823_ = v___x_2837_;
v___y_2824_ = v___x_2838_;
v___y_2825_ = v___x_2840_;
goto v___jp_2822_;
}
}
}
}
}
else
{
lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2854_; 
v___x_2850_ = lean_nat_add(v___x_2787_, v_size_2796_);
v___x_2851_ = lean_nat_add(v___x_2850_, v_size_2782_);
lean_dec(v_size_2782_);
v___x_2852_ = lean_nat_add(v___x_2850_, v_size_2808_);
lean_dec(v___x_2850_);
if (v_isShared_2807_ == 0)
{
lean_ctor_set(v___x_2806_, 4, v_l_2785_);
lean_ctor_set(v___x_2806_, 3, v_tree_2793_);
lean_ctor_set(v___x_2806_, 2, v_v_2795_);
lean_ctor_set(v___x_2806_, 1, v_k_2794_);
lean_ctor_set(v___x_2806_, 0, v___x_2852_);
v___x_2854_ = v___x_2806_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v___x_2852_);
lean_ctor_set(v_reuseFailAlloc_2858_, 1, v_k_2794_);
lean_ctor_set(v_reuseFailAlloc_2858_, 2, v_v_2795_);
lean_ctor_set(v_reuseFailAlloc_2858_, 3, v_tree_2793_);
lean_ctor_set(v_reuseFailAlloc_2858_, 4, v_l_2785_);
v___x_2854_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
lean_object* v___x_2856_; 
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 4, v_r_2786_);
lean_ctor_set(v___x_2790_, 3, v___x_2854_);
lean_ctor_set(v___x_2790_, 2, v_v_2784_);
lean_ctor_set(v___x_2790_, 1, v_k_2783_);
lean_ctor_set(v___x_2790_, 0, v___x_2851_);
v___x_2856_ = v___x_2790_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v___x_2851_);
lean_ctor_set(v_reuseFailAlloc_2857_, 1, v_k_2783_);
lean_ctor_set(v_reuseFailAlloc_2857_, 2, v_v_2784_);
lean_ctor_set(v_reuseFailAlloc_2857_, 3, v___x_2854_);
lean_ctor_set(v_reuseFailAlloc_2857_, 4, v_r_2786_);
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
}
}
else
{
lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2918_; 
lean_inc(v_r_2786_);
lean_inc(v_v_2784_);
lean_inc(v_k_2783_);
lean_inc(v_size_2782_);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_r_2607_);
if (v_isSharedCheck_2918_ == 0)
{
lean_object* v_unused_2919_; lean_object* v_unused_2920_; lean_object* v_unused_2921_; lean_object* v_unused_2922_; lean_object* v_unused_2923_; 
v_unused_2919_ = lean_ctor_get(v_r_2607_, 4);
lean_dec(v_unused_2919_);
v_unused_2920_ = lean_ctor_get(v_r_2607_, 3);
lean_dec(v_unused_2920_);
v_unused_2921_ = lean_ctor_get(v_r_2607_, 2);
lean_dec(v_unused_2921_);
v_unused_2922_ = lean_ctor_get(v_r_2607_, 1);
lean_dec(v_unused_2922_);
v_unused_2923_ = lean_ctor_get(v_r_2607_, 0);
lean_dec(v_unused_2923_);
v___x_2866_ = v_r_2607_;
v_isShared_2867_ = v_isSharedCheck_2918_;
goto v_resetjp_2865_;
}
else
{
lean_dec(v_r_2607_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2918_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
if (lean_obj_tag(v_l_2785_) == 0)
{
if (lean_obj_tag(v_r_2786_) == 0)
{
lean_object* v_k_2868_; lean_object* v_v_2869_; lean_object* v_size_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2874_; 
v_k_2868_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_k_2868_);
v_v_2869_ = lean_ctor_get(v___x_2792_, 1);
lean_inc(v_v_2869_);
lean_dec_ref(v___x_2792_);
v_size_2870_ = lean_ctor_get(v_l_2785_, 0);
v___x_2871_ = lean_nat_add(v___x_2787_, v_size_2782_);
lean_dec(v_size_2782_);
v___x_2872_ = lean_nat_add(v___x_2787_, v_size_2870_);
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 4, v_l_2785_);
lean_ctor_set(v___x_2866_, 3, v_tree_2793_);
lean_ctor_set(v___x_2866_, 2, v_v_2869_);
lean_ctor_set(v___x_2866_, 1, v_k_2868_);
lean_ctor_set(v___x_2866_, 0, v___x_2872_);
v___x_2874_ = v___x_2866_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v___x_2872_);
lean_ctor_set(v_reuseFailAlloc_2878_, 1, v_k_2868_);
lean_ctor_set(v_reuseFailAlloc_2878_, 2, v_v_2869_);
lean_ctor_set(v_reuseFailAlloc_2878_, 3, v_tree_2793_);
lean_ctor_set(v_reuseFailAlloc_2878_, 4, v_l_2785_);
v___x_2874_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
lean_object* v___x_2876_; 
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 4, v_r_2786_);
lean_ctor_set(v___x_2790_, 3, v___x_2874_);
lean_ctor_set(v___x_2790_, 2, v_v_2784_);
lean_ctor_set(v___x_2790_, 1, v_k_2783_);
lean_ctor_set(v___x_2790_, 0, v___x_2871_);
v___x_2876_ = v___x_2790_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v___x_2871_);
lean_ctor_set(v_reuseFailAlloc_2877_, 1, v_k_2783_);
lean_ctor_set(v_reuseFailAlloc_2877_, 2, v_v_2784_);
lean_ctor_set(v_reuseFailAlloc_2877_, 3, v___x_2874_);
lean_ctor_set(v_reuseFailAlloc_2877_, 4, v_r_2786_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
}
else
{
lean_object* v_k_2879_; lean_object* v_v_2880_; lean_object* v_k_2881_; lean_object* v_v_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2896_; 
lean_dec(v_size_2782_);
v_k_2879_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_k_2879_);
v_v_2880_ = lean_ctor_get(v___x_2792_, 1);
lean_inc(v_v_2880_);
lean_dec_ref(v___x_2792_);
v_k_2881_ = lean_ctor_get(v_l_2785_, 1);
v_v_2882_ = lean_ctor_get(v_l_2785_, 2);
v_isSharedCheck_2896_ = !lean_is_exclusive(v_l_2785_);
if (v_isSharedCheck_2896_ == 0)
{
lean_object* v_unused_2897_; lean_object* v_unused_2898_; lean_object* v_unused_2899_; 
v_unused_2897_ = lean_ctor_get(v_l_2785_, 4);
lean_dec(v_unused_2897_);
v_unused_2898_ = lean_ctor_get(v_l_2785_, 3);
lean_dec(v_unused_2898_);
v_unused_2899_ = lean_ctor_get(v_l_2785_, 0);
lean_dec(v_unused_2899_);
v___x_2884_ = v_l_2785_;
v_isShared_2885_ = v_isSharedCheck_2896_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_v_2882_);
lean_inc(v_k_2881_);
lean_dec(v_l_2785_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2896_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2886_; lean_object* v___x_2888_; 
v___x_2886_ = lean_unsigned_to_nat(3u);
if (v_isShared_2885_ == 0)
{
lean_ctor_set(v___x_2884_, 4, v_r_2786_);
lean_ctor_set(v___x_2884_, 3, v_r_2786_);
lean_ctor_set(v___x_2884_, 2, v_v_2880_);
lean_ctor_set(v___x_2884_, 1, v_k_2879_);
lean_ctor_set(v___x_2884_, 0, v___x_2787_);
v___x_2888_ = v___x_2884_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v___x_2787_);
lean_ctor_set(v_reuseFailAlloc_2895_, 1, v_k_2879_);
lean_ctor_set(v_reuseFailAlloc_2895_, 2, v_v_2880_);
lean_ctor_set(v_reuseFailAlloc_2895_, 3, v_r_2786_);
lean_ctor_set(v_reuseFailAlloc_2895_, 4, v_r_2786_);
v___x_2888_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
lean_object* v___x_2890_; 
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 3, v_r_2786_);
lean_ctor_set(v___x_2866_, 0, v___x_2787_);
v___x_2890_ = v___x_2866_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v___x_2787_);
lean_ctor_set(v_reuseFailAlloc_2894_, 1, v_k_2783_);
lean_ctor_set(v_reuseFailAlloc_2894_, 2, v_v_2784_);
lean_ctor_set(v_reuseFailAlloc_2894_, 3, v_r_2786_);
lean_ctor_set(v_reuseFailAlloc_2894_, 4, v_r_2786_);
v___x_2890_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
lean_object* v___x_2892_; 
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 4, v___x_2890_);
lean_ctor_set(v___x_2790_, 3, v___x_2888_);
lean_ctor_set(v___x_2790_, 2, v_v_2882_);
lean_ctor_set(v___x_2790_, 1, v_k_2881_);
lean_ctor_set(v___x_2790_, 0, v___x_2886_);
v___x_2892_ = v___x_2790_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v___x_2886_);
lean_ctor_set(v_reuseFailAlloc_2893_, 1, v_k_2881_);
lean_ctor_set(v_reuseFailAlloc_2893_, 2, v_v_2882_);
lean_ctor_set(v_reuseFailAlloc_2893_, 3, v___x_2888_);
lean_ctor_set(v_reuseFailAlloc_2893_, 4, v___x_2890_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
return v___x_2892_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2786_) == 0)
{
lean_object* v_k_2900_; lean_object* v_v_2901_; lean_object* v___x_2902_; lean_object* v___x_2904_; 
lean_dec(v_size_2782_);
v_k_2900_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_k_2900_);
v_v_2901_ = lean_ctor_get(v___x_2792_, 1);
lean_inc(v_v_2901_);
lean_dec_ref(v___x_2792_);
v___x_2902_ = lean_unsigned_to_nat(3u);
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 4, v_l_2785_);
lean_ctor_set(v___x_2866_, 2, v_v_2901_);
lean_ctor_set(v___x_2866_, 1, v_k_2900_);
lean_ctor_set(v___x_2866_, 0, v___x_2787_);
v___x_2904_ = v___x_2866_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v___x_2787_);
lean_ctor_set(v_reuseFailAlloc_2908_, 1, v_k_2900_);
lean_ctor_set(v_reuseFailAlloc_2908_, 2, v_v_2901_);
lean_ctor_set(v_reuseFailAlloc_2908_, 3, v_l_2785_);
lean_ctor_set(v_reuseFailAlloc_2908_, 4, v_l_2785_);
v___x_2904_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
lean_object* v___x_2906_; 
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 4, v_r_2786_);
lean_ctor_set(v___x_2790_, 3, v___x_2904_);
lean_ctor_set(v___x_2790_, 2, v_v_2784_);
lean_ctor_set(v___x_2790_, 1, v_k_2783_);
lean_ctor_set(v___x_2790_, 0, v___x_2902_);
v___x_2906_ = v___x_2790_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v___x_2902_);
lean_ctor_set(v_reuseFailAlloc_2907_, 1, v_k_2783_);
lean_ctor_set(v_reuseFailAlloc_2907_, 2, v_v_2784_);
lean_ctor_set(v_reuseFailAlloc_2907_, 3, v___x_2904_);
lean_ctor_set(v_reuseFailAlloc_2907_, 4, v_r_2786_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
else
{
lean_object* v_k_2909_; lean_object* v_v_2910_; lean_object* v___x_2912_; 
v_k_2909_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_k_2909_);
v_v_2910_ = lean_ctor_get(v___x_2792_, 1);
lean_inc(v_v_2910_);
lean_dec_ref(v___x_2792_);
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 3, v_r_2786_);
v___x_2912_ = v___x_2866_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_size_2782_);
lean_ctor_set(v_reuseFailAlloc_2917_, 1, v_k_2783_);
lean_ctor_set(v_reuseFailAlloc_2917_, 2, v_v_2784_);
lean_ctor_set(v_reuseFailAlloc_2917_, 3, v_r_2786_);
lean_ctor_set(v_reuseFailAlloc_2917_, 4, v_r_2786_);
v___x_2912_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
lean_object* v___x_2913_; lean_object* v___x_2915_; 
v___x_2913_ = lean_unsigned_to_nat(2u);
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 4, v___x_2912_);
lean_ctor_set(v___x_2790_, 3, v_r_2786_);
lean_ctor_set(v___x_2790_, 2, v_v_2910_);
lean_ctor_set(v___x_2790_, 1, v_k_2909_);
lean_ctor_set(v___x_2790_, 0, v___x_2913_);
v___x_2915_ = v___x_2790_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v___x_2913_);
lean_ctor_set(v_reuseFailAlloc_2916_, 1, v_k_2909_);
lean_ctor_set(v_reuseFailAlloc_2916_, 2, v_v_2910_);
lean_ctor_set(v_reuseFailAlloc_2916_, 3, v_r_2786_);
lean_ctor_set(v_reuseFailAlloc_2916_, 4, v___x_2912_);
v___x_2915_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
return v___x_2915_;
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
lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_3082_; 
lean_inc(v_r_2786_);
lean_inc(v_v_2784_);
lean_inc(v_k_2783_);
v_isSharedCheck_3082_ = !lean_is_exclusive(v_r_2607_);
if (v_isSharedCheck_3082_ == 0)
{
lean_object* v_unused_3083_; lean_object* v_unused_3084_; lean_object* v_unused_3085_; lean_object* v_unused_3086_; lean_object* v_unused_3087_; 
v_unused_3083_ = lean_ctor_get(v_r_2607_, 4);
lean_dec(v_unused_3083_);
v_unused_3084_ = lean_ctor_get(v_r_2607_, 3);
lean_dec(v_unused_3084_);
v_unused_3085_ = lean_ctor_get(v_r_2607_, 2);
lean_dec(v_unused_3085_);
v_unused_3086_ = lean_ctor_get(v_r_2607_, 1);
lean_dec(v_unused_3086_);
v_unused_3087_ = lean_ctor_get(v_r_2607_, 0);
lean_dec(v_unused_3087_);
v___x_2931_ = v_r_2607_;
v_isShared_2932_ = v_isSharedCheck_3082_;
goto v_resetjp_2930_;
}
else
{
lean_dec(v_r_2607_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_3082_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2933_; lean_object* v_tree_2934_; 
v___x_2933_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_2783_, v_v_2784_, v_l_2785_, v_r_2786_);
v_tree_2934_ = lean_ctor_get(v___x_2933_, 2);
lean_inc(v_tree_2934_);
if (lean_obj_tag(v_tree_2934_) == 0)
{
lean_object* v_k_2935_; lean_object* v_v_2936_; lean_object* v_size_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; uint8_t v___x_2940_; 
v_k_2935_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_k_2935_);
v_v_2936_ = lean_ctor_get(v___x_2933_, 1);
lean_inc(v_v_2936_);
lean_dec_ref(v___x_2933_);
v_size_2937_ = lean_ctor_get(v_tree_2934_, 0);
v___x_2938_ = lean_unsigned_to_nat(3u);
v___x_2939_ = lean_nat_mul(v___x_2938_, v_size_2937_);
v___x_2940_ = lean_nat_dec_lt(v___x_2939_, v_size_2777_);
lean_dec(v___x_2939_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2944_; 
lean_dec(v_r_2781_);
v___x_2941_ = lean_nat_add(v___x_2787_, v_size_2777_);
v___x_2942_ = lean_nat_add(v___x_2941_, v_size_2937_);
lean_dec(v___x_2941_);
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 4, v_tree_2934_);
lean_ctor_set(v___x_2931_, 3, v_l_2606_);
lean_ctor_set(v___x_2931_, 2, v_v_2936_);
lean_ctor_set(v___x_2931_, 1, v_k_2935_);
lean_ctor_set(v___x_2931_, 0, v___x_2942_);
v___x_2944_ = v___x_2931_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v___x_2942_);
lean_ctor_set(v_reuseFailAlloc_2945_, 1, v_k_2935_);
lean_ctor_set(v_reuseFailAlloc_2945_, 2, v_v_2936_);
lean_ctor_set(v_reuseFailAlloc_2945_, 3, v_l_2606_);
lean_ctor_set(v_reuseFailAlloc_2945_, 4, v_tree_2934_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
return v___x_2944_;
}
}
else
{
lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_3011_; 
lean_inc(v_l_2780_);
lean_inc(v_v_2779_);
lean_inc(v_k_2778_);
lean_inc(v_size_2777_);
v_isSharedCheck_3011_ = !lean_is_exclusive(v_l_2606_);
if (v_isSharedCheck_3011_ == 0)
{
lean_object* v_unused_3012_; lean_object* v_unused_3013_; lean_object* v_unused_3014_; lean_object* v_unused_3015_; lean_object* v_unused_3016_; 
v_unused_3012_ = lean_ctor_get(v_l_2606_, 4);
lean_dec(v_unused_3012_);
v_unused_3013_ = lean_ctor_get(v_l_2606_, 3);
lean_dec(v_unused_3013_);
v_unused_3014_ = lean_ctor_get(v_l_2606_, 2);
lean_dec(v_unused_3014_);
v_unused_3015_ = lean_ctor_get(v_l_2606_, 1);
lean_dec(v_unused_3015_);
v_unused_3016_ = lean_ctor_get(v_l_2606_, 0);
lean_dec(v_unused_3016_);
v___x_2947_ = v_l_2606_;
v_isShared_2948_ = v_isSharedCheck_3011_;
goto v_resetjp_2946_;
}
else
{
lean_dec(v_l_2606_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_3011_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v_size_2949_; lean_object* v_size_2950_; lean_object* v_k_2951_; lean_object* v_v_2952_; lean_object* v_l_2953_; lean_object* v_r_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; uint8_t v___x_2957_; 
v_size_2949_ = lean_ctor_get(v_l_2780_, 0);
v_size_2950_ = lean_ctor_get(v_r_2781_, 0);
v_k_2951_ = lean_ctor_get(v_r_2781_, 1);
v_v_2952_ = lean_ctor_get(v_r_2781_, 2);
v_l_2953_ = lean_ctor_get(v_r_2781_, 3);
v_r_2954_ = lean_ctor_get(v_r_2781_, 4);
v___x_2955_ = lean_unsigned_to_nat(2u);
v___x_2956_ = lean_nat_mul(v___x_2955_, v_size_2949_);
v___x_2957_ = lean_nat_dec_lt(v_size_2950_, v___x_2956_);
lean_dec(v___x_2956_);
if (v___x_2957_ == 0)
{
lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2995_; 
lean_inc(v_r_2954_);
lean_inc(v_l_2953_);
lean_inc(v_v_2952_);
lean_inc(v_k_2951_);
lean_del_object(v___x_2947_);
v_isSharedCheck_2995_ = !lean_is_exclusive(v_r_2781_);
if (v_isSharedCheck_2995_ == 0)
{
lean_object* v_unused_2996_; lean_object* v_unused_2997_; lean_object* v_unused_2998_; lean_object* v_unused_2999_; lean_object* v_unused_3000_; 
v_unused_2996_ = lean_ctor_get(v_r_2781_, 4);
lean_dec(v_unused_2996_);
v_unused_2997_ = lean_ctor_get(v_r_2781_, 3);
lean_dec(v_unused_2997_);
v_unused_2998_ = lean_ctor_get(v_r_2781_, 2);
lean_dec(v_unused_2998_);
v_unused_2999_ = lean_ctor_get(v_r_2781_, 1);
lean_dec(v_unused_2999_);
v_unused_3000_ = lean_ctor_get(v_r_2781_, 0);
lean_dec(v_unused_3000_);
v___x_2959_ = v_r_2781_;
v_isShared_2960_ = v_isSharedCheck_2995_;
goto v_resetjp_2958_;
}
else
{
lean_dec(v_r_2781_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2995_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___y_2964_; lean_object* v___y_2965_; lean_object* v___y_2966_; lean_object* v___x_2983_; lean_object* v___y_2985_; 
v___x_2961_ = lean_nat_add(v___x_2787_, v_size_2777_);
lean_dec(v_size_2777_);
v___x_2962_ = lean_nat_add(v___x_2961_, v_size_2937_);
lean_dec(v___x_2961_);
v___x_2983_ = lean_nat_add(v___x_2787_, v_size_2949_);
if (lean_obj_tag(v_l_2953_) == 0)
{
lean_object* v_size_2993_; 
v_size_2993_ = lean_ctor_get(v_l_2953_, 0);
lean_inc(v_size_2993_);
v___y_2985_ = v_size_2993_;
goto v___jp_2984_;
}
else
{
lean_object* v___x_2994_; 
v___x_2994_ = lean_unsigned_to_nat(0u);
v___y_2985_ = v___x_2994_;
goto v___jp_2984_;
}
v___jp_2963_:
{
lean_object* v___x_2967_; lean_object* v___x_2969_; 
v___x_2967_ = lean_nat_add(v___y_2964_, v___y_2966_);
lean_dec(v___y_2966_);
lean_dec(v___y_2964_);
lean_inc_ref(v_tree_2934_);
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 4, v_tree_2934_);
lean_ctor_set(v___x_2959_, 3, v_r_2954_);
lean_ctor_set(v___x_2959_, 2, v_v_2936_);
lean_ctor_set(v___x_2959_, 1, v_k_2935_);
lean_ctor_set(v___x_2959_, 0, v___x_2967_);
v___x_2969_ = v___x_2959_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v___x_2967_);
lean_ctor_set(v_reuseFailAlloc_2982_, 1, v_k_2935_);
lean_ctor_set(v_reuseFailAlloc_2982_, 2, v_v_2936_);
lean_ctor_set(v_reuseFailAlloc_2982_, 3, v_r_2954_);
lean_ctor_set(v_reuseFailAlloc_2982_, 4, v_tree_2934_);
v___x_2969_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2976_; 
v_isSharedCheck_2976_ = !lean_is_exclusive(v_tree_2934_);
if (v_isSharedCheck_2976_ == 0)
{
lean_object* v_unused_2977_; lean_object* v_unused_2978_; lean_object* v_unused_2979_; lean_object* v_unused_2980_; lean_object* v_unused_2981_; 
v_unused_2977_ = lean_ctor_get(v_tree_2934_, 4);
lean_dec(v_unused_2977_);
v_unused_2978_ = lean_ctor_get(v_tree_2934_, 3);
lean_dec(v_unused_2978_);
v_unused_2979_ = lean_ctor_get(v_tree_2934_, 2);
lean_dec(v_unused_2979_);
v_unused_2980_ = lean_ctor_get(v_tree_2934_, 1);
lean_dec(v_unused_2980_);
v_unused_2981_ = lean_ctor_get(v_tree_2934_, 0);
lean_dec(v_unused_2981_);
v___x_2971_ = v_tree_2934_;
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
else
{
lean_dec(v_tree_2934_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 4, v___x_2969_);
lean_ctor_set(v___x_2971_, 3, v___y_2965_);
lean_ctor_set(v___x_2971_, 2, v_v_2952_);
lean_ctor_set(v___x_2971_, 1, v_k_2951_);
lean_ctor_set(v___x_2971_, 0, v___x_2962_);
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v___x_2962_);
lean_ctor_set(v_reuseFailAlloc_2975_, 1, v_k_2951_);
lean_ctor_set(v_reuseFailAlloc_2975_, 2, v_v_2952_);
lean_ctor_set(v_reuseFailAlloc_2975_, 3, v___y_2965_);
lean_ctor_set(v_reuseFailAlloc_2975_, 4, v___x_2969_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
return v___x_2974_;
}
}
}
}
v___jp_2984_:
{
lean_object* v___x_2986_; lean_object* v___x_2988_; 
v___x_2986_ = lean_nat_add(v___x_2983_, v___y_2985_);
lean_dec(v___y_2985_);
lean_dec(v___x_2983_);
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 4, v_l_2953_);
lean_ctor_set(v___x_2931_, 3, v_l_2780_);
lean_ctor_set(v___x_2931_, 2, v_v_2779_);
lean_ctor_set(v___x_2931_, 1, v_k_2778_);
lean_ctor_set(v___x_2931_, 0, v___x_2986_);
v___x_2988_ = v___x_2931_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v___x_2986_);
lean_ctor_set(v_reuseFailAlloc_2992_, 1, v_k_2778_);
lean_ctor_set(v_reuseFailAlloc_2992_, 2, v_v_2779_);
lean_ctor_set(v_reuseFailAlloc_2992_, 3, v_l_2780_);
lean_ctor_set(v_reuseFailAlloc_2992_, 4, v_l_2953_);
v___x_2988_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
lean_object* v___x_2989_; 
v___x_2989_ = lean_nat_add(v___x_2787_, v_size_2937_);
if (lean_obj_tag(v_r_2954_) == 0)
{
lean_object* v_size_2990_; 
v_size_2990_ = lean_ctor_get(v_r_2954_, 0);
lean_inc(v_size_2990_);
v___y_2964_ = v___x_2989_;
v___y_2965_ = v___x_2988_;
v___y_2966_ = v_size_2990_;
goto v___jp_2963_;
}
else
{
lean_object* v___x_2991_; 
v___x_2991_ = lean_unsigned_to_nat(0u);
v___y_2964_ = v___x_2989_;
v___y_2965_ = v___x_2988_;
v___y_2966_ = v___x_2991_;
goto v___jp_2963_;
}
}
}
}
}
else
{
lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3006_; 
v___x_3001_ = lean_nat_add(v___x_2787_, v_size_2777_);
lean_dec(v_size_2777_);
v___x_3002_ = lean_nat_add(v___x_3001_, v_size_2937_);
lean_dec(v___x_3001_);
v___x_3003_ = lean_nat_add(v___x_2787_, v_size_2937_);
v___x_3004_ = lean_nat_add(v___x_3003_, v_size_2950_);
lean_dec(v___x_3003_);
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 4, v_tree_2934_);
lean_ctor_set(v___x_2931_, 3, v_r_2781_);
lean_ctor_set(v___x_2931_, 2, v_v_2936_);
lean_ctor_set(v___x_2931_, 1, v_k_2935_);
lean_ctor_set(v___x_2931_, 0, v___x_3004_);
v___x_3006_ = v___x_2931_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v___x_3004_);
lean_ctor_set(v_reuseFailAlloc_3010_, 1, v_k_2935_);
lean_ctor_set(v_reuseFailAlloc_3010_, 2, v_v_2936_);
lean_ctor_set(v_reuseFailAlloc_3010_, 3, v_r_2781_);
lean_ctor_set(v_reuseFailAlloc_3010_, 4, v_tree_2934_);
v___x_3006_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
lean_object* v___x_3008_; 
if (v_isShared_2948_ == 0)
{
lean_ctor_set(v___x_2947_, 4, v___x_3006_);
lean_ctor_set(v___x_2947_, 0, v___x_3002_);
v___x_3008_ = v___x_2947_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v___x_3002_);
lean_ctor_set(v_reuseFailAlloc_3009_, 1, v_k_2778_);
lean_ctor_set(v_reuseFailAlloc_3009_, 2, v_v_2779_);
lean_ctor_set(v_reuseFailAlloc_3009_, 3, v_l_2780_);
lean_ctor_set(v_reuseFailAlloc_3009_, 4, v___x_3006_);
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
else
{
if (lean_obj_tag(v_l_2780_) == 0)
{
lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3040_; 
lean_inc_ref(v_l_2780_);
lean_inc(v_v_2779_);
lean_inc(v_k_2778_);
lean_inc(v_size_2777_);
v_isSharedCheck_3040_ = !lean_is_exclusive(v_l_2606_);
if (v_isSharedCheck_3040_ == 0)
{
lean_object* v_unused_3041_; lean_object* v_unused_3042_; lean_object* v_unused_3043_; lean_object* v_unused_3044_; lean_object* v_unused_3045_; 
v_unused_3041_ = lean_ctor_get(v_l_2606_, 4);
lean_dec(v_unused_3041_);
v_unused_3042_ = lean_ctor_get(v_l_2606_, 3);
lean_dec(v_unused_3042_);
v_unused_3043_ = lean_ctor_get(v_l_2606_, 2);
lean_dec(v_unused_3043_);
v_unused_3044_ = lean_ctor_get(v_l_2606_, 1);
lean_dec(v_unused_3044_);
v_unused_3045_ = lean_ctor_get(v_l_2606_, 0);
lean_dec(v_unused_3045_);
v___x_3018_ = v_l_2606_;
v_isShared_3019_ = v_isSharedCheck_3040_;
goto v_resetjp_3017_;
}
else
{
lean_dec(v_l_2606_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3040_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
if (lean_obj_tag(v_r_2781_) == 0)
{
lean_object* v_k_3020_; lean_object* v_v_3021_; lean_object* v_size_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3026_; 
v_k_3020_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_k_3020_);
v_v_3021_ = lean_ctor_get(v___x_2933_, 1);
lean_inc(v_v_3021_);
lean_dec_ref(v___x_2933_);
v_size_3022_ = lean_ctor_get(v_r_2781_, 0);
v___x_3023_ = lean_nat_add(v___x_2787_, v_size_2777_);
lean_dec(v_size_2777_);
v___x_3024_ = lean_nat_add(v___x_2787_, v_size_3022_);
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 4, v_tree_2934_);
lean_ctor_set(v___x_2931_, 3, v_r_2781_);
lean_ctor_set(v___x_2931_, 2, v_v_3021_);
lean_ctor_set(v___x_2931_, 1, v_k_3020_);
lean_ctor_set(v___x_2931_, 0, v___x_3024_);
v___x_3026_ = v___x_2931_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v___x_3024_);
lean_ctor_set(v_reuseFailAlloc_3030_, 1, v_k_3020_);
lean_ctor_set(v_reuseFailAlloc_3030_, 2, v_v_3021_);
lean_ctor_set(v_reuseFailAlloc_3030_, 3, v_r_2781_);
lean_ctor_set(v_reuseFailAlloc_3030_, 4, v_tree_2934_);
v___x_3026_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
lean_object* v___x_3028_; 
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 4, v___x_3026_);
lean_ctor_set(v___x_3018_, 0, v___x_3023_);
v___x_3028_ = v___x_3018_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v___x_3023_);
lean_ctor_set(v_reuseFailAlloc_3029_, 1, v_k_2778_);
lean_ctor_set(v_reuseFailAlloc_3029_, 2, v_v_2779_);
lean_ctor_set(v_reuseFailAlloc_3029_, 3, v_l_2780_);
lean_ctor_set(v_reuseFailAlloc_3029_, 4, v___x_3026_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
return v___x_3028_;
}
}
}
else
{
lean_object* v_k_3031_; lean_object* v_v_3032_; lean_object* v___x_3033_; lean_object* v___x_3035_; 
lean_dec(v_size_2777_);
v_k_3031_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_k_3031_);
v_v_3032_ = lean_ctor_get(v___x_2933_, 1);
lean_inc(v_v_3032_);
lean_dec_ref(v___x_2933_);
v___x_3033_ = lean_unsigned_to_nat(3u);
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 4, v_r_2781_);
lean_ctor_set(v___x_2931_, 3, v_r_2781_);
lean_ctor_set(v___x_2931_, 2, v_v_3032_);
lean_ctor_set(v___x_2931_, 1, v_k_3031_);
lean_ctor_set(v___x_2931_, 0, v___x_2787_);
v___x_3035_ = v___x_2931_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v___x_2787_);
lean_ctor_set(v_reuseFailAlloc_3039_, 1, v_k_3031_);
lean_ctor_set(v_reuseFailAlloc_3039_, 2, v_v_3032_);
lean_ctor_set(v_reuseFailAlloc_3039_, 3, v_r_2781_);
lean_ctor_set(v_reuseFailAlloc_3039_, 4, v_r_2781_);
v___x_3035_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3037_; 
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 4, v___x_3035_);
lean_ctor_set(v___x_3018_, 0, v___x_3033_);
v___x_3037_ = v___x_3018_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v___x_3033_);
lean_ctor_set(v_reuseFailAlloc_3038_, 1, v_k_2778_);
lean_ctor_set(v_reuseFailAlloc_3038_, 2, v_v_2779_);
lean_ctor_set(v_reuseFailAlloc_3038_, 3, v_l_2780_);
lean_ctor_set(v_reuseFailAlloc_3038_, 4, v___x_3035_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
return v___x_3037_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2781_) == 0)
{
lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3070_; 
lean_inc(v_l_2780_);
lean_inc(v_v_2779_);
lean_inc(v_k_2778_);
v_isSharedCheck_3070_ = !lean_is_exclusive(v_l_2606_);
if (v_isSharedCheck_3070_ == 0)
{
lean_object* v_unused_3071_; lean_object* v_unused_3072_; lean_object* v_unused_3073_; lean_object* v_unused_3074_; lean_object* v_unused_3075_; 
v_unused_3071_ = lean_ctor_get(v_l_2606_, 4);
lean_dec(v_unused_3071_);
v_unused_3072_ = lean_ctor_get(v_l_2606_, 3);
lean_dec(v_unused_3072_);
v_unused_3073_ = lean_ctor_get(v_l_2606_, 2);
lean_dec(v_unused_3073_);
v_unused_3074_ = lean_ctor_get(v_l_2606_, 1);
lean_dec(v_unused_3074_);
v_unused_3075_ = lean_ctor_get(v_l_2606_, 0);
lean_dec(v_unused_3075_);
v___x_3047_ = v_l_2606_;
v_isShared_3048_ = v_isSharedCheck_3070_;
goto v_resetjp_3046_;
}
else
{
lean_dec(v_l_2606_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3070_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v_k_3049_; lean_object* v_v_3050_; lean_object* v_k_3051_; lean_object* v_v_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3066_; 
v_k_3049_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_k_3049_);
v_v_3050_ = lean_ctor_get(v___x_2933_, 1);
lean_inc(v_v_3050_);
lean_dec_ref(v___x_2933_);
v_k_3051_ = lean_ctor_get(v_r_2781_, 1);
v_v_3052_ = lean_ctor_get(v_r_2781_, 2);
v_isSharedCheck_3066_ = !lean_is_exclusive(v_r_2781_);
if (v_isSharedCheck_3066_ == 0)
{
lean_object* v_unused_3067_; lean_object* v_unused_3068_; lean_object* v_unused_3069_; 
v_unused_3067_ = lean_ctor_get(v_r_2781_, 4);
lean_dec(v_unused_3067_);
v_unused_3068_ = lean_ctor_get(v_r_2781_, 3);
lean_dec(v_unused_3068_);
v_unused_3069_ = lean_ctor_get(v_r_2781_, 0);
lean_dec(v_unused_3069_);
v___x_3054_ = v_r_2781_;
v_isShared_3055_ = v_isSharedCheck_3066_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_v_3052_);
lean_inc(v_k_3051_);
lean_dec(v_r_2781_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3066_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v___x_3056_; lean_object* v___x_3058_; 
v___x_3056_ = lean_unsigned_to_nat(3u);
if (v_isShared_3055_ == 0)
{
lean_ctor_set(v___x_3054_, 4, v_l_2780_);
lean_ctor_set(v___x_3054_, 3, v_l_2780_);
lean_ctor_set(v___x_3054_, 2, v_v_2779_);
lean_ctor_set(v___x_3054_, 1, v_k_2778_);
lean_ctor_set(v___x_3054_, 0, v___x_2787_);
v___x_3058_ = v___x_3054_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v___x_2787_);
lean_ctor_set(v_reuseFailAlloc_3065_, 1, v_k_2778_);
lean_ctor_set(v_reuseFailAlloc_3065_, 2, v_v_2779_);
lean_ctor_set(v_reuseFailAlloc_3065_, 3, v_l_2780_);
lean_ctor_set(v_reuseFailAlloc_3065_, 4, v_l_2780_);
v___x_3058_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
lean_object* v___x_3060_; 
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 4, v_l_2780_);
lean_ctor_set(v___x_2931_, 3, v_l_2780_);
lean_ctor_set(v___x_2931_, 2, v_v_3050_);
lean_ctor_set(v___x_2931_, 1, v_k_3049_);
lean_ctor_set(v___x_2931_, 0, v___x_2787_);
v___x_3060_ = v___x_2931_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v___x_2787_);
lean_ctor_set(v_reuseFailAlloc_3064_, 1, v_k_3049_);
lean_ctor_set(v_reuseFailAlloc_3064_, 2, v_v_3050_);
lean_ctor_set(v_reuseFailAlloc_3064_, 3, v_l_2780_);
lean_ctor_set(v_reuseFailAlloc_3064_, 4, v_l_2780_);
v___x_3060_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
lean_object* v___x_3062_; 
if (v_isShared_3048_ == 0)
{
lean_ctor_set(v___x_3047_, 4, v___x_3060_);
lean_ctor_set(v___x_3047_, 3, v___x_3058_);
lean_ctor_set(v___x_3047_, 2, v_v_3052_);
lean_ctor_set(v___x_3047_, 1, v_k_3051_);
lean_ctor_set(v___x_3047_, 0, v___x_3056_);
v___x_3062_ = v___x_3047_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v___x_3056_);
lean_ctor_set(v_reuseFailAlloc_3063_, 1, v_k_3051_);
lean_ctor_set(v_reuseFailAlloc_3063_, 2, v_v_3052_);
lean_ctor_set(v_reuseFailAlloc_3063_, 3, v___x_3058_);
lean_ctor_set(v_reuseFailAlloc_3063_, 4, v___x_3060_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
}
}
}
else
{
lean_object* v_k_3076_; lean_object* v_v_3077_; lean_object* v___x_3078_; lean_object* v___x_3080_; 
v_k_3076_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_k_3076_);
v_v_3077_ = lean_ctor_get(v___x_2933_, 1);
lean_inc(v_v_3077_);
lean_dec_ref(v___x_2933_);
v___x_3078_ = lean_unsigned_to_nat(2u);
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 4, v_r_2781_);
lean_ctor_set(v___x_2931_, 3, v_l_2606_);
lean_ctor_set(v___x_2931_, 2, v_v_3077_);
lean_ctor_set(v___x_2931_, 1, v_k_3076_);
lean_ctor_set(v___x_2931_, 0, v___x_3078_);
v___x_3080_ = v___x_2931_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_3078_);
lean_ctor_set(v_reuseFailAlloc_3081_, 1, v_k_3076_);
lean_ctor_set(v_reuseFailAlloc_3081_, 2, v_v_3077_);
lean_ctor_set(v_reuseFailAlloc_3081_, 3, v_l_2606_);
lean_ctor_set(v_reuseFailAlloc_3081_, 4, v_r_2781_);
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
return v_l_2606_;
}
}
else
{
return v_r_2607_;
}
}
}
else
{
lean_object* v_impl_3088_; lean_object* v___x_3089_; 
v_impl_3088_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg(v_k_2602_, v_l_2606_);
v___x_3089_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3088_) == 0)
{
if (lean_obj_tag(v_r_2607_) == 0)
{
lean_object* v_size_3090_; lean_object* v_size_3091_; lean_object* v_k_3092_; lean_object* v_v_3093_; lean_object* v_l_3094_; lean_object* v_r_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; uint8_t v___x_3098_; 
v_size_3090_ = lean_ctor_get(v_impl_3088_, 0);
lean_inc(v_size_3090_);
v_size_3091_ = lean_ctor_get(v_r_2607_, 0);
v_k_3092_ = lean_ctor_get(v_r_2607_, 1);
v_v_3093_ = lean_ctor_get(v_r_2607_, 2);
v_l_3094_ = lean_ctor_get(v_r_2607_, 3);
lean_inc(v_l_3094_);
v_r_3095_ = lean_ctor_get(v_r_2607_, 4);
v___x_3096_ = lean_unsigned_to_nat(3u);
v___x_3097_ = lean_nat_mul(v___x_3096_, v_size_3090_);
v___x_3098_ = lean_nat_dec_lt(v___x_3097_, v_size_3091_);
lean_dec(v___x_3097_);
if (v___x_3098_ == 0)
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3102_; 
lean_dec(v_l_3094_);
v___x_3099_ = lean_nat_add(v___x_3089_, v_size_3090_);
lean_dec(v_size_3090_);
v___x_3100_ = lean_nat_add(v___x_3099_, v_size_3091_);
lean_dec(v___x_3099_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 3, v_impl_3088_);
lean_ctor_set(v___x_2609_, 0, v___x_3100_);
v___x_3102_ = v___x_2609_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v___x_3100_);
lean_ctor_set(v_reuseFailAlloc_3103_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_3103_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_3103_, 3, v_impl_3088_);
lean_ctor_set(v_reuseFailAlloc_3103_, 4, v_r_2607_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
return v___x_3102_;
}
}
else
{
lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3167_; 
lean_inc(v_r_3095_);
lean_inc(v_v_3093_);
lean_inc(v_k_3092_);
lean_inc(v_size_3091_);
v_isSharedCheck_3167_ = !lean_is_exclusive(v_r_2607_);
if (v_isSharedCheck_3167_ == 0)
{
lean_object* v_unused_3168_; lean_object* v_unused_3169_; lean_object* v_unused_3170_; lean_object* v_unused_3171_; lean_object* v_unused_3172_; 
v_unused_3168_ = lean_ctor_get(v_r_2607_, 4);
lean_dec(v_unused_3168_);
v_unused_3169_ = lean_ctor_get(v_r_2607_, 3);
lean_dec(v_unused_3169_);
v_unused_3170_ = lean_ctor_get(v_r_2607_, 2);
lean_dec(v_unused_3170_);
v_unused_3171_ = lean_ctor_get(v_r_2607_, 1);
lean_dec(v_unused_3171_);
v_unused_3172_ = lean_ctor_get(v_r_2607_, 0);
lean_dec(v_unused_3172_);
v___x_3105_ = v_r_2607_;
v_isShared_3106_ = v_isSharedCheck_3167_;
goto v_resetjp_3104_;
}
else
{
lean_dec(v_r_2607_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3167_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v_size_3107_; lean_object* v_k_3108_; lean_object* v_v_3109_; lean_object* v_l_3110_; lean_object* v_r_3111_; lean_object* v_size_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; uint8_t v___x_3115_; 
v_size_3107_ = lean_ctor_get(v_l_3094_, 0);
v_k_3108_ = lean_ctor_get(v_l_3094_, 1);
v_v_3109_ = lean_ctor_get(v_l_3094_, 2);
v_l_3110_ = lean_ctor_get(v_l_3094_, 3);
v_r_3111_ = lean_ctor_get(v_l_3094_, 4);
v_size_3112_ = lean_ctor_get(v_r_3095_, 0);
v___x_3113_ = lean_unsigned_to_nat(2u);
v___x_3114_ = lean_nat_mul(v___x_3113_, v_size_3112_);
v___x_3115_ = lean_nat_dec_lt(v_size_3107_, v___x_3114_);
lean_dec(v___x_3114_);
if (v___x_3115_ == 0)
{
lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3143_; 
lean_inc(v_r_3111_);
lean_inc(v_l_3110_);
lean_inc(v_v_3109_);
lean_inc(v_k_3108_);
v_isSharedCheck_3143_ = !lean_is_exclusive(v_l_3094_);
if (v_isSharedCheck_3143_ == 0)
{
lean_object* v_unused_3144_; lean_object* v_unused_3145_; lean_object* v_unused_3146_; lean_object* v_unused_3147_; lean_object* v_unused_3148_; 
v_unused_3144_ = lean_ctor_get(v_l_3094_, 4);
lean_dec(v_unused_3144_);
v_unused_3145_ = lean_ctor_get(v_l_3094_, 3);
lean_dec(v_unused_3145_);
v_unused_3146_ = lean_ctor_get(v_l_3094_, 2);
lean_dec(v_unused_3146_);
v_unused_3147_ = lean_ctor_get(v_l_3094_, 1);
lean_dec(v_unused_3147_);
v_unused_3148_ = lean_ctor_get(v_l_3094_, 0);
lean_dec(v_unused_3148_);
v___x_3117_ = v_l_3094_;
v_isShared_3118_ = v_isSharedCheck_3143_;
goto v_resetjp_3116_;
}
else
{
lean_dec(v_l_3094_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3143_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___y_3122_; lean_object* v___y_3123_; lean_object* v___y_3124_; lean_object* v___y_3133_; 
v___x_3119_ = lean_nat_add(v___x_3089_, v_size_3090_);
lean_dec(v_size_3090_);
v___x_3120_ = lean_nat_add(v___x_3119_, v_size_3091_);
lean_dec(v_size_3091_);
if (lean_obj_tag(v_l_3110_) == 0)
{
lean_object* v_size_3141_; 
v_size_3141_ = lean_ctor_get(v_l_3110_, 0);
lean_inc(v_size_3141_);
v___y_3133_ = v_size_3141_;
goto v___jp_3132_;
}
else
{
lean_object* v___x_3142_; 
v___x_3142_ = lean_unsigned_to_nat(0u);
v___y_3133_ = v___x_3142_;
goto v___jp_3132_;
}
v___jp_3121_:
{
lean_object* v___x_3125_; lean_object* v___x_3127_; 
v___x_3125_ = lean_nat_add(v___y_3123_, v___y_3124_);
lean_dec(v___y_3124_);
lean_dec(v___y_3123_);
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 4, v_r_3095_);
lean_ctor_set(v___x_3117_, 3, v_r_3111_);
lean_ctor_set(v___x_3117_, 2, v_v_3093_);
lean_ctor_set(v___x_3117_, 1, v_k_3092_);
lean_ctor_set(v___x_3117_, 0, v___x_3125_);
v___x_3127_ = v___x_3117_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v___x_3125_);
lean_ctor_set(v_reuseFailAlloc_3131_, 1, v_k_3092_);
lean_ctor_set(v_reuseFailAlloc_3131_, 2, v_v_3093_);
lean_ctor_set(v_reuseFailAlloc_3131_, 3, v_r_3111_);
lean_ctor_set(v_reuseFailAlloc_3131_, 4, v_r_3095_);
v___x_3127_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
lean_object* v___x_3129_; 
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 4, v___x_3127_);
lean_ctor_set(v___x_3105_, 3, v___y_3122_);
lean_ctor_set(v___x_3105_, 2, v_v_3109_);
lean_ctor_set(v___x_3105_, 1, v_k_3108_);
lean_ctor_set(v___x_3105_, 0, v___x_3120_);
v___x_3129_ = v___x_3105_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v___x_3120_);
lean_ctor_set(v_reuseFailAlloc_3130_, 1, v_k_3108_);
lean_ctor_set(v_reuseFailAlloc_3130_, 2, v_v_3109_);
lean_ctor_set(v_reuseFailAlloc_3130_, 3, v___y_3122_);
lean_ctor_set(v_reuseFailAlloc_3130_, 4, v___x_3127_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
v___jp_3132_:
{
lean_object* v___x_3134_; lean_object* v___x_3136_; 
v___x_3134_ = lean_nat_add(v___x_3119_, v___y_3133_);
lean_dec(v___y_3133_);
lean_dec(v___x_3119_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v_l_3110_);
lean_ctor_set(v___x_2609_, 3, v_impl_3088_);
lean_ctor_set(v___x_2609_, 0, v___x_3134_);
v___x_3136_ = v___x_2609_;
goto v_reusejp_3135_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v___x_3134_);
lean_ctor_set(v_reuseFailAlloc_3140_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_3140_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_3140_, 3, v_impl_3088_);
lean_ctor_set(v_reuseFailAlloc_3140_, 4, v_l_3110_);
v___x_3136_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3135_;
}
v_reusejp_3135_:
{
lean_object* v___x_3137_; 
v___x_3137_ = lean_nat_add(v___x_3089_, v_size_3112_);
if (lean_obj_tag(v_r_3111_) == 0)
{
lean_object* v_size_3138_; 
v_size_3138_ = lean_ctor_get(v_r_3111_, 0);
lean_inc(v_size_3138_);
v___y_3122_ = v___x_3136_;
v___y_3123_ = v___x_3137_;
v___y_3124_ = v_size_3138_;
goto v___jp_3121_;
}
else
{
lean_object* v___x_3139_; 
v___x_3139_ = lean_unsigned_to_nat(0u);
v___y_3122_ = v___x_3136_;
v___y_3123_ = v___x_3137_;
v___y_3124_ = v___x_3139_;
goto v___jp_3121_;
}
}
}
}
}
else
{
lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3153_; 
lean_del_object(v___x_2609_);
v___x_3149_ = lean_nat_add(v___x_3089_, v_size_3090_);
lean_dec(v_size_3090_);
v___x_3150_ = lean_nat_add(v___x_3149_, v_size_3091_);
lean_dec(v_size_3091_);
v___x_3151_ = lean_nat_add(v___x_3149_, v_size_3107_);
lean_dec(v___x_3149_);
lean_inc_ref(v_impl_3088_);
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 4, v_l_3094_);
lean_ctor_set(v___x_3105_, 3, v_impl_3088_);
lean_ctor_set(v___x_3105_, 2, v_v_2605_);
lean_ctor_set(v___x_3105_, 1, v_k_2604_);
lean_ctor_set(v___x_3105_, 0, v___x_3151_);
v___x_3153_ = v___x_3105_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v___x_3151_);
lean_ctor_set(v_reuseFailAlloc_3166_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_3166_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_3166_, 3, v_impl_3088_);
lean_ctor_set(v_reuseFailAlloc_3166_, 4, v_l_3094_);
v___x_3153_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3160_; 
v_isSharedCheck_3160_ = !lean_is_exclusive(v_impl_3088_);
if (v_isSharedCheck_3160_ == 0)
{
lean_object* v_unused_3161_; lean_object* v_unused_3162_; lean_object* v_unused_3163_; lean_object* v_unused_3164_; lean_object* v_unused_3165_; 
v_unused_3161_ = lean_ctor_get(v_impl_3088_, 4);
lean_dec(v_unused_3161_);
v_unused_3162_ = lean_ctor_get(v_impl_3088_, 3);
lean_dec(v_unused_3162_);
v_unused_3163_ = lean_ctor_get(v_impl_3088_, 2);
lean_dec(v_unused_3163_);
v_unused_3164_ = lean_ctor_get(v_impl_3088_, 1);
lean_dec(v_unused_3164_);
v_unused_3165_ = lean_ctor_get(v_impl_3088_, 0);
lean_dec(v_unused_3165_);
v___x_3155_ = v_impl_3088_;
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
else
{
lean_dec(v_impl_3088_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3158_; 
if (v_isShared_3156_ == 0)
{
lean_ctor_set(v___x_3155_, 4, v_r_3095_);
lean_ctor_set(v___x_3155_, 3, v___x_3153_);
lean_ctor_set(v___x_3155_, 2, v_v_3093_);
lean_ctor_set(v___x_3155_, 1, v_k_3092_);
lean_ctor_set(v___x_3155_, 0, v___x_3150_);
v___x_3158_ = v___x_3155_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v___x_3150_);
lean_ctor_set(v_reuseFailAlloc_3159_, 1, v_k_3092_);
lean_ctor_set(v_reuseFailAlloc_3159_, 2, v_v_3093_);
lean_ctor_set(v_reuseFailAlloc_3159_, 3, v___x_3153_);
lean_ctor_set(v_reuseFailAlloc_3159_, 4, v_r_3095_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3173_; lean_object* v___x_3174_; lean_object* v___x_3176_; 
v_size_3173_ = lean_ctor_get(v_impl_3088_, 0);
lean_inc(v_size_3173_);
v___x_3174_ = lean_nat_add(v___x_3089_, v_size_3173_);
lean_dec(v_size_3173_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 3, v_impl_3088_);
lean_ctor_set(v___x_2609_, 0, v___x_3174_);
v___x_3176_ = v___x_2609_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v___x_3174_);
lean_ctor_set(v_reuseFailAlloc_3177_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_3177_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_3177_, 3, v_impl_3088_);
lean_ctor_set(v_reuseFailAlloc_3177_, 4, v_r_2607_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
}
else
{
if (lean_obj_tag(v_r_2607_) == 0)
{
lean_object* v_l_3178_; 
v_l_3178_ = lean_ctor_get(v_r_2607_, 3);
lean_inc(v_l_3178_);
if (lean_obj_tag(v_l_3178_) == 0)
{
lean_object* v_r_3179_; 
v_r_3179_ = lean_ctor_get(v_r_2607_, 4);
lean_inc(v_r_3179_);
if (lean_obj_tag(v_r_3179_) == 0)
{
lean_object* v_size_3180_; lean_object* v_k_3181_; lean_object* v_v_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3195_; 
v_size_3180_ = lean_ctor_get(v_r_2607_, 0);
v_k_3181_ = lean_ctor_get(v_r_2607_, 1);
v_v_3182_ = lean_ctor_get(v_r_2607_, 2);
v_isSharedCheck_3195_ = !lean_is_exclusive(v_r_2607_);
if (v_isSharedCheck_3195_ == 0)
{
lean_object* v_unused_3196_; lean_object* v_unused_3197_; 
v_unused_3196_ = lean_ctor_get(v_r_2607_, 4);
lean_dec(v_unused_3196_);
v_unused_3197_ = lean_ctor_get(v_r_2607_, 3);
lean_dec(v_unused_3197_);
v___x_3184_ = v_r_2607_;
v_isShared_3185_ = v_isSharedCheck_3195_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_v_3182_);
lean_inc(v_k_3181_);
lean_inc(v_size_3180_);
lean_dec(v_r_2607_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3195_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v_size_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3190_; 
v_size_3186_ = lean_ctor_get(v_l_3178_, 0);
v___x_3187_ = lean_nat_add(v___x_3089_, v_size_3180_);
lean_dec(v_size_3180_);
v___x_3188_ = lean_nat_add(v___x_3089_, v_size_3186_);
if (v_isShared_3185_ == 0)
{
lean_ctor_set(v___x_3184_, 4, v_l_3178_);
lean_ctor_set(v___x_3184_, 3, v_impl_3088_);
lean_ctor_set(v___x_3184_, 2, v_v_2605_);
lean_ctor_set(v___x_3184_, 1, v_k_2604_);
lean_ctor_set(v___x_3184_, 0, v___x_3188_);
v___x_3190_ = v___x_3184_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v___x_3188_);
lean_ctor_set(v_reuseFailAlloc_3194_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_3194_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_3194_, 3, v_impl_3088_);
lean_ctor_set(v_reuseFailAlloc_3194_, 4, v_l_3178_);
v___x_3190_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
lean_object* v___x_3192_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v_r_3179_);
lean_ctor_set(v___x_2609_, 3, v___x_3190_);
lean_ctor_set(v___x_2609_, 2, v_v_3182_);
lean_ctor_set(v___x_2609_, 1, v_k_3181_);
lean_ctor_set(v___x_2609_, 0, v___x_3187_);
v___x_3192_ = v___x_2609_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v___x_3187_);
lean_ctor_set(v_reuseFailAlloc_3193_, 1, v_k_3181_);
lean_ctor_set(v_reuseFailAlloc_3193_, 2, v_v_3182_);
lean_ctor_set(v_reuseFailAlloc_3193_, 3, v___x_3190_);
lean_ctor_set(v_reuseFailAlloc_3193_, 4, v_r_3179_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
}
}
}
}
else
{
lean_object* v_k_3198_; lean_object* v_v_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3222_; 
v_k_3198_ = lean_ctor_get(v_r_2607_, 1);
v_v_3199_ = lean_ctor_get(v_r_2607_, 2);
v_isSharedCheck_3222_ = !lean_is_exclusive(v_r_2607_);
if (v_isSharedCheck_3222_ == 0)
{
lean_object* v_unused_3223_; lean_object* v_unused_3224_; lean_object* v_unused_3225_; 
v_unused_3223_ = lean_ctor_get(v_r_2607_, 4);
lean_dec(v_unused_3223_);
v_unused_3224_ = lean_ctor_get(v_r_2607_, 3);
lean_dec(v_unused_3224_);
v_unused_3225_ = lean_ctor_get(v_r_2607_, 0);
lean_dec(v_unused_3225_);
v___x_3201_ = v_r_2607_;
v_isShared_3202_ = v_isSharedCheck_3222_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_v_3199_);
lean_inc(v_k_3198_);
lean_dec(v_r_2607_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3222_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v_k_3203_; lean_object* v_v_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3218_; 
v_k_3203_ = lean_ctor_get(v_l_3178_, 1);
v_v_3204_ = lean_ctor_get(v_l_3178_, 2);
v_isSharedCheck_3218_ = !lean_is_exclusive(v_l_3178_);
if (v_isSharedCheck_3218_ == 0)
{
lean_object* v_unused_3219_; lean_object* v_unused_3220_; lean_object* v_unused_3221_; 
v_unused_3219_ = lean_ctor_get(v_l_3178_, 4);
lean_dec(v_unused_3219_);
v_unused_3220_ = lean_ctor_get(v_l_3178_, 3);
lean_dec(v_unused_3220_);
v_unused_3221_ = lean_ctor_get(v_l_3178_, 0);
lean_dec(v_unused_3221_);
v___x_3206_ = v_l_3178_;
v_isShared_3207_ = v_isSharedCheck_3218_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_v_3204_);
lean_inc(v_k_3203_);
lean_dec(v_l_3178_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3218_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3208_; lean_object* v___x_3210_; 
v___x_3208_ = lean_unsigned_to_nat(3u);
if (v_isShared_3207_ == 0)
{
lean_ctor_set(v___x_3206_, 4, v_r_3179_);
lean_ctor_set(v___x_3206_, 3, v_r_3179_);
lean_ctor_set(v___x_3206_, 2, v_v_2605_);
lean_ctor_set(v___x_3206_, 1, v_k_2604_);
lean_ctor_set(v___x_3206_, 0, v___x_3089_);
v___x_3210_ = v___x_3206_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v___x_3089_);
lean_ctor_set(v_reuseFailAlloc_3217_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_3217_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_3217_, 3, v_r_3179_);
lean_ctor_set(v_reuseFailAlloc_3217_, 4, v_r_3179_);
v___x_3210_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
lean_object* v___x_3212_; 
if (v_isShared_3202_ == 0)
{
lean_ctor_set(v___x_3201_, 3, v_r_3179_);
lean_ctor_set(v___x_3201_, 0, v___x_3089_);
v___x_3212_ = v___x_3201_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v___x_3089_);
lean_ctor_set(v_reuseFailAlloc_3216_, 1, v_k_3198_);
lean_ctor_set(v_reuseFailAlloc_3216_, 2, v_v_3199_);
lean_ctor_set(v_reuseFailAlloc_3216_, 3, v_r_3179_);
lean_ctor_set(v_reuseFailAlloc_3216_, 4, v_r_3179_);
v___x_3212_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
lean_object* v___x_3214_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v___x_3212_);
lean_ctor_set(v___x_2609_, 3, v___x_3210_);
lean_ctor_set(v___x_2609_, 2, v_v_3204_);
lean_ctor_set(v___x_2609_, 1, v_k_3203_);
lean_ctor_set(v___x_2609_, 0, v___x_3208_);
v___x_3214_ = v___x_2609_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v___x_3208_);
lean_ctor_set(v_reuseFailAlloc_3215_, 1, v_k_3203_);
lean_ctor_set(v_reuseFailAlloc_3215_, 2, v_v_3204_);
lean_ctor_set(v_reuseFailAlloc_3215_, 3, v___x_3210_);
lean_ctor_set(v_reuseFailAlloc_3215_, 4, v___x_3212_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_3226_; 
v_r_3226_ = lean_ctor_get(v_r_2607_, 4);
lean_inc(v_r_3226_);
if (lean_obj_tag(v_r_3226_) == 0)
{
lean_object* v_k_3227_; lean_object* v_v_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3239_; 
v_k_3227_ = lean_ctor_get(v_r_2607_, 1);
v_v_3228_ = lean_ctor_get(v_r_2607_, 2);
v_isSharedCheck_3239_ = !lean_is_exclusive(v_r_2607_);
if (v_isSharedCheck_3239_ == 0)
{
lean_object* v_unused_3240_; lean_object* v_unused_3241_; lean_object* v_unused_3242_; 
v_unused_3240_ = lean_ctor_get(v_r_2607_, 4);
lean_dec(v_unused_3240_);
v_unused_3241_ = lean_ctor_get(v_r_2607_, 3);
lean_dec(v_unused_3241_);
v_unused_3242_ = lean_ctor_get(v_r_2607_, 0);
lean_dec(v_unused_3242_);
v___x_3230_ = v_r_2607_;
v_isShared_3231_ = v_isSharedCheck_3239_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_v_3228_);
lean_inc(v_k_3227_);
lean_dec(v_r_2607_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3239_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3232_; lean_object* v___x_3234_; 
v___x_3232_ = lean_unsigned_to_nat(3u);
if (v_isShared_3231_ == 0)
{
lean_ctor_set(v___x_3230_, 4, v_l_3178_);
lean_ctor_set(v___x_3230_, 2, v_v_2605_);
lean_ctor_set(v___x_3230_, 1, v_k_2604_);
lean_ctor_set(v___x_3230_, 0, v___x_3089_);
v___x_3234_ = v___x_3230_;
goto v_reusejp_3233_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v___x_3089_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_3238_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_3238_, 3, v_l_3178_);
lean_ctor_set(v_reuseFailAlloc_3238_, 4, v_l_3178_);
v___x_3234_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3233_;
}
v_reusejp_3233_:
{
lean_object* v___x_3236_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v_r_3226_);
lean_ctor_set(v___x_2609_, 3, v___x_3234_);
lean_ctor_set(v___x_2609_, 2, v_v_3228_);
lean_ctor_set(v___x_2609_, 1, v_k_3227_);
lean_ctor_set(v___x_2609_, 0, v___x_3232_);
v___x_3236_ = v___x_2609_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v___x_3232_);
lean_ctor_set(v_reuseFailAlloc_3237_, 1, v_k_3227_);
lean_ctor_set(v_reuseFailAlloc_3237_, 2, v_v_3228_);
lean_ctor_set(v_reuseFailAlloc_3237_, 3, v___x_3234_);
lean_ctor_set(v_reuseFailAlloc_3237_, 4, v_r_3226_);
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
lean_object* v_size_3243_; lean_object* v_k_3244_; lean_object* v_v_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3256_; 
v_size_3243_ = lean_ctor_get(v_r_2607_, 0);
v_k_3244_ = lean_ctor_get(v_r_2607_, 1);
v_v_3245_ = lean_ctor_get(v_r_2607_, 2);
v_isSharedCheck_3256_ = !lean_is_exclusive(v_r_2607_);
if (v_isSharedCheck_3256_ == 0)
{
lean_object* v_unused_3257_; lean_object* v_unused_3258_; 
v_unused_3257_ = lean_ctor_get(v_r_2607_, 4);
lean_dec(v_unused_3257_);
v_unused_3258_ = lean_ctor_get(v_r_2607_, 3);
lean_dec(v_unused_3258_);
v___x_3247_ = v_r_2607_;
v_isShared_3248_ = v_isSharedCheck_3256_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_v_3245_);
lean_inc(v_k_3244_);
lean_inc(v_size_3243_);
lean_dec(v_r_2607_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3256_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
lean_ctor_set(v___x_3247_, 3, v_r_3226_);
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_size_3243_);
lean_ctor_set(v_reuseFailAlloc_3255_, 1, v_k_3244_);
lean_ctor_set(v_reuseFailAlloc_3255_, 2, v_v_3245_);
lean_ctor_set(v_reuseFailAlloc_3255_, 3, v_r_3226_);
lean_ctor_set(v_reuseFailAlloc_3255_, 4, v_r_3226_);
v___x_3250_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
lean_object* v___x_3251_; lean_object* v___x_3253_; 
v___x_3251_ = lean_unsigned_to_nat(2u);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 4, v___x_3250_);
lean_ctor_set(v___x_2609_, 3, v_r_3226_);
lean_ctor_set(v___x_2609_, 0, v___x_3251_);
v___x_3253_ = v___x_2609_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v___x_3251_);
lean_ctor_set(v_reuseFailAlloc_3254_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_3254_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_3254_, 3, v_r_3226_);
lean_ctor_set(v_reuseFailAlloc_3254_, 4, v___x_3250_);
v___x_3253_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
return v___x_3253_;
}
}
}
}
}
}
else
{
lean_object* v___x_3260_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 3, v_r_2607_);
lean_ctor_set(v___x_2609_, 0, v___x_3089_);
v___x_3260_ = v___x_2609_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v___x_3089_);
lean_ctor_set(v_reuseFailAlloc_3261_, 1, v_k_2604_);
lean_ctor_set(v_reuseFailAlloc_3261_, 2, v_v_2605_);
lean_ctor_set(v_reuseFailAlloc_3261_, 3, v_r_2607_);
lean_ctor_set(v_reuseFailAlloc_3261_, 4, v_r_2607_);
v___x_3260_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
return v___x_3260_;
}
}
}
}
}
}
else
{
return v_t_2603_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg___boxed(lean_object* v_k_3264_, lean_object* v_t_3265_){
_start:
{
lean_object* v_res_3266_; 
v_res_3266_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg(v_k_3264_, v_t_3265_);
lean_dec(v_k_3264_);
return v_res_3266_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_eraseJoinPointDecl(lean_object* v_ctx_3267_, lean_object* v_j_3268_){
_start:
{
lean_object* v___x_3269_; 
v___x_3269_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg(v_j_3268_, v_ctx_3267_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_eraseJoinPointDecl___boxed(lean_object* v_ctx_3270_, lean_object* v_j_3271_){
_start:
{
lean_object* v_res_3272_; 
v_res_3272_ = l_Lean_IR_LocalContext_eraseJoinPointDecl(v_ctx_3270_, v_j_3271_);
lean_dec(v_j_3271_);
return v_res_3272_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0(lean_object* v_00_u03b2_3273_, lean_object* v_k_3274_, lean_object* v_t_3275_, lean_object* v_h_3276_){
_start:
{
lean_object* v___x_3277_; 
v___x_3277_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___redArg(v_k_3274_, v_t_3275_);
return v___x_3277_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0___boxed(lean_object* v_00_u03b2_3278_, lean_object* v_k_3279_, lean_object* v_t_3280_, lean_object* v_h_3281_){
_start:
{
lean_object* v_res_3282_; 
v_res_3282_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_IR_LocalContext_eraseJoinPointDecl_spec__0(v_00_u03b2_3278_, v_k_3279_, v_t_3280_, v_h_3281_);
lean_dec(v_k_3279_);
return v_res_3282_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getType(lean_object* v_ctx_3283_, lean_object* v_x_3284_){
_start:
{
lean_object* v___x_3285_; 
v___x_3285_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(v_ctx_3283_, v_x_3284_);
if (lean_obj_tag(v___x_3285_) == 1)
{
lean_object* v_val_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3299_; 
v_val_3286_ = lean_ctor_get(v___x_3285_, 0);
v_isSharedCheck_3299_ = !lean_is_exclusive(v___x_3285_);
if (v_isSharedCheck_3299_ == 0)
{
v___x_3288_ = v___x_3285_;
v_isShared_3289_ = v_isSharedCheck_3299_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_val_3286_);
lean_dec(v___x_3285_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3299_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
switch(lean_obj_tag(v_val_3286_))
{
case 0:
{
lean_object* v_a_3290_; lean_object* v___x_3292_; 
v_a_3290_ = lean_ctor_get(v_val_3286_, 0);
lean_inc(v_a_3290_);
lean_dec_ref_known(v_val_3286_, 1);
if (v_isShared_3289_ == 0)
{
lean_ctor_set(v___x_3288_, 0, v_a_3290_);
v___x_3292_ = v___x_3288_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_a_3290_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
case 1:
{
lean_object* v_a_3294_; lean_object* v___x_3296_; 
v_a_3294_ = lean_ctor_get(v_val_3286_, 0);
lean_inc(v_a_3294_);
lean_dec_ref_known(v_val_3286_, 2);
if (v_isShared_3289_ == 0)
{
lean_ctor_set(v___x_3288_, 0, v_a_3294_);
v___x_3296_ = v___x_3288_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_a_3294_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
return v___x_3296_;
}
}
default: 
{
lean_object* v___x_3298_; 
lean_del_object(v___x_3288_);
lean_dec(v_val_3286_);
v___x_3298_ = lean_box(0);
return v___x_3298_;
}
}
}
}
else
{
lean_object* v___x_3300_; 
lean_dec(v___x_3285_);
v___x_3300_ = lean_box(0);
return v___x_3300_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getType___boxed(lean_object* v_ctx_3301_, lean_object* v_x_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l_Lean_IR_LocalContext_getType(v_ctx_3301_, v_x_3302_);
lean_dec(v_x_3302_);
lean_dec(v_ctx_3301_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getValue(lean_object* v_ctx_3304_, lean_object* v_x_3305_){
_start:
{
lean_object* v___x_3306_; 
v___x_3306_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(v_ctx_3304_, v_x_3305_);
if (lean_obj_tag(v___x_3306_) == 1)
{
lean_object* v_val_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3316_; 
v_val_3307_ = lean_ctor_get(v___x_3306_, 0);
v_isSharedCheck_3316_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3309_ = v___x_3306_;
v_isShared_3310_ = v_isSharedCheck_3316_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_val_3307_);
lean_dec(v___x_3306_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3316_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
if (lean_obj_tag(v_val_3307_) == 1)
{
lean_object* v_a_3311_; lean_object* v___x_3313_; 
v_a_3311_ = lean_ctor_get(v_val_3307_, 1);
lean_inc_ref(v_a_3311_);
lean_dec_ref_known(v_val_3307_, 2);
if (v_isShared_3310_ == 0)
{
lean_ctor_set(v___x_3309_, 0, v_a_3311_);
v___x_3313_ = v___x_3309_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v_a_3311_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
return v___x_3313_;
}
}
else
{
lean_object* v___x_3315_; 
lean_del_object(v___x_3309_);
lean_dec(v_val_3307_);
v___x_3315_ = lean_box(0);
return v___x_3315_;
}
}
}
else
{
lean_object* v___x_3317_; 
lean_dec(v___x_3306_);
v___x_3317_ = lean_box(0);
return v___x_3317_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LocalContext_getValue___boxed(lean_object* v_ctx_3318_, lean_object* v_x_3319_){
_start:
{
lean_object* v_res_3320_; 
v_res_3320_ = l_Lean_IR_LocalContext_getValue(v_ctx_3318_, v_x_3319_);
lean_dec(v_x_3319_);
lean_dec(v_ctx_3318_);
return v_res_3320_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_VarId_alphaEqv(lean_object* v_00_u03c1_3321_, lean_object* v_v_u2081_3322_, lean_object* v_v_u2082_3323_){
_start:
{
lean_object* v___x_3324_; 
v___x_3324_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_LocalContext_isJP_spec__0___redArg(v_00_u03c1_3321_, v_v_u2081_3322_);
if (lean_obj_tag(v___x_3324_) == 0)
{
uint8_t v___x_3325_; 
v___x_3325_ = lean_nat_dec_eq(v_v_u2081_3322_, v_v_u2082_3323_);
return v___x_3325_;
}
else
{
lean_object* v_val_3326_; uint8_t v___x_3327_; 
v_val_3326_ = lean_ctor_get(v___x_3324_, 0);
lean_inc(v_val_3326_);
lean_dec_ref_known(v___x_3324_, 1);
v___x_3327_ = lean_nat_dec_eq(v_val_3326_, v_v_u2082_3323_);
lean_dec(v_val_3326_);
return v___x_3327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_VarId_alphaEqv___boxed(lean_object* v_00_u03c1_3328_, lean_object* v_v_u2081_3329_, lean_object* v_v_u2082_3330_){
_start:
{
uint8_t v_res_3331_; lean_object* v_r_3332_; 
v_res_3331_ = l_Lean_IR_VarId_alphaEqv(v_00_u03c1_3328_, v_v_u2081_3329_, v_v_u2082_3330_);
lean_dec(v_v_u2082_3330_);
lean_dec(v_v_u2081_3329_);
lean_dec(v_00_u03c1_3328_);
v_r_3332_ = lean_box(v_res_3331_);
return v_r_3332_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_Arg_alphaEqv(lean_object* v_00_u03c1_3335_, lean_object* v_x_3336_, lean_object* v_x_3337_){
_start:
{
if (lean_obj_tag(v_x_3336_) == 0)
{
if (lean_obj_tag(v_x_3337_) == 0)
{
lean_object* v_id_3338_; lean_object* v_id_3339_; uint8_t v___x_3340_; 
v_id_3338_ = lean_ctor_get(v_x_3336_, 0);
v_id_3339_ = lean_ctor_get(v_x_3337_, 0);
v___x_3340_ = l_Lean_IR_VarId_alphaEqv(v_00_u03c1_3335_, v_id_3338_, v_id_3339_);
return v___x_3340_;
}
else
{
uint8_t v___x_3341_; 
v___x_3341_ = 0;
return v___x_3341_;
}
}
else
{
if (lean_obj_tag(v_x_3337_) == 1)
{
uint8_t v___x_3342_; 
v___x_3342_ = 1;
return v___x_3342_;
}
else
{
uint8_t v___x_3343_; 
v___x_3343_ = 0;
return v___x_3343_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Arg_alphaEqv___boxed(lean_object* v_00_u03c1_3344_, lean_object* v_x_3345_, lean_object* v_x_3346_){
_start:
{
uint8_t v_res_3347_; lean_object* v_r_3348_; 
v_res_3347_ = l_Lean_IR_Arg_alphaEqv(v_00_u03c1_3344_, v_x_3345_, v_x_3346_);
lean_dec(v_x_3346_);
lean_dec(v_x_3345_);
lean_dec(v_00_u03c1_3344_);
v_r_3348_ = lean_box(v_res_3347_);
return v_r_3348_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0___redArg(lean_object* v_00_u03c1_3351_, lean_object* v_xs_3352_, lean_object* v_ys_3353_, lean_object* v_x_3354_){
_start:
{
lean_object* v_zero_3355_; uint8_t v_isZero_3356_; 
v_zero_3355_ = lean_unsigned_to_nat(0u);
v_isZero_3356_ = lean_nat_dec_eq(v_x_3354_, v_zero_3355_);
if (v_isZero_3356_ == 1)
{
lean_dec(v_x_3354_);
return v_isZero_3356_;
}
else
{
lean_object* v_one_3357_; lean_object* v_n_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; uint8_t v___x_3361_; 
v_one_3357_ = lean_unsigned_to_nat(1u);
v_n_3358_ = lean_nat_sub(v_x_3354_, v_one_3357_);
lean_dec(v_x_3354_);
v___x_3359_ = lean_array_fget_borrowed(v_xs_3352_, v_n_3358_);
v___x_3360_ = lean_array_fget_borrowed(v_ys_3353_, v_n_3358_);
v___x_3361_ = l_Lean_IR_Arg_alphaEqv(v_00_u03c1_3351_, v___x_3359_, v___x_3360_);
if (v___x_3361_ == 0)
{
lean_dec(v_n_3358_);
return v___x_3361_;
}
else
{
v_x_3354_ = v_n_3358_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0___redArg___boxed(lean_object* v_00_u03c1_3363_, lean_object* v_xs_3364_, lean_object* v_ys_3365_, lean_object* v_x_3366_){
_start:
{
uint8_t v_res_3367_; lean_object* v_r_3368_; 
v_res_3367_ = l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0___redArg(v_00_u03c1_3363_, v_xs_3364_, v_ys_3365_, v_x_3366_);
lean_dec_ref(v_ys_3365_);
lean_dec_ref(v_xs_3364_);
lean_dec(v_00_u03c1_3363_);
v_r_3368_ = lean_box(v_res_3367_);
return v_r_3368_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_args_alphaEqv(lean_object* v_00_u03c1_3369_, lean_object* v_args_u2081_3370_, lean_object* v_args_u2082_3371_){
_start:
{
lean_object* v___x_3372_; lean_object* v___x_3373_; uint8_t v___x_3374_; 
v___x_3372_ = lean_array_get_size(v_args_u2081_3370_);
v___x_3373_ = lean_array_get_size(v_args_u2082_3371_);
v___x_3374_ = lean_nat_dec_eq(v___x_3372_, v___x_3373_);
if (v___x_3374_ == 0)
{
return v___x_3374_;
}
else
{
uint8_t v___x_3375_; 
v___x_3375_ = l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0___redArg(v_00_u03c1_3369_, v_args_u2081_3370_, v_args_u2082_3371_, v___x_3372_);
return v___x_3375_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_args_alphaEqv___boxed(lean_object* v_00_u03c1_3376_, lean_object* v_args_u2081_3377_, lean_object* v_args_u2082_3378_){
_start:
{
uint8_t v_res_3379_; lean_object* v_r_3380_; 
v_res_3379_ = l_Lean_IR_args_alphaEqv(v_00_u03c1_3376_, v_args_u2081_3377_, v_args_u2082_3378_);
lean_dec_ref(v_args_u2082_3378_);
lean_dec_ref(v_args_u2081_3377_);
lean_dec(v_00_u03c1_3376_);
v_r_3380_ = lean_box(v_res_3379_);
return v_r_3380_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0(lean_object* v_00_u03c1_3381_, lean_object* v_xs_3382_, lean_object* v_ys_3383_, lean_object* v_hsz_3384_, lean_object* v_x_3385_, lean_object* v_x_3386_){
_start:
{
uint8_t v___x_3387_; 
v___x_3387_ = l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0___redArg(v_00_u03c1_3381_, v_xs_3382_, v_ys_3383_, v_x_3385_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0___boxed(lean_object* v_00_u03c1_3388_, lean_object* v_xs_3389_, lean_object* v_ys_3390_, lean_object* v_hsz_3391_, lean_object* v_x_3392_, lean_object* v_x_3393_){
_start:
{
uint8_t v_res_3394_; lean_object* v_r_3395_; 
v_res_3394_ = l_Array_isEqvAux___at___00Lean_IR_args_alphaEqv_spec__0(v_00_u03c1_3388_, v_xs_3389_, v_ys_3390_, v_hsz_3391_, v_x_3392_, v_x_3393_);
lean_dec_ref(v_ys_3390_);
lean_dec_ref(v_xs_3389_);
lean_dec(v_00_u03c1_3388_);
v_r_3395_ = lean_box(v_res_3394_);
return v_r_3395_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_Expr_alphaEqv(lean_object* v_00_u03c1_3398_, lean_object* v_x_3399_, lean_object* v_x_3400_){
_start:
{
lean_object* v_c_u2081_3402_; lean_object* v_ys_u2081_3403_; lean_object* v_c_u2082_3404_; lean_object* v_ys_u2082_3405_; lean_object* v_n_u2081_3409_; lean_object* v_x_u2081_3410_; lean_object* v_n_u2082_3411_; lean_object* v_x_u2082_3412_; 
switch(lean_obj_tag(v_x_3399_))
{
case 0:
{
if (lean_obj_tag(v_x_3400_) == 0)
{
lean_object* v_i_3415_; lean_object* v_ys_3416_; lean_object* v_i_3417_; lean_object* v_ys_3418_; uint8_t v___x_3419_; 
v_i_3415_ = lean_ctor_get(v_x_3399_, 0);
v_ys_3416_ = lean_ctor_get(v_x_3399_, 1);
v_i_3417_ = lean_ctor_get(v_x_3400_, 0);
v_ys_3418_ = lean_ctor_get(v_x_3400_, 1);
v___x_3419_ = l_Lean_IR_instBEqCtorInfo_beq(v_i_3415_, v_i_3417_);
if (v___x_3419_ == 0)
{
return v___x_3419_;
}
else
{
uint8_t v___x_3420_; 
v___x_3420_ = l_Lean_IR_args_alphaEqv(v_00_u03c1_3398_, v_ys_3416_, v_ys_3418_);
return v___x_3420_;
}
}
else
{
uint8_t v___x_3421_; 
v___x_3421_ = 0;
return v___x_3421_;
}
}
case 1:
{
if (lean_obj_tag(v_x_3400_) == 1)
{
lean_object* v_n_3422_; lean_object* v_x_3423_; lean_object* v_n_3424_; lean_object* v_x_3425_; 
v_n_3422_ = lean_ctor_get(v_x_3399_, 0);
v_x_3423_ = lean_ctor_get(v_x_3399_, 1);
v_n_3424_ = lean_ctor_get(v_x_3400_, 0);
v_x_3425_ = lean_ctor_get(v_x_3400_, 1);
v_n_u2081_3409_ = v_n_3422_;
v_x_u2081_3410_ = v_x_3423_;
v_n_u2082_3411_ = v_n_3424_;
v_x_u2082_3412_ = v_x_3425_;
goto v___jp_3408_;
}
else
{
uint8_t v___x_3426_; 
v___x_3426_ = 0;
return v___x_3426_;
}
}
case 2:
{
if (lean_obj_tag(v_x_3400_) == 2)
{
lean_object* v_x_3427_; lean_object* v_i_3428_; uint8_t v_updtHeader_3429_; lean_object* v_ys_3430_; lean_object* v_x_3431_; lean_object* v_i_3432_; uint8_t v_updtHeader_3433_; lean_object* v_ys_3434_; uint8_t v___y_3436_; uint8_t v___x_3439_; 
v_x_3427_ = lean_ctor_get(v_x_3399_, 0);
v_i_3428_ = lean_ctor_get(v_x_3399_, 1);
v_updtHeader_3429_ = lean_ctor_get_uint8(v_x_3399_, sizeof(void*)*3);
v_ys_3430_ = lean_ctor_get(v_x_3399_, 2);
v_x_3431_ = lean_ctor_get(v_x_3400_, 0);
v_i_3432_ = lean_ctor_get(v_x_3400_, 1);
v_updtHeader_3433_ = lean_ctor_get_uint8(v_x_3400_, sizeof(void*)*3);
v_ys_3434_ = lean_ctor_get(v_x_3400_, 2);
v___x_3439_ = l_Lean_IR_VarId_alphaEqv(v_00_u03c1_3398_, v_x_3427_, v_x_3431_);
if (v___x_3439_ == 0)
{
v___y_3436_ = v___x_3439_;
goto v___jp_3435_;
}
else
{
uint8_t v___x_3440_; 
v___x_3440_ = l_Lean_IR_instBEqCtorInfo_beq(v_i_3428_, v_i_3432_);
v___y_3436_ = v___x_3440_;
goto v___jp_3435_;
}
v___jp_3435_:
{
if (v___y_3436_ == 0)
{
return v___y_3436_;
}
else
{
if (v_updtHeader_3433_ == 0)
{
if (v_updtHeader_3429_ == 0)
{
uint8_t v___x_3437_; 
v___x_3437_ = l_Lean_IR_args_alphaEqv(v_00_u03c1_3398_, v_ys_3430_, v_ys_3434_);
return v___x_3437_;
}
else
{
return v_updtHeader_3433_;
}
}
else
{
if (v_updtHeader_3429_ == 0)
{
return v_updtHeader_3429_;
}
else
{
uint8_t v___x_3438_; 
v___x_3438_ = l_Lean_IR_args_alphaEqv(v_00_u03c1_3398_, v_ys_3430_, v_ys_3434_);
return v___x_3438_;
}
}
}
}
}
else
{
uint8_t v___x_3441_; 
v___x_3441_ = 0;
return v___x_3441_;
}
}
case 3:
{
if (lean_obj_tag(v_x_3400_) == 3)
{
lean_object* v_i_3442_; lean_object* v_x_3443_; lean_object* v_i_3444_; lean_object* v_x_3445_; 
v_i_3442_ = lean_ctor_get(v_x_3399_, 0);
v_x_3443_ = lean_ctor_get(v_x_3399_, 1);
v_i_3444_ = lean_ctor_get(v_x_3400_, 0);
v_x_3445_ = lean_ctor_get(v_x_3400_, 1);
v_n_u2081_3409_ = v_i_3442_;
v_x_u2081_3410_ = v_x_3443_;
v_n_u2082_3411_ = v_i_3444_;
v_x_u2082_3412_ = v_x_3445_;
goto v___jp_3408_;
}
else
{
uint8_t v___x_3446_; 
v___x_3446_ = 0;
return v___x_3446_;
}
}
case 4:
{
if (lean_obj_tag(v_x_3400_) == 4)
{
lean_object* v_i_3447_; lean_object* v_x_3448_; lean_object* v_i_3449_; lean_object* v_x_3450_; 
v_i_3447_ = lean_ctor_get(v_x_3399_, 0);
v_x_3448_ = lean_ctor_get(v_x_3399_, 1);
v_i_3449_ = lean_ctor_get(v_x_3400_, 0);
v_x_3450_ = lean_ctor_get(v_x_3400_, 1);
v_n_u2081_3409_ = v_i_3447_;
v_x_u2081_3410_ = v_x_3448_;
v_n_u2082_3411_ = v_i_3449_;
v_x_u2082_3412_ = v_x_3450_;
goto v___jp_3408_;
}
else
{
uint8_t v___x_3451_; 
v___x_3451_ = 0;
return v___x_3451_;
}
}
case 5:
{
if (lean_obj_tag(v_x_3400_) == 5)
{
lean_object* v_n_3452_; lean_object* v_offset_3453_; lean_object* v_x_3454_; lean_object* v_n_3455_; lean_object* v_offset_3456_; lean_object* v_x_3457_; uint8_t v___x_3458_; 
v_n_3452_ = lean_ctor_get(v_x_3399_, 0);
v_offset_3453_ = lean_ctor_get(v_x_3399_, 1);
v_x_3454_ = lean_ctor_get(v_x_3399_, 2);
v_n_3455_ = lean_ctor_get(v_x_3400_, 0);
v_offset_3456_ = lean_ctor_get(v_x_3400_, 1);
v_x_3457_ = lean_ctor_get(v_x_3400_, 2);
v___x_3458_ = lean_nat_dec_eq(v_n_3452_, v_n_3455_);
if (v___x_3458_ == 0)
{
return v___x_3458_;
}
else
{
uint8_t v___x_3459_; 
v___x_3459_ = lean_nat_dec_eq(v_offset_3453_, v_offset_3456_);
if (v___x_3459_ == 0)
{
return v___x_3459_;
}
else
{
uint8_t v___x_3460_; 
v___x_3460_ = l_Lean_IR_VarId_alphaEqv(v_00_u03c1_3398_, v_x_3454_, v_x_3457_);
return v___x_3460_;
}
}
}
else
{
uint8_t v___x_3461_; 
v___x_3461_ = 0;
return v___x_3461_;
}
}
case 6:
{
if (lean_obj_tag(v_x_3400_) == 6)
{
lean_object* v_c_3462_; lean_object* v_ys_3463_; lean_object* v_c_3464_; lean_object* v_ys_3465_; 
v_c_3462_ = lean_ctor_get(v_x_3399_, 0);
v_ys_3463_ = lean_ctor_get(v_x_3399_, 1);
v_c_3464_ = lean_ctor_get(v_x_3400_, 0);
v_ys_3465_ = lean_ctor_get(v_x_3400_, 1);
v_c_u2081_3402_ = v_c_3462_;
v_ys_u2081_3403_ = v_ys_3463_;
v_c_u2082_3404_ = v_c_3464_;
v_ys_u2082_3405_ = v_ys_3465_;
goto v___jp_3401_;
}
else
{
uint8_t v___x_3466_; 
v___x_3466_ = 0;
return v___x_3466_;
}
}
case 7:
{
if (lean_obj_tag(v_x_3400_) == 7)
{
lean_object* v_c_3467_; lean_object* v_ys_3468_; lean_object* v_c_3469_; lean_object* v_ys_3470_; 
v_c_3467_ = lean_ctor_get(v_x_3399_, 0);
v_ys_3468_ = lean_ctor_get(v_x_3399_, 1);
v_c_3469_ = lean_ctor_get(v_x_3400_, 0);
v_ys_3470_ = lean_ctor_get(v_x_3400_, 1);
v_c_u2081_3402_ = v_c_3467_;
v_ys_u2081_3403_ = v_ys_3468_;
v_c_u2082_3404_ = v_c_3469_;
v_ys_u2082_3405_ = v_ys_3470_;
goto v___jp_3401_;
}
else
{
uint8_t v___x_3471_; 
v___x_3471_ = 0;
return v___x_3471_;
}
}
case 8:
{
if (lean_obj_tag(v_x_3400_) == 8)
{
lean_object* v_x_3472_; lean_object* v_ys_3473_; lean_object* v_x_3474_; lean_object* v_ys_3475_; uint8_t v___x_3476_; 
v_x_3472_ = lean_ctor_get(v_x_3399_, 0);
v_ys_3473_ = lean_ctor_get(v_x_3399_, 1);
v_x_3474_ = lean_ctor_get(v_x_3400_, 0);
v_ys_3475_ = lean_ctor_get(v_x_3400_, 1);
v___x_3476_ = l_Lean_IR_VarId_alphaEqv(v_00_u03c1_3398_, v_x_3472_, v_x_3474_);
if (v___x_3476_ == 0)
{
return v___x_3476_;
}
else
{
uint8_t v___x_3477_; 
v___x_3477_ = l_Lean_IR_args_alphaEqv(v_00_u03c1_3398_, v_ys_3473_, v_ys_3475_);
return v___x_3477_;
}
}
else
{
uint8_t v___x_3478_; 
v___x_3478_ = 0;
return v___x_3478_;
}
}
case 9:
{
if (lean_obj_tag(v_x_3400_) == 9)
{
lean_object* v_ty_3479_; lean_object* v_x_3480_; lean_object* v_ty_3481_; lean_object* v_x_3482_; uint8_t v___x_3483_; 
v_ty_3479_ = lean_ctor_get(v_x_3399_, 0);
v_x_3480_ = lean_ctor_get(v_x_3399_, 1);
v_ty_3481_ = lean_ctor_get(v_x_3400_, 0);
v_x_3482_ = lean_ctor_get(v_x_3400_, 1);
v___x_3483_ = l_Lean_IR_instBEqIRType_beq(v_ty_3479_, v_ty_3481_);
if (v___x_3483_ == 0)
{
return v___x_3483_;
}
else
{
uint8_t v___x_3484_; 
v___x_3484_ = l_Lean_IR_VarId_alphaEqv(v_00_u03c1_3398_, v_x_3480_, v_x_3482_);
return v___x_3484_;
}
}
else
{
uint8_t v___x_3485_; 
v___x_3485_ = 0;
return v___x_3485_;
}
}
case 10:
{
if (lean_obj_tag(v_x_3400_) == 10)
{
lean_object* v_x_3486_; lean_object* v_x_3487_; uint8_t v___x_3488_; 
v_x_3486_ = lean_ctor_get(v_x_3399_, 0);
v_x_3487_ = lean_ctor_get(v_x_3400_, 0);
v___x_3488_ = l_Lean_IR_VarId_alphaEqv(v_00_u03c1_3398_, v_x_3486_, v_x_3487_);
return v___x_3488_;
}
else
{
uint8_t v___x_3489_; 
v___x_3489_ = 0;
return v___x_3489_;
}
}
case 11:
{
if (lean_obj_tag(v_x_3400_) == 11)
{
lean_object* v_v_3490_; lean_object* v_v_3491_; uint8_t v___x_3492_; 
v_v_3490_ = lean_ctor_get(v_x_3399_, 0);
v_v_3491_ = lean_ctor_get(v_x_3400_, 0);
v___x_3492_ = l_Lean_IR_instBEqLitVal_beq(v_v_3490_, v_v_3491_);
return v___x_3492_;
}
else
{
uint8_t v___x_3493_; 
v___x_3493_ = 0;
return v___x_3493_;
}
}
default: 
{
if (lean_obj_tag(v_x_3400_) == 12)
{
lean_object* v_x_3494_; lean_object* v_x_3495_; uint8_t v___x_3496_; 
v_x_3494_ = lean_ctor_get(v_x_3399_, 0);
v_x_3495_ = lean_ctor_get(v_x_3400_, 0);
v___x_3496_ = l_Lean_IR_VarId_alphaEqv(v_00_u03c1_3398_, v_x_3494_, v_x_3495_);
return v___x_3496_;
}
else
{
uint8_t v___x_3497_; 
v___x_3497_ = 0;
return v___x_3497_;
}
}
}
v___jp_3401_:
{
uint8_t v___x_3406_; 
v___x_3406_ = lean_name_eq(v_c_u2081_3402_, v_c_u2082_3404_);
if (v___x_3406_ == 0)
{
return v___x_3406_;
}
else
{
uint8_t v___x_3407_; 
v___x_3407_ = l_Lean_IR_args_alphaEqv(v_00_u03c1_3398_, v_ys_u2081_3403_, v_ys_u2082_3405_);
return v___x_3407_;
}
}
v___jp_3408_:
{
uint8_t v___x_3413_; 
v___x_3413_ = lean_nat_dec_eq(v_n_u2081_3409_, v_n_u2082_3411_);
if (v___x_3413_ == 0)
{
return v___x_3413_;
}
else
{
uint8_t v___x_3414_; 
v___x_3414_ = l_Lean_IR_VarId_alphaEqv(v_00_u03c1_3398_, v_x_u2081_3410_, v_x_u2082_3412_);
return v___x_3414_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Expr_alphaEqv___boxed(lean_object* v_00_u03c1_3498_, lean_object* v_x_3499_, lean_object* v_x_3500_){
_start:
{
uint8_t v_res_3501_; lean_object* v_r_3502_; 
v_res_3501_ = l_Lean_IR_Expr_alphaEqv(v_00_u03c1_3498_, v_x_3499_, v_x_3500_);
lean_dec_ref(v_x_3500_);
lean_dec_ref(v_x_3499_);
lean_dec(v_00_u03c1_3498_);
v_r_3502_ = lean_box(v_res_3501_);
return v_r_3502_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addVarRename(lean_object* v_00_u03c1_3505_, lean_object* v_x_u2081_3506_, lean_object* v_x_u2082_3507_){
_start:
{
uint8_t v___x_3508_; 
v___x_3508_ = lean_nat_dec_eq(v_x_u2081_3506_, v_x_u2082_3507_);
if (v___x_3508_ == 0)
{
lean_object* v___x_3509_; 
v___x_3509_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_mkIndexSet_spec__1___redArg(v_x_u2081_3506_, v_x_u2082_3507_, v_00_u03c1_3505_);
return v___x_3509_;
}
else
{
lean_dec(v_x_u2082_3507_);
lean_dec(v_x_u2081_3506_);
return v_00_u03c1_3505_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addParamRename(lean_object* v_00_u03c1_3510_, lean_object* v_p_u2081_3511_, lean_object* v_p_u2082_3512_){
_start:
{
lean_object* v_x_3513_; uint8_t v_borrow_3514_; lean_object* v_ty_3515_; lean_object* v_x_3516_; uint8_t v_borrow_3517_; lean_object* v_ty_3518_; uint8_t v___y_3520_; uint8_t v___x_3524_; 
v_x_3513_ = lean_ctor_get(v_p_u2081_3511_, 0);
lean_inc(v_x_3513_);
v_borrow_3514_ = lean_ctor_get_uint8(v_p_u2081_3511_, sizeof(void*)*2);
v_ty_3515_ = lean_ctor_get(v_p_u2081_3511_, 1);
lean_inc(v_ty_3515_);
lean_dec_ref(v_p_u2081_3511_);
v_x_3516_ = lean_ctor_get(v_p_u2082_3512_, 0);
lean_inc(v_x_3516_);
v_borrow_3517_ = lean_ctor_get_uint8(v_p_u2082_3512_, sizeof(void*)*2);
v_ty_3518_ = lean_ctor_get(v_p_u2082_3512_, 1);
lean_inc(v_ty_3518_);
lean_dec_ref(v_p_u2082_3512_);
v___x_3524_ = l_Lean_IR_instBEqIRType_beq(v_ty_3515_, v_ty_3518_);
lean_dec(v_ty_3518_);
lean_dec(v_ty_3515_);
if (v___x_3524_ == 0)
{
v___y_3520_ = v___x_3524_;
goto v___jp_3519_;
}
else
{
if (v_borrow_3517_ == 0)
{
if (v_borrow_3514_ == 0)
{
v___y_3520_ = v___x_3524_;
goto v___jp_3519_;
}
else
{
lean_object* v___x_3525_; 
lean_dec(v_x_3516_);
lean_dec(v_x_3513_);
lean_dec(v_00_u03c1_3510_);
v___x_3525_ = lean_box(0);
return v___x_3525_;
}
}
else
{
v___y_3520_ = v_borrow_3514_;
goto v___jp_3519_;
}
}
v___jp_3519_:
{
if (v___y_3520_ == 0)
{
lean_object* v___x_3521_; 
lean_dec(v_x_3516_);
lean_dec(v_x_3513_);
lean_dec(v_00_u03c1_3510_);
v___x_3521_ = lean_box(0);
return v___x_3521_;
}
else
{
lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3522_ = l_Lean_IR_addVarRename(v_00_u03c1_3510_, v_x_3513_, v_x_3516_);
v___x_3523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3522_);
return v___x_3523_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0___redArg(lean_object* v_upperBound_3526_, lean_object* v_ps_u2081_3527_, lean_object* v_ps_u2082_3528_, lean_object* v_a_3529_, lean_object* v_b_3530_){
_start:
{
uint8_t v___x_3531_; 
v___x_3531_ = lean_nat_dec_lt(v_a_3529_, v_upperBound_3526_);
if (v___x_3531_ == 0)
{
lean_object* v___x_3532_; 
lean_dec(v_a_3529_);
v___x_3532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3532_, 0, v_b_3530_);
return v___x_3532_;
}
else
{
lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3533_ = ((lean_object*)(l_Lean_IR_instInhabitedParam_default));
v___x_3534_ = lean_array_get_borrowed(v___x_3533_, v_ps_u2081_3527_, v_a_3529_);
v___x_3535_ = lean_array_get_borrowed(v___x_3533_, v_ps_u2082_3528_, v_a_3529_);
lean_inc(v___x_3535_);
lean_inc(v___x_3534_);
v___x_3536_ = l_Lean_IR_addParamRename(v_b_3530_, v___x_3534_, v___x_3535_);
if (lean_obj_tag(v___x_3536_) == 0)
{
lean_dec(v_a_3529_);
return v___x_3536_;
}
else
{
lean_object* v_val_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; 
v_val_3537_ = lean_ctor_get(v___x_3536_, 0);
lean_inc(v_val_3537_);
lean_dec_ref_known(v___x_3536_, 1);
v___x_3538_ = lean_unsigned_to_nat(1u);
v___x_3539_ = lean_nat_add(v_a_3529_, v___x_3538_);
lean_dec(v_a_3529_);
v_a_3529_ = v___x_3539_;
v_b_3530_ = v_val_3537_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0___redArg___boxed(lean_object* v_upperBound_3541_, lean_object* v_ps_u2081_3542_, lean_object* v_ps_u2082_3543_, lean_object* v_a_3544_, lean_object* v_b_3545_){
_start:
{
lean_object* v_res_3546_; 
v_res_3546_ = l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0___redArg(v_upperBound_3541_, v_ps_u2081_3542_, v_ps_u2082_3543_, v_a_3544_, v_b_3545_);
lean_dec_ref(v_ps_u2082_3543_);
lean_dec_ref(v_ps_u2081_3542_);
lean_dec(v_upperBound_3541_);
return v_res_3546_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addParamsRename(lean_object* v_00_u03c1_3547_, lean_object* v_ps_u2081_3548_, lean_object* v_ps_u2082_3549_){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; uint8_t v___x_3552_; 
v___x_3550_ = lean_array_get_size(v_ps_u2081_3548_);
v___x_3551_ = lean_array_get_size(v_ps_u2082_3549_);
v___x_3552_ = lean_nat_dec_eq(v___x_3550_, v___x_3551_);
if (v___x_3552_ == 0)
{
lean_object* v___x_3553_; 
lean_dec(v_00_u03c1_3547_);
v___x_3553_ = lean_box(0);
return v___x_3553_;
}
else
{
lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3554_ = lean_unsigned_to_nat(0u);
v___x_3555_ = l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0___redArg(v___x_3550_, v_ps_u2081_3548_, v_ps_u2082_3549_, v___x_3554_, v_00_u03c1_3547_);
return v___x_3555_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addParamsRename___boxed(lean_object* v_00_u03c1_3556_, lean_object* v_ps_u2081_3557_, lean_object* v_ps_u2082_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l_Lean_IR_addParamsRename(v_00_u03c1_3556_, v_ps_u2081_3557_, v_ps_u2082_3558_);
lean_dec_ref(v_ps_u2082_3558_);
lean_dec_ref(v_ps_u2081_3557_);
return v_res_3559_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0(lean_object* v_upperBound_3560_, lean_object* v_ps_u2081_3561_, lean_object* v_ps_u2082_3562_, lean_object* v_inst_3563_, lean_object* v_R_3564_, lean_object* v_a_3565_, lean_object* v_b_3566_, lean_object* v_c_3567_){
_start:
{
lean_object* v___x_3568_; 
v___x_3568_ = l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0___redArg(v_upperBound_3560_, v_ps_u2081_3561_, v_ps_u2082_3562_, v_a_3565_, v_b_3566_);
return v___x_3568_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0___boxed(lean_object* v_upperBound_3569_, lean_object* v_ps_u2081_3570_, lean_object* v_ps_u2082_3571_, lean_object* v_inst_3572_, lean_object* v_R_3573_, lean_object* v_a_3574_, lean_object* v_b_3575_, lean_object* v_c_3576_){
_start:
{
lean_object* v_res_3577_; 
v_res_3577_ = l_WellFounded_opaqueFix_u2083___at___00Lean_IR_addParamsRename_spec__0(v_upperBound_3569_, v_ps_u2081_3570_, v_ps_u2082_3571_, v_inst_3572_, v_R_3573_, v_a_3574_, v_b_3575_, v_c_3576_);
lean_dec_ref(v_ps_u2082_3571_);
lean_dec_ref(v_ps_u2081_3570_);
lean_dec(v_upperBound_3569_);
return v_res_3577_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_FnBody_alphaEqv(lean_object* v_x_3578_, lean_object* v_x_3579_, lean_object* v_x_3580_){
_start:
{
uint8_t v___y_3582_; uint8_t v___y_3583_; lean_object* v___y_3584_; lean_object* v___y_3585_; lean_object* v___y_3586_; uint8_t v___y_3590_; uint8_t v___y_3591_; uint8_t v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; uint8_t v___y_3595_; lean_object* v___y_3596_; uint8_t v___y_3597_; lean_object* v_00_u03c1_3599_; lean_object* v_x_u2081_3600_; lean_object* v_n_u2081_3601_; uint8_t v_c_u2081_3602_; uint8_t v_p_u2081_3603_; lean_object* v_b_u2081_3604_; lean_object* v_x_u2082_3605_; lean_object* v_n_u2082_3606_; uint8_t v_c_u2082_3607_; uint8_t v_p_u2082_3608_; lean_object* v_b_u2082_3609_; 
switch(lean_obj_tag(v_x_3579_))
{
case 0:
{
if (lean_obj_tag(v_x_3580_) == 0)
{
lean_object* v_x_3612_; lean_object* v_ty_3613_; lean_object* v_e_3614_; lean_object* v_b_3615_; lean_object* v_x_3616_; lean_object* v_ty_3617_; lean_object* v_e_3618_; lean_object* v_b_3619_; uint8_t v___y_3621_; uint8_t v___x_3624_; 
v_x_3612_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_x_3612_);
v_ty_3613_ = lean_ctor_get(v_x_3579_, 1);
lean_inc(v_ty_3613_);
v_e_3614_ = lean_ctor_get(v_x_3579_, 2);
lean_inc_ref(v_e_3614_);
v_b_3615_ = lean_ctor_get(v_x_3579_, 3);
lean_inc(v_b_3615_);
lean_dec_ref_known(v_x_3579_, 4);
v_x_3616_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_x_3616_);
v_ty_3617_ = lean_ctor_get(v_x_3580_, 1);
lean_inc(v_ty_3617_);
v_e_3618_ = lean_ctor_get(v_x_3580_, 2);
lean_inc_ref(v_e_3618_);
v_b_3619_ = lean_ctor_get(v_x_3580_, 3);
lean_inc(v_b_3619_);
lean_dec_ref_known(v_x_3580_, 4);
v___x_3624_ = l_Lean_IR_instBEqIRType_beq(v_ty_3613_, v_ty_3617_);
lean_dec(v_ty_3617_);
lean_dec(v_ty_3613_);
if (v___x_3624_ == 0)
{
lean_dec_ref(v_e_3618_);
lean_dec_ref(v_e_3614_);
v___y_3621_ = v___x_3624_;
goto v___jp_3620_;
}
else
{
uint8_t v___x_3625_; 
v___x_3625_ = l_Lean_IR_Expr_alphaEqv(v_x_3578_, v_e_3614_, v_e_3618_);
lean_dec_ref(v_e_3618_);
lean_dec_ref(v_e_3614_);
v___y_3621_ = v___x_3625_;
goto v___jp_3620_;
}
v___jp_3620_:
{
if (v___y_3621_ == 0)
{
lean_dec(v_b_3619_);
lean_dec(v_x_3616_);
lean_dec(v_b_3615_);
lean_dec(v_x_3612_);
lean_dec(v_x_3578_);
return v___y_3621_;
}
else
{
lean_object* v___x_3622_; 
v___x_3622_ = l_Lean_IR_addVarRename(v_x_3578_, v_x_3612_, v_x_3616_);
v_x_3578_ = v___x_3622_;
v_x_3579_ = v_b_3615_;
v_x_3580_ = v_b_3619_;
goto _start;
}
}
}
else
{
uint8_t v___x_3626_; 
lean_dec_ref_known(v_x_3579_, 4);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3626_ = 0;
return v___x_3626_;
}
}
case 1:
{
if (lean_obj_tag(v_x_3580_) == 1)
{
lean_object* v_j_3627_; lean_object* v_xs_3628_; lean_object* v_v_3629_; lean_object* v_b_3630_; lean_object* v_j_3631_; lean_object* v_xs_3632_; lean_object* v_v_3633_; lean_object* v_b_3634_; lean_object* v___x_3635_; 
v_j_3627_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_j_3627_);
v_xs_3628_ = lean_ctor_get(v_x_3579_, 1);
lean_inc_ref(v_xs_3628_);
v_v_3629_ = lean_ctor_get(v_x_3579_, 2);
lean_inc(v_v_3629_);
v_b_3630_ = lean_ctor_get(v_x_3579_, 3);
lean_inc(v_b_3630_);
lean_dec_ref_known(v_x_3579_, 4);
v_j_3631_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_j_3631_);
v_xs_3632_ = lean_ctor_get(v_x_3580_, 1);
lean_inc_ref(v_xs_3632_);
v_v_3633_ = lean_ctor_get(v_x_3580_, 2);
lean_inc(v_v_3633_);
v_b_3634_ = lean_ctor_get(v_x_3580_, 3);
lean_inc(v_b_3634_);
lean_dec_ref_known(v_x_3580_, 4);
lean_inc(v_x_3578_);
v___x_3635_ = l_Lean_IR_addParamsRename(v_x_3578_, v_xs_3628_, v_xs_3632_);
lean_dec_ref(v_xs_3632_);
lean_dec_ref(v_xs_3628_);
if (lean_obj_tag(v___x_3635_) == 0)
{
uint8_t v___x_3636_; 
lean_dec(v_b_3634_);
lean_dec(v_v_3633_);
lean_dec(v_j_3631_);
lean_dec(v_b_3630_);
lean_dec(v_v_3629_);
lean_dec(v_j_3627_);
lean_dec(v_x_3578_);
v___x_3636_ = 0;
return v___x_3636_;
}
else
{
lean_object* v_val_3637_; uint8_t v___x_3638_; 
v_val_3637_ = lean_ctor_get(v___x_3635_, 0);
lean_inc(v_val_3637_);
lean_dec_ref_known(v___x_3635_, 1);
v___x_3638_ = l_Lean_IR_FnBody_alphaEqv(v_val_3637_, v_v_3629_, v_v_3633_);
if (v___x_3638_ == 0)
{
lean_dec(v_b_3634_);
lean_dec(v_j_3631_);
lean_dec(v_b_3630_);
lean_dec(v_j_3627_);
lean_dec(v_x_3578_);
return v___x_3638_;
}
else
{
lean_object* v___x_3639_; 
v___x_3639_ = l_Lean_IR_addVarRename(v_x_3578_, v_j_3627_, v_j_3631_);
v_x_3578_ = v___x_3639_;
v_x_3579_ = v_b_3630_;
v_x_3580_ = v_b_3634_;
goto _start;
}
}
}
else
{
uint8_t v___x_3641_; 
lean_dec_ref_known(v_x_3579_, 4);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3641_ = 0;
return v___x_3641_;
}
}
case 2:
{
if (lean_obj_tag(v_x_3580_) == 2)
{
lean_object* v_x_3642_; lean_object* v_i_3643_; lean_object* v_y_3644_; lean_object* v_b_3645_; lean_object* v_x_3646_; lean_object* v_i_3647_; lean_object* v_y_3648_; lean_object* v_b_3649_; uint8_t v___y_3651_; uint8_t v___x_3654_; 
v_x_3642_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_x_3642_);
v_i_3643_ = lean_ctor_get(v_x_3579_, 1);
lean_inc(v_i_3643_);
v_y_3644_ = lean_ctor_get(v_x_3579_, 2);
lean_inc(v_y_3644_);
v_b_3645_ = lean_ctor_get(v_x_3579_, 3);
lean_inc(v_b_3645_);
lean_dec_ref_known(v_x_3579_, 4);
v_x_3646_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_x_3646_);
v_i_3647_ = lean_ctor_get(v_x_3580_, 1);
lean_inc(v_i_3647_);
v_y_3648_ = lean_ctor_get(v_x_3580_, 2);
lean_inc(v_y_3648_);
v_b_3649_ = lean_ctor_get(v_x_3580_, 3);
lean_inc(v_b_3649_);
lean_dec_ref_known(v_x_3580_, 4);
v___x_3654_ = l_Lean_IR_VarId_alphaEqv(v_x_3578_, v_x_3642_, v_x_3646_);
lean_dec(v_x_3646_);
lean_dec(v_x_3642_);
if (v___x_3654_ == 0)
{
lean_dec(v_i_3647_);
lean_dec(v_i_3643_);
v___y_3651_ = v___x_3654_;
goto v___jp_3650_;
}
else
{
uint8_t v___x_3655_; 
v___x_3655_ = lean_nat_dec_eq(v_i_3643_, v_i_3647_);
lean_dec(v_i_3647_);
lean_dec(v_i_3643_);
v___y_3651_ = v___x_3655_;
goto v___jp_3650_;
}
v___jp_3650_:
{
if (v___y_3651_ == 0)
{
lean_dec(v_b_3649_);
lean_dec(v_y_3648_);
lean_dec(v_b_3645_);
lean_dec(v_y_3644_);
lean_dec(v_x_3578_);
return v___y_3651_;
}
else
{
uint8_t v___x_3652_; 
v___x_3652_ = l_Lean_IR_Arg_alphaEqv(v_x_3578_, v_y_3644_, v_y_3648_);
lean_dec(v_y_3648_);
lean_dec(v_y_3644_);
if (v___x_3652_ == 0)
{
lean_dec(v_b_3649_);
lean_dec(v_b_3645_);
lean_dec(v_x_3578_);
return v___x_3652_;
}
else
{
v_x_3579_ = v_b_3645_;
v_x_3580_ = v_b_3649_;
goto _start;
}
}
}
}
else
{
uint8_t v___x_3656_; 
lean_dec_ref_known(v_x_3579_, 4);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3656_ = 0;
return v___x_3656_;
}
}
case 3:
{
if (lean_obj_tag(v_x_3580_) == 3)
{
lean_object* v_x_3657_; lean_object* v_cidx_3658_; lean_object* v_b_3659_; lean_object* v_x_3660_; lean_object* v_cidx_3661_; lean_object* v_b_3662_; uint8_t v___y_3664_; uint8_t v___x_3666_; 
v_x_3657_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_x_3657_);
v_cidx_3658_ = lean_ctor_get(v_x_3579_, 1);
lean_inc(v_cidx_3658_);
v_b_3659_ = lean_ctor_get(v_x_3579_, 2);
lean_inc(v_b_3659_);
lean_dec_ref_known(v_x_3579_, 3);
v_x_3660_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_x_3660_);
v_cidx_3661_ = lean_ctor_get(v_x_3580_, 1);
lean_inc(v_cidx_3661_);
v_b_3662_ = lean_ctor_get(v_x_3580_, 2);
lean_inc(v_b_3662_);
lean_dec_ref_known(v_x_3580_, 3);
v___x_3666_ = l_Lean_IR_VarId_alphaEqv(v_x_3578_, v_x_3657_, v_x_3660_);
lean_dec(v_x_3660_);
lean_dec(v_x_3657_);
if (v___x_3666_ == 0)
{
lean_dec(v_cidx_3661_);
lean_dec(v_cidx_3658_);
v___y_3664_ = v___x_3666_;
goto v___jp_3663_;
}
else
{
uint8_t v___x_3667_; 
v___x_3667_ = lean_nat_dec_eq(v_cidx_3658_, v_cidx_3661_);
lean_dec(v_cidx_3661_);
lean_dec(v_cidx_3658_);
v___y_3664_ = v___x_3667_;
goto v___jp_3663_;
}
v___jp_3663_:
{
if (v___y_3664_ == 0)
{
lean_dec(v_b_3662_);
lean_dec(v_b_3659_);
lean_dec(v_x_3578_);
return v___y_3664_;
}
else
{
v_x_3579_ = v_b_3659_;
v_x_3580_ = v_b_3662_;
goto _start;
}
}
}
else
{
uint8_t v___x_3668_; 
lean_dec_ref_known(v_x_3579_, 3);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3668_ = 0;
return v___x_3668_;
}
}
case 4:
{
if (lean_obj_tag(v_x_3580_) == 4)
{
lean_object* v_x_3669_; lean_object* v_i_3670_; lean_object* v_y_3671_; lean_object* v_b_3672_; lean_object* v_x_3673_; lean_object* v_i_3674_; lean_object* v_y_3675_; lean_object* v_b_3676_; uint8_t v___y_3678_; uint8_t v___x_3681_; 
v_x_3669_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_x_3669_);
v_i_3670_ = lean_ctor_get(v_x_3579_, 1);
lean_inc(v_i_3670_);
v_y_3671_ = lean_ctor_get(v_x_3579_, 2);
lean_inc(v_y_3671_);
v_b_3672_ = lean_ctor_get(v_x_3579_, 3);
lean_inc(v_b_3672_);
lean_dec_ref_known(v_x_3579_, 4);
v_x_3673_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_x_3673_);
v_i_3674_ = lean_ctor_get(v_x_3580_, 1);
lean_inc(v_i_3674_);
v_y_3675_ = lean_ctor_get(v_x_3580_, 2);
lean_inc(v_y_3675_);
v_b_3676_ = lean_ctor_get(v_x_3580_, 3);
lean_inc(v_b_3676_);
lean_dec_ref_known(v_x_3580_, 4);
v___x_3681_ = l_Lean_IR_VarId_alphaEqv(v_x_3578_, v_x_3669_, v_x_3673_);
lean_dec(v_x_3673_);
lean_dec(v_x_3669_);
if (v___x_3681_ == 0)
{
lean_dec(v_i_3674_);
lean_dec(v_i_3670_);
v___y_3678_ = v___x_3681_;
goto v___jp_3677_;
}
else
{
uint8_t v___x_3682_; 
v___x_3682_ = lean_nat_dec_eq(v_i_3670_, v_i_3674_);
lean_dec(v_i_3674_);
lean_dec(v_i_3670_);
v___y_3678_ = v___x_3682_;
goto v___jp_3677_;
}
v___jp_3677_:
{
if (v___y_3678_ == 0)
{
lean_dec(v_b_3676_);
lean_dec(v_y_3675_);
lean_dec(v_b_3672_);
lean_dec(v_y_3671_);
lean_dec(v_x_3578_);
return v___y_3678_;
}
else
{
uint8_t v___x_3679_; 
v___x_3679_ = l_Lean_IR_VarId_alphaEqv(v_x_3578_, v_y_3671_, v_y_3675_);
lean_dec(v_y_3675_);
lean_dec(v_y_3671_);
if (v___x_3679_ == 0)
{
lean_dec(v_b_3676_);
lean_dec(v_b_3672_);
lean_dec(v_x_3578_);
return v___x_3679_;
}
else
{
v_x_3579_ = v_b_3672_;
v_x_3580_ = v_b_3676_;
goto _start;
}
}
}
}
else
{
uint8_t v___x_3683_; 
lean_dec_ref_known(v_x_3579_, 4);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3683_ = 0;
return v___x_3683_;
}
}
case 5:
{
if (lean_obj_tag(v_x_3580_) == 5)
{
lean_object* v_x_3684_; lean_object* v_i_3685_; lean_object* v_offset_3686_; lean_object* v_y_3687_; lean_object* v_ty_3688_; lean_object* v_b_3689_; lean_object* v_x_3690_; lean_object* v_i_3691_; lean_object* v_offset_3692_; lean_object* v_y_3693_; lean_object* v_ty_3694_; lean_object* v_b_3695_; uint8_t v___y_3697_; uint8_t v___x_3702_; 
v_x_3684_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_x_3684_);
v_i_3685_ = lean_ctor_get(v_x_3579_, 1);
lean_inc(v_i_3685_);
v_offset_3686_ = lean_ctor_get(v_x_3579_, 2);
lean_inc(v_offset_3686_);
v_y_3687_ = lean_ctor_get(v_x_3579_, 3);
lean_inc(v_y_3687_);
v_ty_3688_ = lean_ctor_get(v_x_3579_, 4);
lean_inc(v_ty_3688_);
v_b_3689_ = lean_ctor_get(v_x_3579_, 5);
lean_inc(v_b_3689_);
lean_dec_ref_known(v_x_3579_, 6);
v_x_3690_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_x_3690_);
v_i_3691_ = lean_ctor_get(v_x_3580_, 1);
lean_inc(v_i_3691_);
v_offset_3692_ = lean_ctor_get(v_x_3580_, 2);
lean_inc(v_offset_3692_);
v_y_3693_ = lean_ctor_get(v_x_3580_, 3);
lean_inc(v_y_3693_);
v_ty_3694_ = lean_ctor_get(v_x_3580_, 4);
lean_inc(v_ty_3694_);
v_b_3695_ = lean_ctor_get(v_x_3580_, 5);
lean_inc(v_b_3695_);
lean_dec_ref_known(v_x_3580_, 6);
v___x_3702_ = l_Lean_IR_VarId_alphaEqv(v_x_3578_, v_x_3684_, v_x_3690_);
lean_dec(v_x_3690_);
lean_dec(v_x_3684_);
if (v___x_3702_ == 0)
{
lean_dec(v_i_3691_);
lean_dec(v_i_3685_);
v___y_3697_ = v___x_3702_;
goto v___jp_3696_;
}
else
{
uint8_t v___x_3703_; 
v___x_3703_ = lean_nat_dec_eq(v_i_3685_, v_i_3691_);
lean_dec(v_i_3691_);
lean_dec(v_i_3685_);
v___y_3697_ = v___x_3703_;
goto v___jp_3696_;
}
v___jp_3696_:
{
if (v___y_3697_ == 0)
{
lean_dec(v_b_3695_);
lean_dec(v_ty_3694_);
lean_dec(v_y_3693_);
lean_dec(v_offset_3692_);
lean_dec(v_b_3689_);
lean_dec(v_ty_3688_);
lean_dec(v_y_3687_);
lean_dec(v_offset_3686_);
lean_dec(v_x_3578_);
return v___y_3697_;
}
else
{
uint8_t v___x_3698_; 
v___x_3698_ = lean_nat_dec_eq(v_offset_3686_, v_offset_3692_);
lean_dec(v_offset_3692_);
lean_dec(v_offset_3686_);
if (v___x_3698_ == 0)
{
lean_dec(v_b_3695_);
lean_dec(v_ty_3694_);
lean_dec(v_y_3693_);
lean_dec(v_b_3689_);
lean_dec(v_ty_3688_);
lean_dec(v_y_3687_);
lean_dec(v_x_3578_);
return v___x_3698_;
}
else
{
uint8_t v___x_3699_; 
v___x_3699_ = l_Lean_IR_VarId_alphaEqv(v_x_3578_, v_y_3687_, v_y_3693_);
lean_dec(v_y_3693_);
lean_dec(v_y_3687_);
if (v___x_3699_ == 0)
{
lean_dec(v_b_3695_);
lean_dec(v_ty_3694_);
lean_dec(v_b_3689_);
lean_dec(v_ty_3688_);
lean_dec(v_x_3578_);
return v___x_3699_;
}
else
{
uint8_t v___x_3700_; 
v___x_3700_ = l_Lean_IR_instBEqIRType_beq(v_ty_3688_, v_ty_3694_);
lean_dec(v_ty_3694_);
lean_dec(v_ty_3688_);
if (v___x_3700_ == 0)
{
lean_dec(v_b_3695_);
lean_dec(v_b_3689_);
lean_dec(v_x_3578_);
return v___x_3700_;
}
else
{
v_x_3579_ = v_b_3689_;
v_x_3580_ = v_b_3695_;
goto _start;
}
}
}
}
}
}
else
{
uint8_t v___x_3704_; 
lean_dec_ref_known(v_x_3579_, 6);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3704_ = 0;
return v___x_3704_;
}
}
case 6:
{
if (lean_obj_tag(v_x_3580_) == 6)
{
lean_object* v_x_3705_; lean_object* v_n_3706_; uint8_t v_c_3707_; uint8_t v_persistent_3708_; lean_object* v_b_3709_; lean_object* v_x_3710_; lean_object* v_n_3711_; uint8_t v_c_3712_; uint8_t v_persistent_3713_; lean_object* v_b_3714_; 
v_x_3705_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_x_3705_);
v_n_3706_ = lean_ctor_get(v_x_3579_, 1);
lean_inc(v_n_3706_);
v_c_3707_ = lean_ctor_get_uint8(v_x_3579_, sizeof(void*)*3);
v_persistent_3708_ = lean_ctor_get_uint8(v_x_3579_, sizeof(void*)*3 + 1);
v_b_3709_ = lean_ctor_get(v_x_3579_, 2);
lean_inc(v_b_3709_);
lean_dec_ref_known(v_x_3579_, 3);
v_x_3710_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_x_3710_);
v_n_3711_ = lean_ctor_get(v_x_3580_, 1);
lean_inc(v_n_3711_);
v_c_3712_ = lean_ctor_get_uint8(v_x_3580_, sizeof(void*)*3);
v_persistent_3713_ = lean_ctor_get_uint8(v_x_3580_, sizeof(void*)*3 + 1);
v_b_3714_ = lean_ctor_get(v_x_3580_, 2);
lean_inc(v_b_3714_);
lean_dec_ref_known(v_x_3580_, 3);
v_00_u03c1_3599_ = v_x_3578_;
v_x_u2081_3600_ = v_x_3705_;
v_n_u2081_3601_ = v_n_3706_;
v_c_u2081_3602_ = v_c_3707_;
v_p_u2081_3603_ = v_persistent_3708_;
v_b_u2081_3604_ = v_b_3709_;
v_x_u2082_3605_ = v_x_3710_;
v_n_u2082_3606_ = v_n_3711_;
v_c_u2082_3607_ = v_c_3712_;
v_p_u2082_3608_ = v_persistent_3713_;
v_b_u2082_3609_ = v_b_3714_;
goto v___jp_3598_;
}
else
{
uint8_t v___x_3715_; 
lean_dec_ref_known(v_x_3579_, 3);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3715_ = 0;
return v___x_3715_;
}
}
case 7:
{
if (lean_obj_tag(v_x_3580_) == 7)
{
lean_object* v_x_3716_; lean_object* v_n_3717_; uint8_t v_c_3718_; uint8_t v_persistent_3719_; lean_object* v_b_3720_; lean_object* v_x_3721_; lean_object* v_n_3722_; uint8_t v_c_3723_; uint8_t v_persistent_3724_; lean_object* v_b_3725_; 
v_x_3716_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_x_3716_);
v_n_3717_ = lean_ctor_get(v_x_3579_, 1);
lean_inc(v_n_3717_);
v_c_3718_ = lean_ctor_get_uint8(v_x_3579_, sizeof(void*)*3);
v_persistent_3719_ = lean_ctor_get_uint8(v_x_3579_, sizeof(void*)*3 + 1);
v_b_3720_ = lean_ctor_get(v_x_3579_, 2);
lean_inc(v_b_3720_);
lean_dec_ref_known(v_x_3579_, 3);
v_x_3721_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_x_3721_);
v_n_3722_ = lean_ctor_get(v_x_3580_, 1);
lean_inc(v_n_3722_);
v_c_3723_ = lean_ctor_get_uint8(v_x_3580_, sizeof(void*)*3);
v_persistent_3724_ = lean_ctor_get_uint8(v_x_3580_, sizeof(void*)*3 + 1);
v_b_3725_ = lean_ctor_get(v_x_3580_, 2);
lean_inc(v_b_3725_);
lean_dec_ref_known(v_x_3580_, 3);
v_00_u03c1_3599_ = v_x_3578_;
v_x_u2081_3600_ = v_x_3716_;
v_n_u2081_3601_ = v_n_3717_;
v_c_u2081_3602_ = v_c_3718_;
v_p_u2081_3603_ = v_persistent_3719_;
v_b_u2081_3604_ = v_b_3720_;
v_x_u2082_3605_ = v_x_3721_;
v_n_u2082_3606_ = v_n_3722_;
v_c_u2082_3607_ = v_c_3723_;
v_p_u2082_3608_ = v_persistent_3724_;
v_b_u2082_3609_ = v_b_3725_;
goto v___jp_3598_;
}
else
{
uint8_t v___x_3726_; 
lean_dec_ref_known(v_x_3579_, 3);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3726_ = 0;
return v___x_3726_;
}
}
case 8:
{
if (lean_obj_tag(v_x_3580_) == 8)
{
lean_object* v_x_3727_; lean_object* v_b_3728_; lean_object* v_x_3729_; lean_object* v_b_3730_; uint8_t v___x_3731_; 
v_x_3727_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_x_3727_);
v_b_3728_ = lean_ctor_get(v_x_3579_, 1);
lean_inc(v_b_3728_);
lean_dec_ref_known(v_x_3579_, 2);
v_x_3729_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_x_3729_);
v_b_3730_ = lean_ctor_get(v_x_3580_, 1);
lean_inc(v_b_3730_);
lean_dec_ref_known(v_x_3580_, 2);
v___x_3731_ = l_Lean_IR_VarId_alphaEqv(v_x_3578_, v_x_3727_, v_x_3729_);
lean_dec(v_x_3729_);
lean_dec(v_x_3727_);
if (v___x_3731_ == 0)
{
lean_dec(v_b_3730_);
lean_dec(v_b_3728_);
lean_dec(v_x_3578_);
return v___x_3731_;
}
else
{
v_x_3579_ = v_b_3728_;
v_x_3580_ = v_b_3730_;
goto _start;
}
}
else
{
uint8_t v___x_3733_; 
lean_dec_ref_known(v_x_3579_, 2);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3733_ = 0;
return v___x_3733_;
}
}
case 9:
{
if (lean_obj_tag(v_x_3580_) == 9)
{
lean_object* v_tid_3734_; lean_object* v_x_3735_; lean_object* v_cs_3736_; lean_object* v_tid_3737_; lean_object* v_x_3738_; lean_object* v_cs_3739_; uint8_t v___y_3741_; uint8_t v___x_3746_; 
v_tid_3734_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_tid_3734_);
v_x_3735_ = lean_ctor_get(v_x_3579_, 1);
lean_inc(v_x_3735_);
v_cs_3736_ = lean_ctor_get(v_x_3579_, 3);
lean_inc_ref(v_cs_3736_);
lean_dec_ref_known(v_x_3579_, 4);
v_tid_3737_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_tid_3737_);
v_x_3738_ = lean_ctor_get(v_x_3580_, 1);
lean_inc(v_x_3738_);
v_cs_3739_ = lean_ctor_get(v_x_3580_, 3);
lean_inc_ref(v_cs_3739_);
lean_dec_ref_known(v_x_3580_, 4);
v___x_3746_ = lean_name_eq(v_tid_3734_, v_tid_3737_);
lean_dec(v_tid_3737_);
lean_dec(v_tid_3734_);
if (v___x_3746_ == 0)
{
lean_dec(v_x_3738_);
lean_dec(v_x_3735_);
v___y_3741_ = v___x_3746_;
goto v___jp_3740_;
}
else
{
uint8_t v___x_3747_; 
v___x_3747_ = l_Lean_IR_VarId_alphaEqv(v_x_3578_, v_x_3735_, v_x_3738_);
lean_dec(v_x_3738_);
lean_dec(v_x_3735_);
v___y_3741_ = v___x_3747_;
goto v___jp_3740_;
}
v___jp_3740_:
{
if (v___y_3741_ == 0)
{
lean_dec_ref(v_cs_3739_);
lean_dec_ref(v_cs_3736_);
lean_dec(v_x_3578_);
return v___y_3741_;
}
else
{
lean_object* v___x_3742_; lean_object* v___x_3743_; uint8_t v___x_3744_; 
v___x_3742_ = lean_array_get_size(v_cs_3736_);
v___x_3743_ = lean_array_get_size(v_cs_3739_);
v___x_3744_ = lean_nat_dec_eq(v___x_3742_, v___x_3743_);
if (v___x_3744_ == 0)
{
lean_dec_ref(v_cs_3739_);
lean_dec_ref(v_cs_3736_);
lean_dec(v_x_3578_);
return v___x_3744_;
}
else
{
uint8_t v___x_3745_; 
v___x_3745_ = l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0___redArg(v_x_3578_, v_cs_3736_, v_cs_3739_, v___x_3742_);
lean_dec_ref(v_cs_3739_);
lean_dec_ref(v_cs_3736_);
return v___x_3745_;
}
}
}
}
else
{
uint8_t v___x_3748_; 
lean_dec_ref_known(v_x_3579_, 4);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3748_ = 0;
return v___x_3748_;
}
}
case 10:
{
if (lean_obj_tag(v_x_3580_) == 10)
{
lean_object* v_x_3749_; lean_object* v_x_3750_; uint8_t v___x_3751_; 
v_x_3749_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_x_3749_);
lean_dec_ref_known(v_x_3579_, 1);
v_x_3750_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_x_3750_);
lean_dec_ref_known(v_x_3580_, 1);
v___x_3751_ = l_Lean_IR_Arg_alphaEqv(v_x_3578_, v_x_3749_, v_x_3750_);
lean_dec(v_x_3750_);
lean_dec(v_x_3749_);
lean_dec(v_x_3578_);
return v___x_3751_;
}
else
{
uint8_t v___x_3752_; 
lean_dec_ref_known(v_x_3579_, 1);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3752_ = 0;
return v___x_3752_;
}
}
case 11:
{
if (lean_obj_tag(v_x_3580_) == 11)
{
lean_object* v_j_3753_; lean_object* v_ys_3754_; lean_object* v_j_3755_; lean_object* v_ys_3756_; uint8_t v___x_3757_; 
v_j_3753_ = lean_ctor_get(v_x_3579_, 0);
lean_inc(v_j_3753_);
v_ys_3754_ = lean_ctor_get(v_x_3579_, 1);
lean_inc_ref(v_ys_3754_);
lean_dec_ref_known(v_x_3579_, 2);
v_j_3755_ = lean_ctor_get(v_x_3580_, 0);
lean_inc(v_j_3755_);
v_ys_3756_ = lean_ctor_get(v_x_3580_, 1);
lean_inc_ref(v_ys_3756_);
lean_dec_ref_known(v_x_3580_, 2);
v___x_3757_ = lean_nat_dec_eq(v_j_3753_, v_j_3755_);
lean_dec(v_j_3755_);
lean_dec(v_j_3753_);
if (v___x_3757_ == 0)
{
lean_dec_ref(v_ys_3756_);
lean_dec_ref(v_ys_3754_);
lean_dec(v_x_3578_);
return v___x_3757_;
}
else
{
uint8_t v___x_3758_; 
v___x_3758_ = l_Lean_IR_args_alphaEqv(v_x_3578_, v_ys_3754_, v_ys_3756_);
lean_dec_ref(v_ys_3756_);
lean_dec_ref(v_ys_3754_);
lean_dec(v_x_3578_);
return v___x_3758_;
}
}
else
{
uint8_t v___x_3759_; 
lean_dec_ref_known(v_x_3579_, 2);
lean_dec(v_x_3580_);
lean_dec(v_x_3578_);
v___x_3759_ = 0;
return v___x_3759_;
}
}
default: 
{
lean_dec(v_x_3578_);
if (lean_obj_tag(v_x_3580_) == 12)
{
uint8_t v___x_3760_; 
v___x_3760_ = 1;
return v___x_3760_;
}
else
{
uint8_t v___x_3761_; 
lean_dec(v_x_3580_);
v___x_3761_ = 0;
return v___x_3761_;
}
}
}
v___jp_3581_:
{
if (v___y_3583_ == 0)
{
if (v___y_3582_ == 0)
{
v_x_3578_ = v___y_3585_;
v_x_3579_ = v___y_3586_;
v_x_3580_ = v___y_3584_;
goto _start;
}
else
{
lean_dec(v___y_3586_);
lean_dec(v___y_3585_);
lean_dec(v___y_3584_);
return v___y_3583_;
}
}
else
{
if (v___y_3582_ == 0)
{
lean_dec(v___y_3586_);
lean_dec(v___y_3585_);
lean_dec(v___y_3584_);
return v___y_3582_;
}
else
{
v_x_3578_ = v___y_3585_;
v_x_3579_ = v___y_3586_;
v_x_3580_ = v___y_3584_;
goto _start;
}
}
}
v___jp_3589_:
{
if (v___y_3597_ == 0)
{
lean_dec(v___y_3596_);
lean_dec(v___y_3594_);
lean_dec(v___y_3593_);
return v___y_3597_;
}
else
{
if (v___y_3595_ == 0)
{
if (v___y_3590_ == 0)
{
v___y_3582_ = v___y_3591_;
v___y_3583_ = v___y_3592_;
v___y_3584_ = v___y_3593_;
v___y_3585_ = v___y_3594_;
v___y_3586_ = v___y_3596_;
goto v___jp_3581_;
}
else
{
lean_dec(v___y_3596_);
lean_dec(v___y_3594_);
lean_dec(v___y_3593_);
return v___y_3595_;
}
}
else
{
if (v___y_3590_ == 0)
{
lean_dec(v___y_3596_);
lean_dec(v___y_3594_);
lean_dec(v___y_3593_);
return v___y_3590_;
}
else
{
v___y_3582_ = v___y_3591_;
v___y_3583_ = v___y_3592_;
v___y_3584_ = v___y_3593_;
v___y_3585_ = v___y_3594_;
v___y_3586_ = v___y_3596_;
goto v___jp_3581_;
}
}
}
}
v___jp_3598_:
{
uint8_t v___x_3610_; 
v___x_3610_ = l_Lean_IR_VarId_alphaEqv(v_00_u03c1_3599_, v_x_u2081_3600_, v_x_u2082_3605_);
lean_dec(v_x_u2082_3605_);
lean_dec(v_x_u2081_3600_);
if (v___x_3610_ == 0)
{
lean_dec(v_n_u2082_3606_);
lean_dec(v_n_u2081_3601_);
v___y_3590_ = v_c_u2081_3602_;
v___y_3591_ = v_p_u2081_3603_;
v___y_3592_ = v_p_u2082_3608_;
v___y_3593_ = v_b_u2082_3609_;
v___y_3594_ = v_00_u03c1_3599_;
v___y_3595_ = v_c_u2082_3607_;
v___y_3596_ = v_b_u2081_3604_;
v___y_3597_ = v___x_3610_;
goto v___jp_3589_;
}
else
{
uint8_t v___x_3611_; 
v___x_3611_ = lean_nat_dec_eq(v_n_u2081_3601_, v_n_u2082_3606_);
lean_dec(v_n_u2082_3606_);
lean_dec(v_n_u2081_3601_);
v___y_3590_ = v_c_u2081_3602_;
v___y_3591_ = v_p_u2081_3603_;
v___y_3592_ = v_p_u2082_3608_;
v___y_3593_ = v_b_u2082_3609_;
v___y_3594_ = v_00_u03c1_3599_;
v___y_3595_ = v_c_u2082_3607_;
v___y_3596_ = v_b_u2081_3604_;
v___y_3597_ = v___x_3611_;
goto v___jp_3589_;
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0___redArg(lean_object* v_x_3762_, lean_object* v_xs_3763_, lean_object* v_ys_3764_, lean_object* v_x_3765_){
_start:
{
lean_object* v_zero_3766_; uint8_t v_isZero_3767_; 
v_zero_3766_ = lean_unsigned_to_nat(0u);
v_isZero_3767_ = lean_nat_dec_eq(v_x_3765_, v_zero_3766_);
if (v_isZero_3767_ == 1)
{
lean_dec(v_x_3765_);
lean_dec(v_x_3762_);
return v_isZero_3767_;
}
else
{
lean_object* v_one_3768_; lean_object* v_n_3769_; uint8_t v___y_3771_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
v_one_3768_ = lean_unsigned_to_nat(1u);
v_n_3769_ = lean_nat_sub(v_x_3765_, v_one_3768_);
lean_dec(v_x_3765_);
v___x_3773_ = lean_array_fget_borrowed(v_xs_3763_, v_n_3769_);
v___x_3774_ = lean_array_fget_borrowed(v_ys_3764_, v_n_3769_);
if (lean_obj_tag(v___x_3773_) == 0)
{
if (lean_obj_tag(v___x_3774_) == 0)
{
lean_object* v_info_3775_; lean_object* v_b_3776_; lean_object* v_info_3777_; lean_object* v_b_3778_; uint8_t v___x_3779_; 
v_info_3775_ = lean_ctor_get(v___x_3773_, 0);
v_b_3776_ = lean_ctor_get(v___x_3773_, 1);
v_info_3777_ = lean_ctor_get(v___x_3774_, 0);
v_b_3778_ = lean_ctor_get(v___x_3774_, 1);
v___x_3779_ = l_Lean_IR_instBEqCtorInfo_beq(v_info_3775_, v_info_3777_);
if (v___x_3779_ == 0)
{
v___y_3771_ = v___x_3779_;
goto v___jp_3770_;
}
else
{
uint8_t v___x_3780_; 
lean_inc(v_b_3778_);
lean_inc(v_b_3776_);
lean_inc(v_x_3762_);
v___x_3780_ = l_Lean_IR_FnBody_alphaEqv(v_x_3762_, v_b_3776_, v_b_3778_);
v___y_3771_ = v___x_3780_;
goto v___jp_3770_;
}
}
else
{
lean_dec(v_n_3769_);
lean_dec(v_x_3762_);
return v_isZero_3767_;
}
}
else
{
if (lean_obj_tag(v___x_3774_) == 1)
{
lean_object* v_b_3781_; lean_object* v_b_3782_; uint8_t v___x_3783_; 
v_b_3781_ = lean_ctor_get(v___x_3773_, 0);
v_b_3782_ = lean_ctor_get(v___x_3774_, 0);
lean_inc(v_b_3782_);
lean_inc(v_b_3781_);
lean_inc(v_x_3762_);
v___x_3783_ = l_Lean_IR_FnBody_alphaEqv(v_x_3762_, v_b_3781_, v_b_3782_);
v___y_3771_ = v___x_3783_;
goto v___jp_3770_;
}
else
{
lean_dec(v_n_3769_);
lean_dec(v_x_3762_);
return v_isZero_3767_;
}
}
v___jp_3770_:
{
if (v___y_3771_ == 0)
{
lean_dec(v_n_3769_);
lean_dec(v_x_3762_);
return v___y_3771_;
}
else
{
v_x_3765_ = v_n_3769_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0___redArg___boxed(lean_object* v_x_3784_, lean_object* v_xs_3785_, lean_object* v_ys_3786_, lean_object* v_x_3787_){
_start:
{
uint8_t v_res_3788_; lean_object* v_r_3789_; 
v_res_3788_ = l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0___redArg(v_x_3784_, v_xs_3785_, v_ys_3786_, v_x_3787_);
lean_dec_ref(v_ys_3786_);
lean_dec_ref(v_xs_3785_);
v_r_3789_ = lean_box(v_res_3788_);
return v_r_3789_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_alphaEqv___boxed(lean_object* v_x_3790_, lean_object* v_x_3791_, lean_object* v_x_3792_){
_start:
{
uint8_t v_res_3793_; lean_object* v_r_3794_; 
v_res_3793_ = l_Lean_IR_FnBody_alphaEqv(v_x_3790_, v_x_3791_, v_x_3792_);
v_r_3794_ = lean_box(v_res_3793_);
return v_r_3794_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0(lean_object* v_x_3795_, lean_object* v_xs_3796_, lean_object* v_ys_3797_, lean_object* v_hsz_3798_, lean_object* v_x_3799_, lean_object* v_x_3800_){
_start:
{
uint8_t v___x_3801_; 
v___x_3801_ = l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0___redArg(v_x_3795_, v_xs_3796_, v_ys_3797_, v_x_3799_);
return v___x_3801_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0___boxed(lean_object* v_x_3802_, lean_object* v_xs_3803_, lean_object* v_ys_3804_, lean_object* v_hsz_3805_, lean_object* v_x_3806_, lean_object* v_x_3807_){
_start:
{
uint8_t v_res_3808_; lean_object* v_r_3809_; 
v_res_3808_ = l_Array_isEqvAux___at___00Lean_IR_FnBody_alphaEqv_spec__0(v_x_3802_, v_xs_3803_, v_ys_3804_, v_hsz_3805_, v_x_3806_, v_x_3807_);
lean_dec_ref(v_ys_3804_);
lean_dec_ref(v_xs_3803_);
v_r_3809_ = lean_box(v_res_3808_);
return v_r_3809_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_FnBody_beq(lean_object* v_b_u2081_3810_, lean_object* v_b_u2082_3811_){
_start:
{
lean_object* v___x_3812_; uint8_t v___x_3813_; 
v___x_3812_ = lean_box(1);
v___x_3813_ = l_Lean_IR_FnBody_alphaEqv(v___x_3812_, v_b_u2081_3810_, v_b_u2082_3811_);
return v___x_3813_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_beq___boxed(lean_object* v_b_u2081_3814_, lean_object* v_b_u2082_3815_){
_start:
{
uint8_t v_res_3816_; lean_object* v_r_3817_; 
v_res_3816_ = l_Lean_IR_FnBody_beq(v_b_u2081_3814_, v_b_u2082_3815_);
v_r_3817_ = lean_box(v_res_3816_);
return v_r_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_mkIf(lean_object* v_x_3838_, lean_object* v_t_3839_, lean_object* v_e_3840_){
_start:
{
lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; 
v___x_3841_ = ((lean_object*)(l_Lean_IR_mkIf___closed__1));
v___x_3842_ = lean_box(1);
v___x_3843_ = ((lean_object*)(l_Lean_IR_mkIf___closed__4));
v___x_3844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3844_, 0, v___x_3843_);
lean_ctor_set(v___x_3844_, 1, v_e_3840_);
v___x_3845_ = ((lean_object*)(l_Lean_IR_mkIf___closed__7));
v___x_3846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
lean_ctor_set(v___x_3846_, 1, v_t_3839_);
v___x_3847_ = lean_unsigned_to_nat(2u);
v___x_3848_ = lean_mk_empty_array_with_capacity(v___x_3847_);
v___x_3849_ = lean_array_push(v___x_3848_, v___x_3844_);
v___x_3850_ = lean_array_push(v___x_3849_, v___x_3846_);
v___x_3851_ = lean_alloc_ctor(9, 4, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3841_);
lean_ctor_set(v___x_3851_, 1, v_x_3838_);
lean_ctor_set(v___x_3851_, 2, v___x_3842_);
lean_ctor_set(v___x_3851_, 3, v___x_3850_);
return v___x_3851_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getUnboxOpName(lean_object* v_t_3858_){
_start:
{
switch(lean_obj_tag(v_t_3858_))
{
case 5:
{
lean_object* v___x_3859_; 
v___x_3859_ = ((lean_object*)(l_Lean_IR_getUnboxOpName___closed__0));
return v___x_3859_;
}
case 3:
{
lean_object* v___x_3860_; 
v___x_3860_ = ((lean_object*)(l_Lean_IR_getUnboxOpName___closed__1));
return v___x_3860_;
}
case 4:
{
lean_object* v___x_3861_; 
v___x_3861_ = ((lean_object*)(l_Lean_IR_getUnboxOpName___closed__2));
return v___x_3861_;
}
case 0:
{
lean_object* v___x_3862_; 
v___x_3862_ = ((lean_object*)(l_Lean_IR_getUnboxOpName___closed__3));
return v___x_3862_;
}
case 9:
{
lean_object* v___x_3863_; 
v___x_3863_ = ((lean_object*)(l_Lean_IR_getUnboxOpName___closed__4));
return v___x_3863_;
}
default: 
{
lean_object* v___x_3864_; 
v___x_3864_ = ((lean_object*)(l_Lean_IR_getUnboxOpName___closed__5));
return v___x_3864_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getUnboxOpName___boxed(lean_object* v_t_3865_){
_start:
{
lean_object* v_res_3866_; 
v_res_3866_ = l_Lean_IR_getUnboxOpName(v_t_3865_);
lean_dec(v_t_3865_);
return v_res_3866_;
}
}
lean_object* runtime_initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_IR_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_IR_instInhabitedVarId_default = _init_l_Lean_IR_instInhabitedVarId_default();
lean_mark_persistent(l_Lean_IR_instInhabitedVarId_default);
l_Lean_IR_instInhabitedVarId = _init_l_Lean_IR_instInhabitedVarId();
lean_mark_persistent(l_Lean_IR_instInhabitedVarId);
l_Lean_IR_instInhabitedJoinPointId_default = _init_l_Lean_IR_instInhabitedJoinPointId_default();
lean_mark_persistent(l_Lean_IR_instInhabitedJoinPointId_default);
l_Lean_IR_instInhabitedJoinPointId = _init_l_Lean_IR_instInhabitedJoinPointId();
lean_mark_persistent(l_Lean_IR_instInhabitedJoinPointId);
l_Lean_IR_instInhabitedIRType_default = _init_l_Lean_IR_instInhabitedIRType_default();
lean_mark_persistent(l_Lean_IR_instInhabitedIRType_default);
l_Lean_IR_instInhabitedIRType = _init_l_Lean_IR_instInhabitedIRType();
lean_mark_persistent(l_Lean_IR_instInhabitedIRType);
l_Lean_IR_instInhabitedCtorInfo_default = _init_l_Lean_IR_instInhabitedCtorInfo_default();
lean_mark_persistent(l_Lean_IR_instInhabitedCtorInfo_default);
l_Lean_IR_instInhabitedCtorInfo = _init_l_Lean_IR_instInhabitedCtorInfo();
lean_mark_persistent(l_Lean_IR_instInhabitedCtorInfo);
l_Lean_IR_instInhabitedExpr_default = _init_l_Lean_IR_instInhabitedExpr_default();
lean_mark_persistent(l_Lean_IR_instInhabitedExpr_default);
l_Lean_IR_instInhabitedExpr = _init_l_Lean_IR_instInhabitedExpr();
lean_mark_persistent(l_Lean_IR_instInhabitedExpr);
l_Lean_IR_instInhabitedFnBody_default__1 = _init_l_Lean_IR_instInhabitedFnBody_default__1();
lean_mark_persistent(l_Lean_IR_instInhabitedFnBody_default__1);
l_Lean_IR_instInhabitedFnBody = _init_l_Lean_IR_instInhabitedFnBody();
lean_mark_persistent(l_Lean_IR_instInhabitedFnBody);
l_Lean_IR_instInhabitedAlt_default__1 = _init_l_Lean_IR_instInhabitedAlt_default__1();
lean_mark_persistent(l_Lean_IR_instInhabitedAlt_default__1);
l_Lean_IR_instInhabitedAlt = _init_l_Lean_IR_instInhabitedAlt();
lean_mark_persistent(l_Lean_IR_instInhabitedAlt);
l_Lean_IR_FnBody_nil = _init_l_Lean_IR_FnBody_nil();
lean_mark_persistent(l_Lean_IR_FnBody_nil);
l_Lean_IR_instInhabitedDecl_default = _init_l_Lean_IR_instInhabitedDecl_default();
lean_mark_persistent(l_Lean_IR_instInhabitedDecl_default);
l_Lean_IR_instInhabitedDecl = _init_l_Lean_IR_instInhabitedDecl();
lean_mark_persistent(l_Lean_IR_instInhabitedDecl);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_IR_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_IR_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_IR_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Expr
// Imports: public import Init.Data.Hashable public import Lean.Level import Init.Omega
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
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint8_t l_Lean_Level_hasMVar(lean_object*);
uint8_t l_Lean_Level_hasParam(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_land(uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t lean_uint64_to_uint8(uint64_t);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint64_to_uint32(uint64_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint64_t lean_uint32_to_uint64(uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_string_hash(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KVMap_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Lean_instReprLevel_repr(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_String_quote(lean_object*);
lean_object* l_Lean_instReprKVMap_repr___redArg(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_KVMap_size(lean_object*);
uint8_t l_Lean_KVMap_getBool(lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___redArg(lean_object*, lean_object*);
lean_object* l_Lean_KVMap_find(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_TreeSet_ofList___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLevel;
lean_object* l_Std_TreeSet_ofArray___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_empty;
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_ptrEqList___redArg(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Lean_Name_reprPrec___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_decEq___boxed(lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_natVal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_natVal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_strVal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_strVal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_instInhabitedLiteral_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_instInhabitedLiteral_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedLiteral_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedLiteral_default = (const lean_object*)&l_Lean_instInhabitedLiteral_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedLiteral = (const lean_object*)&l_Lean_instInhabitedLiteral_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_instBEqLiteral_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqLiteral_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqLiteral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqLiteral_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqLiteral___closed__0 = (const lean_object*)&l_Lean_instBEqLiteral___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqLiteral = (const lean_object*)&l_Lean_instBEqLiteral___closed__0_value;
static const lean_string_object l_Lean_instReprLiteral_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Literal.natVal"};
static const lean_object* l_Lean_instReprLiteral_repr___closed__0 = (const lean_object*)&l_Lean_instReprLiteral_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprLiteral_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLiteral_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprLiteral_repr___closed__1 = (const lean_object*)&l_Lean_instReprLiteral_repr___closed__1_value;
static const lean_ctor_object l_Lean_instReprLiteral_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLiteral_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLiteral_repr___closed__2 = (const lean_object*)&l_Lean_instReprLiteral_repr___closed__2_value;
static lean_once_cell_t l_Lean_instReprLiteral_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLiteral_repr___closed__3;
static lean_once_cell_t l_Lean_instReprLiteral_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLiteral_repr___closed__4;
static const lean_string_object l_Lean_instReprLiteral_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Literal.strVal"};
static const lean_object* l_Lean_instReprLiteral_repr___closed__5 = (const lean_object*)&l_Lean_instReprLiteral_repr___closed__5_value;
static const lean_ctor_object l_Lean_instReprLiteral_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLiteral_repr___closed__5_value)}};
static const lean_object* l_Lean_instReprLiteral_repr___closed__6 = (const lean_object*)&l_Lean_instReprLiteral_repr___closed__6_value;
static const lean_ctor_object l_Lean_instReprLiteral_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLiteral_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLiteral_repr___closed__7 = (const lean_object*)&l_Lean_instReprLiteral_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_instReprLiteral_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLiteral_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLiteral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLiteral_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLiteral___closed__0 = (const lean_object*)&l_Lean_instReprLiteral___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLiteral = (const lean_object*)&l_Lean_instReprLiteral___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Literal_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableLiteral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Literal_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableLiteral___closed__0 = (const lean_object*)&l_Lean_instHashableLiteral___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableLiteral = (const lean_object*)&l_Lean_instHashableLiteral___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Literal_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instLTLiteral;
LEAN_EXPORT uint8_t l_Lean_instDecidableLtLiteral(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instDecidableLtLiteral___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_default_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_default_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_default_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_implicit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_implicit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_implicit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_implicit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_strictImplicit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_strictImplicit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_strictImplicit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_strictImplicit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_instImplicit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_instImplicit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_instImplicit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_instImplicit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedBinderInfo_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedBinderInfo;
LEAN_EXPORT uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqBinderInfo_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqBinderInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqBinderInfo_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqBinderInfo___closed__0 = (const lean_object*)&l_Lean_instBEqBinderInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqBinderInfo = (const lean_object*)&l_Lean_instBEqBinderInfo___closed__0_value;
static const lean_string_object l_Lean_instReprBinderInfo_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.BinderInfo.default"};
static const lean_object* l_Lean_instReprBinderInfo_repr___closed__0 = (const lean_object*)&l_Lean_instReprBinderInfo_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprBinderInfo_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprBinderInfo_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprBinderInfo_repr___closed__1 = (const lean_object*)&l_Lean_instReprBinderInfo_repr___closed__1_value;
static const lean_string_object l_Lean_instReprBinderInfo_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.BinderInfo.implicit"};
static const lean_object* l_Lean_instReprBinderInfo_repr___closed__2 = (const lean_object*)&l_Lean_instReprBinderInfo_repr___closed__2_value;
static const lean_ctor_object l_Lean_instReprBinderInfo_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprBinderInfo_repr___closed__2_value)}};
static const lean_object* l_Lean_instReprBinderInfo_repr___closed__3 = (const lean_object*)&l_Lean_instReprBinderInfo_repr___closed__3_value;
static const lean_string_object l_Lean_instReprBinderInfo_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.BinderInfo.strictImplicit"};
static const lean_object* l_Lean_instReprBinderInfo_repr___closed__4 = (const lean_object*)&l_Lean_instReprBinderInfo_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprBinderInfo_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprBinderInfo_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprBinderInfo_repr___closed__5 = (const lean_object*)&l_Lean_instReprBinderInfo_repr___closed__5_value;
static const lean_string_object l_Lean_instReprBinderInfo_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.BinderInfo.instImplicit"};
static const lean_object* l_Lean_instReprBinderInfo_repr___closed__6 = (const lean_object*)&l_Lean_instReprBinderInfo_repr___closed__6_value;
static const lean_ctor_object l_Lean_instReprBinderInfo_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprBinderInfo_repr___closed__6_value)}};
static const lean_object* l_Lean_instReprBinderInfo_repr___closed__7 = (const lean_object*)&l_Lean_instReprBinderInfo_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_instReprBinderInfo_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprBinderInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprBinderInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprBinderInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprBinderInfo___closed__0 = (const lean_object*)&l_Lean_instReprBinderInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprBinderInfo = (const lean_object*)&l_Lean_instReprBinderInfo___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_BinderInfo_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_hash___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_isExplicit___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableBinderInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_BinderInfo_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableBinderInfo___closed__0 = (const lean_object*)&l_Lean_instHashableBinderInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableBinderInfo = (const lean_object*)&l_Lean_instHashableBinderInfo___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_isInstImplicit___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_BinderInfo_isImplicit(uint8_t);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_isImplicit___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_BinderInfo_isStrictImplicit(uint8_t);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_isStrictImplicit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MData_empty;
LEAN_EXPORT uint64_t l_Lean_instInhabitedData__1___aux__1;
LEAN_EXPORT uint64_t l_Lean_instInhabitedData__1;
LEAN_EXPORT uint64_t l_Lean_Expr_Data_hash(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Expr_Data_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instBEqData__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_UInt64_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqData__1___closed__0 = (const lean_object*)&l_Lean_instBEqData__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqData__1 = (const lean_object*)&l_Lean_instBEqData__1___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Expr_Data_approxDepth(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Expr_Data_approxDepth___boxed(lean_object*);
LEAN_EXPORT uint32_t l_Lean_Expr_Data_looseBVarRange(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Expr_Data_looseBVarRange___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_Data_hasFVar(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Expr_Data_hasFVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_Data_hasExprMVar(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Expr_Data_hasExprMVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_Data_hasLevelMVar(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Expr_Data_hasLevelMVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_Data_hasLevelParam(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Expr_Data_hasLevelParam___boxed(lean_object*);
uint64_t lean_uint8_to_uint64(uint8_t);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_toUInt64___boxed(lean_object*);
uint64_t lean_expr_mk_data(uint64_t, lean_object*, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_mkData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_expr_mk_app_data(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Expr_mkAppData___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Expr_mkDataForBinder(uint64_t, lean_object*, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_mkDataForBinder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Expr_mkDataForLet(uint64_t, lean_object*, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_mkDataForLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprData__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_instReprData__1___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprData__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_instReprData__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " (hasLevelMVar := "};
static const lean_object* l_Lean_instReprData__1___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprData__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_instReprData__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_instReprData__1___lam__0___closed__2 = (const lean_object*)&l_Lean_instReprData__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_instReprData__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_instReprData__1___lam__0___closed__3 = (const lean_object*)&l_Lean_instReprData__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_instReprData__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " (hasExprMVar := "};
static const lean_object* l_Lean_instReprData__1___lam__0___closed__4 = (const lean_object*)&l_Lean_instReprData__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_instReprData__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " (hasFVar := "};
static const lean_object* l_Lean_instReprData__1___lam__0___closed__5 = (const lean_object*)&l_Lean_instReprData__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_instReprData__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " (approxDepth := "};
static const lean_object* l_Lean_instReprData__1___lam__0___closed__6 = (const lean_object*)&l_Lean_instReprData__1___lam__0___closed__6_value;
static const lean_string_object l_Lean_instReprData__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Expr.mkData "};
static const lean_object* l_Lean_instReprData__1___lam__0___closed__7 = (const lean_object*)&l_Lean_instReprData__1___lam__0___closed__7_value;
static const lean_string_object l_Lean_instReprData__1___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = " (looseBVarRange := "};
static const lean_object* l_Lean_instReprData__1___lam__0___closed__8 = (const lean_object*)&l_Lean_instReprData__1___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_instReprData__1___lam__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprData__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprData__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprData__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprData__1___closed__0 = (const lean_object*)&l_Lean_instReprData__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprData__1 = (const lean_object*)&l_Lean_instReprData__1___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedFVarId_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedFVarId_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarId_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarId;
LEAN_EXPORT uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqFVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqFVarId___closed__0 = (const lean_object*)&l_Lean_instBEqFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqFVarId = (const lean_object*)&l_Lean_instBEqFVarId___closed__0_value;
static lean_once_cell_t l_Lean_instHashableFVarId_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_instHashableFVarId_hash___closed__0;
LEAN_EXPORT uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableFVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableFVarId___closed__0 = (const lean_object*)&l_Lean_instHashableFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableFVarId = (const lean_object*)&l_Lean_instHashableFVarId___closed__0_value;
static const lean_closure_object l_Lean_instReprFVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_reprPrec___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprFVarId___closed__0 = (const lean_object*)&l_Lean_instReprFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprFVarId = (const lean_object*)&l_Lean_instReprFVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarIdSet___aux__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarIdSet;
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdSet___aux__1;
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdSet;
static const lean_closure_object l_Lean_instSingletonFVarIdFVarIdSet___aux__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instSingletonFVarIdFVarIdSet___aux__1___closed__0 = (const lean_object*)&l_Lean_instSingletonFVarIdFVarIdSet___aux__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instSingletonFVarIdFVarIdSet___aux__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instSingletonFVarIdFVarIdSet___lam__0(lean_object*);
static const lean_closure_object l_Lean_instSingletonFVarIdFVarIdSet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instSingletonFVarIdFVarIdSet___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instSingletonFVarIdFVarIdSet___closed__0 = (const lean_object*)&l_Lean_instSingletonFVarIdFVarIdSet___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instSingletonFVarIdFVarIdSet = (const lean_object*)&l_Lean_instSingletonFVarIdFVarIdSet___closed__0_value;
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_FVarIdSet_union_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_union(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_FVarIdSet_union_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_ofList___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_ofArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_ofArray___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__0;
static lean_once_cell_t l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarIdHashSet___aux__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarIdHashSet;
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdHashSet___aux__1;
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
LEAN_EXPORT lean_object* l_Lean_FVarIdMap_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_FVarIdMap_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap___aux__1___redArg();
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap___aux__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap___redArg();
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarIdMap___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarIdMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarIdMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMVarId_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMVarId;
LEAN_EXPORT uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqMVarId_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqMVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqMVarId___closed__0 = (const lean_object*)&l_Lean_instBEqMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqMVarId = (const lean_object*)&l_Lean_instBEqMVarId___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instHashableMVarId_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableMVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableMVarId___closed__0 = (const lean_object*)&l_Lean_instHashableMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableMVarId = (const lean_object*)&l_Lean_instHashableMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprMVarId = (const lean_object*)&l_Lean_instReprFVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMVarIdSet___aux__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMVarIdSet;
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdSet___aux__1;
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdSet;
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarIdSet_insert(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarIdSet_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarIdSet_ofList___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarIdSet_ofArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarIdSet_ofArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdSetMVarIdOfMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdSetMVarIdOfMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdSetMVarIdOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdSetMVarIdOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarIdMap_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarIdMap_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap___aux__1___redArg();
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap___aux__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap___redArg();
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdMapProdMVarIdOfMonad___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdMapProdMVarIdOfMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdMapProdMVarIdOfMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdMapProdMVarIdOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdMapProdMVarIdOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMVarIdMap___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedMVarIdMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMVarIdMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_bvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_bvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_fvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_fvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_mvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_mvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_sort_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_sort_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_const_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_const_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_app_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_app_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_lam_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_lam_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallE_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallE_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_letE_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_letE_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_lit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_lit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_mdata_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_mdata_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_proj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_proj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_expr_data(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_data___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_casesOn___override___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_casesOn___override___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_casesOn___override(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_casesOn___override___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_bvar___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_fvar___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_mvar___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_sort___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_lam___override___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_forallE___override___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_letE___override___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_lit___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Expr_const___override_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Expr_const___override_spec__5___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Expr_const___override_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Expr_const___override_spec__6___boxed(lean_object*);
LEAN_EXPORT uint64_t l_List_foldl___at___00Lean_Expr_const___override_spec__4(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Expr_const___override_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__3 = (const lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__4 = (const lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__5_value;
static const lean_string_object l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__6 = (const lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__7;
static lean_once_cell_t l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__8;
static const lean_ctor_object l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__9 = (const lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__9_value;
static const lean_ctor_object l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__10 = (const lean_object*)&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_instReprExpr_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Expr.bvar"};
static const lean_object* l_Lean_instReprExpr_repr___closed__0 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__1 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__1_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__2 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__2_value;
static const lean_string_object l_Lean_instReprExpr_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Expr.fvar"};
static const lean_object* l_Lean_instReprExpr_repr___closed__3 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__3_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__3_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__4 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__5 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__5_value;
static const lean_string_object l_Lean_instReprExpr_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Expr.mvar"};
static const lean_object* l_Lean_instReprExpr_repr___closed__6 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__6_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__6_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__7 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__7_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__8 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__8_value;
static const lean_string_object l_Lean_instReprExpr_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Expr.sort"};
static const lean_object* l_Lean_instReprExpr_repr___closed__9 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__9_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__9_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__10 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__10_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__11 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__11_value;
static const lean_string_object l_Lean_instReprExpr_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Expr.const"};
static const lean_object* l_Lean_instReprExpr_repr___closed__12 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__12_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__12_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__13 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__13_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__13_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__14 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__14_value;
static const lean_string_object l_Lean_instReprExpr_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.Expr.app"};
static const lean_object* l_Lean_instReprExpr_repr___closed__15 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__15_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__15_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__16 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__16_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__16_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__17 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__17_value;
static const lean_string_object l_Lean_instReprExpr_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.Expr.lam"};
static const lean_object* l_Lean_instReprExpr_repr___closed__18 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__18_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__18_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__19 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__19_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__19_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__20 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__20_value;
static const lean_string_object l_Lean_instReprExpr_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Expr.forallE"};
static const lean_object* l_Lean_instReprExpr_repr___closed__21 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__21_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__21_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__22 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__22_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__22_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__23 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__23_value;
static const lean_string_object l_Lean_instReprExpr_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Expr.letE"};
static const lean_object* l_Lean_instReprExpr_repr___closed__24 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__24_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__24_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__25 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__25_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__25_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__26 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__26_value;
static const lean_string_object l_Lean_instReprExpr_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.Expr.lit"};
static const lean_object* l_Lean_instReprExpr_repr___closed__27 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__27_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__27_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__28 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__28_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__28_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__29 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__29_value;
static const lean_string_object l_Lean_instReprExpr_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Expr.mdata"};
static const lean_object* l_Lean_instReprExpr_repr___closed__30 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__30_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__30_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__31 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__31_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__31_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__32 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__32_value;
static const lean_string_object l_Lean_instReprExpr_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Expr.proj"};
static const lean_object* l_Lean_instReprExpr_repr___closed__33 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__33_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__33_value)}};
static const lean_object* l_Lean_instReprExpr_repr___closed__34 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__34_value;
static const lean_ctor_object l_Lean_instReprExpr_repr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExpr_repr___closed__34_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprExpr_repr___closed__35 = (const lean_object*)&l_Lean_instReprExpr_repr___closed__35_value;
LEAN_EXPORT lean_object* l_Lean_instReprExpr_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprExpr_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprExpr_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprExpr___closed__0 = (const lean_object*)&l_Lean_instReprExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprExpr = (const lean_object*)&l_Lean_instReprExpr___closed__0_value;
static const lean_string_object l_Lean_instInhabitedExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_instInhabitedExpr___closed__0 = (const lean_object*)&l_Lean_instInhabitedExpr___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_instInhabitedExpr___closed__1 = (const lean_object*)&l_Lean_instInhabitedExpr___closed__1_value;
static lean_once_cell_t l_Lean_instInhabitedExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedExpr___closed__2;
LEAN_EXPORT lean_object* l_Lean_instInhabitedExpr;
static const lean_string_object l_Lean_Expr_ctorName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bvar"};
static const lean_object* l_Lean_Expr_ctorName___closed__0 = (const lean_object*)&l_Lean_Expr_ctorName___closed__0_value;
static const lean_string_object l_Lean_Expr_ctorName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fvar"};
static const lean_object* l_Lean_Expr_ctorName___closed__1 = (const lean_object*)&l_Lean_Expr_ctorName___closed__1_value;
static const lean_string_object l_Lean_Expr_ctorName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mvar"};
static const lean_object* l_Lean_Expr_ctorName___closed__2 = (const lean_object*)&l_Lean_Expr_ctorName___closed__2_value;
static const lean_string_object l_Lean_Expr_ctorName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l_Lean_Expr_ctorName___closed__3 = (const lean_object*)&l_Lean_Expr_ctorName___closed__3_value;
static const lean_string_object l_Lean_Expr_ctorName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l_Lean_Expr_ctorName___closed__4 = (const lean_object*)&l_Lean_Expr_ctorName___closed__4_value;
static const lean_string_object l_Lean_Expr_ctorName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Expr_ctorName___closed__5 = (const lean_object*)&l_Lean_Expr_ctorName___closed__5_value;
static const lean_string_object l_Lean_Expr_ctorName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lam"};
static const lean_object* l_Lean_Expr_ctorName___closed__6 = (const lean_object*)&l_Lean_Expr_ctorName___closed__6_value;
static const lean_string_object l_Lean_Expr_ctorName___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "forallE"};
static const lean_object* l_Lean_Expr_ctorName___closed__7 = (const lean_object*)&l_Lean_Expr_ctorName___closed__7_value;
static const lean_string_object l_Lean_Expr_ctorName___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "letE"};
static const lean_object* l_Lean_Expr_ctorName___closed__8 = (const lean_object*)&l_Lean_Expr_ctorName___closed__8_value;
static const lean_string_object l_Lean_Expr_ctorName___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lit"};
static const lean_object* l_Lean_Expr_ctorName___closed__9 = (const lean_object*)&l_Lean_Expr_ctorName___closed__9_value;
static const lean_string_object l_Lean_Expr_ctorName___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mdata"};
static const lean_object* l_Lean_Expr_ctorName___closed__10 = (const lean_object*)&l_Lean_Expr_ctorName___closed__10_value;
static const lean_string_object l_Lean_Expr_ctorName___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Lean_Expr_ctorName___closed__11 = (const lean_object*)&l_Lean_Expr_ctorName___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Expr_ctorName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ctorName___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lean_Expr_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Expr_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Expr_instHashable___closed__0 = (const lean_object*)&l_Lean_Expr_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Expr_instHashable = (const lean_object*)&l_Lean_Expr_instHashable___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Expr_hasFVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasFVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasExprMVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasLevelMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasLevelMVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasMVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasLevelParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasLevelParam___boxed(lean_object*);
LEAN_EXPORT uint32_t l_Lean_Expr_approxDepth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_approxDepth___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_looseBVarRange___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_binderInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_binderInfo___boxed(lean_object*);
LEAN_EXPORT uint64_t lean_expr_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hashEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_expr_has_fvar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasFVarEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_expr_has_expr_mvar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasExprMVarEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_expr_has_level_mvar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasLevelMVarEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_expr_has_level_param(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasLevelParamEx___boxed(lean_object*);
LEAN_EXPORT uint32_t lean_expr_loose_bvar_range(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_looseBVarRangeEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_expr_binder_info(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_binderInfoEx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConst(lean_object*, lean_object*);
static const lean_string_object l_Lean_Literal_type___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Literal_type___closed__0 = (const lean_object*)&l_Lean_Literal_type___closed__0_value;
static const lean_ctor_object l_Lean_Literal_type___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Literal_type___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Literal_type___closed__1 = (const lean_object*)&l_Lean_Literal_type___closed__1_value;
static lean_once_cell_t l_Lean_Literal_type___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Literal_type___closed__2;
static const lean_string_object l_Lean_Literal_type___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_Literal_type___closed__3 = (const lean_object*)&l_Lean_Literal_type___closed__3_value;
static const lean_ctor_object l_Lean_Literal_type___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Literal_type___closed__3_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l_Lean_Literal_type___closed__4 = (const lean_object*)&l_Lean_Literal_type___closed__4_value;
static lean_once_cell_t l_Lean_Literal_type___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Literal_type___closed__5;
LEAN_EXPORT lean_object* l_Lean_Literal_type(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_type___boxed(lean_object*);
LEAN_EXPORT lean_object* lean_lit_type(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkSort(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMData(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkApp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkSimpleThunkType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_mkSimpleThunkType___closed__0 = (const lean_object*)&l_Lean_mkSimpleThunkType___closed__0_value;
static const lean_ctor_object l_Lean_mkSimpleThunkType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkSimpleThunkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l_Lean_mkSimpleThunkType___closed__1 = (const lean_object*)&l_Lean_mkSimpleThunkType___closed__1_value;
static const lean_string_object l_Lean_mkSimpleThunkType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_mkSimpleThunkType___closed__2 = (const lean_object*)&l_Lean_mkSimpleThunkType___closed__2_value;
static const lean_ctor_object l_Lean_mkSimpleThunkType___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkSimpleThunkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_mkSimpleThunkType___closed__3 = (const lean_object*)&l_Lean_mkSimpleThunkType___closed__3_value;
static lean_once_cell_t l_Lean_mkSimpleThunkType___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkSimpleThunkType___closed__4;
LEAN_EXPORT lean_object* l_Lean_mkSimpleThunkType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkSimpleThunk(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkHave(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkApp2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkApp9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkApp10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkRawNatLit(lean_object*);
static const lean_string_object l_Lean_mkInstOfNatNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instOfNatNat"};
static const lean_object* l_Lean_mkInstOfNatNat___closed__0 = (const lean_object*)&l_Lean_mkInstOfNatNat___closed__0_value;
static const lean_ctor_object l_Lean_mkInstOfNatNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkInstOfNatNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 8, 172, 44, 179, 254, 147, 95)}};
static const lean_object* l_Lean_mkInstOfNatNat___closed__1 = (const lean_object*)&l_Lean_mkInstOfNatNat___closed__1_value;
static lean_once_cell_t l_Lean_mkInstOfNatNat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkInstOfNatNat___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkInstOfNatNat(lean_object*);
static const lean_string_object l_Lean_mkNatLitCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_mkNatLitCore___closed__0 = (const lean_object*)&l_Lean_mkNatLitCore___closed__0_value;
static const lean_string_object l_Lean_mkNatLitCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_mkNatLitCore___closed__1 = (const lean_object*)&l_Lean_mkNatLitCore___closed__1_value;
static const lean_ctor_object l_Lean_mkNatLitCore___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkNatLitCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_mkNatLitCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkNatLitCore___closed__2_value_aux_0),((lean_object*)&l_Lean_mkNatLitCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_mkNatLitCore___closed__2 = (const lean_object*)&l_Lean_mkNatLitCore___closed__2_value;
static lean_once_cell_t l_Lean_mkNatLitCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkNatLitCore___closed__3;
static lean_once_cell_t l_Lean_mkNatLitCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkNatLitCore___closed__4;
static lean_once_cell_t l_Lean_mkNatLitCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkNatLitCore___closed__5;
LEAN_EXPORT lean_object* l_Lean_mkNatLitCore(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkNatLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStrLit(lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_bvar(lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_fvar(lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_mvar(lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_sort(lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_const(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_app(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_lambda(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkLambdaEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_forall(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkForallEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_let(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkLetEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_lit(lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_mdata(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_expr_mk_proj(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkAppN_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkAppN_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAppN___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_mkAppRangeAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_mkAppRangeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAppRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAppRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_mkAppRev_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_mkAppRev_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAppRev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAppRev___boxed(lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_dbgToString___boxed(lean_object*);
uint8_t lean_expr_quick_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_quickLt___boxed(lean_object*, lean_object*);
uint8_t lean_expr_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_quickComp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_quickComp___boxed(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_eqv___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Expr_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_eqv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Expr_instBEq___closed__0 = (const lean_object*)&l_Lean_Expr_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Expr_instBEq = (const lean_object*)&l_Lean_Expr_instBEq___closed__0_value;
uint8_t lean_expr_equal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_equal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isSort(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isSort___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isType___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isType0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isType0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isProp(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isProp___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isBVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isBVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isMVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isFVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isFVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isApp(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isApp___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isProj(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isProj___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isConst(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isConst___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isConstOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isFVarOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isFVarOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isForall(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isForall___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isLambda(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isLambda___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isBinding(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isBinding___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isLet(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isLet___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isHave(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isHave___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_expr_is_have(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isHaveEx___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isMData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isMData___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isLit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_appFn_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Expr_appFn_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l_Lean_Expr_appFn_x21___closed__0 = (const lean_object*)&l_Lean_Expr_appFn_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_appFn_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Expr.appFn!"};
static const lean_object* l_Lean_Expr_appFn_x21___closed__1 = (const lean_object*)&l_Lean_Expr_appFn_x21___closed__1_value;
static const lean_string_object l_Lean_Expr_appFn_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "application expected"};
static const lean_object* l_Lean_Expr_appFn_x21___closed__2 = (const lean_object*)&l_Lean_Expr_appFn_x21___closed__2_value;
static lean_once_cell_t l_Lean_Expr_appFn_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_appFn_x21___closed__3;
LEAN_EXPORT lean_object* l_Lean_Expr_appFn_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appFn_x21___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_appArg_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Expr.appArg!"};
static const lean_object* l_Lean_Expr_appArg_x21___closed__0 = (const lean_object*)&l_Lean_Expr_appArg_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_appArg_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_appArg_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_appArg_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appArg_x21___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_appFn_x21_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Expr.appFn!'"};
static const lean_object* l_Lean_Expr_appFn_x21_x27___closed__0 = (const lean_object*)&l_Lean_Expr_appFn_x21_x27___closed__0_value;
static lean_once_cell_t l_Lean_Expr_appFn_x21_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_appFn_x21_x27___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_appFn_x21_x27(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appFn_x21_x27___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_appArg_x21_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Expr.appArg!'"};
static const lean_object* l_Lean_Expr_appArg_x21_x27___closed__0 = (const lean_object*)&l_Lean_Expr_appArg_x21_x27___closed__0_value;
static lean_once_cell_t l_Lean_Expr_appArg_x21_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_appArg_x21_x27___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_appArg_x21_x27(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appArg_x21_x27___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appArg___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appArg___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appFn___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appFn___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_sortLevel_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Expr_sortLevel_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Expr.sortLevel!"};
static const lean_object* l_Lean_Expr_sortLevel_x21___closed__0 = (const lean_object*)&l_Lean_Expr_sortLevel_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_sortLevel_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "sort expected"};
static const lean_object* l_Lean_Expr_sortLevel_x21___closed__1 = (const lean_object*)&l_Lean_Expr_sortLevel_x21___closed__1_value;
static lean_once_cell_t l_Lean_Expr_sortLevel_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_sortLevel_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_sortLevel_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_sortLevel_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_litValue_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Expr_litValue_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Expr.litValue!"};
static const lean_object* l_Lean_Expr_litValue_x21___closed__0 = (const lean_object*)&l_Lean_Expr_litValue_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_litValue_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "literal expected"};
static const lean_object* l_Lean_Expr_litValue_x21___closed__1 = (const lean_object*)&l_Lean_Expr_litValue_x21___closed__1_value;
static lean_once_cell_t l_Lean_Expr_litValue_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_litValue_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_litValue_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_litValue_x21___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isRawNatLit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_rawNatLit_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isStringLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isStringLit___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_isCharLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l_Lean_Expr_isCharLit___closed__0 = (const lean_object*)&l_Lean_Expr_isCharLit___closed__0_value;
static const lean_ctor_object l_Lean_Expr_isCharLit___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_isCharLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l_Lean_Expr_isCharLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_isCharLit___closed__1_value_aux_0),((lean_object*)&l_Lean_mkNatLitCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 51, 10, 169, 25, 67, 44, 251)}};
static const lean_object* l_Lean_Expr_isCharLit___closed__1 = (const lean_object*)&l_Lean_Expr_isCharLit___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Expr_isCharLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isCharLit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_constName_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Expr_constName_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Expr.constName!"};
static const lean_object* l_Lean_Expr_constName_x21___closed__0 = (const lean_object*)&l_Lean_Expr_constName_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_constName_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "constant expected"};
static const lean_object* l_Lean_Expr_constName_x21___closed__1 = (const lean_object*)&l_Lean_Expr_constName_x21___closed__1_value;
static lean_once_cell_t l_Lean_Expr_constName_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_constName_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_constName_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_constName_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_constName_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_constName_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_constName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_constName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_constLevels_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Expr_constLevels_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Expr.constLevels!"};
static const lean_object* l_Lean_Expr_constLevels_x21___closed__0 = (const lean_object*)&l_Lean_Expr_constLevels_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_constLevels_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_constLevels_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_constLevels_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_bvarIdx_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Expr_bvarIdx_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Expr.bvarIdx!"};
static const lean_object* l_Lean_Expr_bvarIdx_x21___closed__0 = (const lean_object*)&l_Lean_Expr_bvarIdx_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_bvarIdx_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "bvar expected"};
static const lean_object* l_Lean_Expr_bvarIdx_x21___closed__1 = (const lean_object*)&l_Lean_Expr_bvarIdx_x21___closed__1_value;
static lean_once_cell_t l_Lean_Expr_bvarIdx_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_bvarIdx_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_bvarIdx_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_bvarIdx_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_fvarId_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Expr_fvarId_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Expr.fvarId!"};
static const lean_object* l_Lean_Expr_fvarId_x21___closed__0 = (const lean_object*)&l_Lean_Expr_fvarId_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_fvarId_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "fvar expected"};
static const lean_object* l_Lean_Expr_fvarId_x21___closed__1 = (const lean_object*)&l_Lean_Expr_fvarId_x21___closed__1_value;
static lean_once_cell_t l_Lean_Expr_fvarId_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_fvarId_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_mvarId_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Expr_mvarId_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Expr.mvarId!"};
static const lean_object* l_Lean_Expr_mvarId_x21___closed__0 = (const lean_object*)&l_Lean_Expr_mvarId_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_mvarId_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "mvar expected"};
static const lean_object* l_Lean_Expr_mvarId_x21___closed__1 = (const lean_object*)&l_Lean_Expr_mvarId_x21___closed__1_value;
static lean_once_cell_t l_Lean_Expr_mvarId_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_mvarId_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_mvarId_x21___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_bindingName_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Expr.bindingName!"};
static const lean_object* l_Lean_Expr_bindingName_x21___closed__0 = (const lean_object*)&l_Lean_Expr_bindingName_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_bindingName_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "binding expected"};
static const lean_object* l_Lean_Expr_bindingName_x21___closed__1 = (const lean_object*)&l_Lean_Expr_bindingName_x21___closed__1_value;
static lean_once_cell_t l_Lean_Expr_bindingName_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_bindingName_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_bindingName_x21___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_bindingDomain_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Expr.bindingDomain!"};
static const lean_object* l_Lean_Expr_bindingDomain_x21___closed__0 = (const lean_object*)&l_Lean_Expr_bindingDomain_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_bindingDomain_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_bindingDomain_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_bindingDomain_x21___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_bindingBody_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Expr.bindingBody!"};
static const lean_object* l_Lean_Expr_bindingBody_x21___closed__0 = (const lean_object*)&l_Lean_Expr_bindingBody_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_bindingBody_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_bindingBody_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_bindingBody_x21___boxed(lean_object*);
LEAN_EXPORT uint8_t l_panic___at___00Lean_Expr_bindingInfo_x21_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_bindingInfo_x21_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_bindingInfo_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Expr.bindingInfo!"};
static const lean_object* l_Lean_Expr_bindingInfo_x21___closed__0 = (const lean_object*)&l_Lean_Expr_bindingInfo_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_bindingInfo_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_bindingInfo_x21___closed__1;
LEAN_EXPORT uint8_t l_Lean_Expr_bindingInfo_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_bindingInfo_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallName___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallName___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallDomain___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallDomain___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallDomain(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallDomain___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallBody___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallBody___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallBody___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_forallInfo___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallInfo___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_forallInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallInfo___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_letName_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Expr.letName!"};
static const lean_object* l_Lean_Expr_letName_x21___closed__0 = (const lean_object*)&l_Lean_Expr_letName_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_letName_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "let expression expected"};
static const lean_object* l_Lean_Expr_letName_x21___closed__1 = (const lean_object*)&l_Lean_Expr_letName_x21___closed__1_value;
static lean_once_cell_t l_Lean_Expr_letName_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_letName_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_letName_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_letName_x21___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_letType_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Expr.letType!"};
static const lean_object* l_Lean_Expr_letType_x21___closed__0 = (const lean_object*)&l_Lean_Expr_letType_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_letType_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_letType_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_letType_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_letType_x21___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_letValue_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Expr.letValue!"};
static const lean_object* l_Lean_Expr_letValue_x21___closed__0 = (const lean_object*)&l_Lean_Expr_letValue_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_letValue_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_letValue_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_letValue_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_letValue_x21___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_letBody_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Expr.letBody!"};
static const lean_object* l_Lean_Expr_letBody_x21___closed__0 = (const lean_object*)&l_Lean_Expr_letBody_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_letBody_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_letBody_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_letBody_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_letBody_x21___boxed(lean_object*);
LEAN_EXPORT uint8_t l_panic___at___00Lean_Expr_letNondep_x21_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_letNondep_x21_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_letNondep_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Expr.letNondep!"};
static const lean_object* l_Lean_Expr_letNondep_x21___closed__0 = (const lean_object*)&l_Lean_Expr_letNondep_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_letNondep_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_letNondep_x21___closed__1;
LEAN_EXPORT uint8_t l_Lean_Expr_letNondep_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_letNondep_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_consumeMData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_consumeMData___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_mdataExpr_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Expr.mdataExpr!"};
static const lean_object* l_Lean_Expr_mdataExpr_x21___closed__0 = (const lean_object*)&l_Lean_Expr_mdataExpr_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_mdataExpr_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "mdata expression expected"};
static const lean_object* l_Lean_Expr_mdataExpr_x21___closed__1 = (const lean_object*)&l_Lean_Expr_mdataExpr_x21___closed__1_value;
static lean_once_cell_t l_Lean_Expr_mdataExpr_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_mdataExpr_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_mdataExpr_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_mdataExpr_x21___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_projExpr_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Expr.projExpr!"};
static const lean_object* l_Lean_Expr_projExpr_x21___closed__0 = (const lean_object*)&l_Lean_Expr_projExpr_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_projExpr_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "proj expression expected"};
static const lean_object* l_Lean_Expr_projExpr_x21___closed__1 = (const lean_object*)&l_Lean_Expr_projExpr_x21___closed__1_value;
static lean_once_cell_t l_Lean_Expr_projExpr_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_projExpr_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_projExpr_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_projExpr_x21___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_projIdx_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Expr.projIdx!"};
static const lean_object* l_Lean_Expr_projIdx_x21___closed__0 = (const lean_object*)&l_Lean_Expr_projIdx_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_projIdx_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_projIdx_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_projIdx_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_projIdx_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBody(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBody___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBodyMaxDepth(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBodyMaxDepth___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBinderNames(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBinderNames___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getNumHeadForalls(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getNumHeadForalls___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppFn___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppFn_x27(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppFn_x27___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isAppOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isAppOfArity___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isAppOfArity_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isAppOfArity_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppNumArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgs_x27_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgs_x27_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppNumArgs_x27(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppNumArgs_x27___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getBoundedAppFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getBoundedAppFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_getAppArgs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_getAppArgs___closed__0;
LEAN_EXPORT lean_object* l_Lean_Expr_getAppArgs(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getBoundedAppArgsAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getBoundedAppArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppRevArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withApp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withApp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_getAppFnArgs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "_private.Lean.Expr.0.Lean.Expr.getAppArgsN.loop"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "too few arguments at"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__1_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppArgsN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_stripArgsN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_stripArgsN___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppPrefix(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppPrefix___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseApp___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseApp___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Expr_traverseApp___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkAppN___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Expr_traverseApp___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Expr_traverseApp___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_traverseApp___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseApp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseApp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppRev___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppRev(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArgD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArgD___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_getRevArg_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Expr.getRevArg!"};
static const lean_object* l_Lean_Expr_getRevArg_x21___closed__0 = (const lean_object*)&l_Lean_Expr_getRevArg_x21___closed__0_value;
static const lean_string_object l_Lean_Expr_getRevArg_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invalid index"};
static const lean_object* l_Lean_Expr_getRevArg_x21___closed__1 = (const lean_object*)&l_Lean_Expr_getRevArg_x21___closed__1_value;
static lean_once_cell_t l_Lean_Expr_getRevArg_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_getRevArg_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x21___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_getRevArg_x21_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Expr.getRevArg!'"};
static const lean_object* l_Lean_Expr_getRevArg_x21_x27___closed__0 = (const lean_object*)&l_Lean_Expr_getRevArg_x21_x27___closed__0_value;
static lean_once_cell_t l_Lean_Expr_getRevArg_x21_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_getRevArg_x21_x27___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x21_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x21_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x21_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x21_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getArgD(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getArgD___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasLooseBVars___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isArrow(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isArrow___boxed(lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasLooseBVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasLooseBVarInExplicitDomain(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_hasLooseBVarInExplicitDomain___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_lowerLooseBVars___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_lift_loose_bvars(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_liftLooseBVars___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_inferImplicit(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_inferImplicit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallBinderInfos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallBinderInfos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateBinderNames(lean_object*, lean_object*);
lean_object* lean_expr_instantiate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_instantiate___boxed(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_instantiate1___boxed(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateRev___boxed(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_range(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateRevRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_abstract___boxed(lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_abstractRange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVarId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVarId___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVars___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Expr_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_dbgToString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Expr_instToString___closed__0 = (const lean_object*)&l_Lean_Expr_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Expr_instToString = (const lean_object*)&l_Lean_Expr_instToString___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Expr_isAtomic(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isAtomic___boxed(lean_object*);
static const lean_string_object l_Lean_mkDecIsTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_mkDecIsTrue___closed__0 = (const lean_object*)&l_Lean_mkDecIsTrue___closed__0_value;
static const lean_string_object l_Lean_mkDecIsTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isTrue"};
static const lean_object* l_Lean_mkDecIsTrue___closed__1 = (const lean_object*)&l_Lean_mkDecIsTrue___closed__1_value;
static const lean_ctor_object l_Lean_mkDecIsTrue___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkDecIsTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l_Lean_mkDecIsTrue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkDecIsTrue___closed__2_value_aux_0),((lean_object*)&l_Lean_mkDecIsTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(9, 43, 53, 182, 5, 16, 39, 1)}};
static const lean_object* l_Lean_mkDecIsTrue___closed__2 = (const lean_object*)&l_Lean_mkDecIsTrue___closed__2_value;
static lean_once_cell_t l_Lean_mkDecIsTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkDecIsTrue___closed__3;
LEAN_EXPORT lean_object* l_Lean_mkDecIsTrue(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkDecIsFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isFalse"};
static const lean_object* l_Lean_mkDecIsFalse___closed__0 = (const lean_object*)&l_Lean_mkDecIsFalse___closed__0_value;
static const lean_ctor_object l_Lean_mkDecIsFalse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkDecIsTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l_Lean_mkDecIsFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkDecIsFalse___closed__1_value_aux_0),((lean_object*)&l_Lean_mkDecIsFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(21, 55, 194, 143, 15, 194, 124, 204)}};
static const lean_object* l_Lean_mkDecIsFalse___closed__1 = (const lean_object*)&l_Lean_mkDecIsFalse___closed__1_value;
static lean_once_cell_t l_Lean_mkDecIsFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkDecIsFalse___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkDecIsFalse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedExprStructEq_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedExprStructEq;
LEAN_EXPORT lean_object* l_Lean_instCoeExprExprStructEq___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instCoeExprExprStructEq___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instCoeExprExprStructEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeExprExprStructEq___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeExprExprStructEq___closed__0 = (const lean_object*)&l_Lean_instCoeExprExprStructEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeExprExprStructEq = (const lean_object*)&l_Lean_instCoeExprExprStructEq___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_ExprStructEq_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_ExprStructEq_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ExprStructEq_instBEq___closed__0 = (const lean_object*)&l_Lean_ExprStructEq_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ExprStructEq_instBEq = (const lean_object*)&l_Lean_ExprStructEq_instBEq___closed__0_value;
static const lean_closure_object l_Lean_ExprStructEq_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ExprStructEq_instHashable___closed__0 = (const lean_object*)&l_Lean_ExprStructEq_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ExprStructEq_instHashable = (const lean_object*)&l_Lean_ExprStructEq_instHashable___closed__0_value;
static const lean_closure_object l_Lean_ExprStructEq_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_dbgToString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ExprStructEq_instToString___closed__0 = (const lean_object*)&l_Lean_ExprStructEq_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ExprStructEq_instToString = (const lean_object*)&l_Lean_ExprStructEq_instToString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_mkAppRevRangeAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_mkAppRevRangeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_mkAppRevRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_mkAppRevRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_betaRev_go(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_betaRev_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_betaRev___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getNumHeadLambdas(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getNumHeadLambdas___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getLambdaBody(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getLambdaBody___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isHeadBetaTargetFn(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isHeadBetaTargetFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_headBeta(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_isHeadBetaTarget___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_etaExpandedBody(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_etaExpandedAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_etaExpanded_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_etaExpandedStrict_x3f(lean_object*);
static const lean_string_object l_Lean_Expr_getOptParamDefault_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optParam"};
static const lean_object* l_Lean_Expr_getOptParamDefault_x3f___closed__0 = (const lean_object*)&l_Lean_Expr_getOptParamDefault_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Expr_getOptParamDefault_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_getOptParamDefault_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 160, 223, 165, 16, 51, 54, 209)}};
static const lean_object* l_Lean_Expr_getOptParamDefault_x3f___closed__1 = (const lean_object*)&l_Lean_Expr_getOptParamDefault_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_getOptParamDefault_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getOptParamDefault_x3f___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_getAutoParamTactic_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "autoParam"};
static const lean_object* l_Lean_Expr_getAutoParamTactic_x3f___closed__0 = (const lean_object*)&l_Lean_Expr_getAutoParamTactic_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Expr_getAutoParamTactic_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_getAutoParamTactic_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 161, 241, 39, 119, 172, 48, 112)}};
static const lean_object* l_Lean_Expr_getAutoParamTactic_x3f___closed__1 = (const lean_object*)&l_Lean_Expr_getAutoParamTactic_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_getAutoParamTactic_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAutoParamTactic_x3f___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_isOutParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "outParam"};
static const lean_object* l_Lean_Expr_isOutParam___closed__0 = (const lean_object*)&l_Lean_Expr_isOutParam___closed__0_value;
static const lean_ctor_object l_Lean_Expr_isOutParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_isOutParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 153, 87, 30, 57, 250, 25, 29)}};
static const lean_object* l_Lean_Expr_isOutParam___closed__1 = (const lean_object*)&l_Lean_Expr_isOutParam___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Expr_isOutParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isOutParam___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_isSemiOutParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "semiOutParam"};
static const lean_object* l_Lean_Expr_isSemiOutParam___closed__0 = (const lean_object*)&l_Lean_Expr_isSemiOutParam___closed__0_value;
static const lean_ctor_object l_Lean_Expr_isSemiOutParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_isSemiOutParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 187, 140, 108, 143, 232, 13, 120)}};
static const lean_object* l_Lean_Expr_isSemiOutParam___closed__1 = (const lean_object*)&l_Lean_Expr_isSemiOutParam___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Expr_isSemiOutParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isSemiOutParam___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isOptParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isOptParam___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isAutoParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isAutoParam___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isTypeAnnotation(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isTypeAnnotation___boxed(lean_object*);
LEAN_EXPORT lean_object* lean_expr_consume_type_annotations(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_appFnCleanup(lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_isFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_Lean_Expr_isFalse___closed__0 = (const lean_object*)&l_Lean_Expr_isFalse___closed__0_value;
static const lean_ctor_object l_Lean_Expr_isFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_isFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_Lean_Expr_isFalse___closed__1 = (const lean_object*)&l_Lean_Expr_isFalse___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Expr_isFalse(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isFalse___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_isTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Expr_isTrue___closed__0 = (const lean_object*)&l_Lean_Expr_isTrue___closed__0_value;
static const lean_ctor_object l_Lean_Expr_isTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_isTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Expr_isTrue___closed__1 = (const lean_object*)&l_Lean_Expr_isTrue___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Expr_isTrue(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isTrue___boxed(lean_object*);
static const lean_string_object l_Lean_Expr_isBoolFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Expr_isBoolFalse___closed__0 = (const lean_object*)&l_Lean_Expr_isBoolFalse___closed__0_value;
static const lean_ctor_object l_Lean_Expr_isBoolFalse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_isBoolFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Expr_isBoolFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_isBoolFalse___closed__1_value_aux_0),((lean_object*)&l_Lean_instReprData__1___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Expr_isBoolFalse___closed__1 = (const lean_object*)&l_Lean_Expr_isBoolFalse___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Expr_isBoolFalse(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isBoolFalse___boxed(lean_object*);
static const lean_ctor_object l_Lean_Expr_isBoolTrue___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_isBoolFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Expr_isBoolTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_isBoolTrue___closed__0_value_aux_0),((lean_object*)&l_Lean_instReprData__1___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Expr_isBoolTrue___closed__0 = (const lean_object*)&l_Lean_Expr_isBoolTrue___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Expr_isBoolTrue(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isBoolTrue___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getForallArity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_nat_x3f(lean_object*);
static const lean_string_object l_Lean_Expr_int_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Expr_int_x3f___closed__0 = (const lean_object*)&l_Lean_Expr_int_x3f___closed__0_value;
static const lean_string_object l_Lean_Expr_int_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Expr_int_x3f___closed__1 = (const lean_object*)&l_Lean_Expr_int_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Expr_int_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_int_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Expr_int_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_int_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Expr_int_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Expr_int_x3f___closed__2 = (const lean_object*)&l_Lean_Expr_int_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Expr_int_x3f(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasAnyFVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasAnyFVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Expr_containsFVar_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Expr_containsFVar_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_containsFVar___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateApp!Impl"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___closed__0_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_updateFVar_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Expr.updateFVar!"};
static const lean_object* l_Lean_Expr_updateFVar_x21___closed__0 = (const lean_object*)&l_Lean_Expr_updateFVar_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_updateFVar_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateFVar_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_updateFVar_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateFVar_x21___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateConst!Impl"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl___closed__0_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateSort!Impl"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "level expected"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__1_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateMData!Impl"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "mdata expected"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__1_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateProj!Impl"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proj expected"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__1_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateForall!Impl"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "forall expected"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__1_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_updateForallE_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Expr.updateForallE!"};
static const lean_object* l_Lean_Expr_updateForallE_x21___closed__0 = (const lean_object*)&l_Lean_Expr_updateForallE_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_updateForallE_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateForallE_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallE_x21(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateLambda!Impl"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "lambda expected"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__1_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_updateLambdaE_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Expr.updateLambdaE!"};
static const lean_object* l_Lean_Expr_updateLambdaE_x21___closed__0 = (const lean_object*)&l_Lean_Expr_updateLambdaE_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_updateLambdaE_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateLambdaE_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_updateLambdaE_x21(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateLet!Impl"};
static const lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___closed__0_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_updateLetE_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Expr.updateLetE!"};
static const lean_object* l_Lean_Expr_updateLetE_x21___closed__0 = (const lean_object*)&l_Lean_Expr_updateLetE_x21___closed__0_value;
static lean_once_cell_t l_Lean_Expr_updateLetE_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateLetE_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_updateLetE_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_eta(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_setOption___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_setOption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_setOption___at___00Lean_Expr_setPPExplicit_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_setOption___at___00Lean_Expr_setPPExplicit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_setPPExplicit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l_Lean_Expr_setPPExplicit___closed__0 = (const lean_object*)&l_Lean_Expr_setPPExplicit___closed__0_value;
static const lean_string_object l_Lean_Expr_setPPExplicit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l_Lean_Expr_setPPExplicit___closed__1 = (const lean_object*)&l_Lean_Expr_setPPExplicit___closed__1_value;
static const lean_ctor_object l_Lean_Expr_setPPExplicit___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_setPPExplicit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_Expr_setPPExplicit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_setPPExplicit___closed__2_value_aux_0),((lean_object*)&l_Lean_Expr_setPPExplicit___closed__1_value),LEAN_SCALAR_PTR_LITERAL(135, 109, 223, 122, 147, 21, 229, 249)}};
static const lean_object* l_Lean_Expr_setPPExplicit___closed__2 = (const lean_object*)&l_Lean_Expr_setPPExplicit___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Expr_setPPExplicit(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_setPPExplicit___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_setPPUniverses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "universes"};
static const lean_object* l_Lean_Expr_setPPUniverses___closed__0 = (const lean_object*)&l_Lean_Expr_setPPUniverses___closed__0_value;
static const lean_ctor_object l_Lean_Expr_setPPUniverses___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_setPPExplicit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_Expr_setPPUniverses___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_setPPUniverses___closed__1_value_aux_0),((lean_object*)&l_Lean_Expr_setPPUniverses___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 49, 200, 238, 5, 247, 132, 121)}};
static const lean_object* l_Lean_Expr_setPPUniverses___closed__1 = (const lean_object*)&l_Lean_Expr_setPPUniverses___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_setPPUniverses(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_setPPUniverses___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_setPPPiBinderTypes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "piBinderTypes"};
static const lean_object* l_Lean_Expr_setPPPiBinderTypes___closed__0 = (const lean_object*)&l_Lean_Expr_setPPPiBinderTypes___closed__0_value;
static const lean_ctor_object l_Lean_Expr_setPPPiBinderTypes___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_setPPExplicit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_Expr_setPPPiBinderTypes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_setPPPiBinderTypes___closed__1_value_aux_0),((lean_object*)&l_Lean_Expr_setPPPiBinderTypes___closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 153, 18, 16, 117, 190, 60, 138)}};
static const lean_object* l_Lean_Expr_setPPPiBinderTypes___closed__1 = (const lean_object*)&l_Lean_Expr_setPPPiBinderTypes___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_setPPPiBinderTypes(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_setPPPiBinderTypes___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_setPPFunBinderTypes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "funBinderTypes"};
static const lean_object* l_Lean_Expr_setPPFunBinderTypes___closed__0 = (const lean_object*)&l_Lean_Expr_setPPFunBinderTypes___closed__0_value;
static const lean_ctor_object l_Lean_Expr_setPPFunBinderTypes___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_setPPExplicit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_Expr_setPPFunBinderTypes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_setPPFunBinderTypes___closed__1_value_aux_0),((lean_object*)&l_Lean_Expr_setPPFunBinderTypes___closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 61, 49, 152, 149, 112, 61, 41)}};
static const lean_object* l_Lean_Expr_setPPFunBinderTypes___closed__1 = (const lean_object*)&l_Lean_Expr_setPPFunBinderTypes___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_setPPFunBinderTypes(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_setPPFunBinderTypes___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_setPPNumericTypes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "numericTypes"};
static const lean_object* l_Lean_Expr_setPPNumericTypes___closed__0 = (const lean_object*)&l_Lean_Expr_setPPNumericTypes___closed__0_value;
static const lean_ctor_object l_Lean_Expr_setPPNumericTypes___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_setPPExplicit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_Expr_setPPNumericTypes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_setPPNumericTypes___closed__1_value_aux_0),((lean_object*)&l_Lean_Expr_setPPNumericTypes___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 29, 124, 132, 27, 235, 94, 122)}};
static const lean_object* l_Lean_Expr_setPPNumericTypes___closed__1 = (const lean_object*)&l_Lean_Expr_setPPNumericTypes___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_setPPNumericTypes(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Expr_setPPNumericTypes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicit_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_setAppPPExplicit(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicitForExposingMVars_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicitForExposingMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_setAppPPExplicitForExposingMVars(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Expr_foldlM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_foldlM___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Expr_foldlM___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_foldlM___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_sizeWithoutSharing(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_sizeWithoutSharing___boxed(lean_object*);
static const lean_ctor_object l_Lean_mkAnnotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_mkAnnotation___closed__0 = (const lean_object*)&l_Lean_mkAnnotation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_mkAnnotation(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_annotation_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_annotation_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkInaccessible___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "_inaccessible"};
static const lean_object* l_Lean_mkInaccessible___closed__0 = (const lean_object*)&l_Lean_mkInaccessible___closed__0_value;
static const lean_ctor_object l_Lean_mkInaccessible___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkInaccessible___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 29, 104, 7, 111, 207, 123, 40)}};
static const lean_object* l_Lean_mkInaccessible___closed__1 = (const lean_object*)&l_Lean_mkInaccessible___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkInaccessible(lean_object*);
LEAN_EXPORT lean_object* l_Lean_inaccessible_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_inaccessible_x3f___boxed(lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_patternRefAnnotationKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_patWithRef"};
static const lean_object* l___private_Lean_Expr_0__Lean_patternRefAnnotationKey___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_patternRefAnnotationKey___closed__0_value;
static const lean_ctor_object l___private_Lean_Expr_0__Lean_patternRefAnnotationKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Expr_0__Lean_patternRefAnnotationKey___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 181, 220, 147, 186, 176, 190, 234)}};
static const lean_object* l___private_Lean_Expr_0__Lean_patternRefAnnotationKey___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_patternRefAnnotationKey___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_Expr_0__Lean_patternRefAnnotationKey = (const lean_object*)&l___private_Lean_Expr_0__Lean_patternRefAnnotationKey___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_patternWithRef_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_patternWithRef_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isPatternWithRef(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isPatternWithRef___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPatternWithRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_patternAnnotation_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_patternAnnotation_x3f___boxed(lean_object*);
static const lean_string_object l_Lean_mkLHSGoalRaw___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_lhsGoal"};
static const lean_object* l_Lean_mkLHSGoalRaw___closed__0 = (const lean_object*)&l_Lean_mkLHSGoalRaw___closed__0_value;
static const lean_ctor_object l_Lean_mkLHSGoalRaw___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkLHSGoalRaw___closed__0_value),LEAN_SCALAR_PTR_LITERAL(163, 54, 195, 36, 174, 14, 147, 139)}};
static const lean_object* l_Lean_mkLHSGoalRaw___closed__1 = (const lean_object*)&l_Lean_mkLHSGoalRaw___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkLHSGoalRaw(lean_object*);
static const lean_string_object l_Lean_isLHSGoal_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_isLHSGoal_x3f___closed__0 = (const lean_object*)&l_Lean_isLHSGoal_x3f___closed__0_value;
static const lean_ctor_object l_Lean_isLHSGoal_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLHSGoal_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_isLHSGoal_x3f___closed__1 = (const lean_object*)&l_Lean_isLHSGoal_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isLHSGoal_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isLHSGoal_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshMVarId___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshMVarId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshLMVarId___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshLMVarId(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkNot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l_Lean_mkNot___closed__0 = (const lean_object*)&l_Lean_mkNot___closed__0_value;
static const lean_ctor_object l_Lean_mkNot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkNot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l_Lean_mkNot___closed__1 = (const lean_object*)&l_Lean_mkNot___closed__1_value;
static lean_once_cell_t l_Lean_mkNot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkNot___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkNot(lean_object*);
static const lean_string_object l_Lean_mkOr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* l_Lean_mkOr___closed__0 = (const lean_object*)&l_Lean_mkOr___closed__0_value;
static const lean_ctor_object l_Lean_mkOr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkOr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* l_Lean_mkOr___closed__1 = (const lean_object*)&l_Lean_mkOr___closed__1_value;
static lean_once_cell_t l_Lean_mkOr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkOr___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkOr(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkAnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_mkAnd___closed__0 = (const lean_object*)&l_Lean_mkAnd___closed__0_value;
static const lean_ctor_object l_Lean_mkAnd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkAnd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_mkAnd___closed__1 = (const lean_object*)&l_Lean_mkAnd___closed__1_value;
static lean_once_cell_t l_Lean_mkAnd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkAnd___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkAnd(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkAndN___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkAndN___closed__0;
LEAN_EXPORT lean_object* l_Lean_mkAndN(lean_object*);
static const lean_string_object l_Lean_mkEM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* l_Lean_mkEM___closed__0 = (const lean_object*)&l_Lean_mkEM___closed__0_value;
static const lean_string_object l_Lean_mkEM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "em"};
static const lean_object* l_Lean_mkEM___closed__1 = (const lean_object*)&l_Lean_mkEM___closed__1_value;
static const lean_ctor_object l_Lean_mkEM___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkEM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object l_Lean_mkEM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkEM___closed__2_value_aux_0),((lean_object*)&l_Lean_mkEM___closed__1_value),LEAN_SCALAR_PTR_LITERAL(138, 250, 26, 166, 192, 110, 127, 170)}};
static const lean_object* l_Lean_mkEM___closed__2 = (const lean_object*)&l_Lean_mkEM___closed__2_value;
static lean_once_cell_t l_Lean_mkEM___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkEM___closed__3;
LEAN_EXPORT lean_object* l_Lean_mkEM(lean_object*);
static const lean_string_object l_Lean_mkIff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* l_Lean_mkIff___closed__0 = (const lean_object*)&l_Lean_mkIff___closed__0_value;
static const lean_ctor_object l_Lean_mkIff___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkIff___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* l_Lean_mkIff___closed__1 = (const lean_object*)&l_Lean_mkIff___closed__1_value;
static lean_once_cell_t l_Lean_mkIff___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkIff___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkIff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_mkType;
static const lean_string_object l_Lean_Nat_mkInstAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instAddNat"};
static const lean_object* l_Lean_Nat_mkInstAdd___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstAdd___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstAdd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstAdd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(228, 164, 175, 25, 228, 165, 175, 183)}};
static const lean_object* l_Lean_Nat_mkInstAdd___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstAdd___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstAdd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstAdd___closed__2;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstAdd;
static const lean_string_object l_Lean_Nat_mkInstHAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHAdd"};
static const lean_object* l_Lean_Nat_mkInstHAdd___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstHAdd___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstHAdd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstHAdd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(229, 81, 239, 34, 203, 244, 36, 133)}};
static const lean_object* l_Lean_Nat_mkInstHAdd___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstHAdd___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstHAdd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHAdd___closed__2;
static lean_once_cell_t l_Lean_Nat_mkInstHAdd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHAdd___closed__3;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstHAdd;
static const lean_string_object l_Lean_Nat_mkInstSub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instSubNat"};
static const lean_object* l_Lean_Nat_mkInstSub___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstSub___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstSub___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstSub___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 126, 242, 252, 139, 96, 73, 92)}};
static const lean_object* l_Lean_Nat_mkInstSub___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstSub___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstSub___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstSub___closed__2;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstSub;
static const lean_string_object l_Lean_Nat_mkInstHSub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHSub"};
static const lean_object* l_Lean_Nat_mkInstHSub___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstHSub___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstHSub___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstHSub___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 225, 92, 14, 170, 61, 170, 140)}};
static const lean_object* l_Lean_Nat_mkInstHSub___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstHSub___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstHSub___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHSub___closed__2;
static lean_once_cell_t l_Lean_Nat_mkInstHSub___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHSub___closed__3;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstHSub;
static const lean_string_object l_Lean_Nat_mkInstMul___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instMulNat"};
static const lean_object* l_Lean_Nat_mkInstMul___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstMul___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstMul___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstMul___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 250, 177, 143, 4, 122, 150, 94)}};
static const lean_object* l_Lean_Nat_mkInstMul___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstMul___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstMul___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstMul___closed__2;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstMul;
static const lean_string_object l_Lean_Nat_mkInstHMul___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHMul"};
static const lean_object* l_Lean_Nat_mkInstHMul___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstHMul___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstHMul___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstHMul___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 107, 107, 59, 202, 230, 169, 251)}};
static const lean_object* l_Lean_Nat_mkInstHMul___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstHMul___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstHMul___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHMul___closed__2;
static lean_once_cell_t l_Lean_Nat_mkInstHMul___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHMul___closed__3;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstHMul;
static const lean_string_object l_Lean_Nat_mkInstDiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "instDiv"};
static const lean_object* l_Lean_Nat_mkInstDiv___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstDiv___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstDiv___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Literal_type___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Nat_mkInstDiv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Nat_mkInstDiv___closed__1_value_aux_0),((lean_object*)&l_Lean_Nat_mkInstDiv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 220, 27, 244, 214, 254, 46, 170)}};
static const lean_object* l_Lean_Nat_mkInstDiv___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstDiv___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstDiv___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstDiv___closed__2;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstDiv;
static const lean_string_object l_Lean_Nat_mkInstHDiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHDiv"};
static const lean_object* l_Lean_Nat_mkInstHDiv___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstHDiv___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstHDiv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstHDiv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 70, 113, 198, 157, 211, 131, 18)}};
static const lean_object* l_Lean_Nat_mkInstHDiv___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstHDiv___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstHDiv___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHDiv___closed__2;
static lean_once_cell_t l_Lean_Nat_mkInstHDiv___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHDiv___closed__3;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstHDiv;
static const lean_string_object l_Lean_Nat_mkInstMod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "instMod"};
static const lean_object* l_Lean_Nat_mkInstMod___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstMod___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstMod___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Literal_type___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Nat_mkInstMod___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Nat_mkInstMod___closed__1_value_aux_0),((lean_object*)&l_Lean_Nat_mkInstMod___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 28, 178, 185, 13, 18, 77, 86)}};
static const lean_object* l_Lean_Nat_mkInstMod___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstMod___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstMod___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstMod___closed__2;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstMod;
static const lean_string_object l_Lean_Nat_mkInstHMod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHMod"};
static const lean_object* l_Lean_Nat_mkInstHMod___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstHMod___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstHMod___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstHMod___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 7, 29, 140, 31, 32, 204, 87)}};
static const lean_object* l_Lean_Nat_mkInstHMod___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstHMod___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstHMod___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHMod___closed__2;
static lean_once_cell_t l_Lean_Nat_mkInstHMod___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHMod___closed__3;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstHMod;
static const lean_string_object l_Lean_Nat_mkInstNatPow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "instNatPowNat"};
static const lean_object* l_Lean_Nat_mkInstNatPow___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstNatPow___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstNatPow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstNatPow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(151, 252, 138, 245, 102, 141, 87, 126)}};
static const lean_object* l_Lean_Nat_mkInstNatPow___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstNatPow___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstNatPow___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstNatPow___closed__2;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstNatPow;
static const lean_string_object l_Lean_Nat_mkInstPow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instPowNat"};
static const lean_object* l_Lean_Nat_mkInstPow___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstPow___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstPow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstPow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(173, 228, 103, 52, 5, 80, 7, 4)}};
static const lean_object* l_Lean_Nat_mkInstPow___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstPow___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstPow___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstPow___closed__2;
static lean_once_cell_t l_Lean_Nat_mkInstPow___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstPow___closed__3;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstPow;
static const lean_string_object l_Lean_Nat_mkInstHPow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHPow"};
static const lean_object* l_Lean_Nat_mkInstHPow___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstHPow___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstHPow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstHPow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(213, 197, 76, 235, 199, 0, 254, 199)}};
static const lean_object* l_Lean_Nat_mkInstHPow___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstHPow___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstHPow___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHPow___closed__2;
static lean_once_cell_t l_Lean_Nat_mkInstHPow___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHPow___closed__3;
static lean_once_cell_t l_Lean_Nat_mkInstHPow___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstHPow___closed__4;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstHPow;
static const lean_string_object l_Lean_Nat_mkInstLT___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLTNat"};
static const lean_object* l_Lean_Nat_mkInstLT___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstLT___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstLT___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstLT___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 27, 201, 217, 48, 203, 85, 203)}};
static const lean_object* l_Lean_Nat_mkInstLT___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstLT___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstLT___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstLT___closed__2;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstLT;
static const lean_string_object l_Lean_Nat_mkInstLE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLENat"};
static const lean_object* l_Lean_Nat_mkInstLE___closed__0 = (const lean_object*)&l_Lean_Nat_mkInstLE___closed__0_value;
static const lean_ctor_object l_Lean_Nat_mkInstLE___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Nat_mkInstLE___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 47, 64, 46, 87, 101, 57, 105)}};
static const lean_object* l_Lean_Nat_mkInstLE___closed__1 = (const lean_object*)&l_Lean_Nat_mkInstLE___closed__1_value;
static lean_once_cell_t l_Lean_Nat_mkInstLE___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Nat_mkInstLE___closed__2;
LEAN_EXPORT lean_object* l_Lean_Nat_mkInstLE;
static const lean_string_object l___private_Lean_Expr_0__Lean_natAddFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Expr_0__Lean_natAddFn___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natAddFn___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_natAddFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Expr_0__Lean_natAddFn___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natAddFn___closed__1_value;
static const lean_ctor_object l___private_Lean_Expr_0__Lean_natAddFn___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Expr_0__Lean_natAddFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Expr_0__Lean_natAddFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Expr_0__Lean_natAddFn___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Expr_0__Lean_natAddFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Expr_0__Lean_natAddFn___closed__2 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natAddFn___closed__2_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natAddFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natAddFn___closed__3;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natAddFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natAddFn___closed__4;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natAddFn___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natAddFn___closed__5;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natAddFn___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natAddFn___closed__6;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natAddFn___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natAddFn___closed__7;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natAddFn___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natAddFn___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_natAddFn;
static const lean_string_object l___private_Lean_Expr_0__Lean_natSubFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l___private_Lean_Expr_0__Lean_natSubFn___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natSubFn___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_natSubFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l___private_Lean_Expr_0__Lean_natSubFn___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natSubFn___closed__1_value;
static const lean_ctor_object l___private_Lean_Expr_0__Lean_natSubFn___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Expr_0__Lean_natSubFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l___private_Lean_Expr_0__Lean_natSubFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Expr_0__Lean_natSubFn___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Expr_0__Lean_natSubFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l___private_Lean_Expr_0__Lean_natSubFn___closed__2 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natSubFn___closed__2_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natSubFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natSubFn___closed__3;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natSubFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natSubFn___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_natSubFn;
static const lean_string_object l___private_Lean_Expr_0__Lean_natMulFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Expr_0__Lean_natMulFn___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natMulFn___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_natMulFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Expr_0__Lean_natMulFn___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natMulFn___closed__1_value;
static const lean_ctor_object l___private_Lean_Expr_0__Lean_natMulFn___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Expr_0__Lean_natMulFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Expr_0__Lean_natMulFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Expr_0__Lean_natMulFn___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Expr_0__Lean_natMulFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Expr_0__Lean_natMulFn___closed__2 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natMulFn___closed__2_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natMulFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natMulFn___closed__3;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natMulFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natMulFn___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_natMulFn;
static const lean_string_object l___private_Lean_Expr_0__Lean_natPowFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l___private_Lean_Expr_0__Lean_natPowFn___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natPowFn___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_natPowFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l___private_Lean_Expr_0__Lean_natPowFn___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natPowFn___closed__1_value;
static const lean_ctor_object l___private_Lean_Expr_0__Lean_natPowFn___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Expr_0__Lean_natPowFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 188, 136, 200, 106, 253, 76, 178)}};
static const lean_ctor_object l___private_Lean_Expr_0__Lean_natPowFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Expr_0__Lean_natPowFn___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Expr_0__Lean_natPowFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 63, 208, 57, 56, 184, 164, 144)}};
static const lean_object* l___private_Lean_Expr_0__Lean_natPowFn___closed__2 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natPowFn___closed__2_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natPowFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natPowFn___closed__3;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natPowFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natPowFn___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_natPowFn;
static const lean_string_object l_Lean_mkNatSucc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l_Lean_mkNatSucc___closed__0 = (const lean_object*)&l_Lean_mkNatSucc___closed__0_value;
static const lean_ctor_object l_Lean_mkNatSucc___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Literal_type___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_mkNatSucc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkNatSucc___closed__1_value_aux_0),((lean_object*)&l_Lean_mkNatSucc___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l_Lean_mkNatSucc___closed__1 = (const lean_object*)&l_Lean_mkNatSucc___closed__1_value;
static lean_once_cell_t l_Lean_mkNatSucc___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkNatSucc___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkNatSucc(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkNatAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkNatSub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkNatMul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkNatPow(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_natLEPred___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l___private_Lean_Expr_0__Lean_natLEPred___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natLEPred___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_natLEPred___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l___private_Lean_Expr_0__Lean_natLEPred___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natLEPred___closed__1_value;
static const lean_ctor_object l___private_Lean_Expr_0__Lean_natLEPred___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Expr_0__Lean_natLEPred___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l___private_Lean_Expr_0__Lean_natLEPred___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Expr_0__Lean_natLEPred___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Expr_0__Lean_natLEPred___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l___private_Lean_Expr_0__Lean_natLEPred___closed__2 = (const lean_object*)&l___private_Lean_Expr_0__Lean_natLEPred___closed__2_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natLEPred___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natLEPred___closed__3;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natLEPred___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natLEPred___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_natLEPred;
LEAN_EXPORT lean_object* l_Lean_mkNatLE(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natEqPred___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natEqPred___closed__0;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natEqPred___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natEqPred___closed__1;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natEqPred___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natEqPred___closed__2;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_natEqPred___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_natEqPred___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_natEqPred;
LEAN_EXPORT lean_object* l_Lean_mkNatEq(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Expr_0__Lean_propEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_propEq___closed__0;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_propEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_propEq___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_propEq;
LEAN_EXPORT lean_object* l_Lean_mkPropEq(lean_object*, lean_object*);
static const lean_string_object l_Lean_Int_mkType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Int_mkType___closed__0 = (const lean_object*)&l_Lean_Int_mkType___closed__0_value;
static const lean_ctor_object l_Lean_Int_mkType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Int_mkType___closed__1 = (const lean_object*)&l_Lean_Int_mkType___closed__1_value;
static lean_once_cell_t l_Lean_Int_mkType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkType___closed__2;
LEAN_EXPORT lean_object* l_Lean_Int_mkType;
static const lean_string_object l_Lean_Int_mkInstNeg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNegInt"};
static const lean_object* l_Lean_Int_mkInstNeg___closed__0 = (const lean_object*)&l_Lean_Int_mkInstNeg___closed__0_value;
static const lean_ctor_object l_Lean_Int_mkInstNeg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Int_mkInstNeg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Int_mkInstNeg___closed__1_value_aux_0),((lean_object*)&l_Lean_Int_mkInstNeg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 233, 1, 211, 122, 77, 88)}};
static const lean_object* l_Lean_Int_mkInstNeg___closed__1 = (const lean_object*)&l_Lean_Int_mkInstNeg___closed__1_value;
static lean_once_cell_t l_Lean_Int_mkInstNeg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstNeg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstNeg;
static const lean_string_object l_Lean_Int_mkInstAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "instAdd"};
static const lean_object* l_Lean_Int_mkInstAdd___closed__0 = (const lean_object*)&l_Lean_Int_mkInstAdd___closed__0_value;
static const lean_ctor_object l_Lean_Int_mkInstAdd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Int_mkInstAdd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Int_mkInstAdd___closed__1_value_aux_0),((lean_object*)&l_Lean_Int_mkInstAdd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 99, 69, 75, 84, 154, 200, 179)}};
static const lean_object* l_Lean_Int_mkInstAdd___closed__1 = (const lean_object*)&l_Lean_Int_mkInstAdd___closed__1_value;
static lean_once_cell_t l_Lean_Int_mkInstAdd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstAdd___closed__2;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstAdd;
static lean_once_cell_t l_Lean_Int_mkInstHAdd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstHAdd___closed__0;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstHAdd;
static const lean_string_object l_Lean_Int_mkInstSub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "instSub"};
static const lean_object* l_Lean_Int_mkInstSub___closed__0 = (const lean_object*)&l_Lean_Int_mkInstSub___closed__0_value;
static const lean_ctor_object l_Lean_Int_mkInstSub___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Int_mkInstSub___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Int_mkInstSub___closed__1_value_aux_0),((lean_object*)&l_Lean_Int_mkInstSub___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 85, 79, 77, 38, 86, 116, 189)}};
static const lean_object* l_Lean_Int_mkInstSub___closed__1 = (const lean_object*)&l_Lean_Int_mkInstSub___closed__1_value;
static lean_once_cell_t l_Lean_Int_mkInstSub___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstSub___closed__2;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstSub;
static lean_once_cell_t l_Lean_Int_mkInstHSub___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstHSub___closed__0;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstHSub;
static const lean_string_object l_Lean_Int_mkInstMul___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "instMul"};
static const lean_object* l_Lean_Int_mkInstMul___closed__0 = (const lean_object*)&l_Lean_Int_mkInstMul___closed__0_value;
static const lean_ctor_object l_Lean_Int_mkInstMul___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Int_mkInstMul___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Int_mkInstMul___closed__1_value_aux_0),((lean_object*)&l_Lean_Int_mkInstMul___closed__0_value),LEAN_SCALAR_PTR_LITERAL(101, 121, 189, 72, 180, 169, 35, 121)}};
static const lean_object* l_Lean_Int_mkInstMul___closed__1 = (const lean_object*)&l_Lean_Int_mkInstMul___closed__1_value;
static lean_once_cell_t l_Lean_Int_mkInstMul___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstMul___closed__2;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstMul;
static lean_once_cell_t l_Lean_Int_mkInstHMul___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstHMul___closed__0;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstHMul;
static const lean_ctor_object l_Lean_Int_mkInstDiv___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Int_mkInstDiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Int_mkInstDiv___closed__0_value_aux_0),((lean_object*)&l_Lean_Nat_mkInstDiv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(154, 154, 103, 19, 118, 118, 20, 12)}};
static const lean_object* l_Lean_Int_mkInstDiv___closed__0 = (const lean_object*)&l_Lean_Int_mkInstDiv___closed__0_value;
static lean_once_cell_t l_Lean_Int_mkInstDiv___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstDiv___closed__1;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstDiv;
static lean_once_cell_t l_Lean_Int_mkInstHDiv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstHDiv___closed__0;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstHDiv;
static const lean_ctor_object l_Lean_Int_mkInstMod___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Int_mkInstMod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Int_mkInstMod___closed__0_value_aux_0),((lean_object*)&l_Lean_Nat_mkInstMod___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 18, 147, 153, 76, 63, 153, 183)}};
static const lean_object* l_Lean_Int_mkInstMod___closed__0 = (const lean_object*)&l_Lean_Int_mkInstMod___closed__0_value;
static lean_once_cell_t l_Lean_Int_mkInstMod___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstMod___closed__1;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstMod;
static lean_once_cell_t l_Lean_Int_mkInstHMod___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstHMod___closed__0;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstHMod;
static const lean_string_object l_Lean_Int_mkInstPow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNatPow"};
static const lean_object* l_Lean_Int_mkInstPow___closed__0 = (const lean_object*)&l_Lean_Int_mkInstPow___closed__0_value;
static const lean_ctor_object l_Lean_Int_mkInstPow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Int_mkInstPow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Int_mkInstPow___closed__1_value_aux_0),((lean_object*)&l_Lean_Int_mkInstPow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 111, 246, 9, 99, 98, 200, 100)}};
static const lean_object* l_Lean_Int_mkInstPow___closed__1 = (const lean_object*)&l_Lean_Int_mkInstPow___closed__1_value;
static lean_once_cell_t l_Lean_Int_mkInstPow___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstPow___closed__2;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstPow;
static lean_once_cell_t l_Lean_Int_mkInstPowNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstPowNat___closed__0;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstPowNat;
static lean_once_cell_t l_Lean_Int_mkInstHPow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstHPow___closed__0;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstHPow;
static const lean_string_object l_Lean_Int_mkInstLT___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLTInt"};
static const lean_object* l_Lean_Int_mkInstLT___closed__0 = (const lean_object*)&l_Lean_Int_mkInstLT___closed__0_value;
static const lean_ctor_object l_Lean_Int_mkInstLT___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Int_mkInstLT___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Int_mkInstLT___closed__1_value_aux_0),((lean_object*)&l_Lean_Int_mkInstLT___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 212, 102, 196, 69, 170, 149, 126)}};
static const lean_object* l_Lean_Int_mkInstLT___closed__1 = (const lean_object*)&l_Lean_Int_mkInstLT___closed__1_value;
static lean_once_cell_t l_Lean_Int_mkInstLT___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstLT___closed__2;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstLT;
static const lean_string_object l_Lean_Int_mkInstLE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLEInt"};
static const lean_object* l_Lean_Int_mkInstLE___closed__0 = (const lean_object*)&l_Lean_Int_mkInstLE___closed__0_value;
static const lean_ctor_object l_Lean_Int_mkInstLE___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Int_mkInstLE___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Int_mkInstLE___closed__1_value_aux_0),((lean_object*)&l_Lean_Int_mkInstLE___closed__0_value),LEAN_SCALAR_PTR_LITERAL(190, 143, 147, 243, 104, 145, 221, 241)}};
static const lean_object* l_Lean_Int_mkInstLE___closed__1 = (const lean_object*)&l_Lean_Int_mkInstLE___closed__1_value;
static lean_once_cell_t l_Lean_Int_mkInstLE___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstLE___closed__2;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstLE;
static const lean_string_object l_Lean_Int_mkInstNatCast___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "instNatCastInt"};
static const lean_object* l_Lean_Int_mkInstNatCast___closed__0 = (const lean_object*)&l_Lean_Int_mkInstNatCast___closed__0_value;
static const lean_ctor_object l_Lean_Int_mkInstNatCast___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkInstNatCast___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 224, 75, 57, 255, 108, 159, 197)}};
static const lean_object* l_Lean_Int_mkInstNatCast___closed__1 = (const lean_object*)&l_Lean_Int_mkInstNatCast___closed__1_value;
static lean_once_cell_t l_Lean_Int_mkInstNatCast___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Int_mkInstNatCast___closed__2;
LEAN_EXPORT lean_object* l_Lean_Int_mkInstNatCast;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intNegFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intNegFn___closed__0;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intNegFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intNegFn___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_intNegFn;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intAddFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intAddFn___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_intAddFn;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intSubFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intSubFn___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_intSubFn;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intMulFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intMulFn___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_intMulFn;
static const lean_string_object l___private_Lean_Expr_0__Lean_intDivFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l___private_Lean_Expr_0__Lean_intDivFn___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intDivFn___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_intDivFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l___private_Lean_Expr_0__Lean_intDivFn___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intDivFn___closed__1_value;
static const lean_ctor_object l___private_Lean_Expr_0__Lean_intDivFn___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Expr_0__Lean_intDivFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l___private_Lean_Expr_0__Lean_intDivFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Expr_0__Lean_intDivFn___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Expr_0__Lean_intDivFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l___private_Lean_Expr_0__Lean_intDivFn___closed__2 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intDivFn___closed__2_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intDivFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intDivFn___closed__3;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intDivFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intDivFn___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_intDivFn;
static const lean_string_object l___private_Lean_Expr_0__Lean_intModFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l___private_Lean_Expr_0__Lean_intModFn___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intModFn___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_intModFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l___private_Lean_Expr_0__Lean_intModFn___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intModFn___closed__1_value;
static const lean_ctor_object l___private_Lean_Expr_0__Lean_intModFn___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Expr_0__Lean_intModFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l___private_Lean_Expr_0__Lean_intModFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Expr_0__Lean_intModFn___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Expr_0__Lean_intModFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l___private_Lean_Expr_0__Lean_intModFn___closed__2 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intModFn___closed__2_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intModFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intModFn___closed__3;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intModFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intModFn___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_intModFn;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intPowNatFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intPowNatFn___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_intPowNatFn;
static const lean_string_object l___private_Lean_Expr_0__Lean_intNatCastFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "NatCast"};
static const lean_object* l___private_Lean_Expr_0__Lean_intNatCastFn___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intNatCastFn___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_intNatCastFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "natCast"};
static const lean_object* l___private_Lean_Expr_0__Lean_intNatCastFn___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intNatCastFn___closed__1_value;
static const lean_ctor_object l___private_Lean_Expr_0__Lean_intNatCastFn___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Expr_0__Lean_intNatCastFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 128, 63, 191, 243, 154, 52, 80)}};
static const lean_ctor_object l___private_Lean_Expr_0__Lean_intNatCastFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Expr_0__Lean_intNatCastFn___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Expr_0__Lean_intNatCastFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 224, 192, 179, 253, 143, 7, 98)}};
static const lean_object* l___private_Lean_Expr_0__Lean_intNatCastFn___closed__2 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intNatCastFn___closed__2_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intNatCastFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intNatCastFn___closed__3;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intNatCastFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intNatCastFn___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_intNatCastFn;
LEAN_EXPORT lean_object* l_Lean_mkIntNeg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIntAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIntSub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIntMul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIntDiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIntMod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIntNatCast(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIntPowNat(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intLEPred___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intLEPred___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_intLEPred;
LEAN_EXPORT lean_object* l_Lean_mkIntLE(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Expr_0__Lean_intLTPred___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l___private_Lean_Expr_0__Lean_intLTPred___closed__0 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intLTPred___closed__0_value;
static const lean_string_object l___private_Lean_Expr_0__Lean_intLTPred___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l___private_Lean_Expr_0__Lean_intLTPred___closed__1 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intLTPred___closed__1_value;
static const lean_ctor_object l___private_Lean_Expr_0__Lean_intLTPred___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Expr_0__Lean_intLTPred___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l___private_Lean_Expr_0__Lean_intLTPred___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Expr_0__Lean_intLTPred___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Expr_0__Lean_intLTPred___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l___private_Lean_Expr_0__Lean_intLTPred___closed__2 = (const lean_object*)&l___private_Lean_Expr_0__Lean_intLTPred___closed__2_value;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intLTPred___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intLTPred___closed__3;
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intLTPred___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intLTPred___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_intLTPred;
LEAN_EXPORT lean_object* l_Lean_mkIntLT(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Expr_0__Lean_intEqPred___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Expr_0__Lean_intEqPred___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_intEqPred;
LEAN_EXPORT lean_object* l_Lean_mkIntEq(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkIntDvd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Dvd"};
static const lean_object* l_Lean_mkIntDvd___closed__0 = (const lean_object*)&l_Lean_mkIntDvd___closed__0_value;
static const lean_string_object l_Lean_mkIntDvd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dvd"};
static const lean_object* l_Lean_mkIntDvd___closed__1 = (const lean_object*)&l_Lean_mkIntDvd___closed__1_value;
static const lean_ctor_object l_Lean_mkIntDvd___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkIntDvd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 71, 229, 107, 63, 192, 93, 62)}};
static const lean_ctor_object l_Lean_mkIntDvd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkIntDvd___closed__2_value_aux_0),((lean_object*)&l_Lean_mkIntDvd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(233, 16, 181, 127, 123, 63, 3, 18)}};
static const lean_object* l_Lean_mkIntDvd___closed__2 = (const lean_object*)&l_Lean_mkIntDvd___closed__2_value;
static lean_once_cell_t l_Lean_mkIntDvd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkIntDvd___closed__3;
static const lean_string_object l_Lean_mkIntDvd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "instDvd"};
static const lean_object* l_Lean_mkIntDvd___closed__4 = (const lean_object*)&l_Lean_mkIntDvd___closed__4_value;
static const lean_ctor_object l_Lean_mkIntDvd___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Int_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_mkIntDvd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkIntDvd___closed__5_value_aux_0),((lean_object*)&l_Lean_mkIntDvd___closed__4_value),LEAN_SCALAR_PTR_LITERAL(164, 20, 243, 72, 185, 226, 91, 120)}};
static const lean_object* l_Lean_mkIntDvd___closed__5 = (const lean_object*)&l_Lean_mkIntDvd___closed__5_value;
static lean_once_cell_t l_Lean_mkIntDvd___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkIntDvd___closed__6;
LEAN_EXPORT lean_object* l_Lean_mkIntDvd(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkIntLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instOfNat"};
static const lean_object* l_Lean_mkIntLit___closed__0 = (const lean_object*)&l_Lean_mkIntLit___closed__0_value;
static const lean_ctor_object l_Lean_mkIntLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkIntLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 253, 199, 38, 151, 242, 146)}};
static const lean_object* l_Lean_mkIntLit___closed__1 = (const lean_object*)&l_Lean_mkIntLit___closed__1_value;
static lean_once_cell_t l_Lean_mkIntLit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkIntLit___closed__2;
static lean_once_cell_t l_Lean_mkIntLit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkIntLit___closed__3;
LEAN_EXPORT lean_object* l_Lean_mkIntLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIntLit___boxed(lean_object*);
static const lean_string_object l_Lean_reflBoolTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_reflBoolTrue___closed__0 = (const lean_object*)&l_Lean_reflBoolTrue___closed__0_value;
static const lean_ctor_object l_Lean_reflBoolTrue___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLHSGoal_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_reflBoolTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_reflBoolTrue___closed__1_value_aux_0),((lean_object*)&l_Lean_reflBoolTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l_Lean_reflBoolTrue___closed__1 = (const lean_object*)&l_Lean_reflBoolTrue___closed__1_value;
static lean_once_cell_t l_Lean_reflBoolTrue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_reflBoolTrue___closed__2;
static lean_once_cell_t l_Lean_reflBoolTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_reflBoolTrue___closed__3;
static lean_once_cell_t l_Lean_reflBoolTrue___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_reflBoolTrue___closed__4;
static const lean_ctor_object l_Lean_reflBoolTrue___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_isBoolFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_reflBoolTrue___closed__5 = (const lean_object*)&l_Lean_reflBoolTrue___closed__5_value;
static lean_once_cell_t l_Lean_reflBoolTrue___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_reflBoolTrue___closed__6;
static lean_once_cell_t l_Lean_reflBoolTrue___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_reflBoolTrue___closed__7;
static lean_once_cell_t l_Lean_reflBoolTrue___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_reflBoolTrue___closed__8;
LEAN_EXPORT lean_object* l_Lean_reflBoolTrue;
static lean_once_cell_t l_Lean_reflBoolFalse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_reflBoolFalse___closed__0;
static lean_once_cell_t l_Lean_reflBoolFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_reflBoolFalse___closed__1;
LEAN_EXPORT lean_object* l_Lean_reflBoolFalse;
static const lean_string_object l_Lean_eagerReflBoolTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "eagerReduce"};
static const lean_object* l_Lean_eagerReflBoolTrue___closed__0 = (const lean_object*)&l_Lean_eagerReflBoolTrue___closed__0_value;
static const lean_ctor_object l_Lean_eagerReflBoolTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_eagerReflBoolTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(238, 243, 67, 12, 220, 84, 120, 222)}};
static const lean_object* l_Lean_eagerReflBoolTrue___closed__1 = (const lean_object*)&l_Lean_eagerReflBoolTrue___closed__1_value;
static lean_once_cell_t l_Lean_eagerReflBoolTrue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_eagerReflBoolTrue___closed__2;
static lean_once_cell_t l_Lean_eagerReflBoolTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_eagerReflBoolTrue___closed__3;
static lean_once_cell_t l_Lean_eagerReflBoolTrue___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_eagerReflBoolTrue___closed__4;
LEAN_EXPORT lean_object* l_Lean_eagerReflBoolTrue;
static lean_once_cell_t l_Lean_eagerReflBoolFalse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_eagerReflBoolFalse___closed__0;
static lean_once_cell_t l_Lean_eagerReflBoolFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_eagerReflBoolFalse___closed__1;
LEAN_EXPORT lean_object* l_Lean_eagerReflBoolFalse;
static const lean_string_object l_Lean_Expr_replaceFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Expr.replaceFn"};
static const lean_object* l_Lean_Expr_replaceFn___closed__0 = (const lean_object*)&l_Lean_Expr_replaceFn___closed__0_value;
static const lean_string_object l_Lean_Expr_replaceFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "function application or constant expected"};
static const lean_object* l_Lean_Expr_replaceFn___closed__1 = (const lean_object*)&l_Lean_Expr_replaceFn___closed__1_value;
static lean_once_cell_t l_Lean_Expr_replaceFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_replaceFn___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Literal_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Literal_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_val_8_; lean_object* v___x_9_; 
v_val_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_val_8_);
return v___x_9_;
}
else
{
lean_object* v_val_10_; lean_object* v___x_11_; 
v_val_10_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_val_10_);
lean_dec_ref_known(v_t_6_, 1);
v___x_11_ = lean_apply_1(v_k_7_, v_val_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Literal_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Literal_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_natVal_elim___redArg(lean_object* v_t_24_, lean_object* v_natVal_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_Literal_ctorElim___redArg(v_t_24_, v_natVal_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_natVal_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_natVal_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Literal_ctorElim___redArg(v_t_28_, v_natVal_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_strVal_elim___redArg(lean_object* v_t_32_, lean_object* v_strVal_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Literal_ctorElim___redArg(v_t_32_, v_strVal_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_strVal_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_strVal_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Literal_ctorElim___redArg(v_t_36_, v_strVal_38_);
return v___x_39_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqLiteral_beq(lean_object* v_x_44_, lean_object* v_x_45_){
_start:
{
if (lean_obj_tag(v_x_44_) == 0)
{
if (lean_obj_tag(v_x_45_) == 0)
{
lean_object* v_val_46_; lean_object* v_val_47_; uint8_t v___x_48_; 
v_val_46_ = lean_ctor_get(v_x_44_, 0);
v_val_47_ = lean_ctor_get(v_x_45_, 0);
v___x_48_ = lean_nat_dec_eq(v_val_46_, v_val_47_);
return v___x_48_;
}
else
{
uint8_t v___x_49_; 
v___x_49_ = 0;
return v___x_49_;
}
}
else
{
if (lean_obj_tag(v_x_45_) == 1)
{
lean_object* v_val_50_; lean_object* v_val_51_; uint8_t v___x_52_; 
v_val_50_ = lean_ctor_get(v_x_44_, 0);
v_val_51_ = lean_ctor_get(v_x_45_, 0);
v___x_52_ = lean_string_dec_eq(v_val_50_, v_val_51_);
return v___x_52_;
}
else
{
uint8_t v___x_53_; 
v___x_53_ = 0;
return v___x_53_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqLiteral_beq___boxed(lean_object* v_x_54_, lean_object* v_x_55_){
_start:
{
uint8_t v_res_56_; lean_object* v_r_57_; 
v_res_56_ = l_Lean_instBEqLiteral_beq(v_x_54_, v_x_55_);
lean_dec_ref(v_x_55_);
lean_dec_ref(v_x_54_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
static lean_object* _init_l_Lean_instReprLiteral_repr___closed__3(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = lean_unsigned_to_nat(2u);
v___x_67_ = lean_nat_to_int(v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l_Lean_instReprLiteral_repr___closed__4(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = lean_nat_to_int(v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLiteral_repr(lean_object* v_x_76_, lean_object* v_prec_77_){
_start:
{
if (lean_obj_tag(v_x_76_) == 0)
{
lean_object* v_val_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_98_; 
v_val_78_ = lean_ctor_get(v_x_76_, 0);
v_isSharedCheck_98_ = !lean_is_exclusive(v_x_76_);
if (v_isSharedCheck_98_ == 0)
{
v___x_80_ = v_x_76_;
v_isShared_81_ = v_isSharedCheck_98_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_val_78_);
lean_dec(v_x_76_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_98_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___y_83_; lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_94_ = lean_unsigned_to_nat(1024u);
v___x_95_ = lean_nat_dec_le(v___x_94_, v_prec_77_);
if (v___x_95_ == 0)
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_83_ = v___x_96_;
goto v___jp_82_;
}
else
{
lean_object* v___x_97_; 
v___x_97_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_83_ = v___x_97_;
goto v___jp_82_;
}
v___jp_82_:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_87_; 
v___x_84_ = ((lean_object*)(l_Lean_instReprLiteral_repr___closed__2));
v___x_85_ = l_Nat_reprFast(v_val_78_);
if (v_isShared_81_ == 0)
{
lean_ctor_set_tag(v___x_80_, 3);
lean_ctor_set(v___x_80_, 0, v___x_85_);
v___x_87_ = v___x_80_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v___x_85_);
v___x_87_ = v_reuseFailAlloc_93_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_88_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_84_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
lean_inc(v___y_83_);
v___x_89_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_89_, 0, v___y_83_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = 0;
v___x_91_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_91_, 0, v___x_89_);
lean_ctor_set_uint8(v___x_91_, sizeof(void*)*1, v___x_90_);
v___x_92_ = l_Repr_addAppParen(v___x_91_, v_prec_77_);
return v___x_92_;
}
}
}
}
else
{
lean_object* v_val_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_119_; 
v_val_99_ = lean_ctor_get(v_x_76_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v_x_76_);
if (v_isSharedCheck_119_ == 0)
{
v___x_101_ = v_x_76_;
v_isShared_102_ = v_isSharedCheck_119_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_val_99_);
lean_dec(v_x_76_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_119_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___y_104_; lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(1024u);
v___x_116_ = lean_nat_dec_le(v___x_115_, v_prec_77_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; 
v___x_117_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_104_ = v___x_117_;
goto v___jp_103_;
}
else
{
lean_object* v___x_118_; 
v___x_118_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_104_ = v___x_118_;
goto v___jp_103_;
}
v___jp_103_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_108_; 
v___x_105_ = ((lean_object*)(l_Lean_instReprLiteral_repr___closed__7));
v___x_106_ = l_String_quote(v_val_99_);
if (v_isShared_102_ == 0)
{
lean_ctor_set_tag(v___x_101_, 3);
lean_ctor_set(v___x_101_, 0, v___x_106_);
v___x_108_ = v___x_101_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_106_);
v___x_108_ = v_reuseFailAlloc_114_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_105_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
lean_inc(v___y_104_);
v___x_110_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_110_, 0, v___y_104_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = 0;
v___x_112_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_112_, 0, v___x_110_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*1, v___x_111_);
v___x_113_ = l_Repr_addAppParen(v___x_112_, v_prec_77_);
return v___x_113_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLiteral_repr___boxed(lean_object* v_x_120_, lean_object* v_prec_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_instReprLiteral_repr(v_x_120_, v_prec_121_);
lean_dec(v_prec_121_);
return v_res_122_;
}
}
LEAN_EXPORT uint64_t l_Lean_Literal_hash(lean_object* v_x_125_){
_start:
{
if (lean_obj_tag(v_x_125_) == 0)
{
lean_object* v_val_126_; uint64_t v___x_127_; 
v_val_126_ = lean_ctor_get(v_x_125_, 0);
v___x_127_ = lean_uint64_of_nat(v_val_126_);
return v___x_127_;
}
else
{
lean_object* v_val_128_; uint64_t v___x_129_; 
v_val_128_ = lean_ctor_get(v_x_125_, 0);
v___x_129_ = lean_string_hash(v_val_128_);
return v___x_129_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_hash___boxed(lean_object* v_x_130_){
_start:
{
uint64_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = l_Lean_Literal_hash(v_x_130_);
lean_dec_ref(v_x_130_);
v_r_132_ = lean_box_uint64(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT uint8_t l_Lean_Literal_lt(lean_object* v_x_135_, lean_object* v_x_136_){
_start:
{
if (lean_obj_tag(v_x_135_) == 0)
{
if (lean_obj_tag(v_x_136_) == 0)
{
lean_object* v_val_137_; lean_object* v_val_138_; uint8_t v___x_139_; 
v_val_137_ = lean_ctor_get(v_x_135_, 0);
v_val_138_ = lean_ctor_get(v_x_136_, 0);
v___x_139_ = lean_nat_dec_lt(v_val_137_, v_val_138_);
return v___x_139_;
}
else
{
uint8_t v___x_140_; 
v___x_140_ = 1;
return v___x_140_;
}
}
else
{
if (lean_obj_tag(v_x_136_) == 1)
{
lean_object* v_val_141_; lean_object* v_val_142_; uint8_t v___x_143_; 
v_val_141_ = lean_ctor_get(v_x_135_, 0);
v_val_142_ = lean_ctor_get(v_x_136_, 0);
v___x_143_ = lean_string_dec_lt(v_val_141_, v_val_142_);
return v___x_143_;
}
else
{
uint8_t v___x_144_; 
v___x_144_ = 0;
return v___x_144_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_lt___boxed(lean_object* v_x_145_, lean_object* v_x_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l_Lean_Literal_lt(v_x_145_, v_x_146_);
lean_dec_ref(v_x_146_);
lean_dec_ref(v_x_145_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
static lean_object* _init_l_Lean_instLTLiteral(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_box(0);
return v___x_149_;
}
}
LEAN_EXPORT uint8_t l_Lean_instDecidableLtLiteral(lean_object* v_a_150_, lean_object* v_b_151_){
_start:
{
uint8_t v___x_152_; 
v___x_152_ = l_Lean_Literal_lt(v_a_150_, v_b_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_instDecidableLtLiteral___boxed(lean_object* v_a_153_, lean_object* v_b_154_){
_start:
{
uint8_t v_res_155_; lean_object* v_r_156_; 
v_res_155_ = l_Lean_instDecidableLtLiteral(v_a_153_, v_b_154_);
lean_dec_ref(v_b_154_);
lean_dec_ref(v_a_153_);
v_r_156_ = lean_box(v_res_155_);
return v_r_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorIdx(uint8_t v_x_157_){
_start:
{
switch(v_x_157_)
{
case 0:
{
lean_object* v___x_158_; 
v___x_158_ = lean_unsigned_to_nat(0u);
return v___x_158_;
}
case 1:
{
lean_object* v___x_159_; 
v___x_159_ = lean_unsigned_to_nat(1u);
return v___x_159_;
}
case 2:
{
lean_object* v___x_160_; 
v___x_160_ = lean_unsigned_to_nat(2u);
return v___x_160_;
}
default: 
{
lean_object* v___x_161_; 
v___x_161_ = lean_unsigned_to_nat(3u);
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorIdx___boxed(lean_object* v_x_162_){
_start:
{
uint8_t v_x_boxed_163_; lean_object* v_res_164_; 
v_x_boxed_163_ = lean_unbox(v_x_162_);
v_res_164_ = l_Lean_BinderInfo_ctorIdx(v_x_boxed_163_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorElim___redArg(lean_object* v_k_165_){
_start:
{
lean_inc(v_k_165_);
return v_k_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorElim___redArg___boxed(lean_object* v_k_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_BinderInfo_ctorElim___redArg(v_k_166_);
lean_dec(v_k_166_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorElim(lean_object* v_motive_168_, lean_object* v_ctorIdx_169_, uint8_t v_t_170_, lean_object* v_h_171_, lean_object* v_k_172_){
_start:
{
lean_inc(v_k_172_);
return v_k_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_ctorElim___boxed(lean_object* v_motive_173_, lean_object* v_ctorIdx_174_, lean_object* v_t_175_, lean_object* v_h_176_, lean_object* v_k_177_){
_start:
{
uint8_t v_t_boxed_178_; lean_object* v_res_179_; 
v_t_boxed_178_ = lean_unbox(v_t_175_);
v_res_179_ = l_Lean_BinderInfo_ctorElim(v_motive_173_, v_ctorIdx_174_, v_t_boxed_178_, v_h_176_, v_k_177_);
lean_dec(v_k_177_);
lean_dec(v_ctorIdx_174_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_default_elim___redArg(lean_object* v_default_180_){
_start:
{
lean_inc(v_default_180_);
return v_default_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_default_elim___redArg___boxed(lean_object* v_default_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lean_BinderInfo_default_elim___redArg(v_default_181_);
lean_dec(v_default_181_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_default_elim(lean_object* v_motive_183_, uint8_t v_t_184_, lean_object* v_h_185_, lean_object* v_default_186_){
_start:
{
lean_inc(v_default_186_);
return v_default_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_default_elim___boxed(lean_object* v_motive_187_, lean_object* v_t_188_, lean_object* v_h_189_, lean_object* v_default_190_){
_start:
{
uint8_t v_t_boxed_191_; lean_object* v_res_192_; 
v_t_boxed_191_ = lean_unbox(v_t_188_);
v_res_192_ = l_Lean_BinderInfo_default_elim(v_motive_187_, v_t_boxed_191_, v_h_189_, v_default_190_);
lean_dec(v_default_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_implicit_elim___redArg(lean_object* v_implicit_193_){
_start:
{
lean_inc(v_implicit_193_);
return v_implicit_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_implicit_elim___redArg___boxed(lean_object* v_implicit_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_BinderInfo_implicit_elim___redArg(v_implicit_194_);
lean_dec(v_implicit_194_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_implicit_elim(lean_object* v_motive_196_, uint8_t v_t_197_, lean_object* v_h_198_, lean_object* v_implicit_199_){
_start:
{
lean_inc(v_implicit_199_);
return v_implicit_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_implicit_elim___boxed(lean_object* v_motive_200_, lean_object* v_t_201_, lean_object* v_h_202_, lean_object* v_implicit_203_){
_start:
{
uint8_t v_t_boxed_204_; lean_object* v_res_205_; 
v_t_boxed_204_ = lean_unbox(v_t_201_);
v_res_205_ = l_Lean_BinderInfo_implicit_elim(v_motive_200_, v_t_boxed_204_, v_h_202_, v_implicit_203_);
lean_dec(v_implicit_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_strictImplicit_elim___redArg(lean_object* v_strictImplicit_206_){
_start:
{
lean_inc(v_strictImplicit_206_);
return v_strictImplicit_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_strictImplicit_elim___redArg___boxed(lean_object* v_strictImplicit_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_BinderInfo_strictImplicit_elim___redArg(v_strictImplicit_207_);
lean_dec(v_strictImplicit_207_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_strictImplicit_elim(lean_object* v_motive_209_, uint8_t v_t_210_, lean_object* v_h_211_, lean_object* v_strictImplicit_212_){
_start:
{
lean_inc(v_strictImplicit_212_);
return v_strictImplicit_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_strictImplicit_elim___boxed(lean_object* v_motive_213_, lean_object* v_t_214_, lean_object* v_h_215_, lean_object* v_strictImplicit_216_){
_start:
{
uint8_t v_t_boxed_217_; lean_object* v_res_218_; 
v_t_boxed_217_ = lean_unbox(v_t_214_);
v_res_218_ = l_Lean_BinderInfo_strictImplicit_elim(v_motive_213_, v_t_boxed_217_, v_h_215_, v_strictImplicit_216_);
lean_dec(v_strictImplicit_216_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_instImplicit_elim___redArg(lean_object* v_instImplicit_219_){
_start:
{
lean_inc(v_instImplicit_219_);
return v_instImplicit_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_instImplicit_elim___redArg___boxed(lean_object* v_instImplicit_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_BinderInfo_instImplicit_elim___redArg(v_instImplicit_220_);
lean_dec(v_instImplicit_220_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_instImplicit_elim(lean_object* v_motive_222_, uint8_t v_t_223_, lean_object* v_h_224_, lean_object* v_instImplicit_225_){
_start:
{
lean_inc(v_instImplicit_225_);
return v_instImplicit_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_instImplicit_elim___boxed(lean_object* v_motive_226_, lean_object* v_t_227_, lean_object* v_h_228_, lean_object* v_instImplicit_229_){
_start:
{
uint8_t v_t_boxed_230_; lean_object* v_res_231_; 
v_t_boxed_230_ = lean_unbox(v_t_227_);
v_res_231_ = l_Lean_BinderInfo_instImplicit_elim(v_motive_226_, v_t_boxed_230_, v_h_228_, v_instImplicit_229_);
lean_dec(v_instImplicit_229_);
return v_res_231_;
}
}
static uint8_t _init_l_Lean_instInhabitedBinderInfo_default(void){
_start:
{
uint8_t v___x_232_; 
v___x_232_ = 0;
return v___x_232_;
}
}
static uint8_t _init_l_Lean_instInhabitedBinderInfo(void){
_start:
{
uint8_t v___x_233_; 
v___x_233_ = 0;
return v___x_233_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t v_x_234_, uint8_t v_y_235_){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_236_ = l_Lean_BinderInfo_ctorIdx(v_x_234_);
v___x_237_ = l_Lean_BinderInfo_ctorIdx(v_y_235_);
v___x_238_ = lean_nat_dec_eq(v___x_236_, v___x_237_);
lean_dec(v___x_237_);
lean_dec(v___x_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqBinderInfo_beq___boxed(lean_object* v_x_239_, lean_object* v_y_240_){
_start:
{
uint8_t v_x_21__boxed_241_; uint8_t v_y_22__boxed_242_; uint8_t v_res_243_; lean_object* v_r_244_; 
v_x_21__boxed_241_ = lean_unbox(v_x_239_);
v_y_22__boxed_242_ = lean_unbox(v_y_240_);
v_res_243_ = l_Lean_instBEqBinderInfo_beq(v_x_21__boxed_241_, v_y_22__boxed_242_);
v_r_244_ = lean_box(v_res_243_);
return v_r_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprBinderInfo_repr(uint8_t v_x_259_, lean_object* v_prec_260_){
_start:
{
lean_object* v___y_262_; lean_object* v___y_269_; lean_object* v___y_276_; lean_object* v___y_283_; 
switch(v_x_259_)
{
case 0:
{
lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_289_ = lean_unsigned_to_nat(1024u);
v___x_290_ = lean_nat_dec_le(v___x_289_, v_prec_260_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; 
v___x_291_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_262_ = v___x_291_;
goto v___jp_261_;
}
else
{
lean_object* v___x_292_; 
v___x_292_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_262_ = v___x_292_;
goto v___jp_261_;
}
}
case 1:
{
lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_293_ = lean_unsigned_to_nat(1024u);
v___x_294_ = lean_nat_dec_le(v___x_293_, v_prec_260_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; 
v___x_295_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_269_ = v___x_295_;
goto v___jp_268_;
}
else
{
lean_object* v___x_296_; 
v___x_296_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_269_ = v___x_296_;
goto v___jp_268_;
}
}
case 2:
{
lean_object* v___x_297_; uint8_t v___x_298_; 
v___x_297_ = lean_unsigned_to_nat(1024u);
v___x_298_ = lean_nat_dec_le(v___x_297_, v_prec_260_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; 
v___x_299_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_276_ = v___x_299_;
goto v___jp_275_;
}
else
{
lean_object* v___x_300_; 
v___x_300_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_276_ = v___x_300_;
goto v___jp_275_;
}
}
default: 
{
lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_301_ = lean_unsigned_to_nat(1024u);
v___x_302_ = lean_nat_dec_le(v___x_301_, v_prec_260_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; 
v___x_303_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_283_ = v___x_303_;
goto v___jp_282_;
}
else
{
lean_object* v___x_304_; 
v___x_304_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_283_ = v___x_304_;
goto v___jp_282_;
}
}
}
v___jp_261_:
{
lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_263_ = ((lean_object*)(l_Lean_instReprBinderInfo_repr___closed__1));
lean_inc(v___y_262_);
v___x_264_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_264_, 0, v___y_262_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = 0;
v___x_266_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_266_, 0, v___x_264_);
lean_ctor_set_uint8(v___x_266_, sizeof(void*)*1, v___x_265_);
v___x_267_ = l_Repr_addAppParen(v___x_266_, v_prec_260_);
return v___x_267_;
}
v___jp_268_:
{
lean_object* v___x_270_; lean_object* v___x_271_; uint8_t v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_270_ = ((lean_object*)(l_Lean_instReprBinderInfo_repr___closed__3));
lean_inc(v___y_269_);
v___x_271_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_271_, 0, v___y_269_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = 0;
v___x_273_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_273_, 0, v___x_271_);
lean_ctor_set_uint8(v___x_273_, sizeof(void*)*1, v___x_272_);
v___x_274_ = l_Repr_addAppParen(v___x_273_, v_prec_260_);
return v___x_274_;
}
v___jp_275_:
{
lean_object* v___x_277_; lean_object* v___x_278_; uint8_t v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_277_ = ((lean_object*)(l_Lean_instReprBinderInfo_repr___closed__5));
lean_inc(v___y_276_);
v___x_278_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_278_, 0, v___y_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = 0;
v___x_280_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_280_, 0, v___x_278_);
lean_ctor_set_uint8(v___x_280_, sizeof(void*)*1, v___x_279_);
v___x_281_ = l_Repr_addAppParen(v___x_280_, v_prec_260_);
return v___x_281_;
}
v___jp_282_:
{
lean_object* v___x_284_; lean_object* v___x_285_; uint8_t v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_284_ = ((lean_object*)(l_Lean_instReprBinderInfo_repr___closed__7));
lean_inc(v___y_283_);
v___x_285_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_285_, 0, v___y_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = 0;
v___x_287_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_287_, 0, v___x_285_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*1, v___x_286_);
v___x_288_ = l_Repr_addAppParen(v___x_287_, v_prec_260_);
return v___x_288_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprBinderInfo_repr___boxed(lean_object* v_x_305_, lean_object* v_prec_306_){
_start:
{
uint8_t v_x_221__boxed_307_; lean_object* v_res_308_; 
v_x_221__boxed_307_ = lean_unbox(v_x_305_);
v_res_308_ = l_Lean_instReprBinderInfo_repr(v_x_221__boxed_307_, v_prec_306_);
lean_dec(v_prec_306_);
return v_res_308_;
}
}
LEAN_EXPORT uint64_t l_Lean_BinderInfo_hash(uint8_t v_x_311_){
_start:
{
switch(v_x_311_)
{
case 0:
{
uint64_t v___x_312_; 
v___x_312_ = 947ULL;
return v___x_312_;
}
case 1:
{
uint64_t v___x_313_; 
v___x_313_ = 1019ULL;
return v___x_313_;
}
case 2:
{
uint64_t v___x_314_; 
v___x_314_ = 1087ULL;
return v___x_314_;
}
default: 
{
uint64_t v___x_315_; 
v___x_315_ = 1153ULL;
return v___x_315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_hash___boxed(lean_object* v_x_316_){
_start:
{
uint8_t v_x_52__boxed_317_; uint64_t v_res_318_; lean_object* v_r_319_; 
v_x_52__boxed_317_ = lean_unbox(v_x_316_);
v_res_318_ = l_Lean_BinderInfo_hash(v_x_52__boxed_317_);
v_r_319_ = lean_box_uint64(v_res_318_);
return v_r_319_;
}
}
LEAN_EXPORT uint8_t l_Lean_BinderInfo_isExplicit(uint8_t v_x_320_){
_start:
{
switch(v_x_320_)
{
case 1:
{
uint8_t v___x_321_; 
v___x_321_ = 0;
return v___x_321_;
}
case 2:
{
uint8_t v___x_322_; 
v___x_322_ = 0;
return v___x_322_;
}
case 3:
{
uint8_t v___x_323_; 
v___x_323_ = 0;
return v___x_323_;
}
default: 
{
uint8_t v___x_324_; 
v___x_324_ = 1;
return v___x_324_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_isExplicit___boxed(lean_object* v_x_325_){
_start:
{
uint8_t v_x_27__boxed_326_; uint8_t v_res_327_; lean_object* v_r_328_; 
v_x_27__boxed_326_ = lean_unbox(v_x_325_);
v_res_327_ = l_Lean_BinderInfo_isExplicit(v_x_27__boxed_326_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t v_x_331_){
_start:
{
if (v_x_331_ == 3)
{
uint8_t v___x_332_; 
v___x_332_ = 1;
return v___x_332_;
}
else
{
uint8_t v___x_333_; 
v___x_333_ = 0;
return v___x_333_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_isInstImplicit___boxed(lean_object* v_x_334_){
_start:
{
uint8_t v_x_17__boxed_335_; uint8_t v_res_336_; lean_object* v_r_337_; 
v_x_17__boxed_335_ = lean_unbox(v_x_334_);
v_res_336_ = l_Lean_BinderInfo_isInstImplicit(v_x_17__boxed_335_);
v_r_337_ = lean_box(v_res_336_);
return v_r_337_;
}
}
LEAN_EXPORT uint8_t l_Lean_BinderInfo_isImplicit(uint8_t v_x_338_){
_start:
{
if (v_x_338_ == 1)
{
uint8_t v___x_339_; 
v___x_339_ = 1;
return v___x_339_;
}
else
{
uint8_t v___x_340_; 
v___x_340_ = 0;
return v___x_340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_isImplicit___boxed(lean_object* v_x_341_){
_start:
{
uint8_t v_x_17__boxed_342_; uint8_t v_res_343_; lean_object* v_r_344_; 
v_x_17__boxed_342_ = lean_unbox(v_x_341_);
v_res_343_ = l_Lean_BinderInfo_isImplicit(v_x_17__boxed_342_);
v_r_344_ = lean_box(v_res_343_);
return v_r_344_;
}
}
LEAN_EXPORT uint8_t l_Lean_BinderInfo_isStrictImplicit(uint8_t v_x_345_){
_start:
{
if (v_x_345_ == 2)
{
uint8_t v___x_346_; 
v___x_346_ = 1;
return v___x_346_;
}
else
{
uint8_t v___x_347_; 
v___x_347_ = 0;
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_isStrictImplicit___boxed(lean_object* v_x_348_){
_start:
{
uint8_t v_x_17__boxed_349_; uint8_t v_res_350_; lean_object* v_r_351_; 
v_x_17__boxed_349_ = lean_unbox(v_x_348_);
v_res_350_ = l_Lean_BinderInfo_isStrictImplicit(v_x_17__boxed_349_);
v_r_351_ = lean_box(v_res_350_);
return v_r_351_;
}
}
static lean_object* _init_l_Lean_MData_empty(void){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = lean_box(0);
return v___x_352_;
}
}
static uint64_t _init_l_Lean_instInhabitedData__1___aux__1(void){
_start:
{
uint64_t v___x_353_; 
v___x_353_ = 0ULL;
return v___x_353_;
}
}
static uint64_t _init_l_Lean_instInhabitedData__1(void){
_start:
{
uint64_t v___x_354_; 
v___x_354_ = 0ULL;
return v___x_354_;
}
}
LEAN_EXPORT uint64_t l_Lean_Expr_Data_hash(uint64_t v_c_355_){
_start:
{
uint32_t v___x_356_; uint64_t v___x_357_; 
v___x_356_ = lean_uint64_to_uint32(v_c_355_);
v___x_357_ = lean_uint32_to_uint64(v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_Data_hash___boxed(lean_object* v_c_358_){
_start:
{
uint64_t v_c_boxed_359_; uint64_t v_res_360_; lean_object* v_r_361_; 
v_c_boxed_359_ = lean_unbox_uint64(v_c_358_);
lean_dec_ref(v_c_358_);
v_res_360_ = l_Lean_Expr_Data_hash(v_c_boxed_359_);
v_r_361_ = lean_box_uint64(v_res_360_);
return v_r_361_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_Data_approxDepth(uint64_t v_c_364_){
_start:
{
uint64_t v___x_365_; uint64_t v___x_366_; uint64_t v___x_367_; uint64_t v___x_368_; uint8_t v___x_369_; 
v___x_365_ = 32ULL;
v___x_366_ = lean_uint64_shift_right(v_c_364_, v___x_365_);
v___x_367_ = 255ULL;
v___x_368_ = lean_uint64_land(v___x_366_, v___x_367_);
v___x_369_ = lean_uint64_to_uint8(v___x_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_Data_approxDepth___boxed(lean_object* v_c_370_){
_start:
{
uint64_t v_c_boxed_371_; uint8_t v_res_372_; lean_object* v_r_373_; 
v_c_boxed_371_ = lean_unbox_uint64(v_c_370_);
lean_dec_ref(v_c_370_);
v_res_372_ = l_Lean_Expr_Data_approxDepth(v_c_boxed_371_);
v_r_373_ = lean_box(v_res_372_);
return v_r_373_;
}
}
LEAN_EXPORT uint32_t l_Lean_Expr_Data_looseBVarRange(uint64_t v_c_374_){
_start:
{
uint64_t v___x_375_; uint64_t v___x_376_; uint32_t v___x_377_; 
v___x_375_ = 44ULL;
v___x_376_ = lean_uint64_shift_right(v_c_374_, v___x_375_);
v___x_377_ = lean_uint64_to_uint32(v___x_376_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_Data_looseBVarRange___boxed(lean_object* v_c_378_){
_start:
{
uint64_t v_c_boxed_379_; uint32_t v_res_380_; lean_object* v_r_381_; 
v_c_boxed_379_ = lean_unbox_uint64(v_c_378_);
lean_dec_ref(v_c_378_);
v_res_380_ = l_Lean_Expr_Data_looseBVarRange(v_c_boxed_379_);
v_r_381_ = lean_box_uint32(v_res_380_);
return v_r_381_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_Data_hasFVar(uint64_t v_c_382_){
_start:
{
uint64_t v___x_383_; uint64_t v___x_384_; uint64_t v___x_385_; uint64_t v___x_386_; uint8_t v___x_387_; 
v___x_383_ = 40ULL;
v___x_384_ = lean_uint64_shift_right(v_c_382_, v___x_383_);
v___x_385_ = 1ULL;
v___x_386_ = lean_uint64_land(v___x_384_, v___x_385_);
v___x_387_ = lean_uint64_dec_eq(v___x_386_, v___x_385_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_Data_hasFVar___boxed(lean_object* v_c_388_){
_start:
{
uint64_t v_c_boxed_389_; uint8_t v_res_390_; lean_object* v_r_391_; 
v_c_boxed_389_ = lean_unbox_uint64(v_c_388_);
lean_dec_ref(v_c_388_);
v_res_390_ = l_Lean_Expr_Data_hasFVar(v_c_boxed_389_);
v_r_391_ = lean_box(v_res_390_);
return v_r_391_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_Data_hasExprMVar(uint64_t v_c_392_){
_start:
{
uint64_t v___x_393_; uint64_t v___x_394_; uint64_t v___x_395_; uint64_t v___x_396_; uint8_t v___x_397_; 
v___x_393_ = 41ULL;
v___x_394_ = lean_uint64_shift_right(v_c_392_, v___x_393_);
v___x_395_ = 1ULL;
v___x_396_ = lean_uint64_land(v___x_394_, v___x_395_);
v___x_397_ = lean_uint64_dec_eq(v___x_396_, v___x_395_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_Data_hasExprMVar___boxed(lean_object* v_c_398_){
_start:
{
uint64_t v_c_boxed_399_; uint8_t v_res_400_; lean_object* v_r_401_; 
v_c_boxed_399_ = lean_unbox_uint64(v_c_398_);
lean_dec_ref(v_c_398_);
v_res_400_ = l_Lean_Expr_Data_hasExprMVar(v_c_boxed_399_);
v_r_401_ = lean_box(v_res_400_);
return v_r_401_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_Data_hasLevelMVar(uint64_t v_c_402_){
_start:
{
uint64_t v___x_403_; uint64_t v___x_404_; uint64_t v___x_405_; uint64_t v___x_406_; uint8_t v___x_407_; 
v___x_403_ = 42ULL;
v___x_404_ = lean_uint64_shift_right(v_c_402_, v___x_403_);
v___x_405_ = 1ULL;
v___x_406_ = lean_uint64_land(v___x_404_, v___x_405_);
v___x_407_ = lean_uint64_dec_eq(v___x_406_, v___x_405_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_Data_hasLevelMVar___boxed(lean_object* v_c_408_){
_start:
{
uint64_t v_c_boxed_409_; uint8_t v_res_410_; lean_object* v_r_411_; 
v_c_boxed_409_ = lean_unbox_uint64(v_c_408_);
lean_dec_ref(v_c_408_);
v_res_410_ = l_Lean_Expr_Data_hasLevelMVar(v_c_boxed_409_);
v_r_411_ = lean_box(v_res_410_);
return v_r_411_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_Data_hasLevelParam(uint64_t v_c_412_){
_start:
{
uint64_t v___x_413_; uint64_t v___x_414_; uint64_t v___x_415_; uint64_t v___x_416_; uint8_t v___x_417_; 
v___x_413_ = 43ULL;
v___x_414_ = lean_uint64_shift_right(v_c_412_, v___x_413_);
v___x_415_ = 1ULL;
v___x_416_ = lean_uint64_land(v___x_414_, v___x_415_);
v___x_417_ = lean_uint64_dec_eq(v___x_416_, v___x_415_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_Data_hasLevelParam___boxed(lean_object* v_c_418_){
_start:
{
uint64_t v_c_boxed_419_; uint8_t v_res_420_; lean_object* v_r_421_; 
v_c_boxed_419_ = lean_unbox_uint64(v_c_418_);
lean_dec_ref(v_c_418_);
v_res_420_ = l_Lean_Expr_Data_hasLevelParam(v_c_boxed_419_);
v_r_421_ = lean_box(v_res_420_);
return v_r_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_toUInt64___boxed(lean_object* v_a_00___x40___internal___hyg_423_){
_start:
{
uint8_t v_a_00___x40___internal___hyg_1__boxed_424_; uint64_t v_res_425_; lean_object* v_r_426_; 
v_a_00___x40___internal___hyg_1__boxed_424_ = lean_unbox(v_a_00___x40___internal___hyg_423_);
v_res_425_ = lean_uint8_to_uint64(v_a_00___x40___internal___hyg_1__boxed_424_);
v_r_426_ = lean_box_uint64(v_res_425_);
return v_r_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mkData___boxed(lean_object* v_h_434_, lean_object* v_looseBVarRange_435_, lean_object* v_approxDepth_436_, lean_object* v_hasFVar_437_, lean_object* v_hasExprMVar_438_, lean_object* v_hasLevelMVar_439_, lean_object* v_hasLevelParam_440_){
_start:
{
uint64_t v_h_boxed_441_; uint32_t v_approxDepth_boxed_442_; uint8_t v_hasFVar_boxed_443_; uint8_t v_hasExprMVar_boxed_444_; uint8_t v_hasLevelMVar_boxed_445_; uint8_t v_hasLevelParam_boxed_446_; uint64_t v_res_447_; lean_object* v_r_448_; 
v_h_boxed_441_ = lean_unbox_uint64(v_h_434_);
lean_dec_ref(v_h_434_);
v_approxDepth_boxed_442_ = lean_unbox_uint32(v_approxDepth_436_);
lean_dec(v_approxDepth_436_);
v_hasFVar_boxed_443_ = lean_unbox(v_hasFVar_437_);
v_hasExprMVar_boxed_444_ = lean_unbox(v_hasExprMVar_438_);
v_hasLevelMVar_boxed_445_ = lean_unbox(v_hasLevelMVar_439_);
v_hasLevelParam_boxed_446_ = lean_unbox(v_hasLevelParam_440_);
v_res_447_ = lean_expr_mk_data(v_h_boxed_441_, v_looseBVarRange_435_, v_approxDepth_boxed_442_, v_hasFVar_boxed_443_, v_hasExprMVar_boxed_444_, v_hasLevelMVar_boxed_445_, v_hasLevelParam_boxed_446_);
v_r_448_ = lean_box_uint64(v_res_447_);
return v_r_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mkAppData___boxed(lean_object* v_fData_451_, lean_object* v_aData_452_){
_start:
{
uint64_t v_fData_boxed_453_; uint64_t v_aData_boxed_454_; uint64_t v_res_455_; lean_object* v_r_456_; 
v_fData_boxed_453_ = lean_unbox_uint64(v_fData_451_);
lean_dec_ref(v_fData_451_);
v_aData_boxed_454_ = lean_unbox_uint64(v_aData_452_);
lean_dec_ref(v_aData_452_);
v_res_455_ = lean_expr_mk_app_data(v_fData_boxed_453_, v_aData_boxed_454_);
v_r_456_ = lean_box_uint64(v_res_455_);
return v_r_456_;
}
}
LEAN_EXPORT uint64_t l_Lean_Expr_mkDataForBinder(uint64_t v_h_457_, lean_object* v_looseBVarRange_458_, uint32_t v_approxDepth_459_, uint8_t v_hasFVar_460_, uint8_t v_hasExprMVar_461_, uint8_t v_hasLevelMVar_462_, uint8_t v_hasLevelParam_463_){
_start:
{
uint64_t v___x_464_; 
v___x_464_ = lean_expr_mk_data(v_h_457_, v_looseBVarRange_458_, v_approxDepth_459_, v_hasFVar_460_, v_hasExprMVar_461_, v_hasLevelMVar_462_, v_hasLevelParam_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mkDataForBinder___boxed(lean_object* v_h_465_, lean_object* v_looseBVarRange_466_, lean_object* v_approxDepth_467_, lean_object* v_hasFVar_468_, lean_object* v_hasExprMVar_469_, lean_object* v_hasLevelMVar_470_, lean_object* v_hasLevelParam_471_){
_start:
{
uint64_t v_h_boxed_472_; uint32_t v_approxDepth_boxed_473_; uint8_t v_hasFVar_boxed_474_; uint8_t v_hasExprMVar_boxed_475_; uint8_t v_hasLevelMVar_boxed_476_; uint8_t v_hasLevelParam_boxed_477_; uint64_t v_res_478_; lean_object* v_r_479_; 
v_h_boxed_472_ = lean_unbox_uint64(v_h_465_);
lean_dec_ref(v_h_465_);
v_approxDepth_boxed_473_ = lean_unbox_uint32(v_approxDepth_467_);
lean_dec(v_approxDepth_467_);
v_hasFVar_boxed_474_ = lean_unbox(v_hasFVar_468_);
v_hasExprMVar_boxed_475_ = lean_unbox(v_hasExprMVar_469_);
v_hasLevelMVar_boxed_476_ = lean_unbox(v_hasLevelMVar_470_);
v_hasLevelParam_boxed_477_ = lean_unbox(v_hasLevelParam_471_);
v_res_478_ = l_Lean_Expr_mkDataForBinder(v_h_boxed_472_, v_looseBVarRange_466_, v_approxDepth_boxed_473_, v_hasFVar_boxed_474_, v_hasExprMVar_boxed_475_, v_hasLevelMVar_boxed_476_, v_hasLevelParam_boxed_477_);
v_r_479_ = lean_box_uint64(v_res_478_);
return v_r_479_;
}
}
LEAN_EXPORT uint64_t l_Lean_Expr_mkDataForLet(uint64_t v_h_480_, lean_object* v_looseBVarRange_481_, uint32_t v_approxDepth_482_, uint8_t v_hasFVar_483_, uint8_t v_hasExprMVar_484_, uint8_t v_hasLevelMVar_485_, uint8_t v_hasLevelParam_486_){
_start:
{
uint64_t v___x_487_; 
v___x_487_ = lean_expr_mk_data(v_h_480_, v_looseBVarRange_481_, v_approxDepth_482_, v_hasFVar_483_, v_hasExprMVar_484_, v_hasLevelMVar_485_, v_hasLevelParam_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mkDataForLet___boxed(lean_object* v_h_488_, lean_object* v_looseBVarRange_489_, lean_object* v_approxDepth_490_, lean_object* v_hasFVar_491_, lean_object* v_hasExprMVar_492_, lean_object* v_hasLevelMVar_493_, lean_object* v_hasLevelParam_494_){
_start:
{
uint64_t v_h_boxed_495_; uint32_t v_approxDepth_boxed_496_; uint8_t v_hasFVar_boxed_497_; uint8_t v_hasExprMVar_boxed_498_; uint8_t v_hasLevelMVar_boxed_499_; uint8_t v_hasLevelParam_boxed_500_; uint64_t v_res_501_; lean_object* v_r_502_; 
v_h_boxed_495_ = lean_unbox_uint64(v_h_488_);
lean_dec_ref(v_h_488_);
v_approxDepth_boxed_496_ = lean_unbox_uint32(v_approxDepth_490_);
lean_dec(v_approxDepth_490_);
v_hasFVar_boxed_497_ = lean_unbox(v_hasFVar_491_);
v_hasExprMVar_boxed_498_ = lean_unbox(v_hasExprMVar_492_);
v_hasLevelMVar_boxed_499_ = lean_unbox(v_hasLevelMVar_493_);
v_hasLevelParam_boxed_500_ = lean_unbox(v_hasLevelParam_494_);
v_res_501_ = l_Lean_Expr_mkDataForLet(v_h_boxed_495_, v_looseBVarRange_489_, v_approxDepth_boxed_496_, v_hasFVar_boxed_497_, v_hasExprMVar_boxed_498_, v_hasLevelMVar_boxed_499_, v_hasLevelParam_boxed_500_);
v_r_502_ = lean_box_uint64(v_res_501_);
return v_r_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprData__1___lam__0(uint64_t v_v_512_, lean_object* v_prec_513_){
_start:
{
lean_object* v_r_515_; lean_object* v___y_519_; lean_object* v___y_520_; lean_object* v_r_525_; lean_object* v___y_532_; lean_object* v___y_533_; lean_object* v_r_538_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v_r_551_; lean_object* v_r_558_; lean_object* v___x_569_; uint64_t v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v_r_573_; uint32_t v___x_574_; uint32_t v___x_575_; uint8_t v___x_576_; 
v___x_569_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__7));
v___x_570_ = l_Lean_Expr_Data_hash(v_v_512_);
v___x_571_ = lean_uint64_to_nat(v___x_570_);
v___x_572_ = l_Nat_reprFast(v___x_571_);
v_r_573_ = lean_string_append(v___x_569_, v___x_572_);
lean_dec_ref(v___x_572_);
v___x_574_ = l_Lean_Expr_Data_looseBVarRange(v_v_512_);
v___x_575_ = 0;
v___x_576_ = lean_uint32_dec_eq(v___x_574_, v___x_575_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v_r_583_; 
v___x_577_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__8));
v___x_578_ = lean_string_append(v_r_573_, v___x_577_);
v___x_579_ = lean_uint32_to_nat(v___x_574_);
v___x_580_ = l_Nat_reprFast(v___x_579_);
v___x_581_ = lean_string_append(v___x_578_, v___x_580_);
lean_dec_ref(v___x_580_);
v___x_582_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__0));
v_r_583_ = lean_string_append(v___x_581_, v___x_582_);
v_r_558_ = v_r_583_;
goto v___jp_557_;
}
else
{
v_r_558_ = v_r_573_;
goto v___jp_557_;
}
v___jp_514_:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_516_, 0, v_r_515_);
v___x_517_ = l_Repr_addAppParen(v___x_516_, v_prec_513_);
return v___x_517_;
}
v___jp_518_:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v_r_523_; 
v___x_521_ = lean_string_append(v___y_519_, v___y_520_);
v___x_522_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__0));
v_r_523_ = lean_string_append(v___x_521_, v___x_522_);
v_r_515_ = v_r_523_;
goto v___jp_514_;
}
v___jp_524_:
{
uint8_t v___x_526_; 
v___x_526_ = l_Lean_Expr_Data_hasLevelMVar(v_v_512_);
if (v___x_526_ == 0)
{
v_r_515_ = v_r_525_;
goto v___jp_514_;
}
else
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__1));
v___x_528_ = lean_string_append(v_r_525_, v___x_527_);
if (v___x_526_ == 0)
{
lean_object* v___x_529_; 
v___x_529_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__2));
v___y_519_ = v___x_528_;
v___y_520_ = v___x_529_;
goto v___jp_518_;
}
else
{
lean_object* v___x_530_; 
v___x_530_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__3));
v___y_519_ = v___x_528_;
v___y_520_ = v___x_530_;
goto v___jp_518_;
}
}
}
v___jp_531_:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v_r_536_; 
v___x_534_ = lean_string_append(v___y_532_, v___y_533_);
v___x_535_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__0));
v_r_536_ = lean_string_append(v___x_534_, v___x_535_);
v_r_525_ = v_r_536_;
goto v___jp_524_;
}
v___jp_537_:
{
uint8_t v___x_539_; 
v___x_539_ = l_Lean_Expr_Data_hasExprMVar(v_v_512_);
if (v___x_539_ == 0)
{
v_r_525_ = v_r_538_;
goto v___jp_524_;
}
else
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__4));
v___x_541_ = lean_string_append(v_r_538_, v___x_540_);
if (v___x_539_ == 0)
{
lean_object* v___x_542_; 
v___x_542_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__2));
v___y_532_ = v___x_541_;
v___y_533_ = v___x_542_;
goto v___jp_531_;
}
else
{
lean_object* v___x_543_; 
v___x_543_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__3));
v___y_532_ = v___x_541_;
v___y_533_ = v___x_543_;
goto v___jp_531_;
}
}
}
v___jp_544_:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v_r_549_; 
v___x_547_ = lean_string_append(v___y_545_, v___y_546_);
v___x_548_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__0));
v_r_549_ = lean_string_append(v___x_547_, v___x_548_);
v_r_538_ = v_r_549_;
goto v___jp_537_;
}
v___jp_550_:
{
uint8_t v___x_552_; 
v___x_552_ = l_Lean_Expr_Data_hasFVar(v_v_512_);
if (v___x_552_ == 0)
{
v_r_538_ = v_r_551_;
goto v___jp_537_;
}
else
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__5));
v___x_554_ = lean_string_append(v_r_551_, v___x_553_);
if (v___x_552_ == 0)
{
lean_object* v___x_555_; 
v___x_555_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__2));
v___y_545_ = v___x_554_;
v___y_546_ = v___x_555_;
goto v___jp_544_;
}
else
{
lean_object* v___x_556_; 
v___x_556_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__3));
v___y_545_ = v___x_554_;
v___y_546_ = v___x_556_;
goto v___jp_544_;
}
}
}
v___jp_557_:
{
uint8_t v___x_559_; uint8_t v___x_560_; uint8_t v___x_561_; 
v___x_559_ = l_Lean_Expr_Data_approxDepth(v_v_512_);
v___x_560_ = 0;
v___x_561_ = lean_uint8_dec_eq(v___x_559_, v___x_560_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v_r_568_; 
v___x_562_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__6));
v___x_563_ = lean_string_append(v_r_558_, v___x_562_);
v___x_564_ = lean_uint8_to_nat(v___x_559_);
v___x_565_ = l_Nat_reprFast(v___x_564_);
v___x_566_ = lean_string_append(v___x_563_, v___x_565_);
lean_dec_ref(v___x_565_);
v___x_567_ = ((lean_object*)(l_Lean_instReprData__1___lam__0___closed__0));
v_r_568_ = lean_string_append(v___x_566_, v___x_567_);
v_r_551_ = v_r_568_;
goto v___jp_550_;
}
else
{
v_r_551_ = v_r_558_;
goto v___jp_550_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprData__1___lam__0___boxed(lean_object* v_v_584_, lean_object* v_prec_585_){
_start:
{
uint64_t v_v_boxed_586_; lean_object* v_res_587_; 
v_v_boxed_586_ = lean_unbox_uint64(v_v_584_);
lean_dec_ref(v_v_584_);
v_res_587_ = l_Lean_instReprData__1___lam__0(v_v_boxed_586_, v_prec_585_);
lean_dec(v_prec_585_);
return v_res_587_;
}
}
static lean_object* _init_l_Lean_instInhabitedFVarId_default___closed__0(void){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = lean_box(0);
v___x_591_ = l_unsafeCast___redArg(v___x_590_);
return v___x_591_;
}
}
static lean_object* _init_l_Lean_instInhabitedFVarId_default(void){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = lean_obj_once(&l_Lean_instInhabitedFVarId_default___closed__0, &l_Lean_instInhabitedFVarId_default___closed__0_once, _init_l_Lean_instInhabitedFVarId_default___closed__0);
return v___x_592_;
}
}
static lean_object* _init_l_Lean_instInhabitedFVarId(void){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l_Lean_instInhabitedFVarId_default;
return v___x_593_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqFVarId_beq(lean_object* v_x_594_, lean_object* v_x_595_){
_start:
{
uint8_t v___x_596_; 
v___x_596_ = lean_name_eq(v_x_594_, v_x_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object* v_x_597_, lean_object* v_x_598_){
_start:
{
uint8_t v_res_599_; lean_object* v_r_600_; 
v_res_599_ = l_Lean_instBEqFVarId_beq(v_x_597_, v_x_598_);
lean_dec(v_x_598_);
lean_dec(v_x_597_);
v_r_600_ = lean_box(v_res_599_);
return v_r_600_;
}
}
static uint64_t _init_l_Lean_instHashableFVarId_hash___closed__0(void){
_start:
{
uint64_t v___x_603_; uint64_t v___x_604_; uint64_t v___x_605_; 
v___x_603_ = 1723ULL;
v___x_604_ = 0ULL;
v___x_605_ = lean_uint64_mix_hash(v___x_604_, v___x_603_);
return v___x_605_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableFVarId_hash(lean_object* v_x_606_){
_start:
{
uint64_t v___x_607_; lean_object* v___x_608_; 
v___x_607_ = 0ULL;
v___x_608_ = l_unsafeCast___redArg(v_x_606_);
if (lean_obj_tag(v___x_608_) == 0)
{
uint64_t v___x_609_; 
v___x_609_ = lean_uint64_once(&l_Lean_instHashableFVarId_hash___closed__0, &l_Lean_instHashableFVarId_hash___closed__0_once, _init_l_Lean_instHashableFVarId_hash___closed__0);
return v___x_609_;
}
else
{
uint64_t v_hash_610_; uint64_t v___x_611_; 
v_hash_610_ = lean_ctor_get_uint64(v___x_608_, sizeof(void*)*2);
lean_dec(v___x_608_);
v___x_611_ = lean_uint64_mix_hash(v___x_607_, v_hash_610_);
return v___x_611_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object* v_x_612_){
_start:
{
uint64_t v_res_613_; lean_object* v_r_614_; 
v_res_613_ = l_Lean_instHashableFVarId_hash(v_x_612_);
lean_dec(v_x_612_);
v_r_614_ = lean_box_uint64(v_res_613_);
return v_r_614_;
}
}
static lean_object* _init_l_Lean_instInhabitedFVarIdSet___aux__1(void){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = lean_box(1);
return v___x_619_;
}
}
static lean_object* _init_l_Lean_instInhabitedFVarIdSet(void){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = lean_box(1);
return v___x_620_;
}
}
static lean_object* _init_l_Lean_instEmptyCollectionFVarIdSet___aux__1(void){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = lean_box(1);
return v___x_621_;
}
}
static lean_object* _init_l_Lean_instEmptyCollectionFVarIdSet(void){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = lean_box(1);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_instSingletonFVarIdFVarIdSet___aux__1(lean_object* v_e_624_){
_start:
{
lean_object* v___f_625_; lean_object* v___x_626_; uint8_t v___x_627_; 
v___f_625_ = ((lean_object*)(l_Lean_instSingletonFVarIdFVarIdSet___aux__1___closed__0));
v___x_626_ = lean_box(1);
lean_inc(v_e_624_);
v___x_627_ = l_Std_DTreeMap_Internal_Impl_contains___redArg(v___f_625_, v_e_624_, v___x_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = lean_box(0);
v___x_629_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_625_, v_e_624_, v___x_628_, v___x_626_);
return v___x_629_;
}
else
{
lean_dec(v_e_624_);
return v___x_626_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object* v_k_630_, lean_object* v_v_631_, lean_object* v_t_632_){
_start:
{
if (lean_obj_tag(v_t_632_) == 0)
{
lean_object* v_size_633_; lean_object* v_k_634_; lean_object* v_v_635_; lean_object* v_l_636_; lean_object* v_r_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_917_; 
v_size_633_ = lean_ctor_get(v_t_632_, 0);
v_k_634_ = lean_ctor_get(v_t_632_, 1);
v_v_635_ = lean_ctor_get(v_t_632_, 2);
v_l_636_ = lean_ctor_get(v_t_632_, 3);
v_r_637_ = lean_ctor_get(v_t_632_, 4);
v_isSharedCheck_917_ = !lean_is_exclusive(v_t_632_);
if (v_isSharedCheck_917_ == 0)
{
v___x_639_ = v_t_632_;
v_isShared_640_ = v_isSharedCheck_917_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_r_637_);
lean_inc(v_l_636_);
lean_inc(v_v_635_);
lean_inc(v_k_634_);
lean_inc(v_size_633_);
lean_dec(v_t_632_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_917_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
uint8_t v___x_641_; 
v___x_641_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_630_, v_k_634_);
switch(v___x_641_)
{
case 0:
{
lean_object* v_impl_642_; lean_object* v___x_643_; 
lean_dec(v_size_633_);
v_impl_642_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_k_630_, v_v_631_, v_l_636_);
v___x_643_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_637_) == 0)
{
lean_object* v_size_644_; lean_object* v_size_645_; lean_object* v_k_646_; lean_object* v_v_647_; lean_object* v_l_648_; lean_object* v_r_649_; lean_object* v___x_650_; lean_object* v___x_651_; uint8_t v___x_652_; 
v_size_644_ = lean_ctor_get(v_r_637_, 0);
v_size_645_ = lean_ctor_get(v_impl_642_, 0);
lean_inc(v_size_645_);
v_k_646_ = lean_ctor_get(v_impl_642_, 1);
lean_inc(v_k_646_);
v_v_647_ = lean_ctor_get(v_impl_642_, 2);
lean_inc(v_v_647_);
v_l_648_ = lean_ctor_get(v_impl_642_, 3);
lean_inc(v_l_648_);
v_r_649_ = lean_ctor_get(v_impl_642_, 4);
lean_inc(v_r_649_);
v___x_650_ = lean_unsigned_to_nat(3u);
v___x_651_ = lean_nat_mul(v___x_650_, v_size_644_);
v___x_652_ = lean_nat_dec_lt(v___x_651_, v_size_645_);
lean_dec(v___x_651_);
if (v___x_652_ == 0)
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_656_; 
lean_dec(v_r_649_);
lean_dec(v_l_648_);
lean_dec(v_v_647_);
lean_dec(v_k_646_);
v___x_653_ = lean_nat_add(v___x_643_, v_size_645_);
lean_dec(v_size_645_);
v___x_654_ = lean_nat_add(v___x_653_, v_size_644_);
lean_dec(v___x_653_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 3, v_impl_642_);
lean_ctor_set(v___x_639_, 0, v___x_654_);
v___x_656_ = v___x_639_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_654_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_657_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_657_, 3, v_impl_642_);
lean_ctor_set(v_reuseFailAlloc_657_, 4, v_r_637_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
else
{
lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_723_; 
v_isSharedCheck_723_ = !lean_is_exclusive(v_impl_642_);
if (v_isSharedCheck_723_ == 0)
{
lean_object* v_unused_724_; lean_object* v_unused_725_; lean_object* v_unused_726_; lean_object* v_unused_727_; lean_object* v_unused_728_; 
v_unused_724_ = lean_ctor_get(v_impl_642_, 4);
lean_dec(v_unused_724_);
v_unused_725_ = lean_ctor_get(v_impl_642_, 3);
lean_dec(v_unused_725_);
v_unused_726_ = lean_ctor_get(v_impl_642_, 2);
lean_dec(v_unused_726_);
v_unused_727_ = lean_ctor_get(v_impl_642_, 1);
lean_dec(v_unused_727_);
v_unused_728_ = lean_ctor_get(v_impl_642_, 0);
lean_dec(v_unused_728_);
v___x_659_ = v_impl_642_;
v_isShared_660_ = v_isSharedCheck_723_;
goto v_resetjp_658_;
}
else
{
lean_dec(v_impl_642_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_723_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v_size_661_; lean_object* v_size_662_; lean_object* v_k_663_; lean_object* v_v_664_; lean_object* v_l_665_; lean_object* v_r_666_; lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v_size_661_ = lean_ctor_get(v_l_648_, 0);
v_size_662_ = lean_ctor_get(v_r_649_, 0);
v_k_663_ = lean_ctor_get(v_r_649_, 1);
v_v_664_ = lean_ctor_get(v_r_649_, 2);
v_l_665_ = lean_ctor_get(v_r_649_, 3);
v_r_666_ = lean_ctor_get(v_r_649_, 4);
v___x_667_ = lean_unsigned_to_nat(2u);
v___x_668_ = lean_nat_mul(v___x_667_, v_size_661_);
v___x_669_ = lean_nat_dec_lt(v_size_662_, v___x_668_);
lean_dec(v___x_668_);
if (v___x_669_ == 0)
{
lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_698_; 
lean_inc(v_r_666_);
lean_inc(v_l_665_);
lean_inc(v_v_664_);
lean_inc(v_k_663_);
v_isSharedCheck_698_ = !lean_is_exclusive(v_r_649_);
if (v_isSharedCheck_698_ == 0)
{
lean_object* v_unused_699_; lean_object* v_unused_700_; lean_object* v_unused_701_; lean_object* v_unused_702_; lean_object* v_unused_703_; 
v_unused_699_ = lean_ctor_get(v_r_649_, 4);
lean_dec(v_unused_699_);
v_unused_700_ = lean_ctor_get(v_r_649_, 3);
lean_dec(v_unused_700_);
v_unused_701_ = lean_ctor_get(v_r_649_, 2);
lean_dec(v_unused_701_);
v_unused_702_ = lean_ctor_get(v_r_649_, 1);
lean_dec(v_unused_702_);
v_unused_703_ = lean_ctor_get(v_r_649_, 0);
lean_dec(v_unused_703_);
v___x_671_ = v_r_649_;
v_isShared_672_ = v_isSharedCheck_698_;
goto v_resetjp_670_;
}
else
{
lean_dec(v_r_649_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_698_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___y_676_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___x_686_; lean_object* v___y_688_; 
v___x_673_ = lean_nat_add(v___x_643_, v_size_645_);
lean_dec(v_size_645_);
v___x_674_ = lean_nat_add(v___x_673_, v_size_644_);
lean_dec(v___x_673_);
v___x_686_ = lean_nat_add(v___x_643_, v_size_661_);
if (lean_obj_tag(v_l_665_) == 0)
{
lean_object* v_size_696_; 
v_size_696_ = lean_ctor_get(v_l_665_, 0);
lean_inc(v_size_696_);
v___y_688_ = v_size_696_;
goto v___jp_687_;
}
else
{
lean_object* v___x_697_; 
v___x_697_ = lean_unsigned_to_nat(0u);
v___y_688_ = v___x_697_;
goto v___jp_687_;
}
v___jp_675_:
{
lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_679_ = lean_nat_add(v___y_677_, v___y_678_);
lean_dec(v___y_678_);
lean_dec(v___y_677_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 4, v_r_637_);
lean_ctor_set(v___x_671_, 3, v_r_666_);
lean_ctor_set(v___x_671_, 2, v_v_635_);
lean_ctor_set(v___x_671_, 1, v_k_634_);
lean_ctor_set(v___x_671_, 0, v___x_679_);
v___x_681_ = v___x_671_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_679_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_685_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_685_, 3, v_r_666_);
lean_ctor_set(v_reuseFailAlloc_685_, 4, v_r_637_);
v___x_681_ = v_reuseFailAlloc_685_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_683_; 
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 4, v___x_681_);
lean_ctor_set(v___x_659_, 3, v___y_676_);
lean_ctor_set(v___x_659_, 2, v_v_664_);
lean_ctor_set(v___x_659_, 1, v_k_663_);
lean_ctor_set(v___x_659_, 0, v___x_674_);
v___x_683_ = v___x_659_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_674_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v_k_663_);
lean_ctor_set(v_reuseFailAlloc_684_, 2, v_v_664_);
lean_ctor_set(v_reuseFailAlloc_684_, 3, v___y_676_);
lean_ctor_set(v_reuseFailAlloc_684_, 4, v___x_681_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
v___jp_687_:
{
lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_689_ = lean_nat_add(v___x_686_, v___y_688_);
lean_dec(v___y_688_);
lean_dec(v___x_686_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 4, v_l_665_);
lean_ctor_set(v___x_639_, 3, v_l_648_);
lean_ctor_set(v___x_639_, 2, v_v_647_);
lean_ctor_set(v___x_639_, 1, v_k_646_);
lean_ctor_set(v___x_639_, 0, v___x_689_);
v___x_691_ = v___x_639_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_695_, 1, v_k_646_);
lean_ctor_set(v_reuseFailAlloc_695_, 2, v_v_647_);
lean_ctor_set(v_reuseFailAlloc_695_, 3, v_l_648_);
lean_ctor_set(v_reuseFailAlloc_695_, 4, v_l_665_);
v___x_691_ = v_reuseFailAlloc_695_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_692_; 
v___x_692_ = lean_nat_add(v___x_643_, v_size_644_);
if (lean_obj_tag(v_r_666_) == 0)
{
lean_object* v_size_693_; 
v_size_693_ = lean_ctor_get(v_r_666_, 0);
lean_inc(v_size_693_);
v___y_676_ = v___x_691_;
v___y_677_ = v___x_692_;
v___y_678_ = v_size_693_;
goto v___jp_675_;
}
else
{
lean_object* v___x_694_; 
v___x_694_ = lean_unsigned_to_nat(0u);
v___y_676_ = v___x_691_;
v___y_677_ = v___x_692_;
v___y_678_ = v___x_694_;
goto v___jp_675_;
}
}
}
}
}
else
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_709_; 
lean_del_object(v___x_639_);
v___x_704_ = lean_nat_add(v___x_643_, v_size_645_);
lean_dec(v_size_645_);
v___x_705_ = lean_nat_add(v___x_704_, v_size_644_);
lean_dec(v___x_704_);
v___x_706_ = lean_nat_add(v___x_643_, v_size_644_);
v___x_707_ = lean_nat_add(v___x_706_, v_size_662_);
lean_dec(v___x_706_);
lean_inc_ref(v_r_637_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 4, v_r_637_);
lean_ctor_set(v___x_659_, 3, v_r_649_);
lean_ctor_set(v___x_659_, 2, v_v_635_);
lean_ctor_set(v___x_659_, 1, v_k_634_);
lean_ctor_set(v___x_659_, 0, v___x_707_);
v___x_709_ = v___x_659_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_707_);
lean_ctor_set(v_reuseFailAlloc_722_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_722_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_722_, 3, v_r_649_);
lean_ctor_set(v_reuseFailAlloc_722_, 4, v_r_637_);
v___x_709_ = v_reuseFailAlloc_722_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_716_; 
v_isSharedCheck_716_ = !lean_is_exclusive(v_r_637_);
if (v_isSharedCheck_716_ == 0)
{
lean_object* v_unused_717_; lean_object* v_unused_718_; lean_object* v_unused_719_; lean_object* v_unused_720_; lean_object* v_unused_721_; 
v_unused_717_ = lean_ctor_get(v_r_637_, 4);
lean_dec(v_unused_717_);
v_unused_718_ = lean_ctor_get(v_r_637_, 3);
lean_dec(v_unused_718_);
v_unused_719_ = lean_ctor_get(v_r_637_, 2);
lean_dec(v_unused_719_);
v_unused_720_ = lean_ctor_get(v_r_637_, 1);
lean_dec(v_unused_720_);
v_unused_721_ = lean_ctor_get(v_r_637_, 0);
lean_dec(v_unused_721_);
v___x_711_ = v_r_637_;
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
else
{
lean_dec(v_r_637_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 4, v___x_709_);
lean_ctor_set(v___x_711_, 3, v_l_648_);
lean_ctor_set(v___x_711_, 2, v_v_647_);
lean_ctor_set(v___x_711_, 1, v_k_646_);
lean_ctor_set(v___x_711_, 0, v___x_705_);
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_705_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v_k_646_);
lean_ctor_set(v_reuseFailAlloc_715_, 2, v_v_647_);
lean_ctor_set(v_reuseFailAlloc_715_, 3, v_l_648_);
lean_ctor_set(v_reuseFailAlloc_715_, 4, v___x_709_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_729_; 
v_l_729_ = lean_ctor_get(v_impl_642_, 3);
lean_inc(v_l_729_);
if (lean_obj_tag(v_l_729_) == 0)
{
lean_object* v_r_730_; lean_object* v_k_731_; lean_object* v_v_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_743_; 
v_r_730_ = lean_ctor_get(v_impl_642_, 4);
v_k_731_ = lean_ctor_get(v_impl_642_, 1);
v_v_732_ = lean_ctor_get(v_impl_642_, 2);
v_isSharedCheck_743_ = !lean_is_exclusive(v_impl_642_);
if (v_isSharedCheck_743_ == 0)
{
lean_object* v_unused_744_; lean_object* v_unused_745_; 
v_unused_744_ = lean_ctor_get(v_impl_642_, 3);
lean_dec(v_unused_744_);
v_unused_745_ = lean_ctor_get(v_impl_642_, 0);
lean_dec(v_unused_745_);
v___x_734_ = v_impl_642_;
v_isShared_735_ = v_isSharedCheck_743_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_r_730_);
lean_inc(v_v_732_);
lean_inc(v_k_731_);
lean_dec(v_impl_642_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_743_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_736_; lean_object* v___x_738_; 
v___x_736_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_730_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 3, v_r_730_);
lean_ctor_set(v___x_734_, 2, v_v_635_);
lean_ctor_set(v___x_734_, 1, v_k_634_);
lean_ctor_set(v___x_734_, 0, v___x_643_);
v___x_738_ = v___x_734_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v___x_643_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_742_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_742_, 3, v_r_730_);
lean_ctor_set(v_reuseFailAlloc_742_, 4, v_r_730_);
v___x_738_ = v_reuseFailAlloc_742_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
lean_object* v___x_740_; 
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 4, v___x_738_);
lean_ctor_set(v___x_639_, 3, v_l_729_);
lean_ctor_set(v___x_639_, 2, v_v_732_);
lean_ctor_set(v___x_639_, 1, v_k_731_);
lean_ctor_set(v___x_639_, 0, v___x_736_);
v___x_740_ = v___x_639_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_736_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_k_731_);
lean_ctor_set(v_reuseFailAlloc_741_, 2, v_v_732_);
lean_ctor_set(v_reuseFailAlloc_741_, 3, v_l_729_);
lean_ctor_set(v_reuseFailAlloc_741_, 4, v___x_738_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
else
{
lean_object* v_r_746_; 
v_r_746_ = lean_ctor_get(v_impl_642_, 4);
lean_inc(v_r_746_);
if (lean_obj_tag(v_r_746_) == 0)
{
lean_object* v_k_747_; lean_object* v_v_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_771_; 
v_k_747_ = lean_ctor_get(v_impl_642_, 1);
v_v_748_ = lean_ctor_get(v_impl_642_, 2);
v_isSharedCheck_771_ = !lean_is_exclusive(v_impl_642_);
if (v_isSharedCheck_771_ == 0)
{
lean_object* v_unused_772_; lean_object* v_unused_773_; lean_object* v_unused_774_; 
v_unused_772_ = lean_ctor_get(v_impl_642_, 4);
lean_dec(v_unused_772_);
v_unused_773_ = lean_ctor_get(v_impl_642_, 3);
lean_dec(v_unused_773_);
v_unused_774_ = lean_ctor_get(v_impl_642_, 0);
lean_dec(v_unused_774_);
v___x_750_ = v_impl_642_;
v_isShared_751_ = v_isSharedCheck_771_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_v_748_);
lean_inc(v_k_747_);
lean_dec(v_impl_642_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_771_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v_k_752_; lean_object* v_v_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_767_; 
v_k_752_ = lean_ctor_get(v_r_746_, 1);
v_v_753_ = lean_ctor_get(v_r_746_, 2);
v_isSharedCheck_767_ = !lean_is_exclusive(v_r_746_);
if (v_isSharedCheck_767_ == 0)
{
lean_object* v_unused_768_; lean_object* v_unused_769_; lean_object* v_unused_770_; 
v_unused_768_ = lean_ctor_get(v_r_746_, 4);
lean_dec(v_unused_768_);
v_unused_769_ = lean_ctor_get(v_r_746_, 3);
lean_dec(v_unused_769_);
v_unused_770_ = lean_ctor_get(v_r_746_, 0);
lean_dec(v_unused_770_);
v___x_755_ = v_r_746_;
v_isShared_756_ = v_isSharedCheck_767_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_v_753_);
lean_inc(v_k_752_);
lean_dec(v_r_746_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_767_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; lean_object* v___x_759_; 
v___x_757_ = lean_unsigned_to_nat(3u);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 4, v_l_729_);
lean_ctor_set(v___x_755_, 3, v_l_729_);
lean_ctor_set(v___x_755_, 2, v_v_748_);
lean_ctor_set(v___x_755_, 1, v_k_747_);
lean_ctor_set(v___x_755_, 0, v___x_643_);
v___x_759_ = v___x_755_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_643_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v_k_747_);
lean_ctor_set(v_reuseFailAlloc_766_, 2, v_v_748_);
lean_ctor_set(v_reuseFailAlloc_766_, 3, v_l_729_);
lean_ctor_set(v_reuseFailAlloc_766_, 4, v_l_729_);
v___x_759_ = v_reuseFailAlloc_766_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
lean_object* v___x_761_; 
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 4, v_l_729_);
lean_ctor_set(v___x_750_, 2, v_v_635_);
lean_ctor_set(v___x_750_, 1, v_k_634_);
lean_ctor_set(v___x_750_, 0, v___x_643_);
v___x_761_ = v___x_750_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v___x_643_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_765_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_765_, 3, v_l_729_);
lean_ctor_set(v_reuseFailAlloc_765_, 4, v_l_729_);
v___x_761_ = v_reuseFailAlloc_765_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_763_; 
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 4, v___x_761_);
lean_ctor_set(v___x_639_, 3, v___x_759_);
lean_ctor_set(v___x_639_, 2, v_v_753_);
lean_ctor_set(v___x_639_, 1, v_k_752_);
lean_ctor_set(v___x_639_, 0, v___x_757_);
v___x_763_ = v___x_639_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_k_752_);
lean_ctor_set(v_reuseFailAlloc_764_, 2, v_v_753_);
lean_ctor_set(v_reuseFailAlloc_764_, 3, v___x_759_);
lean_ctor_set(v_reuseFailAlloc_764_, 4, v___x_761_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
}
}
else
{
lean_object* v___x_775_; lean_object* v___x_777_; 
v___x_775_ = lean_unsigned_to_nat(2u);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 4, v_r_746_);
lean_ctor_set(v___x_639_, 3, v_impl_642_);
lean_ctor_set(v___x_639_, 0, v___x_775_);
v___x_777_ = v___x_639_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_778_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_778_, 3, v_impl_642_);
lean_ctor_set(v_reuseFailAlloc_778_, 4, v_r_746_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
}
case 1:
{
lean_object* v___x_780_; 
lean_dec(v_v_635_);
lean_dec(v_k_634_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 2, v_v_631_);
lean_ctor_set(v___x_639_, 1, v_k_630_);
v___x_780_ = v___x_639_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_size_633_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_k_630_);
lean_ctor_set(v_reuseFailAlloc_781_, 2, v_v_631_);
lean_ctor_set(v_reuseFailAlloc_781_, 3, v_l_636_);
lean_ctor_set(v_reuseFailAlloc_781_, 4, v_r_637_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
default: 
{
lean_object* v_impl_782_; lean_object* v___x_783_; 
lean_dec(v_size_633_);
v_impl_782_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_k_630_, v_v_631_, v_r_637_);
v___x_783_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_636_) == 0)
{
lean_object* v_size_784_; lean_object* v_size_785_; lean_object* v_k_786_; lean_object* v_v_787_; lean_object* v_l_788_; lean_object* v_r_789_; lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v_size_784_ = lean_ctor_get(v_l_636_, 0);
v_size_785_ = lean_ctor_get(v_impl_782_, 0);
lean_inc(v_size_785_);
v_k_786_ = lean_ctor_get(v_impl_782_, 1);
lean_inc(v_k_786_);
v_v_787_ = lean_ctor_get(v_impl_782_, 2);
lean_inc(v_v_787_);
v_l_788_ = lean_ctor_get(v_impl_782_, 3);
lean_inc(v_l_788_);
v_r_789_ = lean_ctor_get(v_impl_782_, 4);
lean_inc(v_r_789_);
v___x_790_ = lean_unsigned_to_nat(3u);
v___x_791_ = lean_nat_mul(v___x_790_, v_size_784_);
v___x_792_ = lean_nat_dec_lt(v___x_791_, v_size_785_);
lean_dec(v___x_791_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_796_; 
lean_dec(v_r_789_);
lean_dec(v_l_788_);
lean_dec(v_v_787_);
lean_dec(v_k_786_);
v___x_793_ = lean_nat_add(v___x_783_, v_size_784_);
v___x_794_ = lean_nat_add(v___x_793_, v_size_785_);
lean_dec(v_size_785_);
lean_dec(v___x_793_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 4, v_impl_782_);
lean_ctor_set(v___x_639_, 0, v___x_794_);
v___x_796_ = v___x_639_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_794_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_797_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_797_, 3, v_l_636_);
lean_ctor_set(v_reuseFailAlloc_797_, 4, v_impl_782_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
else
{
lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_861_; 
v_isSharedCheck_861_ = !lean_is_exclusive(v_impl_782_);
if (v_isSharedCheck_861_ == 0)
{
lean_object* v_unused_862_; lean_object* v_unused_863_; lean_object* v_unused_864_; lean_object* v_unused_865_; lean_object* v_unused_866_; 
v_unused_862_ = lean_ctor_get(v_impl_782_, 4);
lean_dec(v_unused_862_);
v_unused_863_ = lean_ctor_get(v_impl_782_, 3);
lean_dec(v_unused_863_);
v_unused_864_ = lean_ctor_get(v_impl_782_, 2);
lean_dec(v_unused_864_);
v_unused_865_ = lean_ctor_get(v_impl_782_, 1);
lean_dec(v_unused_865_);
v_unused_866_ = lean_ctor_get(v_impl_782_, 0);
lean_dec(v_unused_866_);
v___x_799_ = v_impl_782_;
v_isShared_800_ = v_isSharedCheck_861_;
goto v_resetjp_798_;
}
else
{
lean_dec(v_impl_782_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_861_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v_size_801_; lean_object* v_k_802_; lean_object* v_v_803_; lean_object* v_l_804_; lean_object* v_r_805_; lean_object* v_size_806_; lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; 
v_size_801_ = lean_ctor_get(v_l_788_, 0);
v_k_802_ = lean_ctor_get(v_l_788_, 1);
v_v_803_ = lean_ctor_get(v_l_788_, 2);
v_l_804_ = lean_ctor_get(v_l_788_, 3);
v_r_805_ = lean_ctor_get(v_l_788_, 4);
v_size_806_ = lean_ctor_get(v_r_789_, 0);
v___x_807_ = lean_unsigned_to_nat(2u);
v___x_808_ = lean_nat_mul(v___x_807_, v_size_806_);
v___x_809_ = lean_nat_dec_lt(v_size_801_, v___x_808_);
lean_dec(v___x_808_);
if (v___x_809_ == 0)
{
lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_837_; 
lean_inc(v_r_805_);
lean_inc(v_l_804_);
lean_inc(v_v_803_);
lean_inc(v_k_802_);
v_isSharedCheck_837_ = !lean_is_exclusive(v_l_788_);
if (v_isSharedCheck_837_ == 0)
{
lean_object* v_unused_838_; lean_object* v_unused_839_; lean_object* v_unused_840_; lean_object* v_unused_841_; lean_object* v_unused_842_; 
v_unused_838_ = lean_ctor_get(v_l_788_, 4);
lean_dec(v_unused_838_);
v_unused_839_ = lean_ctor_get(v_l_788_, 3);
lean_dec(v_unused_839_);
v_unused_840_ = lean_ctor_get(v_l_788_, 2);
lean_dec(v_unused_840_);
v_unused_841_ = lean_ctor_get(v_l_788_, 1);
lean_dec(v_unused_841_);
v_unused_842_ = lean_ctor_get(v_l_788_, 0);
lean_dec(v_unused_842_);
v___x_811_ = v_l_788_;
v_isShared_812_ = v_isSharedCheck_837_;
goto v_resetjp_810_;
}
else
{
lean_dec(v_l_788_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_837_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_827_; 
v___x_813_ = lean_nat_add(v___x_783_, v_size_784_);
v___x_814_ = lean_nat_add(v___x_813_, v_size_785_);
lean_dec(v_size_785_);
if (lean_obj_tag(v_l_804_) == 0)
{
lean_object* v_size_835_; 
v_size_835_ = lean_ctor_get(v_l_804_, 0);
lean_inc(v_size_835_);
v___y_827_ = v_size_835_;
goto v___jp_826_;
}
else
{
lean_object* v___x_836_; 
v___x_836_ = lean_unsigned_to_nat(0u);
v___y_827_ = v___x_836_;
goto v___jp_826_;
}
v___jp_815_:
{
lean_object* v___x_819_; lean_object* v___x_821_; 
v___x_819_ = lean_nat_add(v___y_817_, v___y_818_);
lean_dec(v___y_818_);
lean_dec(v___y_817_);
if (v_isShared_812_ == 0)
{
lean_ctor_set(v___x_811_, 4, v_r_789_);
lean_ctor_set(v___x_811_, 3, v_r_805_);
lean_ctor_set(v___x_811_, 2, v_v_787_);
lean_ctor_set(v___x_811_, 1, v_k_786_);
lean_ctor_set(v___x_811_, 0, v___x_819_);
v___x_821_ = v___x_811_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_819_);
lean_ctor_set(v_reuseFailAlloc_825_, 1, v_k_786_);
lean_ctor_set(v_reuseFailAlloc_825_, 2, v_v_787_);
lean_ctor_set(v_reuseFailAlloc_825_, 3, v_r_805_);
lean_ctor_set(v_reuseFailAlloc_825_, 4, v_r_789_);
v___x_821_ = v_reuseFailAlloc_825_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
lean_object* v___x_823_; 
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 4, v___x_821_);
lean_ctor_set(v___x_799_, 3, v___y_816_);
lean_ctor_set(v___x_799_, 2, v_v_803_);
lean_ctor_set(v___x_799_, 1, v_k_802_);
lean_ctor_set(v___x_799_, 0, v___x_814_);
v___x_823_ = v___x_799_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v_k_802_);
lean_ctor_set(v_reuseFailAlloc_824_, 2, v_v_803_);
lean_ctor_set(v_reuseFailAlloc_824_, 3, v___y_816_);
lean_ctor_set(v_reuseFailAlloc_824_, 4, v___x_821_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
v___jp_826_:
{
lean_object* v___x_828_; lean_object* v___x_830_; 
v___x_828_ = lean_nat_add(v___x_813_, v___y_827_);
lean_dec(v___y_827_);
lean_dec(v___x_813_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 4, v_l_804_);
lean_ctor_set(v___x_639_, 0, v___x_828_);
v___x_830_ = v___x_639_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_828_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_834_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_834_, 3, v_l_636_);
lean_ctor_set(v_reuseFailAlloc_834_, 4, v_l_804_);
v___x_830_ = v_reuseFailAlloc_834_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
lean_object* v___x_831_; 
v___x_831_ = lean_nat_add(v___x_783_, v_size_806_);
if (lean_obj_tag(v_r_805_) == 0)
{
lean_object* v_size_832_; 
v_size_832_ = lean_ctor_get(v_r_805_, 0);
lean_inc(v_size_832_);
v___y_816_ = v___x_830_;
v___y_817_ = v___x_831_;
v___y_818_ = v_size_832_;
goto v___jp_815_;
}
else
{
lean_object* v___x_833_; 
v___x_833_ = lean_unsigned_to_nat(0u);
v___y_816_ = v___x_830_;
v___y_817_ = v___x_831_;
v___y_818_ = v___x_833_;
goto v___jp_815_;
}
}
}
}
}
else
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
lean_del_object(v___x_639_);
v___x_843_ = lean_nat_add(v___x_783_, v_size_784_);
v___x_844_ = lean_nat_add(v___x_843_, v_size_785_);
lean_dec(v_size_785_);
v___x_845_ = lean_nat_add(v___x_843_, v_size_801_);
lean_dec(v___x_843_);
lean_inc_ref(v_l_636_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 4, v_l_788_);
lean_ctor_set(v___x_799_, 3, v_l_636_);
lean_ctor_set(v___x_799_, 2, v_v_635_);
lean_ctor_set(v___x_799_, 1, v_k_634_);
lean_ctor_set(v___x_799_, 0, v___x_845_);
v___x_847_ = v___x_799_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_845_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_860_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_860_, 3, v_l_636_);
lean_ctor_set(v_reuseFailAlloc_860_, 4, v_l_788_);
v___x_847_ = v_reuseFailAlloc_860_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
v_isSharedCheck_854_ = !lean_is_exclusive(v_l_636_);
if (v_isSharedCheck_854_ == 0)
{
lean_object* v_unused_855_; lean_object* v_unused_856_; lean_object* v_unused_857_; lean_object* v_unused_858_; lean_object* v_unused_859_; 
v_unused_855_ = lean_ctor_get(v_l_636_, 4);
lean_dec(v_unused_855_);
v_unused_856_ = lean_ctor_get(v_l_636_, 3);
lean_dec(v_unused_856_);
v_unused_857_ = lean_ctor_get(v_l_636_, 2);
lean_dec(v_unused_857_);
v_unused_858_ = lean_ctor_get(v_l_636_, 1);
lean_dec(v_unused_858_);
v_unused_859_ = lean_ctor_get(v_l_636_, 0);
lean_dec(v_unused_859_);
v___x_849_ = v_l_636_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_dec(v_l_636_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
lean_ctor_set(v___x_849_, 4, v_r_789_);
lean_ctor_set(v___x_849_, 3, v___x_847_);
lean_ctor_set(v___x_849_, 2, v_v_787_);
lean_ctor_set(v___x_849_, 1, v_k_786_);
lean_ctor_set(v___x_849_, 0, v___x_844_);
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v___x_844_);
lean_ctor_set(v_reuseFailAlloc_853_, 1, v_k_786_);
lean_ctor_set(v_reuseFailAlloc_853_, 2, v_v_787_);
lean_ctor_set(v_reuseFailAlloc_853_, 3, v___x_847_);
lean_ctor_set(v_reuseFailAlloc_853_, 4, v_r_789_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_867_; 
v_l_867_ = lean_ctor_get(v_impl_782_, 3);
lean_inc(v_l_867_);
if (lean_obj_tag(v_l_867_) == 0)
{
lean_object* v_r_868_; lean_object* v_k_869_; lean_object* v_v_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_893_; 
v_r_868_ = lean_ctor_get(v_impl_782_, 4);
v_k_869_ = lean_ctor_get(v_impl_782_, 1);
v_v_870_ = lean_ctor_get(v_impl_782_, 2);
v_isSharedCheck_893_ = !lean_is_exclusive(v_impl_782_);
if (v_isSharedCheck_893_ == 0)
{
lean_object* v_unused_894_; lean_object* v_unused_895_; 
v_unused_894_ = lean_ctor_get(v_impl_782_, 3);
lean_dec(v_unused_894_);
v_unused_895_ = lean_ctor_get(v_impl_782_, 0);
lean_dec(v_unused_895_);
v___x_872_ = v_impl_782_;
v_isShared_873_ = v_isSharedCheck_893_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_r_868_);
lean_inc(v_v_870_);
lean_inc(v_k_869_);
lean_dec(v_impl_782_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_893_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v_k_874_; lean_object* v_v_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_889_; 
v_k_874_ = lean_ctor_get(v_l_867_, 1);
v_v_875_ = lean_ctor_get(v_l_867_, 2);
v_isSharedCheck_889_ = !lean_is_exclusive(v_l_867_);
if (v_isSharedCheck_889_ == 0)
{
lean_object* v_unused_890_; lean_object* v_unused_891_; lean_object* v_unused_892_; 
v_unused_890_ = lean_ctor_get(v_l_867_, 4);
lean_dec(v_unused_890_);
v_unused_891_ = lean_ctor_get(v_l_867_, 3);
lean_dec(v_unused_891_);
v_unused_892_ = lean_ctor_get(v_l_867_, 0);
lean_dec(v_unused_892_);
v___x_877_ = v_l_867_;
v_isShared_878_ = v_isSharedCheck_889_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_v_875_);
lean_inc(v_k_874_);
lean_dec(v_l_867_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_889_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_879_; lean_object* v___x_881_; 
v___x_879_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_868_, 2);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 4, v_r_868_);
lean_ctor_set(v___x_877_, 3, v_r_868_);
lean_ctor_set(v___x_877_, 2, v_v_635_);
lean_ctor_set(v___x_877_, 1, v_k_634_);
lean_ctor_set(v___x_877_, 0, v___x_783_);
v___x_881_ = v___x_877_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_888_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_888_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_888_, 3, v_r_868_);
lean_ctor_set(v_reuseFailAlloc_888_, 4, v_r_868_);
v___x_881_ = v_reuseFailAlloc_888_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
lean_object* v___x_883_; 
lean_inc(v_r_868_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 3, v_r_868_);
lean_ctor_set(v___x_872_, 0, v___x_783_);
v___x_883_ = v___x_872_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v_k_869_);
lean_ctor_set(v_reuseFailAlloc_887_, 2, v_v_870_);
lean_ctor_set(v_reuseFailAlloc_887_, 3, v_r_868_);
lean_ctor_set(v_reuseFailAlloc_887_, 4, v_r_868_);
v___x_883_ = v_reuseFailAlloc_887_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
lean_object* v___x_885_; 
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 4, v___x_883_);
lean_ctor_set(v___x_639_, 3, v___x_881_);
lean_ctor_set(v___x_639_, 2, v_v_875_);
lean_ctor_set(v___x_639_, 1, v_k_874_);
lean_ctor_set(v___x_639_, 0, v___x_879_);
v___x_885_ = v___x_639_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_879_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v_k_874_);
lean_ctor_set(v_reuseFailAlloc_886_, 2, v_v_875_);
lean_ctor_set(v_reuseFailAlloc_886_, 3, v___x_881_);
lean_ctor_set(v_reuseFailAlloc_886_, 4, v___x_883_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
}
}
else
{
lean_object* v_r_896_; 
v_r_896_ = lean_ctor_get(v_impl_782_, 4);
lean_inc(v_r_896_);
if (lean_obj_tag(v_r_896_) == 0)
{
lean_object* v_k_897_; lean_object* v_v_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_909_; 
v_k_897_ = lean_ctor_get(v_impl_782_, 1);
v_v_898_ = lean_ctor_get(v_impl_782_, 2);
v_isSharedCheck_909_ = !lean_is_exclusive(v_impl_782_);
if (v_isSharedCheck_909_ == 0)
{
lean_object* v_unused_910_; lean_object* v_unused_911_; lean_object* v_unused_912_; 
v_unused_910_ = lean_ctor_get(v_impl_782_, 4);
lean_dec(v_unused_910_);
v_unused_911_ = lean_ctor_get(v_impl_782_, 3);
lean_dec(v_unused_911_);
v_unused_912_ = lean_ctor_get(v_impl_782_, 0);
lean_dec(v_unused_912_);
v___x_900_ = v_impl_782_;
v_isShared_901_ = v_isSharedCheck_909_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_v_898_);
lean_inc(v_k_897_);
lean_dec(v_impl_782_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_909_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_902_; lean_object* v___x_904_; 
v___x_902_ = lean_unsigned_to_nat(3u);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 4, v_l_867_);
lean_ctor_set(v___x_900_, 2, v_v_635_);
lean_ctor_set(v___x_900_, 1, v_k_634_);
lean_ctor_set(v___x_900_, 0, v___x_783_);
v___x_904_ = v___x_900_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_908_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_908_, 3, v_l_867_);
lean_ctor_set(v_reuseFailAlloc_908_, 4, v_l_867_);
v___x_904_ = v_reuseFailAlloc_908_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
lean_object* v___x_906_; 
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 4, v_r_896_);
lean_ctor_set(v___x_639_, 3, v___x_904_);
lean_ctor_set(v___x_639_, 2, v_v_898_);
lean_ctor_set(v___x_639_, 1, v_k_897_);
lean_ctor_set(v___x_639_, 0, v___x_902_);
v___x_906_ = v___x_639_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v_k_897_);
lean_ctor_set(v_reuseFailAlloc_907_, 2, v_v_898_);
lean_ctor_set(v_reuseFailAlloc_907_, 3, v___x_904_);
lean_ctor_set(v_reuseFailAlloc_907_, 4, v_r_896_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
else
{
lean_object* v___x_913_; lean_object* v___x_915_; 
v___x_913_ = lean_unsigned_to_nat(2u);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 4, v_impl_782_);
lean_ctor_set(v___x_639_, 3, v_r_896_);
lean_ctor_set(v___x_639_, 0, v___x_913_);
v___x_915_ = v___x_639_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v___x_913_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_916_, 2, v_v_635_);
lean_ctor_set(v_reuseFailAlloc_916_, 3, v_r_896_);
lean_ctor_set(v_reuseFailAlloc_916_, 4, v_impl_782_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
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
lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_918_ = lean_unsigned_to_nat(1u);
v___x_919_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_919_, 0, v___x_918_);
lean_ctor_set(v___x_919_, 1, v_k_630_);
lean_ctor_set(v___x_919_, 2, v_v_631_);
lean_ctor_set(v___x_919_, 3, v_t_632_);
lean_ctor_set(v___x_919_, 4, v_t_632_);
return v___x_919_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0___redArg(lean_object* v_k_920_, lean_object* v_t_921_){
_start:
{
if (lean_obj_tag(v_t_921_) == 0)
{
lean_object* v_k_922_; lean_object* v_l_923_; lean_object* v_r_924_; uint8_t v___x_925_; 
v_k_922_ = lean_ctor_get(v_t_921_, 1);
v_l_923_ = lean_ctor_get(v_t_921_, 3);
v_r_924_ = lean_ctor_get(v_t_921_, 4);
v___x_925_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_920_, v_k_922_);
switch(v___x_925_)
{
case 0:
{
v_t_921_ = v_l_923_;
goto _start;
}
case 1:
{
uint8_t v___x_927_; 
v___x_927_ = 1;
return v___x_927_;
}
default: 
{
v_t_921_ = v_r_924_;
goto _start;
}
}
}
else
{
uint8_t v___x_929_; 
v___x_929_ = 0;
return v___x_929_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0___redArg___boxed(lean_object* v_k_930_, lean_object* v_t_931_){
_start:
{
uint8_t v_res_932_; lean_object* v_r_933_; 
v_res_932_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0___redArg(v_k_930_, v_t_931_);
lean_dec(v_t_931_);
lean_dec(v_k_930_);
v_r_933_ = lean_box(v_res_932_);
return v_r_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_instSingletonFVarIdFVarIdSet___lam__0(lean_object* v___y_934_){
_start:
{
lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_935_ = lean_box(1);
v___x_936_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0___redArg(v___y_934_, v___x_935_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_937_ = lean_box(0);
v___x_938_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v___y_934_, v___x_937_, v___x_935_);
return v___x_938_;
}
else
{
lean_dec(v___y_934_);
return v___x_935_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0(lean_object* v_00_u03b2_941_, lean_object* v_k_942_, lean_object* v_t_943_){
_start:
{
uint8_t v___x_944_; 
v___x_944_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0___redArg(v_k_942_, v_t_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0___boxed(lean_object* v_00_u03b2_945_, lean_object* v_k_946_, lean_object* v_t_947_){
_start:
{
uint8_t v_res_948_; lean_object* v_r_949_; 
v_res_948_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0(v_00_u03b2_945_, v_k_946_, v_t_947_);
lean_dec(v_t_947_);
lean_dec(v_k_946_);
v_r_949_ = lean_box(v_res_948_);
return v_r_949_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1(lean_object* v_00_u03b2_950_, lean_object* v_k_951_, lean_object* v_v_952_, lean_object* v_t_953_, lean_object* v_hl_954_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_k_951_, v_v_952_, v_t_953_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__0(lean_object* v_f_956_, lean_object* v_a_957_, lean_object* v_b_958_, lean_object* v_c_959_){
_start:
{
lean_object* v___x_960_; 
v___x_960_ = lean_apply_2(v_f_956_, v_a_957_, v_c_959_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__1(lean_object* v_toPure_961_, lean_object* v_____do__lift_962_){
_start:
{
lean_object* v_a_963_; lean_object* v___x_964_; 
v_a_963_ = lean_ctor_get(v_____do__lift_962_, 0);
lean_inc(v_a_963_);
lean_dec_ref(v_____do__lift_962_);
v___x_964_ = lean_apply_2(v_toPure_961_, lean_box(0), v_a_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg(lean_object* v_inst_965_, lean_object* v_m_966_, lean_object* v_init_967_, lean_object* v_f_968_){
_start:
{
lean_object* v_toApplicative_969_; lean_object* v_toBind_970_; lean_object* v_toPure_971_; lean_object* v___f_972_; lean_object* v___x_973_; lean_object* v___f_974_; lean_object* v___x_975_; 
v_toApplicative_969_ = lean_ctor_get(v_inst_965_, 0);
v_toBind_970_ = lean_ctor_get(v_inst_965_, 1);
lean_inc(v_toBind_970_);
v_toPure_971_ = lean_ctor_get(v_toApplicative_969_, 1);
lean_inc(v_toPure_971_);
v___f_972_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_972_, 0, v_f_968_);
v___x_973_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_965_, v___f_972_, v_init_967_, v_m_966_);
v___f_974_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_974_, 0, v_toPure_971_);
v___x_975_ = lean_apply_4(v_toBind_970_, lean_box(0), lean_box(0), v___x_973_, v___f_974_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1(lean_object* v_m_976_, lean_object* v_inst_977_, lean_object* v_00_u03b2_978_, lean_object* v_m_979_, lean_object* v_init_980_, lean_object* v_f_981_){
_start:
{
lean_object* v_toApplicative_982_; lean_object* v_toBind_983_; lean_object* v_toPure_984_; lean_object* v___f_985_; lean_object* v___x_986_; lean_object* v___f_987_; lean_object* v___x_988_; 
v_toApplicative_982_ = lean_ctor_get(v_inst_977_, 0);
v_toBind_983_ = lean_ctor_get(v_inst_977_, 1);
lean_inc(v_toBind_983_);
v_toPure_984_ = lean_ctor_get(v_toApplicative_982_, 1);
lean_inc(v_toPure_984_);
v___f_985_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_985_, 0, v_f_981_);
v___x_986_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_977_, v___f_985_, v_init_980_, v_m_979_);
v___f_987_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_987_, 0, v_toPure_984_);
v___x_988_ = lean_apply_4(v_toBind_983_, lean_box(0), lean_box(0), v___x_986_, v___f_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad___redArg(lean_object* v_inst_989_){
_start:
{
lean_object* v___x_990_; 
v___x_990_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1), 6, 2);
lean_closure_set(v___x_990_, 0, lean_box(0));
lean_closure_set(v___x_990_, 1, v_inst_989_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInFVarIdSetFVarIdOfMonad(lean_object* v_m_991_, lean_object* v_inst_992_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1), 6, 2);
lean_closure_set(v___x_993_, 0, lean_box(0));
lean_closure_set(v___x_993_, 1, v_inst_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_insert(lean_object* v_s_994_, lean_object* v_fvarId_995_){
_start:
{
uint8_t v___x_996_; 
v___x_996_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_instSingletonFVarIdFVarIdSet_spec__0___redArg(v_fvarId_995_, v_s_994_);
if (v___x_996_ == 0)
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = lean_box(0);
v___x_998_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_995_, v___x_997_, v_s_994_);
return v___x_998_;
}
else
{
lean_dec(v_fvarId_995_);
return v_s_994_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_FVarIdSet_union_spec__0_spec__0(lean_object* v_init_999_, lean_object* v_x_1000_){
_start:
{
if (lean_obj_tag(v_x_1000_) == 0)
{
lean_object* v_k_1001_; lean_object* v_l_1002_; lean_object* v_r_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v_k_1001_ = lean_ctor_get(v_x_1000_, 1);
lean_inc(v_k_1001_);
v_l_1002_ = lean_ctor_get(v_x_1000_, 3);
lean_inc(v_l_1002_);
v_r_1003_ = lean_ctor_get(v_x_1000_, 4);
lean_inc(v_r_1003_);
lean_dec_ref_known(v_x_1000_, 5);
v___x_1004_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_FVarIdSet_union_spec__0_spec__0(v_init_999_, v_l_1002_);
v___x_1005_ = l_Lean_FVarIdSet_insert(v___x_1004_, v_k_1001_);
v_init_999_ = v___x_1005_;
v_x_1000_ = v_r_1003_;
goto _start;
}
else
{
return v_init_999_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_union(lean_object* v_vs_u2081_1007_, lean_object* v_vs_u2082_1008_){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_FVarIdSet_union_spec__0_spec__0(v_vs_u2082_1008_, v_vs_u2081_1007_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_FVarIdSet_union_spec__0(lean_object* v_init_1010_, lean_object* v_t_1011_){
_start:
{
lean_object* v___x_1012_; 
v___x_1012_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_FVarIdSet_union_spec__0_spec__0(v_init_1010_, v_t_1011_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_ofList(lean_object* v_l_1013_){
_start:
{
lean_object* v___f_1014_; lean_object* v___x_1015_; 
v___f_1014_ = ((lean_object*)(l_Lean_instSingletonFVarIdFVarIdSet___aux__1___closed__0));
v___x_1015_ = l_Std_TreeSet_ofList___redArg(v_l_1013_, v___f_1014_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_ofList___boxed(lean_object* v_l_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Lean_FVarIdSet_ofList(v_l_1016_);
lean_dec(v_l_1016_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_ofArray(lean_object* v_l_1018_){
_start:
{
lean_object* v___f_1019_; lean_object* v___x_1020_; 
v___f_1019_ = ((lean_object*)(l_Lean_instSingletonFVarIdFVarIdSet___aux__1___closed__0));
v___x_1020_ = l_Std_TreeSet_ofArray___redArg(v_l_1018_, v___f_1019_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_FVarIdSet_ofArray___boxed(lean_object* v_l_1021_){
_start:
{
lean_object* v_res_1022_; 
v_res_1022_ = l_Lean_FVarIdSet_ofArray(v_l_1021_);
lean_dec_ref(v_l_1021_);
return v_res_1022_;
}
}
static lean_object* _init_l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__0(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1023_ = lean_box(0);
v___x_1024_ = lean_unsigned_to_nat(16u);
v___x_1025_ = lean_mk_array(v___x_1024_, v___x_1023_);
return v___x_1025_;
}
}
static lean_object* _init_l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = lean_obj_once(&l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__0, &l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__0_once, _init_l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__0);
v___x_1027_ = lean_unsigned_to_nat(0u);
v___x_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1027_);
lean_ctor_set(v___x_1028_, 1, v___x_1026_);
return v___x_1028_;
}
}
static lean_object* _init_l_Lean_instInhabitedFVarIdHashSet___aux__1(void){
_start:
{
lean_object* v___x_1029_; 
v___x_1029_ = lean_obj_once(&l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1, &l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1_once, _init_l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1);
return v___x_1029_;
}
}
static lean_object* _init_l_Lean_instInhabitedFVarIdHashSet(void){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = lean_obj_once(&l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1, &l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1_once, _init_l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1);
return v___x_1030_;
}
}
static lean_object* _init_l_Lean_instEmptyCollectionFVarIdHashSet___aux__1(void){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_obj_once(&l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1, &l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1_once, _init_l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1);
return v___x_1031_;
}
}
static lean_object* _init_l_Lean_instEmptyCollectionFVarIdHashSet(void){
_start:
{
lean_object* v___x_1032_; 
v___x_1032_ = lean_obj_once(&l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1, &l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1_once, _init_l_Lean_instInhabitedFVarIdHashSet___aux__1___closed__1);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_FVarIdMap_insert___redArg(lean_object* v_s_1033_, lean_object* v_fvarId_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_1034_, v_a_1035_, v_s_1033_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_FVarIdMap_insert(lean_object* v_00_u03b1_1037_, lean_object* v_s_1038_, lean_object* v_fvarId_1039_, lean_object* v_a_1040_){
_start:
{
lean_object* v___x_1041_; 
v___x_1041_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_1039_, v_a_1040_, v_s_1038_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap___aux__1___redArg(){
_start:
{
lean_object* v___x_1043_; 
v___x_1043_ = lean_box(1);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap___aux__1___redArg___boxed(lean_object* v___dummy_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lean_instEmptyCollectionFVarIdMap___aux__1___redArg();
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap___aux__1(lean_object* v_00_u03b1_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = lean_box(1);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap___redArg(){
_start:
{
lean_object* v___x_1049_; 
v___x_1049_ = lean_box(1);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap___redArg___boxed(lean_object* v___dummy_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lean_instEmptyCollectionFVarIdMap___redArg();
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionFVarIdMap(lean_object* v_00_u03b1_1052_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = lean_box(1);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarIdMap___redArg(){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = lean_box(1);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarIdMap___redArg___boxed(lean_object* v___dummy_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Lean_instInhabitedFVarIdMap___redArg();
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedFVarIdMap(lean_object* v_00_u03b1_1058_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_box(1);
return v___x_1059_;
}
}
static lean_object* _init_l_Lean_instInhabitedMVarId_default(void){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_obj_once(&l_Lean_instInhabitedFVarId_default___closed__0, &l_Lean_instInhabitedFVarId_default___closed__0_once, _init_l_Lean_instInhabitedFVarId_default___closed__0);
return v___x_1060_;
}
}
static lean_object* _init_l_Lean_instInhabitedMVarId(void){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_instInhabitedMVarId_default;
return v___x_1061_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqMVarId_beq(lean_object* v_x_1062_, lean_object* v_x_1063_){
_start:
{
uint8_t v___x_1064_; 
v___x_1064_ = lean_name_eq(v_x_1062_, v_x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqMVarId_beq___boxed(lean_object* v_x_1065_, lean_object* v_x_1066_){
_start:
{
uint8_t v_res_1067_; lean_object* v_r_1068_; 
v_res_1067_ = l_Lean_instBEqMVarId_beq(v_x_1065_, v_x_1066_);
lean_dec(v_x_1066_);
lean_dec(v_x_1065_);
v_r_1068_ = lean_box(v_res_1067_);
return v_r_1068_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableMVarId_hash(lean_object* v_x_1071_){
_start:
{
uint64_t v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = 0ULL;
v___x_1073_ = l_unsafeCast___redArg(v_x_1071_);
if (lean_obj_tag(v___x_1073_) == 0)
{
uint64_t v___x_1074_; 
v___x_1074_ = lean_uint64_once(&l_Lean_instHashableFVarId_hash___closed__0, &l_Lean_instHashableFVarId_hash___closed__0_once, _init_l_Lean_instHashableFVarId_hash___closed__0);
return v___x_1074_;
}
else
{
uint64_t v_hash_1075_; uint64_t v___x_1076_; 
v_hash_1075_ = lean_ctor_get_uint64(v___x_1073_, sizeof(void*)*2);
lean_dec(v___x_1073_);
v___x_1076_ = lean_uint64_mix_hash(v___x_1072_, v_hash_1075_);
return v___x_1076_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableMVarId_hash___boxed(lean_object* v_x_1077_){
_start:
{
uint64_t v_res_1078_; lean_object* v_r_1079_; 
v_res_1078_ = l_Lean_instHashableMVarId_hash(v_x_1077_);
lean_dec(v_x_1077_);
v_r_1079_ = lean_box_uint64(v_res_1078_);
return v_r_1079_;
}
}
static lean_object* _init_l_Lean_instInhabitedMVarIdSet___aux__1(void){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = lean_box(1);
return v___x_1083_;
}
}
static lean_object* _init_l_Lean_instInhabitedMVarIdSet(void){
_start:
{
lean_object* v___x_1084_; 
v___x_1084_ = lean_box(1);
return v___x_1084_;
}
}
static lean_object* _init_l_Lean_instEmptyCollectionMVarIdSet___aux__1(void){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = lean_box(1);
return v___x_1085_;
}
}
static lean_object* _init_l_Lean_instEmptyCollectionMVarIdSet(void){
_start:
{
lean_object* v___x_1086_; 
v___x_1086_ = lean_box(1);
return v___x_1086_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0___redArg(lean_object* v_k_1087_, lean_object* v_t_1088_){
_start:
{
if (lean_obj_tag(v_t_1088_) == 0)
{
lean_object* v_k_1089_; lean_object* v_l_1090_; lean_object* v_r_1091_; uint8_t v___x_1092_; 
v_k_1089_ = lean_ctor_get(v_t_1088_, 1);
v_l_1090_ = lean_ctor_get(v_t_1088_, 3);
v_r_1091_ = lean_ctor_get(v_t_1088_, 4);
v___x_1092_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1087_, v_k_1089_);
switch(v___x_1092_)
{
case 0:
{
v_t_1088_ = v_l_1090_;
goto _start;
}
case 1:
{
uint8_t v___x_1094_; 
v___x_1094_ = 1;
return v___x_1094_;
}
default: 
{
v_t_1088_ = v_r_1091_;
goto _start;
}
}
}
else
{
uint8_t v___x_1096_; 
v___x_1096_ = 0;
return v___x_1096_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0___redArg___boxed(lean_object* v_k_1097_, lean_object* v_t_1098_){
_start:
{
uint8_t v_res_1099_; lean_object* v_r_1100_; 
v_res_1099_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0___redArg(v_k_1097_, v_t_1098_);
lean_dec(v_t_1098_);
lean_dec(v_k_1097_);
v_r_1100_ = lean_box(v_res_1099_);
return v_r_1100_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(lean_object* v_k_1101_, lean_object* v_v_1102_, lean_object* v_t_1103_){
_start:
{
if (lean_obj_tag(v_t_1103_) == 0)
{
lean_object* v_size_1104_; lean_object* v_k_1105_; lean_object* v_v_1106_; lean_object* v_l_1107_; lean_object* v_r_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1388_; 
v_size_1104_ = lean_ctor_get(v_t_1103_, 0);
v_k_1105_ = lean_ctor_get(v_t_1103_, 1);
v_v_1106_ = lean_ctor_get(v_t_1103_, 2);
v_l_1107_ = lean_ctor_get(v_t_1103_, 3);
v_r_1108_ = lean_ctor_get(v_t_1103_, 4);
v_isSharedCheck_1388_ = !lean_is_exclusive(v_t_1103_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1110_ = v_t_1103_;
v_isShared_1111_ = v_isSharedCheck_1388_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_r_1108_);
lean_inc(v_l_1107_);
lean_inc(v_v_1106_);
lean_inc(v_k_1105_);
lean_inc(v_size_1104_);
lean_dec(v_t_1103_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1388_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
uint8_t v___x_1112_; 
v___x_1112_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1101_, v_k_1105_);
switch(v___x_1112_)
{
case 0:
{
lean_object* v_impl_1113_; lean_object* v___x_1114_; 
lean_dec(v_size_1104_);
v_impl_1113_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(v_k_1101_, v_v_1102_, v_l_1107_);
v___x_1114_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1108_) == 0)
{
lean_object* v_size_1115_; lean_object* v_size_1116_; lean_object* v_k_1117_; lean_object* v_v_1118_; lean_object* v_l_1119_; lean_object* v_r_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; uint8_t v___x_1123_; 
v_size_1115_ = lean_ctor_get(v_r_1108_, 0);
v_size_1116_ = lean_ctor_get(v_impl_1113_, 0);
lean_inc(v_size_1116_);
v_k_1117_ = lean_ctor_get(v_impl_1113_, 1);
lean_inc(v_k_1117_);
v_v_1118_ = lean_ctor_get(v_impl_1113_, 2);
lean_inc(v_v_1118_);
v_l_1119_ = lean_ctor_get(v_impl_1113_, 3);
lean_inc(v_l_1119_);
v_r_1120_ = lean_ctor_get(v_impl_1113_, 4);
lean_inc(v_r_1120_);
v___x_1121_ = lean_unsigned_to_nat(3u);
v___x_1122_ = lean_nat_mul(v___x_1121_, v_size_1115_);
v___x_1123_ = lean_nat_dec_lt(v___x_1122_, v_size_1116_);
lean_dec(v___x_1122_);
if (v___x_1123_ == 0)
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1127_; 
lean_dec(v_r_1120_);
lean_dec(v_l_1119_);
lean_dec(v_v_1118_);
lean_dec(v_k_1117_);
v___x_1124_ = lean_nat_add(v___x_1114_, v_size_1116_);
lean_dec(v_size_1116_);
v___x_1125_ = lean_nat_add(v___x_1124_, v_size_1115_);
lean_dec(v___x_1124_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 3, v_impl_1113_);
lean_ctor_set(v___x_1110_, 0, v___x_1125_);
v___x_1127_ = v___x_1110_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v___x_1125_);
lean_ctor_set(v_reuseFailAlloc_1128_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1128_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1128_, 3, v_impl_1113_);
lean_ctor_set(v_reuseFailAlloc_1128_, 4, v_r_1108_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
else
{
lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1194_; 
v_isSharedCheck_1194_ = !lean_is_exclusive(v_impl_1113_);
if (v_isSharedCheck_1194_ == 0)
{
lean_object* v_unused_1195_; lean_object* v_unused_1196_; lean_object* v_unused_1197_; lean_object* v_unused_1198_; lean_object* v_unused_1199_; 
v_unused_1195_ = lean_ctor_get(v_impl_1113_, 4);
lean_dec(v_unused_1195_);
v_unused_1196_ = lean_ctor_get(v_impl_1113_, 3);
lean_dec(v_unused_1196_);
v_unused_1197_ = lean_ctor_get(v_impl_1113_, 2);
lean_dec(v_unused_1197_);
v_unused_1198_ = lean_ctor_get(v_impl_1113_, 1);
lean_dec(v_unused_1198_);
v_unused_1199_ = lean_ctor_get(v_impl_1113_, 0);
lean_dec(v_unused_1199_);
v___x_1130_ = v_impl_1113_;
v_isShared_1131_ = v_isSharedCheck_1194_;
goto v_resetjp_1129_;
}
else
{
lean_dec(v_impl_1113_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1194_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v_size_1132_; lean_object* v_size_1133_; lean_object* v_k_1134_; lean_object* v_v_1135_; lean_object* v_l_1136_; lean_object* v_r_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; uint8_t v___x_1140_; 
v_size_1132_ = lean_ctor_get(v_l_1119_, 0);
v_size_1133_ = lean_ctor_get(v_r_1120_, 0);
v_k_1134_ = lean_ctor_get(v_r_1120_, 1);
v_v_1135_ = lean_ctor_get(v_r_1120_, 2);
v_l_1136_ = lean_ctor_get(v_r_1120_, 3);
v_r_1137_ = lean_ctor_get(v_r_1120_, 4);
v___x_1138_ = lean_unsigned_to_nat(2u);
v___x_1139_ = lean_nat_mul(v___x_1138_, v_size_1132_);
v___x_1140_ = lean_nat_dec_lt(v_size_1133_, v___x_1139_);
lean_dec(v___x_1139_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1169_; 
lean_inc(v_r_1137_);
lean_inc(v_l_1136_);
lean_inc(v_v_1135_);
lean_inc(v_k_1134_);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_r_1120_);
if (v_isSharedCheck_1169_ == 0)
{
lean_object* v_unused_1170_; lean_object* v_unused_1171_; lean_object* v_unused_1172_; lean_object* v_unused_1173_; lean_object* v_unused_1174_; 
v_unused_1170_ = lean_ctor_get(v_r_1120_, 4);
lean_dec(v_unused_1170_);
v_unused_1171_ = lean_ctor_get(v_r_1120_, 3);
lean_dec(v_unused_1171_);
v_unused_1172_ = lean_ctor_get(v_r_1120_, 2);
lean_dec(v_unused_1172_);
v_unused_1173_ = lean_ctor_get(v_r_1120_, 1);
lean_dec(v_unused_1173_);
v_unused_1174_ = lean_ctor_get(v_r_1120_, 0);
lean_dec(v_unused_1174_);
v___x_1142_ = v_r_1120_;
v_isShared_1143_ = v_isSharedCheck_1169_;
goto v_resetjp_1141_;
}
else
{
lean_dec(v_r_1120_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1169_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___y_1147_; lean_object* v___y_1148_; lean_object* v___y_1149_; lean_object* v___x_1157_; lean_object* v___y_1159_; 
v___x_1144_ = lean_nat_add(v___x_1114_, v_size_1116_);
lean_dec(v_size_1116_);
v___x_1145_ = lean_nat_add(v___x_1144_, v_size_1115_);
lean_dec(v___x_1144_);
v___x_1157_ = lean_nat_add(v___x_1114_, v_size_1132_);
if (lean_obj_tag(v_l_1136_) == 0)
{
lean_object* v_size_1167_; 
v_size_1167_ = lean_ctor_get(v_l_1136_, 0);
lean_inc(v_size_1167_);
v___y_1159_ = v_size_1167_;
goto v___jp_1158_;
}
else
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_unsigned_to_nat(0u);
v___y_1159_ = v___x_1168_;
goto v___jp_1158_;
}
v___jp_1146_:
{
lean_object* v___x_1150_; lean_object* v___x_1152_; 
v___x_1150_ = lean_nat_add(v___y_1148_, v___y_1149_);
lean_dec(v___y_1149_);
lean_dec(v___y_1148_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 4, v_r_1108_);
lean_ctor_set(v___x_1142_, 3, v_r_1137_);
lean_ctor_set(v___x_1142_, 2, v_v_1106_);
lean_ctor_set(v___x_1142_, 1, v_k_1105_);
lean_ctor_set(v___x_1142_, 0, v___x_1150_);
v___x_1152_ = v___x_1142_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1150_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1156_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1156_, 3, v_r_1137_);
lean_ctor_set(v_reuseFailAlloc_1156_, 4, v_r_1108_);
v___x_1152_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
lean_object* v___x_1154_; 
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 4, v___x_1152_);
lean_ctor_set(v___x_1130_, 3, v___y_1147_);
lean_ctor_set(v___x_1130_, 2, v_v_1135_);
lean_ctor_set(v___x_1130_, 1, v_k_1134_);
lean_ctor_set(v___x_1130_, 0, v___x_1145_);
v___x_1154_ = v___x_1130_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1155_, 1, v_k_1134_);
lean_ctor_set(v_reuseFailAlloc_1155_, 2, v_v_1135_);
lean_ctor_set(v_reuseFailAlloc_1155_, 3, v___y_1147_);
lean_ctor_set(v_reuseFailAlloc_1155_, 4, v___x_1152_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
v___jp_1158_:
{
lean_object* v___x_1160_; lean_object* v___x_1162_; 
v___x_1160_ = lean_nat_add(v___x_1157_, v___y_1159_);
lean_dec(v___y_1159_);
lean_dec(v___x_1157_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 4, v_l_1136_);
lean_ctor_set(v___x_1110_, 3, v_l_1119_);
lean_ctor_set(v___x_1110_, 2, v_v_1118_);
lean_ctor_set(v___x_1110_, 1, v_k_1117_);
lean_ctor_set(v___x_1110_, 0, v___x_1160_);
v___x_1162_ = v___x_1110_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1160_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_k_1117_);
lean_ctor_set(v_reuseFailAlloc_1166_, 2, v_v_1118_);
lean_ctor_set(v_reuseFailAlloc_1166_, 3, v_l_1119_);
lean_ctor_set(v_reuseFailAlloc_1166_, 4, v_l_1136_);
v___x_1162_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
lean_object* v___x_1163_; 
v___x_1163_ = lean_nat_add(v___x_1114_, v_size_1115_);
if (lean_obj_tag(v_r_1137_) == 0)
{
lean_object* v_size_1164_; 
v_size_1164_ = lean_ctor_get(v_r_1137_, 0);
lean_inc(v_size_1164_);
v___y_1147_ = v___x_1162_;
v___y_1148_ = v___x_1163_;
v___y_1149_ = v_size_1164_;
goto v___jp_1146_;
}
else
{
lean_object* v___x_1165_; 
v___x_1165_ = lean_unsigned_to_nat(0u);
v___y_1147_ = v___x_1162_;
v___y_1148_ = v___x_1163_;
v___y_1149_ = v___x_1165_;
goto v___jp_1146_;
}
}
}
}
}
else
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1180_; 
lean_del_object(v___x_1110_);
v___x_1175_ = lean_nat_add(v___x_1114_, v_size_1116_);
lean_dec(v_size_1116_);
v___x_1176_ = lean_nat_add(v___x_1175_, v_size_1115_);
lean_dec(v___x_1175_);
v___x_1177_ = lean_nat_add(v___x_1114_, v_size_1115_);
v___x_1178_ = lean_nat_add(v___x_1177_, v_size_1133_);
lean_dec(v___x_1177_);
lean_inc_ref(v_r_1108_);
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 4, v_r_1108_);
lean_ctor_set(v___x_1130_, 3, v_r_1120_);
lean_ctor_set(v___x_1130_, 2, v_v_1106_);
lean_ctor_set(v___x_1130_, 1, v_k_1105_);
lean_ctor_set(v___x_1130_, 0, v___x_1178_);
v___x_1180_ = v___x_1130_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1178_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1193_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1193_, 3, v_r_1120_);
lean_ctor_set(v_reuseFailAlloc_1193_, 4, v_r_1108_);
v___x_1180_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1187_; 
v_isSharedCheck_1187_ = !lean_is_exclusive(v_r_1108_);
if (v_isSharedCheck_1187_ == 0)
{
lean_object* v_unused_1188_; lean_object* v_unused_1189_; lean_object* v_unused_1190_; lean_object* v_unused_1191_; lean_object* v_unused_1192_; 
v_unused_1188_ = lean_ctor_get(v_r_1108_, 4);
lean_dec(v_unused_1188_);
v_unused_1189_ = lean_ctor_get(v_r_1108_, 3);
lean_dec(v_unused_1189_);
v_unused_1190_ = lean_ctor_get(v_r_1108_, 2);
lean_dec(v_unused_1190_);
v_unused_1191_ = lean_ctor_get(v_r_1108_, 1);
lean_dec(v_unused_1191_);
v_unused_1192_ = lean_ctor_get(v_r_1108_, 0);
lean_dec(v_unused_1192_);
v___x_1182_ = v_r_1108_;
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
else
{
lean_dec(v_r_1108_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 4, v___x_1180_);
lean_ctor_set(v___x_1182_, 3, v_l_1119_);
lean_ctor_set(v___x_1182_, 2, v_v_1118_);
lean_ctor_set(v___x_1182_, 1, v_k_1117_);
lean_ctor_set(v___x_1182_, 0, v___x_1176_);
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v___x_1176_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v_k_1117_);
lean_ctor_set(v_reuseFailAlloc_1186_, 2, v_v_1118_);
lean_ctor_set(v_reuseFailAlloc_1186_, 3, v_l_1119_);
lean_ctor_set(v_reuseFailAlloc_1186_, 4, v___x_1180_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1200_; 
v_l_1200_ = lean_ctor_get(v_impl_1113_, 3);
lean_inc(v_l_1200_);
if (lean_obj_tag(v_l_1200_) == 0)
{
lean_object* v_r_1201_; lean_object* v_k_1202_; lean_object* v_v_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1214_; 
v_r_1201_ = lean_ctor_get(v_impl_1113_, 4);
v_k_1202_ = lean_ctor_get(v_impl_1113_, 1);
v_v_1203_ = lean_ctor_get(v_impl_1113_, 2);
v_isSharedCheck_1214_ = !lean_is_exclusive(v_impl_1113_);
if (v_isSharedCheck_1214_ == 0)
{
lean_object* v_unused_1215_; lean_object* v_unused_1216_; 
v_unused_1215_ = lean_ctor_get(v_impl_1113_, 3);
lean_dec(v_unused_1215_);
v_unused_1216_ = lean_ctor_get(v_impl_1113_, 0);
lean_dec(v_unused_1216_);
v___x_1205_ = v_impl_1113_;
v_isShared_1206_ = v_isSharedCheck_1214_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_r_1201_);
lean_inc(v_v_1203_);
lean_inc(v_k_1202_);
lean_dec(v_impl_1113_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1214_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1207_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1201_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 3, v_r_1201_);
lean_ctor_set(v___x_1205_, 2, v_v_1106_);
lean_ctor_set(v___x_1205_, 1, v_k_1105_);
lean_ctor_set(v___x_1205_, 0, v___x_1114_);
v___x_1209_ = v___x_1205_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v___x_1114_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1213_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1213_, 3, v_r_1201_);
lean_ctor_set(v_reuseFailAlloc_1213_, 4, v_r_1201_);
v___x_1209_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1211_; 
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 4, v___x_1209_);
lean_ctor_set(v___x_1110_, 3, v_l_1200_);
lean_ctor_set(v___x_1110_, 2, v_v_1203_);
lean_ctor_set(v___x_1110_, 1, v_k_1202_);
lean_ctor_set(v___x_1110_, 0, v___x_1207_);
v___x_1211_ = v___x_1110_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1207_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v_k_1202_);
lean_ctor_set(v_reuseFailAlloc_1212_, 2, v_v_1203_);
lean_ctor_set(v_reuseFailAlloc_1212_, 3, v_l_1200_);
lean_ctor_set(v_reuseFailAlloc_1212_, 4, v___x_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
else
{
lean_object* v_r_1217_; 
v_r_1217_ = lean_ctor_get(v_impl_1113_, 4);
lean_inc(v_r_1217_);
if (lean_obj_tag(v_r_1217_) == 0)
{
lean_object* v_k_1218_; lean_object* v_v_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1242_; 
v_k_1218_ = lean_ctor_get(v_impl_1113_, 1);
v_v_1219_ = lean_ctor_get(v_impl_1113_, 2);
v_isSharedCheck_1242_ = !lean_is_exclusive(v_impl_1113_);
if (v_isSharedCheck_1242_ == 0)
{
lean_object* v_unused_1243_; lean_object* v_unused_1244_; lean_object* v_unused_1245_; 
v_unused_1243_ = lean_ctor_get(v_impl_1113_, 4);
lean_dec(v_unused_1243_);
v_unused_1244_ = lean_ctor_get(v_impl_1113_, 3);
lean_dec(v_unused_1244_);
v_unused_1245_ = lean_ctor_get(v_impl_1113_, 0);
lean_dec(v_unused_1245_);
v___x_1221_ = v_impl_1113_;
v_isShared_1222_ = v_isSharedCheck_1242_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_v_1219_);
lean_inc(v_k_1218_);
lean_dec(v_impl_1113_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1242_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v_k_1223_; lean_object* v_v_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1238_; 
v_k_1223_ = lean_ctor_get(v_r_1217_, 1);
v_v_1224_ = lean_ctor_get(v_r_1217_, 2);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_r_1217_);
if (v_isSharedCheck_1238_ == 0)
{
lean_object* v_unused_1239_; lean_object* v_unused_1240_; lean_object* v_unused_1241_; 
v_unused_1239_ = lean_ctor_get(v_r_1217_, 4);
lean_dec(v_unused_1239_);
v_unused_1240_ = lean_ctor_get(v_r_1217_, 3);
lean_dec(v_unused_1240_);
v_unused_1241_ = lean_ctor_get(v_r_1217_, 0);
lean_dec(v_unused_1241_);
v___x_1226_ = v_r_1217_;
v_isShared_1227_ = v_isSharedCheck_1238_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_v_1224_);
lean_inc(v_k_1223_);
lean_dec(v_r_1217_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1238_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1228_; lean_object* v___x_1230_; 
v___x_1228_ = lean_unsigned_to_nat(3u);
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 4, v_l_1200_);
lean_ctor_set(v___x_1226_, 3, v_l_1200_);
lean_ctor_set(v___x_1226_, 2, v_v_1219_);
lean_ctor_set(v___x_1226_, 1, v_k_1218_);
lean_ctor_set(v___x_1226_, 0, v___x_1114_);
v___x_1230_ = v___x_1226_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v___x_1114_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_k_1218_);
lean_ctor_set(v_reuseFailAlloc_1237_, 2, v_v_1219_);
lean_ctor_set(v_reuseFailAlloc_1237_, 3, v_l_1200_);
lean_ctor_set(v_reuseFailAlloc_1237_, 4, v_l_1200_);
v___x_1230_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
lean_object* v___x_1232_; 
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 4, v_l_1200_);
lean_ctor_set(v___x_1221_, 2, v_v_1106_);
lean_ctor_set(v___x_1221_, 1, v_k_1105_);
lean_ctor_set(v___x_1221_, 0, v___x_1114_);
v___x_1232_ = v___x_1221_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1114_);
lean_ctor_set(v_reuseFailAlloc_1236_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1236_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1236_, 3, v_l_1200_);
lean_ctor_set(v_reuseFailAlloc_1236_, 4, v_l_1200_);
v___x_1232_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
lean_object* v___x_1234_; 
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 4, v___x_1232_);
lean_ctor_set(v___x_1110_, 3, v___x_1230_);
lean_ctor_set(v___x_1110_, 2, v_v_1224_);
lean_ctor_set(v___x_1110_, 1, v_k_1223_);
lean_ctor_set(v___x_1110_, 0, v___x_1228_);
v___x_1234_ = v___x_1110_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___x_1228_);
lean_ctor_set(v_reuseFailAlloc_1235_, 1, v_k_1223_);
lean_ctor_set(v_reuseFailAlloc_1235_, 2, v_v_1224_);
lean_ctor_set(v_reuseFailAlloc_1235_, 3, v___x_1230_);
lean_ctor_set(v_reuseFailAlloc_1235_, 4, v___x_1232_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
}
}
}
else
{
lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1246_ = lean_unsigned_to_nat(2u);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 4, v_r_1217_);
lean_ctor_set(v___x_1110_, 3, v_impl_1113_);
lean_ctor_set(v___x_1110_, 0, v___x_1246_);
v___x_1248_ = v___x_1110_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1246_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1249_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1249_, 3, v_impl_1113_);
lean_ctor_set(v_reuseFailAlloc_1249_, 4, v_r_1217_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1251_; 
lean_dec(v_v_1106_);
lean_dec(v_k_1105_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 2, v_v_1102_);
lean_ctor_set(v___x_1110_, 1, v_k_1101_);
v___x_1251_ = v___x_1110_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_size_1104_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v_k_1101_);
lean_ctor_set(v_reuseFailAlloc_1252_, 2, v_v_1102_);
lean_ctor_set(v_reuseFailAlloc_1252_, 3, v_l_1107_);
lean_ctor_set(v_reuseFailAlloc_1252_, 4, v_r_1108_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
default: 
{
lean_object* v_impl_1253_; lean_object* v___x_1254_; 
lean_dec(v_size_1104_);
v_impl_1253_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(v_k_1101_, v_v_1102_, v_r_1108_);
v___x_1254_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1107_) == 0)
{
lean_object* v_size_1255_; lean_object* v_size_1256_; lean_object* v_k_1257_; lean_object* v_v_1258_; lean_object* v_l_1259_; lean_object* v_r_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; 
v_size_1255_ = lean_ctor_get(v_l_1107_, 0);
v_size_1256_ = lean_ctor_get(v_impl_1253_, 0);
lean_inc(v_size_1256_);
v_k_1257_ = lean_ctor_get(v_impl_1253_, 1);
lean_inc(v_k_1257_);
v_v_1258_ = lean_ctor_get(v_impl_1253_, 2);
lean_inc(v_v_1258_);
v_l_1259_ = lean_ctor_get(v_impl_1253_, 3);
lean_inc(v_l_1259_);
v_r_1260_ = lean_ctor_get(v_impl_1253_, 4);
lean_inc(v_r_1260_);
v___x_1261_ = lean_unsigned_to_nat(3u);
v___x_1262_ = lean_nat_mul(v___x_1261_, v_size_1255_);
v___x_1263_ = lean_nat_dec_lt(v___x_1262_, v_size_1256_);
lean_dec(v___x_1262_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1267_; 
lean_dec(v_r_1260_);
lean_dec(v_l_1259_);
lean_dec(v_v_1258_);
lean_dec(v_k_1257_);
v___x_1264_ = lean_nat_add(v___x_1254_, v_size_1255_);
v___x_1265_ = lean_nat_add(v___x_1264_, v_size_1256_);
lean_dec(v_size_1256_);
lean_dec(v___x_1264_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 4, v_impl_1253_);
lean_ctor_set(v___x_1110_, 0, v___x_1265_);
v___x_1267_ = v___x_1110_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1265_);
lean_ctor_set(v_reuseFailAlloc_1268_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1268_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1268_, 3, v_l_1107_);
lean_ctor_set(v_reuseFailAlloc_1268_, 4, v_impl_1253_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
else
{
lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1332_; 
v_isSharedCheck_1332_ = !lean_is_exclusive(v_impl_1253_);
if (v_isSharedCheck_1332_ == 0)
{
lean_object* v_unused_1333_; lean_object* v_unused_1334_; lean_object* v_unused_1335_; lean_object* v_unused_1336_; lean_object* v_unused_1337_; 
v_unused_1333_ = lean_ctor_get(v_impl_1253_, 4);
lean_dec(v_unused_1333_);
v_unused_1334_ = lean_ctor_get(v_impl_1253_, 3);
lean_dec(v_unused_1334_);
v_unused_1335_ = lean_ctor_get(v_impl_1253_, 2);
lean_dec(v_unused_1335_);
v_unused_1336_ = lean_ctor_get(v_impl_1253_, 1);
lean_dec(v_unused_1336_);
v_unused_1337_ = lean_ctor_get(v_impl_1253_, 0);
lean_dec(v_unused_1337_);
v___x_1270_ = v_impl_1253_;
v_isShared_1271_ = v_isSharedCheck_1332_;
goto v_resetjp_1269_;
}
else
{
lean_dec(v_impl_1253_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1332_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v_size_1272_; lean_object* v_k_1273_; lean_object* v_v_1274_; lean_object* v_l_1275_; lean_object* v_r_1276_; lean_object* v_size_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; 
v_size_1272_ = lean_ctor_get(v_l_1259_, 0);
v_k_1273_ = lean_ctor_get(v_l_1259_, 1);
v_v_1274_ = lean_ctor_get(v_l_1259_, 2);
v_l_1275_ = lean_ctor_get(v_l_1259_, 3);
v_r_1276_ = lean_ctor_get(v_l_1259_, 4);
v_size_1277_ = lean_ctor_get(v_r_1260_, 0);
v___x_1278_ = lean_unsigned_to_nat(2u);
v___x_1279_ = lean_nat_mul(v___x_1278_, v_size_1277_);
v___x_1280_ = lean_nat_dec_lt(v_size_1272_, v___x_1279_);
lean_dec(v___x_1279_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1308_; 
lean_inc(v_r_1276_);
lean_inc(v_l_1275_);
lean_inc(v_v_1274_);
lean_inc(v_k_1273_);
v_isSharedCheck_1308_ = !lean_is_exclusive(v_l_1259_);
if (v_isSharedCheck_1308_ == 0)
{
lean_object* v_unused_1309_; lean_object* v_unused_1310_; lean_object* v_unused_1311_; lean_object* v_unused_1312_; lean_object* v_unused_1313_; 
v_unused_1309_ = lean_ctor_get(v_l_1259_, 4);
lean_dec(v_unused_1309_);
v_unused_1310_ = lean_ctor_get(v_l_1259_, 3);
lean_dec(v_unused_1310_);
v_unused_1311_ = lean_ctor_get(v_l_1259_, 2);
lean_dec(v_unused_1311_);
v_unused_1312_ = lean_ctor_get(v_l_1259_, 1);
lean_dec(v_unused_1312_);
v_unused_1313_ = lean_ctor_get(v_l_1259_, 0);
lean_dec(v_unused_1313_);
v___x_1282_ = v_l_1259_;
v_isShared_1283_ = v_isSharedCheck_1308_;
goto v_resetjp_1281_;
}
else
{
lean_dec(v_l_1259_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1308_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___y_1289_; lean_object* v___y_1298_; 
v___x_1284_ = lean_nat_add(v___x_1254_, v_size_1255_);
v___x_1285_ = lean_nat_add(v___x_1284_, v_size_1256_);
lean_dec(v_size_1256_);
if (lean_obj_tag(v_l_1275_) == 0)
{
lean_object* v_size_1306_; 
v_size_1306_ = lean_ctor_get(v_l_1275_, 0);
lean_inc(v_size_1306_);
v___y_1298_ = v_size_1306_;
goto v___jp_1297_;
}
else
{
lean_object* v___x_1307_; 
v___x_1307_ = lean_unsigned_to_nat(0u);
v___y_1298_ = v___x_1307_;
goto v___jp_1297_;
}
v___jp_1286_:
{
lean_object* v___x_1290_; lean_object* v___x_1292_; 
v___x_1290_ = lean_nat_add(v___y_1287_, v___y_1289_);
lean_dec(v___y_1289_);
lean_dec(v___y_1287_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 4, v_r_1260_);
lean_ctor_set(v___x_1282_, 3, v_r_1276_);
lean_ctor_set(v___x_1282_, 2, v_v_1258_);
lean_ctor_set(v___x_1282_, 1, v_k_1257_);
lean_ctor_set(v___x_1282_, 0, v___x_1290_);
v___x_1292_ = v___x_1282_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v_k_1257_);
lean_ctor_set(v_reuseFailAlloc_1296_, 2, v_v_1258_);
lean_ctor_set(v_reuseFailAlloc_1296_, 3, v_r_1276_);
lean_ctor_set(v_reuseFailAlloc_1296_, 4, v_r_1260_);
v___x_1292_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
lean_object* v___x_1294_; 
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 4, v___x_1292_);
lean_ctor_set(v___x_1270_, 3, v___y_1288_);
lean_ctor_set(v___x_1270_, 2, v_v_1274_);
lean_ctor_set(v___x_1270_, 1, v_k_1273_);
lean_ctor_set(v___x_1270_, 0, v___x_1285_);
v___x_1294_ = v___x_1270_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1285_);
lean_ctor_set(v_reuseFailAlloc_1295_, 1, v_k_1273_);
lean_ctor_set(v_reuseFailAlloc_1295_, 2, v_v_1274_);
lean_ctor_set(v_reuseFailAlloc_1295_, 3, v___y_1288_);
lean_ctor_set(v_reuseFailAlloc_1295_, 4, v___x_1292_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
v___jp_1297_:
{
lean_object* v___x_1299_; lean_object* v___x_1301_; 
v___x_1299_ = lean_nat_add(v___x_1284_, v___y_1298_);
lean_dec(v___y_1298_);
lean_dec(v___x_1284_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 4, v_l_1275_);
lean_ctor_set(v___x_1110_, 0, v___x_1299_);
v___x_1301_ = v___x_1110_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v___x_1299_);
lean_ctor_set(v_reuseFailAlloc_1305_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1305_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1305_, 3, v_l_1107_);
lean_ctor_set(v_reuseFailAlloc_1305_, 4, v_l_1275_);
v___x_1301_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
lean_object* v___x_1302_; 
v___x_1302_ = lean_nat_add(v___x_1254_, v_size_1277_);
if (lean_obj_tag(v_r_1276_) == 0)
{
lean_object* v_size_1303_; 
v_size_1303_ = lean_ctor_get(v_r_1276_, 0);
lean_inc(v_size_1303_);
v___y_1287_ = v___x_1302_;
v___y_1288_ = v___x_1301_;
v___y_1289_ = v_size_1303_;
goto v___jp_1286_;
}
else
{
lean_object* v___x_1304_; 
v___x_1304_ = lean_unsigned_to_nat(0u);
v___y_1287_ = v___x_1302_;
v___y_1288_ = v___x_1301_;
v___y_1289_ = v___x_1304_;
goto v___jp_1286_;
}
}
}
}
}
else
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1318_; 
lean_del_object(v___x_1110_);
v___x_1314_ = lean_nat_add(v___x_1254_, v_size_1255_);
v___x_1315_ = lean_nat_add(v___x_1314_, v_size_1256_);
lean_dec(v_size_1256_);
v___x_1316_ = lean_nat_add(v___x_1314_, v_size_1272_);
lean_dec(v___x_1314_);
lean_inc_ref(v_l_1107_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 4, v_l_1259_);
lean_ctor_set(v___x_1270_, 3, v_l_1107_);
lean_ctor_set(v___x_1270_, 2, v_v_1106_);
lean_ctor_set(v___x_1270_, 1, v_k_1105_);
lean_ctor_set(v___x_1270_, 0, v___x_1316_);
v___x_1318_ = v___x_1270_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1316_);
lean_ctor_set(v_reuseFailAlloc_1331_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1331_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1331_, 3, v_l_1107_);
lean_ctor_set(v_reuseFailAlloc_1331_, 4, v_l_1259_);
v___x_1318_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
v_isSharedCheck_1325_ = !lean_is_exclusive(v_l_1107_);
if (v_isSharedCheck_1325_ == 0)
{
lean_object* v_unused_1326_; lean_object* v_unused_1327_; lean_object* v_unused_1328_; lean_object* v_unused_1329_; lean_object* v_unused_1330_; 
v_unused_1326_ = lean_ctor_get(v_l_1107_, 4);
lean_dec(v_unused_1326_);
v_unused_1327_ = lean_ctor_get(v_l_1107_, 3);
lean_dec(v_unused_1327_);
v_unused_1328_ = lean_ctor_get(v_l_1107_, 2);
lean_dec(v_unused_1328_);
v_unused_1329_ = lean_ctor_get(v_l_1107_, 1);
lean_dec(v_unused_1329_);
v_unused_1330_ = lean_ctor_get(v_l_1107_, 0);
lean_dec(v_unused_1330_);
v___x_1320_ = v_l_1107_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_dec(v_l_1107_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 4, v_r_1260_);
lean_ctor_set(v___x_1320_, 3, v___x_1318_);
lean_ctor_set(v___x_1320_, 2, v_v_1258_);
lean_ctor_set(v___x_1320_, 1, v_k_1257_);
lean_ctor_set(v___x_1320_, 0, v___x_1315_);
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1315_);
lean_ctor_set(v_reuseFailAlloc_1324_, 1, v_k_1257_);
lean_ctor_set(v_reuseFailAlloc_1324_, 2, v_v_1258_);
lean_ctor_set(v_reuseFailAlloc_1324_, 3, v___x_1318_);
lean_ctor_set(v_reuseFailAlloc_1324_, 4, v_r_1260_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1338_; 
v_l_1338_ = lean_ctor_get(v_impl_1253_, 3);
lean_inc(v_l_1338_);
if (lean_obj_tag(v_l_1338_) == 0)
{
lean_object* v_r_1339_; lean_object* v_k_1340_; lean_object* v_v_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1364_; 
v_r_1339_ = lean_ctor_get(v_impl_1253_, 4);
v_k_1340_ = lean_ctor_get(v_impl_1253_, 1);
v_v_1341_ = lean_ctor_get(v_impl_1253_, 2);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_impl_1253_);
if (v_isSharedCheck_1364_ == 0)
{
lean_object* v_unused_1365_; lean_object* v_unused_1366_; 
v_unused_1365_ = lean_ctor_get(v_impl_1253_, 3);
lean_dec(v_unused_1365_);
v_unused_1366_ = lean_ctor_get(v_impl_1253_, 0);
lean_dec(v_unused_1366_);
v___x_1343_ = v_impl_1253_;
v_isShared_1344_ = v_isSharedCheck_1364_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_r_1339_);
lean_inc(v_v_1341_);
lean_inc(v_k_1340_);
lean_dec(v_impl_1253_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1364_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v_k_1345_; lean_object* v_v_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1360_; 
v_k_1345_ = lean_ctor_get(v_l_1338_, 1);
v_v_1346_ = lean_ctor_get(v_l_1338_, 2);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_l_1338_);
if (v_isSharedCheck_1360_ == 0)
{
lean_object* v_unused_1361_; lean_object* v_unused_1362_; lean_object* v_unused_1363_; 
v_unused_1361_ = lean_ctor_get(v_l_1338_, 4);
lean_dec(v_unused_1361_);
v_unused_1362_ = lean_ctor_get(v_l_1338_, 3);
lean_dec(v_unused_1362_);
v_unused_1363_ = lean_ctor_get(v_l_1338_, 0);
lean_dec(v_unused_1363_);
v___x_1348_ = v_l_1338_;
v_isShared_1349_ = v_isSharedCheck_1360_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_v_1346_);
lean_inc(v_k_1345_);
lean_dec(v_l_1338_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1360_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1350_; lean_object* v___x_1352_; 
v___x_1350_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1339_, 2);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 4, v_r_1339_);
lean_ctor_set(v___x_1348_, 3, v_r_1339_);
lean_ctor_set(v___x_1348_, 2, v_v_1106_);
lean_ctor_set(v___x_1348_, 1, v_k_1105_);
lean_ctor_set(v___x_1348_, 0, v___x_1254_);
v___x_1352_ = v___x_1348_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1254_);
lean_ctor_set(v_reuseFailAlloc_1359_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1359_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1359_, 3, v_r_1339_);
lean_ctor_set(v_reuseFailAlloc_1359_, 4, v_r_1339_);
v___x_1352_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1354_; 
lean_inc(v_r_1339_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 3, v_r_1339_);
lean_ctor_set(v___x_1343_, 0, v___x_1254_);
v___x_1354_ = v___x_1343_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v___x_1254_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_k_1340_);
lean_ctor_set(v_reuseFailAlloc_1358_, 2, v_v_1341_);
lean_ctor_set(v_reuseFailAlloc_1358_, 3, v_r_1339_);
lean_ctor_set(v_reuseFailAlloc_1358_, 4, v_r_1339_);
v___x_1354_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
lean_object* v___x_1356_; 
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 4, v___x_1354_);
lean_ctor_set(v___x_1110_, 3, v___x_1352_);
lean_ctor_set(v___x_1110_, 2, v_v_1346_);
lean_ctor_set(v___x_1110_, 1, v_k_1345_);
lean_ctor_set(v___x_1110_, 0, v___x_1350_);
v___x_1356_ = v___x_1110_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v___x_1350_);
lean_ctor_set(v_reuseFailAlloc_1357_, 1, v_k_1345_);
lean_ctor_set(v_reuseFailAlloc_1357_, 2, v_v_1346_);
lean_ctor_set(v_reuseFailAlloc_1357_, 3, v___x_1352_);
lean_ctor_set(v_reuseFailAlloc_1357_, 4, v___x_1354_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
}
else
{
lean_object* v_r_1367_; 
v_r_1367_ = lean_ctor_get(v_impl_1253_, 4);
lean_inc(v_r_1367_);
if (lean_obj_tag(v_r_1367_) == 0)
{
lean_object* v_k_1368_; lean_object* v_v_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1380_; 
v_k_1368_ = lean_ctor_get(v_impl_1253_, 1);
v_v_1369_ = lean_ctor_get(v_impl_1253_, 2);
v_isSharedCheck_1380_ = !lean_is_exclusive(v_impl_1253_);
if (v_isSharedCheck_1380_ == 0)
{
lean_object* v_unused_1381_; lean_object* v_unused_1382_; lean_object* v_unused_1383_; 
v_unused_1381_ = lean_ctor_get(v_impl_1253_, 4);
lean_dec(v_unused_1381_);
v_unused_1382_ = lean_ctor_get(v_impl_1253_, 3);
lean_dec(v_unused_1382_);
v_unused_1383_ = lean_ctor_get(v_impl_1253_, 0);
lean_dec(v_unused_1383_);
v___x_1371_ = v_impl_1253_;
v_isShared_1372_ = v_isSharedCheck_1380_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_v_1369_);
lean_inc(v_k_1368_);
lean_dec(v_impl_1253_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1380_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1373_; lean_object* v___x_1375_; 
v___x_1373_ = lean_unsigned_to_nat(3u);
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 4, v_l_1338_);
lean_ctor_set(v___x_1371_, 2, v_v_1106_);
lean_ctor_set(v___x_1371_, 1, v_k_1105_);
lean_ctor_set(v___x_1371_, 0, v___x_1254_);
v___x_1375_ = v___x_1371_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v___x_1254_);
lean_ctor_set(v_reuseFailAlloc_1379_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1379_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1379_, 3, v_l_1338_);
lean_ctor_set(v_reuseFailAlloc_1379_, 4, v_l_1338_);
v___x_1375_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
lean_object* v___x_1377_; 
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 4, v_r_1367_);
lean_ctor_set(v___x_1110_, 3, v___x_1375_);
lean_ctor_set(v___x_1110_, 2, v_v_1369_);
lean_ctor_set(v___x_1110_, 1, v_k_1368_);
lean_ctor_set(v___x_1110_, 0, v___x_1373_);
v___x_1377_ = v___x_1110_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1373_);
lean_ctor_set(v_reuseFailAlloc_1378_, 1, v_k_1368_);
lean_ctor_set(v_reuseFailAlloc_1378_, 2, v_v_1369_);
lean_ctor_set(v_reuseFailAlloc_1378_, 3, v___x_1375_);
lean_ctor_set(v_reuseFailAlloc_1378_, 4, v_r_1367_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
else
{
lean_object* v___x_1384_; lean_object* v___x_1386_; 
v___x_1384_ = lean_unsigned_to_nat(2u);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 4, v_impl_1253_);
lean_ctor_set(v___x_1110_, 3, v_r_1367_);
lean_ctor_set(v___x_1110_, 0, v___x_1384_);
v___x_1386_ = v___x_1110_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1384_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v_k_1105_);
lean_ctor_set(v_reuseFailAlloc_1387_, 2, v_v_1106_);
lean_ctor_set(v_reuseFailAlloc_1387_, 3, v_r_1367_);
lean_ctor_set(v_reuseFailAlloc_1387_, 4, v_impl_1253_);
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
}
}
}
else
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1389_ = lean_unsigned_to_nat(1u);
v___x_1390_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
lean_ctor_set(v___x_1390_, 1, v_k_1101_);
lean_ctor_set(v___x_1390_, 2, v_v_1102_);
lean_ctor_set(v___x_1390_, 3, v_t_1103_);
lean_ctor_set(v___x_1390_, 4, v_t_1103_);
return v___x_1390_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarIdSet_insert(lean_object* v_s_1391_, lean_object* v_mvarId_1392_){
_start:
{
uint8_t v___x_1393_; 
v___x_1393_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0___redArg(v_mvarId_1392_, v_s_1391_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = lean_box(0);
v___x_1395_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(v_mvarId_1392_, v___x_1394_, v_s_1391_);
return v___x_1395_;
}
else
{
lean_dec(v_mvarId_1392_);
return v_s_1391_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0(lean_object* v_00_u03b2_1396_, lean_object* v_k_1397_, lean_object* v_t_1398_){
_start:
{
uint8_t v___x_1399_; 
v___x_1399_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0___redArg(v_k_1397_, v_t_1398_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0___boxed(lean_object* v_00_u03b2_1400_, lean_object* v_k_1401_, lean_object* v_t_1402_){
_start:
{
uint8_t v_res_1403_; lean_object* v_r_1404_; 
v_res_1403_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_MVarIdSet_insert_spec__0(v_00_u03b2_1400_, v_k_1401_, v_t_1402_);
lean_dec(v_t_1402_);
lean_dec(v_k_1401_);
v_r_1404_ = lean_box(v_res_1403_);
return v_r_1404_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1(lean_object* v_00_u03b2_1405_, lean_object* v_k_1406_, lean_object* v_v_1407_, lean_object* v_t_1408_, lean_object* v_hl_1409_){
_start:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(v_k_1406_, v_v_1407_, v_t_1408_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarIdSet_ofList(lean_object* v_l_1411_){
_start:
{
lean_object* v___f_1412_; lean_object* v___x_1413_; 
v___f_1412_ = ((lean_object*)(l_Lean_instSingletonFVarIdFVarIdSet___aux__1___closed__0));
v___x_1413_ = l_Std_TreeSet_ofList___redArg(v_l_1411_, v___f_1412_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarIdSet_ofList___boxed(lean_object* v_l_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lean_MVarIdSet_ofList(v_l_1414_);
lean_dec(v_l_1414_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarIdSet_ofArray(lean_object* v_l_1416_){
_start:
{
lean_object* v___f_1417_; lean_object* v___x_1418_; 
v___f_1417_ = ((lean_object*)(l_Lean_instSingletonFVarIdFVarIdSet___aux__1___closed__0));
v___x_1418_ = l_Std_TreeSet_ofArray___redArg(v_l_1416_, v___f_1417_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarIdSet_ofArray___boxed(lean_object* v_l_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = l_Lean_MVarIdSet_ofArray(v_l_1419_);
lean_dec_ref(v_l_1419_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdSetMVarIdOfMonad___aux__1___redArg(lean_object* v_inst_1421_, lean_object* v_m_1422_, lean_object* v_init_1423_, lean_object* v_f_1424_){
_start:
{
lean_object* v_toApplicative_1425_; lean_object* v_toBind_1426_; lean_object* v_toPure_1427_; lean_object* v___f_1428_; lean_object* v___x_1429_; lean_object* v___f_1430_; lean_object* v___x_1431_; 
v_toApplicative_1425_ = lean_ctor_get(v_inst_1421_, 0);
v_toBind_1426_ = lean_ctor_get(v_inst_1421_, 1);
lean_inc(v_toBind_1426_);
v_toPure_1427_ = lean_ctor_get(v_toApplicative_1425_, 1);
lean_inc(v_toPure_1427_);
v___f_1428_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1428_, 0, v_f_1424_);
v___x_1429_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_1421_, v___f_1428_, v_init_1423_, v_m_1422_);
v___f_1430_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1430_, 0, v_toPure_1427_);
v___x_1431_ = lean_apply_4(v_toBind_1426_, lean_box(0), lean_box(0), v___x_1429_, v___f_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdSetMVarIdOfMonad___aux__1(lean_object* v_m_1432_, lean_object* v_inst_1433_, lean_object* v_00_u03b2_1434_, lean_object* v_m_1435_, lean_object* v_init_1436_, lean_object* v_f_1437_){
_start:
{
lean_object* v_toApplicative_1438_; lean_object* v_toBind_1439_; lean_object* v_toPure_1440_; lean_object* v___f_1441_; lean_object* v___x_1442_; lean_object* v___f_1443_; lean_object* v___x_1444_; 
v_toApplicative_1438_ = lean_ctor_get(v_inst_1433_, 0);
v_toBind_1439_ = lean_ctor_get(v_inst_1433_, 1);
lean_inc(v_toBind_1439_);
v_toPure_1440_ = lean_ctor_get(v_toApplicative_1438_, 1);
lean_inc(v_toPure_1440_);
v___f_1441_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1441_, 0, v_f_1437_);
v___x_1442_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_1433_, v___f_1441_, v_init_1436_, v_m_1435_);
v___f_1443_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1443_, 0, v_toPure_1440_);
v___x_1444_ = lean_apply_4(v_toBind_1439_, lean_box(0), lean_box(0), v___x_1442_, v___f_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdSetMVarIdOfMonad___redArg(lean_object* v_inst_1445_){
_start:
{
lean_object* v___x_1446_; 
v___x_1446_ = lean_alloc_closure((void*)(l_Lean_instForInMVarIdSetMVarIdOfMonad___aux__1), 6, 2);
lean_closure_set(v___x_1446_, 0, lean_box(0));
lean_closure_set(v___x_1446_, 1, v_inst_1445_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdSetMVarIdOfMonad(lean_object* v_m_1447_, lean_object* v_inst_1448_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = lean_alloc_closure((void*)(l_Lean_instForInMVarIdSetMVarIdOfMonad___aux__1), 6, 2);
lean_closure_set(v___x_1449_, 0, lean_box(0));
lean_closure_set(v___x_1449_, 1, v_inst_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarIdMap_insert___redArg(lean_object* v_s_1450_, lean_object* v_mvarId_1451_, lean_object* v_a_1452_){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(v_mvarId_1451_, v_a_1452_, v_s_1450_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarIdMap_insert(lean_object* v_00_u03b1_1454_, lean_object* v_s_1455_, lean_object* v_mvarId_1456_, lean_object* v_a_1457_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(v_mvarId_1456_, v_a_1457_, v_s_1455_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap___aux__1___redArg(){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = lean_box(1);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap___aux__1___redArg___boxed(lean_object* v___dummy_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l_Lean_instEmptyCollectionMVarIdMap___aux__1___redArg();
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap___aux__1(lean_object* v_00_u03b1_1463_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_box(1);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap___redArg(){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = lean_box(1);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap___redArg___boxed(lean_object* v___dummy_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Lean_instEmptyCollectionMVarIdMap___redArg();
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionMVarIdMap(lean_object* v_00_u03b1_1469_){
_start:
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_box(1);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdMapProdMVarIdOfMonad___aux__1___redArg___lam__0(lean_object* v_f_1471_, lean_object* v_a_1472_, lean_object* v_b_1473_, lean_object* v_c_1474_){
_start:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1475_, 0, v_a_1472_);
lean_ctor_set(v___x_1475_, 1, v_b_1473_);
v___x_1476_ = lean_apply_2(v_f_1471_, v___x_1475_, v_c_1474_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdMapProdMVarIdOfMonad___aux__1___redArg(lean_object* v_inst_1477_, lean_object* v_m_1478_, lean_object* v_init_1479_, lean_object* v_f_1480_){
_start:
{
lean_object* v_toApplicative_1481_; lean_object* v_toBind_1482_; lean_object* v_toPure_1483_; lean_object* v___f_1484_; lean_object* v___x_1485_; lean_object* v___f_1486_; lean_object* v___x_1487_; 
v_toApplicative_1481_ = lean_ctor_get(v_inst_1477_, 0);
v_toBind_1482_ = lean_ctor_get(v_inst_1477_, 1);
lean_inc(v_toBind_1482_);
v_toPure_1483_ = lean_ctor_get(v_toApplicative_1481_, 1);
lean_inc(v_toPure_1483_);
v___f_1484_ = lean_alloc_closure((void*)(l_Lean_instForInMVarIdMapProdMVarIdOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1484_, 0, v_f_1480_);
v___x_1485_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_1477_, v___f_1484_, v_init_1479_, v_m_1478_);
v___f_1486_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1486_, 0, v_toPure_1483_);
v___x_1487_ = lean_apply_4(v_toBind_1482_, lean_box(0), lean_box(0), v___x_1485_, v___f_1486_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdMapProdMVarIdOfMonad___aux__1(lean_object* v_m_1488_, lean_object* v_00_u03b1_1489_, lean_object* v_inst_1490_, lean_object* v_00_u03b2_1491_, lean_object* v_m_1492_, lean_object* v_init_1493_, lean_object* v_f_1494_){
_start:
{
lean_object* v_toApplicative_1495_; lean_object* v_toBind_1496_; lean_object* v_toPure_1497_; lean_object* v___f_1498_; lean_object* v___x_1499_; lean_object* v___f_1500_; lean_object* v___x_1501_; 
v_toApplicative_1495_ = lean_ctor_get(v_inst_1490_, 0);
v_toBind_1496_ = lean_ctor_get(v_inst_1490_, 1);
lean_inc(v_toBind_1496_);
v_toPure_1497_ = lean_ctor_get(v_toApplicative_1495_, 1);
lean_inc(v_toPure_1497_);
v___f_1498_ = lean_alloc_closure((void*)(l_Lean_instForInMVarIdMapProdMVarIdOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1498_, 0, v_f_1494_);
v___x_1499_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_1490_, v___f_1498_, v_init_1493_, v_m_1492_);
v___f_1500_ = lean_alloc_closure((void*)(l_Lean_instForInFVarIdSetFVarIdOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1500_, 0, v_toPure_1497_);
v___x_1501_ = lean_apply_4(v_toBind_1496_, lean_box(0), lean_box(0), v___x_1499_, v___f_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdMapProdMVarIdOfMonad___redArg(lean_object* v_inst_1502_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = lean_alloc_closure((void*)(l_Lean_instForInMVarIdMapProdMVarIdOfMonad___aux__1), 7, 3);
lean_closure_set(v___x_1503_, 0, lean_box(0));
lean_closure_set(v___x_1503_, 1, lean_box(0));
lean_closure_set(v___x_1503_, 2, v_inst_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInMVarIdMapProdMVarIdOfMonad(lean_object* v_m_1504_, lean_object* v_00_u03b1_1505_, lean_object* v_inst_1506_){
_start:
{
lean_object* v___x_1507_; 
v___x_1507_ = lean_alloc_closure((void*)(l_Lean_instForInMVarIdMapProdMVarIdOfMonad___aux__1), 7, 3);
lean_closure_set(v___x_1507_, 0, lean_box(0));
lean_closure_set(v___x_1507_, 1, lean_box(0));
lean_closure_set(v___x_1507_, 2, v_inst_1506_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMVarIdMap___redArg(){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_box(1);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMVarIdMap___redArg___boxed(lean_object* v___dummy_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Lean_instInhabitedMVarIdMap___redArg();
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMVarIdMap(lean_object* v_00_u03b1_1512_){
_start:
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_box(1);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ctorIdx(lean_object* v_x_1514_){
_start:
{
switch(lean_obj_tag(v_x_1514_))
{
case 0:
{
lean_object* v___x_1515_; 
v___x_1515_ = lean_unsigned_to_nat(0u);
return v___x_1515_;
}
case 1:
{
lean_object* v___x_1516_; 
v___x_1516_ = lean_unsigned_to_nat(1u);
return v___x_1516_;
}
case 2:
{
lean_object* v___x_1517_; 
v___x_1517_ = lean_unsigned_to_nat(2u);
return v___x_1517_;
}
case 3:
{
lean_object* v___x_1518_; 
v___x_1518_ = lean_unsigned_to_nat(3u);
return v___x_1518_;
}
case 4:
{
lean_object* v___x_1519_; 
v___x_1519_ = lean_unsigned_to_nat(4u);
return v___x_1519_;
}
case 5:
{
lean_object* v___x_1520_; 
v___x_1520_ = lean_unsigned_to_nat(5u);
return v___x_1520_;
}
case 6:
{
lean_object* v___x_1521_; 
v___x_1521_ = lean_unsigned_to_nat(6u);
return v___x_1521_;
}
case 7:
{
lean_object* v___x_1522_; 
v___x_1522_ = lean_unsigned_to_nat(7u);
return v___x_1522_;
}
case 8:
{
lean_object* v___x_1523_; 
v___x_1523_ = lean_unsigned_to_nat(8u);
return v___x_1523_;
}
case 9:
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_unsigned_to_nat(9u);
return v___x_1524_;
}
case 10:
{
lean_object* v___x_1525_; 
v___x_1525_ = lean_unsigned_to_nat(10u);
return v___x_1525_;
}
default: 
{
lean_object* v___x_1526_; 
v___x_1526_ = lean_unsigned_to_nat(11u);
return v___x_1526_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ctorIdx___boxed(lean_object* v_x_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lean_Expr_ctorIdx(v_x_1527_);
lean_dec_ref(v_x_1527_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ctorElim___redArg(lean_object* v_t_1529_, lean_object* v_k_1530_){
_start:
{
switch(lean_obj_tag(v_t_1529_))
{
case 4:
{
lean_object* v_declName_1531_; lean_object* v_us_1532_; lean_object* v___x_1533_; 
v_declName_1531_ = lean_ctor_get(v_t_1529_, 0);
lean_inc(v_declName_1531_);
v_us_1532_ = lean_ctor_get(v_t_1529_, 1);
lean_inc(v_us_1532_);
lean_dec_ref_known(v_t_1529_, 2);
v___x_1533_ = lean_apply_2(v_k_1530_, v_declName_1531_, v_us_1532_);
return v___x_1533_;
}
case 5:
{
lean_object* v_fn_1534_; lean_object* v_arg_1535_; lean_object* v___x_1536_; 
v_fn_1534_ = lean_ctor_get(v_t_1529_, 0);
lean_inc_ref(v_fn_1534_);
v_arg_1535_ = lean_ctor_get(v_t_1529_, 1);
lean_inc_ref(v_arg_1535_);
lean_dec_ref_known(v_t_1529_, 2);
v___x_1536_ = lean_apply_2(v_k_1530_, v_fn_1534_, v_arg_1535_);
return v___x_1536_;
}
case 6:
{
lean_object* v_binderName_1537_; lean_object* v_binderType_1538_; lean_object* v_body_1539_; uint8_t v_binderInfo_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v_binderName_1537_ = lean_ctor_get(v_t_1529_, 0);
lean_inc(v_binderName_1537_);
v_binderType_1538_ = lean_ctor_get(v_t_1529_, 1);
lean_inc_ref(v_binderType_1538_);
v_body_1539_ = lean_ctor_get(v_t_1529_, 2);
lean_inc_ref(v_body_1539_);
v_binderInfo_1540_ = lean_ctor_get_uint8(v_t_1529_, sizeof(void*)*3);
lean_dec_ref_known(v_t_1529_, 3);
v___x_1541_ = lean_box(v_binderInfo_1540_);
v___x_1542_ = lean_apply_4(v_k_1530_, v_binderName_1537_, v_binderType_1538_, v_body_1539_, v___x_1541_);
return v___x_1542_;
}
case 7:
{
lean_object* v_binderName_1543_; lean_object* v_binderType_1544_; lean_object* v_body_1545_; uint8_t v_binderInfo_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; 
v_binderName_1543_ = lean_ctor_get(v_t_1529_, 0);
lean_inc(v_binderName_1543_);
v_binderType_1544_ = lean_ctor_get(v_t_1529_, 1);
lean_inc_ref(v_binderType_1544_);
v_body_1545_ = lean_ctor_get(v_t_1529_, 2);
lean_inc_ref(v_body_1545_);
v_binderInfo_1546_ = lean_ctor_get_uint8(v_t_1529_, sizeof(void*)*3);
lean_dec_ref_known(v_t_1529_, 3);
v___x_1547_ = lean_box(v_binderInfo_1546_);
v___x_1548_ = lean_apply_4(v_k_1530_, v_binderName_1543_, v_binderType_1544_, v_body_1545_, v___x_1547_);
return v___x_1548_;
}
case 8:
{
lean_object* v_declName_1549_; lean_object* v_type_1550_; lean_object* v_value_1551_; lean_object* v_body_1552_; uint8_t v_nondep_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v_declName_1549_ = lean_ctor_get(v_t_1529_, 0);
lean_inc(v_declName_1549_);
v_type_1550_ = lean_ctor_get(v_t_1529_, 1);
lean_inc_ref(v_type_1550_);
v_value_1551_ = lean_ctor_get(v_t_1529_, 2);
lean_inc_ref(v_value_1551_);
v_body_1552_ = lean_ctor_get(v_t_1529_, 3);
lean_inc_ref(v_body_1552_);
v_nondep_1553_ = lean_ctor_get_uint8(v_t_1529_, sizeof(void*)*4);
lean_dec_ref_known(v_t_1529_, 4);
v___x_1554_ = lean_box(v_nondep_1553_);
v___x_1555_ = lean_apply_5(v_k_1530_, v_declName_1549_, v_type_1550_, v_value_1551_, v_body_1552_, v___x_1554_);
return v___x_1555_;
}
case 9:
{
lean_object* v_a_1556_; lean_object* v___x_1557_; 
v_a_1556_ = lean_ctor_get(v_t_1529_, 0);
lean_inc_ref(v_a_1556_);
lean_dec_ref_known(v_t_1529_, 1);
v___x_1557_ = lean_apply_1(v_k_1530_, v_a_1556_);
return v___x_1557_;
}
case 10:
{
lean_object* v_data_1558_; lean_object* v_expr_1559_; lean_object* v___x_1560_; 
v_data_1558_ = lean_ctor_get(v_t_1529_, 0);
lean_inc(v_data_1558_);
v_expr_1559_ = lean_ctor_get(v_t_1529_, 1);
lean_inc_ref(v_expr_1559_);
lean_dec_ref_known(v_t_1529_, 2);
v___x_1560_ = lean_apply_2(v_k_1530_, v_data_1558_, v_expr_1559_);
return v___x_1560_;
}
case 11:
{
lean_object* v_typeName_1561_; lean_object* v_idx_1562_; lean_object* v_struct_1563_; lean_object* v___x_1564_; 
v_typeName_1561_ = lean_ctor_get(v_t_1529_, 0);
lean_inc(v_typeName_1561_);
v_idx_1562_ = lean_ctor_get(v_t_1529_, 1);
lean_inc(v_idx_1562_);
v_struct_1563_ = lean_ctor_get(v_t_1529_, 2);
lean_inc_ref(v_struct_1563_);
lean_dec_ref_known(v_t_1529_, 3);
v___x_1564_ = lean_apply_3(v_k_1530_, v_typeName_1561_, v_idx_1562_, v_struct_1563_);
return v___x_1564_;
}
default: 
{
lean_object* v_deBruijnIndex_1565_; lean_object* v___x_1566_; 
v_deBruijnIndex_1565_ = lean_ctor_get(v_t_1529_, 0);
lean_inc(v_deBruijnIndex_1565_);
lean_dec_ref(v_t_1529_);
v___x_1566_ = lean_apply_1(v_k_1530_, v_deBruijnIndex_1565_);
return v___x_1566_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ctorElim(lean_object* v_motive_1567_, lean_object* v_ctorIdx_1568_, lean_object* v_t_1569_, lean_object* v_h_1570_, lean_object* v_k_1571_){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = l_Lean_Expr_ctorElim___redArg(v_t_1569_, v_k_1571_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ctorElim___boxed(lean_object* v_motive_1573_, lean_object* v_ctorIdx_1574_, lean_object* v_t_1575_, lean_object* v_h_1576_, lean_object* v_k_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Lean_Expr_ctorElim(v_motive_1573_, v_ctorIdx_1574_, v_t_1575_, v_h_1576_, v_k_1577_);
lean_dec(v_ctorIdx_1574_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bvar_elim___redArg(lean_object* v_t_1579_, lean_object* v_bvar_1580_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = l_Lean_Expr_ctorElim___redArg(v_t_1579_, v_bvar_1580_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bvar_elim(lean_object* v_motive_1582_, lean_object* v_t_1583_, lean_object* v_h_1584_, lean_object* v_bvar_1585_){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = l_Lean_Expr_ctorElim___redArg(v_t_1583_, v_bvar_1585_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_fvar_elim___redArg(lean_object* v_t_1587_, lean_object* v_fvar_1588_){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Lean_Expr_ctorElim___redArg(v_t_1587_, v_fvar_1588_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_fvar_elim(lean_object* v_motive_1590_, lean_object* v_t_1591_, lean_object* v_h_1592_, lean_object* v_fvar_1593_){
_start:
{
lean_object* v___x_1594_; 
v___x_1594_ = l_Lean_Expr_ctorElim___redArg(v_t_1591_, v_fvar_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mvar_elim___redArg(lean_object* v_t_1595_, lean_object* v_mvar_1596_){
_start:
{
lean_object* v___x_1597_; 
v___x_1597_ = l_Lean_Expr_ctorElim___redArg(v_t_1595_, v_mvar_1596_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mvar_elim(lean_object* v_motive_1598_, lean_object* v_t_1599_, lean_object* v_h_1600_, lean_object* v_mvar_1601_){
_start:
{
lean_object* v___x_1602_; 
v___x_1602_ = l_Lean_Expr_ctorElim___redArg(v_t_1599_, v_mvar_1601_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_sort_elim___redArg(lean_object* v_t_1603_, lean_object* v_sort_1604_){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = l_Lean_Expr_ctorElim___redArg(v_t_1603_, v_sort_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_sort_elim(lean_object* v_motive_1606_, lean_object* v_t_1607_, lean_object* v_h_1608_, lean_object* v_sort_1609_){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = l_Lean_Expr_ctorElim___redArg(v_t_1607_, v_sort_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_const_elim___redArg(lean_object* v_t_1611_, lean_object* v_const_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = l_Lean_Expr_ctorElim___redArg(v_t_1611_, v_const_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_const_elim(lean_object* v_motive_1614_, lean_object* v_t_1615_, lean_object* v_h_1616_, lean_object* v_const_1617_){
_start:
{
lean_object* v___x_1618_; 
v___x_1618_ = l_Lean_Expr_ctorElim___redArg(v_t_1615_, v_const_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_app_elim___redArg(lean_object* v_t_1619_, lean_object* v_app_1620_){
_start:
{
lean_object* v___x_1621_; 
v___x_1621_ = l_Lean_Expr_ctorElim___redArg(v_t_1619_, v_app_1620_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_app_elim(lean_object* v_motive_1622_, lean_object* v_t_1623_, lean_object* v_h_1624_, lean_object* v_app_1625_){
_start:
{
lean_object* v___x_1626_; 
v___x_1626_ = l_Lean_Expr_ctorElim___redArg(v_t_1623_, v_app_1625_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_lam_elim___redArg(lean_object* v_t_1627_, lean_object* v_lam_1628_){
_start:
{
lean_object* v___x_1629_; 
v___x_1629_ = l_Lean_Expr_ctorElim___redArg(v_t_1627_, v_lam_1628_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_lam_elim(lean_object* v_motive_1630_, lean_object* v_t_1631_, lean_object* v_h_1632_, lean_object* v_lam_1633_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = l_Lean_Expr_ctorElim___redArg(v_t_1631_, v_lam_1633_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallE_elim___redArg(lean_object* v_t_1635_, lean_object* v_forallE_1636_){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = l_Lean_Expr_ctorElim___redArg(v_t_1635_, v_forallE_1636_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallE_elim(lean_object* v_motive_1638_, lean_object* v_t_1639_, lean_object* v_h_1640_, lean_object* v_forallE_1641_){
_start:
{
lean_object* v___x_1642_; 
v___x_1642_ = l_Lean_Expr_ctorElim___redArg(v_t_1639_, v_forallE_1641_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letE_elim___redArg(lean_object* v_t_1643_, lean_object* v_letE_1644_){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = l_Lean_Expr_ctorElim___redArg(v_t_1643_, v_letE_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letE_elim(lean_object* v_motive_1646_, lean_object* v_t_1647_, lean_object* v_h_1648_, lean_object* v_letE_1649_){
_start:
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lean_Expr_ctorElim___redArg(v_t_1647_, v_letE_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_lit_elim___redArg(lean_object* v_t_1651_, lean_object* v_lit_1652_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l_Lean_Expr_ctorElim___redArg(v_t_1651_, v_lit_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_lit_elim(lean_object* v_motive_1654_, lean_object* v_t_1655_, lean_object* v_h_1656_, lean_object* v_lit_1657_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lean_Expr_ctorElim___redArg(v_t_1655_, v_lit_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mdata_elim___redArg(lean_object* v_t_1659_, lean_object* v_mdata_1660_){
_start:
{
lean_object* v___x_1661_; 
v___x_1661_ = l_Lean_Expr_ctorElim___redArg(v_t_1659_, v_mdata_1660_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mdata_elim(lean_object* v_motive_1662_, lean_object* v_t_1663_, lean_object* v_h_1664_, lean_object* v_mdata_1665_){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = l_Lean_Expr_ctorElim___redArg(v_t_1663_, v_mdata_1665_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_proj_elim___redArg(lean_object* v_t_1667_, lean_object* v_proj_1668_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l_Lean_Expr_ctorElim___redArg(v_t_1667_, v_proj_1668_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_proj_elim(lean_object* v_motive_1670_, lean_object* v_t_1671_, lean_object* v_h_1672_, lean_object* v_proj_1673_){
_start:
{
lean_object* v___x_1674_; 
v___x_1674_ = l_Lean_Expr_ctorElim___redArg(v_t_1671_, v_proj_1673_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_data___boxed(lean_object* v_a_00___x40___internal___hyg_1676_){
_start:
{
uint64_t v_res_1677_; lean_object* v_r_1678_; 
v_res_1677_ = lean_expr_data(v_a_00___x40___internal___hyg_1676_);
lean_dec_ref(v_a_00___x40___internal___hyg_1676_);
v_r_1678_ = lean_box_uint64(v_res_1677_);
return v_r_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_casesOn___override___redArg(lean_object* v_t_1679_, lean_object* v_bvar_1680_, lean_object* v_fvar_1681_, lean_object* v_mvar_1682_, lean_object* v_sort_1683_, lean_object* v_const_1684_, lean_object* v_app_1685_, lean_object* v_lam_1686_, lean_object* v_forallE_1687_, lean_object* v_letE_1688_, lean_object* v_lit_1689_, lean_object* v_mdata_1690_, lean_object* v_proj_1691_){
_start:
{
lean_object* v___x_1692_; 
v___x_1692_ = l_unsafeCast___redArg(v_t_1679_);
switch(lean_obj_tag(v___x_1692_))
{
case 0:
{
lean_object* v_deBruijnIndex_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
lean_dec(v_proj_1691_);
lean_dec(v_mdata_1690_);
lean_dec(v_lit_1689_);
lean_dec(v_letE_1688_);
lean_dec(v_forallE_1687_);
lean_dec(v_lam_1686_);
lean_dec(v_app_1685_);
lean_dec(v_const_1684_);
lean_dec(v_sort_1683_);
lean_dec(v_mvar_1682_);
lean_dec(v_fvar_1681_);
v_deBruijnIndex_1693_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_deBruijnIndex_1693_);
lean_dec_ref_known(v___x_1692_, 1);
v___x_1694_ = lean_apply_1(v_bvar_1680_, v_deBruijnIndex_1693_);
v___x_1695_ = l_unsafeCast___redArg(v___x_1694_);
lean_dec(v___x_1694_);
return v___x_1695_;
}
case 1:
{
lean_object* v_fvarId_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
lean_dec(v_proj_1691_);
lean_dec(v_mdata_1690_);
lean_dec(v_lit_1689_);
lean_dec(v_letE_1688_);
lean_dec(v_forallE_1687_);
lean_dec(v_lam_1686_);
lean_dec(v_app_1685_);
lean_dec(v_const_1684_);
lean_dec(v_sort_1683_);
lean_dec(v_mvar_1682_);
lean_dec(v_bvar_1680_);
v_fvarId_1696_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_fvarId_1696_);
lean_dec_ref_known(v___x_1692_, 1);
v___x_1697_ = lean_apply_1(v_fvar_1681_, v_fvarId_1696_);
v___x_1698_ = l_unsafeCast___redArg(v___x_1697_);
lean_dec(v___x_1697_);
return v___x_1698_;
}
case 2:
{
lean_object* v_mvarId_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
lean_dec(v_proj_1691_);
lean_dec(v_mdata_1690_);
lean_dec(v_lit_1689_);
lean_dec(v_letE_1688_);
lean_dec(v_forallE_1687_);
lean_dec(v_lam_1686_);
lean_dec(v_app_1685_);
lean_dec(v_const_1684_);
lean_dec(v_sort_1683_);
lean_dec(v_fvar_1681_);
lean_dec(v_bvar_1680_);
v_mvarId_1699_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_mvarId_1699_);
lean_dec_ref_known(v___x_1692_, 1);
v___x_1700_ = lean_apply_1(v_mvar_1682_, v_mvarId_1699_);
v___x_1701_ = l_unsafeCast___redArg(v___x_1700_);
lean_dec(v___x_1700_);
return v___x_1701_;
}
case 3:
{
lean_object* v_u_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
lean_dec(v_proj_1691_);
lean_dec(v_mdata_1690_);
lean_dec(v_lit_1689_);
lean_dec(v_letE_1688_);
lean_dec(v_forallE_1687_);
lean_dec(v_lam_1686_);
lean_dec(v_app_1685_);
lean_dec(v_const_1684_);
lean_dec(v_mvar_1682_);
lean_dec(v_fvar_1681_);
lean_dec(v_bvar_1680_);
v_u_1702_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_u_1702_);
lean_dec_ref_known(v___x_1692_, 1);
v___x_1703_ = lean_apply_1(v_sort_1683_, v_u_1702_);
v___x_1704_ = l_unsafeCast___redArg(v___x_1703_);
lean_dec(v___x_1703_);
return v___x_1704_;
}
case 4:
{
lean_object* v_declName_1705_; lean_object* v_us_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
lean_dec(v_proj_1691_);
lean_dec(v_mdata_1690_);
lean_dec(v_lit_1689_);
lean_dec(v_letE_1688_);
lean_dec(v_forallE_1687_);
lean_dec(v_lam_1686_);
lean_dec(v_app_1685_);
lean_dec(v_sort_1683_);
lean_dec(v_mvar_1682_);
lean_dec(v_fvar_1681_);
lean_dec(v_bvar_1680_);
v_declName_1705_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_declName_1705_);
v_us_1706_ = lean_ctor_get(v___x_1692_, 1);
lean_inc(v_us_1706_);
lean_dec_ref_known(v___x_1692_, 2);
v___x_1707_ = lean_apply_2(v_const_1684_, v_declName_1705_, v_us_1706_);
v___x_1708_ = l_unsafeCast___redArg(v___x_1707_);
lean_dec(v___x_1707_);
return v___x_1708_;
}
case 5:
{
lean_object* v_fn_1709_; lean_object* v_arg_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
lean_dec(v_proj_1691_);
lean_dec(v_mdata_1690_);
lean_dec(v_lit_1689_);
lean_dec(v_letE_1688_);
lean_dec(v_forallE_1687_);
lean_dec(v_lam_1686_);
lean_dec(v_const_1684_);
lean_dec(v_sort_1683_);
lean_dec(v_mvar_1682_);
lean_dec(v_fvar_1681_);
lean_dec(v_bvar_1680_);
v_fn_1709_ = lean_ctor_get(v___x_1692_, 0);
lean_inc_ref(v_fn_1709_);
v_arg_1710_ = lean_ctor_get(v___x_1692_, 1);
lean_inc_ref(v_arg_1710_);
lean_dec_ref_known(v___x_1692_, 2);
v___x_1711_ = lean_apply_2(v_app_1685_, v_fn_1709_, v_arg_1710_);
v___x_1712_ = l_unsafeCast___redArg(v___x_1711_);
lean_dec(v___x_1711_);
return v___x_1712_;
}
case 6:
{
lean_object* v_binderName_1713_; lean_object* v_binderType_1714_; lean_object* v_body_1715_; uint8_t v_binderInfo_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
lean_dec(v_proj_1691_);
lean_dec(v_mdata_1690_);
lean_dec(v_lit_1689_);
lean_dec(v_letE_1688_);
lean_dec(v_forallE_1687_);
lean_dec(v_app_1685_);
lean_dec(v_const_1684_);
lean_dec(v_sort_1683_);
lean_dec(v_mvar_1682_);
lean_dec(v_fvar_1681_);
lean_dec(v_bvar_1680_);
v_binderName_1713_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_binderName_1713_);
v_binderType_1714_ = lean_ctor_get(v___x_1692_, 1);
lean_inc_ref(v_binderType_1714_);
v_body_1715_ = lean_ctor_get(v___x_1692_, 2);
lean_inc_ref(v_body_1715_);
v_binderInfo_1716_ = lean_ctor_get_uint8(v___x_1692_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_1692_, 3);
v___x_1717_ = lean_box(v_binderInfo_1716_);
v___x_1718_ = lean_apply_4(v_lam_1686_, v_binderName_1713_, v_binderType_1714_, v_body_1715_, v___x_1717_);
v___x_1719_ = l_unsafeCast___redArg(v___x_1718_);
lean_dec(v___x_1718_);
return v___x_1719_;
}
case 7:
{
lean_object* v_binderName_1720_; lean_object* v_binderType_1721_; lean_object* v_body_1722_; uint8_t v_binderInfo_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
lean_dec(v_proj_1691_);
lean_dec(v_mdata_1690_);
lean_dec(v_lit_1689_);
lean_dec(v_letE_1688_);
lean_dec(v_lam_1686_);
lean_dec(v_app_1685_);
lean_dec(v_const_1684_);
lean_dec(v_sort_1683_);
lean_dec(v_mvar_1682_);
lean_dec(v_fvar_1681_);
lean_dec(v_bvar_1680_);
v_binderName_1720_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_binderName_1720_);
v_binderType_1721_ = lean_ctor_get(v___x_1692_, 1);
lean_inc_ref(v_binderType_1721_);
v_body_1722_ = lean_ctor_get(v___x_1692_, 2);
lean_inc_ref(v_body_1722_);
v_binderInfo_1723_ = lean_ctor_get_uint8(v___x_1692_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_1692_, 3);
v___x_1724_ = lean_box(v_binderInfo_1723_);
v___x_1725_ = lean_apply_4(v_forallE_1687_, v_binderName_1720_, v_binderType_1721_, v_body_1722_, v___x_1724_);
v___x_1726_ = l_unsafeCast___redArg(v___x_1725_);
lean_dec(v___x_1725_);
return v___x_1726_;
}
case 8:
{
lean_object* v_declName_1727_; lean_object* v_type_1728_; lean_object* v_value_1729_; lean_object* v_body_1730_; uint8_t v_nondep_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
lean_dec(v_proj_1691_);
lean_dec(v_mdata_1690_);
lean_dec(v_lit_1689_);
lean_dec(v_forallE_1687_);
lean_dec(v_lam_1686_);
lean_dec(v_app_1685_);
lean_dec(v_const_1684_);
lean_dec(v_sort_1683_);
lean_dec(v_mvar_1682_);
lean_dec(v_fvar_1681_);
lean_dec(v_bvar_1680_);
v_declName_1727_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_declName_1727_);
v_type_1728_ = lean_ctor_get(v___x_1692_, 1);
lean_inc_ref(v_type_1728_);
v_value_1729_ = lean_ctor_get(v___x_1692_, 2);
lean_inc_ref(v_value_1729_);
v_body_1730_ = lean_ctor_get(v___x_1692_, 3);
lean_inc_ref(v_body_1730_);
v_nondep_1731_ = lean_ctor_get_uint8(v___x_1692_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v___x_1692_, 4);
v___x_1732_ = lean_box(v_nondep_1731_);
v___x_1733_ = lean_apply_5(v_letE_1688_, v_declName_1727_, v_type_1728_, v_value_1729_, v_body_1730_, v___x_1732_);
v___x_1734_ = l_unsafeCast___redArg(v___x_1733_);
lean_dec(v___x_1733_);
return v___x_1734_;
}
case 9:
{
lean_object* v_a_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
lean_dec(v_proj_1691_);
lean_dec(v_mdata_1690_);
lean_dec(v_letE_1688_);
lean_dec(v_forallE_1687_);
lean_dec(v_lam_1686_);
lean_dec(v_app_1685_);
lean_dec(v_const_1684_);
lean_dec(v_sort_1683_);
lean_dec(v_mvar_1682_);
lean_dec(v_fvar_1681_);
lean_dec(v_bvar_1680_);
v_a_1735_ = lean_ctor_get(v___x_1692_, 0);
lean_inc_ref(v_a_1735_);
lean_dec_ref_known(v___x_1692_, 1);
v___x_1736_ = lean_apply_1(v_lit_1689_, v_a_1735_);
v___x_1737_ = l_unsafeCast___redArg(v___x_1736_);
lean_dec(v___x_1736_);
return v___x_1737_;
}
case 10:
{
lean_object* v_data_1738_; lean_object* v_expr_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; 
lean_dec(v_proj_1691_);
lean_dec(v_lit_1689_);
lean_dec(v_letE_1688_);
lean_dec(v_forallE_1687_);
lean_dec(v_lam_1686_);
lean_dec(v_app_1685_);
lean_dec(v_const_1684_);
lean_dec(v_sort_1683_);
lean_dec(v_mvar_1682_);
lean_dec(v_fvar_1681_);
lean_dec(v_bvar_1680_);
v_data_1738_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_data_1738_);
v_expr_1739_ = lean_ctor_get(v___x_1692_, 1);
lean_inc_ref(v_expr_1739_);
lean_dec_ref_known(v___x_1692_, 2);
v___x_1740_ = lean_apply_2(v_mdata_1690_, v_data_1738_, v_expr_1739_);
v___x_1741_ = l_unsafeCast___redArg(v___x_1740_);
lean_dec(v___x_1740_);
return v___x_1741_;
}
default: 
{
lean_object* v_typeName_1742_; lean_object* v_idx_1743_; lean_object* v_struct_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
lean_dec(v_mdata_1690_);
lean_dec(v_lit_1689_);
lean_dec(v_letE_1688_);
lean_dec(v_forallE_1687_);
lean_dec(v_lam_1686_);
lean_dec(v_app_1685_);
lean_dec(v_const_1684_);
lean_dec(v_sort_1683_);
lean_dec(v_mvar_1682_);
lean_dec(v_fvar_1681_);
lean_dec(v_bvar_1680_);
v_typeName_1742_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_typeName_1742_);
v_idx_1743_ = lean_ctor_get(v___x_1692_, 1);
lean_inc(v_idx_1743_);
v_struct_1744_ = lean_ctor_get(v___x_1692_, 2);
lean_inc_ref(v_struct_1744_);
lean_dec_ref_known(v___x_1692_, 3);
v___x_1745_ = lean_apply_3(v_proj_1691_, v_typeName_1742_, v_idx_1743_, v_struct_1744_);
v___x_1746_ = l_unsafeCast___redArg(v___x_1745_);
lean_dec(v___x_1745_);
return v___x_1746_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_casesOn___override___redArg___boxed(lean_object* v_t_1747_, lean_object* v_bvar_1748_, lean_object* v_fvar_1749_, lean_object* v_mvar_1750_, lean_object* v_sort_1751_, lean_object* v_const_1752_, lean_object* v_app_1753_, lean_object* v_lam_1754_, lean_object* v_forallE_1755_, lean_object* v_letE_1756_, lean_object* v_lit_1757_, lean_object* v_mdata_1758_, lean_object* v_proj_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lean_Expr_casesOn___override___redArg(v_t_1747_, v_bvar_1748_, v_fvar_1749_, v_mvar_1750_, v_sort_1751_, v_const_1752_, v_app_1753_, v_lam_1754_, v_forallE_1755_, v_letE_1756_, v_lit_1757_, v_mdata_1758_, v_proj_1759_);
lean_dec_ref(v_t_1747_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_casesOn___override(lean_object* v_motive_1761_, lean_object* v_t_1762_, lean_object* v_bvar_1763_, lean_object* v_fvar_1764_, lean_object* v_mvar_1765_, lean_object* v_sort_1766_, lean_object* v_const_1767_, lean_object* v_app_1768_, lean_object* v_lam_1769_, lean_object* v_forallE_1770_, lean_object* v_letE_1771_, lean_object* v_lit_1772_, lean_object* v_mdata_1773_, lean_object* v_proj_1774_){
_start:
{
lean_object* v___x_1775_; 
v___x_1775_ = l_unsafeCast___redArg(v_t_1762_);
switch(lean_obj_tag(v___x_1775_))
{
case 0:
{
lean_object* v_deBruijnIndex_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
lean_dec(v_proj_1774_);
lean_dec(v_mdata_1773_);
lean_dec(v_lit_1772_);
lean_dec(v_letE_1771_);
lean_dec(v_forallE_1770_);
lean_dec(v_lam_1769_);
lean_dec(v_app_1768_);
lean_dec(v_const_1767_);
lean_dec(v_sort_1766_);
lean_dec(v_mvar_1765_);
lean_dec(v_fvar_1764_);
v_deBruijnIndex_1776_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_deBruijnIndex_1776_);
lean_dec_ref_known(v___x_1775_, 1);
v___x_1777_ = lean_apply_1(v_bvar_1763_, v_deBruijnIndex_1776_);
v___x_1778_ = l_unsafeCast___redArg(v___x_1777_);
lean_dec(v___x_1777_);
return v___x_1778_;
}
case 1:
{
lean_object* v_fvarId_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
lean_dec(v_proj_1774_);
lean_dec(v_mdata_1773_);
lean_dec(v_lit_1772_);
lean_dec(v_letE_1771_);
lean_dec(v_forallE_1770_);
lean_dec(v_lam_1769_);
lean_dec(v_app_1768_);
lean_dec(v_const_1767_);
lean_dec(v_sort_1766_);
lean_dec(v_mvar_1765_);
lean_dec(v_bvar_1763_);
v_fvarId_1779_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_fvarId_1779_);
lean_dec_ref_known(v___x_1775_, 1);
v___x_1780_ = lean_apply_1(v_fvar_1764_, v_fvarId_1779_);
v___x_1781_ = l_unsafeCast___redArg(v___x_1780_);
lean_dec(v___x_1780_);
return v___x_1781_;
}
case 2:
{
lean_object* v_mvarId_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
lean_dec(v_proj_1774_);
lean_dec(v_mdata_1773_);
lean_dec(v_lit_1772_);
lean_dec(v_letE_1771_);
lean_dec(v_forallE_1770_);
lean_dec(v_lam_1769_);
lean_dec(v_app_1768_);
lean_dec(v_const_1767_);
lean_dec(v_sort_1766_);
lean_dec(v_fvar_1764_);
lean_dec(v_bvar_1763_);
v_mvarId_1782_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_mvarId_1782_);
lean_dec_ref_known(v___x_1775_, 1);
v___x_1783_ = lean_apply_1(v_mvar_1765_, v_mvarId_1782_);
v___x_1784_ = l_unsafeCast___redArg(v___x_1783_);
lean_dec(v___x_1783_);
return v___x_1784_;
}
case 3:
{
lean_object* v_u_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
lean_dec(v_proj_1774_);
lean_dec(v_mdata_1773_);
lean_dec(v_lit_1772_);
lean_dec(v_letE_1771_);
lean_dec(v_forallE_1770_);
lean_dec(v_lam_1769_);
lean_dec(v_app_1768_);
lean_dec(v_const_1767_);
lean_dec(v_mvar_1765_);
lean_dec(v_fvar_1764_);
lean_dec(v_bvar_1763_);
v_u_1785_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_u_1785_);
lean_dec_ref_known(v___x_1775_, 1);
v___x_1786_ = lean_apply_1(v_sort_1766_, v_u_1785_);
v___x_1787_ = l_unsafeCast___redArg(v___x_1786_);
lean_dec(v___x_1786_);
return v___x_1787_;
}
case 4:
{
lean_object* v_declName_1788_; lean_object* v_us_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
lean_dec(v_proj_1774_);
lean_dec(v_mdata_1773_);
lean_dec(v_lit_1772_);
lean_dec(v_letE_1771_);
lean_dec(v_forallE_1770_);
lean_dec(v_lam_1769_);
lean_dec(v_app_1768_);
lean_dec(v_sort_1766_);
lean_dec(v_mvar_1765_);
lean_dec(v_fvar_1764_);
lean_dec(v_bvar_1763_);
v_declName_1788_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_declName_1788_);
v_us_1789_ = lean_ctor_get(v___x_1775_, 1);
lean_inc(v_us_1789_);
lean_dec_ref_known(v___x_1775_, 2);
v___x_1790_ = lean_apply_2(v_const_1767_, v_declName_1788_, v_us_1789_);
v___x_1791_ = l_unsafeCast___redArg(v___x_1790_);
lean_dec(v___x_1790_);
return v___x_1791_;
}
case 5:
{
lean_object* v_fn_1792_; lean_object* v_arg_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_dec(v_proj_1774_);
lean_dec(v_mdata_1773_);
lean_dec(v_lit_1772_);
lean_dec(v_letE_1771_);
lean_dec(v_forallE_1770_);
lean_dec(v_lam_1769_);
lean_dec(v_const_1767_);
lean_dec(v_sort_1766_);
lean_dec(v_mvar_1765_);
lean_dec(v_fvar_1764_);
lean_dec(v_bvar_1763_);
v_fn_1792_ = lean_ctor_get(v___x_1775_, 0);
lean_inc_ref(v_fn_1792_);
v_arg_1793_ = lean_ctor_get(v___x_1775_, 1);
lean_inc_ref(v_arg_1793_);
lean_dec_ref_known(v___x_1775_, 2);
v___x_1794_ = lean_apply_2(v_app_1768_, v_fn_1792_, v_arg_1793_);
v___x_1795_ = l_unsafeCast___redArg(v___x_1794_);
lean_dec(v___x_1794_);
return v___x_1795_;
}
case 6:
{
lean_object* v_binderName_1796_; lean_object* v_binderType_1797_; lean_object* v_body_1798_; uint8_t v_binderInfo_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
lean_dec(v_proj_1774_);
lean_dec(v_mdata_1773_);
lean_dec(v_lit_1772_);
lean_dec(v_letE_1771_);
lean_dec(v_forallE_1770_);
lean_dec(v_app_1768_);
lean_dec(v_const_1767_);
lean_dec(v_sort_1766_);
lean_dec(v_mvar_1765_);
lean_dec(v_fvar_1764_);
lean_dec(v_bvar_1763_);
v_binderName_1796_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_binderName_1796_);
v_binderType_1797_ = lean_ctor_get(v___x_1775_, 1);
lean_inc_ref(v_binderType_1797_);
v_body_1798_ = lean_ctor_get(v___x_1775_, 2);
lean_inc_ref(v_body_1798_);
v_binderInfo_1799_ = lean_ctor_get_uint8(v___x_1775_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_1775_, 3);
v___x_1800_ = lean_box(v_binderInfo_1799_);
v___x_1801_ = lean_apply_4(v_lam_1769_, v_binderName_1796_, v_binderType_1797_, v_body_1798_, v___x_1800_);
v___x_1802_ = l_unsafeCast___redArg(v___x_1801_);
lean_dec(v___x_1801_);
return v___x_1802_;
}
case 7:
{
lean_object* v_binderName_1803_; lean_object* v_binderType_1804_; lean_object* v_body_1805_; uint8_t v_binderInfo_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
lean_dec(v_proj_1774_);
lean_dec(v_mdata_1773_);
lean_dec(v_lit_1772_);
lean_dec(v_letE_1771_);
lean_dec(v_lam_1769_);
lean_dec(v_app_1768_);
lean_dec(v_const_1767_);
lean_dec(v_sort_1766_);
lean_dec(v_mvar_1765_);
lean_dec(v_fvar_1764_);
lean_dec(v_bvar_1763_);
v_binderName_1803_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_binderName_1803_);
v_binderType_1804_ = lean_ctor_get(v___x_1775_, 1);
lean_inc_ref(v_binderType_1804_);
v_body_1805_ = lean_ctor_get(v___x_1775_, 2);
lean_inc_ref(v_body_1805_);
v_binderInfo_1806_ = lean_ctor_get_uint8(v___x_1775_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_1775_, 3);
v___x_1807_ = lean_box(v_binderInfo_1806_);
v___x_1808_ = lean_apply_4(v_forallE_1770_, v_binderName_1803_, v_binderType_1804_, v_body_1805_, v___x_1807_);
v___x_1809_ = l_unsafeCast___redArg(v___x_1808_);
lean_dec(v___x_1808_);
return v___x_1809_;
}
case 8:
{
lean_object* v_declName_1810_; lean_object* v_type_1811_; lean_object* v_value_1812_; lean_object* v_body_1813_; uint8_t v_nondep_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
lean_dec(v_proj_1774_);
lean_dec(v_mdata_1773_);
lean_dec(v_lit_1772_);
lean_dec(v_forallE_1770_);
lean_dec(v_lam_1769_);
lean_dec(v_app_1768_);
lean_dec(v_const_1767_);
lean_dec(v_sort_1766_);
lean_dec(v_mvar_1765_);
lean_dec(v_fvar_1764_);
lean_dec(v_bvar_1763_);
v_declName_1810_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_declName_1810_);
v_type_1811_ = lean_ctor_get(v___x_1775_, 1);
lean_inc_ref(v_type_1811_);
v_value_1812_ = lean_ctor_get(v___x_1775_, 2);
lean_inc_ref(v_value_1812_);
v_body_1813_ = lean_ctor_get(v___x_1775_, 3);
lean_inc_ref(v_body_1813_);
v_nondep_1814_ = lean_ctor_get_uint8(v___x_1775_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v___x_1775_, 4);
v___x_1815_ = lean_box(v_nondep_1814_);
v___x_1816_ = lean_apply_5(v_letE_1771_, v_declName_1810_, v_type_1811_, v_value_1812_, v_body_1813_, v___x_1815_);
v___x_1817_ = l_unsafeCast___redArg(v___x_1816_);
lean_dec(v___x_1816_);
return v___x_1817_;
}
case 9:
{
lean_object* v_a_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
lean_dec(v_proj_1774_);
lean_dec(v_mdata_1773_);
lean_dec(v_letE_1771_);
lean_dec(v_forallE_1770_);
lean_dec(v_lam_1769_);
lean_dec(v_app_1768_);
lean_dec(v_const_1767_);
lean_dec(v_sort_1766_);
lean_dec(v_mvar_1765_);
lean_dec(v_fvar_1764_);
lean_dec(v_bvar_1763_);
v_a_1818_ = lean_ctor_get(v___x_1775_, 0);
lean_inc_ref(v_a_1818_);
lean_dec_ref_known(v___x_1775_, 1);
v___x_1819_ = lean_apply_1(v_lit_1772_, v_a_1818_);
v___x_1820_ = l_unsafeCast___redArg(v___x_1819_);
lean_dec(v___x_1819_);
return v___x_1820_;
}
case 10:
{
lean_object* v_data_1821_; lean_object* v_expr_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
lean_dec(v_proj_1774_);
lean_dec(v_lit_1772_);
lean_dec(v_letE_1771_);
lean_dec(v_forallE_1770_);
lean_dec(v_lam_1769_);
lean_dec(v_app_1768_);
lean_dec(v_const_1767_);
lean_dec(v_sort_1766_);
lean_dec(v_mvar_1765_);
lean_dec(v_fvar_1764_);
lean_dec(v_bvar_1763_);
v_data_1821_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_data_1821_);
v_expr_1822_ = lean_ctor_get(v___x_1775_, 1);
lean_inc_ref(v_expr_1822_);
lean_dec_ref_known(v___x_1775_, 2);
v___x_1823_ = lean_apply_2(v_mdata_1773_, v_data_1821_, v_expr_1822_);
v___x_1824_ = l_unsafeCast___redArg(v___x_1823_);
lean_dec(v___x_1823_);
return v___x_1824_;
}
default: 
{
lean_object* v_typeName_1825_; lean_object* v_idx_1826_; lean_object* v_struct_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
lean_dec(v_mdata_1773_);
lean_dec(v_lit_1772_);
lean_dec(v_letE_1771_);
lean_dec(v_forallE_1770_);
lean_dec(v_lam_1769_);
lean_dec(v_app_1768_);
lean_dec(v_const_1767_);
lean_dec(v_sort_1766_);
lean_dec(v_mvar_1765_);
lean_dec(v_fvar_1764_);
lean_dec(v_bvar_1763_);
v_typeName_1825_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_typeName_1825_);
v_idx_1826_ = lean_ctor_get(v___x_1775_, 1);
lean_inc(v_idx_1826_);
v_struct_1827_ = lean_ctor_get(v___x_1775_, 2);
lean_inc_ref(v_struct_1827_);
lean_dec_ref_known(v___x_1775_, 3);
v___x_1828_ = lean_apply_3(v_proj_1774_, v_typeName_1825_, v_idx_1826_, v_struct_1827_);
v___x_1829_ = l_unsafeCast___redArg(v___x_1828_);
lean_dec(v___x_1828_);
return v___x_1829_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_casesOn___override___boxed(lean_object* v_motive_1830_, lean_object* v_t_1831_, lean_object* v_bvar_1832_, lean_object* v_fvar_1833_, lean_object* v_mvar_1834_, lean_object* v_sort_1835_, lean_object* v_const_1836_, lean_object* v_app_1837_, lean_object* v_lam_1838_, lean_object* v_forallE_1839_, lean_object* v_letE_1840_, lean_object* v_lit_1841_, lean_object* v_mdata_1842_, lean_object* v_proj_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lean_Expr_casesOn___override(v_motive_1830_, v_t_1831_, v_bvar_1832_, v_fvar_1833_, v_mvar_1834_, v_sort_1835_, v_const_1836_, v_app_1837_, v_lam_1838_, v_forallE_1839_, v_letE_1840_, v_lit_1841_, v_mdata_1842_, v_proj_1843_);
lean_dec_ref(v_t_1831_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bvar___override(lean_object* v_deBruijnIndex_1845_){
_start:
{
uint64_t v___x_1846_; uint64_t v___x_1847_; uint64_t v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; uint32_t v___x_1851_; uint8_t v___x_1852_; uint64_t v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1846_ = 7ULL;
v___x_1847_ = lean_uint64_of_nat(v_deBruijnIndex_1845_);
v___x_1848_ = lean_uint64_mix_hash(v___x_1846_, v___x_1847_);
v___x_1849_ = lean_unsigned_to_nat(1u);
v___x_1850_ = lean_nat_add(v_deBruijnIndex_1845_, v___x_1849_);
v___x_1851_ = 0;
v___x_1852_ = 0;
v___x_1853_ = lean_expr_mk_data(v___x_1848_, v___x_1850_, v___x_1851_, v___x_1852_, v___x_1852_, v___x_1852_, v___x_1852_);
v___x_1854_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1854_, 0, v_deBruijnIndex_1845_);
lean_ctor_set_uint64(v___x_1854_, sizeof(void*)*1, v___x_1853_);
v___x_1855_ = l_unsafeCast___redArg(v___x_1854_);
lean_dec_ref_known(v___x_1854_, 1);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_fvar___override(lean_object* v_fvarId_1856_){
_start:
{
uint64_t v___x_1857_; uint64_t v___x_1858_; uint64_t v___x_1859_; lean_object* v___x_1860_; uint32_t v___x_1861_; uint8_t v___x_1862_; uint8_t v___x_1863_; uint64_t v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1857_ = 13ULL;
v___x_1858_ = l_Lean_instHashableFVarId_hash(v_fvarId_1856_);
v___x_1859_ = lean_uint64_mix_hash(v___x_1857_, v___x_1858_);
v___x_1860_ = lean_unsigned_to_nat(0u);
v___x_1861_ = 0;
v___x_1862_ = 1;
v___x_1863_ = 0;
v___x_1864_ = lean_expr_mk_data(v___x_1859_, v___x_1860_, v___x_1861_, v___x_1862_, v___x_1863_, v___x_1863_, v___x_1863_);
v___x_1865_ = lean_alloc_ctor(1, 1, 8);
lean_ctor_set(v___x_1865_, 0, v_fvarId_1856_);
lean_ctor_set_uint64(v___x_1865_, sizeof(void*)*1, v___x_1864_);
v___x_1866_ = l_unsafeCast___redArg(v___x_1865_);
lean_dec_ref_known(v___x_1865_, 1);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mvar___override(lean_object* v_mvarId_1867_){
_start:
{
uint64_t v___x_1868_; uint64_t v___x_1869_; uint64_t v___x_1870_; lean_object* v___x_1871_; uint32_t v___x_1872_; uint8_t v___x_1873_; uint8_t v___x_1874_; uint64_t v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1868_ = 17ULL;
v___x_1869_ = l_Lean_instHashableMVarId_hash(v_mvarId_1867_);
v___x_1870_ = lean_uint64_mix_hash(v___x_1868_, v___x_1869_);
v___x_1871_ = lean_unsigned_to_nat(0u);
v___x_1872_ = 0;
v___x_1873_ = 0;
v___x_1874_ = 1;
v___x_1875_ = lean_expr_mk_data(v___x_1870_, v___x_1871_, v___x_1872_, v___x_1873_, v___x_1874_, v___x_1873_, v___x_1873_);
v___x_1876_ = lean_alloc_ctor(2, 1, 8);
lean_ctor_set(v___x_1876_, 0, v_mvarId_1867_);
lean_ctor_set_uint64(v___x_1876_, sizeof(void*)*1, v___x_1875_);
v___x_1877_ = l_unsafeCast___redArg(v___x_1876_);
lean_dec_ref_known(v___x_1876_, 1);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_sort___override(lean_object* v_u_1878_){
_start:
{
uint64_t v___x_1879_; uint64_t v___x_1880_; uint64_t v___x_1881_; lean_object* v___x_1882_; uint32_t v___x_1883_; uint8_t v___x_1884_; uint8_t v___x_1885_; uint8_t v___x_1886_; uint64_t v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1879_ = 11ULL;
v___x_1880_ = l_Lean_Level_hash(v_u_1878_);
v___x_1881_ = lean_uint64_mix_hash(v___x_1879_, v___x_1880_);
v___x_1882_ = lean_unsigned_to_nat(0u);
v___x_1883_ = 0;
v___x_1884_ = 0;
v___x_1885_ = l_Lean_Level_hasMVar(v_u_1878_);
v___x_1886_ = l_Lean_Level_hasParam(v_u_1878_);
v___x_1887_ = lean_expr_mk_data(v___x_1881_, v___x_1882_, v___x_1883_, v___x_1884_, v___x_1884_, v___x_1885_, v___x_1886_);
v___x_1888_ = lean_alloc_ctor(3, 1, 8);
lean_ctor_set(v___x_1888_, 0, v_u_1878_);
lean_ctor_set_uint64(v___x_1888_, sizeof(void*)*1, v___x_1887_);
v___x_1889_ = l_unsafeCast___redArg(v___x_1888_);
lean_dec_ref_known(v___x_1888_, 1);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_app___override(lean_object* v_fn_1890_, lean_object* v_arg_1891_){
_start:
{
uint64_t v___x_1892_; uint64_t v___x_1893_; uint64_t v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1892_ = lean_expr_data(v_fn_1890_);
v___x_1893_ = lean_expr_data(v_arg_1891_);
v___x_1894_ = lean_expr_mk_app_data(v___x_1892_, v___x_1893_);
v___x_1895_ = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(v___x_1895_, 0, v_fn_1890_);
lean_ctor_set(v___x_1895_, 1, v_arg_1891_);
lean_ctor_set_uint64(v___x_1895_, sizeof(void*)*2, v___x_1894_);
v___x_1896_ = l_unsafeCast___redArg(v___x_1895_);
lean_dec_ref_known(v___x_1895_, 2);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_lam___override(lean_object* v_binderName_1897_, lean_object* v_binderType_1898_, lean_object* v_body_1899_, uint8_t v_binderInfo_1900_){
_start:
{
uint64_t v___y_1902_; uint8_t v___y_1903_; uint8_t v___y_1904_; uint8_t v___y_1905_; lean_object* v___y_1906_; uint32_t v___y_1907_; uint8_t v___y_1908_; uint64_t v___x_1912_; uint8_t v___x_1913_; uint32_t v___x_1914_; uint64_t v___x_1915_; uint64_t v___y_1917_; uint8_t v___y_1918_; uint8_t v___y_1919_; lean_object* v___y_1920_; uint32_t v___y_1921_; uint8_t v___y_1922_; uint64_t v___y_1926_; uint8_t v___y_1927_; lean_object* v___y_1928_; uint32_t v___y_1929_; uint8_t v___y_1930_; uint64_t v___y_1934_; lean_object* v___y_1935_; uint32_t v___y_1936_; uint8_t v___y_1937_; uint64_t v___y_1941_; uint32_t v___y_1942_; lean_object* v___y_1943_; uint32_t v___y_1947_; uint8_t v___x_1962_; uint32_t v___x_1963_; uint8_t v___x_1964_; 
v___x_1912_ = lean_expr_data(v_binderType_1898_);
v___x_1913_ = l_Lean_Expr_Data_approxDepth(v___x_1912_);
v___x_1914_ = lean_uint8_to_uint32(v___x_1913_);
v___x_1915_ = lean_expr_data(v_body_1899_);
v___x_1962_ = l_Lean_Expr_Data_approxDepth(v___x_1915_);
v___x_1963_ = lean_uint8_to_uint32(v___x_1962_);
v___x_1964_ = lean_uint32_dec_le(v___x_1914_, v___x_1963_);
if (v___x_1964_ == 0)
{
v___y_1947_ = v___x_1914_;
goto v___jp_1946_;
}
else
{
v___y_1947_ = v___x_1963_;
goto v___jp_1946_;
}
v___jp_1901_:
{
uint64_t v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1909_ = lean_expr_mk_data(v___y_1902_, v___y_1906_, v___y_1907_, v___y_1905_, v___y_1904_, v___y_1903_, v___y_1908_);
v___x_1910_ = lean_alloc_ctor(6, 3, 9);
lean_ctor_set(v___x_1910_, 0, v_binderName_1897_);
lean_ctor_set(v___x_1910_, 1, v_binderType_1898_);
lean_ctor_set(v___x_1910_, 2, v_body_1899_);
lean_ctor_set_uint64(v___x_1910_, sizeof(void*)*3, v___x_1909_);
lean_ctor_set_uint8(v___x_1910_, sizeof(void*)*3 + 8, v_binderInfo_1900_);
v___x_1911_ = l_unsafeCast___redArg(v___x_1910_);
lean_dec_ref_known(v___x_1910_, 3);
return v___x_1911_;
}
v___jp_1916_:
{
uint8_t v___x_1923_; 
v___x_1923_ = l_Lean_Expr_Data_hasLevelParam(v___x_1912_);
if (v___x_1923_ == 0)
{
uint8_t v___x_1924_; 
v___x_1924_ = l_Lean_Expr_Data_hasLevelParam(v___x_1915_);
v___y_1902_ = v___y_1917_;
v___y_1903_ = v___y_1922_;
v___y_1904_ = v___y_1919_;
v___y_1905_ = v___y_1918_;
v___y_1906_ = v___y_1920_;
v___y_1907_ = v___y_1921_;
v___y_1908_ = v___x_1924_;
goto v___jp_1901_;
}
else
{
v___y_1902_ = v___y_1917_;
v___y_1903_ = v___y_1922_;
v___y_1904_ = v___y_1919_;
v___y_1905_ = v___y_1918_;
v___y_1906_ = v___y_1920_;
v___y_1907_ = v___y_1921_;
v___y_1908_ = v___x_1923_;
goto v___jp_1901_;
}
}
v___jp_1925_:
{
uint8_t v___x_1931_; 
v___x_1931_ = l_Lean_Expr_Data_hasLevelMVar(v___x_1912_);
if (v___x_1931_ == 0)
{
uint8_t v___x_1932_; 
v___x_1932_ = l_Lean_Expr_Data_hasLevelMVar(v___x_1915_);
v___y_1917_ = v___y_1926_;
v___y_1918_ = v___y_1927_;
v___y_1919_ = v___y_1930_;
v___y_1920_ = v___y_1928_;
v___y_1921_ = v___y_1929_;
v___y_1922_ = v___x_1932_;
goto v___jp_1916_;
}
else
{
v___y_1917_ = v___y_1926_;
v___y_1918_ = v___y_1927_;
v___y_1919_ = v___y_1930_;
v___y_1920_ = v___y_1928_;
v___y_1921_ = v___y_1929_;
v___y_1922_ = v___x_1931_;
goto v___jp_1916_;
}
}
v___jp_1933_:
{
uint8_t v___x_1938_; 
v___x_1938_ = l_Lean_Expr_Data_hasExprMVar(v___x_1912_);
if (v___x_1938_ == 0)
{
uint8_t v___x_1939_; 
v___x_1939_ = l_Lean_Expr_Data_hasExprMVar(v___x_1915_);
v___y_1926_ = v___y_1934_;
v___y_1927_ = v___y_1937_;
v___y_1928_ = v___y_1935_;
v___y_1929_ = v___y_1936_;
v___y_1930_ = v___x_1939_;
goto v___jp_1925_;
}
else
{
v___y_1926_ = v___y_1934_;
v___y_1927_ = v___y_1937_;
v___y_1928_ = v___y_1935_;
v___y_1929_ = v___y_1936_;
v___y_1930_ = v___x_1938_;
goto v___jp_1925_;
}
}
v___jp_1940_:
{
uint8_t v___x_1944_; 
v___x_1944_ = l_Lean_Expr_Data_hasFVar(v___x_1912_);
if (v___x_1944_ == 0)
{
uint8_t v___x_1945_; 
v___x_1945_ = l_Lean_Expr_Data_hasFVar(v___x_1915_);
v___y_1934_ = v___y_1941_;
v___y_1935_ = v___y_1943_;
v___y_1936_ = v___y_1942_;
v___y_1937_ = v___x_1945_;
goto v___jp_1933_;
}
else
{
v___y_1934_ = v___y_1941_;
v___y_1935_ = v___y_1943_;
v___y_1936_ = v___y_1942_;
v___y_1937_ = v___x_1944_;
goto v___jp_1933_;
}
}
v___jp_1946_:
{
lean_object* v___x_1948_; uint32_t v___x_1949_; uint32_t v___x_1950_; uint64_t v___x_1951_; uint64_t v___x_1952_; uint64_t v___x_1953_; uint64_t v___x_1954_; uint64_t v___x_1955_; uint32_t v___x_1956_; lean_object* v___x_1957_; uint32_t v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; uint8_t v___x_1961_; 
v___x_1948_ = lean_unsigned_to_nat(1u);
v___x_1949_ = 1;
v___x_1950_ = lean_uint32_add(v___y_1947_, v___x_1949_);
v___x_1951_ = lean_uint32_to_uint64(v___x_1950_);
v___x_1952_ = l_Lean_Expr_Data_hash(v___x_1912_);
v___x_1953_ = l_Lean_Expr_Data_hash(v___x_1915_);
v___x_1954_ = lean_uint64_mix_hash(v___x_1952_, v___x_1953_);
v___x_1955_ = lean_uint64_mix_hash(v___x_1951_, v___x_1954_);
v___x_1956_ = l_Lean_Expr_Data_looseBVarRange(v___x_1912_);
v___x_1957_ = lean_uint32_to_nat(v___x_1956_);
v___x_1958_ = l_Lean_Expr_Data_looseBVarRange(v___x_1915_);
v___x_1959_ = lean_uint32_to_nat(v___x_1958_);
v___x_1960_ = lean_nat_sub(v___x_1959_, v___x_1948_);
lean_dec(v___x_1959_);
v___x_1961_ = lean_nat_dec_le(v___x_1957_, v___x_1960_);
if (v___x_1961_ == 0)
{
lean_dec(v___x_1960_);
v___y_1941_ = v___x_1955_;
v___y_1942_ = v___x_1950_;
v___y_1943_ = v___x_1957_;
goto v___jp_1940_;
}
else
{
lean_dec(v___x_1957_);
v___y_1941_ = v___x_1955_;
v___y_1942_ = v___x_1950_;
v___y_1943_ = v___x_1960_;
goto v___jp_1940_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_lam___override___boxed(lean_object* v_binderName_1965_, lean_object* v_binderType_1966_, lean_object* v_body_1967_, lean_object* v_binderInfo_1968_){
_start:
{
uint8_t v_binderInfo_boxed_1969_; lean_object* v_res_1970_; 
v_binderInfo_boxed_1969_ = lean_unbox(v_binderInfo_1968_);
v_res_1970_ = l_Lean_Expr_lam___override(v_binderName_1965_, v_binderType_1966_, v_body_1967_, v_binderInfo_boxed_1969_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallE___override(lean_object* v_binderName_1971_, lean_object* v_binderType_1972_, lean_object* v_body_1973_, uint8_t v_binderInfo_1974_){
_start:
{
uint64_t v___y_1976_; uint8_t v___y_1977_; lean_object* v___y_1978_; uint32_t v___y_1979_; uint8_t v___y_1980_; uint8_t v___y_1981_; uint8_t v___y_1982_; uint64_t v___x_1986_; uint8_t v___x_1987_; uint32_t v___x_1988_; uint64_t v___x_1989_; uint64_t v___y_1991_; uint8_t v___y_1992_; lean_object* v___y_1993_; uint32_t v___y_1994_; uint8_t v___y_1995_; uint8_t v___y_1996_; uint64_t v___y_2000_; uint8_t v___y_2001_; lean_object* v___y_2002_; uint32_t v___y_2003_; uint8_t v___y_2004_; uint64_t v___y_2008_; lean_object* v___y_2009_; uint32_t v___y_2010_; uint8_t v___y_2011_; uint64_t v___y_2015_; uint32_t v___y_2016_; lean_object* v___y_2017_; uint32_t v___y_2021_; uint8_t v___x_2036_; uint32_t v___x_2037_; uint8_t v___x_2038_; 
v___x_1986_ = lean_expr_data(v_binderType_1972_);
v___x_1987_ = l_Lean_Expr_Data_approxDepth(v___x_1986_);
v___x_1988_ = lean_uint8_to_uint32(v___x_1987_);
v___x_1989_ = lean_expr_data(v_body_1973_);
v___x_2036_ = l_Lean_Expr_Data_approxDepth(v___x_1989_);
v___x_2037_ = lean_uint8_to_uint32(v___x_2036_);
v___x_2038_ = lean_uint32_dec_le(v___x_1988_, v___x_2037_);
if (v___x_2038_ == 0)
{
v___y_2021_ = v___x_1988_;
goto v___jp_2020_;
}
else
{
v___y_2021_ = v___x_2037_;
goto v___jp_2020_;
}
v___jp_1975_:
{
uint64_t v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1983_ = lean_expr_mk_data(v___y_1976_, v___y_1978_, v___y_1979_, v___y_1977_, v___y_1981_, v___y_1980_, v___y_1982_);
v___x_1984_ = lean_alloc_ctor(7, 3, 9);
lean_ctor_set(v___x_1984_, 0, v_binderName_1971_);
lean_ctor_set(v___x_1984_, 1, v_binderType_1972_);
lean_ctor_set(v___x_1984_, 2, v_body_1973_);
lean_ctor_set_uint64(v___x_1984_, sizeof(void*)*3, v___x_1983_);
lean_ctor_set_uint8(v___x_1984_, sizeof(void*)*3 + 8, v_binderInfo_1974_);
v___x_1985_ = l_unsafeCast___redArg(v___x_1984_);
lean_dec_ref_known(v___x_1984_, 3);
return v___x_1985_;
}
v___jp_1990_:
{
uint8_t v___x_1997_; 
v___x_1997_ = l_Lean_Expr_Data_hasLevelParam(v___x_1986_);
if (v___x_1997_ == 0)
{
uint8_t v___x_1998_; 
v___x_1998_ = l_Lean_Expr_Data_hasLevelParam(v___x_1989_);
v___y_1976_ = v___y_1991_;
v___y_1977_ = v___y_1992_;
v___y_1978_ = v___y_1993_;
v___y_1979_ = v___y_1994_;
v___y_1980_ = v___y_1996_;
v___y_1981_ = v___y_1995_;
v___y_1982_ = v___x_1998_;
goto v___jp_1975_;
}
else
{
v___y_1976_ = v___y_1991_;
v___y_1977_ = v___y_1992_;
v___y_1978_ = v___y_1993_;
v___y_1979_ = v___y_1994_;
v___y_1980_ = v___y_1996_;
v___y_1981_ = v___y_1995_;
v___y_1982_ = v___x_1997_;
goto v___jp_1975_;
}
}
v___jp_1999_:
{
uint8_t v___x_2005_; 
v___x_2005_ = l_Lean_Expr_Data_hasLevelMVar(v___x_1986_);
if (v___x_2005_ == 0)
{
uint8_t v___x_2006_; 
v___x_2006_ = l_Lean_Expr_Data_hasLevelMVar(v___x_1989_);
v___y_1991_ = v___y_2000_;
v___y_1992_ = v___y_2001_;
v___y_1993_ = v___y_2002_;
v___y_1994_ = v___y_2003_;
v___y_1995_ = v___y_2004_;
v___y_1996_ = v___x_2006_;
goto v___jp_1990_;
}
else
{
v___y_1991_ = v___y_2000_;
v___y_1992_ = v___y_2001_;
v___y_1993_ = v___y_2002_;
v___y_1994_ = v___y_2003_;
v___y_1995_ = v___y_2004_;
v___y_1996_ = v___x_2005_;
goto v___jp_1990_;
}
}
v___jp_2007_:
{
uint8_t v___x_2012_; 
v___x_2012_ = l_Lean_Expr_Data_hasExprMVar(v___x_1986_);
if (v___x_2012_ == 0)
{
uint8_t v___x_2013_; 
v___x_2013_ = l_Lean_Expr_Data_hasExprMVar(v___x_1989_);
v___y_2000_ = v___y_2008_;
v___y_2001_ = v___y_2011_;
v___y_2002_ = v___y_2009_;
v___y_2003_ = v___y_2010_;
v___y_2004_ = v___x_2013_;
goto v___jp_1999_;
}
else
{
v___y_2000_ = v___y_2008_;
v___y_2001_ = v___y_2011_;
v___y_2002_ = v___y_2009_;
v___y_2003_ = v___y_2010_;
v___y_2004_ = v___x_2012_;
goto v___jp_1999_;
}
}
v___jp_2014_:
{
uint8_t v___x_2018_; 
v___x_2018_ = l_Lean_Expr_Data_hasFVar(v___x_1986_);
if (v___x_2018_ == 0)
{
uint8_t v___x_2019_; 
v___x_2019_ = l_Lean_Expr_Data_hasFVar(v___x_1989_);
v___y_2008_ = v___y_2015_;
v___y_2009_ = v___y_2017_;
v___y_2010_ = v___y_2016_;
v___y_2011_ = v___x_2019_;
goto v___jp_2007_;
}
else
{
v___y_2008_ = v___y_2015_;
v___y_2009_ = v___y_2017_;
v___y_2010_ = v___y_2016_;
v___y_2011_ = v___x_2018_;
goto v___jp_2007_;
}
}
v___jp_2020_:
{
lean_object* v___x_2022_; uint32_t v___x_2023_; uint32_t v___x_2024_; uint64_t v___x_2025_; uint64_t v___x_2026_; uint64_t v___x_2027_; uint64_t v___x_2028_; uint64_t v___x_2029_; uint32_t v___x_2030_; lean_object* v___x_2031_; uint32_t v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; 
v___x_2022_ = lean_unsigned_to_nat(1u);
v___x_2023_ = 1;
v___x_2024_ = lean_uint32_add(v___y_2021_, v___x_2023_);
v___x_2025_ = lean_uint32_to_uint64(v___x_2024_);
v___x_2026_ = l_Lean_Expr_Data_hash(v___x_1986_);
v___x_2027_ = l_Lean_Expr_Data_hash(v___x_1989_);
v___x_2028_ = lean_uint64_mix_hash(v___x_2026_, v___x_2027_);
v___x_2029_ = lean_uint64_mix_hash(v___x_2025_, v___x_2028_);
v___x_2030_ = l_Lean_Expr_Data_looseBVarRange(v___x_1986_);
v___x_2031_ = lean_uint32_to_nat(v___x_2030_);
v___x_2032_ = l_Lean_Expr_Data_looseBVarRange(v___x_1989_);
v___x_2033_ = lean_uint32_to_nat(v___x_2032_);
v___x_2034_ = lean_nat_sub(v___x_2033_, v___x_2022_);
lean_dec(v___x_2033_);
v___x_2035_ = lean_nat_dec_le(v___x_2031_, v___x_2034_);
if (v___x_2035_ == 0)
{
lean_dec(v___x_2034_);
v___y_2015_ = v___x_2029_;
v___y_2016_ = v___x_2024_;
v___y_2017_ = v___x_2031_;
goto v___jp_2014_;
}
else
{
lean_dec(v___x_2031_);
v___y_2015_ = v___x_2029_;
v___y_2016_ = v___x_2024_;
v___y_2017_ = v___x_2034_;
goto v___jp_2014_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallE___override___boxed(lean_object* v_binderName_2039_, lean_object* v_binderType_2040_, lean_object* v_body_2041_, lean_object* v_binderInfo_2042_){
_start:
{
uint8_t v_binderInfo_boxed_2043_; lean_object* v_res_2044_; 
v_binderInfo_boxed_2043_ = lean_unbox(v_binderInfo_2042_);
v_res_2044_ = l_Lean_Expr_forallE___override(v_binderName_2039_, v_binderType_2040_, v_body_2041_, v_binderInfo_boxed_2043_);
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letE___override(lean_object* v_declName_2045_, lean_object* v_type_2046_, lean_object* v_value_2047_, lean_object* v_body_2048_, uint8_t v_nondep_2049_){
_start:
{
uint8_t v___y_2051_; lean_object* v___y_2052_; uint32_t v___y_2053_; uint64_t v___y_2054_; uint8_t v___y_2055_; uint8_t v___y_2056_; uint8_t v___y_2057_; uint8_t v___y_2062_; lean_object* v___y_2063_; uint64_t v___y_2064_; uint32_t v___y_2065_; uint64_t v___y_2066_; uint8_t v___y_2067_; uint8_t v___y_2068_; uint8_t v___y_2069_; uint64_t v___x_2071_; uint8_t v___x_2072_; uint32_t v___x_2073_; uint64_t v___x_2074_; uint8_t v___y_2076_; lean_object* v___y_2077_; uint64_t v___y_2078_; uint32_t v___y_2079_; uint64_t v___y_2080_; uint8_t v___y_2081_; uint8_t v___y_2082_; uint8_t v___y_2086_; lean_object* v___y_2087_; uint64_t v___y_2088_; uint32_t v___y_2089_; uint64_t v___y_2090_; uint8_t v___y_2091_; uint8_t v___y_2092_; uint8_t v___y_2095_; lean_object* v___y_2096_; uint64_t v___y_2097_; uint32_t v___y_2098_; uint64_t v___y_2099_; uint8_t v___y_2100_; uint8_t v___y_2104_; lean_object* v___y_2105_; uint64_t v___y_2106_; uint32_t v___y_2107_; uint64_t v___y_2108_; uint8_t v___y_2109_; lean_object* v___y_2112_; uint64_t v___y_2113_; uint32_t v___y_2114_; uint64_t v___y_2115_; uint8_t v___y_2116_; lean_object* v___y_2120_; uint64_t v___y_2121_; uint32_t v___y_2122_; uint64_t v___y_2123_; uint8_t v___y_2124_; uint64_t v___y_2127_; uint32_t v___y_2128_; uint64_t v___y_2129_; lean_object* v___y_2130_; uint64_t v___y_2134_; uint32_t v___y_2135_; uint64_t v___y_2136_; lean_object* v___y_2137_; lean_object* v___y_2138_; uint64_t v___y_2144_; uint32_t v___y_2145_; uint32_t v___y_2162_; uint8_t v___x_2167_; uint32_t v___x_2168_; uint8_t v___x_2169_; 
v___x_2071_ = lean_expr_data(v_type_2046_);
v___x_2072_ = l_Lean_Expr_Data_approxDepth(v___x_2071_);
v___x_2073_ = lean_uint8_to_uint32(v___x_2072_);
v___x_2074_ = lean_expr_data(v_value_2047_);
v___x_2167_ = l_Lean_Expr_Data_approxDepth(v___x_2074_);
v___x_2168_ = lean_uint8_to_uint32(v___x_2167_);
v___x_2169_ = lean_uint32_dec_le(v___x_2073_, v___x_2168_);
if (v___x_2169_ == 0)
{
v___y_2162_ = v___x_2073_;
goto v___jp_2161_;
}
else
{
v___y_2162_ = v___x_2168_;
goto v___jp_2161_;
}
v___jp_2050_:
{
uint64_t v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2058_ = lean_expr_mk_data(v___y_2054_, v___y_2052_, v___y_2053_, v___y_2051_, v___y_2056_, v___y_2055_, v___y_2057_);
v___x_2059_ = lean_alloc_ctor(8, 4, 9);
lean_ctor_set(v___x_2059_, 0, v_declName_2045_);
lean_ctor_set(v___x_2059_, 1, v_type_2046_);
lean_ctor_set(v___x_2059_, 2, v_value_2047_);
lean_ctor_set(v___x_2059_, 3, v_body_2048_);
lean_ctor_set_uint64(v___x_2059_, sizeof(void*)*4, v___x_2058_);
lean_ctor_set_uint8(v___x_2059_, sizeof(void*)*4 + 8, v_nondep_2049_);
v___x_2060_ = l_unsafeCast___redArg(v___x_2059_);
lean_dec_ref_known(v___x_2059_, 4);
return v___x_2060_;
}
v___jp_2061_:
{
if (v___y_2069_ == 0)
{
uint8_t v___x_2070_; 
v___x_2070_ = l_Lean_Expr_Data_hasLevelParam(v___y_2064_);
v___y_2051_ = v___y_2062_;
v___y_2052_ = v___y_2063_;
v___y_2053_ = v___y_2065_;
v___y_2054_ = v___y_2066_;
v___y_2055_ = v___y_2067_;
v___y_2056_ = v___y_2068_;
v___y_2057_ = v___x_2070_;
goto v___jp_2050_;
}
else
{
v___y_2051_ = v___y_2062_;
v___y_2052_ = v___y_2063_;
v___y_2053_ = v___y_2065_;
v___y_2054_ = v___y_2066_;
v___y_2055_ = v___y_2067_;
v___y_2056_ = v___y_2068_;
v___y_2057_ = v___y_2069_;
goto v___jp_2050_;
}
}
v___jp_2075_:
{
uint8_t v___x_2083_; 
v___x_2083_ = l_Lean_Expr_Data_hasLevelParam(v___x_2071_);
if (v___x_2083_ == 0)
{
uint8_t v___x_2084_; 
v___x_2084_ = l_Lean_Expr_Data_hasLevelParam(v___x_2074_);
v___y_2062_ = v___y_2076_;
v___y_2063_ = v___y_2077_;
v___y_2064_ = v___y_2078_;
v___y_2065_ = v___y_2079_;
v___y_2066_ = v___y_2080_;
v___y_2067_ = v___y_2082_;
v___y_2068_ = v___y_2081_;
v___y_2069_ = v___x_2084_;
goto v___jp_2061_;
}
else
{
v___y_2062_ = v___y_2076_;
v___y_2063_ = v___y_2077_;
v___y_2064_ = v___y_2078_;
v___y_2065_ = v___y_2079_;
v___y_2066_ = v___y_2080_;
v___y_2067_ = v___y_2082_;
v___y_2068_ = v___y_2081_;
v___y_2069_ = v___x_2083_;
goto v___jp_2061_;
}
}
v___jp_2085_:
{
if (v___y_2092_ == 0)
{
uint8_t v___x_2093_; 
v___x_2093_ = l_Lean_Expr_Data_hasLevelMVar(v___y_2088_);
v___y_2076_ = v___y_2086_;
v___y_2077_ = v___y_2087_;
v___y_2078_ = v___y_2088_;
v___y_2079_ = v___y_2089_;
v___y_2080_ = v___y_2090_;
v___y_2081_ = v___y_2091_;
v___y_2082_ = v___x_2093_;
goto v___jp_2075_;
}
else
{
v___y_2076_ = v___y_2086_;
v___y_2077_ = v___y_2087_;
v___y_2078_ = v___y_2088_;
v___y_2079_ = v___y_2089_;
v___y_2080_ = v___y_2090_;
v___y_2081_ = v___y_2091_;
v___y_2082_ = v___y_2092_;
goto v___jp_2075_;
}
}
v___jp_2094_:
{
uint8_t v___x_2101_; 
v___x_2101_ = l_Lean_Expr_Data_hasLevelMVar(v___x_2071_);
if (v___x_2101_ == 0)
{
uint8_t v___x_2102_; 
v___x_2102_ = l_Lean_Expr_Data_hasLevelMVar(v___x_2074_);
v___y_2086_ = v___y_2095_;
v___y_2087_ = v___y_2096_;
v___y_2088_ = v___y_2097_;
v___y_2089_ = v___y_2098_;
v___y_2090_ = v___y_2099_;
v___y_2091_ = v___y_2100_;
v___y_2092_ = v___x_2102_;
goto v___jp_2085_;
}
else
{
v___y_2086_ = v___y_2095_;
v___y_2087_ = v___y_2096_;
v___y_2088_ = v___y_2097_;
v___y_2089_ = v___y_2098_;
v___y_2090_ = v___y_2099_;
v___y_2091_ = v___y_2100_;
v___y_2092_ = v___x_2101_;
goto v___jp_2085_;
}
}
v___jp_2103_:
{
if (v___y_2109_ == 0)
{
uint8_t v___x_2110_; 
v___x_2110_ = l_Lean_Expr_Data_hasExprMVar(v___y_2106_);
v___y_2095_ = v___y_2104_;
v___y_2096_ = v___y_2105_;
v___y_2097_ = v___y_2106_;
v___y_2098_ = v___y_2107_;
v___y_2099_ = v___y_2108_;
v___y_2100_ = v___x_2110_;
goto v___jp_2094_;
}
else
{
v___y_2095_ = v___y_2104_;
v___y_2096_ = v___y_2105_;
v___y_2097_ = v___y_2106_;
v___y_2098_ = v___y_2107_;
v___y_2099_ = v___y_2108_;
v___y_2100_ = v___y_2109_;
goto v___jp_2094_;
}
}
v___jp_2111_:
{
uint8_t v___x_2117_; 
v___x_2117_ = l_Lean_Expr_Data_hasExprMVar(v___x_2071_);
if (v___x_2117_ == 0)
{
uint8_t v___x_2118_; 
v___x_2118_ = l_Lean_Expr_Data_hasExprMVar(v___x_2074_);
v___y_2104_ = v___y_2116_;
v___y_2105_ = v___y_2112_;
v___y_2106_ = v___y_2113_;
v___y_2107_ = v___y_2114_;
v___y_2108_ = v___y_2115_;
v___y_2109_ = v___x_2118_;
goto v___jp_2103_;
}
else
{
v___y_2104_ = v___y_2116_;
v___y_2105_ = v___y_2112_;
v___y_2106_ = v___y_2113_;
v___y_2107_ = v___y_2114_;
v___y_2108_ = v___y_2115_;
v___y_2109_ = v___x_2117_;
goto v___jp_2103_;
}
}
v___jp_2119_:
{
if (v___y_2124_ == 0)
{
uint8_t v___x_2125_; 
v___x_2125_ = l_Lean_Expr_Data_hasFVar(v___y_2121_);
v___y_2112_ = v___y_2120_;
v___y_2113_ = v___y_2121_;
v___y_2114_ = v___y_2122_;
v___y_2115_ = v___y_2123_;
v___y_2116_ = v___x_2125_;
goto v___jp_2111_;
}
else
{
v___y_2112_ = v___y_2120_;
v___y_2113_ = v___y_2121_;
v___y_2114_ = v___y_2122_;
v___y_2115_ = v___y_2123_;
v___y_2116_ = v___y_2124_;
goto v___jp_2111_;
}
}
v___jp_2126_:
{
uint8_t v___x_2131_; 
v___x_2131_ = l_Lean_Expr_Data_hasFVar(v___x_2071_);
if (v___x_2131_ == 0)
{
uint8_t v___x_2132_; 
v___x_2132_ = l_Lean_Expr_Data_hasFVar(v___x_2074_);
v___y_2120_ = v___y_2130_;
v___y_2121_ = v___y_2127_;
v___y_2122_ = v___y_2128_;
v___y_2123_ = v___y_2129_;
v___y_2124_ = v___x_2132_;
goto v___jp_2119_;
}
else
{
v___y_2120_ = v___y_2130_;
v___y_2121_ = v___y_2127_;
v___y_2122_ = v___y_2128_;
v___y_2123_ = v___y_2129_;
v___y_2124_ = v___x_2131_;
goto v___jp_2119_;
}
}
v___jp_2133_:
{
uint32_t v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; uint8_t v___x_2142_; 
v___x_2139_ = l_Lean_Expr_Data_looseBVarRange(v___y_2134_);
v___x_2140_ = lean_uint32_to_nat(v___x_2139_);
v___x_2141_ = lean_nat_sub(v___x_2140_, v___y_2137_);
lean_dec(v___x_2140_);
v___x_2142_ = lean_nat_dec_le(v___y_2138_, v___x_2141_);
if (v___x_2142_ == 0)
{
lean_dec(v___x_2141_);
v___y_2127_ = v___y_2134_;
v___y_2128_ = v___y_2135_;
v___y_2129_ = v___y_2136_;
v___y_2130_ = v___y_2138_;
goto v___jp_2126_;
}
else
{
lean_dec(v___y_2138_);
v___y_2127_ = v___y_2134_;
v___y_2128_ = v___y_2135_;
v___y_2129_ = v___y_2136_;
v___y_2130_ = v___x_2141_;
goto v___jp_2126_;
}
}
v___jp_2143_:
{
lean_object* v___x_2146_; uint32_t v___x_2147_; uint32_t v___x_2148_; uint64_t v___x_2149_; uint64_t v___x_2150_; uint64_t v___x_2151_; uint64_t v___x_2152_; uint64_t v___x_2153_; uint64_t v___x_2154_; uint64_t v___x_2155_; uint32_t v___x_2156_; lean_object* v___x_2157_; uint32_t v___x_2158_; lean_object* v___x_2159_; uint8_t v___x_2160_; 
v___x_2146_ = lean_unsigned_to_nat(1u);
v___x_2147_ = 1;
v___x_2148_ = lean_uint32_add(v___y_2145_, v___x_2147_);
v___x_2149_ = lean_uint32_to_uint64(v___x_2148_);
v___x_2150_ = l_Lean_Expr_Data_hash(v___x_2071_);
v___x_2151_ = l_Lean_Expr_Data_hash(v___x_2074_);
v___x_2152_ = l_Lean_Expr_Data_hash(v___y_2144_);
v___x_2153_ = lean_uint64_mix_hash(v___x_2151_, v___x_2152_);
v___x_2154_ = lean_uint64_mix_hash(v___x_2150_, v___x_2153_);
v___x_2155_ = lean_uint64_mix_hash(v___x_2149_, v___x_2154_);
v___x_2156_ = l_Lean_Expr_Data_looseBVarRange(v___x_2071_);
v___x_2157_ = lean_uint32_to_nat(v___x_2156_);
v___x_2158_ = l_Lean_Expr_Data_looseBVarRange(v___x_2074_);
v___x_2159_ = lean_uint32_to_nat(v___x_2158_);
v___x_2160_ = lean_nat_dec_le(v___x_2157_, v___x_2159_);
if (v___x_2160_ == 0)
{
lean_dec(v___x_2159_);
v___y_2134_ = v___y_2144_;
v___y_2135_ = v___x_2148_;
v___y_2136_ = v___x_2155_;
v___y_2137_ = v___x_2146_;
v___y_2138_ = v___x_2157_;
goto v___jp_2133_;
}
else
{
lean_dec(v___x_2157_);
v___y_2134_ = v___y_2144_;
v___y_2135_ = v___x_2148_;
v___y_2136_ = v___x_2155_;
v___y_2137_ = v___x_2146_;
v___y_2138_ = v___x_2159_;
goto v___jp_2133_;
}
}
v___jp_2161_:
{
uint64_t v___x_2163_; uint8_t v___x_2164_; uint32_t v___x_2165_; uint8_t v___x_2166_; 
v___x_2163_ = lean_expr_data(v_body_2048_);
v___x_2164_ = l_Lean_Expr_Data_approxDepth(v___x_2163_);
v___x_2165_ = lean_uint8_to_uint32(v___x_2164_);
v___x_2166_ = lean_uint32_dec_le(v___y_2162_, v___x_2165_);
if (v___x_2166_ == 0)
{
v___y_2144_ = v___x_2163_;
v___y_2145_ = v___y_2162_;
goto v___jp_2143_;
}
else
{
v___y_2144_ = v___x_2163_;
v___y_2145_ = v___x_2165_;
goto v___jp_2143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letE___override___boxed(lean_object* v_declName_2170_, lean_object* v_type_2171_, lean_object* v_value_2172_, lean_object* v_body_2173_, lean_object* v_nondep_2174_){
_start:
{
uint8_t v_nondep_boxed_2175_; lean_object* v_res_2176_; 
v_nondep_boxed_2175_ = lean_unbox(v_nondep_2174_);
v_res_2176_ = l_Lean_Expr_letE___override(v_declName_2170_, v_type_2171_, v_value_2172_, v_body_2173_, v_nondep_boxed_2175_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_lit___override(lean_object* v_a_2177_){
_start:
{
uint64_t v___x_2178_; uint64_t v___x_2179_; uint64_t v___x_2180_; lean_object* v___x_2181_; uint32_t v___x_2182_; uint8_t v___x_2183_; uint64_t v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; 
v___x_2178_ = 3ULL;
v___x_2179_ = l_Lean_Literal_hash(v_a_2177_);
v___x_2180_ = lean_uint64_mix_hash(v___x_2178_, v___x_2179_);
v___x_2181_ = lean_unsigned_to_nat(0u);
v___x_2182_ = 0;
v___x_2183_ = 0;
v___x_2184_ = lean_expr_mk_data(v___x_2180_, v___x_2181_, v___x_2182_, v___x_2183_, v___x_2183_, v___x_2183_, v___x_2183_);
v___x_2185_ = lean_alloc_ctor(9, 1, 8);
lean_ctor_set(v___x_2185_, 0, v_a_2177_);
lean_ctor_set_uint64(v___x_2185_, sizeof(void*)*1, v___x_2184_);
v___x_2186_ = l_unsafeCast___redArg(v___x_2185_);
lean_dec_ref_known(v___x_2185_, 1);
return v___x_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mdata___override(lean_object* v_data_2187_, lean_object* v_expr_2188_){
_start:
{
uint64_t v___x_2189_; uint8_t v___x_2190_; uint32_t v___x_2191_; uint32_t v___x_2192_; uint32_t v___x_2193_; uint64_t v___x_2194_; uint64_t v___x_2195_; uint64_t v___x_2196_; uint32_t v___x_2197_; lean_object* v___x_2198_; uint8_t v___x_2199_; uint8_t v___x_2200_; uint8_t v___x_2201_; uint8_t v___x_2202_; uint64_t v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2189_ = lean_expr_data(v_expr_2188_);
v___x_2190_ = l_Lean_Expr_Data_approxDepth(v___x_2189_);
v___x_2191_ = lean_uint8_to_uint32(v___x_2190_);
v___x_2192_ = 1;
v___x_2193_ = lean_uint32_add(v___x_2191_, v___x_2192_);
v___x_2194_ = lean_uint32_to_uint64(v___x_2193_);
v___x_2195_ = l_Lean_Expr_Data_hash(v___x_2189_);
v___x_2196_ = lean_uint64_mix_hash(v___x_2194_, v___x_2195_);
v___x_2197_ = l_Lean_Expr_Data_looseBVarRange(v___x_2189_);
v___x_2198_ = lean_uint32_to_nat(v___x_2197_);
v___x_2199_ = l_Lean_Expr_Data_hasFVar(v___x_2189_);
v___x_2200_ = l_Lean_Expr_Data_hasExprMVar(v___x_2189_);
v___x_2201_ = l_Lean_Expr_Data_hasLevelMVar(v___x_2189_);
v___x_2202_ = l_Lean_Expr_Data_hasLevelParam(v___x_2189_);
v___x_2203_ = lean_expr_mk_data(v___x_2196_, v___x_2198_, v___x_2193_, v___x_2199_, v___x_2200_, v___x_2201_, v___x_2202_);
v___x_2204_ = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(v___x_2204_, 0, v_data_2187_);
lean_ctor_set(v___x_2204_, 1, v_expr_2188_);
lean_ctor_set_uint64(v___x_2204_, sizeof(void*)*2, v___x_2203_);
v___x_2205_ = l_unsafeCast___redArg(v___x_2204_);
lean_dec_ref_known(v___x_2204_, 2);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_proj___override(lean_object* v_typeName_2206_, lean_object* v_idx_2207_, lean_object* v_struct_2208_){
_start:
{
uint64_t v___x_2209_; uint8_t v___x_2210_; uint32_t v___x_2211_; uint32_t v___x_2212_; uint32_t v___x_2213_; uint64_t v___x_2214_; uint64_t v___y_2216_; lean_object* v___x_2231_; 
v___x_2209_ = lean_expr_data(v_struct_2208_);
v___x_2210_ = l_Lean_Expr_Data_approxDepth(v___x_2209_);
v___x_2211_ = lean_uint8_to_uint32(v___x_2210_);
v___x_2212_ = 1;
v___x_2213_ = lean_uint32_add(v___x_2211_, v___x_2212_);
v___x_2214_ = lean_uint32_to_uint64(v___x_2213_);
v___x_2231_ = l_unsafeCast___redArg(v_typeName_2206_);
if (lean_obj_tag(v___x_2231_) == 0)
{
uint64_t v___x_2232_; 
v___x_2232_ = 1723ULL;
v___y_2216_ = v___x_2232_;
goto v___jp_2215_;
}
else
{
uint64_t v_hash_2233_; 
v_hash_2233_ = lean_ctor_get_uint64(v___x_2231_, sizeof(void*)*2);
lean_dec(v___x_2231_);
v___y_2216_ = v_hash_2233_;
goto v___jp_2215_;
}
v___jp_2215_:
{
uint64_t v___x_2217_; uint64_t v___x_2218_; uint64_t v___x_2219_; uint64_t v___x_2220_; uint64_t v___x_2221_; uint32_t v___x_2222_; lean_object* v___x_2223_; uint8_t v___x_2224_; uint8_t v___x_2225_; uint8_t v___x_2226_; uint8_t v___x_2227_; uint64_t v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2217_ = lean_uint64_of_nat(v_idx_2207_);
v___x_2218_ = l_Lean_Expr_Data_hash(v___x_2209_);
v___x_2219_ = lean_uint64_mix_hash(v___x_2217_, v___x_2218_);
v___x_2220_ = lean_uint64_mix_hash(v___y_2216_, v___x_2219_);
v___x_2221_ = lean_uint64_mix_hash(v___x_2214_, v___x_2220_);
v___x_2222_ = l_Lean_Expr_Data_looseBVarRange(v___x_2209_);
v___x_2223_ = lean_uint32_to_nat(v___x_2222_);
v___x_2224_ = l_Lean_Expr_Data_hasFVar(v___x_2209_);
v___x_2225_ = l_Lean_Expr_Data_hasExprMVar(v___x_2209_);
v___x_2226_ = l_Lean_Expr_Data_hasLevelMVar(v___x_2209_);
v___x_2227_ = l_Lean_Expr_Data_hasLevelParam(v___x_2209_);
v___x_2228_ = lean_expr_mk_data(v___x_2221_, v___x_2223_, v___x_2213_, v___x_2224_, v___x_2225_, v___x_2226_, v___x_2227_);
v___x_2229_ = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(v___x_2229_, 0, v_typeName_2206_);
lean_ctor_set(v___x_2229_, 1, v_idx_2207_);
lean_ctor_set(v___x_2229_, 2, v_struct_2208_);
lean_ctor_set_uint64(v___x_2229_, sizeof(void*)*3, v___x_2228_);
v___x_2230_ = l_unsafeCast___redArg(v___x_2229_);
lean_dec_ref_known(v___x_2229_, 3);
return v___x_2230_;
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Expr_const___override_spec__5(lean_object* v_x_2234_){
_start:
{
if (lean_obj_tag(v_x_2234_) == 0)
{
uint8_t v___x_2235_; 
v___x_2235_ = 0;
return v___x_2235_;
}
else
{
lean_object* v_head_2236_; lean_object* v_tail_2237_; uint8_t v___x_2238_; 
v_head_2236_ = lean_ctor_get(v_x_2234_, 0);
v_tail_2237_ = lean_ctor_get(v_x_2234_, 1);
v___x_2238_ = l_Lean_Level_hasMVar(v_head_2236_);
if (v___x_2238_ == 0)
{
v_x_2234_ = v_tail_2237_;
goto _start;
}
else
{
return v___x_2238_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Expr_const___override_spec__5___boxed(lean_object* v_x_2240_){
_start:
{
uint8_t v_res_2241_; lean_object* v_r_2242_; 
v_res_2241_ = l_List_any___at___00Lean_Expr_const___override_spec__5(v_x_2240_);
lean_dec(v_x_2240_);
v_r_2242_ = lean_box(v_res_2241_);
return v_r_2242_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Expr_const___override_spec__6(lean_object* v_x_2243_){
_start:
{
if (lean_obj_tag(v_x_2243_) == 0)
{
uint8_t v___x_2244_; 
v___x_2244_ = 0;
return v___x_2244_;
}
else
{
lean_object* v_head_2245_; lean_object* v_tail_2246_; uint8_t v___x_2247_; 
v_head_2245_ = lean_ctor_get(v_x_2243_, 0);
v_tail_2246_ = lean_ctor_get(v_x_2243_, 1);
v___x_2247_ = l_Lean_Level_hasParam(v_head_2245_);
if (v___x_2247_ == 0)
{
v_x_2243_ = v_tail_2246_;
goto _start;
}
else
{
return v___x_2247_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Expr_const___override_spec__6___boxed(lean_object* v_x_2249_){
_start:
{
uint8_t v_res_2250_; lean_object* v_r_2251_; 
v_res_2250_ = l_List_any___at___00Lean_Expr_const___override_spec__6(v_x_2249_);
lean_dec(v_x_2249_);
v_r_2251_ = lean_box(v_res_2250_);
return v_r_2251_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Lean_Expr_const___override_spec__4(uint64_t v_x_2252_, lean_object* v_x_2253_){
_start:
{
if (lean_obj_tag(v_x_2253_) == 0)
{
return v_x_2252_;
}
else
{
lean_object* v_head_2254_; lean_object* v_tail_2255_; uint64_t v___x_2256_; uint64_t v___x_2257_; 
v_head_2254_ = lean_ctor_get(v_x_2253_, 0);
v_tail_2255_ = lean_ctor_get(v_x_2253_, 1);
v___x_2256_ = l_Lean_Level_hash(v_head_2254_);
v___x_2257_ = lean_uint64_mix_hash(v_x_2252_, v___x_2256_);
v_x_2252_ = v___x_2257_;
v_x_2253_ = v_tail_2255_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Expr_const___override_spec__4___boxed(lean_object* v_x_2259_, lean_object* v_x_2260_){
_start:
{
uint64_t v_x_1753__boxed_2261_; uint64_t v_res_2262_; lean_object* v_r_2263_; 
v_x_1753__boxed_2261_ = lean_unbox_uint64(v_x_2259_);
lean_dec_ref(v_x_2259_);
v_res_2262_ = l_List_foldl___at___00Lean_Expr_const___override_spec__4(v_x_1753__boxed_2261_, v_x_2260_);
lean_dec(v_x_2260_);
v_r_2263_ = lean_box_uint64(v_res_2262_);
return v_r_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_const___override(lean_object* v_declName_2264_, lean_object* v_us_2265_){
_start:
{
uint64_t v___x_2266_; uint64_t v___y_2268_; lean_object* v___x_2281_; 
v___x_2266_ = 5ULL;
v___x_2281_ = l_unsafeCast___redArg(v_declName_2264_);
if (lean_obj_tag(v___x_2281_) == 0)
{
uint64_t v___x_2282_; 
v___x_2282_ = 1723ULL;
v___y_2268_ = v___x_2282_;
goto v___jp_2267_;
}
else
{
uint64_t v_hash_2283_; 
v_hash_2283_ = lean_ctor_get_uint64(v___x_2281_, sizeof(void*)*2);
lean_dec(v___x_2281_);
v___y_2268_ = v_hash_2283_;
goto v___jp_2267_;
}
v___jp_2267_:
{
uint64_t v___x_2269_; uint64_t v___x_2270_; uint64_t v___x_2271_; uint64_t v___x_2272_; lean_object* v___x_2273_; uint32_t v___x_2274_; uint8_t v___x_2275_; uint8_t v___x_2276_; uint8_t v___x_2277_; uint64_t v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2269_ = 7ULL;
v___x_2270_ = l_List_foldl___at___00Lean_Expr_const___override_spec__4(v___x_2269_, v_us_2265_);
v___x_2271_ = lean_uint64_mix_hash(v___y_2268_, v___x_2270_);
v___x_2272_ = lean_uint64_mix_hash(v___x_2266_, v___x_2271_);
v___x_2273_ = lean_unsigned_to_nat(0u);
v___x_2274_ = 0;
v___x_2275_ = 0;
v___x_2276_ = l_List_any___at___00Lean_Expr_const___override_spec__5(v_us_2265_);
v___x_2277_ = l_List_any___at___00Lean_Expr_const___override_spec__6(v_us_2265_);
v___x_2278_ = lean_expr_mk_data(v___x_2272_, v___x_2273_, v___x_2274_, v___x_2275_, v___x_2275_, v___x_2276_, v___x_2277_);
v___x_2279_ = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(v___x_2279_, 0, v_declName_2264_);
lean_ctor_set(v___x_2279_, 1, v_us_2265_);
lean_ctor_set_uint64(v___x_2279_, sizeof(void*)*2, v___x_2278_);
v___x_2280_ = l_unsafeCast___redArg(v___x_2279_);
lean_dec_ref_known(v___x_2279_, 2);
return v___x_2280_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0___lam__0(lean_object* v___y_2284_){
_start:
{
lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2285_ = lean_unsigned_to_nat(0u);
v___x_2286_ = l_Lean_instReprLevel_repr(v___y_2284_, v___x_2285_);
return v___x_2286_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_2287_, lean_object* v_x_2288_, lean_object* v_x_2289_){
_start:
{
if (lean_obj_tag(v_x_2289_) == 0)
{
lean_dec(v_x_2287_);
return v_x_2288_;
}
else
{
lean_object* v_head_2290_; lean_object* v_tail_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2302_; 
v_head_2290_ = lean_ctor_get(v_x_2289_, 0);
v_tail_2291_ = lean_ctor_get(v_x_2289_, 1);
v_isSharedCheck_2302_ = !lean_is_exclusive(v_x_2289_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2293_ = v_x_2289_;
v_isShared_2294_ = v_isSharedCheck_2302_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_tail_2291_);
lean_inc(v_head_2290_);
lean_dec(v_x_2289_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2302_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
lean_inc(v_x_2287_);
if (v_isShared_2294_ == 0)
{
lean_ctor_set_tag(v___x_2293_, 5);
lean_ctor_set(v___x_2293_, 1, v_x_2287_);
lean_ctor_set(v___x_2293_, 0, v_x_2288_);
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_x_2288_);
lean_ctor_set(v_reuseFailAlloc_2301_, 1, v_x_2287_);
v___x_2296_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v___x_2297_ = lean_unsigned_to_nat(0u);
v___x_2298_ = l_Lean_instReprLevel_repr(v_head_2290_, v___x_2297_);
v___x_2299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2296_);
lean_ctor_set(v___x_2299_, 1, v___x_2298_);
v_x_2288_ = v___x_2299_;
v_x_2289_ = v_tail_2291_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0_spec__1(lean_object* v_x_2303_, lean_object* v_x_2304_, lean_object* v_x_2305_){
_start:
{
if (lean_obj_tag(v_x_2305_) == 0)
{
lean_dec(v_x_2303_);
return v_x_2304_;
}
else
{
lean_object* v_head_2306_; lean_object* v_tail_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2318_; 
v_head_2306_ = lean_ctor_get(v_x_2305_, 0);
v_tail_2307_ = lean_ctor_get(v_x_2305_, 1);
v_isSharedCheck_2318_ = !lean_is_exclusive(v_x_2305_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2309_ = v_x_2305_;
v_isShared_2310_ = v_isSharedCheck_2318_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_tail_2307_);
lean_inc(v_head_2306_);
lean_dec(v_x_2305_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2318_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
lean_inc(v_x_2303_);
if (v_isShared_2310_ == 0)
{
lean_ctor_set_tag(v___x_2309_, 5);
lean_ctor_set(v___x_2309_, 1, v_x_2303_);
lean_ctor_set(v___x_2309_, 0, v_x_2304_);
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_x_2304_);
lean_ctor_set(v_reuseFailAlloc_2317_, 1, v_x_2303_);
v___x_2312_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2313_ = lean_unsigned_to_nat(0u);
v___x_2314_ = l_Lean_instReprLevel_repr(v_head_2306_, v___x_2313_);
v___x_2315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2312_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
v___x_2316_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0_spec__1_spec__3(v_x_2303_, v___x_2315_, v_tail_2307_);
return v___x_2316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0(lean_object* v_x_2319_, lean_object* v_x_2320_){
_start:
{
if (lean_obj_tag(v_x_2319_) == 0)
{
lean_object* v___x_2321_; 
lean_dec(v_x_2320_);
v___x_2321_ = lean_box(0);
return v___x_2321_;
}
else
{
lean_object* v_tail_2322_; 
v_tail_2322_ = lean_ctor_get(v_x_2319_, 1);
if (lean_obj_tag(v_tail_2322_) == 0)
{
lean_object* v_head_2323_; lean_object* v___x_2324_; 
lean_dec(v_x_2320_);
v_head_2323_ = lean_ctor_get(v_x_2319_, 0);
lean_inc(v_head_2323_);
lean_dec_ref_known(v_x_2319_, 2);
v___x_2324_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0___lam__0(v_head_2323_);
return v___x_2324_;
}
else
{
lean_object* v_head_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
lean_inc(v_tail_2322_);
v_head_2325_ = lean_ctor_get(v_x_2319_, 0);
lean_inc(v_head_2325_);
lean_dec_ref_known(v_x_2319_, 2);
v___x_2326_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0___lam__0(v_head_2325_);
v___x_2327_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0_spec__1(v_x_2320_, v___x_2326_, v_tail_2322_);
return v___x_2327_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2339_ = ((lean_object*)(l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__2));
v___x_2340_ = lean_string_length(v___x_2339_);
return v___x_2340_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2341_ = lean_obj_once(&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__7, &l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__7_once, _init_l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__7);
v___x_2342_ = lean_nat_to_int(v___x_2341_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg(lean_object* v_a_2347_){
_start:
{
if (lean_obj_tag(v_a_2347_) == 0)
{
lean_object* v___x_2348_; 
v___x_2348_ = ((lean_object*)(l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__1));
return v___x_2348_;
}
else
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; uint8_t v___x_2357_; lean_object* v___x_2358_; 
v___x_2349_ = ((lean_object*)(l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__5));
v___x_2350_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__0(v_a_2347_, v___x_2349_);
v___x_2351_ = lean_obj_once(&l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__8, &l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__8_once, _init_l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__8);
v___x_2352_ = ((lean_object*)(l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__9));
v___x_2353_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2352_);
lean_ctor_set(v___x_2353_, 1, v___x_2350_);
v___x_2354_ = ((lean_object*)(l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg___closed__10));
v___x_2355_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2353_);
lean_ctor_set(v___x_2355_, 1, v___x_2354_);
v___x_2356_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2351_);
lean_ctor_set(v___x_2356_, 1, v___x_2355_);
v___x_2357_ = 0;
v___x_2358_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2358_, 0, v___x_2356_);
lean_ctor_set_uint8(v___x_2358_, sizeof(void*)*1, v___x_2357_);
return v___x_2358_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprExpr_repr(lean_object* v_x_2431_, lean_object* v_prec_2432_){
_start:
{
switch(lean_obj_tag(v_x_2431_))
{
case 0:
{
lean_object* v_deBruijnIndex_2433_; lean_object* v___y_2435_; lean_object* v___x_2444_; uint8_t v___x_2445_; 
v_deBruijnIndex_2433_ = lean_ctor_get(v_x_2431_, 0);
lean_inc(v_deBruijnIndex_2433_);
lean_dec_ref_known(v_x_2431_, 1);
v___x_2444_ = lean_unsigned_to_nat(1024u);
v___x_2445_ = lean_nat_dec_le(v___x_2444_, v_prec_2432_);
if (v___x_2445_ == 0)
{
lean_object* v___x_2446_; 
v___x_2446_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2435_ = v___x_2446_;
goto v___jp_2434_;
}
else
{
lean_object* v___x_2447_; 
v___x_2447_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2435_ = v___x_2447_;
goto v___jp_2434_;
}
v___jp_2434_:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; uint8_t v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2436_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__2));
v___x_2437_ = l_Nat_reprFast(v_deBruijnIndex_2433_);
v___x_2438_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2438_, 0, v___x_2437_);
v___x_2439_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2436_);
lean_ctor_set(v___x_2439_, 1, v___x_2438_);
lean_inc(v___y_2435_);
v___x_2440_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2440_, 0, v___y_2435_);
lean_ctor_set(v___x_2440_, 1, v___x_2439_);
v___x_2441_ = 0;
v___x_2442_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2442_, 0, v___x_2440_);
lean_ctor_set_uint8(v___x_2442_, sizeof(void*)*1, v___x_2441_);
v___x_2443_ = l_Repr_addAppParen(v___x_2442_, v_prec_2432_);
return v___x_2443_;
}
}
case 1:
{
lean_object* v_fvarId_2448_; lean_object* v___y_2450_; lean_object* v___x_2459_; uint8_t v___x_2460_; 
v_fvarId_2448_ = lean_ctor_get(v_x_2431_, 0);
lean_inc(v_fvarId_2448_);
lean_dec_ref_known(v_x_2431_, 1);
v___x_2459_ = lean_unsigned_to_nat(1024u);
v___x_2460_ = lean_nat_dec_le(v___x_2459_, v_prec_2432_);
if (v___x_2460_ == 0)
{
lean_object* v___x_2461_; 
v___x_2461_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2450_ = v___x_2461_;
goto v___jp_2449_;
}
else
{
lean_object* v___x_2462_; 
v___x_2462_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2450_ = v___x_2462_;
goto v___jp_2449_;
}
v___jp_2449_:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; uint8_t v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2451_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__5));
v___x_2452_ = lean_unsigned_to_nat(1024u);
v___x_2453_ = l_Lean_Name_reprPrec(v_fvarId_2448_, v___x_2452_);
v___x_2454_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2451_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
lean_inc(v___y_2450_);
v___x_2455_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2455_, 0, v___y_2450_);
lean_ctor_set(v___x_2455_, 1, v___x_2454_);
v___x_2456_ = 0;
v___x_2457_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2457_, 0, v___x_2455_);
lean_ctor_set_uint8(v___x_2457_, sizeof(void*)*1, v___x_2456_);
v___x_2458_ = l_Repr_addAppParen(v___x_2457_, v_prec_2432_);
return v___x_2458_;
}
}
case 2:
{
lean_object* v_mvarId_2463_; lean_object* v___y_2465_; lean_object* v___x_2474_; uint8_t v___x_2475_; 
v_mvarId_2463_ = lean_ctor_get(v_x_2431_, 0);
lean_inc(v_mvarId_2463_);
lean_dec_ref_known(v_x_2431_, 1);
v___x_2474_ = lean_unsigned_to_nat(1024u);
v___x_2475_ = lean_nat_dec_le(v___x_2474_, v_prec_2432_);
if (v___x_2475_ == 0)
{
lean_object* v___x_2476_; 
v___x_2476_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2465_ = v___x_2476_;
goto v___jp_2464_;
}
else
{
lean_object* v___x_2477_; 
v___x_2477_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2465_ = v___x_2477_;
goto v___jp_2464_;
}
v___jp_2464_:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; uint8_t v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2466_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__8));
v___x_2467_ = lean_unsigned_to_nat(1024u);
v___x_2468_ = l_Lean_Name_reprPrec(v_mvarId_2463_, v___x_2467_);
v___x_2469_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2469_, 0, v___x_2466_);
lean_ctor_set(v___x_2469_, 1, v___x_2468_);
lean_inc(v___y_2465_);
v___x_2470_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2470_, 0, v___y_2465_);
lean_ctor_set(v___x_2470_, 1, v___x_2469_);
v___x_2471_ = 0;
v___x_2472_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2472_, 0, v___x_2470_);
lean_ctor_set_uint8(v___x_2472_, sizeof(void*)*1, v___x_2471_);
v___x_2473_ = l_Repr_addAppParen(v___x_2472_, v_prec_2432_);
return v___x_2473_;
}
}
case 3:
{
lean_object* v_u_2478_; lean_object* v___y_2480_; lean_object* v___x_2489_; uint8_t v___x_2490_; 
v_u_2478_ = lean_ctor_get(v_x_2431_, 0);
lean_inc(v_u_2478_);
lean_dec_ref_known(v_x_2431_, 1);
v___x_2489_ = lean_unsigned_to_nat(1024u);
v___x_2490_ = lean_nat_dec_le(v___x_2489_, v_prec_2432_);
if (v___x_2490_ == 0)
{
lean_object* v___x_2491_; 
v___x_2491_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2480_ = v___x_2491_;
goto v___jp_2479_;
}
else
{
lean_object* v___x_2492_; 
v___x_2492_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2480_ = v___x_2492_;
goto v___jp_2479_;
}
v___jp_2479_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; uint8_t v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2481_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__11));
v___x_2482_ = lean_unsigned_to_nat(1024u);
v___x_2483_ = l_Lean_instReprLevel_repr(v_u_2478_, v___x_2482_);
v___x_2484_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2481_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
lean_inc(v___y_2480_);
v___x_2485_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2485_, 0, v___y_2480_);
lean_ctor_set(v___x_2485_, 1, v___x_2484_);
v___x_2486_ = 0;
v___x_2487_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2487_, 0, v___x_2485_);
lean_ctor_set_uint8(v___x_2487_, sizeof(void*)*1, v___x_2486_);
v___x_2488_ = l_Repr_addAppParen(v___x_2487_, v_prec_2432_);
return v___x_2488_;
}
}
case 4:
{
lean_object* v_declName_2493_; lean_object* v_us_2494_; lean_object* v___y_2496_; lean_object* v___x_2509_; uint8_t v___x_2510_; 
v_declName_2493_ = lean_ctor_get(v_x_2431_, 0);
lean_inc(v_declName_2493_);
v_us_2494_ = lean_ctor_get(v_x_2431_, 1);
lean_inc(v_us_2494_);
lean_dec_ref_known(v_x_2431_, 2);
v___x_2509_ = lean_unsigned_to_nat(1024u);
v___x_2510_ = lean_nat_dec_le(v___x_2509_, v_prec_2432_);
if (v___x_2510_ == 0)
{
lean_object* v___x_2511_; 
v___x_2511_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2496_ = v___x_2511_;
goto v___jp_2495_;
}
else
{
lean_object* v___x_2512_; 
v___x_2512_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2496_ = v___x_2512_;
goto v___jp_2495_;
}
v___jp_2495_:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; uint8_t v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2497_ = lean_box(1);
v___x_2498_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__14));
v___x_2499_ = lean_unsigned_to_nat(1024u);
v___x_2500_ = l_Lean_Name_reprPrec(v_declName_2493_, v___x_2499_);
v___x_2501_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2498_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
v___x_2502_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2502_, 0, v___x_2501_);
lean_ctor_set(v___x_2502_, 1, v___x_2497_);
v___x_2503_ = l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg(v_us_2494_);
v___x_2504_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2502_);
lean_ctor_set(v___x_2504_, 1, v___x_2503_);
lean_inc(v___y_2496_);
v___x_2505_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2505_, 0, v___y_2496_);
lean_ctor_set(v___x_2505_, 1, v___x_2504_);
v___x_2506_ = 0;
v___x_2507_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2507_, 0, v___x_2505_);
lean_ctor_set_uint8(v___x_2507_, sizeof(void*)*1, v___x_2506_);
v___x_2508_ = l_Repr_addAppParen(v___x_2507_, v_prec_2432_);
return v___x_2508_;
}
}
case 5:
{
lean_object* v_fn_2513_; lean_object* v_arg_2514_; lean_object* v___x_2515_; lean_object* v___y_2517_; uint8_t v___x_2529_; 
v_fn_2513_ = lean_ctor_get(v_x_2431_, 0);
lean_inc_ref(v_fn_2513_);
v_arg_2514_ = lean_ctor_get(v_x_2431_, 1);
lean_inc_ref(v_arg_2514_);
lean_dec_ref_known(v_x_2431_, 2);
v___x_2515_ = lean_unsigned_to_nat(1024u);
v___x_2529_ = lean_nat_dec_le(v___x_2515_, v_prec_2432_);
if (v___x_2529_ == 0)
{
lean_object* v___x_2530_; 
v___x_2530_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2517_ = v___x_2530_;
goto v___jp_2516_;
}
else
{
lean_object* v___x_2531_; 
v___x_2531_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2517_ = v___x_2531_;
goto v___jp_2516_;
}
v___jp_2516_:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; uint8_t v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2518_ = lean_box(1);
v___x_2519_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__17));
v___x_2520_ = l_Lean_instReprExpr_repr(v_fn_2513_, v___x_2515_);
v___x_2521_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2519_);
lean_ctor_set(v___x_2521_, 1, v___x_2520_);
v___x_2522_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2521_);
lean_ctor_set(v___x_2522_, 1, v___x_2518_);
v___x_2523_ = l_Lean_instReprExpr_repr(v_arg_2514_, v___x_2515_);
v___x_2524_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2522_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
lean_inc(v___y_2517_);
v___x_2525_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2525_, 0, v___y_2517_);
lean_ctor_set(v___x_2525_, 1, v___x_2524_);
v___x_2526_ = 0;
v___x_2527_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2527_, 0, v___x_2525_);
lean_ctor_set_uint8(v___x_2527_, sizeof(void*)*1, v___x_2526_);
v___x_2528_ = l_Repr_addAppParen(v___x_2527_, v_prec_2432_);
return v___x_2528_;
}
}
case 6:
{
lean_object* v_binderName_2532_; lean_object* v_binderType_2533_; lean_object* v_body_2534_; uint8_t v_binderInfo_2535_; lean_object* v___x_2536_; lean_object* v___y_2538_; uint8_t v___x_2556_; 
v_binderName_2532_ = lean_ctor_get(v_x_2431_, 0);
lean_inc(v_binderName_2532_);
v_binderType_2533_ = lean_ctor_get(v_x_2431_, 1);
lean_inc_ref(v_binderType_2533_);
v_body_2534_ = lean_ctor_get(v_x_2431_, 2);
lean_inc_ref(v_body_2534_);
v_binderInfo_2535_ = lean_ctor_get_uint8(v_x_2431_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_x_2431_, 3);
v___x_2536_ = lean_unsigned_to_nat(1024u);
v___x_2556_ = lean_nat_dec_le(v___x_2536_, v_prec_2432_);
if (v___x_2556_ == 0)
{
lean_object* v___x_2557_; 
v___x_2557_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2538_ = v___x_2557_;
goto v___jp_2537_;
}
else
{
lean_object* v___x_2558_; 
v___x_2558_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2538_ = v___x_2558_;
goto v___jp_2537_;
}
v___jp_2537_:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; uint8_t v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2539_ = lean_box(1);
v___x_2540_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__20));
v___x_2541_ = l_Lean_Name_reprPrec(v_binderName_2532_, v___x_2536_);
v___x_2542_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2540_);
lean_ctor_set(v___x_2542_, 1, v___x_2541_);
v___x_2543_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2542_);
lean_ctor_set(v___x_2543_, 1, v___x_2539_);
v___x_2544_ = l_Lean_instReprExpr_repr(v_binderType_2533_, v___x_2536_);
v___x_2545_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2545_, 0, v___x_2543_);
lean_ctor_set(v___x_2545_, 1, v___x_2544_);
v___x_2546_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2545_);
lean_ctor_set(v___x_2546_, 1, v___x_2539_);
v___x_2547_ = l_Lean_instReprExpr_repr(v_body_2534_, v___x_2536_);
v___x_2548_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2546_);
lean_ctor_set(v___x_2548_, 1, v___x_2547_);
v___x_2549_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2548_);
lean_ctor_set(v___x_2549_, 1, v___x_2539_);
v___x_2550_ = l_Lean_instReprBinderInfo_repr(v_binderInfo_2535_, v___x_2536_);
v___x_2551_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2549_);
lean_ctor_set(v___x_2551_, 1, v___x_2550_);
lean_inc(v___y_2538_);
v___x_2552_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2552_, 0, v___y_2538_);
lean_ctor_set(v___x_2552_, 1, v___x_2551_);
v___x_2553_ = 0;
v___x_2554_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2554_, 0, v___x_2552_);
lean_ctor_set_uint8(v___x_2554_, sizeof(void*)*1, v___x_2553_);
v___x_2555_ = l_Repr_addAppParen(v___x_2554_, v_prec_2432_);
return v___x_2555_;
}
}
case 7:
{
lean_object* v_binderName_2559_; lean_object* v_binderType_2560_; lean_object* v_body_2561_; uint8_t v_binderInfo_2562_; lean_object* v___x_2563_; lean_object* v___y_2565_; uint8_t v___x_2583_; 
v_binderName_2559_ = lean_ctor_get(v_x_2431_, 0);
lean_inc(v_binderName_2559_);
v_binderType_2560_ = lean_ctor_get(v_x_2431_, 1);
lean_inc_ref(v_binderType_2560_);
v_body_2561_ = lean_ctor_get(v_x_2431_, 2);
lean_inc_ref(v_body_2561_);
v_binderInfo_2562_ = lean_ctor_get_uint8(v_x_2431_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_x_2431_, 3);
v___x_2563_ = lean_unsigned_to_nat(1024u);
v___x_2583_ = lean_nat_dec_le(v___x_2563_, v_prec_2432_);
if (v___x_2583_ == 0)
{
lean_object* v___x_2584_; 
v___x_2584_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2565_ = v___x_2584_;
goto v___jp_2564_;
}
else
{
lean_object* v___x_2585_; 
v___x_2585_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2565_ = v___x_2585_;
goto v___jp_2564_;
}
v___jp_2564_:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; uint8_t v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2566_ = lean_box(1);
v___x_2567_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__23));
v___x_2568_ = l_Lean_Name_reprPrec(v_binderName_2559_, v___x_2563_);
v___x_2569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2567_);
lean_ctor_set(v___x_2569_, 1, v___x_2568_);
v___x_2570_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2569_);
lean_ctor_set(v___x_2570_, 1, v___x_2566_);
v___x_2571_ = l_Lean_instReprExpr_repr(v_binderType_2560_, v___x_2563_);
v___x_2572_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2570_);
lean_ctor_set(v___x_2572_, 1, v___x_2571_);
v___x_2573_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2573_, 0, v___x_2572_);
lean_ctor_set(v___x_2573_, 1, v___x_2566_);
v___x_2574_ = l_Lean_instReprExpr_repr(v_body_2561_, v___x_2563_);
v___x_2575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2573_);
lean_ctor_set(v___x_2575_, 1, v___x_2574_);
v___x_2576_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
lean_ctor_set(v___x_2576_, 1, v___x_2566_);
v___x_2577_ = l_Lean_instReprBinderInfo_repr(v_binderInfo_2562_, v___x_2563_);
v___x_2578_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2576_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
lean_inc(v___y_2565_);
v___x_2579_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2579_, 0, v___y_2565_);
lean_ctor_set(v___x_2579_, 1, v___x_2578_);
v___x_2580_ = 0;
v___x_2581_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2581_, 0, v___x_2579_);
lean_ctor_set_uint8(v___x_2581_, sizeof(void*)*1, v___x_2580_);
v___x_2582_ = l_Repr_addAppParen(v___x_2581_, v_prec_2432_);
return v___x_2582_;
}
}
case 8:
{
lean_object* v_declName_2586_; lean_object* v_type_2587_; lean_object* v_value_2588_; lean_object* v_body_2589_; uint8_t v_nondep_2590_; lean_object* v___x_2591_; lean_object* v___y_2593_; uint8_t v___x_2614_; 
v_declName_2586_ = lean_ctor_get(v_x_2431_, 0);
lean_inc(v_declName_2586_);
v_type_2587_ = lean_ctor_get(v_x_2431_, 1);
lean_inc_ref(v_type_2587_);
v_value_2588_ = lean_ctor_get(v_x_2431_, 2);
lean_inc_ref(v_value_2588_);
v_body_2589_ = lean_ctor_get(v_x_2431_, 3);
lean_inc_ref(v_body_2589_);
v_nondep_2590_ = lean_ctor_get_uint8(v_x_2431_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_x_2431_, 4);
v___x_2591_ = lean_unsigned_to_nat(1024u);
v___x_2614_ = lean_nat_dec_le(v___x_2591_, v_prec_2432_);
if (v___x_2614_ == 0)
{
lean_object* v___x_2615_; 
v___x_2615_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2593_ = v___x_2615_;
goto v___jp_2592_;
}
else
{
lean_object* v___x_2616_; 
v___x_2616_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2593_ = v___x_2616_;
goto v___jp_2592_;
}
v___jp_2592_:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; uint8_t v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2594_ = lean_box(1);
v___x_2595_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__26));
v___x_2596_ = l_Lean_Name_reprPrec(v_declName_2586_, v___x_2591_);
v___x_2597_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2595_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
v___x_2598_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2597_);
lean_ctor_set(v___x_2598_, 1, v___x_2594_);
v___x_2599_ = l_Lean_instReprExpr_repr(v_type_2587_, v___x_2591_);
v___x_2600_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2598_);
lean_ctor_set(v___x_2600_, 1, v___x_2599_);
v___x_2601_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2600_);
lean_ctor_set(v___x_2601_, 1, v___x_2594_);
v___x_2602_ = l_Lean_instReprExpr_repr(v_value_2588_, v___x_2591_);
v___x_2603_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2603_, 0, v___x_2601_);
lean_ctor_set(v___x_2603_, 1, v___x_2602_);
v___x_2604_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
lean_ctor_set(v___x_2604_, 1, v___x_2594_);
v___x_2605_ = l_Lean_instReprExpr_repr(v_body_2589_, v___x_2591_);
v___x_2606_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2606_, 0, v___x_2604_);
lean_ctor_set(v___x_2606_, 1, v___x_2605_);
v___x_2607_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2607_, 0, v___x_2606_);
lean_ctor_set(v___x_2607_, 1, v___x_2594_);
v___x_2608_ = l_Bool_repr___redArg(v_nondep_2590_);
v___x_2609_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2607_);
lean_ctor_set(v___x_2609_, 1, v___x_2608_);
lean_inc(v___y_2593_);
v___x_2610_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2610_, 0, v___y_2593_);
lean_ctor_set(v___x_2610_, 1, v___x_2609_);
v___x_2611_ = 0;
v___x_2612_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2612_, 0, v___x_2610_);
lean_ctor_set_uint8(v___x_2612_, sizeof(void*)*1, v___x_2611_);
v___x_2613_ = l_Repr_addAppParen(v___x_2612_, v_prec_2432_);
return v___x_2613_;
}
}
case 9:
{
lean_object* v_a_2617_; lean_object* v___y_2619_; lean_object* v___x_2628_; uint8_t v___x_2629_; 
v_a_2617_ = lean_ctor_get(v_x_2431_, 0);
lean_inc_ref(v_a_2617_);
lean_dec_ref_known(v_x_2431_, 1);
v___x_2628_ = lean_unsigned_to_nat(1024u);
v___x_2629_ = lean_nat_dec_le(v___x_2628_, v_prec_2432_);
if (v___x_2629_ == 0)
{
lean_object* v___x_2630_; 
v___x_2630_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2619_ = v___x_2630_;
goto v___jp_2618_;
}
else
{
lean_object* v___x_2631_; 
v___x_2631_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2619_ = v___x_2631_;
goto v___jp_2618_;
}
v___jp_2618_:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; uint8_t v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2620_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__29));
v___x_2621_ = lean_unsigned_to_nat(1024u);
v___x_2622_ = l_Lean_instReprLiteral_repr(v_a_2617_, v___x_2621_);
v___x_2623_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2620_);
lean_ctor_set(v___x_2623_, 1, v___x_2622_);
lean_inc(v___y_2619_);
v___x_2624_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2624_, 0, v___y_2619_);
lean_ctor_set(v___x_2624_, 1, v___x_2623_);
v___x_2625_ = 0;
v___x_2626_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2626_, 0, v___x_2624_);
lean_ctor_set_uint8(v___x_2626_, sizeof(void*)*1, v___x_2625_);
v___x_2627_ = l_Repr_addAppParen(v___x_2626_, v_prec_2432_);
return v___x_2627_;
}
}
case 10:
{
lean_object* v_data_2632_; lean_object* v_expr_2633_; lean_object* v___x_2634_; lean_object* v___y_2636_; uint8_t v___x_2648_; 
v_data_2632_ = lean_ctor_get(v_x_2431_, 0);
lean_inc(v_data_2632_);
v_expr_2633_ = lean_ctor_get(v_x_2431_, 1);
lean_inc_ref(v_expr_2633_);
lean_dec_ref_known(v_x_2431_, 2);
v___x_2634_ = lean_unsigned_to_nat(1024u);
v___x_2648_ = lean_nat_dec_le(v___x_2634_, v_prec_2432_);
if (v___x_2648_ == 0)
{
lean_object* v___x_2649_; 
v___x_2649_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2636_ = v___x_2649_;
goto v___jp_2635_;
}
else
{
lean_object* v___x_2650_; 
v___x_2650_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2636_ = v___x_2650_;
goto v___jp_2635_;
}
v___jp_2635_:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2637_ = lean_box(1);
v___x_2638_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__32));
v___x_2639_ = l_Lean_instReprKVMap_repr___redArg(v_data_2632_);
v___x_2640_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2638_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
v___x_2641_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
lean_ctor_set(v___x_2641_, 1, v___x_2637_);
v___x_2642_ = l_Lean_instReprExpr_repr(v_expr_2633_, v___x_2634_);
v___x_2643_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2641_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
lean_inc(v___y_2636_);
v___x_2644_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___y_2636_);
lean_ctor_set(v___x_2644_, 1, v___x_2643_);
v___x_2645_ = 0;
v___x_2646_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2646_, 0, v___x_2644_);
lean_ctor_set_uint8(v___x_2646_, sizeof(void*)*1, v___x_2645_);
v___x_2647_ = l_Repr_addAppParen(v___x_2646_, v_prec_2432_);
return v___x_2647_;
}
}
default: 
{
lean_object* v_typeName_2651_; lean_object* v_idx_2652_; lean_object* v_struct_2653_; lean_object* v___x_2654_; lean_object* v___y_2656_; uint8_t v___x_2672_; 
v_typeName_2651_ = lean_ctor_get(v_x_2431_, 0);
lean_inc(v_typeName_2651_);
v_idx_2652_ = lean_ctor_get(v_x_2431_, 1);
lean_inc(v_idx_2652_);
v_struct_2653_ = lean_ctor_get(v_x_2431_, 2);
lean_inc_ref(v_struct_2653_);
lean_dec_ref_known(v_x_2431_, 3);
v___x_2654_ = lean_unsigned_to_nat(1024u);
v___x_2672_ = lean_nat_dec_le(v___x_2654_, v_prec_2432_);
if (v___x_2672_ == 0)
{
lean_object* v___x_2673_; 
v___x_2673_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__3, &l_Lean_instReprLiteral_repr___closed__3_once, _init_l_Lean_instReprLiteral_repr___closed__3);
v___y_2656_ = v___x_2673_;
goto v___jp_2655_;
}
else
{
lean_object* v___x_2674_; 
v___x_2674_ = lean_obj_once(&l_Lean_instReprLiteral_repr___closed__4, &l_Lean_instReprLiteral_repr___closed__4_once, _init_l_Lean_instReprLiteral_repr___closed__4);
v___y_2656_ = v___x_2674_;
goto v___jp_2655_;
}
v___jp_2655_:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; uint8_t v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2657_ = lean_box(1);
v___x_2658_ = ((lean_object*)(l_Lean_instReprExpr_repr___closed__35));
v___x_2659_ = l_Lean_Name_reprPrec(v_typeName_2651_, v___x_2654_);
v___x_2660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2660_, 0, v___x_2658_);
lean_ctor_set(v___x_2660_, 1, v___x_2659_);
v___x_2661_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2660_);
lean_ctor_set(v___x_2661_, 1, v___x_2657_);
v___x_2662_ = l_Nat_reprFast(v_idx_2652_);
v___x_2663_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2662_);
v___x_2664_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2661_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
v___x_2665_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2664_);
lean_ctor_set(v___x_2665_, 1, v___x_2657_);
v___x_2666_ = l_Lean_instReprExpr_repr(v_struct_2653_, v___x_2654_);
v___x_2667_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2665_);
lean_ctor_set(v___x_2667_, 1, v___x_2666_);
lean_inc(v___y_2656_);
v___x_2668_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2668_, 0, v___y_2656_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
v___x_2669_ = 0;
v___x_2670_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2670_, 0, v___x_2668_);
lean_ctor_set_uint8(v___x_2670_, sizeof(void*)*1, v___x_2669_);
v___x_2671_ = l_Repr_addAppParen(v___x_2670_, v_prec_2432_);
return v___x_2671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprExpr_repr___boxed(lean_object* v_x_2675_, lean_object* v_prec_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Lean_instReprExpr_repr(v_x_2675_, v_prec_2676_);
lean_dec(v_prec_2676_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr___at___00Lean_instReprExpr_repr_spec__0_spec__1(lean_object* v_a_2678_){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = lean_nat_to_int(v_a_2678_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0(lean_object* v_a_2680_, lean_object* v_n_2681_){
_start:
{
lean_object* v___x_2682_; 
v___x_2682_ = l_List_repr___at___00Lean_instReprExpr_repr_spec__0___redArg(v_a_2680_);
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprExpr_repr_spec__0___boxed(lean_object* v_a_2683_, lean_object* v_n_2684_){
_start:
{
lean_object* v_res_2685_; 
v_res_2685_ = l_List_repr___at___00Lean_instReprExpr_repr_spec__0(v_a_2683_, v_n_2684_);
lean_dec(v_n_2684_);
return v_res_2685_;
}
}
static lean_object* _init_l_Lean_instInhabitedExpr___closed__2(void){
_start:
{
lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2691_ = lean_box(0);
v___x_2692_ = ((lean_object*)(l_Lean_instInhabitedExpr___closed__1));
v___x_2693_ = l_Lean_Expr_const___override(v___x_2692_, v___x_2691_);
return v___x_2693_;
}
}
static lean_object* _init_l_Lean_instInhabitedExpr(void){
_start:
{
lean_object* v___x_2694_; 
v___x_2694_ = lean_obj_once(&l_Lean_instInhabitedExpr___closed__2, &l_Lean_instInhabitedExpr___closed__2_once, _init_l_Lean_instInhabitedExpr___closed__2);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ctorName(lean_object* v_x_2707_){
_start:
{
switch(lean_obj_tag(v_x_2707_))
{
case 0:
{
lean_object* v___x_2708_; 
v___x_2708_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__0));
return v___x_2708_;
}
case 1:
{
lean_object* v___x_2709_; 
v___x_2709_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__1));
return v___x_2709_;
}
case 2:
{
lean_object* v___x_2710_; 
v___x_2710_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__2));
return v___x_2710_;
}
case 3:
{
lean_object* v___x_2711_; 
v___x_2711_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__3));
return v___x_2711_;
}
case 4:
{
lean_object* v___x_2712_; 
v___x_2712_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__4));
return v___x_2712_;
}
case 5:
{
lean_object* v___x_2713_; 
v___x_2713_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__5));
return v___x_2713_;
}
case 6:
{
lean_object* v___x_2714_; 
v___x_2714_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__6));
return v___x_2714_;
}
case 7:
{
lean_object* v___x_2715_; 
v___x_2715_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__7));
return v___x_2715_;
}
case 8:
{
lean_object* v___x_2716_; 
v___x_2716_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__8));
return v___x_2716_;
}
case 9:
{
lean_object* v___x_2717_; 
v___x_2717_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__9));
return v___x_2717_;
}
case 10:
{
lean_object* v___x_2718_; 
v___x_2718_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__10));
return v___x_2718_;
}
default: 
{
lean_object* v___x_2719_; 
v___x_2719_ = ((lean_object*)(l_Lean_Expr_ctorName___closed__11));
return v___x_2719_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ctorName___boxed(lean_object* v_x_2720_){
_start:
{
lean_object* v_res_2721_; 
v_res_2721_ = l_Lean_Expr_ctorName(v_x_2720_);
lean_dec_ref(v_x_2720_);
return v_res_2721_;
}
}
LEAN_EXPORT uint64_t l_Lean_Expr_hash(lean_object* v_e_2722_){
_start:
{
uint64_t v___x_2723_; uint64_t v___x_2724_; 
v___x_2723_ = lean_expr_data(v_e_2722_);
v___x_2724_ = l_Lean_Expr_Data_hash(v___x_2723_);
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hash___boxed(lean_object* v_e_2725_){
_start:
{
uint64_t v_res_2726_; lean_object* v_r_2727_; 
v_res_2726_ = l_Lean_Expr_hash(v_e_2725_);
lean_dec_ref(v_e_2725_);
v_r_2727_ = lean_box_uint64(v_res_2726_);
return v_r_2727_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasFVar(lean_object* v_e_2730_){
_start:
{
uint64_t v___x_2731_; uint8_t v___x_2732_; 
v___x_2731_ = lean_expr_data(v_e_2730_);
v___x_2732_ = l_Lean_Expr_Data_hasFVar(v___x_2731_);
return v___x_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasFVar___boxed(lean_object* v_e_2733_){
_start:
{
uint8_t v_res_2734_; lean_object* v_r_2735_; 
v_res_2734_ = l_Lean_Expr_hasFVar(v_e_2733_);
lean_dec_ref(v_e_2733_);
v_r_2735_ = lean_box(v_res_2734_);
return v_r_2735_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasExprMVar(lean_object* v_e_2736_){
_start:
{
uint64_t v___x_2737_; uint8_t v___x_2738_; 
v___x_2737_ = lean_expr_data(v_e_2736_);
v___x_2738_ = l_Lean_Expr_Data_hasExprMVar(v___x_2737_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasExprMVar___boxed(lean_object* v_e_2739_){
_start:
{
uint8_t v_res_2740_; lean_object* v_r_2741_; 
v_res_2740_ = l_Lean_Expr_hasExprMVar(v_e_2739_);
lean_dec_ref(v_e_2739_);
v_r_2741_ = lean_box(v_res_2740_);
return v_r_2741_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasLevelMVar(lean_object* v_e_2742_){
_start:
{
uint64_t v___x_2743_; uint8_t v___x_2744_; 
v___x_2743_ = lean_expr_data(v_e_2742_);
v___x_2744_ = l_Lean_Expr_Data_hasLevelMVar(v___x_2743_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasLevelMVar___boxed(lean_object* v_e_2745_){
_start:
{
uint8_t v_res_2746_; lean_object* v_r_2747_; 
v_res_2746_ = l_Lean_Expr_hasLevelMVar(v_e_2745_);
lean_dec_ref(v_e_2745_);
v_r_2747_ = lean_box(v_res_2746_);
return v_r_2747_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasMVar(lean_object* v_e_2748_){
_start:
{
uint64_t v_d_2749_; uint8_t v___x_2750_; 
v_d_2749_ = lean_expr_data(v_e_2748_);
v___x_2750_ = l_Lean_Expr_Data_hasExprMVar(v_d_2749_);
if (v___x_2750_ == 0)
{
uint8_t v___x_2751_; 
v___x_2751_ = l_Lean_Expr_Data_hasLevelMVar(v_d_2749_);
return v___x_2751_;
}
else
{
return v___x_2750_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasMVar___boxed(lean_object* v_e_2752_){
_start:
{
uint8_t v_res_2753_; lean_object* v_r_2754_; 
v_res_2753_ = l_Lean_Expr_hasMVar(v_e_2752_);
lean_dec_ref(v_e_2752_);
v_r_2754_ = lean_box(v_res_2753_);
return v_r_2754_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasLevelParam(lean_object* v_e_2755_){
_start:
{
uint64_t v___x_2756_; uint8_t v___x_2757_; 
v___x_2756_ = lean_expr_data(v_e_2755_);
v___x_2757_ = l_Lean_Expr_Data_hasLevelParam(v___x_2756_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasLevelParam___boxed(lean_object* v_e_2758_){
_start:
{
uint8_t v_res_2759_; lean_object* v_r_2760_; 
v_res_2759_ = l_Lean_Expr_hasLevelParam(v_e_2758_);
lean_dec_ref(v_e_2758_);
v_r_2760_ = lean_box(v_res_2759_);
return v_r_2760_;
}
}
LEAN_EXPORT uint32_t l_Lean_Expr_approxDepth(lean_object* v_e_2761_){
_start:
{
uint64_t v___x_2762_; uint8_t v___x_2763_; uint32_t v___x_2764_; 
v___x_2762_ = lean_expr_data(v_e_2761_);
v___x_2763_ = l_Lean_Expr_Data_approxDepth(v___x_2762_);
v___x_2764_ = lean_uint8_to_uint32(v___x_2763_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_approxDepth___boxed(lean_object* v_e_2765_){
_start:
{
uint32_t v_res_2766_; lean_object* v_r_2767_; 
v_res_2766_ = l_Lean_Expr_approxDepth(v_e_2765_);
lean_dec_ref(v_e_2765_);
v_r_2767_ = lean_box_uint32(v_res_2766_);
return v_r_2767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_looseBVarRange(lean_object* v_e_2768_){
_start:
{
uint64_t v___x_2769_; uint32_t v___x_2770_; lean_object* v___x_2771_; 
v___x_2769_ = lean_expr_data(v_e_2768_);
v___x_2770_ = l_Lean_Expr_Data_looseBVarRange(v___x_2769_);
v___x_2771_ = lean_uint32_to_nat(v___x_2770_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_looseBVarRange___boxed(lean_object* v_e_2772_){
_start:
{
lean_object* v_res_2773_; 
v_res_2773_ = l_Lean_Expr_looseBVarRange(v_e_2772_);
lean_dec_ref(v_e_2772_);
return v_res_2773_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_binderInfo(lean_object* v_e_2774_){
_start:
{
switch(lean_obj_tag(v_e_2774_))
{
case 7:
{
uint8_t v_binderInfo_2775_; 
v_binderInfo_2775_ = lean_ctor_get_uint8(v_e_2774_, sizeof(void*)*3 + 8);
return v_binderInfo_2775_;
}
case 6:
{
uint8_t v_binderInfo_2776_; 
v_binderInfo_2776_ = lean_ctor_get_uint8(v_e_2774_, sizeof(void*)*3 + 8);
return v_binderInfo_2776_;
}
default: 
{
uint8_t v___x_2777_; 
v___x_2777_ = 0;
return v___x_2777_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_binderInfo___boxed(lean_object* v_e_2778_){
_start:
{
uint8_t v_res_2779_; lean_object* v_r_2780_; 
v_res_2779_ = l_Lean_Expr_binderInfo(v_e_2778_);
lean_dec_ref(v_e_2778_);
v_r_2780_ = lean_box(v_res_2779_);
return v_r_2780_;
}
}
LEAN_EXPORT uint64_t lean_expr_hash(lean_object* v_a_2781_){
_start:
{
uint64_t v___x_2782_; 
v___x_2782_ = l_Lean_Expr_hash(v_a_2781_);
lean_dec_ref(v_a_2781_);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hashEx___boxed(lean_object* v_a_2783_){
_start:
{
uint64_t v_res_2784_; lean_object* v_r_2785_; 
v_res_2784_ = lean_expr_hash(v_a_2783_);
v_r_2785_ = lean_box_uint64(v_res_2784_);
return v_r_2785_;
}
}
LEAN_EXPORT uint8_t lean_expr_has_fvar(lean_object* v_e_2786_){
_start:
{
uint8_t v___x_2787_; 
v___x_2787_ = l_Lean_Expr_hasFVar(v_e_2786_);
lean_dec_ref(v_e_2786_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasFVarEx___boxed(lean_object* v_e_2788_){
_start:
{
uint8_t v_res_2789_; lean_object* v_r_2790_; 
v_res_2789_ = lean_expr_has_fvar(v_e_2788_);
v_r_2790_ = lean_box(v_res_2789_);
return v_r_2790_;
}
}
LEAN_EXPORT uint8_t lean_expr_has_expr_mvar(lean_object* v_e_2791_){
_start:
{
uint8_t v___x_2792_; 
v___x_2792_ = l_Lean_Expr_hasExprMVar(v_e_2791_);
lean_dec_ref(v_e_2791_);
return v___x_2792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasExprMVarEx___boxed(lean_object* v_e_2793_){
_start:
{
uint8_t v_res_2794_; lean_object* v_r_2795_; 
v_res_2794_ = lean_expr_has_expr_mvar(v_e_2793_);
v_r_2795_ = lean_box(v_res_2794_);
return v_r_2795_;
}
}
LEAN_EXPORT uint8_t lean_expr_has_level_mvar(lean_object* v_e_2796_){
_start:
{
uint8_t v___x_2797_; 
v___x_2797_ = l_Lean_Expr_hasLevelMVar(v_e_2796_);
lean_dec_ref(v_e_2796_);
return v___x_2797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasLevelMVarEx___boxed(lean_object* v_e_2798_){
_start:
{
uint8_t v_res_2799_; lean_object* v_r_2800_; 
v_res_2799_ = lean_expr_has_level_mvar(v_e_2798_);
v_r_2800_ = lean_box(v_res_2799_);
return v_r_2800_;
}
}
LEAN_EXPORT uint8_t lean_expr_has_level_param(lean_object* v_e_2801_){
_start:
{
uint8_t v___x_2802_; 
v___x_2802_ = l_Lean_Expr_hasLevelParam(v_e_2801_);
lean_dec_ref(v_e_2801_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasLevelParamEx___boxed(lean_object* v_e_2803_){
_start:
{
uint8_t v_res_2804_; lean_object* v_r_2805_; 
v_res_2804_ = lean_expr_has_level_param(v_e_2803_);
v_r_2805_ = lean_box(v_res_2804_);
return v_r_2805_;
}
}
LEAN_EXPORT uint32_t lean_expr_loose_bvar_range(lean_object* v_e_2806_){
_start:
{
uint64_t v___x_2807_; uint32_t v___x_2808_; 
v___x_2807_ = lean_expr_data(v_e_2806_);
lean_dec_ref(v_e_2806_);
v___x_2808_ = l_Lean_Expr_Data_looseBVarRange(v___x_2807_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_looseBVarRangeEx___boxed(lean_object* v_e_2809_){
_start:
{
uint32_t v_res_2810_; lean_object* v_r_2811_; 
v_res_2810_ = lean_expr_loose_bvar_range(v_e_2809_);
v_r_2811_ = lean_box_uint32(v_res_2810_);
return v_r_2811_;
}
}
LEAN_EXPORT uint8_t lean_expr_binder_info(lean_object* v_e_2812_){
_start:
{
uint8_t v___x_2813_; 
v___x_2813_ = l_Lean_Expr_binderInfo(v_e_2812_);
lean_dec_ref(v_e_2812_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_binderInfoEx___boxed(lean_object* v_e_2814_){
_start:
{
uint8_t v_res_2815_; lean_object* v_r_2816_; 
v_res_2815_ = lean_expr_binder_info(v_e_2814_);
v_r_2816_ = lean_box(v_res_2815_);
return v_r_2816_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConst(lean_object* v_declName_2817_, lean_object* v_us_2818_){
_start:
{
lean_object* v___x_2819_; 
v___x_2819_ = l_Lean_Expr_const___override(v_declName_2817_, v_us_2818_);
return v___x_2819_;
}
}
static lean_object* _init_l_Lean_Literal_type___closed__2(void){
_start:
{
lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2823_ = lean_box(0);
v___x_2824_ = ((lean_object*)(l_Lean_Literal_type___closed__1));
v___x_2825_ = l_Lean_Expr_const___override(v___x_2824_, v___x_2823_);
return v___x_2825_;
}
}
static lean_object* _init_l_Lean_Literal_type___closed__5(void){
_start:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2829_ = lean_box(0);
v___x_2830_ = ((lean_object*)(l_Lean_Literal_type___closed__4));
v___x_2831_ = l_Lean_Expr_const___override(v___x_2830_, v___x_2829_);
return v___x_2831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_type(lean_object* v_x_2832_){
_start:
{
if (lean_obj_tag(v_x_2832_) == 0)
{
lean_object* v___x_2833_; 
v___x_2833_ = lean_obj_once(&l_Lean_Literal_type___closed__2, &l_Lean_Literal_type___closed__2_once, _init_l_Lean_Literal_type___closed__2);
return v___x_2833_;
}
else
{
lean_object* v___x_2834_; 
v___x_2834_ = lean_obj_once(&l_Lean_Literal_type___closed__5, &l_Lean_Literal_type___closed__5_once, _init_l_Lean_Literal_type___closed__5);
return v___x_2834_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Literal_type___boxed(lean_object* v_x_2835_){
_start:
{
lean_object* v_res_2836_; 
v_res_2836_ = l_Lean_Literal_type(v_x_2835_);
lean_dec_ref(v_x_2835_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* lean_lit_type(lean_object* v_a_2837_){
_start:
{
lean_object* v___x_2838_; 
v___x_2838_ = l_Lean_Literal_type(v_a_2837_);
lean_dec_ref(v_a_2837_);
return v___x_2838_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBVar(lean_object* v_idx_2839_){
_start:
{
lean_object* v___x_2840_; 
v___x_2840_ = l_Lean_Expr_bvar___override(v_idx_2839_);
return v___x_2840_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkSort(lean_object* v_u_2841_){
_start:
{
lean_object* v___x_2842_; 
v___x_2842_ = l_Lean_Expr_sort___override(v_u_2841_);
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFVar(lean_object* v_fvarId_2843_){
_start:
{
lean_object* v___x_2844_; 
v___x_2844_ = l_Lean_Expr_fvar___override(v_fvarId_2843_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMVar(lean_object* v_mvarId_2845_){
_start:
{
lean_object* v___x_2846_; 
v___x_2846_ = l_Lean_Expr_mvar___override(v_mvarId_2845_);
return v___x_2846_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMData(lean_object* v_m_2847_, lean_object* v_e_2848_){
_start:
{
lean_object* v___x_2849_; 
v___x_2849_ = l_Lean_Expr_mdata___override(v_m_2847_, v_e_2848_);
return v___x_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkProj(lean_object* v_structName_2850_, lean_object* v_idx_2851_, lean_object* v_struct_2852_){
_start:
{
lean_object* v___x_2853_; 
v___x_2853_ = l_Lean_Expr_proj___override(v_structName_2850_, v_idx_2851_, v_struct_2852_);
return v___x_2853_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkApp(lean_object* v_f_2854_, lean_object* v_a_2855_){
_start:
{
lean_object* v___x_2856_; 
v___x_2856_ = l_Lean_Expr_app___override(v_f_2854_, v_a_2855_);
return v___x_2856_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLambda(lean_object* v_x_2857_, uint8_t v_bi_2858_, lean_object* v_t_2859_, lean_object* v_b_2860_){
_start:
{
lean_object* v___x_2861_; 
v___x_2861_ = l_Lean_Expr_lam___override(v_x_2857_, v_t_2859_, v_b_2860_, v_bi_2858_);
return v___x_2861_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLambda___boxed(lean_object* v_x_2862_, lean_object* v_bi_2863_, lean_object* v_t_2864_, lean_object* v_b_2865_){
_start:
{
uint8_t v_bi_boxed_2866_; lean_object* v_res_2867_; 
v_bi_boxed_2866_ = lean_unbox(v_bi_2863_);
v_res_2867_ = l_Lean_mkLambda(v_x_2862_, v_bi_boxed_2866_, v_t_2864_, v_b_2865_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkForall(lean_object* v_x_2868_, uint8_t v_bi_2869_, lean_object* v_t_2870_, lean_object* v_b_2871_){
_start:
{
lean_object* v___x_2872_; 
v___x_2872_ = l_Lean_Expr_forallE___override(v_x_2868_, v_t_2870_, v_b_2871_, v_bi_2869_);
return v___x_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkForall___boxed(lean_object* v_x_2873_, lean_object* v_bi_2874_, lean_object* v_t_2875_, lean_object* v_b_2876_){
_start:
{
uint8_t v_bi_boxed_2877_; lean_object* v_res_2878_; 
v_bi_boxed_2877_ = lean_unbox(v_bi_2874_);
v_res_2878_ = l_Lean_mkForall(v_x_2873_, v_bi_boxed_2877_, v_t_2875_, v_b_2876_);
return v_res_2878_;
}
}
static lean_object* _init_l_Lean_mkSimpleThunkType___closed__4(void){
_start:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2885_ = lean_box(0);
v___x_2886_ = ((lean_object*)(l_Lean_mkSimpleThunkType___closed__3));
v___x_2887_ = l_Lean_Expr_const___override(v___x_2886_, v___x_2885_);
return v___x_2887_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkSimpleThunkType(lean_object* v_type_2888_){
_start:
{
lean_object* v___x_2889_; uint8_t v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2889_ = ((lean_object*)(l_Lean_mkSimpleThunkType___closed__1));
v___x_2890_ = 0;
v___x_2891_ = lean_obj_once(&l_Lean_mkSimpleThunkType___closed__4, &l_Lean_mkSimpleThunkType___closed__4_once, _init_l_Lean_mkSimpleThunkType___closed__4);
v___x_2892_ = l_Lean_Expr_forallE___override(v___x_2889_, v___x_2891_, v_type_2888_, v___x_2890_);
return v___x_2892_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkSimpleThunk(lean_object* v_type_2893_){
_start:
{
lean_object* v___x_2894_; uint8_t v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2894_ = ((lean_object*)(l_Lean_mkSimpleThunkType___closed__1));
v___x_2895_ = 0;
v___x_2896_ = lean_obj_once(&l_Lean_mkSimpleThunkType___closed__4, &l_Lean_mkSimpleThunkType___closed__4_once, _init_l_Lean_mkSimpleThunkType___closed__4);
v___x_2897_ = l_Lean_Expr_lam___override(v___x_2894_, v___x_2896_, v_type_2893_, v___x_2895_);
return v___x_2897_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLet(lean_object* v_x_2898_, lean_object* v_t_2899_, lean_object* v_v_2900_, lean_object* v_b_2901_, uint8_t v_nondep_2902_){
_start:
{
lean_object* v___x_2903_; 
v___x_2903_ = l_Lean_Expr_letE___override(v_x_2898_, v_t_2899_, v_v_2900_, v_b_2901_, v_nondep_2902_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLet___boxed(lean_object* v_x_2904_, lean_object* v_t_2905_, lean_object* v_v_2906_, lean_object* v_b_2907_, lean_object* v_nondep_2908_){
_start:
{
uint8_t v_nondep_boxed_2909_; lean_object* v_res_2910_; 
v_nondep_boxed_2909_ = lean_unbox(v_nondep_2908_);
v_res_2910_ = l_Lean_mkLet(v_x_2904_, v_t_2905_, v_v_2906_, v_b_2907_, v_nondep_boxed_2909_);
return v_res_2910_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHave(lean_object* v_x_2911_, lean_object* v_t_2912_, lean_object* v_v_2913_, lean_object* v_b_2914_){
_start:
{
uint8_t v___x_2915_; lean_object* v___x_2916_; 
v___x_2915_ = 1;
v___x_2916_ = l_Lean_Expr_letE___override(v_x_2911_, v_t_2912_, v_v_2913_, v_b_2914_, v___x_2915_);
return v___x_2916_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAppB(lean_object* v_f_2917_, lean_object* v_a_2918_, lean_object* v_b_2919_){
_start:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2920_ = l_Lean_Expr_app___override(v_f_2917_, v_a_2918_);
v___x_2921_ = l_Lean_Expr_app___override(v___x_2920_, v_b_2919_);
return v___x_2921_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkApp2(lean_object* v_f_2922_, lean_object* v_a_2923_, lean_object* v_b_2924_){
_start:
{
lean_object* v___x_2925_; 
v___x_2925_ = l_Lean_mkAppB(v_f_2922_, v_a_2923_, v_b_2924_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkApp3(lean_object* v_f_2926_, lean_object* v_a_2927_, lean_object* v_b_2928_, lean_object* v_c_2929_){
_start:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; 
v___x_2930_ = l_Lean_mkAppB(v_f_2926_, v_a_2927_, v_b_2928_);
v___x_2931_ = l_Lean_Expr_app___override(v___x_2930_, v_c_2929_);
return v___x_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkApp4(lean_object* v_f_2932_, lean_object* v_a_2933_, lean_object* v_b_2934_, lean_object* v_c_2935_, lean_object* v_d_2936_){
_start:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2937_ = l_Lean_mkAppB(v_f_2932_, v_a_2933_, v_b_2934_);
v___x_2938_ = l_Lean_mkAppB(v___x_2937_, v_c_2935_, v_d_2936_);
return v___x_2938_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkApp5(lean_object* v_f_2939_, lean_object* v_a_2940_, lean_object* v_b_2941_, lean_object* v_c_2942_, lean_object* v_d_2943_, lean_object* v_e_2944_){
_start:
{
lean_object* v___x_2945_; lean_object* v___x_2946_; 
v___x_2945_ = l_Lean_mkApp4(v_f_2939_, v_a_2940_, v_b_2941_, v_c_2942_, v_d_2943_);
v___x_2946_ = l_Lean_Expr_app___override(v___x_2945_, v_e_2944_);
return v___x_2946_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkApp6(lean_object* v_f_2947_, lean_object* v_a_2948_, lean_object* v_b_2949_, lean_object* v_c_2950_, lean_object* v_d_2951_, lean_object* v_e_u2081_2952_, lean_object* v_e_u2082_2953_){
_start:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = l_Lean_mkApp4(v_f_2947_, v_a_2948_, v_b_2949_, v_c_2950_, v_d_2951_);
v___x_2955_ = l_Lean_mkAppB(v___x_2954_, v_e_u2081_2952_, v_e_u2082_2953_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkApp7(lean_object* v_f_2956_, lean_object* v_a_2957_, lean_object* v_b_2958_, lean_object* v_c_2959_, lean_object* v_d_2960_, lean_object* v_e_u2081_2961_, lean_object* v_e_u2082_2962_, lean_object* v_e_u2083_2963_){
_start:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2964_ = l_Lean_mkApp4(v_f_2956_, v_a_2957_, v_b_2958_, v_c_2959_, v_d_2960_);
v___x_2965_ = l_Lean_mkApp3(v___x_2964_, v_e_u2081_2961_, v_e_u2082_2962_, v_e_u2083_2963_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkApp8(lean_object* v_f_2966_, lean_object* v_a_2967_, lean_object* v_b_2968_, lean_object* v_c_2969_, lean_object* v_d_2970_, lean_object* v_e_u2081_2971_, lean_object* v_e_u2082_2972_, lean_object* v_e_u2083_2973_, lean_object* v_e_u2084_2974_){
_start:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2975_ = l_Lean_mkApp4(v_f_2966_, v_a_2967_, v_b_2968_, v_c_2969_, v_d_2970_);
v___x_2976_ = l_Lean_mkApp4(v___x_2975_, v_e_u2081_2971_, v_e_u2082_2972_, v_e_u2083_2973_, v_e_u2084_2974_);
return v___x_2976_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkApp9(lean_object* v_f_2977_, lean_object* v_a_2978_, lean_object* v_b_2979_, lean_object* v_c_2980_, lean_object* v_d_2981_, lean_object* v_e_u2081_2982_, lean_object* v_e_u2082_2983_, lean_object* v_e_u2083_2984_, lean_object* v_e_u2084_2985_, lean_object* v_e_u2085_2986_){
_start:
{
lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2987_ = l_Lean_mkApp4(v_f_2977_, v_a_2978_, v_b_2979_, v_c_2980_, v_d_2981_);
v___x_2988_ = l_Lean_mkApp5(v___x_2987_, v_e_u2081_2982_, v_e_u2082_2983_, v_e_u2083_2984_, v_e_u2084_2985_, v_e_u2085_2986_);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkApp10(lean_object* v_f_2989_, lean_object* v_a_2990_, lean_object* v_b_2991_, lean_object* v_c_2992_, lean_object* v_d_2993_, lean_object* v_e_u2081_2994_, lean_object* v_e_u2082_2995_, lean_object* v_e_u2083_2996_, lean_object* v_e_u2084_2997_, lean_object* v_e_u2085_2998_, lean_object* v_e_u2086_2999_){
_start:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_3000_ = l_Lean_mkApp4(v_f_2989_, v_a_2990_, v_b_2991_, v_c_2992_, v_d_2993_);
v___x_3001_ = l_Lean_mkApp6(v___x_3000_, v_e_u2081_2994_, v_e_u2082_2995_, v_e_u2083_2996_, v_e_u2084_2997_, v_e_u2085_2998_, v_e_u2086_2999_);
return v___x_3001_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLit(lean_object* v_l_3002_){
_start:
{
lean_object* v___x_3003_; 
v___x_3003_ = l_Lean_Expr_lit___override(v_l_3002_);
return v___x_3003_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkRawNatLit(lean_object* v_n_3004_){
_start:
{
lean_object* v___x_3005_; lean_object* v___x_3006_; 
v___x_3005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3005_, 0, v_n_3004_);
v___x_3006_ = l_Lean_Expr_lit___override(v___x_3005_);
return v___x_3006_;
}
}
static lean_object* _init_l_Lean_mkInstOfNatNat___closed__2(void){
_start:
{
lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3010_ = lean_box(0);
v___x_3011_ = ((lean_object*)(l_Lean_mkInstOfNatNat___closed__1));
v___x_3012_ = l_Lean_Expr_const___override(v___x_3011_, v___x_3010_);
return v___x_3012_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkInstOfNatNat(lean_object* v_n_3013_){
_start:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; 
v___x_3014_ = lean_obj_once(&l_Lean_mkInstOfNatNat___closed__2, &l_Lean_mkInstOfNatNat___closed__2_once, _init_l_Lean_mkInstOfNatNat___closed__2);
v___x_3015_ = l_Lean_Expr_app___override(v___x_3014_, v_n_3013_);
return v___x_3015_;
}
}
static lean_object* _init_l_Lean_mkNatLitCore___closed__3(void){
_start:
{
lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3021_ = lean_box(0);
v___x_3022_ = l_unsafeCast___redArg(v___x_3021_);
return v___x_3022_;
}
}
static lean_object* _init_l_Lean_mkNatLitCore___closed__4(void){
_start:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3023_ = lean_box(0);
v___x_3024_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__3, &l_Lean_mkNatLitCore___closed__3_once, _init_l_Lean_mkNatLitCore___closed__3);
v___x_3025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3024_);
lean_ctor_set(v___x_3025_, 1, v___x_3023_);
return v___x_3025_;
}
}
static lean_object* _init_l_Lean_mkNatLitCore___closed__5(void){
_start:
{
lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3026_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__4, &l_Lean_mkNatLitCore___closed__4_once, _init_l_Lean_mkNatLitCore___closed__4);
v___x_3027_ = ((lean_object*)(l_Lean_mkNatLitCore___closed__2));
v___x_3028_ = l_Lean_Expr_const___override(v___x_3027_, v___x_3026_);
return v___x_3028_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNatLitCore(lean_object* v_n_3029_){
_start:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3030_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__5, &l_Lean_mkNatLitCore___closed__5_once, _init_l_Lean_mkNatLitCore___closed__5);
v___x_3031_ = lean_obj_once(&l_Lean_Literal_type___closed__2, &l_Lean_Literal_type___closed__2_once, _init_l_Lean_Literal_type___closed__2);
lean_inc_ref(v_n_3029_);
v___x_3032_ = l_Lean_mkInstOfNatNat(v_n_3029_);
v___x_3033_ = l_Lean_mkApp3(v___x_3030_, v___x_3031_, v_n_3029_, v___x_3032_);
return v___x_3033_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNatLit(lean_object* v_n_3034_){
_start:
{
lean_object* v___x_3035_; lean_object* v___x_3036_; 
v___x_3035_ = l_Lean_mkRawNatLit(v_n_3034_);
v___x_3036_ = l_Lean_mkNatLitCore(v___x_3035_);
return v___x_3036_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStrLit(lean_object* v_s_3037_){
_start:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; 
v___x_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3038_, 0, v_s_3037_);
v___x_3039_ = l_Lean_Expr_lit___override(v___x_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_bvar(lean_object* v_idx_3040_){
_start:
{
lean_object* v___x_3041_; 
v___x_3041_ = l_Lean_Expr_bvar___override(v_idx_3040_);
return v___x_3041_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_fvar(lean_object* v_fvarId_3042_){
_start:
{
lean_object* v___x_3043_; 
v___x_3043_ = l_Lean_Expr_fvar___override(v_fvarId_3042_);
return v___x_3043_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_mvar(lean_object* v_mvarId_3044_){
_start:
{
lean_object* v___x_3045_; 
v___x_3045_ = l_Lean_Expr_mvar___override(v_mvarId_3044_);
return v___x_3045_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_sort(lean_object* v_u_3046_){
_start:
{
lean_object* v___x_3047_; 
v___x_3047_ = l_Lean_Expr_sort___override(v_u_3046_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_const(lean_object* v_c_3048_, lean_object* v_lvls_3049_){
_start:
{
lean_object* v___x_3050_; 
v___x_3050_ = l_Lean_Expr_const___override(v_c_3048_, v_lvls_3049_);
return v___x_3050_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_app(lean_object* v_f_3051_, lean_object* v_a_3052_){
_start:
{
lean_object* v___x_3053_; 
v___x_3053_ = l_Lean_Expr_app___override(v_f_3051_, v_a_3052_);
return v___x_3053_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_lambda(lean_object* v_n_3054_, lean_object* v_d_3055_, lean_object* v_b_3056_, uint8_t v_bi_3057_){
_start:
{
lean_object* v___x_3058_; 
v___x_3058_ = l_Lean_Expr_lam___override(v_n_3054_, v_d_3055_, v_b_3056_, v_bi_3057_);
return v___x_3058_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLambdaEx___boxed(lean_object* v_n_3059_, lean_object* v_d_3060_, lean_object* v_b_3061_, lean_object* v_bi_3062_){
_start:
{
uint8_t v_bi_boxed_3063_; lean_object* v_res_3064_; 
v_bi_boxed_3063_ = lean_unbox(v_bi_3062_);
v_res_3064_ = lean_expr_mk_lambda(v_n_3059_, v_d_3060_, v_b_3061_, v_bi_boxed_3063_);
return v_res_3064_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_forall(lean_object* v_n_3065_, lean_object* v_d_3066_, lean_object* v_b_3067_, uint8_t v_bi_3068_){
_start:
{
lean_object* v___x_3069_; 
v___x_3069_ = l_Lean_Expr_forallE___override(v_n_3065_, v_d_3066_, v_b_3067_, v_bi_3068_);
return v___x_3069_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkForallEx___boxed(lean_object* v_n_3070_, lean_object* v_d_3071_, lean_object* v_b_3072_, lean_object* v_bi_3073_){
_start:
{
uint8_t v_bi_boxed_3074_; lean_object* v_res_3075_; 
v_bi_boxed_3074_ = lean_unbox(v_bi_3073_);
v_res_3075_ = lean_expr_mk_forall(v_n_3070_, v_d_3071_, v_b_3072_, v_bi_boxed_3074_);
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_let(lean_object* v_n_3076_, lean_object* v_t_3077_, lean_object* v_v_3078_, lean_object* v_b_3079_, uint8_t v_nondep_3080_){
_start:
{
lean_object* v___x_3081_; 
v___x_3081_ = l_Lean_Expr_letE___override(v_n_3076_, v_t_3077_, v_v_3078_, v_b_3079_, v_nondep_3080_);
return v___x_3081_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLetEx___boxed(lean_object* v_n_3082_, lean_object* v_t_3083_, lean_object* v_v_3084_, lean_object* v_b_3085_, lean_object* v_nondep_3086_){
_start:
{
uint8_t v_nondep_boxed_3087_; lean_object* v_res_3088_; 
v_nondep_boxed_3087_ = lean_unbox(v_nondep_3086_);
v_res_3088_ = lean_expr_mk_let(v_n_3082_, v_t_3083_, v_v_3084_, v_b_3085_, v_nondep_boxed_3087_);
return v_res_3088_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_lit(lean_object* v_l_3089_){
_start:
{
lean_object* v___x_3090_; 
v___x_3090_ = l_Lean_Expr_lit___override(v_l_3089_);
return v___x_3090_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_mdata(lean_object* v_m_3091_, lean_object* v_e_3092_){
_start:
{
lean_object* v___x_3093_; 
v___x_3093_ = l_Lean_Expr_mdata___override(v_m_3091_, v_e_3092_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* lean_expr_mk_proj(lean_object* v_structName_3094_, lean_object* v_idx_3095_, lean_object* v_struct_3096_){
_start:
{
lean_object* v___x_3097_; 
v___x_3097_ = l_Lean_Expr_proj___override(v_structName_3094_, v_idx_3095_, v_struct_3096_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkAppN_spec__0(lean_object* v_as_3098_, size_t v_i_3099_, size_t v_stop_3100_, lean_object* v_b_3101_){
_start:
{
uint8_t v___x_3102_; 
v___x_3102_ = lean_usize_dec_eq(v_i_3099_, v_stop_3100_);
if (v___x_3102_ == 0)
{
lean_object* v___x_3103_; lean_object* v___x_3104_; size_t v___x_3105_; size_t v___x_3106_; 
v___x_3103_ = lean_array_uget_borrowed(v_as_3098_, v_i_3099_);
lean_inc(v___x_3103_);
v___x_3104_ = l_Lean_Expr_app___override(v_b_3101_, v___x_3103_);
v___x_3105_ = ((size_t)1ULL);
v___x_3106_ = lean_usize_add(v_i_3099_, v___x_3105_);
v_i_3099_ = v___x_3106_;
v_b_3101_ = v___x_3104_;
goto _start;
}
else
{
return v_b_3101_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkAppN_spec__0___boxed(lean_object* v_as_3108_, lean_object* v_i_3109_, lean_object* v_stop_3110_, lean_object* v_b_3111_){
_start:
{
size_t v_i_boxed_3112_; size_t v_stop_boxed_3113_; lean_object* v_res_3114_; 
v_i_boxed_3112_ = lean_unbox_usize(v_i_3109_);
lean_dec(v_i_3109_);
v_stop_boxed_3113_ = lean_unbox_usize(v_stop_3110_);
lean_dec(v_stop_3110_);
v_res_3114_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkAppN_spec__0(v_as_3108_, v_i_boxed_3112_, v_stop_boxed_3113_, v_b_3111_);
lean_dec_ref(v_as_3108_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAppN(lean_object* v_f_3115_, lean_object* v_args_3116_){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; uint8_t v___x_3119_; 
v___x_3117_ = lean_unsigned_to_nat(0u);
v___x_3118_ = lean_array_get_size(v_args_3116_);
v___x_3119_ = lean_nat_dec_lt(v___x_3117_, v___x_3118_);
if (v___x_3119_ == 0)
{
return v_f_3115_;
}
else
{
uint8_t v___x_3120_; 
v___x_3120_ = lean_nat_dec_le(v___x_3118_, v___x_3118_);
if (v___x_3120_ == 0)
{
if (v___x_3119_ == 0)
{
return v_f_3115_;
}
else
{
size_t v___x_3121_; size_t v___x_3122_; lean_object* v___x_3123_; 
v___x_3121_ = ((size_t)0ULL);
v___x_3122_ = lean_usize_of_nat(v___x_3118_);
v___x_3123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkAppN_spec__0(v_args_3116_, v___x_3121_, v___x_3122_, v_f_3115_);
return v___x_3123_;
}
}
else
{
size_t v___x_3124_; size_t v___x_3125_; lean_object* v___x_3126_; 
v___x_3124_ = ((size_t)0ULL);
v___x_3125_ = lean_usize_of_nat(v___x_3118_);
v___x_3126_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkAppN_spec__0(v_args_3116_, v___x_3124_, v___x_3125_, v_f_3115_);
return v___x_3126_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAppN___boxed(lean_object* v_f_3127_, lean_object* v_args_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_Lean_mkAppN(v_f_3127_, v_args_3128_);
lean_dec_ref(v_args_3128_);
return v_res_3129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_mkAppRangeAux(lean_object* v_n_3130_, lean_object* v_args_3131_, lean_object* v_i_3132_, lean_object* v_e_3133_){
_start:
{
uint8_t v___x_3134_; 
v___x_3134_ = lean_nat_dec_lt(v_i_3132_, v_n_3130_);
if (v___x_3134_ == 0)
{
lean_dec(v_i_3132_);
return v_e_3133_;
}
else
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3135_ = l_Lean_instInhabitedExpr;
v___x_3136_ = lean_unsigned_to_nat(1u);
v___x_3137_ = lean_nat_add(v_i_3132_, v___x_3136_);
v___x_3138_ = lean_array_get_borrowed(v___x_3135_, v_args_3131_, v_i_3132_);
lean_dec(v_i_3132_);
lean_inc(v___x_3138_);
v___x_3139_ = l_Lean_Expr_app___override(v_e_3133_, v___x_3138_);
v_i_3132_ = v___x_3137_;
v_e_3133_ = v___x_3139_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_mkAppRangeAux___boxed(lean_object* v_n_3141_, lean_object* v_args_3142_, lean_object* v_i_3143_, lean_object* v_e_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l___private_Lean_Expr_0__Lean_mkAppRangeAux(v_n_3141_, v_args_3142_, v_i_3143_, v_e_3144_);
lean_dec_ref(v_args_3142_);
lean_dec(v_n_3141_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAppRange(lean_object* v_f_3146_, lean_object* v_i_3147_, lean_object* v_j_3148_, lean_object* v_args_3149_){
_start:
{
lean_object* v___x_3150_; 
v___x_3150_ = l___private_Lean_Expr_0__Lean_mkAppRangeAux(v_j_3148_, v_args_3149_, v_i_3147_, v_f_3146_);
return v___x_3150_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAppRange___boxed(lean_object* v_f_3151_, lean_object* v_i_3152_, lean_object* v_j_3153_, lean_object* v_args_3154_){
_start:
{
lean_object* v_res_3155_; 
v_res_3155_ = l_Lean_mkAppRange(v_f_3151_, v_i_3152_, v_j_3153_, v_args_3154_);
lean_dec_ref(v_args_3154_);
lean_dec(v_j_3153_);
return v_res_3155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_mkAppRev_spec__0(lean_object* v_as_3156_, size_t v_i_3157_, size_t v_stop_3158_, lean_object* v_b_3159_){
_start:
{
uint8_t v___x_3160_; 
v___x_3160_ = lean_usize_dec_eq(v_i_3157_, v_stop_3158_);
if (v___x_3160_ == 0)
{
size_t v___x_3161_; size_t v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3161_ = ((size_t)1ULL);
v___x_3162_ = lean_usize_sub(v_i_3157_, v___x_3161_);
v___x_3163_ = lean_array_uget_borrowed(v_as_3156_, v___x_3162_);
lean_inc(v___x_3163_);
v___x_3164_ = l_Lean_Expr_app___override(v_b_3159_, v___x_3163_);
v_i_3157_ = v___x_3162_;
v_b_3159_ = v___x_3164_;
goto _start;
}
else
{
return v_b_3159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_mkAppRev_spec__0___boxed(lean_object* v_as_3166_, lean_object* v_i_3167_, lean_object* v_stop_3168_, lean_object* v_b_3169_){
_start:
{
size_t v_i_boxed_3170_; size_t v_stop_boxed_3171_; lean_object* v_res_3172_; 
v_i_boxed_3170_ = lean_unbox_usize(v_i_3167_);
lean_dec(v_i_3167_);
v_stop_boxed_3171_ = lean_unbox_usize(v_stop_3168_);
lean_dec(v_stop_3168_);
v_res_3172_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_mkAppRev_spec__0(v_as_3166_, v_i_boxed_3170_, v_stop_boxed_3171_, v_b_3169_);
lean_dec_ref(v_as_3166_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAppRev(lean_object* v_fn_3173_, lean_object* v_revArgs_3174_){
_start:
{
lean_object* v___x_3175_; lean_object* v___x_3176_; uint8_t v___x_3177_; 
v___x_3175_ = lean_array_get_size(v_revArgs_3174_);
v___x_3176_ = lean_unsigned_to_nat(0u);
v___x_3177_ = lean_nat_dec_lt(v___x_3176_, v___x_3175_);
if (v___x_3177_ == 0)
{
return v_fn_3173_;
}
else
{
size_t v___x_3178_; size_t v___x_3179_; lean_object* v___x_3180_; 
v___x_3178_ = lean_usize_of_nat(v___x_3175_);
v___x_3179_ = ((size_t)0ULL);
v___x_3180_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_mkAppRev_spec__0(v_revArgs_3174_, v___x_3178_, v___x_3179_, v_fn_3173_);
return v___x_3180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAppRev___boxed(lean_object* v_fn_3181_, lean_object* v_revArgs_3182_){
_start:
{
lean_object* v_res_3183_; 
v_res_3183_ = l_Lean_mkAppRev(v_fn_3181_, v_revArgs_3182_);
lean_dec_ref(v_revArgs_3182_);
return v_res_3183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_dbgToString___boxed(lean_object* v_e_3185_){
_start:
{
lean_object* v_res_3186_; 
v_res_3186_ = lean_expr_dbg_to_string(v_e_3185_);
lean_dec_ref(v_e_3185_);
return v_res_3186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_quickLt___boxed(lean_object* v_a_3189_, lean_object* v_b_3190_){
_start:
{
uint8_t v_res_3191_; lean_object* v_r_3192_; 
v_res_3191_ = lean_expr_quick_lt(v_a_3189_, v_b_3190_);
lean_dec_ref(v_b_3190_);
lean_dec_ref(v_a_3189_);
v_r_3192_ = lean_box(v_res_3191_);
return v_r_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_lt___boxed(lean_object* v_a_3195_, lean_object* v_b_3196_){
_start:
{
uint8_t v_res_3197_; lean_object* v_r_3198_; 
v_res_3197_ = lean_expr_lt(v_a_3195_, v_b_3196_);
lean_dec_ref(v_b_3196_);
lean_dec_ref(v_a_3195_);
v_r_3198_ = lean_box(v_res_3197_);
return v_r_3198_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_quickComp(lean_object* v_a_3199_, lean_object* v_b_3200_){
_start:
{
uint8_t v___x_3201_; 
v___x_3201_ = lean_expr_quick_lt(v_a_3199_, v_b_3200_);
if (v___x_3201_ == 0)
{
uint8_t v___x_3202_; 
v___x_3202_ = lean_expr_quick_lt(v_b_3200_, v_a_3199_);
if (v___x_3202_ == 0)
{
uint8_t v___x_3203_; 
v___x_3203_ = 1;
return v___x_3203_;
}
else
{
uint8_t v___x_3204_; 
v___x_3204_ = 2;
return v___x_3204_;
}
}
else
{
uint8_t v___x_3205_; 
v___x_3205_ = 0;
return v___x_3205_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_quickComp___boxed(lean_object* v_a_3206_, lean_object* v_b_3207_){
_start:
{
uint8_t v_res_3208_; lean_object* v_r_3209_; 
v_res_3208_ = l_Lean_Expr_quickComp(v_a_3206_, v_b_3207_);
lean_dec_ref(v_b_3207_);
lean_dec_ref(v_a_3206_);
v_r_3209_ = lean_box(v_res_3208_);
return v_r_3209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_eqv___boxed(lean_object* v_a_3212_, lean_object* v_b_3213_){
_start:
{
uint8_t v_res_3214_; lean_object* v_r_3215_; 
v_res_3214_ = lean_expr_eqv(v_a_3212_, v_b_3213_);
lean_dec_ref(v_b_3213_);
lean_dec_ref(v_a_3212_);
v_r_3215_ = lean_box(v_res_3214_);
return v_r_3215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_equal___boxed(lean_object* v_a_3220_, lean_object* v_b_3221_){
_start:
{
uint8_t v_res_3222_; lean_object* v_r_3223_; 
v_res_3222_ = lean_expr_equal(v_a_3220_, v_b_3221_);
lean_dec_ref(v_b_3221_);
lean_dec_ref(v_a_3220_);
v_r_3223_ = lean_box(v_res_3222_);
return v_r_3223_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isSort(lean_object* v_x_3224_){
_start:
{
if (lean_obj_tag(v_x_3224_) == 3)
{
uint8_t v___x_3225_; 
v___x_3225_ = 1;
return v___x_3225_;
}
else
{
uint8_t v___x_3226_; 
v___x_3226_ = 0;
return v___x_3226_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isSort___boxed(lean_object* v_x_3227_){
_start:
{
uint8_t v_res_3228_; lean_object* v_r_3229_; 
v_res_3228_ = l_Lean_Expr_isSort(v_x_3227_);
lean_dec_ref(v_x_3227_);
v_r_3229_ = lean_box(v_res_3228_);
return v_r_3229_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isType(lean_object* v_x_3230_){
_start:
{
if (lean_obj_tag(v_x_3230_) == 3)
{
lean_object* v_u_3231_; 
v_u_3231_ = lean_ctor_get(v_x_3230_, 0);
if (lean_obj_tag(v_u_3231_) == 1)
{
uint8_t v___x_3232_; 
v___x_3232_ = 1;
return v___x_3232_;
}
else
{
uint8_t v___x_3233_; 
v___x_3233_ = 0;
return v___x_3233_;
}
}
else
{
uint8_t v___x_3234_; 
v___x_3234_ = 0;
return v___x_3234_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isType___boxed(lean_object* v_x_3235_){
_start:
{
uint8_t v_res_3236_; lean_object* v_r_3237_; 
v_res_3236_ = l_Lean_Expr_isType(v_x_3235_);
lean_dec_ref(v_x_3235_);
v_r_3237_ = lean_box(v_res_3236_);
return v_r_3237_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isType0(lean_object* v_x_3238_){
_start:
{
if (lean_obj_tag(v_x_3238_) == 3)
{
lean_object* v_u_3239_; 
v_u_3239_ = lean_ctor_get(v_x_3238_, 0);
if (lean_obj_tag(v_u_3239_) == 1)
{
lean_object* v_a_3240_; 
v_a_3240_ = lean_ctor_get(v_u_3239_, 0);
if (lean_obj_tag(v_a_3240_) == 0)
{
uint8_t v___x_3241_; 
v___x_3241_ = 1;
return v___x_3241_;
}
else
{
uint8_t v___x_3242_; 
v___x_3242_ = 0;
return v___x_3242_;
}
}
else
{
uint8_t v___x_3243_; 
v___x_3243_ = 0;
return v___x_3243_;
}
}
else
{
uint8_t v___x_3244_; 
v___x_3244_ = 0;
return v___x_3244_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isType0___boxed(lean_object* v_x_3245_){
_start:
{
uint8_t v_res_3246_; lean_object* v_r_3247_; 
v_res_3246_ = l_Lean_Expr_isType0(v_x_3245_);
lean_dec_ref(v_x_3245_);
v_r_3247_ = lean_box(v_res_3246_);
return v_r_3247_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isProp(lean_object* v_x_3248_){
_start:
{
if (lean_obj_tag(v_x_3248_) == 3)
{
lean_object* v_u_3249_; 
v_u_3249_ = lean_ctor_get(v_x_3248_, 0);
if (lean_obj_tag(v_u_3249_) == 0)
{
uint8_t v___x_3250_; 
v___x_3250_ = 1;
return v___x_3250_;
}
else
{
uint8_t v___x_3251_; 
v___x_3251_ = 0;
return v___x_3251_;
}
}
else
{
uint8_t v___x_3252_; 
v___x_3252_ = 0;
return v___x_3252_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isProp___boxed(lean_object* v_x_3253_){
_start:
{
uint8_t v_res_3254_; lean_object* v_r_3255_; 
v_res_3254_ = l_Lean_Expr_isProp(v_x_3253_);
lean_dec_ref(v_x_3253_);
v_r_3255_ = lean_box(v_res_3254_);
return v_r_3255_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isBVar(lean_object* v_x_3256_){
_start:
{
if (lean_obj_tag(v_x_3256_) == 0)
{
uint8_t v___x_3257_; 
v___x_3257_ = 1;
return v___x_3257_;
}
else
{
uint8_t v___x_3258_; 
v___x_3258_ = 0;
return v___x_3258_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isBVar___boxed(lean_object* v_x_3259_){
_start:
{
uint8_t v_res_3260_; lean_object* v_r_3261_; 
v_res_3260_ = l_Lean_Expr_isBVar(v_x_3259_);
lean_dec_ref(v_x_3259_);
v_r_3261_ = lean_box(v_res_3260_);
return v_r_3261_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isMVar(lean_object* v_x_3262_){
_start:
{
if (lean_obj_tag(v_x_3262_) == 2)
{
uint8_t v___x_3263_; 
v___x_3263_ = 1;
return v___x_3263_;
}
else
{
uint8_t v___x_3264_; 
v___x_3264_ = 0;
return v___x_3264_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isMVar___boxed(lean_object* v_x_3265_){
_start:
{
uint8_t v_res_3266_; lean_object* v_r_3267_; 
v_res_3266_ = l_Lean_Expr_isMVar(v_x_3265_);
lean_dec_ref(v_x_3265_);
v_r_3267_ = lean_box(v_res_3266_);
return v_r_3267_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isFVar(lean_object* v_x_3268_){
_start:
{
if (lean_obj_tag(v_x_3268_) == 1)
{
uint8_t v___x_3269_; 
v___x_3269_ = 1;
return v___x_3269_;
}
else
{
uint8_t v___x_3270_; 
v___x_3270_ = 0;
return v___x_3270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isFVar___boxed(lean_object* v_x_3271_){
_start:
{
uint8_t v_res_3272_; lean_object* v_r_3273_; 
v_res_3272_ = l_Lean_Expr_isFVar(v_x_3271_);
lean_dec_ref(v_x_3271_);
v_r_3273_ = lean_box(v_res_3272_);
return v_r_3273_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isApp(lean_object* v_x_3274_){
_start:
{
if (lean_obj_tag(v_x_3274_) == 5)
{
uint8_t v___x_3275_; 
v___x_3275_ = 1;
return v___x_3275_;
}
else
{
uint8_t v___x_3276_; 
v___x_3276_ = 0;
return v___x_3276_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isApp___boxed(lean_object* v_x_3277_){
_start:
{
uint8_t v_res_3278_; lean_object* v_r_3279_; 
v_res_3278_ = l_Lean_Expr_isApp(v_x_3277_);
lean_dec_ref(v_x_3277_);
v_r_3279_ = lean_box(v_res_3278_);
return v_r_3279_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isProj(lean_object* v_x_3280_){
_start:
{
if (lean_obj_tag(v_x_3280_) == 11)
{
uint8_t v___x_3281_; 
v___x_3281_ = 1;
return v___x_3281_;
}
else
{
uint8_t v___x_3282_; 
v___x_3282_ = 0;
return v___x_3282_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isProj___boxed(lean_object* v_x_3283_){
_start:
{
uint8_t v_res_3284_; lean_object* v_r_3285_; 
v_res_3284_ = l_Lean_Expr_isProj(v_x_3283_);
lean_dec_ref(v_x_3283_);
v_r_3285_ = lean_box(v_res_3284_);
return v_r_3285_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isConst(lean_object* v_x_3286_){
_start:
{
if (lean_obj_tag(v_x_3286_) == 4)
{
uint8_t v___x_3287_; 
v___x_3287_ = 1;
return v___x_3287_;
}
else
{
uint8_t v___x_3288_; 
v___x_3288_ = 0;
return v___x_3288_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isConst___boxed(lean_object* v_x_3289_){
_start:
{
uint8_t v_res_3290_; lean_object* v_r_3291_; 
v_res_3290_ = l_Lean_Expr_isConst(v_x_3289_);
lean_dec_ref(v_x_3289_);
v_r_3291_ = lean_box(v_res_3290_);
return v_r_3291_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isConstOf(lean_object* v_x_3292_, lean_object* v_x_3293_){
_start:
{
if (lean_obj_tag(v_x_3292_) == 4)
{
lean_object* v_declName_3294_; uint8_t v___x_3295_; 
v_declName_3294_ = lean_ctor_get(v_x_3292_, 0);
v___x_3295_ = lean_name_eq(v_declName_3294_, v_x_3293_);
return v___x_3295_;
}
else
{
uint8_t v___x_3296_; 
v___x_3296_ = 0;
return v___x_3296_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isConstOf___boxed(lean_object* v_x_3297_, lean_object* v_x_3298_){
_start:
{
uint8_t v_res_3299_; lean_object* v_r_3300_; 
v_res_3299_ = l_Lean_Expr_isConstOf(v_x_3297_, v_x_3298_);
lean_dec(v_x_3298_);
lean_dec_ref(v_x_3297_);
v_r_3300_ = lean_box(v_res_3299_);
return v_r_3300_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isFVarOf(lean_object* v_x_3301_, lean_object* v_x_3302_){
_start:
{
if (lean_obj_tag(v_x_3301_) == 1)
{
lean_object* v_fvarId_3303_; uint8_t v___x_3304_; 
v_fvarId_3303_ = lean_ctor_get(v_x_3301_, 0);
v___x_3304_ = lean_name_eq(v_fvarId_3303_, v_x_3302_);
return v___x_3304_;
}
else
{
uint8_t v___x_3305_; 
v___x_3305_ = 0;
return v___x_3305_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isFVarOf___boxed(lean_object* v_x_3306_, lean_object* v_x_3307_){
_start:
{
uint8_t v_res_3308_; lean_object* v_r_3309_; 
v_res_3308_ = l_Lean_Expr_isFVarOf(v_x_3306_, v_x_3307_);
lean_dec(v_x_3307_);
lean_dec_ref(v_x_3306_);
v_r_3309_ = lean_box(v_res_3308_);
return v_r_3309_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isForall(lean_object* v_x_3310_){
_start:
{
if (lean_obj_tag(v_x_3310_) == 7)
{
uint8_t v___x_3311_; 
v___x_3311_ = 1;
return v___x_3311_;
}
else
{
uint8_t v___x_3312_; 
v___x_3312_ = 0;
return v___x_3312_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isForall___boxed(lean_object* v_x_3313_){
_start:
{
uint8_t v_res_3314_; lean_object* v_r_3315_; 
v_res_3314_ = l_Lean_Expr_isForall(v_x_3313_);
lean_dec_ref(v_x_3313_);
v_r_3315_ = lean_box(v_res_3314_);
return v_r_3315_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isLambda(lean_object* v_x_3316_){
_start:
{
if (lean_obj_tag(v_x_3316_) == 6)
{
uint8_t v___x_3317_; 
v___x_3317_ = 1;
return v___x_3317_;
}
else
{
uint8_t v___x_3318_; 
v___x_3318_ = 0;
return v___x_3318_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isLambda___boxed(lean_object* v_x_3319_){
_start:
{
uint8_t v_res_3320_; lean_object* v_r_3321_; 
v_res_3320_ = l_Lean_Expr_isLambda(v_x_3319_);
lean_dec_ref(v_x_3319_);
v_r_3321_ = lean_box(v_res_3320_);
return v_r_3321_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isBinding(lean_object* v_x_3322_){
_start:
{
switch(lean_obj_tag(v_x_3322_))
{
case 6:
{
uint8_t v___x_3323_; 
v___x_3323_ = 1;
return v___x_3323_;
}
case 7:
{
uint8_t v___x_3324_; 
v___x_3324_ = 1;
return v___x_3324_;
}
default: 
{
uint8_t v___x_3325_; 
v___x_3325_ = 0;
return v___x_3325_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isBinding___boxed(lean_object* v_x_3326_){
_start:
{
uint8_t v_res_3327_; lean_object* v_r_3328_; 
v_res_3327_ = l_Lean_Expr_isBinding(v_x_3326_);
lean_dec_ref(v_x_3326_);
v_r_3328_ = lean_box(v_res_3327_);
return v_r_3328_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isLet(lean_object* v_x_3329_){
_start:
{
if (lean_obj_tag(v_x_3329_) == 8)
{
uint8_t v___x_3330_; 
v___x_3330_ = 1;
return v___x_3330_;
}
else
{
uint8_t v___x_3331_; 
v___x_3331_ = 0;
return v___x_3331_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isLet___boxed(lean_object* v_x_3332_){
_start:
{
uint8_t v_res_3333_; lean_object* v_r_3334_; 
v_res_3333_ = l_Lean_Expr_isLet(v_x_3332_);
lean_dec_ref(v_x_3332_);
v_r_3334_ = lean_box(v_res_3333_);
return v_r_3334_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isHave(lean_object* v_x_3335_){
_start:
{
if (lean_obj_tag(v_x_3335_) == 8)
{
uint8_t v_nondep_3336_; 
v_nondep_3336_ = lean_ctor_get_uint8(v_x_3335_, sizeof(void*)*4 + 8);
return v_nondep_3336_;
}
else
{
uint8_t v___x_3337_; 
v___x_3337_ = 0;
return v___x_3337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isHave___boxed(lean_object* v_x_3338_){
_start:
{
uint8_t v_res_3339_; lean_object* v_r_3340_; 
v_res_3339_ = l_Lean_Expr_isHave(v_x_3338_);
lean_dec_ref(v_x_3338_);
v_r_3340_ = lean_box(v_res_3339_);
return v_r_3340_;
}
}
LEAN_EXPORT uint8_t lean_expr_is_have(lean_object* v_a_3341_){
_start:
{
uint8_t v___x_3342_; 
v___x_3342_ = l_Lean_Expr_isHave(v_a_3341_);
lean_dec_ref(v_a_3341_);
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isHaveEx___boxed(lean_object* v_a_3343_){
_start:
{
uint8_t v_res_3344_; lean_object* v_r_3345_; 
v_res_3344_ = lean_expr_is_have(v_a_3343_);
v_r_3345_ = lean_box(v_res_3344_);
return v_r_3345_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isMData(lean_object* v_x_3346_){
_start:
{
if (lean_obj_tag(v_x_3346_) == 10)
{
uint8_t v___x_3347_; 
v___x_3347_ = 1;
return v___x_3347_;
}
else
{
uint8_t v___x_3348_; 
v___x_3348_ = 0;
return v___x_3348_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isMData___boxed(lean_object* v_x_3349_){
_start:
{
uint8_t v_res_3350_; lean_object* v_r_3351_; 
v_res_3350_ = l_Lean_Expr_isMData(v_x_3349_);
lean_dec_ref(v_x_3349_);
v_r_3351_ = lean_box(v_res_3350_);
return v_r_3351_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isLit(lean_object* v_x_3352_){
_start:
{
if (lean_obj_tag(v_x_3352_) == 9)
{
uint8_t v___x_3353_; 
v___x_3353_ = 1;
return v___x_3353_;
}
else
{
uint8_t v___x_3354_; 
v___x_3354_ = 0;
return v___x_3354_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isLit___boxed(lean_object* v_x_3355_){
_start:
{
uint8_t v_res_3356_; lean_object* v_r_3357_; 
v_res_3356_ = l_Lean_Expr_isLit(v_x_3355_);
lean_dec_ref(v_x_3355_);
v_r_3357_ = lean_box(v_res_3356_);
return v_r_3357_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_appFn_x21_spec__0(lean_object* v_msg_3358_){
_start:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3359_ = l_Lean_instInhabitedExpr;
v___x_3360_ = lean_panic_fn_borrowed(v___x_3359_, v_msg_3358_);
return v___x_3360_;
}
}
static lean_object* _init_l_Lean_Expr_appFn_x21___closed__3(void){
_start:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3364_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__2));
v___x_3365_ = lean_unsigned_to_nat(15u);
v___x_3366_ = lean_unsigned_to_nat(932u);
v___x_3367_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__1));
v___x_3368_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3369_ = l_mkPanicMessageWithDecl(v___x_3368_, v___x_3367_, v___x_3366_, v___x_3365_, v___x_3364_);
return v___x_3369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appFn_x21(lean_object* v_x_3370_){
_start:
{
if (lean_obj_tag(v_x_3370_) == 5)
{
lean_object* v_fn_3371_; 
v_fn_3371_ = lean_ctor_get(v_x_3370_, 0);
lean_inc_ref(v_fn_3371_);
return v_fn_3371_;
}
else
{
lean_object* v___x_3372_; lean_object* v___x_3373_; 
v___x_3372_ = lean_obj_once(&l_Lean_Expr_appFn_x21___closed__3, &l_Lean_Expr_appFn_x21___closed__3_once, _init_l_Lean_Expr_appFn_x21___closed__3);
v___x_3373_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_3372_);
return v___x_3373_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appFn_x21___boxed(lean_object* v_x_3374_){
_start:
{
lean_object* v_res_3375_; 
v_res_3375_ = l_Lean_Expr_appFn_x21(v_x_3374_);
lean_dec_ref(v_x_3374_);
return v_res_3375_;
}
}
static lean_object* _init_l_Lean_Expr_appArg_x21___closed__1(void){
_start:
{
lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3377_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__2));
v___x_3378_ = lean_unsigned_to_nat(15u);
v___x_3379_ = lean_unsigned_to_nat(936u);
v___x_3380_ = ((lean_object*)(l_Lean_Expr_appArg_x21___closed__0));
v___x_3381_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3382_ = l_mkPanicMessageWithDecl(v___x_3381_, v___x_3380_, v___x_3379_, v___x_3378_, v___x_3377_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appArg_x21(lean_object* v_x_3383_){
_start:
{
if (lean_obj_tag(v_x_3383_) == 5)
{
lean_object* v_arg_3384_; 
v_arg_3384_ = lean_ctor_get(v_x_3383_, 1);
lean_inc_ref(v_arg_3384_);
return v_arg_3384_;
}
else
{
lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3385_ = lean_obj_once(&l_Lean_Expr_appArg_x21___closed__1, &l_Lean_Expr_appArg_x21___closed__1_once, _init_l_Lean_Expr_appArg_x21___closed__1);
v___x_3386_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_3385_);
return v___x_3386_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appArg_x21___boxed(lean_object* v_x_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l_Lean_Expr_appArg_x21(v_x_3387_);
lean_dec_ref(v_x_3387_);
return v_res_3388_;
}
}
static lean_object* _init_l_Lean_Expr_appFn_x21_x27___closed__1(void){
_start:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3390_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__2));
v___x_3391_ = lean_unsigned_to_nat(17u);
v___x_3392_ = lean_unsigned_to_nat(941u);
v___x_3393_ = ((lean_object*)(l_Lean_Expr_appFn_x21_x27___closed__0));
v___x_3394_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3395_ = l_mkPanicMessageWithDecl(v___x_3394_, v___x_3393_, v___x_3392_, v___x_3391_, v___x_3390_);
return v___x_3395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appFn_x21_x27(lean_object* v_x_3396_){
_start:
{
switch(lean_obj_tag(v_x_3396_))
{
case 10:
{
lean_object* v_expr_3397_; 
v_expr_3397_ = lean_ctor_get(v_x_3396_, 1);
v_x_3396_ = v_expr_3397_;
goto _start;
}
case 5:
{
lean_object* v_fn_3399_; 
v_fn_3399_ = lean_ctor_get(v_x_3396_, 0);
lean_inc_ref(v_fn_3399_);
return v_fn_3399_;
}
default: 
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3400_ = lean_obj_once(&l_Lean_Expr_appFn_x21_x27___closed__1, &l_Lean_Expr_appFn_x21_x27___closed__1_once, _init_l_Lean_Expr_appFn_x21_x27___closed__1);
v___x_3401_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_3400_);
return v___x_3401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appFn_x21_x27___boxed(lean_object* v_x_3402_){
_start:
{
lean_object* v_res_3403_; 
v_res_3403_ = l_Lean_Expr_appFn_x21_x27(v_x_3402_);
lean_dec_ref(v_x_3402_);
return v_res_3403_;
}
}
static lean_object* _init_l_Lean_Expr_appArg_x21_x27___closed__1(void){
_start:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; 
v___x_3405_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__2));
v___x_3406_ = lean_unsigned_to_nat(17u);
v___x_3407_ = lean_unsigned_to_nat(946u);
v___x_3408_ = ((lean_object*)(l_Lean_Expr_appArg_x21_x27___closed__0));
v___x_3409_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3410_ = l_mkPanicMessageWithDecl(v___x_3409_, v___x_3408_, v___x_3407_, v___x_3406_, v___x_3405_);
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appArg_x21_x27(lean_object* v_x_3411_){
_start:
{
switch(lean_obj_tag(v_x_3411_))
{
case 10:
{
lean_object* v_expr_3412_; 
v_expr_3412_ = lean_ctor_get(v_x_3411_, 1);
v_x_3411_ = v_expr_3412_;
goto _start;
}
case 5:
{
lean_object* v_arg_3414_; 
v_arg_3414_ = lean_ctor_get(v_x_3411_, 1);
lean_inc_ref(v_arg_3414_);
return v_arg_3414_;
}
default: 
{
lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3415_ = lean_obj_once(&l_Lean_Expr_appArg_x21_x27___closed__1, &l_Lean_Expr_appArg_x21_x27___closed__1_once, _init_l_Lean_Expr_appArg_x21_x27___closed__1);
v___x_3416_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_3415_);
return v___x_3416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appArg_x21_x27___boxed(lean_object* v_x_3417_){
_start:
{
lean_object* v_res_3418_; 
v_res_3418_ = l_Lean_Expr_appArg_x21_x27(v_x_3417_);
lean_dec_ref(v_x_3417_);
return v_res_3418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appArg___redArg(lean_object* v_e_3419_){
_start:
{
lean_object* v_arg_3420_; 
v_arg_3420_ = lean_ctor_get(v_e_3419_, 1);
lean_inc_ref(v_arg_3420_);
return v_arg_3420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appArg___redArg___boxed(lean_object* v_e_3421_){
_start:
{
lean_object* v_res_3422_; 
v_res_3422_ = l_Lean_Expr_appArg___redArg(v_e_3421_);
lean_dec_ref(v_e_3421_);
return v_res_3422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appArg(lean_object* v_e_3423_, lean_object* v_h_3424_){
_start:
{
lean_object* v_arg_3425_; 
v_arg_3425_ = lean_ctor_get(v_e_3423_, 1);
lean_inc_ref(v_arg_3425_);
return v_arg_3425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appArg___boxed(lean_object* v_e_3426_, lean_object* v_h_3427_){
_start:
{
lean_object* v_res_3428_; 
v_res_3428_ = l_Lean_Expr_appArg(v_e_3426_, v_h_3427_);
lean_dec_ref(v_e_3426_);
return v_res_3428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appFn___redArg(lean_object* v_e_3429_){
_start:
{
lean_object* v_fn_3430_; 
v_fn_3430_ = lean_ctor_get(v_e_3429_, 0);
lean_inc_ref(v_fn_3430_);
return v_fn_3430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appFn___redArg___boxed(lean_object* v_e_3431_){
_start:
{
lean_object* v_res_3432_; 
v_res_3432_ = l_Lean_Expr_appFn___redArg(v_e_3431_);
lean_dec_ref(v_e_3431_);
return v_res_3432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appFn(lean_object* v_e_3433_, lean_object* v_h_3434_){
_start:
{
lean_object* v_fn_3435_; 
v_fn_3435_ = lean_ctor_get(v_e_3433_, 0);
lean_inc_ref(v_fn_3435_);
return v_fn_3435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appFn___boxed(lean_object* v_e_3436_, lean_object* v_h_3437_){
_start:
{
lean_object* v_res_3438_; 
v_res_3438_ = l_Lean_Expr_appFn(v_e_3436_, v_h_3437_);
lean_dec_ref(v_e_3436_);
return v_res_3438_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_sortLevel_x21_spec__0(lean_object* v_msg_3439_){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; 
v___x_3440_ = l_Lean_instInhabitedLevel;
v___x_3441_ = lean_panic_fn_borrowed(v___x_3440_, v_msg_3439_);
return v___x_3441_;
}
}
static lean_object* _init_l_Lean_Expr_sortLevel_x21___closed__2(void){
_start:
{
lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; 
v___x_3444_ = ((lean_object*)(l_Lean_Expr_sortLevel_x21___closed__1));
v___x_3445_ = lean_unsigned_to_nat(14u);
v___x_3446_ = lean_unsigned_to_nat(958u);
v___x_3447_ = ((lean_object*)(l_Lean_Expr_sortLevel_x21___closed__0));
v___x_3448_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3449_ = l_mkPanicMessageWithDecl(v___x_3448_, v___x_3447_, v___x_3446_, v___x_3445_, v___x_3444_);
return v___x_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_sortLevel_x21(lean_object* v_x_3450_){
_start:
{
if (lean_obj_tag(v_x_3450_) == 3)
{
lean_object* v_u_3451_; 
v_u_3451_ = lean_ctor_get(v_x_3450_, 0);
lean_inc(v_u_3451_);
return v_u_3451_;
}
else
{
lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3452_ = lean_obj_once(&l_Lean_Expr_sortLevel_x21___closed__2, &l_Lean_Expr_sortLevel_x21___closed__2_once, _init_l_Lean_Expr_sortLevel_x21___closed__2);
v___x_3453_ = l_panic___at___00Lean_Expr_sortLevel_x21_spec__0(v___x_3452_);
return v___x_3453_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_sortLevel_x21___boxed(lean_object* v_x_3454_){
_start:
{
lean_object* v_res_3455_; 
v_res_3455_ = l_Lean_Expr_sortLevel_x21(v_x_3454_);
lean_dec_ref(v_x_3454_);
return v_res_3455_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_litValue_x21_spec__0(lean_object* v_msg_3456_){
_start:
{
lean_object* v___x_3457_; lean_object* v___x_3458_; 
v___x_3457_ = ((lean_object*)(l_Lean_instInhabitedLiteral_default));
v___x_3458_ = lean_panic_fn_borrowed(v___x_3457_, v_msg_3456_);
return v___x_3458_;
}
}
static lean_object* _init_l_Lean_Expr_litValue_x21___closed__2(void){
_start:
{
lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
v___x_3461_ = ((lean_object*)(l_Lean_Expr_litValue_x21___closed__1));
v___x_3462_ = lean_unsigned_to_nat(13u);
v___x_3463_ = lean_unsigned_to_nat(962u);
v___x_3464_ = ((lean_object*)(l_Lean_Expr_litValue_x21___closed__0));
v___x_3465_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3466_ = l_mkPanicMessageWithDecl(v___x_3465_, v___x_3464_, v___x_3463_, v___x_3462_, v___x_3461_);
return v___x_3466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_litValue_x21(lean_object* v_x_3467_){
_start:
{
if (lean_obj_tag(v_x_3467_) == 9)
{
lean_object* v_a_3468_; 
v_a_3468_ = lean_ctor_get(v_x_3467_, 0);
lean_inc_ref(v_a_3468_);
return v_a_3468_;
}
else
{
lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3469_ = lean_obj_once(&l_Lean_Expr_litValue_x21___closed__2, &l_Lean_Expr_litValue_x21___closed__2_once, _init_l_Lean_Expr_litValue_x21___closed__2);
v___x_3470_ = l_panic___at___00Lean_Expr_litValue_x21_spec__0(v___x_3469_);
return v___x_3470_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_litValue_x21___boxed(lean_object* v_x_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Lean_Expr_litValue_x21(v_x_3471_);
lean_dec_ref(v_x_3471_);
return v_res_3472_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isRawNatLit(lean_object* v_x_3473_){
_start:
{
if (lean_obj_tag(v_x_3473_) == 9)
{
lean_object* v_a_3474_; 
v_a_3474_ = lean_ctor_get(v_x_3473_, 0);
if (lean_obj_tag(v_a_3474_) == 0)
{
uint8_t v___x_3475_; 
v___x_3475_ = 1;
return v___x_3475_;
}
else
{
uint8_t v___x_3476_; 
v___x_3476_ = 0;
return v___x_3476_;
}
}
else
{
uint8_t v___x_3477_; 
v___x_3477_ = 0;
return v___x_3477_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isRawNatLit___boxed(lean_object* v_x_3478_){
_start:
{
uint8_t v_res_3479_; lean_object* v_r_3480_; 
v_res_3479_ = l_Lean_Expr_isRawNatLit(v_x_3478_);
lean_dec_ref(v_x_3478_);
v_r_3480_ = lean_box(v_res_3479_);
return v_r_3480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_rawNatLit_x3f(lean_object* v_x_3481_){
_start:
{
if (lean_obj_tag(v_x_3481_) == 9)
{
lean_object* v_a_3482_; 
v_a_3482_ = lean_ctor_get(v_x_3481_, 0);
lean_inc_ref(v_a_3482_);
lean_dec_ref_known(v_x_3481_, 1);
if (lean_obj_tag(v_a_3482_) == 0)
{
lean_object* v_val_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3490_; 
v_val_3483_ = lean_ctor_get(v_a_3482_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v_a_3482_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3485_ = v_a_3482_;
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_val_3483_);
lean_dec(v_a_3482_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3488_; 
if (v_isShared_3486_ == 0)
{
lean_ctor_set_tag(v___x_3485_, 1);
v___x_3488_ = v___x_3485_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v_val_3483_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
else
{
lean_object* v___x_3491_; 
lean_dec_ref(v_a_3482_);
v___x_3491_ = lean_box(0);
return v___x_3491_;
}
}
else
{
lean_object* v___x_3492_; 
lean_dec_ref(v_x_3481_);
v___x_3492_ = lean_box(0);
return v___x_3492_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isStringLit(lean_object* v_x_3493_){
_start:
{
if (lean_obj_tag(v_x_3493_) == 9)
{
lean_object* v_a_3494_; 
v_a_3494_ = lean_ctor_get(v_x_3493_, 0);
if (lean_obj_tag(v_a_3494_) == 1)
{
uint8_t v___x_3495_; 
v___x_3495_ = 1;
return v___x_3495_;
}
else
{
uint8_t v___x_3496_; 
v___x_3496_ = 0;
return v___x_3496_;
}
}
else
{
uint8_t v___x_3497_; 
v___x_3497_ = 0;
return v___x_3497_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isStringLit___boxed(lean_object* v_x_3498_){
_start:
{
uint8_t v_res_3499_; lean_object* v_r_3500_; 
v_res_3499_ = l_Lean_Expr_isStringLit(v_x_3498_);
lean_dec_ref(v_x_3498_);
v_r_3500_ = lean_box(v_res_3499_);
return v_r_3500_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isCharLit(lean_object* v_x_3505_){
_start:
{
if (lean_obj_tag(v_x_3505_) == 5)
{
lean_object* v_fn_3506_; 
v_fn_3506_ = lean_ctor_get(v_x_3505_, 0);
if (lean_obj_tag(v_fn_3506_) == 4)
{
lean_object* v_arg_3507_; lean_object* v_declName_3508_; lean_object* v___x_3509_; uint8_t v___x_3510_; 
v_arg_3507_ = lean_ctor_get(v_x_3505_, 1);
v_declName_3508_ = lean_ctor_get(v_fn_3506_, 0);
v___x_3509_ = ((lean_object*)(l_Lean_Expr_isCharLit___closed__1));
v___x_3510_ = lean_name_eq(v_declName_3508_, v___x_3509_);
if (v___x_3510_ == 0)
{
return v___x_3510_;
}
else
{
uint8_t v___x_3511_; 
v___x_3511_ = l_Lean_Expr_isRawNatLit(v_arg_3507_);
return v___x_3511_;
}
}
else
{
uint8_t v___x_3512_; 
v___x_3512_ = 0;
return v___x_3512_;
}
}
else
{
uint8_t v___x_3513_; 
v___x_3513_ = 0;
return v___x_3513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isCharLit___boxed(lean_object* v_x_3514_){
_start:
{
uint8_t v_res_3515_; lean_object* v_r_3516_; 
v_res_3515_ = l_Lean_Expr_isCharLit(v_x_3514_);
lean_dec_ref(v_x_3514_);
v_r_3516_ = lean_box(v_res_3515_);
return v_r_3516_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_constName_x21_spec__0(lean_object* v_msg_3517_){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3518_ = l_Lean_instInhabitedName;
v___x_3519_ = lean_panic_fn_borrowed(v___x_3518_, v_msg_3517_);
return v___x_3519_;
}
}
static lean_object* _init_l_Lean_Expr_constName_x21___closed__2(void){
_start:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3522_ = ((lean_object*)(l_Lean_Expr_constName_x21___closed__1));
v___x_3523_ = lean_unsigned_to_nat(17u);
v___x_3524_ = lean_unsigned_to_nat(986u);
v___x_3525_ = ((lean_object*)(l_Lean_Expr_constName_x21___closed__0));
v___x_3526_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3527_ = l_mkPanicMessageWithDecl(v___x_3526_, v___x_3525_, v___x_3524_, v___x_3523_, v___x_3522_);
return v___x_3527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_constName_x21(lean_object* v_x_3528_){
_start:
{
if (lean_obj_tag(v_x_3528_) == 4)
{
lean_object* v_declName_3529_; 
v_declName_3529_ = lean_ctor_get(v_x_3528_, 0);
lean_inc(v_declName_3529_);
return v_declName_3529_;
}
else
{
lean_object* v___x_3530_; lean_object* v___x_3531_; 
v___x_3530_ = lean_obj_once(&l_Lean_Expr_constName_x21___closed__2, &l_Lean_Expr_constName_x21___closed__2_once, _init_l_Lean_Expr_constName_x21___closed__2);
v___x_3531_ = l_panic___at___00Lean_Expr_constName_x21_spec__0(v___x_3530_);
return v___x_3531_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_constName_x21___boxed(lean_object* v_x_3532_){
_start:
{
lean_object* v_res_3533_; 
v_res_3533_ = l_Lean_Expr_constName_x21(v_x_3532_);
lean_dec_ref(v_x_3532_);
return v_res_3533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_constName_x3f(lean_object* v_x_3534_){
_start:
{
if (lean_obj_tag(v_x_3534_) == 4)
{
lean_object* v_declName_3535_; lean_object* v___x_3536_; 
v_declName_3535_ = lean_ctor_get(v_x_3534_, 0);
lean_inc(v_declName_3535_);
v___x_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3536_, 0, v_declName_3535_);
return v___x_3536_;
}
else
{
lean_object* v___x_3537_; 
v___x_3537_ = lean_box(0);
return v___x_3537_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_constName_x3f___boxed(lean_object* v_x_3538_){
_start:
{
lean_object* v_res_3539_; 
v_res_3539_ = l_Lean_Expr_constName_x3f(v_x_3538_);
lean_dec_ref(v_x_3538_);
return v_res_3539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_constName(lean_object* v_e_3540_){
_start:
{
lean_object* v___x_3541_; 
v___x_3541_ = l_Lean_Expr_constName_x3f(v_e_3540_);
if (lean_obj_tag(v___x_3541_) == 0)
{
lean_object* v___x_3542_; 
v___x_3542_ = lean_obj_once(&l_Lean_instInhabitedFVarId_default___closed__0, &l_Lean_instInhabitedFVarId_default___closed__0_once, _init_l_Lean_instInhabitedFVarId_default___closed__0);
return v___x_3542_;
}
else
{
lean_object* v_val_3543_; 
v_val_3543_ = lean_ctor_get(v___x_3541_, 0);
lean_inc(v_val_3543_);
lean_dec_ref_known(v___x_3541_, 1);
return v_val_3543_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_constName___boxed(lean_object* v_e_3544_){
_start:
{
lean_object* v_res_3545_; 
v_res_3545_ = l_Lean_Expr_constName(v_e_3544_);
lean_dec_ref(v_e_3544_);
return v_res_3545_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_constLevels_x21_spec__0(lean_object* v_msg_3546_){
_start:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3547_ = lean_box(0);
v___x_3548_ = lean_panic_fn_borrowed(v___x_3547_, v_msg_3546_);
return v___x_3548_;
}
}
static lean_object* _init_l_Lean_Expr_constLevels_x21___closed__1(void){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3550_ = ((lean_object*)(l_Lean_Expr_constName_x21___closed__1));
v___x_3551_ = lean_unsigned_to_nat(18u);
v___x_3552_ = lean_unsigned_to_nat(1006u);
v___x_3553_ = ((lean_object*)(l_Lean_Expr_constLevels_x21___closed__0));
v___x_3554_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3555_ = l_mkPanicMessageWithDecl(v___x_3554_, v___x_3553_, v___x_3552_, v___x_3551_, v___x_3550_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_constLevels_x21(lean_object* v_x_3556_){
_start:
{
if (lean_obj_tag(v_x_3556_) == 4)
{
lean_object* v_us_3557_; 
v_us_3557_ = lean_ctor_get(v_x_3556_, 1);
lean_inc(v_us_3557_);
return v_us_3557_;
}
else
{
lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3558_ = lean_obj_once(&l_Lean_Expr_constLevels_x21___closed__1, &l_Lean_Expr_constLevels_x21___closed__1_once, _init_l_Lean_Expr_constLevels_x21___closed__1);
v___x_3559_ = l_panic___at___00Lean_Expr_constLevels_x21_spec__0(v___x_3558_);
return v___x_3559_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_constLevels_x21___boxed(lean_object* v_x_3560_){
_start:
{
lean_object* v_res_3561_; 
v_res_3561_ = l_Lean_Expr_constLevels_x21(v_x_3560_);
lean_dec_ref(v_x_3560_);
return v_res_3561_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_bvarIdx_x21_spec__0(lean_object* v_msg_3562_){
_start:
{
lean_object* v___x_3563_; lean_object* v___x_3564_; 
v___x_3563_ = lean_unsigned_to_nat(0u);
v___x_3564_ = lean_panic_fn_borrowed(v___x_3563_, v_msg_3562_);
return v___x_3564_;
}
}
static lean_object* _init_l_Lean_Expr_bvarIdx_x21___closed__2(void){
_start:
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; 
v___x_3567_ = ((lean_object*)(l_Lean_Expr_bvarIdx_x21___closed__1));
v___x_3568_ = lean_unsigned_to_nat(16u);
v___x_3569_ = lean_unsigned_to_nat(1010u);
v___x_3570_ = ((lean_object*)(l_Lean_Expr_bvarIdx_x21___closed__0));
v___x_3571_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3572_ = l_mkPanicMessageWithDecl(v___x_3571_, v___x_3570_, v___x_3569_, v___x_3568_, v___x_3567_);
return v___x_3572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bvarIdx_x21(lean_object* v_x_3573_){
_start:
{
if (lean_obj_tag(v_x_3573_) == 0)
{
lean_object* v_deBruijnIndex_3574_; 
v_deBruijnIndex_3574_ = lean_ctor_get(v_x_3573_, 0);
lean_inc(v_deBruijnIndex_3574_);
return v_deBruijnIndex_3574_;
}
else
{
lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3575_ = lean_obj_once(&l_Lean_Expr_bvarIdx_x21___closed__2, &l_Lean_Expr_bvarIdx_x21___closed__2_once, _init_l_Lean_Expr_bvarIdx_x21___closed__2);
v___x_3576_ = l_panic___at___00Lean_Expr_bvarIdx_x21_spec__0(v___x_3575_);
return v___x_3576_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bvarIdx_x21___boxed(lean_object* v_x_3577_){
_start:
{
lean_object* v_res_3578_; 
v_res_3578_ = l_Lean_Expr_bvarIdx_x21(v_x_3577_);
lean_dec_ref(v_x_3577_);
return v_res_3578_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_fvarId_x21_spec__0(lean_object* v_msg_3579_){
_start:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; 
v___x_3580_ = l_Lean_instInhabitedFVarId_default;
v___x_3581_ = lean_panic_fn_borrowed(v___x_3580_, v_msg_3579_);
return v___x_3581_;
}
}
static lean_object* _init_l_Lean_Expr_fvarId_x21___closed__2(void){
_start:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3584_ = ((lean_object*)(l_Lean_Expr_fvarId_x21___closed__1));
v___x_3585_ = lean_unsigned_to_nat(14u);
v___x_3586_ = lean_unsigned_to_nat(1014u);
v___x_3587_ = ((lean_object*)(l_Lean_Expr_fvarId_x21___closed__0));
v___x_3588_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3589_ = l_mkPanicMessageWithDecl(v___x_3588_, v___x_3587_, v___x_3586_, v___x_3585_, v___x_3584_);
return v___x_3589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x21(lean_object* v_x_3590_){
_start:
{
if (lean_obj_tag(v_x_3590_) == 1)
{
lean_object* v_fvarId_3591_; 
v_fvarId_3591_ = lean_ctor_get(v_x_3590_, 0);
lean_inc(v_fvarId_3591_);
return v_fvarId_3591_;
}
else
{
lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3592_ = lean_obj_once(&l_Lean_Expr_fvarId_x21___closed__2, &l_Lean_Expr_fvarId_x21___closed__2_once, _init_l_Lean_Expr_fvarId_x21___closed__2);
v___x_3593_ = l_panic___at___00Lean_Expr_fvarId_x21_spec__0(v___x_3592_);
return v___x_3593_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x21___boxed(lean_object* v_x_3594_){
_start:
{
lean_object* v_res_3595_; 
v_res_3595_ = l_Lean_Expr_fvarId_x21(v_x_3594_);
lean_dec_ref(v_x_3594_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x3f(lean_object* v_x_3596_){
_start:
{
if (lean_obj_tag(v_x_3596_) == 1)
{
lean_object* v_fvarId_3597_; lean_object* v___x_3598_; 
v_fvarId_3597_ = lean_ctor_get(v_x_3596_, 0);
lean_inc(v_fvarId_3597_);
v___x_3598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3598_, 0, v_fvarId_3597_);
return v___x_3598_;
}
else
{
lean_object* v___x_3599_; 
v___x_3599_ = lean_box(0);
return v___x_3599_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x3f___boxed(lean_object* v_x_3600_){
_start:
{
lean_object* v_res_3601_; 
v_res_3601_ = l_Lean_Expr_fvarId_x3f(v_x_3600_);
lean_dec_ref(v_x_3600_);
return v_res_3601_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_mvarId_x21_spec__0(lean_object* v_msg_3602_){
_start:
{
lean_object* v___x_3603_; lean_object* v___x_3604_; 
v___x_3603_ = l_Lean_instInhabitedMVarId_default;
v___x_3604_ = lean_panic_fn_borrowed(v___x_3603_, v_msg_3602_);
return v___x_3604_;
}
}
static lean_object* _init_l_Lean_Expr_mvarId_x21___closed__2(void){
_start:
{
lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; 
v___x_3607_ = ((lean_object*)(l_Lean_Expr_mvarId_x21___closed__1));
v___x_3608_ = lean_unsigned_to_nat(14u);
v___x_3609_ = lean_unsigned_to_nat(1022u);
v___x_3610_ = ((lean_object*)(l_Lean_Expr_mvarId_x21___closed__0));
v___x_3611_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3612_ = l_mkPanicMessageWithDecl(v___x_3611_, v___x_3610_, v___x_3609_, v___x_3608_, v___x_3607_);
return v___x_3612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mvarId_x21(lean_object* v_x_3613_){
_start:
{
if (lean_obj_tag(v_x_3613_) == 2)
{
lean_object* v_mvarId_3614_; 
v_mvarId_3614_ = lean_ctor_get(v_x_3613_, 0);
lean_inc(v_mvarId_3614_);
return v_mvarId_3614_;
}
else
{
lean_object* v___x_3615_; lean_object* v___x_3616_; 
v___x_3615_ = lean_obj_once(&l_Lean_Expr_mvarId_x21___closed__2, &l_Lean_Expr_mvarId_x21___closed__2_once, _init_l_Lean_Expr_mvarId_x21___closed__2);
v___x_3616_ = l_panic___at___00Lean_Expr_mvarId_x21_spec__0(v___x_3615_);
return v___x_3616_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mvarId_x21___boxed(lean_object* v_x_3617_){
_start:
{
lean_object* v_res_3618_; 
v_res_3618_ = l_Lean_Expr_mvarId_x21(v_x_3617_);
lean_dec_ref(v_x_3617_);
return v_res_3618_;
}
}
static lean_object* _init_l_Lean_Expr_bindingName_x21___closed__2(void){
_start:
{
lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; 
v___x_3621_ = ((lean_object*)(l_Lean_Expr_bindingName_x21___closed__1));
v___x_3622_ = lean_unsigned_to_nat(23u);
v___x_3623_ = lean_unsigned_to_nat(1027u);
v___x_3624_ = ((lean_object*)(l_Lean_Expr_bindingName_x21___closed__0));
v___x_3625_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3626_ = l_mkPanicMessageWithDecl(v___x_3625_, v___x_3624_, v___x_3623_, v___x_3622_, v___x_3621_);
return v___x_3626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bindingName_x21(lean_object* v_x_3627_){
_start:
{
switch(lean_obj_tag(v_x_3627_))
{
case 7:
{
lean_object* v_binderName_3628_; 
v_binderName_3628_ = lean_ctor_get(v_x_3627_, 0);
lean_inc(v_binderName_3628_);
return v_binderName_3628_;
}
case 6:
{
lean_object* v_binderName_3629_; 
v_binderName_3629_ = lean_ctor_get(v_x_3627_, 0);
lean_inc(v_binderName_3629_);
return v_binderName_3629_;
}
default: 
{
lean_object* v___x_3630_; lean_object* v___x_3631_; 
v___x_3630_ = lean_obj_once(&l_Lean_Expr_bindingName_x21___closed__2, &l_Lean_Expr_bindingName_x21___closed__2_once, _init_l_Lean_Expr_bindingName_x21___closed__2);
v___x_3631_ = l_panic___at___00Lean_Expr_constName_x21_spec__0(v___x_3630_);
return v___x_3631_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bindingName_x21___boxed(lean_object* v_x_3632_){
_start:
{
lean_object* v_res_3633_; 
v_res_3633_ = l_Lean_Expr_bindingName_x21(v_x_3632_);
lean_dec_ref(v_x_3632_);
return v_res_3633_;
}
}
static lean_object* _init_l_Lean_Expr_bindingDomain_x21___closed__1(void){
_start:
{
lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; 
v___x_3635_ = ((lean_object*)(l_Lean_Expr_bindingName_x21___closed__1));
v___x_3636_ = lean_unsigned_to_nat(23u);
v___x_3637_ = lean_unsigned_to_nat(1032u);
v___x_3638_ = ((lean_object*)(l_Lean_Expr_bindingDomain_x21___closed__0));
v___x_3639_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3640_ = l_mkPanicMessageWithDecl(v___x_3639_, v___x_3638_, v___x_3637_, v___x_3636_, v___x_3635_);
return v___x_3640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bindingDomain_x21(lean_object* v_x_3641_){
_start:
{
switch(lean_obj_tag(v_x_3641_))
{
case 7:
{
lean_object* v_binderType_3642_; 
v_binderType_3642_ = lean_ctor_get(v_x_3641_, 1);
lean_inc_ref(v_binderType_3642_);
return v_binderType_3642_;
}
case 6:
{
lean_object* v_binderType_3643_; 
v_binderType_3643_ = lean_ctor_get(v_x_3641_, 1);
lean_inc_ref(v_binderType_3643_);
return v_binderType_3643_;
}
default: 
{
lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3644_ = lean_obj_once(&l_Lean_Expr_bindingDomain_x21___closed__1, &l_Lean_Expr_bindingDomain_x21___closed__1_once, _init_l_Lean_Expr_bindingDomain_x21___closed__1);
v___x_3645_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_3644_);
return v___x_3645_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bindingDomain_x21___boxed(lean_object* v_x_3646_){
_start:
{
lean_object* v_res_3647_; 
v_res_3647_ = l_Lean_Expr_bindingDomain_x21(v_x_3646_);
lean_dec_ref(v_x_3646_);
return v_res_3647_;
}
}
static lean_object* _init_l_Lean_Expr_bindingBody_x21___closed__1(void){
_start:
{
lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; 
v___x_3649_ = ((lean_object*)(l_Lean_Expr_bindingName_x21___closed__1));
v___x_3650_ = lean_unsigned_to_nat(23u);
v___x_3651_ = lean_unsigned_to_nat(1037u);
v___x_3652_ = ((lean_object*)(l_Lean_Expr_bindingBody_x21___closed__0));
v___x_3653_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3654_ = l_mkPanicMessageWithDecl(v___x_3653_, v___x_3652_, v___x_3651_, v___x_3650_, v___x_3649_);
return v___x_3654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bindingBody_x21(lean_object* v_x_3655_){
_start:
{
switch(lean_obj_tag(v_x_3655_))
{
case 7:
{
lean_object* v_body_3656_; 
v_body_3656_ = lean_ctor_get(v_x_3655_, 2);
lean_inc_ref(v_body_3656_);
return v_body_3656_;
}
case 6:
{
lean_object* v_body_3657_; 
v_body_3657_ = lean_ctor_get(v_x_3655_, 2);
lean_inc_ref(v_body_3657_);
return v_body_3657_;
}
default: 
{
lean_object* v___x_3658_; lean_object* v___x_3659_; 
v___x_3658_ = lean_obj_once(&l_Lean_Expr_bindingBody_x21___closed__1, &l_Lean_Expr_bindingBody_x21___closed__1_once, _init_l_Lean_Expr_bindingBody_x21___closed__1);
v___x_3659_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_3658_);
return v___x_3659_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bindingBody_x21___boxed(lean_object* v_x_3660_){
_start:
{
lean_object* v_res_3661_; 
v_res_3661_ = l_Lean_Expr_bindingBody_x21(v_x_3660_);
lean_dec_ref(v_x_3660_);
return v_res_3661_;
}
}
LEAN_EXPORT uint8_t l_panic___at___00Lean_Expr_bindingInfo_x21_spec__0(lean_object* v_msg_3662_){
_start:
{
uint8_t v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; uint8_t v___x_3666_; 
v___x_3663_ = 0;
v___x_3664_ = lean_box(v___x_3663_);
v___x_3665_ = lean_panic_fn_borrowed(v___x_3664_, v_msg_3662_);
lean_dec(v___x_3664_);
v___x_3666_ = lean_unbox(v___x_3665_);
lean_dec(v___x_3665_);
return v___x_3666_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_bindingInfo_x21_spec__0___boxed(lean_object* v_msg_3667_){
_start:
{
uint8_t v_res_3668_; lean_object* v_r_3669_; 
v_res_3668_ = l_panic___at___00Lean_Expr_bindingInfo_x21_spec__0(v_msg_3667_);
v_r_3669_ = lean_box(v_res_3668_);
return v_r_3669_;
}
}
static lean_object* _init_l_Lean_Expr_bindingInfo_x21___closed__1(void){
_start:
{
lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3671_ = ((lean_object*)(l_Lean_Expr_bindingName_x21___closed__1));
v___x_3672_ = lean_unsigned_to_nat(24u);
v___x_3673_ = lean_unsigned_to_nat(1042u);
v___x_3674_ = ((lean_object*)(l_Lean_Expr_bindingInfo_x21___closed__0));
v___x_3675_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3676_ = l_mkPanicMessageWithDecl(v___x_3675_, v___x_3674_, v___x_3673_, v___x_3672_, v___x_3671_);
return v___x_3676_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_bindingInfo_x21(lean_object* v_x_3677_){
_start:
{
switch(lean_obj_tag(v_x_3677_))
{
case 7:
{
uint8_t v_binderInfo_3678_; 
v_binderInfo_3678_ = lean_ctor_get_uint8(v_x_3677_, sizeof(void*)*3 + 8);
return v_binderInfo_3678_;
}
case 6:
{
uint8_t v_binderInfo_3679_; 
v_binderInfo_3679_ = lean_ctor_get_uint8(v_x_3677_, sizeof(void*)*3 + 8);
return v_binderInfo_3679_;
}
default: 
{
lean_object* v___x_3680_; uint8_t v___x_3681_; 
v___x_3680_ = lean_obj_once(&l_Lean_Expr_bindingInfo_x21___closed__1, &l_Lean_Expr_bindingInfo_x21___closed__1_once, _init_l_Lean_Expr_bindingInfo_x21___closed__1);
v___x_3681_ = l_panic___at___00Lean_Expr_bindingInfo_x21_spec__0(v___x_3680_);
return v___x_3681_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bindingInfo_x21___boxed(lean_object* v_x_3682_){
_start:
{
uint8_t v_res_3683_; lean_object* v_r_3684_; 
v_res_3683_ = l_Lean_Expr_bindingInfo_x21(v_x_3682_);
lean_dec_ref(v_x_3682_);
v_r_3684_ = lean_box(v_res_3683_);
return v_r_3684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallName___redArg(lean_object* v_x_3685_){
_start:
{
lean_object* v_binderName_3686_; 
v_binderName_3686_ = lean_ctor_get(v_x_3685_, 0);
lean_inc(v_binderName_3686_);
return v_binderName_3686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallName___redArg___boxed(lean_object* v_x_3687_){
_start:
{
lean_object* v_res_3688_; 
v_res_3688_ = l_Lean_Expr_forallName___redArg(v_x_3687_);
lean_dec_ref(v_x_3687_);
return v_res_3688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallName(lean_object* v_x_3689_, lean_object* v_x_3690_){
_start:
{
lean_object* v_binderName_3691_; 
v_binderName_3691_ = lean_ctor_get(v_x_3689_, 0);
lean_inc(v_binderName_3691_);
return v_binderName_3691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallName___boxed(lean_object* v_x_3692_, lean_object* v_x_3693_){
_start:
{
lean_object* v_res_3694_; 
v_res_3694_ = l_Lean_Expr_forallName(v_x_3692_, v_x_3693_);
lean_dec_ref(v_x_3692_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallDomain___redArg(lean_object* v_x_3695_){
_start:
{
lean_object* v_binderType_3696_; 
v_binderType_3696_ = lean_ctor_get(v_x_3695_, 1);
lean_inc_ref(v_binderType_3696_);
return v_binderType_3696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallDomain___redArg___boxed(lean_object* v_x_3697_){
_start:
{
lean_object* v_res_3698_; 
v_res_3698_ = l_Lean_Expr_forallDomain___redArg(v_x_3697_);
lean_dec_ref(v_x_3697_);
return v_res_3698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallDomain(lean_object* v_x_3699_, lean_object* v_x_3700_){
_start:
{
lean_object* v_binderType_3701_; 
v_binderType_3701_ = lean_ctor_get(v_x_3699_, 1);
lean_inc_ref(v_binderType_3701_);
return v_binderType_3701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallDomain___boxed(lean_object* v_x_3702_, lean_object* v_x_3703_){
_start:
{
lean_object* v_res_3704_; 
v_res_3704_ = l_Lean_Expr_forallDomain(v_x_3702_, v_x_3703_);
lean_dec_ref(v_x_3702_);
return v_res_3704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallBody___redArg(lean_object* v_x_3705_){
_start:
{
lean_object* v_body_3706_; 
v_body_3706_ = lean_ctor_get(v_x_3705_, 2);
lean_inc_ref(v_body_3706_);
return v_body_3706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallBody___redArg___boxed(lean_object* v_x_3707_){
_start:
{
lean_object* v_res_3708_; 
v_res_3708_ = l_Lean_Expr_forallBody___redArg(v_x_3707_);
lean_dec_ref(v_x_3707_);
return v_res_3708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallBody(lean_object* v_x_3709_, lean_object* v_x_3710_){
_start:
{
lean_object* v_body_3711_; 
v_body_3711_ = lean_ctor_get(v_x_3709_, 2);
lean_inc_ref(v_body_3711_);
return v_body_3711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallBody___boxed(lean_object* v_x_3712_, lean_object* v_x_3713_){
_start:
{
lean_object* v_res_3714_; 
v_res_3714_ = l_Lean_Expr_forallBody(v_x_3712_, v_x_3713_);
lean_dec_ref(v_x_3712_);
return v_res_3714_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_forallInfo___redArg(lean_object* v_x_3715_){
_start:
{
uint8_t v_binderInfo_3716_; 
v_binderInfo_3716_ = lean_ctor_get_uint8(v_x_3715_, sizeof(void*)*3 + 8);
return v_binderInfo_3716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallInfo___redArg___boxed(lean_object* v_x_3717_){
_start:
{
uint8_t v_res_3718_; lean_object* v_r_3719_; 
v_res_3718_ = l_Lean_Expr_forallInfo___redArg(v_x_3717_);
lean_dec_ref(v_x_3717_);
v_r_3719_ = lean_box(v_res_3718_);
return v_r_3719_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_forallInfo(lean_object* v_x_3720_, lean_object* v_x_3721_){
_start:
{
uint8_t v_binderInfo_3722_; 
v_binderInfo_3722_ = lean_ctor_get_uint8(v_x_3720_, sizeof(void*)*3 + 8);
return v_binderInfo_3722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallInfo___boxed(lean_object* v_x_3723_, lean_object* v_x_3724_){
_start:
{
uint8_t v_res_3725_; lean_object* v_r_3726_; 
v_res_3725_ = l_Lean_Expr_forallInfo(v_x_3723_, v_x_3724_);
lean_dec_ref(v_x_3723_);
v_r_3726_ = lean_box(v_res_3725_);
return v_r_3726_;
}
}
static lean_object* _init_l_Lean_Expr_letName_x21___closed__2(void){
_start:
{
lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3729_ = ((lean_object*)(l_Lean_Expr_letName_x21___closed__1));
v___x_3730_ = lean_unsigned_to_nat(17u);
v___x_3731_ = lean_unsigned_to_nat(1058u);
v___x_3732_ = ((lean_object*)(l_Lean_Expr_letName_x21___closed__0));
v___x_3733_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3734_ = l_mkPanicMessageWithDecl(v___x_3733_, v___x_3732_, v___x_3731_, v___x_3730_, v___x_3729_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letName_x21(lean_object* v_x_3735_){
_start:
{
if (lean_obj_tag(v_x_3735_) == 8)
{
lean_object* v_declName_3736_; 
v_declName_3736_ = lean_ctor_get(v_x_3735_, 0);
lean_inc(v_declName_3736_);
return v_declName_3736_;
}
else
{
lean_object* v___x_3737_; lean_object* v___x_3738_; 
v___x_3737_ = lean_obj_once(&l_Lean_Expr_letName_x21___closed__2, &l_Lean_Expr_letName_x21___closed__2_once, _init_l_Lean_Expr_letName_x21___closed__2);
v___x_3738_ = l_panic___at___00Lean_Expr_constName_x21_spec__0(v___x_3737_);
return v___x_3738_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letName_x21___boxed(lean_object* v_x_3739_){
_start:
{
lean_object* v_res_3740_; 
v_res_3740_ = l_Lean_Expr_letName_x21(v_x_3739_);
lean_dec_ref(v_x_3739_);
return v_res_3740_;
}
}
static lean_object* _init_l_Lean_Expr_letType_x21___closed__1(void){
_start:
{
lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; 
v___x_3742_ = ((lean_object*)(l_Lean_Expr_letName_x21___closed__1));
v___x_3743_ = lean_unsigned_to_nat(19u);
v___x_3744_ = lean_unsigned_to_nat(1062u);
v___x_3745_ = ((lean_object*)(l_Lean_Expr_letType_x21___closed__0));
v___x_3746_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3747_ = l_mkPanicMessageWithDecl(v___x_3746_, v___x_3745_, v___x_3744_, v___x_3743_, v___x_3742_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letType_x21(lean_object* v_x_3748_){
_start:
{
if (lean_obj_tag(v_x_3748_) == 8)
{
lean_object* v_type_3749_; 
v_type_3749_ = lean_ctor_get(v_x_3748_, 1);
lean_inc_ref(v_type_3749_);
return v_type_3749_;
}
else
{
lean_object* v___x_3750_; lean_object* v___x_3751_; 
v___x_3750_ = lean_obj_once(&l_Lean_Expr_letType_x21___closed__1, &l_Lean_Expr_letType_x21___closed__1_once, _init_l_Lean_Expr_letType_x21___closed__1);
v___x_3751_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_3750_);
return v___x_3751_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letType_x21___boxed(lean_object* v_x_3752_){
_start:
{
lean_object* v_res_3753_; 
v_res_3753_ = l_Lean_Expr_letType_x21(v_x_3752_);
lean_dec_ref(v_x_3752_);
return v_res_3753_;
}
}
static lean_object* _init_l_Lean_Expr_letValue_x21___closed__1(void){
_start:
{
lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3755_ = ((lean_object*)(l_Lean_Expr_letName_x21___closed__1));
v___x_3756_ = lean_unsigned_to_nat(21u);
v___x_3757_ = lean_unsigned_to_nat(1066u);
v___x_3758_ = ((lean_object*)(l_Lean_Expr_letValue_x21___closed__0));
v___x_3759_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3760_ = l_mkPanicMessageWithDecl(v___x_3759_, v___x_3758_, v___x_3757_, v___x_3756_, v___x_3755_);
return v___x_3760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letValue_x21(lean_object* v_x_3761_){
_start:
{
if (lean_obj_tag(v_x_3761_) == 8)
{
lean_object* v_value_3762_; 
v_value_3762_ = lean_ctor_get(v_x_3761_, 2);
lean_inc_ref(v_value_3762_);
return v_value_3762_;
}
else
{
lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3763_ = lean_obj_once(&l_Lean_Expr_letValue_x21___closed__1, &l_Lean_Expr_letValue_x21___closed__1_once, _init_l_Lean_Expr_letValue_x21___closed__1);
v___x_3764_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_3763_);
return v___x_3764_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letValue_x21___boxed(lean_object* v_x_3765_){
_start:
{
lean_object* v_res_3766_; 
v_res_3766_ = l_Lean_Expr_letValue_x21(v_x_3765_);
lean_dec_ref(v_x_3765_);
return v_res_3766_;
}
}
static lean_object* _init_l_Lean_Expr_letBody_x21___closed__1(void){
_start:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3768_ = ((lean_object*)(l_Lean_Expr_letName_x21___closed__1));
v___x_3769_ = lean_unsigned_to_nat(23u);
v___x_3770_ = lean_unsigned_to_nat(1070u);
v___x_3771_ = ((lean_object*)(l_Lean_Expr_letBody_x21___closed__0));
v___x_3772_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3773_ = l_mkPanicMessageWithDecl(v___x_3772_, v___x_3771_, v___x_3770_, v___x_3769_, v___x_3768_);
return v___x_3773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letBody_x21(lean_object* v_x_3774_){
_start:
{
if (lean_obj_tag(v_x_3774_) == 8)
{
lean_object* v_body_3775_; 
v_body_3775_ = lean_ctor_get(v_x_3774_, 3);
lean_inc_ref(v_body_3775_);
return v_body_3775_;
}
else
{
lean_object* v___x_3776_; lean_object* v___x_3777_; 
v___x_3776_ = lean_obj_once(&l_Lean_Expr_letBody_x21___closed__1, &l_Lean_Expr_letBody_x21___closed__1_once, _init_l_Lean_Expr_letBody_x21___closed__1);
v___x_3777_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_3776_);
return v___x_3777_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letBody_x21___boxed(lean_object* v_x_3778_){
_start:
{
lean_object* v_res_3779_; 
v_res_3779_ = l_Lean_Expr_letBody_x21(v_x_3778_);
lean_dec_ref(v_x_3778_);
return v_res_3779_;
}
}
LEAN_EXPORT uint8_t l_panic___at___00Lean_Expr_letNondep_x21_spec__0(lean_object* v_msg_3780_){
_start:
{
uint8_t v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; uint8_t v___x_3784_; 
v___x_3781_ = 0;
v___x_3782_ = lean_box(v___x_3781_);
v___x_3783_ = lean_panic_fn_borrowed(v___x_3782_, v_msg_3780_);
lean_dec(v___x_3782_);
v___x_3784_ = lean_unbox(v___x_3783_);
lean_dec(v___x_3783_);
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_letNondep_x21_spec__0___boxed(lean_object* v_msg_3785_){
_start:
{
uint8_t v_res_3786_; lean_object* v_r_3787_; 
v_res_3786_ = l_panic___at___00Lean_Expr_letNondep_x21_spec__0(v_msg_3785_);
v_r_3787_ = lean_box(v_res_3786_);
return v_r_3787_;
}
}
static lean_object* _init_l_Lean_Expr_letNondep_x21___closed__1(void){
_start:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; 
v___x_3789_ = ((lean_object*)(l_Lean_Expr_letName_x21___closed__1));
v___x_3790_ = lean_unsigned_to_nat(27u);
v___x_3791_ = lean_unsigned_to_nat(1074u);
v___x_3792_ = ((lean_object*)(l_Lean_Expr_letNondep_x21___closed__0));
v___x_3793_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3794_ = l_mkPanicMessageWithDecl(v___x_3793_, v___x_3792_, v___x_3791_, v___x_3790_, v___x_3789_);
return v___x_3794_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_letNondep_x21(lean_object* v_x_3795_){
_start:
{
if (lean_obj_tag(v_x_3795_) == 8)
{
uint8_t v_nondep_3796_; 
v_nondep_3796_ = lean_ctor_get_uint8(v_x_3795_, sizeof(void*)*4 + 8);
return v_nondep_3796_;
}
else
{
lean_object* v___x_3797_; uint8_t v___x_3798_; 
v___x_3797_ = lean_obj_once(&l_Lean_Expr_letNondep_x21___closed__1, &l_Lean_Expr_letNondep_x21___closed__1_once, _init_l_Lean_Expr_letNondep_x21___closed__1);
v___x_3798_ = l_panic___at___00Lean_Expr_letNondep_x21_spec__0(v___x_3797_);
return v___x_3798_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letNondep_x21___boxed(lean_object* v_x_3799_){
_start:
{
uint8_t v_res_3800_; lean_object* v_r_3801_; 
v_res_3800_ = l_Lean_Expr_letNondep_x21(v_x_3799_);
lean_dec_ref(v_x_3799_);
v_r_3801_ = lean_box(v_res_3800_);
return v_r_3801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_consumeMData(lean_object* v_x_3802_){
_start:
{
if (lean_obj_tag(v_x_3802_) == 10)
{
lean_object* v_expr_3803_; 
v_expr_3803_ = lean_ctor_get(v_x_3802_, 1);
v_x_3802_ = v_expr_3803_;
goto _start;
}
else
{
lean_inc_ref(v_x_3802_);
return v_x_3802_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_consumeMData___boxed(lean_object* v_x_3805_){
_start:
{
lean_object* v_res_3806_; 
v_res_3806_ = l_Lean_Expr_consumeMData(v_x_3805_);
lean_dec_ref(v_x_3805_);
return v_res_3806_;
}
}
static lean_object* _init_l_Lean_Expr_mdataExpr_x21___closed__2(void){
_start:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v___x_3809_ = ((lean_object*)(l_Lean_Expr_mdataExpr_x21___closed__1));
v___x_3810_ = lean_unsigned_to_nat(17u);
v___x_3811_ = lean_unsigned_to_nat(1082u);
v___x_3812_ = ((lean_object*)(l_Lean_Expr_mdataExpr_x21___closed__0));
v___x_3813_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3814_ = l_mkPanicMessageWithDecl(v___x_3813_, v___x_3812_, v___x_3811_, v___x_3810_, v___x_3809_);
return v___x_3814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mdataExpr_x21(lean_object* v_x_3815_){
_start:
{
if (lean_obj_tag(v_x_3815_) == 10)
{
lean_object* v_expr_3816_; 
v_expr_3816_ = lean_ctor_get(v_x_3815_, 1);
lean_inc_ref(v_expr_3816_);
return v_expr_3816_;
}
else
{
lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___x_3817_ = lean_obj_once(&l_Lean_Expr_mdataExpr_x21___closed__2, &l_Lean_Expr_mdataExpr_x21___closed__2_once, _init_l_Lean_Expr_mdataExpr_x21___closed__2);
v___x_3818_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_3817_);
return v___x_3818_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mdataExpr_x21___boxed(lean_object* v_x_3819_){
_start:
{
lean_object* v_res_3820_; 
v_res_3820_ = l_Lean_Expr_mdataExpr_x21(v_x_3819_);
lean_dec_ref(v_x_3819_);
return v_res_3820_;
}
}
static lean_object* _init_l_Lean_Expr_projExpr_x21___closed__2(void){
_start:
{
lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; 
v___x_3823_ = ((lean_object*)(l_Lean_Expr_projExpr_x21___closed__1));
v___x_3824_ = lean_unsigned_to_nat(18u);
v___x_3825_ = lean_unsigned_to_nat(1086u);
v___x_3826_ = ((lean_object*)(l_Lean_Expr_projExpr_x21___closed__0));
v___x_3827_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3828_ = l_mkPanicMessageWithDecl(v___x_3827_, v___x_3826_, v___x_3825_, v___x_3824_, v___x_3823_);
return v___x_3828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_projExpr_x21(lean_object* v_x_3829_){
_start:
{
if (lean_obj_tag(v_x_3829_) == 11)
{
lean_object* v_struct_3830_; 
v_struct_3830_ = lean_ctor_get(v_x_3829_, 2);
lean_inc_ref(v_struct_3830_);
return v_struct_3830_;
}
else
{
lean_object* v___x_3831_; lean_object* v___x_3832_; 
v___x_3831_ = lean_obj_once(&l_Lean_Expr_projExpr_x21___closed__2, &l_Lean_Expr_projExpr_x21___closed__2_once, _init_l_Lean_Expr_projExpr_x21___closed__2);
v___x_3832_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_3831_);
return v___x_3832_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_projExpr_x21___boxed(lean_object* v_x_3833_){
_start:
{
lean_object* v_res_3834_; 
v_res_3834_ = l_Lean_Expr_projExpr_x21(v_x_3833_);
lean_dec_ref(v_x_3833_);
return v_res_3834_;
}
}
static lean_object* _init_l_Lean_Expr_projIdx_x21___closed__1(void){
_start:
{
lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; 
v___x_3836_ = ((lean_object*)(l_Lean_Expr_projExpr_x21___closed__1));
v___x_3837_ = lean_unsigned_to_nat(18u);
v___x_3838_ = lean_unsigned_to_nat(1090u);
v___x_3839_ = ((lean_object*)(l_Lean_Expr_projIdx_x21___closed__0));
v___x_3840_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_3841_ = l_mkPanicMessageWithDecl(v___x_3840_, v___x_3839_, v___x_3838_, v___x_3837_, v___x_3836_);
return v___x_3841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_projIdx_x21(lean_object* v_x_3842_){
_start:
{
if (lean_obj_tag(v_x_3842_) == 11)
{
lean_object* v_idx_3843_; 
v_idx_3843_ = lean_ctor_get(v_x_3842_, 1);
lean_inc(v_idx_3843_);
return v_idx_3843_;
}
else
{
lean_object* v___x_3844_; lean_object* v___x_3845_; 
v___x_3844_ = lean_obj_once(&l_Lean_Expr_projIdx_x21___closed__1, &l_Lean_Expr_projIdx_x21___closed__1_once, _init_l_Lean_Expr_projIdx_x21___closed__1);
v___x_3845_ = l_panic___at___00Lean_Expr_bvarIdx_x21_spec__0(v___x_3844_);
return v___x_3845_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_projIdx_x21___boxed(lean_object* v_x_3846_){
_start:
{
lean_object* v_res_3847_; 
v_res_3847_ = l_Lean_Expr_projIdx_x21(v_x_3846_);
lean_dec_ref(v_x_3846_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBody(lean_object* v_x_3848_){
_start:
{
if (lean_obj_tag(v_x_3848_) == 7)
{
lean_object* v_body_3849_; 
v_body_3849_ = lean_ctor_get(v_x_3848_, 2);
v_x_3848_ = v_body_3849_;
goto _start;
}
else
{
lean_inc_ref(v_x_3848_);
return v_x_3848_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBody___boxed(lean_object* v_x_3851_){
_start:
{
lean_object* v_res_3852_; 
v_res_3852_ = l_Lean_Expr_getForallBody(v_x_3851_);
lean_dec_ref(v_x_3851_);
return v_res_3852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBodyMaxDepth(lean_object* v_x_3853_, lean_object* v_x_3854_){
_start:
{
lean_object* v_zero_3855_; uint8_t v_isZero_3856_; 
v_zero_3855_ = lean_unsigned_to_nat(0u);
v_isZero_3856_ = lean_nat_dec_eq(v_x_3853_, v_zero_3855_);
if (v_isZero_3856_ == 1)
{
lean_dec(v_x_3853_);
lean_inc_ref(v_x_3854_);
return v_x_3854_;
}
else
{
if (lean_obj_tag(v_x_3854_) == 7)
{
lean_object* v_body_3857_; lean_object* v_one_3858_; lean_object* v_n_3859_; 
v_body_3857_ = lean_ctor_get(v_x_3854_, 2);
v_one_3858_ = lean_unsigned_to_nat(1u);
v_n_3859_ = lean_nat_sub(v_x_3853_, v_one_3858_);
lean_dec(v_x_3853_);
v_x_3853_ = v_n_3859_;
v_x_3854_ = v_body_3857_;
goto _start;
}
else
{
lean_dec(v_x_3853_);
lean_inc_ref(v_x_3854_);
return v_x_3854_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBodyMaxDepth___boxed(lean_object* v_x_3861_, lean_object* v_x_3862_){
_start:
{
lean_object* v_res_3863_; 
v_res_3863_ = l_Lean_Expr_getForallBodyMaxDepth(v_x_3861_, v_x_3862_);
lean_dec_ref(v_x_3862_);
return v_res_3863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBinderNames(lean_object* v_x_3864_){
_start:
{
if (lean_obj_tag(v_x_3864_) == 7)
{
lean_object* v_binderName_3865_; lean_object* v_body_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; 
v_binderName_3865_ = lean_ctor_get(v_x_3864_, 0);
v_body_3866_ = lean_ctor_get(v_x_3864_, 2);
v___x_3867_ = l_Lean_Expr_getForallBinderNames(v_body_3866_);
lean_inc(v_binderName_3865_);
v___x_3868_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3868_, 0, v_binderName_3865_);
lean_ctor_set(v___x_3868_, 1, v___x_3867_);
return v___x_3868_;
}
else
{
lean_object* v___x_3869_; 
v___x_3869_ = lean_box(0);
return v___x_3869_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getForallBinderNames___boxed(lean_object* v_x_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_Lean_Expr_getForallBinderNames(v_x_3870_);
lean_dec_ref(v_x_3870_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getNumHeadForalls(lean_object* v_x_3872_){
_start:
{
switch(lean_obj_tag(v_x_3872_))
{
case 10:
{
lean_object* v_expr_3873_; 
v_expr_3873_ = lean_ctor_get(v_x_3872_, 1);
v_x_3872_ = v_expr_3873_;
goto _start;
}
case 7:
{
lean_object* v_body_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; 
v_body_3875_ = lean_ctor_get(v_x_3872_, 2);
v___x_3876_ = l_Lean_Expr_getNumHeadForalls(v_body_3875_);
v___x_3877_ = lean_unsigned_to_nat(1u);
v___x_3878_ = lean_nat_add(v___x_3876_, v___x_3877_);
lean_dec(v___x_3876_);
return v___x_3878_;
}
default: 
{
lean_object* v___x_3879_; 
v___x_3879_ = lean_unsigned_to_nat(0u);
return v___x_3879_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getNumHeadForalls___boxed(lean_object* v_x_3880_){
_start:
{
lean_object* v_res_3881_; 
v_res_3881_ = l_Lean_Expr_getNumHeadForalls(v_x_3880_);
lean_dec_ref(v_x_3880_);
return v_res_3881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppFn(lean_object* v_x_3882_){
_start:
{
if (lean_obj_tag(v_x_3882_) == 5)
{
lean_object* v_fn_3883_; 
v_fn_3883_ = lean_ctor_get(v_x_3882_, 0);
v_x_3882_ = v_fn_3883_;
goto _start;
}
else
{
lean_inc_ref(v_x_3882_);
return v_x_3882_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppFn___boxed(lean_object* v_x_3885_){
_start:
{
lean_object* v_res_3886_; 
v_res_3886_ = l_Lean_Expr_getAppFn(v_x_3885_);
lean_dec_ref(v_x_3885_);
return v_res_3886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppFn_x27(lean_object* v_x_3887_){
_start:
{
switch(lean_obj_tag(v_x_3887_))
{
case 5:
{
lean_object* v_fn_3888_; 
v_fn_3888_ = lean_ctor_get(v_x_3887_, 0);
v_x_3887_ = v_fn_3888_;
goto _start;
}
case 10:
{
lean_object* v_expr_3890_; 
v_expr_3890_ = lean_ctor_get(v_x_3887_, 1);
v_x_3887_ = v_expr_3890_;
goto _start;
}
default: 
{
lean_inc_ref(v_x_3887_);
return v_x_3887_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppFn_x27___boxed(lean_object* v_x_3892_){
_start:
{
lean_object* v_res_3893_; 
v_res_3893_ = l_Lean_Expr_getAppFn_x27(v_x_3892_);
lean_dec_ref(v_x_3892_);
return v_res_3893_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isAppOf(lean_object* v_e_3894_, lean_object* v_n_3895_){
_start:
{
lean_object* v___x_3896_; 
v___x_3896_ = l_Lean_Expr_getAppFn(v_e_3894_);
if (lean_obj_tag(v___x_3896_) == 4)
{
lean_object* v_declName_3897_; uint8_t v___x_3898_; 
v_declName_3897_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_declName_3897_);
lean_dec_ref_known(v___x_3896_, 2);
v___x_3898_ = lean_name_eq(v_declName_3897_, v_n_3895_);
lean_dec(v_declName_3897_);
return v___x_3898_;
}
else
{
uint8_t v___x_3899_; 
lean_dec_ref(v___x_3896_);
v___x_3899_ = 0;
return v___x_3899_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isAppOf___boxed(lean_object* v_e_3900_, lean_object* v_n_3901_){
_start:
{
uint8_t v_res_3902_; lean_object* v_r_3903_; 
v_res_3902_ = l_Lean_Expr_isAppOf(v_e_3900_, v_n_3901_);
lean_dec(v_n_3901_);
lean_dec_ref(v_e_3900_);
v_r_3903_ = lean_box(v_res_3902_);
return v_r_3903_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isAppOfArity(lean_object* v_x_3904_, lean_object* v_x_3905_, lean_object* v_x_3906_){
_start:
{
switch(lean_obj_tag(v_x_3904_))
{
case 4:
{
lean_object* v_declName_3907_; lean_object* v___x_3908_; uint8_t v___x_3909_; 
v_declName_3907_ = lean_ctor_get(v_x_3904_, 0);
v___x_3908_ = lean_unsigned_to_nat(0u);
v___x_3909_ = lean_nat_dec_eq(v_x_3906_, v___x_3908_);
lean_dec(v_x_3906_);
if (v___x_3909_ == 0)
{
return v___x_3909_;
}
else
{
uint8_t v___x_3910_; 
v___x_3910_ = lean_name_eq(v_declName_3907_, v_x_3905_);
return v___x_3910_;
}
}
case 5:
{
lean_object* v_fn_3911_; lean_object* v_zero_3912_; uint8_t v_isZero_3913_; 
v_fn_3911_ = lean_ctor_get(v_x_3904_, 0);
v_zero_3912_ = lean_unsigned_to_nat(0u);
v_isZero_3913_ = lean_nat_dec_eq(v_x_3906_, v_zero_3912_);
if (v_isZero_3913_ == 0)
{
lean_object* v_one_3914_; lean_object* v_n_3915_; 
v_one_3914_ = lean_unsigned_to_nat(1u);
v_n_3915_ = lean_nat_sub(v_x_3906_, v_one_3914_);
lean_dec(v_x_3906_);
v_x_3904_ = v_fn_3911_;
v_x_3906_ = v_n_3915_;
goto _start;
}
else
{
uint8_t v___x_3917_; 
lean_dec(v_x_3906_);
v___x_3917_ = 0;
return v___x_3917_;
}
}
default: 
{
uint8_t v___x_3918_; 
lean_dec(v_x_3906_);
v___x_3918_ = 0;
return v___x_3918_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isAppOfArity___boxed(lean_object* v_x_3919_, lean_object* v_x_3920_, lean_object* v_x_3921_){
_start:
{
uint8_t v_res_3922_; lean_object* v_r_3923_; 
v_res_3922_ = l_Lean_Expr_isAppOfArity(v_x_3919_, v_x_3920_, v_x_3921_);
lean_dec(v_x_3920_);
lean_dec_ref(v_x_3919_);
v_r_3923_ = lean_box(v_res_3922_);
return v_r_3923_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isAppOfArity_x27(lean_object* v_x_3924_, lean_object* v_x_3925_, lean_object* v_x_3926_){
_start:
{
switch(lean_obj_tag(v_x_3924_))
{
case 10:
{
lean_object* v_expr_3927_; 
v_expr_3927_ = lean_ctor_get(v_x_3924_, 1);
v_x_3924_ = v_expr_3927_;
goto _start;
}
case 4:
{
lean_object* v_declName_3929_; lean_object* v___x_3930_; uint8_t v___x_3931_; 
v_declName_3929_ = lean_ctor_get(v_x_3924_, 0);
v___x_3930_ = lean_unsigned_to_nat(0u);
v___x_3931_ = lean_nat_dec_eq(v_x_3926_, v___x_3930_);
lean_dec(v_x_3926_);
if (v___x_3931_ == 0)
{
return v___x_3931_;
}
else
{
uint8_t v___x_3932_; 
v___x_3932_ = lean_name_eq(v_declName_3929_, v_x_3925_);
return v___x_3932_;
}
}
case 5:
{
lean_object* v_fn_3933_; lean_object* v_zero_3934_; uint8_t v_isZero_3935_; 
v_fn_3933_ = lean_ctor_get(v_x_3924_, 0);
v_zero_3934_ = lean_unsigned_to_nat(0u);
v_isZero_3935_ = lean_nat_dec_eq(v_x_3926_, v_zero_3934_);
if (v_isZero_3935_ == 0)
{
lean_object* v_one_3936_; lean_object* v_n_3937_; 
v_one_3936_ = lean_unsigned_to_nat(1u);
v_n_3937_ = lean_nat_sub(v_x_3926_, v_one_3936_);
lean_dec(v_x_3926_);
v_x_3924_ = v_fn_3933_;
v_x_3926_ = v_n_3937_;
goto _start;
}
else
{
uint8_t v___x_3939_; 
lean_dec(v_x_3926_);
v___x_3939_ = 0;
return v___x_3939_;
}
}
default: 
{
uint8_t v___x_3940_; 
lean_dec(v_x_3926_);
v___x_3940_ = 0;
return v___x_3940_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isAppOfArity_x27___boxed(lean_object* v_x_3941_, lean_object* v_x_3942_, lean_object* v_x_3943_){
_start:
{
uint8_t v_res_3944_; lean_object* v_r_3945_; 
v_res_3944_ = l_Lean_Expr_isAppOfArity_x27(v_x_3941_, v_x_3942_, v_x_3943_);
lean_dec(v_x_3942_);
lean_dec_ref(v_x_3941_);
v_r_3945_ = lean_box(v_res_3944_);
return v_r_3945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(lean_object* v_x_3946_, lean_object* v_x_3947_){
_start:
{
if (lean_obj_tag(v_x_3946_) == 5)
{
lean_object* v_fn_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; 
v_fn_3948_ = lean_ctor_get(v_x_3946_, 0);
v___x_3949_ = lean_unsigned_to_nat(1u);
v___x_3950_ = lean_nat_add(v_x_3947_, v___x_3949_);
lean_dec(v_x_3947_);
v_x_3946_ = v_fn_3948_;
v_x_3947_ = v___x_3950_;
goto _start;
}
else
{
return v_x_3947_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux___boxed(lean_object* v_x_3952_, lean_object* v_x_3953_){
_start:
{
lean_object* v_res_3954_; 
v_res_3954_ = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(v_x_3952_, v_x_3953_);
lean_dec_ref(v_x_3952_);
return v_res_3954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppNumArgs(lean_object* v_e_3955_){
_start:
{
lean_object* v___x_3956_; lean_object* v___x_3957_; 
v___x_3956_ = lean_unsigned_to_nat(0u);
v___x_3957_ = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(v_e_3955_, v___x_3956_);
return v___x_3957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppNumArgs___boxed(lean_object* v_e_3958_){
_start:
{
lean_object* v_res_3959_; 
v_res_3959_ = l_Lean_Expr_getAppNumArgs(v_e_3958_);
lean_dec_ref(v_e_3958_);
return v_res_3959_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgs_x27_go(lean_object* v_a_3960_, lean_object* v_a_3961_){
_start:
{
switch(lean_obj_tag(v_a_3960_))
{
case 10:
{
lean_object* v_expr_3962_; 
v_expr_3962_ = lean_ctor_get(v_a_3960_, 1);
v_a_3960_ = v_expr_3962_;
goto _start;
}
case 5:
{
lean_object* v_fn_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
v_fn_3964_ = lean_ctor_get(v_a_3960_, 0);
v___x_3965_ = lean_unsigned_to_nat(1u);
v___x_3966_ = lean_nat_add(v_a_3961_, v___x_3965_);
lean_dec(v_a_3961_);
v_a_3960_ = v_fn_3964_;
v_a_3961_ = v___x_3966_;
goto _start;
}
default: 
{
return v_a_3961_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgs_x27_go___boxed(lean_object* v_a_3968_, lean_object* v_a_3969_){
_start:
{
lean_object* v_res_3970_; 
v_res_3970_ = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgs_x27_go(v_a_3968_, v_a_3969_);
lean_dec_ref(v_a_3968_);
return v_res_3970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppNumArgs_x27(lean_object* v_e_3971_){
_start:
{
lean_object* v___x_3972_; lean_object* v___x_3973_; 
v___x_3972_ = lean_unsigned_to_nat(0u);
v___x_3973_ = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgs_x27_go(v_e_3971_, v___x_3972_);
return v___x_3973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppNumArgs_x27___boxed(lean_object* v_e_3974_){
_start:
{
lean_object* v_res_3975_; 
v_res_3975_ = l_Lean_Expr_getAppNumArgs_x27(v_e_3974_);
lean_dec_ref(v_e_3974_);
return v_res_3975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getBoundedAppFn(lean_object* v_x_3976_, lean_object* v_x_3977_){
_start:
{
lean_object* v_zero_3978_; uint8_t v_isZero_3979_; 
v_zero_3978_ = lean_unsigned_to_nat(0u);
v_isZero_3979_ = lean_nat_dec_eq(v_x_3976_, v_zero_3978_);
if (v_isZero_3979_ == 0)
{
if (lean_obj_tag(v_x_3977_) == 5)
{
lean_object* v_fn_3980_; lean_object* v_one_3981_; lean_object* v_n_3982_; 
v_fn_3980_ = lean_ctor_get(v_x_3977_, 0);
v_one_3981_ = lean_unsigned_to_nat(1u);
v_n_3982_ = lean_nat_sub(v_x_3976_, v_one_3981_);
lean_dec(v_x_3976_);
v_x_3976_ = v_n_3982_;
v_x_3977_ = v_fn_3980_;
goto _start;
}
else
{
lean_dec(v_x_3976_);
lean_inc_ref(v_x_3977_);
return v_x_3977_;
}
}
else
{
lean_dec(v_x_3976_);
lean_inc_ref(v_x_3977_);
return v_x_3977_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getBoundedAppFn___boxed(lean_object* v_x_3984_, lean_object* v_x_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Lean_Expr_getBoundedAppFn(v_x_3984_, v_x_3985_);
lean_dec_ref(v_x_3985_);
return v_res_3986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object* v_x_3987_, lean_object* v_x_3988_, lean_object* v_x_3989_){
_start:
{
if (lean_obj_tag(v_x_3987_) == 5)
{
lean_object* v_fn_3990_; lean_object* v_arg_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; 
v_fn_3990_ = lean_ctor_get(v_x_3987_, 0);
lean_inc_ref(v_fn_3990_);
v_arg_3991_ = lean_ctor_get(v_x_3987_, 1);
lean_inc_ref(v_arg_3991_);
lean_dec_ref_known(v_x_3987_, 2);
v___x_3992_ = lean_array_set(v_x_3988_, v_x_3989_, v_arg_3991_);
v___x_3993_ = lean_unsigned_to_nat(1u);
v___x_3994_ = lean_nat_sub(v_x_3989_, v___x_3993_);
lean_dec(v_x_3989_);
v_x_3987_ = v_fn_3990_;
v_x_3988_ = v___x_3992_;
v_x_3989_ = v___x_3994_;
goto _start;
}
else
{
lean_dec(v_x_3989_);
lean_dec_ref(v_x_3987_);
return v_x_3988_;
}
}
}
static lean_object* _init_l_Lean_Expr_getAppArgs___closed__0(void){
_start:
{
lean_object* v___x_3996_; lean_object* v_dummy_3997_; 
v___x_3996_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__3, &l_Lean_mkNatLitCore___closed__3_once, _init_l_Lean_mkNatLitCore___closed__3);
v_dummy_3997_ = l_Lean_Expr_sort___override(v___x_3996_);
return v_dummy_3997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppArgs(lean_object* v_e_3998_){
_start:
{
lean_object* v_dummy_3999_; lean_object* v_nargs_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; 
v_dummy_3999_ = lean_obj_once(&l_Lean_Expr_getAppArgs___closed__0, &l_Lean_Expr_getAppArgs___closed__0_once, _init_l_Lean_Expr_getAppArgs___closed__0);
v_nargs_4000_ = l_Lean_Expr_getAppNumArgs(v_e_3998_);
lean_inc(v_nargs_4000_);
v___x_4001_ = lean_mk_array(v_nargs_4000_, v_dummy_3999_);
v___x_4002_ = lean_unsigned_to_nat(1u);
v___x_4003_ = lean_nat_sub(v_nargs_4000_, v___x_4002_);
lean_dec(v_nargs_4000_);
v___x_4004_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3998_, v___x_4001_, v___x_4003_);
return v___x_4004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getBoundedAppArgsAux(lean_object* v_x_4005_, lean_object* v_x_4006_, lean_object* v_x_4007_){
_start:
{
if (lean_obj_tag(v_x_4005_) == 5)
{
lean_object* v_fn_4008_; lean_object* v_arg_4009_; lean_object* v_zero_4010_; uint8_t v_isZero_4011_; 
v_fn_4008_ = lean_ctor_get(v_x_4005_, 0);
lean_inc_ref(v_fn_4008_);
v_arg_4009_ = lean_ctor_get(v_x_4005_, 1);
lean_inc_ref(v_arg_4009_);
lean_dec_ref_known(v_x_4005_, 2);
v_zero_4010_ = lean_unsigned_to_nat(0u);
v_isZero_4011_ = lean_nat_dec_eq(v_x_4007_, v_zero_4010_);
if (v_isZero_4011_ == 0)
{
lean_object* v_one_4012_; lean_object* v_n_4013_; lean_object* v___x_4014_; 
v_one_4012_ = lean_unsigned_to_nat(1u);
v_n_4013_ = lean_nat_sub(v_x_4007_, v_one_4012_);
lean_dec(v_x_4007_);
v___x_4014_ = lean_array_set(v_x_4006_, v_n_4013_, v_arg_4009_);
v_x_4005_ = v_fn_4008_;
v_x_4006_ = v___x_4014_;
v_x_4007_ = v_n_4013_;
goto _start;
}
else
{
lean_dec_ref(v_arg_4009_);
lean_dec_ref(v_fn_4008_);
lean_dec(v_x_4007_);
return v_x_4006_;
}
}
else
{
lean_dec(v_x_4007_);
lean_dec_ref(v_x_4005_);
return v_x_4006_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getBoundedAppArgs(lean_object* v_maxArgs_4016_, lean_object* v_e_4017_){
_start:
{
lean_object* v_dummy_4018_; lean_object* v___y_4020_; lean_object* v___x_4023_; uint8_t v___x_4024_; 
v_dummy_4018_ = lean_obj_once(&l_Lean_Expr_getAppArgs___closed__0, &l_Lean_Expr_getAppArgs___closed__0_once, _init_l_Lean_Expr_getAppArgs___closed__0);
v___x_4023_ = l_Lean_Expr_getAppNumArgs(v_e_4017_);
v___x_4024_ = lean_nat_dec_le(v_maxArgs_4016_, v___x_4023_);
if (v___x_4024_ == 0)
{
lean_dec(v_maxArgs_4016_);
v___y_4020_ = v___x_4023_;
goto v___jp_4019_;
}
else
{
lean_dec(v___x_4023_);
v___y_4020_ = v_maxArgs_4016_;
goto v___jp_4019_;
}
v___jp_4019_:
{
lean_object* v___x_4021_; lean_object* v___x_4022_; 
lean_inc(v___y_4020_);
v___x_4021_ = lean_mk_array(v___y_4020_, v_dummy_4018_);
v___x_4022_ = l___private_Lean_Expr_0__Lean_Expr_getBoundedAppArgsAux(v_e_4017_, v___x_4021_, v___y_4020_);
return v___x_4022_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object* v_x_4025_, lean_object* v_x_4026_){
_start:
{
if (lean_obj_tag(v_x_4025_) == 5)
{
lean_object* v_fn_4027_; lean_object* v_arg_4028_; lean_object* v___x_4029_; 
v_fn_4027_ = lean_ctor_get(v_x_4025_, 0);
lean_inc_ref(v_fn_4027_);
v_arg_4028_ = lean_ctor_get(v_x_4025_, 1);
lean_inc_ref(v_arg_4028_);
lean_dec_ref_known(v_x_4025_, 2);
v___x_4029_ = lean_array_push(v_x_4026_, v_arg_4028_);
v_x_4025_ = v_fn_4027_;
v_x_4026_ = v___x_4029_;
goto _start;
}
else
{
lean_dec_ref(v_x_4025_);
return v_x_4026_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppRevArgs(lean_object* v_e_4031_){
_start:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; 
v___x_4032_ = l_Lean_Expr_getAppNumArgs(v_e_4031_);
v___x_4033_ = lean_mk_empty_array_with_capacity(v___x_4032_);
lean_dec(v___x_4032_);
v___x_4034_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_4031_, v___x_4033_);
return v___x_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___redArg(lean_object* v_k_4035_, lean_object* v_x_4036_, lean_object* v_x_4037_, lean_object* v_x_4038_){
_start:
{
if (lean_obj_tag(v_x_4036_) == 5)
{
lean_object* v_fn_4039_; lean_object* v_arg_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; 
v_fn_4039_ = lean_ctor_get(v_x_4036_, 0);
lean_inc_ref(v_fn_4039_);
v_arg_4040_ = lean_ctor_get(v_x_4036_, 1);
lean_inc_ref(v_arg_4040_);
lean_dec_ref_known(v_x_4036_, 2);
v___x_4041_ = lean_array_set(v_x_4037_, v_x_4038_, v_arg_4040_);
v___x_4042_ = lean_unsigned_to_nat(1u);
v___x_4043_ = lean_nat_sub(v_x_4038_, v___x_4042_);
lean_dec(v_x_4038_);
v_x_4036_ = v_fn_4039_;
v_x_4037_ = v___x_4041_;
v_x_4038_ = v___x_4043_;
goto _start;
}
else
{
lean_object* v___x_4045_; 
lean_dec(v_x_4038_);
v___x_4045_ = lean_apply_2(v_k_4035_, v_x_4036_, v_x_4037_);
return v___x_4045_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux(lean_object* v_00_u03b1_4046_, lean_object* v_k_4047_, lean_object* v_x_4048_, lean_object* v_x_4049_, lean_object* v_x_4050_){
_start:
{
lean_object* v___x_4051_; 
v___x_4051_ = l_Lean_Expr_withAppAux___redArg(v_k_4047_, v_x_4048_, v_x_4049_, v_x_4050_);
return v___x_4051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withApp___redArg(lean_object* v_e_4052_, lean_object* v_k_4053_){
_start:
{
lean_object* v_dummy_4054_; lean_object* v_nargs_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; 
v_dummy_4054_ = lean_obj_once(&l_Lean_Expr_getAppArgs___closed__0, &l_Lean_Expr_getAppArgs___closed__0_once, _init_l_Lean_Expr_getAppArgs___closed__0);
v_nargs_4055_ = l_Lean_Expr_getAppNumArgs(v_e_4052_);
lean_inc(v_nargs_4055_);
v___x_4056_ = lean_mk_array(v_nargs_4055_, v_dummy_4054_);
v___x_4057_ = lean_unsigned_to_nat(1u);
v___x_4058_ = lean_nat_sub(v_nargs_4055_, v___x_4057_);
lean_dec(v_nargs_4055_);
v___x_4059_ = l_Lean_Expr_withAppAux___redArg(v_k_4053_, v_e_4052_, v___x_4056_, v___x_4058_);
return v___x_4059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withApp(lean_object* v_00_u03b1_4060_, lean_object* v_e_4061_, lean_object* v_k_4062_){
_start:
{
lean_object* v_dummy_4063_; lean_object* v_nargs_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; 
v_dummy_4063_ = lean_obj_once(&l_Lean_Expr_getAppArgs___closed__0, &l_Lean_Expr_getAppArgs___closed__0_once, _init_l_Lean_Expr_getAppArgs___closed__0);
v_nargs_4064_ = l_Lean_Expr_getAppNumArgs(v_e_4061_);
lean_inc(v_nargs_4064_);
v___x_4065_ = lean_mk_array(v_nargs_4064_, v_dummy_4063_);
v___x_4066_ = lean_unsigned_to_nat(1u);
v___x_4067_ = lean_nat_sub(v_nargs_4064_, v___x_4066_);
lean_dec(v_nargs_4064_);
v___x_4068_ = l_Lean_Expr_withAppAux___redArg(v_k_4062_, v_e_4061_, v___x_4065_, v___x_4067_);
return v___x_4068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_getAppFnArgs_spec__0(lean_object* v_x_4069_, lean_object* v_x_4070_, lean_object* v_x_4071_){
_start:
{
if (lean_obj_tag(v_x_4069_) == 5)
{
lean_object* v_fn_4072_; lean_object* v_arg_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
v_fn_4072_ = lean_ctor_get(v_x_4069_, 0);
lean_inc_ref(v_fn_4072_);
v_arg_4073_ = lean_ctor_get(v_x_4069_, 1);
lean_inc_ref(v_arg_4073_);
lean_dec_ref_known(v_x_4069_, 2);
v___x_4074_ = lean_array_set(v_x_4070_, v_x_4071_, v_arg_4073_);
v___x_4075_ = lean_unsigned_to_nat(1u);
v___x_4076_ = lean_nat_sub(v_x_4071_, v___x_4075_);
lean_dec(v_x_4071_);
v_x_4069_ = v_fn_4072_;
v_x_4070_ = v___x_4074_;
v_x_4071_ = v___x_4076_;
goto _start;
}
else
{
lean_object* v___x_4078_; lean_object* v___x_4079_; 
lean_dec(v_x_4071_);
v___x_4078_ = l_Lean_Expr_constName(v_x_4069_);
lean_dec_ref(v_x_4069_);
v___x_4079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4079_, 0, v___x_4078_);
lean_ctor_set(v___x_4079_, 1, v_x_4070_);
return v___x_4079_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppFnArgs(lean_object* v_e_4080_){
_start:
{
lean_object* v_dummy_4081_; lean_object* v_nargs_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; 
v_dummy_4081_ = lean_obj_once(&l_Lean_Expr_getAppArgs___closed__0, &l_Lean_Expr_getAppArgs___closed__0_once, _init_l_Lean_Expr_getAppArgs___closed__0);
v_nargs_4082_ = l_Lean_Expr_getAppNumArgs(v_e_4080_);
lean_inc(v_nargs_4082_);
v___x_4083_ = lean_mk_array(v_nargs_4082_, v_dummy_4081_);
v___x_4084_ = lean_unsigned_to_nat(1u);
v___x_4085_ = lean_nat_sub(v_nargs_4082_, v___x_4084_);
lean_dec(v_nargs_4082_);
v___x_4086_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_getAppFnArgs_spec__0(v_e_4080_, v___x_4083_, v___x_4085_);
return v___x_4086_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4087_; 
v___x_4087_ = l_Array_instInhabited___redArg();
return v___x_4087_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop_spec__0(lean_object* v_msg_4088_){
_start:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4089_ = lean_obj_once(&l_panic___at___00__private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop_spec__0___closed__0, &l_panic___at___00__private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop_spec__0___closed__0);
v___x_4090_ = lean_panic_fn_borrowed(v___x_4089_, v_msg_4088_);
return v___x_4090_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__2(void){
_start:
{
lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; 
v___x_4093_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__1));
v___x_4094_ = lean_unsigned_to_nat(27u);
v___x_4095_ = lean_unsigned_to_nat(1247u);
v___x_4096_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__0));
v___x_4097_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_4098_ = l_mkPanicMessageWithDecl(v___x_4097_, v___x_4096_, v___x_4095_, v___x_4094_, v___x_4093_);
return v___x_4098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop(lean_object* v_a_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_){
_start:
{
lean_object* v_zero_4102_; uint8_t v_isZero_4103_; 
v_zero_4102_ = lean_unsigned_to_nat(0u);
v_isZero_4103_ = lean_nat_dec_eq(v_a_4099_, v_zero_4102_);
if (v_isZero_4103_ == 1)
{
lean_dec_ref(v_a_4100_);
lean_dec(v_a_4099_);
return v_a_4101_;
}
else
{
if (lean_obj_tag(v_a_4100_) == 5)
{
lean_object* v_fn_4104_; lean_object* v_arg_4105_; lean_object* v_one_4106_; lean_object* v_n_4107_; lean_object* v___x_4108_; 
v_fn_4104_ = lean_ctor_get(v_a_4100_, 0);
lean_inc_ref(v_fn_4104_);
v_arg_4105_ = lean_ctor_get(v_a_4100_, 1);
lean_inc_ref(v_arg_4105_);
lean_dec_ref_known(v_a_4100_, 2);
v_one_4106_ = lean_unsigned_to_nat(1u);
v_n_4107_ = lean_nat_sub(v_a_4099_, v_one_4106_);
lean_dec(v_a_4099_);
v___x_4108_ = lean_array_set(v_a_4101_, v_n_4107_, v_arg_4105_);
v_a_4099_ = v_n_4107_;
v_a_4100_ = v_fn_4104_;
v_a_4101_ = v___x_4108_;
goto _start;
}
else
{
lean_object* v___x_4110_; lean_object* v___x_4111_; 
lean_dec_ref(v_a_4101_);
lean_dec_ref(v_a_4100_);
lean_dec(v_a_4099_);
v___x_4110_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__2, &l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__2_once, _init_l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop___closed__2);
v___x_4111_ = l_panic___at___00__private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop_spec__0(v___x_4110_);
return v___x_4111_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppArgsN(lean_object* v_e_4112_, lean_object* v_n_4113_){
_start:
{
lean_object* v_dummy_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; 
v_dummy_4114_ = lean_obj_once(&l_Lean_Expr_getAppArgs___closed__0, &l_Lean_Expr_getAppArgs___closed__0_once, _init_l_Lean_Expr_getAppArgs___closed__0);
lean_inc(v_n_4113_);
v___x_4115_ = lean_mk_array(v_n_4113_, v_dummy_4114_);
v___x_4116_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop(v_n_4113_, v_e_4112_, v___x_4115_);
return v___x_4116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_stripArgsN(lean_object* v_e_4117_, lean_object* v_n_4118_){
_start:
{
lean_object* v_zero_4119_; uint8_t v_isZero_4120_; 
v_zero_4119_ = lean_unsigned_to_nat(0u);
v_isZero_4120_ = lean_nat_dec_eq(v_n_4118_, v_zero_4119_);
if (v_isZero_4120_ == 1)
{
lean_dec(v_n_4118_);
lean_inc_ref(v_e_4117_);
return v_e_4117_;
}
else
{
if (lean_obj_tag(v_e_4117_) == 5)
{
lean_object* v_fn_4121_; lean_object* v_one_4122_; lean_object* v_n_4123_; 
v_fn_4121_ = lean_ctor_get(v_e_4117_, 0);
v_one_4122_ = lean_unsigned_to_nat(1u);
v_n_4123_ = lean_nat_sub(v_n_4118_, v_one_4122_);
lean_dec(v_n_4118_);
v_e_4117_ = v_fn_4121_;
v_n_4118_ = v_n_4123_;
goto _start;
}
else
{
lean_dec(v_n_4118_);
lean_inc_ref(v_e_4117_);
return v_e_4117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_stripArgsN___boxed(lean_object* v_e_4125_, lean_object* v_n_4126_){
_start:
{
lean_object* v_res_4127_; 
v_res_4127_ = l_Lean_Expr_stripArgsN(v_e_4125_, v_n_4126_);
lean_dec_ref(v_e_4125_);
return v_res_4127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppPrefix(lean_object* v_e_4128_, lean_object* v_n_4129_){
_start:
{
lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; 
v___x_4130_ = l_Lean_Expr_getAppNumArgs(v_e_4128_);
v___x_4131_ = lean_nat_sub(v___x_4130_, v_n_4129_);
lean_dec(v___x_4130_);
v___x_4132_ = l_Lean_Expr_stripArgsN(v_e_4128_, v___x_4131_);
return v___x_4132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppPrefix___boxed(lean_object* v_e_4133_, lean_object* v_n_4134_){
_start:
{
lean_object* v_res_4135_; 
v_res_4135_ = l_Lean_Expr_getAppPrefix(v_e_4133_, v_n_4134_);
lean_dec(v_n_4134_);
lean_dec_ref(v_e_4133_);
return v_res_4135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseApp___redArg___lam__0(lean_object* v_args_4136_, lean_object* v_inst_4137_, lean_object* v_f_4138_, lean_object* v_x_4139_){
_start:
{
size_t v_sz_4140_; size_t v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; 
v_sz_4140_ = lean_array_size(v_args_4136_);
v___x_4141_ = ((size_t)0ULL);
v___x_4142_ = l_unsafeCast___redArg(v_args_4136_);
v___x_4143_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_4137_, v_f_4138_, v_sz_4140_, v___x_4141_, v___x_4142_);
v___x_4144_ = l_unsafeCast___redArg(v___x_4143_);
lean_dec(v___x_4143_);
return v___x_4144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseApp___redArg___lam__0___boxed(lean_object* v_args_4145_, lean_object* v_inst_4146_, lean_object* v_f_4147_, lean_object* v_x_4148_){
_start:
{
lean_object* v_res_4149_; 
v_res_4149_ = l_Lean_Expr_traverseApp___redArg___lam__0(v_args_4145_, v_inst_4146_, v_f_4147_, v_x_4148_);
lean_dec_ref(v_args_4145_);
return v_res_4149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseApp___redArg___lam__1(lean_object* v_toFunctor_4151_, lean_object* v_inst_4152_, lean_object* v_f_4153_, lean_object* v_toSeq_4154_, lean_object* v_fn_4155_, lean_object* v_args_4156_){
_start:
{
lean_object* v_map_4157_; lean_object* v___f_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; 
v_map_4157_ = lean_ctor_get(v_toFunctor_4151_, 0);
lean_inc(v_map_4157_);
lean_dec_ref(v_toFunctor_4151_);
lean_inc(v_f_4153_);
v___f_4158_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseApp___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_4158_, 0, v_args_4156_);
lean_closure_set(v___f_4158_, 1, v_inst_4152_);
lean_closure_set(v___f_4158_, 2, v_f_4153_);
v___x_4159_ = ((lean_object*)(l_Lean_Expr_traverseApp___redArg___lam__1___closed__0));
v___x_4160_ = lean_apply_1(v_f_4153_, v_fn_4155_);
v___x_4161_ = lean_apply_4(v_map_4157_, lean_box(0), lean_box(0), v___x_4159_, v___x_4160_);
v___x_4162_ = lean_apply_4(v_toSeq_4154_, lean_box(0), lean_box(0), v___x_4161_, v___f_4158_);
return v___x_4162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseApp___redArg(lean_object* v_inst_4163_, lean_object* v_f_4164_, lean_object* v_e_4165_){
_start:
{
lean_object* v_toApplicative_4166_; lean_object* v_toFunctor_4167_; lean_object* v_toSeq_4168_; lean_object* v___f_4169_; lean_object* v_dummy_4170_; lean_object* v_nargs_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; 
v_toApplicative_4166_ = lean_ctor_get(v_inst_4163_, 0);
v_toFunctor_4167_ = lean_ctor_get(v_toApplicative_4166_, 0);
lean_inc_ref(v_toFunctor_4167_);
v_toSeq_4168_ = lean_ctor_get(v_toApplicative_4166_, 2);
lean_inc(v_toSeq_4168_);
v___f_4169_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseApp___redArg___lam__1), 6, 4);
lean_closure_set(v___f_4169_, 0, v_toFunctor_4167_);
lean_closure_set(v___f_4169_, 1, v_inst_4163_);
lean_closure_set(v___f_4169_, 2, v_f_4164_);
lean_closure_set(v___f_4169_, 3, v_toSeq_4168_);
v_dummy_4170_ = lean_obj_once(&l_Lean_Expr_getAppArgs___closed__0, &l_Lean_Expr_getAppArgs___closed__0_once, _init_l_Lean_Expr_getAppArgs___closed__0);
v_nargs_4171_ = l_Lean_Expr_getAppNumArgs(v_e_4165_);
lean_inc(v_nargs_4171_);
v___x_4172_ = lean_mk_array(v_nargs_4171_, v_dummy_4170_);
v___x_4173_ = lean_unsigned_to_nat(1u);
v___x_4174_ = lean_nat_sub(v_nargs_4171_, v___x_4173_);
lean_dec(v_nargs_4171_);
v___x_4175_ = l_Lean_Expr_withAppAux___redArg(v___f_4169_, v_e_4165_, v___x_4172_, v___x_4174_);
return v___x_4175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseApp(lean_object* v_M_4176_, lean_object* v_inst_4177_, lean_object* v_f_4178_, lean_object* v_e_4179_){
_start:
{
lean_object* v___x_4180_; 
v___x_4180_ = l_Lean_Expr_traverseApp___redArg(v_inst_4177_, v_f_4178_, v_e_4179_);
return v___x_4180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___redArg(lean_object* v_k_4181_, lean_object* v_x_4182_, lean_object* v_x_4183_){
_start:
{
if (lean_obj_tag(v_x_4182_) == 5)
{
lean_object* v_fn_4184_; lean_object* v_arg_4185_; lean_object* v___x_4186_; 
v_fn_4184_ = lean_ctor_get(v_x_4182_, 0);
lean_inc_ref(v_fn_4184_);
v_arg_4185_ = lean_ctor_get(v_x_4182_, 1);
lean_inc_ref(v_arg_4185_);
lean_dec_ref_known(v_x_4182_, 2);
v___x_4186_ = lean_array_push(v_x_4183_, v_arg_4185_);
v_x_4182_ = v_fn_4184_;
v_x_4183_ = v___x_4186_;
goto _start;
}
else
{
lean_object* v___x_4188_; 
v___x_4188_ = lean_apply_2(v_k_4181_, v_x_4182_, v_x_4183_);
return v___x_4188_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux(lean_object* v_00_u03b1_4189_, lean_object* v_k_4190_, lean_object* v_x_4191_, lean_object* v_x_4192_){
_start:
{
lean_object* v___x_4193_; 
v___x_4193_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___redArg(v_k_4190_, v_x_4191_, v_x_4192_);
return v___x_4193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppRev___redArg(lean_object* v_e_4194_, lean_object* v_k_4195_){
_start:
{
lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; 
v___x_4196_ = l_Lean_Expr_getAppNumArgs(v_e_4194_);
v___x_4197_ = lean_mk_empty_array_with_capacity(v___x_4196_);
lean_dec(v___x_4196_);
v___x_4198_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___redArg(v_k_4195_, v_e_4194_, v___x_4197_);
return v___x_4198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppRev(lean_object* v_00_u03b1_4199_, lean_object* v_e_4200_, lean_object* v_k_4201_){
_start:
{
lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; 
v___x_4202_ = l_Lean_Expr_getAppNumArgs(v_e_4200_);
v___x_4203_ = lean_mk_empty_array_with_capacity(v___x_4202_);
lean_dec(v___x_4202_);
v___x_4204_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___redArg(v_k_4201_, v_e_4200_, v___x_4203_);
return v___x_4204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArgD(lean_object* v_x_4205_, lean_object* v_x_4206_, lean_object* v_x_4207_){
_start:
{
if (lean_obj_tag(v_x_4205_) == 5)
{
lean_object* v_fn_4208_; lean_object* v_arg_4209_; lean_object* v_zero_4210_; uint8_t v_isZero_4211_; 
v_fn_4208_ = lean_ctor_get(v_x_4205_, 0);
v_arg_4209_ = lean_ctor_get(v_x_4205_, 1);
v_zero_4210_ = lean_unsigned_to_nat(0u);
v_isZero_4211_ = lean_nat_dec_eq(v_x_4206_, v_zero_4210_);
if (v_isZero_4211_ == 1)
{
lean_dec(v_x_4206_);
lean_inc_ref(v_arg_4209_);
return v_arg_4209_;
}
else
{
lean_object* v_one_4212_; lean_object* v_n_4213_; 
v_one_4212_ = lean_unsigned_to_nat(1u);
v_n_4213_ = lean_nat_sub(v_x_4206_, v_one_4212_);
lean_dec(v_x_4206_);
v_x_4205_ = v_fn_4208_;
v_x_4206_ = v_n_4213_;
goto _start;
}
}
else
{
lean_dec(v_x_4206_);
lean_inc_ref(v_x_4207_);
return v_x_4207_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArgD___boxed(lean_object* v_x_4215_, lean_object* v_x_4216_, lean_object* v_x_4217_){
_start:
{
lean_object* v_res_4218_; 
v_res_4218_ = l_Lean_Expr_getRevArgD(v_x_4215_, v_x_4216_, v_x_4217_);
lean_dec_ref(v_x_4217_);
lean_dec_ref(v_x_4215_);
return v_res_4218_;
}
}
static lean_object* _init_l_Lean_Expr_getRevArg_x21___closed__2(void){
_start:
{
lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; 
v___x_4221_ = ((lean_object*)(l_Lean_Expr_getRevArg_x21___closed__1));
v___x_4222_ = lean_unsigned_to_nat(20u);
v___x_4223_ = lean_unsigned_to_nat(1288u);
v___x_4224_ = ((lean_object*)(l_Lean_Expr_getRevArg_x21___closed__0));
v___x_4225_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_4226_ = l_mkPanicMessageWithDecl(v___x_4225_, v___x_4224_, v___x_4223_, v___x_4222_, v___x_4221_);
return v___x_4226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x21(lean_object* v_x_4227_, lean_object* v_x_4228_){
_start:
{
if (lean_obj_tag(v_x_4227_) == 5)
{
lean_object* v_fn_4229_; lean_object* v_arg_4230_; lean_object* v_zero_4231_; uint8_t v_isZero_4232_; 
v_fn_4229_ = lean_ctor_get(v_x_4227_, 0);
v_arg_4230_ = lean_ctor_get(v_x_4227_, 1);
v_zero_4231_ = lean_unsigned_to_nat(0u);
v_isZero_4232_ = lean_nat_dec_eq(v_x_4228_, v_zero_4231_);
if (v_isZero_4232_ == 1)
{
lean_dec(v_x_4228_);
lean_inc_ref(v_arg_4230_);
return v_arg_4230_;
}
else
{
lean_object* v_one_4233_; lean_object* v_n_4234_; 
v_one_4233_ = lean_unsigned_to_nat(1u);
v_n_4234_ = lean_nat_sub(v_x_4228_, v_one_4233_);
lean_dec(v_x_4228_);
v_x_4227_ = v_fn_4229_;
v_x_4228_ = v_n_4234_;
goto _start;
}
}
else
{
lean_object* v___x_4236_; lean_object* v___x_4237_; 
lean_dec(v_x_4228_);
v___x_4236_ = lean_obj_once(&l_Lean_Expr_getRevArg_x21___closed__2, &l_Lean_Expr_getRevArg_x21___closed__2_once, _init_l_Lean_Expr_getRevArg_x21___closed__2);
v___x_4237_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_4236_);
return v___x_4237_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x21___boxed(lean_object* v_x_4238_, lean_object* v_x_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = l_Lean_Expr_getRevArg_x21(v_x_4238_, v_x_4239_);
lean_dec_ref(v_x_4238_);
return v_res_4240_;
}
}
static lean_object* _init_l_Lean_Expr_getRevArg_x21_x27___closed__1(void){
_start:
{
lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; 
v___x_4242_ = ((lean_object*)(l_Lean_Expr_getRevArg_x21___closed__1));
v___x_4243_ = lean_unsigned_to_nat(20u);
v___x_4244_ = lean_unsigned_to_nat(1295u);
v___x_4245_ = ((lean_object*)(l_Lean_Expr_getRevArg_x21_x27___closed__0));
v___x_4246_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_4247_ = l_mkPanicMessageWithDecl(v___x_4246_, v___x_4245_, v___x_4244_, v___x_4243_, v___x_4242_);
return v___x_4247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x21_x27(lean_object* v_x_4248_, lean_object* v_x_4249_){
_start:
{
switch(lean_obj_tag(v_x_4248_))
{
case 10:
{
lean_object* v_expr_4250_; 
v_expr_4250_ = lean_ctor_get(v_x_4248_, 1);
v_x_4248_ = v_expr_4250_;
goto _start;
}
case 5:
{
lean_object* v_fn_4252_; lean_object* v_arg_4253_; lean_object* v_zero_4254_; uint8_t v_isZero_4255_; 
v_fn_4252_ = lean_ctor_get(v_x_4248_, 0);
v_arg_4253_ = lean_ctor_get(v_x_4248_, 1);
v_zero_4254_ = lean_unsigned_to_nat(0u);
v_isZero_4255_ = lean_nat_dec_eq(v_x_4249_, v_zero_4254_);
if (v_isZero_4255_ == 1)
{
lean_dec(v_x_4249_);
lean_inc_ref(v_arg_4253_);
return v_arg_4253_;
}
else
{
lean_object* v_one_4256_; lean_object* v_n_4257_; 
v_one_4256_ = lean_unsigned_to_nat(1u);
v_n_4257_ = lean_nat_sub(v_x_4249_, v_one_4256_);
lean_dec(v_x_4249_);
v_x_4248_ = v_fn_4252_;
v_x_4249_ = v_n_4257_;
goto _start;
}
}
default: 
{
lean_object* v___x_4259_; lean_object* v___x_4260_; 
lean_dec(v_x_4249_);
v___x_4259_ = lean_obj_once(&l_Lean_Expr_getRevArg_x21_x27___closed__1, &l_Lean_Expr_getRevArg_x21_x27___closed__1_once, _init_l_Lean_Expr_getRevArg_x21_x27___closed__1);
v___x_4260_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_4259_);
return v___x_4260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x21_x27___boxed(lean_object* v_x_4261_, lean_object* v_x_4262_){
_start:
{
lean_object* v_res_4263_; 
v_res_4263_ = l_Lean_Expr_getRevArg_x21_x27(v_x_4261_, v_x_4262_);
lean_dec_ref(v_x_4261_);
return v_res_4263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x21(lean_object* v_e_4264_, lean_object* v_i_4265_, lean_object* v_n_4266_){
_start:
{
lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; 
v___x_4267_ = lean_nat_sub(v_n_4266_, v_i_4265_);
v___x_4268_ = lean_unsigned_to_nat(1u);
v___x_4269_ = lean_nat_sub(v___x_4267_, v___x_4268_);
lean_dec(v___x_4267_);
v___x_4270_ = l_Lean_Expr_getRevArg_x21(v_e_4264_, v___x_4269_);
return v___x_4270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x21___boxed(lean_object* v_e_4271_, lean_object* v_i_4272_, lean_object* v_n_4273_){
_start:
{
lean_object* v_res_4274_; 
v_res_4274_ = l_Lean_Expr_getArg_x21(v_e_4271_, v_i_4272_, v_n_4273_);
lean_dec(v_n_4273_);
lean_dec(v_i_4272_);
lean_dec_ref(v_e_4271_);
return v_res_4274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x21_x27(lean_object* v_e_4275_, lean_object* v_i_4276_, lean_object* v_n_4277_){
_start:
{
lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; 
v___x_4278_ = lean_nat_sub(v_n_4277_, v_i_4276_);
v___x_4279_ = lean_unsigned_to_nat(1u);
v___x_4280_ = lean_nat_sub(v___x_4278_, v___x_4279_);
lean_dec(v___x_4278_);
v___x_4281_ = l_Lean_Expr_getRevArg_x21_x27(v_e_4275_, v___x_4280_);
return v___x_4281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x21_x27___boxed(lean_object* v_e_4282_, lean_object* v_i_4283_, lean_object* v_n_4284_){
_start:
{
lean_object* v_res_4285_; 
v_res_4285_ = l_Lean_Expr_getArg_x21_x27(v_e_4282_, v_i_4283_, v_n_4284_);
lean_dec(v_n_4284_);
lean_dec(v_i_4283_);
lean_dec_ref(v_e_4282_);
return v_res_4285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getArgD(lean_object* v_e_4286_, lean_object* v_i_4287_, lean_object* v_v_u2080_4288_, lean_object* v_n_4289_){
_start:
{
lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; 
v___x_4290_ = lean_nat_sub(v_n_4289_, v_i_4287_);
v___x_4291_ = lean_unsigned_to_nat(1u);
v___x_4292_ = lean_nat_sub(v___x_4290_, v___x_4291_);
lean_dec(v___x_4290_);
v___x_4293_ = l_Lean_Expr_getRevArgD(v_e_4286_, v___x_4292_, v_v_u2080_4288_);
return v___x_4293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getArgD___boxed(lean_object* v_e_4294_, lean_object* v_i_4295_, lean_object* v_v_u2080_4296_, lean_object* v_n_4297_){
_start:
{
lean_object* v_res_4298_; 
v_res_4298_ = l_Lean_Expr_getArgD(v_e_4294_, v_i_4295_, v_v_u2080_4296_, v_n_4297_);
lean_dec(v_n_4297_);
lean_dec_ref(v_v_u2080_4296_);
lean_dec(v_i_4295_);
lean_dec_ref(v_e_4294_);
return v_res_4298_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasLooseBVars(lean_object* v_e_4299_){
_start:
{
lean_object* v___x_4300_; lean_object* v___x_4301_; uint8_t v___x_4302_; 
v___x_4300_ = lean_unsigned_to_nat(0u);
v___x_4301_ = l_Lean_Expr_looseBVarRange(v_e_4299_);
v___x_4302_ = lean_nat_dec_lt(v___x_4300_, v___x_4301_);
lean_dec(v___x_4301_);
return v___x_4302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasLooseBVars___boxed(lean_object* v_e_4303_){
_start:
{
uint8_t v_res_4304_; lean_object* v_r_4305_; 
v_res_4304_ = l_Lean_Expr_hasLooseBVars(v_e_4303_);
lean_dec_ref(v_e_4303_);
v_r_4305_ = lean_box(v_res_4304_);
return v_r_4305_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isArrow(lean_object* v_e_4306_){
_start:
{
if (lean_obj_tag(v_e_4306_) == 7)
{
lean_object* v_body_4307_; uint8_t v___x_4308_; 
v_body_4307_ = lean_ctor_get(v_e_4306_, 2);
v___x_4308_ = l_Lean_Expr_hasLooseBVars(v_body_4307_);
if (v___x_4308_ == 0)
{
uint8_t v___x_4309_; 
v___x_4309_ = 1;
return v___x_4309_;
}
else
{
uint8_t v___x_4310_; 
v___x_4310_ = 0;
return v___x_4310_;
}
}
else
{
uint8_t v___x_4311_; 
v___x_4311_ = 0;
return v___x_4311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isArrow___boxed(lean_object* v_e_4312_){
_start:
{
uint8_t v_res_4313_; lean_object* v_r_4314_; 
v_res_4313_ = l_Lean_Expr_isArrow(v_e_4312_);
lean_dec_ref(v_e_4312_);
v_r_4314_ = lean_box(v_res_4313_);
return v_r_4314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasLooseBVar___boxed(lean_object* v_e_4317_, lean_object* v_bvarIdx_4318_){
_start:
{
uint8_t v_res_4319_; lean_object* v_r_4320_; 
v_res_4319_ = lean_expr_has_loose_bvar(v_e_4317_, v_bvarIdx_4318_);
lean_dec(v_bvarIdx_4318_);
lean_dec_ref(v_e_4317_);
v_r_4320_ = lean_box(v_res_4319_);
return v_r_4320_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasLooseBVarInExplicitDomain(lean_object* v_e_4321_, lean_object* v_bvarIdx_4322_, uint8_t v_considerRange_4323_){
_start:
{
if (lean_obj_tag(v_e_4321_) == 7)
{
lean_object* v_binderType_4324_; lean_object* v_body_4325_; uint8_t v_binderInfo_4326_; uint8_t v___y_4328_; uint8_t v___x_4332_; 
v_binderType_4324_ = lean_ctor_get(v_e_4321_, 1);
v_body_4325_ = lean_ctor_get(v_e_4321_, 2);
v_binderInfo_4326_ = lean_ctor_get_uint8(v_e_4321_, sizeof(void*)*3 + 8);
v___x_4332_ = lean_expr_has_loose_bvar(v_binderType_4324_, v_bvarIdx_4322_);
if (v___x_4332_ == 0)
{
v___y_4328_ = v___x_4332_;
goto v___jp_4327_;
}
else
{
uint8_t v___x_4333_; 
v___x_4333_ = l_Lean_BinderInfo_isExplicit(v_binderInfo_4326_);
if (v___x_4333_ == 0)
{
lean_object* v___x_4334_; uint8_t v___x_4335_; 
v___x_4334_ = lean_unsigned_to_nat(0u);
v___x_4335_ = l_Lean_Expr_hasLooseBVarInExplicitDomain(v_body_4325_, v___x_4334_, v_considerRange_4323_);
v___y_4328_ = v___x_4335_;
goto v___jp_4327_;
}
else
{
v___y_4328_ = v___x_4333_;
goto v___jp_4327_;
}
}
v___jp_4327_:
{
if (v___y_4328_ == 0)
{
lean_object* v___x_4329_; lean_object* v___x_4330_; 
v___x_4329_ = lean_unsigned_to_nat(1u);
v___x_4330_ = lean_nat_add(v_bvarIdx_4322_, v___x_4329_);
lean_dec(v_bvarIdx_4322_);
v_e_4321_ = v_body_4325_;
v_bvarIdx_4322_ = v___x_4330_;
goto _start;
}
else
{
lean_dec(v_bvarIdx_4322_);
return v___y_4328_;
}
}
}
else
{
if (v_considerRange_4323_ == 0)
{
lean_dec(v_bvarIdx_4322_);
return v_considerRange_4323_;
}
else
{
uint8_t v___x_4336_; 
v___x_4336_ = lean_expr_has_loose_bvar(v_e_4321_, v_bvarIdx_4322_);
lean_dec(v_bvarIdx_4322_);
return v___x_4336_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasLooseBVarInExplicitDomain___boxed(lean_object* v_e_4337_, lean_object* v_bvarIdx_4338_, lean_object* v_considerRange_4339_){
_start:
{
uint8_t v_considerRange_boxed_4340_; uint8_t v_res_4341_; lean_object* v_r_4342_; 
v_considerRange_boxed_4340_ = lean_unbox(v_considerRange_4339_);
v_res_4341_ = l_Lean_Expr_hasLooseBVarInExplicitDomain(v_e_4337_, v_bvarIdx_4338_, v_considerRange_boxed_4340_);
lean_dec_ref(v_e_4337_);
v_r_4342_ = lean_box(v_res_4341_);
return v_r_4342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_lowerLooseBVars___boxed(lean_object* v_e_4346_, lean_object* v_s_4347_, lean_object* v_d_4348_){
_start:
{
lean_object* v_res_4349_; 
v_res_4349_ = lean_expr_lower_loose_bvars(v_e_4346_, v_s_4347_, v_d_4348_);
lean_dec(v_d_4348_);
lean_dec(v_s_4347_);
lean_dec_ref(v_e_4346_);
return v_res_4349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_liftLooseBVars___boxed(lean_object* v_e_4353_, lean_object* v_s_4354_, lean_object* v_d_4355_){
_start:
{
lean_object* v_res_4356_; 
v_res_4356_ = lean_expr_lift_loose_bvars(v_e_4353_, v_s_4354_, v_d_4355_);
lean_dec(v_d_4355_);
lean_dec(v_s_4354_);
lean_dec_ref(v_e_4353_);
return v_res_4356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_inferImplicit(lean_object* v_e_4357_, lean_object* v_numParams_4358_, uint8_t v_considerRange_4359_){
_start:
{
if (lean_obj_tag(v_e_4357_) == 7)
{
lean_object* v_binderName_4360_; lean_object* v_binderType_4361_; lean_object* v_body_4362_; uint8_t v_binderInfo_4363_; lean_object* v_zero_4364_; uint8_t v_isZero_4365_; 
v_binderName_4360_ = lean_ctor_get(v_e_4357_, 0);
v_binderType_4361_ = lean_ctor_get(v_e_4357_, 1);
v_body_4362_ = lean_ctor_get(v_e_4357_, 2);
v_binderInfo_4363_ = lean_ctor_get_uint8(v_e_4357_, sizeof(void*)*3 + 8);
v_zero_4364_ = lean_unsigned_to_nat(0u);
v_isZero_4365_ = lean_nat_dec_eq(v_numParams_4358_, v_zero_4364_);
if (v_isZero_4365_ == 0)
{
lean_object* v_one_4366_; lean_object* v_n_4367_; lean_object* v_b_4368_; uint8_t v___y_4370_; uint8_t v___x_4374_; 
lean_inc_ref(v_body_4362_);
lean_inc_ref(v_binderType_4361_);
lean_inc(v_binderName_4360_);
lean_dec_ref_known(v_e_4357_, 3);
v_one_4366_ = lean_unsigned_to_nat(1u);
v_n_4367_ = lean_nat_sub(v_numParams_4358_, v_one_4366_);
v_b_4368_ = l_Lean_Expr_inferImplicit(v_body_4362_, v_n_4367_, v_considerRange_4359_);
lean_dec(v_n_4367_);
v___x_4374_ = l_Lean_BinderInfo_isExplicit(v_binderInfo_4363_);
if (v___x_4374_ == 0)
{
v___y_4370_ = v___x_4374_;
goto v___jp_4369_;
}
else
{
uint8_t v___x_4375_; 
v___x_4375_ = l_Lean_Expr_hasLooseBVarInExplicitDomain(v_b_4368_, v_zero_4364_, v_considerRange_4359_);
v___y_4370_ = v___x_4375_;
goto v___jp_4369_;
}
v___jp_4369_:
{
if (v___y_4370_ == 0)
{
lean_object* v___x_4371_; 
v___x_4371_ = l_Lean_Expr_forallE___override(v_binderName_4360_, v_binderType_4361_, v_b_4368_, v_binderInfo_4363_);
return v___x_4371_;
}
else
{
uint8_t v___x_4372_; lean_object* v___x_4373_; 
v___x_4372_ = 1;
v___x_4373_ = l_Lean_Expr_forallE___override(v_binderName_4360_, v_binderType_4361_, v_b_4368_, v___x_4372_);
return v___x_4373_;
}
}
}
else
{
return v_e_4357_;
}
}
else
{
return v_e_4357_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_inferImplicit___boxed(lean_object* v_e_4376_, lean_object* v_numParams_4377_, lean_object* v_considerRange_4378_){
_start:
{
uint8_t v_considerRange_boxed_4379_; lean_object* v_res_4380_; 
v_considerRange_boxed_4379_ = lean_unbox(v_considerRange_4378_);
v_res_4380_ = l_Lean_Expr_inferImplicit(v_e_4376_, v_numParams_4377_, v_considerRange_boxed_4379_);
lean_dec(v_numParams_4377_);
return v_res_4380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallBinderInfos(lean_object* v_e_4381_, lean_object* v_binderInfos_x3f_4382_){
_start:
{
if (lean_obj_tag(v_e_4381_) == 7)
{
if (lean_obj_tag(v_binderInfos_x3f_4382_) == 1)
{
lean_object* v_binderName_4383_; lean_object* v_binderType_4384_; lean_object* v_body_4385_; uint8_t v_binderInfo_4386_; lean_object* v_head_4387_; lean_object* v_tail_4388_; lean_object* v_b_4389_; 
v_binderName_4383_ = lean_ctor_get(v_e_4381_, 0);
lean_inc(v_binderName_4383_);
v_binderType_4384_ = lean_ctor_get(v_e_4381_, 1);
lean_inc_ref(v_binderType_4384_);
v_body_4385_ = lean_ctor_get(v_e_4381_, 2);
lean_inc_ref(v_body_4385_);
v_binderInfo_4386_ = lean_ctor_get_uint8(v_e_4381_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_4381_, 3);
v_head_4387_ = lean_ctor_get(v_binderInfos_x3f_4382_, 0);
v_tail_4388_ = lean_ctor_get(v_binderInfos_x3f_4382_, 1);
v_b_4389_ = l_Lean_Expr_updateForallBinderInfos(v_body_4385_, v_tail_4388_);
if (lean_obj_tag(v_head_4387_) == 0)
{
lean_object* v___x_4390_; 
v___x_4390_ = l_Lean_Expr_forallE___override(v_binderName_4383_, v_binderType_4384_, v_b_4389_, v_binderInfo_4386_);
return v___x_4390_;
}
else
{
lean_object* v_val_4391_; uint8_t v___x_4392_; lean_object* v___x_4393_; 
v_val_4391_ = lean_ctor_get(v_head_4387_, 0);
v___x_4392_ = lean_unbox(v_val_4391_);
v___x_4393_ = l_Lean_Expr_forallE___override(v_binderName_4383_, v_binderType_4384_, v_b_4389_, v___x_4392_);
return v___x_4393_;
}
}
else
{
return v_e_4381_;
}
}
else
{
return v_e_4381_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallBinderInfos___boxed(lean_object* v_e_4394_, lean_object* v_binderInfos_x3f_4395_){
_start:
{
lean_object* v_res_4396_; 
v_res_4396_ = l_Lean_Expr_updateForallBinderInfos(v_e_4394_, v_binderInfos_x3f_4395_);
lean_dec(v_binderInfos_x3f_4395_);
return v_res_4396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateBinderNames(lean_object* v_e_4397_, lean_object* v_binderNames_x3f_4398_){
_start:
{
switch(lean_obj_tag(v_e_4397_))
{
case 7:
{
if (lean_obj_tag(v_binderNames_x3f_4398_) == 1)
{
lean_object* v_binderName_4399_; lean_object* v_binderType_4400_; lean_object* v_body_4401_; uint8_t v_binderInfo_4402_; lean_object* v_head_4403_; lean_object* v_tail_4404_; lean_object* v_b_4405_; 
v_binderName_4399_ = lean_ctor_get(v_e_4397_, 0);
lean_inc(v_binderName_4399_);
v_binderType_4400_ = lean_ctor_get(v_e_4397_, 1);
lean_inc_ref(v_binderType_4400_);
v_body_4401_ = lean_ctor_get(v_e_4397_, 2);
lean_inc_ref(v_body_4401_);
v_binderInfo_4402_ = lean_ctor_get_uint8(v_e_4397_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_4397_, 3);
v_head_4403_ = lean_ctor_get(v_binderNames_x3f_4398_, 0);
lean_inc(v_head_4403_);
v_tail_4404_ = lean_ctor_get(v_binderNames_x3f_4398_, 1);
lean_inc(v_tail_4404_);
lean_dec_ref_known(v_binderNames_x3f_4398_, 2);
v_b_4405_ = l_Lean_Expr_updateBinderNames(v_body_4401_, v_tail_4404_);
if (lean_obj_tag(v_head_4403_) == 0)
{
lean_object* v___x_4406_; 
v___x_4406_ = l_Lean_Expr_forallE___override(v_binderName_4399_, v_binderType_4400_, v_b_4405_, v_binderInfo_4402_);
return v___x_4406_;
}
else
{
lean_object* v_val_4407_; lean_object* v___x_4408_; 
lean_dec(v_binderName_4399_);
v_val_4407_ = lean_ctor_get(v_head_4403_, 0);
lean_inc(v_val_4407_);
lean_dec_ref_known(v_head_4403_, 1);
v___x_4408_ = l_Lean_Expr_forallE___override(v_val_4407_, v_binderType_4400_, v_b_4405_, v_binderInfo_4402_);
return v___x_4408_;
}
}
else
{
lean_dec(v_binderNames_x3f_4398_);
return v_e_4397_;
}
}
case 6:
{
if (lean_obj_tag(v_binderNames_x3f_4398_) == 1)
{
lean_object* v_binderName_4409_; lean_object* v_binderType_4410_; lean_object* v_body_4411_; uint8_t v_binderInfo_4412_; lean_object* v_head_4413_; lean_object* v_tail_4414_; lean_object* v_b_4415_; 
v_binderName_4409_ = lean_ctor_get(v_e_4397_, 0);
lean_inc(v_binderName_4409_);
v_binderType_4410_ = lean_ctor_get(v_e_4397_, 1);
lean_inc_ref(v_binderType_4410_);
v_body_4411_ = lean_ctor_get(v_e_4397_, 2);
lean_inc_ref(v_body_4411_);
v_binderInfo_4412_ = lean_ctor_get_uint8(v_e_4397_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_4397_, 3);
v_head_4413_ = lean_ctor_get(v_binderNames_x3f_4398_, 0);
lean_inc(v_head_4413_);
v_tail_4414_ = lean_ctor_get(v_binderNames_x3f_4398_, 1);
lean_inc(v_tail_4414_);
lean_dec_ref_known(v_binderNames_x3f_4398_, 2);
v_b_4415_ = l_Lean_Expr_updateBinderNames(v_body_4411_, v_tail_4414_);
if (lean_obj_tag(v_head_4413_) == 0)
{
lean_object* v___x_4416_; 
v___x_4416_ = l_Lean_Expr_lam___override(v_binderName_4409_, v_binderType_4410_, v_b_4415_, v_binderInfo_4412_);
return v___x_4416_;
}
else
{
lean_object* v_val_4417_; lean_object* v___x_4418_; 
lean_dec(v_binderName_4409_);
v_val_4417_ = lean_ctor_get(v_head_4413_, 0);
lean_inc(v_val_4417_);
lean_dec_ref_known(v_head_4413_, 1);
v___x_4418_ = l_Lean_Expr_lam___override(v_val_4417_, v_binderType_4410_, v_b_4415_, v_binderInfo_4412_);
return v___x_4418_;
}
}
else
{
lean_dec(v_binderNames_x3f_4398_);
return v_e_4397_;
}
}
default: 
{
lean_dec(v_binderNames_x3f_4398_);
return v_e_4397_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiate___boxed(lean_object* v_e_4421_, lean_object* v_subst_4422_){
_start:
{
lean_object* v_res_4423_; 
v_res_4423_ = lean_expr_instantiate(v_e_4421_, v_subst_4422_);
lean_dec_ref(v_subst_4422_);
lean_dec_ref(v_e_4421_);
return v_res_4423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiate1___boxed(lean_object* v_e_4426_, lean_object* v_subst_4427_){
_start:
{
lean_object* v_res_4428_; 
v_res_4428_ = lean_expr_instantiate1(v_e_4426_, v_subst_4427_);
lean_dec_ref(v_subst_4427_);
lean_dec_ref(v_e_4426_);
return v_res_4428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateRev___boxed(lean_object* v_e_4431_, lean_object* v_subst_4432_){
_start:
{
lean_object* v_res_4433_; 
v_res_4433_ = lean_expr_instantiate_rev(v_e_4431_, v_subst_4432_);
lean_dec_ref(v_subst_4432_);
lean_dec_ref(v_e_4431_);
return v_res_4433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateRange___boxed(lean_object* v_e_4438_, lean_object* v_beginIdx_4439_, lean_object* v_endIdx_4440_, lean_object* v_subst_4441_){
_start:
{
lean_object* v_res_4442_; 
v_res_4442_ = lean_expr_instantiate_range(v_e_4438_, v_beginIdx_4439_, v_endIdx_4440_, v_subst_4441_);
lean_dec_ref(v_subst_4441_);
lean_dec(v_endIdx_4440_);
lean_dec(v_beginIdx_4439_);
lean_dec_ref(v_e_4438_);
return v_res_4442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateRevRange___boxed(lean_object* v_e_4447_, lean_object* v_beginIdx_4448_, lean_object* v_endIdx_4449_, lean_object* v_subst_4450_){
_start:
{
lean_object* v_res_4451_; 
v_res_4451_ = lean_expr_instantiate_rev_range(v_e_4447_, v_beginIdx_4448_, v_endIdx_4449_, v_subst_4450_);
lean_dec_ref(v_subst_4450_);
lean_dec(v_endIdx_4449_);
lean_dec(v_beginIdx_4448_);
lean_dec_ref(v_e_4447_);
return v_res_4451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_abstract___boxed(lean_object* v_e_4454_, lean_object* v_xs_4455_){
_start:
{
lean_object* v_res_4456_; 
v_res_4456_ = lean_expr_abstract(v_e_4454_, v_xs_4455_);
lean_dec_ref(v_xs_4455_);
lean_dec_ref(v_e_4454_);
return v_res_4456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_abstractRange___boxed(lean_object* v_e_4460_, lean_object* v_n_4461_, lean_object* v_xs_4462_){
_start:
{
lean_object* v_res_4463_; 
v_res_4463_ = lean_expr_abstract_range(v_e_4460_, v_n_4461_, v_xs_4462_);
lean_dec_ref(v_xs_4462_);
lean_dec(v_n_4461_);
lean_dec_ref(v_e_4460_);
return v_res_4463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVar(lean_object* v_e_4464_, lean_object* v_fvar_4465_, lean_object* v_v_4466_){
_start:
{
lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; 
v___x_4467_ = lean_unsigned_to_nat(1u);
v___x_4468_ = lean_mk_empty_array_with_capacity(v___x_4467_);
v___x_4469_ = lean_array_push(v___x_4468_, v_fvar_4465_);
v___x_4470_ = lean_expr_abstract(v_e_4464_, v___x_4469_);
lean_dec_ref(v___x_4469_);
v___x_4471_ = lean_expr_instantiate1(v___x_4470_, v_v_4466_);
lean_dec_ref(v___x_4470_);
return v___x_4471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVar___boxed(lean_object* v_e_4472_, lean_object* v_fvar_4473_, lean_object* v_v_4474_){
_start:
{
lean_object* v_res_4475_; 
v_res_4475_ = l_Lean_Expr_replaceFVar(v_e_4472_, v_fvar_4473_, v_v_4474_);
lean_dec_ref(v_v_4474_);
lean_dec_ref(v_e_4472_);
return v_res_4475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVarId(lean_object* v_e_4476_, lean_object* v_fvarId_4477_, lean_object* v_v_4478_){
_start:
{
lean_object* v___x_4479_; lean_object* v___x_4480_; 
v___x_4479_ = l_Lean_Expr_fvar___override(v_fvarId_4477_);
v___x_4480_ = l_Lean_Expr_replaceFVar(v_e_4476_, v___x_4479_, v_v_4478_);
return v___x_4480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVarId___boxed(lean_object* v_e_4481_, lean_object* v_fvarId_4482_, lean_object* v_v_4483_){
_start:
{
lean_object* v_res_4484_; 
v_res_4484_ = l_Lean_Expr_replaceFVarId(v_e_4481_, v_fvarId_4482_, v_v_4483_);
lean_dec_ref(v_v_4483_);
lean_dec_ref(v_e_4481_);
return v_res_4484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVars(lean_object* v_e_4485_, lean_object* v_fvars_4486_, lean_object* v_vs_4487_){
_start:
{
lean_object* v___x_4488_; lean_object* v___x_4489_; 
v___x_4488_ = lean_expr_abstract(v_e_4485_, v_fvars_4486_);
v___x_4489_ = lean_expr_instantiate_rev(v___x_4488_, v_vs_4487_);
lean_dec_ref(v___x_4488_);
return v___x_4489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFVars___boxed(lean_object* v_e_4490_, lean_object* v_fvars_4491_, lean_object* v_vs_4492_){
_start:
{
lean_object* v_res_4493_; 
v_res_4493_ = l_Lean_Expr_replaceFVars(v_e_4490_, v_fvars_4491_, v_vs_4492_);
lean_dec_ref(v_vs_4492_);
lean_dec_ref(v_fvars_4491_);
lean_dec_ref(v_e_4490_);
return v_res_4493_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isAtomic(lean_object* v_x_4496_){
_start:
{
switch(lean_obj_tag(v_x_4496_))
{
case 4:
{
uint8_t v___x_4497_; 
v___x_4497_ = 1;
return v___x_4497_;
}
case 3:
{
uint8_t v___x_4498_; 
v___x_4498_ = 1;
return v___x_4498_;
}
case 0:
{
uint8_t v___x_4499_; 
v___x_4499_ = 1;
return v___x_4499_;
}
case 9:
{
uint8_t v___x_4500_; 
v___x_4500_ = 1;
return v___x_4500_;
}
case 2:
{
uint8_t v___x_4501_; 
v___x_4501_ = 1;
return v___x_4501_;
}
case 1:
{
uint8_t v___x_4502_; 
v___x_4502_ = 1;
return v___x_4502_;
}
default: 
{
uint8_t v___x_4503_; 
v___x_4503_ = 0;
return v___x_4503_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isAtomic___boxed(lean_object* v_x_4504_){
_start:
{
uint8_t v_res_4505_; lean_object* v_r_4506_; 
v_res_4505_ = l_Lean_Expr_isAtomic(v_x_4504_);
lean_dec_ref(v_x_4504_);
v_r_4506_ = lean_box(v_res_4505_);
return v_r_4506_;
}
}
static lean_object* _init_l_Lean_mkDecIsTrue___closed__3(void){
_start:
{
lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; 
v___x_4512_ = lean_box(0);
v___x_4513_ = ((lean_object*)(l_Lean_mkDecIsTrue___closed__2));
v___x_4514_ = l_Lean_Expr_const___override(v___x_4513_, v___x_4512_);
return v___x_4514_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDecIsTrue(lean_object* v_pred_4515_, lean_object* v_proof_4516_){
_start:
{
lean_object* v___x_4517_; lean_object* v___x_4518_; 
v___x_4517_ = lean_obj_once(&l_Lean_mkDecIsTrue___closed__3, &l_Lean_mkDecIsTrue___closed__3_once, _init_l_Lean_mkDecIsTrue___closed__3);
v___x_4518_ = l_Lean_mkAppB(v___x_4517_, v_pred_4515_, v_proof_4516_);
return v___x_4518_;
}
}
static lean_object* _init_l_Lean_mkDecIsFalse___closed__2(void){
_start:
{
lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___x_4523_ = lean_box(0);
v___x_4524_ = ((lean_object*)(l_Lean_mkDecIsFalse___closed__1));
v___x_4525_ = l_Lean_Expr_const___override(v___x_4524_, v___x_4523_);
return v___x_4525_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDecIsFalse(lean_object* v_pred_4526_, lean_object* v_proof_4527_){
_start:
{
lean_object* v___x_4528_; lean_object* v___x_4529_; 
v___x_4528_ = lean_obj_once(&l_Lean_mkDecIsFalse___closed__2, &l_Lean_mkDecIsFalse___closed__2_once, _init_l_Lean_mkDecIsFalse___closed__2);
v___x_4529_ = l_Lean_mkAppB(v___x_4528_, v_pred_4526_, v_proof_4527_);
return v___x_4529_;
}
}
static lean_object* _init_l_Lean_instInhabitedExprStructEq_default(void){
_start:
{
lean_object* v___x_4530_; 
v___x_4530_ = lean_obj_once(&l_Lean_instInhabitedExpr___closed__2, &l_Lean_instInhabitedExpr___closed__2_once, _init_l_Lean_instInhabitedExpr___closed__2);
return v___x_4530_;
}
}
static lean_object* _init_l_Lean_instInhabitedExprStructEq(void){
_start:
{
lean_object* v___x_4531_; 
v___x_4531_ = l_Lean_instInhabitedExprStructEq_default;
return v___x_4531_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeExprExprStructEq___lam__0(lean_object* v_val_4532_){
_start:
{
lean_inc_ref(v_val_4532_);
return v_val_4532_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeExprExprStructEq___lam__0___boxed(lean_object* v_val_4533_){
_start:
{
lean_object* v_res_4534_; 
v_res_4534_ = l_Lean_instCoeExprExprStructEq___lam__0(v_val_4533_);
lean_dec_ref(v_val_4533_);
return v_res_4534_;
}
}
LEAN_EXPORT uint8_t l_Lean_ExprStructEq_beq(lean_object* v_x_4537_, lean_object* v_x_4538_){
_start:
{
uint8_t v___x_4539_; 
v___x_4539_ = lean_expr_equal(v_x_4537_, v_x_4538_);
return v___x_4539_;
}
}
LEAN_EXPORT lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object* v_x_4540_, lean_object* v_x_4541_){
_start:
{
uint8_t v_res_4542_; lean_object* v_r_4543_; 
v_res_4542_ = l_Lean_ExprStructEq_beq(v_x_4540_, v_x_4541_);
lean_dec_ref(v_x_4541_);
lean_dec_ref(v_x_4540_);
v_r_4543_ = lean_box(v_res_4542_);
return v_r_4543_;
}
}
LEAN_EXPORT uint64_t l_Lean_ExprStructEq_hash(lean_object* v_x_4544_){
_start:
{
uint64_t v___x_4545_; 
v___x_4545_ = l_Lean_Expr_hash(v_x_4544_);
return v___x_4545_;
}
}
LEAN_EXPORT lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object* v_x_4546_){
_start:
{
uint64_t v_res_4547_; lean_object* v_r_4548_; 
v_res_4547_ = l_Lean_ExprStructEq_hash(v_x_4546_);
lean_dec_ref(v_x_4546_);
v_r_4548_ = lean_box_uint64(v_res_4547_);
return v_r_4548_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_mkAppRevRangeAux(lean_object* v_revArgs_4555_, lean_object* v_start_4556_, lean_object* v_b_4557_, lean_object* v_i_4558_){
_start:
{
uint8_t v___x_4559_; 
v___x_4559_ = lean_nat_dec_le(v_i_4558_, v_start_4556_);
if (v___x_4559_ == 0)
{
lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v_i_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4560_ = l_Lean_instInhabitedExpr;
v___x_4561_ = lean_unsigned_to_nat(1u);
v_i_4562_ = lean_nat_sub(v_i_4558_, v___x_4561_);
lean_dec(v_i_4558_);
v___x_4563_ = lean_array_get_borrowed(v___x_4560_, v_revArgs_4555_, v_i_4562_);
lean_inc(v___x_4563_);
v___x_4564_ = l_Lean_Expr_app___override(v_b_4557_, v___x_4563_);
v_b_4557_ = v___x_4564_;
v_i_4558_ = v_i_4562_;
goto _start;
}
else
{
lean_dec(v_i_4558_);
return v_b_4557_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_mkAppRevRangeAux___boxed(lean_object* v_revArgs_4566_, lean_object* v_start_4567_, lean_object* v_b_4568_, lean_object* v_i_4569_){
_start:
{
lean_object* v_res_4570_; 
v_res_4570_ = l___private_Lean_Expr_0__Lean_Expr_mkAppRevRangeAux(v_revArgs_4566_, v_start_4567_, v_b_4568_, v_i_4569_);
lean_dec(v_start_4567_);
lean_dec_ref(v_revArgs_4566_);
return v_res_4570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mkAppRevRange(lean_object* v_f_4571_, lean_object* v_beginIdx_4572_, lean_object* v_endIdx_4573_, lean_object* v_revArgs_4574_){
_start:
{
lean_object* v___x_4575_; 
v___x_4575_ = l___private_Lean_Expr_0__Lean_Expr_mkAppRevRangeAux(v_revArgs_4574_, v_beginIdx_4572_, v_f_4571_, v_endIdx_4573_);
return v___x_4575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mkAppRevRange___boxed(lean_object* v_f_4576_, lean_object* v_beginIdx_4577_, lean_object* v_endIdx_4578_, lean_object* v_revArgs_4579_){
_start:
{
lean_object* v_res_4580_; 
v_res_4580_ = l_Lean_Expr_mkAppRevRange(v_f_4576_, v_beginIdx_4577_, v_endIdx_4578_, v_revArgs_4579_);
lean_dec_ref(v_revArgs_4579_);
lean_dec(v_beginIdx_4577_);
return v_res_4580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_betaRev_go(lean_object* v_revArgs_4581_, uint8_t v_useZeta_4582_, uint8_t v_preserveMData_4583_, lean_object* v_sz_4584_, lean_object* v_e_4585_, lean_object* v_i_4586_){
_start:
{
switch(lean_obj_tag(v_e_4585_))
{
case 6:
{
lean_object* v_body_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; uint8_t v___x_4595_; 
v_body_4592_ = lean_ctor_get(v_e_4585_, 2);
lean_inc_ref(v_body_4592_);
lean_dec_ref_known(v_e_4585_, 3);
v___x_4593_ = lean_unsigned_to_nat(1u);
v___x_4594_ = lean_nat_add(v_i_4586_, v___x_4593_);
lean_dec(v_i_4586_);
v___x_4595_ = lean_nat_dec_lt(v___x_4594_, v_sz_4584_);
if (v___x_4595_ == 0)
{
lean_object* v___x_4596_; 
lean_dec(v___x_4594_);
v___x_4596_ = lean_expr_instantiate(v_body_4592_, v_revArgs_4581_);
lean_dec_ref(v_body_4592_);
return v___x_4596_;
}
else
{
v_e_4585_ = v_body_4592_;
v_i_4586_ = v___x_4594_;
goto _start;
}
}
case 8:
{
if (v_useZeta_4582_ == 0)
{
goto v___jp_4587_;
}
else
{
lean_object* v_value_4598_; lean_object* v_body_4599_; uint8_t v___x_4600_; 
v_value_4598_ = lean_ctor_get(v_e_4585_, 2);
v_body_4599_ = lean_ctor_get(v_e_4585_, 3);
v___x_4600_ = lean_nat_dec_lt(v_i_4586_, v_sz_4584_);
if (v___x_4600_ == 0)
{
goto v___jp_4587_;
}
else
{
lean_object* v___x_4601_; 
lean_inc_ref(v_body_4599_);
lean_inc_ref(v_value_4598_);
lean_dec_ref_known(v_e_4585_, 4);
v___x_4601_ = lean_expr_instantiate1(v_body_4599_, v_value_4598_);
lean_dec_ref(v_value_4598_);
lean_dec_ref(v_body_4599_);
v_e_4585_ = v___x_4601_;
goto _start;
}
}
}
case 10:
{
if (v_preserveMData_4583_ == 0)
{
lean_object* v_expr_4603_; 
v_expr_4603_ = lean_ctor_get(v_e_4585_, 1);
lean_inc_ref(v_expr_4603_);
lean_dec_ref_known(v_e_4585_, 2);
v_e_4585_ = v_expr_4603_;
goto _start;
}
else
{
goto v___jp_4587_;
}
}
default: 
{
goto v___jp_4587_;
}
}
v___jp_4587_:
{
lean_object* v_n_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; 
v_n_4588_ = lean_nat_sub(v_sz_4584_, v_i_4586_);
lean_dec(v_i_4586_);
v___x_4589_ = lean_expr_instantiate_range(v_e_4585_, v_n_4588_, v_sz_4584_, v_revArgs_4581_);
lean_dec_ref(v_e_4585_);
v___x_4590_ = lean_unsigned_to_nat(0u);
v___x_4591_ = l___private_Lean_Expr_0__Lean_Expr_mkAppRevRangeAux(v_revArgs_4581_, v___x_4590_, v___x_4589_, v_n_4588_);
return v___x_4591_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_betaRev_go___boxed(lean_object* v_revArgs_4605_, lean_object* v_useZeta_4606_, lean_object* v_preserveMData_4607_, lean_object* v_sz_4608_, lean_object* v_e_4609_, lean_object* v_i_4610_){
_start:
{
uint8_t v_useZeta_boxed_4611_; uint8_t v_preserveMData_boxed_4612_; lean_object* v_res_4613_; 
v_useZeta_boxed_4611_ = lean_unbox(v_useZeta_4606_);
v_preserveMData_boxed_4612_ = lean_unbox(v_preserveMData_4607_);
v_res_4613_ = l___private_Lean_Expr_0__Lean_Expr_betaRev_go(v_revArgs_4605_, v_useZeta_boxed_4611_, v_preserveMData_boxed_4612_, v_sz_4608_, v_e_4609_, v_i_4610_);
lean_dec(v_sz_4608_);
lean_dec_ref(v_revArgs_4605_);
return v_res_4613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_betaRev(lean_object* v_f_4614_, lean_object* v_revArgs_4615_, uint8_t v_useZeta_4616_, uint8_t v_preserveMData_4617_){
_start:
{
lean_object* v_sz_4618_; lean_object* v___x_4619_; uint8_t v___x_4620_; 
v_sz_4618_ = lean_array_get_size(v_revArgs_4615_);
v___x_4619_ = lean_unsigned_to_nat(0u);
v___x_4620_ = lean_nat_dec_eq(v_sz_4618_, v___x_4619_);
if (v___x_4620_ == 0)
{
lean_object* v___x_4621_; 
v___x_4621_ = l___private_Lean_Expr_0__Lean_Expr_betaRev_go(v_revArgs_4615_, v_useZeta_4616_, v_preserveMData_4617_, v_sz_4618_, v_f_4614_, v___x_4619_);
return v___x_4621_;
}
else
{
return v_f_4614_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_betaRev___boxed(lean_object* v_f_4622_, lean_object* v_revArgs_4623_, lean_object* v_useZeta_4624_, lean_object* v_preserveMData_4625_){
_start:
{
uint8_t v_useZeta_boxed_4626_; uint8_t v_preserveMData_boxed_4627_; lean_object* v_res_4628_; 
v_useZeta_boxed_4626_ = lean_unbox(v_useZeta_4624_);
v_preserveMData_boxed_4627_ = lean_unbox(v_preserveMData_4625_);
v_res_4628_ = l_Lean_Expr_betaRev(v_f_4622_, v_revArgs_4623_, v_useZeta_boxed_4626_, v_preserveMData_boxed_4627_);
lean_dec_ref(v_revArgs_4623_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_beta(lean_object* v_f_4629_, lean_object* v_args_4630_){
_start:
{
lean_object* v___x_4631_; uint8_t v___x_4632_; lean_object* v___x_4633_; 
v___x_4631_ = l_Array_reverse___redArg(v_args_4630_);
v___x_4632_ = 0;
v___x_4633_ = l_Lean_Expr_betaRev(v_f_4629_, v___x_4631_, v___x_4632_, v___x_4632_);
lean_dec_ref(v___x_4631_);
return v___x_4633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getNumHeadLambdas(lean_object* v_x_4634_){
_start:
{
switch(lean_obj_tag(v_x_4634_))
{
case 6:
{
lean_object* v_body_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; 
v_body_4635_ = lean_ctor_get(v_x_4634_, 2);
v___x_4636_ = l_Lean_Expr_getNumHeadLambdas(v_body_4635_);
v___x_4637_ = lean_unsigned_to_nat(1u);
v___x_4638_ = lean_nat_add(v___x_4636_, v___x_4637_);
lean_dec(v___x_4636_);
return v___x_4638_;
}
case 10:
{
lean_object* v_expr_4639_; 
v_expr_4639_ = lean_ctor_get(v_x_4634_, 1);
v_x_4634_ = v_expr_4639_;
goto _start;
}
default: 
{
lean_object* v___x_4641_; 
v___x_4641_ = lean_unsigned_to_nat(0u);
return v___x_4641_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getNumHeadLambdas___boxed(lean_object* v_x_4642_){
_start:
{
lean_object* v_res_4643_; 
v_res_4643_ = l_Lean_Expr_getNumHeadLambdas(v_x_4642_);
lean_dec_ref(v_x_4642_);
return v_res_4643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getLambdaBody(lean_object* v_x_4644_){
_start:
{
switch(lean_obj_tag(v_x_4644_))
{
case 6:
{
lean_object* v_body_4645_; 
v_body_4645_ = lean_ctor_get(v_x_4644_, 2);
v_x_4644_ = v_body_4645_;
goto _start;
}
case 10:
{
lean_object* v_expr_4647_; 
v_expr_4647_ = lean_ctor_get(v_x_4644_, 1);
v_x_4644_ = v_expr_4647_;
goto _start;
}
default: 
{
lean_inc_ref(v_x_4644_);
return v_x_4644_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getLambdaBody___boxed(lean_object* v_x_4649_){
_start:
{
lean_object* v_res_4650_; 
v_res_4650_ = l_Lean_Expr_getLambdaBody(v_x_4649_);
lean_dec_ref(v_x_4649_);
return v_res_4650_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isHeadBetaTargetFn(uint8_t v_useZeta_4651_, lean_object* v_x_4652_){
_start:
{
switch(lean_obj_tag(v_x_4652_))
{
case 6:
{
uint8_t v___x_4653_; 
v___x_4653_ = 1;
return v___x_4653_;
}
case 8:
{
if (v_useZeta_4651_ == 0)
{
return v_useZeta_4651_;
}
else
{
lean_object* v_body_4654_; 
v_body_4654_ = lean_ctor_get(v_x_4652_, 3);
v_x_4652_ = v_body_4654_;
goto _start;
}
}
case 10:
{
lean_object* v_expr_4656_; 
v_expr_4656_ = lean_ctor_get(v_x_4652_, 1);
v_x_4652_ = v_expr_4656_;
goto _start;
}
default: 
{
uint8_t v___x_4658_; 
v___x_4658_ = 0;
return v___x_4658_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isHeadBetaTargetFn___boxed(lean_object* v_useZeta_4659_, lean_object* v_x_4660_){
_start:
{
uint8_t v_useZeta_boxed_4661_; uint8_t v_res_4662_; lean_object* v_r_4663_; 
v_useZeta_boxed_4661_ = lean_unbox(v_useZeta_4659_);
v_res_4662_ = l_Lean_Expr_isHeadBetaTargetFn(v_useZeta_boxed_4661_, v_x_4660_);
lean_dec_ref(v_x_4660_);
v_r_4663_ = lean_box(v_res_4662_);
return v_r_4663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_headBeta(lean_object* v_e_4664_){
_start:
{
lean_object* v_f_4665_; uint8_t v___x_4666_; uint8_t v___x_4667_; 
v_f_4665_ = l_Lean_Expr_getAppFn(v_e_4664_);
v___x_4666_ = 0;
v___x_4667_ = l_Lean_Expr_isHeadBetaTargetFn(v___x_4666_, v_f_4665_);
if (v___x_4667_ == 0)
{
lean_dec_ref(v_f_4665_);
return v_e_4664_;
}
else
{
lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
v___x_4668_ = l_Lean_Expr_getAppNumArgs(v_e_4664_);
v___x_4669_ = lean_mk_empty_array_with_capacity(v___x_4668_);
lean_dec(v___x_4668_);
v___x_4670_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_4664_, v___x_4669_);
v___x_4671_ = l_Lean_Expr_betaRev(v_f_4665_, v___x_4670_, v___x_4666_, v___x_4666_);
lean_dec_ref(v___x_4670_);
return v___x_4671_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object* v_e_4672_, uint8_t v_useZeta_4673_){
_start:
{
uint8_t v___x_4674_; 
v___x_4674_ = l_Lean_Expr_isApp(v_e_4672_);
if (v___x_4674_ == 0)
{
return v___x_4674_;
}
else
{
lean_object* v___x_4675_; uint8_t v___x_4676_; 
v___x_4675_ = l_Lean_Expr_getAppFn(v_e_4672_);
v___x_4676_ = l_Lean_Expr_isHeadBetaTargetFn(v_useZeta_4673_, v___x_4675_);
lean_dec_ref(v___x_4675_);
return v___x_4676_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isHeadBetaTarget___boxed(lean_object* v_e_4677_, lean_object* v_useZeta_4678_){
_start:
{
uint8_t v_useZeta_boxed_4679_; uint8_t v_res_4680_; lean_object* v_r_4681_; 
v_useZeta_boxed_4679_ = lean_unbox(v_useZeta_4678_);
v_res_4680_ = l_Lean_Expr_isHeadBetaTarget(v_e_4677_, v_useZeta_boxed_4679_);
lean_dec_ref(v_e_4677_);
v_r_4681_ = lean_box(v_res_4680_);
return v_r_4681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_etaExpandedBody(lean_object* v_x_4682_, lean_object* v_x_4683_, lean_object* v_x_4684_){
_start:
{
lean_object* v_f_4686_; 
if (lean_obj_tag(v_x_4682_) == 5)
{
lean_object* v_arg_4690_; 
v_arg_4690_ = lean_ctor_get(v_x_4682_, 1);
if (lean_obj_tag(v_arg_4690_) == 0)
{
lean_object* v_fn_4691_; lean_object* v_deBruijnIndex_4692_; lean_object* v_zero_4693_; uint8_t v_isZero_4694_; 
v_fn_4691_ = lean_ctor_get(v_x_4682_, 0);
v_deBruijnIndex_4692_ = lean_ctor_get(v_arg_4690_, 0);
v_zero_4693_ = lean_unsigned_to_nat(0u);
v_isZero_4694_ = lean_nat_dec_eq(v_x_4683_, v_zero_4693_);
if (v_isZero_4694_ == 1)
{
lean_dec(v_x_4684_);
lean_dec(v_x_4683_);
v_f_4686_ = v_x_4682_;
goto v___jp_4685_;
}
else
{
uint8_t v___x_4695_; 
lean_inc(v_deBruijnIndex_4692_);
lean_inc_ref(v_fn_4691_);
lean_dec_ref_known(v_x_4682_, 2);
v___x_4695_ = lean_nat_dec_eq(v_deBruijnIndex_4692_, v_x_4684_);
lean_dec(v_deBruijnIndex_4692_);
if (v___x_4695_ == 0)
{
lean_object* v___x_4696_; 
lean_dec_ref(v_fn_4691_);
lean_dec(v_x_4684_);
lean_dec(v_x_4683_);
v___x_4696_ = lean_box(0);
return v___x_4696_;
}
else
{
lean_object* v_one_4697_; lean_object* v_n_4698_; lean_object* v___x_4699_; 
v_one_4697_ = lean_unsigned_to_nat(1u);
v_n_4698_ = lean_nat_sub(v_x_4683_, v_one_4697_);
lean_dec(v_x_4683_);
v___x_4699_ = lean_nat_add(v_x_4684_, v_one_4697_);
lean_dec(v_x_4684_);
v_x_4682_ = v_fn_4691_;
v_x_4683_ = v_n_4698_;
v_x_4684_ = v___x_4699_;
goto _start;
}
}
}
else
{
lean_object* v_zero_4701_; uint8_t v_isZero_4702_; 
lean_dec(v_x_4684_);
v_zero_4701_ = lean_unsigned_to_nat(0u);
v_isZero_4702_ = lean_nat_dec_eq(v_x_4683_, v_zero_4701_);
lean_dec(v_x_4683_);
if (v_isZero_4702_ == 1)
{
v_f_4686_ = v_x_4682_;
goto v___jp_4685_;
}
else
{
lean_object* v___x_4703_; 
lean_dec_ref_known(v_x_4682_, 2);
v___x_4703_ = lean_box(0);
return v___x_4703_;
}
}
}
else
{
lean_object* v_zero_4704_; uint8_t v_isZero_4705_; 
lean_dec(v_x_4684_);
v_zero_4704_ = lean_unsigned_to_nat(0u);
v_isZero_4705_ = lean_nat_dec_eq(v_x_4683_, v_zero_4704_);
lean_dec(v_x_4683_);
if (v_isZero_4705_ == 1)
{
v_f_4686_ = v_x_4682_;
goto v___jp_4685_;
}
else
{
lean_object* v___x_4706_; 
lean_dec_ref(v_x_4682_);
v___x_4706_ = lean_box(0);
return v___x_4706_;
}
}
v___jp_4685_:
{
uint8_t v___x_4687_; 
v___x_4687_ = l_Lean_Expr_hasLooseBVars(v_f_4686_);
if (v___x_4687_ == 0)
{
lean_object* v___x_4688_; 
v___x_4688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4688_, 0, v_f_4686_);
return v___x_4688_;
}
else
{
lean_object* v___x_4689_; 
lean_dec_ref(v_f_4686_);
v___x_4689_ = lean_box(0);
return v___x_4689_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_etaExpandedAux(lean_object* v_x_4707_, lean_object* v_x_4708_){
_start:
{
if (lean_obj_tag(v_x_4707_) == 6)
{
lean_object* v_body_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; 
v_body_4709_ = lean_ctor_get(v_x_4707_, 2);
lean_inc_ref(v_body_4709_);
lean_dec_ref_known(v_x_4707_, 3);
v___x_4710_ = lean_unsigned_to_nat(1u);
v___x_4711_ = lean_nat_add(v_x_4708_, v___x_4710_);
lean_dec(v_x_4708_);
v_x_4707_ = v_body_4709_;
v_x_4708_ = v___x_4711_;
goto _start;
}
else
{
lean_object* v___x_4713_; lean_object* v___x_4714_; 
v___x_4713_ = lean_unsigned_to_nat(0u);
v___x_4714_ = l___private_Lean_Expr_0__Lean_Expr_etaExpandedBody(v_x_4707_, v_x_4708_, v___x_4713_);
return v___x_4714_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_etaExpanded_x3f(lean_object* v_e_4715_){
_start:
{
lean_object* v___x_4716_; lean_object* v___x_4717_; 
v___x_4716_ = lean_unsigned_to_nat(0u);
v___x_4717_ = l___private_Lean_Expr_0__Lean_Expr_etaExpandedAux(v_e_4715_, v___x_4716_);
return v___x_4717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_etaExpandedStrict_x3f(lean_object* v_x_4718_){
_start:
{
if (lean_obj_tag(v_x_4718_) == 6)
{
lean_object* v_body_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; 
v_body_4719_ = lean_ctor_get(v_x_4718_, 2);
lean_inc_ref(v_body_4719_);
lean_dec_ref_known(v_x_4718_, 3);
v___x_4720_ = lean_unsigned_to_nat(1u);
v___x_4721_ = l___private_Lean_Expr_0__Lean_Expr_etaExpandedAux(v_body_4719_, v___x_4720_);
return v___x_4721_;
}
else
{
lean_object* v___x_4722_; 
lean_dec_ref(v_x_4718_);
v___x_4722_ = lean_box(0);
return v___x_4722_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getOptParamDefault_x3f(lean_object* v_e_4726_){
_start:
{
lean_object* v___x_4727_; lean_object* v___x_4728_; uint8_t v___x_4729_; 
v___x_4727_ = ((lean_object*)(l_Lean_Expr_getOptParamDefault_x3f___closed__1));
v___x_4728_ = lean_unsigned_to_nat(2u);
v___x_4729_ = l_Lean_Expr_isAppOfArity(v_e_4726_, v___x_4727_, v___x_4728_);
if (v___x_4729_ == 0)
{
lean_object* v___x_4730_; 
v___x_4730_ = lean_box(0);
return v___x_4730_;
}
else
{
lean_object* v___x_4731_; lean_object* v___x_4732_; 
v___x_4731_ = l_Lean_Expr_appArg_x21(v_e_4726_);
v___x_4732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4732_, 0, v___x_4731_);
return v___x_4732_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getOptParamDefault_x3f___boxed(lean_object* v_e_4733_){
_start:
{
lean_object* v_res_4734_; 
v_res_4734_ = l_Lean_Expr_getOptParamDefault_x3f(v_e_4733_);
lean_dec_ref(v_e_4733_);
return v_res_4734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAutoParamTactic_x3f(lean_object* v_e_4738_){
_start:
{
lean_object* v___x_4739_; lean_object* v___x_4740_; uint8_t v___x_4741_; 
v___x_4739_ = ((lean_object*)(l_Lean_Expr_getAutoParamTactic_x3f___closed__1));
v___x_4740_ = lean_unsigned_to_nat(2u);
v___x_4741_ = l_Lean_Expr_isAppOfArity(v_e_4738_, v___x_4739_, v___x_4740_);
if (v___x_4741_ == 0)
{
lean_object* v___x_4742_; 
v___x_4742_ = lean_box(0);
return v___x_4742_;
}
else
{
lean_object* v___x_4743_; lean_object* v___x_4744_; 
v___x_4743_ = l_Lean_Expr_appArg_x21(v_e_4738_);
v___x_4744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4744_, 0, v___x_4743_);
return v___x_4744_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAutoParamTactic_x3f___boxed(lean_object* v_e_4745_){
_start:
{
lean_object* v_res_4746_; 
v_res_4746_ = l_Lean_Expr_getAutoParamTactic_x3f(v_e_4745_);
lean_dec_ref(v_e_4745_);
return v_res_4746_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isOutParam(lean_object* v_e_4750_){
_start:
{
lean_object* v___x_4751_; lean_object* v___x_4752_; uint8_t v___x_4753_; 
v___x_4751_ = ((lean_object*)(l_Lean_Expr_isOutParam___closed__1));
v___x_4752_ = lean_unsigned_to_nat(1u);
v___x_4753_ = l_Lean_Expr_isAppOfArity(v_e_4750_, v___x_4751_, v___x_4752_);
return v___x_4753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isOutParam___boxed(lean_object* v_e_4754_){
_start:
{
uint8_t v_res_4755_; lean_object* v_r_4756_; 
v_res_4755_ = l_Lean_Expr_isOutParam(v_e_4754_);
lean_dec_ref(v_e_4754_);
v_r_4756_ = lean_box(v_res_4755_);
return v_r_4756_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isSemiOutParam(lean_object* v_e_4760_){
_start:
{
lean_object* v___x_4761_; lean_object* v___x_4762_; uint8_t v___x_4763_; 
v___x_4761_ = ((lean_object*)(l_Lean_Expr_isSemiOutParam___closed__1));
v___x_4762_ = lean_unsigned_to_nat(1u);
v___x_4763_ = l_Lean_Expr_isAppOfArity(v_e_4760_, v___x_4761_, v___x_4762_);
return v___x_4763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isSemiOutParam___boxed(lean_object* v_e_4764_){
_start:
{
uint8_t v_res_4765_; lean_object* v_r_4766_; 
v_res_4765_ = l_Lean_Expr_isSemiOutParam(v_e_4764_);
lean_dec_ref(v_e_4764_);
v_r_4766_ = lean_box(v_res_4765_);
return v_r_4766_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isOptParam(lean_object* v_e_4767_){
_start:
{
lean_object* v___x_4768_; lean_object* v___x_4769_; uint8_t v___x_4770_; 
v___x_4768_ = ((lean_object*)(l_Lean_Expr_getOptParamDefault_x3f___closed__1));
v___x_4769_ = lean_unsigned_to_nat(2u);
v___x_4770_ = l_Lean_Expr_isAppOfArity(v_e_4767_, v___x_4768_, v___x_4769_);
return v___x_4770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isOptParam___boxed(lean_object* v_e_4771_){
_start:
{
uint8_t v_res_4772_; lean_object* v_r_4773_; 
v_res_4772_ = l_Lean_Expr_isOptParam(v_e_4771_);
lean_dec_ref(v_e_4771_);
v_r_4773_ = lean_box(v_res_4772_);
return v_r_4773_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isAutoParam(lean_object* v_e_4774_){
_start:
{
lean_object* v___x_4775_; lean_object* v___x_4776_; uint8_t v___x_4777_; 
v___x_4775_ = ((lean_object*)(l_Lean_Expr_getAutoParamTactic_x3f___closed__1));
v___x_4776_ = lean_unsigned_to_nat(2u);
v___x_4777_ = l_Lean_Expr_isAppOfArity(v_e_4774_, v___x_4775_, v___x_4776_);
return v___x_4777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isAutoParam___boxed(lean_object* v_e_4778_){
_start:
{
uint8_t v_res_4779_; lean_object* v_r_4780_; 
v_res_4779_ = l_Lean_Expr_isAutoParam(v_e_4778_);
lean_dec_ref(v_e_4778_);
v_r_4780_ = lean_box(v_res_4779_);
return v_r_4780_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isTypeAnnotation(lean_object* v_e_4781_){
_start:
{
lean_object* v___x_4782_; 
v___x_4782_ = l_Lean_Expr_getAppFn(v_e_4781_);
if (lean_obj_tag(v___x_4782_) == 4)
{
lean_object* v_declName_4783_; uint8_t v___y_4785_; lean_object* v___x_4790_; uint8_t v___x_4791_; 
v_declName_4783_ = lean_ctor_get(v___x_4782_, 0);
lean_inc(v_declName_4783_);
lean_dec_ref_known(v___x_4782_, 2);
v___x_4790_ = ((lean_object*)(l_Lean_Expr_isOutParam___closed__1));
v___x_4791_ = lean_name_eq(v_declName_4783_, v___x_4790_);
if (v___x_4791_ == 0)
{
lean_object* v___x_4792_; uint8_t v___x_4793_; 
v___x_4792_ = ((lean_object*)(l_Lean_Expr_isSemiOutParam___closed__1));
v___x_4793_ = lean_name_eq(v_declName_4783_, v___x_4792_);
v___y_4785_ = v___x_4793_;
goto v___jp_4784_;
}
else
{
v___y_4785_ = v___x_4791_;
goto v___jp_4784_;
}
v___jp_4784_:
{
if (v___y_4785_ == 0)
{
lean_object* v___x_4786_; uint8_t v___x_4787_; 
v___x_4786_ = ((lean_object*)(l_Lean_Expr_getOptParamDefault_x3f___closed__1));
v___x_4787_ = lean_name_eq(v_declName_4783_, v___x_4786_);
if (v___x_4787_ == 0)
{
lean_object* v___x_4788_; uint8_t v___x_4789_; 
v___x_4788_ = ((lean_object*)(l_Lean_Expr_getAutoParamTactic_x3f___closed__1));
v___x_4789_ = lean_name_eq(v_declName_4783_, v___x_4788_);
lean_dec(v_declName_4783_);
return v___x_4789_;
}
else
{
lean_dec(v_declName_4783_);
return v___x_4787_;
}
}
else
{
lean_dec(v_declName_4783_);
return v___y_4785_;
}
}
}
else
{
uint8_t v___x_4794_; 
lean_dec_ref(v___x_4782_);
v___x_4794_ = 0;
return v___x_4794_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isTypeAnnotation___boxed(lean_object* v_e_4795_){
_start:
{
uint8_t v_res_4796_; lean_object* v_r_4797_; 
v_res_4796_ = l_Lean_Expr_isTypeAnnotation(v_e_4795_);
lean_dec_ref(v_e_4795_);
v_r_4797_ = lean_box(v_res_4796_);
return v_r_4797_;
}
}
LEAN_EXPORT lean_object* lean_expr_consume_type_annotations(lean_object* v_e_4798_){
_start:
{
uint8_t v___y_4800_; uint8_t v___y_4804_; uint8_t v___x_4810_; 
v___x_4810_ = l_Lean_Expr_isOptParam(v_e_4798_);
if (v___x_4810_ == 0)
{
uint8_t v___x_4811_; 
v___x_4811_ = l_Lean_Expr_isAutoParam(v_e_4798_);
v___y_4804_ = v___x_4811_;
goto v___jp_4803_;
}
else
{
v___y_4804_ = v___x_4810_;
goto v___jp_4803_;
}
v___jp_4799_:
{
if (v___y_4800_ == 0)
{
return v_e_4798_;
}
else
{
lean_object* v___x_4801_; 
v___x_4801_ = l_Lean_Expr_appArg_x21(v_e_4798_);
lean_dec_ref(v_e_4798_);
v_e_4798_ = v___x_4801_;
goto _start;
}
}
v___jp_4803_:
{
if (v___y_4804_ == 0)
{
uint8_t v___x_4805_; 
v___x_4805_ = l_Lean_Expr_isOutParam(v_e_4798_);
if (v___x_4805_ == 0)
{
uint8_t v___x_4806_; 
v___x_4806_ = l_Lean_Expr_isSemiOutParam(v_e_4798_);
v___y_4800_ = v___x_4806_;
goto v___jp_4799_;
}
else
{
v___y_4800_ = v___x_4805_;
goto v___jp_4799_;
}
}
else
{
lean_object* v___x_4807_; lean_object* v___x_4808_; 
v___x_4807_ = l_Lean_Expr_appFn_x21(v_e_4798_);
lean_dec_ref(v_e_4798_);
v___x_4808_ = l_Lean_Expr_appArg_x21(v___x_4807_);
lean_dec_ref(v___x_4807_);
v_e_4798_ = v___x_4808_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_cleanupAnnotations(lean_object* v_e_4812_){
_start:
{
lean_object* v___x_4813_; lean_object* v_e_x27_4814_; uint8_t v___x_4815_; 
v___x_4813_ = l_Lean_Expr_consumeMData(v_e_4812_);
v_e_x27_4814_ = lean_expr_consume_type_annotations(v___x_4813_);
v___x_4815_ = lean_expr_eqv(v_e_x27_4814_, v_e_4812_);
if (v___x_4815_ == 0)
{
lean_dec_ref(v_e_4812_);
v_e_4812_ = v_e_x27_4814_;
goto _start;
}
else
{
lean_dec_ref(v_e_x27_4814_);
return v_e_4812_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object* v_e_4817_){
_start:
{
lean_object* v_fn_4818_; lean_object* v___x_4819_; 
v_fn_4818_ = lean_ctor_get(v_e_4817_, 0);
lean_inc_ref(v_fn_4818_);
lean_dec_ref(v_e_4817_);
v___x_4819_ = l_Lean_Expr_cleanupAnnotations(v_fn_4818_);
return v___x_4819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_appFnCleanup(lean_object* v_e_4820_, lean_object* v_h_4821_){
_start:
{
lean_object* v___x_4822_; 
v___x_4822_ = l_Lean_Expr_appFnCleanup___redArg(v_e_4820_);
return v___x_4822_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isFalse(lean_object* v_e_4826_){
_start:
{
lean_object* v___x_4827_; lean_object* v___x_4828_; uint8_t v___x_4829_; 
v___x_4827_ = l_Lean_Expr_cleanupAnnotations(v_e_4826_);
v___x_4828_ = ((lean_object*)(l_Lean_Expr_isFalse___closed__1));
v___x_4829_ = l_Lean_Expr_isConstOf(v___x_4827_, v___x_4828_);
lean_dec_ref(v___x_4827_);
return v___x_4829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isFalse___boxed(lean_object* v_e_4830_){
_start:
{
uint8_t v_res_4831_; lean_object* v_r_4832_; 
v_res_4831_ = l_Lean_Expr_isFalse(v_e_4830_);
v_r_4832_ = lean_box(v_res_4831_);
return v_r_4832_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isTrue(lean_object* v_e_4836_){
_start:
{
lean_object* v___x_4837_; lean_object* v___x_4838_; uint8_t v___x_4839_; 
v___x_4837_ = l_Lean_Expr_cleanupAnnotations(v_e_4836_);
v___x_4838_ = ((lean_object*)(l_Lean_Expr_isTrue___closed__1));
v___x_4839_ = l_Lean_Expr_isConstOf(v___x_4837_, v___x_4838_);
lean_dec_ref(v___x_4837_);
return v___x_4839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isTrue___boxed(lean_object* v_e_4840_){
_start:
{
uint8_t v_res_4841_; lean_object* v_r_4842_; 
v_res_4841_ = l_Lean_Expr_isTrue(v_e_4840_);
v_r_4842_ = lean_box(v_res_4841_);
return v_r_4842_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isBoolFalse(lean_object* v_e_4847_){
_start:
{
lean_object* v___x_4848_; lean_object* v___x_4849_; uint8_t v___x_4850_; 
v___x_4848_ = l_Lean_Expr_cleanupAnnotations(v_e_4847_);
v___x_4849_ = ((lean_object*)(l_Lean_Expr_isBoolFalse___closed__1));
v___x_4850_ = l_Lean_Expr_isConstOf(v___x_4848_, v___x_4849_);
lean_dec_ref(v___x_4848_);
return v___x_4850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isBoolFalse___boxed(lean_object* v_e_4851_){
_start:
{
uint8_t v_res_4852_; lean_object* v_r_4853_; 
v_res_4852_ = l_Lean_Expr_isBoolFalse(v_e_4851_);
v_r_4853_ = lean_box(v_res_4852_);
return v_r_4853_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isBoolTrue(lean_object* v_e_4857_){
_start:
{
lean_object* v___x_4858_; lean_object* v___x_4859_; uint8_t v___x_4860_; 
v___x_4858_ = l_Lean_Expr_cleanupAnnotations(v_e_4857_);
v___x_4859_ = ((lean_object*)(l_Lean_Expr_isBoolTrue___closed__0));
v___x_4860_ = l_Lean_Expr_isConstOf(v___x_4858_, v___x_4859_);
lean_dec_ref(v___x_4858_);
return v___x_4860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isBoolTrue___boxed(lean_object* v_e_4861_){
_start:
{
uint8_t v_res_4862_; lean_object* v_r_4863_; 
v_res_4862_ = l_Lean_Expr_isBoolTrue(v_e_4861_);
v_r_4863_ = lean_box(v_res_4862_);
return v_r_4863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getForallArity(lean_object* v_x_4864_){
_start:
{
switch(lean_obj_tag(v_x_4864_))
{
case 10:
{
lean_object* v_expr_4865_; 
v_expr_4865_ = lean_ctor_get(v_x_4864_, 1);
lean_inc_ref(v_expr_4865_);
lean_dec_ref_known(v_x_4864_, 2);
v_x_4864_ = v_expr_4865_;
goto _start;
}
case 7:
{
lean_object* v_body_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; 
v_body_4867_ = lean_ctor_get(v_x_4864_, 2);
lean_inc_ref(v_body_4867_);
lean_dec_ref_known(v_x_4864_, 3);
v___x_4868_ = l_Lean_Expr_getForallArity(v_body_4867_);
v___x_4869_ = lean_unsigned_to_nat(1u);
v___x_4870_ = lean_nat_add(v___x_4868_, v___x_4869_);
lean_dec(v___x_4868_);
return v___x_4870_;
}
default: 
{
uint8_t v___x_4871_; uint8_t v___x_4872_; 
v___x_4871_ = 0;
v___x_4872_ = l_Lean_Expr_isHeadBetaTarget(v_x_4864_, v___x_4871_);
if (v___x_4872_ == 0)
{
lean_object* v_e_x27_4873_; uint8_t v___x_4874_; 
lean_inc_ref(v_x_4864_);
v_e_x27_4873_ = l_Lean_Expr_cleanupAnnotations(v_x_4864_);
v___x_4874_ = lean_expr_eqv(v_x_4864_, v_e_x27_4873_);
lean_dec_ref(v_x_4864_);
if (v___x_4874_ == 0)
{
v_x_4864_ = v_e_x27_4873_;
goto _start;
}
else
{
if (v___x_4872_ == 0)
{
lean_object* v___x_4876_; 
lean_dec_ref(v_e_x27_4873_);
v___x_4876_ = lean_unsigned_to_nat(0u);
return v___x_4876_;
}
else
{
v_x_4864_ = v_e_x27_4873_;
goto _start;
}
}
}
else
{
lean_object* v___x_4878_; 
v___x_4878_ = l_Lean_Expr_headBeta(v_x_4864_);
v_x_4864_ = v___x_4878_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_nat_x3f(lean_object* v_e_4880_){
_start:
{
lean_object* v___x_4881_; uint8_t v___x_4882_; 
v___x_4881_ = l_Lean_Expr_cleanupAnnotations(v_e_4880_);
v___x_4882_ = l_Lean_Expr_isApp(v___x_4881_);
if (v___x_4882_ == 0)
{
lean_object* v___x_4883_; 
lean_dec_ref(v___x_4881_);
v___x_4883_ = lean_box(0);
return v___x_4883_;
}
else
{
lean_object* v___x_4884_; uint8_t v___x_4885_; 
v___x_4884_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4881_);
v___x_4885_ = l_Lean_Expr_isApp(v___x_4884_);
if (v___x_4885_ == 0)
{
lean_object* v___x_4886_; 
lean_dec_ref(v___x_4884_);
v___x_4886_ = lean_box(0);
return v___x_4886_;
}
else
{
lean_object* v_arg_4887_; lean_object* v___x_4888_; uint8_t v___x_4889_; 
v_arg_4887_ = lean_ctor_get(v___x_4884_, 1);
lean_inc_ref(v_arg_4887_);
v___x_4888_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4884_);
v___x_4889_ = l_Lean_Expr_isApp(v___x_4888_);
if (v___x_4889_ == 0)
{
lean_object* v___x_4890_; 
lean_dec_ref(v___x_4888_);
lean_dec_ref(v_arg_4887_);
v___x_4890_ = lean_box(0);
return v___x_4890_;
}
else
{
lean_object* v___x_4891_; lean_object* v___x_4892_; uint8_t v___x_4893_; 
v___x_4891_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4888_);
v___x_4892_ = ((lean_object*)(l_Lean_mkNatLitCore___closed__2));
v___x_4893_ = l_Lean_Expr_isConstOf(v___x_4891_, v___x_4892_);
lean_dec_ref(v___x_4891_);
if (v___x_4893_ == 0)
{
lean_object* v___x_4894_; 
lean_dec_ref(v_arg_4887_);
v___x_4894_ = lean_box(0);
return v___x_4894_;
}
else
{
if (lean_obj_tag(v_arg_4887_) == 9)
{
lean_object* v_a_4895_; 
v_a_4895_ = lean_ctor_get(v_arg_4887_, 0);
lean_inc_ref(v_a_4895_);
lean_dec_ref_known(v_arg_4887_, 1);
if (lean_obj_tag(v_a_4895_) == 0)
{
lean_object* v_val_4896_; lean_object* v___x_4898_; uint8_t v_isShared_4899_; uint8_t v_isSharedCheck_4903_; 
v_val_4896_ = lean_ctor_get(v_a_4895_, 0);
v_isSharedCheck_4903_ = !lean_is_exclusive(v_a_4895_);
if (v_isSharedCheck_4903_ == 0)
{
v___x_4898_ = v_a_4895_;
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
else
{
lean_inc(v_val_4896_);
lean_dec(v_a_4895_);
v___x_4898_ = lean_box(0);
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
v_resetjp_4897_:
{
lean_object* v___x_4901_; 
if (v_isShared_4899_ == 0)
{
lean_ctor_set_tag(v___x_4898_, 1);
v___x_4901_ = v___x_4898_;
goto v_reusejp_4900_;
}
else
{
lean_object* v_reuseFailAlloc_4902_; 
v_reuseFailAlloc_4902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4902_, 0, v_val_4896_);
v___x_4901_ = v_reuseFailAlloc_4902_;
goto v_reusejp_4900_;
}
v_reusejp_4900_:
{
return v___x_4901_;
}
}
}
else
{
lean_object* v___x_4904_; 
lean_dec_ref(v_a_4895_);
v___x_4904_ = lean_box(0);
return v___x_4904_;
}
}
else
{
lean_object* v___x_4905_; 
lean_dec_ref(v_arg_4887_);
v___x_4905_ = lean_box(0);
return v___x_4905_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_int_x3f(lean_object* v_e_4911_){
_start:
{
lean_object* v___x_4924_; uint8_t v___x_4925_; 
lean_inc_ref(v_e_4911_);
v___x_4924_ = l_Lean_Expr_cleanupAnnotations(v_e_4911_);
v___x_4925_ = l_Lean_Expr_isApp(v___x_4924_);
if (v___x_4925_ == 0)
{
lean_dec_ref(v___x_4924_);
goto v___jp_4912_;
}
else
{
lean_object* v_arg_4926_; lean_object* v___x_4927_; uint8_t v___x_4928_; 
v_arg_4926_ = lean_ctor_get(v___x_4924_, 1);
lean_inc_ref(v_arg_4926_);
v___x_4927_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4924_);
v___x_4928_ = l_Lean_Expr_isApp(v___x_4927_);
if (v___x_4928_ == 0)
{
lean_dec_ref(v___x_4927_);
lean_dec_ref(v_arg_4926_);
goto v___jp_4912_;
}
else
{
lean_object* v___x_4929_; uint8_t v___x_4930_; 
v___x_4929_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4927_);
v___x_4930_ = l_Lean_Expr_isApp(v___x_4929_);
if (v___x_4930_ == 0)
{
lean_dec_ref(v___x_4929_);
lean_dec_ref(v_arg_4926_);
goto v___jp_4912_;
}
else
{
lean_object* v___x_4931_; lean_object* v___x_4932_; uint8_t v___x_4933_; 
v___x_4931_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4929_);
v___x_4932_ = ((lean_object*)(l_Lean_Expr_int_x3f___closed__2));
v___x_4933_ = l_Lean_Expr_isConstOf(v___x_4931_, v___x_4932_);
lean_dec_ref(v___x_4931_);
if (v___x_4933_ == 0)
{
lean_dec_ref(v_arg_4926_);
goto v___jp_4912_;
}
else
{
lean_object* v___x_4934_; 
lean_dec_ref(v_e_4911_);
v___x_4934_ = l_Lean_Expr_nat_x3f(v_arg_4926_);
if (lean_obj_tag(v___x_4934_) == 0)
{
lean_object* v___x_4935_; 
v___x_4935_ = lean_box(0);
return v___x_4935_;
}
else
{
lean_object* v_val_4936_; lean_object* v___x_4938_; uint8_t v_isShared_4939_; uint8_t v_isSharedCheck_4948_; 
v_val_4936_ = lean_ctor_get(v___x_4934_, 0);
v_isSharedCheck_4948_ = !lean_is_exclusive(v___x_4934_);
if (v_isSharedCheck_4948_ == 0)
{
v___x_4938_ = v___x_4934_;
v_isShared_4939_ = v_isSharedCheck_4948_;
goto v_resetjp_4937_;
}
else
{
lean_inc(v_val_4936_);
lean_dec(v___x_4934_);
v___x_4938_ = lean_box(0);
v_isShared_4939_ = v_isSharedCheck_4948_;
goto v_resetjp_4937_;
}
v_resetjp_4937_:
{
lean_object* v___x_4940_; uint8_t v___x_4941_; 
v___x_4940_ = lean_unsigned_to_nat(0u);
v___x_4941_ = lean_nat_dec_eq(v_val_4936_, v___x_4940_);
if (v___x_4941_ == 0)
{
lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4945_; 
v___x_4942_ = lean_nat_to_int(v_val_4936_);
v___x_4943_ = lean_int_neg(v___x_4942_);
lean_dec(v___x_4942_);
if (v_isShared_4939_ == 0)
{
lean_ctor_set(v___x_4938_, 0, v___x_4943_);
v___x_4945_ = v___x_4938_;
goto v_reusejp_4944_;
}
else
{
lean_object* v_reuseFailAlloc_4946_; 
v_reuseFailAlloc_4946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4946_, 0, v___x_4943_);
v___x_4945_ = v_reuseFailAlloc_4946_;
goto v_reusejp_4944_;
}
v_reusejp_4944_:
{
return v___x_4945_;
}
}
else
{
lean_object* v___x_4947_; 
lean_del_object(v___x_4938_);
lean_dec(v_val_4936_);
v___x_4947_ = lean_box(0);
return v___x_4947_;
}
}
}
}
}
}
}
v___jp_4912_:
{
lean_object* v___x_4913_; 
v___x_4913_ = l_Lean_Expr_nat_x3f(v_e_4911_);
if (lean_obj_tag(v___x_4913_) == 0)
{
lean_object* v___x_4914_; 
v___x_4914_ = lean_box(0);
return v___x_4914_;
}
else
{
lean_object* v_val_4915_; lean_object* v___x_4917_; uint8_t v_isShared_4918_; uint8_t v_isSharedCheck_4923_; 
v_val_4915_ = lean_ctor_get(v___x_4913_, 0);
v_isSharedCheck_4923_ = !lean_is_exclusive(v___x_4913_);
if (v_isSharedCheck_4923_ == 0)
{
v___x_4917_ = v___x_4913_;
v_isShared_4918_ = v_isSharedCheck_4923_;
goto v_resetjp_4916_;
}
else
{
lean_inc(v_val_4915_);
lean_dec(v___x_4913_);
v___x_4917_ = lean_box(0);
v_isShared_4918_ = v_isSharedCheck_4923_;
goto v_resetjp_4916_;
}
v_resetjp_4916_:
{
lean_object* v___x_4919_; lean_object* v___x_4921_; 
v___x_4919_ = lean_nat_to_int(v_val_4915_);
if (v_isShared_4918_ == 0)
{
lean_ctor_set(v___x_4917_, 0, v___x_4919_);
v___x_4921_ = v___x_4917_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4922_; 
v_reuseFailAlloc_4922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4922_, 0, v___x_4919_);
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
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit(lean_object* v_p_4949_, lean_object* v_e_4950_){
_start:
{
uint8_t v___x_4951_; lean_object* v_d_4953_; lean_object* v_b_4954_; 
v___x_4951_ = l_Lean_Expr_hasFVar(v_e_4950_);
if (v___x_4951_ == 0)
{
lean_dec_ref(v_e_4950_);
lean_dec_ref(v_p_4949_);
return v___x_4951_;
}
else
{
switch(lean_obj_tag(v_e_4950_))
{
case 7:
{
lean_object* v_binderType_4957_; lean_object* v_body_4958_; 
v_binderType_4957_ = lean_ctor_get(v_e_4950_, 1);
lean_inc_ref(v_binderType_4957_);
v_body_4958_ = lean_ctor_get(v_e_4950_, 2);
lean_inc_ref(v_body_4958_);
lean_dec_ref_known(v_e_4950_, 3);
v_d_4953_ = v_binderType_4957_;
v_b_4954_ = v_body_4958_;
goto v___jp_4952_;
}
case 6:
{
lean_object* v_binderType_4959_; lean_object* v_body_4960_; 
v_binderType_4959_ = lean_ctor_get(v_e_4950_, 1);
lean_inc_ref(v_binderType_4959_);
v_body_4960_ = lean_ctor_get(v_e_4950_, 2);
lean_inc_ref(v_body_4960_);
lean_dec_ref_known(v_e_4950_, 3);
v_d_4953_ = v_binderType_4959_;
v_b_4954_ = v_body_4960_;
goto v___jp_4952_;
}
case 10:
{
lean_object* v_expr_4961_; 
v_expr_4961_ = lean_ctor_get(v_e_4950_, 1);
lean_inc_ref(v_expr_4961_);
lean_dec_ref_known(v_e_4950_, 2);
v_e_4950_ = v_expr_4961_;
goto _start;
}
case 8:
{
lean_object* v_type_4963_; lean_object* v_value_4964_; lean_object* v_body_4965_; uint8_t v___x_4966_; 
v_type_4963_ = lean_ctor_get(v_e_4950_, 1);
lean_inc_ref(v_type_4963_);
v_value_4964_ = lean_ctor_get(v_e_4950_, 2);
lean_inc_ref(v_value_4964_);
v_body_4965_ = lean_ctor_get(v_e_4950_, 3);
lean_inc_ref(v_body_4965_);
lean_dec_ref_known(v_e_4950_, 4);
lean_inc_ref(v_p_4949_);
v___x_4966_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit(v_p_4949_, v_type_4963_);
if (v___x_4966_ == 0)
{
uint8_t v___x_4967_; 
lean_inc_ref(v_p_4949_);
v___x_4967_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit(v_p_4949_, v_value_4964_);
if (v___x_4967_ == 0)
{
v_e_4950_ = v_body_4965_;
goto _start;
}
else
{
lean_dec_ref(v_body_4965_);
lean_dec_ref(v_p_4949_);
return v___x_4951_;
}
}
else
{
lean_dec_ref(v_body_4965_);
lean_dec_ref(v_value_4964_);
lean_dec_ref(v_p_4949_);
return v___x_4951_;
}
}
case 5:
{
lean_object* v_fn_4969_; lean_object* v_arg_4970_; uint8_t v___x_4971_; 
v_fn_4969_ = lean_ctor_get(v_e_4950_, 0);
lean_inc_ref(v_fn_4969_);
v_arg_4970_ = lean_ctor_get(v_e_4950_, 1);
lean_inc_ref(v_arg_4970_);
lean_dec_ref_known(v_e_4950_, 2);
lean_inc_ref(v_p_4949_);
v___x_4971_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit(v_p_4949_, v_fn_4969_);
if (v___x_4971_ == 0)
{
v_e_4950_ = v_arg_4970_;
goto _start;
}
else
{
lean_dec_ref(v_arg_4970_);
lean_dec_ref(v_p_4949_);
return v___x_4951_;
}
}
case 11:
{
lean_object* v_struct_4973_; 
v_struct_4973_ = lean_ctor_get(v_e_4950_, 2);
lean_inc_ref(v_struct_4973_);
lean_dec_ref_known(v_e_4950_, 3);
v_e_4950_ = v_struct_4973_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_4975_; lean_object* v___x_4976_; uint8_t v___x_4977_; 
v_fvarId_4975_ = lean_ctor_get(v_e_4950_, 0);
lean_inc(v_fvarId_4975_);
lean_dec_ref_known(v_e_4950_, 1);
v___x_4976_ = lean_apply_1(v_p_4949_, v_fvarId_4975_);
v___x_4977_ = lean_unbox(v___x_4976_);
return v___x_4977_;
}
default: 
{
uint8_t v___x_4978_; 
lean_dec_ref(v_e_4950_);
lean_dec_ref(v_p_4949_);
v___x_4978_ = 0;
return v___x_4978_;
}
}
}
v___jp_4952_:
{
uint8_t v___x_4955_; 
lean_inc_ref(v_p_4949_);
v___x_4955_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit(v_p_4949_, v_d_4953_);
if (v___x_4955_ == 0)
{
v_e_4950_ = v_b_4954_;
goto _start;
}
else
{
lean_dec_ref(v_b_4954_);
lean_dec_ref(v_p_4949_);
return v___x_4951_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___boxed(lean_object* v_p_4979_, lean_object* v_e_4980_){
_start:
{
uint8_t v_res_4981_; lean_object* v_r_4982_; 
v_res_4981_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit(v_p_4979_, v_e_4980_);
v_r_4982_ = lean_box(v_res_4981_);
return v_r_4982_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasAnyFVar(lean_object* v_e_4983_, lean_object* v_p_4984_){
_start:
{
uint8_t v___x_4985_; 
v___x_4985_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit(v_p_4984_, v_e_4983_);
return v___x_4985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasAnyFVar___boxed(lean_object* v_e_4986_, lean_object* v_p_4987_){
_start:
{
uint8_t v_res_4988_; lean_object* v_r_4989_; 
v_res_4988_ = l_Lean_Expr_hasAnyFVar(v_e_4986_, v_p_4987_);
v_r_4989_ = lean_box(v_res_4988_);
return v_r_4989_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Expr_containsFVar_spec__0(lean_object* v_fvarId_4990_, lean_object* v_e_4991_){
_start:
{
uint8_t v___x_4992_; lean_object* v_d_4994_; lean_object* v_b_4995_; 
v___x_4992_ = l_Lean_Expr_hasFVar(v_e_4991_);
if (v___x_4992_ == 0)
{
return v___x_4992_;
}
else
{
switch(lean_obj_tag(v_e_4991_))
{
case 7:
{
lean_object* v_binderType_4998_; lean_object* v_body_4999_; 
v_binderType_4998_ = lean_ctor_get(v_e_4991_, 1);
v_body_4999_ = lean_ctor_get(v_e_4991_, 2);
v_d_4994_ = v_binderType_4998_;
v_b_4995_ = v_body_4999_;
goto v___jp_4993_;
}
case 6:
{
lean_object* v_binderType_5000_; lean_object* v_body_5001_; 
v_binderType_5000_ = lean_ctor_get(v_e_4991_, 1);
v_body_5001_ = lean_ctor_get(v_e_4991_, 2);
v_d_4994_ = v_binderType_5000_;
v_b_4995_ = v_body_5001_;
goto v___jp_4993_;
}
case 10:
{
lean_object* v_expr_5002_; 
v_expr_5002_ = lean_ctor_get(v_e_4991_, 1);
v_e_4991_ = v_expr_5002_;
goto _start;
}
case 8:
{
lean_object* v_type_5004_; lean_object* v_value_5005_; lean_object* v_body_5006_; uint8_t v___x_5007_; 
v_type_5004_ = lean_ctor_get(v_e_4991_, 1);
v_value_5005_ = lean_ctor_get(v_e_4991_, 2);
v_body_5006_ = lean_ctor_get(v_e_4991_, 3);
v___x_5007_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Expr_containsFVar_spec__0(v_fvarId_4990_, v_type_5004_);
if (v___x_5007_ == 0)
{
uint8_t v___x_5008_; 
v___x_5008_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Expr_containsFVar_spec__0(v_fvarId_4990_, v_value_5005_);
if (v___x_5008_ == 0)
{
v_e_4991_ = v_body_5006_;
goto _start;
}
else
{
return v___x_4992_;
}
}
else
{
return v___x_4992_;
}
}
case 5:
{
lean_object* v_fn_5010_; lean_object* v_arg_5011_; uint8_t v___x_5012_; 
v_fn_5010_ = lean_ctor_get(v_e_4991_, 0);
v_arg_5011_ = lean_ctor_get(v_e_4991_, 1);
v___x_5012_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Expr_containsFVar_spec__0(v_fvarId_4990_, v_fn_5010_);
if (v___x_5012_ == 0)
{
v_e_4991_ = v_arg_5011_;
goto _start;
}
else
{
return v___x_4992_;
}
}
case 11:
{
lean_object* v_struct_5014_; 
v_struct_5014_ = lean_ctor_get(v_e_4991_, 2);
v_e_4991_ = v_struct_5014_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_5016_; uint8_t v___x_5017_; 
v_fvarId_5016_ = lean_ctor_get(v_e_4991_, 0);
v___x_5017_ = lean_name_eq(v_fvarId_5016_, v_fvarId_4990_);
return v___x_5017_;
}
default: 
{
uint8_t v___x_5018_; 
v___x_5018_ = 0;
return v___x_5018_;
}
}
}
v___jp_4993_:
{
uint8_t v___x_4996_; 
v___x_4996_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Expr_containsFVar_spec__0(v_fvarId_4990_, v_d_4994_);
if (v___x_4996_ == 0)
{
v_e_4991_ = v_b_4995_;
goto _start;
}
else
{
return v___x_4992_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Expr_containsFVar_spec__0___boxed(lean_object* v_fvarId_5019_, lean_object* v_e_5020_){
_start:
{
uint8_t v_res_5021_; lean_object* v_r_5022_; 
v_res_5021_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Expr_containsFVar_spec__0(v_fvarId_5019_, v_e_5020_);
lean_dec_ref(v_e_5020_);
lean_dec(v_fvarId_5019_);
v_r_5022_ = lean_box(v_res_5021_);
return v_r_5022_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_containsFVar(lean_object* v_e_5023_, lean_object* v_fvarId_5024_){
_start:
{
uint8_t v___x_5025_; 
v___x_5025_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Expr_containsFVar_spec__0(v_fvarId_5024_, v_e_5023_);
return v___x_5025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_containsFVar___boxed(lean_object* v_e_5026_, lean_object* v_fvarId_5027_){
_start:
{
uint8_t v_res_5028_; lean_object* v_r_5029_; 
v_res_5028_ = l_Lean_Expr_containsFVar(v_e_5026_, v_fvarId_5027_);
lean_dec(v_fvarId_5027_);
lean_dec_ref(v_e_5026_);
v_r_5029_ = lean_box(v_res_5028_);
return v_r_5029_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___closed__1(void){
_start:
{
lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; 
v___x_5031_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__2));
v___x_5032_ = lean_unsigned_to_nat(18u);
v___x_5033_ = lean_unsigned_to_nat(1847u);
v___x_5034_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___closed__0));
v___x_5035_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5036_ = l_mkPanicMessageWithDecl(v___x_5035_, v___x_5034_, v___x_5033_, v___x_5032_, v___x_5031_);
return v___x_5036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl(lean_object* v_e_5037_, lean_object* v_newFn_5038_, lean_object* v_newArg_5039_){
_start:
{
if (lean_obj_tag(v_e_5037_) == 5)
{
lean_object* v_fn_5040_; lean_object* v_arg_5041_; size_t v___x_5042_; size_t v___x_5043_; uint8_t v___x_5044_; 
v_fn_5040_ = lean_ctor_get(v_e_5037_, 0);
v_arg_5041_ = lean_ctor_get(v_e_5037_, 1);
v___x_5042_ = lean_ptr_addr(v_fn_5040_);
v___x_5043_ = lean_ptr_addr(v_newFn_5038_);
v___x_5044_ = lean_usize_dec_eq(v___x_5042_, v___x_5043_);
if (v___x_5044_ == 0)
{
lean_object* v___x_5045_; 
v___x_5045_ = l_Lean_Expr_app___override(v_newFn_5038_, v_newArg_5039_);
return v___x_5045_;
}
else
{
size_t v___x_5046_; size_t v___x_5047_; uint8_t v___x_5048_; 
v___x_5046_ = lean_ptr_addr(v_arg_5041_);
v___x_5047_ = lean_ptr_addr(v_newArg_5039_);
v___x_5048_ = lean_usize_dec_eq(v___x_5046_, v___x_5047_);
if (v___x_5048_ == 0)
{
lean_object* v___x_5049_; 
v___x_5049_ = l_Lean_Expr_app___override(v_newFn_5038_, v_newArg_5039_);
return v___x_5049_;
}
else
{
lean_dec_ref(v_newArg_5039_);
lean_dec_ref(v_newFn_5038_);
lean_inc_ref(v_e_5037_);
return v_e_5037_;
}
}
}
else
{
lean_object* v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; 
lean_dec_ref(v_newArg_5039_);
lean_dec_ref(v_newFn_5038_);
v___x_5050_ = l_Lean_instInhabitedExpr;
v___x_5051_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___closed__1, &l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___closed__1_once, _init_l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___closed__1);
v___x_5052_ = l_panic___redArg(v___x_5050_, v___x_5051_);
return v___x_5052_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___boxed(lean_object* v_e_5053_, lean_object* v_newFn_5054_, lean_object* v_newArg_5055_){
_start:
{
lean_object* v_res_5056_; 
v_res_5056_ = l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl(v_e_5053_, v_newFn_5054_, v_newArg_5055_);
lean_dec_ref(v_e_5053_);
return v_res_5056_;
}
}
static lean_object* _init_l_Lean_Expr_updateFVar_x21___closed__1(void){
_start:
{
lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; 
v___x_5058_ = ((lean_object*)(l_Lean_Expr_fvarId_x21___closed__1));
v___x_5059_ = lean_unsigned_to_nat(20u);
v___x_5060_ = lean_unsigned_to_nat(1858u);
v___x_5061_ = ((lean_object*)(l_Lean_Expr_updateFVar_x21___closed__0));
v___x_5062_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5063_ = l_mkPanicMessageWithDecl(v___x_5062_, v___x_5061_, v___x_5060_, v___x_5059_, v___x_5058_);
return v___x_5063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateFVar_x21(lean_object* v_e_5064_, lean_object* v_fvarIdNew_5065_){
_start:
{
if (lean_obj_tag(v_e_5064_) == 1)
{
lean_object* v_fvarId_5066_; uint8_t v___x_5067_; 
v_fvarId_5066_ = lean_ctor_get(v_e_5064_, 0);
v___x_5067_ = lean_name_eq(v_fvarId_5066_, v_fvarIdNew_5065_);
if (v___x_5067_ == 0)
{
lean_object* v___x_5068_; 
v___x_5068_ = l_Lean_Expr_fvar___override(v_fvarIdNew_5065_);
return v___x_5068_;
}
else
{
lean_dec(v_fvarIdNew_5065_);
lean_inc_ref(v_e_5064_);
return v_e_5064_;
}
}
else
{
lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; 
lean_dec(v_fvarIdNew_5065_);
v___x_5069_ = l_Lean_instInhabitedExpr;
v___x_5070_ = lean_obj_once(&l_Lean_Expr_updateFVar_x21___closed__1, &l_Lean_Expr_updateFVar_x21___closed__1_once, _init_l_Lean_Expr_updateFVar_x21___closed__1);
v___x_5071_ = l_panic___redArg(v___x_5069_, v___x_5070_);
return v___x_5071_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateFVar_x21___boxed(lean_object* v_e_5072_, lean_object* v_fvarIdNew_5073_){
_start:
{
lean_object* v_res_5074_; 
v_res_5074_ = l_Lean_Expr_updateFVar_x21(v_e_5072_, v_fvarIdNew_5073_);
lean_dec_ref(v_e_5072_);
return v_res_5074_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl___closed__1(void){
_start:
{
lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; 
v___x_5076_ = ((lean_object*)(l_Lean_Expr_constName_x21___closed__1));
v___x_5077_ = lean_unsigned_to_nat(18u);
v___x_5078_ = lean_unsigned_to_nat(1863u);
v___x_5079_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl___closed__0));
v___x_5080_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5081_ = l_mkPanicMessageWithDecl(v___x_5080_, v___x_5079_, v___x_5078_, v___x_5077_, v___x_5076_);
return v___x_5081_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl(lean_object* v_e_5082_, lean_object* v_newLevels_5083_){
_start:
{
if (lean_obj_tag(v_e_5082_) == 4)
{
lean_object* v_declName_5084_; lean_object* v_us_5085_; uint8_t v___x_5086_; 
v_declName_5084_ = lean_ctor_get(v_e_5082_, 0);
v_us_5085_ = lean_ctor_get(v_e_5082_, 1);
v___x_5086_ = l_ptrEqList___redArg(v_us_5085_, v_newLevels_5083_);
if (v___x_5086_ == 0)
{
lean_object* v___x_5087_; 
lean_inc(v_declName_5084_);
lean_dec_ref_known(v_e_5082_, 2);
v___x_5087_ = l_Lean_Expr_const___override(v_declName_5084_, v_newLevels_5083_);
return v___x_5087_;
}
else
{
lean_dec(v_newLevels_5083_);
return v_e_5082_;
}
}
else
{
lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; 
lean_dec(v_newLevels_5083_);
lean_dec_ref(v_e_5082_);
v___x_5088_ = l_Lean_instInhabitedExpr;
v___x_5089_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl___closed__1, &l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl___closed__1_once, _init_l___private_Lean_Expr_0__Lean_Expr_updateConst_x21Impl___closed__1);
v___x_5090_ = l_panic___redArg(v___x_5088_, v___x_5089_);
return v___x_5090_;
}
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__2(void){
_start:
{
lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; 
v___x_5093_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__1));
v___x_5094_ = lean_unsigned_to_nat(14u);
v___x_5095_ = lean_unsigned_to_nat(1874u);
v___x_5096_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__0));
v___x_5097_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5098_ = l_mkPanicMessageWithDecl(v___x_5097_, v___x_5096_, v___x_5095_, v___x_5094_, v___x_5093_);
return v___x_5098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl(lean_object* v_e_5099_, lean_object* v_u_x27_5100_){
_start:
{
if (lean_obj_tag(v_e_5099_) == 3)
{
lean_object* v_u_5101_; size_t v___x_5102_; size_t v___x_5103_; uint8_t v___x_5104_; 
v_u_5101_ = lean_ctor_get(v_e_5099_, 0);
v___x_5102_ = lean_ptr_addr(v_u_5101_);
v___x_5103_ = lean_ptr_addr(v_u_x27_5100_);
v___x_5104_ = lean_usize_dec_eq(v___x_5102_, v___x_5103_);
if (v___x_5104_ == 0)
{
lean_object* v___x_5105_; 
v___x_5105_ = l_Lean_Expr_sort___override(v_u_x27_5100_);
return v___x_5105_;
}
else
{
lean_dec(v_u_x27_5100_);
lean_inc_ref(v_e_5099_);
return v_e_5099_;
}
}
else
{
lean_object* v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; 
lean_dec(v_u_x27_5100_);
v___x_5106_ = l_Lean_instInhabitedExpr;
v___x_5107_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__2, &l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__2_once, _init_l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___closed__2);
v___x_5108_ = l_panic___redArg(v___x_5106_, v___x_5107_);
return v___x_5108_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl___boxed(lean_object* v_e_5109_, lean_object* v_u_x27_5110_){
_start:
{
lean_object* v_res_5111_; 
v_res_5111_ = l___private_Lean_Expr_0__Lean_Expr_updateSort_x21Impl(v_e_5109_, v_u_x27_5110_);
lean_dec_ref(v_e_5109_);
return v_res_5111_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__2(void){
_start:
{
lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; 
v___x_5114_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__1));
v___x_5115_ = lean_unsigned_to_nat(17u);
v___x_5116_ = lean_unsigned_to_nat(1885u);
v___x_5117_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__0));
v___x_5118_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5119_ = l_mkPanicMessageWithDecl(v___x_5118_, v___x_5117_, v___x_5116_, v___x_5115_, v___x_5114_);
return v___x_5119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl(lean_object* v_e_5120_, lean_object* v_newExpr_5121_){
_start:
{
if (lean_obj_tag(v_e_5120_) == 10)
{
lean_object* v_data_5122_; lean_object* v_expr_5123_; size_t v___x_5124_; size_t v___x_5125_; uint8_t v___x_5126_; 
v_data_5122_ = lean_ctor_get(v_e_5120_, 0);
v_expr_5123_ = lean_ctor_get(v_e_5120_, 1);
v___x_5124_ = lean_ptr_addr(v_expr_5123_);
v___x_5125_ = lean_ptr_addr(v_newExpr_5121_);
v___x_5126_ = lean_usize_dec_eq(v___x_5124_, v___x_5125_);
if (v___x_5126_ == 0)
{
lean_object* v___x_5127_; 
lean_inc(v_data_5122_);
lean_dec_ref_known(v_e_5120_, 2);
v___x_5127_ = l_Lean_Expr_mdata___override(v_data_5122_, v_newExpr_5121_);
return v___x_5127_;
}
else
{
lean_dec_ref(v_newExpr_5121_);
return v_e_5120_;
}
}
else
{
lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; 
lean_dec_ref(v_newExpr_5121_);
lean_dec_ref(v_e_5120_);
v___x_5128_ = l_Lean_instInhabitedExpr;
v___x_5129_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__2, &l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__2_once, _init_l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl___closed__2);
v___x_5130_ = l_panic___redArg(v___x_5128_, v___x_5129_);
return v___x_5130_;
}
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__2(void){
_start:
{
lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; 
v___x_5133_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__1));
v___x_5134_ = lean_unsigned_to_nat(18u);
v___x_5135_ = lean_unsigned_to_nat(1896u);
v___x_5136_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__0));
v___x_5137_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5138_ = l_mkPanicMessageWithDecl(v___x_5137_, v___x_5136_, v___x_5135_, v___x_5134_, v___x_5133_);
return v___x_5138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl(lean_object* v_e_5139_, lean_object* v_newExpr_5140_){
_start:
{
if (lean_obj_tag(v_e_5139_) == 11)
{
lean_object* v_typeName_5141_; lean_object* v_idx_5142_; lean_object* v_struct_5143_; size_t v___x_5144_; size_t v___x_5145_; uint8_t v___x_5146_; 
v_typeName_5141_ = lean_ctor_get(v_e_5139_, 0);
v_idx_5142_ = lean_ctor_get(v_e_5139_, 1);
v_struct_5143_ = lean_ctor_get(v_e_5139_, 2);
v___x_5144_ = lean_ptr_addr(v_struct_5143_);
v___x_5145_ = lean_ptr_addr(v_newExpr_5140_);
v___x_5146_ = lean_usize_dec_eq(v___x_5144_, v___x_5145_);
if (v___x_5146_ == 0)
{
lean_object* v___x_5147_; 
lean_inc(v_idx_5142_);
lean_inc(v_typeName_5141_);
lean_dec_ref_known(v_e_5139_, 3);
v___x_5147_ = l_Lean_Expr_proj___override(v_typeName_5141_, v_idx_5142_, v_newExpr_5140_);
return v___x_5147_;
}
else
{
lean_dec_ref(v_newExpr_5140_);
return v_e_5139_;
}
}
else
{
lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5150_; 
lean_dec_ref(v_newExpr_5140_);
lean_dec_ref(v_e_5139_);
v___x_5148_ = l_Lean_instInhabitedExpr;
v___x_5149_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__2, &l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__2_once, _init_l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl___closed__2);
v___x_5150_ = l_panic___redArg(v___x_5148_, v___x_5149_);
return v___x_5150_;
}
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__2(void){
_start:
{
lean_object* v___x_5153_; lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; 
v___x_5153_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__1));
v___x_5154_ = lean_unsigned_to_nat(23u);
v___x_5155_ = lean_unsigned_to_nat(1911u);
v___x_5156_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__0));
v___x_5157_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5158_ = l_mkPanicMessageWithDecl(v___x_5157_, v___x_5156_, v___x_5155_, v___x_5154_, v___x_5153_);
return v___x_5158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl(lean_object* v_e_5159_, uint8_t v_newBinfo_5160_, lean_object* v_newDomain_5161_, lean_object* v_newBody_5162_){
_start:
{
if (lean_obj_tag(v_e_5159_) == 7)
{
lean_object* v_binderName_5163_; lean_object* v_binderType_5164_; lean_object* v_body_5165_; uint8_t v_binderInfo_5166_; size_t v___x_5167_; size_t v___x_5168_; uint8_t v___x_5169_; 
v_binderName_5163_ = lean_ctor_get(v_e_5159_, 0);
v_binderType_5164_ = lean_ctor_get(v_e_5159_, 1);
v_body_5165_ = lean_ctor_get(v_e_5159_, 2);
v_binderInfo_5166_ = lean_ctor_get_uint8(v_e_5159_, sizeof(void*)*3 + 8);
v___x_5167_ = lean_ptr_addr(v_binderType_5164_);
v___x_5168_ = lean_ptr_addr(v_newDomain_5161_);
v___x_5169_ = lean_usize_dec_eq(v___x_5167_, v___x_5168_);
if (v___x_5169_ == 0)
{
lean_object* v___x_5170_; 
lean_inc(v_binderName_5163_);
lean_dec_ref_known(v_e_5159_, 3);
v___x_5170_ = l_Lean_Expr_forallE___override(v_binderName_5163_, v_newDomain_5161_, v_newBody_5162_, v_newBinfo_5160_);
return v___x_5170_;
}
else
{
size_t v___x_5171_; size_t v___x_5172_; uint8_t v___x_5173_; 
v___x_5171_ = lean_ptr_addr(v_body_5165_);
v___x_5172_ = lean_ptr_addr(v_newBody_5162_);
v___x_5173_ = lean_usize_dec_eq(v___x_5171_, v___x_5172_);
if (v___x_5173_ == 0)
{
lean_object* v___x_5174_; 
lean_inc(v_binderName_5163_);
lean_dec_ref_known(v_e_5159_, 3);
v___x_5174_ = l_Lean_Expr_forallE___override(v_binderName_5163_, v_newDomain_5161_, v_newBody_5162_, v_newBinfo_5160_);
return v___x_5174_;
}
else
{
uint8_t v___x_5175_; 
v___x_5175_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_5166_, v_newBinfo_5160_);
if (v___x_5175_ == 0)
{
lean_object* v___x_5176_; 
lean_inc(v_binderName_5163_);
lean_dec_ref_known(v_e_5159_, 3);
v___x_5176_ = l_Lean_Expr_forallE___override(v_binderName_5163_, v_newDomain_5161_, v_newBody_5162_, v_newBinfo_5160_);
return v___x_5176_;
}
else
{
lean_dec_ref(v_newBody_5162_);
lean_dec_ref(v_newDomain_5161_);
return v_e_5159_;
}
}
}
}
else
{
lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; 
lean_dec_ref(v_newBody_5162_);
lean_dec_ref(v_newDomain_5161_);
lean_dec_ref(v_e_5159_);
v___x_5177_ = l_Lean_instInhabitedExpr;
v___x_5178_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__2, &l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__2_once, _init_l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__2);
v___x_5179_ = l_panic___redArg(v___x_5177_, v___x_5178_);
return v___x_5179_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___boxed(lean_object* v_e_5180_, lean_object* v_newBinfo_5181_, lean_object* v_newDomain_5182_, lean_object* v_newBody_5183_){
_start:
{
uint8_t v_newBinfo_boxed_5184_; lean_object* v_res_5185_; 
v_newBinfo_boxed_5184_ = lean_unbox(v_newBinfo_5181_);
v_res_5185_ = l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl(v_e_5180_, v_newBinfo_boxed_5184_, v_newDomain_5182_, v_newBody_5183_);
return v_res_5185_;
}
}
static lean_object* _init_l_Lean_Expr_updateForallE_x21___closed__1(void){
_start:
{
lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; 
v___x_5187_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateForall_x21Impl___closed__1));
v___x_5188_ = lean_unsigned_to_nat(24u);
v___x_5189_ = lean_unsigned_to_nat(1922u);
v___x_5190_ = ((lean_object*)(l_Lean_Expr_updateForallE_x21___closed__0));
v___x_5191_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5192_ = l_mkPanicMessageWithDecl(v___x_5191_, v___x_5190_, v___x_5189_, v___x_5188_, v___x_5187_);
return v___x_5192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallE_x21(lean_object* v_e_5193_, lean_object* v_newDomain_5194_, lean_object* v_newBody_5195_){
_start:
{
if (lean_obj_tag(v_e_5193_) == 7)
{
lean_object* v_binderName_5196_; lean_object* v_binderType_5197_; lean_object* v_body_5198_; uint8_t v_binderInfo_5199_; size_t v___x_5200_; size_t v___x_5201_; uint8_t v___x_5202_; 
v_binderName_5196_ = lean_ctor_get(v_e_5193_, 0);
v_binderType_5197_ = lean_ctor_get(v_e_5193_, 1);
v_body_5198_ = lean_ctor_get(v_e_5193_, 2);
v_binderInfo_5199_ = lean_ctor_get_uint8(v_e_5193_, sizeof(void*)*3 + 8);
v___x_5200_ = lean_ptr_addr(v_binderType_5197_);
v___x_5201_ = lean_ptr_addr(v_newDomain_5194_);
v___x_5202_ = lean_usize_dec_eq(v___x_5200_, v___x_5201_);
if (v___x_5202_ == 0)
{
lean_object* v___x_5203_; 
lean_inc(v_binderName_5196_);
lean_dec_ref_known(v_e_5193_, 3);
v___x_5203_ = l_Lean_Expr_forallE___override(v_binderName_5196_, v_newDomain_5194_, v_newBody_5195_, v_binderInfo_5199_);
return v___x_5203_;
}
else
{
size_t v___x_5204_; size_t v___x_5205_; uint8_t v___x_5206_; 
v___x_5204_ = lean_ptr_addr(v_body_5198_);
v___x_5205_ = lean_ptr_addr(v_newBody_5195_);
v___x_5206_ = lean_usize_dec_eq(v___x_5204_, v___x_5205_);
if (v___x_5206_ == 0)
{
lean_object* v___x_5207_; 
lean_inc(v_binderName_5196_);
lean_dec_ref_known(v_e_5193_, 3);
v___x_5207_ = l_Lean_Expr_forallE___override(v_binderName_5196_, v_newDomain_5194_, v_newBody_5195_, v_binderInfo_5199_);
return v___x_5207_;
}
else
{
uint8_t v___x_5208_; 
v___x_5208_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_5199_, v_binderInfo_5199_);
if (v___x_5208_ == 0)
{
lean_object* v___x_5209_; 
lean_inc(v_binderName_5196_);
lean_dec_ref_known(v_e_5193_, 3);
v___x_5209_ = l_Lean_Expr_forallE___override(v_binderName_5196_, v_newDomain_5194_, v_newBody_5195_, v_binderInfo_5199_);
return v___x_5209_;
}
else
{
lean_dec_ref(v_newBody_5195_);
lean_dec_ref(v_newDomain_5194_);
return v_e_5193_;
}
}
}
}
else
{
lean_object* v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; 
lean_dec_ref(v_newBody_5195_);
lean_dec_ref(v_newDomain_5194_);
lean_dec_ref(v_e_5193_);
v___x_5210_ = l_Lean_instInhabitedExpr;
v___x_5211_ = lean_obj_once(&l_Lean_Expr_updateForallE_x21___closed__1, &l_Lean_Expr_updateForallE_x21___closed__1_once, _init_l_Lean_Expr_updateForallE_x21___closed__1);
v___x_5212_ = l_panic___redArg(v___x_5210_, v___x_5211_);
return v___x_5212_;
}
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__2(void){
_start:
{
lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; 
v___x_5215_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__1));
v___x_5216_ = lean_unsigned_to_nat(19u);
v___x_5217_ = lean_unsigned_to_nat(1931u);
v___x_5218_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__0));
v___x_5219_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5220_ = l_mkPanicMessageWithDecl(v___x_5219_, v___x_5218_, v___x_5217_, v___x_5216_, v___x_5215_);
return v___x_5220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl(lean_object* v_e_5221_, uint8_t v_newBinfo_5222_, lean_object* v_newDomain_5223_, lean_object* v_newBody_5224_){
_start:
{
if (lean_obj_tag(v_e_5221_) == 6)
{
lean_object* v_binderName_5225_; lean_object* v_binderType_5226_; lean_object* v_body_5227_; uint8_t v_binderInfo_5228_; size_t v___x_5229_; size_t v___x_5230_; uint8_t v___x_5231_; 
v_binderName_5225_ = lean_ctor_get(v_e_5221_, 0);
v_binderType_5226_ = lean_ctor_get(v_e_5221_, 1);
v_body_5227_ = lean_ctor_get(v_e_5221_, 2);
v_binderInfo_5228_ = lean_ctor_get_uint8(v_e_5221_, sizeof(void*)*3 + 8);
v___x_5229_ = lean_ptr_addr(v_binderType_5226_);
v___x_5230_ = lean_ptr_addr(v_newDomain_5223_);
v___x_5231_ = lean_usize_dec_eq(v___x_5229_, v___x_5230_);
if (v___x_5231_ == 0)
{
lean_object* v___x_5232_; 
lean_inc(v_binderName_5225_);
lean_dec_ref_known(v_e_5221_, 3);
v___x_5232_ = l_Lean_Expr_lam___override(v_binderName_5225_, v_newDomain_5223_, v_newBody_5224_, v_newBinfo_5222_);
return v___x_5232_;
}
else
{
size_t v___x_5233_; size_t v___x_5234_; uint8_t v___x_5235_; 
v___x_5233_ = lean_ptr_addr(v_body_5227_);
v___x_5234_ = lean_ptr_addr(v_newBody_5224_);
v___x_5235_ = lean_usize_dec_eq(v___x_5233_, v___x_5234_);
if (v___x_5235_ == 0)
{
lean_object* v___x_5236_; 
lean_inc(v_binderName_5225_);
lean_dec_ref_known(v_e_5221_, 3);
v___x_5236_ = l_Lean_Expr_lam___override(v_binderName_5225_, v_newDomain_5223_, v_newBody_5224_, v_newBinfo_5222_);
return v___x_5236_;
}
else
{
uint8_t v___x_5237_; 
v___x_5237_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_5228_, v_newBinfo_5222_);
if (v___x_5237_ == 0)
{
lean_object* v___x_5238_; 
lean_inc(v_binderName_5225_);
lean_dec_ref_known(v_e_5221_, 3);
v___x_5238_ = l_Lean_Expr_lam___override(v_binderName_5225_, v_newDomain_5223_, v_newBody_5224_, v_newBinfo_5222_);
return v___x_5238_;
}
else
{
lean_dec_ref(v_newBody_5224_);
lean_dec_ref(v_newDomain_5223_);
return v_e_5221_;
}
}
}
}
else
{
lean_object* v___x_5239_; lean_object* v___x_5240_; lean_object* v___x_5241_; 
lean_dec_ref(v_newBody_5224_);
lean_dec_ref(v_newDomain_5223_);
lean_dec_ref(v_e_5221_);
v___x_5239_ = l_Lean_instInhabitedExpr;
v___x_5240_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__2, &l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__2_once, _init_l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__2);
v___x_5241_ = l_panic___redArg(v___x_5239_, v___x_5240_);
return v___x_5241_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___boxed(lean_object* v_e_5242_, lean_object* v_newBinfo_5243_, lean_object* v_newDomain_5244_, lean_object* v_newBody_5245_){
_start:
{
uint8_t v_newBinfo_boxed_5246_; lean_object* v_res_5247_; 
v_newBinfo_boxed_5246_ = lean_unbox(v_newBinfo_5243_);
v_res_5247_ = l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl(v_e_5242_, v_newBinfo_boxed_5246_, v_newDomain_5244_, v_newBody_5245_);
return v_res_5247_;
}
}
static lean_object* _init_l_Lean_Expr_updateLambdaE_x21___closed__1(void){
_start:
{
lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; 
v___x_5249_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateLambda_x21Impl___closed__1));
v___x_5250_ = lean_unsigned_to_nat(20u);
v___x_5251_ = lean_unsigned_to_nat(1942u);
v___x_5252_ = ((lean_object*)(l_Lean_Expr_updateLambdaE_x21___closed__0));
v___x_5253_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5254_ = l_mkPanicMessageWithDecl(v___x_5253_, v___x_5252_, v___x_5251_, v___x_5250_, v___x_5249_);
return v___x_5254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateLambdaE_x21(lean_object* v_e_5255_, lean_object* v_newDomain_5256_, lean_object* v_newBody_5257_){
_start:
{
if (lean_obj_tag(v_e_5255_) == 6)
{
lean_object* v_binderName_5258_; lean_object* v_binderType_5259_; lean_object* v_body_5260_; uint8_t v_binderInfo_5261_; size_t v___x_5262_; size_t v___x_5263_; uint8_t v___x_5264_; 
v_binderName_5258_ = lean_ctor_get(v_e_5255_, 0);
v_binderType_5259_ = lean_ctor_get(v_e_5255_, 1);
v_body_5260_ = lean_ctor_get(v_e_5255_, 2);
v_binderInfo_5261_ = lean_ctor_get_uint8(v_e_5255_, sizeof(void*)*3 + 8);
v___x_5262_ = lean_ptr_addr(v_binderType_5259_);
v___x_5263_ = lean_ptr_addr(v_newDomain_5256_);
v___x_5264_ = lean_usize_dec_eq(v___x_5262_, v___x_5263_);
if (v___x_5264_ == 0)
{
lean_object* v___x_5265_; 
lean_inc(v_binderName_5258_);
lean_dec_ref_known(v_e_5255_, 3);
v___x_5265_ = l_Lean_Expr_lam___override(v_binderName_5258_, v_newDomain_5256_, v_newBody_5257_, v_binderInfo_5261_);
return v___x_5265_;
}
else
{
size_t v___x_5266_; size_t v___x_5267_; uint8_t v___x_5268_; 
v___x_5266_ = lean_ptr_addr(v_body_5260_);
v___x_5267_ = lean_ptr_addr(v_newBody_5257_);
v___x_5268_ = lean_usize_dec_eq(v___x_5266_, v___x_5267_);
if (v___x_5268_ == 0)
{
lean_object* v___x_5269_; 
lean_inc(v_binderName_5258_);
lean_dec_ref_known(v_e_5255_, 3);
v___x_5269_ = l_Lean_Expr_lam___override(v_binderName_5258_, v_newDomain_5256_, v_newBody_5257_, v_binderInfo_5261_);
return v___x_5269_;
}
else
{
uint8_t v___x_5270_; 
v___x_5270_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_5261_, v_binderInfo_5261_);
if (v___x_5270_ == 0)
{
lean_object* v___x_5271_; 
lean_inc(v_binderName_5258_);
lean_dec_ref_known(v_e_5255_, 3);
v___x_5271_ = l_Lean_Expr_lam___override(v_binderName_5258_, v_newDomain_5256_, v_newBody_5257_, v_binderInfo_5261_);
return v___x_5271_;
}
else
{
lean_dec_ref(v_newBody_5257_);
lean_dec_ref(v_newDomain_5256_);
return v_e_5255_;
}
}
}
}
else
{
lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; 
lean_dec_ref(v_newBody_5257_);
lean_dec_ref(v_newDomain_5256_);
lean_dec_ref(v_e_5255_);
v___x_5272_ = l_Lean_instInhabitedExpr;
v___x_5273_ = lean_obj_once(&l_Lean_Expr_updateLambdaE_x21___closed__1, &l_Lean_Expr_updateLambdaE_x21___closed__1_once, _init_l_Lean_Expr_updateLambdaE_x21___closed__1);
v___x_5274_ = l_panic___redArg(v___x_5272_, v___x_5273_);
return v___x_5274_;
}
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___closed__1(void){
_start:
{
lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; 
v___x_5276_ = ((lean_object*)(l_Lean_Expr_letName_x21___closed__1));
v___x_5277_ = lean_unsigned_to_nat(22u);
v___x_5278_ = lean_unsigned_to_nat(1951u);
v___x_5279_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___closed__0));
v___x_5280_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5281_ = l_mkPanicMessageWithDecl(v___x_5280_, v___x_5279_, v___x_5278_, v___x_5277_, v___x_5276_);
return v___x_5281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl(lean_object* v_e_5282_, lean_object* v_newType_5283_, lean_object* v_newVal_5284_, lean_object* v_newBody_5285_, uint8_t v_newNondep_5286_){
_start:
{
if (lean_obj_tag(v_e_5282_) == 8)
{
lean_object* v_declName_5287_; lean_object* v_type_5288_; lean_object* v_value_5289_; lean_object* v_body_5290_; uint8_t v_nondep_5291_; size_t v___x_5292_; size_t v___x_5293_; uint8_t v___x_5294_; 
v_declName_5287_ = lean_ctor_get(v_e_5282_, 0);
v_type_5288_ = lean_ctor_get(v_e_5282_, 1);
v_value_5289_ = lean_ctor_get(v_e_5282_, 2);
v_body_5290_ = lean_ctor_get(v_e_5282_, 3);
v_nondep_5291_ = lean_ctor_get_uint8(v_e_5282_, sizeof(void*)*4 + 8);
v___x_5292_ = lean_ptr_addr(v_type_5288_);
v___x_5293_ = lean_ptr_addr(v_newType_5283_);
v___x_5294_ = lean_usize_dec_eq(v___x_5292_, v___x_5293_);
if (v___x_5294_ == 0)
{
lean_object* v___x_5295_; 
lean_inc(v_declName_5287_);
lean_dec_ref_known(v_e_5282_, 4);
v___x_5295_ = l_Lean_Expr_letE___override(v_declName_5287_, v_newType_5283_, v_newVal_5284_, v_newBody_5285_, v_newNondep_5286_);
return v___x_5295_;
}
else
{
size_t v___x_5296_; size_t v___x_5297_; uint8_t v___x_5298_; 
v___x_5296_ = lean_ptr_addr(v_value_5289_);
v___x_5297_ = lean_ptr_addr(v_newVal_5284_);
v___x_5298_ = lean_usize_dec_eq(v___x_5296_, v___x_5297_);
if (v___x_5298_ == 0)
{
lean_object* v___x_5299_; 
lean_inc(v_declName_5287_);
lean_dec_ref_known(v_e_5282_, 4);
v___x_5299_ = l_Lean_Expr_letE___override(v_declName_5287_, v_newType_5283_, v_newVal_5284_, v_newBody_5285_, v_newNondep_5286_);
return v___x_5299_;
}
else
{
size_t v___x_5300_; size_t v___x_5301_; uint8_t v___x_5302_; 
v___x_5300_ = lean_ptr_addr(v_body_5290_);
v___x_5301_ = lean_ptr_addr(v_newBody_5285_);
v___x_5302_ = lean_usize_dec_eq(v___x_5300_, v___x_5301_);
if (v___x_5302_ == 0)
{
lean_object* v___x_5303_; 
lean_inc(v_declName_5287_);
lean_dec_ref_known(v_e_5282_, 4);
v___x_5303_ = l_Lean_Expr_letE___override(v_declName_5287_, v_newType_5283_, v_newVal_5284_, v_newBody_5285_, v_newNondep_5286_);
return v___x_5303_;
}
else
{
if (v_newNondep_5286_ == 0)
{
if (v_nondep_5291_ == 0)
{
lean_dec_ref(v_newBody_5285_);
lean_dec_ref(v_newVal_5284_);
lean_dec_ref(v_newType_5283_);
return v_e_5282_;
}
else
{
lean_object* v___x_5304_; 
lean_inc(v_declName_5287_);
lean_dec_ref_known(v_e_5282_, 4);
v___x_5304_ = l_Lean_Expr_letE___override(v_declName_5287_, v_newType_5283_, v_newVal_5284_, v_newBody_5285_, v_newNondep_5286_);
return v___x_5304_;
}
}
else
{
if (v_nondep_5291_ == 0)
{
lean_object* v___x_5305_; 
lean_inc(v_declName_5287_);
lean_dec_ref_known(v_e_5282_, 4);
v___x_5305_ = l_Lean_Expr_letE___override(v_declName_5287_, v_newType_5283_, v_newVal_5284_, v_newBody_5285_, v_newNondep_5286_);
return v___x_5305_;
}
else
{
lean_dec_ref(v_newBody_5285_);
lean_dec_ref(v_newVal_5284_);
lean_dec_ref(v_newType_5283_);
return v_e_5282_;
}
}
}
}
}
}
else
{
lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; 
lean_dec_ref(v_newBody_5285_);
lean_dec_ref(v_newVal_5284_);
lean_dec_ref(v_newType_5283_);
lean_dec_ref(v_e_5282_);
v___x_5306_ = l_Lean_instInhabitedExpr;
v___x_5307_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___closed__1, &l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___closed__1_once, _init_l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___closed__1);
v___x_5308_ = l_panic___redArg(v___x_5306_, v___x_5307_);
return v___x_5308_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl___boxed(lean_object* v_e_5309_, lean_object* v_newType_5310_, lean_object* v_newVal_5311_, lean_object* v_newBody_5312_, lean_object* v_newNondep_5313_){
_start:
{
uint8_t v_newNondep_boxed_5314_; lean_object* v_res_5315_; 
v_newNondep_boxed_5314_ = lean_unbox(v_newNondep_5313_);
v_res_5315_ = l___private_Lean_Expr_0__Lean_Expr_updateLet_x21Impl(v_e_5309_, v_newType_5310_, v_newVal_5311_, v_newBody_5312_, v_newNondep_boxed_5314_);
return v_res_5315_;
}
}
static lean_object* _init_l_Lean_Expr_updateLetE_x21___closed__1(void){
_start:
{
lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; 
v___x_5317_ = ((lean_object*)(l_Lean_Expr_letName_x21___closed__1));
v___x_5318_ = lean_unsigned_to_nat(27u);
v___x_5319_ = lean_unsigned_to_nat(1964u);
v___x_5320_ = ((lean_object*)(l_Lean_Expr_updateLetE_x21___closed__0));
v___x_5321_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_5322_ = l_mkPanicMessageWithDecl(v___x_5321_, v___x_5320_, v___x_5319_, v___x_5318_, v___x_5317_);
return v___x_5322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateLetE_x21(lean_object* v_e_5323_, lean_object* v_newType_5324_, lean_object* v_newVal_5325_, lean_object* v_newBody_5326_){
_start:
{
if (lean_obj_tag(v_e_5323_) == 8)
{
lean_object* v_declName_5327_; lean_object* v_type_5328_; lean_object* v_value_5329_; lean_object* v_body_5330_; uint8_t v_nondep_5331_; size_t v___x_5332_; size_t v___x_5333_; uint8_t v___x_5334_; 
v_declName_5327_ = lean_ctor_get(v_e_5323_, 0);
v_type_5328_ = lean_ctor_get(v_e_5323_, 1);
v_value_5329_ = lean_ctor_get(v_e_5323_, 2);
v_body_5330_ = lean_ctor_get(v_e_5323_, 3);
v_nondep_5331_ = lean_ctor_get_uint8(v_e_5323_, sizeof(void*)*4 + 8);
v___x_5332_ = lean_ptr_addr(v_type_5328_);
v___x_5333_ = lean_ptr_addr(v_newType_5324_);
v___x_5334_ = lean_usize_dec_eq(v___x_5332_, v___x_5333_);
if (v___x_5334_ == 0)
{
lean_object* v___x_5335_; 
lean_inc(v_declName_5327_);
lean_dec_ref_known(v_e_5323_, 4);
v___x_5335_ = l_Lean_Expr_letE___override(v_declName_5327_, v_newType_5324_, v_newVal_5325_, v_newBody_5326_, v_nondep_5331_);
return v___x_5335_;
}
else
{
size_t v___x_5336_; size_t v___x_5337_; uint8_t v___x_5338_; 
v___x_5336_ = lean_ptr_addr(v_value_5329_);
v___x_5337_ = lean_ptr_addr(v_newVal_5325_);
v___x_5338_ = lean_usize_dec_eq(v___x_5336_, v___x_5337_);
if (v___x_5338_ == 0)
{
lean_object* v___x_5339_; 
lean_inc(v_declName_5327_);
lean_dec_ref_known(v_e_5323_, 4);
v___x_5339_ = l_Lean_Expr_letE___override(v_declName_5327_, v_newType_5324_, v_newVal_5325_, v_newBody_5326_, v_nondep_5331_);
return v___x_5339_;
}
else
{
size_t v___x_5340_; size_t v___x_5341_; uint8_t v___x_5342_; 
v___x_5340_ = lean_ptr_addr(v_body_5330_);
v___x_5341_ = lean_ptr_addr(v_newBody_5326_);
v___x_5342_ = lean_usize_dec_eq(v___x_5340_, v___x_5341_);
if (v___x_5342_ == 0)
{
lean_object* v___x_5343_; 
lean_inc(v_declName_5327_);
lean_dec_ref_known(v_e_5323_, 4);
v___x_5343_ = l_Lean_Expr_letE___override(v_declName_5327_, v_newType_5324_, v_newVal_5325_, v_newBody_5326_, v_nondep_5331_);
return v___x_5343_;
}
else
{
lean_dec_ref(v_newBody_5326_);
lean_dec_ref(v_newVal_5325_);
lean_dec_ref(v_newType_5324_);
return v_e_5323_;
}
}
}
}
else
{
lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; 
lean_dec_ref(v_newBody_5326_);
lean_dec_ref(v_newVal_5325_);
lean_dec_ref(v_newType_5324_);
lean_dec_ref(v_e_5323_);
v___x_5344_ = l_Lean_instInhabitedExpr;
v___x_5345_ = lean_obj_once(&l_Lean_Expr_updateLetE_x21___closed__1, &l_Lean_Expr_updateLetE_x21___closed__1_once, _init_l_Lean_Expr_updateLetE_x21___closed__1);
v___x_5346_ = l_panic___redArg(v___x_5344_, v___x_5345_);
return v___x_5346_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateFn(lean_object* v_x_5347_, lean_object* v_x_5348_){
_start:
{
if (lean_obj_tag(v_x_5347_) == 5)
{
lean_object* v_fn_5349_; lean_object* v_arg_5350_; lean_object* v___x_5351_; size_t v___x_5352_; size_t v___x_5353_; uint8_t v___x_5354_; 
v_fn_5349_ = lean_ctor_get(v_x_5347_, 0);
v_arg_5350_ = lean_ctor_get(v_x_5347_, 1);
lean_inc_ref(v_fn_5349_);
v___x_5351_ = l_Lean_Expr_updateFn(v_fn_5349_, v_x_5348_);
v___x_5352_ = lean_ptr_addr(v_fn_5349_);
v___x_5353_ = lean_ptr_addr(v___x_5351_);
v___x_5354_ = lean_usize_dec_eq(v___x_5352_, v___x_5353_);
if (v___x_5354_ == 0)
{
lean_object* v___x_5355_; 
lean_inc_ref(v_arg_5350_);
lean_dec_ref_known(v_x_5347_, 2);
v___x_5355_ = l_Lean_Expr_app___override(v___x_5351_, v_arg_5350_);
return v___x_5355_;
}
else
{
size_t v___x_5356_; uint8_t v___x_5357_; 
v___x_5356_ = lean_ptr_addr(v_arg_5350_);
v___x_5357_ = lean_usize_dec_eq(v___x_5356_, v___x_5356_);
if (v___x_5357_ == 0)
{
lean_object* v___x_5358_; 
lean_inc_ref(v_arg_5350_);
lean_dec_ref_known(v_x_5347_, 2);
v___x_5358_ = l_Lean_Expr_app___override(v___x_5351_, v_arg_5350_);
return v___x_5358_;
}
else
{
lean_dec_ref(v___x_5351_);
return v_x_5347_;
}
}
}
else
{
lean_dec_ref(v_x_5347_);
lean_inc_ref(v_x_5348_);
return v_x_5348_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateFn___boxed(lean_object* v_x_5359_, lean_object* v_x_5360_){
_start:
{
lean_object* v_res_5361_; 
v_res_5361_ = l_Lean_Expr_updateFn(v_x_5359_, v_x_5360_);
lean_dec_ref(v_x_5360_);
return v_res_5361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_eta(lean_object* v_e_5362_){
_start:
{
if (lean_obj_tag(v_e_5362_) == 6)
{
lean_object* v_binderName_5363_; lean_object* v_binderType_5364_; lean_object* v_body_5365_; uint8_t v_binderInfo_5366_; lean_object* v_b_x27_5367_; 
v_binderName_5363_ = lean_ctor_get(v_e_5362_, 0);
v_binderType_5364_ = lean_ctor_get(v_e_5362_, 1);
v_body_5365_ = lean_ctor_get(v_e_5362_, 2);
v_binderInfo_5366_ = lean_ctor_get_uint8(v_e_5362_, sizeof(void*)*3 + 8);
lean_inc_ref(v_body_5365_);
v_b_x27_5367_ = l_Lean_Expr_eta(v_body_5365_);
if (lean_obj_tag(v_b_x27_5367_) == 5)
{
lean_object* v_arg_5378_; 
v_arg_5378_ = lean_ctor_get(v_b_x27_5367_, 1);
lean_inc_ref(v_arg_5378_);
if (lean_obj_tag(v_arg_5378_) == 0)
{
lean_object* v_fn_5379_; lean_object* v_deBruijnIndex_5380_; lean_object* v___x_5381_; uint8_t v___x_5382_; 
v_fn_5379_ = lean_ctor_get(v_b_x27_5367_, 0);
lean_inc_ref(v_fn_5379_);
v_deBruijnIndex_5380_ = lean_ctor_get(v_arg_5378_, 0);
lean_inc(v_deBruijnIndex_5380_);
lean_dec_ref_known(v_arg_5378_, 1);
v___x_5381_ = lean_unsigned_to_nat(0u);
v___x_5382_ = lean_nat_dec_eq(v_deBruijnIndex_5380_, v___x_5381_);
lean_dec(v_deBruijnIndex_5380_);
if (v___x_5382_ == 0)
{
lean_dec_ref(v_fn_5379_);
goto v___jp_5368_;
}
else
{
uint8_t v___x_5383_; 
v___x_5383_ = lean_expr_has_loose_bvar(v_fn_5379_, v___x_5381_);
if (v___x_5383_ == 0)
{
lean_object* v___x_5384_; lean_object* v___x_5385_; 
lean_dec_ref_known(v_b_x27_5367_, 2);
lean_dec_ref_known(v_e_5362_, 3);
v___x_5384_ = lean_unsigned_to_nat(1u);
v___x_5385_ = lean_expr_lower_loose_bvars(v_fn_5379_, v___x_5384_, v___x_5384_);
lean_dec_ref(v_fn_5379_);
return v___x_5385_;
}
else
{
size_t v___x_5386_; uint8_t v___x_5387_; 
lean_dec_ref(v_fn_5379_);
v___x_5386_ = lean_ptr_addr(v_binderType_5364_);
v___x_5387_ = lean_usize_dec_eq(v___x_5386_, v___x_5386_);
if (v___x_5387_ == 0)
{
lean_object* v___x_5388_; 
lean_inc_ref(v_binderType_5364_);
lean_inc(v_binderName_5363_);
lean_dec_ref_known(v_e_5362_, 3);
v___x_5388_ = l_Lean_Expr_lam___override(v_binderName_5363_, v_binderType_5364_, v_b_x27_5367_, v_binderInfo_5366_);
return v___x_5388_;
}
else
{
size_t v___x_5389_; size_t v___x_5390_; uint8_t v___x_5391_; 
v___x_5389_ = lean_ptr_addr(v_body_5365_);
v___x_5390_ = lean_ptr_addr(v_b_x27_5367_);
v___x_5391_ = lean_usize_dec_eq(v___x_5389_, v___x_5390_);
if (v___x_5391_ == 0)
{
lean_object* v___x_5392_; 
lean_inc_ref(v_binderType_5364_);
lean_inc(v_binderName_5363_);
lean_dec_ref_known(v_e_5362_, 3);
v___x_5392_ = l_Lean_Expr_lam___override(v_binderName_5363_, v_binderType_5364_, v_b_x27_5367_, v_binderInfo_5366_);
return v___x_5392_;
}
else
{
uint8_t v___x_5393_; 
v___x_5393_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_5366_, v_binderInfo_5366_);
if (v___x_5393_ == 0)
{
lean_object* v___x_5394_; 
lean_inc_ref(v_binderType_5364_);
lean_inc(v_binderName_5363_);
lean_dec_ref_known(v_e_5362_, 3);
v___x_5394_ = l_Lean_Expr_lam___override(v_binderName_5363_, v_binderType_5364_, v_b_x27_5367_, v_binderInfo_5366_);
return v___x_5394_;
}
else
{
lean_dec_ref_known(v_b_x27_5367_, 2);
return v_e_5362_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_5378_);
goto v___jp_5368_;
}
}
else
{
goto v___jp_5368_;
}
v___jp_5368_:
{
size_t v___x_5369_; uint8_t v___x_5370_; 
v___x_5369_ = lean_ptr_addr(v_binderType_5364_);
v___x_5370_ = lean_usize_dec_eq(v___x_5369_, v___x_5369_);
if (v___x_5370_ == 0)
{
lean_object* v___x_5371_; 
lean_inc_ref(v_binderType_5364_);
lean_inc(v_binderName_5363_);
lean_dec_ref_known(v_e_5362_, 3);
v___x_5371_ = l_Lean_Expr_lam___override(v_binderName_5363_, v_binderType_5364_, v_b_x27_5367_, v_binderInfo_5366_);
return v___x_5371_;
}
else
{
size_t v___x_5372_; size_t v___x_5373_; uint8_t v___x_5374_; 
v___x_5372_ = lean_ptr_addr(v_body_5365_);
v___x_5373_ = lean_ptr_addr(v_b_x27_5367_);
v___x_5374_ = lean_usize_dec_eq(v___x_5372_, v___x_5373_);
if (v___x_5374_ == 0)
{
lean_object* v___x_5375_; 
lean_inc_ref(v_binderType_5364_);
lean_inc(v_binderName_5363_);
lean_dec_ref_known(v_e_5362_, 3);
v___x_5375_ = l_Lean_Expr_lam___override(v_binderName_5363_, v_binderType_5364_, v_b_x27_5367_, v_binderInfo_5366_);
return v___x_5375_;
}
else
{
uint8_t v___x_5376_; 
v___x_5376_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_5366_, v_binderInfo_5366_);
if (v___x_5376_ == 0)
{
lean_object* v___x_5377_; 
lean_inc_ref(v_binderType_5364_);
lean_inc(v_binderName_5363_);
lean_dec_ref_known(v_e_5362_, 3);
v___x_5377_ = l_Lean_Expr_lam___override(v_binderName_5363_, v_binderType_5364_, v_b_x27_5367_, v_binderInfo_5366_);
return v___x_5377_;
}
else
{
lean_dec_ref(v_b_x27_5367_);
return v_e_5362_;
}
}
}
}
}
else
{
return v_e_5362_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setOption___redArg(lean_object* v_e_5395_, lean_object* v_optionName_5396_, lean_object* v_inst_5397_, lean_object* v_val_5398_){
_start:
{
lean_object* v_toDataValue_5399_; lean_object* v___x_5400_; lean_object* v___x_5401_; lean_object* v___x_5402_; lean_object* v___x_5403_; 
v_toDataValue_5399_ = lean_ctor_get(v_inst_5397_, 0);
lean_inc_ref(v_toDataValue_5399_);
lean_dec_ref(v_inst_5397_);
v___x_5400_ = lean_box(0);
v___x_5401_ = lean_apply_1(v_toDataValue_5399_, v_val_5398_);
v___x_5402_ = l_Lean_KVMap_insert(v___x_5400_, v_optionName_5396_, v___x_5401_);
v___x_5403_ = l_Lean_Expr_mdata___override(v___x_5402_, v_e_5395_);
return v___x_5403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setOption(lean_object* v_00_u03b1_5404_, lean_object* v_e_5405_, lean_object* v_optionName_5406_, lean_object* v_inst_5407_, lean_object* v_val_5408_){
_start:
{
lean_object* v___x_5409_; 
v___x_5409_ = l_Lean_Expr_setOption___redArg(v_e_5405_, v_optionName_5406_, v_inst_5407_, v_val_5408_);
return v___x_5409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setOption___at___00Lean_Expr_setPPExplicit_spec__0(lean_object* v_e_5410_, lean_object* v_optionName_5411_, uint8_t v_val_5412_){
_start:
{
lean_object* v___x_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; 
v___x_5413_ = lean_box(0);
v___x_5414_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_5414_, 0, v_val_5412_);
v___x_5415_ = l_Lean_KVMap_insert(v___x_5413_, v_optionName_5411_, v___x_5414_);
v___x_5416_ = l_Lean_Expr_mdata___override(v___x_5415_, v_e_5410_);
return v___x_5416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setOption___at___00Lean_Expr_setPPExplicit_spec__0___boxed(lean_object* v_e_5417_, lean_object* v_optionName_5418_, lean_object* v_val_5419_){
_start:
{
uint8_t v_val_boxed_5420_; lean_object* v_res_5421_; 
v_val_boxed_5420_ = lean_unbox(v_val_5419_);
v_res_5421_ = l_Lean_Expr_setOption___at___00Lean_Expr_setPPExplicit_spec__0(v_e_5417_, v_optionName_5418_, v_val_boxed_5420_);
return v_res_5421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setPPExplicit(lean_object* v_e_5427_, uint8_t v_flag_5428_){
_start:
{
lean_object* v___x_5429_; lean_object* v___x_5430_; 
v___x_5429_ = ((lean_object*)(l_Lean_Expr_setPPExplicit___closed__2));
v___x_5430_ = l_Lean_Expr_setOption___at___00Lean_Expr_setPPExplicit_spec__0(v_e_5427_, v___x_5429_, v_flag_5428_);
return v___x_5430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setPPExplicit___boxed(lean_object* v_e_5431_, lean_object* v_flag_5432_){
_start:
{
uint8_t v_flag_boxed_5433_; lean_object* v_res_5434_; 
v_flag_boxed_5433_ = lean_unbox(v_flag_5432_);
v_res_5434_ = l_Lean_Expr_setPPExplicit(v_e_5431_, v_flag_boxed_5433_);
return v_res_5434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setPPUniverses(lean_object* v_e_5439_, uint8_t v_flag_5440_){
_start:
{
lean_object* v___x_5441_; lean_object* v___x_5442_; 
v___x_5441_ = ((lean_object*)(l_Lean_Expr_setPPUniverses___closed__1));
v___x_5442_ = l_Lean_Expr_setOption___at___00Lean_Expr_setPPExplicit_spec__0(v_e_5439_, v___x_5441_, v_flag_5440_);
return v___x_5442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setPPUniverses___boxed(lean_object* v_e_5443_, lean_object* v_flag_5444_){
_start:
{
uint8_t v_flag_boxed_5445_; lean_object* v_res_5446_; 
v_flag_boxed_5445_ = lean_unbox(v_flag_5444_);
v_res_5446_ = l_Lean_Expr_setPPUniverses(v_e_5443_, v_flag_boxed_5445_);
return v_res_5446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setPPPiBinderTypes(lean_object* v_e_5451_, uint8_t v_flag_5452_){
_start:
{
lean_object* v___x_5453_; lean_object* v___x_5454_; 
v___x_5453_ = ((lean_object*)(l_Lean_Expr_setPPPiBinderTypes___closed__1));
v___x_5454_ = l_Lean_Expr_setOption___at___00Lean_Expr_setPPExplicit_spec__0(v_e_5451_, v___x_5453_, v_flag_5452_);
return v___x_5454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setPPPiBinderTypes___boxed(lean_object* v_e_5455_, lean_object* v_flag_5456_){
_start:
{
uint8_t v_flag_boxed_5457_; lean_object* v_res_5458_; 
v_flag_boxed_5457_ = lean_unbox(v_flag_5456_);
v_res_5458_ = l_Lean_Expr_setPPPiBinderTypes(v_e_5455_, v_flag_boxed_5457_);
return v_res_5458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setPPFunBinderTypes(lean_object* v_e_5463_, uint8_t v_flag_5464_){
_start:
{
lean_object* v___x_5465_; lean_object* v___x_5466_; 
v___x_5465_ = ((lean_object*)(l_Lean_Expr_setPPFunBinderTypes___closed__1));
v___x_5466_ = l_Lean_Expr_setOption___at___00Lean_Expr_setPPExplicit_spec__0(v_e_5463_, v___x_5465_, v_flag_5464_);
return v___x_5466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setPPFunBinderTypes___boxed(lean_object* v_e_5467_, lean_object* v_flag_5468_){
_start:
{
uint8_t v_flag_boxed_5469_; lean_object* v_res_5470_; 
v_flag_boxed_5469_ = lean_unbox(v_flag_5468_);
v_res_5470_ = l_Lean_Expr_setPPFunBinderTypes(v_e_5467_, v_flag_boxed_5469_);
return v_res_5470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setPPNumericTypes(lean_object* v_e_5475_, uint8_t v_flag_5476_){
_start:
{
lean_object* v___x_5477_; lean_object* v___x_5478_; 
v___x_5477_ = ((lean_object*)(l_Lean_Expr_setPPNumericTypes___closed__1));
v___x_5478_ = l_Lean_Expr_setOption___at___00Lean_Expr_setPPExplicit_spec__0(v_e_5475_, v___x_5477_, v_flag_5476_);
return v___x_5478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setPPNumericTypes___boxed(lean_object* v_e_5479_, lean_object* v_flag_5480_){
_start:
{
uint8_t v_flag_boxed_5481_; lean_object* v_res_5482_; 
v_flag_boxed_5481_ = lean_unbox(v_flag_5480_);
v_res_5482_ = l_Lean_Expr_setPPNumericTypes(v_e_5479_, v_flag_boxed_5481_);
return v_res_5482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicit_spec__0(size_t v_sz_5483_, size_t v_i_5484_, lean_object* v_bs_5485_){
_start:
{
uint8_t v___x_5486_; 
v___x_5486_ = lean_usize_dec_lt(v_i_5484_, v_sz_5483_);
if (v___x_5486_ == 0)
{
lean_object* v___x_5487_; 
v___x_5487_ = l_unsafeCast___redArg(v_bs_5485_);
lean_dec_ref(v_bs_5485_);
return v___x_5487_;
}
else
{
uint8_t v___x_5488_; lean_object* v_v_5489_; lean_object* v___x_5490_; lean_object* v_bs_x27_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; size_t v___x_5494_; size_t v___x_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; 
v___x_5488_ = 0;
v_v_5489_ = lean_array_uget(v_bs_5485_, v_i_5484_);
v___x_5490_ = lean_unsigned_to_nat(0u);
v_bs_x27_5491_ = lean_array_uset(v_bs_5485_, v_i_5484_, v___x_5490_);
v___x_5492_ = l_unsafeCast___redArg(v_v_5489_);
lean_dec(v_v_5489_);
v___x_5493_ = l_Lean_Expr_setPPExplicit(v___x_5492_, v___x_5488_);
v___x_5494_ = ((size_t)1ULL);
v___x_5495_ = lean_usize_add(v_i_5484_, v___x_5494_);
v___x_5496_ = l_unsafeCast___redArg(v___x_5493_);
lean_dec_ref(v___x_5493_);
v___x_5497_ = lean_array_uset(v_bs_x27_5491_, v_i_5484_, v___x_5496_);
v_i_5484_ = v___x_5495_;
v_bs_5485_ = v___x_5497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicit_spec__0___boxed(lean_object* v_sz_5499_, lean_object* v_i_5500_, lean_object* v_bs_5501_){
_start:
{
size_t v_sz_boxed_5502_; size_t v_i_boxed_5503_; lean_object* v_res_5504_; 
v_sz_boxed_5502_ = lean_unbox_usize(v_sz_5499_);
lean_dec(v_sz_5499_);
v_i_boxed_5503_ = lean_unbox_usize(v_i_5500_);
lean_dec(v_i_5500_);
v_res_5504_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicit_spec__0(v_sz_boxed_5502_, v_i_boxed_5503_, v_bs_5501_);
return v_res_5504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setAppPPExplicit(lean_object* v_e_5505_){
_start:
{
if (lean_obj_tag(v_e_5505_) == 5)
{
lean_object* v___x_5506_; uint8_t v___x_5507_; lean_object* v_f_5508_; lean_object* v_dummy_5509_; lean_object* v_nargs_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; size_t v_sz_5515_; size_t v___x_5516_; lean_object* v___x_5517_; lean_object* v___x_5518_; lean_object* v_args_5519_; lean_object* v___x_5520_; uint8_t v___x_5521_; lean_object* v___x_5522_; 
v___x_5506_ = l_Lean_Expr_getAppFn(v_e_5505_);
v___x_5507_ = 0;
v_f_5508_ = l_Lean_Expr_setPPExplicit(v___x_5506_, v___x_5507_);
v_dummy_5509_ = lean_obj_once(&l_Lean_Expr_getAppArgs___closed__0, &l_Lean_Expr_getAppArgs___closed__0_once, _init_l_Lean_Expr_getAppArgs___closed__0);
v_nargs_5510_ = l_Lean_Expr_getAppNumArgs(v_e_5505_);
lean_inc(v_nargs_5510_);
v___x_5511_ = lean_mk_array(v_nargs_5510_, v_dummy_5509_);
v___x_5512_ = lean_unsigned_to_nat(1u);
v___x_5513_ = lean_nat_sub(v_nargs_5510_, v___x_5512_);
lean_dec(v_nargs_5510_);
v___x_5514_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_5505_, v___x_5511_, v___x_5513_);
v_sz_5515_ = lean_array_size(v___x_5514_);
v___x_5516_ = ((size_t)0ULL);
v___x_5517_ = l_unsafeCast___redArg(v___x_5514_);
lean_dec_ref(v___x_5514_);
v___x_5518_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicit_spec__0(v_sz_5515_, v___x_5516_, v___x_5517_);
v_args_5519_ = l_unsafeCast___redArg(v___x_5518_);
lean_dec_ref(v___x_5518_);
v___x_5520_ = l_Lean_mkAppN(v_f_5508_, v_args_5519_);
lean_dec(v_args_5519_);
v___x_5521_ = 1;
v___x_5522_ = l_Lean_Expr_setPPExplicit(v___x_5520_, v___x_5521_);
return v___x_5522_;
}
else
{
return v_e_5505_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicitForExposingMVars_spec__0(size_t v_sz_5523_, size_t v_i_5524_, lean_object* v_bs_5525_){
_start:
{
uint8_t v___x_5526_; 
v___x_5526_ = lean_usize_dec_lt(v_i_5524_, v_sz_5523_);
if (v___x_5526_ == 0)
{
lean_object* v___x_5527_; 
v___x_5527_ = l_unsafeCast___redArg(v_bs_5525_);
lean_dec_ref(v_bs_5525_);
return v___x_5527_;
}
else
{
lean_object* v_v_5528_; lean_object* v___x_5529_; lean_object* v_bs_x27_5530_; lean_object* v___y_5532_; lean_object* v___x_5538_; uint8_t v___x_5539_; 
v_v_5528_ = lean_array_uget(v_bs_5525_, v_i_5524_);
v___x_5529_ = lean_unsigned_to_nat(0u);
v_bs_x27_5530_ = lean_array_uset(v_bs_5525_, v_i_5524_, v___x_5529_);
v___x_5538_ = l_unsafeCast___redArg(v_v_5528_);
lean_dec(v_v_5528_);
v___x_5539_ = l_Lean_Expr_hasMVar(v___x_5538_);
if (v___x_5539_ == 0)
{
lean_object* v___x_5540_; 
v___x_5540_ = l_Lean_Expr_setPPExplicit(v___x_5538_, v___x_5539_);
v___y_5532_ = v___x_5540_;
goto v___jp_5531_;
}
else
{
v___y_5532_ = v___x_5538_;
goto v___jp_5531_;
}
v___jp_5531_:
{
size_t v___x_5533_; size_t v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5536_; 
v___x_5533_ = ((size_t)1ULL);
v___x_5534_ = lean_usize_add(v_i_5524_, v___x_5533_);
v___x_5535_ = l_unsafeCast___redArg(v___y_5532_);
lean_dec_ref(v___y_5532_);
v___x_5536_ = lean_array_uset(v_bs_x27_5530_, v_i_5524_, v___x_5535_);
v_i_5524_ = v___x_5534_;
v_bs_5525_ = v___x_5536_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicitForExposingMVars_spec__0___boxed(lean_object* v_sz_5541_, lean_object* v_i_5542_, lean_object* v_bs_5543_){
_start:
{
size_t v_sz_boxed_5544_; size_t v_i_boxed_5545_; lean_object* v_res_5546_; 
v_sz_boxed_5544_ = lean_unbox_usize(v_sz_5541_);
lean_dec(v_sz_5541_);
v_i_boxed_5545_ = lean_unbox_usize(v_i_5542_);
lean_dec(v_i_5542_);
v_res_5546_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicitForExposingMVars_spec__0(v_sz_boxed_5544_, v_i_boxed_5545_, v_bs_5543_);
return v_res_5546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setAppPPExplicitForExposingMVars(lean_object* v_e_5547_){
_start:
{
if (lean_obj_tag(v_e_5547_) == 5)
{
lean_object* v___x_5548_; uint8_t v___x_5549_; lean_object* v_f_5550_; lean_object* v_dummy_5551_; lean_object* v_nargs_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; size_t v_sz_5557_; size_t v___x_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v_args_5561_; lean_object* v___x_5562_; uint8_t v___x_5563_; lean_object* v___x_5564_; 
v___x_5548_ = l_Lean_Expr_getAppFn(v_e_5547_);
v___x_5549_ = 0;
v_f_5550_ = l_Lean_Expr_setPPExplicit(v___x_5548_, v___x_5549_);
v_dummy_5551_ = lean_obj_once(&l_Lean_Expr_getAppArgs___closed__0, &l_Lean_Expr_getAppArgs___closed__0_once, _init_l_Lean_Expr_getAppArgs___closed__0);
v_nargs_5552_ = l_Lean_Expr_getAppNumArgs(v_e_5547_);
lean_inc(v_nargs_5552_);
v___x_5553_ = lean_mk_array(v_nargs_5552_, v_dummy_5551_);
v___x_5554_ = lean_unsigned_to_nat(1u);
v___x_5555_ = lean_nat_sub(v_nargs_5552_, v___x_5554_);
lean_dec(v_nargs_5552_);
v___x_5556_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_5547_, v___x_5553_, v___x_5555_);
v_sz_5557_ = lean_array_size(v___x_5556_);
v___x_5558_ = ((size_t)0ULL);
v___x_5559_ = l_unsafeCast___redArg(v___x_5556_);
lean_dec_ref(v___x_5556_);
v___x_5560_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Expr_setAppPPExplicitForExposingMVars_spec__0(v_sz_5557_, v___x_5558_, v___x_5559_);
v_args_5561_ = l_unsafeCast___redArg(v___x_5560_);
lean_dec_ref(v___x_5560_);
v___x_5562_ = l_Lean_mkAppN(v_f_5550_, v_args_5561_);
lean_dec(v_args_5561_);
v___x_5563_ = 1;
v___x_5564_ = l_Lean_Expr_setPPExplicit(v___x_5562_, v___x_5563_);
return v___x_5564_;
}
else
{
return v_e_5547_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__0(lean_object* v_f_5565_, lean_object* v_body_5566_, lean_object* v_x_5567_){
_start:
{
lean_object* v___x_5568_; 
v___x_5568_ = lean_apply_1(v_f_5565_, v_body_5566_);
return v___x_5568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__1(lean_object* v_f_5569_, lean_object* v_binderType_5570_, lean_object* v_x_5571_){
_start:
{
lean_object* v___x_5572_; 
v___x_5572_ = lean_apply_1(v_f_5569_, v_binderType_5570_);
return v___x_5572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__5(lean_object* v_f_5573_, lean_object* v_value_5574_, lean_object* v_x_5575_){
_start:
{
lean_object* v___x_5576_; 
v___x_5576_ = lean_apply_1(v_f_5573_, v_value_5574_);
return v___x_5576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__2(lean_object* v_f_5577_, lean_object* v_type_5578_, lean_object* v_x_5579_){
_start:
{
lean_object* v___x_5580_; 
v___x_5580_ = lean_apply_1(v_f_5577_, v_type_5578_);
return v___x_5580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__3(lean_object* v_f_5581_, lean_object* v_arg_5582_, lean_object* v_x_5583_){
_start:
{
lean_object* v___x_5584_; 
v___x_5584_ = lean_apply_1(v_f_5581_, v_arg_5582_);
return v___x_5584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg___lam__4(lean_object* v_f_5585_, lean_object* v_fn_5586_, lean_object* v_x_5587_){
_start:
{
lean_object* v___x_5588_; 
v___x_5588_ = lean_apply_1(v_f_5585_, v_fn_5586_);
return v___x_5588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___redArg(lean_object* v_inst_5589_, lean_object* v_f_5590_, lean_object* v_x_5591_){
_start:
{
switch(lean_obj_tag(v_x_5591_))
{
case 7:
{
lean_object* v_toPure_5592_; lean_object* v_toSeq_5593_; lean_object* v_binderType_5594_; lean_object* v_body_5595_; lean_object* v___f_5596_; lean_object* v___f_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; 
v_toPure_5592_ = lean_ctor_get(v_inst_5589_, 1);
lean_inc(v_toPure_5592_);
v_toSeq_5593_ = lean_ctor_get(v_inst_5589_, 2);
lean_inc_n(v_toSeq_5593_, 2);
lean_dec_ref(v_inst_5589_);
v_binderType_5594_ = lean_ctor_get(v_x_5591_, 1);
v_body_5595_ = lean_ctor_get(v_x_5591_, 2);
lean_inc_ref(v_body_5595_);
lean_inc(v_f_5590_);
v___f_5596_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseChildren___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5596_, 0, v_f_5590_);
lean_closure_set(v___f_5596_, 1, v_body_5595_);
lean_inc_ref(v_binderType_5594_);
v___f_5597_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseChildren___redArg___lam__1), 3, 2);
lean_closure_set(v___f_5597_, 0, v_f_5590_);
lean_closure_set(v___f_5597_, 1, v_binderType_5594_);
v___x_5598_ = lean_alloc_closure((void*)(l_Lean_Expr_updateForallE_x21), 3, 1);
lean_closure_set(v___x_5598_, 0, v_x_5591_);
v___x_5599_ = lean_apply_2(v_toPure_5592_, lean_box(0), v___x_5598_);
v___x_5600_ = lean_apply_4(v_toSeq_5593_, lean_box(0), lean_box(0), v___x_5599_, v___f_5597_);
v___x_5601_ = lean_apply_4(v_toSeq_5593_, lean_box(0), lean_box(0), v___x_5600_, v___f_5596_);
return v___x_5601_;
}
case 6:
{
lean_object* v_toPure_5602_; lean_object* v_toSeq_5603_; lean_object* v_binderType_5604_; lean_object* v_body_5605_; lean_object* v___f_5606_; lean_object* v___f_5607_; lean_object* v___x_5608_; lean_object* v___x_5609_; lean_object* v___x_5610_; lean_object* v___x_5611_; 
v_toPure_5602_ = lean_ctor_get(v_inst_5589_, 1);
lean_inc(v_toPure_5602_);
v_toSeq_5603_ = lean_ctor_get(v_inst_5589_, 2);
lean_inc_n(v_toSeq_5603_, 2);
lean_dec_ref(v_inst_5589_);
v_binderType_5604_ = lean_ctor_get(v_x_5591_, 1);
v_body_5605_ = lean_ctor_get(v_x_5591_, 2);
lean_inc_ref(v_body_5605_);
lean_inc(v_f_5590_);
v___f_5606_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseChildren___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5606_, 0, v_f_5590_);
lean_closure_set(v___f_5606_, 1, v_body_5605_);
lean_inc_ref(v_binderType_5604_);
v___f_5607_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseChildren___redArg___lam__1), 3, 2);
lean_closure_set(v___f_5607_, 0, v_f_5590_);
lean_closure_set(v___f_5607_, 1, v_binderType_5604_);
v___x_5608_ = lean_alloc_closure((void*)(l_Lean_Expr_updateLambdaE_x21), 3, 1);
lean_closure_set(v___x_5608_, 0, v_x_5591_);
v___x_5609_ = lean_apply_2(v_toPure_5602_, lean_box(0), v___x_5608_);
v___x_5610_ = lean_apply_4(v_toSeq_5603_, lean_box(0), lean_box(0), v___x_5609_, v___f_5607_);
v___x_5611_ = lean_apply_4(v_toSeq_5603_, lean_box(0), lean_box(0), v___x_5610_, v___f_5606_);
return v___x_5611_;
}
case 10:
{
lean_object* v_toFunctor_5612_; lean_object* v_expr_5613_; lean_object* v_map_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; 
v_toFunctor_5612_ = lean_ctor_get(v_inst_5589_, 0);
lean_inc_ref(v_toFunctor_5612_);
lean_dec_ref(v_inst_5589_);
v_expr_5613_ = lean_ctor_get(v_x_5591_, 1);
lean_inc_ref(v_expr_5613_);
v_map_5614_ = lean_ctor_get(v_toFunctor_5612_, 0);
lean_inc(v_map_5614_);
lean_dec_ref(v_toFunctor_5612_);
v___x_5615_ = lean_alloc_closure((void*)(l___private_Lean_Expr_0__Lean_Expr_updateMData_x21Impl), 2, 1);
lean_closure_set(v___x_5615_, 0, v_x_5591_);
v___x_5616_ = lean_apply_1(v_f_5590_, v_expr_5613_);
v___x_5617_ = lean_apply_4(v_map_5614_, lean_box(0), lean_box(0), v___x_5615_, v___x_5616_);
return v___x_5617_;
}
case 8:
{
lean_object* v_toPure_5618_; lean_object* v_toSeq_5619_; lean_object* v_type_5620_; lean_object* v_value_5621_; lean_object* v_body_5622_; lean_object* v___f_5623_; lean_object* v___f_5624_; lean_object* v___f_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; 
v_toPure_5618_ = lean_ctor_get(v_inst_5589_, 1);
lean_inc(v_toPure_5618_);
v_toSeq_5619_ = lean_ctor_get(v_inst_5589_, 2);
lean_inc_n(v_toSeq_5619_, 3);
lean_dec_ref(v_inst_5589_);
v_type_5620_ = lean_ctor_get(v_x_5591_, 1);
v_value_5621_ = lean_ctor_get(v_x_5591_, 2);
v_body_5622_ = lean_ctor_get(v_x_5591_, 3);
lean_inc_ref(v_body_5622_);
lean_inc_n(v_f_5590_, 2);
v___f_5623_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseChildren___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5623_, 0, v_f_5590_);
lean_closure_set(v___f_5623_, 1, v_body_5622_);
lean_inc_ref(v_value_5621_);
v___f_5624_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseChildren___redArg___lam__5), 3, 2);
lean_closure_set(v___f_5624_, 0, v_f_5590_);
lean_closure_set(v___f_5624_, 1, v_value_5621_);
lean_inc_ref(v_type_5620_);
v___f_5625_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseChildren___redArg___lam__2), 3, 2);
lean_closure_set(v___f_5625_, 0, v_f_5590_);
lean_closure_set(v___f_5625_, 1, v_type_5620_);
v___x_5626_ = lean_alloc_closure((void*)(l_Lean_Expr_updateLetE_x21), 4, 1);
lean_closure_set(v___x_5626_, 0, v_x_5591_);
v___x_5627_ = lean_apply_2(v_toPure_5618_, lean_box(0), v___x_5626_);
v___x_5628_ = lean_apply_4(v_toSeq_5619_, lean_box(0), lean_box(0), v___x_5627_, v___f_5625_);
v___x_5629_ = lean_apply_4(v_toSeq_5619_, lean_box(0), lean_box(0), v___x_5628_, v___f_5624_);
v___x_5630_ = lean_apply_4(v_toSeq_5619_, lean_box(0), lean_box(0), v___x_5629_, v___f_5623_);
return v___x_5630_;
}
case 5:
{
lean_object* v_toPure_5631_; lean_object* v_toSeq_5632_; lean_object* v_fn_5633_; lean_object* v_arg_5634_; lean_object* v___f_5635_; lean_object* v___f_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; 
v_toPure_5631_ = lean_ctor_get(v_inst_5589_, 1);
lean_inc(v_toPure_5631_);
v_toSeq_5632_ = lean_ctor_get(v_inst_5589_, 2);
lean_inc_n(v_toSeq_5632_, 2);
lean_dec_ref(v_inst_5589_);
v_fn_5633_ = lean_ctor_get(v_x_5591_, 0);
v_arg_5634_ = lean_ctor_get(v_x_5591_, 1);
lean_inc_ref(v_arg_5634_);
lean_inc(v_f_5590_);
v___f_5635_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseChildren___redArg___lam__3), 3, 2);
lean_closure_set(v___f_5635_, 0, v_f_5590_);
lean_closure_set(v___f_5635_, 1, v_arg_5634_);
lean_inc_ref(v_fn_5633_);
v___f_5636_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseChildren___redArg___lam__4), 3, 2);
lean_closure_set(v___f_5636_, 0, v_f_5590_);
lean_closure_set(v___f_5636_, 1, v_fn_5633_);
v___x_5637_ = lean_alloc_closure((void*)(l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___boxed), 3, 1);
lean_closure_set(v___x_5637_, 0, v_x_5591_);
v___x_5638_ = lean_apply_2(v_toPure_5631_, lean_box(0), v___x_5637_);
v___x_5639_ = lean_apply_4(v_toSeq_5632_, lean_box(0), lean_box(0), v___x_5638_, v___f_5636_);
v___x_5640_ = lean_apply_4(v_toSeq_5632_, lean_box(0), lean_box(0), v___x_5639_, v___f_5635_);
return v___x_5640_;
}
case 11:
{
lean_object* v_toFunctor_5641_; lean_object* v_struct_5642_; lean_object* v_map_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; 
v_toFunctor_5641_ = lean_ctor_get(v_inst_5589_, 0);
lean_inc_ref(v_toFunctor_5641_);
lean_dec_ref(v_inst_5589_);
v_struct_5642_ = lean_ctor_get(v_x_5591_, 2);
lean_inc_ref(v_struct_5642_);
v_map_5643_ = lean_ctor_get(v_toFunctor_5641_, 0);
lean_inc(v_map_5643_);
lean_dec_ref(v_toFunctor_5641_);
v___x_5644_ = lean_alloc_closure((void*)(l___private_Lean_Expr_0__Lean_Expr_updateProj_x21Impl), 2, 1);
lean_closure_set(v___x_5644_, 0, v_x_5591_);
v___x_5645_ = lean_apply_1(v_f_5590_, v_struct_5642_);
v___x_5646_ = lean_apply_4(v_map_5643_, lean_box(0), lean_box(0), v___x_5644_, v___x_5645_);
return v___x_5646_;
}
default: 
{
lean_object* v_toPure_5647_; lean_object* v___x_5648_; 
lean_dec(v_f_5590_);
v_toPure_5647_ = lean_ctor_get(v_inst_5589_, 1);
lean_inc(v_toPure_5647_);
lean_dec_ref(v_inst_5589_);
v___x_5648_ = lean_apply_2(v_toPure_5647_, lean_box(0), v_x_5591_);
return v___x_5648_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren(lean_object* v_M_5649_, lean_object* v_inst_5650_, lean_object* v_f_5651_, lean_object* v_x_5652_){
_start:
{
lean_object* v___x_5653_; 
v___x_5653_ = l_Lean_Expr_traverseChildren___redArg(v_inst_5650_, v_f_5651_, v_x_5652_);
return v___x_5653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___redArg___lam__0(lean_object* v_self_5654_){
_start:
{
lean_object* v_snd_5655_; 
v_snd_5655_ = lean_ctor_get(v_self_5654_, 1);
lean_inc(v_snd_5655_);
return v_snd_5655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___redArg___lam__0___boxed(lean_object* v_self_5656_){
_start:
{
lean_object* v_res_5657_; 
v_res_5657_ = l_Lean_Expr_foldlM___redArg___lam__0(v_self_5656_);
lean_dec_ref(v_self_5656_);
return v_res_5657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___redArg___lam__1(lean_object* v_e_x27_5658_, lean_object* v_snd_5659_){
_start:
{
lean_object* v___x_5660_; 
v___x_5660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5660_, 0, v_e_x27_5658_);
lean_ctor_set(v___x_5660_, 1, v_snd_5659_);
return v___x_5660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___redArg___lam__2(lean_object* v_f_5661_, lean_object* v_map_5662_, lean_object* v_e_x27_5663_, lean_object* v_a_5664_){
_start:
{
lean_object* v___f_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; 
lean_inc_ref(v_e_x27_5663_);
v___f_5665_ = lean_alloc_closure((void*)(l_Lean_Expr_foldlM___redArg___lam__1), 2, 1);
lean_closure_set(v___f_5665_, 0, v_e_x27_5663_);
v___x_5666_ = lean_apply_2(v_f_5661_, v_a_5664_, v_e_x27_5663_);
v___x_5667_ = lean_apply_4(v_map_5662_, lean_box(0), lean_box(0), v___f_5665_, v___x_5666_);
return v___x_5667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___redArg(lean_object* v_inst_5669_, lean_object* v_f_5670_, lean_object* v_init_5671_, lean_object* v_e_5672_){
_start:
{
lean_object* v_toApplicative_5673_; lean_object* v_toFunctor_5674_; lean_object* v___x_5676_; uint8_t v_isShared_5677_; uint8_t v_isSharedCheck_5701_; 
v_toApplicative_5673_ = lean_ctor_get(v_inst_5669_, 0);
lean_inc_ref(v_toApplicative_5673_);
v_toFunctor_5674_ = lean_ctor_get(v_toApplicative_5673_, 0);
v_isSharedCheck_5701_ = !lean_is_exclusive(v_toApplicative_5673_);
if (v_isSharedCheck_5701_ == 0)
{
lean_object* v_unused_5702_; lean_object* v_unused_5703_; lean_object* v_unused_5704_; lean_object* v_unused_5705_; 
v_unused_5702_ = lean_ctor_get(v_toApplicative_5673_, 4);
lean_dec(v_unused_5702_);
v_unused_5703_ = lean_ctor_get(v_toApplicative_5673_, 3);
lean_dec(v_unused_5703_);
v_unused_5704_ = lean_ctor_get(v_toApplicative_5673_, 2);
lean_dec(v_unused_5704_);
v_unused_5705_ = lean_ctor_get(v_toApplicative_5673_, 1);
lean_dec(v_unused_5705_);
v___x_5676_ = v_toApplicative_5673_;
v_isShared_5677_ = v_isSharedCheck_5701_;
goto v_resetjp_5675_;
}
else
{
lean_inc(v_toFunctor_5674_);
lean_dec(v_toApplicative_5673_);
v___x_5676_ = lean_box(0);
v_isShared_5677_ = v_isSharedCheck_5701_;
goto v_resetjp_5675_;
}
v_resetjp_5675_:
{
lean_object* v_map_5678_; lean_object* v___x_5680_; uint8_t v_isShared_5681_; uint8_t v_isSharedCheck_5699_; 
v_map_5678_ = lean_ctor_get(v_toFunctor_5674_, 0);
v_isSharedCheck_5699_ = !lean_is_exclusive(v_toFunctor_5674_);
if (v_isSharedCheck_5699_ == 0)
{
lean_object* v_unused_5700_; 
v_unused_5700_ = lean_ctor_get(v_toFunctor_5674_, 1);
lean_dec(v_unused_5700_);
v___x_5680_ = v_toFunctor_5674_;
v_isShared_5681_ = v_isSharedCheck_5699_;
goto v_resetjp_5679_;
}
else
{
lean_inc(v_map_5678_);
lean_dec(v_toFunctor_5674_);
v___x_5680_ = lean_box(0);
v_isShared_5681_ = v_isSharedCheck_5699_;
goto v_resetjp_5679_;
}
v_resetjp_5679_:
{
lean_object* v___f_5682_; lean_object* v___f_5683_; lean_object* v___f_5684_; lean_object* v___f_5685_; lean_object* v___f_5686_; lean_object* v___f_5687_; lean_object* v___x_5688_; lean_object* v___x_5690_; 
v___f_5682_ = ((lean_object*)(l_Lean_Expr_foldlM___redArg___closed__0));
lean_inc(v_map_5678_);
v___f_5683_ = lean_alloc_closure((void*)(l_Lean_Expr_foldlM___redArg___lam__2), 4, 2);
lean_closure_set(v___f_5683_, 0, v_f_5670_);
lean_closure_set(v___f_5683_, 1, v_map_5678_);
lean_inc_ref_n(v_inst_5669_, 5);
v___f_5684_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5684_, 0, v_inst_5669_);
v___f_5685_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5685_, 0, v_inst_5669_);
v___f_5686_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_5686_, 0, v_inst_5669_);
v___f_5687_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_5687_, 0, v_inst_5669_);
v___x_5688_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_5688_, 0, lean_box(0));
lean_closure_set(v___x_5688_, 1, lean_box(0));
lean_closure_set(v___x_5688_, 2, v_inst_5669_);
if (v_isShared_5681_ == 0)
{
lean_ctor_set(v___x_5680_, 1, v___f_5684_);
lean_ctor_set(v___x_5680_, 0, v___x_5688_);
v___x_5690_ = v___x_5680_;
goto v_reusejp_5689_;
}
else
{
lean_object* v_reuseFailAlloc_5698_; 
v_reuseFailAlloc_5698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5698_, 0, v___x_5688_);
lean_ctor_set(v_reuseFailAlloc_5698_, 1, v___f_5684_);
v___x_5690_ = v_reuseFailAlloc_5698_;
goto v_reusejp_5689_;
}
v_reusejp_5689_:
{
lean_object* v___x_5691_; lean_object* v___x_5693_; 
v___x_5691_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_5691_, 0, lean_box(0));
lean_closure_set(v___x_5691_, 1, lean_box(0));
lean_closure_set(v___x_5691_, 2, v_inst_5669_);
if (v_isShared_5677_ == 0)
{
lean_ctor_set(v___x_5676_, 4, v___f_5687_);
lean_ctor_set(v___x_5676_, 3, v___f_5686_);
lean_ctor_set(v___x_5676_, 2, v___f_5685_);
lean_ctor_set(v___x_5676_, 1, v___x_5691_);
lean_ctor_set(v___x_5676_, 0, v___x_5690_);
v___x_5693_ = v___x_5676_;
goto v_reusejp_5692_;
}
else
{
lean_object* v_reuseFailAlloc_5697_; 
v_reuseFailAlloc_5697_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5697_, 0, v___x_5690_);
lean_ctor_set(v_reuseFailAlloc_5697_, 1, v___x_5691_);
lean_ctor_set(v_reuseFailAlloc_5697_, 2, v___f_5685_);
lean_ctor_set(v_reuseFailAlloc_5697_, 3, v___f_5686_);
lean_ctor_set(v_reuseFailAlloc_5697_, 4, v___f_5687_);
v___x_5693_ = v_reuseFailAlloc_5697_;
goto v_reusejp_5692_;
}
v_reusejp_5692_:
{
lean_object* v___x_30__overap_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; 
v___x_30__overap_5694_ = l_Lean_Expr_traverseChildren___redArg(v___x_5693_, v___f_5683_, v_e_5672_);
v___x_5695_ = lean_apply_1(v___x_30__overap_5694_, v_init_5671_);
v___x_5696_ = lean_apply_4(v_map_5678_, lean_box(0), lean_box(0), v___f_5682_, v___x_5695_);
return v___x_5696_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM(lean_object* v_00_u03b1_5706_, lean_object* v_m_5707_, lean_object* v_inst_5708_, lean_object* v_f_5709_, lean_object* v_init_5710_, lean_object* v_e_5711_){
_start:
{
lean_object* v___x_5712_; 
v___x_5712_ = l_Lean_Expr_foldlM___redArg(v_inst_5708_, v_f_5709_, v_init_5710_, v_e_5711_);
return v___x_5712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_sizeWithoutSharing(lean_object* v_x_5713_){
_start:
{
lean_object* v_d_5715_; lean_object* v_b_5716_; 
switch(lean_obj_tag(v_x_5713_))
{
case 5:
{
lean_object* v_fn_5722_; lean_object* v_arg_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; 
v_fn_5722_ = lean_ctor_get(v_x_5713_, 0);
v_arg_5723_ = lean_ctor_get(v_x_5713_, 1);
v___x_5724_ = lean_unsigned_to_nat(1u);
v___x_5725_ = l_Lean_Expr_sizeWithoutSharing(v_fn_5722_);
v___x_5726_ = lean_nat_add(v___x_5724_, v___x_5725_);
lean_dec(v___x_5725_);
v___x_5727_ = l_Lean_Expr_sizeWithoutSharing(v_arg_5723_);
v___x_5728_ = lean_nat_add(v___x_5726_, v___x_5727_);
lean_dec(v___x_5727_);
lean_dec(v___x_5726_);
return v___x_5728_;
}
case 6:
{
lean_object* v_binderType_5729_; lean_object* v_body_5730_; 
v_binderType_5729_ = lean_ctor_get(v_x_5713_, 1);
v_body_5730_ = lean_ctor_get(v_x_5713_, 2);
v_d_5715_ = v_binderType_5729_;
v_b_5716_ = v_body_5730_;
goto v___jp_5714_;
}
case 7:
{
lean_object* v_binderType_5731_; lean_object* v_body_5732_; 
v_binderType_5731_ = lean_ctor_get(v_x_5713_, 1);
v_body_5732_ = lean_ctor_get(v_x_5713_, 2);
v_d_5715_ = v_binderType_5731_;
v_b_5716_ = v_body_5732_;
goto v___jp_5714_;
}
case 8:
{
lean_object* v_type_5733_; lean_object* v_value_5734_; lean_object* v_body_5735_; lean_object* v___x_5736_; lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5741_; lean_object* v___x_5742_; 
v_type_5733_ = lean_ctor_get(v_x_5713_, 1);
v_value_5734_ = lean_ctor_get(v_x_5713_, 2);
v_body_5735_ = lean_ctor_get(v_x_5713_, 3);
v___x_5736_ = lean_unsigned_to_nat(1u);
v___x_5737_ = l_Lean_Expr_sizeWithoutSharing(v_type_5733_);
v___x_5738_ = lean_nat_add(v___x_5736_, v___x_5737_);
lean_dec(v___x_5737_);
v___x_5739_ = l_Lean_Expr_sizeWithoutSharing(v_value_5734_);
v___x_5740_ = lean_nat_add(v___x_5738_, v___x_5739_);
lean_dec(v___x_5739_);
lean_dec(v___x_5738_);
v___x_5741_ = l_Lean_Expr_sizeWithoutSharing(v_body_5735_);
v___x_5742_ = lean_nat_add(v___x_5740_, v___x_5741_);
lean_dec(v___x_5741_);
lean_dec(v___x_5740_);
return v___x_5742_;
}
case 10:
{
lean_object* v_expr_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; 
v_expr_5743_ = lean_ctor_get(v_x_5713_, 1);
v___x_5744_ = lean_unsigned_to_nat(1u);
v___x_5745_ = l_Lean_Expr_sizeWithoutSharing(v_expr_5743_);
v___x_5746_ = lean_nat_add(v___x_5744_, v___x_5745_);
lean_dec(v___x_5745_);
return v___x_5746_;
}
case 11:
{
lean_object* v_struct_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; 
v_struct_5747_ = lean_ctor_get(v_x_5713_, 2);
v___x_5748_ = lean_unsigned_to_nat(1u);
v___x_5749_ = l_Lean_Expr_sizeWithoutSharing(v_struct_5747_);
v___x_5750_ = lean_nat_add(v___x_5748_, v___x_5749_);
lean_dec(v___x_5749_);
return v___x_5750_;
}
default: 
{
lean_object* v___x_5751_; 
v___x_5751_ = lean_unsigned_to_nat(1u);
return v___x_5751_;
}
}
v___jp_5714_:
{
lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; 
v___x_5717_ = lean_unsigned_to_nat(1u);
v___x_5718_ = l_Lean_Expr_sizeWithoutSharing(v_d_5715_);
v___x_5719_ = lean_nat_add(v___x_5717_, v___x_5718_);
lean_dec(v___x_5718_);
v___x_5720_ = l_Lean_Expr_sizeWithoutSharing(v_b_5716_);
v___x_5721_ = lean_nat_add(v___x_5719_, v___x_5720_);
lean_dec(v___x_5720_);
lean_dec(v___x_5719_);
return v___x_5721_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_sizeWithoutSharing___boxed(lean_object* v_x_5752_){
_start:
{
lean_object* v_res_5753_; 
v_res_5753_ = l_Lean_Expr_sizeWithoutSharing(v_x_5752_);
lean_dec_ref(v_x_5752_);
return v_res_5753_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAnnotation(lean_object* v_kind_5756_, lean_object* v_e_5757_){
_start:
{
lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; 
v___x_5758_ = l_Lean_KVMap_empty;
v___x_5759_ = ((lean_object*)(l_Lean_mkAnnotation___closed__0));
v___x_5760_ = l_Lean_KVMap_insert(v___x_5758_, v_kind_5756_, v___x_5759_);
v___x_5761_ = l_Lean_Expr_mdata___override(v___x_5760_, v_e_5757_);
return v___x_5761_;
}
}
LEAN_EXPORT lean_object* l_Lean_annotation_x3f(lean_object* v_kind_5762_, lean_object* v_e_5763_){
_start:
{
if (lean_obj_tag(v_e_5763_) == 10)
{
lean_object* v_data_5764_; lean_object* v_expr_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; uint8_t v___x_5768_; 
v_data_5764_ = lean_ctor_get(v_e_5763_, 0);
v_expr_5765_ = lean_ctor_get(v_e_5763_, 1);
v___x_5766_ = l_Lean_KVMap_size(v_data_5764_);
v___x_5767_ = lean_unsigned_to_nat(1u);
v___x_5768_ = lean_nat_dec_eq(v___x_5766_, v___x_5767_);
lean_dec(v___x_5766_);
if (v___x_5768_ == 0)
{
lean_object* v___x_5769_; 
v___x_5769_ = lean_box(0);
return v___x_5769_;
}
else
{
uint8_t v___x_5770_; uint8_t v___x_5771_; 
v___x_5770_ = 0;
v___x_5771_ = l_Lean_KVMap_getBool(v_data_5764_, v_kind_5762_, v___x_5770_);
if (v___x_5771_ == 0)
{
lean_object* v___x_5772_; 
v___x_5772_ = lean_box(0);
return v___x_5772_;
}
else
{
lean_object* v___x_5773_; 
lean_inc_ref(v_expr_5765_);
v___x_5773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5773_, 0, v_expr_5765_);
return v___x_5773_;
}
}
}
else
{
lean_object* v___x_5774_; 
v___x_5774_ = lean_box(0);
return v___x_5774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_annotation_x3f___boxed(lean_object* v_kind_5775_, lean_object* v_e_5776_){
_start:
{
lean_object* v_res_5777_; 
v_res_5777_ = l_Lean_annotation_x3f(v_kind_5775_, v_e_5776_);
lean_dec_ref(v_e_5776_);
lean_dec(v_kind_5775_);
return v_res_5777_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkInaccessible(lean_object* v_e_5781_){
_start:
{
lean_object* v___x_5782_; lean_object* v___x_5783_; 
v___x_5782_ = ((lean_object*)(l_Lean_mkInaccessible___closed__1));
v___x_5783_ = l_Lean_mkAnnotation(v___x_5782_, v_e_5781_);
return v___x_5783_;
}
}
LEAN_EXPORT lean_object* l_Lean_inaccessible_x3f(lean_object* v_e_5784_){
_start:
{
lean_object* v___x_5785_; lean_object* v___x_5786_; 
v___x_5785_ = ((lean_object*)(l_Lean_mkInaccessible___closed__1));
v___x_5786_ = l_Lean_annotation_x3f(v___x_5785_, v_e_5784_);
return v___x_5786_;
}
}
LEAN_EXPORT lean_object* l_Lean_inaccessible_x3f___boxed(lean_object* v_e_5787_){
_start:
{
lean_object* v_res_5788_; 
v_res_5788_ = l_Lean_inaccessible_x3f(v_e_5787_);
lean_dec_ref(v_e_5787_);
return v_res_5788_;
}
}
LEAN_EXPORT lean_object* l_Lean_patternWithRef_x3f(lean_object* v_p_5793_){
_start:
{
if (lean_obj_tag(v_p_5793_) == 10)
{
lean_object* v_data_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; 
v_data_5794_ = lean_ctor_get(v_p_5793_, 0);
v___x_5795_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_patternRefAnnotationKey));
v___x_5796_ = l_Lean_KVMap_find(v_data_5794_, v___x_5795_);
if (lean_obj_tag(v___x_5796_) == 1)
{
lean_object* v_val_5797_; lean_object* v___x_5799_; uint8_t v_isShared_5800_; uint8_t v_isSharedCheck_5808_; 
v_val_5797_ = lean_ctor_get(v___x_5796_, 0);
v_isSharedCheck_5808_ = !lean_is_exclusive(v___x_5796_);
if (v_isSharedCheck_5808_ == 0)
{
v___x_5799_ = v___x_5796_;
v_isShared_5800_ = v_isSharedCheck_5808_;
goto v_resetjp_5798_;
}
else
{
lean_inc(v_val_5797_);
lean_dec(v___x_5796_);
v___x_5799_ = lean_box(0);
v_isShared_5800_ = v_isSharedCheck_5808_;
goto v_resetjp_5798_;
}
v_resetjp_5798_:
{
if (lean_obj_tag(v_val_5797_) == 5)
{
lean_object* v_v_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___x_5805_; 
v_v_5801_ = lean_ctor_get(v_val_5797_, 0);
lean_inc(v_v_5801_);
lean_dec_ref_known(v_val_5797_, 1);
v___x_5802_ = l_Lean_Expr_mdataExpr_x21(v_p_5793_);
v___x_5803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5803_, 0, v_v_5801_);
lean_ctor_set(v___x_5803_, 1, v___x_5802_);
if (v_isShared_5800_ == 0)
{
lean_ctor_set(v___x_5799_, 0, v___x_5803_);
v___x_5805_ = v___x_5799_;
goto v_reusejp_5804_;
}
else
{
lean_object* v_reuseFailAlloc_5806_; 
v_reuseFailAlloc_5806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5806_, 0, v___x_5803_);
v___x_5805_ = v_reuseFailAlloc_5806_;
goto v_reusejp_5804_;
}
v_reusejp_5804_:
{
return v___x_5805_;
}
}
else
{
lean_object* v___x_5807_; 
lean_del_object(v___x_5799_);
lean_dec(v_val_5797_);
v___x_5807_ = lean_box(0);
return v___x_5807_;
}
}
}
else
{
lean_object* v___x_5809_; 
lean_dec(v___x_5796_);
v___x_5809_ = lean_box(0);
return v___x_5809_;
}
}
else
{
lean_object* v___x_5810_; 
v___x_5810_ = lean_box(0);
return v___x_5810_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_patternWithRef_x3f___boxed(lean_object* v_p_5811_){
_start:
{
lean_object* v_res_5812_; 
v_res_5812_ = l_Lean_patternWithRef_x3f(v_p_5811_);
lean_dec_ref(v_p_5811_);
return v_res_5812_;
}
}
LEAN_EXPORT uint8_t l_Lean_isPatternWithRef(lean_object* v_p_5813_){
_start:
{
lean_object* v___x_5814_; 
v___x_5814_ = l_Lean_patternWithRef_x3f(v_p_5813_);
if (lean_obj_tag(v___x_5814_) == 0)
{
uint8_t v___x_5815_; 
v___x_5815_ = 0;
return v___x_5815_;
}
else
{
uint8_t v___x_5816_; 
lean_dec_ref_known(v___x_5814_, 1);
v___x_5816_ = 1;
return v___x_5816_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isPatternWithRef___boxed(lean_object* v_p_5817_){
_start:
{
uint8_t v_res_5818_; lean_object* v_r_5819_; 
v_res_5818_ = l_Lean_isPatternWithRef(v_p_5817_);
lean_dec_ref(v_p_5817_);
v_r_5819_ = lean_box(v_res_5818_);
return v_r_5819_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPatternWithRef(lean_object* v_p_5820_, lean_object* v_stx_5821_){
_start:
{
lean_object* v___x_5822_; 
v___x_5822_ = l_Lean_patternWithRef_x3f(v_p_5820_);
if (lean_obj_tag(v___x_5822_) == 0)
{
lean_object* v___x_5823_; lean_object* v___x_5824_; lean_object* v___x_5825_; lean_object* v___x_5826_; lean_object* v___x_5827_; 
v___x_5823_ = l_Lean_KVMap_empty;
v___x_5824_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_patternRefAnnotationKey));
v___x_5825_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_5825_, 0, v_stx_5821_);
v___x_5826_ = l_Lean_KVMap_insert(v___x_5823_, v___x_5824_, v___x_5825_);
v___x_5827_ = l_Lean_Expr_mdata___override(v___x_5826_, v_p_5820_);
return v___x_5827_;
}
else
{
lean_dec_ref_known(v___x_5822_, 1);
lean_dec(v_stx_5821_);
return v_p_5820_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_patternAnnotation_x3f(lean_object* v_e_5828_){
_start:
{
lean_object* v___x_5829_; 
v___x_5829_ = l_Lean_inaccessible_x3f(v_e_5828_);
if (lean_obj_tag(v___x_5829_) == 1)
{
return v___x_5829_;
}
else
{
lean_object* v___x_5830_; 
lean_dec(v___x_5829_);
v___x_5830_ = l_Lean_patternWithRef_x3f(v_e_5828_);
if (lean_obj_tag(v___x_5830_) == 1)
{
lean_object* v_val_5831_; lean_object* v___x_5833_; uint8_t v_isShared_5834_; uint8_t v_isSharedCheck_5839_; 
v_val_5831_ = lean_ctor_get(v___x_5830_, 0);
v_isSharedCheck_5839_ = !lean_is_exclusive(v___x_5830_);
if (v_isSharedCheck_5839_ == 0)
{
v___x_5833_ = v___x_5830_;
v_isShared_5834_ = v_isSharedCheck_5839_;
goto v_resetjp_5832_;
}
else
{
lean_inc(v_val_5831_);
lean_dec(v___x_5830_);
v___x_5833_ = lean_box(0);
v_isShared_5834_ = v_isSharedCheck_5839_;
goto v_resetjp_5832_;
}
v_resetjp_5832_:
{
lean_object* v_snd_5835_; lean_object* v___x_5837_; 
v_snd_5835_ = lean_ctor_get(v_val_5831_, 1);
lean_inc(v_snd_5835_);
lean_dec(v_val_5831_);
if (v_isShared_5834_ == 0)
{
lean_ctor_set(v___x_5833_, 0, v_snd_5835_);
v___x_5837_ = v___x_5833_;
goto v_reusejp_5836_;
}
else
{
lean_object* v_reuseFailAlloc_5838_; 
v_reuseFailAlloc_5838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5838_, 0, v_snd_5835_);
v___x_5837_ = v_reuseFailAlloc_5838_;
goto v_reusejp_5836_;
}
v_reusejp_5836_:
{
return v___x_5837_;
}
}
}
else
{
lean_object* v___x_5840_; 
lean_dec(v___x_5830_);
v___x_5840_ = lean_box(0);
return v___x_5840_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_patternAnnotation_x3f___boxed(lean_object* v_e_5841_){
_start:
{
lean_object* v_res_5842_; 
v_res_5842_ = l_Lean_patternAnnotation_x3f(v_e_5841_);
lean_dec_ref(v_e_5841_);
return v_res_5842_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLHSGoalRaw(lean_object* v_e_5846_){
_start:
{
lean_object* v___x_5847_; lean_object* v___x_5848_; 
v___x_5847_ = ((lean_object*)(l_Lean_mkLHSGoalRaw___closed__1));
v___x_5848_ = l_Lean_mkAnnotation(v___x_5847_, v_e_5846_);
return v___x_5848_;
}
}
LEAN_EXPORT lean_object* l_Lean_isLHSGoal_x3f(lean_object* v_e_5852_){
_start:
{
lean_object* v___x_5853_; lean_object* v___x_5854_; 
v___x_5853_ = ((lean_object*)(l_Lean_mkLHSGoalRaw___closed__1));
v___x_5854_ = l_Lean_annotation_x3f(v___x_5853_, v_e_5852_);
if (lean_obj_tag(v___x_5854_) == 0)
{
return v___x_5854_;
}
else
{
lean_object* v_val_5855_; lean_object* v___x_5857_; uint8_t v_isShared_5858_; uint8_t v_isSharedCheck_5868_; 
v_val_5855_ = lean_ctor_get(v___x_5854_, 0);
v_isSharedCheck_5868_ = !lean_is_exclusive(v___x_5854_);
if (v_isSharedCheck_5868_ == 0)
{
v___x_5857_ = v___x_5854_;
v_isShared_5858_ = v_isSharedCheck_5868_;
goto v_resetjp_5856_;
}
else
{
lean_inc(v_val_5855_);
lean_dec(v___x_5854_);
v___x_5857_ = lean_box(0);
v_isShared_5858_ = v_isSharedCheck_5868_;
goto v_resetjp_5856_;
}
v_resetjp_5856_:
{
lean_object* v___x_5859_; lean_object* v___x_5860_; uint8_t v___x_5861_; 
v___x_5859_ = ((lean_object*)(l_Lean_isLHSGoal_x3f___closed__1));
v___x_5860_ = lean_unsigned_to_nat(3u);
v___x_5861_ = l_Lean_Expr_isAppOfArity(v_val_5855_, v___x_5859_, v___x_5860_);
if (v___x_5861_ == 0)
{
lean_object* v___x_5862_; 
lean_del_object(v___x_5857_);
lean_dec(v_val_5855_);
v___x_5862_ = lean_box(0);
return v___x_5862_;
}
else
{
lean_object* v___x_5863_; lean_object* v___x_5864_; lean_object* v___x_5866_; 
v___x_5863_ = l_Lean_Expr_appFn_x21(v_val_5855_);
lean_dec(v_val_5855_);
v___x_5864_ = l_Lean_Expr_appArg_x21(v___x_5863_);
lean_dec_ref(v___x_5863_);
if (v_isShared_5858_ == 0)
{
lean_ctor_set(v___x_5857_, 0, v___x_5864_);
v___x_5866_ = v___x_5857_;
goto v_reusejp_5865_;
}
else
{
lean_object* v_reuseFailAlloc_5867_; 
v_reuseFailAlloc_5867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5867_, 0, v___x_5864_);
v___x_5866_ = v_reuseFailAlloc_5867_;
goto v_reusejp_5865_;
}
v_reusejp_5865_:
{
return v___x_5866_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isLHSGoal_x3f___boxed(lean_object* v_e_5869_){
_start:
{
lean_object* v_res_5870_; 
v_res_5870_ = l_Lean_isLHSGoal_x3f(v_e_5869_);
lean_dec_ref(v_e_5869_);
return v_res_5870_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___redArg___lam__0(lean_object* v_toPure_5871_, lean_object* v_____do__lift_5872_){
_start:
{
lean_object* v___x_5873_; 
v___x_5873_ = lean_apply_2(v_toPure_5871_, lean_box(0), v_____do__lift_5872_);
return v___x_5873_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___redArg(lean_object* v_inst_5874_, lean_object* v_inst_5875_){
_start:
{
lean_object* v_toApplicative_5876_; lean_object* v_toBind_5877_; lean_object* v_toPure_5878_; lean_object* v___x_5879_; lean_object* v___f_5880_; lean_object* v___x_5881_; 
v_toApplicative_5876_ = lean_ctor_get(v_inst_5874_, 0);
v_toBind_5877_ = lean_ctor_get(v_inst_5874_, 1);
lean_inc(v_toBind_5877_);
v_toPure_5878_ = lean_ctor_get(v_toApplicative_5876_, 1);
lean_inc(v_toPure_5878_);
v___x_5879_ = l_Lean_mkFreshId___redArg(v_inst_5874_, v_inst_5875_);
v___f_5880_ = lean_alloc_closure((void*)(l_Lean_mkFreshFVarId___redArg___lam__0), 2, 1);
lean_closure_set(v___f_5880_, 0, v_toPure_5878_);
v___x_5881_ = lean_apply_4(v_toBind_5877_, lean_box(0), lean_box(0), v___x_5879_, v___f_5880_);
return v___x_5881_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId(lean_object* v_m_5882_, lean_object* v_inst_5883_, lean_object* v_inst_5884_){
_start:
{
lean_object* v___x_5885_; 
v___x_5885_ = l_Lean_mkFreshFVarId___redArg(v_inst_5883_, v_inst_5884_);
return v___x_5885_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshMVarId___redArg(lean_object* v_inst_5886_, lean_object* v_inst_5887_){
_start:
{
lean_object* v_toApplicative_5888_; lean_object* v_toBind_5889_; lean_object* v_toPure_5890_; lean_object* v___x_5891_; lean_object* v___f_5892_; lean_object* v___x_5893_; 
v_toApplicative_5888_ = lean_ctor_get(v_inst_5886_, 0);
v_toBind_5889_ = lean_ctor_get(v_inst_5886_, 1);
lean_inc(v_toBind_5889_);
v_toPure_5890_ = lean_ctor_get(v_toApplicative_5888_, 1);
lean_inc(v_toPure_5890_);
v___x_5891_ = l_Lean_mkFreshId___redArg(v_inst_5886_, v_inst_5887_);
v___f_5892_ = lean_alloc_closure((void*)(l_Lean_mkFreshFVarId___redArg___lam__0), 2, 1);
lean_closure_set(v___f_5892_, 0, v_toPure_5890_);
v___x_5893_ = lean_apply_4(v_toBind_5889_, lean_box(0), lean_box(0), v___x_5891_, v___f_5892_);
return v___x_5893_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshMVarId(lean_object* v_m_5894_, lean_object* v_inst_5895_, lean_object* v_inst_5896_){
_start:
{
lean_object* v___x_5897_; 
v___x_5897_ = l_Lean_mkFreshMVarId___redArg(v_inst_5895_, v_inst_5896_);
return v___x_5897_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshLMVarId___redArg(lean_object* v_inst_5898_, lean_object* v_inst_5899_){
_start:
{
lean_object* v_toApplicative_5900_; lean_object* v_toBind_5901_; lean_object* v_toPure_5902_; lean_object* v___x_5903_; lean_object* v___f_5904_; lean_object* v___x_5905_; 
v_toApplicative_5900_ = lean_ctor_get(v_inst_5898_, 0);
v_toBind_5901_ = lean_ctor_get(v_inst_5898_, 1);
lean_inc(v_toBind_5901_);
v_toPure_5902_ = lean_ctor_get(v_toApplicative_5900_, 1);
lean_inc(v_toPure_5902_);
v___x_5903_ = l_Lean_mkFreshId___redArg(v_inst_5898_, v_inst_5899_);
v___f_5904_ = lean_alloc_closure((void*)(l_Lean_mkFreshFVarId___redArg___lam__0), 2, 1);
lean_closure_set(v___f_5904_, 0, v_toPure_5902_);
v___x_5905_ = lean_apply_4(v_toBind_5901_, lean_box(0), lean_box(0), v___x_5903_, v___f_5904_);
return v___x_5905_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshLMVarId(lean_object* v_m_5906_, lean_object* v_inst_5907_, lean_object* v_inst_5908_){
_start:
{
lean_object* v___x_5909_; 
v___x_5909_ = l_Lean_mkFreshLMVarId___redArg(v_inst_5907_, v_inst_5908_);
return v___x_5909_;
}
}
static lean_object* _init_l_Lean_mkNot___closed__2(void){
_start:
{
lean_object* v___x_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; 
v___x_5913_ = lean_box(0);
v___x_5914_ = ((lean_object*)(l_Lean_mkNot___closed__1));
v___x_5915_ = l_Lean_Expr_const___override(v___x_5914_, v___x_5913_);
return v___x_5915_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNot(lean_object* v_p_5916_){
_start:
{
lean_object* v___x_5917_; lean_object* v___x_5918_; 
v___x_5917_ = lean_obj_once(&l_Lean_mkNot___closed__2, &l_Lean_mkNot___closed__2_once, _init_l_Lean_mkNot___closed__2);
v___x_5918_ = l_Lean_Expr_app___override(v___x_5917_, v_p_5916_);
return v___x_5918_;
}
}
static lean_object* _init_l_Lean_mkOr___closed__2(void){
_start:
{
lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; 
v___x_5922_ = lean_box(0);
v___x_5923_ = ((lean_object*)(l_Lean_mkOr___closed__1));
v___x_5924_ = l_Lean_Expr_const___override(v___x_5923_, v___x_5922_);
return v___x_5924_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkOr(lean_object* v_p_5925_, lean_object* v_q_5926_){
_start:
{
lean_object* v___x_5927_; lean_object* v___x_5928_; 
v___x_5927_ = lean_obj_once(&l_Lean_mkOr___closed__2, &l_Lean_mkOr___closed__2_once, _init_l_Lean_mkOr___closed__2);
v___x_5928_ = l_Lean_mkAppB(v___x_5927_, v_p_5925_, v_q_5926_);
return v___x_5928_;
}
}
static lean_object* _init_l_Lean_mkAnd___closed__2(void){
_start:
{
lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; 
v___x_5932_ = lean_box(0);
v___x_5933_ = ((lean_object*)(l_Lean_mkAnd___closed__1));
v___x_5934_ = l_Lean_Expr_const___override(v___x_5933_, v___x_5932_);
return v___x_5934_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAnd(lean_object* v_p_5935_, lean_object* v_q_5936_){
_start:
{
lean_object* v___x_5937_; lean_object* v___x_5938_; 
v___x_5937_ = lean_obj_once(&l_Lean_mkAnd___closed__2, &l_Lean_mkAnd___closed__2_once, _init_l_Lean_mkAnd___closed__2);
v___x_5938_ = l_Lean_mkAppB(v___x_5937_, v_p_5935_, v_q_5936_);
return v___x_5938_;
}
}
static lean_object* _init_l_Lean_mkAndN___closed__0(void){
_start:
{
lean_object* v___x_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; 
v___x_5939_ = lean_box(0);
v___x_5940_ = ((lean_object*)(l_Lean_Expr_isTrue___closed__1));
v___x_5941_ = l_Lean_Expr_const___override(v___x_5940_, v___x_5939_);
return v___x_5941_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAndN(lean_object* v_x_5942_){
_start:
{
if (lean_obj_tag(v_x_5942_) == 0)
{
lean_object* v___x_5943_; 
v___x_5943_ = lean_obj_once(&l_Lean_mkAndN___closed__0, &l_Lean_mkAndN___closed__0_once, _init_l_Lean_mkAndN___closed__0);
return v___x_5943_;
}
else
{
lean_object* v_tail_5944_; 
v_tail_5944_ = lean_ctor_get(v_x_5942_, 1);
if (lean_obj_tag(v_tail_5944_) == 0)
{
lean_object* v_head_5945_; 
v_head_5945_ = lean_ctor_get(v_x_5942_, 0);
lean_inc(v_head_5945_);
lean_dec_ref_known(v_x_5942_, 2);
return v_head_5945_;
}
else
{
lean_object* v_head_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; 
lean_inc(v_tail_5944_);
v_head_5946_ = lean_ctor_get(v_x_5942_, 0);
lean_inc(v_head_5946_);
lean_dec_ref_known(v_x_5942_, 2);
v___x_5947_ = l_Lean_mkAndN(v_tail_5944_);
v___x_5948_ = l_Lean_mkAnd(v_head_5946_, v___x_5947_);
return v___x_5948_;
}
}
}
}
static lean_object* _init_l_Lean_mkEM___closed__3(void){
_start:
{
lean_object* v___x_5954_; lean_object* v___x_5955_; lean_object* v___x_5956_; 
v___x_5954_ = lean_box(0);
v___x_5955_ = ((lean_object*)(l_Lean_mkEM___closed__2));
v___x_5956_ = l_Lean_Expr_const___override(v___x_5955_, v___x_5954_);
return v___x_5956_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkEM(lean_object* v_p_5957_){
_start:
{
lean_object* v___x_5958_; lean_object* v___x_5959_; 
v___x_5958_ = lean_obj_once(&l_Lean_mkEM___closed__3, &l_Lean_mkEM___closed__3_once, _init_l_Lean_mkEM___closed__3);
v___x_5959_ = l_Lean_Expr_app___override(v___x_5958_, v_p_5957_);
return v___x_5959_;
}
}
static lean_object* _init_l_Lean_mkIff___closed__2(void){
_start:
{
lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___x_5965_; 
v___x_5963_ = lean_box(0);
v___x_5964_ = ((lean_object*)(l_Lean_mkIff___closed__1));
v___x_5965_ = l_Lean_Expr_const___override(v___x_5964_, v___x_5963_);
return v___x_5965_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIff(lean_object* v_p_5966_, lean_object* v_q_5967_){
_start:
{
lean_object* v___x_5968_; lean_object* v___x_5969_; 
v___x_5968_ = lean_obj_once(&l_Lean_mkIff___closed__2, &l_Lean_mkIff___closed__2_once, _init_l_Lean_mkIff___closed__2);
v___x_5969_ = l_Lean_mkAppB(v___x_5968_, v_p_5966_, v_q_5967_);
return v___x_5969_;
}
}
static lean_object* _init_l_Lean_Nat_mkType(void){
_start:
{
lean_object* v___x_5970_; 
v___x_5970_ = lean_obj_once(&l_Lean_Literal_type___closed__2, &l_Lean_Literal_type___closed__2_once, _init_l_Lean_Literal_type___closed__2);
return v___x_5970_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstAdd___closed__2(void){
_start:
{
lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___x_5976_; 
v___x_5974_ = lean_box(0);
v___x_5975_ = ((lean_object*)(l_Lean_Nat_mkInstAdd___closed__1));
v___x_5976_ = l_Lean_Expr_const___override(v___x_5975_, v___x_5974_);
return v___x_5976_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstAdd(void){
_start:
{
lean_object* v___x_5977_; 
v___x_5977_ = lean_obj_once(&l_Lean_Nat_mkInstAdd___closed__2, &l_Lean_Nat_mkInstAdd___closed__2_once, _init_l_Lean_Nat_mkInstAdd___closed__2);
return v___x_5977_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHAdd___closed__2(void){
_start:
{
lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; 
v___x_5981_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__4, &l_Lean_mkNatLitCore___closed__4_once, _init_l_Lean_mkNatLitCore___closed__4);
v___x_5982_ = ((lean_object*)(l_Lean_Nat_mkInstHAdd___closed__1));
v___x_5983_ = l_Lean_Expr_const___override(v___x_5982_, v___x_5981_);
return v___x_5983_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHAdd___closed__3(void){
_start:
{
lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; 
v___x_5984_ = l_Lean_Nat_mkInstAdd;
v___x_5985_ = l_Lean_Nat_mkType;
v___x_5986_ = lean_obj_once(&l_Lean_Nat_mkInstHAdd___closed__2, &l_Lean_Nat_mkInstHAdd___closed__2_once, _init_l_Lean_Nat_mkInstHAdd___closed__2);
v___x_5987_ = l_Lean_mkAppB(v___x_5986_, v___x_5985_, v___x_5984_);
return v___x_5987_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHAdd(void){
_start:
{
lean_object* v___x_5988_; 
v___x_5988_ = lean_obj_once(&l_Lean_Nat_mkInstHAdd___closed__3, &l_Lean_Nat_mkInstHAdd___closed__3_once, _init_l_Lean_Nat_mkInstHAdd___closed__3);
return v___x_5988_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstSub___closed__2(void){
_start:
{
lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___x_5994_; 
v___x_5992_ = lean_box(0);
v___x_5993_ = ((lean_object*)(l_Lean_Nat_mkInstSub___closed__1));
v___x_5994_ = l_Lean_Expr_const___override(v___x_5993_, v___x_5992_);
return v___x_5994_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstSub(void){
_start:
{
lean_object* v___x_5995_; 
v___x_5995_ = lean_obj_once(&l_Lean_Nat_mkInstSub___closed__2, &l_Lean_Nat_mkInstSub___closed__2_once, _init_l_Lean_Nat_mkInstSub___closed__2);
return v___x_5995_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHSub___closed__2(void){
_start:
{
lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; 
v___x_5999_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__4, &l_Lean_mkNatLitCore___closed__4_once, _init_l_Lean_mkNatLitCore___closed__4);
v___x_6000_ = ((lean_object*)(l_Lean_Nat_mkInstHSub___closed__1));
v___x_6001_ = l_Lean_Expr_const___override(v___x_6000_, v___x_5999_);
return v___x_6001_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHSub___closed__3(void){
_start:
{
lean_object* v___x_6002_; lean_object* v___x_6003_; lean_object* v___x_6004_; lean_object* v___x_6005_; 
v___x_6002_ = l_Lean_Nat_mkInstSub;
v___x_6003_ = l_Lean_Nat_mkType;
v___x_6004_ = lean_obj_once(&l_Lean_Nat_mkInstHSub___closed__2, &l_Lean_Nat_mkInstHSub___closed__2_once, _init_l_Lean_Nat_mkInstHSub___closed__2);
v___x_6005_ = l_Lean_mkAppB(v___x_6004_, v___x_6003_, v___x_6002_);
return v___x_6005_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHSub(void){
_start:
{
lean_object* v___x_6006_; 
v___x_6006_ = lean_obj_once(&l_Lean_Nat_mkInstHSub___closed__3, &l_Lean_Nat_mkInstHSub___closed__3_once, _init_l_Lean_Nat_mkInstHSub___closed__3);
return v___x_6006_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstMul___closed__2(void){
_start:
{
lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; 
v___x_6010_ = lean_box(0);
v___x_6011_ = ((lean_object*)(l_Lean_Nat_mkInstMul___closed__1));
v___x_6012_ = l_Lean_Expr_const___override(v___x_6011_, v___x_6010_);
return v___x_6012_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstMul(void){
_start:
{
lean_object* v___x_6013_; 
v___x_6013_ = lean_obj_once(&l_Lean_Nat_mkInstMul___closed__2, &l_Lean_Nat_mkInstMul___closed__2_once, _init_l_Lean_Nat_mkInstMul___closed__2);
return v___x_6013_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHMul___closed__2(void){
_start:
{
lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; 
v___x_6017_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__4, &l_Lean_mkNatLitCore___closed__4_once, _init_l_Lean_mkNatLitCore___closed__4);
v___x_6018_ = ((lean_object*)(l_Lean_Nat_mkInstHMul___closed__1));
v___x_6019_ = l_Lean_Expr_const___override(v___x_6018_, v___x_6017_);
return v___x_6019_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHMul___closed__3(void){
_start:
{
lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; 
v___x_6020_ = l_Lean_Nat_mkInstMul;
v___x_6021_ = l_Lean_Nat_mkType;
v___x_6022_ = lean_obj_once(&l_Lean_Nat_mkInstHMul___closed__2, &l_Lean_Nat_mkInstHMul___closed__2_once, _init_l_Lean_Nat_mkInstHMul___closed__2);
v___x_6023_ = l_Lean_mkAppB(v___x_6022_, v___x_6021_, v___x_6020_);
return v___x_6023_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHMul(void){
_start:
{
lean_object* v___x_6024_; 
v___x_6024_ = lean_obj_once(&l_Lean_Nat_mkInstHMul___closed__3, &l_Lean_Nat_mkInstHMul___closed__3_once, _init_l_Lean_Nat_mkInstHMul___closed__3);
return v___x_6024_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstDiv___closed__2(void){
_start:
{
lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; 
v___x_6029_ = lean_box(0);
v___x_6030_ = ((lean_object*)(l_Lean_Nat_mkInstDiv___closed__1));
v___x_6031_ = l_Lean_Expr_const___override(v___x_6030_, v___x_6029_);
return v___x_6031_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstDiv(void){
_start:
{
lean_object* v___x_6032_; 
v___x_6032_ = lean_obj_once(&l_Lean_Nat_mkInstDiv___closed__2, &l_Lean_Nat_mkInstDiv___closed__2_once, _init_l_Lean_Nat_mkInstDiv___closed__2);
return v___x_6032_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHDiv___closed__2(void){
_start:
{
lean_object* v___x_6036_; lean_object* v___x_6037_; lean_object* v___x_6038_; 
v___x_6036_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__4, &l_Lean_mkNatLitCore___closed__4_once, _init_l_Lean_mkNatLitCore___closed__4);
v___x_6037_ = ((lean_object*)(l_Lean_Nat_mkInstHDiv___closed__1));
v___x_6038_ = l_Lean_Expr_const___override(v___x_6037_, v___x_6036_);
return v___x_6038_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHDiv___closed__3(void){
_start:
{
lean_object* v___x_6039_; lean_object* v___x_6040_; lean_object* v___x_6041_; lean_object* v___x_6042_; 
v___x_6039_ = l_Lean_Nat_mkInstDiv;
v___x_6040_ = l_Lean_Nat_mkType;
v___x_6041_ = lean_obj_once(&l_Lean_Nat_mkInstHDiv___closed__2, &l_Lean_Nat_mkInstHDiv___closed__2_once, _init_l_Lean_Nat_mkInstHDiv___closed__2);
v___x_6042_ = l_Lean_mkAppB(v___x_6041_, v___x_6040_, v___x_6039_);
return v___x_6042_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHDiv(void){
_start:
{
lean_object* v___x_6043_; 
v___x_6043_ = lean_obj_once(&l_Lean_Nat_mkInstHDiv___closed__3, &l_Lean_Nat_mkInstHDiv___closed__3_once, _init_l_Lean_Nat_mkInstHDiv___closed__3);
return v___x_6043_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstMod___closed__2(void){
_start:
{
lean_object* v___x_6048_; lean_object* v___x_6049_; lean_object* v___x_6050_; 
v___x_6048_ = lean_box(0);
v___x_6049_ = ((lean_object*)(l_Lean_Nat_mkInstMod___closed__1));
v___x_6050_ = l_Lean_Expr_const___override(v___x_6049_, v___x_6048_);
return v___x_6050_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstMod(void){
_start:
{
lean_object* v___x_6051_; 
v___x_6051_ = lean_obj_once(&l_Lean_Nat_mkInstMod___closed__2, &l_Lean_Nat_mkInstMod___closed__2_once, _init_l_Lean_Nat_mkInstMod___closed__2);
return v___x_6051_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHMod___closed__2(void){
_start:
{
lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; 
v___x_6055_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__4, &l_Lean_mkNatLitCore___closed__4_once, _init_l_Lean_mkNatLitCore___closed__4);
v___x_6056_ = ((lean_object*)(l_Lean_Nat_mkInstHMod___closed__1));
v___x_6057_ = l_Lean_Expr_const___override(v___x_6056_, v___x_6055_);
return v___x_6057_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHMod___closed__3(void){
_start:
{
lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; 
v___x_6058_ = l_Lean_Nat_mkInstMod;
v___x_6059_ = l_Lean_Nat_mkType;
v___x_6060_ = lean_obj_once(&l_Lean_Nat_mkInstHMod___closed__2, &l_Lean_Nat_mkInstHMod___closed__2_once, _init_l_Lean_Nat_mkInstHMod___closed__2);
v___x_6061_ = l_Lean_mkAppB(v___x_6060_, v___x_6059_, v___x_6058_);
return v___x_6061_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHMod(void){
_start:
{
lean_object* v___x_6062_; 
v___x_6062_ = lean_obj_once(&l_Lean_Nat_mkInstHMod___closed__3, &l_Lean_Nat_mkInstHMod___closed__3_once, _init_l_Lean_Nat_mkInstHMod___closed__3);
return v___x_6062_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstNatPow___closed__2(void){
_start:
{
lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; 
v___x_6066_ = lean_box(0);
v___x_6067_ = ((lean_object*)(l_Lean_Nat_mkInstNatPow___closed__1));
v___x_6068_ = l_Lean_Expr_const___override(v___x_6067_, v___x_6066_);
return v___x_6068_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstNatPow(void){
_start:
{
lean_object* v___x_6069_; 
v___x_6069_ = lean_obj_once(&l_Lean_Nat_mkInstNatPow___closed__2, &l_Lean_Nat_mkInstNatPow___closed__2_once, _init_l_Lean_Nat_mkInstNatPow___closed__2);
return v___x_6069_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstPow___closed__2(void){
_start:
{
lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; 
v___x_6073_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__4, &l_Lean_mkNatLitCore___closed__4_once, _init_l_Lean_mkNatLitCore___closed__4);
v___x_6074_ = ((lean_object*)(l_Lean_Nat_mkInstPow___closed__1));
v___x_6075_ = l_Lean_Expr_const___override(v___x_6074_, v___x_6073_);
return v___x_6075_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstPow___closed__3(void){
_start:
{
lean_object* v___x_6076_; lean_object* v___x_6077_; lean_object* v___x_6078_; lean_object* v___x_6079_; 
v___x_6076_ = l_Lean_Nat_mkInstNatPow;
v___x_6077_ = l_Lean_Nat_mkType;
v___x_6078_ = lean_obj_once(&l_Lean_Nat_mkInstPow___closed__2, &l_Lean_Nat_mkInstPow___closed__2_once, _init_l_Lean_Nat_mkInstPow___closed__2);
v___x_6079_ = l_Lean_mkAppB(v___x_6078_, v___x_6077_, v___x_6076_);
return v___x_6079_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstPow(void){
_start:
{
lean_object* v___x_6080_; 
v___x_6080_ = lean_obj_once(&l_Lean_Nat_mkInstPow___closed__3, &l_Lean_Nat_mkInstPow___closed__3_once, _init_l_Lean_Nat_mkInstPow___closed__3);
return v___x_6080_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHPow___closed__2(void){
_start:
{
lean_object* v___x_6084_; lean_object* v___x_6085_; lean_object* v___x_6086_; 
v___x_6084_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__4, &l_Lean_mkNatLitCore___closed__4_once, _init_l_Lean_mkNatLitCore___closed__4);
v___x_6085_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__3, &l_Lean_mkNatLitCore___closed__3_once, _init_l_Lean_mkNatLitCore___closed__3);
v___x_6086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6086_, 0, v___x_6085_);
lean_ctor_set(v___x_6086_, 1, v___x_6084_);
return v___x_6086_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHPow___closed__3(void){
_start:
{
lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; 
v___x_6087_ = lean_obj_once(&l_Lean_Nat_mkInstHPow___closed__2, &l_Lean_Nat_mkInstHPow___closed__2_once, _init_l_Lean_Nat_mkInstHPow___closed__2);
v___x_6088_ = ((lean_object*)(l_Lean_Nat_mkInstHPow___closed__1));
v___x_6089_ = l_Lean_Expr_const___override(v___x_6088_, v___x_6087_);
return v___x_6089_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHPow___closed__4(void){
_start:
{
lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; 
v___x_6090_ = l_Lean_Nat_mkInstPow;
v___x_6091_ = l_Lean_Nat_mkType;
v___x_6092_ = lean_obj_once(&l_Lean_Nat_mkInstHPow___closed__3, &l_Lean_Nat_mkInstHPow___closed__3_once, _init_l_Lean_Nat_mkInstHPow___closed__3);
v___x_6093_ = l_Lean_mkApp3(v___x_6092_, v___x_6091_, v___x_6091_, v___x_6090_);
return v___x_6093_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstHPow(void){
_start:
{
lean_object* v___x_6094_; 
v___x_6094_ = lean_obj_once(&l_Lean_Nat_mkInstHPow___closed__4, &l_Lean_Nat_mkInstHPow___closed__4_once, _init_l_Lean_Nat_mkInstHPow___closed__4);
return v___x_6094_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstLT___closed__2(void){
_start:
{
lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; 
v___x_6098_ = lean_box(0);
v___x_6099_ = ((lean_object*)(l_Lean_Nat_mkInstLT___closed__1));
v___x_6100_ = l_Lean_Expr_const___override(v___x_6099_, v___x_6098_);
return v___x_6100_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstLT(void){
_start:
{
lean_object* v___x_6101_; 
v___x_6101_ = lean_obj_once(&l_Lean_Nat_mkInstLT___closed__2, &l_Lean_Nat_mkInstLT___closed__2_once, _init_l_Lean_Nat_mkInstLT___closed__2);
return v___x_6101_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstLE___closed__2(void){
_start:
{
lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; 
v___x_6105_ = lean_box(0);
v___x_6106_ = ((lean_object*)(l_Lean_Nat_mkInstLE___closed__1));
v___x_6107_ = l_Lean_Expr_const___override(v___x_6106_, v___x_6105_);
return v___x_6107_;
}
}
static lean_object* _init_l_Lean_Nat_mkInstLE(void){
_start:
{
lean_object* v___x_6108_; 
v___x_6108_ = lean_obj_once(&l_Lean_Nat_mkInstLE___closed__2, &l_Lean_Nat_mkInstLE___closed__2_once, _init_l_Lean_Nat_mkInstLE___closed__2);
return v___x_6108_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__3(void){
_start:
{
lean_object* v___x_6114_; lean_object* v___x_6115_; 
v___x_6114_ = lean_unsigned_to_nat(0u);
v___x_6115_ = l_Lean_Level_ofNat(v___x_6114_);
return v___x_6115_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__4(void){
_start:
{
lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6118_; 
v___x_6116_ = lean_box(0);
v___x_6117_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__3, &l___private_Lean_Expr_0__Lean_natAddFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__3);
v___x_6118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6118_, 0, v___x_6117_);
lean_ctor_set(v___x_6118_, 1, v___x_6116_);
return v___x_6118_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__5(void){
_start:
{
lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; 
v___x_6119_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__4, &l___private_Lean_Expr_0__Lean_natAddFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__4);
v___x_6120_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__3, &l___private_Lean_Expr_0__Lean_natAddFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__3);
v___x_6121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6121_, 0, v___x_6120_);
lean_ctor_set(v___x_6121_, 1, v___x_6119_);
return v___x_6121_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__6(void){
_start:
{
lean_object* v___x_6122_; lean_object* v___x_6123_; lean_object* v___x_6124_; 
v___x_6122_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__5, &l___private_Lean_Expr_0__Lean_natAddFn___closed__5_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__5);
v___x_6123_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__3, &l___private_Lean_Expr_0__Lean_natAddFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__3);
v___x_6124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6124_, 0, v___x_6123_);
lean_ctor_set(v___x_6124_, 1, v___x_6122_);
return v___x_6124_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__7(void){
_start:
{
lean_object* v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; 
v___x_6125_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__6, &l___private_Lean_Expr_0__Lean_natAddFn___closed__6_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__6);
v___x_6126_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_natAddFn___closed__2));
v___x_6127_ = l_Lean_Expr_const___override(v___x_6126_, v___x_6125_);
return v___x_6127_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__8(void){
_start:
{
lean_object* v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; 
v___x_6128_ = l_Lean_Nat_mkInstHAdd;
v___x_6129_ = l_Lean_Nat_mkType;
v___x_6130_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__7, &l___private_Lean_Expr_0__Lean_natAddFn___closed__7_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__7);
v___x_6131_ = l_Lean_mkApp4(v___x_6130_, v___x_6129_, v___x_6129_, v___x_6129_, v___x_6128_);
return v___x_6131_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natAddFn(void){
_start:
{
lean_object* v___x_6132_; 
v___x_6132_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__8, &l___private_Lean_Expr_0__Lean_natAddFn___closed__8_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__8);
return v___x_6132_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natSubFn___closed__3(void){
_start:
{
lean_object* v___x_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; 
v___x_6138_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__6, &l___private_Lean_Expr_0__Lean_natAddFn___closed__6_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__6);
v___x_6139_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_natSubFn___closed__2));
v___x_6140_ = l_Lean_Expr_const___override(v___x_6139_, v___x_6138_);
return v___x_6140_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natSubFn___closed__4(void){
_start:
{
lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; 
v___x_6141_ = l_Lean_Nat_mkInstHSub;
v___x_6142_ = l_Lean_Nat_mkType;
v___x_6143_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natSubFn___closed__3, &l___private_Lean_Expr_0__Lean_natSubFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natSubFn___closed__3);
v___x_6144_ = l_Lean_mkApp4(v___x_6143_, v___x_6142_, v___x_6142_, v___x_6142_, v___x_6141_);
return v___x_6144_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natSubFn(void){
_start:
{
lean_object* v___x_6145_; 
v___x_6145_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natSubFn___closed__4, &l___private_Lean_Expr_0__Lean_natSubFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_natSubFn___closed__4);
return v___x_6145_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natMulFn___closed__3(void){
_start:
{
lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; 
v___x_6151_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__6, &l___private_Lean_Expr_0__Lean_natAddFn___closed__6_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__6);
v___x_6152_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_natMulFn___closed__2));
v___x_6153_ = l_Lean_Expr_const___override(v___x_6152_, v___x_6151_);
return v___x_6153_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natMulFn___closed__4(void){
_start:
{
lean_object* v___x_6154_; lean_object* v___x_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; 
v___x_6154_ = l_Lean_Nat_mkInstHMul;
v___x_6155_ = l_Lean_Nat_mkType;
v___x_6156_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natMulFn___closed__3, &l___private_Lean_Expr_0__Lean_natMulFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natMulFn___closed__3);
v___x_6157_ = l_Lean_mkApp4(v___x_6156_, v___x_6155_, v___x_6155_, v___x_6155_, v___x_6154_);
return v___x_6157_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natMulFn(void){
_start:
{
lean_object* v___x_6158_; 
v___x_6158_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natMulFn___closed__4, &l___private_Lean_Expr_0__Lean_natMulFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_natMulFn___closed__4);
return v___x_6158_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natPowFn___closed__3(void){
_start:
{
lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; 
v___x_6164_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__6, &l___private_Lean_Expr_0__Lean_natAddFn___closed__6_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__6);
v___x_6165_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_natPowFn___closed__2));
v___x_6166_ = l_Lean_Expr_const___override(v___x_6165_, v___x_6164_);
return v___x_6166_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natPowFn___closed__4(void){
_start:
{
lean_object* v___x_6167_; lean_object* v___x_6168_; lean_object* v___x_6169_; lean_object* v___x_6170_; 
v___x_6167_ = l_Lean_Nat_mkInstHPow;
v___x_6168_ = l_Lean_Nat_mkType;
v___x_6169_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natPowFn___closed__3, &l___private_Lean_Expr_0__Lean_natPowFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natPowFn___closed__3);
v___x_6170_ = l_Lean_mkApp4(v___x_6169_, v___x_6168_, v___x_6168_, v___x_6168_, v___x_6167_);
return v___x_6170_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natPowFn(void){
_start:
{
lean_object* v___x_6171_; 
v___x_6171_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natPowFn___closed__4, &l___private_Lean_Expr_0__Lean_natPowFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_natPowFn___closed__4);
return v___x_6171_;
}
}
static lean_object* _init_l_Lean_mkNatSucc___closed__2(void){
_start:
{
lean_object* v___x_6176_; lean_object* v___x_6177_; lean_object* v___x_6178_; 
v___x_6176_ = lean_box(0);
v___x_6177_ = ((lean_object*)(l_Lean_mkNatSucc___closed__1));
v___x_6178_ = l_Lean_Expr_const___override(v___x_6177_, v___x_6176_);
return v___x_6178_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNatSucc(lean_object* v_a_6179_){
_start:
{
lean_object* v___x_6180_; lean_object* v___x_6181_; 
v___x_6180_ = lean_obj_once(&l_Lean_mkNatSucc___closed__2, &l_Lean_mkNatSucc___closed__2_once, _init_l_Lean_mkNatSucc___closed__2);
v___x_6181_ = l_Lean_Expr_app___override(v___x_6180_, v_a_6179_);
return v___x_6181_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNatAdd(lean_object* v_a_6182_, lean_object* v_b_6183_){
_start:
{
lean_object* v___x_6184_; lean_object* v___x_6185_; 
v___x_6184_ = l___private_Lean_Expr_0__Lean_natAddFn;
v___x_6185_ = l_Lean_mkAppB(v___x_6184_, v_a_6182_, v_b_6183_);
return v___x_6185_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNatSub(lean_object* v_a_6186_, lean_object* v_b_6187_){
_start:
{
lean_object* v___x_6188_; lean_object* v___x_6189_; 
v___x_6188_ = l___private_Lean_Expr_0__Lean_natSubFn;
v___x_6189_ = l_Lean_mkAppB(v___x_6188_, v_a_6186_, v_b_6187_);
return v___x_6189_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNatMul(lean_object* v_a_6190_, lean_object* v_b_6191_){
_start:
{
lean_object* v___x_6192_; lean_object* v___x_6193_; 
v___x_6192_ = l___private_Lean_Expr_0__Lean_natMulFn;
v___x_6193_ = l_Lean_mkAppB(v___x_6192_, v_a_6190_, v_b_6191_);
return v___x_6193_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNatPow(lean_object* v_a_6194_, lean_object* v_b_6195_){
_start:
{
lean_object* v___x_6196_; lean_object* v___x_6197_; 
v___x_6196_ = l___private_Lean_Expr_0__Lean_natPowFn;
v___x_6197_ = l_Lean_mkAppB(v___x_6196_, v_a_6194_, v_b_6195_);
return v___x_6197_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natLEPred___closed__3(void){
_start:
{
lean_object* v___x_6203_; lean_object* v___x_6204_; lean_object* v___x_6205_; 
v___x_6203_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__4, &l___private_Lean_Expr_0__Lean_natAddFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__4);
v___x_6204_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_natLEPred___closed__2));
v___x_6205_ = l_Lean_Expr_const___override(v___x_6204_, v___x_6203_);
return v___x_6205_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natLEPred___closed__4(void){
_start:
{
lean_object* v___x_6206_; lean_object* v___x_6207_; lean_object* v___x_6208_; lean_object* v___x_6209_; 
v___x_6206_ = l_Lean_Nat_mkInstLE;
v___x_6207_ = l_Lean_Nat_mkType;
v___x_6208_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natLEPred___closed__3, &l___private_Lean_Expr_0__Lean_natLEPred___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natLEPred___closed__3);
v___x_6209_ = l_Lean_mkAppB(v___x_6208_, v___x_6207_, v___x_6206_);
return v___x_6209_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natLEPred(void){
_start:
{
lean_object* v___x_6210_; 
v___x_6210_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natLEPred___closed__4, &l___private_Lean_Expr_0__Lean_natLEPred___closed__4_once, _init_l___private_Lean_Expr_0__Lean_natLEPred___closed__4);
return v___x_6210_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNatLE(lean_object* v_a_6211_, lean_object* v_b_6212_){
_start:
{
lean_object* v___x_6213_; lean_object* v___x_6214_; 
v___x_6213_ = l___private_Lean_Expr_0__Lean_natLEPred;
v___x_6214_ = l_Lean_mkAppB(v___x_6213_, v_a_6211_, v_b_6212_);
return v___x_6214_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__0(void){
_start:
{
lean_object* v___x_6215_; lean_object* v___x_6216_; 
v___x_6215_ = lean_unsigned_to_nat(1u);
v___x_6216_ = l_Lean_Level_ofNat(v___x_6215_);
return v___x_6216_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__1(void){
_start:
{
lean_object* v___x_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; 
v___x_6217_ = lean_box(0);
v___x_6218_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natEqPred___closed__0, &l___private_Lean_Expr_0__Lean_natEqPred___closed__0_once, _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__0);
v___x_6219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6219_, 0, v___x_6218_);
lean_ctor_set(v___x_6219_, 1, v___x_6217_);
return v___x_6219_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__2(void){
_start:
{
lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; 
v___x_6220_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natEqPred___closed__1, &l___private_Lean_Expr_0__Lean_natEqPred___closed__1_once, _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__1);
v___x_6221_ = ((lean_object*)(l_Lean_isLHSGoal_x3f___closed__1));
v___x_6222_ = l_Lean_Expr_const___override(v___x_6221_, v___x_6220_);
return v___x_6222_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__3(void){
_start:
{
lean_object* v___x_6223_; lean_object* v___x_6224_; lean_object* v___x_6225_; 
v___x_6223_ = l_Lean_Nat_mkType;
v___x_6224_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natEqPred___closed__2, &l___private_Lean_Expr_0__Lean_natEqPred___closed__2_once, _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__2);
v___x_6225_ = l_Lean_Expr_app___override(v___x_6224_, v___x_6223_);
return v___x_6225_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_natEqPred(void){
_start:
{
lean_object* v___x_6226_; 
v___x_6226_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natEqPred___closed__3, &l___private_Lean_Expr_0__Lean_natEqPred___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__3);
return v___x_6226_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkNatEq(lean_object* v_a_6227_, lean_object* v_b_6228_){
_start:
{
lean_object* v___x_6229_; lean_object* v___x_6230_; 
v___x_6229_ = l___private_Lean_Expr_0__Lean_natEqPred;
v___x_6230_ = l_Lean_mkAppB(v___x_6229_, v_a_6227_, v_b_6228_);
return v___x_6230_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_propEq___closed__0(void){
_start:
{
lean_object* v___x_6231_; lean_object* v___x_6232_; 
v___x_6231_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__3, &l___private_Lean_Expr_0__Lean_natAddFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__3);
v___x_6232_ = l_Lean_Expr_sort___override(v___x_6231_);
return v___x_6232_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_propEq___closed__1(void){
_start:
{
lean_object* v___x_6233_; lean_object* v___x_6234_; lean_object* v___x_6235_; 
v___x_6233_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_propEq___closed__0, &l___private_Lean_Expr_0__Lean_propEq___closed__0_once, _init_l___private_Lean_Expr_0__Lean_propEq___closed__0);
v___x_6234_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natEqPred___closed__2, &l___private_Lean_Expr_0__Lean_natEqPred___closed__2_once, _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__2);
v___x_6235_ = l_Lean_Expr_app___override(v___x_6234_, v___x_6233_);
return v___x_6235_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_propEq(void){
_start:
{
lean_object* v___x_6236_; 
v___x_6236_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_propEq___closed__1, &l___private_Lean_Expr_0__Lean_propEq___closed__1_once, _init_l___private_Lean_Expr_0__Lean_propEq___closed__1);
return v___x_6236_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPropEq(lean_object* v_a_6237_, lean_object* v_b_6238_){
_start:
{
lean_object* v___x_6239_; lean_object* v___x_6240_; 
v___x_6239_ = l___private_Lean_Expr_0__Lean_propEq;
v___x_6240_ = l_Lean_mkAppB(v___x_6239_, v_a_6237_, v_b_6238_);
return v___x_6240_;
}
}
static lean_object* _init_l_Lean_Int_mkType___closed__2(void){
_start:
{
lean_object* v___x_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; 
v___x_6244_ = lean_box(0);
v___x_6245_ = ((lean_object*)(l_Lean_Int_mkType___closed__1));
v___x_6246_ = l_Lean_Expr_const___override(v___x_6245_, v___x_6244_);
return v___x_6246_;
}
}
static lean_object* _init_l_Lean_Int_mkType(void){
_start:
{
lean_object* v___x_6247_; 
v___x_6247_ = lean_obj_once(&l_Lean_Int_mkType___closed__2, &l_Lean_Int_mkType___closed__2_once, _init_l_Lean_Int_mkType___closed__2);
return v___x_6247_;
}
}
static lean_object* _init_l_Lean_Int_mkInstNeg___closed__2(void){
_start:
{
lean_object* v___x_6252_; lean_object* v___x_6253_; lean_object* v___x_6254_; 
v___x_6252_ = lean_box(0);
v___x_6253_ = ((lean_object*)(l_Lean_Int_mkInstNeg___closed__1));
v___x_6254_ = l_Lean_Expr_const___override(v___x_6253_, v___x_6252_);
return v___x_6254_;
}
}
static lean_object* _init_l_Lean_Int_mkInstNeg(void){
_start:
{
lean_object* v___x_6255_; 
v___x_6255_ = lean_obj_once(&l_Lean_Int_mkInstNeg___closed__2, &l_Lean_Int_mkInstNeg___closed__2_once, _init_l_Lean_Int_mkInstNeg___closed__2);
return v___x_6255_;
}
}
static lean_object* _init_l_Lean_Int_mkInstAdd___closed__2(void){
_start:
{
lean_object* v___x_6260_; lean_object* v___x_6261_; lean_object* v___x_6262_; 
v___x_6260_ = lean_box(0);
v___x_6261_ = ((lean_object*)(l_Lean_Int_mkInstAdd___closed__1));
v___x_6262_ = l_Lean_Expr_const___override(v___x_6261_, v___x_6260_);
return v___x_6262_;
}
}
static lean_object* _init_l_Lean_Int_mkInstAdd(void){
_start:
{
lean_object* v___x_6263_; 
v___x_6263_ = lean_obj_once(&l_Lean_Int_mkInstAdd___closed__2, &l_Lean_Int_mkInstAdd___closed__2_once, _init_l_Lean_Int_mkInstAdd___closed__2);
return v___x_6263_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHAdd___closed__0(void){
_start:
{
lean_object* v___x_6264_; lean_object* v___x_6265_; lean_object* v___x_6266_; lean_object* v___x_6267_; 
v___x_6264_ = l_Lean_Int_mkInstAdd;
v___x_6265_ = l_Lean_Int_mkType;
v___x_6266_ = lean_obj_once(&l_Lean_Nat_mkInstHAdd___closed__2, &l_Lean_Nat_mkInstHAdd___closed__2_once, _init_l_Lean_Nat_mkInstHAdd___closed__2);
v___x_6267_ = l_Lean_mkAppB(v___x_6266_, v___x_6265_, v___x_6264_);
return v___x_6267_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHAdd(void){
_start:
{
lean_object* v___x_6268_; 
v___x_6268_ = lean_obj_once(&l_Lean_Int_mkInstHAdd___closed__0, &l_Lean_Int_mkInstHAdd___closed__0_once, _init_l_Lean_Int_mkInstHAdd___closed__0);
return v___x_6268_;
}
}
static lean_object* _init_l_Lean_Int_mkInstSub___closed__2(void){
_start:
{
lean_object* v___x_6273_; lean_object* v___x_6274_; lean_object* v___x_6275_; 
v___x_6273_ = lean_box(0);
v___x_6274_ = ((lean_object*)(l_Lean_Int_mkInstSub___closed__1));
v___x_6275_ = l_Lean_Expr_const___override(v___x_6274_, v___x_6273_);
return v___x_6275_;
}
}
static lean_object* _init_l_Lean_Int_mkInstSub(void){
_start:
{
lean_object* v___x_6276_; 
v___x_6276_ = lean_obj_once(&l_Lean_Int_mkInstSub___closed__2, &l_Lean_Int_mkInstSub___closed__2_once, _init_l_Lean_Int_mkInstSub___closed__2);
return v___x_6276_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHSub___closed__0(void){
_start:
{
lean_object* v___x_6277_; lean_object* v___x_6278_; lean_object* v___x_6279_; lean_object* v___x_6280_; 
v___x_6277_ = l_Lean_Int_mkInstSub;
v___x_6278_ = l_Lean_Int_mkType;
v___x_6279_ = lean_obj_once(&l_Lean_Nat_mkInstHSub___closed__2, &l_Lean_Nat_mkInstHSub___closed__2_once, _init_l_Lean_Nat_mkInstHSub___closed__2);
v___x_6280_ = l_Lean_mkAppB(v___x_6279_, v___x_6278_, v___x_6277_);
return v___x_6280_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHSub(void){
_start:
{
lean_object* v___x_6281_; 
v___x_6281_ = lean_obj_once(&l_Lean_Int_mkInstHSub___closed__0, &l_Lean_Int_mkInstHSub___closed__0_once, _init_l_Lean_Int_mkInstHSub___closed__0);
return v___x_6281_;
}
}
static lean_object* _init_l_Lean_Int_mkInstMul___closed__2(void){
_start:
{
lean_object* v___x_6286_; lean_object* v___x_6287_; lean_object* v___x_6288_; 
v___x_6286_ = lean_box(0);
v___x_6287_ = ((lean_object*)(l_Lean_Int_mkInstMul___closed__1));
v___x_6288_ = l_Lean_Expr_const___override(v___x_6287_, v___x_6286_);
return v___x_6288_;
}
}
static lean_object* _init_l_Lean_Int_mkInstMul(void){
_start:
{
lean_object* v___x_6289_; 
v___x_6289_ = lean_obj_once(&l_Lean_Int_mkInstMul___closed__2, &l_Lean_Int_mkInstMul___closed__2_once, _init_l_Lean_Int_mkInstMul___closed__2);
return v___x_6289_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHMul___closed__0(void){
_start:
{
lean_object* v___x_6290_; lean_object* v___x_6291_; lean_object* v___x_6292_; lean_object* v___x_6293_; 
v___x_6290_ = l_Lean_Int_mkInstMul;
v___x_6291_ = l_Lean_Int_mkType;
v___x_6292_ = lean_obj_once(&l_Lean_Nat_mkInstHMul___closed__2, &l_Lean_Nat_mkInstHMul___closed__2_once, _init_l_Lean_Nat_mkInstHMul___closed__2);
v___x_6293_ = l_Lean_mkAppB(v___x_6292_, v___x_6291_, v___x_6290_);
return v___x_6293_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHMul(void){
_start:
{
lean_object* v___x_6294_; 
v___x_6294_ = lean_obj_once(&l_Lean_Int_mkInstHMul___closed__0, &l_Lean_Int_mkInstHMul___closed__0_once, _init_l_Lean_Int_mkInstHMul___closed__0);
return v___x_6294_;
}
}
static lean_object* _init_l_Lean_Int_mkInstDiv___closed__1(void){
_start:
{
lean_object* v___x_6298_; lean_object* v___x_6299_; lean_object* v___x_6300_; 
v___x_6298_ = lean_box(0);
v___x_6299_ = ((lean_object*)(l_Lean_Int_mkInstDiv___closed__0));
v___x_6300_ = l_Lean_Expr_const___override(v___x_6299_, v___x_6298_);
return v___x_6300_;
}
}
static lean_object* _init_l_Lean_Int_mkInstDiv(void){
_start:
{
lean_object* v___x_6301_; 
v___x_6301_ = lean_obj_once(&l_Lean_Int_mkInstDiv___closed__1, &l_Lean_Int_mkInstDiv___closed__1_once, _init_l_Lean_Int_mkInstDiv___closed__1);
return v___x_6301_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHDiv___closed__0(void){
_start:
{
lean_object* v___x_6302_; lean_object* v___x_6303_; lean_object* v___x_6304_; lean_object* v___x_6305_; 
v___x_6302_ = l_Lean_Int_mkInstDiv;
v___x_6303_ = l_Lean_Int_mkType;
v___x_6304_ = lean_obj_once(&l_Lean_Nat_mkInstHDiv___closed__2, &l_Lean_Nat_mkInstHDiv___closed__2_once, _init_l_Lean_Nat_mkInstHDiv___closed__2);
v___x_6305_ = l_Lean_mkAppB(v___x_6304_, v___x_6303_, v___x_6302_);
return v___x_6305_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHDiv(void){
_start:
{
lean_object* v___x_6306_; 
v___x_6306_ = lean_obj_once(&l_Lean_Int_mkInstHDiv___closed__0, &l_Lean_Int_mkInstHDiv___closed__0_once, _init_l_Lean_Int_mkInstHDiv___closed__0);
return v___x_6306_;
}
}
static lean_object* _init_l_Lean_Int_mkInstMod___closed__1(void){
_start:
{
lean_object* v___x_6310_; lean_object* v___x_6311_; lean_object* v___x_6312_; 
v___x_6310_ = lean_box(0);
v___x_6311_ = ((lean_object*)(l_Lean_Int_mkInstMod___closed__0));
v___x_6312_ = l_Lean_Expr_const___override(v___x_6311_, v___x_6310_);
return v___x_6312_;
}
}
static lean_object* _init_l_Lean_Int_mkInstMod(void){
_start:
{
lean_object* v___x_6313_; 
v___x_6313_ = lean_obj_once(&l_Lean_Int_mkInstMod___closed__1, &l_Lean_Int_mkInstMod___closed__1_once, _init_l_Lean_Int_mkInstMod___closed__1);
return v___x_6313_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHMod___closed__0(void){
_start:
{
lean_object* v___x_6314_; lean_object* v___x_6315_; lean_object* v___x_6316_; lean_object* v___x_6317_; 
v___x_6314_ = l_Lean_Int_mkInstMod;
v___x_6315_ = l_Lean_Int_mkType;
v___x_6316_ = lean_obj_once(&l_Lean_Nat_mkInstHMod___closed__2, &l_Lean_Nat_mkInstHMod___closed__2_once, _init_l_Lean_Nat_mkInstHMod___closed__2);
v___x_6317_ = l_Lean_mkAppB(v___x_6316_, v___x_6315_, v___x_6314_);
return v___x_6317_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHMod(void){
_start:
{
lean_object* v___x_6318_; 
v___x_6318_ = lean_obj_once(&l_Lean_Int_mkInstHMod___closed__0, &l_Lean_Int_mkInstHMod___closed__0_once, _init_l_Lean_Int_mkInstHMod___closed__0);
return v___x_6318_;
}
}
static lean_object* _init_l_Lean_Int_mkInstPow___closed__2(void){
_start:
{
lean_object* v___x_6323_; lean_object* v___x_6324_; lean_object* v___x_6325_; 
v___x_6323_ = lean_box(0);
v___x_6324_ = ((lean_object*)(l_Lean_Int_mkInstPow___closed__1));
v___x_6325_ = l_Lean_Expr_const___override(v___x_6324_, v___x_6323_);
return v___x_6325_;
}
}
static lean_object* _init_l_Lean_Int_mkInstPow(void){
_start:
{
lean_object* v___x_6326_; 
v___x_6326_ = lean_obj_once(&l_Lean_Int_mkInstPow___closed__2, &l_Lean_Int_mkInstPow___closed__2_once, _init_l_Lean_Int_mkInstPow___closed__2);
return v___x_6326_;
}
}
static lean_object* _init_l_Lean_Int_mkInstPowNat___closed__0(void){
_start:
{
lean_object* v___x_6327_; lean_object* v___x_6328_; lean_object* v___x_6329_; lean_object* v___x_6330_; 
v___x_6327_ = l_Lean_Int_mkInstPow;
v___x_6328_ = l_Lean_Int_mkType;
v___x_6329_ = lean_obj_once(&l_Lean_Nat_mkInstPow___closed__2, &l_Lean_Nat_mkInstPow___closed__2_once, _init_l_Lean_Nat_mkInstPow___closed__2);
v___x_6330_ = l_Lean_mkAppB(v___x_6329_, v___x_6328_, v___x_6327_);
return v___x_6330_;
}
}
static lean_object* _init_l_Lean_Int_mkInstPowNat(void){
_start:
{
lean_object* v___x_6331_; 
v___x_6331_ = lean_obj_once(&l_Lean_Int_mkInstPowNat___closed__0, &l_Lean_Int_mkInstPowNat___closed__0_once, _init_l_Lean_Int_mkInstPowNat___closed__0);
return v___x_6331_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHPow___closed__0(void){
_start:
{
lean_object* v___x_6332_; lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; 
v___x_6332_ = l_Lean_Int_mkInstPowNat;
v___x_6333_ = l_Lean_Nat_mkType;
v___x_6334_ = l_Lean_Int_mkType;
v___x_6335_ = lean_obj_once(&l_Lean_Nat_mkInstHPow___closed__3, &l_Lean_Nat_mkInstHPow___closed__3_once, _init_l_Lean_Nat_mkInstHPow___closed__3);
v___x_6336_ = l_Lean_mkApp3(v___x_6335_, v___x_6334_, v___x_6333_, v___x_6332_);
return v___x_6336_;
}
}
static lean_object* _init_l_Lean_Int_mkInstHPow(void){
_start:
{
lean_object* v___x_6337_; 
v___x_6337_ = lean_obj_once(&l_Lean_Int_mkInstHPow___closed__0, &l_Lean_Int_mkInstHPow___closed__0_once, _init_l_Lean_Int_mkInstHPow___closed__0);
return v___x_6337_;
}
}
static lean_object* _init_l_Lean_Int_mkInstLT___closed__2(void){
_start:
{
lean_object* v___x_6342_; lean_object* v___x_6343_; lean_object* v___x_6344_; 
v___x_6342_ = lean_box(0);
v___x_6343_ = ((lean_object*)(l_Lean_Int_mkInstLT___closed__1));
v___x_6344_ = l_Lean_Expr_const___override(v___x_6343_, v___x_6342_);
return v___x_6344_;
}
}
static lean_object* _init_l_Lean_Int_mkInstLT(void){
_start:
{
lean_object* v___x_6345_; 
v___x_6345_ = lean_obj_once(&l_Lean_Int_mkInstLT___closed__2, &l_Lean_Int_mkInstLT___closed__2_once, _init_l_Lean_Int_mkInstLT___closed__2);
return v___x_6345_;
}
}
static lean_object* _init_l_Lean_Int_mkInstLE___closed__2(void){
_start:
{
lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; 
v___x_6350_ = lean_box(0);
v___x_6351_ = ((lean_object*)(l_Lean_Int_mkInstLE___closed__1));
v___x_6352_ = l_Lean_Expr_const___override(v___x_6351_, v___x_6350_);
return v___x_6352_;
}
}
static lean_object* _init_l_Lean_Int_mkInstLE(void){
_start:
{
lean_object* v___x_6353_; 
v___x_6353_ = lean_obj_once(&l_Lean_Int_mkInstLE___closed__2, &l_Lean_Int_mkInstLE___closed__2_once, _init_l_Lean_Int_mkInstLE___closed__2);
return v___x_6353_;
}
}
static lean_object* _init_l_Lean_Int_mkInstNatCast___closed__2(void){
_start:
{
lean_object* v___x_6357_; lean_object* v___x_6358_; lean_object* v___x_6359_; 
v___x_6357_ = lean_box(0);
v___x_6358_ = ((lean_object*)(l_Lean_Int_mkInstNatCast___closed__1));
v___x_6359_ = l_Lean_Expr_const___override(v___x_6358_, v___x_6357_);
return v___x_6359_;
}
}
static lean_object* _init_l_Lean_Int_mkInstNatCast(void){
_start:
{
lean_object* v___x_6360_; 
v___x_6360_ = lean_obj_once(&l_Lean_Int_mkInstNatCast___closed__2, &l_Lean_Int_mkInstNatCast___closed__2_once, _init_l_Lean_Int_mkInstNatCast___closed__2);
return v___x_6360_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intNegFn___closed__0(void){
_start:
{
lean_object* v___x_6361_; lean_object* v___x_6362_; lean_object* v___x_6363_; 
v___x_6361_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__4, &l___private_Lean_Expr_0__Lean_natAddFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__4);
v___x_6362_ = ((lean_object*)(l_Lean_Expr_int_x3f___closed__2));
v___x_6363_ = l_Lean_Expr_const___override(v___x_6362_, v___x_6361_);
return v___x_6363_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intNegFn___closed__1(void){
_start:
{
lean_object* v___x_6364_; lean_object* v___x_6365_; lean_object* v___x_6366_; lean_object* v___x_6367_; 
v___x_6364_ = l_Lean_Int_mkInstNeg;
v___x_6365_ = l_Lean_Int_mkType;
v___x_6366_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intNegFn___closed__0, &l___private_Lean_Expr_0__Lean_intNegFn___closed__0_once, _init_l___private_Lean_Expr_0__Lean_intNegFn___closed__0);
v___x_6367_ = l_Lean_mkAppB(v___x_6366_, v___x_6365_, v___x_6364_);
return v___x_6367_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intNegFn(void){
_start:
{
lean_object* v___x_6368_; 
v___x_6368_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intNegFn___closed__1, &l___private_Lean_Expr_0__Lean_intNegFn___closed__1_once, _init_l___private_Lean_Expr_0__Lean_intNegFn___closed__1);
return v___x_6368_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intAddFn___closed__0(void){
_start:
{
lean_object* v___x_6369_; lean_object* v___x_6370_; lean_object* v___x_6371_; lean_object* v___x_6372_; 
v___x_6369_ = l_Lean_Int_mkInstHAdd;
v___x_6370_ = l_Lean_Int_mkType;
v___x_6371_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__7, &l___private_Lean_Expr_0__Lean_natAddFn___closed__7_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__7);
v___x_6372_ = l_Lean_mkApp4(v___x_6371_, v___x_6370_, v___x_6370_, v___x_6370_, v___x_6369_);
return v___x_6372_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intAddFn(void){
_start:
{
lean_object* v___x_6373_; 
v___x_6373_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intAddFn___closed__0, &l___private_Lean_Expr_0__Lean_intAddFn___closed__0_once, _init_l___private_Lean_Expr_0__Lean_intAddFn___closed__0);
return v___x_6373_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intSubFn___closed__0(void){
_start:
{
lean_object* v___x_6374_; lean_object* v___x_6375_; lean_object* v___x_6376_; lean_object* v___x_6377_; 
v___x_6374_ = l_Lean_Int_mkInstHSub;
v___x_6375_ = l_Lean_Int_mkType;
v___x_6376_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natSubFn___closed__3, &l___private_Lean_Expr_0__Lean_natSubFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natSubFn___closed__3);
v___x_6377_ = l_Lean_mkApp4(v___x_6376_, v___x_6375_, v___x_6375_, v___x_6375_, v___x_6374_);
return v___x_6377_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intSubFn(void){
_start:
{
lean_object* v___x_6378_; 
v___x_6378_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intSubFn___closed__0, &l___private_Lean_Expr_0__Lean_intSubFn___closed__0_once, _init_l___private_Lean_Expr_0__Lean_intSubFn___closed__0);
return v___x_6378_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intMulFn___closed__0(void){
_start:
{
lean_object* v___x_6379_; lean_object* v___x_6380_; lean_object* v___x_6381_; lean_object* v___x_6382_; 
v___x_6379_ = l_Lean_Int_mkInstHMul;
v___x_6380_ = l_Lean_Int_mkType;
v___x_6381_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natMulFn___closed__3, &l___private_Lean_Expr_0__Lean_natMulFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natMulFn___closed__3);
v___x_6382_ = l_Lean_mkApp4(v___x_6381_, v___x_6380_, v___x_6380_, v___x_6380_, v___x_6379_);
return v___x_6382_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intMulFn(void){
_start:
{
lean_object* v___x_6383_; 
v___x_6383_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intMulFn___closed__0, &l___private_Lean_Expr_0__Lean_intMulFn___closed__0_once, _init_l___private_Lean_Expr_0__Lean_intMulFn___closed__0);
return v___x_6383_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intDivFn___closed__3(void){
_start:
{
lean_object* v___x_6389_; lean_object* v___x_6390_; lean_object* v___x_6391_; 
v___x_6389_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__6, &l___private_Lean_Expr_0__Lean_natAddFn___closed__6_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__6);
v___x_6390_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_intDivFn___closed__2));
v___x_6391_ = l_Lean_Expr_const___override(v___x_6390_, v___x_6389_);
return v___x_6391_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intDivFn___closed__4(void){
_start:
{
lean_object* v___x_6392_; lean_object* v___x_6393_; lean_object* v___x_6394_; lean_object* v___x_6395_; 
v___x_6392_ = l_Lean_Int_mkInstHDiv;
v___x_6393_ = l_Lean_Int_mkType;
v___x_6394_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intDivFn___closed__3, &l___private_Lean_Expr_0__Lean_intDivFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_intDivFn___closed__3);
v___x_6395_ = l_Lean_mkApp4(v___x_6394_, v___x_6393_, v___x_6393_, v___x_6393_, v___x_6392_);
return v___x_6395_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intDivFn(void){
_start:
{
lean_object* v___x_6396_; 
v___x_6396_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intDivFn___closed__4, &l___private_Lean_Expr_0__Lean_intDivFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_intDivFn___closed__4);
return v___x_6396_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intModFn___closed__3(void){
_start:
{
lean_object* v___x_6402_; lean_object* v___x_6403_; lean_object* v___x_6404_; 
v___x_6402_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__6, &l___private_Lean_Expr_0__Lean_natAddFn___closed__6_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__6);
v___x_6403_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_intModFn___closed__2));
v___x_6404_ = l_Lean_Expr_const___override(v___x_6403_, v___x_6402_);
return v___x_6404_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intModFn___closed__4(void){
_start:
{
lean_object* v___x_6405_; lean_object* v___x_6406_; lean_object* v___x_6407_; lean_object* v___x_6408_; 
v___x_6405_ = l_Lean_Int_mkInstHMod;
v___x_6406_ = l_Lean_Int_mkType;
v___x_6407_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intModFn___closed__3, &l___private_Lean_Expr_0__Lean_intModFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_intModFn___closed__3);
v___x_6408_ = l_Lean_mkApp4(v___x_6407_, v___x_6406_, v___x_6406_, v___x_6406_, v___x_6405_);
return v___x_6408_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intModFn(void){
_start:
{
lean_object* v___x_6409_; 
v___x_6409_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intModFn___closed__4, &l___private_Lean_Expr_0__Lean_intModFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_intModFn___closed__4);
return v___x_6409_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intPowNatFn___closed__0(void){
_start:
{
lean_object* v___x_6410_; lean_object* v___x_6411_; lean_object* v___x_6412_; lean_object* v___x_6413_; lean_object* v___x_6414_; 
v___x_6410_ = l_Lean_Int_mkInstHPow;
v___x_6411_ = l_Lean_Nat_mkType;
v___x_6412_ = l_Lean_Int_mkType;
v___x_6413_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natPowFn___closed__3, &l___private_Lean_Expr_0__Lean_natPowFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natPowFn___closed__3);
v___x_6414_ = l_Lean_mkApp4(v___x_6413_, v___x_6412_, v___x_6411_, v___x_6412_, v___x_6410_);
return v___x_6414_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intPowNatFn(void){
_start:
{
lean_object* v___x_6415_; 
v___x_6415_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intPowNatFn___closed__0, &l___private_Lean_Expr_0__Lean_intPowNatFn___closed__0_once, _init_l___private_Lean_Expr_0__Lean_intPowNatFn___closed__0);
return v___x_6415_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intNatCastFn___closed__3(void){
_start:
{
lean_object* v___x_6421_; lean_object* v___x_6422_; lean_object* v___x_6423_; 
v___x_6421_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__4, &l___private_Lean_Expr_0__Lean_natAddFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__4);
v___x_6422_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_intNatCastFn___closed__2));
v___x_6423_ = l_Lean_Expr_const___override(v___x_6422_, v___x_6421_);
return v___x_6423_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intNatCastFn___closed__4(void){
_start:
{
lean_object* v___x_6424_; lean_object* v___x_6425_; lean_object* v___x_6426_; lean_object* v___x_6427_; 
v___x_6424_ = l_Lean_Int_mkInstNatCast;
v___x_6425_ = l_Lean_Int_mkType;
v___x_6426_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intNatCastFn___closed__3, &l___private_Lean_Expr_0__Lean_intNatCastFn___closed__3_once, _init_l___private_Lean_Expr_0__Lean_intNatCastFn___closed__3);
v___x_6427_ = l_Lean_mkAppB(v___x_6426_, v___x_6425_, v___x_6424_);
return v___x_6427_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intNatCastFn(void){
_start:
{
lean_object* v___x_6428_; 
v___x_6428_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intNatCastFn___closed__4, &l___private_Lean_Expr_0__Lean_intNatCastFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_intNatCastFn___closed__4);
return v___x_6428_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntNeg(lean_object* v_a_6429_){
_start:
{
lean_object* v___x_6430_; lean_object* v___x_6431_; 
v___x_6430_ = l___private_Lean_Expr_0__Lean_intNegFn;
v___x_6431_ = l_Lean_Expr_app___override(v___x_6430_, v_a_6429_);
return v___x_6431_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntAdd(lean_object* v_a_6432_, lean_object* v_b_6433_){
_start:
{
lean_object* v___x_6434_; lean_object* v___x_6435_; 
v___x_6434_ = l___private_Lean_Expr_0__Lean_intAddFn;
v___x_6435_ = l_Lean_mkAppB(v___x_6434_, v_a_6432_, v_b_6433_);
return v___x_6435_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntSub(lean_object* v_a_6436_, lean_object* v_b_6437_){
_start:
{
lean_object* v___x_6438_; lean_object* v___x_6439_; 
v___x_6438_ = l___private_Lean_Expr_0__Lean_intSubFn;
v___x_6439_ = l_Lean_mkAppB(v___x_6438_, v_a_6436_, v_b_6437_);
return v___x_6439_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntMul(lean_object* v_a_6440_, lean_object* v_b_6441_){
_start:
{
lean_object* v___x_6442_; lean_object* v___x_6443_; 
v___x_6442_ = l___private_Lean_Expr_0__Lean_intMulFn;
v___x_6443_ = l_Lean_mkAppB(v___x_6442_, v_a_6440_, v_b_6441_);
return v___x_6443_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntDiv(lean_object* v_a_6444_, lean_object* v_b_6445_){
_start:
{
lean_object* v___x_6446_; lean_object* v___x_6447_; 
v___x_6446_ = l___private_Lean_Expr_0__Lean_intDivFn;
v___x_6447_ = l_Lean_mkAppB(v___x_6446_, v_a_6444_, v_b_6445_);
return v___x_6447_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntMod(lean_object* v_a_6448_, lean_object* v_b_6449_){
_start:
{
lean_object* v___x_6450_; lean_object* v___x_6451_; 
v___x_6450_ = l___private_Lean_Expr_0__Lean_intModFn;
v___x_6451_ = l_Lean_mkAppB(v___x_6450_, v_a_6448_, v_b_6449_);
return v___x_6451_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntNatCast(lean_object* v_a_6452_){
_start:
{
lean_object* v___x_6453_; lean_object* v___x_6454_; 
v___x_6453_ = l___private_Lean_Expr_0__Lean_intNatCastFn;
v___x_6454_ = l_Lean_Expr_app___override(v___x_6453_, v_a_6452_);
return v___x_6454_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntPowNat(lean_object* v_a_6455_, lean_object* v_b_6456_){
_start:
{
lean_object* v___x_6457_; lean_object* v___x_6458_; 
v___x_6457_ = l___private_Lean_Expr_0__Lean_intPowNatFn;
v___x_6458_ = l_Lean_mkAppB(v___x_6457_, v_a_6455_, v_b_6456_);
return v___x_6458_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intLEPred___closed__0(void){
_start:
{
lean_object* v___x_6459_; lean_object* v___x_6460_; lean_object* v___x_6461_; lean_object* v___x_6462_; 
v___x_6459_ = l_Lean_Int_mkInstLE;
v___x_6460_ = l_Lean_Int_mkType;
v___x_6461_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natLEPred___closed__3, &l___private_Lean_Expr_0__Lean_natLEPred___closed__3_once, _init_l___private_Lean_Expr_0__Lean_natLEPred___closed__3);
v___x_6462_ = l_Lean_mkAppB(v___x_6461_, v___x_6460_, v___x_6459_);
return v___x_6462_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intLEPred(void){
_start:
{
lean_object* v___x_6463_; 
v___x_6463_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intLEPred___closed__0, &l___private_Lean_Expr_0__Lean_intLEPred___closed__0_once, _init_l___private_Lean_Expr_0__Lean_intLEPred___closed__0);
return v___x_6463_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntLE(lean_object* v_a_6464_, lean_object* v_b_6465_){
_start:
{
lean_object* v___x_6466_; lean_object* v___x_6467_; 
v___x_6466_ = l___private_Lean_Expr_0__Lean_intLEPred;
v___x_6467_ = l_Lean_mkAppB(v___x_6466_, v_a_6464_, v_b_6465_);
return v___x_6467_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intLTPred___closed__3(void){
_start:
{
lean_object* v___x_6473_; lean_object* v___x_6474_; lean_object* v___x_6475_; 
v___x_6473_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__4, &l___private_Lean_Expr_0__Lean_natAddFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__4);
v___x_6474_ = ((lean_object*)(l___private_Lean_Expr_0__Lean_intLTPred___closed__2));
v___x_6475_ = l_Lean_Expr_const___override(v___x_6474_, v___x_6473_);
return v___x_6475_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intLTPred___closed__4(void){
_start:
{
lean_object* v___x_6476_; lean_object* v___x_6477_; lean_object* v___x_6478_; lean_object* v___x_6479_; 
v___x_6476_ = l_Lean_Int_mkInstLT;
v___x_6477_ = l_Lean_Int_mkType;
v___x_6478_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intLTPred___closed__3, &l___private_Lean_Expr_0__Lean_intLTPred___closed__3_once, _init_l___private_Lean_Expr_0__Lean_intLTPred___closed__3);
v___x_6479_ = l_Lean_mkAppB(v___x_6478_, v___x_6477_, v___x_6476_);
return v___x_6479_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intLTPred(void){
_start:
{
lean_object* v___x_6480_; 
v___x_6480_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intLTPred___closed__4, &l___private_Lean_Expr_0__Lean_intLTPred___closed__4_once, _init_l___private_Lean_Expr_0__Lean_intLTPred___closed__4);
return v___x_6480_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntLT(lean_object* v_a_6481_, lean_object* v_b_6482_){
_start:
{
lean_object* v___x_6483_; lean_object* v___x_6484_; 
v___x_6483_ = l___private_Lean_Expr_0__Lean_intLTPred;
v___x_6484_ = l_Lean_mkAppB(v___x_6483_, v_a_6481_, v_b_6482_);
return v___x_6484_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intEqPred___closed__0(void){
_start:
{
lean_object* v___x_6485_; lean_object* v___x_6486_; lean_object* v___x_6487_; 
v___x_6485_ = l_Lean_Int_mkType;
v___x_6486_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natEqPred___closed__2, &l___private_Lean_Expr_0__Lean_natEqPred___closed__2_once, _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__2);
v___x_6487_ = l_Lean_Expr_app___override(v___x_6486_, v___x_6485_);
return v___x_6487_;
}
}
static lean_object* _init_l___private_Lean_Expr_0__Lean_intEqPred(void){
_start:
{
lean_object* v___x_6488_; 
v___x_6488_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_intEqPred___closed__0, &l___private_Lean_Expr_0__Lean_intEqPred___closed__0_once, _init_l___private_Lean_Expr_0__Lean_intEqPred___closed__0);
return v___x_6488_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntEq(lean_object* v_a_6489_, lean_object* v_b_6490_){
_start:
{
lean_object* v___x_6491_; lean_object* v___x_6492_; 
v___x_6491_ = l___private_Lean_Expr_0__Lean_intEqPred;
v___x_6492_ = l_Lean_mkAppB(v___x_6491_, v_a_6489_, v_b_6490_);
return v___x_6492_;
}
}
static lean_object* _init_l_Lean_mkIntDvd___closed__3(void){
_start:
{
lean_object* v___x_6498_; lean_object* v___x_6499_; lean_object* v___x_6500_; 
v___x_6498_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__4, &l___private_Lean_Expr_0__Lean_natAddFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__4);
v___x_6499_ = ((lean_object*)(l_Lean_mkIntDvd___closed__2));
v___x_6500_ = l_Lean_Expr_const___override(v___x_6499_, v___x_6498_);
return v___x_6500_;
}
}
static lean_object* _init_l_Lean_mkIntDvd___closed__6(void){
_start:
{
lean_object* v___x_6505_; lean_object* v___x_6506_; lean_object* v___x_6507_; 
v___x_6505_ = lean_box(0);
v___x_6506_ = ((lean_object*)(l_Lean_mkIntDvd___closed__5));
v___x_6507_ = l_Lean_Expr_const___override(v___x_6506_, v___x_6505_);
return v___x_6507_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntDvd(lean_object* v_a_6508_, lean_object* v_b_6509_){
_start:
{
lean_object* v___x_6510_; lean_object* v___x_6511_; lean_object* v___x_6512_; lean_object* v___x_6513_; 
v___x_6510_ = lean_obj_once(&l_Lean_mkIntDvd___closed__3, &l_Lean_mkIntDvd___closed__3_once, _init_l_Lean_mkIntDvd___closed__3);
v___x_6511_ = l_Lean_Int_mkType;
v___x_6512_ = lean_obj_once(&l_Lean_mkIntDvd___closed__6, &l_Lean_mkIntDvd___closed__6_once, _init_l_Lean_mkIntDvd___closed__6);
v___x_6513_ = l_Lean_mkApp4(v___x_6510_, v___x_6511_, v___x_6512_, v_a_6508_, v_b_6509_);
return v___x_6513_;
}
}
static lean_object* _init_l_Lean_mkIntLit___closed__2(void){
_start:
{
lean_object* v___x_6517_; lean_object* v___x_6518_; lean_object* v___x_6519_; 
v___x_6517_ = lean_box(0);
v___x_6518_ = ((lean_object*)(l_Lean_mkIntLit___closed__1));
v___x_6519_ = l_Lean_Expr_const___override(v___x_6518_, v___x_6517_);
return v___x_6519_;
}
}
static lean_object* _init_l_Lean_mkIntLit___closed__3(void){
_start:
{
lean_object* v___x_6520_; lean_object* v___x_6521_; 
v___x_6520_ = lean_unsigned_to_nat(0u);
v___x_6521_ = lean_nat_to_int(v___x_6520_);
return v___x_6521_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntLit(lean_object* v_n_6522_){
_start:
{
lean_object* v___x_6523_; lean_object* v_r_6524_; lean_object* v___x_6525_; lean_object* v___x_6526_; lean_object* v___x_6527_; lean_object* v___x_6528_; lean_object* v_r_6529_; lean_object* v___x_6530_; uint8_t v___x_6531_; 
v___x_6523_ = lean_nat_abs(v_n_6522_);
v_r_6524_ = l_Lean_mkRawNatLit(v___x_6523_);
v___x_6525_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__5, &l_Lean_mkNatLitCore___closed__5_once, _init_l_Lean_mkNatLitCore___closed__5);
v___x_6526_ = l_Lean_Int_mkType;
v___x_6527_ = lean_obj_once(&l_Lean_mkIntLit___closed__2, &l_Lean_mkIntLit___closed__2_once, _init_l_Lean_mkIntLit___closed__2);
lean_inc_ref(v_r_6524_);
v___x_6528_ = l_Lean_Expr_app___override(v___x_6527_, v_r_6524_);
v_r_6529_ = l_Lean_mkApp3(v___x_6525_, v___x_6526_, v_r_6524_, v___x_6528_);
v___x_6530_ = lean_obj_once(&l_Lean_mkIntLit___closed__3, &l_Lean_mkIntLit___closed__3_once, _init_l_Lean_mkIntLit___closed__3);
v___x_6531_ = lean_int_dec_lt(v_n_6522_, v___x_6530_);
if (v___x_6531_ == 0)
{
return v_r_6529_;
}
else
{
lean_object* v___x_6532_; 
v___x_6532_ = l_Lean_mkIntNeg(v_r_6529_);
return v___x_6532_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkIntLit___boxed(lean_object* v_n_6533_){
_start:
{
lean_object* v_res_6534_; 
v_res_6534_ = l_Lean_mkIntLit(v_n_6533_);
lean_dec(v_n_6533_);
return v_res_6534_;
}
}
static lean_object* _init_l_Lean_reflBoolTrue___closed__2(void){
_start:
{
lean_object* v___x_6539_; lean_object* v___x_6540_; 
v___x_6539_ = lean_obj_once(&l_Lean_mkNatLitCore___closed__3, &l_Lean_mkNatLitCore___closed__3_once, _init_l_Lean_mkNatLitCore___closed__3);
v___x_6540_ = l_Lean_Level_succ___override(v___x_6539_);
return v___x_6540_;
}
}
static lean_object* _init_l_Lean_reflBoolTrue___closed__3(void){
_start:
{
lean_object* v___x_6541_; lean_object* v___x_6542_; lean_object* v___x_6543_; 
v___x_6541_ = lean_box(0);
v___x_6542_ = lean_obj_once(&l_Lean_reflBoolTrue___closed__2, &l_Lean_reflBoolTrue___closed__2_once, _init_l_Lean_reflBoolTrue___closed__2);
v___x_6543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6543_, 0, v___x_6542_);
lean_ctor_set(v___x_6543_, 1, v___x_6541_);
return v___x_6543_;
}
}
static lean_object* _init_l_Lean_reflBoolTrue___closed__4(void){
_start:
{
lean_object* v___x_6544_; lean_object* v___x_6545_; lean_object* v___x_6546_; 
v___x_6544_ = lean_obj_once(&l_Lean_reflBoolTrue___closed__3, &l_Lean_reflBoolTrue___closed__3_once, _init_l_Lean_reflBoolTrue___closed__3);
v___x_6545_ = ((lean_object*)(l_Lean_reflBoolTrue___closed__1));
v___x_6546_ = l_Lean_Expr_const___override(v___x_6545_, v___x_6544_);
return v___x_6546_;
}
}
static lean_object* _init_l_Lean_reflBoolTrue___closed__6(void){
_start:
{
lean_object* v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; 
v___x_6549_ = lean_box(0);
v___x_6550_ = ((lean_object*)(l_Lean_reflBoolTrue___closed__5));
v___x_6551_ = l_Lean_Expr_const___override(v___x_6550_, v___x_6549_);
return v___x_6551_;
}
}
static lean_object* _init_l_Lean_reflBoolTrue___closed__7(void){
_start:
{
lean_object* v___x_6552_; lean_object* v___x_6553_; lean_object* v___x_6554_; 
v___x_6552_ = lean_box(0);
v___x_6553_ = ((lean_object*)(l_Lean_Expr_isBoolTrue___closed__0));
v___x_6554_ = l_Lean_Expr_const___override(v___x_6553_, v___x_6552_);
return v___x_6554_;
}
}
static lean_object* _init_l_Lean_reflBoolTrue___closed__8(void){
_start:
{
lean_object* v___x_6555_; lean_object* v___x_6556_; lean_object* v___x_6557_; lean_object* v___x_6558_; 
v___x_6555_ = lean_obj_once(&l_Lean_reflBoolTrue___closed__7, &l_Lean_reflBoolTrue___closed__7_once, _init_l_Lean_reflBoolTrue___closed__7);
v___x_6556_ = lean_obj_once(&l_Lean_reflBoolTrue___closed__6, &l_Lean_reflBoolTrue___closed__6_once, _init_l_Lean_reflBoolTrue___closed__6);
v___x_6557_ = lean_obj_once(&l_Lean_reflBoolTrue___closed__4, &l_Lean_reflBoolTrue___closed__4_once, _init_l_Lean_reflBoolTrue___closed__4);
v___x_6558_ = l_Lean_mkAppB(v___x_6557_, v___x_6556_, v___x_6555_);
return v___x_6558_;
}
}
static lean_object* _init_l_Lean_reflBoolTrue(void){
_start:
{
lean_object* v___x_6559_; 
v___x_6559_ = lean_obj_once(&l_Lean_reflBoolTrue___closed__8, &l_Lean_reflBoolTrue___closed__8_once, _init_l_Lean_reflBoolTrue___closed__8);
return v___x_6559_;
}
}
static lean_object* _init_l_Lean_reflBoolFalse___closed__0(void){
_start:
{
lean_object* v___x_6560_; lean_object* v___x_6561_; lean_object* v___x_6562_; 
v___x_6560_ = lean_box(0);
v___x_6561_ = ((lean_object*)(l_Lean_Expr_isBoolFalse___closed__1));
v___x_6562_ = l_Lean_Expr_const___override(v___x_6561_, v___x_6560_);
return v___x_6562_;
}
}
static lean_object* _init_l_Lean_reflBoolFalse___closed__1(void){
_start:
{
lean_object* v___x_6563_; lean_object* v___x_6564_; lean_object* v___x_6565_; lean_object* v___x_6566_; 
v___x_6563_ = lean_obj_once(&l_Lean_reflBoolFalse___closed__0, &l_Lean_reflBoolFalse___closed__0_once, _init_l_Lean_reflBoolFalse___closed__0);
v___x_6564_ = lean_obj_once(&l_Lean_reflBoolTrue___closed__6, &l_Lean_reflBoolTrue___closed__6_once, _init_l_Lean_reflBoolTrue___closed__6);
v___x_6565_ = lean_obj_once(&l_Lean_reflBoolTrue___closed__4, &l_Lean_reflBoolTrue___closed__4_once, _init_l_Lean_reflBoolTrue___closed__4);
v___x_6566_ = l_Lean_mkAppB(v___x_6565_, v___x_6564_, v___x_6563_);
return v___x_6566_;
}
}
static lean_object* _init_l_Lean_reflBoolFalse(void){
_start:
{
lean_object* v___x_6567_; 
v___x_6567_ = lean_obj_once(&l_Lean_reflBoolFalse___closed__1, &l_Lean_reflBoolFalse___closed__1_once, _init_l_Lean_reflBoolFalse___closed__1);
return v___x_6567_;
}
}
static lean_object* _init_l_Lean_eagerReflBoolTrue___closed__2(void){
_start:
{
lean_object* v___x_6571_; lean_object* v___x_6572_; lean_object* v___x_6573_; 
v___x_6571_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natAddFn___closed__4, &l___private_Lean_Expr_0__Lean_natAddFn___closed__4_once, _init_l___private_Lean_Expr_0__Lean_natAddFn___closed__4);
v___x_6572_ = ((lean_object*)(l_Lean_eagerReflBoolTrue___closed__1));
v___x_6573_ = l_Lean_Expr_const___override(v___x_6572_, v___x_6571_);
return v___x_6573_;
}
}
static lean_object* _init_l_Lean_eagerReflBoolTrue___closed__3(void){
_start:
{
lean_object* v___x_6574_; lean_object* v___x_6575_; lean_object* v___x_6576_; lean_object* v___x_6577_; 
v___x_6574_ = lean_obj_once(&l_Lean_reflBoolTrue___closed__7, &l_Lean_reflBoolTrue___closed__7_once, _init_l_Lean_reflBoolTrue___closed__7);
v___x_6575_ = lean_obj_once(&l_Lean_reflBoolTrue___closed__6, &l_Lean_reflBoolTrue___closed__6_once, _init_l_Lean_reflBoolTrue___closed__6);
v___x_6576_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natEqPred___closed__2, &l___private_Lean_Expr_0__Lean_natEqPred___closed__2_once, _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__2);
v___x_6577_ = l_Lean_mkApp3(v___x_6576_, v___x_6575_, v___x_6574_, v___x_6574_);
return v___x_6577_;
}
}
static lean_object* _init_l_Lean_eagerReflBoolTrue___closed__4(void){
_start:
{
lean_object* v___x_6578_; lean_object* v___x_6579_; lean_object* v___x_6580_; lean_object* v___x_6581_; 
v___x_6578_ = l_Lean_reflBoolTrue;
v___x_6579_ = lean_obj_once(&l_Lean_eagerReflBoolTrue___closed__3, &l_Lean_eagerReflBoolTrue___closed__3_once, _init_l_Lean_eagerReflBoolTrue___closed__3);
v___x_6580_ = lean_obj_once(&l_Lean_eagerReflBoolTrue___closed__2, &l_Lean_eagerReflBoolTrue___closed__2_once, _init_l_Lean_eagerReflBoolTrue___closed__2);
v___x_6581_ = l_Lean_mkAppB(v___x_6580_, v___x_6579_, v___x_6578_);
return v___x_6581_;
}
}
static lean_object* _init_l_Lean_eagerReflBoolTrue(void){
_start:
{
lean_object* v___x_6582_; 
v___x_6582_ = lean_obj_once(&l_Lean_eagerReflBoolTrue___closed__4, &l_Lean_eagerReflBoolTrue___closed__4_once, _init_l_Lean_eagerReflBoolTrue___closed__4);
return v___x_6582_;
}
}
static lean_object* _init_l_Lean_eagerReflBoolFalse___closed__0(void){
_start:
{
lean_object* v___x_6583_; lean_object* v___x_6584_; lean_object* v___x_6585_; lean_object* v___x_6586_; 
v___x_6583_ = lean_obj_once(&l_Lean_reflBoolFalse___closed__0, &l_Lean_reflBoolFalse___closed__0_once, _init_l_Lean_reflBoolFalse___closed__0);
v___x_6584_ = lean_obj_once(&l_Lean_reflBoolTrue___closed__6, &l_Lean_reflBoolTrue___closed__6_once, _init_l_Lean_reflBoolTrue___closed__6);
v___x_6585_ = lean_obj_once(&l___private_Lean_Expr_0__Lean_natEqPred___closed__2, &l___private_Lean_Expr_0__Lean_natEqPred___closed__2_once, _init_l___private_Lean_Expr_0__Lean_natEqPred___closed__2);
v___x_6586_ = l_Lean_mkApp3(v___x_6585_, v___x_6584_, v___x_6583_, v___x_6583_);
return v___x_6586_;
}
}
static lean_object* _init_l_Lean_eagerReflBoolFalse___closed__1(void){
_start:
{
lean_object* v___x_6587_; lean_object* v___x_6588_; lean_object* v___x_6589_; lean_object* v___x_6590_; 
v___x_6587_ = l_Lean_reflBoolFalse;
v___x_6588_ = lean_obj_once(&l_Lean_eagerReflBoolFalse___closed__0, &l_Lean_eagerReflBoolFalse___closed__0_once, _init_l_Lean_eagerReflBoolFalse___closed__0);
v___x_6589_ = lean_obj_once(&l_Lean_eagerReflBoolTrue___closed__2, &l_Lean_eagerReflBoolTrue___closed__2_once, _init_l_Lean_eagerReflBoolTrue___closed__2);
v___x_6590_ = l_Lean_mkAppB(v___x_6589_, v___x_6588_, v___x_6587_);
return v___x_6590_;
}
}
static lean_object* _init_l_Lean_eagerReflBoolFalse(void){
_start:
{
lean_object* v___x_6591_; 
v___x_6591_ = lean_obj_once(&l_Lean_eagerReflBoolFalse___closed__1, &l_Lean_eagerReflBoolFalse___closed__1_once, _init_l_Lean_eagerReflBoolFalse___closed__1);
return v___x_6591_;
}
}
static lean_object* _init_l_Lean_Expr_replaceFn___closed__2(void){
_start:
{
lean_object* v___x_6594_; lean_object* v___x_6595_; lean_object* v___x_6596_; lean_object* v___x_6597_; lean_object* v___x_6598_; lean_object* v___x_6599_; 
v___x_6594_ = ((lean_object*)(l_Lean_Expr_replaceFn___closed__1));
v___x_6595_ = lean_unsigned_to_nat(9u);
v___x_6596_ = lean_unsigned_to_nat(2441u);
v___x_6597_ = ((lean_object*)(l_Lean_Expr_replaceFn___closed__0));
v___x_6598_ = ((lean_object*)(l_Lean_Expr_appFn_x21___closed__0));
v___x_6599_ = l_mkPanicMessageWithDecl(v___x_6598_, v___x_6597_, v___x_6596_, v___x_6595_, v___x_6594_);
return v___x_6599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_replaceFn(lean_object* v_e_6600_, lean_object* v_declName_6601_){
_start:
{
switch(lean_obj_tag(v_e_6600_))
{
case 5:
{
lean_object* v_fn_6602_; lean_object* v_arg_6603_; lean_object* v___x_6604_; lean_object* v___x_6605_; 
v_fn_6602_ = lean_ctor_get(v_e_6600_, 0);
lean_inc_ref(v_fn_6602_);
v_arg_6603_ = lean_ctor_get(v_e_6600_, 1);
lean_inc_ref(v_arg_6603_);
lean_dec_ref_known(v_e_6600_, 2);
v___x_6604_ = l_Lean_Expr_replaceFn(v_fn_6602_, v_declName_6601_);
v___x_6605_ = l_Lean_Expr_app___override(v___x_6604_, v_arg_6603_);
return v___x_6605_;
}
case 4:
{
lean_object* v_us_6606_; lean_object* v___x_6607_; 
v_us_6606_ = lean_ctor_get(v_e_6600_, 1);
lean_inc(v_us_6606_);
lean_dec_ref_known(v_e_6600_, 2);
v___x_6607_ = l_Lean_Expr_const___override(v_declName_6601_, v_us_6606_);
return v___x_6607_;
}
default: 
{
lean_object* v___x_6608_; lean_object* v___x_6609_; 
lean_dec(v_declName_6601_);
lean_dec_ref(v_e_6600_);
v___x_6608_ = lean_obj_once(&l_Lean_Expr_replaceFn___closed__2, &l_Lean_Expr_replaceFn___closed__2_once, _init_l_Lean_Expr_replaceFn___closed__2);
v___x_6609_ = l_panic___at___00Lean_Expr_appFn_x21_spec__0(v___x_6608_);
return v___x_6609_;
}
}
}
}
lean_object* runtime_initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* runtime_initialize_Lean_Level(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Expr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instLTLiteral = _init_l_Lean_instLTLiteral();
lean_mark_persistent(l_Lean_instLTLiteral);
l_Lean_instInhabitedBinderInfo_default = _init_l_Lean_instInhabitedBinderInfo_default();
l_Lean_instInhabitedBinderInfo = _init_l_Lean_instInhabitedBinderInfo();
l_Lean_MData_empty = _init_l_Lean_MData_empty();
lean_mark_persistent(l_Lean_MData_empty);
l_Lean_instInhabitedData__1___aux__1 = _init_l_Lean_instInhabitedData__1___aux__1();
l_Lean_instInhabitedData__1 = _init_l_Lean_instInhabitedData__1();
l_Lean_instInhabitedFVarId_default = _init_l_Lean_instInhabitedFVarId_default();
lean_mark_persistent(l_Lean_instInhabitedFVarId_default);
l_Lean_instInhabitedFVarId = _init_l_Lean_instInhabitedFVarId();
lean_mark_persistent(l_Lean_instInhabitedFVarId);
l_Lean_instInhabitedFVarIdSet___aux__1 = _init_l_Lean_instInhabitedFVarIdSet___aux__1();
lean_mark_persistent(l_Lean_instInhabitedFVarIdSet___aux__1);
l_Lean_instInhabitedFVarIdSet = _init_l_Lean_instInhabitedFVarIdSet();
lean_mark_persistent(l_Lean_instInhabitedFVarIdSet);
l_Lean_instEmptyCollectionFVarIdSet___aux__1 = _init_l_Lean_instEmptyCollectionFVarIdSet___aux__1();
lean_mark_persistent(l_Lean_instEmptyCollectionFVarIdSet___aux__1);
l_Lean_instEmptyCollectionFVarIdSet = _init_l_Lean_instEmptyCollectionFVarIdSet();
lean_mark_persistent(l_Lean_instEmptyCollectionFVarIdSet);
l_Lean_instInhabitedFVarIdHashSet___aux__1 = _init_l_Lean_instInhabitedFVarIdHashSet___aux__1();
lean_mark_persistent(l_Lean_instInhabitedFVarIdHashSet___aux__1);
l_Lean_instInhabitedFVarIdHashSet = _init_l_Lean_instInhabitedFVarIdHashSet();
lean_mark_persistent(l_Lean_instInhabitedFVarIdHashSet);
l_Lean_instEmptyCollectionFVarIdHashSet___aux__1 = _init_l_Lean_instEmptyCollectionFVarIdHashSet___aux__1();
lean_mark_persistent(l_Lean_instEmptyCollectionFVarIdHashSet___aux__1);
l_Lean_instEmptyCollectionFVarIdHashSet = _init_l_Lean_instEmptyCollectionFVarIdHashSet();
lean_mark_persistent(l_Lean_instEmptyCollectionFVarIdHashSet);
l_Lean_instInhabitedMVarId_default = _init_l_Lean_instInhabitedMVarId_default();
lean_mark_persistent(l_Lean_instInhabitedMVarId_default);
l_Lean_instInhabitedMVarId = _init_l_Lean_instInhabitedMVarId();
lean_mark_persistent(l_Lean_instInhabitedMVarId);
l_Lean_instInhabitedMVarIdSet___aux__1 = _init_l_Lean_instInhabitedMVarIdSet___aux__1();
lean_mark_persistent(l_Lean_instInhabitedMVarIdSet___aux__1);
l_Lean_instInhabitedMVarIdSet = _init_l_Lean_instInhabitedMVarIdSet();
lean_mark_persistent(l_Lean_instInhabitedMVarIdSet);
l_Lean_instEmptyCollectionMVarIdSet___aux__1 = _init_l_Lean_instEmptyCollectionMVarIdSet___aux__1();
lean_mark_persistent(l_Lean_instEmptyCollectionMVarIdSet___aux__1);
l_Lean_instEmptyCollectionMVarIdSet = _init_l_Lean_instEmptyCollectionMVarIdSet();
lean_mark_persistent(l_Lean_instEmptyCollectionMVarIdSet);
l_Lean_instInhabitedExpr = _init_l_Lean_instInhabitedExpr();
lean_mark_persistent(l_Lean_instInhabitedExpr);
l_Lean_instInhabitedExprStructEq_default = _init_l_Lean_instInhabitedExprStructEq_default();
lean_mark_persistent(l_Lean_instInhabitedExprStructEq_default);
l_Lean_instInhabitedExprStructEq = _init_l_Lean_instInhabitedExprStructEq();
lean_mark_persistent(l_Lean_instInhabitedExprStructEq);
l_Lean_Nat_mkType = _init_l_Lean_Nat_mkType();
lean_mark_persistent(l_Lean_Nat_mkType);
l_Lean_Nat_mkInstAdd = _init_l_Lean_Nat_mkInstAdd();
lean_mark_persistent(l_Lean_Nat_mkInstAdd);
l_Lean_Nat_mkInstHAdd = _init_l_Lean_Nat_mkInstHAdd();
lean_mark_persistent(l_Lean_Nat_mkInstHAdd);
l_Lean_Nat_mkInstSub = _init_l_Lean_Nat_mkInstSub();
lean_mark_persistent(l_Lean_Nat_mkInstSub);
l_Lean_Nat_mkInstHSub = _init_l_Lean_Nat_mkInstHSub();
lean_mark_persistent(l_Lean_Nat_mkInstHSub);
l_Lean_Nat_mkInstMul = _init_l_Lean_Nat_mkInstMul();
lean_mark_persistent(l_Lean_Nat_mkInstMul);
l_Lean_Nat_mkInstHMul = _init_l_Lean_Nat_mkInstHMul();
lean_mark_persistent(l_Lean_Nat_mkInstHMul);
l_Lean_Nat_mkInstDiv = _init_l_Lean_Nat_mkInstDiv();
lean_mark_persistent(l_Lean_Nat_mkInstDiv);
l_Lean_Nat_mkInstHDiv = _init_l_Lean_Nat_mkInstHDiv();
lean_mark_persistent(l_Lean_Nat_mkInstHDiv);
l_Lean_Nat_mkInstMod = _init_l_Lean_Nat_mkInstMod();
lean_mark_persistent(l_Lean_Nat_mkInstMod);
l_Lean_Nat_mkInstHMod = _init_l_Lean_Nat_mkInstHMod();
lean_mark_persistent(l_Lean_Nat_mkInstHMod);
l_Lean_Nat_mkInstNatPow = _init_l_Lean_Nat_mkInstNatPow();
lean_mark_persistent(l_Lean_Nat_mkInstNatPow);
l_Lean_Nat_mkInstPow = _init_l_Lean_Nat_mkInstPow();
lean_mark_persistent(l_Lean_Nat_mkInstPow);
l_Lean_Nat_mkInstHPow = _init_l_Lean_Nat_mkInstHPow();
lean_mark_persistent(l_Lean_Nat_mkInstHPow);
l_Lean_Nat_mkInstLT = _init_l_Lean_Nat_mkInstLT();
lean_mark_persistent(l_Lean_Nat_mkInstLT);
l_Lean_Nat_mkInstLE = _init_l_Lean_Nat_mkInstLE();
lean_mark_persistent(l_Lean_Nat_mkInstLE);
l___private_Lean_Expr_0__Lean_natAddFn = _init_l___private_Lean_Expr_0__Lean_natAddFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_natAddFn);
l___private_Lean_Expr_0__Lean_natSubFn = _init_l___private_Lean_Expr_0__Lean_natSubFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_natSubFn);
l___private_Lean_Expr_0__Lean_natMulFn = _init_l___private_Lean_Expr_0__Lean_natMulFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_natMulFn);
l___private_Lean_Expr_0__Lean_natPowFn = _init_l___private_Lean_Expr_0__Lean_natPowFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_natPowFn);
l___private_Lean_Expr_0__Lean_natLEPred = _init_l___private_Lean_Expr_0__Lean_natLEPred();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_natLEPred);
l___private_Lean_Expr_0__Lean_natEqPred = _init_l___private_Lean_Expr_0__Lean_natEqPred();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_natEqPred);
l___private_Lean_Expr_0__Lean_propEq = _init_l___private_Lean_Expr_0__Lean_propEq();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_propEq);
l_Lean_Int_mkType = _init_l_Lean_Int_mkType();
lean_mark_persistent(l_Lean_Int_mkType);
l_Lean_Int_mkInstNeg = _init_l_Lean_Int_mkInstNeg();
lean_mark_persistent(l_Lean_Int_mkInstNeg);
l_Lean_Int_mkInstAdd = _init_l_Lean_Int_mkInstAdd();
lean_mark_persistent(l_Lean_Int_mkInstAdd);
l_Lean_Int_mkInstHAdd = _init_l_Lean_Int_mkInstHAdd();
lean_mark_persistent(l_Lean_Int_mkInstHAdd);
l_Lean_Int_mkInstSub = _init_l_Lean_Int_mkInstSub();
lean_mark_persistent(l_Lean_Int_mkInstSub);
l_Lean_Int_mkInstHSub = _init_l_Lean_Int_mkInstHSub();
lean_mark_persistent(l_Lean_Int_mkInstHSub);
l_Lean_Int_mkInstMul = _init_l_Lean_Int_mkInstMul();
lean_mark_persistent(l_Lean_Int_mkInstMul);
l_Lean_Int_mkInstHMul = _init_l_Lean_Int_mkInstHMul();
lean_mark_persistent(l_Lean_Int_mkInstHMul);
l_Lean_Int_mkInstDiv = _init_l_Lean_Int_mkInstDiv();
lean_mark_persistent(l_Lean_Int_mkInstDiv);
l_Lean_Int_mkInstHDiv = _init_l_Lean_Int_mkInstHDiv();
lean_mark_persistent(l_Lean_Int_mkInstHDiv);
l_Lean_Int_mkInstMod = _init_l_Lean_Int_mkInstMod();
lean_mark_persistent(l_Lean_Int_mkInstMod);
l_Lean_Int_mkInstHMod = _init_l_Lean_Int_mkInstHMod();
lean_mark_persistent(l_Lean_Int_mkInstHMod);
l_Lean_Int_mkInstPow = _init_l_Lean_Int_mkInstPow();
lean_mark_persistent(l_Lean_Int_mkInstPow);
l_Lean_Int_mkInstPowNat = _init_l_Lean_Int_mkInstPowNat();
lean_mark_persistent(l_Lean_Int_mkInstPowNat);
l_Lean_Int_mkInstHPow = _init_l_Lean_Int_mkInstHPow();
lean_mark_persistent(l_Lean_Int_mkInstHPow);
l_Lean_Int_mkInstLT = _init_l_Lean_Int_mkInstLT();
lean_mark_persistent(l_Lean_Int_mkInstLT);
l_Lean_Int_mkInstLE = _init_l_Lean_Int_mkInstLE();
lean_mark_persistent(l_Lean_Int_mkInstLE);
l_Lean_Int_mkInstNatCast = _init_l_Lean_Int_mkInstNatCast();
lean_mark_persistent(l_Lean_Int_mkInstNatCast);
l___private_Lean_Expr_0__Lean_intNegFn = _init_l___private_Lean_Expr_0__Lean_intNegFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_intNegFn);
l___private_Lean_Expr_0__Lean_intAddFn = _init_l___private_Lean_Expr_0__Lean_intAddFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_intAddFn);
l___private_Lean_Expr_0__Lean_intSubFn = _init_l___private_Lean_Expr_0__Lean_intSubFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_intSubFn);
l___private_Lean_Expr_0__Lean_intMulFn = _init_l___private_Lean_Expr_0__Lean_intMulFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_intMulFn);
l___private_Lean_Expr_0__Lean_intDivFn = _init_l___private_Lean_Expr_0__Lean_intDivFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_intDivFn);
l___private_Lean_Expr_0__Lean_intModFn = _init_l___private_Lean_Expr_0__Lean_intModFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_intModFn);
l___private_Lean_Expr_0__Lean_intPowNatFn = _init_l___private_Lean_Expr_0__Lean_intPowNatFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_intPowNatFn);
l___private_Lean_Expr_0__Lean_intNatCastFn = _init_l___private_Lean_Expr_0__Lean_intNatCastFn();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_intNatCastFn);
l___private_Lean_Expr_0__Lean_intLEPred = _init_l___private_Lean_Expr_0__Lean_intLEPred();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_intLEPred);
l___private_Lean_Expr_0__Lean_intLTPred = _init_l___private_Lean_Expr_0__Lean_intLTPred();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_intLTPred);
l___private_Lean_Expr_0__Lean_intEqPred = _init_l___private_Lean_Expr_0__Lean_intEqPred();
lean_mark_persistent(l___private_Lean_Expr_0__Lean_intEqPred);
l_Lean_reflBoolTrue = _init_l_Lean_reflBoolTrue();
lean_mark_persistent(l_Lean_reflBoolTrue);
l_Lean_reflBoolFalse = _init_l_Lean_reflBoolFalse();
lean_mark_persistent(l_Lean_reflBoolFalse);
l_Lean_eagerReflBoolTrue = _init_l_Lean_eagerReflBoolTrue();
lean_mark_persistent(l_Lean_eagerReflBoolTrue);
l_Lean_eagerReflBoolFalse = _init_l_Lean_eagerReflBoolFalse();
lean_mark_persistent(l_Lean_eagerReflBoolFalse);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Expr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* initialize_Lean_Level(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Expr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Expr(builtin);
}
#ifdef __cplusplus
}
#endif

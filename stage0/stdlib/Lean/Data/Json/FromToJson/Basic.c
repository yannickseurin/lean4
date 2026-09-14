// Lean compiler output
// Module: Lean.Data.Json.FromToJson.Basic
// Imports: public import Lean.Data.Json.Printer public import Init.Data.ToString.Macro import Init.Data.Array.GetLit
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
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Except_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toSlice(lean_object*);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_getArr_x3f(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_compare___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeNatLitVal_x3f(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_Json_setObjVal_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getInt_x3f(lean_object*);
lean_object* l_Lean_Json_getBool_x3f___boxed(lean_object*);
lean_object* l_Lean_JsonNumber_fromFloat_x3f(double);
lean_object* l_Lean_JsonNumber_fromInt(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
extern lean_object* l_System_Platform_numBits;
lean_object* lean_nat_pow(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
double lean_float_div(double, double);
double lean_float_negate(double);
double l_Lean_JsonNumber_toFloat(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Json_getNum_x3f(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minKey_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonJson___lam__0(lean_object*);
static const lean_closure_object l_Lean_instFromJsonJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonJson___closed__0 = (const lean_object*)&l_Lean_instFromJsonJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonJson = (const lean_object*)&l_Lean_instFromJsonJson___closed__0_value;
static const lean_closure_object l_Lean_instToJsonJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_instToJsonJson___closed__0 = (const lean_object*)&l_Lean_instToJsonJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonJson = (const lean_object*)&l_Lean_instToJsonJson___closed__0_value;
static const lean_closure_object l_Lean_instFromJsonJsonNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getNum_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonJsonNumber___closed__0 = (const lean_object*)&l_Lean_instFromJsonJsonNumber___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonJsonNumber = (const lean_object*)&l_Lean_instFromJsonJsonNumber___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonJsonNumber___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToJsonJsonNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonJsonNumber___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonJsonNumber___closed__0 = (const lean_object*)&l_Lean_instToJsonJsonNumber___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonJsonNumber = (const lean_object*)&l_Lean_instToJsonJsonNumber___closed__0_value;
static const lean_string_object l_Lean_instFromJsonUnit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "expected {} to decode Unit, got "};
static const lean_object* l_Lean_instFromJsonUnit___lam__0___closed__0 = (const lean_object*)&l_Lean_instFromJsonUnit___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonUnit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_instFromJsonUnit___lam__0___closed__1 = (const lean_object*)&l_Lean_instFromJsonUnit___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instFromJsonUnit___lam__0(lean_object*);
static const lean_closure_object l_Lean_instFromJsonUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonUnit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonUnit___closed__0 = (const lean_object*)&l_Lean_instFromJsonUnit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonUnit = (const lean_object*)&l_Lean_instFromJsonUnit___closed__0_value;
static const lean_ctor_object l_Lean_instToJsonUnit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instToJsonUnit___lam__0___closed__0 = (const lean_object*)&l_Lean_instToJsonUnit___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonUnit___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToJsonUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonUnit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonUnit___closed__0 = (const lean_object*)&l_Lean_instToJsonUnit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonUnit = (const lean_object*)&l_Lean_instToJsonUnit___closed__0_value;
static const lean_string_object l_Lean_instFromJsonEmpty___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "type Empty has no constructor to match JSON value '"};
static const lean_object* l_Lean_instFromJsonEmpty___lam__0___closed__0 = (const lean_object*)&l_Lean_instFromJsonEmpty___lam__0___closed__0_value;
static const lean_string_object l_Lean_instFromJsonEmpty___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 122, .m_capacity = 122, .m_length = 121, .m_data = "'. This occurs when deserializing a value for type Empty, e.g. at type Option Empty with code for the 'some' constructor."};
static const lean_object* l_Lean_instFromJsonEmpty___lam__0___closed__1 = (const lean_object*)&l_Lean_instFromJsonEmpty___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instFromJsonEmpty___lam__0(lean_object*);
static const lean_closure_object l_Lean_instFromJsonEmpty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonEmpty___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonEmpty___closed__0 = (const lean_object*)&l_Lean_instFromJsonEmpty___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonEmpty = (const lean_object*)&l_Lean_instFromJsonEmpty___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonEmpty___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instToJsonEmpty___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instToJsonEmpty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonEmpty___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonEmpty___closed__0 = (const lean_object*)&l_Lean_instToJsonEmpty___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonEmpty = (const lean_object*)&l_Lean_instToJsonEmpty___closed__0_value;
static const lean_closure_object l_Lean_instFromJsonBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getBool_x3f___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonBool___closed__0 = (const lean_object*)&l_Lean_instFromJsonBool___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonBool = (const lean_object*)&l_Lean_instFromJsonBool___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonBool___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instToJsonBool___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instToJsonBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonBool___closed__0 = (const lean_object*)&l_Lean_instToJsonBool___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonBool = (const lean_object*)&l_Lean_instToJsonBool___closed__0_value;
static const lean_closure_object l_Lean_instFromJsonNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getNat_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonNat___closed__0 = (const lean_object*)&l_Lean_instFromJsonNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonNat = (const lean_object*)&l_Lean_instFromJsonNat___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonNat___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToJsonNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonNat___closed__0 = (const lean_object*)&l_Lean_instToJsonNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonNat = (const lean_object*)&l_Lean_instToJsonNat___closed__0_value;
static const lean_closure_object l_Lean_instFromJsonInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getInt_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonInt___closed__0 = (const lean_object*)&l_Lean_instFromJsonInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonInt = (const lean_object*)&l_Lean_instFromJsonInt___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonInt___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToJsonInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonInt___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonInt___closed__0 = (const lean_object*)&l_Lean_instToJsonInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonInt = (const lean_object*)&l_Lean_instToJsonInt___closed__0_value;
static const lean_closure_object l_Lean_instFromJsonString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getStr_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonString___closed__0 = (const lean_object*)&l_Lean_instFromJsonString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonString = (const lean_object*)&l_Lean_instFromJsonString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonString___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToJsonString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonString___closed__0 = (const lean_object*)&l_Lean_instToJsonString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonString = (const lean_object*)&l_Lean_instToJsonString___closed__0_value;
static const lean_closure_object l_Lean_instFromJsonSlice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_toSlice, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonSlice___closed__0 = (const lean_object*)&l_Lean_instFromJsonSlice___closed__0_value;
static const lean_closure_object l_Lean_instFromJsonSlice___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instFromJsonSlice___closed__0_value)} };
static const lean_object* l_Lean_instFromJsonSlice___closed__1 = (const lean_object*)&l_Lean_instFromJsonSlice___closed__1_value;
static const lean_closure_object l_Lean_instFromJsonSlice___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instFromJsonSlice___closed__1_value),((lean_object*)&l_Lean_instFromJsonString___closed__0_value)} };
static const lean_object* l_Lean_instFromJsonSlice___closed__2 = (const lean_object*)&l_Lean_instFromJsonSlice___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonSlice = (const lean_object*)&l_Lean_instFromJsonSlice___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonSlice___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonSlice___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instToJsonSlice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonSlice___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonSlice___closed__0 = (const lean_object*)&l_Lean_instToJsonSlice___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonSlice = (const lean_object*)&l_Lean_instToJsonSlice___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instFromJsonFilePath___lam__0(lean_object*);
static const lean_closure_object l_Lean_instFromJsonFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonFilePath___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonFilePath___closed__0 = (const lean_object*)&l_Lean_instFromJsonFilePath___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonFilePath = (const lean_object*)&l_Lean_instFromJsonFilePath___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonFilePath___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToJsonFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonFilePath___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonFilePath___closed__0 = (const lean_object*)&l_Lean_instToJsonFilePath___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonFilePath = (const lean_object*)&l_Lean_instToJsonFilePath___closed__0_value;
static const lean_closure_object l_Lean_Array_fromJson_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__0_value;
static const lean_closure_object l_Lean_Array_fromJson_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__1_value;
static const lean_closure_object l_Lean_Array_fromJson_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__2___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__2 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__2_value;
static const lean_closure_object l_Lean_Array_fromJson_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__3 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__3_value;
static const lean_closure_object l_Lean_Array_fromJson_x3f___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__4 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Array_fromJson_x3f___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__4_value),((lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__0_value)}};
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__5 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__5_value;
static const lean_closure_object l_Lean_Array_fromJson_x3f___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_pure, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__6 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Array_fromJson_x3f___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__5_value),((lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__6_value),((lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__1_value),((lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__2_value),((lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__3_value)}};
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__7 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__7_value;
static const lean_closure_object l_Lean_Array_fromJson_x3f___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_bind, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__8 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Array_fromJson_x3f___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__7_value),((lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__8_value)}};
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__9 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__9_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__10 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__10_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___redArg___closed__11 = (const lean_object*)&l_Lean_Array_fromJson_x3f___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Array_toJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Array_toJson___redArg___closed__0 = (const lean_object*)&l_Lean_Array_toJson___redArg___closed__0_value;
static const lean_closure_object l_Lean_Array_toJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Array_toJson___redArg___closed__1 = (const lean_object*)&l_Lean_Array_toJson___redArg___closed__1_value;
static const lean_closure_object l_Lean_Array_toJson___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Array_toJson___redArg___closed__2 = (const lean_object*)&l_Lean_Array_toJson___redArg___closed__2_value;
static const lean_closure_object l_Lean_Array_toJson___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Array_toJson___redArg___closed__3 = (const lean_object*)&l_Lean_Array_toJson___redArg___closed__3_value;
static const lean_closure_object l_Lean_Array_toJson___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Array_toJson___redArg___closed__4 = (const lean_object*)&l_Lean_Array_toJson___redArg___closed__4_value;
static const lean_closure_object l_Lean_Array_toJson___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Array_toJson___redArg___closed__5 = (const lean_object*)&l_Lean_Array_toJson___redArg___closed__5_value;
static const lean_closure_object l_Lean_Array_toJson___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Array_toJson___redArg___closed__6 = (const lean_object*)&l_Lean_Array_toJson___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Array_toJson___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Array_toJson___redArg___closed__0_value),((lean_object*)&l_Lean_Array_toJson___redArg___closed__1_value)}};
static const lean_object* l_Lean_Array_toJson___redArg___closed__7 = (const lean_object*)&l_Lean_Array_toJson___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Array_toJson___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Array_toJson___redArg___closed__7_value),((lean_object*)&l_Lean_Array_toJson___redArg___closed__2_value),((lean_object*)&l_Lean_Array_toJson___redArg___closed__3_value),((lean_object*)&l_Lean_Array_toJson___redArg___closed__4_value),((lean_object*)&l_Lean_Array_toJson___redArg___closed__5_value)}};
static const lean_object* l_Lean_Array_toJson___redArg___closed__8 = (const lean_object*)&l_Lean_Array_toJson___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Array_toJson___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Array_toJson___redArg___closed__8_value),((lean_object*)&l_Lean_Array_toJson___redArg___closed__6_value)}};
static const lean_object* l_Lean_Array_toJson___redArg___closed__9 = (const lean_object*)&l_Lean_Array_toJson___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_fromJson_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_fromJson_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonList(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonOption(lean_object*, lean_object*);
static const lean_string_object l_Lean_Prod_fromJson_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected pair, got '"};
static const lean_object* l_Lean_Prod_fromJson_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Prod_fromJson_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Prod_toJson___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Prod_toJson(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonProd(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Name_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l_Lean_Name_fromJson_x3f___closed__0 = (const lean_object*)&l_Lean_Name_fromJson_x3f___closed__0_value;
static const lean_string_object l_Lean_Name_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "expected a `Name`, got '"};
static const lean_object* l_Lean_Name_fromJson_x3f___closed__1 = (const lean_object*)&l_Lean_Name_fromJson_x3f___closed__1_value;
static lean_once_cell_t l_Lean_Name_fromJson_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Name_fromJson_x3f___closed__2;
static lean_once_cell_t l_Lean_Name_fromJson_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Name_fromJson_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
static const lean_closure_object l_Lean_instFromJsonName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonName___closed__0 = (const lean_object*)&l_Lean_instFromJsonName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonName = (const lean_object*)&l_Lean_instFromJsonName___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonName___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToJsonName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonName___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonName___closed__0 = (const lean_object*)&l_Lean_instToJsonName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonName = (const lean_object*)&l_Lean_instToJsonName___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_NameMap_fromJson_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "expected a `NameMap`, got '"};
static const lean_object* l_Lean_NameMap_fromJson_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_NameMap_fromJson_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonNameMap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonNameMap(lean_object*, lean_object*);
static const lean_closure_object l_Lean_NameMap_toJson___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_toJson___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_NameMap_toJson___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonNameMap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonNameMap(lean_object*, lean_object*);
static const lean_string_object l_Lean_bignumFromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "expected a string-encoded number, got '"};
static const lean_object* l_Lean_bignumFromJson_x3f___closed__0 = (const lean_object*)&l_Lean_bignumFromJson_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_bignumFromJson_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_bignumToJson(lean_object*);
static lean_once_cell_t l_Lean_USize_fromJson_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_USize_fromJson_x3f___closed__0;
static const lean_string_object l_Lean_USize_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "value '"};
static const lean_object* l_Lean_USize_fromJson_x3f___closed__1 = (const lean_object*)&l_Lean_USize_fromJson_x3f___closed__1_value;
static const lean_string_object l_Lean_USize_fromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "' is too large for `USize`"};
static const lean_object* l_Lean_USize_fromJson_x3f___closed__2 = (const lean_object*)&l_Lean_USize_fromJson_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_USize_fromJson_x3f(lean_object*);
static const lean_closure_object l_Lean_instFromJsonUSize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_USize_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonUSize___closed__0 = (const lean_object*)&l_Lean_instFromJsonUSize___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonUSize = (const lean_object*)&l_Lean_instFromJsonUSize___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonUSize___lam__0(size_t);
LEAN_EXPORT lean_object* l_Lean_instToJsonUSize___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instToJsonUSize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonUSize___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonUSize___closed__0 = (const lean_object*)&l_Lean_instToJsonUSize___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonUSize = (const lean_object*)&l_Lean_instToJsonUSize___closed__0_value;
static lean_once_cell_t l_Lean_UInt64_fromJson_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_UInt64_fromJson_x3f___closed__0;
static const lean_string_object l_Lean_UInt64_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "' is too large for `UInt64`"};
static const lean_object* l_Lean_UInt64_fromJson_x3f___closed__1 = (const lean_object*)&l_Lean_UInt64_fromJson_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_UInt64_fromJson_x3f(lean_object*);
static const lean_closure_object l_Lean_instFromJsonUInt64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_UInt64_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonUInt64___closed__0 = (const lean_object*)&l_Lean_instFromJsonUInt64___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonUInt64 = (const lean_object*)&l_Lean_instFromJsonUInt64___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonUInt64___lam__0(uint64_t);
LEAN_EXPORT lean_object* l_Lean_instToJsonUInt64___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instToJsonUInt64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonUInt64___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonUInt64___closed__0 = (const lean_object*)&l_Lean_instToJsonUInt64___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonUInt64 = (const lean_object*)&l_Lean_instToJsonUInt64___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Float_toJson(double);
LEAN_EXPORT lean_object* l_Lean_Float_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_instToJsonFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Float_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonFloat___closed__0 = (const lean_object*)&l_Lean_instToJsonFloat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonFloat = (const lean_object*)&l_Lean_instToJsonFloat___closed__0_value;
static const lean_string_object l_Lean_Float_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Expected a number or a string 'Infinity', '-Infinity', 'NaN'."};
static const lean_object* l_Lean_Float_fromJson_x3f___closed__0 = (const lean_object*)&l_Lean_Float_fromJson_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Float_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Float_fromJson_x3f___closed__0_value)}};
static const lean_object* l_Lean_Float_fromJson_x3f___closed__1 = (const lean_object*)&l_Lean_Float_fromJson_x3f___closed__1_value;
static const lean_string_object l_Lean_Float_fromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Infinity"};
static const lean_object* l_Lean_Float_fromJson_x3f___closed__2 = (const lean_object*)&l_Lean_Float_fromJson_x3f___closed__2_value;
static const lean_string_object l_Lean_Float_fromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "-Infinity"};
static const lean_object* l_Lean_Float_fromJson_x3f___closed__3 = (const lean_object*)&l_Lean_Float_fromJson_x3f___closed__3_value;
static const lean_string_object l_Lean_Float_fromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "NaN"};
static const lean_object* l_Lean_Float_fromJson_x3f___closed__4 = (const lean_object*)&l_Lean_Float_fromJson_x3f___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Float_fromJson_x3f(lean_object*);
static const lean_closure_object l_Lean_instFromJsonFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Float_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonFloat___closed__0 = (const lean_object*)&l_Lean_instFromJsonFloat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonFloat = (const lean_object*)&l_Lean_instFromJsonFloat___closed__0_value;
static const lean_string_object l_Lean_Json_Structured_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "expected structured object, got '"};
static const lean_object* l_Lean_Json_Structured_fromJson_x3f___closed__0 = (const lean_object*)&l_Lean_Json_Structured_fromJson_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_Structured_fromJson_x3f(lean_object*);
static const lean_closure_object l_Lean_Json_instFromJsonStructured___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_Structured_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instFromJsonStructured___closed__0 = (const lean_object*)&l_Lean_Json_instFromJsonStructured___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instFromJsonStructured = (const lean_object*)&l_Lean_Json_instFromJsonStructured___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_Structured_toJson(lean_object*);
static const lean_closure_object l_Lean_Json_instToJsonStructured___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_Structured_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instToJsonStructured___closed__0 = (const lean_object*)&l_Lean_Json_instToJsonStructured___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instToJsonStructured = (const lean_object*)&l_Lean_Json_instToJsonStructured___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_setObjValAs_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_setObjValAs_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getTag_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Json_parseTagged_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Json_parseTagged_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_parseTagged___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "incorrect number of fields: "};
static const lean_object* l_Lean_Json_parseTagged___closed__0 = (const lean_object*)&l_Lean_Json_parseTagged___closed__0_value;
static const lean_string_object l_Lean_Json_parseTagged___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ≟ "};
static const lean_object* l_Lean_Json_parseTagged___closed__1 = (const lean_object*)&l_Lean_Json_parseTagged___closed__1_value;
static const lean_array_object l_Lean_Json_parseTagged___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Json_parseTagged___closed__2 = (const lean_object*)&l_Lean_Json_parseTagged___closed__2_value;
static const lean_string_object l_Lean_Json_parseTagged___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "incorrect tag: "};
static const lean_object* l_Lean_Json_parseTagged___closed__3 = (const lean_object*)&l_Lean_Json_parseTagged___closed__3_value;
static const lean_ctor_object l_Lean_Json_parseTagged___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_parseTagged___closed__2_value)}};
static const lean_object* l_Lean_Json_parseTagged___closed__4 = (const lean_object*)&l_Lean_Json_parseTagged___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Json_parseTagged(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_parseTagged___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_parseCtorFields_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_parseCtorFields_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_parseCtorFields(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_parseCtorFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonJson___lam__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2_, 0, v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonJsonNumber___lam__0(lean_object* v_n_9_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_10_, 0, v_n_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonUnit___lam__0(lean_object* v_x_16_){
_start:
{
if (lean_obj_tag(v_x_16_) == 5)
{
lean_object* v_kvPairs_23_; 
v_kvPairs_23_ = lean_ctor_get(v_x_16_, 0);
if (lean_obj_tag(v_kvPairs_23_) == 1)
{
lean_object* v___x_24_; 
lean_dec_ref_known(v_x_16_, 1);
v___x_24_ = ((lean_object*)(l_Lean_instFromJsonUnit___lam__0___closed__1));
return v___x_24_;
}
else
{
goto v___jp_17_;
}
}
else
{
goto v___jp_17_;
}
v___jp_17_:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_18_ = ((lean_object*)(l_Lean_instFromJsonUnit___lam__0___closed__0));
v___x_19_ = lean_unsigned_to_nat(80u);
v___x_20_ = l_Lean_Json_pretty(v_x_16_, v___x_19_);
v___x_21_ = lean_string_append(v___x_18_, v___x_20_);
lean_dec_ref(v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonUnit___lam__0(lean_object* v_x_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = ((lean_object*)(l_Lean_instToJsonUnit___lam__0___closed__0));
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonEmpty___lam__0(lean_object* v_j_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_36_ = ((lean_object*)(l_Lean_instFromJsonEmpty___lam__0___closed__0));
v___x_37_ = lean_unsigned_to_nat(80u);
v___x_38_ = l_Lean_Json_pretty(v_j_35_, v___x_37_);
v___x_39_ = lean_string_append(v___x_36_, v___x_38_);
lean_dec_ref(v___x_38_);
v___x_40_ = ((lean_object*)(l_Lean_instFromJsonEmpty___lam__0___closed__1));
v___x_41_ = lean_string_append(v___x_39_, v___x_40_);
v___x_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonEmpty___lam__0(uint8_t v_a_45_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonEmpty___lam__0___boxed(lean_object* v_a_46_){
_start:
{
uint8_t v_a_6__boxed_47_; lean_object* v_res_48_; 
v_a_6__boxed_47_ = lean_unbox(v_a_46_);
v_res_48_ = l_Lean_instToJsonEmpty___lam__0(v_a_6__boxed_47_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBool___lam__0(uint8_t v_b_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_54_, 0, v_b_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBool___lam__0___boxed(lean_object* v_b_55_){
_start:
{
uint8_t v_b_boxed_56_; lean_object* v_res_57_; 
v_b_boxed_56_ = lean_unbox(v_b_55_);
v_res_57_ = l_Lean_instToJsonBool___lam__0(v_b_boxed_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonNat___lam__0(lean_object* v_n_62_){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = l_Lean_JsonNumber_fromNat(v_n_62_);
v___x_64_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonInt___lam__0(lean_object* v_n_69_){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = l_Lean_JsonNumber_fromInt(v_n_69_);
v___x_71_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonString___lam__0(lean_object* v_s_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_77_, 0, v_s_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonSlice___lam__0(lean_object* v_s_87_){
_start:
{
lean_object* v_str_88_; lean_object* v_startInclusive_89_; lean_object* v_endExclusive_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v_str_88_ = lean_ctor_get(v_s_87_, 0);
v_startInclusive_89_ = lean_ctor_get(v_s_87_, 1);
v_endExclusive_90_ = lean_ctor_get(v_s_87_, 2);
v___x_91_ = lean_string_utf8_extract_fast(v_str_88_, v_startInclusive_89_, v_endExclusive_90_);
v___x_92_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonSlice___lam__0___boxed(lean_object* v_s_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Lean_instToJsonSlice___lam__0(v_s_93_);
lean_dec_ref(v_s_93_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonFilePath___lam__0(lean_object* v_j_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_Json_getStr_x3f(v_j_97_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_106_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_106_ == 0)
{
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_106_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_a_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_106_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_104_; 
if (v_isShared_102_ == 0)
{
v___x_104_ = v___x_101_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_a_99_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
}
else
{
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
v_a_107_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_114_ == 0)
{
v___x_109_ = v___x_98_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___x_98_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_107_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonFilePath___lam__0(lean_object* v_p_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_118_, 0, v_p_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___redArg(lean_object* v_inst_142_, lean_object* v_x_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___redArg___closed__9));
if (lean_obj_tag(v_x_143_) == 4)
{
lean_object* v_elems_145_; size_t v_sz_146_; size_t v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_elems_145_ = lean_ctor_get(v_x_143_, 0);
lean_inc_ref(v_elems_145_);
lean_dec_ref_known(v_x_143_, 1);
v_sz_146_ = lean_array_size(v_elems_145_);
v___x_147_ = ((size_t)0ULL);
v___x_148_ = l_unsafeCast___redArg(v_elems_145_);
lean_dec_ref(v_elems_145_);
v___x_149_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_144_, v_inst_142_, v_sz_146_, v___x_147_, v___x_148_);
v___x_150_ = l_unsafeCast___redArg(v___x_149_);
lean_dec(v___x_149_);
return v___x_150_;
}
else
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
lean_dec_ref(v_inst_142_);
v___x_151_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___redArg___closed__10));
v___x_152_ = lean_unsigned_to_nat(80u);
v___x_153_ = l_Lean_Json_pretty(v_x_143_, v___x_152_);
v___x_154_ = lean_string_append(v___x_151_, v___x_153_);
lean_dec_ref(v___x_153_);
v___x_155_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___redArg___closed__11));
v___x_156_ = lean_string_append(v___x_154_, v___x_155_);
v___x_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f(lean_object* v_00_u03b1_158_, lean_object* v_inst_159_, lean_object* v_x_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = l_Lean_Array_fromJson_x3f___redArg(v_inst_159_, v_x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonArray___redArg(lean_object* v_inst_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lean_alloc_closure((void*)(l_Lean_Array_fromJson_x3f), 3, 2);
lean_closure_set(v___x_163_, 0, lean_box(0));
lean_closure_set(v___x_163_, 1, v_inst_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonArray(lean_object* v_00_u03b1_164_, lean_object* v_inst_165_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_alloc_closure((void*)(l_Lean_Array_fromJson_x3f), 3, 2);
lean_closure_set(v___x_166_, 0, lean_box(0));
lean_closure_set(v___x_166_, 1, v_inst_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___redArg___lam__0(lean_object* v_inst_167_, lean_object* v_x_168_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_apply_1(v_inst_167_, v_x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___redArg(lean_object* v_inst_189_, lean_object* v_a_190_){
_start:
{
lean_object* v___f_191_; lean_object* v___x_192_; size_t v_sz_193_; size_t v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___f_191_ = lean_alloc_closure((void*)(l_Lean_Array_toJson___redArg___lam__0), 2, 1);
lean_closure_set(v___f_191_, 0, v_inst_189_);
v___x_192_ = ((lean_object*)(l_Lean_Array_toJson___redArg___closed__9));
v_sz_193_ = lean_array_size(v_a_190_);
v___x_194_ = ((size_t)0ULL);
v___x_195_ = l_unsafeCast___redArg(v_a_190_);
v___x_196_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_192_, v___f_191_, v_sz_193_, v___x_194_, v___x_195_);
v___x_197_ = l_unsafeCast___redArg(v___x_196_);
lean_dec(v___x_196_);
v___x_198_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___redArg___boxed(lean_object* v_inst_199_, lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_Array_toJson___redArg(v_inst_199_, v_a_200_);
lean_dec_ref(v_a_200_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson(lean_object* v_00_u03b1_202_, lean_object* v_inst_203_, lean_object* v_a_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_Array_toJson___redArg(v_inst_203_, v_a_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___boxed(lean_object* v_00_u03b1_206_, lean_object* v_inst_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_Array_toJson(v_00_u03b1_206_, v_inst_207_, v_a_208_);
lean_dec_ref(v_a_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonArray___redArg(lean_object* v_inst_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = lean_alloc_closure((void*)(l_Lean_Array_toJson___boxed), 3, 2);
lean_closure_set(v___x_211_, 0, lean_box(0));
lean_closure_set(v___x_211_, 1, v_inst_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonArray(lean_object* v_00_u03b1_212_, lean_object* v_inst_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_alloc_closure((void*)(l_Lean_Array_toJson___boxed), 3, 2);
lean_closure_set(v___x_214_, 0, lean_box(0));
lean_closure_set(v___x_214_, 1, v_inst_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_fromJson_x3f___redArg(lean_object* v_inst_215_, lean_object* v_j_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_Array_fromJson_x3f___redArg(v_inst_215_, v_j_216_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v___x_217_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_218_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
else
{
lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_234_; 
v_a_226_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_234_ == 0)
{
v___x_228_ = v___x_217_;
v_isShared_229_ = v_isSharedCheck_234_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v___x_217_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_234_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_230_; lean_object* v___x_232_; 
v___x_230_ = lean_array_to_list(v_a_226_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 0, v___x_230_);
v___x_232_ = v___x_228_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v___x_230_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_List_fromJson_x3f(lean_object* v_00_u03b1_235_, lean_object* v_inst_236_, lean_object* v_j_237_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = l_Lean_List_fromJson_x3f___redArg(v_inst_236_, v_j_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonList___redArg(lean_object* v_inst_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_alloc_closure((void*)(l_Lean_List_fromJson_x3f), 3, 2);
lean_closure_set(v___x_240_, 0, lean_box(0));
lean_closure_set(v___x_240_, 1, v_inst_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonList(lean_object* v_00_u03b1_241_, lean_object* v_inst_242_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = lean_alloc_closure((void*)(l_Lean_List_fromJson_x3f), 3, 2);
lean_closure_set(v___x_243_, 0, lean_box(0));
lean_closure_set(v___x_243_, 1, v_inst_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___redArg(lean_object* v_inst_244_, lean_object* v_a_245_){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = lean_array_mk(v_a_245_);
v___x_247_ = l_Lean_Array_toJson___redArg(v_inst_244_, v___x_246_);
lean_dec_ref(v___x_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson(lean_object* v_00_u03b1_248_, lean_object* v_inst_249_, lean_object* v_a_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = l_Lean_List_toJson___redArg(v_inst_249_, v_a_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonList___redArg(lean_object* v_inst_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lean_alloc_closure((void*)(l_Lean_List_toJson), 3, 2);
lean_closure_set(v___x_253_, 0, lean_box(0));
lean_closure_set(v___x_253_, 1, v_inst_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonList(lean_object* v_00_u03b1_254_, lean_object* v_inst_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_alloc_closure((void*)(l_Lean_List_toJson), 3, 2);
lean_closure_set(v___x_256_, 0, lean_box(0));
lean_closure_set(v___x_256_, 1, v_inst_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___redArg(lean_object* v_inst_259_, lean_object* v_x_260_){
_start:
{
if (lean_obj_tag(v_x_260_) == 0)
{
lean_object* v___x_261_; 
lean_dec_ref(v_inst_259_);
v___x_261_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___redArg___closed__0));
return v___x_261_;
}
else
{
lean_object* v___x_262_; 
v___x_262_ = lean_apply_1(v_inst_259_, v_x_260_);
if (lean_obj_tag(v___x_262_) == 0)
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
v_a_263_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v___x_262_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_262_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_a_263_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
else
{
lean_object* v_a_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_279_; 
v_a_271_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_279_ == 0)
{
v___x_273_ = v___x_262_;
v_isShared_274_ = v_isSharedCheck_279_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_a_271_);
lean_dec(v___x_262_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_279_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_275_; lean_object* v___x_277_; 
v___x_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_275_, 0, v_a_271_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v___x_275_);
v___x_277_ = v___x_273_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_275_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f(lean_object* v_00_u03b1_280_, lean_object* v_inst_281_, lean_object* v_x_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l_Lean_Option_fromJson_x3f___redArg(v_inst_281_, v_x_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonOption___redArg(lean_object* v_inst_284_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lean_alloc_closure((void*)(l_Lean_Option_fromJson_x3f), 3, 2);
lean_closure_set(v___x_285_, 0, lean_box(0));
lean_closure_set(v___x_285_, 1, v_inst_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonOption(lean_object* v_00_u03b1_286_, lean_object* v_inst_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = lean_alloc_closure((void*)(l_Lean_Option_fromJson_x3f), 3, 2);
lean_closure_set(v___x_288_, 0, lean_box(0));
lean_closure_set(v___x_288_, 1, v_inst_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___redArg(lean_object* v_inst_289_, lean_object* v_x_290_){
_start:
{
if (lean_obj_tag(v_x_290_) == 0)
{
lean_object* v___x_291_; 
lean_dec_ref(v_inst_289_);
v___x_291_ = lean_box(0);
return v___x_291_;
}
else
{
lean_object* v_val_292_; lean_object* v___x_293_; 
v_val_292_ = lean_ctor_get(v_x_290_, 0);
lean_inc(v_val_292_);
lean_dec_ref_known(v_x_290_, 1);
v___x_293_ = lean_apply_1(v_inst_289_, v_val_292_);
return v___x_293_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson(lean_object* v_00_u03b1_294_, lean_object* v_inst_295_, lean_object* v_x_296_){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = l_Lean_Option_toJson___redArg(v_inst_295_, v_x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonOption___redArg(lean_object* v_inst_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = lean_alloc_closure((void*)(l_Lean_Option_toJson), 3, 2);
lean_closure_set(v___x_299_, 0, lean_box(0));
lean_closure_set(v___x_299_, 1, v_inst_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonOption(lean_object* v_00_u03b1_300_, lean_object* v_inst_301_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = lean_alloc_closure((void*)(l_Lean_Option_toJson), 3, 2);
lean_closure_set(v___x_302_, 0, lean_box(0));
lean_closure_set(v___x_302_, 1, v_inst_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___redArg(lean_object* v_inst_304_, lean_object* v_inst_305_, lean_object* v_x_306_){
_start:
{
lean_object* v_j_308_; 
if (lean_obj_tag(v_x_306_) == 4)
{
lean_object* v_elems_316_; lean_object* v___x_317_; lean_object* v___x_318_; uint8_t v___x_319_; 
v_elems_316_ = lean_ctor_get(v_x_306_, 0);
v___x_317_ = lean_array_get_size(v_elems_316_);
v___x_318_ = lean_unsigned_to_nat(2u);
v___x_319_ = lean_nat_dec_eq(v___x_317_, v___x_318_);
if (v___x_319_ == 0)
{
lean_dec_ref(v_inst_305_);
lean_dec_ref(v_inst_304_);
v_j_308_ = v_x_306_;
goto v___jp_307_;
}
else
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
lean_inc_ref(v_elems_316_);
lean_dec_ref_known(v_x_306_, 1);
v___x_320_ = lean_unsigned_to_nat(0u);
v___x_321_ = lean_array_fget_borrowed(v_elems_316_, v___x_320_);
lean_inc(v___x_321_);
v___x_322_ = lean_apply_1(v_inst_304_, v___x_321_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
lean_dec_ref(v_elems_316_);
lean_dec_ref(v_inst_305_);
v_a_323_ = lean_ctor_get(v___x_322_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_322_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_322_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_322_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
else
{
lean_object* v_a_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v_a_331_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_331_);
lean_dec_ref_known(v___x_322_, 1);
v___x_332_ = lean_unsigned_to_nat(1u);
v___x_333_ = lean_array_fget(v_elems_316_, v___x_332_);
lean_dec_ref(v_elems_316_);
v___x_334_ = lean_apply_1(v_inst_305_, v___x_333_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
lean_dec(v_a_331_);
v_a_335_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_342_ == 0)
{
v___x_337_ = v___x_334_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_334_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_335_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_351_; 
v_a_343_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_351_ == 0)
{
v___x_345_ = v___x_334_;
v_isShared_346_ = v_isSharedCheck_351_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_334_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_351_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_347_; lean_object* v___x_349_; 
v___x_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_347_, 0, v_a_331_);
lean_ctor_set(v___x_347_, 1, v_a_343_);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 0, v___x_347_);
v___x_349_ = v___x_345_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_347_);
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
}
}
else
{
lean_dec_ref(v_inst_305_);
lean_dec_ref(v_inst_304_);
v_j_308_ = v_x_306_;
goto v___jp_307_;
}
v___jp_307_:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_309_ = ((lean_object*)(l_Lean_Prod_fromJson_x3f___redArg___closed__0));
v___x_310_ = lean_unsigned_to_nat(80u);
v___x_311_ = l_Lean_Json_pretty(v_j_308_, v___x_310_);
v___x_312_ = lean_string_append(v___x_309_, v___x_311_);
lean_dec_ref(v___x_311_);
v___x_313_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___redArg___closed__11));
v___x_314_ = lean_string_append(v___x_312_, v___x_313_);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
return v___x_315_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f(lean_object* v_00_u03b1_352_, lean_object* v_00_u03b2_353_, lean_object* v_inst_354_, lean_object* v_inst_355_, lean_object* v_x_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Lean_Prod_fromJson_x3f___redArg(v_inst_354_, v_inst_355_, v_x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonProd___redArg(lean_object* v_inst_358_, lean_object* v_inst_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = lean_alloc_closure((void*)(l_Lean_Prod_fromJson_x3f), 5, 4);
lean_closure_set(v___x_360_, 0, lean_box(0));
lean_closure_set(v___x_360_, 1, lean_box(0));
lean_closure_set(v___x_360_, 2, v_inst_358_);
lean_closure_set(v___x_360_, 3, v_inst_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonProd(lean_object* v_00_u03b1_361_, lean_object* v_00_u03b2_362_, lean_object* v_inst_363_, lean_object* v_inst_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = lean_alloc_closure((void*)(l_Lean_Prod_fromJson_x3f), 5, 4);
lean_closure_set(v___x_365_, 0, lean_box(0));
lean_closure_set(v___x_365_, 1, lean_box(0));
lean_closure_set(v___x_365_, 2, v_inst_363_);
lean_closure_set(v___x_365_, 3, v_inst_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Prod_toJson___redArg(lean_object* v_inst_366_, lean_object* v_inst_367_, lean_object* v_x_368_){
_start:
{
lean_object* v_fst_369_; lean_object* v_snd_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v_fst_369_ = lean_ctor_get(v_x_368_, 0);
lean_inc(v_fst_369_);
v_snd_370_ = lean_ctor_get(v_x_368_, 1);
lean_inc(v_snd_370_);
lean_dec_ref(v_x_368_);
v___x_371_ = lean_apply_1(v_inst_366_, v_fst_369_);
v___x_372_ = lean_apply_1(v_inst_367_, v_snd_370_);
v___x_373_ = lean_unsigned_to_nat(2u);
v___x_374_ = lean_mk_empty_array_with_capacity(v___x_373_);
v___x_375_ = lean_array_push(v___x_374_, v___x_371_);
v___x_376_ = lean_array_push(v___x_375_, v___x_372_);
v___x_377_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Prod_toJson(lean_object* v_00_u03b1_378_, lean_object* v_00_u03b2_379_, lean_object* v_inst_380_, lean_object* v_inst_381_, lean_object* v_x_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Lean_Prod_toJson___redArg(v_inst_380_, v_inst_381_, v_x_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonProd___redArg(lean_object* v_inst_384_, lean_object* v_inst_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = lean_alloc_closure((void*)(l_Lean_Prod_toJson), 5, 4);
lean_closure_set(v___x_386_, 0, lean_box(0));
lean_closure_set(v___x_386_, 1, lean_box(0));
lean_closure_set(v___x_386_, 2, v_inst_384_);
lean_closure_set(v___x_386_, 3, v_inst_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonProd(lean_object* v_00_u03b1_387_, lean_object* v_00_u03b2_388_, lean_object* v_inst_389_, lean_object* v_inst_390_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = lean_alloc_closure((void*)(l_Lean_Prod_toJson), 5, 4);
lean_closure_set(v___x_391_, 0, lean_box(0));
lean_closure_set(v___x_391_, 1, lean_box(0));
lean_closure_set(v___x_391_, 2, v_inst_389_);
lean_closure_set(v___x_391_, 3, v_inst_390_);
return v___x_391_;
}
}
static lean_object* _init_l_Lean_Name_fromJson_x3f___closed__2(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_box(0);
v___x_395_ = l_unsafeCast___redArg(v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_Name_fromJson_x3f___closed__3(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_obj_once(&l_Lean_Name_fromJson_x3f___closed__2, &l_Lean_Name_fromJson_x3f___closed__2_once, _init_l_Lean_Name_fromJson_x3f___closed__2);
v___x_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_fromJson_x3f(lean_object* v_j_398_){
_start:
{
lean_object* v___x_399_; 
lean_inc(v_j_398_);
v___x_399_ = l_Lean_Json_getStr_x3f(v_j_398_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_407_; 
lean_dec(v_j_398_);
v_a_400_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_407_ == 0)
{
v___x_402_ = v___x_399_;
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_a_400_);
lean_dec(v___x_399_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_405_; 
if (v_isShared_403_ == 0)
{
v___x_405_ = v___x_402_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_a_400_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_429_; 
v_a_408_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_429_ == 0)
{
v___x_410_ = v___x_399_;
v_isShared_411_ = v_isSharedCheck_429_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_399_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_429_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = ((lean_object*)(l_Lean_Name_fromJson_x3f___closed__0));
v___x_413_ = lean_string_dec_eq(v_a_408_, v___x_412_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_414_ = l_String_toName(v_a_408_);
v___x_415_ = l_Lean_Name_isAnonymous(v___x_414_);
if (v___x_415_ == 0)
{
lean_object* v___x_417_; 
lean_dec(v_j_398_);
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v___x_414_);
v___x_417_ = v___x_410_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v___x_414_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
else
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_426_; 
lean_dec(v___x_414_);
v___x_419_ = ((lean_object*)(l_Lean_Name_fromJson_x3f___closed__1));
v___x_420_ = lean_unsigned_to_nat(80u);
v___x_421_ = l_Lean_Json_pretty(v_j_398_, v___x_420_);
v___x_422_ = lean_string_append(v___x_419_, v___x_421_);
lean_dec_ref(v___x_421_);
v___x_423_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___redArg___closed__11));
v___x_424_ = lean_string_append(v___x_422_, v___x_423_);
if (v_isShared_411_ == 0)
{
lean_ctor_set_tag(v___x_410_, 0);
lean_ctor_set(v___x_410_, 0, v___x_424_);
v___x_426_ = v___x_410_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v___x_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
else
{
lean_object* v___x_428_; 
lean_del_object(v___x_410_);
lean_dec(v_a_408_);
lean_dec(v_j_398_);
v___x_428_ = lean_obj_once(&l_Lean_Name_fromJson_x3f___closed__3, &l_Lean_Name_fromJson_x3f___closed__3_once, _init_l_Lean_Name_fromJson_x3f___closed__3);
return v___x_428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonName___lam__0(lean_object* v_n_432_){
_start:
{
uint8_t v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_433_ = 1;
v___x_434_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_n_432_, v___x_433_);
v___x_435_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___redArg___lam__0(lean_object* v_inst_438_, lean_object* v_m_439_, lean_object* v_k_440_, lean_object* v_v_441_){
_start:
{
lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_442_ = ((lean_object*)(l_Lean_Name_fromJson_x3f___closed__0));
v___x_443_ = lean_string_dec_eq(v_k_440_, v___x_442_);
if (v___x_443_ == 0)
{
lean_object* v_n_444_; uint8_t v___x_445_; 
lean_inc_ref(v_k_440_);
v_n_444_ = l_String_toName(v_k_440_);
v___x_445_ = l_Lean_Name_isAnonymous(v_n_444_);
if (v___x_445_ == 0)
{
lean_object* v___x_446_; 
lean_dec_ref(v_k_440_);
v___x_446_ = lean_apply_1(v_inst_438_, v_v_441_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_dec(v_n_444_);
lean_dec(v_m_439_);
v_a_447_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_446_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_446_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
else
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_463_; 
v_a_455_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_463_ == 0)
{
v___x_457_ = v___x_446_;
v_isShared_458_ = v_isSharedCheck_463_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_446_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_463_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_459_; lean_object* v___x_461_; 
v___x_459_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_444_, v_a_455_, v_m_439_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v___x_459_);
v___x_461_ = v___x_457_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_459_);
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
else
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
lean_dec(v_n_444_);
lean_dec(v_v_441_);
lean_dec(v_m_439_);
lean_dec_ref(v_inst_438_);
v___x_464_ = ((lean_object*)(l_Lean_Name_fromJson_x3f___closed__1));
v___x_465_ = lean_string_append(v___x_464_, v_k_440_);
lean_dec_ref(v_k_440_);
v___x_466_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___redArg___closed__11));
v___x_467_ = lean_string_append(v___x_465_, v___x_466_);
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
return v___x_468_;
}
}
else
{
lean_object* v___x_469_; 
lean_dec_ref(v_k_440_);
v___x_469_ = lean_apply_1(v_inst_438_, v_v_441_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_477_; 
lean_dec(v_m_439_);
v_a_470_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_477_ == 0)
{
v___x_472_ = v___x_469_;
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_469_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_475_; 
if (v_isShared_473_ == 0)
{
v___x_475_ = v___x_472_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_a_470_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
else
{
lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_487_; 
v_a_478_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_487_ == 0)
{
v___x_480_ = v___x_469_;
v_isShared_481_ = v_isSharedCheck_487_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_469_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_487_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_485_; 
v___x_482_ = lean_obj_once(&l_Lean_Name_fromJson_x3f___closed__2, &l_Lean_Name_fromJson_x3f___closed__2_once, _init_l_Lean_Name_fromJson_x3f___closed__2);
v___x_483_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_482_, v_a_478_, v_m_439_);
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 0, v___x_483_);
v___x_485_ = v___x_480_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___redArg(lean_object* v_inst_489_, lean_object* v_x_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___redArg___closed__9));
if (lean_obj_tag(v_x_490_) == 5)
{
lean_object* v_kvPairs_492_; lean_object* v___f_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_kvPairs_492_ = lean_ctor_get(v_x_490_, 0);
lean_inc(v_kvPairs_492_);
lean_dec_ref_known(v_x_490_, 1);
v___f_493_ = lean_alloc_closure((void*)(l_Lean_NameMap_fromJson_x3f___redArg___lam__0), 4, 1);
lean_closure_set(v___f_493_, 0, v_inst_489_);
v___x_494_ = lean_box(1);
v___x_495_ = l_Std_DTreeMap_Internal_Impl_foldlM___redArg(v___x_491_, v___f_493_, v___x_494_, v_kvPairs_492_);
return v___x_495_;
}
else
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
lean_dec_ref(v_inst_489_);
v___x_496_ = ((lean_object*)(l_Lean_NameMap_fromJson_x3f___redArg___closed__0));
v___x_497_ = lean_unsigned_to_nat(80u);
v___x_498_ = l_Lean_Json_pretty(v_x_490_, v___x_497_);
v___x_499_ = lean_string_append(v___x_496_, v___x_498_);
lean_dec_ref(v___x_498_);
v___x_500_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___redArg___closed__11));
v___x_501_ = lean_string_append(v___x_499_, v___x_500_);
v___x_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_502_, 0, v___x_501_);
return v___x_502_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f(lean_object* v_00_u03b1_503_, lean_object* v_inst_504_, lean_object* v_x_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Lean_NameMap_fromJson_x3f___redArg(v_inst_504_, v_x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonNameMap___redArg(lean_object* v_inst_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = lean_alloc_closure((void*)(l_Lean_NameMap_fromJson_x3f), 3, 2);
lean_closure_set(v___x_508_, 0, lean_box(0));
lean_closure_set(v___x_508_, 1, v_inst_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonNameMap(lean_object* v_00_u03b1_509_, lean_object* v_inst_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = lean_alloc_closure((void*)(l_Lean_NameMap_fromJson_x3f), 3, 2);
lean_closure_set(v___x_511_, 0, lean_box(0));
lean_closure_set(v___x_511_, 1, v_inst_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___redArg___lam__0(lean_object* v_inst_513_, lean_object* v_n_514_, lean_object* v_k_515_, lean_object* v_v_516_){
_start:
{
lean_object* v___x_517_; uint8_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_517_ = ((lean_object*)(l_Lean_NameMap_toJson___redArg___lam__0___closed__0));
v___x_518_ = 1;
v___x_519_ = l_Lean_Name_toString(v_k_515_, v___x_518_);
v___x_520_ = lean_apply_1(v_inst_513_, v_v_516_);
v___x_521_ = l_Std_DTreeMap_Internal_Impl_insert_x21___redArg(v___x_517_, v___x_519_, v___x_520_, v_n_514_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___redArg(lean_object* v_inst_522_, lean_object* v_m_523_){
_start:
{
lean_object* v___f_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___f_524_ = lean_alloc_closure((void*)(l_Lean_NameMap_toJson___redArg___lam__0), 4, 1);
lean_closure_set(v___f_524_, 0, v_inst_522_);
v___x_525_ = lean_box(1);
v___x_526_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_524_, v___x_525_, v_m_523_);
v___x_527_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson(lean_object* v_00_u03b1_528_, lean_object* v_inst_529_, lean_object* v_m_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_NameMap_toJson___redArg(v_inst_529_, v_m_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonNameMap___redArg(lean_object* v_inst_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = lean_alloc_closure((void*)(l_Lean_NameMap_toJson), 3, 2);
lean_closure_set(v___x_533_, 0, lean_box(0));
lean_closure_set(v___x_533_, 1, v_inst_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonNameMap(lean_object* v_00_u03b1_534_, lean_object* v_inst_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = lean_alloc_closure((void*)(l_Lean_NameMap_toJson), 3, 2);
lean_closure_set(v___x_536_, 0, lean_box(0));
lean_closure_set(v___x_536_, 1, v_inst_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_bignumFromJson_x3f(lean_object* v_j_538_){
_start:
{
lean_object* v___x_539_; 
lean_inc(v_j_538_);
v___x_539_ = l_Lean_Json_getStr_x3f(v_j_538_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
lean_dec(v_j_538_);
v_a_540_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_539_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_566_; 
v_a_548_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_566_ == 0)
{
v___x_550_ = v___x_539_;
v_isShared_551_ = v_isSharedCheck_566_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_539_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_566_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lean_Syntax_decodeNatLitVal_x3f(v_a_548_);
lean_dec(v_a_548_);
if (lean_obj_tag(v___x_552_) == 1)
{
lean_object* v_val_553_; lean_object* v___x_555_; 
lean_dec(v_j_538_);
v_val_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_val_553_);
lean_dec_ref_known(v___x_552_, 1);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 0, v_val_553_);
v___x_555_ = v___x_550_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_val_553_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
else
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_564_; 
lean_dec(v___x_552_);
v___x_557_ = ((lean_object*)(l_Lean_bignumFromJson_x3f___closed__0));
v___x_558_ = lean_unsigned_to_nat(80u);
v___x_559_ = l_Lean_Json_pretty(v_j_538_, v___x_558_);
v___x_560_ = lean_string_append(v___x_557_, v___x_559_);
lean_dec_ref(v___x_559_);
v___x_561_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___redArg___closed__11));
v___x_562_ = lean_string_append(v___x_560_, v___x_561_);
if (v_isShared_551_ == 0)
{
lean_ctor_set_tag(v___x_550_, 0);
lean_ctor_set(v___x_550_, 0, v___x_562_);
v___x_564_ = v___x_550_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_bignumToJson(lean_object* v_n_567_){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = l_Nat_reprFast(v_n_567_);
v___x_569_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
return v___x_569_;
}
}
static lean_object* _init_l_Lean_USize_fromJson_x3f___closed__0(void){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_570_ = l_System_Platform_numBits;
v___x_571_ = lean_unsigned_to_nat(2u);
v___x_572_ = lean_nat_pow(v___x_571_, v___x_570_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_USize_fromJson_x3f(lean_object* v_j_575_){
_start:
{
lean_object* v___x_576_; 
lean_inc(v_j_575_);
v___x_576_ = l_Lean_bignumFromJson_x3f(v_j_575_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
lean_dec(v_j_575_);
v_a_577_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_576_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_576_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_605_; 
v_a_585_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_605_ == 0)
{
v___x_587_ = v___x_576_;
v_isShared_588_ = v_isSharedCheck_605_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_576_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_605_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_589_ = lean_obj_once(&l_Lean_USize_fromJson_x3f___closed__0, &l_Lean_USize_fromJson_x3f___closed__0_once, _init_l_Lean_USize_fromJson_x3f___closed__0);
v___x_590_ = lean_nat_dec_le(v___x_589_, v_a_585_);
if (v___x_590_ == 0)
{
size_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_594_; 
lean_dec(v_j_575_);
v___x_591_ = lean_usize_of_nat(v_a_585_);
lean_dec(v_a_585_);
v___x_592_ = lean_box_usize(v___x_591_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_592_);
v___x_594_ = v___x_587_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v___x_592_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
else
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_603_; 
lean_dec(v_a_585_);
v___x_596_ = ((lean_object*)(l_Lean_USize_fromJson_x3f___closed__1));
v___x_597_ = lean_unsigned_to_nat(80u);
v___x_598_ = l_Lean_Json_pretty(v_j_575_, v___x_597_);
v___x_599_ = lean_string_append(v___x_596_, v___x_598_);
lean_dec_ref(v___x_598_);
v___x_600_ = ((lean_object*)(l_Lean_USize_fromJson_x3f___closed__2));
v___x_601_ = lean_string_append(v___x_599_, v___x_600_);
if (v_isShared_588_ == 0)
{
lean_ctor_set_tag(v___x_587_, 0);
lean_ctor_set(v___x_587_, 0, v___x_601_);
v___x_603_ = v___x_587_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonUSize___lam__0(size_t v_v_608_){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_609_ = lean_usize_to_nat(v_v_608_);
v___x_610_ = l_Lean_bignumToJson(v___x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonUSize___lam__0___boxed(lean_object* v_v_611_){
_start:
{
size_t v_v_boxed_612_; lean_object* v_res_613_; 
v_v_boxed_612_ = lean_unbox_usize(v_v_611_);
lean_dec(v_v_611_);
v_res_613_ = l_Lean_instToJsonUSize___lam__0(v_v_boxed_612_);
return v_res_613_;
}
}
static lean_object* _init_l_Lean_UInt64_fromJson_x3f___closed__0(void){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = lean_cstr_to_nat("18446744073709551616");
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_UInt64_fromJson_x3f(lean_object* v_j_618_){
_start:
{
lean_object* v___x_619_; 
lean_inc(v_j_618_);
v___x_619_ = l_Lean_bignumFromJson_x3f(v_j_618_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_627_; 
lean_dec(v_j_618_);
v_a_620_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_627_ == 0)
{
v___x_622_ = v___x_619_;
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v___x_619_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_625_; 
if (v_isShared_623_ == 0)
{
v___x_625_ = v___x_622_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_a_620_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_648_; 
v_a_628_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_648_ == 0)
{
v___x_630_ = v___x_619_;
v_isShared_631_ = v_isSharedCheck_648_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_619_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_648_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_632_ = lean_obj_once(&l_Lean_UInt64_fromJson_x3f___closed__0, &l_Lean_UInt64_fromJson_x3f___closed__0_once, _init_l_Lean_UInt64_fromJson_x3f___closed__0);
v___x_633_ = lean_nat_dec_le(v___x_632_, v_a_628_);
if (v___x_633_ == 0)
{
uint64_t v___x_634_; lean_object* v___x_635_; lean_object* v___x_637_; 
lean_dec(v_j_618_);
v___x_634_ = lean_uint64_of_nat(v_a_628_);
lean_dec(v_a_628_);
v___x_635_ = lean_box_uint64(v___x_634_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 0, v___x_635_);
v___x_637_ = v___x_630_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_635_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
else
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_646_; 
lean_dec(v_a_628_);
v___x_639_ = ((lean_object*)(l_Lean_USize_fromJson_x3f___closed__1));
v___x_640_ = lean_unsigned_to_nat(80u);
v___x_641_ = l_Lean_Json_pretty(v_j_618_, v___x_640_);
v___x_642_ = lean_string_append(v___x_639_, v___x_641_);
lean_dec_ref(v___x_641_);
v___x_643_ = ((lean_object*)(l_Lean_UInt64_fromJson_x3f___closed__1));
v___x_644_ = lean_string_append(v___x_642_, v___x_643_);
if (v_isShared_631_ == 0)
{
lean_ctor_set_tag(v___x_630_, 0);
lean_ctor_set(v___x_630_, 0, v___x_644_);
v___x_646_ = v___x_630_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_644_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonUInt64___lam__0(uint64_t v_v_651_){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = lean_uint64_to_nat(v_v_651_);
v___x_653_ = l_Lean_bignumToJson(v___x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonUInt64___lam__0___boxed(lean_object* v_v_654_){
_start:
{
uint64_t v_v_boxed_655_; lean_object* v_res_656_; 
v_v_boxed_655_ = lean_unbox_uint64(v_v_654_);
lean_dec_ref(v_v_654_);
v_res_656_ = l_Lean_instToJsonUInt64___lam__0(v_v_boxed_655_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Float_toJson(double v_x_659_){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = l_Lean_JsonNumber_fromFloat_x3f(v_x_659_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_val_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_668_; 
v_val_661_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_668_ == 0)
{
v___x_663_ = v___x_660_;
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_val_661_);
lean_dec(v___x_660_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_666_; 
if (v_isShared_664_ == 0)
{
lean_ctor_set_tag(v___x_663_, 3);
v___x_666_ = v___x_663_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_val_661_);
v___x_666_ = v_reuseFailAlloc_667_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
return v___x_666_;
}
}
}
else
{
lean_object* v_val_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
v_val_669_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_660_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_val_669_);
lean_dec(v___x_660_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
lean_ctor_set_tag(v___x_671_, 2);
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_val_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Float_toJson___boxed(lean_object* v_x_677_){
_start:
{
double v_x_boxed_678_; lean_object* v_res_679_; 
v_x_boxed_678_ = lean_unbox_float(v_x_677_);
lean_dec_ref(v_x_677_);
v_res_679_ = l_Lean_Float_toJson(v_x_boxed_678_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Float_fromJson_x3f(lean_object* v_x_688_){
_start:
{
switch(lean_obj_tag(v_x_688_))
{
case 3:
{
lean_object* v_s_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_730_; 
v_s_691_ = lean_ctor_get(v_x_688_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v_x_688_);
if (v_isSharedCheck_730_ == 0)
{
v___x_693_ = v_x_688_;
v_isShared_694_ = v_isSharedCheck_730_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_s_691_);
lean_dec(v_x_688_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_730_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_695_ = ((lean_object*)(l_Lean_Float_fromJson_x3f___closed__2));
v___x_696_ = lean_string_dec_eq(v_s_691_, v___x_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; uint8_t v___x_698_; 
v___x_697_ = ((lean_object*)(l_Lean_Float_fromJson_x3f___closed__3));
v___x_698_ = lean_string_dec_eq(v_s_691_, v___x_697_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; uint8_t v___x_700_; 
v___x_699_ = ((lean_object*)(l_Lean_Float_fromJson_x3f___closed__4));
v___x_700_ = lean_string_dec_eq(v_s_691_, v___x_699_);
lean_dec_ref(v_s_691_);
if (v___x_700_ == 0)
{
lean_del_object(v___x_693_);
goto v___jp_689_;
}
else
{
lean_object* v___x_701_; lean_object* v___x_702_; double v___x_703_; double v___x_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_701_ = lean_unsigned_to_nat(0u);
v___x_702_ = lean_unsigned_to_nat(1u);
v___x_703_ = l_Float_ofScientific(v___x_701_, v___x_700_, v___x_702_);
v___x_704_ = lean_float_div(v___x_703_, v___x_703_);
v___x_705_ = lean_box_float(v___x_704_);
if (v_isShared_694_ == 0)
{
lean_ctor_set_tag(v___x_693_, 1);
lean_ctor_set(v___x_693_, 0, v___x_705_);
v___x_707_ = v___x_693_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
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
else
{
lean_object* v___x_709_; lean_object* v___x_710_; double v___x_711_; double v___x_712_; lean_object* v___x_713_; double v___x_714_; double v___x_715_; lean_object* v___x_716_; lean_object* v___x_718_; 
lean_dec_ref(v_s_691_);
v___x_709_ = lean_unsigned_to_nat(10u);
v___x_710_ = lean_unsigned_to_nat(1u);
v___x_711_ = l_Float_ofScientific(v___x_709_, v___x_698_, v___x_710_);
v___x_712_ = lean_float_negate(v___x_711_);
v___x_713_ = lean_unsigned_to_nat(0u);
v___x_714_ = l_Float_ofScientific(v___x_713_, v___x_698_, v___x_710_);
v___x_715_ = lean_float_div(v___x_712_, v___x_714_);
v___x_716_ = lean_box_float(v___x_715_);
if (v_isShared_694_ == 0)
{
lean_ctor_set_tag(v___x_693_, 1);
lean_ctor_set(v___x_693_, 0, v___x_716_);
v___x_718_ = v___x_693_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_716_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
else
{
lean_object* v___x_720_; lean_object* v___x_721_; double v___x_722_; lean_object* v___x_723_; double v___x_724_; double v___x_725_; lean_object* v___x_726_; lean_object* v___x_728_; 
lean_dec_ref(v_s_691_);
v___x_720_ = lean_unsigned_to_nat(10u);
v___x_721_ = lean_unsigned_to_nat(1u);
v___x_722_ = l_Float_ofScientific(v___x_720_, v___x_696_, v___x_721_);
v___x_723_ = lean_unsigned_to_nat(0u);
v___x_724_ = l_Float_ofScientific(v___x_723_, v___x_696_, v___x_721_);
v___x_725_ = lean_float_div(v___x_722_, v___x_724_);
v___x_726_ = lean_box_float(v___x_725_);
if (v_isShared_694_ == 0)
{
lean_ctor_set_tag(v___x_693_, 1);
lean_ctor_set(v___x_693_, 0, v___x_726_);
v___x_728_ = v___x_693_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
case 2:
{
lean_object* v_n_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_740_; 
v_n_731_ = lean_ctor_get(v_x_688_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v_x_688_);
if (v_isSharedCheck_740_ == 0)
{
v___x_733_ = v_x_688_;
v_isShared_734_ = v_isSharedCheck_740_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_n_731_);
lean_dec(v_x_688_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_740_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
double v___x_735_; lean_object* v___x_736_; lean_object* v___x_738_; 
v___x_735_ = l_Lean_JsonNumber_toFloat(v_n_731_);
v___x_736_ = lean_box_float(v___x_735_);
if (v_isShared_734_ == 0)
{
lean_ctor_set_tag(v___x_733_, 1);
lean_ctor_set(v___x_733_, 0, v___x_736_);
v___x_738_ = v___x_733_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v___x_736_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
default: 
{
lean_dec(v_x_688_);
goto v___jp_689_;
}
}
v___jp_689_:
{
lean_object* v___x_690_; 
v___x_690_ = ((lean_object*)(l_Lean_Float_fromJson_x3f___closed__1));
return v___x_690_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_fromJson_x3f(lean_object* v_x_744_){
_start:
{
switch(lean_obj_tag(v_x_744_))
{
case 4:
{
lean_object* v_elems_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_753_; 
v_elems_745_ = lean_ctor_get(v_x_744_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v_x_744_);
if (v_isSharedCheck_753_ == 0)
{
v___x_747_ = v_x_744_;
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_elems_745_);
lean_dec(v_x_744_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
lean_ctor_set_tag(v___x_747_, 0);
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_elems_745_);
v___x_750_ = v_reuseFailAlloc_752_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
lean_object* v___x_751_; 
v___x_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
return v___x_751_;
}
}
}
case 5:
{
lean_object* v_kvPairs_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_762_; 
v_kvPairs_754_ = lean_ctor_get(v_x_744_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v_x_744_);
if (v_isSharedCheck_762_ == 0)
{
v___x_756_ = v_x_744_;
v_isShared_757_ = v_isSharedCheck_762_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_kvPairs_754_);
lean_dec(v_x_744_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_762_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
lean_ctor_set_tag(v___x_756_, 1);
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_kvPairs_754_);
v___x_759_ = v_reuseFailAlloc_761_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
lean_object* v___x_760_; 
v___x_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
return v___x_760_;
}
}
}
default: 
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_763_ = ((lean_object*)(l_Lean_Json_Structured_fromJson_x3f___closed__0));
v___x_764_ = lean_unsigned_to_nat(80u);
v___x_765_ = l_Lean_Json_pretty(v_x_744_, v___x_764_);
v___x_766_ = lean_string_append(v___x_763_, v___x_765_);
lean_dec_ref(v___x_765_);
v___x_767_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___redArg___closed__11));
v___x_768_ = lean_string_append(v___x_766_, v___x_767_);
v___x_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
return v___x_769_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_toJson(lean_object* v_x_772_){
_start:
{
if (lean_obj_tag(v_x_772_) == 0)
{
lean_object* v_elems_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
v_elems_773_ = lean_ctor_get(v_x_772_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v_x_772_);
if (v_isSharedCheck_780_ == 0)
{
v___x_775_ = v_x_772_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_elems_773_);
lean_dec(v_x_772_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
lean_ctor_set_tag(v___x_775_, 4);
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_elems_773_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
else
{
lean_object* v_kvPairs_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
v_kvPairs_781_ = lean_ctor_get(v_x_772_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v_x_772_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v_x_772_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_kvPairs_781_);
lean_dec(v_x_772_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
lean_ctor_set_tag(v___x_783_, 5);
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_kvPairs_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f___redArg(lean_object* v_inst_791_, lean_object* v_v_792_){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_793_ = lean_apply_1(v_inst_791_, v_v_792_);
v___x_794_ = l_Lean_Json_Structured_fromJson_x3f(v___x_793_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_toStructured_x3f(lean_object* v_00_u03b1_795_, lean_object* v_inst_796_, lean_object* v_v_797_){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = l_Lean_Json_toStructured_x3f___redArg(v_inst_796_, v_v_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object* v_j_799_, lean_object* v_inst_800_, lean_object* v_k_801_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = l_Lean_Json_getObjValD(v_j_799_, v_k_801_);
v___x_803_ = lean_apply_1(v_inst_800_, v___x_802_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___redArg___boxed(lean_object* v_j_804_, lean_object* v_inst_805_, lean_object* v_k_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_804_, v_inst_805_, v_k_806_);
lean_dec_ref(v_k_806_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f(lean_object* v_j_808_, lean_object* v_00_u03b1_809_, lean_object* v_inst_810_, lean_object* v_k_811_){
_start:
{
lean_object* v___x_812_; 
v___x_812_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_808_, v_inst_810_, v_k_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___boxed(lean_object* v_j_813_, lean_object* v_00_u03b1_814_, lean_object* v_inst_815_, lean_object* v_k_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lean_Json_getObjValAs_x3f(v_j_813_, v_00_u03b1_814_, v_inst_815_, v_k_816_);
lean_dec_ref(v_k_816_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_setObjValAs_x21___redArg(lean_object* v_j_818_, lean_object* v_inst_819_, lean_object* v_k_820_, lean_object* v_v_821_){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = lean_apply_1(v_inst_819_, v_v_821_);
v___x_823_ = l_Lean_Json_setObjVal_x21(v_j_818_, v_k_820_, v___x_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_setObjValAs_x21(lean_object* v_j_824_, lean_object* v_00_u03b1_825_, lean_object* v_inst_826_, lean_object* v_k_827_, lean_object* v_v_828_){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = l_Lean_Json_setObjValAs_x21___redArg(v_j_824_, v_inst_826_, v_k_827_, v_v_828_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___redArg(lean_object* v_inst_830_, lean_object* v_k_831_, lean_object* v_x_832_){
_start:
{
if (lean_obj_tag(v_x_832_) == 0)
{
lean_object* v___x_833_; 
lean_dec_ref(v_k_831_);
lean_dec_ref(v_inst_830_);
v___x_833_ = lean_box(0);
return v___x_833_;
}
else
{
lean_object* v_val_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v_val_834_ = lean_ctor_get(v_x_832_, 0);
lean_inc(v_val_834_);
lean_dec_ref_known(v_x_832_, 1);
v___x_835_ = lean_apply_1(v_inst_830_, v_val_834_);
v___x_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_836_, 0, v_k_831_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = lean_box(0);
v___x_838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_836_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
return v___x_838_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt(lean_object* v_00_u03b1_839_, lean_object* v_inst_840_, lean_object* v_k_841_, lean_object* v_x_842_){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = l_Lean_Json_opt___redArg(v_inst_840_, v_k_841_, v_x_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getTag_x3f(lean_object* v_x_844_){
_start:
{
switch(lean_obj_tag(v_x_844_))
{
case 3:
{
lean_object* v_s_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
v_s_845_ = lean_ctor_get(v_x_844_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v_x_844_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v_x_844_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_s_845_);
lean_dec(v_x_844_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
lean_ctor_set_tag(v___x_847_, 1);
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_s_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
case 5:
{
lean_object* v_kvPairs_853_; lean_object* v___y_855_; 
v_kvPairs_853_ = lean_ctor_get(v_x_844_, 0);
lean_inc(v_kvPairs_853_);
lean_dec_ref_known(v_x_844_, 1);
if (lean_obj_tag(v_kvPairs_853_) == 0)
{
lean_object* v_size_860_; 
v_size_860_ = lean_ctor_get(v_kvPairs_853_, 0);
lean_inc(v_size_860_);
v___y_855_ = v_size_860_;
goto v___jp_854_;
}
else
{
lean_object* v___x_861_; 
v___x_861_ = lean_unsigned_to_nat(0u);
v___y_855_ = v___x_861_;
goto v___jp_854_;
}
v___jp_854_:
{
lean_object* v___x_856_; uint8_t v___x_857_; 
v___x_856_ = lean_unsigned_to_nat(1u);
v___x_857_ = lean_nat_dec_eq(v___y_855_, v___x_856_);
lean_dec(v___y_855_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; 
lean_dec(v_kvPairs_853_);
v___x_858_ = lean_box(0);
return v___x_858_;
}
else
{
lean_object* v___x_859_; 
v___x_859_ = l_Std_DTreeMap_Internal_Impl_minKey_x3f___redArg(v_kvPairs_853_);
lean_dec(v_kvPairs_853_);
return v___x_859_;
}
}
}
default: 
{
lean_object* v___x_862_; 
lean_dec(v_x_844_);
v___x_862_ = lean_box(0);
return v___x_862_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Json_parseTagged_spec__0(lean_object* v_a_863_, lean_object* v_as_864_, size_t v_sz_865_, size_t v_i_866_, lean_object* v_b_867_){
_start:
{
uint8_t v___x_868_; 
v___x_868_ = lean_usize_dec_lt(v_i_866_, v_sz_865_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; 
lean_dec(v_a_863_);
v___x_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_869_, 0, v_b_867_);
return v___x_869_;
}
else
{
lean_object* v_a_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_a_870_ = lean_array_uget_borrowed(v_as_864_, v_i_866_);
v___x_871_ = l_Lean_Name_getString_x21(v_a_870_);
lean_inc(v_a_863_);
v___x_872_ = l_Lean_Json_getObjVal_x3f(v_a_863_, v___x_871_);
lean_dec_ref(v___x_871_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
lean_dec_ref(v_b_867_);
lean_dec(v_a_863_);
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_880_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_873_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_882_; size_t v___x_883_; size_t v___x_884_; 
v_a_881_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_a_881_);
lean_dec_ref_known(v___x_872_, 1);
v___x_882_ = lean_array_push(v_b_867_, v_a_881_);
v___x_883_ = ((size_t)1ULL);
v___x_884_ = lean_usize_add(v_i_866_, v___x_883_);
v_i_866_ = v___x_884_;
v_b_867_ = v___x_882_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Json_parseTagged_spec__0___boxed(lean_object* v_a_886_, lean_object* v_as_887_, lean_object* v_sz_888_, lean_object* v_i_889_, lean_object* v_b_890_){
_start:
{
size_t v_sz_boxed_891_; size_t v_i_boxed_892_; lean_object* v_res_893_; 
v_sz_boxed_891_ = lean_unbox_usize(v_sz_888_);
lean_dec(v_sz_888_);
v_i_boxed_892_ = lean_unbox_usize(v_i_889_);
lean_dec(v_i_889_);
v_res_893_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Json_parseTagged_spec__0(v_a_886_, v_as_887_, v_sz_boxed_891_, v_i_boxed_892_, v_b_890_);
lean_dec_ref(v_as_887_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_parseTagged(lean_object* v_json_901_, lean_object* v_tag_902_, lean_object* v_nFields_903_, lean_object* v_fieldNames_x3f_904_){
_start:
{
lean_object* v___x_905_; uint8_t v___x_906_; 
v___x_905_ = lean_unsigned_to_nat(0u);
v___x_906_ = lean_nat_dec_eq(v_nFields_903_, v___x_905_);
if (v___x_906_ == 0)
{
lean_object* v___x_907_; 
v___x_907_ = l_Lean_Json_getObjVal_x3f(v_json_901_, v_tag_902_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
lean_dec(v_nFields_903_);
v_a_908_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_907_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_907_);
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
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 1, 0);
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
else
{
if (lean_obj_tag(v_fieldNames_x3f_904_) == 0)
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_946_; 
v_a_916_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_946_ == 0)
{
v___x_918_ = v___x_907_;
v_isShared_919_ = v_isSharedCheck_946_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_907_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_946_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_920_; uint8_t v___x_921_; 
v___x_920_ = lean_unsigned_to_nat(1u);
v___x_921_ = lean_nat_dec_eq(v_nFields_903_, v___x_920_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; 
lean_del_object(v___x_918_);
v___x_922_ = l_Lean_Json_getArr_x3f(v_a_916_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_dec(v_nFields_903_);
return v___x_922_;
}
else
{
lean_object* v_a_923_; lean_object* v___x_924_; uint8_t v___x_925_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
v___x_924_ = lean_array_get_size(v_a_923_);
lean_dec(v_a_923_);
v___x_925_ = lean_nat_dec_eq(v___x_924_, v_nFields_903_);
if (v___x_925_ == 0)
{
lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_939_; 
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_939_ == 0)
{
lean_object* v_unused_940_; 
v_unused_940_ = lean_ctor_get(v___x_922_, 0);
lean_dec(v_unused_940_);
v___x_927_ = v___x_922_;
v_isShared_928_ = v_isSharedCheck_939_;
goto v_resetjp_926_;
}
else
{
lean_dec(v___x_922_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_939_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_929_ = ((lean_object*)(l_Lean_Json_parseTagged___closed__0));
v___x_930_ = l_Nat_reprFast(v___x_924_);
v___x_931_ = lean_string_append(v___x_929_, v___x_930_);
lean_dec_ref(v___x_930_);
v___x_932_ = ((lean_object*)(l_Lean_Json_parseTagged___closed__1));
v___x_933_ = lean_string_append(v___x_931_, v___x_932_);
v___x_934_ = l_Nat_reprFast(v_nFields_903_);
v___x_935_ = lean_string_append(v___x_933_, v___x_934_);
lean_dec_ref(v___x_934_);
if (v_isShared_928_ == 0)
{
lean_ctor_set_tag(v___x_927_, 0);
lean_ctor_set(v___x_927_, 0, v___x_935_);
v___x_937_ = v___x_927_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_935_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
else
{
lean_dec(v_nFields_903_);
return v___x_922_;
}
}
}
else
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_944_; 
lean_dec(v_nFields_903_);
v___x_941_ = lean_mk_empty_array_with_capacity(v___x_920_);
v___x_942_ = lean_array_push(v___x_941_, v_a_916_);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 0, v___x_942_);
v___x_944_ = v___x_918_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_942_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
else
{
lean_object* v_a_947_; lean_object* v_val_948_; lean_object* v_fields_949_; size_t v_sz_950_; size_t v___x_951_; lean_object* v___x_952_; 
lean_dec(v_nFields_903_);
v_a_947_ = lean_ctor_get(v___x_907_, 0);
lean_inc(v_a_947_);
lean_dec_ref_known(v___x_907_, 1);
v_val_948_ = lean_ctor_get(v_fieldNames_x3f_904_, 0);
v_fields_949_ = ((lean_object*)(l_Lean_Json_parseTagged___closed__2));
v_sz_950_ = lean_array_size(v_val_948_);
v___x_951_ = ((size_t)0ULL);
v___x_952_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Json_parseTagged_spec__0(v_a_947_, v_val_948_, v_sz_950_, v___x_951_, v_fields_949_);
return v___x_952_;
}
}
}
else
{
lean_object* v___x_953_; 
lean_dec(v_nFields_903_);
v___x_953_ = l_Lean_Json_getStr_x3f(v_json_901_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_953_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_953_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_976_; 
v_a_962_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_976_ == 0)
{
v___x_964_ = v___x_953_;
v_isShared_965_ = v_isSharedCheck_976_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_953_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_976_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
uint8_t v___x_966_; 
v___x_966_ = lean_string_dec_eq(v_a_962_, v_tag_902_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_973_; 
v___x_967_ = ((lean_object*)(l_Lean_Json_parseTagged___closed__3));
v___x_968_ = lean_string_append(v___x_967_, v_a_962_);
lean_dec(v_a_962_);
v___x_969_ = ((lean_object*)(l_Lean_Json_parseTagged___closed__1));
v___x_970_ = lean_string_append(v___x_968_, v___x_969_);
v___x_971_ = lean_string_append(v___x_970_, v_tag_902_);
if (v_isShared_965_ == 0)
{
lean_ctor_set_tag(v___x_964_, 0);
lean_ctor_set(v___x_964_, 0, v___x_971_);
v___x_973_ = v___x_964_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v___x_971_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
else
{
lean_object* v___x_975_; 
lean_del_object(v___x_964_);
lean_dec(v_a_962_);
v___x_975_ = ((lean_object*)(l_Lean_Json_parseTagged___closed__4));
return v___x_975_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_parseTagged___boxed(lean_object* v_json_977_, lean_object* v_tag_978_, lean_object* v_nFields_979_, lean_object* v_fieldNames_x3f_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l_Lean_Json_parseTagged(v_json_977_, v_tag_978_, v_nFields_979_, v_fieldNames_x3f_980_);
lean_dec(v_fieldNames_x3f_980_);
lean_dec_ref(v_tag_978_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_parseCtorFields_spec__0(lean_object* v_a_982_, size_t v_sz_983_, size_t v_i_984_, lean_object* v_bs_985_){
_start:
{
uint8_t v___x_986_; 
v___x_986_ = lean_usize_dec_lt(v_i_984_, v_sz_983_);
if (v___x_986_ == 0)
{
lean_object* v___x_987_; lean_object* v___x_988_; 
lean_dec(v_a_982_);
v___x_987_ = l_unsafeCast___redArg(v_bs_985_);
lean_dec_ref(v_bs_985_);
v___x_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
return v___x_988_;
}
else
{
lean_object* v_v_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v_v_989_ = lean_array_uget_borrowed(v_bs_985_, v_i_984_);
v___x_990_ = l_unsafeCast___redArg(v_v_989_);
v___x_991_ = l_Lean_Name_getString_x21(v___x_990_);
lean_dec(v___x_990_);
lean_inc(v_a_982_);
v___x_992_ = l_Lean_Json_getObjVal_x3f(v_a_982_, v___x_991_);
lean_dec_ref(v___x_991_);
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1000_; 
lean_dec_ref(v_bs_985_);
lean_dec(v_a_982_);
v_a_993_ = lean_ctor_get(v___x_992_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_995_ = v___x_992_;
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_dec(v___x_992_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_998_; 
if (v_isShared_996_ == 0)
{
v___x_998_ = v___x_995_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_a_993_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1002_; lean_object* v_bs_x27_1003_; size_t v___x_1004_; size_t v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v_a_1001_ = lean_ctor_get(v___x_992_, 0);
lean_inc(v_a_1001_);
lean_dec_ref_known(v___x_992_, 1);
v___x_1002_ = lean_unsigned_to_nat(0u);
v_bs_x27_1003_ = lean_array_uset(v_bs_985_, v_i_984_, v___x_1002_);
v___x_1004_ = ((size_t)1ULL);
v___x_1005_ = lean_usize_add(v_i_984_, v___x_1004_);
v___x_1006_ = l_unsafeCast___redArg(v_a_1001_);
lean_dec(v_a_1001_);
v___x_1007_ = lean_array_uset(v_bs_x27_1003_, v_i_984_, v___x_1006_);
v_i_984_ = v___x_1005_;
v_bs_985_ = v___x_1007_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_parseCtorFields_spec__0___boxed(lean_object* v_a_1009_, lean_object* v_sz_1010_, lean_object* v_i_1011_, lean_object* v_bs_1012_){
_start:
{
size_t v_sz_boxed_1013_; size_t v_i_boxed_1014_; lean_object* v_res_1015_; 
v_sz_boxed_1013_ = lean_unbox_usize(v_sz_1010_);
lean_dec(v_sz_1010_);
v_i_boxed_1014_ = lean_unbox_usize(v_i_1011_);
lean_dec(v_i_1011_);
v_res_1015_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_parseCtorFields_spec__0(v_a_1009_, v_sz_boxed_1013_, v_i_boxed_1014_, v_bs_1012_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_parseCtorFields(lean_object* v_json_1016_, lean_object* v_tag_1017_, lean_object* v_nFields_1018_, lean_object* v_fieldNames_x3f_1019_){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = l_Lean_Json_getObjVal_x3f(v_json_1016_, v_tag_1017_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1028_; 
lean_dec(v_nFields_1018_);
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1023_ = v___x_1020_;
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1020_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
else
{
if (lean_obj_tag(v_fieldNames_x3f_1019_) == 0)
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1059_; 
v_a_1029_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1031_ = v___x_1020_;
v_isShared_1032_ = v_isSharedCheck_1059_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1020_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1059_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; uint8_t v___x_1034_; 
v___x_1033_ = lean_unsigned_to_nat(1u);
v___x_1034_ = lean_nat_dec_eq(v_nFields_1018_, v___x_1033_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; 
lean_del_object(v___x_1031_);
v___x_1035_ = l_Lean_Json_getArr_x3f(v_a_1029_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_dec(v_nFields_1018_);
return v___x_1035_;
}
else
{
lean_object* v_a_1036_; lean_object* v___x_1037_; uint8_t v___x_1038_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1036_);
v___x_1037_ = lean_array_get_size(v_a_1036_);
lean_dec(v_a_1036_);
v___x_1038_ = lean_nat_dec_eq(v___x_1037_, v_nFields_1018_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1052_; 
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1052_ == 0)
{
lean_object* v_unused_1053_; 
v_unused_1053_ = lean_ctor_get(v___x_1035_, 0);
lean_dec(v_unused_1053_);
v___x_1040_ = v___x_1035_;
v_isShared_1041_ = v_isSharedCheck_1052_;
goto v_resetjp_1039_;
}
else
{
lean_dec(v___x_1035_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1052_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1042_ = ((lean_object*)(l_Lean_Json_parseTagged___closed__0));
v___x_1043_ = l_Nat_reprFast(v___x_1037_);
v___x_1044_ = lean_string_append(v___x_1042_, v___x_1043_);
lean_dec_ref(v___x_1043_);
v___x_1045_ = ((lean_object*)(l_Lean_Json_parseTagged___closed__1));
v___x_1046_ = lean_string_append(v___x_1044_, v___x_1045_);
v___x_1047_ = l_Nat_reprFast(v_nFields_1018_);
v___x_1048_ = lean_string_append(v___x_1046_, v___x_1047_);
lean_dec_ref(v___x_1047_);
if (v_isShared_1041_ == 0)
{
lean_ctor_set_tag(v___x_1040_, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1048_);
v___x_1050_ = v___x_1040_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
else
{
lean_dec(v_nFields_1018_);
return v___x_1035_;
}
}
}
else
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1057_; 
lean_dec(v_nFields_1018_);
v___x_1054_ = lean_mk_empty_array_with_capacity(v___x_1033_);
v___x_1055_ = lean_array_push(v___x_1054_, v_a_1029_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1055_);
v___x_1057_ = v___x_1031_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
else
{
lean_object* v_a_1060_; lean_object* v_val_1061_; size_t v_sz_1062_; size_t v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
lean_dec(v_nFields_1018_);
v_a_1060_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_a_1060_);
lean_dec_ref_known(v___x_1020_, 1);
v_val_1061_ = lean_ctor_get(v_fieldNames_x3f_1019_, 0);
v_sz_1062_ = lean_array_size(v_val_1061_);
v___x_1063_ = ((size_t)0ULL);
v___x_1064_ = l_unsafeCast___redArg(v_val_1061_);
v___x_1065_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_parseCtorFields_spec__0(v_a_1060_, v_sz_1062_, v___x_1063_, v___x_1064_);
v___x_1066_ = l_unsafeCast___redArg(v___x_1065_);
lean_dec_ref(v___x_1065_);
return v___x_1066_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_parseCtorFields___boxed(lean_object* v_json_1067_, lean_object* v_tag_1068_, lean_object* v_nFields_1069_, lean_object* v_fieldNames_x3f_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Lean_Json_parseCtorFields(v_json_1067_, v_tag_1068_, v_nFields_1069_, v_fieldNames_x3f_1070_);
lean_dec(v_fieldNames_x3f_1070_);
lean_dec_ref(v_tag_1068_);
return v_res_1071_;
}
}
lean_object* runtime_initialize_Lean_Data_Json_Printer(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_GetLit(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Json_Printer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json_Printer(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Data_Array_GetLit(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json_Printer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Json_FromToJson_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

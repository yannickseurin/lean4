// Lean compiler output
// Module: Lake.Toml.Decode
// Imports: public import Init.System.FilePath public import Lake.Toml.Data import Init.Data.ToString.Macro
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
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_Toml_ppKey(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_push___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_findEntry_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_decodeToml___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_decodeToml(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_ensureDecode___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_ensureDecode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecodeD___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecodeD(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecode_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecode_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_optDecodeD___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_optDecodeD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_optDecode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_optDecode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_optDecode_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_optDecode_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_mergeErrors___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_mergeErrors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_logDecodeErrorAt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_throwDecodeErrorAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_throwDecodeErrorAt(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_decodeArray___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_push___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_Toml_decodeArray___redArg___lam__0___closed__0 = (const lean_object*)&l_Lake_Toml_decodeArray___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_decodeArray___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_decodeArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_decodeArray___redArg___closed__0 = (const lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__0_value;
static const lean_closure_object l_Lake_Toml_decodeArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_decodeArray___redArg___closed__1 = (const lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__1_value;
static const lean_closure_object l_Lake_Toml_decodeArray___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_decodeArray___redArg___closed__2 = (const lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__2_value;
static const lean_closure_object l_Lake_Toml_decodeArray___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_decodeArray___redArg___closed__3 = (const lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__3_value;
static const lean_closure_object l_Lake_Toml_decodeArray___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_decodeArray___redArg___closed__4 = (const lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__4_value;
static const lean_closure_object l_Lake_Toml_decodeArray___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_decodeArray___redArg___closed__5 = (const lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__5_value;
static const lean_closure_object l_Lake_Toml_decodeArray___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_decodeArray___redArg___closed__6 = (const lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__6_value;
static const lean_ctor_object l_Lake_Toml_decodeArray___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__0_value),((lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__1_value)}};
static const lean_object* l_Lake_Toml_decodeArray___redArg___closed__7 = (const lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__7_value;
static const lean_ctor_object l_Lake_Toml_decodeArray___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__7_value),((lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__2_value),((lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__3_value),((lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__4_value),((lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__5_value)}};
static const lean_object* l_Lake_Toml_decodeArray___redArg___closed__8 = (const lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__8_value;
static const lean_ctor_object l_Lake_Toml_decodeArray___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__8_value),((lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__6_value)}};
static const lean_object* l_Lake_Toml_decodeArray___redArg___closed__9 = (const lean_object*)&l_Lake_Toml_decodeArray___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lake_Toml_decodeArray___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_decodeArray(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Toml_Decode_0__Lake_Toml_instDecodeTomlValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_pure, .m_arity = 5, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lake_Toml_Decode_0__Lake_Toml_instDecodeTomlValue___closed__0 = (const lean_object*)&l___private_Lake_Toml_Decode_0__Lake_Toml_instDecodeTomlValue___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Toml_Decode_0__Lake_Toml_instDecodeTomlValue = (const lean_object*)&l___private_Lake_Toml_Decode_0__Lake_Toml_instDecodeTomlValue___closed__0_value;
static const lean_string_object l_Lake_Toml_Value_decodeString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "expected string"};
static const lean_object* l_Lake_Toml_Value_decodeString___closed__0 = (const lean_object*)&l_Lake_Toml_Value_decodeString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeString(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_Value_instDecodeTomlString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_Value_decodeString, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_Value_instDecodeTomlString___closed__0 = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_Value_instDecodeTomlString = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Value_instDecodeTomlFilePath___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_Value_instDecodeTomlFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_Value_instDecodeTomlFilePath___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_Value_instDecodeTomlFilePath___closed__0 = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlFilePath___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_Value_instDecodeTomlFilePath = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlFilePath___closed__0_value;
static const lean_string_object l_Lake_Toml_Value_decodeName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected name"};
static const lean_object* l_Lake_Toml_Value_decodeName___closed__0 = (const lean_object*)&l_Lake_Toml_Value_decodeName___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeName(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_Value_instDecodeTomlName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_Value_decodeName, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_Value_instDecodeTomlName___closed__0 = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_Value_instDecodeTomlName = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlName___closed__0_value;
static const lean_string_object l_Lake_Toml_Value_decodeInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "expected integer"};
static const lean_object* l_Lake_Toml_Value_decodeInt___closed__0 = (const lean_object*)&l_Lake_Toml_Value_decodeInt___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeInt(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_Value_instDecodeTomlInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_Value_decodeInt, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_Value_instDecodeTomlInt___closed__0 = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_Value_instDecodeTomlInt = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlInt___closed__0_value;
static const lean_string_object l_Lake_Toml_Value_decodeNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected nonnegative integer"};
static const lean_object* l_Lake_Toml_Value_decodeNat___closed__0 = (const lean_object*)&l_Lake_Toml_Value_decodeNat___closed__0_value;
static lean_once_cell_t l_Lake_Toml_Value_decodeNat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_Value_decodeNat___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeNat(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_Value_instDecodeTomlNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_Value_decodeNat, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_Value_instDecodeTomlNat___closed__0 = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_Value_instDecodeTomlNat = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlNat___closed__0_value;
static const lean_string_object l_Lake_Toml_Value_decodeFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected float"};
static const lean_object* l_Lake_Toml_Value_decodeFloat___closed__0 = (const lean_object*)&l_Lake_Toml_Value_decodeFloat___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeFloat(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_Value_instDecodeTomlFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_Value_decodeFloat, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_Value_instDecodeTomlFloat___closed__0 = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlFloat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_Value_instDecodeTomlFloat = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlFloat___closed__0_value;
static const lean_string_object l_Lake_Toml_Value_decodeBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "expected boolean"};
static const lean_object* l_Lake_Toml_Value_decodeBool___closed__0 = (const lean_object*)&l_Lake_Toml_Value_decodeBool___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeBool(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_Value_instDecodeTomlBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_Value_decodeBool, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_Value_instDecodeTomlBool___closed__0 = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlBool___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_Value_instDecodeTomlBool = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlBool___closed__0_value;
static const lean_string_object l_Lake_Toml_Value_decodeDateTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected date-time"};
static const lean_object* l_Lake_Toml_Value_decodeDateTime___closed__0 = (const lean_object*)&l_Lake_Toml_Value_decodeDateTime___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeDateTime(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_Value_instDecodeTomlDateTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_Value_decodeDateTime, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_Value_instDecodeTomlDateTime___closed__0 = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlDateTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_Value_instDecodeTomlDateTime = (const lean_object*)&l_Lake_Toml_Value_instDecodeTomlDateTime___closed__0_value;
static const lean_string_object l_Lake_Toml_Value_decodeValueArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected array"};
static const lean_object* l_Lake_Toml_Value_decodeValueArray___closed__0 = (const lean_object*)&l_Lake_Toml_Value_decodeValueArray___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeValueArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeArray___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeArray(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_instDecodeTomlArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_instDecodeTomlArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeArrayOrSingleton___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeArrayOrSingleton(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_Value_decodeTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected table"};
static const lean_object* l_Lake_Toml_Value_decodeTable___closed__0 = (const lean_object*)&l_Lake_Toml_Value_decodeTable___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeTable(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Toml_Decode_0__Lake_Toml_Value_instDecodeTomlTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_Value_decodeTable, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Decode_0__Lake_Toml_Value_instDecodeTomlTable___closed__0 = (const lean_object*)&l___private_Lake_Toml_Decode_0__Lake_Toml_Value_instDecodeTomlTable___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Toml_Decode_0__Lake_Toml_Value_instDecodeTomlTable = (const lean_object*)&l___private_Lake_Toml_Decode_0__Lake_Toml_Value_instDecodeTomlTable___closed__0_value;
static const lean_string_object l_Lake_Toml_decodeKeyval___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "key "};
static const lean_object* l_Lake_Toml_decodeKeyval___redArg___lam__0___closed__0 = (const lean_object*)&l_Lake_Toml_decodeKeyval___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lake_Toml_decodeKeyval___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lake_Toml_decodeKeyval___redArg___lam__0___closed__1 = (const lean_object*)&l_Lake_Toml_decodeKeyval___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_Table_decodeValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_Table_decodeValue___closed__0 = (const lean_object*)&l_Lake_Toml_Table_decodeValue___closed__0_value;
static const lean_string_object l_Lake_Toml_Table_decodeValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "missing required key: "};
static const lean_object* l_Lake_Toml_Table_decodeValue___closed__1 = (const lean_object*)&l_Lake_Toml_Table_decodeValue___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decodeValue(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decode_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decode_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decodeNameMap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decodeNameMap___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_Table_decodeNameMap___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_pure, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lake_Toml_Table_decodeNameMap___redArg___closed__0 = (const lean_object*)&l_Lake_Toml_Table_decodeNameMap___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decodeNameMap___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decodeNameMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instDecodeTomlNameMap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instDecodeTomlNameMap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instDecodeTomlNameMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecode_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecode_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecodeD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecodeD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_decodeToml___redArg(lean_object* v_inst_1_, lean_object* v_v_2_, lean_object* v_a_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_apply_2(v_inst_1_, v_v_2_, v_a_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lake_decodeToml(lean_object* v_00_u03b1_5_, lean_object* v_inst_6_, lean_object* v_v_7_, lean_object* v_a_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_apply_2(v_inst_6_, v_v_7_, v_a_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ensureDecode___redArg(lean_object* v_x_10_, lean_object* v_es_11_){
_start:
{
lean_object* v___x_12_; lean_object* v_a_13_; lean_object* v_a_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_28_; 
v___x_12_ = lean_apply_1(v_x_10_, v_es_11_);
v_a_13_ = lean_ctor_get(v___x_12_, 0);
v_a_14_ = lean_ctor_get(v___x_12_, 1);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_28_ == 0)
{
v___x_16_ = v___x_12_;
v_isShared_17_ = v_isSharedCheck_28_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_a_14_);
lean_inc(v_a_13_);
lean_dec(v___x_12_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_28_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_18_; lean_object* v___x_19_; uint8_t v___x_20_; 
v___x_18_ = lean_array_get_size(v_a_14_);
v___x_19_ = lean_unsigned_to_nat(0u);
v___x_20_ = lean_nat_dec_eq(v___x_18_, v___x_19_);
if (v___x_20_ == 0)
{
lean_object* v___x_21_; lean_object* v___x_23_; 
lean_dec(v_a_13_);
v___x_21_ = lean_box(0);
if (v_isShared_17_ == 0)
{
lean_ctor_set_tag(v___x_16_, 1);
lean_ctor_set(v___x_16_, 0, v___x_21_);
v___x_23_ = v___x_16_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v___x_21_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v_a_14_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
else
{
lean_object* v___x_26_; 
if (v_isShared_17_ == 0)
{
v___x_26_ = v___x_16_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_13_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_a_14_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ensureDecode(lean_object* v_00_u03b1_29_, lean_object* v_x_30_, lean_object* v_es_31_){
_start:
{
lean_object* v___x_32_; lean_object* v_a_33_; lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_48_; 
v___x_32_ = lean_apply_1(v_x_30_, v_es_31_);
v_a_33_ = lean_ctor_get(v___x_32_, 0);
v_a_34_ = lean_ctor_get(v___x_32_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_48_ == 0)
{
v___x_36_ = v___x_32_;
v_isShared_37_ = v_isSharedCheck_48_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_inc(v_a_33_);
lean_dec(v___x_32_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_48_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_38_ = lean_array_get_size(v_a_34_);
v___x_39_ = lean_unsigned_to_nat(0u);
v___x_40_ = lean_nat_dec_eq(v___x_38_, v___x_39_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; lean_object* v___x_43_; 
lean_dec(v_a_33_);
v___x_41_ = lean_box(0);
if (v_isShared_37_ == 0)
{
lean_ctor_set_tag(v___x_36_, 1);
lean_ctor_set(v___x_36_, 0, v___x_41_);
v___x_43_ = v___x_36_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_41_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_a_34_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
else
{
lean_object* v___x_46_; 
if (v_isShared_37_ == 0)
{
v___x_46_ = v___x_36_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_a_33_);
lean_ctor_set(v_reuseFailAlloc_47_, 1, v_a_34_);
v___x_46_ = v_reuseFailAlloc_47_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
return v___x_46_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecodeD___redArg(lean_object* v_default_49_, lean_object* v_x_50_, lean_object* v_es_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_apply_1(v_x_50_, v_es_51_);
if (lean_obj_tag(v___x_52_) == 0)
{
lean_object* v_a_53_; lean_object* v_a_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
lean_dec(v_default_49_);
v_a_53_ = lean_ctor_get(v___x_52_, 0);
v_a_54_ = lean_ctor_get(v___x_52_, 1);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_61_ == 0)
{
v___x_56_ = v___x_52_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_a_54_);
lean_inc(v_a_53_);
lean_dec(v___x_52_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_a_53_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v_a_54_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
else
{
lean_object* v_a_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_69_; 
v_a_62_ = lean_ctor_get(v___x_52_, 1);
v_isSharedCheck_69_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_69_ == 0)
{
lean_object* v_unused_70_; 
v_unused_70_ = lean_ctor_get(v___x_52_, 0);
lean_dec(v_unused_70_);
v___x_64_ = v___x_52_;
v_isShared_65_ = v_isSharedCheck_69_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_a_62_);
lean_dec(v___x_52_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_69_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_67_; 
if (v_isShared_65_ == 0)
{
lean_ctor_set_tag(v___x_64_, 0);
lean_ctor_set(v___x_64_, 0, v_default_49_);
v___x_67_ = v___x_64_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_default_49_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v_a_62_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecodeD(lean_object* v_00_u03b1_71_, lean_object* v_default_72_, lean_object* v_x_73_, lean_object* v_es_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_apply_1(v_x_73_, v_es_74_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_84_; 
lean_dec(v_default_72_);
v_a_76_ = lean_ctor_get(v___x_75_, 0);
v_a_77_ = lean_ctor_get(v___x_75_, 1);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_84_ == 0)
{
v___x_79_ = v___x_75_;
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_inc(v_a_76_);
lean_dec(v___x_75_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_a_76_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v_a_77_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
else
{
lean_object* v_a_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_92_; 
v_a_85_ = lean_ctor_get(v___x_75_, 1);
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_92_ == 0)
{
lean_object* v_unused_93_; 
v_unused_93_ = lean_ctor_get(v___x_75_, 0);
lean_dec(v_unused_93_);
v___x_87_ = v___x_75_;
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_a_85_);
lean_dec(v___x_75_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_90_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set_tag(v___x_87_, 0);
lean_ctor_set(v___x_87_, 0, v_default_72_);
v___x_90_ = v___x_87_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_default_72_);
lean_ctor_set(v_reuseFailAlloc_91_, 1, v_a_85_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecode_x3f___redArg(lean_object* v_x_94_, lean_object* v_es_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_apply_1(v_x_94_, v_es_95_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v_a_97_; lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_106_; 
v_a_97_ = lean_ctor_get(v___x_96_, 0);
v_a_98_ = lean_ctor_get(v___x_96_, 1);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_106_ == 0)
{
v___x_100_ = v___x_96_;
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_inc(v_a_97_);
lean_dec(v___x_96_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_102_, 0, v_a_97_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 0, v___x_102_);
v___x_104_ = v___x_100_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_102_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v_a_98_);
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
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_115_; 
v_a_107_ = lean_ctor_get(v___x_96_, 1);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_115_ == 0)
{
lean_object* v_unused_116_; 
v_unused_116_ = lean_ctor_get(v___x_96_, 0);
lean_dec(v_unused_116_);
v___x_109_ = v___x_96_;
v_isShared_110_ = v_isSharedCheck_115_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___x_96_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_115_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_111_; lean_object* v___x_113_; 
v___x_111_ = lean_box(0);
if (v_isShared_110_ == 0)
{
lean_ctor_set_tag(v___x_109_, 0);
lean_ctor_set(v___x_109_, 0, v___x_111_);
v___x_113_ = v___x_109_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_111_);
lean_ctor_set(v_reuseFailAlloc_114_, 1, v_a_107_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecode_x3f(lean_object* v_00_u03b1_117_, lean_object* v_x_118_, lean_object* v_es_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lean_apply_1(v_x_118_, v_es_119_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_130_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
v_a_122_ = lean_ctor_get(v___x_120_, 1);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_130_ == 0)
{
v___x_124_ = v___x_120_;
v_isShared_125_ = v_isSharedCheck_130_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_inc(v_a_121_);
lean_dec(v___x_120_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_130_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_126_; lean_object* v___x_128_; 
v___x_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_126_, 0, v_a_121_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v___x_126_);
v___x_128_ = v___x_124_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v___x_126_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v_a_122_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
else
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_139_; 
v_a_131_ = lean_ctor_get(v___x_120_, 1);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_139_ == 0)
{
lean_object* v_unused_140_; 
v_unused_140_ = lean_ctor_get(v___x_120_, 0);
lean_dec(v_unused_140_);
v___x_133_ = v___x_120_;
v_isShared_134_ = v_isSharedCheck_139_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_120_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_139_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_135_ = lean_box(0);
if (v_isShared_134_ == 0)
{
lean_ctor_set_tag(v___x_133_, 0);
lean_ctor_set(v___x_133_, 0, v___x_135_);
v___x_137_ = v___x_133_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v___x_135_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v_a_131_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecode___redArg(lean_object* v_inst_141_, lean_object* v_x_142_, lean_object* v_a_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lean_apply_1(v_x_142_, v_a_143_);
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v_a_145_; lean_object* v_a_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_153_; 
lean_dec(v_inst_141_);
v_a_145_ = lean_ctor_get(v___x_144_, 0);
v_a_146_ = lean_ctor_get(v___x_144_, 1);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_153_ == 0)
{
v___x_148_ = v___x_144_;
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_a_146_);
lean_inc(v_a_145_);
lean_dec(v___x_144_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_149_ == 0)
{
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_a_145_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v_a_146_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
else
{
lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
v_a_154_ = lean_ctor_get(v___x_144_, 1);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; 
v_unused_162_ = lean_ctor_get(v___x_144_, 0);
lean_dec(v_unused_162_);
v___x_156_ = v___x_144_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v___x_144_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
lean_ctor_set_tag(v___x_156_, 0);
lean_ctor_set(v___x_156_, 0, v_inst_141_);
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_inst_141_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_a_154_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_tryDecode(lean_object* v_00_u03b1_163_, lean_object* v_inst_164_, lean_object* v_x_165_, lean_object* v_a_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_apply_1(v_x_165_, v_a_166_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_a_168_; lean_object* v_a_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_176_; 
lean_dec(v_inst_164_);
v_a_168_ = lean_ctor_get(v___x_167_, 0);
v_a_169_ = lean_ctor_get(v___x_167_, 1);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_176_ == 0)
{
v___x_171_ = v___x_167_;
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_a_169_);
lean_inc(v_a_168_);
lean_dec(v___x_167_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_174_; 
if (v_isShared_172_ == 0)
{
v___x_174_ = v___x_171_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_168_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_a_169_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
else
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_184_; 
v_a_177_ = lean_ctor_get(v___x_167_, 1);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_184_ == 0)
{
lean_object* v_unused_185_; 
v_unused_185_ = lean_ctor_get(v___x_167_, 0);
lean_dec(v_unused_185_);
v___x_179_ = v___x_167_;
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v___x_167_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
lean_ctor_set_tag(v___x_179_, 0);
lean_ctor_set(v___x_179_, 0, v_inst_164_);
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_inst_164_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_a_177_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_optDecodeD___redArg(lean_object* v_default_186_, lean_object* v_a_x3f_187_, lean_object* v_f_188_, lean_object* v_a_189_){
_start:
{
if (lean_obj_tag(v_a_x3f_187_) == 0)
{
lean_object* v___x_190_; 
lean_dec_ref(v_f_188_);
v___x_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_190_, 0, v_default_186_);
lean_ctor_set(v___x_190_, 1, v_a_189_);
return v___x_190_;
}
else
{
lean_object* v_val_191_; lean_object* v___x_192_; 
v_val_191_ = lean_ctor_get(v_a_x3f_187_, 0);
lean_inc(v_val_191_);
lean_dec_ref_known(v_a_x3f_187_, 1);
v___x_192_ = lean_apply_2(v_f_188_, v_val_191_, v_a_189_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v_a_193_; lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_201_; 
lean_dec(v_default_186_);
v_a_193_ = lean_ctor_get(v___x_192_, 0);
v_a_194_ = lean_ctor_get(v___x_192_, 1);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_201_ == 0)
{
v___x_196_ = v___x_192_;
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_inc(v_a_193_);
lean_dec(v___x_192_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_199_; 
if (v_isShared_197_ == 0)
{
v___x_199_ = v___x_196_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_a_193_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_a_194_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
else
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
v_a_202_ = lean_ctor_get(v___x_192_, 1);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_209_ == 0)
{
lean_object* v_unused_210_; 
v_unused_210_ = lean_ctor_get(v___x_192_, 0);
lean_dec(v_unused_210_);
v___x_204_ = v___x_192_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_192_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
lean_ctor_set_tag(v___x_204_, 0);
lean_ctor_set(v___x_204_, 0, v_default_186_);
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_default_186_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_a_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_optDecodeD(lean_object* v_00_u03b2_211_, lean_object* v_00_u03b1_212_, lean_object* v_default_213_, lean_object* v_a_x3f_214_, lean_object* v_f_215_, lean_object* v_a_216_){
_start:
{
if (lean_obj_tag(v_a_x3f_214_) == 0)
{
lean_object* v___x_217_; 
lean_dec_ref(v_f_215_);
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v_default_213_);
lean_ctor_set(v___x_217_, 1, v_a_216_);
return v___x_217_;
}
else
{
lean_object* v_val_218_; lean_object* v___x_219_; 
v_val_218_ = lean_ctor_get(v_a_x3f_214_, 0);
lean_inc(v_val_218_);
lean_dec_ref_known(v_a_x3f_214_, 1);
v___x_219_ = lean_apply_2(v_f_215_, v_val_218_, v_a_216_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
lean_dec(v_default_213_);
v_a_220_ = lean_ctor_get(v___x_219_, 0);
v_a_221_ = lean_ctor_get(v___x_219_, 1);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_219_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_inc(v_a_220_);
lean_dec(v___x_219_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_220_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v_a_221_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
v_a_229_ = lean_ctor_get(v___x_219_, 1);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_236_ == 0)
{
lean_object* v_unused_237_; 
v_unused_237_ = lean_ctor_get(v___x_219_, 0);
lean_dec(v_unused_237_);
v___x_231_ = v___x_219_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_219_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
lean_ctor_set_tag(v___x_231_, 0);
lean_ctor_set(v___x_231_, 0, v_default_213_);
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_default_213_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_optDecode___redArg(lean_object* v_inst_238_, lean_object* v_a_x3f_239_, lean_object* v_f_240_, lean_object* v_a_241_){
_start:
{
if (lean_obj_tag(v_a_x3f_239_) == 0)
{
lean_object* v___x_242_; 
lean_dec_ref(v_f_240_);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v_inst_238_);
lean_ctor_set(v___x_242_, 1, v_a_241_);
return v___x_242_;
}
else
{
lean_object* v_val_243_; lean_object* v___x_244_; 
v_val_243_ = lean_ctor_get(v_a_x3f_239_, 0);
lean_inc(v_val_243_);
lean_dec_ref_known(v_a_x3f_239_, 1);
v___x_244_ = lean_apply_2(v_f_240_, v_val_243_, v_a_241_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_253_; 
lean_dec(v_inst_238_);
v_a_245_ = lean_ctor_get(v___x_244_, 0);
v_a_246_ = lean_ctor_get(v___x_244_, 1);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_253_ == 0)
{
v___x_248_ = v___x_244_;
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_inc(v_a_245_);
lean_dec(v___x_244_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_a_245_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v_a_246_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
else
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
v_a_254_ = lean_ctor_get(v___x_244_, 1);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_261_ == 0)
{
lean_object* v_unused_262_; 
v_unused_262_ = lean_ctor_get(v___x_244_, 0);
lean_dec(v_unused_262_);
v___x_256_ = v___x_244_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_244_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set_tag(v___x_256_, 0);
lean_ctor_set(v___x_256_, 0, v_inst_238_);
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_inst_238_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_optDecode(lean_object* v_00_u03b2_263_, lean_object* v_00_u03b1_264_, lean_object* v_inst_265_, lean_object* v_a_x3f_266_, lean_object* v_f_267_, lean_object* v_a_268_){
_start:
{
if (lean_obj_tag(v_a_x3f_266_) == 0)
{
lean_object* v___x_269_; 
lean_dec_ref(v_f_267_);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v_inst_265_);
lean_ctor_set(v___x_269_, 1, v_a_268_);
return v___x_269_;
}
else
{
lean_object* v_val_270_; lean_object* v___x_271_; 
v_val_270_ = lean_ctor_get(v_a_x3f_266_, 0);
lean_inc(v_val_270_);
lean_dec_ref_known(v_a_x3f_266_, 1);
v___x_271_ = lean_apply_2(v_f_267_, v_val_270_, v_a_268_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
lean_dec(v_inst_265_);
v_a_272_ = lean_ctor_get(v___x_271_, 0);
v_a_273_ = lean_ctor_get(v___x_271_, 1);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_271_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_inc(v_a_272_);
lean_dec(v___x_271_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_272_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
v_a_281_ = lean_ctor_get(v___x_271_, 1);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_288_ == 0)
{
lean_object* v_unused_289_; 
v_unused_289_ = lean_ctor_get(v___x_271_, 0);
lean_dec(v_unused_289_);
v___x_283_ = v___x_271_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_271_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
lean_ctor_set_tag(v___x_283_, 0);
lean_ctor_set(v___x_283_, 0, v_inst_265_);
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_inst_265_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_optDecode_x3f___redArg(lean_object* v_a_x3f_290_, lean_object* v_f_291_, lean_object* v_a_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_box(0);
if (lean_obj_tag(v_a_x3f_290_) == 0)
{
lean_object* v___x_294_; 
lean_dec_ref(v_f_291_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v_a_292_);
return v___x_294_;
}
else
{
lean_object* v_val_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_321_; 
v_val_295_ = lean_ctor_get(v_a_x3f_290_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v_a_x3f_290_);
if (v_isSharedCheck_321_ == 0)
{
v___x_297_ = v_a_x3f_290_;
v_isShared_298_ = v_isSharedCheck_321_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_val_295_);
lean_dec(v_a_x3f_290_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_321_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_299_; 
v___x_299_ = lean_apply_2(v_f_291_, v_val_295_, v_a_292_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_311_; 
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v_a_301_ = lean_ctor_get(v___x_299_, 1);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_311_ == 0)
{
v___x_303_ = v___x_299_;
v_isShared_304_ = v_isSharedCheck_311_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_inc(v_a_300_);
lean_dec(v___x_299_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_311_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v_a_300_);
v___x_306_ = v___x_297_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_a_300_);
v___x_306_ = v_reuseFailAlloc_310_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
lean_object* v___x_308_; 
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 0, v___x_306_);
v___x_308_ = v___x_303_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_306_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v_a_301_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
else
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_319_; 
lean_del_object(v___x_297_);
v_a_312_ = lean_ctor_get(v___x_299_, 1);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_319_ == 0)
{
lean_object* v_unused_320_; 
v_unused_320_ = lean_ctor_get(v___x_299_, 0);
lean_dec(v_unused_320_);
v___x_314_ = v___x_299_;
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_299_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
lean_ctor_set_tag(v___x_314_, 0);
lean_ctor_set(v___x_314_, 0, v___x_293_);
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_318_, 1, v_a_312_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_optDecode_x3f(lean_object* v_00_u03b1_322_, lean_object* v_00_u03b2_323_, lean_object* v_a_x3f_324_, lean_object* v_f_325_, lean_object* v_a_326_){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = lean_box(0);
if (lean_obj_tag(v_a_x3f_324_) == 0)
{
lean_object* v___x_328_; 
lean_dec_ref(v_f_325_);
v___x_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v_a_326_);
return v___x_328_;
}
else
{
lean_object* v_val_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_355_; 
v_val_329_ = lean_ctor_get(v_a_x3f_324_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v_a_x3f_324_);
if (v_isSharedCheck_355_ == 0)
{
v___x_331_ = v_a_x3f_324_;
v_isShared_332_ = v_isSharedCheck_355_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_val_329_);
lean_dec(v_a_x3f_324_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_355_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_333_; 
v___x_333_ = lean_apply_2(v_f_325_, v_val_329_, v_a_326_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_345_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
v_a_335_ = lean_ctor_get(v___x_333_, 1);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_345_ == 0)
{
v___x_337_ = v___x_333_;
v_isShared_338_ = v_isSharedCheck_345_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_inc(v_a_334_);
lean_dec(v___x_333_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_345_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 0, v_a_334_);
v___x_340_ = v___x_331_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_334_);
v___x_340_ = v_reuseFailAlloc_344_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_342_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v___x_340_);
v___x_342_ = v___x_337_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_340_);
lean_ctor_set(v_reuseFailAlloc_343_, 1, v_a_335_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_del_object(v___x_331_);
v_a_346_ = lean_ctor_get(v___x_333_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_353_ == 0)
{
lean_object* v_unused_354_; 
v_unused_354_ = lean_ctor_get(v___x_333_, 0);
lean_dec(v_unused_354_);
v___x_348_ = v___x_333_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_333_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
lean_ctor_set_tag(v___x_348_, 0);
lean_ctor_set(v___x_348_, 0, v___x_327_);
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_327_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mergeErrors___redArg(lean_object* v_x_u2081_356_, lean_object* v_x_u2082_357_, lean_object* v_f_358_, lean_object* v_es_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = lean_apply_1(v_x_u2081_356_, v_es_359_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; lean_object* v_a_362_; lean_object* v___x_363_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_361_);
v_a_362_ = lean_ctor_get(v___x_360_, 1);
lean_inc(v_a_362_);
lean_dec_ref_known(v___x_360_, 2);
v___x_363_ = lean_apply_1(v_x_u2082_357_, v_a_362_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_373_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
v_a_365_ = lean_ctor_get(v___x_363_, 1);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_373_ == 0)
{
v___x_367_ = v___x_363_;
v_isShared_368_ = v_isSharedCheck_373_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_inc(v_a_364_);
lean_dec(v___x_363_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_373_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; lean_object* v___x_371_; 
v___x_369_ = lean_apply_2(v_f_358_, v_a_361_, v_a_364_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_369_);
v___x_371_ = v___x_367_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v_a_365_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
else
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_382_; 
lean_dec(v_a_361_);
lean_dec(v_f_358_);
v_a_374_ = lean_ctor_get(v___x_363_, 1);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_382_ == 0)
{
lean_object* v_unused_383_; 
v_unused_383_ = lean_ctor_get(v___x_363_, 0);
lean_dec(v_unused_383_);
v___x_376_ = v___x_363_;
v_isShared_377_ = v_isSharedCheck_382_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_363_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_382_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_378_ = lean_box(0);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 0, v___x_378_);
v___x_380_ = v___x_376_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
lean_ctor_set(v_reuseFailAlloc_381_, 1, v_a_374_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_392_; 
lean_dec(v_f_358_);
lean_dec_ref(v_x_u2082_357_);
v_a_384_ = lean_ctor_get(v___x_360_, 1);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_392_ == 0)
{
lean_object* v_unused_393_; 
v_unused_393_ = lean_ctor_get(v___x_360_, 0);
lean_dec(v_unused_393_);
v___x_386_ = v___x_360_;
v_isShared_387_ = v_isSharedCheck_392_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_360_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_392_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_388_; lean_object* v___x_390_; 
v___x_388_ = lean_box(0);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 0, v___x_388_);
v___x_390_ = v___x_386_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_388_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_a_384_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mergeErrors(lean_object* v_00_u03b1_394_, lean_object* v_00_u03b2_395_, lean_object* v_00_u03b3_396_, lean_object* v_x_u2081_397_, lean_object* v_x_u2082_398_, lean_object* v_f_399_, lean_object* v_es_400_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = l_Lake_Toml_mergeErrors___redArg(v_x_u2081_397_, v_x_u2082_398_, v_f_399_, v_es_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_logDecodeErrorAt(lean_object* v_ref_402_, lean_object* v_msg_403_, lean_object* v_es_404_){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_405_ = lean_box(0);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v_ref_402_);
lean_ctor_set(v___x_406_, 1, v_msg_403_);
v___x_407_ = lean_array_push(v_es_404_, v___x_406_);
v___x_408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_405_);
lean_ctor_set(v___x_408_, 1, v___x_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_throwDecodeErrorAt___redArg(lean_object* v_ref_409_, lean_object* v_msg_410_, lean_object* v_es_411_){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_412_ = lean_box(0);
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v_ref_409_);
lean_ctor_set(v___x_413_, 1, v_msg_410_);
v___x_414_ = lean_array_push(v_es_411_, v___x_413_);
v___x_415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_412_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_throwDecodeErrorAt(lean_object* v_00_u03b1_416_, lean_object* v_ref_417_, lean_object* v_msg_418_, lean_object* v_es_419_){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_420_ = lean_box(0);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v_ref_417_);
lean_ctor_set(v___x_421_, 1, v_msg_418_);
v___x_422_ = lean_array_push(v_es_419_, v___x_421_);
v___x_423_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_420_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_decodeArray___redArg___lam__0(lean_object* v_dec_425_, lean_object* v_x1_426_, lean_object* v_x2_427_, lean_object* v___y_428_){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_429_ = lean_apply_1(v_dec_425_, v_x2_427_);
v___x_430_ = ((lean_object*)(l_Lake_Toml_decodeArray___redArg___lam__0___closed__0));
v___x_431_ = l_Lake_Toml_mergeErrors___redArg(v_x1_426_, v___x_429_, v___x_430_, v___y_428_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_decodeArray___redArg(lean_object* v_dec_451_, lean_object* v_vs_452_, lean_object* v_a_453_){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_454_ = lean_array_get_size(v_vs_452_);
v___x_455_ = lean_mk_empty_array_with_capacity(v___x_454_);
v___x_456_ = lean_unsigned_to_nat(0u);
v___x_457_ = ((lean_object*)(l_Lake_Toml_decodeArray___redArg___closed__9));
v___x_458_ = lean_nat_dec_lt(v___x_456_, v___x_454_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; 
lean_dec_ref(v_vs_452_);
lean_dec_ref(v_dec_451_);
v___x_459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_455_);
lean_ctor_set(v___x_459_, 1, v_a_453_);
return v___x_459_;
}
else
{
lean_object* v___f_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___f_460_ = lean_alloc_closure((void*)(l_Lake_Toml_decodeArray___redArg___lam__0), 4, 1);
lean_closure_set(v___f_460_, 0, v_dec_451_);
lean_inc_ref(v___x_455_);
v___x_461_ = lean_alloc_closure((void*)(l_EStateM_pure), 5, 4);
lean_closure_set(v___x_461_, 0, lean_box(0));
lean_closure_set(v___x_461_, 1, lean_box(0));
lean_closure_set(v___x_461_, 2, lean_box(0));
lean_closure_set(v___x_461_, 3, v___x_455_);
v___x_462_ = lean_nat_dec_le(v___x_454_, v___x_454_);
if (v___x_462_ == 0)
{
if (v___x_458_ == 0)
{
lean_object* v___x_463_; 
lean_dec_ref(v___x_461_);
lean_dec_ref(v___f_460_);
lean_dec_ref(v_vs_452_);
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_455_);
lean_ctor_set(v___x_463_, 1, v_a_453_);
return v___x_463_;
}
else
{
size_t v___x_464_; size_t v___x_465_; lean_object* v___x_128__overap_466_; lean_object* v___x_467_; 
lean_dec_ref(v___x_455_);
v___x_464_ = ((size_t)0ULL);
v___x_465_ = lean_usize_of_nat(v___x_454_);
v___x_128__overap_466_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_457_, v___f_460_, v_vs_452_, v___x_464_, v___x_465_, v___x_461_);
v___x_467_ = lean_apply_1(v___x_128__overap_466_, v_a_453_);
return v___x_467_;
}
}
else
{
size_t v___x_468_; size_t v___x_469_; lean_object* v___x_132__overap_470_; lean_object* v___x_471_; 
lean_dec_ref(v___x_455_);
v___x_468_ = ((size_t)0ULL);
v___x_469_ = lean_usize_of_nat(v___x_454_);
v___x_132__overap_470_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_457_, v___f_460_, v_vs_452_, v___x_468_, v___x_469_, v___x_461_);
v___x_471_ = lean_apply_1(v___x_132__overap_470_, v_a_453_);
return v___x_471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_decodeArray(lean_object* v_00_u03b1_472_, lean_object* v_dec_473_, lean_object* v_vs_474_, lean_object* v_a_475_){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = l_Lake_Toml_decodeArray___redArg(v_dec_473_, v_vs_474_, v_a_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeString(lean_object* v_v_480_, lean_object* v_a_481_){
_start:
{
lean_object* v___y_483_; 
if (lean_obj_tag(v_v_480_) == 0)
{
lean_object* v_s_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
v_s_489_ = lean_ctor_get(v_v_480_, 1);
v_isSharedCheck_496_ = !lean_is_exclusive(v_v_480_);
if (v_isSharedCheck_496_ == 0)
{
lean_object* v_unused_497_; 
v_unused_497_ = lean_ctor_get(v_v_480_, 0);
lean_dec(v_unused_497_);
v___x_491_ = v_v_480_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_s_489_);
lean_dec(v_v_480_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 1, v_a_481_);
lean_ctor_set(v___x_491_, 0, v_s_489_);
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_s_489_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_a_481_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
else
{
lean_object* v_ref_498_; 
v_ref_498_ = lean_ctor_get(v_v_480_, 0);
lean_inc(v_ref_498_);
lean_dec_ref(v_v_480_);
v___y_483_ = v_ref_498_;
goto v___jp_482_;
}
v___jp_482_:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_484_ = ((lean_object*)(l_Lake_Toml_Value_decodeString___closed__0));
v___x_485_ = lean_box(0);
v___x_486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_486_, 0, v___y_483_);
lean_ctor_set(v___x_486_, 1, v___x_484_);
v___x_487_ = lean_array_push(v_a_481_, v___x_486_);
v___x_488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_488_, 0, v___x_485_);
lean_ctor_set(v___x_488_, 1, v___x_487_);
return v___x_488_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_instDecodeTomlFilePath___lam__0(lean_object* v_x_501_, lean_object* v___y_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Lake_Toml_Value_decodeString(v_x_501_, v___y_502_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_512_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
v_a_505_ = lean_ctor_get(v___x_503_, 1);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_512_ == 0)
{
v___x_507_ = v___x_503_;
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_inc(v_a_504_);
lean_dec(v___x_503_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_510_; 
if (v_isShared_508_ == 0)
{
v___x_510_ = v___x_507_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_a_504_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v_a_505_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
else
{
lean_object* v_a_513_; lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
v_a_513_ = lean_ctor_get(v___x_503_, 0);
v_a_514_ = lean_ctor_get(v___x_503_, 1);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_503_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_inc(v_a_513_);
lean_dec(v___x_503_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_513_);
lean_ctor_set(v_reuseFailAlloc_520_, 1, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeName(lean_object* v_v_525_, lean_object* v_a_526_){
_start:
{
lean_object* v___x_527_; 
lean_inc_ref(v_v_525_);
v___x_527_ = l_Lake_Toml_Value_decodeString(v_v_525_, v_a_526_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_545_; 
v_a_528_ = lean_ctor_get(v___x_527_, 0);
v_a_529_ = lean_ctor_get(v___x_527_, 1);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_545_ == 0)
{
v___x_531_ = v___x_527_;
v_isShared_532_ = v_isSharedCheck_545_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_inc(v_a_528_);
lean_dec(v___x_527_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_545_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___y_534_; lean_object* v___x_542_; 
v___x_542_ = l_String_toName(v_a_528_);
if (lean_obj_tag(v___x_542_) == 0)
{
lean_object* v_ref_543_; 
v_ref_543_ = lean_ctor_get(v_v_525_, 0);
lean_inc(v_ref_543_);
lean_dec_ref(v_v_525_);
v___y_534_ = v_ref_543_;
goto v___jp_533_;
}
else
{
lean_object* v___x_544_; 
lean_del_object(v___x_531_);
lean_dec_ref(v_v_525_);
v___x_544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_542_);
lean_ctor_set(v___x_544_, 1, v_a_529_);
return v___x_544_;
}
v___jp_533_:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_540_; 
v___x_535_ = ((lean_object*)(l_Lake_Toml_Value_decodeName___closed__0));
v___x_536_ = lean_box(0);
v___x_537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_537_, 0, v___y_534_);
lean_ctor_set(v___x_537_, 1, v___x_535_);
v___x_538_ = lean_array_push(v_a_529_, v___x_537_);
if (v_isShared_532_ == 0)
{
lean_ctor_set_tag(v___x_531_, 1);
lean_ctor_set(v___x_531_, 1, v___x_538_);
lean_ctor_set(v___x_531_, 0, v___x_536_);
v___x_540_ = v___x_531_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_541_, 1, v___x_538_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
else
{
lean_object* v_a_546_; lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_554_; 
lean_dec_ref(v_v_525_);
v_a_546_ = lean_ctor_get(v___x_527_, 0);
v_a_547_ = lean_ctor_get(v___x_527_, 1);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_554_ == 0)
{
v___x_549_ = v___x_527_;
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_inc(v_a_546_);
lean_dec(v___x_527_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_a_546_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v_a_547_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeInt(lean_object* v_v_558_, lean_object* v_a_559_){
_start:
{
lean_object* v___y_561_; 
if (lean_obj_tag(v_v_558_) == 1)
{
lean_object* v_n_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_574_; 
v_n_567_ = lean_ctor_get(v_v_558_, 1);
v_isSharedCheck_574_ = !lean_is_exclusive(v_v_558_);
if (v_isSharedCheck_574_ == 0)
{
lean_object* v_unused_575_; 
v_unused_575_ = lean_ctor_get(v_v_558_, 0);
lean_dec(v_unused_575_);
v___x_569_ = v_v_558_;
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_n_567_);
lean_dec(v_v_558_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
lean_ctor_set_tag(v___x_569_, 0);
lean_ctor_set(v___x_569_, 1, v_a_559_);
lean_ctor_set(v___x_569_, 0, v_n_567_);
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_n_567_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v_a_559_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
else
{
lean_object* v_ref_576_; 
v_ref_576_ = lean_ctor_get(v_v_558_, 0);
lean_inc(v_ref_576_);
lean_dec_ref(v_v_558_);
v___y_561_ = v_ref_576_;
goto v___jp_560_;
}
v___jp_560_:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_562_ = ((lean_object*)(l_Lake_Toml_Value_decodeInt___closed__0));
v___x_563_ = lean_box(0);
v___x_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_564_, 0, v___y_561_);
lean_ctor_set(v___x_564_, 1, v___x_562_);
v___x_565_ = lean_array_push(v_a_559_, v___x_564_);
v___x_566_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_563_);
lean_ctor_set(v___x_566_, 1, v___x_565_);
return v___x_566_;
}
}
}
static lean_object* _init_l_Lake_Toml_Value_decodeNat___closed__1(void){
_start:
{
lean_object* v_natZero_580_; lean_object* v_intZero_581_; 
v_natZero_580_ = lean_unsigned_to_nat(0u);
v_intZero_581_ = lean_nat_to_int(v_natZero_580_);
return v_intZero_581_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeNat(lean_object* v_x_582_, lean_object* v_a_583_){
_start:
{
lean_object* v___y_585_; lean_object* v___y_586_; 
if (lean_obj_tag(v_x_582_) == 1)
{
lean_object* v_ref_592_; lean_object* v_n_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_603_; 
v_ref_592_ = lean_ctor_get(v_x_582_, 0);
v_n_593_ = lean_ctor_get(v_x_582_, 1);
v_isSharedCheck_603_ = !lean_is_exclusive(v_x_582_);
if (v_isSharedCheck_603_ == 0)
{
v___x_595_ = v_x_582_;
v_isShared_596_ = v_isSharedCheck_603_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_n_593_);
lean_inc(v_ref_592_);
lean_dec(v_x_582_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_603_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v_intZero_597_; uint8_t v_isNeg_598_; 
v_intZero_597_ = lean_obj_once(&l_Lake_Toml_Value_decodeNat___closed__1, &l_Lake_Toml_Value_decodeNat___closed__1_once, _init_l_Lake_Toml_Value_decodeNat___closed__1);
v_isNeg_598_ = lean_int_dec_lt(v_n_593_, v_intZero_597_);
if (v_isNeg_598_ == 0)
{
lean_object* v_a_599_; lean_object* v___x_601_; 
lean_dec(v_ref_592_);
v_a_599_ = lean_nat_abs(v_n_593_);
lean_dec(v_n_593_);
if (v_isShared_596_ == 0)
{
lean_ctor_set_tag(v___x_595_, 0);
lean_ctor_set(v___x_595_, 1, v_a_583_);
lean_ctor_set(v___x_595_, 0, v_a_599_);
v___x_601_ = v___x_595_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_599_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v_a_583_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
else
{
lean_del_object(v___x_595_);
lean_dec(v_n_593_);
v___y_585_ = v_a_583_;
v___y_586_ = v_ref_592_;
goto v___jp_584_;
}
}
}
else
{
lean_object* v_ref_604_; 
v_ref_604_ = lean_ctor_get(v_x_582_, 0);
lean_inc(v_ref_604_);
lean_dec_ref(v_x_582_);
v___y_585_ = v_a_583_;
v___y_586_ = v_ref_604_;
goto v___jp_584_;
}
v___jp_584_:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_587_ = ((lean_object*)(l_Lake_Toml_Value_decodeNat___closed__0));
v___x_588_ = lean_box(0);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v___y_586_);
lean_ctor_set(v___x_589_, 1, v___x_587_);
v___x_590_ = lean_array_push(v___y_585_, v___x_589_);
v___x_591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_588_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
return v___x_591_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeFloat(lean_object* v_v_608_, lean_object* v_a_609_){
_start:
{
lean_object* v___y_611_; 
if (lean_obj_tag(v_v_608_) == 2)
{
double v_n_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v_n_617_ = lean_ctor_get_float(v_v_608_, sizeof(void*)*1);
lean_dec_ref_known(v_v_608_, 1);
v___x_618_ = lean_box_float(v_n_617_);
v___x_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v_a_609_);
return v___x_619_;
}
else
{
lean_object* v_ref_620_; 
v_ref_620_ = lean_ctor_get(v_v_608_, 0);
lean_inc(v_ref_620_);
lean_dec_ref(v_v_608_);
v___y_611_ = v_ref_620_;
goto v___jp_610_;
}
v___jp_610_:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_612_ = ((lean_object*)(l_Lake_Toml_Value_decodeFloat___closed__0));
v___x_613_ = lean_box(0);
v___x_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_614_, 0, v___y_611_);
lean_ctor_set(v___x_614_, 1, v___x_612_);
v___x_615_ = lean_array_push(v_a_609_, v___x_614_);
v___x_616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_613_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
return v___x_616_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeBool(lean_object* v_v_624_, lean_object* v_a_625_){
_start:
{
lean_object* v___y_627_; 
if (lean_obj_tag(v_v_624_) == 3)
{
uint8_t v_b_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v_b_633_ = lean_ctor_get_uint8(v_v_624_, sizeof(void*)*1);
lean_dec_ref_known(v_v_624_, 1);
v___x_634_ = lean_box(v_b_633_);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
lean_ctor_set(v___x_635_, 1, v_a_625_);
return v___x_635_;
}
else
{
lean_object* v_ref_636_; 
v_ref_636_ = lean_ctor_get(v_v_624_, 0);
lean_inc(v_ref_636_);
lean_dec_ref(v_v_624_);
v___y_627_ = v_ref_636_;
goto v___jp_626_;
}
v___jp_626_:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_628_ = ((lean_object*)(l_Lake_Toml_Value_decodeBool___closed__0));
v___x_629_ = lean_box(0);
v___x_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_630_, 0, v___y_627_);
lean_ctor_set(v___x_630_, 1, v___x_628_);
v___x_631_ = lean_array_push(v_a_625_, v___x_630_);
v___x_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_629_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
return v___x_632_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeDateTime(lean_object* v_v_640_, lean_object* v_a_641_){
_start:
{
lean_object* v___y_643_; 
if (lean_obj_tag(v_v_640_) == 4)
{
lean_object* v_dt_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_656_; 
v_dt_649_ = lean_ctor_get(v_v_640_, 1);
v_isSharedCheck_656_ = !lean_is_exclusive(v_v_640_);
if (v_isSharedCheck_656_ == 0)
{
lean_object* v_unused_657_; 
v_unused_657_ = lean_ctor_get(v_v_640_, 0);
lean_dec(v_unused_657_);
v___x_651_ = v_v_640_;
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_dt_649_);
lean_dec(v_v_640_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
if (v_isShared_652_ == 0)
{
lean_ctor_set_tag(v___x_651_, 0);
lean_ctor_set(v___x_651_, 1, v_a_641_);
lean_ctor_set(v___x_651_, 0, v_dt_649_);
v___x_654_ = v___x_651_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_dt_649_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v_a_641_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
else
{
lean_object* v_ref_658_; 
v_ref_658_ = lean_ctor_get(v_v_640_, 0);
lean_inc(v_ref_658_);
lean_dec_ref(v_v_640_);
v___y_643_ = v_ref_658_;
goto v___jp_642_;
}
v___jp_642_:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_644_ = ((lean_object*)(l_Lake_Toml_Value_decodeDateTime___closed__0));
v___x_645_ = lean_box(0);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v___y_643_);
lean_ctor_set(v___x_646_, 1, v___x_644_);
v___x_647_ = lean_array_push(v_a_641_, v___x_646_);
v___x_648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_645_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
return v___x_648_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeValueArray(lean_object* v_v_662_, lean_object* v_a_663_){
_start:
{
lean_object* v___y_665_; 
if (lean_obj_tag(v_v_662_) == 5)
{
lean_object* v_xs_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
v_xs_671_ = lean_ctor_get(v_v_662_, 1);
v_isSharedCheck_678_ = !lean_is_exclusive(v_v_662_);
if (v_isSharedCheck_678_ == 0)
{
lean_object* v_unused_679_; 
v_unused_679_ = lean_ctor_get(v_v_662_, 0);
lean_dec(v_unused_679_);
v___x_673_ = v_v_662_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_xs_671_);
lean_dec(v_v_662_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
lean_ctor_set_tag(v___x_673_, 0);
lean_ctor_set(v___x_673_, 1, v_a_663_);
lean_ctor_set(v___x_673_, 0, v_xs_671_);
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_xs_671_);
lean_ctor_set(v_reuseFailAlloc_677_, 1, v_a_663_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
else
{
lean_object* v_ref_680_; 
v_ref_680_ = lean_ctor_get(v_v_662_, 0);
lean_inc(v_ref_680_);
lean_dec_ref(v_v_662_);
v___y_665_ = v_ref_680_;
goto v___jp_664_;
}
v___jp_664_:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_666_ = ((lean_object*)(l_Lake_Toml_Value_decodeValueArray___closed__0));
v___x_667_ = lean_box(0);
v___x_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_668_, 0, v___y_665_);
lean_ctor_set(v___x_668_, 1, v___x_666_);
v___x_669_ = lean_array_push(v_a_663_, v___x_668_);
v___x_670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_667_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
return v___x_670_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeArray___redArg(lean_object* v_dec_681_, lean_object* v_v_682_, lean_object* v_a_683_){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = l_Lake_Toml_Value_decodeValueArray(v_v_682_, v_a_683_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v_a_686_; lean_object* v___x_687_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc(v_a_685_);
v_a_686_ = lean_ctor_get(v___x_684_, 1);
lean_inc(v_a_686_);
lean_dec_ref_known(v___x_684_, 2);
v___x_687_ = l_Lake_Toml_decodeArray___redArg(v_dec_681_, v_a_685_, v_a_686_);
return v___x_687_;
}
else
{
lean_object* v_a_688_; lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
lean_dec_ref(v_dec_681_);
v_a_688_ = lean_ctor_get(v___x_684_, 0);
v_a_689_ = lean_ctor_get(v___x_684_, 1);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___x_684_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_inc(v_a_688_);
lean_dec(v___x_684_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_688_);
lean_ctor_set(v_reuseFailAlloc_695_, 1, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeArray(lean_object* v_00_u03b1_697_, lean_object* v_dec_698_, lean_object* v_v_699_, lean_object* v_a_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Lake_Toml_Value_decodeValueArray(v_v_699_, v_a_700_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v_a_703_; lean_object* v___x_704_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_702_);
v_a_703_ = lean_ctor_get(v___x_701_, 1);
lean_inc(v_a_703_);
lean_dec_ref_known(v___x_701_, 2);
v___x_704_ = l_Lake_Toml_decodeArray___redArg(v_dec_698_, v_a_702_, v_a_703_);
return v___x_704_;
}
else
{
lean_object* v_a_705_; lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_713_; 
lean_dec_ref(v_dec_698_);
v_a_705_ = lean_ctor_get(v___x_701_, 0);
v_a_706_ = lean_ctor_get(v___x_701_, 1);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_713_ == 0)
{
v___x_708_ = v___x_701_;
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_inc(v_a_705_);
lean_dec(v___x_701_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_711_; 
if (v_isShared_709_ == 0)
{
v___x_711_ = v___x_708_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v_a_705_);
lean_ctor_set(v_reuseFailAlloc_712_, 1, v_a_706_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_instDecodeTomlArray___redArg(lean_object* v_inst_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = lean_alloc_closure((void*)(l_Lake_Toml_Value_decodeArray), 4, 2);
lean_closure_set(v___x_715_, 0, lean_box(0));
lean_closure_set(v___x_715_, 1, v_inst_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_instDecodeTomlArray(lean_object* v_00_u03b1_716_, lean_object* v_inst_717_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = lean_alloc_closure((void*)(l_Lake_Toml_Value_decodeArray), 4, 2);
lean_closure_set(v___x_718_, 0, lean_box(0));
lean_closure_set(v___x_718_, 1, v_inst_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeArrayOrSingleton___redArg(lean_object* v_dec_719_, lean_object* v_v_720_, lean_object* v_a_721_){
_start:
{
if (lean_obj_tag(v_v_720_) == 5)
{
lean_object* v_xs_722_; lean_object* v___x_723_; 
v_xs_722_ = lean_ctor_get(v_v_720_, 1);
lean_inc_ref(v_xs_722_);
lean_dec_ref_known(v_v_720_, 2);
v___x_723_ = l_Lake_Toml_decodeArray___redArg(v_dec_719_, v_xs_722_, v_a_721_);
return v___x_723_;
}
else
{
lean_object* v___x_724_; 
v___x_724_ = lean_apply_2(v_dec_719_, v_v_720_, v_a_721_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_736_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
v_a_726_ = lean_ctor_get(v___x_724_, 1);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_736_ == 0)
{
v___x_728_ = v___x_724_;
v_isShared_729_ = v_isSharedCheck_736_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_inc(v_a_725_);
lean_dec(v___x_724_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_736_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_734_; 
v___x_730_ = lean_unsigned_to_nat(1u);
v___x_731_ = lean_mk_empty_array_with_capacity(v___x_730_);
v___x_732_ = lean_array_push(v___x_731_, v_a_725_);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v___x_732_);
v___x_734_ = v___x_728_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v___x_732_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_a_726_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
else
{
lean_object* v_a_737_; lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
v_a_737_ = lean_ctor_get(v___x_724_, 0);
v_a_738_ = lean_ctor_get(v___x_724_, 1);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_724_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_inc(v_a_737_);
lean_dec(v___x_724_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_737_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_a_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeArrayOrSingleton(lean_object* v_00_u03b1_746_, lean_object* v_dec_747_, lean_object* v_v_748_, lean_object* v_a_749_){
_start:
{
if (lean_obj_tag(v_v_748_) == 5)
{
lean_object* v_xs_750_; lean_object* v___x_751_; 
v_xs_750_ = lean_ctor_get(v_v_748_, 1);
lean_inc_ref(v_xs_750_);
lean_dec_ref_known(v_v_748_, 2);
v___x_751_ = l_Lake_Toml_decodeArray___redArg(v_dec_747_, v_xs_750_, v_a_749_);
return v___x_751_;
}
else
{
lean_object* v___x_752_; 
v___x_752_ = lean_apply_2(v_dec_747_, v_v_748_, v_a_749_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_764_; 
v_a_753_ = lean_ctor_get(v___x_752_, 0);
v_a_754_ = lean_ctor_get(v___x_752_, 1);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_764_ == 0)
{
v___x_756_ = v___x_752_;
v_isShared_757_ = v_isSharedCheck_764_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_inc(v_a_753_);
lean_dec(v___x_752_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_764_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_762_; 
v___x_758_ = lean_unsigned_to_nat(1u);
v___x_759_ = lean_mk_empty_array_with_capacity(v___x_758_);
v___x_760_ = lean_array_push(v___x_759_, v_a_753_);
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 0, v___x_760_);
v___x_762_ = v___x_756_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_760_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v_a_754_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
else
{
lean_object* v_a_765_; lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
v_a_765_ = lean_ctor_get(v___x_752_, 0);
v_a_766_ = lean_ctor_get(v___x_752_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_752_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_inc(v_a_765_);
lean_dec(v___x_752_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_765_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_a_766_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_decodeTable(lean_object* v_v_775_, lean_object* v_a_776_){
_start:
{
lean_object* v___y_778_; 
if (lean_obj_tag(v_v_775_) == 6)
{
lean_object* v_xs_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
v_xs_784_ = lean_ctor_get(v_v_775_, 1);
v_isSharedCheck_791_ = !lean_is_exclusive(v_v_775_);
if (v_isSharedCheck_791_ == 0)
{
lean_object* v_unused_792_; 
v_unused_792_ = lean_ctor_get(v_v_775_, 0);
lean_dec(v_unused_792_);
v___x_786_ = v_v_775_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_xs_784_);
lean_dec(v_v_775_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
lean_ctor_set_tag(v___x_786_, 0);
lean_ctor_set(v___x_786_, 1, v_a_776_);
lean_ctor_set(v___x_786_, 0, v_xs_784_);
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_xs_784_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_a_776_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
else
{
lean_object* v_ref_793_; 
v_ref_793_ = lean_ctor_get(v_v_775_, 0);
lean_inc(v_ref_793_);
lean_dec_ref(v_v_775_);
v___y_778_ = v_ref_793_;
goto v___jp_777_;
}
v___jp_777_:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_779_ = ((lean_object*)(l_Lake_Toml_Value_decodeTable___closed__0));
v___x_780_ = lean_box(0);
v___x_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_781_, 0, v___y_778_);
lean_ctor_set(v___x_781_, 1, v___x_779_);
v___x_782_ = lean_array_push(v_a_776_, v___x_781_);
v___x_783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_780_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
return v___x_783_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval___redArg___lam__0(lean_object* v_iniPos_798_, lean_object* v_k_799_, lean_object* v_i_800_, lean_object* v_a_801_, lean_object* v_x_802_){
_start:
{
uint8_t v___x_803_; 
v___x_803_ = lean_nat_dec_le(v_iniPos_798_, v_i_800_);
if (v___x_803_ == 0)
{
lean_dec(v_k_799_);
return v_a_801_;
}
else
{
lean_object* v_ref_804_; lean_object* v_msg_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_818_; 
v_ref_804_ = lean_ctor_get(v_a_801_, 0);
v_msg_805_ = lean_ctor_get(v_a_801_, 1);
v_isSharedCheck_818_ = !lean_is_exclusive(v_a_801_);
if (v_isSharedCheck_818_ == 0)
{
v___x_807_ = v_a_801_;
v_isShared_808_ = v_isSharedCheck_818_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_msg_805_);
lean_inc(v_ref_804_);
lean_dec(v_a_801_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_818_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_816_; 
v___x_809_ = ((lean_object*)(l_Lake_Toml_decodeKeyval___redArg___lam__0___closed__0));
v___x_810_ = l_Lake_Toml_ppKey(v_k_799_);
v___x_811_ = lean_string_append(v___x_809_, v___x_810_);
lean_dec_ref(v___x_810_);
v___x_812_ = ((lean_object*)(l_Lake_Toml_decodeKeyval___redArg___lam__0___closed__1));
v___x_813_ = lean_string_append(v___x_811_, v___x_812_);
v___x_814_ = lean_string_append(v___x_813_, v_msg_805_);
lean_dec_ref(v_msg_805_);
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 1, v___x_814_);
v___x_816_ = v___x_807_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_ref_804_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v___x_814_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval___redArg___lam__0___boxed(lean_object* v_iniPos_819_, lean_object* v_k_820_, lean_object* v_i_821_, lean_object* v_a_822_, lean_object* v_x_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l_Lake_Toml_decodeKeyval___redArg___lam__0(v_iniPos_819_, v_k_820_, v_i_821_, v_a_822_, v_x_823_);
lean_dec(v_i_821_);
lean_dec(v_iniPos_819_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval___redArg___lam__1(lean_object* v___f_825_, lean_object* v_es_826_){
_start:
{
lean_object* v___x_827_; size_t v_sz_828_; size_t v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_827_ = ((lean_object*)(l_Lake_Toml_decodeArray___redArg___closed__9));
v_sz_828_ = lean_array_size(v_es_826_);
v___x_829_ = ((size_t)0ULL);
v___x_830_ = l_unsafeCast___redArg(v_es_826_);
v___x_831_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_827_, v_es_826_, v___f_825_, v_sz_828_, v___x_829_, v___x_830_);
v___x_832_ = l_unsafeCast___redArg(v___x_831_);
lean_dec(v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval___redArg___lam__1___boxed(lean_object* v___f_833_, lean_object* v_es_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lake_Toml_decodeKeyval___redArg___lam__1(v___f_833_, v_es_834_);
lean_dec_ref(v_es_834_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval___redArg(lean_object* v_dec_836_, lean_object* v_k_837_, lean_object* v_v_838_, lean_object* v_es_839_){
_start:
{
lean_object* v_iniPos_840_; lean_object* v___f_841_; lean_object* v___x_842_; 
v_iniPos_840_ = lean_array_get_size(v_es_839_);
v___f_841_ = lean_alloc_closure((void*)(l_Lake_Toml_decodeKeyval___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_841_, 0, v_iniPos_840_);
lean_closure_set(v___f_841_, 1, v_k_837_);
v___x_842_ = lean_apply_2(v_dec_836_, v_v_838_, v_es_839_);
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_852_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
v_a_844_ = lean_ctor_get(v___x_842_, 1);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_852_ == 0)
{
v___x_846_ = v___x_842_;
v_isShared_847_ = v_isSharedCheck_852_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_inc(v_a_843_);
lean_dec(v___x_842_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_852_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_848_; lean_object* v___x_850_; 
v___x_848_ = l_Lake_Toml_decodeKeyval___redArg___lam__1(v___f_841_, v_a_844_);
lean_dec(v_a_844_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 1, v___x_848_);
v___x_850_ = v___x_846_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_843_);
lean_ctor_set(v_reuseFailAlloc_851_, 1, v___x_848_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
else
{
lean_object* v_a_853_; lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_862_; 
v_a_853_ = lean_ctor_get(v___x_842_, 0);
v_a_854_ = lean_ctor_get(v___x_842_, 1);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_862_ == 0)
{
v___x_856_ = v___x_842_;
v_isShared_857_ = v_isSharedCheck_862_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_inc(v_a_853_);
lean_dec(v___x_842_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_862_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_858_; lean_object* v___x_860_; 
v___x_858_ = l_Lake_Toml_decodeKeyval___redArg___lam__1(v___f_841_, v_a_854_);
lean_dec(v_a_854_);
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 1, v___x_858_);
v___x_860_ = v___x_856_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_853_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v___x_858_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_decodeKeyval(lean_object* v_00_u03b1_863_, lean_object* v_dec_864_, lean_object* v_k_865_, lean_object* v_v_866_, lean_object* v_es_867_){
_start:
{
lean_object* v___x_868_; 
v___x_868_ = l_Lake_Toml_decodeKeyval___redArg(v_dec_864_, v_k_865_, v_v_866_, v_es_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decodeValue(lean_object* v_t_871_, lean_object* v_k_872_, lean_object* v_ref_873_, lean_object* v_a_874_){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(l_Lake_Toml_Table_decodeValue___closed__0));
lean_inc(v_k_872_);
v___x_876_ = l_Lake_Toml_RBDict_findEntry_x3f___redArg(v___x_875_, v_k_872_, v_t_871_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_877_ = ((lean_object*)(l_Lake_Toml_Table_decodeValue___closed__1));
v___x_878_ = l_Lake_Toml_ppKey(v_k_872_);
v___x_879_ = lean_string_append(v___x_877_, v___x_878_);
lean_dec_ref(v___x_878_);
v___x_880_ = lean_box(0);
v___x_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_881_, 0, v_ref_873_);
lean_ctor_set(v___x_881_, 1, v___x_879_);
v___x_882_ = lean_array_push(v_a_874_, v___x_881_);
v___x_883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_880_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
return v___x_883_;
}
else
{
lean_object* v_val_884_; lean_object* v_snd_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_892_; 
lean_dec(v_ref_873_);
lean_dec(v_k_872_);
v_val_884_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_val_884_);
lean_dec_ref_known(v___x_876_, 1);
v_snd_885_ = lean_ctor_get(v_val_884_, 1);
v_isSharedCheck_892_ = !lean_is_exclusive(v_val_884_);
if (v_isSharedCheck_892_ == 0)
{
lean_object* v_unused_893_; 
v_unused_893_ = lean_ctor_get(v_val_884_, 0);
lean_dec(v_unused_893_);
v___x_887_ = v_val_884_;
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_snd_885_);
lean_dec(v_val_884_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_890_; 
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 1, v_a_874_);
lean_ctor_set(v___x_887_, 0, v_snd_885_);
v___x_890_ = v___x_887_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_snd_885_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v_a_874_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decode___redArg(lean_object* v_dec_894_, lean_object* v_t_895_, lean_object* v_k_896_, lean_object* v_ref_897_, lean_object* v_a_898_){
_start:
{
lean_object* v___x_899_; 
lean_inc(v_k_896_);
v___x_899_ = l_Lake_Toml_Table_decodeValue(v_t_895_, v_k_896_, v_ref_897_, v_a_898_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v_a_901_; lean_object* v___x_902_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
v_a_901_ = lean_ctor_get(v___x_899_, 1);
lean_inc(v_a_901_);
lean_dec_ref_known(v___x_899_, 2);
v___x_902_ = l_Lake_Toml_decodeKeyval___redArg(v_dec_894_, v_k_896_, v_a_900_, v_a_901_);
return v___x_902_;
}
else
{
lean_object* v_a_903_; lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec(v_k_896_);
lean_dec_ref(v_dec_894_);
v_a_903_ = lean_ctor_get(v___x_899_, 0);
v_a_904_ = lean_ctor_get(v___x_899_, 1);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_899_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_inc(v_a_903_);
lean_dec(v___x_899_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_903_);
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
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decode(lean_object* v_00_u03b1_912_, lean_object* v_dec_913_, lean_object* v_t_914_, lean_object* v_k_915_, lean_object* v_ref_916_, lean_object* v_a_917_){
_start:
{
lean_object* v___x_918_; 
lean_inc(v_k_915_);
v___x_918_ = l_Lake_Toml_Table_decodeValue(v_t_914_, v_k_915_, v_ref_916_, v_a_917_);
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v_a_919_; lean_object* v_a_920_; lean_object* v___x_921_; 
v_a_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_a_919_);
v_a_920_ = lean_ctor_get(v___x_918_, 1);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_918_, 2);
v___x_921_ = l_Lake_Toml_decodeKeyval___redArg(v_dec_913_, v_k_915_, v_a_919_, v_a_920_);
return v___x_921_;
}
else
{
lean_object* v_a_922_; lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_dec(v_k_915_);
lean_dec_ref(v_dec_913_);
v_a_922_ = lean_ctor_get(v___x_918_, 0);
v_a_923_ = lean_ctor_get(v___x_918_, 1);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_918_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_inc(v_a_922_);
lean_dec(v___x_918_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_922_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decode_x3f___redArg(lean_object* v_dec_931_, lean_object* v_t_932_, lean_object* v_k_933_, lean_object* v_a_934_){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_935_ = ((lean_object*)(l_Lake_Toml_Table_decodeValue___closed__0));
lean_inc(v_k_933_);
v___x_936_ = l_Lake_Toml_RBDict_findEntry_x3f___redArg(v___x_935_, v_k_933_, v_t_932_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v___x_937_; lean_object* v___x_938_; 
lean_dec(v_k_933_);
lean_dec_ref(v_dec_931_);
v___x_937_ = lean_box(0);
v___x_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_938_, 0, v___x_937_);
lean_ctor_set(v___x_938_, 1, v_a_934_);
return v___x_938_;
}
else
{
lean_object* v_val_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_966_; 
v_val_939_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_966_ == 0)
{
v___x_941_ = v___x_936_;
v_isShared_942_ = v_isSharedCheck_966_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_val_939_);
lean_dec(v___x_936_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_966_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v_snd_943_; lean_object* v___x_944_; 
v_snd_943_ = lean_ctor_get(v_val_939_, 1);
lean_inc(v_snd_943_);
lean_dec(v_val_939_);
v___x_944_ = l_Lake_Toml_decodeKeyval___redArg(v_dec_931_, v_k_933_, v_snd_943_, v_a_934_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_956_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
v_a_946_ = lean_ctor_get(v___x_944_, 1);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_956_ == 0)
{
v___x_948_ = v___x_944_;
v_isShared_949_ = v_isSharedCheck_956_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_inc(v_a_945_);
lean_dec(v___x_944_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_956_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 0, v_a_945_);
v___x_951_ = v___x_941_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_945_);
v___x_951_ = v_reuseFailAlloc_955_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_953_; 
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 0, v___x_951_);
v___x_953_ = v___x_948_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_951_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_a_946_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
else
{
lean_object* v_a_957_; lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_del_object(v___x_941_);
v_a_957_ = lean_ctor_get(v___x_944_, 0);
v_a_958_ = lean_ctor_get(v___x_944_, 1);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_944_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_inc(v_a_957_);
lean_dec(v___x_944_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_957_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decode_x3f(lean_object* v_00_u03b1_967_, lean_object* v_dec_968_, lean_object* v_t_969_, lean_object* v_k_970_, lean_object* v_a_971_){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = ((lean_object*)(l_Lake_Toml_Table_decodeValue___closed__0));
lean_inc(v_k_970_);
v___x_973_ = l_Lake_Toml_RBDict_findEntry_x3f___redArg(v___x_972_, v_k_970_, v_t_969_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v___x_974_; lean_object* v___x_975_; 
lean_dec(v_k_970_);
lean_dec_ref(v_dec_968_);
v___x_974_ = lean_box(0);
v___x_975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
lean_ctor_set(v___x_975_, 1, v_a_971_);
return v___x_975_;
}
else
{
lean_object* v_val_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_1003_; 
v_val_976_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_978_ = v___x_973_;
v_isShared_979_ = v_isSharedCheck_1003_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_val_976_);
lean_dec(v___x_973_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_1003_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v_snd_980_; lean_object* v___x_981_; 
v_snd_980_ = lean_ctor_get(v_val_976_, 1);
lean_inc(v_snd_980_);
lean_dec(v_val_976_);
v___x_981_ = l_Lake_Toml_decodeKeyval___redArg(v_dec_968_, v_k_970_, v_snd_980_, v_a_971_);
if (lean_obj_tag(v___x_981_) == 0)
{
lean_object* v_a_982_; lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_993_; 
v_a_982_ = lean_ctor_get(v___x_981_, 0);
v_a_983_ = lean_ctor_get(v___x_981_, 1);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_993_ == 0)
{
v___x_985_ = v___x_981_;
v_isShared_986_ = v_isSharedCheck_993_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_inc(v_a_982_);
lean_dec(v___x_981_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_993_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v_a_982_);
v___x_988_ = v___x_978_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_a_982_);
v___x_988_ = v_reuseFailAlloc_992_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
lean_object* v___x_990_; 
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 0, v___x_988_);
v___x_990_ = v___x_985_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_988_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v_a_983_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
else
{
lean_object* v_a_994_; lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_del_object(v___x_978_);
v_a_994_ = lean_ctor_get(v___x_981_, 0);
v_a_995_ = lean_ctor_get(v___x_981_, 1);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_981_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_inc(v_a_994_);
lean_dec(v___x_981_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_994_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decodeNameMap___redArg___lam__0(lean_object* v_fst_1004_, lean_object* v_m_1005_, lean_object* v_v_1006_){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_1004_, v_v_1006_, v_m_1005_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decodeNameMap___redArg___lam__1(lean_object* v_dec_1008_, lean_object* v_x1_1009_, lean_object* v_x2_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v_fst_1012_; lean_object* v_snd_1013_; lean_object* v___f_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_fst_1012_ = lean_ctor_get(v_x2_1010_, 0);
lean_inc(v_fst_1012_);
v_snd_1013_ = lean_ctor_get(v_x2_1010_, 1);
lean_inc(v_snd_1013_);
lean_dec_ref(v_x2_1010_);
v___f_1014_ = lean_alloc_closure((void*)(l_Lake_Toml_Table_decodeNameMap___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1014_, 0, v_fst_1012_);
v___x_1015_ = lean_apply_1(v_dec_1008_, v_snd_1013_);
v___x_1016_ = l_Lake_Toml_mergeErrors___redArg(v_x1_1009_, v___x_1015_, v___f_1014_, v___y_1011_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decodeNameMap___redArg(lean_object* v_dec_1019_, lean_object* v_t_1020_, lean_object* v_a_1021_){
_start:
{
lean_object* v_items_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1048_; 
v_items_1022_ = lean_ctor_get(v_t_1020_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v_t_1020_);
if (v_isSharedCheck_1048_ == 0)
{
lean_object* v_unused_1049_; 
v_unused_1049_ = lean_ctor_get(v_t_1020_, 1);
lean_dec(v_unused_1049_);
v___x_1024_ = v_t_1020_;
v_isShared_1025_ = v_isSharedCheck_1048_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_items_1022_);
lean_dec(v_t_1020_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1048_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; uint8_t v___x_1030_; 
v___x_1026_ = lean_box(1);
v___x_1027_ = lean_unsigned_to_nat(0u);
v___x_1028_ = lean_array_get_size(v_items_1022_);
v___x_1029_ = ((lean_object*)(l_Lake_Toml_decodeArray___redArg___closed__9));
v___x_1030_ = lean_nat_dec_lt(v___x_1027_, v___x_1028_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1032_; 
lean_dec_ref(v_items_1022_);
lean_dec_ref(v_dec_1019_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 1, v_a_1021_);
lean_ctor_set(v___x_1024_, 0, v___x_1026_);
v___x_1032_ = v___x_1024_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1026_);
lean_ctor_set(v_reuseFailAlloc_1033_, 1, v_a_1021_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
else
{
lean_object* v___f_1034_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v___f_1034_ = lean_alloc_closure((void*)(l_Lake_Toml_Table_decodeNameMap___redArg___lam__1), 4, 1);
lean_closure_set(v___f_1034_, 0, v_dec_1019_);
v___x_1035_ = ((lean_object*)(l_Lake_Toml_Table_decodeNameMap___redArg___closed__0));
v___x_1036_ = lean_nat_dec_le(v___x_1028_, v___x_1028_);
if (v___x_1036_ == 0)
{
if (v___x_1030_ == 0)
{
lean_object* v___x_1038_; 
lean_dec_ref(v___f_1034_);
lean_dec_ref(v_items_1022_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 1, v_a_1021_);
lean_ctor_set(v___x_1024_, 0, v___x_1026_);
v___x_1038_ = v___x_1024_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v___x_1026_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v_a_1021_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
else
{
size_t v___x_1040_; size_t v___x_1041_; lean_object* v___x_145__overap_1042_; lean_object* v___x_1043_; 
lean_del_object(v___x_1024_);
v___x_1040_ = ((size_t)0ULL);
v___x_1041_ = lean_usize_of_nat(v___x_1028_);
v___x_145__overap_1042_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1029_, v___f_1034_, v_items_1022_, v___x_1040_, v___x_1041_, v___x_1035_);
v___x_1043_ = lean_apply_1(v___x_145__overap_1042_, v_a_1021_);
return v___x_1043_;
}
}
else
{
size_t v___x_1044_; size_t v___x_1045_; lean_object* v___x_149__overap_1046_; lean_object* v___x_1047_; 
lean_del_object(v___x_1024_);
v___x_1044_ = ((size_t)0ULL);
v___x_1045_ = lean_usize_of_nat(v___x_1028_);
v___x_149__overap_1046_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1029_, v___f_1034_, v_items_1022_, v___x_1044_, v___x_1045_, v___x_1035_);
v___x_1047_ = lean_apply_1(v___x_149__overap_1046_, v_a_1021_);
return v___x_1047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_decodeNameMap(lean_object* v_00_u03b1_1050_, lean_object* v_dec_1051_, lean_object* v_t_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v___x_1054_; 
v___x_1054_ = l_Lake_Toml_Table_decodeNameMap___redArg(v_dec_1051_, v_t_1052_, v_a_1053_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instDecodeTomlNameMap___redArg___lam__0(lean_object* v_inst_1055_, lean_object* v_x_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Lake_Toml_Value_decodeTable(v_x_1056_, v___y_1057_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v_a_1059_; lean_object* v_a_1060_; lean_object* v___x_1061_; 
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_a_1059_);
v_a_1060_ = lean_ctor_get(v___x_1058_, 1);
lean_inc(v_a_1060_);
lean_dec_ref_known(v___x_1058_, 2);
v___x_1061_ = l_Lake_Toml_Table_decodeNameMap___redArg(v_inst_1055_, v_a_1059_, v_a_1060_);
return v___x_1061_;
}
else
{
lean_object* v_a_1062_; lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
lean_dec_ref(v_inst_1055_);
v_a_1062_ = lean_ctor_get(v___x_1058_, 0);
v_a_1063_ = lean_ctor_get(v___x_1058_, 1);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v___x_1058_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_inc(v_a_1062_);
lean_dec(v___x_1058_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1062_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v_a_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instDecodeTomlNameMap___redArg(lean_object* v_inst_1071_){
_start:
{
lean_object* v___f_1072_; 
v___f_1072_ = lean_alloc_closure((void*)(l_Lake_Toml_Table_instDecodeTomlNameMap___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1072_, 0, v_inst_1071_);
return v___f_1072_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instDecodeTomlNameMap(lean_object* v_00_u03b1_1073_, lean_object* v_inst_1074_){
_start:
{
lean_object* v___f_1075_; 
v___f_1075_ = lean_alloc_closure((void*)(l_Lake_Toml_Table_instDecodeTomlNameMap___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1075_, 0, v_inst_1074_);
return v___f_1075_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecode___redArg(lean_object* v_inst_1076_, lean_object* v_dec_1077_, lean_object* v_t_1078_, lean_object* v_k_1079_, lean_object* v_ref_1080_, lean_object* v_a_1081_){
_start:
{
lean_object* v___x_1082_; 
lean_inc(v_k_1079_);
v___x_1082_ = l_Lake_Toml_Table_decodeValue(v_t_1078_, v_k_1079_, v_ref_1080_, v_a_1081_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v_a_1083_; lean_object* v_a_1084_; lean_object* v___x_1085_; 
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc(v_a_1083_);
v_a_1084_ = lean_ctor_get(v___x_1082_, 1);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1082_, 2);
v___x_1085_ = l_Lake_Toml_decodeKeyval___redArg(v_dec_1077_, v_k_1079_, v_a_1083_, v_a_1084_);
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v_a_1086_; lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
lean_dec(v_inst_1076_);
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
v_a_1087_ = lean_ctor_get(v___x_1085_, 1);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1085_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_inc(v_a_1086_);
lean_dec(v___x_1085_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1086_);
lean_ctor_set(v_reuseFailAlloc_1093_, 1, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
v_a_1095_ = lean_ctor_get(v___x_1085_, 1);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1102_ == 0)
{
lean_object* v_unused_1103_; 
v_unused_1103_ = lean_ctor_get(v___x_1085_, 0);
lean_dec(v_unused_1103_);
v___x_1097_ = v___x_1085_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1085_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set_tag(v___x_1097_, 0);
lean_ctor_set(v___x_1097_, 0, v_inst_1076_);
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_inst_1076_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
else
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
lean_dec(v_k_1079_);
lean_dec_ref(v_dec_1077_);
v_a_1104_ = lean_ctor_get(v___x_1082_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1111_ == 0)
{
lean_object* v_unused_1112_; 
v_unused_1112_ = lean_ctor_get(v___x_1082_, 0);
lean_dec(v_unused_1112_);
v___x_1106_ = v___x_1082_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___x_1082_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
lean_ctor_set_tag(v___x_1106_, 0);
lean_ctor_set(v___x_1106_, 0, v_inst_1076_);
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_inst_1076_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecode(lean_object* v_00_u03b1_1113_, lean_object* v_inst_1114_, lean_object* v_dec_1115_, lean_object* v_t_1116_, lean_object* v_k_1117_, lean_object* v_ref_1118_, lean_object* v_a_1119_){
_start:
{
lean_object* v___x_1120_; 
lean_inc(v_k_1117_);
v___x_1120_ = l_Lake_Toml_Table_decodeValue(v_t_1116_, v_k_1117_, v_ref_1118_, v_a_1119_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v_a_1122_; lean_object* v___x_1123_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_a_1121_);
v_a_1122_ = lean_ctor_get(v___x_1120_, 1);
lean_inc(v_a_1122_);
lean_dec_ref_known(v___x_1120_, 2);
v___x_1123_ = l_Lake_Toml_decodeKeyval___redArg(v_dec_1115_, v_k_1117_, v_a_1121_, v_a_1122_);
if (lean_obj_tag(v___x_1123_) == 0)
{
lean_object* v_a_1124_; lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1132_; 
lean_dec(v_inst_1114_);
v_a_1124_ = lean_ctor_get(v___x_1123_, 0);
v_a_1125_ = lean_ctor_get(v___x_1123_, 1);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1127_ = v___x_1123_;
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_inc(v_a_1124_);
lean_dec(v___x_1123_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1124_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v_a_1125_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
else
{
lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1140_; 
v_a_1133_ = lean_ctor_get(v___x_1123_, 1);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1140_ == 0)
{
lean_object* v_unused_1141_; 
v_unused_1141_ = lean_ctor_get(v___x_1123_, 0);
lean_dec(v_unused_1141_);
v___x_1135_ = v___x_1123_;
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v___x_1123_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1138_; 
if (v_isShared_1136_ == 0)
{
lean_ctor_set_tag(v___x_1135_, 0);
lean_ctor_set(v___x_1135_, 0, v_inst_1114_);
v___x_1138_ = v___x_1135_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_inst_1114_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_a_1133_);
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
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_dec(v_k_1117_);
lean_dec_ref(v_dec_1115_);
v_a_1142_ = lean_ctor_get(v___x_1120_, 1);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1149_ == 0)
{
lean_object* v_unused_1150_; 
v_unused_1150_ = lean_ctor_get(v___x_1120_, 0);
lean_dec(v_unused_1150_);
v___x_1144_ = v___x_1120_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1120_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
lean_ctor_set_tag(v___x_1144_, 0);
lean_ctor_set(v___x_1144_, 0, v_inst_1114_);
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_inst_1114_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecode_x3f___redArg(lean_object* v_dec_1151_, lean_object* v_t_1152_, lean_object* v_k_1153_, lean_object* v_a_1154_){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = ((lean_object*)(l_Lake_Toml_Table_decodeValue___closed__0));
v___x_1156_ = l_Lake_Toml_RBDict_findEntry_x3f___redArg(v___x_1155_, v_k_1153_, v_t_1152_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v___x_1157_; lean_object* v___x_1158_; 
lean_dec_ref(v_dec_1151_);
v___x_1157_ = lean_box(0);
v___x_1158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
lean_ctor_set(v___x_1158_, 1, v_a_1154_);
return v___x_1158_;
}
else
{
lean_object* v_val_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1187_; 
v_val_1159_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1161_ = v___x_1156_;
v_isShared_1162_ = v_isSharedCheck_1187_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_val_1159_);
lean_dec(v___x_1156_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1187_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v_snd_1163_; lean_object* v___x_1164_; 
v_snd_1163_ = lean_ctor_get(v_val_1159_, 1);
lean_inc(v_snd_1163_);
lean_dec(v_val_1159_);
v___x_1164_ = lean_apply_2(v_dec_1151_, v_snd_1163_, v_a_1154_);
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_a_1165_; lean_object* v_a_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1176_; 
v_a_1165_ = lean_ctor_get(v___x_1164_, 0);
v_a_1166_ = lean_ctor_get(v___x_1164_, 1);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1168_ = v___x_1164_;
v_isShared_1169_ = v_isSharedCheck_1176_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_a_1166_);
lean_inc(v_a_1165_);
lean_dec(v___x_1164_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1176_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1171_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 0, v_a_1165_);
v___x_1171_ = v___x_1161_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_a_1165_);
v___x_1171_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
lean_object* v___x_1173_; 
if (v_isShared_1169_ == 0)
{
lean_ctor_set(v___x_1168_, 0, v___x_1171_);
v___x_1173_ = v___x_1168_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v___x_1171_);
lean_ctor_set(v_reuseFailAlloc_1174_, 1, v_a_1166_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
}
else
{
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1185_; 
lean_del_object(v___x_1161_);
v_a_1177_ = lean_ctor_get(v___x_1164_, 1);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1185_ == 0)
{
lean_object* v_unused_1186_; 
v_unused_1186_ = lean_ctor_get(v___x_1164_, 0);
lean_dec(v_unused_1186_);
v___x_1179_ = v___x_1164_;
v_isShared_1180_ = v_isSharedCheck_1185_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v___x_1164_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1185_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1181_ = lean_box(0);
if (v_isShared_1180_ == 0)
{
lean_ctor_set_tag(v___x_1179_, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1181_);
v___x_1183_ = v___x_1179_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v___x_1181_);
lean_ctor_set(v_reuseFailAlloc_1184_, 1, v_a_1177_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecode_x3f(lean_object* v_00_u03b1_1188_, lean_object* v_dec_1189_, lean_object* v_t_1190_, lean_object* v_k_1191_, lean_object* v_a_1192_){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = ((lean_object*)(l_Lake_Toml_Table_decodeValue___closed__0));
v___x_1194_ = l_Lake_Toml_RBDict_findEntry_x3f___redArg(v___x_1193_, v_k_1191_, v_t_1190_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
lean_dec_ref(v_dec_1189_);
v___x_1195_ = lean_box(0);
v___x_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
lean_ctor_set(v___x_1196_, 1, v_a_1192_);
return v___x_1196_;
}
else
{
lean_object* v_val_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1225_; 
v_val_1197_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1199_ = v___x_1194_;
v_isShared_1200_ = v_isSharedCheck_1225_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_val_1197_);
lean_dec(v___x_1194_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1225_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v_snd_1201_; lean_object* v___x_1202_; 
v_snd_1201_ = lean_ctor_get(v_val_1197_, 1);
lean_inc(v_snd_1201_);
lean_dec(v_val_1197_);
v___x_1202_ = lean_apply_2(v_dec_1189_, v_snd_1201_, v_a_1192_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1214_; 
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
v_a_1204_ = lean_ctor_get(v___x_1202_, 1);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1206_ = v___x_1202_;
v_isShared_1207_ = v_isSharedCheck_1214_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_inc(v_a_1203_);
lean_dec(v___x_1202_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1214_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1209_; 
if (v_isShared_1200_ == 0)
{
lean_ctor_set(v___x_1199_, 0, v_a_1203_);
v___x_1209_ = v___x_1199_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_a_1203_);
v___x_1209_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1211_; 
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 0, v___x_1209_);
v___x_1211_ = v___x_1206_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v_a_1204_);
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
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1223_; 
lean_del_object(v___x_1199_);
v_a_1215_ = lean_ctor_get(v___x_1202_, 1);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1223_ == 0)
{
lean_object* v_unused_1224_; 
v_unused_1224_ = lean_ctor_get(v___x_1202_, 0);
lean_dec(v_unused_1224_);
v___x_1217_ = v___x_1202_;
v_isShared_1218_ = v_isSharedCheck_1223_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1202_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1223_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; lean_object* v___x_1221_; 
v___x_1219_ = lean_box(0);
if (v_isShared_1218_ == 0)
{
lean_ctor_set_tag(v___x_1217_, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1219_);
v___x_1221_ = v___x_1217_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v___x_1219_);
lean_ctor_set(v_reuseFailAlloc_1222_, 1, v_a_1215_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
return v___x_1221_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecodeD___redArg(lean_object* v_dec_1226_, lean_object* v_k_1227_, lean_object* v_default_1228_, lean_object* v_t_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = ((lean_object*)(l_Lake_Toml_Table_decodeValue___closed__0));
v___x_1232_ = l_Lake_Toml_RBDict_findEntry_x3f___redArg(v___x_1231_, v_k_1227_, v_t_1229_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v___x_1233_; 
lean_dec_ref(v_dec_1226_);
v___x_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1233_, 0, v_default_1228_);
lean_ctor_set(v___x_1233_, 1, v_a_1230_);
return v___x_1233_;
}
else
{
lean_object* v_val_1234_; lean_object* v_snd_1235_; lean_object* v___x_1236_; 
v_val_1234_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_val_1234_);
lean_dec_ref_known(v___x_1232_, 1);
v_snd_1235_ = lean_ctor_get(v_val_1234_, 1);
lean_inc(v_snd_1235_);
lean_dec(v_val_1234_);
v___x_1236_ = lean_apply_2(v_dec_1226_, v_snd_1235_, v_a_1230_);
if (lean_obj_tag(v___x_1236_) == 0)
{
lean_object* v_a_1237_; lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
lean_dec(v_default_1228_);
v_a_1237_ = lean_ctor_get(v___x_1236_, 0);
v_a_1238_ = lean_ctor_get(v___x_1236_, 1);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1240_ = v___x_1236_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_inc(v_a_1237_);
lean_dec(v___x_1236_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1237_);
lean_ctor_set(v_reuseFailAlloc_1244_, 1, v_a_1238_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
else
{
lean_object* v_a_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1253_; 
v_a_1246_ = lean_ctor_get(v___x_1236_, 1);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1253_ == 0)
{
lean_object* v_unused_1254_; 
v_unused_1254_ = lean_ctor_get(v___x_1236_, 0);
lean_dec(v_unused_1254_);
v___x_1248_ = v___x_1236_;
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_a_1246_);
lean_dec(v___x_1236_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1251_; 
if (v_isShared_1249_ == 0)
{
lean_ctor_set_tag(v___x_1248_, 0);
lean_ctor_set(v___x_1248_, 0, v_default_1228_);
v___x_1251_ = v___x_1248_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_default_1228_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v_a_1246_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_tryDecodeD(lean_object* v_00_u03b1_1255_, lean_object* v_dec_1256_, lean_object* v_k_1257_, lean_object* v_default_1258_, lean_object* v_t_1259_, lean_object* v_a_1260_){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = ((lean_object*)(l_Lake_Toml_Table_decodeValue___closed__0));
v___x_1262_ = l_Lake_Toml_RBDict_findEntry_x3f___redArg(v___x_1261_, v_k_1257_, v_t_1259_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v___x_1263_; 
lean_dec_ref(v_dec_1256_);
v___x_1263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1263_, 0, v_default_1258_);
lean_ctor_set(v___x_1263_, 1, v_a_1260_);
return v___x_1263_;
}
else
{
lean_object* v_val_1264_; lean_object* v_snd_1265_; lean_object* v___x_1266_; 
v_val_1264_ = lean_ctor_get(v___x_1262_, 0);
lean_inc(v_val_1264_);
lean_dec_ref_known(v___x_1262_, 1);
v_snd_1265_ = lean_ctor_get(v_val_1264_, 1);
lean_inc(v_snd_1265_);
lean_dec(v_val_1264_);
v___x_1266_ = lean_apply_2(v_dec_1256_, v_snd_1265_, v_a_1260_);
if (lean_obj_tag(v___x_1266_) == 0)
{
lean_object* v_a_1267_; lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
lean_dec(v_default_1258_);
v_a_1267_ = lean_ctor_get(v___x_1266_, 0);
v_a_1268_ = lean_ctor_get(v___x_1266_, 1);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1266_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_inc(v_a_1267_);
lean_dec(v___x_1266_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1267_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v_a_1268_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
v_a_1276_ = lean_ctor_get(v___x_1266_, 1);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1283_ == 0)
{
lean_object* v_unused_1284_; 
v_unused_1284_ = lean_ctor_get(v___x_1266_, 0);
lean_dec(v_unused_1284_);
v___x_1278_ = v___x_1266_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1266_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
lean_ctor_set_tag(v___x_1278_, 0);
lean_ctor_set(v___x_1278_, 0, v_default_1258_);
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_default_1258_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
}
}
lean_object* runtime_initialize_Init_System_FilePath(uint8_t builtin);
lean_object* runtime_initialize_Lake_Toml_Data(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Toml_Decode(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init_System_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Toml_Decode(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_FilePath(uint8_t builtin);
lean_object* initialize_Lake_Toml_Data(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Toml_Decode(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Toml_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Decode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Toml_Decode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Toml_Decode(builtin);
}
#ifdef __cplusplus
}
#endif

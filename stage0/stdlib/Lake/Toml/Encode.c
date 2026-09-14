// Lean compiler output
// Module: Lake.Toml.Encode
// Imports: public import Lake.Util.FilePath public import Lake.Toml.Data.Value
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
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_Toml_Value_table(lean_object*, lean_object*);
lean_object* l_Lake_mkRelPathString(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static const lean_closure_object l_Lake_instToTomlValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_instToTomlValue___closed__0 = (const lean_object*)&l_Lake_instToTomlValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToTomlValue = (const lean_object*)&l_Lake_instToTomlValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToTomlString___lam__0(lean_object*);
static const lean_closure_object l_Lake_instToTomlString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToTomlString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlString___closed__0 = (const lean_object*)&l_Lake_instToTomlString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToTomlString = (const lean_object*)&l_Lake_instToTomlString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToTomlFilePath___lam__0(lean_object*);
static const lean_closure_object l_Lake_instToTomlFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToTomlFilePath___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlFilePath___closed__0 = (const lean_object*)&l_Lake_instToTomlFilePath___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToTomlFilePath = (const lean_object*)&l_Lake_instToTomlFilePath___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToTomlName___lam__0(lean_object*);
static const lean_closure_object l_Lake_instToTomlName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToTomlName___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlName___closed__0 = (const lean_object*)&l_Lake_instToTomlName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToTomlName = (const lean_object*)&l_Lake_instToTomlName___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToTomlInt___lam__0(lean_object*);
static const lean_closure_object l_Lake_instToTomlInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToTomlInt___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlInt___closed__0 = (const lean_object*)&l_Lake_instToTomlInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToTomlInt = (const lean_object*)&l_Lake_instToTomlInt___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToTomlNat___lam__0(lean_object*);
static const lean_closure_object l_Lake_instToTomlNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToTomlNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlNat___closed__0 = (const lean_object*)&l_Lake_instToTomlNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToTomlNat = (const lean_object*)&l_Lake_instToTomlNat___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToTomlFloat___lam__0(double);
LEAN_EXPORT lean_object* l_Lake_instToTomlFloat___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instToTomlFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToTomlFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlFloat___closed__0 = (const lean_object*)&l_Lake_instToTomlFloat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToTomlFloat = (const lean_object*)&l_Lake_instToTomlFloat___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToTomlBool___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lake_instToTomlBool___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instToTomlBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToTomlBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlBool___closed__0 = (const lean_object*)&l_Lake_instToTomlBool___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToTomlBool = (const lean_object*)&l_Lake_instToTomlBool___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToTomlArray___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instToTomlArray___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlArray___redArg___lam__1___closed__0 = (const lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lake_instToTomlArray___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlArray___redArg___lam__1___closed__1 = (const lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lake_instToTomlArray___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlArray___redArg___lam__1___closed__2 = (const lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lake_instToTomlArray___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlArray___redArg___lam__1___closed__3 = (const lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lake_instToTomlArray___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlArray___redArg___lam__1___closed__4 = (const lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lake_instToTomlArray___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlArray___redArg___lam__1___closed__5 = (const lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lake_instToTomlArray___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlArray___redArg___lam__1___closed__6 = (const lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lake_instToTomlArray___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__0_value),((lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lake_instToTomlArray___redArg___lam__1___closed__7 = (const lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lake_instToTomlArray___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__7_value),((lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__2_value),((lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__3_value),((lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__4_value),((lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lake_instToTomlArray___redArg___lam__1___closed__8 = (const lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lake_instToTomlArray___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__8_value),((lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lake_instToTomlArray___redArg___lam__1___closed__9 = (const lean_object*)&l_Lake_instToTomlArray___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lake_instToTomlArray___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTomlArray___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTomlArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTomlArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTomlArrayValue___lam__0(lean_object*);
static const lean_closure_object l_Lake_instToTomlArrayValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToTomlArrayValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToTomlArrayValue___closed__0 = (const lean_object*)&l_Lake_instToTomlArrayValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToTomlArrayValue = (const lean_object*)&l_Lake_instToTomlArrayValue___closed__0_value;
static const lean_closure_object l_Lake_instToTomlTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_Value_table, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_instToTomlTable___closed__0 = (const lean_object*)&l_Lake_instToTomlTable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToTomlTable = (const lean_object*)&l_Lake_instToTomlTable___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOfToToml___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOfToToml___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOfToToml(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_encodeArray_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_Toml_encodeArray_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Toml_encodeArray_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_Toml_encodeArray_x3f___redArg___closed__0_value;
static const lean_ctor_object l_Lake_Toml_encodeArray_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_encodeArray_x3f___redArg___closed__0_value)}};
static const lean_object* l_Lake_Toml_encodeArray_x3f___redArg___closed__1 = (const lean_object*)&l_Lake_Toml_encodeArray_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_encodeArray_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_encodeArray_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fArray___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOption___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOptionOfToToml___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOptionOfToToml___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOptionOfToToml(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0 = (const lean_object*)&l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertOfToToml_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertTable___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_instSmartInsertTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_instSmartInsertTable___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_instSmartInsertTable___closed__0 = (const lean_object*)&l_Lake_Toml_instSmartInsertTable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_instSmartInsertTable = (const lean_object*)&l_Lake_Toml_instSmartInsertTable___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertArrayOfToToml___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertArrayOfToToml___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertArrayOfToToml(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertString___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_instSmartInsertString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_instSmartInsertString___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_instSmartInsertString___closed__0 = (const lean_object*)&l_Lake_Toml_instSmartInsertString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_instSmartInsertString = (const lean_object*)&l_Lake_Toml_instSmartInsertString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_Table_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instSmartInsertOptionOfToToml___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instSmartInsertOptionOfToToml___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instSmartInsertOptionOfToToml(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_smartInsert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_smartInsert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_insertD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_insertD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTomlString___lam__0(lean_object* v_s_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_box(0);
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v_s_3_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlFilePath___lam__0(lean_object* v_x_8_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = l_Lake_mkRelPathString(v_x_8_);
v___x_10_ = lean_box(0);
v___x_11_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
lean_ctor_set(v___x_11_, 1, v___x_9_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlName___lam__0(lean_object* v_x_14_){
_start:
{
uint8_t v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_15_ = 1;
v___x_16_ = l_Lean_Name_toString(v_x_14_, v___x_15_);
v___x_17_ = lean_box(0);
v___x_18_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
lean_ctor_set(v___x_18_, 1, v___x_16_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlInt___lam__0(lean_object* v_n_21_){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_box(0);
v___x_23_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v_n_21_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlNat___lam__0(lean_object* v_n_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_box(0);
v___x_28_ = lean_nat_to_int(v_n_26_);
v___x_29_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_27_);
lean_ctor_set(v___x_29_, 1, v___x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlFloat___lam__0(double v_n_32_){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = lean_box(0);
v___x_34_ = lean_alloc_ctor(2, 1, 8);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set_float(v___x_34_, sizeof(void*)*1, v_n_32_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlFloat___lam__0___boxed(lean_object* v_n_35_){
_start:
{
double v_n_boxed_36_; lean_object* v_res_37_; 
v_n_boxed_36_ = lean_unbox_float(v_n_35_);
lean_dec_ref(v_n_35_);
v_res_37_ = l_Lake_instToTomlFloat___lam__0(v_n_boxed_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlBool___lam__0(uint8_t v_b_40_){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_box(0);
v___x_42_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_42_, 0, v___x_41_);
lean_ctor_set_uint8(v___x_42_, sizeof(void*)*1, v_b_40_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlBool___lam__0___boxed(lean_object* v_b_43_){
_start:
{
uint8_t v_b_boxed_44_; lean_object* v_res_45_; 
v_b_boxed_44_ = lean_unbox(v_b_43_);
v_res_45_ = l_Lake_instToTomlBool___lam__0(v_b_boxed_44_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlArray___redArg___lam__0(lean_object* v_inst_48_, lean_object* v_x_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_apply_1(v_inst_48_, v_x_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlArray___redArg___lam__1(lean_object* v___f_70_, lean_object* v_x_71_){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; size_t v_sz_74_; size_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_72_ = lean_box(0);
v___x_73_ = ((lean_object*)(l_Lake_instToTomlArray___redArg___lam__1___closed__9));
v_sz_74_ = lean_array_size(v_x_71_);
v___x_75_ = ((size_t)0ULL);
v___x_76_ = l_unsafeCast___redArg(v_x_71_);
v___x_77_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_73_, v___f_70_, v_sz_74_, v___x_75_, v___x_76_);
v___x_78_ = l_unsafeCast___redArg(v___x_77_);
lean_dec(v___x_77_);
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_72_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlArray___redArg___lam__1___boxed(lean_object* v___f_80_, lean_object* v_x_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lake_instToTomlArray___redArg___lam__1(v___f_80_, v_x_81_);
lean_dec_ref(v_x_81_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlArray___redArg(lean_object* v_inst_83_){
_start:
{
lean_object* v___f_84_; lean_object* v___f_85_; 
v___f_84_ = lean_alloc_closure((void*)(l_Lake_instToTomlArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_84_, 0, v_inst_83_);
v___f_85_ = lean_alloc_closure((void*)(l_Lake_instToTomlArray___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_85_, 0, v___f_84_);
return v___f_85_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlArray(lean_object* v_00_u03b1_86_, lean_object* v_inst_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = l_Lake_instToTomlArray___redArg(v_inst_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTomlArrayValue___lam__0(lean_object* v_x_89_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_box(0);
v___x_91_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v_x_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOfToToml___redArg___lam__0(lean_object* v_inst_97_, lean_object* v_v_98_){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_apply_1(v_inst_97_, v_v_98_);
v___x_100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOfToToml___redArg(lean_object* v_inst_101_){
_start:
{
lean_object* v___f_102_; 
v___f_102_ = lean_alloc_closure((void*)(l_Lake_instToToml_x3fOfToToml___redArg___lam__0), 2, 1);
lean_closure_set(v___f_102_, 0, v_inst_101_);
return v___f_102_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOfToToml(lean_object* v_00_u03b1_103_, lean_object* v_inst_104_){
_start:
{
lean_object* v___f_105_; 
v___f_105_ = lean_alloc_closure((void*)(l_Lake_instToToml_x3fOfToToml___redArg___lam__0), 2, 1);
lean_closure_set(v___f_105_, 0, v_inst_104_);
return v___f_105_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_encodeArray_x3f___redArg___lam__0(lean_object* v_inst_106_, lean_object* v_x1_107_, lean_object* v_x2_108_){
_start:
{
if (lean_obj_tag(v_x1_107_) == 0)
{
lean_dec(v_x2_108_);
lean_dec_ref(v_inst_106_);
return v_x1_107_;
}
else
{
lean_object* v_val_109_; lean_object* v___x_110_; 
v_val_109_ = lean_ctor_get(v_x1_107_, 0);
lean_inc(v_val_109_);
lean_dec_ref_known(v_x1_107_, 1);
v___x_110_ = lean_apply_1(v_inst_106_, v_x2_108_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v___x_111_; 
lean_dec(v_val_109_);
v___x_111_ = lean_box(0);
return v___x_111_;
}
else
{
lean_object* v_val_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_120_; 
v_val_112_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_120_ == 0)
{
v___x_114_ = v___x_110_;
v_isShared_115_ = v_isSharedCheck_120_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_val_112_);
lean_dec(v___x_110_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_120_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_116_ = lean_array_push(v_val_109_, v_val_112_);
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 0, v___x_116_);
v___x_118_ = v___x_114_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_116_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_encodeArray_x3f___redArg(lean_object* v_inst_125_, lean_object* v_as_126_){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_127_ = lean_unsigned_to_nat(0u);
v___x_128_ = ((lean_object*)(l_Lake_Toml_encodeArray_x3f___redArg___closed__1));
v___x_129_ = lean_array_get_size(v_as_126_);
v___x_130_ = ((lean_object*)(l_Lake_instToTomlArray___redArg___lam__1___closed__9));
v___x_131_ = lean_nat_dec_lt(v___x_127_, v___x_129_);
if (v___x_131_ == 0)
{
lean_dec_ref(v_as_126_);
lean_dec_ref(v_inst_125_);
return v___x_128_;
}
else
{
lean_object* v___f_132_; uint8_t v___x_133_; 
v___f_132_ = lean_alloc_closure((void*)(l_Lake_Toml_encodeArray_x3f___redArg___lam__0), 3, 1);
lean_closure_set(v___f_132_, 0, v_inst_125_);
v___x_133_ = lean_nat_dec_le(v___x_129_, v___x_129_);
if (v___x_133_ == 0)
{
if (v___x_131_ == 0)
{
lean_dec_ref(v___f_132_);
lean_dec_ref(v_as_126_);
return v___x_128_;
}
else
{
size_t v___x_134_; size_t v___x_135_; lean_object* v___x_136_; 
v___x_134_ = ((size_t)0ULL);
v___x_135_ = lean_usize_of_nat(v___x_129_);
v___x_136_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_130_, v___f_132_, v_as_126_, v___x_134_, v___x_135_, v___x_128_);
return v___x_136_;
}
}
else
{
size_t v___x_137_; size_t v___x_138_; lean_object* v___x_139_; 
v___x_137_ = ((size_t)0ULL);
v___x_138_ = lean_usize_of_nat(v___x_129_);
v___x_139_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_130_, v___f_132_, v_as_126_, v___x_137_, v___x_138_, v___x_128_);
return v___x_139_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_encodeArray_x3f(lean_object* v_00_u03b1_140_, lean_object* v_inst_141_, lean_object* v_as_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = l_Lake_Toml_encodeArray_x3f___redArg(v_inst_141_, v_as_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fArray___redArg___lam__0(lean_object* v_inst_144_, lean_object* v_as_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lake_Toml_encodeArray_x3f___redArg(v_inst_144_, v_as_145_);
if (lean_obj_tag(v___x_146_) == 0)
{
lean_object* v___x_147_; 
v___x_147_ = lean_box(0);
return v___x_147_;
}
else
{
lean_object* v_val_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_157_; 
v_val_148_ = lean_ctor_get(v___x_146_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_146_);
if (v_isSharedCheck_157_ == 0)
{
v___x_150_ = v___x_146_;
v_isShared_151_ = v_isSharedCheck_157_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_val_148_);
lean_dec(v___x_146_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_157_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_155_; 
v___x_152_ = lean_box(0);
v___x_153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
lean_ctor_set(v___x_153_, 1, v_val_148_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 0, v___x_153_);
v___x_155_ = v___x_150_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_153_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fArray___redArg(lean_object* v_inst_158_){
_start:
{
lean_object* v___f_159_; 
v___f_159_ = lean_alloc_closure((void*)(l_Lake_instToToml_x3fArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_159_, 0, v_inst_158_);
return v___f_159_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fArray(lean_object* v_00_u03b1_160_, lean_object* v_inst_161_){
_start:
{
lean_object* v___f_162_; 
v___f_162_ = lean_alloc_closure((void*)(l_Lake_instToToml_x3fArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_162_, 0, v_inst_161_);
return v___f_162_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOption___redArg___lam__0(lean_object* v_inst_163_, lean_object* v_x_164_){
_start:
{
if (lean_obj_tag(v_x_164_) == 0)
{
lean_object* v___x_165_; 
lean_dec_ref(v_inst_163_);
v___x_165_ = lean_box(0);
return v___x_165_;
}
else
{
lean_object* v_val_166_; lean_object* v___x_167_; 
v_val_166_ = lean_ctor_get(v_x_164_, 0);
lean_inc(v_val_166_);
lean_dec_ref_known(v_x_164_, 1);
v___x_167_ = lean_apply_1(v_inst_163_, v_val_166_);
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOption___redArg(lean_object* v_inst_168_){
_start:
{
lean_object* v___f_169_; 
v___f_169_ = lean_alloc_closure((void*)(l_Lake_instToToml_x3fOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_169_, 0, v_inst_168_);
return v___f_169_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOption(lean_object* v_00_u03b1_170_, lean_object* v_inst_171_){
_start:
{
lean_object* v___f_172_; 
v___f_172_ = lean_alloc_closure((void*)(l_Lake_instToToml_x3fOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_172_, 0, v_inst_171_);
return v___f_172_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOptionOfToToml___redArg___lam__0(lean_object* v_inst_173_, lean_object* v_x_174_){
_start:
{
if (lean_obj_tag(v_x_174_) == 0)
{
lean_object* v___x_175_; 
lean_dec_ref(v_inst_173_);
v___x_175_ = lean_box(0);
return v___x_175_;
}
else
{
lean_object* v_val_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_184_; 
v_val_176_ = lean_ctor_get(v_x_174_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v_x_174_);
if (v_isSharedCheck_184_ == 0)
{
v___x_178_ = v_x_174_;
v_isShared_179_ = v_isSharedCheck_184_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_val_176_);
lean_dec(v_x_174_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_184_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_180_ = lean_apply_1(v_inst_173_, v_val_176_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 0, v___x_180_);
v___x_182_ = v___x_178_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_180_);
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
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOptionOfToToml___redArg(lean_object* v_inst_185_){
_start:
{
lean_object* v___f_186_; 
v___f_186_ = lean_alloc_closure((void*)(l_Lake_instToToml_x3fOptionOfToToml___redArg___lam__0), 2, 1);
lean_closure_set(v___f_186_, 0, v_inst_185_);
return v___f_186_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToToml_x3fOptionOfToToml(lean_object* v_00_u03b1_187_, lean_object* v_inst_188_){
_start:
{
lean_object* v___f_189_; 
v___f_189_ = lean_alloc_closure((void*)(l_Lake_instToToml_x3fOptionOfToToml___redArg___lam__0), 2, 1);
lean_closure_set(v___f_189_, 0, v_inst_188_);
return v___f_189_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0(lean_object* v_inst_191_, lean_object* v_k_192_, lean_object* v_v_193_, lean_object* v_t_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_apply_1(v_inst_191_, v_v_193_);
if (lean_obj_tag(v___x_195_) == 1)
{
lean_object* v_val_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_val_196_ = lean_ctor_get(v___x_195_, 0);
lean_inc(v_val_196_);
lean_dec_ref_known(v___x_195_, 1);
v___x_197_ = ((lean_object*)(l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0));
v___x_198_ = l_Lake_Toml_RBDict_insert___redArg(v___x_197_, v_k_192_, v_val_196_, v_t_194_);
return v___x_198_;
}
else
{
lean_dec(v___x_195_);
lean_dec(v_k_192_);
return v_t_194_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg(lean_object* v_inst_199_){
_start:
{
lean_object* v___f_200_; 
v___f_200_ = lean_alloc_closure((void*)(l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0), 4, 1);
lean_closure_set(v___f_200_, 0, v_inst_199_);
return v___f_200_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertOfToToml_x3f(lean_object* v_00_u03b1_201_, lean_object* v_inst_202_){
_start:
{
lean_object* v___f_203_; 
v___f_203_ = lean_alloc_closure((void*)(l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0), 4, 1);
lean_closure_set(v___f_203_, 0, v_inst_202_);
return v___f_203_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertTable___lam__0(lean_object* v_k_204_, lean_object* v_v_205_, lean_object* v_t_206_){
_start:
{
lean_object* v_items_207_; lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v_items_207_ = lean_ctor_get(v_v_205_, 0);
v___x_208_ = lean_array_get_size(v_items_207_);
v___x_209_ = lean_unsigned_to_nat(0u);
v___x_210_ = lean_nat_dec_eq(v___x_208_, v___x_209_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_211_ = ((lean_object*)(l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0));
v___x_212_ = lean_box(0);
v___x_213_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
lean_ctor_set(v___x_213_, 1, v_v_205_);
v___x_214_ = l_Lake_Toml_RBDict_insert___redArg(v___x_211_, v_k_204_, v___x_213_, v_t_206_);
return v___x_214_;
}
else
{
lean_dec_ref(v_v_205_);
lean_dec(v_k_204_);
return v_t_206_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertArrayOfToToml___redArg___lam__0(lean_object* v_inst_217_, lean_object* v_k_218_, lean_object* v_v_219_, lean_object* v_t_220_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_221_ = lean_array_get_size(v_v_219_);
v___x_222_ = lean_unsigned_to_nat(0u);
v___x_223_ = lean_nat_dec_eq(v___x_221_, v___x_222_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_224_ = ((lean_object*)(l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0));
v___x_225_ = lean_apply_1(v_inst_217_, v_v_219_);
v___x_226_ = l_Lake_Toml_RBDict_insert___redArg(v___x_224_, v_k_218_, v___x_225_, v_t_220_);
return v___x_226_;
}
else
{
lean_dec_ref(v_v_219_);
lean_dec(v_k_218_);
lean_dec_ref(v_inst_217_);
return v_t_220_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertArrayOfToToml___redArg(lean_object* v_inst_227_){
_start:
{
lean_object* v___f_228_; 
v___f_228_ = lean_alloc_closure((void*)(l_Lake_Toml_instSmartInsertArrayOfToToml___redArg___lam__0), 4, 1);
lean_closure_set(v___f_228_, 0, v_inst_227_);
return v___f_228_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertArrayOfToToml(lean_object* v_00_u03b1_229_, lean_object* v_inst_230_){
_start:
{
lean_object* v___f_231_; 
v___f_231_ = lean_alloc_closure((void*)(l_Lake_Toml_instSmartInsertArrayOfToToml___redArg___lam__0), 4, 1);
lean_closure_set(v___f_231_, 0, v_inst_230_);
return v___f_231_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instSmartInsertString___lam__0(lean_object* v_k_232_, lean_object* v_v_233_, lean_object* v_t_234_){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_235_ = lean_string_utf8_byte_size(v_v_233_);
v___x_236_ = lean_unsigned_to_nat(0u);
v___x_237_ = lean_nat_dec_eq(v___x_235_, v___x_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_238_ = ((lean_object*)(l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0));
v___x_239_ = lean_box(0);
v___x_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set(v___x_240_, 1, v_v_233_);
v___x_241_ = l_Lake_Toml_RBDict_insert___redArg(v___x_238_, v_k_232_, v___x_240_, v_t_234_);
return v___x_241_;
}
else
{
lean_dec_ref(v_v_233_);
lean_dec(v_k_232_);
return v_t_234_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_insert___redArg(lean_object* v_enc_244_, lean_object* v_k_245_, lean_object* v_v_246_, lean_object* v_t_247_){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_248_ = ((lean_object*)(l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0));
v___x_249_ = lean_apply_1(v_enc_244_, v_v_246_);
v___x_250_ = l_Lake_Toml_RBDict_insert___redArg(v___x_248_, v_k_245_, v___x_249_, v_t_247_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_insert(lean_object* v_00_u03b1_251_, lean_object* v_enc_252_, lean_object* v_k_253_, lean_object* v_v_254_, lean_object* v_t_255_){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = ((lean_object*)(l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0));
v___x_257_ = lean_apply_1(v_enc_252_, v_v_254_);
v___x_258_ = l_Lake_Toml_RBDict_insert___redArg(v___x_256_, v_k_253_, v___x_257_, v_t_255_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instSmartInsertOptionOfToToml___redArg___lam__0(lean_object* v_inst_259_, lean_object* v_k_260_, lean_object* v_v_x3f_261_, lean_object* v_t_262_){
_start:
{
if (lean_obj_tag(v_v_x3f_261_) == 0)
{
lean_dec(v_k_260_);
lean_dec_ref(v_inst_259_);
return v_t_262_;
}
else
{
lean_object* v_val_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v_val_263_ = lean_ctor_get(v_v_x3f_261_, 0);
lean_inc(v_val_263_);
lean_dec_ref_known(v_v_x3f_261_, 1);
v___x_264_ = lean_apply_1(v_inst_259_, v_val_263_);
v___x_265_ = ((lean_object*)(l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0));
v___x_266_ = l_Lake_Toml_RBDict_insert___redArg(v___x_265_, v_k_260_, v___x_264_, v_t_262_);
return v___x_266_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instSmartInsertOptionOfToToml___redArg(lean_object* v_inst_267_){
_start:
{
lean_object* v___f_268_; 
v___f_268_ = lean_alloc_closure((void*)(l_Lake_Toml_Table_instSmartInsertOptionOfToToml___redArg___lam__0), 4, 1);
lean_closure_set(v___f_268_, 0, v_inst_267_);
return v___f_268_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_instSmartInsertOptionOfToToml(lean_object* v_00_u03b1_269_, lean_object* v_inst_270_){
_start:
{
lean_object* v___f_271_; 
v___f_271_ = lean_alloc_closure((void*)(l_Lake_Toml_Table_instSmartInsertOptionOfToToml___redArg___lam__0), 4, 1);
lean_closure_set(v___f_271_, 0, v_inst_270_);
return v___f_271_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_smartInsert___redArg(lean_object* v_inst_272_, lean_object* v_k_273_, lean_object* v_v_274_, lean_object* v_t_275_){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = lean_apply_3(v_inst_272_, v_k_273_, v_v_274_, v_t_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_smartInsert(lean_object* v_00_u03b1_277_, lean_object* v_inst_278_, lean_object* v_k_279_, lean_object* v_v_280_, lean_object* v_t_281_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = lean_apply_3(v_inst_278_, v_k_279_, v_v_280_, v_t_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_insertD___redArg(lean_object* v_enc_283_, lean_object* v_inst_284_, lean_object* v_k_285_, lean_object* v_v_286_, lean_object* v_default_287_, lean_object* v_t_288_){
_start:
{
lean_object* v___x_289_; uint8_t v___x_290_; 
lean_inc(v_v_286_);
v___x_289_ = lean_apply_2(v_inst_284_, v_v_286_, v_default_287_);
v___x_290_ = lean_unbox(v___x_289_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_291_ = ((lean_object*)(l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0));
v___x_292_ = lean_apply_1(v_enc_283_, v_v_286_);
v___x_293_ = l_Lake_Toml_RBDict_insert___redArg(v___x_291_, v_k_285_, v___x_292_, v_t_288_);
return v___x_293_;
}
else
{
lean_dec(v_v_286_);
lean_dec(v_k_285_);
lean_dec_ref(v_enc_283_);
return v_t_288_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_insertD(lean_object* v_00_u03b1_294_, lean_object* v_enc_295_, lean_object* v_inst_296_, lean_object* v_k_297_, lean_object* v_v_298_, lean_object* v_default_299_, lean_object* v_t_300_){
_start:
{
lean_object* v___x_301_; uint8_t v___x_302_; 
lean_inc(v_v_298_);
v___x_301_ = lean_apply_2(v_inst_296_, v_v_298_, v_default_299_);
v___x_302_ = lean_unbox(v___x_301_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_303_ = ((lean_object*)(l_Lake_Toml_instSmartInsertOfToToml_x3f___redArg___lam__0___closed__0));
v___x_304_ = lean_apply_1(v_enc_295_, v_v_298_);
v___x_305_ = l_Lake_Toml_RBDict_insert___redArg(v___x_303_, v_k_297_, v___x_304_, v_t_300_);
return v___x_305_;
}
else
{
lean_dec(v_v_298_);
lean_dec(v_k_297_);
lean_dec_ref(v_enc_295_);
return v_t_300_;
}
}
}
lean_object* runtime_initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* runtime_initialize_Lake_Toml_Data_Value(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Toml_Encode(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Data_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Toml_Encode(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* initialize_Lake_Toml_Data_Value(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Toml_Encode(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Toml_Data_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Encode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Toml_Encode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Toml_Encode(builtin);
}
#ifdef __cplusplus
}
#endif

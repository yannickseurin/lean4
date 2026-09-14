// Lean compiler output
// Module: Lean.Util.LeanOptions
// Imports: public import Lean.Data.Json.FromToJson.Basic
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
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_NameMap_fromJson_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_NameMap_toJson___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofBool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofBool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofNat_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofNat_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedLeanOptionValue_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_instInhabitedLeanOptionValue_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedLeanOptionValue_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedLeanOptionValue_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedLeanOptionValue_default___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedLeanOptionValue_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedLeanOptionValue_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedLeanOptionValue_default = (const lean_object*)&l_Lean_instInhabitedLeanOptionValue_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedLeanOptionValue = (const lean_object*)&l_Lean_instInhabitedLeanOptionValue_default___closed__1_value;
static const lean_string_object l_Lean_instReprLeanOptionValue_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.LeanOptionValue.ofString"};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__0 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__1 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__1_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__2 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__2_value;
static lean_once_cell_t l_Lean_instReprLeanOptionValue_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOptionValue_repr___closed__3;
static lean_once_cell_t l_Lean_instReprLeanOptionValue_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOptionValue_repr___closed__4;
static const lean_string_object l_Lean_instReprLeanOptionValue_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.LeanOptionValue.ofBool"};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__5 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__5_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__5_value)}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__6 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__6_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__7 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__7_value;
static const lean_string_object l_Lean_instReprLeanOptionValue_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.LeanOptionValue.ofNat"};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__8 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__8_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__8_value)}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__9 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__9_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__10 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptionValue_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptionValue_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLeanOptionValue_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instReprLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLeanOptionValue = (const lean_object*)&l_Lean_instReprLeanOptionValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofDataValue_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_toDataValue(lean_object*);
static const lean_closure_object l_Lean_instValueLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LeanOptionValue_toDataValue, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instValueLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instValueLeanOptionValue___closed__0_value;
static const lean_closure_object l_Lean_instValueLeanOptionValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LeanOptionValue_ofDataValue_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instValueLeanOptionValue___closed__1 = (const lean_object*)&l_Lean_instValueLeanOptionValue___closed__1_value;
static const lean_ctor_object l_Lean_instValueLeanOptionValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instValueLeanOptionValue___closed__0_value),((lean_object*)&l_Lean_instValueLeanOptionValue___closed__1_value)}};
static const lean_object* l_Lean_instValueLeanOptionValue___closed__2 = (const lean_object*)&l_Lean_instValueLeanOptionValue___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_instValueLeanOptionValue = (const lean_object*)&l_Lean_instValueLeanOptionValue___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instCoeStringLeanOptionValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instCoeStringLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeStringLeanOptionValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeStringLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instCoeStringLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeStringLeanOptionValue = (const lean_object*)&l_Lean_instCoeStringLeanOptionValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instCoeBoolLeanOptionValue___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instCoeBoolLeanOptionValue___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instCoeBoolLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeBoolLeanOptionValue___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeBoolLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instCoeBoolLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeBoolLeanOptionValue = (const lean_object*)&l_Lean_instCoeBoolLeanOptionValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instCoeNatLeanOptionValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instCoeNatLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeNatLeanOptionValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeNatLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instCoeNatLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeNatLeanOptionValue = (const lean_object*)&l_Lean_instCoeNatLeanOptionValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instOfNatLeanOptionValue(lean_object*);
static const lean_string_object l_Lean_instFromJsonLeanOptionValue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "invalid LeanOptionValue type"};
static const lean_object* l_Lean_instFromJsonLeanOptionValue___lam__0___closed__0 = (const lean_object*)&l_Lean_instFromJsonLeanOptionValue___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonLeanOptionValue___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instFromJsonLeanOptionValue___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instFromJsonLeanOptionValue___lam__0___closed__1 = (const lean_object*)&l_Lean_instFromJsonLeanOptionValue___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_instFromJsonLeanOptionValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instFromJsonLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonLeanOptionValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instFromJsonLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonLeanOptionValue = (const lean_object*)&l_Lean_instFromJsonLeanOptionValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonLeanOptionValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToJsonLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonLeanOptionValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instToJsonLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonLeanOptionValue = (const lean_object*)&l_Lean_instToJsonLeanOptionValue___closed__0_value;
static const lean_string_object l_Lean_LeanOptionValue_asCliFlagValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_Lean_LeanOptionValue_asCliFlagValue___closed__0 = (const lean_object*)&l_Lean_LeanOptionValue_asCliFlagValue___closed__0_value;
static const lean_string_object l_Lean_LeanOptionValue_asCliFlagValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_LeanOptionValue_asCliFlagValue___closed__1 = (const lean_object*)&l_Lean_LeanOptionValue_asCliFlagValue___closed__1_value;
static const lean_string_object l_Lean_LeanOptionValue_asCliFlagValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_LeanOptionValue_asCliFlagValue___closed__2 = (const lean_object*)&l_Lean_LeanOptionValue_asCliFlagValue___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_asCliFlagValue(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedLeanOption_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLeanOption_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedLeanOption_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLeanOption_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLeanOption_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLeanOption;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprLeanOption_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprLeanOption_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__9 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__10 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_instReprLeanOption_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__12;
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__13 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__13_value;
static lean_once_cell_t l_Lean_instReprLeanOption_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__14;
static lean_once_cell_t l_Lean_instReprLeanOption_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__15;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__16 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__13_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__17 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLeanOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLeanOption_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLeanOption___closed__0 = (const lean_object*)&l_Lean_instReprLeanOption___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLeanOption = (const lean_object*)&l_Lean_instReprLeanOption___closed__0_value;
static const lean_string_object l_Lean_LeanOption_asCliArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-D"};
static const lean_object* l_Lean_LeanOption_asCliArg___closed__0 = (const lean_object*)&l_Lean_LeanOption_asCliArg___closed__0_value;
static const lean_string_object l_Lean_LeanOption_asCliArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_Lean_LeanOption_asCliArg___closed__1 = (const lean_object*)&l_Lean_LeanOption_asCliArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_LeanOption_asCliArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedLeanOptions_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLeanOptions;
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__1_value;
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__2 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__5_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__2_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__6 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__2_value;
static const lean_string_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__3 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__3_value;
static lean_once_cell_t l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4;
static lean_once_cell_t l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5;
static const lean_ctor_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__6 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__6_value;
static const lean_ctor_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__3_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__7 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprLeanOptions_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "values"};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instReprLeanOptions_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprLeanOptions_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprLeanOptions_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__2_value),((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_instReprLeanOptions_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__4;
static const lean_string_object l_Lean_instReprLeanOptions_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.TreeMap.ofList "};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprLeanOptions_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLeanOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLeanOptions_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLeanOptions___closed__0 = (const lean_object*)&l_Lean_instReprLeanOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLeanOptions = (const lean_object*)&l_Lean_instReprLeanOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLeanOptions;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_ofArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_ofArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_LeanOptions_append_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LeanOptions_append_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_LeanOptions_append_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LeanOptions_append_spec__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instAppendLeanOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LeanOptions_append, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instAppendLeanOptions___closed__0 = (const lean_object*)&l_Lean_instAppendLeanOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instAppendLeanOptions = (const lean_object*)&l_Lean_instAppendLeanOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LeanOptions_appendArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_appendArray___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instHAppendLeanOptionsArrayLeanOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LeanOptions_appendArray___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHAppendLeanOptionsArrayLeanOption___closed__0 = (const lean_object*)&l_Lean_instHAppendLeanOptionsArrayLeanOption___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHAppendLeanOptionsArrayLeanOption = (const lean_object*)&l_Lean_instHAppendLeanOptionsArrayLeanOption___closed__0_value;
static const lean_string_object l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_toOptions_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LeanOptions_fromOptions_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_fromOptions_x3f_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_fromOptions_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LeanOptions_fromOptions_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonLeanOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instFromJsonLeanOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonLeanOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instFromJsonLeanOptionValue___closed__0_value)} };
static const lean_object* l_Lean_instFromJsonLeanOptions___closed__0 = (const lean_object*)&l_Lean_instFromJsonLeanOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonLeanOptions = (const lean_object*)&l_Lean_instFromJsonLeanOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonLeanOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instToJsonLeanOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonLeanOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instToJsonLeanOptionValue___closed__0_value)} };
static const lean_object* l_Lean_instToJsonLeanOptions___closed__0 = (const lean_object*)&l_Lean_instToJsonLeanOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonLeanOptions = (const lean_object*)&l_Lean_instToJsonLeanOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorIdx(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_LeanOptionValue_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
switch(lean_obj_tag(v_t_7_))
{
case 0:
{
lean_object* v_s_9_; lean_object* v___x_10_; 
v_s_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc_ref(v_s_9_);
lean_dec_ref_known(v_t_7_, 1);
v___x_10_ = lean_apply_1(v_k_8_, v_s_9_);
return v___x_10_;
}
case 1:
{
uint8_t v_b_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v_b_11_ = lean_ctor_get_uint8(v_t_7_, 0);
lean_dec_ref_known(v_t_7_, 0);
v___x_12_ = lean_box(v_b_11_);
v___x_13_ = lean_apply_1(v_k_8_, v___x_12_);
return v___x_13_;
}
default: 
{
lean_object* v_n_14_; lean_object* v___x_15_; 
v_n_14_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_n_14_);
lean_dec_ref_known(v_t_7_, 1);
v___x_15_ = lean_apply_1(v_k_8_, v_n_14_);
return v___x_15_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_18_, v_k_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim___boxed(lean_object* v_motive_22_, lean_object* v_ctorIdx_23_, lean_object* v_t_24_, lean_object* v_h_25_, lean_object* v_k_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_LeanOptionValue_ctorElim(v_motive_22_, v_ctorIdx_23_, v_t_24_, v_h_25_, v_k_26_);
lean_dec(v_ctorIdx_23_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofString_elim___redArg(lean_object* v_t_28_, lean_object* v_ofString_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_28_, v_ofString_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofString_elim(lean_object* v_motive_31_, lean_object* v_t_32_, lean_object* v_h_33_, lean_object* v_ofString_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_32_, v_ofString_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofBool_elim___redArg(lean_object* v_t_36_, lean_object* v_ofBool_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_36_, v_ofBool_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofBool_elim(lean_object* v_motive_39_, lean_object* v_t_40_, lean_object* v_h_41_, lean_object* v_ofBool_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_40_, v_ofBool_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofNat_elim___redArg(lean_object* v_t_44_, lean_object* v_ofNat_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_44_, v_ofNat_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofNat_elim(lean_object* v_motive_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_ofNat_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_48_, v_ofNat_50_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_instReprLeanOptionValue_repr___closed__3(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_unsigned_to_nat(2u);
v___x_64_ = lean_nat_to_int(v___x_63_);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_instReprLeanOptionValue_repr___closed__4(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_unsigned_to_nat(1u);
v___x_66_ = lean_nat_to_int(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptionValue_repr(lean_object* v_x_79_, lean_object* v_prec_80_){
_start:
{
switch(lean_obj_tag(v_x_79_))
{
case 0:
{
lean_object* v_s_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_101_; 
v_s_81_ = lean_ctor_get(v_x_79_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_79_);
if (v_isSharedCheck_101_ == 0)
{
v___x_83_ = v_x_79_;
v_isShared_84_ = v_isSharedCheck_101_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_s_81_);
lean_dec(v_x_79_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_101_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___y_86_; lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = lean_unsigned_to_nat(1024u);
v___x_98_ = lean_nat_dec_le(v___x_97_, v_prec_80_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; 
v___x_99_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__3, &l_Lean_instReprLeanOptionValue_repr___closed__3_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__3);
v___y_86_ = v___x_99_;
goto v___jp_85_;
}
else
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__4, &l_Lean_instReprLeanOptionValue_repr___closed__4_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__4);
v___y_86_ = v___x_100_;
goto v___jp_85_;
}
v___jp_85_:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_87_ = ((lean_object*)(l_Lean_instReprLeanOptionValue_repr___closed__2));
v___x_88_ = l_String_quote(v_s_81_);
if (v_isShared_84_ == 0)
{
lean_ctor_set_tag(v___x_83_, 3);
lean_ctor_set(v___x_83_, 0, v___x_88_);
v___x_90_ = v___x_83_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_96_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_91_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_87_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
lean_inc(v___y_86_);
v___x_92_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_92_, 0, v___y_86_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = 0;
v___x_94_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_94_, 0, v___x_92_);
lean_ctor_set_uint8(v___x_94_, sizeof(void*)*1, v___x_93_);
v___x_95_ = l_Repr_addAppParen(v___x_94_, v_prec_80_);
return v___x_95_;
}
}
}
}
case 1:
{
uint8_t v_b_102_; lean_object* v___y_104_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_b_102_ = lean_ctor_get_uint8(v_x_79_, 0);
lean_dec_ref_known(v_x_79_, 0);
v___x_112_ = lean_unsigned_to_nat(1024u);
v___x_113_ = lean_nat_dec_le(v___x_112_, v_prec_80_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__3, &l_Lean_instReprLeanOptionValue_repr___closed__3_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__3);
v___y_104_ = v___x_114_;
goto v___jp_103_;
}
else
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__4, &l_Lean_instReprLeanOptionValue_repr___closed__4_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__4);
v___y_104_ = v___x_115_;
goto v___jp_103_;
}
v___jp_103_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_105_ = ((lean_object*)(l_Lean_instReprLeanOptionValue_repr___closed__7));
v___x_106_ = l_Bool_repr___redArg(v_b_102_);
v___x_107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_105_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
lean_inc(v___y_104_);
v___x_108_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_108_, 0, v___y_104_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = 0;
v___x_110_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*1, v___x_109_);
v___x_111_ = l_Repr_addAppParen(v___x_110_, v_prec_80_);
return v___x_111_;
}
}
default: 
{
lean_object* v_n_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_136_; 
v_n_116_ = lean_ctor_get(v_x_79_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v_x_79_);
if (v_isSharedCheck_136_ == 0)
{
v___x_118_ = v_x_79_;
v_isShared_119_ = v_isSharedCheck_136_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_n_116_);
lean_dec(v_x_79_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_136_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___y_121_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_132_ = lean_unsigned_to_nat(1024u);
v___x_133_ = lean_nat_dec_le(v___x_132_, v_prec_80_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; 
v___x_134_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__3, &l_Lean_instReprLeanOptionValue_repr___closed__3_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__3);
v___y_121_ = v___x_134_;
goto v___jp_120_;
}
else
{
lean_object* v___x_135_; 
v___x_135_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__4, &l_Lean_instReprLeanOptionValue_repr___closed__4_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__4);
v___y_121_ = v___x_135_;
goto v___jp_120_;
}
v___jp_120_:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_122_ = ((lean_object*)(l_Lean_instReprLeanOptionValue_repr___closed__10));
v___x_123_ = l_Nat_reprFast(v_n_116_);
if (v_isShared_119_ == 0)
{
lean_ctor_set_tag(v___x_118_, 3);
lean_ctor_set(v___x_118_, 0, v___x_123_);
v___x_125_ = v___x_118_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_123_);
v___x_125_ = v_reuseFailAlloc_131_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_122_);
lean_ctor_set(v___x_126_, 1, v___x_125_);
lean_inc(v___y_121_);
v___x_127_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_127_, 0, v___y_121_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = 0;
v___x_129_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_129_, 0, v___x_127_);
lean_ctor_set_uint8(v___x_129_, sizeof(void*)*1, v___x_128_);
v___x_130_ = l_Repr_addAppParen(v___x_129_, v_prec_80_);
return v___x_130_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptionValue_repr___boxed(lean_object* v_x_137_, lean_object* v_prec_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_instReprLeanOptionValue_repr(v_x_137_, v_prec_138_);
lean_dec(v_prec_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofDataValue_x3f(lean_object* v_x_142_){
_start:
{
switch(lean_obj_tag(v_x_142_))
{
case 0:
{
lean_object* v_v_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_151_; 
v_v_143_ = lean_ctor_get(v_x_142_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v_x_142_);
if (v_isSharedCheck_151_ == 0)
{
v___x_145_ = v_x_142_;
v_isShared_146_ = v_isSharedCheck_151_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_v_143_);
lean_dec(v_x_142_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_151_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_v_143_);
v___x_148_ = v_reuseFailAlloc_150_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_149_; 
v___x_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
return v___x_149_;
}
}
}
case 1:
{
uint8_t v_v_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_160_; 
v_v_152_ = lean_ctor_get_uint8(v_x_142_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v_x_142_);
if (v_isSharedCheck_160_ == 0)
{
v___x_154_ = v_x_142_;
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
else
{
lean_dec(v_x_142_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_159_, 0, v_v_152_);
v___x_157_ = v_reuseFailAlloc_159_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
lean_object* v___x_158_; 
v___x_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
}
case 3:
{
lean_object* v_v_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_169_; 
v_v_161_ = lean_ctor_get(v_x_142_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v_x_142_);
if (v_isSharedCheck_169_ == 0)
{
v___x_163_ = v_x_142_;
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_v_161_);
lean_dec(v_x_142_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_166_; 
if (v_isShared_164_ == 0)
{
lean_ctor_set_tag(v___x_163_, 2);
v___x_166_ = v___x_163_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_v_161_);
v___x_166_ = v_reuseFailAlloc_168_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_167_; 
v___x_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
return v___x_167_;
}
}
}
default: 
{
lean_object* v___x_170_; 
lean_dec_ref(v_x_142_);
v___x_170_ = lean_box(0);
return v___x_170_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_toDataValue(lean_object* v_x_171_){
_start:
{
switch(lean_obj_tag(v_x_171_))
{
case 0:
{
lean_object* v_s_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
v_s_172_ = lean_ctor_get(v_x_171_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v_x_171_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v_x_171_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_s_172_);
lean_dec(v_x_171_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_s_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
case 1:
{
uint8_t v_b_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_187_; 
v_b_180_ = lean_ctor_get_uint8(v_x_171_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v_x_171_);
if (v_isSharedCheck_187_ == 0)
{
v___x_182_ = v_x_171_;
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
else
{
lean_dec(v_x_171_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_186_, 0, v_b_180_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
default: 
{
lean_object* v_n_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
v_n_188_ = lean_ctor_get(v_x_171_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v_x_171_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v_x_171_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_n_188_);
lean_dec(v_x_171_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
lean_ctor_set_tag(v___x_190_, 3);
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_n_188_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeStringLeanOptionValue___lam__0(lean_object* v_s_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_203_, 0, v_s_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeBoolLeanOptionValue___lam__0(uint8_t v_b_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_207_, 0, v_b_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeBoolLeanOptionValue___lam__0___boxed(lean_object* v_b_208_){
_start:
{
uint8_t v_b_boxed_209_; lean_object* v_res_210_; 
v_b_boxed_209_ = lean_unbox(v_b_208_);
v_res_210_ = l_Lean_instCoeBoolLeanOptionValue___lam__0(v_b_boxed_209_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeNatLeanOptionValue___lam__0(lean_object* v_n_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_214_, 0, v_n_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_instOfNatLeanOptionValue(lean_object* v_n_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_218_, 0, v_n_217_);
return v___x_218_;
}
}
static lean_object* _init_l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2(void){
_start:
{
lean_object* v_natZero_222_; lean_object* v_intZero_223_; 
v_natZero_222_ = lean_unsigned_to_nat(0u);
v_intZero_223_ = lean_nat_to_int(v_natZero_222_);
return v_intZero_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonLeanOptionValue___lam__0(lean_object* v_x_224_){
_start:
{
switch(lean_obj_tag(v_x_224_))
{
case 3:
{
lean_object* v_s_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_235_; 
v_s_227_ = lean_ctor_get(v_x_224_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v_x_224_);
if (v_isSharedCheck_235_ == 0)
{
v___x_229_ = v_x_224_;
v_isShared_230_ = v_isSharedCheck_235_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_s_227_);
lean_dec(v_x_224_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_235_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
lean_ctor_set_tag(v___x_229_, 0);
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_s_227_);
v___x_232_ = v_reuseFailAlloc_234_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
lean_object* v___x_233_; 
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
return v___x_233_;
}
}
}
case 1:
{
uint8_t v_b_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_244_; 
v_b_236_ = lean_ctor_get_uint8(v_x_224_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v_x_224_);
if (v_isSharedCheck_244_ == 0)
{
v___x_238_ = v_x_224_;
v_isShared_239_ = v_isSharedCheck_244_;
goto v_resetjp_237_;
}
else
{
lean_dec(v_x_224_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_244_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, 0, v_b_236_);
v___x_241_ = v_reuseFailAlloc_243_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
lean_object* v___x_242_; 
v___x_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
}
}
case 2:
{
lean_object* v_n_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_260_; 
v_n_245_ = lean_ctor_get(v_x_224_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v_x_224_);
if (v_isSharedCheck_260_ == 0)
{
v___x_247_ = v_x_224_;
v_isShared_248_ = v_isSharedCheck_260_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_n_245_);
lean_dec(v_x_224_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_260_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v_mantissa_249_; lean_object* v_exponent_250_; lean_object* v_natZero_251_; lean_object* v_intZero_252_; uint8_t v_isNeg_253_; 
v_mantissa_249_ = lean_ctor_get(v_n_245_, 0);
lean_inc(v_mantissa_249_);
v_exponent_250_ = lean_ctor_get(v_n_245_, 1);
lean_inc(v_exponent_250_);
lean_dec_ref(v_n_245_);
v_natZero_251_ = lean_unsigned_to_nat(0u);
v_intZero_252_ = lean_obj_once(&l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2, &l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2_once, _init_l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2);
v_isNeg_253_ = lean_int_dec_lt(v_mantissa_249_, v_intZero_252_);
if (v_isNeg_253_ == 0)
{
uint8_t v___x_254_; 
v___x_254_ = lean_nat_dec_eq(v_exponent_250_, v_natZero_251_);
lean_dec(v_exponent_250_);
if (v___x_254_ == 0)
{
lean_dec(v_mantissa_249_);
lean_del_object(v___x_247_);
goto v___jp_225_;
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; 
v_a_255_ = lean_nat_abs(v_mantissa_249_);
lean_dec(v_mantissa_249_);
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 0, v_a_255_);
v___x_257_ = v___x_247_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_255_);
v___x_257_ = v_reuseFailAlloc_259_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_258_; 
v___x_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
return v___x_258_;
}
}
}
else
{
lean_dec(v_exponent_250_);
lean_dec(v_mantissa_249_);
lean_del_object(v___x_247_);
goto v___jp_225_;
}
}
}
default: 
{
lean_dec(v_x_224_);
goto v___jp_225_;
}
}
v___jp_225_:
{
lean_object* v___x_226_; 
v___x_226_ = ((lean_object*)(l_Lean_instFromJsonLeanOptionValue___lam__0___closed__1));
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonLeanOptionValue___lam__0(lean_object* v_x_263_){
_start:
{
switch(lean_obj_tag(v_x_263_))
{
case 0:
{
lean_object* v_s_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
v_s_264_ = lean_ctor_get(v_x_263_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v_x_263_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_s_264_);
lean_dec(v_x_263_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
lean_ctor_set_tag(v___x_266_, 3);
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_s_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
case 1:
{
uint8_t v_b_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
v_b_272_ = lean_ctor_get_uint8(v_x_263_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v_x_263_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_dec(v_x_263_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_278_, 0, v_b_272_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
default: 
{
lean_object* v_n_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_288_; 
v_n_280_ = lean_ctor_get(v_x_263_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_288_ == 0)
{
v___x_282_ = v_x_263_;
v_isShared_283_ = v_isSharedCheck_288_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_n_280_);
lean_dec(v_x_263_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_288_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_286_; 
v___x_284_ = l_Lean_JsonNumber_fromNat(v_n_280_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_284_);
v___x_286_ = v___x_282_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_284_);
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
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_asCliFlagValue(lean_object* v_x_294_){
_start:
{
switch(lean_obj_tag(v_x_294_))
{
case 0:
{
lean_object* v_s_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_s_295_ = lean_ctor_get(v_x_294_, 0);
lean_inc_ref(v_s_295_);
lean_dec_ref_known(v_x_294_, 1);
v___x_296_ = ((lean_object*)(l_Lean_LeanOptionValue_asCliFlagValue___closed__0));
v___x_297_ = lean_string_append(v___x_296_, v_s_295_);
lean_dec_ref(v_s_295_);
v___x_298_ = lean_string_append(v___x_297_, v___x_296_);
return v___x_298_;
}
case 1:
{
uint8_t v_b_299_; 
v_b_299_ = lean_ctor_get_uint8(v_x_294_, 0);
lean_dec_ref_known(v_x_294_, 0);
if (v_b_299_ == 0)
{
lean_object* v___x_300_; 
v___x_300_ = ((lean_object*)(l_Lean_LeanOptionValue_asCliFlagValue___closed__1));
return v___x_300_;
}
else
{
lean_object* v___x_301_; 
v___x_301_ = ((lean_object*)(l_Lean_LeanOptionValue_asCliFlagValue___closed__2));
return v___x_301_;
}
}
default: 
{
lean_object* v_n_302_; lean_object* v___x_303_; 
v_n_302_ = lean_ctor_get(v_x_294_, 0);
lean_inc(v_n_302_);
lean_dec_ref_known(v_x_294_, 1);
v___x_303_ = l_Nat_reprFast(v_n_302_);
return v___x_303_;
}
}
}
}
static lean_object* _init_l_Lean_instInhabitedLeanOption_default___closed__0(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_box(0);
v___x_305_ = l_unsafeCast___redArg(v___x_304_);
return v___x_305_;
}
}
static lean_object* _init_l_Lean_instInhabitedLeanOption_default___closed__1(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_306_ = ((lean_object*)(l_Lean_instInhabitedLeanOptionValue_default));
v___x_307_ = lean_obj_once(&l_Lean_instInhabitedLeanOption_default___closed__0, &l_Lean_instInhabitedLeanOption_default___closed__0_once, _init_l_Lean_instInhabitedLeanOption_default___closed__0);
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
lean_ctor_set(v___x_308_, 1, v___x_306_);
return v___x_308_;
}
}
static lean_object* _init_l_Lean_instInhabitedLeanOption_default(void){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = lean_obj_once(&l_Lean_instInhabitedLeanOption_default___closed__1, &l_Lean_instInhabitedLeanOption_default___closed__1_once, _init_l_Lean_instInhabitedLeanOption_default___closed__1);
return v___x_309_;
}
}
static lean_object* _init_l_Lean_instInhabitedLeanOption(void){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = l_Lean_instInhabitedLeanOption_default;
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprLeanOption_repr_spec__0(lean_object* v_a_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lean_nat_to_int(v_a_311_);
return v___x_312_;
}
}
static lean_object* _init_l_Lean_instReprLeanOption_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = lean_unsigned_to_nat(8u);
v___x_327_ = lean_nat_to_int(v___x_326_);
return v___x_327_;
}
}
static lean_object* _init_l_Lean_instReprLeanOption_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = lean_unsigned_to_nat(9u);
v___x_335_ = lean_nat_to_int(v___x_334_);
return v___x_335_;
}
}
static lean_object* _init_l_Lean_instReprLeanOption_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__0));
v___x_338_ = lean_string_length(v___x_337_);
return v___x_338_;
}
}
static lean_object* _init_l_Lean_instReprLeanOption_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_obj_once(&l_Lean_instReprLeanOption_repr___redArg___closed__14, &l_Lean_instReprLeanOption_repr___redArg___closed__14_once, _init_l_Lean_instReprLeanOption_repr___redArg___closed__14);
v___x_340_ = lean_nat_to_int(v___x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr___redArg(lean_object* v_x_345_){
_start:
{
lean_object* v_name_346_; lean_object* v_value_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_381_; 
v_name_346_ = lean_ctor_get(v_x_345_, 0);
v_value_347_ = lean_ctor_get(v_x_345_, 1);
v_isSharedCheck_381_ = !lean_is_exclusive(v_x_345_);
if (v_isSharedCheck_381_ == 0)
{
v___x_349_ = v_x_345_;
v_isShared_350_ = v_isSharedCheck_381_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_value_347_);
lean_inc(v_name_346_);
lean_dec(v_x_345_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_381_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_351_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__5));
v___x_352_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__6));
v___x_353_ = lean_obj_once(&l_Lean_instReprLeanOption_repr___redArg___closed__7, &l_Lean_instReprLeanOption_repr___redArg___closed__7_once, _init_l_Lean_instReprLeanOption_repr___redArg___closed__7);
v___x_354_ = lean_unsigned_to_nat(0u);
v___x_355_ = l_Lean_Name_reprPrec(v_name_346_, v___x_354_);
if (v_isShared_350_ == 0)
{
lean_ctor_set_tag(v___x_349_, 4);
lean_ctor_set(v___x_349_, 1, v___x_355_);
lean_ctor_set(v___x_349_, 0, v___x_353_);
v___x_357_ = v___x_349_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v___x_353_);
lean_ctor_set(v_reuseFailAlloc_380_, 1, v___x_355_);
v___x_357_ = v_reuseFailAlloc_380_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
uint8_t v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_358_ = 0;
v___x_359_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_359_, 0, v___x_357_);
lean_ctor_set_uint8(v___x_359_, sizeof(void*)*1, v___x_358_);
v___x_360_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_352_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
v___x_361_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__9));
v___x_362_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_362_, 0, v___x_360_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
v___x_363_ = lean_box(1);
v___x_364_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_362_);
lean_ctor_set(v___x_364_, 1, v___x_363_);
v___x_365_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__11));
v___x_366_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_364_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
lean_ctor_set(v___x_367_, 1, v___x_351_);
v___x_368_ = lean_obj_once(&l_Lean_instReprLeanOption_repr___redArg___closed__12, &l_Lean_instReprLeanOption_repr___redArg___closed__12_once, _init_l_Lean_instReprLeanOption_repr___redArg___closed__12);
v___x_369_ = l_Lean_instReprLeanOptionValue_repr(v_value_347_, v___x_354_);
v___x_370_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_368_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
v___x_371_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_371_, 0, v___x_370_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1, v___x_358_);
v___x_372_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_367_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
v___x_373_ = lean_obj_once(&l_Lean_instReprLeanOption_repr___redArg___closed__15, &l_Lean_instReprLeanOption_repr___redArg___closed__15_once, _init_l_Lean_instReprLeanOption_repr___redArg___closed__15);
v___x_374_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__16));
v___x_375_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
lean_ctor_set(v___x_375_, 1, v___x_372_);
v___x_376_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__17));
v___x_377_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_373_);
lean_ctor_set(v___x_378_, 1, v___x_377_);
v___x_379_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_379_, 0, v___x_378_);
lean_ctor_set_uint8(v___x_379_, sizeof(void*)*1, v___x_358_);
return v___x_379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr(lean_object* v_x_382_, lean_object* v_prec_383_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = l_Lean_instReprLeanOption_repr___redArg(v_x_382_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr___boxed(lean_object* v_x_385_, lean_object* v_prec_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lean_instReprLeanOption_repr(v_x_385_, v_prec_386_);
lean_dec(v_prec_386_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOption_asCliArg(lean_object* v_o_392_){
_start:
{
lean_object* v_name_393_; lean_object* v_value_394_; lean_object* v___x_395_; uint8_t v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v_name_393_ = lean_ctor_get(v_o_392_, 0);
lean_inc(v_name_393_);
v_value_394_ = lean_ctor_get(v_o_392_, 1);
lean_inc_ref(v_value_394_);
lean_dec_ref(v_o_392_);
v___x_395_ = ((lean_object*)(l_Lean_LeanOption_asCliArg___closed__0));
v___x_396_ = 1;
v___x_397_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_393_, v___x_396_);
v___x_398_ = lean_string_append(v___x_395_, v___x_397_);
lean_dec_ref(v___x_397_);
v___x_399_ = ((lean_object*)(l_Lean_LeanOption_asCliArg___closed__1));
v___x_400_ = lean_string_append(v___x_398_, v___x_399_);
v___x_401_ = l_Lean_LeanOptionValue_asCliFlagValue(v_value_394_);
v___x_402_ = lean_string_append(v___x_400_, v___x_401_);
lean_dec_ref(v___x_401_);
return v___x_402_;
}
}
static lean_object* _init_l_Lean_instInhabitedLeanOptions_default(void){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = lean_box(1);
return v___x_403_;
}
}
static lean_object* _init_l_Lean_instInhabitedLeanOptions(void){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = lean_box(1);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2_spec__3(lean_object* v_x_405_, lean_object* v_x_406_, lean_object* v_x_407_){
_start:
{
if (lean_obj_tag(v_x_407_) == 0)
{
lean_dec(v_x_405_);
return v_x_406_;
}
else
{
lean_object* v_head_408_; lean_object* v_tail_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_418_; 
v_head_408_ = lean_ctor_get(v_x_407_, 0);
v_tail_409_ = lean_ctor_get(v_x_407_, 1);
v_isSharedCheck_418_ = !lean_is_exclusive(v_x_407_);
if (v_isSharedCheck_418_ == 0)
{
v___x_411_ = v_x_407_;
v_isShared_412_ = v_isSharedCheck_418_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_tail_409_);
lean_inc(v_head_408_);
lean_dec(v_x_407_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_418_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
lean_inc(v_x_405_);
if (v_isShared_412_ == 0)
{
lean_ctor_set_tag(v___x_411_, 5);
lean_ctor_set(v___x_411_, 1, v_x_405_);
lean_ctor_set(v___x_411_, 0, v_x_406_);
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_x_406_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v_x_405_);
v___x_414_ = v_reuseFailAlloc_417_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
lean_object* v___x_415_; 
v___x_415_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
lean_ctor_set(v___x_415_, 1, v_head_408_);
v_x_406_ = v___x_415_;
v_x_407_ = v_tail_409_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2(lean_object* v_x_419_, lean_object* v_x_420_){
_start:
{
if (lean_obj_tag(v_x_419_) == 0)
{
lean_object* v___x_421_; 
lean_dec(v_x_420_);
v___x_421_ = lean_box(0);
return v___x_421_;
}
else
{
lean_object* v_tail_422_; 
v_tail_422_ = lean_ctor_get(v_x_419_, 1);
if (lean_obj_tag(v_tail_422_) == 0)
{
lean_object* v_head_423_; 
lean_dec(v_x_420_);
v_head_423_ = lean_ctor_get(v_x_419_, 0);
lean_inc(v_head_423_);
lean_dec_ref_known(v_x_419_, 2);
return v_head_423_;
}
else
{
lean_object* v_head_424_; lean_object* v___x_425_; 
lean_inc(v_tail_422_);
v_head_424_ = lean_ctor_get(v_x_419_, 0);
lean_inc(v_head_424_);
lean_dec_ref_known(v_x_419_, 2);
v___x_425_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2_spec__3(v_x_420_, v_head_424_, v_tail_422_);
return v___x_425_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_431_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__0));
v___x_432_ = lean_string_length(v___x_431_);
return v___x_432_;
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_433_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3, &l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3_once, _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3);
v___x_434_ = lean_nat_to_int(v___x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(lean_object* v_x_439_){
_start:
{
lean_object* v_fst_440_; lean_object* v_snd_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_464_; 
v_fst_440_ = lean_ctor_get(v_x_439_, 0);
v_snd_441_ = lean_ctor_get(v_x_439_, 1);
v_isSharedCheck_464_ = !lean_is_exclusive(v_x_439_);
if (v_isSharedCheck_464_ == 0)
{
v___x_443_ = v_x_439_;
v_isShared_444_ = v_isSharedCheck_464_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_snd_441_);
lean_inc(v_fst_440_);
lean_dec(v_x_439_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_464_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_445_ = lean_unsigned_to_nat(0u);
v___x_446_ = l_Lean_Name_reprPrec(v_fst_440_, v___x_445_);
v___x_447_ = lean_box(0);
if (v_isShared_444_ == 0)
{
lean_ctor_set_tag(v___x_443_, 1);
lean_ctor_set(v___x_443_, 1, v___x_447_);
lean_ctor_set(v___x_443_, 0, v___x_446_);
v___x_449_ = v___x_443_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v___x_446_);
lean_ctor_set(v_reuseFailAlloc_463_, 1, v___x_447_);
v___x_449_ = v_reuseFailAlloc_463_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; lean_object* v___x_462_; 
v___x_450_ = l_Lean_instReprLeanOptionValue_repr(v_snd_441_, v___x_445_);
v___x_451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
v___x_452_ = l_List_reverse___redArg(v___x_451_);
v___x_453_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__1));
v___x_454_ = l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2(v___x_452_, v___x_453_);
v___x_455_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4, &l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4_once, _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4);
v___x_456_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__5));
v___x_457_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
lean_ctor_set(v___x_457_, 1, v___x_454_);
v___x_458_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__6));
v___x_459_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_457_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
v___x_460_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_460_, 0, v___x_455_);
lean_ctor_set(v___x_460_, 1, v___x_459_);
v___x_461_ = 0;
v___x_462_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_462_, 0, v___x_460_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*1, v___x_461_);
return v___x_462_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4_spec__6(lean_object* v_x_465_, lean_object* v_x_466_, lean_object* v_x_467_){
_start:
{
if (lean_obj_tag(v_x_467_) == 0)
{
lean_dec(v_x_465_);
return v_x_466_;
}
else
{
lean_object* v_head_468_; lean_object* v_tail_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_479_; 
v_head_468_ = lean_ctor_get(v_x_467_, 0);
v_tail_469_ = lean_ctor_get(v_x_467_, 1);
v_isSharedCheck_479_ = !lean_is_exclusive(v_x_467_);
if (v_isSharedCheck_479_ == 0)
{
v___x_471_ = v_x_467_;
v_isShared_472_ = v_isSharedCheck_479_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_tail_469_);
lean_inc(v_head_468_);
lean_dec(v_x_467_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_479_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
lean_inc(v_x_465_);
if (v_isShared_472_ == 0)
{
lean_ctor_set_tag(v___x_471_, 5);
lean_ctor_set(v___x_471_, 1, v_x_465_);
lean_ctor_set(v___x_471_, 0, v_x_466_);
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_x_466_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v_x_465_);
v___x_474_ = v_reuseFailAlloc_478_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(v_head_468_);
v___x_476_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_474_);
lean_ctor_set(v___x_476_, 1, v___x_475_);
v_x_466_ = v___x_476_;
v_x_467_ = v_tail_469_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4(lean_object* v_x_480_, lean_object* v_x_481_, lean_object* v_x_482_){
_start:
{
if (lean_obj_tag(v_x_482_) == 0)
{
lean_dec(v_x_480_);
return v_x_481_;
}
else
{
lean_object* v_head_483_; lean_object* v_tail_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_494_; 
v_head_483_ = lean_ctor_get(v_x_482_, 0);
v_tail_484_ = lean_ctor_get(v_x_482_, 1);
v_isSharedCheck_494_ = !lean_is_exclusive(v_x_482_);
if (v_isSharedCheck_494_ == 0)
{
v___x_486_ = v_x_482_;
v_isShared_487_ = v_isSharedCheck_494_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_tail_484_);
lean_inc(v_head_483_);
lean_dec(v_x_482_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_494_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
lean_inc(v_x_480_);
if (v_isShared_487_ == 0)
{
lean_ctor_set_tag(v___x_486_, 5);
lean_ctor_set(v___x_486_, 1, v_x_480_);
lean_ctor_set(v___x_486_, 0, v_x_481_);
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_x_481_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_x_480_);
v___x_489_ = v_reuseFailAlloc_493_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_490_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(v_head_483_);
v___x_491_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_491_, 0, v___x_489_);
lean_ctor_set(v___x_491_, 1, v___x_490_);
v___x_492_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4_spec__6(v_x_480_, v___x_491_, v_tail_484_);
return v___x_492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2(lean_object* v_x_495_, lean_object* v_x_496_){
_start:
{
if (lean_obj_tag(v_x_495_) == 0)
{
lean_object* v___x_497_; 
lean_dec(v_x_496_);
v___x_497_ = lean_box(0);
return v___x_497_;
}
else
{
lean_object* v_tail_498_; 
v_tail_498_ = lean_ctor_get(v_x_495_, 1);
if (lean_obj_tag(v_tail_498_) == 0)
{
lean_object* v_head_499_; lean_object* v___x_500_; 
lean_dec(v_x_496_);
v_head_499_ = lean_ctor_get(v_x_495_, 0);
lean_inc(v_head_499_);
lean_dec_ref_known(v_x_495_, 2);
v___x_500_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(v_head_499_);
return v___x_500_;
}
else
{
lean_object* v_head_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
lean_inc(v_tail_498_);
v_head_501_ = lean_ctor_get(v_x_495_, 0);
lean_inc(v_head_501_);
lean_dec_ref_known(v_x_495_, 2);
v___x_502_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(v_head_501_);
v___x_503_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4(v_x_496_, v___x_502_, v_tail_498_);
return v___x_503_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = ((lean_object*)(l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__2));
v___x_510_ = lean_string_length(v___x_509_);
return v___x_510_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_obj_once(&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4, &l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4_once, _init_l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4);
v___x_512_ = lean_nat_to_int(v___x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg(lean_object* v_a_517_){
_start:
{
if (lean_obj_tag(v_a_517_) == 0)
{
lean_object* v___x_518_; 
v___x_518_ = ((lean_object*)(l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__1));
return v___x_518_;
}
else
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; lean_object* v___x_528_; 
v___x_519_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__1));
v___x_520_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2(v_a_517_, v___x_519_);
v___x_521_ = lean_obj_once(&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5, &l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5_once, _init_l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5);
v___x_522_ = ((lean_object*)(l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__6));
v___x_523_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_522_);
lean_ctor_set(v___x_523_, 1, v___x_520_);
v___x_524_ = ((lean_object*)(l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__7));
v___x_525_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_523_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
v___x_526_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_521_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = 0;
v___x_528_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*1, v___x_527_);
return v___x_528_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0(lean_object* v_init_529_, lean_object* v_x_530_){
_start:
{
if (lean_obj_tag(v_x_530_) == 0)
{
lean_object* v_k_531_; lean_object* v_v_532_; lean_object* v_l_533_; lean_object* v_r_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v_k_531_ = lean_ctor_get(v_x_530_, 1);
v_v_532_ = lean_ctor_get(v_x_530_, 2);
v_l_533_ = lean_ctor_get(v_x_530_, 3);
v_r_534_ = lean_ctor_get(v_x_530_, 4);
v___x_535_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0(v_init_529_, v_r_534_);
lean_inc(v_v_532_);
lean_inc(v_k_531_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v_k_531_);
lean_ctor_set(v___x_536_, 1, v_v_532_);
v___x_537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
lean_ctor_set(v___x_537_, 1, v___x_535_);
v_init_529_ = v___x_537_;
v_x_530_ = v_l_533_;
goto _start;
}
else
{
return v_init_529_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0___boxed(lean_object* v_init_539_, lean_object* v_x_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0(v_init_539_, v_x_540_);
lean_dec(v_x_540_);
return v_res_541_;
}
}
static lean_object* _init_l_Lean_instReprLeanOptions_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_unsigned_to_nat(10u);
v___x_552_ = lean_nat_to_int(v___x_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___redArg(lean_object* v_x_556_){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; uint8_t v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_557_ = ((lean_object*)(l_Lean_instReprLeanOptions_repr___redArg___closed__3));
v___x_558_ = lean_obj_once(&l_Lean_instReprLeanOptions_repr___redArg___closed__4, &l_Lean_instReprLeanOptions_repr___redArg___closed__4_once, _init_l_Lean_instReprLeanOptions_repr___redArg___closed__4);
v___x_559_ = lean_unsigned_to_nat(0u);
v___x_560_ = ((lean_object*)(l_Lean_instReprLeanOptions_repr___redArg___closed__6));
v___x_561_ = lean_box(0);
v___x_562_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0(v___x_561_, v_x_556_);
v___x_563_ = l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg(v___x_562_);
v___x_564_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_560_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_565_ = l_Repr_addAppParen(v___x_564_, v___x_559_);
v___x_566_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_558_);
lean_ctor_set(v___x_566_, 1, v___x_565_);
v___x_567_ = 0;
v___x_568_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_568_, 0, v___x_566_);
lean_ctor_set_uint8(v___x_568_, sizeof(void*)*1, v___x_567_);
v___x_569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_557_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
v___x_570_ = lean_obj_once(&l_Lean_instReprLeanOption_repr___redArg___closed__15, &l_Lean_instReprLeanOption_repr___redArg___closed__15_once, _init_l_Lean_instReprLeanOption_repr___redArg___closed__15);
v___x_571_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__16));
v___x_572_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
lean_ctor_set(v___x_572_, 1, v___x_569_);
v___x_573_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__17));
v___x_574_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_572_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
v___x_575_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_570_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set_uint8(v___x_576_, sizeof(void*)*1, v___x_567_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___redArg___boxed(lean_object* v_x_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lean_instReprLeanOptions_repr___redArg(v_x_577_);
lean_dec(v_x_577_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr(lean_object* v_x_579_, lean_object* v_prec_580_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_Lean_instReprLeanOptions_repr___redArg(v_x_579_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___boxed(lean_object* v_x_582_, lean_object* v_prec_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lean_instReprLeanOptions_repr(v_x_582_, v_prec_583_);
lean_dec(v_prec_583_);
lean_dec(v_x_582_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1(lean_object* v_a_585_, lean_object* v_n_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg(v_a_585_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___boxed(lean_object* v_a_588_, lean_object* v_n_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1(v_a_588_, v_n_589_);
lean_dec(v_n_589_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1(lean_object* v_x_591_, lean_object* v_x_592_){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(v_x_591_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___boxed(lean_object* v_x_594_, lean_object* v_x_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1(v_x_594_, v_x_595_);
lean_dec(v_x_595_);
return v_res_596_;
}
}
static lean_object* _init_l_Lean_instEmptyCollectionLeanOptions(void){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = lean_box(1);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(lean_object* v_as_600_, size_t v_i_601_, size_t v_stop_602_, lean_object* v_b_603_){
_start:
{
uint8_t v___x_604_; 
v___x_604_ = lean_usize_dec_eq(v_i_601_, v_stop_602_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; lean_object* v_name_606_; lean_object* v_value_607_; lean_object* v___x_608_; size_t v___x_609_; size_t v___x_610_; 
v___x_605_ = lean_array_uget_borrowed(v_as_600_, v_i_601_);
v_name_606_ = lean_ctor_get(v___x_605_, 0);
v_value_607_ = lean_ctor_get(v___x_605_, 1);
lean_inc_ref(v_value_607_);
lean_inc(v_name_606_);
v___x_608_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_606_, v_value_607_, v_b_603_);
v___x_609_ = ((size_t)1ULL);
v___x_610_ = lean_usize_add(v_i_601_, v___x_609_);
v_i_601_ = v___x_610_;
v_b_603_ = v___x_608_;
goto _start;
}
else
{
return v_b_603_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0___boxed(lean_object* v_as_612_, lean_object* v_i_613_, lean_object* v_stop_614_, lean_object* v_b_615_){
_start:
{
size_t v_i_boxed_616_; size_t v_stop_boxed_617_; lean_object* v_res_618_; 
v_i_boxed_616_ = lean_unbox_usize(v_i_613_);
lean_dec(v_i_613_);
v_stop_boxed_617_ = lean_unbox_usize(v_stop_614_);
lean_dec(v_stop_614_);
v_res_618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(v_as_612_, v_i_boxed_616_, v_stop_boxed_617_, v_b_615_);
lean_dec_ref(v_as_612_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_ofArray(lean_object* v_opts_619_){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_620_ = lean_box(1);
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = lean_array_get_size(v_opts_619_);
v___x_623_ = lean_nat_dec_lt(v___x_621_, v___x_622_);
if (v___x_623_ == 0)
{
return v___x_620_;
}
else
{
uint8_t v___x_624_; 
v___x_624_ = lean_nat_dec_le(v___x_622_, v___x_622_);
if (v___x_624_ == 0)
{
if (v___x_623_ == 0)
{
return v___x_620_;
}
else
{
size_t v___x_625_; size_t v___x_626_; lean_object* v___x_627_; 
v___x_625_ = ((size_t)0ULL);
v___x_626_ = lean_usize_of_nat(v___x_622_);
v___x_627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(v_opts_619_, v___x_625_, v___x_626_, v___x_620_);
return v___x_627_;
}
}
else
{
size_t v___x_628_; size_t v___x_629_; lean_object* v___x_630_; 
v___x_628_ = ((size_t)0ULL);
v___x_629_ = lean_usize_of_nat(v___x_622_);
v___x_630_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(v_opts_619_, v___x_628_, v___x_629_, v___x_620_);
return v___x_630_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_ofArray___boxed(lean_object* v_opts_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_LeanOptions_ofArray(v_opts_631_);
lean_dec_ref(v_opts_631_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_LeanOptions_append_spec__0___redArg(lean_object* v_b_u2082_633_, lean_object* v_k_634_, lean_object* v_t_635_){
_start:
{
if (lean_obj_tag(v_t_635_) == 0)
{
lean_object* v_size_636_; lean_object* v_k_637_; lean_object* v_v_638_; lean_object* v_l_639_; lean_object* v_r_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_652_; 
v_size_636_ = lean_ctor_get(v_t_635_, 0);
v_k_637_ = lean_ctor_get(v_t_635_, 1);
v_v_638_ = lean_ctor_get(v_t_635_, 2);
v_l_639_ = lean_ctor_get(v_t_635_, 3);
v_r_640_ = lean_ctor_get(v_t_635_, 4);
v_isSharedCheck_652_ = !lean_is_exclusive(v_t_635_);
if (v_isSharedCheck_652_ == 0)
{
v___x_642_ = v_t_635_;
v_isShared_643_ = v_isSharedCheck_652_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_r_640_);
lean_inc(v_l_639_);
lean_inc(v_v_638_);
lean_inc(v_k_637_);
lean_inc(v_size_636_);
lean_dec(v_t_635_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_652_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
uint8_t v___x_644_; 
v___x_644_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_634_, v_k_637_);
switch(v___x_644_)
{
case 0:
{
lean_object* v_impl_645_; lean_object* v___x_646_; 
lean_del_object(v___x_642_);
lean_dec(v_size_636_);
v_impl_645_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_LeanOptions_append_spec__0___redArg(v_b_u2082_633_, v_k_634_, v_l_639_);
v___x_646_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_637_, v_v_638_, v_impl_645_, v_r_640_);
return v___x_646_;
}
case 1:
{
lean_object* v___x_648_; 
lean_dec(v_v_638_);
lean_dec(v_k_637_);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 2, v_b_u2082_633_);
lean_ctor_set(v___x_642_, 1, v_k_634_);
v___x_648_ = v___x_642_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_size_636_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v_k_634_);
lean_ctor_set(v_reuseFailAlloc_649_, 2, v_b_u2082_633_);
lean_ctor_set(v_reuseFailAlloc_649_, 3, v_l_639_);
lean_ctor_set(v_reuseFailAlloc_649_, 4, v_r_640_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
default: 
{
lean_object* v_impl_650_; lean_object* v___x_651_; 
lean_del_object(v___x_642_);
lean_dec(v_size_636_);
v_impl_650_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_LeanOptions_append_spec__0___redArg(v_b_u2082_633_, v_k_634_, v_r_640_);
v___x_651_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_637_, v_v_638_, v_l_639_, v_impl_650_);
return v___x_651_;
}
}
}
}
else
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = lean_unsigned_to_nat(1u);
v___x_654_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
lean_ctor_set(v___x_654_, 1, v_k_634_);
lean_ctor_set(v___x_654_, 2, v_b_u2082_633_);
lean_ctor_set(v___x_654_, 3, v_t_635_);
lean_ctor_set(v___x_654_, 4, v_t_635_);
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LeanOptions_append_spec__1_spec__1(lean_object* v_init_655_, lean_object* v_x_656_){
_start:
{
if (lean_obj_tag(v_x_656_) == 0)
{
lean_object* v_k_657_; lean_object* v_v_658_; lean_object* v_l_659_; lean_object* v_r_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v_k_657_ = lean_ctor_get(v_x_656_, 1);
lean_inc(v_k_657_);
v_v_658_ = lean_ctor_get(v_x_656_, 2);
lean_inc(v_v_658_);
v_l_659_ = lean_ctor_get(v_x_656_, 3);
lean_inc(v_l_659_);
v_r_660_ = lean_ctor_get(v_x_656_, 4);
lean_inc(v_r_660_);
lean_dec_ref_known(v_x_656_, 5);
v___x_661_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LeanOptions_append_spec__1_spec__1(v_init_655_, v_l_659_);
v___x_662_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_LeanOptions_append_spec__0___redArg(v_v_658_, v_k_657_, v___x_661_);
v_init_655_ = v___x_662_;
v_x_656_ = v_r_660_;
goto _start;
}
else
{
return v_init_655_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_append(lean_object* v_self_664_, lean_object* v_new_665_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LeanOptions_append_spec__1_spec__1(v_self_664_, v_new_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_LeanOptions_append_spec__0(lean_object* v_b_u2082_667_, lean_object* v_k_668_, lean_object* v_t_669_, lean_object* v_hl_670_){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_LeanOptions_append_spec__0___redArg(v_b_u2082_667_, v_k_668_, v_t_669_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LeanOptions_append_spec__1(lean_object* v_init_672_, lean_object* v_t_673_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LeanOptions_append_spec__1_spec__1(v_init_672_, v_t_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_appendArray(lean_object* v_self_677_, lean_object* v_new_678_){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_679_ = lean_unsigned_to_nat(0u);
v___x_680_ = lean_array_get_size(v_new_678_);
v___x_681_ = lean_nat_dec_lt(v___x_679_, v___x_680_);
if (v___x_681_ == 0)
{
return v_self_677_;
}
else
{
uint8_t v___x_682_; 
v___x_682_ = lean_nat_dec_le(v___x_680_, v___x_680_);
if (v___x_682_ == 0)
{
if (v___x_681_ == 0)
{
return v_self_677_;
}
else
{
size_t v___x_683_; size_t v___x_684_; lean_object* v___x_685_; 
v___x_683_ = ((size_t)0ULL);
v___x_684_ = lean_usize_of_nat(v___x_680_);
v___x_685_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(v_new_678_, v___x_683_, v___x_684_, v_self_677_);
return v___x_685_;
}
}
else
{
size_t v___x_686_; size_t v___x_687_; lean_object* v___x_688_; 
v___x_686_ = ((size_t)0ULL);
v___x_687_ = lean_usize_of_nat(v___x_680_);
v___x_688_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(v_new_678_, v___x_686_, v___x_687_, v_self_677_);
return v___x_688_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_appendArray___boxed(lean_object* v_self_689_, lean_object* v_new_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lean_LeanOptions_appendArray(v_self_689_, v_new_690_);
lean_dec_ref(v_new_690_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0(lean_object* v_o_697_, lean_object* v_k_698_, lean_object* v_v_699_){
_start:
{
lean_object* v_map_700_; uint8_t v_hasTrace_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_714_; 
v_map_700_ = lean_ctor_get(v_o_697_, 0);
v_hasTrace_701_ = lean_ctor_get_uint8(v_o_697_, sizeof(void*)*1);
v_isSharedCheck_714_ = !lean_is_exclusive(v_o_697_);
if (v_isSharedCheck_714_ == 0)
{
v___x_703_ = v_o_697_;
v_isShared_704_ = v_isSharedCheck_714_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_map_700_);
lean_dec(v_o_697_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_714_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; 
lean_inc(v_k_698_);
v___x_705_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_698_, v_v_699_, v_map_700_);
if (v_hasTrace_701_ == 0)
{
lean_object* v___x_706_; uint8_t v___x_707_; lean_object* v___x_709_; 
v___x_706_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__1));
v___x_707_ = l_Lean_Name_isPrefixOf(v___x_706_, v_k_698_);
lean_dec(v_k_698_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v___x_705_);
v___x_709_ = v___x_703_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_705_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
lean_ctor_set_uint8(v___x_709_, sizeof(void*)*1, v___x_707_);
return v___x_709_;
}
}
else
{
lean_object* v___x_712_; 
lean_dec(v_k_698_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v___x_705_);
v___x_712_ = v___x_703_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_705_);
lean_ctor_set_uint8(v_reuseFailAlloc_713_, sizeof(void*)*1, v_hasTrace_701_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_toOptions_spec__1(lean_object* v_init_715_, lean_object* v_x_716_){
_start:
{
if (lean_obj_tag(v_x_716_) == 0)
{
lean_object* v_k_717_; lean_object* v_v_718_; lean_object* v_l_719_; lean_object* v_r_720_; lean_object* v___x_721_; lean_object* v_a_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v_k_717_ = lean_ctor_get(v_x_716_, 1);
lean_inc(v_k_717_);
v_v_718_ = lean_ctor_get(v_x_716_, 2);
lean_inc(v_v_718_);
v_l_719_ = lean_ctor_get(v_x_716_, 3);
lean_inc(v_l_719_);
v_r_720_ = lean_ctor_get(v_x_716_, 4);
lean_inc(v_r_720_);
lean_dec_ref_known(v_x_716_, 5);
v___x_721_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_toOptions_spec__1(v_init_715_, v_l_719_);
v_a_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_722_);
lean_dec_ref(v___x_721_);
v___x_723_ = l_Lean_LeanOptionValue_toDataValue(v_v_718_);
v___x_724_ = l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0(v_a_722_, v_k_717_, v___x_723_);
v_init_715_ = v___x_724_;
v_x_716_ = v_r_720_;
goto _start;
}
else
{
lean_object* v___x_726_; 
v___x_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_726_, 0, v_init_715_);
return v___x_726_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_toOptions(lean_object* v_leanOptions_727_){
_start:
{
lean_object* v_options_728_; lean_object* v___x_729_; lean_object* v_a_730_; 
v_options_728_ = l_Lean_Options_empty;
v___x_729_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_toOptions_spec__1(v_options_728_, v_leanOptions_727_);
v_a_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_730_);
lean_dec_ref(v___x_729_);
return v_a_730_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LeanOptions_fromOptions_x3f_spec__0___redArg(lean_object* v_k_731_, lean_object* v_v_732_, lean_object* v_t_733_){
_start:
{
if (lean_obj_tag(v_t_733_) == 0)
{
lean_object* v_size_734_; lean_object* v_k_735_; lean_object* v_v_736_; lean_object* v_l_737_; lean_object* v_r_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_1018_; 
v_size_734_ = lean_ctor_get(v_t_733_, 0);
v_k_735_ = lean_ctor_get(v_t_733_, 1);
v_v_736_ = lean_ctor_get(v_t_733_, 2);
v_l_737_ = lean_ctor_get(v_t_733_, 3);
v_r_738_ = lean_ctor_get(v_t_733_, 4);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_t_733_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_740_ = v_t_733_;
v_isShared_741_ = v_isSharedCheck_1018_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_r_738_);
lean_inc(v_l_737_);
lean_inc(v_v_736_);
lean_inc(v_k_735_);
lean_inc(v_size_734_);
lean_dec(v_t_733_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_1018_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
uint8_t v___x_742_; 
v___x_742_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_731_, v_k_735_);
switch(v___x_742_)
{
case 0:
{
lean_object* v_impl_743_; lean_object* v___x_744_; 
lean_dec(v_size_734_);
v_impl_743_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LeanOptions_fromOptions_x3f_spec__0___redArg(v_k_731_, v_v_732_, v_l_737_);
v___x_744_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_738_) == 0)
{
lean_object* v_size_745_; lean_object* v_size_746_; lean_object* v_k_747_; lean_object* v_v_748_; lean_object* v_l_749_; lean_object* v_r_750_; lean_object* v___x_751_; lean_object* v___x_752_; uint8_t v___x_753_; 
v_size_745_ = lean_ctor_get(v_r_738_, 0);
v_size_746_ = lean_ctor_get(v_impl_743_, 0);
lean_inc(v_size_746_);
v_k_747_ = lean_ctor_get(v_impl_743_, 1);
lean_inc(v_k_747_);
v_v_748_ = lean_ctor_get(v_impl_743_, 2);
lean_inc(v_v_748_);
v_l_749_ = lean_ctor_get(v_impl_743_, 3);
lean_inc(v_l_749_);
v_r_750_ = lean_ctor_get(v_impl_743_, 4);
lean_inc(v_r_750_);
v___x_751_ = lean_unsigned_to_nat(3u);
v___x_752_ = lean_nat_mul(v___x_751_, v_size_745_);
v___x_753_ = lean_nat_dec_lt(v___x_752_, v_size_746_);
lean_dec(v___x_752_);
if (v___x_753_ == 0)
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; 
lean_dec(v_r_750_);
lean_dec(v_l_749_);
lean_dec(v_v_748_);
lean_dec(v_k_747_);
v___x_754_ = lean_nat_add(v___x_744_, v_size_746_);
lean_dec(v_size_746_);
v___x_755_ = lean_nat_add(v___x_754_, v_size_745_);
lean_dec(v___x_754_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 3, v_impl_743_);
lean_ctor_set(v___x_740_, 0, v___x_755_);
v___x_757_ = v___x_740_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_755_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_758_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_758_, 3, v_impl_743_);
lean_ctor_set(v_reuseFailAlloc_758_, 4, v_r_738_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
else
{
lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_824_; 
v_isSharedCheck_824_ = !lean_is_exclusive(v_impl_743_);
if (v_isSharedCheck_824_ == 0)
{
lean_object* v_unused_825_; lean_object* v_unused_826_; lean_object* v_unused_827_; lean_object* v_unused_828_; lean_object* v_unused_829_; 
v_unused_825_ = lean_ctor_get(v_impl_743_, 4);
lean_dec(v_unused_825_);
v_unused_826_ = lean_ctor_get(v_impl_743_, 3);
lean_dec(v_unused_826_);
v_unused_827_ = lean_ctor_get(v_impl_743_, 2);
lean_dec(v_unused_827_);
v_unused_828_ = lean_ctor_get(v_impl_743_, 1);
lean_dec(v_unused_828_);
v_unused_829_ = lean_ctor_get(v_impl_743_, 0);
lean_dec(v_unused_829_);
v___x_760_ = v_impl_743_;
v_isShared_761_ = v_isSharedCheck_824_;
goto v_resetjp_759_;
}
else
{
lean_dec(v_impl_743_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_824_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v_size_762_; lean_object* v_size_763_; lean_object* v_k_764_; lean_object* v_v_765_; lean_object* v_l_766_; lean_object* v_r_767_; lean_object* v___x_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v_size_762_ = lean_ctor_get(v_l_749_, 0);
v_size_763_ = lean_ctor_get(v_r_750_, 0);
v_k_764_ = lean_ctor_get(v_r_750_, 1);
v_v_765_ = lean_ctor_get(v_r_750_, 2);
v_l_766_ = lean_ctor_get(v_r_750_, 3);
v_r_767_ = lean_ctor_get(v_r_750_, 4);
v___x_768_ = lean_unsigned_to_nat(2u);
v___x_769_ = lean_nat_mul(v___x_768_, v_size_762_);
v___x_770_ = lean_nat_dec_lt(v_size_763_, v___x_769_);
lean_dec(v___x_769_);
if (v___x_770_ == 0)
{
lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_799_; 
lean_inc(v_r_767_);
lean_inc(v_l_766_);
lean_inc(v_v_765_);
lean_inc(v_k_764_);
v_isSharedCheck_799_ = !lean_is_exclusive(v_r_750_);
if (v_isSharedCheck_799_ == 0)
{
lean_object* v_unused_800_; lean_object* v_unused_801_; lean_object* v_unused_802_; lean_object* v_unused_803_; lean_object* v_unused_804_; 
v_unused_800_ = lean_ctor_get(v_r_750_, 4);
lean_dec(v_unused_800_);
v_unused_801_ = lean_ctor_get(v_r_750_, 3);
lean_dec(v_unused_801_);
v_unused_802_ = lean_ctor_get(v_r_750_, 2);
lean_dec(v_unused_802_);
v_unused_803_ = lean_ctor_get(v_r_750_, 1);
lean_dec(v_unused_803_);
v_unused_804_ = lean_ctor_get(v_r_750_, 0);
lean_dec(v_unused_804_);
v___x_772_ = v_r_750_;
v_isShared_773_ = v_isSharedCheck_799_;
goto v_resetjp_771_;
}
else
{
lean_dec(v_r_750_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_799_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___y_777_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___x_787_; lean_object* v___y_789_; 
v___x_774_ = lean_nat_add(v___x_744_, v_size_746_);
lean_dec(v_size_746_);
v___x_775_ = lean_nat_add(v___x_774_, v_size_745_);
lean_dec(v___x_774_);
v___x_787_ = lean_nat_add(v___x_744_, v_size_762_);
if (lean_obj_tag(v_l_766_) == 0)
{
lean_object* v_size_797_; 
v_size_797_ = lean_ctor_get(v_l_766_, 0);
lean_inc(v_size_797_);
v___y_789_ = v_size_797_;
goto v___jp_788_;
}
else
{
lean_object* v___x_798_; 
v___x_798_ = lean_unsigned_to_nat(0u);
v___y_789_ = v___x_798_;
goto v___jp_788_;
}
v___jp_776_:
{
lean_object* v___x_780_; lean_object* v___x_782_; 
v___x_780_ = lean_nat_add(v___y_778_, v___y_779_);
lean_dec(v___y_779_);
lean_dec(v___y_778_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 4, v_r_738_);
lean_ctor_set(v___x_772_, 3, v_r_767_);
lean_ctor_set(v___x_772_, 2, v_v_736_);
lean_ctor_set(v___x_772_, 1, v_k_735_);
lean_ctor_set(v___x_772_, 0, v___x_780_);
v___x_782_ = v___x_772_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_780_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_786_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_786_, 3, v_r_767_);
lean_ctor_set(v_reuseFailAlloc_786_, 4, v_r_738_);
v___x_782_ = v_reuseFailAlloc_786_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
lean_object* v___x_784_; 
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 4, v___x_782_);
lean_ctor_set(v___x_760_, 3, v___y_777_);
lean_ctor_set(v___x_760_, 2, v_v_765_);
lean_ctor_set(v___x_760_, 1, v_k_764_);
lean_ctor_set(v___x_760_, 0, v___x_775_);
v___x_784_ = v___x_760_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_k_764_);
lean_ctor_set(v_reuseFailAlloc_785_, 2, v_v_765_);
lean_ctor_set(v_reuseFailAlloc_785_, 3, v___y_777_);
lean_ctor_set(v_reuseFailAlloc_785_, 4, v___x_782_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
v___jp_788_:
{
lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_790_ = lean_nat_add(v___x_787_, v___y_789_);
lean_dec(v___y_789_);
lean_dec(v___x_787_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 4, v_l_766_);
lean_ctor_set(v___x_740_, 3, v_l_749_);
lean_ctor_set(v___x_740_, 2, v_v_748_);
lean_ctor_set(v___x_740_, 1, v_k_747_);
lean_ctor_set(v___x_740_, 0, v___x_790_);
v___x_792_ = v___x_740_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_790_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_k_747_);
lean_ctor_set(v_reuseFailAlloc_796_, 2, v_v_748_);
lean_ctor_set(v_reuseFailAlloc_796_, 3, v_l_749_);
lean_ctor_set(v_reuseFailAlloc_796_, 4, v_l_766_);
v___x_792_ = v_reuseFailAlloc_796_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
lean_object* v___x_793_; 
v___x_793_ = lean_nat_add(v___x_744_, v_size_745_);
if (lean_obj_tag(v_r_767_) == 0)
{
lean_object* v_size_794_; 
v_size_794_ = lean_ctor_get(v_r_767_, 0);
lean_inc(v_size_794_);
v___y_777_ = v___x_792_;
v___y_778_ = v___x_793_;
v___y_779_ = v_size_794_;
goto v___jp_776_;
}
else
{
lean_object* v___x_795_; 
v___x_795_ = lean_unsigned_to_nat(0u);
v___y_777_ = v___x_792_;
v___y_778_ = v___x_793_;
v___y_779_ = v___x_795_;
goto v___jp_776_;
}
}
}
}
}
else
{
lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_810_; 
lean_del_object(v___x_740_);
v___x_805_ = lean_nat_add(v___x_744_, v_size_746_);
lean_dec(v_size_746_);
v___x_806_ = lean_nat_add(v___x_805_, v_size_745_);
lean_dec(v___x_805_);
v___x_807_ = lean_nat_add(v___x_744_, v_size_745_);
v___x_808_ = lean_nat_add(v___x_807_, v_size_763_);
lean_dec(v___x_807_);
lean_inc_ref(v_r_738_);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 4, v_r_738_);
lean_ctor_set(v___x_760_, 3, v_r_750_);
lean_ctor_set(v___x_760_, 2, v_v_736_);
lean_ctor_set(v___x_760_, 1, v_k_735_);
lean_ctor_set(v___x_760_, 0, v___x_808_);
v___x_810_ = v___x_760_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_808_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_823_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_823_, 3, v_r_750_);
lean_ctor_set(v_reuseFailAlloc_823_, 4, v_r_738_);
v___x_810_ = v_reuseFailAlloc_823_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
v_isSharedCheck_817_ = !lean_is_exclusive(v_r_738_);
if (v_isSharedCheck_817_ == 0)
{
lean_object* v_unused_818_; lean_object* v_unused_819_; lean_object* v_unused_820_; lean_object* v_unused_821_; lean_object* v_unused_822_; 
v_unused_818_ = lean_ctor_get(v_r_738_, 4);
lean_dec(v_unused_818_);
v_unused_819_ = lean_ctor_get(v_r_738_, 3);
lean_dec(v_unused_819_);
v_unused_820_ = lean_ctor_get(v_r_738_, 2);
lean_dec(v_unused_820_);
v_unused_821_ = lean_ctor_get(v_r_738_, 1);
lean_dec(v_unused_821_);
v_unused_822_ = lean_ctor_get(v_r_738_, 0);
lean_dec(v_unused_822_);
v___x_812_ = v_r_738_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_dec(v_r_738_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 4, v___x_810_);
lean_ctor_set(v___x_812_, 3, v_l_749_);
lean_ctor_set(v___x_812_, 2, v_v_748_);
lean_ctor_set(v___x_812_, 1, v_k_747_);
lean_ctor_set(v___x_812_, 0, v___x_806_);
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_806_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_k_747_);
lean_ctor_set(v_reuseFailAlloc_816_, 2, v_v_748_);
lean_ctor_set(v_reuseFailAlloc_816_, 3, v_l_749_);
lean_ctor_set(v_reuseFailAlloc_816_, 4, v___x_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_830_; 
v_l_830_ = lean_ctor_get(v_impl_743_, 3);
lean_inc(v_l_830_);
if (lean_obj_tag(v_l_830_) == 0)
{
lean_object* v_r_831_; lean_object* v_k_832_; lean_object* v_v_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_844_; 
v_r_831_ = lean_ctor_get(v_impl_743_, 4);
v_k_832_ = lean_ctor_get(v_impl_743_, 1);
v_v_833_ = lean_ctor_get(v_impl_743_, 2);
v_isSharedCheck_844_ = !lean_is_exclusive(v_impl_743_);
if (v_isSharedCheck_844_ == 0)
{
lean_object* v_unused_845_; lean_object* v_unused_846_; 
v_unused_845_ = lean_ctor_get(v_impl_743_, 3);
lean_dec(v_unused_845_);
v_unused_846_ = lean_ctor_get(v_impl_743_, 0);
lean_dec(v_unused_846_);
v___x_835_ = v_impl_743_;
v_isShared_836_ = v_isSharedCheck_844_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_r_831_);
lean_inc(v_v_833_);
lean_inc(v_k_832_);
lean_dec(v_impl_743_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_844_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_837_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_831_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 3, v_r_831_);
lean_ctor_set(v___x_835_, 2, v_v_736_);
lean_ctor_set(v___x_835_, 1, v_k_735_);
lean_ctor_set(v___x_835_, 0, v___x_744_);
v___x_839_ = v___x_835_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_843_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_843_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_843_, 3, v_r_831_);
lean_ctor_set(v_reuseFailAlloc_843_, 4, v_r_831_);
v___x_839_ = v_reuseFailAlloc_843_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
lean_object* v___x_841_; 
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 4, v___x_839_);
lean_ctor_set(v___x_740_, 3, v_l_830_);
lean_ctor_set(v___x_740_, 2, v_v_833_);
lean_ctor_set(v___x_740_, 1, v_k_832_);
lean_ctor_set(v___x_740_, 0, v___x_837_);
v___x_841_ = v___x_740_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_837_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v_k_832_);
lean_ctor_set(v_reuseFailAlloc_842_, 2, v_v_833_);
lean_ctor_set(v_reuseFailAlloc_842_, 3, v_l_830_);
lean_ctor_set(v_reuseFailAlloc_842_, 4, v___x_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
else
{
lean_object* v_r_847_; 
v_r_847_ = lean_ctor_get(v_impl_743_, 4);
lean_inc(v_r_847_);
if (lean_obj_tag(v_r_847_) == 0)
{
lean_object* v_k_848_; lean_object* v_v_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_872_; 
v_k_848_ = lean_ctor_get(v_impl_743_, 1);
v_v_849_ = lean_ctor_get(v_impl_743_, 2);
v_isSharedCheck_872_ = !lean_is_exclusive(v_impl_743_);
if (v_isSharedCheck_872_ == 0)
{
lean_object* v_unused_873_; lean_object* v_unused_874_; lean_object* v_unused_875_; 
v_unused_873_ = lean_ctor_get(v_impl_743_, 4);
lean_dec(v_unused_873_);
v_unused_874_ = lean_ctor_get(v_impl_743_, 3);
lean_dec(v_unused_874_);
v_unused_875_ = lean_ctor_get(v_impl_743_, 0);
lean_dec(v_unused_875_);
v___x_851_ = v_impl_743_;
v_isShared_852_ = v_isSharedCheck_872_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_v_849_);
lean_inc(v_k_848_);
lean_dec(v_impl_743_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_872_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v_k_853_; lean_object* v_v_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_868_; 
v_k_853_ = lean_ctor_get(v_r_847_, 1);
v_v_854_ = lean_ctor_get(v_r_847_, 2);
v_isSharedCheck_868_ = !lean_is_exclusive(v_r_847_);
if (v_isSharedCheck_868_ == 0)
{
lean_object* v_unused_869_; lean_object* v_unused_870_; lean_object* v_unused_871_; 
v_unused_869_ = lean_ctor_get(v_r_847_, 4);
lean_dec(v_unused_869_);
v_unused_870_ = lean_ctor_get(v_r_847_, 3);
lean_dec(v_unused_870_);
v_unused_871_ = lean_ctor_get(v_r_847_, 0);
lean_dec(v_unused_871_);
v___x_856_ = v_r_847_;
v_isShared_857_ = v_isSharedCheck_868_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_v_854_);
lean_inc(v_k_853_);
lean_dec(v_r_847_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_868_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_858_; lean_object* v___x_860_; 
v___x_858_ = lean_unsigned_to_nat(3u);
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 4, v_l_830_);
lean_ctor_set(v___x_856_, 3, v_l_830_);
lean_ctor_set(v___x_856_, 2, v_v_849_);
lean_ctor_set(v___x_856_, 1, v_k_848_);
lean_ctor_set(v___x_856_, 0, v___x_744_);
v___x_860_ = v___x_856_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v_k_848_);
lean_ctor_set(v_reuseFailAlloc_867_, 2, v_v_849_);
lean_ctor_set(v_reuseFailAlloc_867_, 3, v_l_830_);
lean_ctor_set(v_reuseFailAlloc_867_, 4, v_l_830_);
v___x_860_ = v_reuseFailAlloc_867_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
lean_object* v___x_862_; 
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 4, v_l_830_);
lean_ctor_set(v___x_851_, 2, v_v_736_);
lean_ctor_set(v___x_851_, 1, v_k_735_);
lean_ctor_set(v___x_851_, 0, v___x_744_);
v___x_862_ = v___x_851_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_866_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_866_, 3, v_l_830_);
lean_ctor_set(v_reuseFailAlloc_866_, 4, v_l_830_);
v___x_862_ = v_reuseFailAlloc_866_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
lean_object* v___x_864_; 
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 4, v___x_862_);
lean_ctor_set(v___x_740_, 3, v___x_860_);
lean_ctor_set(v___x_740_, 2, v_v_854_);
lean_ctor_set(v___x_740_, 1, v_k_853_);
lean_ctor_set(v___x_740_, 0, v___x_858_);
v___x_864_ = v___x_740_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v___x_858_);
lean_ctor_set(v_reuseFailAlloc_865_, 1, v_k_853_);
lean_ctor_set(v_reuseFailAlloc_865_, 2, v_v_854_);
lean_ctor_set(v_reuseFailAlloc_865_, 3, v___x_860_);
lean_ctor_set(v_reuseFailAlloc_865_, 4, v___x_862_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
}
}
else
{
lean_object* v___x_876_; lean_object* v___x_878_; 
v___x_876_ = lean_unsigned_to_nat(2u);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 4, v_r_847_);
lean_ctor_set(v___x_740_, 3, v_impl_743_);
lean_ctor_set(v___x_740_, 0, v___x_876_);
v___x_878_ = v___x_740_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_876_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_879_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_879_, 3, v_impl_743_);
lean_ctor_set(v_reuseFailAlloc_879_, 4, v_r_847_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
}
case 1:
{
lean_object* v___x_881_; 
lean_dec(v_v_736_);
lean_dec(v_k_735_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 2, v_v_732_);
lean_ctor_set(v___x_740_, 1, v_k_731_);
v___x_881_ = v___x_740_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_size_734_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v_k_731_);
lean_ctor_set(v_reuseFailAlloc_882_, 2, v_v_732_);
lean_ctor_set(v_reuseFailAlloc_882_, 3, v_l_737_);
lean_ctor_set(v_reuseFailAlloc_882_, 4, v_r_738_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
default: 
{
lean_object* v_impl_883_; lean_object* v___x_884_; 
lean_dec(v_size_734_);
v_impl_883_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LeanOptions_fromOptions_x3f_spec__0___redArg(v_k_731_, v_v_732_, v_r_738_);
v___x_884_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_737_) == 0)
{
lean_object* v_size_885_; lean_object* v_size_886_; lean_object* v_k_887_; lean_object* v_v_888_; lean_object* v_l_889_; lean_object* v_r_890_; lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___x_893_; 
v_size_885_ = lean_ctor_get(v_l_737_, 0);
v_size_886_ = lean_ctor_get(v_impl_883_, 0);
lean_inc(v_size_886_);
v_k_887_ = lean_ctor_get(v_impl_883_, 1);
lean_inc(v_k_887_);
v_v_888_ = lean_ctor_get(v_impl_883_, 2);
lean_inc(v_v_888_);
v_l_889_ = lean_ctor_get(v_impl_883_, 3);
lean_inc(v_l_889_);
v_r_890_ = lean_ctor_get(v_impl_883_, 4);
lean_inc(v_r_890_);
v___x_891_ = lean_unsigned_to_nat(3u);
v___x_892_ = lean_nat_mul(v___x_891_, v_size_885_);
v___x_893_ = lean_nat_dec_lt(v___x_892_, v_size_886_);
lean_dec(v___x_892_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_897_; 
lean_dec(v_r_890_);
lean_dec(v_l_889_);
lean_dec(v_v_888_);
lean_dec(v_k_887_);
v___x_894_ = lean_nat_add(v___x_884_, v_size_885_);
v___x_895_ = lean_nat_add(v___x_894_, v_size_886_);
lean_dec(v_size_886_);
lean_dec(v___x_894_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 4, v_impl_883_);
lean_ctor_set(v___x_740_, 0, v___x_895_);
v___x_897_ = v___x_740_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___x_895_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_898_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_898_, 3, v_l_737_);
lean_ctor_set(v_reuseFailAlloc_898_, 4, v_impl_883_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
else
{
lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_962_; 
v_isSharedCheck_962_ = !lean_is_exclusive(v_impl_883_);
if (v_isSharedCheck_962_ == 0)
{
lean_object* v_unused_963_; lean_object* v_unused_964_; lean_object* v_unused_965_; lean_object* v_unused_966_; lean_object* v_unused_967_; 
v_unused_963_ = lean_ctor_get(v_impl_883_, 4);
lean_dec(v_unused_963_);
v_unused_964_ = lean_ctor_get(v_impl_883_, 3);
lean_dec(v_unused_964_);
v_unused_965_ = lean_ctor_get(v_impl_883_, 2);
lean_dec(v_unused_965_);
v_unused_966_ = lean_ctor_get(v_impl_883_, 1);
lean_dec(v_unused_966_);
v_unused_967_ = lean_ctor_get(v_impl_883_, 0);
lean_dec(v_unused_967_);
v___x_900_ = v_impl_883_;
v_isShared_901_ = v_isSharedCheck_962_;
goto v_resetjp_899_;
}
else
{
lean_dec(v_impl_883_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_962_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v_size_902_; lean_object* v_k_903_; lean_object* v_v_904_; lean_object* v_l_905_; lean_object* v_r_906_; lean_object* v_size_907_; lean_object* v___x_908_; lean_object* v___x_909_; uint8_t v___x_910_; 
v_size_902_ = lean_ctor_get(v_l_889_, 0);
v_k_903_ = lean_ctor_get(v_l_889_, 1);
v_v_904_ = lean_ctor_get(v_l_889_, 2);
v_l_905_ = lean_ctor_get(v_l_889_, 3);
v_r_906_ = lean_ctor_get(v_l_889_, 4);
v_size_907_ = lean_ctor_get(v_r_890_, 0);
v___x_908_ = lean_unsigned_to_nat(2u);
v___x_909_ = lean_nat_mul(v___x_908_, v_size_907_);
v___x_910_ = lean_nat_dec_lt(v_size_902_, v___x_909_);
lean_dec(v___x_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_938_; 
lean_inc(v_r_906_);
lean_inc(v_l_905_);
lean_inc(v_v_904_);
lean_inc(v_k_903_);
v_isSharedCheck_938_ = !lean_is_exclusive(v_l_889_);
if (v_isSharedCheck_938_ == 0)
{
lean_object* v_unused_939_; lean_object* v_unused_940_; lean_object* v_unused_941_; lean_object* v_unused_942_; lean_object* v_unused_943_; 
v_unused_939_ = lean_ctor_get(v_l_889_, 4);
lean_dec(v_unused_939_);
v_unused_940_ = lean_ctor_get(v_l_889_, 3);
lean_dec(v_unused_940_);
v_unused_941_ = lean_ctor_get(v_l_889_, 2);
lean_dec(v_unused_941_);
v_unused_942_ = lean_ctor_get(v_l_889_, 1);
lean_dec(v_unused_942_);
v_unused_943_ = lean_ctor_get(v_l_889_, 0);
lean_dec(v_unused_943_);
v___x_912_ = v_l_889_;
v_isShared_913_ = v_isSharedCheck_938_;
goto v_resetjp_911_;
}
else
{
lean_dec(v_l_889_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_938_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_928_; 
v___x_914_ = lean_nat_add(v___x_884_, v_size_885_);
v___x_915_ = lean_nat_add(v___x_914_, v_size_886_);
lean_dec(v_size_886_);
if (lean_obj_tag(v_l_905_) == 0)
{
lean_object* v_size_936_; 
v_size_936_ = lean_ctor_get(v_l_905_, 0);
lean_inc(v_size_936_);
v___y_928_ = v_size_936_;
goto v___jp_927_;
}
else
{
lean_object* v___x_937_; 
v___x_937_ = lean_unsigned_to_nat(0u);
v___y_928_ = v___x_937_;
goto v___jp_927_;
}
v___jp_916_:
{
lean_object* v___x_920_; lean_object* v___x_922_; 
v___x_920_ = lean_nat_add(v___y_918_, v___y_919_);
lean_dec(v___y_919_);
lean_dec(v___y_918_);
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 4, v_r_890_);
lean_ctor_set(v___x_912_, 3, v_r_906_);
lean_ctor_set(v___x_912_, 2, v_v_888_);
lean_ctor_set(v___x_912_, 1, v_k_887_);
lean_ctor_set(v___x_912_, 0, v___x_920_);
v___x_922_ = v___x_912_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_920_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_k_887_);
lean_ctor_set(v_reuseFailAlloc_926_, 2, v_v_888_);
lean_ctor_set(v_reuseFailAlloc_926_, 3, v_r_906_);
lean_ctor_set(v_reuseFailAlloc_926_, 4, v_r_890_);
v___x_922_ = v_reuseFailAlloc_926_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_924_; 
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 4, v___x_922_);
lean_ctor_set(v___x_900_, 3, v___y_917_);
lean_ctor_set(v___x_900_, 2, v_v_904_);
lean_ctor_set(v___x_900_, 1, v_k_903_);
lean_ctor_set(v___x_900_, 0, v___x_915_);
v___x_924_ = v___x_900_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_915_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v_k_903_);
lean_ctor_set(v_reuseFailAlloc_925_, 2, v_v_904_);
lean_ctor_set(v_reuseFailAlloc_925_, 3, v___y_917_);
lean_ctor_set(v_reuseFailAlloc_925_, 4, v___x_922_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
v___jp_927_:
{
lean_object* v___x_929_; lean_object* v___x_931_; 
v___x_929_ = lean_nat_add(v___x_914_, v___y_928_);
lean_dec(v___y_928_);
lean_dec(v___x_914_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 4, v_l_905_);
lean_ctor_set(v___x_740_, 0, v___x_929_);
v___x_931_ = v___x_740_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_935_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_935_, 3, v_l_737_);
lean_ctor_set(v_reuseFailAlloc_935_, 4, v_l_905_);
v___x_931_ = v_reuseFailAlloc_935_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
lean_object* v___x_932_; 
v___x_932_ = lean_nat_add(v___x_884_, v_size_907_);
if (lean_obj_tag(v_r_906_) == 0)
{
lean_object* v_size_933_; 
v_size_933_ = lean_ctor_get(v_r_906_, 0);
lean_inc(v_size_933_);
v___y_917_ = v___x_931_;
v___y_918_ = v___x_932_;
v___y_919_ = v_size_933_;
goto v___jp_916_;
}
else
{
lean_object* v___x_934_; 
v___x_934_ = lean_unsigned_to_nat(0u);
v___y_917_ = v___x_931_;
v___y_918_ = v___x_932_;
v___y_919_ = v___x_934_;
goto v___jp_916_;
}
}
}
}
}
else
{
lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
lean_del_object(v___x_740_);
v___x_944_ = lean_nat_add(v___x_884_, v_size_885_);
v___x_945_ = lean_nat_add(v___x_944_, v_size_886_);
lean_dec(v_size_886_);
v___x_946_ = lean_nat_add(v___x_944_, v_size_902_);
lean_dec(v___x_944_);
lean_inc_ref(v_l_737_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 4, v_l_889_);
lean_ctor_set(v___x_900_, 3, v_l_737_);
lean_ctor_set(v___x_900_, 2, v_v_736_);
lean_ctor_set(v___x_900_, 1, v_k_735_);
lean_ctor_set(v___x_900_, 0, v___x_946_);
v___x_948_ = v___x_900_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_946_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_961_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_961_, 3, v_l_737_);
lean_ctor_set(v_reuseFailAlloc_961_, 4, v_l_889_);
v___x_948_ = v_reuseFailAlloc_961_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
v_isSharedCheck_955_ = !lean_is_exclusive(v_l_737_);
if (v_isSharedCheck_955_ == 0)
{
lean_object* v_unused_956_; lean_object* v_unused_957_; lean_object* v_unused_958_; lean_object* v_unused_959_; lean_object* v_unused_960_; 
v_unused_956_ = lean_ctor_get(v_l_737_, 4);
lean_dec(v_unused_956_);
v_unused_957_ = lean_ctor_get(v_l_737_, 3);
lean_dec(v_unused_957_);
v_unused_958_ = lean_ctor_get(v_l_737_, 2);
lean_dec(v_unused_958_);
v_unused_959_ = lean_ctor_get(v_l_737_, 1);
lean_dec(v_unused_959_);
v_unused_960_ = lean_ctor_get(v_l_737_, 0);
lean_dec(v_unused_960_);
v___x_950_ = v_l_737_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_dec(v_l_737_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 4, v_r_890_);
lean_ctor_set(v___x_950_, 3, v___x_948_);
lean_ctor_set(v___x_950_, 2, v_v_888_);
lean_ctor_set(v___x_950_, 1, v_k_887_);
lean_ctor_set(v___x_950_, 0, v___x_945_);
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_k_887_);
lean_ctor_set(v_reuseFailAlloc_954_, 2, v_v_888_);
lean_ctor_set(v_reuseFailAlloc_954_, 3, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_954_, 4, v_r_890_);
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
}
}
}
else
{
lean_object* v_l_968_; 
v_l_968_ = lean_ctor_get(v_impl_883_, 3);
lean_inc(v_l_968_);
if (lean_obj_tag(v_l_968_) == 0)
{
lean_object* v_r_969_; lean_object* v_k_970_; lean_object* v_v_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_994_; 
v_r_969_ = lean_ctor_get(v_impl_883_, 4);
v_k_970_ = lean_ctor_get(v_impl_883_, 1);
v_v_971_ = lean_ctor_get(v_impl_883_, 2);
v_isSharedCheck_994_ = !lean_is_exclusive(v_impl_883_);
if (v_isSharedCheck_994_ == 0)
{
lean_object* v_unused_995_; lean_object* v_unused_996_; 
v_unused_995_ = lean_ctor_get(v_impl_883_, 3);
lean_dec(v_unused_995_);
v_unused_996_ = lean_ctor_get(v_impl_883_, 0);
lean_dec(v_unused_996_);
v___x_973_ = v_impl_883_;
v_isShared_974_ = v_isSharedCheck_994_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_r_969_);
lean_inc(v_v_971_);
lean_inc(v_k_970_);
lean_dec(v_impl_883_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_994_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v_k_975_; lean_object* v_v_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_990_; 
v_k_975_ = lean_ctor_get(v_l_968_, 1);
v_v_976_ = lean_ctor_get(v_l_968_, 2);
v_isSharedCheck_990_ = !lean_is_exclusive(v_l_968_);
if (v_isSharedCheck_990_ == 0)
{
lean_object* v_unused_991_; lean_object* v_unused_992_; lean_object* v_unused_993_; 
v_unused_991_ = lean_ctor_get(v_l_968_, 4);
lean_dec(v_unused_991_);
v_unused_992_ = lean_ctor_get(v_l_968_, 3);
lean_dec(v_unused_992_);
v_unused_993_ = lean_ctor_get(v_l_968_, 0);
lean_dec(v_unused_993_);
v___x_978_ = v_l_968_;
v_isShared_979_ = v_isSharedCheck_990_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_v_976_);
lean_inc(v_k_975_);
lean_dec(v_l_968_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_990_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_980_; lean_object* v___x_982_; 
v___x_980_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_969_, 2);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 4, v_r_969_);
lean_ctor_set(v___x_978_, 3, v_r_969_);
lean_ctor_set(v___x_978_, 2, v_v_736_);
lean_ctor_set(v___x_978_, 1, v_k_735_);
lean_ctor_set(v___x_978_, 0, v___x_884_);
v___x_982_ = v___x_978_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_884_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_989_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_989_, 3, v_r_969_);
lean_ctor_set(v_reuseFailAlloc_989_, 4, v_r_969_);
v___x_982_ = v_reuseFailAlloc_989_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_984_; 
lean_inc(v_r_969_);
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 3, v_r_969_);
lean_ctor_set(v___x_973_, 0, v___x_884_);
v___x_984_ = v___x_973_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v___x_884_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v_k_970_);
lean_ctor_set(v_reuseFailAlloc_988_, 2, v_v_971_);
lean_ctor_set(v_reuseFailAlloc_988_, 3, v_r_969_);
lean_ctor_set(v_reuseFailAlloc_988_, 4, v_r_969_);
v___x_984_ = v_reuseFailAlloc_988_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_986_; 
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 4, v___x_984_);
lean_ctor_set(v___x_740_, 3, v___x_982_);
lean_ctor_set(v___x_740_, 2, v_v_976_);
lean_ctor_set(v___x_740_, 1, v_k_975_);
lean_ctor_set(v___x_740_, 0, v___x_980_);
v___x_986_ = v___x_740_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v___x_980_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_k_975_);
lean_ctor_set(v_reuseFailAlloc_987_, 2, v_v_976_);
lean_ctor_set(v_reuseFailAlloc_987_, 3, v___x_982_);
lean_ctor_set(v_reuseFailAlloc_987_, 4, v___x_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
}
}
else
{
lean_object* v_r_997_; 
v_r_997_ = lean_ctor_get(v_impl_883_, 4);
lean_inc(v_r_997_);
if (lean_obj_tag(v_r_997_) == 0)
{
lean_object* v_k_998_; lean_object* v_v_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1010_; 
v_k_998_ = lean_ctor_get(v_impl_883_, 1);
v_v_999_ = lean_ctor_get(v_impl_883_, 2);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_impl_883_);
if (v_isSharedCheck_1010_ == 0)
{
lean_object* v_unused_1011_; lean_object* v_unused_1012_; lean_object* v_unused_1013_; 
v_unused_1011_ = lean_ctor_get(v_impl_883_, 4);
lean_dec(v_unused_1011_);
v_unused_1012_ = lean_ctor_get(v_impl_883_, 3);
lean_dec(v_unused_1012_);
v_unused_1013_ = lean_ctor_get(v_impl_883_, 0);
lean_dec(v_unused_1013_);
v___x_1001_ = v_impl_883_;
v_isShared_1002_ = v_isSharedCheck_1010_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_v_999_);
lean_inc(v_k_998_);
lean_dec(v_impl_883_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1010_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1003_; lean_object* v___x_1005_; 
v___x_1003_ = lean_unsigned_to_nat(3u);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 4, v_l_968_);
lean_ctor_set(v___x_1001_, 2, v_v_736_);
lean_ctor_set(v___x_1001_, 1, v_k_735_);
lean_ctor_set(v___x_1001_, 0, v___x_884_);
v___x_1005_ = v___x_1001_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v___x_884_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_1009_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_1009_, 3, v_l_968_);
lean_ctor_set(v_reuseFailAlloc_1009_, 4, v_l_968_);
v___x_1005_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
lean_object* v___x_1007_; 
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 4, v_r_997_);
lean_ctor_set(v___x_740_, 3, v___x_1005_);
lean_ctor_set(v___x_740_, 2, v_v_999_);
lean_ctor_set(v___x_740_, 1, v_k_998_);
lean_ctor_set(v___x_740_, 0, v___x_1003_);
v___x_1007_ = v___x_740_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_1003_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v_k_998_);
lean_ctor_set(v_reuseFailAlloc_1008_, 2, v_v_999_);
lean_ctor_set(v_reuseFailAlloc_1008_, 3, v___x_1005_);
lean_ctor_set(v_reuseFailAlloc_1008_, 4, v_r_997_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
else
{
lean_object* v___x_1014_; lean_object* v___x_1016_; 
v___x_1014_ = lean_unsigned_to_nat(2u);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 4, v_impl_883_);
lean_ctor_set(v___x_740_, 3, v_r_997_);
lean_ctor_set(v___x_740_, 0, v___x_1014_);
v___x_1016_ = v___x_740_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1017_, 1, v_k_735_);
lean_ctor_set(v_reuseFailAlloc_1017_, 2, v_v_736_);
lean_ctor_set(v_reuseFailAlloc_1017_, 3, v_r_997_);
lean_ctor_set(v_reuseFailAlloc_1017_, 4, v_impl_883_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
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
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = lean_unsigned_to_nat(1u);
v___x_1020_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
lean_ctor_set(v___x_1020_, 1, v_k_731_);
lean_ctor_set(v___x_1020_, 2, v_v_732_);
lean_ctor_set(v___x_1020_, 3, v_t_733_);
lean_ctor_set(v___x_1020_, 4, v_t_733_);
return v___x_1020_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_fromOptions_x3f_spec__1(lean_object* v_init_1021_, lean_object* v_x_1022_){
_start:
{
if (lean_obj_tag(v_x_1022_) == 0)
{
lean_object* v_k_1023_; lean_object* v_v_1024_; lean_object* v_l_1025_; lean_object* v_r_1026_; lean_object* v___x_1027_; 
v_k_1023_ = lean_ctor_get(v_x_1022_, 1);
lean_inc(v_k_1023_);
v_v_1024_ = lean_ctor_get(v_x_1022_, 2);
lean_inc(v_v_1024_);
v_l_1025_ = lean_ctor_get(v_x_1022_, 3);
lean_inc(v_l_1025_);
v_r_1026_ = lean_ctor_get(v_x_1022_, 4);
lean_inc(v_r_1026_);
lean_dec_ref_known(v_x_1022_, 5);
v___x_1027_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_fromOptions_x3f_spec__1(v_init_1021_, v_l_1025_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_dec(v_r_1026_);
lean_dec(v_v_1024_);
lean_dec(v_k_1023_);
return v___x_1027_;
}
else
{
lean_object* v_val_1028_; lean_object* v_a_1029_; lean_object* v___x_1030_; 
v_val_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_val_1028_);
lean_dec_ref_known(v___x_1027_, 1);
v_a_1029_ = lean_ctor_get(v_val_1028_, 0);
lean_inc(v_a_1029_);
lean_dec(v_val_1028_);
v___x_1030_ = l_Lean_LeanOptionValue_ofDataValue_x3f(v_v_1024_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v___x_1031_; 
lean_dec(v_a_1029_);
lean_dec(v_r_1026_);
lean_dec(v_k_1023_);
v___x_1031_ = lean_box(0);
return v___x_1031_;
}
else
{
lean_object* v_val_1032_; lean_object* v___x_1033_; 
v_val_1032_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_val_1032_);
lean_dec_ref_known(v___x_1030_, 1);
v___x_1033_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LeanOptions_fromOptions_x3f_spec__0___redArg(v_k_1023_, v_val_1032_, v_a_1029_);
v_init_1021_ = v___x_1033_;
v_x_1022_ = v_r_1026_;
goto _start;
}
}
}
else
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1035_, 0, v_init_1021_);
v___x_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
return v___x_1036_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_fromOptions_x3f(lean_object* v_options_1037_){
_start:
{
lean_object* v_map_1038_; lean_object* v_values_1039_; lean_object* v___x_1040_; 
v_map_1038_ = lean_ctor_get(v_options_1037_, 0);
lean_inc(v_map_1038_);
lean_dec_ref(v_options_1037_);
v_values_1039_ = lean_box(1);
v___x_1040_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_fromOptions_x3f_spec__1(v_values_1039_, v_map_1038_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v___x_1041_; 
v___x_1041_ = lean_box(0);
return v___x_1041_;
}
else
{
lean_object* v_val_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1050_; 
v_val_1042_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1044_ = v___x_1040_;
v_isShared_1045_ = v_isSharedCheck_1050_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_val_1042_);
lean_dec(v___x_1040_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1050_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v_a_1046_; lean_object* v___x_1048_; 
v_a_1046_ = lean_ctor_get(v_val_1042_, 0);
lean_inc(v_a_1046_);
lean_dec(v_val_1042_);
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 0, v_a_1046_);
v___x_1048_ = v___x_1044_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1046_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LeanOptions_fromOptions_x3f_spec__0(lean_object* v_00_u03b2_1051_, lean_object* v_k_1052_, lean_object* v_v_1053_, lean_object* v_t_1054_, lean_object* v_hl_1055_){
_start:
{
lean_object* v___x_1056_; 
v___x_1056_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LeanOptions_fromOptions_x3f_spec__0___redArg(v_k_1052_, v_v_1053_, v_t_1054_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonLeanOptions___lam__0(lean_object* v___f_1057_, lean_object* v_j_1058_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = l_Lean_NameMap_fromJson_x3f___redArg(v___f_1057_, v_j_1058_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
v_a_1060_ = lean_ctor_get(v___x_1059_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___x_1059_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v___x_1059_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
v_a_1068_ = lean_ctor_get(v___x_1059_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1059_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1059_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonLeanOptions___lam__0(lean_object* v___f_1079_, lean_object* v_options_1080_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_NameMap_toJson___redArg(v___f_1079_, v_options_1080_);
return v___x_1081_;
}
}
lean_object* runtime_initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_LeanOptions(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedLeanOption_default = _init_l_Lean_instInhabitedLeanOption_default();
lean_mark_persistent(l_Lean_instInhabitedLeanOption_default);
l_Lean_instInhabitedLeanOption = _init_l_Lean_instInhabitedLeanOption();
lean_mark_persistent(l_Lean_instInhabitedLeanOption);
l_Lean_instInhabitedLeanOptions_default = _init_l_Lean_instInhabitedLeanOptions_default();
lean_mark_persistent(l_Lean_instInhabitedLeanOptions_default);
l_Lean_instInhabitedLeanOptions = _init_l_Lean_instInhabitedLeanOptions();
lean_mark_persistent(l_Lean_instInhabitedLeanOptions);
l_Lean_instEmptyCollectionLeanOptions = _init_l_Lean_instEmptyCollectionLeanOptions();
lean_mark_persistent(l_Lean_instEmptyCollectionLeanOptions);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_LeanOptions(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_LeanOptions(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_LeanOptions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_LeanOptions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_LeanOptions(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Data.KVMap
// Imports: public import Init.Data.Format.Syntax public import Init.Data.ToString.Name public import Init.Data.ToString.Extra
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
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_instToString___lam__0(lean_object*);
lean_object* l_instToStringProd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_instRepr_repr(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofBool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofBool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofName_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofName_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofNat_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofNat_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofInt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofInt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofSyntax_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_ofSyntax_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedDataValue_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_instInhabitedDataValue_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedDataValue_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedDataValue_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedDataValue_default___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedDataValue_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedDataValue_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedDataValue_default = (const lean_object*)&l_Lean_instInhabitedDataValue_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedDataValue = (const lean_object*)&l_Lean_instInhabitedDataValue_default___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_instBEqDataValue_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqDataValue_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqDataValue_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqDataValue___closed__0 = (const lean_object*)&l_Lean_instBEqDataValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqDataValue = (const lean_object*)&l_Lean_instBEqDataValue___closed__0_value;
static const lean_string_object l_Lean_instReprDataValue_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.DataValue.ofString"};
static const lean_object* l_Lean_instReprDataValue_repr___closed__0 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__1 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__1_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__2 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__2_value;
static lean_once_cell_t l_Lean_instReprDataValue_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprDataValue_repr___closed__3;
static lean_once_cell_t l_Lean_instReprDataValue_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprDataValue_repr___closed__4;
static const lean_string_object l_Lean_instReprDataValue_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.DataValue.ofBool"};
static const lean_object* l_Lean_instReprDataValue_repr___closed__5 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__5_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__5_value)}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__6 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__6_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__7 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__7_value;
static const lean_string_object l_Lean_instReprDataValue_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.DataValue.ofName"};
static const lean_object* l_Lean_instReprDataValue_repr___closed__8 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__8_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__8_value)}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__9 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__9_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__10 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__10_value;
static const lean_string_object l_Lean_instReprDataValue_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.DataValue.ofNat"};
static const lean_object* l_Lean_instReprDataValue_repr___closed__11 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__11_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__11_value)}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__12 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__12_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__13 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__13_value;
static const lean_string_object l_Lean_instReprDataValue_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.DataValue.ofInt"};
static const lean_object* l_Lean_instReprDataValue_repr___closed__14 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__14_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__14_value)}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__15 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__15_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__16 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__16_value;
static lean_once_cell_t l_Lean_instReprDataValue_repr___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprDataValue_repr___closed__17;
static const lean_string_object l_Lean_instReprDataValue_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.DataValue.ofSyntax"};
static const lean_object* l_Lean_instReprDataValue_repr___closed__18 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__18_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__18_value)}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__19 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__19_value;
static const lean_ctor_object l_Lean_instReprDataValue_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprDataValue_repr___closed__19_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprDataValue_repr___closed__20 = (const lean_object*)&l_Lean_instReprDataValue_repr___closed__20_value;
LEAN_EXPORT lean_object* l_Lean_instReprDataValue_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprDataValue_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprDataValue_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprDataValue___closed__0 = (const lean_object*)&l_Lean_instReprDataValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprDataValue = (const lean_object*)&l_Lean_instReprDataValue___closed__0_value;
LEAN_EXPORT uint8_t lean_data_value_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_beqExp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_mk_bool_data_value(uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkBoolDataValueEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_data_value_bool(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_getBoolEx___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_DataValue_sameCtor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DataValue_sameCtor___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_DataValue_str___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_DataValue_str___closed__0 = (const lean_object*)&l_Lean_DataValue_str___closed__0_value;
static const lean_string_object l_Lean_DataValue_str___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_DataValue_str___closed__1 = (const lean_object*)&l_Lean_DataValue_str___closed__1_value;
LEAN_EXPORT lean_object* lean_data_value_to_string(lean_object*);
static const lean_closure_object l_Lean_instToStringDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lean_data_value_to_string, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToStringDataValue___closed__0 = (const lean_object*)&l_Lean_instToStringDataValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToStringDataValue = (const lean_object*)&l_Lean_instToStringDataValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instCoeStringDataValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instCoeStringDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeStringDataValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeStringDataValue___closed__0 = (const lean_object*)&l_Lean_instCoeStringDataValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeStringDataValue = (const lean_object*)&l_Lean_instCoeStringDataValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instCoeBoolDataValue___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instCoeBoolDataValue___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instCoeBoolDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeBoolDataValue___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeBoolDataValue___closed__0 = (const lean_object*)&l_Lean_instCoeBoolDataValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeBoolDataValue = (const lean_object*)&l_Lean_instCoeBoolDataValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instCoeNameDataValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instCoeNameDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeNameDataValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeNameDataValue___closed__0 = (const lean_object*)&l_Lean_instCoeNameDataValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeNameDataValue = (const lean_object*)&l_Lean_instCoeNameDataValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instCoeNatDataValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instCoeNatDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeNatDataValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeNatDataValue___closed__0 = (const lean_object*)&l_Lean_instCoeNatDataValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeNatDataValue = (const lean_object*)&l_Lean_instCoeNatDataValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instCoeIntDataValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instCoeIntDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeIntDataValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeIntDataValue___closed__0 = (const lean_object*)&l_Lean_instCoeIntDataValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeIntDataValue = (const lean_object*)&l_Lean_instCoeIntDataValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instCoeSyntaxDataValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instCoeSyntaxDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeSyntaxDataValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeSyntaxDataValue___closed__0 = (const lean_object*)&l_Lean_instCoeSyntaxDataValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeSyntaxDataValue = (const lean_object*)&l_Lean_instCoeSyntaxDataValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedKVMap_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedKVMap;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprKVMap_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__2_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__3_value;
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__4_value;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__5;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__6;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__7 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__7_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__4_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__8 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__1(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__3 = (const lean_object*)&l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__3_value;
static lean_once_cell_t l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__4;
static lean_once_cell_t l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__5;
static const lean_ctor_object l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__6 = (const lean_object*)&l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__6_value;
static const lean_ctor_object l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__7 = (const lean_object*)&l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_instReprKVMap_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprKVMap_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprKVMap_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entries"};
static const lean_object* l_Lean_instReprKVMap_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprKVMap_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprKVMap_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprKVMap_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprKVMap_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprKVMap_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprKVMap_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprKVMap_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprKVMap_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprKVMap_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprKVMap_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprKVMap_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprKVMap_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprKVMap_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprKVMap_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lean_instReprKVMap_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprKVMap_repr___redArg___closed__9;
static lean_once_cell_t l_Lean_instReprKVMap_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprKVMap_repr___redArg___closed__10;
static const lean_ctor_object l_Lean_instReprKVMap_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprKVMap_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_instReprKVMap_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprKVMap_repr___redArg___closed__12 = (const lean_object*)&l_Lean_instReprKVMap_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_instReprKVMap_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprKVMap_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprKVMap_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprKVMap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprKVMap_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprKVMap___closed__0 = (const lean_object*)&l_Lean_instReprKVMap___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprKVMap = (const lean_object*)&l_Lean_instReprKVMap___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_KVMap_instToString___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_KVMap_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_KVMap_instToString___closed__0 = (const lean_object*)&l_Lean_KVMap_instToString___closed__0_value;
static const lean_closure_object l_Lean_KVMap_instToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringProd___redArg___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_KVMap_instToString___closed__0_value),((lean_object*)&l_Lean_instToStringDataValue___closed__0_value)} };
static const lean_object* l_Lean_KVMap_instToString___closed__1 = (const lean_object*)&l_Lean_KVMap_instToString___closed__1_value;
static const lean_closure_object l_Lean_KVMap_instToString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_KVMap_instToString___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_KVMap_instToString___closed__1_value)} };
static const lean_object* l_Lean_KVMap_instToString___closed__2 = (const lean_object*)&l_Lean_KVMap_instToString___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_KVMap_instToString = (const lean_object*)&l_Lean_KVMap_instToString___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_KVMap_empty;
LEAN_EXPORT uint8_t l_Lean_KVMap_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_size___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_findCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_findCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_find(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_find___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_findD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_findD___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_insertCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_KVMap_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_KVMap_erase_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_KVMap_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_erase___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_getString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_getString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_getNat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_getNat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_getInt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_getInt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_KVMap_getBool(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_KVMap_getBool___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_getName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_getName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_getSyntax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_getSyntax___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_setString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_setNat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_setInt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_setBool(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_KVMap_setBool___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_setName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_setSyntax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_updateString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_updateNat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_updateInt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_updateBool(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_KVMap_updateName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_KVMap_updateName___closed__0;
LEAN_EXPORT lean_object* l_Lean_KVMap_updateName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_updateSyntax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_forIn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_forIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_forIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_instForInProdNameDataValueOfMonad(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_KVMap_subsetAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_subsetAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_KVMap_subset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_subset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_mergeBy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_mergeBy___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_KVMap_eqv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_eqv___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_KVMap_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_KVMap_eqv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_KVMap_instBEq___closed__0 = (const lean_object*)&l_Lean_KVMap_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_KVMap_instBEq = (const lean_object*)&l_Lean_KVMap_instBEq___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_KVMap_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_get_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_get_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_get_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_set___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_update___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_update(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueDataValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_KVMap_instValueDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_KVMap_instValueDataValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_KVMap_instValueDataValue___closed__0 = (const lean_object*)&l_Lean_KVMap_instValueDataValue___closed__0_value;
static const lean_closure_object l_Lean_KVMap_instValueDataValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_KVMap_instValueDataValue___closed__1 = (const lean_object*)&l_Lean_KVMap_instValueDataValue___closed__1_value;
static const lean_ctor_object l_Lean_KVMap_instValueDataValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_KVMap_instValueDataValue___closed__1_value),((lean_object*)&l_Lean_KVMap_instValueDataValue___closed__0_value)}};
static const lean_object* l_Lean_KVMap_instValueDataValue___closed__2 = (const lean_object*)&l_Lean_KVMap_instValueDataValue___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_KVMap_instValueDataValue = (const lean_object*)&l_Lean_KVMap_instValueDataValue___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueBool___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueBool___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_KVMap_instValueBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_KVMap_instValueBool___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_KVMap_instValueBool___closed__0 = (const lean_object*)&l_Lean_KVMap_instValueBool___closed__0_value;
static const lean_ctor_object l_Lean_KVMap_instValueBool___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instCoeBoolDataValue___closed__0_value),((lean_object*)&l_Lean_KVMap_instValueBool___closed__0_value)}};
static const lean_object* l_Lean_KVMap_instValueBool___closed__1 = (const lean_object*)&l_Lean_KVMap_instValueBool___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_KVMap_instValueBool = (const lean_object*)&l_Lean_KVMap_instValueBool___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueNat___lam__1(lean_object*);
static const lean_closure_object l_Lean_KVMap_instValueNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_KVMap_instValueNat___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_KVMap_instValueNat___closed__0 = (const lean_object*)&l_Lean_KVMap_instValueNat___closed__0_value;
static const lean_ctor_object l_Lean_KVMap_instValueNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instCoeNatDataValue___closed__0_value),((lean_object*)&l_Lean_KVMap_instValueNat___closed__0_value)}};
static const lean_object* l_Lean_KVMap_instValueNat___closed__1 = (const lean_object*)&l_Lean_KVMap_instValueNat___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_KVMap_instValueNat = (const lean_object*)&l_Lean_KVMap_instValueNat___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueInt___lam__1(lean_object*);
static const lean_closure_object l_Lean_KVMap_instValueInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_KVMap_instValueInt___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_KVMap_instValueInt___closed__0 = (const lean_object*)&l_Lean_KVMap_instValueInt___closed__0_value;
static const lean_ctor_object l_Lean_KVMap_instValueInt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instCoeIntDataValue___closed__0_value),((lean_object*)&l_Lean_KVMap_instValueInt___closed__0_value)}};
static const lean_object* l_Lean_KVMap_instValueInt___closed__1 = (const lean_object*)&l_Lean_KVMap_instValueInt___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_KVMap_instValueInt = (const lean_object*)&l_Lean_KVMap_instValueInt___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueName___lam__1(lean_object*);
static const lean_closure_object l_Lean_KVMap_instValueName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_KVMap_instValueName___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_KVMap_instValueName___closed__0 = (const lean_object*)&l_Lean_KVMap_instValueName___closed__0_value;
static const lean_ctor_object l_Lean_KVMap_instValueName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instCoeNameDataValue___closed__0_value),((lean_object*)&l_Lean_KVMap_instValueName___closed__0_value)}};
static const lean_object* l_Lean_KVMap_instValueName___closed__1 = (const lean_object*)&l_Lean_KVMap_instValueName___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_KVMap_instValueName = (const lean_object*)&l_Lean_KVMap_instValueName___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueString___lam__1(lean_object*);
static const lean_closure_object l_Lean_KVMap_instValueString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_KVMap_instValueString___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_KVMap_instValueString___closed__0 = (const lean_object*)&l_Lean_KVMap_instValueString___closed__0_value;
static const lean_ctor_object l_Lean_KVMap_instValueString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instCoeStringDataValue___closed__0_value),((lean_object*)&l_Lean_KVMap_instValueString___closed__0_value)}};
static const lean_object* l_Lean_KVMap_instValueString___closed__1 = (const lean_object*)&l_Lean_KVMap_instValueString___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_KVMap_instValueString = (const lean_object*)&l_Lean_KVMap_instValueString___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueSyntax___lam__1(lean_object*);
static const lean_closure_object l_Lean_KVMap_instValueSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_KVMap_instValueSyntax___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_KVMap_instValueSyntax___closed__0 = (const lean_object*)&l_Lean_KVMap_instValueSyntax___closed__0_value;
static const lean_ctor_object l_Lean_KVMap_instValueSyntax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instCoeSyntaxDataValue___closed__0_value),((lean_object*)&l_Lean_KVMap_instValueSyntax___closed__0_value)}};
static const lean_object* l_Lean_KVMap_instValueSyntax___closed__1 = (const lean_object*)&l_Lean_KVMap_instValueSyntax___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_KVMap_instValueSyntax = (const lean_object*)&l_Lean_KVMap_instValueSyntax___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_DataValue_ctorIdx(lean_object* v_x_1_){
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
default: 
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ctorIdx___boxed(lean_object* v_x_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_DataValue_ctorIdx(v_x_8_);
lean_dec_ref(v_x_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ctorElim___redArg(lean_object* v_t_10_, lean_object* v_k_11_){
_start:
{
switch(lean_obj_tag(v_t_10_))
{
case 0:
{
lean_object* v_v_12_; lean_object* v___x_13_; 
v_v_12_ = lean_ctor_get(v_t_10_, 0);
lean_inc_ref(v_v_12_);
lean_dec_ref_known(v_t_10_, 1);
v___x_13_ = lean_apply_1(v_k_11_, v_v_12_);
return v___x_13_;
}
case 1:
{
uint8_t v_v_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v_v_14_ = lean_ctor_get_uint8(v_t_10_, 0);
lean_dec_ref_known(v_t_10_, 0);
v___x_15_ = lean_box(v_v_14_);
v___x_16_ = lean_apply_1(v_k_11_, v___x_15_);
return v___x_16_;
}
default: 
{
lean_object* v_v_17_; lean_object* v___x_18_; 
v_v_17_ = lean_ctor_get(v_t_10_, 0);
lean_inc(v_v_17_);
lean_dec_ref(v_t_10_);
v___x_18_ = lean_apply_1(v_k_11_, v_v_17_);
return v___x_18_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ctorElim(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_DataValue_ctorElim___redArg(v_t_21_, v_k_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ctorElim___boxed(lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_DataValue_ctorElim(v_motive_25_, v_ctorIdx_26_, v_t_27_, v_h_28_, v_k_29_);
lean_dec(v_ctorIdx_26_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofString_elim___redArg(lean_object* v_t_31_, lean_object* v_ofString_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_DataValue_ctorElim___redArg(v_t_31_, v_ofString_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofString_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_ofString_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_DataValue_ctorElim___redArg(v_t_35_, v_ofString_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofBool_elim___redArg(lean_object* v_t_39_, lean_object* v_ofBool_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_DataValue_ctorElim___redArg(v_t_39_, v_ofBool_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofBool_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_ofBool_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_DataValue_ctorElim___redArg(v_t_43_, v_ofBool_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofName_elim___redArg(lean_object* v_t_47_, lean_object* v_ofName_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lean_DataValue_ctorElim___redArg(v_t_47_, v_ofName_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofName_elim(lean_object* v_motive_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_ofName_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lean_DataValue_ctorElim___redArg(v_t_51_, v_ofName_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofNat_elim___redArg(lean_object* v_t_55_, lean_object* v_ofNat_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_DataValue_ctorElim___redArg(v_t_55_, v_ofNat_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofNat_elim(lean_object* v_motive_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_ofNat_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_DataValue_ctorElim___redArg(v_t_59_, v_ofNat_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofInt_elim___redArg(lean_object* v_t_63_, lean_object* v_ofInt_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_DataValue_ctorElim___redArg(v_t_63_, v_ofInt_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofInt_elim(lean_object* v_motive_66_, lean_object* v_t_67_, lean_object* v_h_68_, lean_object* v_ofInt_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_DataValue_ctorElim___redArg(v_t_67_, v_ofInt_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofSyntax_elim___redArg(lean_object* v_t_71_, lean_object* v_ofSyntax_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_DataValue_ctorElim___redArg(v_t_71_, v_ofSyntax_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_ofSyntax_elim(lean_object* v_motive_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_ofSyntax_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_DataValue_ctorElim___redArg(v_t_75_, v_ofSyntax_77_);
return v___x_78_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqDataValue_beq(lean_object* v_x_84_, lean_object* v_x_85_){
_start:
{
switch(lean_obj_tag(v_x_84_))
{
case 0:
{
if (lean_obj_tag(v_x_85_) == 0)
{
lean_object* v_v_86_; lean_object* v_v_87_; uint8_t v___x_88_; 
v_v_86_ = lean_ctor_get(v_x_84_, 0);
v_v_87_ = lean_ctor_get(v_x_85_, 0);
v___x_88_ = lean_string_dec_eq(v_v_86_, v_v_87_);
return v___x_88_;
}
else
{
uint8_t v___x_89_; 
v___x_89_ = 0;
return v___x_89_;
}
}
case 1:
{
if (lean_obj_tag(v_x_85_) == 1)
{
uint8_t v_v_90_; 
v_v_90_ = lean_ctor_get_uint8(v_x_85_, 0);
if (v_v_90_ == 0)
{
uint8_t v_v_91_; 
v_v_91_ = lean_ctor_get_uint8(v_x_84_, 0);
if (v_v_91_ == 0)
{
uint8_t v___x_92_; 
v___x_92_ = 1;
return v___x_92_;
}
else
{
return v_v_90_;
}
}
else
{
uint8_t v_v_93_; 
v_v_93_ = lean_ctor_get_uint8(v_x_84_, 0);
return v_v_93_;
}
}
else
{
uint8_t v___x_94_; 
v___x_94_ = 0;
return v___x_94_;
}
}
case 2:
{
if (lean_obj_tag(v_x_85_) == 2)
{
lean_object* v_v_95_; lean_object* v_v_96_; uint8_t v___x_97_; 
v_v_95_ = lean_ctor_get(v_x_84_, 0);
v_v_96_ = lean_ctor_get(v_x_85_, 0);
v___x_97_ = lean_name_eq(v_v_95_, v_v_96_);
return v___x_97_;
}
else
{
uint8_t v___x_98_; 
v___x_98_ = 0;
return v___x_98_;
}
}
case 3:
{
if (lean_obj_tag(v_x_85_) == 3)
{
lean_object* v_v_99_; lean_object* v_v_100_; uint8_t v___x_101_; 
v_v_99_ = lean_ctor_get(v_x_84_, 0);
v_v_100_ = lean_ctor_get(v_x_85_, 0);
v___x_101_ = lean_nat_dec_eq(v_v_99_, v_v_100_);
return v___x_101_;
}
else
{
uint8_t v___x_102_; 
v___x_102_ = 0;
return v___x_102_;
}
}
case 4:
{
if (lean_obj_tag(v_x_85_) == 4)
{
lean_object* v_v_103_; lean_object* v_v_104_; uint8_t v___x_105_; 
v_v_103_ = lean_ctor_get(v_x_84_, 0);
v_v_104_ = lean_ctor_get(v_x_85_, 0);
v___x_105_ = lean_int_dec_eq(v_v_103_, v_v_104_);
return v___x_105_;
}
else
{
uint8_t v___x_106_; 
v___x_106_ = 0;
return v___x_106_;
}
}
default: 
{
if (lean_obj_tag(v_x_85_) == 5)
{
lean_object* v_v_107_; lean_object* v_v_108_; uint8_t v___x_109_; 
v_v_107_ = lean_ctor_get(v_x_84_, 0);
v_v_108_ = lean_ctor_get(v_x_85_, 0);
v___x_109_ = l_Lean_Syntax_structEq(v_v_107_, v_v_108_);
return v___x_109_;
}
else
{
uint8_t v___x_110_; 
v___x_110_ = 0;
return v___x_110_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqDataValue_beq___boxed(lean_object* v_x_111_, lean_object* v_x_112_){
_start:
{
uint8_t v_res_113_; lean_object* v_r_114_; 
v_res_113_ = l_Lean_instBEqDataValue_beq(v_x_111_, v_x_112_);
lean_dec_ref(v_x_112_);
lean_dec_ref(v_x_111_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
static lean_object* _init_l_Lean_instReprDataValue_repr___closed__3(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_unsigned_to_nat(2u);
v___x_124_ = lean_nat_to_int(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_instReprDataValue_repr___closed__4(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = lean_nat_to_int(v___x_125_);
return v___x_126_;
}
}
static lean_object* _init_l_Lean_instReprDataValue_repr___closed__17(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(0u);
v___x_152_ = lean_nat_to_int(v___x_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprDataValue_repr(lean_object* v_x_159_, lean_object* v_prec_160_){
_start:
{
lean_object* v___y_162_; lean_object* v___y_163_; lean_object* v___y_164_; 
switch(lean_obj_tag(v_x_159_))
{
case 0:
{
lean_object* v_v_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_190_; 
v_v_170_ = lean_ctor_get(v_x_159_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v_x_159_);
if (v_isSharedCheck_190_ == 0)
{
v___x_172_ = v_x_159_;
v_isShared_173_ = v_isSharedCheck_190_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_v_170_);
lean_dec(v_x_159_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_190_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___y_175_; lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = lean_unsigned_to_nat(1024u);
v___x_187_ = lean_nat_dec_le(v___x_186_, v_prec_160_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; 
v___x_188_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__3, &l_Lean_instReprDataValue_repr___closed__3_once, _init_l_Lean_instReprDataValue_repr___closed__3);
v___y_175_ = v___x_188_;
goto v___jp_174_;
}
else
{
lean_object* v___x_189_; 
v___x_189_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__4, &l_Lean_instReprDataValue_repr___closed__4_once, _init_l_Lean_instReprDataValue_repr___closed__4);
v___y_175_ = v___x_189_;
goto v___jp_174_;
}
v___jp_174_:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
v___x_176_ = ((lean_object*)(l_Lean_instReprDataValue_repr___closed__2));
v___x_177_ = l_String_quote(v_v_170_);
if (v_isShared_173_ == 0)
{
lean_ctor_set_tag(v___x_172_, 3);
lean_ctor_set(v___x_172_, 0, v___x_177_);
v___x_179_ = v___x_172_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_177_);
v___x_179_ = v_reuseFailAlloc_185_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_180_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_176_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
lean_inc(v___y_175_);
v___x_181_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_181_, 0, v___y_175_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = 0;
v___x_183_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_183_, 0, v___x_181_);
lean_ctor_set_uint8(v___x_183_, sizeof(void*)*1, v___x_182_);
v___x_184_ = l_Repr_addAppParen(v___x_183_, v_prec_160_);
return v___x_184_;
}
}
}
}
case 1:
{
uint8_t v_v_191_; lean_object* v___y_193_; lean_object* v___x_201_; uint8_t v___x_202_; 
v_v_191_ = lean_ctor_get_uint8(v_x_159_, 0);
lean_dec_ref_known(v_x_159_, 0);
v___x_201_ = lean_unsigned_to_nat(1024u);
v___x_202_ = lean_nat_dec_le(v___x_201_, v_prec_160_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; 
v___x_203_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__3, &l_Lean_instReprDataValue_repr___closed__3_once, _init_l_Lean_instReprDataValue_repr___closed__3);
v___y_193_ = v___x_203_;
goto v___jp_192_;
}
else
{
lean_object* v___x_204_; 
v___x_204_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__4, &l_Lean_instReprDataValue_repr___closed__4_once, _init_l_Lean_instReprDataValue_repr___closed__4);
v___y_193_ = v___x_204_;
goto v___jp_192_;
}
v___jp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_194_ = ((lean_object*)(l_Lean_instReprDataValue_repr___closed__7));
v___x_195_ = l_Bool_repr___redArg(v_v_191_);
v___x_196_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
lean_inc(v___y_193_);
v___x_197_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_197_, 0, v___y_193_);
lean_ctor_set(v___x_197_, 1, v___x_196_);
v___x_198_ = 0;
v___x_199_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_199_, 0, v___x_197_);
lean_ctor_set_uint8(v___x_199_, sizeof(void*)*1, v___x_198_);
v___x_200_ = l_Repr_addAppParen(v___x_199_, v_prec_160_);
return v___x_200_;
}
}
case 2:
{
lean_object* v_v_205_; lean_object* v___y_207_; lean_object* v___x_216_; uint8_t v___x_217_; 
v_v_205_ = lean_ctor_get(v_x_159_, 0);
lean_inc(v_v_205_);
lean_dec_ref_known(v_x_159_, 1);
v___x_216_ = lean_unsigned_to_nat(1024u);
v___x_217_ = lean_nat_dec_le(v___x_216_, v_prec_160_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; 
v___x_218_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__3, &l_Lean_instReprDataValue_repr___closed__3_once, _init_l_Lean_instReprDataValue_repr___closed__3);
v___y_207_ = v___x_218_;
goto v___jp_206_;
}
else
{
lean_object* v___x_219_; 
v___x_219_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__4, &l_Lean_instReprDataValue_repr___closed__4_once, _init_l_Lean_instReprDataValue_repr___closed__4);
v___y_207_ = v___x_219_;
goto v___jp_206_;
}
v___jp_206_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_208_ = ((lean_object*)(l_Lean_instReprDataValue_repr___closed__10));
v___x_209_ = lean_unsigned_to_nat(1024u);
v___x_210_ = l_Lean_Name_reprPrec(v_v_205_, v___x_209_);
v___x_211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_208_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
lean_inc(v___y_207_);
v___x_212_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_212_, 0, v___y_207_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = 0;
v___x_214_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_214_, 0, v___x_212_);
lean_ctor_set_uint8(v___x_214_, sizeof(void*)*1, v___x_213_);
v___x_215_ = l_Repr_addAppParen(v___x_214_, v_prec_160_);
return v___x_215_;
}
}
case 3:
{
lean_object* v_v_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_240_; 
v_v_220_ = lean_ctor_get(v_x_159_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v_x_159_);
if (v_isSharedCheck_240_ == 0)
{
v___x_222_ = v_x_159_;
v_isShared_223_ = v_isSharedCheck_240_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_v_220_);
lean_dec(v_x_159_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_240_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___y_225_; lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_236_ = lean_unsigned_to_nat(1024u);
v___x_237_ = lean_nat_dec_le(v___x_236_, v_prec_160_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; 
v___x_238_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__3, &l_Lean_instReprDataValue_repr___closed__3_once, _init_l_Lean_instReprDataValue_repr___closed__3);
v___y_225_ = v___x_238_;
goto v___jp_224_;
}
else
{
lean_object* v___x_239_; 
v___x_239_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__4, &l_Lean_instReprDataValue_repr___closed__4_once, _init_l_Lean_instReprDataValue_repr___closed__4);
v___y_225_ = v___x_239_;
goto v___jp_224_;
}
v___jp_224_:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_229_; 
v___x_226_ = ((lean_object*)(l_Lean_instReprDataValue_repr___closed__13));
v___x_227_ = l_Nat_reprFast(v_v_220_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v___x_227_);
v___x_229_ = v___x_222_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_227_);
v___x_229_ = v_reuseFailAlloc_235_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_226_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
lean_inc(v___y_225_);
v___x_231_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_231_, 0, v___y_225_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = 0;
v___x_233_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1, v___x_232_);
v___x_234_ = l_Repr_addAppParen(v___x_233_, v_prec_160_);
return v___x_234_;
}
}
}
}
case 4:
{
lean_object* v_v_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_264_; 
v_v_241_ = lean_ctor_get(v_x_159_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v_x_159_);
if (v_isSharedCheck_264_ == 0)
{
v___x_243_ = v_x_159_;
v_isShared_244_ = v_isSharedCheck_264_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_v_241_);
lean_dec(v_x_159_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_264_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___y_246_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_260_ = lean_unsigned_to_nat(1024u);
v___x_261_ = lean_nat_dec_le(v___x_260_, v_prec_160_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; 
v___x_262_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__3, &l_Lean_instReprDataValue_repr___closed__3_once, _init_l_Lean_instReprDataValue_repr___closed__3);
v___y_246_ = v___x_262_;
goto v___jp_245_;
}
else
{
lean_object* v___x_263_; 
v___x_263_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__4, &l_Lean_instReprDataValue_repr___closed__4_once, _init_l_Lean_instReprDataValue_repr___closed__4);
v___y_246_ = v___x_263_;
goto v___jp_245_;
}
v___jp_245_:
{
lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_247_ = ((lean_object*)(l_Lean_instReprDataValue_repr___closed__16));
v___x_248_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__17, &l_Lean_instReprDataValue_repr___closed__17_once, _init_l_Lean_instReprDataValue_repr___closed__17);
v___x_249_ = lean_int_dec_lt(v_v_241_, v___x_248_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_252_; 
v___x_250_ = l_Int_repr(v_v_241_);
lean_dec(v_v_241_);
if (v_isShared_244_ == 0)
{
lean_ctor_set_tag(v___x_243_, 3);
lean_ctor_set(v___x_243_, 0, v___x_250_);
v___x_252_ = v___x_243_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_250_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
v___y_162_ = v___x_247_;
v___y_163_ = v___y_246_;
v___y_164_ = v___x_252_;
goto v___jp_161_;
}
}
else
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_254_ = lean_unsigned_to_nat(1024u);
v___x_255_ = l_Int_repr(v_v_241_);
lean_dec(v_v_241_);
if (v_isShared_244_ == 0)
{
lean_ctor_set_tag(v___x_243_, 3);
lean_ctor_set(v___x_243_, 0, v___x_255_);
v___x_257_ = v___x_243_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v___x_255_);
v___x_257_ = v_reuseFailAlloc_259_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_258_; 
v___x_258_ = l_Repr_addAppParen(v___x_257_, v___x_254_);
v___y_162_ = v___x_247_;
v___y_163_ = v___y_246_;
v___y_164_ = v___x_258_;
goto v___jp_161_;
}
}
}
}
}
default: 
{
lean_object* v_v_265_; lean_object* v___y_267_; lean_object* v___x_276_; uint8_t v___x_277_; 
v_v_265_ = lean_ctor_get(v_x_159_, 0);
lean_inc(v_v_265_);
lean_dec_ref_known(v_x_159_, 1);
v___x_276_ = lean_unsigned_to_nat(1024u);
v___x_277_ = lean_nat_dec_le(v___x_276_, v_prec_160_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; 
v___x_278_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__3, &l_Lean_instReprDataValue_repr___closed__3_once, _init_l_Lean_instReprDataValue_repr___closed__3);
v___y_267_ = v___x_278_;
goto v___jp_266_;
}
else
{
lean_object* v___x_279_; 
v___x_279_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__4, &l_Lean_instReprDataValue_repr___closed__4_once, _init_l_Lean_instReprDataValue_repr___closed__4);
v___y_267_ = v___x_279_;
goto v___jp_266_;
}
v___jp_266_:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; uint8_t v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_268_ = ((lean_object*)(l_Lean_instReprDataValue_repr___closed__20));
v___x_269_ = lean_unsigned_to_nat(1024u);
v___x_270_ = l_Lean_Syntax_instRepr_repr(v_v_265_, v___x_269_);
v___x_271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_268_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
lean_inc(v___y_267_);
v___x_272_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_272_, 0, v___y_267_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = 0;
v___x_274_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_274_, 0, v___x_272_);
lean_ctor_set_uint8(v___x_274_, sizeof(void*)*1, v___x_273_);
v___x_275_ = l_Repr_addAppParen(v___x_274_, v_prec_160_);
return v___x_275_;
}
}
}
v___jp_161_:
{
lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
lean_inc(v___y_162_);
v___x_165_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_165_, 0, v___y_162_);
lean_ctor_set(v___x_165_, 1, v___y_164_);
lean_inc(v___y_163_);
v___x_166_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_166_, 0, v___y_163_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = 0;
v___x_168_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_168_, 0, v___x_166_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*1, v___x_167_);
v___x_169_ = l_Repr_addAppParen(v___x_168_, v_prec_160_);
return v___x_169_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprDataValue_repr___boxed(lean_object* v_x_280_, lean_object* v_prec_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_instReprDataValue_repr(v_x_280_, v_prec_281_);
lean_dec(v_prec_281_);
return v_res_282_;
}
}
LEAN_EXPORT uint8_t lean_data_value_beq(lean_object* v_a_285_, lean_object* v_b_286_){
_start:
{
uint8_t v___x_287_; 
v___x_287_ = l_Lean_instBEqDataValue_beq(v_a_285_, v_b_286_);
lean_dec_ref(v_b_286_);
lean_dec_ref(v_a_285_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_beqExp___boxed(lean_object* v_a_288_, lean_object* v_b_289_){
_start:
{
uint8_t v_res_290_; lean_object* v_r_291_; 
v_res_290_ = lean_data_value_beq(v_a_288_, v_b_289_);
v_r_291_ = lean_box(v_res_290_);
return v_r_291_;
}
}
LEAN_EXPORT lean_object* lean_mk_bool_data_value(uint8_t v_b_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_293_, 0, v_b_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBoolDataValueEx___boxed(lean_object* v_b_294_){
_start:
{
uint8_t v_b_boxed_295_; lean_object* v_res_296_; 
v_b_boxed_295_ = lean_unbox(v_b_294_);
v_res_296_ = lean_mk_bool_data_value(v_b_boxed_295_);
return v_res_296_;
}
}
LEAN_EXPORT uint8_t lean_data_value_bool(lean_object* v_x_297_){
_start:
{
if (lean_obj_tag(v_x_297_) == 1)
{
uint8_t v_v_298_; 
v_v_298_ = lean_ctor_get_uint8(v_x_297_, 0);
lean_dec_ref_known(v_x_297_, 0);
return v_v_298_;
}
else
{
uint8_t v___x_299_; 
lean_dec_ref(v_x_297_);
v___x_299_ = 0;
return v___x_299_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_getBoolEx___boxed(lean_object* v_x_300_){
_start:
{
uint8_t v_res_301_; lean_object* v_r_302_; 
v_res_301_ = lean_data_value_bool(v_x_300_);
v_r_302_ = lean_box(v_res_301_);
return v_r_302_;
}
}
LEAN_EXPORT uint8_t l_Lean_DataValue_sameCtor(lean_object* v_x_303_, lean_object* v_x_304_){
_start:
{
switch(lean_obj_tag(v_x_303_))
{
case 0:
{
if (lean_obj_tag(v_x_304_) == 0)
{
uint8_t v___x_305_; 
v___x_305_ = 1;
return v___x_305_;
}
else
{
uint8_t v___x_306_; 
v___x_306_ = 0;
return v___x_306_;
}
}
case 1:
{
if (lean_obj_tag(v_x_304_) == 1)
{
uint8_t v___x_307_; 
v___x_307_ = 1;
return v___x_307_;
}
else
{
uint8_t v___x_308_; 
v___x_308_ = 0;
return v___x_308_;
}
}
case 2:
{
if (lean_obj_tag(v_x_304_) == 2)
{
uint8_t v___x_309_; 
v___x_309_ = 1;
return v___x_309_;
}
else
{
uint8_t v___x_310_; 
v___x_310_ = 0;
return v___x_310_;
}
}
case 3:
{
if (lean_obj_tag(v_x_304_) == 3)
{
uint8_t v___x_311_; 
v___x_311_ = 1;
return v___x_311_;
}
else
{
uint8_t v___x_312_; 
v___x_312_ = 0;
return v___x_312_;
}
}
case 4:
{
if (lean_obj_tag(v_x_304_) == 4)
{
uint8_t v___x_313_; 
v___x_313_ = 1;
return v___x_313_;
}
else
{
uint8_t v___x_314_; 
v___x_314_ = 0;
return v___x_314_;
}
}
default: 
{
if (lean_obj_tag(v_x_304_) == 5)
{
uint8_t v___x_315_; 
v___x_315_ = 1;
return v___x_315_;
}
else
{
uint8_t v___x_316_; 
v___x_316_ = 0;
return v___x_316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_DataValue_sameCtor___boxed(lean_object* v_x_317_, lean_object* v_x_318_){
_start:
{
uint8_t v_res_319_; lean_object* v_r_320_; 
v_res_319_ = l_Lean_DataValue_sameCtor(v_x_317_, v_x_318_);
lean_dec_ref(v_x_318_);
lean_dec_ref(v_x_317_);
v_r_320_ = lean_box(v_res_319_);
return v_r_320_;
}
}
LEAN_EXPORT lean_object* lean_data_value_to_string(lean_object* v_x_323_){
_start:
{
switch(lean_obj_tag(v_x_323_))
{
case 0:
{
lean_object* v_v_324_; 
v_v_324_ = lean_ctor_get(v_x_323_, 0);
lean_inc_ref(v_v_324_);
lean_dec_ref_known(v_x_323_, 1);
return v_v_324_;
}
case 1:
{
uint8_t v_v_325_; 
v_v_325_ = lean_ctor_get_uint8(v_x_323_, 0);
lean_dec_ref_known(v_x_323_, 0);
if (v_v_325_ == 0)
{
lean_object* v___x_326_; 
v___x_326_ = ((lean_object*)(l_Lean_DataValue_str___closed__0));
return v___x_326_;
}
else
{
lean_object* v___x_327_; 
v___x_327_ = ((lean_object*)(l_Lean_DataValue_str___closed__1));
return v___x_327_;
}
}
case 2:
{
lean_object* v_v_328_; uint8_t v___x_329_; lean_object* v___x_330_; 
v_v_328_ = lean_ctor_get(v_x_323_, 0);
lean_inc(v_v_328_);
lean_dec_ref_known(v_x_323_, 1);
v___x_329_ = 1;
v___x_330_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_328_, v___x_329_);
return v___x_330_;
}
case 3:
{
lean_object* v_v_331_; lean_object* v___x_332_; 
v_v_331_ = lean_ctor_get(v_x_323_, 0);
lean_inc(v_v_331_);
lean_dec_ref_known(v_x_323_, 1);
v___x_332_ = l_Nat_reprFast(v_v_331_);
return v___x_332_;
}
case 4:
{
lean_object* v_v_333_; lean_object* v___x_334_; 
v_v_333_ = lean_ctor_get(v_x_323_, 0);
lean_inc(v_v_333_);
lean_dec_ref_known(v_x_323_, 1);
v___x_334_ = l_Int_repr(v_v_333_);
lean_dec(v_v_333_);
return v___x_334_;
}
default: 
{
lean_object* v_v_335_; lean_object* v___x_336_; uint8_t v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_v_335_ = lean_ctor_get(v_x_323_, 0);
lean_inc(v_v_335_);
lean_dec_ref_known(v_x_323_, 1);
v___x_336_ = lean_box(0);
v___x_337_ = 0;
v___x_338_ = l_Lean_Syntax_formatStx(v_v_335_, v___x_336_, v___x_337_);
v___x_339_ = l_Std_Format_defWidth;
v___x_340_ = lean_unsigned_to_nat(0u);
v___x_341_ = l_Std_Format_pretty(v___x_338_, v___x_339_, v___x_340_, v___x_340_);
return v___x_341_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeStringDataValue___lam__0(lean_object* v_v_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_345_, 0, v_v_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeBoolDataValue___lam__0(uint8_t v_v_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_349_, 0, v_v_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeBoolDataValue___lam__0___boxed(lean_object* v_v_350_){
_start:
{
uint8_t v_v_boxed_351_; lean_object* v_res_352_; 
v_v_boxed_351_ = lean_unbox(v_v_350_);
v_res_352_ = l_Lean_instCoeBoolDataValue___lam__0(v_v_boxed_351_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeNameDataValue___lam__0(lean_object* v_v_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_356_, 0, v_v_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeNatDataValue___lam__0(lean_object* v_v_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_360_, 0, v_v_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeIntDataValue___lam__0(lean_object* v_v_363_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_364_, 0, v_v_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeSyntaxDataValue___lam__0(lean_object* v_v_367_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_368_, 0, v_v_367_);
return v___x_368_;
}
}
static lean_object* _init_l_Lean_instInhabitedKVMap_default(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_box(0);
return v___x_371_;
}
}
static lean_object* _init_l_Lean_instInhabitedKVMap(void){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lean_box(0);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprKVMap_repr_spec__1(lean_object* v_a_373_){
_start:
{
lean_object* v___x_374_; 
v___x_374_ = lean_nat_to_int(v_a_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_375_, lean_object* v_x_376_, lean_object* v_x_377_){
_start:
{
if (lean_obj_tag(v_x_377_) == 0)
{
lean_dec(v_x_375_);
return v_x_376_;
}
else
{
lean_object* v_head_378_; lean_object* v_tail_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_388_; 
v_head_378_ = lean_ctor_get(v_x_377_, 0);
v_tail_379_ = lean_ctor_get(v_x_377_, 1);
v_isSharedCheck_388_ = !lean_is_exclusive(v_x_377_);
if (v_isSharedCheck_388_ == 0)
{
v___x_381_ = v_x_377_;
v_isShared_382_ = v_isSharedCheck_388_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_tail_379_);
lean_inc(v_head_378_);
lean_dec(v_x_377_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_388_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_384_; 
lean_inc(v_x_375_);
if (v_isShared_382_ == 0)
{
lean_ctor_set_tag(v___x_381_, 5);
lean_ctor_set(v___x_381_, 1, v_x_375_);
lean_ctor_set(v___x_381_, 0, v_x_376_);
v___x_384_ = v___x_381_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_x_376_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v_x_375_);
v___x_384_ = v_reuseFailAlloc_387_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_385_; 
v___x_385_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v_head_378_);
v_x_376_ = v___x_385_;
v_x_377_ = v_tail_379_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0_spec__2(lean_object* v_x_389_, lean_object* v_x_390_){
_start:
{
if (lean_obj_tag(v_x_389_) == 0)
{
lean_object* v___x_391_; 
lean_dec(v_x_390_);
v___x_391_ = lean_box(0);
return v___x_391_;
}
else
{
lean_object* v_tail_392_; 
v_tail_392_ = lean_ctor_get(v_x_389_, 1);
if (lean_obj_tag(v_tail_392_) == 0)
{
lean_object* v_head_393_; 
lean_dec(v_x_390_);
v_head_393_ = lean_ctor_get(v_x_389_, 0);
lean_inc(v_head_393_);
lean_dec_ref_known(v_x_389_, 2);
return v_head_393_;
}
else
{
lean_object* v_head_394_; lean_object* v___x_395_; 
lean_inc(v_tail_392_);
v_head_394_ = lean_ctor_get(v_x_389_, 0);
lean_inc(v_head_394_);
lean_dec_ref_known(v_x_389_, 2);
v___x_395_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0_spec__2_spec__3(v_x_390_, v_head_394_, v_tail_392_);
return v___x_395_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__0));
v___x_405_ = lean_string_length(v___x_404_);
return v___x_405_;
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__5, &l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__5_once, _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__5);
v___x_407_ = lean_nat_to_int(v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg(lean_object* v_x_412_){
_start:
{
lean_object* v_fst_413_; lean_object* v_snd_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_437_; 
v_fst_413_ = lean_ctor_get(v_x_412_, 0);
v_snd_414_ = lean_ctor_get(v_x_412_, 1);
v_isSharedCheck_437_ = !lean_is_exclusive(v_x_412_);
if (v_isSharedCheck_437_ == 0)
{
v___x_416_ = v_x_412_;
v_isShared_417_ = v_isSharedCheck_437_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_snd_414_);
lean_inc(v_fst_413_);
lean_dec(v_x_412_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_437_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_418_ = lean_unsigned_to_nat(0u);
v___x_419_ = l_Lean_Name_reprPrec(v_fst_413_, v___x_418_);
v___x_420_ = lean_box(0);
if (v_isShared_417_ == 0)
{
lean_ctor_set_tag(v___x_416_, 1);
lean_ctor_set(v___x_416_, 1, v___x_420_);
lean_ctor_set(v___x_416_, 0, v___x_419_);
v___x_422_ = v___x_416_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_419_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v___x_420_);
v___x_422_ = v_reuseFailAlloc_436_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; lean_object* v___x_435_; 
v___x_423_ = l_Lean_instReprDataValue_repr(v_snd_414_, v___x_418_);
v___x_424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
lean_ctor_set(v___x_424_, 1, v___x_422_);
v___x_425_ = l_List_reverse___redArg(v___x_424_);
v___x_426_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__3));
v___x_427_ = l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0_spec__2(v___x_425_, v___x_426_);
v___x_428_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__6, &l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__6_once, _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__6);
v___x_429_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__7));
v___x_430_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v___x_427_);
v___x_431_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__8));
v___x_432_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_430_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_428_);
lean_ctor_set(v___x_433_, 1, v___x_432_);
v___x_434_ = 0;
v___x_435_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_435_, 0, v___x_433_);
lean_ctor_set_uint8(v___x_435_, sizeof(void*)*1, v___x_434_);
return v___x_435_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__1_spec__4_spec__6(lean_object* v_x_438_, lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
if (lean_obj_tag(v_x_440_) == 0)
{
lean_dec(v_x_438_);
return v_x_439_;
}
else
{
lean_object* v_head_441_; lean_object* v_tail_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_452_; 
v_head_441_ = lean_ctor_get(v_x_440_, 0);
v_tail_442_ = lean_ctor_get(v_x_440_, 1);
v_isSharedCheck_452_ = !lean_is_exclusive(v_x_440_);
if (v_isSharedCheck_452_ == 0)
{
v___x_444_ = v_x_440_;
v_isShared_445_ = v_isSharedCheck_452_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_tail_442_);
lean_inc(v_head_441_);
lean_dec(v_x_440_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_452_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
lean_inc(v_x_438_);
if (v_isShared_445_ == 0)
{
lean_ctor_set_tag(v___x_444_, 5);
lean_ctor_set(v___x_444_, 1, v_x_438_);
lean_ctor_set(v___x_444_, 0, v_x_439_);
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_x_439_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_x_438_);
v___x_447_ = v_reuseFailAlloc_451_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg(v_head_441_);
v___x_449_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_449_, 0, v___x_447_);
lean_ctor_set(v___x_449_, 1, v___x_448_);
v_x_439_ = v___x_449_;
v_x_440_ = v_tail_442_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__1_spec__4(lean_object* v_x_453_, lean_object* v_x_454_, lean_object* v_x_455_){
_start:
{
if (lean_obj_tag(v_x_455_) == 0)
{
lean_dec(v_x_453_);
return v_x_454_;
}
else
{
lean_object* v_head_456_; lean_object* v_tail_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_467_; 
v_head_456_ = lean_ctor_get(v_x_455_, 0);
v_tail_457_ = lean_ctor_get(v_x_455_, 1);
v_isSharedCheck_467_ = !lean_is_exclusive(v_x_455_);
if (v_isSharedCheck_467_ == 0)
{
v___x_459_ = v_x_455_;
v_isShared_460_ = v_isSharedCheck_467_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_tail_457_);
lean_inc(v_head_456_);
lean_dec(v_x_455_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_467_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
lean_inc(v_x_453_);
if (v_isShared_460_ == 0)
{
lean_ctor_set_tag(v___x_459_, 5);
lean_ctor_set(v___x_459_, 1, v_x_453_);
lean_ctor_set(v___x_459_, 0, v_x_454_);
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_x_454_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_x_453_);
v___x_462_ = v_reuseFailAlloc_466_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_463_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg(v_head_456_);
v___x_464_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__1_spec__4_spec__6(v_x_453_, v___x_464_, v_tail_457_);
return v___x_465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__1(lean_object* v_x_468_, lean_object* v_x_469_){
_start:
{
if (lean_obj_tag(v_x_468_) == 0)
{
lean_object* v___x_470_; 
lean_dec(v_x_469_);
v___x_470_ = lean_box(0);
return v___x_470_;
}
else
{
lean_object* v_tail_471_; 
v_tail_471_ = lean_ctor_get(v_x_468_, 1);
if (lean_obj_tag(v_tail_471_) == 0)
{
lean_object* v_head_472_; lean_object* v___x_473_; 
lean_dec(v_x_469_);
v_head_472_ = lean_ctor_get(v_x_468_, 0);
lean_inc(v_head_472_);
lean_dec_ref_known(v_x_468_, 2);
v___x_473_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg(v_head_472_);
return v___x_473_;
}
else
{
lean_object* v_head_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
lean_inc(v_tail_471_);
v_head_474_ = lean_ctor_get(v_x_468_, 0);
lean_inc(v_head_474_);
lean_dec_ref_known(v_x_468_, 2);
v___x_475_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg(v_head_474_);
v___x_476_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__1_spec__4(v_x_469_, v___x_475_, v_tail_471_);
return v___x_476_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = ((lean_object*)(l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__2));
v___x_483_ = lean_string_length(v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_obj_once(&l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__4, &l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__4_once, _init_l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__4);
v___x_485_ = lean_nat_to_int(v___x_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg(lean_object* v_a_490_){
_start:
{
if (lean_obj_tag(v_a_490_) == 0)
{
lean_object* v___x_491_; 
v___x_491_ = ((lean_object*)(l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__1));
return v___x_491_;
}
else
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; uint8_t v___x_500_; lean_object* v___x_501_; 
v___x_492_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg___closed__3));
v___x_493_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__1(v_a_490_, v___x_492_);
v___x_494_ = lean_obj_once(&l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__5, &l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__5_once, _init_l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__5);
v___x_495_ = ((lean_object*)(l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__6));
v___x_496_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
lean_ctor_set(v___x_496_, 1, v___x_493_);
v___x_497_ = ((lean_object*)(l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg___closed__7));
v___x_498_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_496_);
lean_ctor_set(v___x_498_, 1, v___x_497_);
v___x_499_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_494_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v___x_500_ = 0;
v___x_501_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_501_, 0, v___x_499_);
lean_ctor_set_uint8(v___x_501_, sizeof(void*)*1, v___x_500_);
return v___x_501_;
}
}
}
static lean_object* _init_l_Lean_instReprKVMap_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_unsigned_to_nat(11u);
v___x_516_ = lean_nat_to_int(v___x_515_);
return v___x_516_;
}
}
static lean_object* _init_l_Lean_instReprKVMap_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = ((lean_object*)(l_Lean_instReprKVMap_repr___redArg___closed__0));
v___x_519_ = lean_string_length(v___x_518_);
return v___x_519_;
}
}
static lean_object* _init_l_Lean_instReprKVMap_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = lean_obj_once(&l_Lean_instReprKVMap_repr___redArg___closed__9, &l_Lean_instReprKVMap_repr___redArg___closed__9_once, _init_l_Lean_instReprKVMap_repr___redArg___closed__9);
v___x_521_ = lean_nat_to_int(v___x_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprKVMap_repr___redArg(lean_object* v_x_526_){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; uint8_t v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_527_ = ((lean_object*)(l_Lean_instReprKVMap_repr___redArg___closed__6));
v___x_528_ = lean_obj_once(&l_Lean_instReprKVMap_repr___redArg___closed__7, &l_Lean_instReprKVMap_repr___redArg___closed__7_once, _init_l_Lean_instReprKVMap_repr___redArg___closed__7);
v___x_529_ = l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg(v_x_526_);
v___x_530_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = 0;
v___x_532_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_532_, 0, v___x_530_);
lean_ctor_set_uint8(v___x_532_, sizeof(void*)*1, v___x_531_);
v___x_533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_527_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = lean_obj_once(&l_Lean_instReprKVMap_repr___redArg___closed__10, &l_Lean_instReprKVMap_repr___redArg___closed__10_once, _init_l_Lean_instReprKVMap_repr___redArg___closed__10);
v___x_535_ = ((lean_object*)(l_Lean_instReprKVMap_repr___redArg___closed__11));
v___x_536_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
lean_ctor_set(v___x_536_, 1, v___x_533_);
v___x_537_ = ((lean_object*)(l_Lean_instReprKVMap_repr___redArg___closed__12));
v___x_538_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_536_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_534_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_540_, 0, v___x_539_);
lean_ctor_set_uint8(v___x_540_, sizeof(void*)*1, v___x_531_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprKVMap_repr(lean_object* v_x_541_, lean_object* v_prec_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l_Lean_instReprKVMap_repr___redArg(v_x_541_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprKVMap_repr___boxed(lean_object* v_x_544_, lean_object* v_prec_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_instReprKVMap_repr(v_x_544_, v_prec_545_);
lean_dec(v_prec_545_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0(lean_object* v_a_547_, lean_object* v_n_548_){
_start:
{
lean_object* v___x_549_; 
v___x_549_ = l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___redArg(v_a_547_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprKVMap_repr_spec__0___boxed(lean_object* v_a_550_, lean_object* v_n_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_List_repr___at___00Lean_instReprKVMap_repr_spec__0(v_a_550_, v_n_551_);
lean_dec(v_n_551_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0(lean_object* v_x_553_, lean_object* v_x_554_){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___redArg(v_x_553_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0___boxed(lean_object* v_x_556_, lean_object* v_x_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprKVMap_repr_spec__0_spec__0(v_x_556_, v_x_557_);
lean_dec(v_x_557_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instToString___lam__0(lean_object* v___f_561_, lean_object* v_m_562_){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = l_List_toString___redArg(v___f_561_, v_m_562_);
return v___x_563_;
}
}
static lean_object* _init_l_Lean_KVMap_empty(void){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = lean_box(0);
return v___x_571_;
}
}
LEAN_EXPORT uint8_t l_Lean_KVMap_isEmpty(lean_object* v_x_572_){
_start:
{
uint8_t v___x_573_; 
v___x_573_ = l_List_isEmpty___redArg(v_x_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_isEmpty___boxed(lean_object* v_x_574_){
_start:
{
uint8_t v_res_575_; lean_object* v_r_576_; 
v_res_575_ = l_Lean_KVMap_isEmpty(v_x_574_);
lean_dec(v_x_574_);
v_r_576_ = lean_box(v_res_575_);
return v_r_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_size(lean_object* v_m_577_){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = l_List_lengthTR___redArg(v_m_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_size___boxed(lean_object* v_m_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l_Lean_KVMap_size(v_m_579_);
lean_dec(v_m_579_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_findCore(lean_object* v_x_581_, lean_object* v_x_582_){
_start:
{
if (lean_obj_tag(v_x_581_) == 0)
{
lean_object* v___x_583_; 
v___x_583_ = lean_box(0);
return v___x_583_;
}
else
{
lean_object* v_head_584_; lean_object* v_tail_585_; lean_object* v_fst_586_; lean_object* v_snd_587_; uint8_t v___x_588_; 
v_head_584_ = lean_ctor_get(v_x_581_, 0);
v_tail_585_ = lean_ctor_get(v_x_581_, 1);
v_fst_586_ = lean_ctor_get(v_head_584_, 0);
v_snd_587_ = lean_ctor_get(v_head_584_, 1);
v___x_588_ = lean_name_eq(v_fst_586_, v_x_582_);
if (v___x_588_ == 0)
{
v_x_581_ = v_tail_585_;
goto _start;
}
else
{
lean_object* v___x_590_; 
lean_inc(v_snd_587_);
v___x_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_590_, 0, v_snd_587_);
return v___x_590_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_findCore___boxed(lean_object* v_x_591_, lean_object* v_x_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_KVMap_findCore(v_x_591_, v_x_592_);
lean_dec(v_x_592_);
lean_dec(v_x_591_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_find(lean_object* v_x_594_, lean_object* v_x_595_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lean_KVMap_findCore(v_x_594_, v_x_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_find___boxed(lean_object* v_x_597_, lean_object* v_x_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lean_KVMap_find(v_x_597_, v_x_598_);
lean_dec(v_x_598_);
lean_dec(v_x_597_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_findD(lean_object* v_m_600_, lean_object* v_k_601_, lean_object* v_d_u2080_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Lean_KVMap_findCore(v_m_600_, v_k_601_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_inc_ref(v_d_u2080_602_);
return v_d_u2080_602_;
}
else
{
lean_object* v_val_604_; 
v_val_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_val_604_);
lean_dec_ref_known(v___x_603_, 1);
return v_val_604_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_findD___boxed(lean_object* v_m_605_, lean_object* v_k_606_, lean_object* v_d_u2080_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lean_KVMap_findD(v_m_605_, v_k_606_, v_d_u2080_607_);
lean_dec_ref(v_d_u2080_607_);
lean_dec(v_k_606_);
lean_dec(v_m_605_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_insertCore(lean_object* v_x_609_, lean_object* v_x_610_, lean_object* v_x_611_){
_start:
{
if (lean_obj_tag(v_x_609_) == 0)
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_612_, 0, v_x_610_);
lean_ctor_set(v___x_612_, 1, v_x_611_);
v___x_613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
lean_ctor_set(v___x_613_, 1, v_x_609_);
return v___x_613_;
}
else
{
lean_object* v_head_614_; lean_object* v_tail_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_637_; 
v_head_614_ = lean_ctor_get(v_x_609_, 0);
v_tail_615_ = lean_ctor_get(v_x_609_, 1);
v_isSharedCheck_637_ = !lean_is_exclusive(v_x_609_);
if (v_isSharedCheck_637_ == 0)
{
v___x_617_ = v_x_609_;
v_isShared_618_ = v_isSharedCheck_637_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_tail_615_);
lean_inc(v_head_614_);
lean_dec(v_x_609_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_637_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v_fst_619_; uint8_t v___x_620_; 
v_fst_619_ = lean_ctor_get(v_head_614_, 0);
v___x_620_ = lean_name_eq(v_fst_619_, v_x_610_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_621_ = l_Lean_KVMap_insertCore(v_tail_615_, v_x_610_, v_x_611_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 1, v___x_621_);
v___x_623_ = v___x_617_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_head_614_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v___x_621_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
else
{
lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_634_; 
lean_inc(v_fst_619_);
lean_dec(v_x_610_);
v_isSharedCheck_634_ = !lean_is_exclusive(v_head_614_);
if (v_isSharedCheck_634_ == 0)
{
lean_object* v_unused_635_; lean_object* v_unused_636_; 
v_unused_635_ = lean_ctor_get(v_head_614_, 1);
lean_dec(v_unused_635_);
v_unused_636_ = lean_ctor_get(v_head_614_, 0);
lean_dec(v_unused_636_);
v___x_626_ = v_head_614_;
v_isShared_627_ = v_isSharedCheck_634_;
goto v_resetjp_625_;
}
else
{
lean_dec(v_head_614_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_634_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 1, v_x_611_);
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_fst_619_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v_x_611_);
v___x_629_ = v_reuseFailAlloc_633_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
lean_object* v___x_631_; 
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v___x_629_);
v___x_631_ = v___x_617_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_629_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_tail_615_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_insert(lean_object* v_x_638_, lean_object* v_x_639_, lean_object* v_x_640_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Lean_KVMap_insertCore(v_x_638_, v_x_639_, v_x_640_);
return v___x_641_;
}
}
LEAN_EXPORT uint8_t l_Lean_KVMap_contains(lean_object* v_m_642_, lean_object* v_n_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_KVMap_findCore(v_m_642_, v_n_643_);
if (lean_obj_tag(v___x_644_) == 0)
{
uint8_t v___x_645_; 
v___x_645_ = 0;
return v___x_645_;
}
else
{
uint8_t v___x_646_; 
lean_dec_ref_known(v___x_644_, 1);
v___x_646_ = 1;
return v___x_646_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_contains___boxed(lean_object* v_m_647_, lean_object* v_n_648_){
_start:
{
uint8_t v_res_649_; lean_object* v_r_650_; 
v_res_649_ = l_Lean_KVMap_contains(v_m_647_, v_n_648_);
lean_dec(v_n_648_);
lean_dec(v_m_647_);
v_r_650_ = lean_box(v_res_649_);
return v_r_650_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_KVMap_erase_spec__0(lean_object* v_x_651_, lean_object* v_a_652_, lean_object* v_a_653_){
_start:
{
if (lean_obj_tag(v_a_652_) == 0)
{
lean_object* v___x_654_; 
v___x_654_ = l_List_reverse___redArg(v_a_653_);
return v___x_654_;
}
else
{
lean_object* v_head_655_; lean_object* v_tail_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_667_; 
v_head_655_ = lean_ctor_get(v_a_652_, 0);
v_tail_656_ = lean_ctor_get(v_a_652_, 1);
v_isSharedCheck_667_ = !lean_is_exclusive(v_a_652_);
if (v_isSharedCheck_667_ == 0)
{
v___x_658_ = v_a_652_;
v_isShared_659_ = v_isSharedCheck_667_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_tail_656_);
lean_inc(v_head_655_);
lean_dec(v_a_652_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_667_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v_fst_660_; uint8_t v___x_661_; 
v_fst_660_ = lean_ctor_get(v_head_655_, 0);
v___x_661_ = lean_name_eq(v_fst_660_, v_x_651_);
if (v___x_661_ == 0)
{
lean_object* v___x_663_; 
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 1, v_a_653_);
v___x_663_ = v___x_658_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_head_655_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v_a_653_);
v___x_663_ = v_reuseFailAlloc_665_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
v_a_652_ = v_tail_656_;
v_a_653_ = v___x_663_;
goto _start;
}
}
else
{
lean_del_object(v___x_658_);
lean_dec(v_head_655_);
v_a_652_ = v_tail_656_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_KVMap_erase_spec__0___boxed(lean_object* v_x_668_, lean_object* v_a_669_, lean_object* v_a_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_List_filterTR_loop___at___00Lean_KVMap_erase_spec__0(v_x_668_, v_a_669_, v_a_670_);
lean_dec(v_x_668_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_erase(lean_object* v_x_672_, lean_object* v_x_673_){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = lean_box(0);
v___x_675_ = l_List_filterTR_loop___at___00Lean_KVMap_erase_spec__0(v_x_673_, v_x_672_, v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_erase___boxed(lean_object* v_x_676_, lean_object* v_x_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lean_KVMap_erase(v_x_676_, v_x_677_);
lean_dec(v_x_677_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_getString(lean_object* v_m_679_, lean_object* v_k_680_, lean_object* v_defVal_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l_Lean_KVMap_findCore(v_m_679_, v_k_680_);
if (lean_obj_tag(v___x_682_) == 1)
{
lean_object* v_val_683_; 
v_val_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_val_683_);
lean_dec_ref_known(v___x_682_, 1);
if (lean_obj_tag(v_val_683_) == 0)
{
lean_object* v_v_684_; 
v_v_684_ = lean_ctor_get(v_val_683_, 0);
lean_inc_ref(v_v_684_);
lean_dec_ref_known(v_val_683_, 1);
return v_v_684_;
}
else
{
lean_dec(v_val_683_);
lean_inc_ref(v_defVal_681_);
return v_defVal_681_;
}
}
else
{
lean_dec(v___x_682_);
lean_inc_ref(v_defVal_681_);
return v_defVal_681_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_getString___boxed(lean_object* v_m_685_, lean_object* v_k_686_, lean_object* v_defVal_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lean_KVMap_getString(v_m_685_, v_k_686_, v_defVal_687_);
lean_dec_ref(v_defVal_687_);
lean_dec(v_k_686_);
lean_dec(v_m_685_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_getNat(lean_object* v_m_689_, lean_object* v_k_690_, lean_object* v_defVal_691_){
_start:
{
lean_object* v___x_692_; 
v___x_692_ = l_Lean_KVMap_findCore(v_m_689_, v_k_690_);
if (lean_obj_tag(v___x_692_) == 1)
{
lean_object* v_val_693_; 
v_val_693_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_val_693_);
lean_dec_ref_known(v___x_692_, 1);
if (lean_obj_tag(v_val_693_) == 3)
{
lean_object* v_v_694_; 
v_v_694_ = lean_ctor_get(v_val_693_, 0);
lean_inc(v_v_694_);
lean_dec_ref_known(v_val_693_, 1);
return v_v_694_;
}
else
{
lean_dec(v_val_693_);
lean_inc(v_defVal_691_);
return v_defVal_691_;
}
}
else
{
lean_dec(v___x_692_);
lean_inc(v_defVal_691_);
return v_defVal_691_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_getNat___boxed(lean_object* v_m_695_, lean_object* v_k_696_, lean_object* v_defVal_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lean_KVMap_getNat(v_m_695_, v_k_696_, v_defVal_697_);
lean_dec(v_defVal_697_);
lean_dec(v_k_696_);
lean_dec(v_m_695_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_getInt(lean_object* v_m_699_, lean_object* v_k_700_, lean_object* v_defVal_701_){
_start:
{
lean_object* v___x_702_; 
v___x_702_ = l_Lean_KVMap_findCore(v_m_699_, v_k_700_);
if (lean_obj_tag(v___x_702_) == 1)
{
lean_object* v_val_703_; 
v_val_703_ = lean_ctor_get(v___x_702_, 0);
lean_inc(v_val_703_);
lean_dec_ref_known(v___x_702_, 1);
if (lean_obj_tag(v_val_703_) == 4)
{
lean_object* v_v_704_; 
v_v_704_ = lean_ctor_get(v_val_703_, 0);
lean_inc(v_v_704_);
lean_dec_ref_known(v_val_703_, 1);
return v_v_704_;
}
else
{
lean_dec(v_val_703_);
lean_inc(v_defVal_701_);
return v_defVal_701_;
}
}
else
{
lean_dec(v___x_702_);
lean_inc(v_defVal_701_);
return v_defVal_701_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_getInt___boxed(lean_object* v_m_705_, lean_object* v_k_706_, lean_object* v_defVal_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Lean_KVMap_getInt(v_m_705_, v_k_706_, v_defVal_707_);
lean_dec(v_defVal_707_);
lean_dec(v_k_706_);
lean_dec(v_m_705_);
return v_res_708_;
}
}
LEAN_EXPORT uint8_t l_Lean_KVMap_getBool(lean_object* v_m_709_, lean_object* v_k_710_, uint8_t v_defVal_711_){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = l_Lean_KVMap_findCore(v_m_709_, v_k_710_);
if (lean_obj_tag(v___x_712_) == 1)
{
lean_object* v_val_713_; 
v_val_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_val_713_);
lean_dec_ref_known(v___x_712_, 1);
if (lean_obj_tag(v_val_713_) == 1)
{
uint8_t v_v_714_; 
v_v_714_ = lean_ctor_get_uint8(v_val_713_, 0);
lean_dec_ref_known(v_val_713_, 0);
return v_v_714_;
}
else
{
lean_dec(v_val_713_);
return v_defVal_711_;
}
}
else
{
lean_dec(v___x_712_);
return v_defVal_711_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_getBool___boxed(lean_object* v_m_715_, lean_object* v_k_716_, lean_object* v_defVal_717_){
_start:
{
uint8_t v_defVal_boxed_718_; uint8_t v_res_719_; lean_object* v_r_720_; 
v_defVal_boxed_718_ = lean_unbox(v_defVal_717_);
v_res_719_ = l_Lean_KVMap_getBool(v_m_715_, v_k_716_, v_defVal_boxed_718_);
lean_dec(v_k_716_);
lean_dec(v_m_715_);
v_r_720_ = lean_box(v_res_719_);
return v_r_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_getName(lean_object* v_m_721_, lean_object* v_k_722_, lean_object* v_defVal_723_){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = l_Lean_KVMap_findCore(v_m_721_, v_k_722_);
if (lean_obj_tag(v___x_724_) == 1)
{
lean_object* v_val_725_; 
v_val_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_val_725_);
lean_dec_ref_known(v___x_724_, 1);
if (lean_obj_tag(v_val_725_) == 2)
{
lean_object* v_v_726_; 
v_v_726_ = lean_ctor_get(v_val_725_, 0);
lean_inc(v_v_726_);
lean_dec_ref_known(v_val_725_, 1);
return v_v_726_;
}
else
{
lean_dec(v_val_725_);
lean_inc(v_defVal_723_);
return v_defVal_723_;
}
}
else
{
lean_dec(v___x_724_);
lean_inc(v_defVal_723_);
return v_defVal_723_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_getName___boxed(lean_object* v_m_727_, lean_object* v_k_728_, lean_object* v_defVal_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l_Lean_KVMap_getName(v_m_727_, v_k_728_, v_defVal_729_);
lean_dec(v_defVal_729_);
lean_dec(v_k_728_);
lean_dec(v_m_727_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_getSyntax(lean_object* v_m_731_, lean_object* v_k_732_, lean_object* v_defVal_733_){
_start:
{
lean_object* v___x_734_; 
v___x_734_ = l_Lean_KVMap_findCore(v_m_731_, v_k_732_);
if (lean_obj_tag(v___x_734_) == 1)
{
lean_object* v_val_735_; 
v_val_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_val_735_);
lean_dec_ref_known(v___x_734_, 1);
if (lean_obj_tag(v_val_735_) == 5)
{
lean_object* v_v_736_; 
v_v_736_ = lean_ctor_get(v_val_735_, 0);
lean_inc(v_v_736_);
lean_dec_ref_known(v_val_735_, 1);
return v_v_736_;
}
else
{
lean_dec(v_val_735_);
lean_inc(v_defVal_733_);
return v_defVal_733_;
}
}
else
{
lean_dec(v___x_734_);
lean_inc(v_defVal_733_);
return v_defVal_733_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_getSyntax___boxed(lean_object* v_m_737_, lean_object* v_k_738_, lean_object* v_defVal_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lean_KVMap_getSyntax(v_m_737_, v_k_738_, v_defVal_739_);
lean_dec(v_defVal_739_);
lean_dec(v_k_738_);
lean_dec(v_m_737_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_setString(lean_object* v_m_741_, lean_object* v_k_742_, lean_object* v_v_743_){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_744_, 0, v_v_743_);
v___x_745_ = l_Lean_KVMap_insertCore(v_m_741_, v_k_742_, v___x_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_setNat(lean_object* v_m_746_, lean_object* v_k_747_, lean_object* v_v_748_){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_749_, 0, v_v_748_);
v___x_750_ = l_Lean_KVMap_insertCore(v_m_746_, v_k_747_, v___x_749_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_setInt(lean_object* v_m_751_, lean_object* v_k_752_, lean_object* v_v_753_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_754_, 0, v_v_753_);
v___x_755_ = l_Lean_KVMap_insertCore(v_m_751_, v_k_752_, v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_setBool(lean_object* v_m_756_, lean_object* v_k_757_, uint8_t v_v_758_){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_759_, 0, v_v_758_);
v___x_760_ = l_Lean_KVMap_insertCore(v_m_756_, v_k_757_, v___x_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_setBool___boxed(lean_object* v_m_761_, lean_object* v_k_762_, lean_object* v_v_763_){
_start:
{
uint8_t v_v_boxed_764_; lean_object* v_res_765_; 
v_v_boxed_764_ = lean_unbox(v_v_763_);
v_res_765_ = l_Lean_KVMap_setBool(v_m_761_, v_k_762_, v_v_boxed_764_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_setName(lean_object* v_m_766_, lean_object* v_k_767_, lean_object* v_v_768_){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_769_, 0, v_v_768_);
v___x_770_ = l_Lean_KVMap_insertCore(v_m_766_, v_k_767_, v___x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_setSyntax(lean_object* v_m_771_, lean_object* v_k_772_, lean_object* v_v_773_){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_774_, 0, v_v_773_);
v___x_775_ = l_Lean_KVMap_insertCore(v_m_771_, v_k_772_, v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_updateString(lean_object* v_m_776_, lean_object* v_k_777_, lean_object* v_f_778_){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_779_ = ((lean_object*)(l_Lean_instInhabitedDataValue_default___closed__0));
v___x_780_ = l_Lean_KVMap_getString(v_m_776_, v_k_777_, v___x_779_);
v___x_781_ = lean_apply_1(v_f_778_, v___x_780_);
v___x_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_782_, 0, v___x_781_);
v___x_783_ = l_Lean_KVMap_insertCore(v_m_776_, v_k_777_, v___x_782_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_updateNat(lean_object* v_m_784_, lean_object* v_k_785_, lean_object* v_f_786_){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = l_Lean_KVMap_getNat(v_m_784_, v_k_785_, v___x_787_);
v___x_789_ = lean_apply_1(v_f_786_, v___x_788_);
v___x_790_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
v___x_791_ = l_Lean_KVMap_insertCore(v_m_784_, v_k_785_, v___x_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_updateInt(lean_object* v_m_792_, lean_object* v_k_793_, lean_object* v_f_794_){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_795_ = lean_obj_once(&l_Lean_instReprDataValue_repr___closed__17, &l_Lean_instReprDataValue_repr___closed__17_once, _init_l_Lean_instReprDataValue_repr___closed__17);
v___x_796_ = l_Lean_KVMap_getInt(v_m_792_, v_k_793_, v___x_795_);
v___x_797_ = lean_apply_1(v_f_794_, v___x_796_);
v___x_798_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
v___x_799_ = l_Lean_KVMap_insertCore(v_m_792_, v_k_793_, v___x_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_updateBool(lean_object* v_m_800_, lean_object* v_k_801_, lean_object* v_f_802_){
_start:
{
uint8_t v___x_803_; uint8_t v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; uint8_t v___x_808_; lean_object* v___x_809_; 
v___x_803_ = 0;
v___x_804_ = l_Lean_KVMap_getBool(v_m_800_, v_k_801_, v___x_803_);
v___x_805_ = lean_box(v___x_804_);
v___x_806_ = lean_apply_1(v_f_802_, v___x_805_);
v___x_807_ = lean_alloc_ctor(1, 0, 1);
v___x_808_ = lean_unbox(v___x_806_);
lean_ctor_set_uint8(v___x_807_, 0, v___x_808_);
v___x_809_ = l_Lean_KVMap_insertCore(v_m_800_, v_k_801_, v___x_807_);
return v___x_809_;
}
}
static lean_object* _init_l_Lean_KVMap_updateName___closed__0(void){
_start:
{
lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_810_ = lean_box(0);
v___x_811_ = l_unsafeCast___redArg(v___x_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_updateName(lean_object* v_m_812_, lean_object* v_k_813_, lean_object* v_f_814_){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_815_ = lean_obj_once(&l_Lean_KVMap_updateName___closed__0, &l_Lean_KVMap_updateName___closed__0_once, _init_l_Lean_KVMap_updateName___closed__0);
v___x_816_ = l_Lean_KVMap_getName(v_m_812_, v_k_813_, v___x_815_);
v___x_817_ = lean_apply_1(v_f_814_, v___x_816_);
v___x_818_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_818_, 0, v___x_817_);
v___x_819_ = l_Lean_KVMap_insertCore(v_m_812_, v_k_813_, v___x_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_updateSyntax(lean_object* v_m_820_, lean_object* v_k_821_, lean_object* v_f_822_){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_823_ = lean_box(0);
v___x_824_ = l_Lean_KVMap_getSyntax(v_m_820_, v_k_821_, v___x_823_);
v___x_825_ = lean_apply_1(v_f_822_, v___x_824_);
v___x_826_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_826_, 0, v___x_825_);
v___x_827_ = l_Lean_KVMap_insertCore(v_m_820_, v_k_821_, v___x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_forIn___redArg___lam__0(lean_object* v_f_828_, lean_object* v_a_829_, lean_object* v_x_830_, lean_object* v___y_831_){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = lean_apply_2(v_f_828_, v_a_829_, v___y_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_forIn___redArg(lean_object* v_inst_833_, lean_object* v_kv_834_, lean_object* v_init_835_, lean_object* v_f_836_){
_start:
{
lean_object* v___f_837_; lean_object* v___x_838_; 
v___f_837_ = lean_alloc_closure((void*)(l_Lean_KVMap_forIn___redArg___lam__0), 4, 1);
lean_closure_set(v___f_837_, 0, v_f_836_);
v___x_838_ = l_List_forIn_x27_loop___redArg(v_inst_833_, v___f_837_, v_kv_834_, v_init_835_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_forIn___redArg___boxed(lean_object* v_inst_839_, lean_object* v_kv_840_, lean_object* v_init_841_, lean_object* v_f_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lean_KVMap_forIn___redArg(v_inst_839_, v_kv_840_, v_init_841_, v_f_842_);
lean_dec(v_kv_840_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_forIn(lean_object* v_00_u03b4_844_, lean_object* v_m_845_, lean_object* v_inst_846_, lean_object* v_kv_847_, lean_object* v_init_848_, lean_object* v_f_849_){
_start:
{
lean_object* v___f_850_; lean_object* v___x_851_; 
v___f_850_ = lean_alloc_closure((void*)(l_Lean_KVMap_forIn___redArg___lam__0), 4, 1);
lean_closure_set(v___f_850_, 0, v_f_849_);
v___x_851_ = l_List_forIn_x27_loop___redArg(v_inst_846_, v___f_850_, v_kv_847_, v_init_848_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_forIn___boxed(lean_object* v_00_u03b4_852_, lean_object* v_m_853_, lean_object* v_inst_854_, lean_object* v_kv_855_, lean_object* v_init_856_, lean_object* v_f_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lean_KVMap_forIn(v_00_u03b4_852_, v_m_853_, v_inst_854_, v_kv_855_, v_init_856_, v_f_857_);
lean_dec(v_kv_855_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg___lam__0(lean_object* v___y_859_, lean_object* v_a_860_, lean_object* v_x_861_, lean_object* v___y_862_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = lean_apply_2(v___y_859_, v_a_860_, v___y_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg___lam__1(lean_object* v_inst_864_, lean_object* v_00_u03b2_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_){
_start:
{
lean_object* v___f_869_; lean_object* v___x_870_; 
v___f_869_ = lean_alloc_closure((void*)(l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_869_, 0, v___y_868_);
v___x_870_ = l_List_forIn_x27_loop___redArg(v_inst_864_, v___f_869_, v___y_866_, v___y_867_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg___lam__1___boxed(lean_object* v_inst_871_, lean_object* v_00_u03b2_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg___lam__1(v_inst_871_, v_00_u03b2_872_, v___y_873_, v___y_874_, v___y_875_);
lean_dec(v___y_873_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg(lean_object* v_inst_877_){
_start:
{
lean_object* v___f_878_; 
v___f_878_ = lean_alloc_closure((void*)(l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_878_, 0, v_inst_877_);
return v___f_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instForInProdNameDataValueOfMonad(lean_object* v_m_879_, lean_object* v_inst_880_){
_start:
{
lean_object* v___f_881_; 
v___f_881_ = lean_alloc_closure((void*)(l_Lean_KVMap_instForInProdNameDataValueOfMonad___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_881_, 0, v_inst_880_);
return v___f_881_;
}
}
LEAN_EXPORT uint8_t l_Lean_KVMap_subsetAux(lean_object* v_x_882_, lean_object* v_x_883_){
_start:
{
if (lean_obj_tag(v_x_882_) == 0)
{
uint8_t v___x_884_; 
v___x_884_ = 1;
return v___x_884_;
}
else
{
lean_object* v_head_885_; lean_object* v_tail_886_; lean_object* v_fst_887_; lean_object* v_snd_888_; lean_object* v___x_889_; 
v_head_885_ = lean_ctor_get(v_x_882_, 0);
v_tail_886_ = lean_ctor_get(v_x_882_, 1);
v_fst_887_ = lean_ctor_get(v_head_885_, 0);
v_snd_888_ = lean_ctor_get(v_head_885_, 1);
v___x_889_ = l_Lean_KVMap_findCore(v_x_883_, v_fst_887_);
if (lean_obj_tag(v___x_889_) == 0)
{
uint8_t v___x_890_; 
v___x_890_ = 0;
return v___x_890_;
}
else
{
lean_object* v_val_891_; uint8_t v___x_892_; 
v_val_891_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_val_891_);
lean_dec_ref_known(v___x_889_, 1);
v___x_892_ = l_Lean_instBEqDataValue_beq(v_snd_888_, v_val_891_);
lean_dec(v_val_891_);
if (v___x_892_ == 0)
{
return v___x_892_;
}
else
{
v_x_882_ = v_tail_886_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_subsetAux___boxed(lean_object* v_x_894_, lean_object* v_x_895_){
_start:
{
uint8_t v_res_896_; lean_object* v_r_897_; 
v_res_896_ = l_Lean_KVMap_subsetAux(v_x_894_, v_x_895_);
lean_dec(v_x_895_);
lean_dec(v_x_894_);
v_r_897_ = lean_box(v_res_896_);
return v_r_897_;
}
}
LEAN_EXPORT uint8_t l_Lean_KVMap_subset(lean_object* v_x_898_, lean_object* v_x_899_){
_start:
{
uint8_t v___x_900_; 
v___x_900_ = l_Lean_KVMap_subsetAux(v_x_898_, v_x_899_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_subset___boxed(lean_object* v_x_901_, lean_object* v_x_902_){
_start:
{
uint8_t v_res_903_; lean_object* v_r_904_; 
v_res_903_ = l_Lean_KVMap_subset(v_x_901_, v_x_902_);
lean_dec(v_x_902_);
lean_dec(v_x_901_);
v_r_904_ = lean_box(v_res_903_);
return v_r_904_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0___redArg(lean_object* v_mergeFn_905_, lean_object* v_as_x27_906_, lean_object* v_b_907_){
_start:
{
if (lean_obj_tag(v_as_x27_906_) == 0)
{
lean_dec_ref(v_mergeFn_905_);
return v_b_907_;
}
else
{
lean_object* v_head_908_; lean_object* v_tail_909_; lean_object* v_fst_910_; lean_object* v_snd_911_; lean_object* v___x_912_; 
v_head_908_ = lean_ctor_get(v_as_x27_906_, 0);
v_tail_909_ = lean_ctor_get(v_as_x27_906_, 1);
v_fst_910_ = lean_ctor_get(v_head_908_, 0);
v_snd_911_ = lean_ctor_get(v_head_908_, 1);
v___x_912_ = l_Lean_KVMap_findCore(v_b_907_, v_fst_910_);
if (lean_obj_tag(v___x_912_) == 1)
{
lean_object* v_val_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v_val_913_ = lean_ctor_get(v___x_912_, 0);
lean_inc(v_val_913_);
lean_dec_ref_known(v___x_912_, 1);
lean_inc_ref(v_mergeFn_905_);
lean_inc(v_snd_911_);
lean_inc_n(v_fst_910_, 2);
v___x_914_ = lean_apply_3(v_mergeFn_905_, v_fst_910_, v_val_913_, v_snd_911_);
v___x_915_ = l_Lean_KVMap_insertCore(v_b_907_, v_fst_910_, v___x_914_);
v_as_x27_906_ = v_tail_909_;
v_b_907_ = v___x_915_;
goto _start;
}
else
{
lean_object* v___x_917_; 
lean_dec(v___x_912_);
lean_inc(v_snd_911_);
lean_inc(v_fst_910_);
v___x_917_ = l_Lean_KVMap_insertCore(v_b_907_, v_fst_910_, v_snd_911_);
v_as_x27_906_ = v_tail_909_;
v_b_907_ = v___x_917_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0___redArg___boxed(lean_object* v_mergeFn_919_, lean_object* v_as_x27_920_, lean_object* v_b_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0___redArg(v_mergeFn_919_, v_as_x27_920_, v_b_921_);
lean_dec(v_as_x27_920_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_mergeBy(lean_object* v_mergeFn_923_, lean_object* v_l_924_, lean_object* v_r_925_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0___redArg(v_mergeFn_923_, v_r_925_, v_l_924_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_mergeBy___boxed(lean_object* v_mergeFn_927_, lean_object* v_l_928_, lean_object* v_r_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lean_KVMap_mergeBy(v_mergeFn_927_, v_l_928_, v_r_929_);
lean_dec(v_r_929_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0(lean_object* v_mergeFn_931_, lean_object* v_as_932_, lean_object* v_as_x27_933_, lean_object* v_b_934_, lean_object* v_a_935_){
_start:
{
lean_object* v___x_936_; 
v___x_936_ = l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0___redArg(v_mergeFn_931_, v_as_x27_933_, v_b_934_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0___boxed(lean_object* v_mergeFn_937_, lean_object* v_as_938_, lean_object* v_as_x27_939_, lean_object* v_b_940_, lean_object* v_a_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_List_forIn_x27_loop___at___00Lean_KVMap_mergeBy_spec__0(v_mergeFn_937_, v_as_938_, v_as_x27_939_, v_b_940_, v_a_941_);
lean_dec(v_as_x27_939_);
lean_dec(v_as_938_);
return v_res_942_;
}
}
LEAN_EXPORT uint8_t l_Lean_KVMap_eqv(lean_object* v_m_u2081_943_, lean_object* v_m_u2082_944_){
_start:
{
uint8_t v___x_945_; 
v___x_945_ = l_Lean_KVMap_subsetAux(v_m_u2081_943_, v_m_u2082_944_);
if (v___x_945_ == 0)
{
return v___x_945_;
}
else
{
uint8_t v___x_946_; 
v___x_946_ = l_Lean_KVMap_subsetAux(v_m_u2082_944_, v_m_u2081_943_);
return v___x_946_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_eqv___boxed(lean_object* v_m_u2081_947_, lean_object* v_m_u2082_948_){
_start:
{
uint8_t v_res_949_; lean_object* v_r_950_; 
v_res_949_ = l_Lean_KVMap_eqv(v_m_u2081_947_, v_m_u2082_948_);
lean_dec(v_m_u2082_948_);
lean_dec(v_m_u2081_947_);
v_r_950_ = lean_box(v_res_949_);
return v_r_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_get_x3f___redArg(lean_object* v_inst_953_, lean_object* v_m_954_, lean_object* v_k_955_){
_start:
{
lean_object* v_ofDataValue_x3f_956_; lean_object* v___x_957_; 
v_ofDataValue_x3f_956_ = lean_ctor_get(v_inst_953_, 1);
lean_inc_ref(v_ofDataValue_x3f_956_);
lean_dec_ref(v_inst_953_);
v___x_957_ = l_Lean_KVMap_findCore(v_m_954_, v_k_955_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v___x_958_; 
lean_dec_ref(v_ofDataValue_x3f_956_);
v___x_958_ = lean_box(0);
return v___x_958_;
}
else
{
lean_object* v_val_959_; lean_object* v___x_960_; 
v_val_959_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_val_959_);
lean_dec_ref_known(v___x_957_, 1);
v___x_960_ = lean_apply_1(v_ofDataValue_x3f_956_, v_val_959_);
return v___x_960_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_get_x3f___redArg___boxed(lean_object* v_inst_961_, lean_object* v_m_962_, lean_object* v_k_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lean_KVMap_get_x3f___redArg(v_inst_961_, v_m_962_, v_k_963_);
lean_dec(v_k_963_);
lean_dec(v_m_962_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_get_x3f(lean_object* v_00_u03b1_965_, lean_object* v_inst_966_, lean_object* v_m_967_, lean_object* v_k_968_){
_start:
{
lean_object* v_ofDataValue_x3f_969_; lean_object* v___x_970_; 
v_ofDataValue_x3f_969_ = lean_ctor_get(v_inst_966_, 1);
lean_inc_ref(v_ofDataValue_x3f_969_);
lean_dec_ref(v_inst_966_);
v___x_970_ = l_Lean_KVMap_findCore(v_m_967_, v_k_968_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v___x_971_; 
lean_dec_ref(v_ofDataValue_x3f_969_);
v___x_971_ = lean_box(0);
return v___x_971_;
}
else
{
lean_object* v_val_972_; lean_object* v___x_973_; 
v_val_972_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_val_972_);
lean_dec_ref_known(v___x_970_, 1);
v___x_973_ = lean_apply_1(v_ofDataValue_x3f_969_, v_val_972_);
return v___x_973_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_get_x3f___boxed(lean_object* v_00_u03b1_974_, lean_object* v_inst_975_, lean_object* v_m_976_, lean_object* v_k_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lean_KVMap_get_x3f(v_00_u03b1_974_, v_inst_975_, v_m_976_, v_k_977_);
lean_dec(v_k_977_);
lean_dec(v_m_976_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_get___redArg(lean_object* v_inst_979_, lean_object* v_m_980_, lean_object* v_k_981_, lean_object* v_defVal_982_){
_start:
{
lean_object* v_ofDataValue_x3f_983_; lean_object* v___x_984_; 
v_ofDataValue_x3f_983_ = lean_ctor_get(v_inst_979_, 1);
lean_inc_ref(v_ofDataValue_x3f_983_);
lean_dec_ref(v_inst_979_);
v___x_984_ = l_Lean_KVMap_findCore(v_m_980_, v_k_981_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_dec_ref(v_ofDataValue_x3f_983_);
lean_inc(v_defVal_982_);
return v_defVal_982_;
}
else
{
lean_object* v_val_985_; lean_object* v___x_986_; 
v_val_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_val_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = lean_apply_1(v_ofDataValue_x3f_983_, v_val_985_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_inc(v_defVal_982_);
return v_defVal_982_;
}
else
{
lean_object* v_val_987_; 
v_val_987_ = lean_ctor_get(v___x_986_, 0);
lean_inc(v_val_987_);
lean_dec_ref_known(v___x_986_, 1);
return v_val_987_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_get___redArg___boxed(lean_object* v_inst_988_, lean_object* v_m_989_, lean_object* v_k_990_, lean_object* v_defVal_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lean_KVMap_get___redArg(v_inst_988_, v_m_989_, v_k_990_, v_defVal_991_);
lean_dec(v_defVal_991_);
lean_dec(v_k_990_);
lean_dec(v_m_989_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_get(lean_object* v_00_u03b1_993_, lean_object* v_inst_994_, lean_object* v_m_995_, lean_object* v_k_996_, lean_object* v_defVal_997_){
_start:
{
lean_object* v_ofDataValue_x3f_998_; lean_object* v___x_999_; 
v_ofDataValue_x3f_998_ = lean_ctor_get(v_inst_994_, 1);
lean_inc_ref(v_ofDataValue_x3f_998_);
lean_dec_ref(v_inst_994_);
v___x_999_ = l_Lean_KVMap_findCore(v_m_995_, v_k_996_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_dec_ref(v_ofDataValue_x3f_998_);
lean_inc(v_defVal_997_);
return v_defVal_997_;
}
else
{
lean_object* v_val_1000_; lean_object* v___x_1001_; 
v_val_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_val_1000_);
lean_dec_ref_known(v___x_999_, 1);
v___x_1001_ = lean_apply_1(v_ofDataValue_x3f_998_, v_val_1000_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_inc(v_defVal_997_);
return v_defVal_997_;
}
else
{
lean_object* v_val_1002_; 
v_val_1002_ = lean_ctor_get(v___x_1001_, 0);
lean_inc(v_val_1002_);
lean_dec_ref_known(v___x_1001_, 1);
return v_val_1002_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_get___boxed(lean_object* v_00_u03b1_1003_, lean_object* v_inst_1004_, lean_object* v_m_1005_, lean_object* v_k_1006_, lean_object* v_defVal_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lean_KVMap_get(v_00_u03b1_1003_, v_inst_1004_, v_m_1005_, v_k_1006_, v_defVal_1007_);
lean_dec(v_defVal_1007_);
lean_dec(v_k_1006_);
lean_dec(v_m_1005_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_set___redArg(lean_object* v_inst_1009_, lean_object* v_m_1010_, lean_object* v_k_1011_, lean_object* v_v_1012_){
_start:
{
lean_object* v_toDataValue_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_toDataValue_1013_ = lean_ctor_get(v_inst_1009_, 0);
lean_inc_ref(v_toDataValue_1013_);
lean_dec_ref(v_inst_1009_);
v___x_1014_ = lean_apply_1(v_toDataValue_1013_, v_v_1012_);
v___x_1015_ = l_Lean_KVMap_insertCore(v_m_1010_, v_k_1011_, v___x_1014_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_set(lean_object* v_00_u03b1_1016_, lean_object* v_inst_1017_, lean_object* v_m_1018_, lean_object* v_k_1019_, lean_object* v_v_1020_){
_start:
{
lean_object* v_toDataValue_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v_toDataValue_1021_ = lean_ctor_get(v_inst_1017_, 0);
lean_inc_ref(v_toDataValue_1021_);
lean_dec_ref(v_inst_1017_);
v___x_1022_ = lean_apply_1(v_toDataValue_1021_, v_v_1020_);
v___x_1023_ = l_Lean_KVMap_insertCore(v_m_1018_, v_k_1019_, v___x_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_update___redArg(lean_object* v_inst_1024_, lean_object* v_m_1025_, lean_object* v_k_1026_, lean_object* v_f_1027_){
_start:
{
lean_object* v_toDataValue_1028_; lean_object* v_ofDataValue_x3f_1029_; lean_object* v___y_1031_; lean_object* v___x_1037_; 
v_toDataValue_1028_ = lean_ctor_get(v_inst_1024_, 0);
lean_inc_ref(v_toDataValue_1028_);
v_ofDataValue_x3f_1029_ = lean_ctor_get(v_inst_1024_, 1);
lean_inc_ref(v_ofDataValue_x3f_1029_);
lean_dec_ref(v_inst_1024_);
v___x_1037_ = l_Lean_KVMap_findCore(v_m_1025_, v_k_1026_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v___x_1038_; 
lean_dec_ref(v_ofDataValue_x3f_1029_);
v___x_1038_ = lean_box(0);
v___y_1031_ = v___x_1038_;
goto v___jp_1030_;
}
else
{
lean_object* v_val_1039_; lean_object* v___x_1040_; 
v_val_1039_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_val_1039_);
lean_dec_ref_known(v___x_1037_, 1);
v___x_1040_ = lean_apply_1(v_ofDataValue_x3f_1029_, v_val_1039_);
v___y_1031_ = v___x_1040_;
goto v___jp_1030_;
}
v___jp_1030_:
{
lean_object* v___x_1032_; 
v___x_1032_ = lean_apply_1(v_f_1027_, v___y_1031_);
if (lean_obj_tag(v___x_1032_) == 0)
{
lean_object* v___x_1033_; 
lean_dec_ref(v_toDataValue_1028_);
v___x_1033_ = l_Lean_KVMap_erase(v_m_1025_, v_k_1026_);
lean_dec(v_k_1026_);
return v___x_1033_;
}
else
{
lean_object* v_val_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v_val_1034_ = lean_ctor_get(v___x_1032_, 0);
lean_inc(v_val_1034_);
lean_dec_ref_known(v___x_1032_, 1);
v___x_1035_ = lean_apply_1(v_toDataValue_1028_, v_val_1034_);
v___x_1036_ = l_Lean_KVMap_insertCore(v_m_1025_, v_k_1026_, v___x_1035_);
return v___x_1036_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_update(lean_object* v_00_u03b1_1041_, lean_object* v_inst_1042_, lean_object* v_m_1043_, lean_object* v_k_1044_, lean_object* v_f_1045_){
_start:
{
lean_object* v_toDataValue_1046_; lean_object* v_ofDataValue_x3f_1047_; lean_object* v___y_1049_; lean_object* v___x_1055_; 
v_toDataValue_1046_ = lean_ctor_get(v_inst_1042_, 0);
lean_inc_ref(v_toDataValue_1046_);
v_ofDataValue_x3f_1047_ = lean_ctor_get(v_inst_1042_, 1);
lean_inc_ref(v_ofDataValue_x3f_1047_);
lean_dec_ref(v_inst_1042_);
v___x_1055_ = l_Lean_KVMap_findCore(v_m_1043_, v_k_1044_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v___x_1056_; 
lean_dec_ref(v_ofDataValue_x3f_1047_);
v___x_1056_ = lean_box(0);
v___y_1049_ = v___x_1056_;
goto v___jp_1048_;
}
else
{
lean_object* v_val_1057_; lean_object* v___x_1058_; 
v_val_1057_ = lean_ctor_get(v___x_1055_, 0);
lean_inc(v_val_1057_);
lean_dec_ref_known(v___x_1055_, 1);
v___x_1058_ = lean_apply_1(v_ofDataValue_x3f_1047_, v_val_1057_);
v___y_1049_ = v___x_1058_;
goto v___jp_1048_;
}
v___jp_1048_:
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_apply_1(v_f_1045_, v___y_1049_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v___x_1051_; 
lean_dec_ref(v_toDataValue_1046_);
v___x_1051_ = l_Lean_KVMap_erase(v_m_1043_, v_k_1044_);
lean_dec(v_k_1044_);
return v___x_1051_;
}
else
{
lean_object* v_val_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v_val_1052_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_val_1052_);
lean_dec_ref_known(v___x_1050_, 1);
v___x_1053_ = lean_apply_1(v_toDataValue_1046_, v_val_1052_);
v___x_1054_ = l_Lean_KVMap_insertCore(v_m_1043_, v_k_1044_, v___x_1053_);
return v___x_1054_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueDataValue___lam__0(lean_object* v_val_1059_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1060_, 0, v_val_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueBool___lam__1(lean_object* v_x_1067_){
_start:
{
if (lean_obj_tag(v_x_1067_) == 1)
{
uint8_t v_v_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v_v_1068_ = lean_ctor_get_uint8(v_x_1067_, 0);
v___x_1069_ = lean_box(v_v_1068_);
v___x_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
return v___x_1070_;
}
else
{
lean_object* v___x_1071_; 
v___x_1071_ = lean_box(0);
return v___x_1071_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueBool___lam__1___boxed(lean_object* v_x_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lean_KVMap_instValueBool___lam__1(v_x_1072_);
lean_dec_ref(v_x_1072_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueNat___lam__1(lean_object* v_x_1079_){
_start:
{
if (lean_obj_tag(v_x_1079_) == 3)
{
lean_object* v_v_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
v_v_1080_ = lean_ctor_get(v_x_1079_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v_x_1079_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v_x_1079_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_v_1080_);
lean_dec(v_x_1079_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
lean_ctor_set_tag(v___x_1082_, 1);
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_v_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
else
{
lean_object* v___x_1088_; 
lean_dec_ref(v_x_1079_);
v___x_1088_ = lean_box(0);
return v___x_1088_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueInt___lam__1(lean_object* v_x_1094_){
_start:
{
if (lean_obj_tag(v_x_1094_) == 4)
{
lean_object* v_v_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
v_v_1095_ = lean_ctor_get(v_x_1094_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v_x_1094_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v_x_1094_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_v_1095_);
lean_dec(v_x_1094_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set_tag(v___x_1097_, 1);
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_v_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
else
{
lean_object* v___x_1103_; 
lean_dec_ref(v_x_1094_);
v___x_1103_ = lean_box(0);
return v___x_1103_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueName___lam__1(lean_object* v_x_1109_){
_start:
{
if (lean_obj_tag(v_x_1109_) == 2)
{
lean_object* v_v_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
v_v_1110_ = lean_ctor_get(v_x_1109_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v_x_1109_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v_x_1109_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_v_1110_);
lean_dec(v_x_1109_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 1);
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_v_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
else
{
lean_object* v___x_1118_; 
lean_dec_ref(v_x_1109_);
v___x_1118_ = lean_box(0);
return v___x_1118_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueString___lam__1(lean_object* v_x_1124_){
_start:
{
if (lean_obj_tag(v_x_1124_) == 0)
{
lean_object* v_v_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1132_; 
v_v_1125_ = lean_ctor_get(v_x_1124_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v_x_1124_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1127_ = v_x_1124_;
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_v_1125_);
lean_dec(v_x_1124_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set_tag(v___x_1127_, 1);
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_v_1125_);
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
lean_object* v___x_1133_; 
lean_dec_ref(v_x_1124_);
v___x_1133_ = lean_box(0);
return v___x_1133_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_KVMap_instValueSyntax___lam__1(lean_object* v_x_1139_){
_start:
{
if (lean_obj_tag(v_x_1139_) == 5)
{
lean_object* v_v_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
v_v_1140_ = lean_ctor_get(v_x_1139_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v_x_1139_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1142_ = v_x_1139_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_v_1140_);
lean_dec(v_x_1139_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1143_ == 0)
{
lean_ctor_set_tag(v___x_1142_, 1);
v___x_1145_ = v___x_1142_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_v_1140_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
else
{
lean_object* v___x_1148_; 
lean_dec_ref(v_x_1139_);
v___x_1148_ = lean_box(0);
return v___x_1148_;
}
}
}
lean_object* runtime_initialize_Init_Data_Format_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Extra(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_KVMap(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Format_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedKVMap_default = _init_l_Lean_instInhabitedKVMap_default();
lean_mark_persistent(l_Lean_instInhabitedKVMap_default);
l_Lean_instInhabitedKVMap = _init_l_Lean_instInhabitedKVMap();
lean_mark_persistent(l_Lean_instInhabitedKVMap);
l_Lean_KVMap_empty = _init_l_Lean_KVMap_empty();
lean_mark_persistent(l_Lean_KVMap_empty);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_KVMap(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Format_Syntax(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Extra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_KVMap(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Format_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_KVMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_KVMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_KVMap(builtin);
}
#ifdef __cplusplus
}
#endif

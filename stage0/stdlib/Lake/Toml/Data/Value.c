// Lean compiler output
// Module: Lake.Toml.Data.Value
// Imports: public import Init.Data.Float.Float public import Lake.Toml.Data.Dict public import Lake.Toml.Data.DateTime import Lake.Util.String import Init.Data.String.TakeDrop import Init.Data.String.Search public import Init.Data.String.Defs import Init.Data.ToString.Macro
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_float_beq(double, double);
uint8_t l_Lake_Toml_instDecidableEqDateTime_decEq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_toDigits(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* l_Lake_lpadAscii(lean_object*, uint32_t, lean_object*);
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_float_to_string(double);
lean_object* l_Lake_Toml_DateTime_toString(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_mkEmpty___redArg(lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_empty___redArg();
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_string_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_string_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_integer_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_integer_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_float_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_float_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_dateTime_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_dateTime_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_table_x27_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_table_x27_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_instInhabitedValue_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_Toml_instInhabitedValue_default___closed__0 = (const lean_object*)&l_Lake_Toml_instInhabitedValue_default___closed__0_value;
static const lean_ctor_object l_Lake_Toml_instInhabitedValue_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Toml_instInhabitedValue_default___closed__0_value)}};
static const lean_object* l_Lake_Toml_instInhabitedValue_default___closed__1 = (const lean_object*)&l_Lake_Toml_instInhabitedValue_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_instInhabitedValue_default = (const lean_object*)&l_Lake_Toml_instInhabitedValue_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_instInhabitedValue = (const lean_object*)&l_Lake_Toml_instInhabitedValue_default___closed__1_value;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_instBEqValue_beq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_instBEqValue_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_instBEqValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_instBEqValue_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_instBEqValue___closed__0 = (const lean_object*)&l_Lake_Toml_instBEqValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_instBEqValue = (const lean_object*)&l_Lake_Toml_instBEqValue___closed__0_value;
static lean_once_cell_t l_Lake_Toml_Table_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_Table_empty___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_Table_empty;
LEAN_EXPORT lean_object* l_Lake_Toml_Table_mkEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Table_mkEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_table(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ref___boxed(lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\u"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\\\"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\\""};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\r"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\f"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__4_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__5_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\t"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__6_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\b"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_ppString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_Lake_Toml_ppString___closed__0 = (const lean_object*)&l_Lake_Toml_ppString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_ppString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_ppString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lake_Toml_ppSimpleKey_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lake_Toml_ppSimpleKey_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_ppSimpleKey(lean_object*);
static const lean_string_object l_Lake_Toml_ppKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_Toml_ppKey___closed__0 = (const lean_object*)&l_Lake_Toml_ppKey___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_ppKey(lean_object*);
static const lean_string_object l_Lake_Toml_ppInlineArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lake_Toml_ppInlineArray___closed__0 = (const lean_object*)&l_Lake_Toml_ppInlineArray___closed__0_value;
static const lean_string_object l_Lake_Toml_ppInlineArray___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lake_Toml_ppInlineArray___closed__1 = (const lean_object*)&l_Lake_Toml_ppInlineArray___closed__1_value;
static const lean_string_object l_Lake_Toml_ppInlineArray___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lake_Toml_ppInlineArray___closed__2 = (const lean_object*)&l_Lake_Toml_ppInlineArray___closed__2_value;
static const lean_string_object l_Lake_Toml_Value_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lake_Toml_Value_toString___closed__0 = (const lean_object*)&l_Lake_Toml_Value_toString___closed__0_value;
static const lean_string_object l_Lake_Toml_Value_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lake_Toml_Value_toString___closed__1 = (const lean_object*)&l_Lake_Toml_Value_toString___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " = "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0(size_t, size_t, lean_object*);
static const lean_string_object l_Lake_Toml_ppInlineTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lake_Toml_ppInlineTable___closed__0 = (const lean_object*)&l_Lake_Toml_ppInlineTable___closed__0_value;
static const lean_string_object l_Lake_Toml_ppInlineTable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lake_Toml_ppInlineTable___closed__1 = (const lean_object*)&l_Lake_Toml_ppInlineTable___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_ppInlineTable(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_toString(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineArray_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_ppInlineArray(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_ppInlineArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_ppInlineTable___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineArray_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_instToStringValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_Value_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_instToStringValue___closed__0 = (const lean_object*)&l_Lake_Toml_instToStringValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_instToStringValue = (const lean_object*)&l_Lake_Toml_instToStringValue___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Data_Value_0__Lake_Toml_ppTable_appendKeyval___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lake_Toml_Data_Value_0__Lake_Toml_ppTable_appendKeyval___closed__0 = (const lean_object*)&l___private_Lake_Toml_Data_Value_0__Lake_Toml_ppTable_appendKeyval___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Data_Value_0__Lake_Toml_ppTable_appendKeyval(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lake_Toml_ppTable_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[["};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]]\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.Toml.Data.Value"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lake.Toml.ppTable"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Toml_ppTable_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Toml_ppTable_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " = []\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lake_Toml_ppTable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lake_Toml_ppTable_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lake_Toml_ppTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Toml_instInhabitedValue_default___closed__0_value),((lean_object*)&l_Lake_Toml_instInhabitedValue_default___closed__0_value)}};
static const lean_object* l_Lake_Toml_ppTable___closed__0 = (const lean_object*)&l_Lake_Toml_ppTable___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_ppTable(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_ppTable___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ctorIdx(lean_object* v_x_1_){
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
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
default: 
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ctorIdx___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lake_Toml_Value_ctorIdx(v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
switch(lean_obj_tag(v_t_11_))
{
case 1:
{
lean_object* v_ref_13_; lean_object* v_n_14_; lean_object* v___x_15_; 
v_ref_13_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_ref_13_);
v_n_14_ = lean_ctor_get(v_t_11_, 1);
lean_inc(v_n_14_);
lean_dec_ref_known(v_t_11_, 2);
v___x_15_ = lean_apply_2(v_k_12_, v_ref_13_, v_n_14_);
return v___x_15_;
}
case 2:
{
lean_object* v_ref_16_; double v_n_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v_ref_16_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_ref_16_);
v_n_17_ = lean_ctor_get_float(v_t_11_, sizeof(void*)*1);
lean_dec_ref_known(v_t_11_, 1);
v___x_18_ = lean_box_float(v_n_17_);
v___x_19_ = lean_apply_2(v_k_12_, v_ref_16_, v___x_18_);
return v___x_19_;
}
case 3:
{
lean_object* v_ref_20_; uint8_t v_b_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v_ref_20_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_ref_20_);
v_b_21_ = lean_ctor_get_uint8(v_t_11_, sizeof(void*)*1);
lean_dec_ref_known(v_t_11_, 1);
v___x_22_ = lean_box(v_b_21_);
v___x_23_ = lean_apply_2(v_k_12_, v_ref_20_, v___x_22_);
return v___x_23_;
}
default: 
{
lean_object* v_ref_24_; lean_object* v_s_25_; lean_object* v___x_26_; 
v_ref_24_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_ref_24_);
v_s_25_ = lean_ctor_get(v_t_11_, 1);
lean_inc_ref(v_s_25_);
lean_dec_ref(v_t_11_);
v___x_26_ = lean_apply_2(v_k_12_, v_ref_24_, v_s_25_);
return v___x_26_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ctorElim(lean_object* v_motive__1_27_, lean_object* v_ctorIdx_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_29_, v_k_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ctorElim___boxed(lean_object* v_motive__1_33_, lean_object* v_ctorIdx_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_k_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lake_Toml_Value_ctorElim(v_motive__1_33_, v_ctorIdx_34_, v_t_35_, v_h_36_, v_k_37_);
lean_dec(v_ctorIdx_34_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_string_elim___redArg(lean_object* v_t_39_, lean_object* v_string_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_39_, v_string_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_string_elim(lean_object* v_motive__1_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_string_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_43_, v_string_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_integer_elim___redArg(lean_object* v_t_47_, lean_object* v_integer_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_47_, v_integer_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_integer_elim(lean_object* v_motive__1_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_integer_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_51_, v_integer_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_float_elim___redArg(lean_object* v_t_55_, lean_object* v_float_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_55_, v_float_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_float_elim(lean_object* v_motive__1_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_float_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_59_, v_float_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_boolean_elim___redArg(lean_object* v_t_63_, lean_object* v_boolean_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_63_, v_boolean_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_boolean_elim(lean_object* v_motive__1_66_, lean_object* v_t_67_, lean_object* v_h_68_, lean_object* v_boolean_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_67_, v_boolean_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_dateTime_elim___redArg(lean_object* v_t_71_, lean_object* v_dateTime_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_71_, v_dateTime_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_dateTime_elim(lean_object* v_motive__1_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_dateTime_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_75_, v_dateTime_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_array_elim___redArg(lean_object* v_t_79_, lean_object* v_array_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_79_, v_array_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_array_elim(lean_object* v_motive__1_82_, lean_object* v_t_83_, lean_object* v_h_84_, lean_object* v_array_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_83_, v_array_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_table_x27_elim___redArg(lean_object* v_t_87_, lean_object* v_table_x27_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_87_, v_table_x27_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_table_x27_elim(lean_object* v_motive__1_90_, lean_object* v_t_91_, lean_object* v_h_92_, lean_object* v_table_x27_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lake_Toml_Value_ctorElim___redArg(v_t_91_, v_table_x27_93_);
return v___x_94_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0___redArg(lean_object* v_xs_101_, lean_object* v_ys_102_, lean_object* v_x_103_){
_start:
{
lean_object* v_zero_104_; uint8_t v_isZero_105_; 
v_zero_104_ = lean_unsigned_to_nat(0u);
v_isZero_105_ = lean_nat_dec_eq(v_x_103_, v_zero_104_);
if (v_isZero_105_ == 1)
{
lean_dec(v_x_103_);
return v_isZero_105_;
}
else
{
lean_object* v_one_106_; lean_object* v_n_107_; lean_object* v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v_one_106_ = lean_unsigned_to_nat(1u);
v_n_107_ = lean_nat_sub(v_x_103_, v_one_106_);
lean_dec(v_x_103_);
v___x_108_ = lean_array_fget_borrowed(v_xs_101_, v_n_107_);
v___x_109_ = lean_array_fget_borrowed(v_ys_102_, v_n_107_);
lean_inc(v___x_109_);
lean_inc(v___x_108_);
v___x_110_ = l_Lake_Toml_instBEqValue_beq(v___x_108_, v___x_109_);
if (v___x_110_ == 0)
{
lean_dec(v_n_107_);
return v___x_110_;
}
else
{
v_x_103_ = v_n_107_;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_instBEqValue_beq(lean_object* v_x_112_, lean_object* v_x_113_){
_start:
{
switch(lean_obj_tag(v_x_112_))
{
case 0:
{
if (lean_obj_tag(v_x_113_) == 0)
{
lean_object* v_ref_114_; lean_object* v_s_115_; lean_object* v_ref_116_; lean_object* v_s_117_; uint8_t v___x_118_; 
v_ref_114_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_ref_114_);
v_s_115_ = lean_ctor_get(v_x_112_, 1);
lean_inc_ref(v_s_115_);
lean_dec_ref_known(v_x_112_, 2);
v_ref_116_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_ref_116_);
v_s_117_ = lean_ctor_get(v_x_113_, 1);
lean_inc_ref(v_s_117_);
lean_dec_ref_known(v_x_113_, 2);
v___x_118_ = l_Lean_Syntax_structEq(v_ref_114_, v_ref_116_);
lean_dec(v_ref_116_);
lean_dec(v_ref_114_);
if (v___x_118_ == 0)
{
lean_dec_ref(v_s_117_);
lean_dec_ref(v_s_115_);
return v___x_118_;
}
else
{
uint8_t v___x_119_; 
v___x_119_ = lean_string_dec_eq(v_s_115_, v_s_117_);
lean_dec_ref(v_s_117_);
lean_dec_ref(v_s_115_);
return v___x_119_;
}
}
else
{
uint8_t v___x_120_; 
lean_dec_ref_known(v_x_112_, 2);
lean_dec_ref(v_x_113_);
v___x_120_ = 0;
return v___x_120_;
}
}
case 1:
{
if (lean_obj_tag(v_x_113_) == 1)
{
lean_object* v_ref_121_; lean_object* v_n_122_; lean_object* v_ref_123_; lean_object* v_n_124_; uint8_t v___x_125_; 
v_ref_121_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_ref_121_);
v_n_122_ = lean_ctor_get(v_x_112_, 1);
lean_inc(v_n_122_);
lean_dec_ref_known(v_x_112_, 2);
v_ref_123_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_ref_123_);
v_n_124_ = lean_ctor_get(v_x_113_, 1);
lean_inc(v_n_124_);
lean_dec_ref_known(v_x_113_, 2);
v___x_125_ = l_Lean_Syntax_structEq(v_ref_121_, v_ref_123_);
lean_dec(v_ref_123_);
lean_dec(v_ref_121_);
if (v___x_125_ == 0)
{
lean_dec(v_n_124_);
lean_dec(v_n_122_);
return v___x_125_;
}
else
{
uint8_t v___x_126_; 
v___x_126_ = lean_int_dec_eq(v_n_122_, v_n_124_);
lean_dec(v_n_124_);
lean_dec(v_n_122_);
return v___x_126_;
}
}
else
{
uint8_t v___x_127_; 
lean_dec_ref_known(v_x_112_, 2);
lean_dec_ref(v_x_113_);
v___x_127_ = 0;
return v___x_127_;
}
}
case 2:
{
if (lean_obj_tag(v_x_113_) == 2)
{
lean_object* v_ref_128_; double v_n_129_; lean_object* v_ref_130_; double v_n_131_; uint8_t v___x_132_; 
v_ref_128_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_ref_128_);
v_n_129_ = lean_ctor_get_float(v_x_112_, sizeof(void*)*1);
lean_dec_ref_known(v_x_112_, 1);
v_ref_130_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_ref_130_);
v_n_131_ = lean_ctor_get_float(v_x_113_, sizeof(void*)*1);
lean_dec_ref_known(v_x_113_, 1);
v___x_132_ = l_Lean_Syntax_structEq(v_ref_128_, v_ref_130_);
lean_dec(v_ref_130_);
lean_dec(v_ref_128_);
if (v___x_132_ == 0)
{
return v___x_132_;
}
else
{
uint8_t v___x_133_; 
v___x_133_ = lean_float_beq(v_n_129_, v_n_131_);
return v___x_133_;
}
}
else
{
uint8_t v___x_134_; 
lean_dec_ref_known(v_x_112_, 1);
lean_dec_ref(v_x_113_);
v___x_134_ = 0;
return v___x_134_;
}
}
case 3:
{
if (lean_obj_tag(v_x_113_) == 3)
{
lean_object* v_ref_135_; uint8_t v_b_136_; lean_object* v_ref_137_; uint8_t v_b_138_; uint8_t v___x_139_; 
v_ref_135_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_ref_135_);
v_b_136_ = lean_ctor_get_uint8(v_x_112_, sizeof(void*)*1);
lean_dec_ref_known(v_x_112_, 1);
v_ref_137_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_ref_137_);
v_b_138_ = lean_ctor_get_uint8(v_x_113_, sizeof(void*)*1);
lean_dec_ref_known(v_x_113_, 1);
v___x_139_ = l_Lean_Syntax_structEq(v_ref_135_, v_ref_137_);
lean_dec(v_ref_137_);
lean_dec(v_ref_135_);
if (v___x_139_ == 0)
{
return v___x_139_;
}
else
{
if (v_b_138_ == 0)
{
if (v_b_136_ == 0)
{
return v___x_139_;
}
else
{
return v_b_138_;
}
}
else
{
return v_b_136_;
}
}
}
else
{
uint8_t v___x_140_; 
lean_dec_ref_known(v_x_112_, 1);
lean_dec_ref(v_x_113_);
v___x_140_ = 0;
return v___x_140_;
}
}
case 4:
{
if (lean_obj_tag(v_x_113_) == 4)
{
lean_object* v_ref_141_; lean_object* v_dt_142_; lean_object* v_ref_143_; lean_object* v_dt_144_; uint8_t v___x_145_; 
v_ref_141_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_ref_141_);
v_dt_142_ = lean_ctor_get(v_x_112_, 1);
lean_inc_ref(v_dt_142_);
lean_dec_ref_known(v_x_112_, 2);
v_ref_143_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_ref_143_);
v_dt_144_ = lean_ctor_get(v_x_113_, 1);
lean_inc_ref(v_dt_144_);
lean_dec_ref_known(v_x_113_, 2);
v___x_145_ = l_Lean_Syntax_structEq(v_ref_141_, v_ref_143_);
lean_dec(v_ref_143_);
lean_dec(v_ref_141_);
if (v___x_145_ == 0)
{
lean_dec_ref(v_dt_144_);
lean_dec_ref(v_dt_142_);
return v___x_145_;
}
else
{
uint8_t v___x_146_; 
v___x_146_ = l_Lake_Toml_instDecidableEqDateTime_decEq(v_dt_142_, v_dt_144_);
return v___x_146_;
}
}
else
{
uint8_t v___x_147_; 
lean_dec_ref_known(v_x_112_, 2);
lean_dec_ref(v_x_113_);
v___x_147_ = 0;
return v___x_147_;
}
}
case 5:
{
if (lean_obj_tag(v_x_113_) == 5)
{
lean_object* v_ref_148_; lean_object* v_xs_149_; lean_object* v_ref_150_; lean_object* v_xs_151_; uint8_t v___x_152_; 
v_ref_148_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_ref_148_);
v_xs_149_ = lean_ctor_get(v_x_112_, 1);
lean_inc_ref(v_xs_149_);
lean_dec_ref_known(v_x_112_, 2);
v_ref_150_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_ref_150_);
v_xs_151_ = lean_ctor_get(v_x_113_, 1);
lean_inc_ref(v_xs_151_);
lean_dec_ref_known(v_x_113_, 2);
v___x_152_ = l_Lean_Syntax_structEq(v_ref_148_, v_ref_150_);
lean_dec(v_ref_150_);
lean_dec(v_ref_148_);
if (v___x_152_ == 0)
{
lean_dec_ref(v_xs_151_);
lean_dec_ref(v_xs_149_);
return v___x_152_;
}
else
{
lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_153_ = lean_array_get_size(v_xs_149_);
v___x_154_ = lean_array_get_size(v_xs_151_);
v___x_155_ = lean_nat_dec_eq(v___x_153_, v___x_154_);
if (v___x_155_ == 0)
{
lean_dec_ref(v_xs_151_);
lean_dec_ref(v_xs_149_);
return v___x_155_;
}
else
{
uint8_t v___x_156_; 
v___x_156_ = l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0___redArg(v_xs_149_, v_xs_151_, v___x_153_);
lean_dec_ref(v_xs_151_);
lean_dec_ref(v_xs_149_);
return v___x_156_;
}
}
}
else
{
uint8_t v___x_157_; 
lean_dec_ref_known(v_x_112_, 2);
lean_dec_ref(v_x_113_);
v___x_157_ = 0;
return v___x_157_;
}
}
default: 
{
if (lean_obj_tag(v_x_113_) == 6)
{
lean_object* v_ref_158_; lean_object* v_xs_159_; lean_object* v_ref_160_; lean_object* v_xs_161_; uint8_t v___x_162_; 
v_ref_158_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_ref_158_);
v_xs_159_ = lean_ctor_get(v_x_112_, 1);
lean_inc_ref(v_xs_159_);
lean_dec_ref_known(v_x_112_, 2);
v_ref_160_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_ref_160_);
v_xs_161_ = lean_ctor_get(v_x_113_, 1);
lean_inc_ref(v_xs_161_);
lean_dec_ref_known(v_x_113_, 2);
v___x_162_ = l_Lean_Syntax_structEq(v_ref_158_, v_ref_160_);
lean_dec(v_ref_160_);
lean_dec(v_ref_158_);
if (v___x_162_ == 0)
{
lean_dec_ref(v_xs_161_);
lean_dec_ref(v_xs_159_);
return v___x_162_;
}
else
{
uint8_t v___x_163_; 
v___x_163_ = l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1___redArg(v_xs_159_, v_xs_161_);
lean_dec_ref(v_xs_161_);
lean_dec_ref(v_xs_159_);
return v___x_163_;
}
}
else
{
uint8_t v___x_164_; 
lean_dec_ref_known(v_x_112_, 2);
lean_dec_ref(v_x_113_);
v___x_164_ = 0;
return v___x_164_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1___redArg(lean_object* v_xs_165_, lean_object* v_ys_166_, lean_object* v_x_167_){
_start:
{
lean_object* v_zero_168_; uint8_t v_isZero_169_; 
v_zero_168_ = lean_unsigned_to_nat(0u);
v_isZero_169_ = lean_nat_dec_eq(v_x_167_, v_zero_168_);
if (v_isZero_169_ == 1)
{
lean_dec(v_x_167_);
return v_isZero_169_;
}
else
{
lean_object* v_one_170_; lean_object* v_n_171_; uint8_t v___y_173_; lean_object* v___x_175_; lean_object* v_fst_176_; lean_object* v_snd_177_; lean_object* v___x_178_; lean_object* v_fst_179_; lean_object* v_snd_180_; uint8_t v___x_181_; 
v_one_170_ = lean_unsigned_to_nat(1u);
v_n_171_ = lean_nat_sub(v_x_167_, v_one_170_);
lean_dec(v_x_167_);
v___x_175_ = lean_array_fget_borrowed(v_xs_165_, v_n_171_);
v_fst_176_ = lean_ctor_get(v___x_175_, 0);
v_snd_177_ = lean_ctor_get(v___x_175_, 1);
v___x_178_ = lean_array_fget_borrowed(v_ys_166_, v_n_171_);
v_fst_179_ = lean_ctor_get(v___x_178_, 0);
v_snd_180_ = lean_ctor_get(v___x_178_, 1);
v___x_181_ = lean_name_eq(v_fst_176_, v_fst_179_);
if (v___x_181_ == 0)
{
v___y_173_ = v___x_181_;
goto v___jp_172_;
}
else
{
uint8_t v___x_182_; 
lean_inc(v_snd_180_);
lean_inc(v_snd_177_);
v___x_182_ = l_Lake_Toml_instBEqValue_beq(v_snd_177_, v_snd_180_);
v___y_173_ = v___x_182_;
goto v___jp_172_;
}
v___jp_172_:
{
if (v___y_173_ == 0)
{
lean_dec(v_n_171_);
return v___y_173_;
}
else
{
v_x_167_ = v_n_171_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1___redArg(lean_object* v_self_183_, lean_object* v_other_184_){
_start:
{
lean_object* v_items_185_; lean_object* v_items_186_; lean_object* v___x_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v_items_185_ = lean_ctor_get(v_self_183_, 0);
v_items_186_ = lean_ctor_get(v_other_184_, 0);
v___x_187_ = lean_array_get_size(v_items_185_);
v___x_188_ = lean_array_get_size(v_items_186_);
v___x_189_ = lean_nat_dec_eq(v___x_187_, v___x_188_);
if (v___x_189_ == 0)
{
return v___x_189_;
}
else
{
uint8_t v___x_190_; 
v___x_190_ = l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1___redArg(v_items_185_, v_items_186_, v___x_187_);
return v___x_190_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1___redArg___boxed(lean_object* v_self_191_, lean_object* v_other_192_){
_start:
{
uint8_t v_res_193_; lean_object* v_r_194_; 
v_res_193_ = l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1___redArg(v_self_191_, v_other_192_);
lean_dec_ref(v_other_192_);
lean_dec_ref(v_self_191_);
v_r_194_ = lean_box(v_res_193_);
return v_r_194_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0___redArg___boxed(lean_object* v_xs_195_, lean_object* v_ys_196_, lean_object* v_x_197_){
_start:
{
uint8_t v_res_198_; lean_object* v_r_199_; 
v_res_198_ = l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0___redArg(v_xs_195_, v_ys_196_, v_x_197_);
lean_dec_ref(v_ys_196_);
lean_dec_ref(v_xs_195_);
v_r_199_ = lean_box(v_res_198_);
return v_r_199_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1___redArg___boxed(lean_object* v_xs_200_, lean_object* v_ys_201_, lean_object* v_x_202_){
_start:
{
uint8_t v_res_203_; lean_object* v_r_204_; 
v_res_203_ = l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1___redArg(v_xs_200_, v_ys_201_, v_x_202_);
lean_dec_ref(v_ys_201_);
lean_dec_ref(v_xs_200_);
v_r_204_ = lean_box(v_res_203_);
return v_r_204_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instBEqValue_beq___boxed(lean_object* v_x_205_, lean_object* v_x_206_){
_start:
{
uint8_t v_res_207_; lean_object* v_r_208_; 
v_res_207_ = l_Lake_Toml_instBEqValue_beq(v_x_205_, v_x_206_);
v_r_208_ = lean_box(v_res_207_);
return v_r_208_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0(lean_object* v_xs_209_, lean_object* v_ys_210_, lean_object* v_hsz_211_, lean_object* v_x_212_, lean_object* v_x_213_){
_start:
{
uint8_t v___x_214_; 
v___x_214_ = l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0___redArg(v_xs_209_, v_ys_210_, v_x_212_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0___boxed(lean_object* v_xs_215_, lean_object* v_ys_216_, lean_object* v_hsz_217_, lean_object* v_x_218_, lean_object* v_x_219_){
_start:
{
uint8_t v_res_220_; lean_object* v_r_221_; 
v_res_220_ = l_Array_isEqvAux___at___00Lake_Toml_instBEqValue_beq_spec__0(v_xs_215_, v_ys_216_, v_hsz_217_, v_x_218_, v_x_219_);
lean_dec_ref(v_ys_216_);
lean_dec_ref(v_xs_215_);
v_r_221_ = lean_box(v_res_220_);
return v_r_221_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1(lean_object* v_cmp_222_, lean_object* v_self_223_, lean_object* v_other_224_){
_start:
{
uint8_t v___x_225_; 
v___x_225_ = l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1___redArg(v_self_223_, v_other_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1___boxed(lean_object* v_cmp_226_, lean_object* v_self_227_, lean_object* v_other_228_){
_start:
{
uint8_t v_res_229_; lean_object* v_r_230_; 
v_res_229_ = l_Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1(v_cmp_226_, v_self_227_, v_other_228_);
lean_dec_ref(v_other_228_);
lean_dec_ref(v_self_227_);
lean_dec_ref(v_cmp_226_);
v_r_230_ = lean_box(v_res_229_);
return v_r_230_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1(lean_object* v_xs_231_, lean_object* v_ys_232_, lean_object* v_hsz_233_, lean_object* v_x_234_, lean_object* v_x_235_){
_start:
{
uint8_t v___x_236_; 
v___x_236_ = l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1___redArg(v_xs_231_, v_ys_232_, v_x_234_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1___boxed(lean_object* v_xs_237_, lean_object* v_ys_238_, lean_object* v_hsz_239_, lean_object* v_x_240_, lean_object* v_x_241_){
_start:
{
uint8_t v_res_242_; lean_object* v_r_243_; 
v_res_242_ = l_Array_isEqvAux___at___00Lake_Toml_RBDict_beq___at___00Lake_Toml_instBEqValue_beq_spec__1_spec__1(v_xs_237_, v_ys_238_, v_hsz_239_, v_x_240_, v_x_241_);
lean_dec_ref(v_ys_238_);
lean_dec_ref(v_xs_237_);
v_r_243_ = lean_box(v_res_242_);
return v_r_243_;
}
}
static lean_object* _init_l_Lake_Toml_Table_empty___closed__0(void){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = l_Lake_Toml_RBDict_empty___redArg();
return v___x_246_;
}
}
static lean_object* _init_l_Lake_Toml_Table_empty(void){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lean_obj_once(&l_Lake_Toml_Table_empty___closed__0, &l_Lake_Toml_Table_empty___closed__0_once, _init_l_Lake_Toml_Table_empty___closed__0);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_mkEmpty(lean_object* v_capacity_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_Lake_Toml_RBDict_mkEmpty___redArg(v_capacity_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Table_mkEmpty___boxed(lean_object* v_capacity_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lake_Toml_Table_mkEmpty(v_capacity_250_);
lean_dec(v_capacity_250_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_table(lean_object* v_ref_252_, lean_object* v_t_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_254_, 0, v_ref_252_);
lean_ctor_set(v___x_254_, 1, v_t_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ref(lean_object* v_x_255_){
_start:
{
lean_object* v_ref_256_; 
v_ref_256_ = lean_ctor_get(v_x_255_, 0);
lean_inc(v_ref_256_);
return v_ref_256_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_ref___boxed(lean_object* v_x_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lake_Toml_Value_ref(v_x_257_);
lean_dec_ref(v_x_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg(lean_object* v___x_267_, lean_object* v_s_268_, lean_object* v_a_269_, lean_object* v_b_270_){
_start:
{
uint8_t v_decide_271_; 
v_decide_271_ = lean_nat_dec_eq(v_a_269_, v___x_267_);
if (v_decide_271_ == 0)
{
uint32_t v___x_272_; lean_object* v___x_273_; uint32_t v___x_286_; uint8_t v___x_287_; 
v___x_272_ = lean_string_utf8_get_fast(v_s_268_, v_a_269_);
v___x_273_ = lean_string_utf8_next_fast(v_s_268_, v_a_269_);
lean_dec(v_a_269_);
v___x_286_ = 8;
v___x_287_ = lean_uint32_dec_eq(v___x_272_, v___x_286_);
if (v___x_287_ == 0)
{
uint32_t v___x_288_; uint8_t v___x_289_; 
v___x_288_ = 9;
v___x_289_ = lean_uint32_dec_eq(v___x_272_, v___x_288_);
if (v___x_289_ == 0)
{
uint32_t v___x_290_; uint8_t v___x_291_; 
v___x_290_ = 10;
v___x_291_ = lean_uint32_dec_eq(v___x_272_, v___x_290_);
if (v___x_291_ == 0)
{
uint32_t v___x_292_; uint8_t v___x_293_; 
v___x_292_ = 12;
v___x_293_ = lean_uint32_dec_eq(v___x_272_, v___x_292_);
if (v___x_293_ == 0)
{
uint32_t v___x_294_; uint8_t v___x_295_; 
v___x_294_ = 13;
v___x_295_ = lean_uint32_dec_eq(v___x_272_, v___x_294_);
if (v___x_295_ == 0)
{
uint32_t v___x_296_; uint8_t v___x_297_; 
v___x_296_ = 34;
v___x_297_ = lean_uint32_dec_eq(v___x_272_, v___x_296_);
if (v___x_297_ == 0)
{
uint32_t v___x_298_; uint8_t v___x_299_; 
v___x_298_ = 92;
v___x_299_ = lean_uint32_dec_eq(v___x_272_, v___x_298_);
if (v___x_299_ == 0)
{
uint32_t v___x_300_; uint8_t v___x_301_; 
v___x_300_ = 32;
v___x_301_ = lean_uint32_dec_lt(v___x_272_, v___x_300_);
if (v___x_301_ == 0)
{
uint32_t v___x_302_; uint8_t v___x_303_; 
v___x_302_ = 127;
v___x_303_ = lean_uint32_dec_eq(v___x_272_, v___x_302_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; 
v___x_304_ = lean_string_push(v_b_270_, v___x_272_);
v_a_269_ = v___x_273_;
v_b_270_ = v___x_304_;
goto _start;
}
else
{
goto v___jp_274_;
}
}
else
{
goto v___jp_274_;
}
}
else
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__1));
v___x_307_ = lean_string_append(v_b_270_, v___x_306_);
v_a_269_ = v___x_273_;
v_b_270_ = v___x_307_;
goto _start;
}
}
else
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__2));
v___x_310_ = lean_string_append(v_b_270_, v___x_309_);
v_a_269_ = v___x_273_;
v_b_270_ = v___x_310_;
goto _start;
}
}
else
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__3));
v___x_313_ = lean_string_append(v_b_270_, v___x_312_);
v_a_269_ = v___x_273_;
v_b_270_ = v___x_313_;
goto _start;
}
}
else
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__4));
v___x_316_ = lean_string_append(v_b_270_, v___x_315_);
v_a_269_ = v___x_273_;
v_b_270_ = v___x_316_;
goto _start;
}
}
else
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__5));
v___x_319_ = lean_string_append(v_b_270_, v___x_318_);
v_a_269_ = v___x_273_;
v_b_270_ = v___x_319_;
goto _start;
}
}
else
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__6));
v___x_322_ = lean_string_append(v_b_270_, v___x_321_);
v_a_269_ = v___x_273_;
v_b_270_ = v___x_322_;
goto _start;
}
}
else
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__7));
v___x_325_ = lean_string_append(v_b_270_, v___x_324_);
v_a_269_ = v___x_273_;
v_b_270_ = v___x_325_;
goto _start;
}
v___jp_274_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; uint32_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_275_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___closed__0));
v___x_276_ = lean_string_append(v_b_270_, v___x_275_);
v___x_277_ = lean_unsigned_to_nat(16u);
v___x_278_ = lean_uint32_to_nat(v___x_272_);
v___x_279_ = l_Nat_toDigits(v___x_277_, v___x_278_);
v___x_280_ = lean_string_mk(v___x_279_);
v___x_281_ = 48;
v___x_282_ = lean_unsigned_to_nat(4u);
v___x_283_ = l_Lake_lpadAscii(v___x_280_, v___x_281_, v___x_282_);
lean_dec_ref(v___x_280_);
v___x_284_ = lean_string_append(v___x_276_, v___x_283_);
lean_dec_ref(v___x_283_);
v_a_269_ = v___x_273_;
v_b_270_ = v___x_284_;
goto _start;
}
}
else
{
lean_dec(v_a_269_);
return v_b_270_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg___boxed(lean_object* v___x_327_, lean_object* v_s_328_, lean_object* v_a_329_, lean_object* v_b_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg(v___x_327_, v_s_328_, v_a_329_, v_b_330_);
lean_dec_ref(v_s_328_);
lean_dec(v___x_327_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ppString(lean_object* v_s_333_){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v_s_337_; uint32_t v___x_338_; lean_object* v___x_339_; 
v___x_334_ = ((lean_object*)(l_Lake_Toml_ppString___closed__0));
v___x_335_ = lean_string_utf8_byte_size(v_s_333_);
v___x_336_ = lean_unsigned_to_nat(0u);
v_s_337_ = l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg(v___x_335_, v_s_333_, v___x_336_, v___x_334_);
v___x_338_ = 34;
v___x_339_ = lean_string_push(v_s_337_, v___x_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ppString___boxed(lean_object* v_s_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lake_Toml_ppString(v_s_340_);
lean_dec_ref(v_s_340_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0(lean_object* v___x_342_, lean_object* v___x_343_, lean_object* v_s_344_, lean_object* v_inst_345_, lean_object* v_R_346_, lean_object* v_a_347_, lean_object* v_b_348_, lean_object* v_c_349_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___redArg(v___x_343_, v_s_344_, v_a_347_, v_b_348_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0___boxed(lean_object* v___x_351_, lean_object* v___x_352_, lean_object* v_s_353_, lean_object* v_inst_354_, lean_object* v_R_355_, lean_object* v_a_356_, lean_object* v_b_357_, lean_object* v_c_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_WellFounded_opaqueFix_u2083___at___00Lake_Toml_ppString_spec__0(v___x_351_, v___x_352_, v_s_353_, v_inst_354_, v_R_355_, v_a_356_, v_b_357_, v_c_358_);
lean_dec_ref(v_s_353_);
lean_dec(v___x_352_);
lean_dec_ref(v___x_351_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lake_Toml_ppSimpleKey_spec__0(lean_object* v_s_360_, lean_object* v_pos_361_){
_start:
{
lean_object* v_str_362_; lean_object* v_startInclusive_363_; lean_object* v_endExclusive_364_; lean_object* v___x_365_; lean_object* v___x_374_; lean_object* v___x_375_; uint8_t v_decide_376_; 
v_str_362_ = lean_ctor_get(v_s_360_, 0);
v_startInclusive_363_ = lean_ctor_get(v_s_360_, 1);
v_endExclusive_364_ = lean_ctor_get(v_s_360_, 2);
v___x_365_ = lean_nat_add(v_startInclusive_363_, v_pos_361_);
v___x_374_ = lean_unsigned_to_nat(0u);
v___x_375_ = lean_nat_sub(v_endExclusive_364_, v___x_365_);
v_decide_376_ = lean_nat_dec_eq(v___x_374_, v___x_375_);
lean_dec(v___x_375_);
if (v_decide_376_ == 0)
{
uint32_t v___x_377_; uint8_t v___y_389_; uint32_t v___x_394_; uint8_t v___x_395_; 
v___x_377_ = lean_string_utf8_get_fast(v_str_362_, v___x_365_);
v___x_394_ = 65;
v___x_395_ = lean_uint32_dec_le(v___x_394_, v___x_377_);
if (v___x_395_ == 0)
{
v___y_389_ = v___x_395_;
goto v___jp_388_;
}
else
{
uint32_t v___x_396_; uint8_t v___x_397_; 
v___x_396_ = 90;
v___x_397_ = lean_uint32_dec_le(v___x_377_, v___x_396_);
v___y_389_ = v___x_397_;
goto v___jp_388_;
}
v___jp_378_:
{
uint32_t v___x_379_; uint8_t v___x_380_; 
v___x_379_ = 95;
v___x_380_ = lean_uint32_dec_eq(v___x_377_, v___x_379_);
if (v___x_380_ == 0)
{
uint32_t v___x_381_; uint8_t v___x_382_; 
v___x_381_ = 45;
v___x_382_ = lean_uint32_dec_eq(v___x_377_, v___x_381_);
if (v___x_382_ == 0)
{
lean_dec(v___x_365_);
return v_pos_361_;
}
else
{
goto v___jp_366_;
}
}
else
{
goto v___jp_366_;
}
}
v___jp_383_:
{
uint32_t v___x_384_; uint8_t v___x_385_; 
v___x_384_ = 48;
v___x_385_ = lean_uint32_dec_le(v___x_384_, v___x_377_);
if (v___x_385_ == 0)
{
goto v___jp_378_;
}
else
{
uint32_t v___x_386_; uint8_t v___x_387_; 
v___x_386_ = 57;
v___x_387_ = lean_uint32_dec_le(v___x_377_, v___x_386_);
if (v___x_387_ == 0)
{
goto v___jp_378_;
}
else
{
goto v___jp_366_;
}
}
}
v___jp_388_:
{
if (v___y_389_ == 0)
{
uint32_t v___x_390_; uint8_t v___x_391_; 
v___x_390_ = 97;
v___x_391_ = lean_uint32_dec_le(v___x_390_, v___x_377_);
if (v___x_391_ == 0)
{
goto v___jp_383_;
}
else
{
uint32_t v___x_392_; uint8_t v___x_393_; 
v___x_392_ = 122;
v___x_393_ = lean_uint32_dec_le(v___x_377_, v___x_392_);
if (v___x_393_ == 0)
{
goto v___jp_383_;
}
else
{
goto v___jp_366_;
}
}
}
else
{
goto v___jp_366_;
}
}
}
else
{
lean_dec(v___x_365_);
return v_pos_361_;
}
v___jp_366_:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; uint8_t v___x_372_; 
v___x_367_ = lean_string_utf8_next_fast(v_str_362_, v___x_365_);
v___x_368_ = lean_nat_sub(v___x_367_, v___x_365_);
lean_dec(v___x_365_);
v___x_369_ = lean_nat_add(v_pos_361_, v___x_368_);
lean_dec(v___x_368_);
v___x_370_ = lean_unsigned_to_nat(1u);
v___x_371_ = lean_nat_add(v_pos_361_, v___x_370_);
v___x_372_ = lean_nat_dec_le(v___x_371_, v___x_369_);
lean_dec(v___x_371_);
if (v___x_372_ == 0)
{
lean_dec(v___x_369_);
return v_pos_361_;
}
else
{
lean_dec(v_pos_361_);
v_pos_361_ = v___x_369_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lake_Toml_ppSimpleKey_spec__0___boxed(lean_object* v_s_398_, lean_object* v_pos_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_String_Slice_Pos_skipWhile___at___00Lake_Toml_ppSimpleKey_spec__0(v_s_398_, v_pos_399_);
lean_dec_ref(v_s_398_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ppSimpleKey(lean_object* v_k_401_){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v_decide_406_; 
v___x_402_ = lean_unsigned_to_nat(0u);
v___x_403_ = lean_string_utf8_byte_size(v_k_401_);
lean_inc_ref(v_k_401_);
v___x_404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_404_, 0, v_k_401_);
lean_ctor_set(v___x_404_, 1, v___x_402_);
lean_ctor_set(v___x_404_, 2, v___x_403_);
v___x_405_ = l_String_Slice_Pos_skipWhile___at___00Lake_Toml_ppSimpleKey_spec__0(v___x_404_, v___x_402_);
lean_dec_ref_known(v___x_404_, 3);
v_decide_406_ = lean_nat_dec_eq(v___x_405_, v___x_403_);
lean_dec(v___x_405_);
if (v_decide_406_ == 0)
{
lean_object* v___x_407_; 
v___x_407_ = l_Lake_Toml_ppString(v_k_401_);
lean_dec_ref(v_k_401_);
return v___x_407_;
}
else
{
return v_k_401_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ppKey(lean_object* v_k_409_){
_start:
{
if (lean_obj_tag(v_k_409_) == 1)
{
lean_object* v_pre_410_; lean_object* v_str_411_; uint8_t v___x_412_; 
v_pre_410_ = lean_ctor_get(v_k_409_, 0);
lean_inc(v_pre_410_);
v_str_411_ = lean_ctor_get(v_k_409_, 1);
lean_inc_ref(v_str_411_);
lean_dec_ref_known(v_k_409_, 2);
v___x_412_ = l_Lean_Name_isAnonymous(v_pre_410_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_413_ = l_Lake_Toml_ppKey(v_pre_410_);
v___x_414_ = ((lean_object*)(l_Lake_Toml_ppKey___closed__0));
v___x_415_ = lean_string_append(v___x_413_, v___x_414_);
v___x_416_ = l_Lake_Toml_ppSimpleKey(v_str_411_);
v___x_417_ = lean_string_append(v___x_415_, v___x_416_);
lean_dec_ref(v___x_416_);
return v___x_417_;
}
else
{
lean_object* v___x_418_; 
lean_dec(v_pre_410_);
v___x_418_ = l_Lake_Toml_ppSimpleKey(v_str_411_);
return v___x_418_;
}
}
else
{
lean_object* v___x_419_; 
lean_dec(v_k_409_);
v___x_419_ = ((lean_object*)(l_Lake_Toml_instInhabitedValue_default___closed__0));
return v___x_419_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0(size_t v_sz_426_, size_t v_i_427_, lean_object* v_bs_428_){
_start:
{
uint8_t v___x_429_; 
v___x_429_ = lean_usize_dec_lt(v_i_427_, v_sz_426_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; 
v___x_430_ = l_unsafeCast___redArg(v_bs_428_);
lean_dec_ref(v_bs_428_);
return v___x_430_;
}
else
{
lean_object* v_v_431_; lean_object* v___x_432_; lean_object* v_fst_433_; lean_object* v_snd_434_; lean_object* v___x_435_; lean_object* v_bs_x27_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; size_t v___x_442_; size_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v_v_431_ = lean_array_uget_borrowed(v_bs_428_, v_i_427_);
v___x_432_ = l_unsafeCast___redArg(v_v_431_);
v_fst_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_fst_433_);
v_snd_434_ = lean_ctor_get(v___x_432_, 1);
lean_inc(v_snd_434_);
lean_dec(v___x_432_);
v___x_435_ = lean_unsigned_to_nat(0u);
v_bs_x27_436_ = lean_array_uset(v_bs_428_, v_i_427_, v___x_435_);
v___x_437_ = l_Lake_Toml_ppKey(v_fst_433_);
v___x_438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0___closed__0));
v___x_439_ = lean_string_append(v___x_437_, v___x_438_);
v___x_440_ = l_Lake_Toml_Value_toString(v_snd_434_);
v___x_441_ = lean_string_append(v___x_439_, v___x_440_);
lean_dec_ref(v___x_440_);
v___x_442_ = ((size_t)1ULL);
v___x_443_ = lean_usize_add(v_i_427_, v___x_442_);
v___x_444_ = l_unsafeCast___redArg(v___x_441_);
lean_dec_ref(v___x_441_);
v___x_445_ = lean_array_uset(v_bs_x27_436_, v_i_427_, v___x_444_);
v_i_427_ = v___x_443_;
v_bs_428_ = v___x_445_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ppInlineTable(lean_object* v_t_449_){
_start:
{
lean_object* v_items_450_; size_t v_sz_451_; size_t v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v_xs_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v_items_450_ = lean_ctor_get(v_t_449_, 0);
v_sz_451_ = lean_array_size(v_items_450_);
v___x_452_ = ((size_t)0ULL);
v___x_453_ = l_unsafeCast___redArg(v_items_450_);
v___x_454_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0(v_sz_451_, v___x_452_, v___x_453_);
v_xs_455_ = l_unsafeCast___redArg(v___x_454_);
lean_dec_ref(v___x_454_);
v___x_456_ = ((lean_object*)(l_Lake_Toml_ppInlineTable___closed__0));
v___x_457_ = ((lean_object*)(l_Lake_Toml_ppInlineArray___closed__1));
v___x_458_ = lean_array_to_list(v_xs_455_);
v___x_459_ = l_String_intercalate(v___x_457_, v___x_458_);
v___x_460_ = lean_string_append(v___x_456_, v___x_459_);
lean_dec_ref(v___x_459_);
v___x_461_ = ((lean_object*)(l_Lake_Toml_ppInlineTable___closed__1));
v___x_462_ = lean_string_append(v___x_460_, v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_Value_toString(lean_object* v_v_463_){
_start:
{
switch(lean_obj_tag(v_v_463_))
{
case 0:
{
lean_object* v_s_464_; lean_object* v___x_465_; 
v_s_464_ = lean_ctor_get(v_v_463_, 1);
lean_inc_ref(v_s_464_);
lean_dec_ref_known(v_v_463_, 2);
v___x_465_ = l_Lake_Toml_ppString(v_s_464_);
lean_dec_ref(v_s_464_);
return v___x_465_;
}
case 1:
{
lean_object* v_n_466_; lean_object* v___x_467_; 
v_n_466_ = lean_ctor_get(v_v_463_, 1);
lean_inc(v_n_466_);
lean_dec_ref_known(v_v_463_, 2);
v___x_467_ = l_Int_repr(v_n_466_);
lean_dec(v_n_466_);
return v___x_467_;
}
case 2:
{
double v_n_468_; lean_object* v___x_469_; 
v_n_468_ = lean_ctor_get_float(v_v_463_, sizeof(void*)*1);
lean_dec_ref_known(v_v_463_, 1);
v___x_469_ = lean_float_to_string(v_n_468_);
return v___x_469_;
}
case 3:
{
uint8_t v_b_470_; 
v_b_470_ = lean_ctor_get_uint8(v_v_463_, sizeof(void*)*1);
lean_dec_ref_known(v_v_463_, 1);
if (v_b_470_ == 0)
{
lean_object* v___x_471_; 
v___x_471_ = ((lean_object*)(l_Lake_Toml_Value_toString___closed__0));
return v___x_471_;
}
else
{
lean_object* v___x_472_; 
v___x_472_ = ((lean_object*)(l_Lake_Toml_Value_toString___closed__1));
return v___x_472_;
}
}
case 4:
{
lean_object* v_dt_473_; lean_object* v___x_474_; 
v_dt_473_ = lean_ctor_get(v_v_463_, 1);
lean_inc_ref(v_dt_473_);
lean_dec_ref_known(v_v_463_, 2);
v___x_474_ = l_Lake_Toml_DateTime_toString(v_dt_473_);
return v___x_474_;
}
case 5:
{
lean_object* v_xs_475_; lean_object* v___x_476_; 
v_xs_475_ = lean_ctor_get(v_v_463_, 1);
lean_inc_ref(v_xs_475_);
lean_dec_ref_known(v_v_463_, 2);
v___x_476_ = l_Lake_Toml_ppInlineArray(v_xs_475_);
lean_dec_ref(v_xs_475_);
return v___x_476_;
}
default: 
{
lean_object* v_xs_477_; lean_object* v___x_478_; 
v_xs_477_ = lean_ctor_get(v_v_463_, 1);
lean_inc_ref(v_xs_477_);
lean_dec_ref_known(v_v_463_, 2);
v___x_478_ = l_Lake_Toml_ppInlineTable(v_xs_477_);
lean_dec_ref(v_xs_477_);
return v___x_478_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineArray_spec__3(size_t v_sz_479_, size_t v_i_480_, lean_object* v_bs_481_){
_start:
{
uint8_t v___x_482_; 
v___x_482_ = lean_usize_dec_lt(v_i_480_, v_sz_479_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; 
v___x_483_ = l_unsafeCast___redArg(v_bs_481_);
lean_dec_ref(v_bs_481_);
return v___x_483_;
}
else
{
lean_object* v_v_484_; lean_object* v___x_485_; lean_object* v_bs_x27_486_; lean_object* v___x_487_; lean_object* v___x_488_; size_t v___x_489_; size_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v_v_484_ = lean_array_uget(v_bs_481_, v_i_480_);
v___x_485_ = lean_unsigned_to_nat(0u);
v_bs_x27_486_ = lean_array_uset(v_bs_481_, v_i_480_, v___x_485_);
v___x_487_ = l_unsafeCast___redArg(v_v_484_);
lean_dec(v_v_484_);
v___x_488_ = l_Lake_Toml_Value_toString(v___x_487_);
v___x_489_ = ((size_t)1ULL);
v___x_490_ = lean_usize_add(v_i_480_, v___x_489_);
v___x_491_ = l_unsafeCast___redArg(v___x_488_);
lean_dec_ref(v___x_488_);
v___x_492_ = lean_array_uset(v_bs_x27_486_, v_i_480_, v___x_491_);
v_i_480_ = v___x_490_;
v_bs_481_ = v___x_492_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ppInlineArray(lean_object* v_vs_494_){
_start:
{
size_t v_sz_495_; size_t v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v_xs_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_sz_495_ = lean_array_size(v_vs_494_);
v___x_496_ = ((size_t)0ULL);
v___x_497_ = l_unsafeCast___redArg(v_vs_494_);
v___x_498_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineArray_spec__3(v_sz_495_, v___x_496_, v___x_497_);
v_xs_499_ = l_unsafeCast___redArg(v___x_498_);
lean_dec_ref(v___x_498_);
v___x_500_ = ((lean_object*)(l_Lake_Toml_ppInlineArray___closed__0));
v___x_501_ = ((lean_object*)(l_Lake_Toml_ppInlineArray___closed__1));
v___x_502_ = lean_array_to_list(v_xs_499_);
v___x_503_ = l_String_intercalate(v___x_501_, v___x_502_);
v___x_504_ = lean_string_append(v___x_500_, v___x_503_);
lean_dec_ref(v___x_503_);
v___x_505_ = ((lean_object*)(l_Lake_Toml_ppInlineArray___closed__2));
v___x_506_ = lean_string_append(v___x_504_, v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ppInlineArray___boxed(lean_object* v_vs_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l_Lake_Toml_ppInlineArray(v_vs_507_);
lean_dec_ref(v_vs_507_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ppInlineTable___boxed(lean_object* v_t_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Lake_Toml_ppInlineTable(v_t_509_);
lean_dec_ref(v_t_509_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineArray_spec__3___boxed(lean_object* v_sz_511_, lean_object* v_i_512_, lean_object* v_bs_513_){
_start:
{
size_t v_sz_boxed_514_; size_t v_i_boxed_515_; lean_object* v_res_516_; 
v_sz_boxed_514_ = lean_unbox_usize(v_sz_511_);
lean_dec(v_sz_511_);
v_i_boxed_515_ = lean_unbox_usize(v_i_512_);
lean_dec(v_i_512_);
v_res_516_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineArray_spec__3(v_sz_boxed_514_, v_i_boxed_515_, v_bs_513_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0___boxed(lean_object* v_sz_517_, lean_object* v_i_518_, lean_object* v_bs_519_){
_start:
{
size_t v_sz_boxed_520_; size_t v_i_boxed_521_; lean_object* v_res_522_; 
v_sz_boxed_520_ = lean_unbox_usize(v_sz_517_);
lean_dec(v_sz_517_);
v_i_boxed_521_ = lean_unbox_usize(v_i_518_);
lean_dec(v_i_518_);
v_res_522_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0(v_sz_boxed_520_, v_i_boxed_521_, v_bs_519_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Data_Value_0__Lake_Toml_ppTable_appendKeyval(lean_object* v_s_526_, lean_object* v_k_527_, lean_object* v_v_528_){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_529_ = l_Lake_Toml_ppKey(v_k_527_);
v___x_530_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0___closed__0));
v___x_531_ = lean_string_append(v___x_529_, v___x_530_);
v___x_532_ = l_Lake_Toml_Value_toString(v_v_528_);
v___x_533_ = lean_string_append(v___x_531_, v___x_532_);
lean_dec_ref(v___x_532_);
v___x_534_ = ((lean_object*)(l___private_Lake_Toml_Data_Value_0__Lake_Toml_ppTable_appendKeyval___closed__0));
v___x_535_ = lean_string_append(v___x_533_, v___x_534_);
v___x_536_ = lean_string_append(v_s_526_, v___x_535_);
lean_dec_ref(v___x_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lake_Toml_ppTable_spec__2(lean_object* v_msg_537_){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = ((lean_object*)(l_Lake_Toml_instInhabitedValue_default___closed__0));
v___x_539_ = lean_panic_fn_borrowed(v___x_538_, v_msg_537_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__1(lean_object* v_as_540_, size_t v_i_541_, size_t v_stop_542_, lean_object* v_b_543_){
_start:
{
uint8_t v___x_544_; 
v___x_544_ = lean_usize_dec_eq(v_i_541_, v_stop_542_);
if (v___x_544_ == 0)
{
lean_object* v___x_545_; lean_object* v_fst_546_; lean_object* v_snd_547_; lean_object* v___x_548_; size_t v___x_549_; size_t v___x_550_; 
v___x_545_ = lean_array_uget_borrowed(v_as_540_, v_i_541_);
v_fst_546_ = lean_ctor_get(v___x_545_, 0);
v_snd_547_ = lean_ctor_get(v___x_545_, 1);
lean_inc(v_snd_547_);
lean_inc(v_fst_546_);
v___x_548_ = l___private_Lake_Toml_Data_Value_0__Lake_Toml_ppTable_appendKeyval(v_b_543_, v_fst_546_, v_snd_547_);
v___x_549_ = ((size_t)1ULL);
v___x_550_ = lean_usize_add(v_i_541_, v___x_549_);
v_i_541_ = v___x_550_;
v_b_543_ = v___x_548_;
goto _start;
}
else
{
return v_b_543_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__1___boxed(lean_object* v_as_552_, lean_object* v_i_553_, lean_object* v_stop_554_, lean_object* v_b_555_){
_start:
{
size_t v_i_boxed_556_; size_t v_stop_boxed_557_; lean_object* v_res_558_; 
v_i_boxed_556_ = lean_unbox_usize(v_i_553_);
lean_dec(v_i_553_);
v_stop_boxed_557_ = lean_unbox_usize(v_stop_554_);
lean_dec(v_stop_554_);
v_res_558_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__1(v_as_552_, v_i_boxed_556_, v_stop_boxed_557_, v_b_555_);
lean_dec_ref(v_as_552_);
return v_res_558_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__5(void){
_start:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_564_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__4));
v___x_565_ = lean_unsigned_to_nat(17u);
v___x_566_ = lean_unsigned_to_nat(128u);
v___x_567_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__3));
v___x_568_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__2));
v___x_569_ = l_mkPanicMessageWithDecl(v___x_568_, v___x_567_, v___x_566_, v___x_565_, v___x_564_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3(lean_object* v_fst_570_, lean_object* v_as_571_, size_t v_i_572_, size_t v_stop_573_, lean_object* v_b_574_){
_start:
{
lean_object* v___y_576_; lean_object* v___y_581_; uint8_t v___x_584_; 
v___x_584_ = lean_usize_dec_eq(v_i_572_, v_stop_573_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; 
v___x_585_ = lean_array_uget_borrowed(v_as_571_, v_i_572_);
if (lean_obj_tag(v___x_585_) == 6)
{
lean_object* v_xs_586_; lean_object* v_items_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v_s_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v_xs_586_ = lean_ctor_get(v___x_585_, 1);
v_items_587_ = lean_ctor_get(v_xs_586_, 0);
v___x_588_ = lean_unsigned_to_nat(0u);
v___x_589_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__0));
lean_inc(v_fst_570_);
v___x_590_ = l_Lake_Toml_ppKey(v_fst_570_);
v___x_591_ = lean_string_append(v___x_589_, v___x_590_);
lean_dec_ref(v___x_590_);
v___x_592_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__1));
v___x_593_ = lean_string_append(v___x_591_, v___x_592_);
v_s_594_ = lean_string_append(v_b_574_, v___x_593_);
lean_dec_ref(v___x_593_);
v___x_595_ = lean_array_get_size(v_items_587_);
v___x_596_ = lean_nat_dec_lt(v___x_588_, v___x_595_);
if (v___x_596_ == 0)
{
v___y_581_ = v_s_594_;
goto v___jp_580_;
}
else
{
uint8_t v___x_597_; 
v___x_597_ = lean_nat_dec_le(v___x_595_, v___x_595_);
if (v___x_597_ == 0)
{
if (v___x_596_ == 0)
{
v___y_581_ = v_s_594_;
goto v___jp_580_;
}
else
{
size_t v___x_598_; size_t v___x_599_; lean_object* v___x_600_; 
v___x_598_ = ((size_t)0ULL);
v___x_599_ = lean_usize_of_nat(v___x_595_);
v___x_600_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__1(v_items_587_, v___x_598_, v___x_599_, v_s_594_);
v___y_581_ = v___x_600_;
goto v___jp_580_;
}
}
else
{
size_t v___x_601_; size_t v___x_602_; lean_object* v___x_603_; 
v___x_601_ = ((size_t)0ULL);
v___x_602_ = lean_usize_of_nat(v___x_595_);
v___x_603_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__1(v_items_587_, v___x_601_, v___x_602_, v_s_594_);
v___y_581_ = v___x_603_;
goto v___jp_580_;
}
}
}
else
{
lean_object* v___x_604_; lean_object* v___x_605_; 
lean_dec_ref(v_b_574_);
v___x_604_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___closed__5);
v___x_605_ = l_panic___at___00Lake_Toml_ppTable_spec__2(v___x_604_);
v___y_576_ = v___x_605_;
goto v___jp_575_;
}
}
else
{
lean_dec(v_fst_570_);
return v_b_574_;
}
v___jp_575_:
{
size_t v___x_577_; size_t v___x_578_; 
v___x_577_ = ((size_t)1ULL);
v___x_578_ = lean_usize_add(v_i_572_, v___x_577_);
v_i_572_ = v___x_578_;
v_b_574_ = v___y_576_;
goto _start;
}
v___jp_580_:
{
uint32_t v___x_582_; lean_object* v___x_583_; 
v___x_582_ = 10;
v___x_583_ = lean_string_push(v___y_581_, v___x_582_);
v___y_576_ = v___x_583_;
goto v___jp_575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3___boxed(lean_object* v_fst_606_, lean_object* v_as_607_, lean_object* v_i_608_, lean_object* v_stop_609_, lean_object* v_b_610_){
_start:
{
size_t v_i_boxed_611_; size_t v_stop_boxed_612_; lean_object* v_res_613_; 
v_i_boxed_611_ = lean_unbox_usize(v_i_608_);
lean_dec(v_i_608_);
v_stop_boxed_612_ = lean_unbox_usize(v_stop_609_);
lean_dec(v_stop_609_);
v_res_613_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3(v_fst_606_, v_as_607_, v_i_boxed_611_, v_stop_boxed_612_, v_b_610_);
lean_dec_ref(v_as_607_);
return v_res_613_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Toml_ppTable_spec__4(lean_object* v___x_614_, lean_object* v_as_615_, size_t v_i_616_, size_t v_stop_617_){
_start:
{
uint8_t v___x_618_; 
v___x_618_ = lean_usize_dec_eq(v_i_616_, v_stop_617_);
if (v___x_618_ == 0)
{
uint8_t v___x_619_; lean_object* v___x_620_; 
v___x_619_ = 1;
v___x_620_ = lean_array_uget_borrowed(v_as_615_, v_i_616_);
if (lean_obj_tag(v___x_620_) == 6)
{
lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = lean_nat_dec_eq(v___x_614_, v___x_621_);
if (v___x_622_ == 0)
{
size_t v___x_623_; size_t v___x_624_; 
v___x_623_ = ((size_t)1ULL);
v___x_624_ = lean_usize_add(v_i_616_, v___x_623_);
v_i_616_ = v___x_624_;
goto _start;
}
else
{
return v___x_619_;
}
}
else
{
return v___x_619_;
}
}
else
{
uint8_t v___x_626_; 
v___x_626_ = 0;
return v___x_626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Toml_ppTable_spec__4___boxed(lean_object* v___x_627_, lean_object* v_as_628_, lean_object* v_i_629_, lean_object* v_stop_630_){
_start:
{
size_t v_i_boxed_631_; size_t v_stop_boxed_632_; uint8_t v_res_633_; lean_object* v_r_634_; 
v_i_boxed_631_ = lean_unbox_usize(v_i_629_);
lean_dec(v_i_629_);
v_stop_boxed_632_ = lean_unbox_usize(v_stop_630_);
lean_dec(v_stop_630_);
v_res_633_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Toml_ppTable_spec__4(v___x_627_, v_as_628_, v_i_boxed_631_, v_stop_boxed_632_);
lean_dec_ref(v_as_628_);
lean_dec(v___x_627_);
v_r_634_ = lean_box(v_res_633_);
return v_r_634_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5(lean_object* v_as_637_, size_t v_i_638_, size_t v_stop_639_, lean_object* v_b_640_){
_start:
{
lean_object* v___y_642_; uint8_t v___x_646_; 
v___x_646_ = lean_usize_dec_eq(v_i_638_, v_stop_639_);
if (v___x_646_ == 0)
{
lean_object* v_fst_647_; lean_object* v_snd_648_; lean_object* v___y_650_; lean_object* v___x_654_; lean_object* v_snd_655_; 
v_fst_647_ = lean_ctor_get(v_b_640_, 0);
v_snd_648_ = lean_ctor_get(v_b_640_, 1);
v___x_654_ = lean_array_uget(v_as_637_, v_i_638_);
v_snd_655_ = lean_ctor_get(v___x_654_, 1);
switch(lean_obj_tag(v_snd_655_))
{
case 5:
{
lean_object* v_fst_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_713_; 
lean_inc_ref(v_snd_655_);
v_fst_656_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_713_ == 0)
{
lean_object* v_unused_714_; 
v_unused_714_ = lean_ctor_get(v___x_654_, 1);
lean_dec(v_unused_714_);
v___x_658_ = v___x_654_;
v_isShared_659_ = v_isSharedCheck_713_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_fst_656_);
lean_dec(v___x_654_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_713_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v_xs_660_; lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_678_; 
v_xs_660_ = lean_ctor_get(v_snd_655_, 1);
lean_inc_ref(v_xs_660_);
lean_dec_ref_known(v_snd_655_, 2);
v___x_661_ = lean_array_get_size(v_xs_660_);
v___x_662_ = lean_unsigned_to_nat(0u);
v___x_678_ = lean_nat_dec_eq(v___x_661_, v___x_662_);
if (v___x_678_ == 0)
{
uint8_t v___x_679_; 
v___x_679_ = lean_nat_dec_lt(v___x_662_, v___x_661_);
if (v___x_679_ == 0)
{
goto v___jp_663_;
}
else
{
if (v___x_679_ == 0)
{
goto v___jp_663_;
}
else
{
size_t v___x_680_; size_t v___x_681_; uint8_t v___x_682_; 
v___x_680_ = ((size_t)0ULL);
v___x_681_ = lean_usize_of_nat(v___x_661_);
v___x_682_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Toml_ppTable_spec__4(v___x_661_, v_xs_660_, v___x_680_, v___x_681_);
if (v___x_682_ == 0)
{
goto v___jp_663_;
}
else
{
lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_697_; 
lean_inc(v_snd_648_);
lean_inc(v_fst_647_);
lean_del_object(v___x_658_);
v_isSharedCheck_697_ = !lean_is_exclusive(v_b_640_);
if (v_isSharedCheck_697_ == 0)
{
lean_object* v_unused_698_; lean_object* v_unused_699_; 
v_unused_698_ = lean_ctor_get(v_b_640_, 1);
lean_dec(v_unused_698_);
v_unused_699_ = lean_ctor_get(v_b_640_, 0);
lean_dec(v_unused_699_);
v___x_684_ = v_b_640_;
v_isShared_685_ = v_isSharedCheck_697_;
goto v_resetjp_683_;
}
else
{
lean_dec(v_b_640_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_697_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_695_; 
v___x_686_ = l_Lake_Toml_ppKey(v_fst_656_);
v___x_687_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Toml_ppInlineTable_spec__0___closed__0));
v___x_688_ = lean_string_append(v___x_686_, v___x_687_);
v___x_689_ = l_Lake_Toml_ppInlineArray(v_xs_660_);
lean_dec_ref(v_xs_660_);
v___x_690_ = lean_string_append(v___x_688_, v___x_689_);
lean_dec_ref(v___x_689_);
v___x_691_ = ((lean_object*)(l___private_Lake_Toml_Data_Value_0__Lake_Toml_ppTable_appendKeyval___closed__0));
v___x_692_ = lean_string_append(v___x_690_, v___x_691_);
v___x_693_ = lean_string_append(v_fst_647_, v___x_692_);
lean_dec_ref(v___x_692_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 0, v___x_693_);
v___x_695_ = v___x_684_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_693_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v_snd_648_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
v___y_642_ = v___x_695_;
goto v___jp_641_;
}
}
}
}
}
}
else
{
lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_710_; 
lean_inc(v_snd_648_);
lean_inc(v_fst_647_);
lean_dec_ref(v_xs_660_);
lean_del_object(v___x_658_);
v_isSharedCheck_710_ = !lean_is_exclusive(v_b_640_);
if (v_isSharedCheck_710_ == 0)
{
lean_object* v_unused_711_; lean_object* v_unused_712_; 
v_unused_711_ = lean_ctor_get(v_b_640_, 1);
lean_dec(v_unused_711_);
v_unused_712_ = lean_ctor_get(v_b_640_, 0);
lean_dec(v_unused_712_);
v___x_701_ = v_b_640_;
v_isShared_702_ = v_isSharedCheck_710_;
goto v_resetjp_700_;
}
else
{
lean_dec(v_b_640_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_710_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_708_; 
v___x_703_ = l_Lake_Toml_ppKey(v_fst_656_);
v___x_704_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5___closed__0));
v___x_705_ = lean_string_append(v___x_703_, v___x_704_);
v___x_706_ = lean_string_append(v_fst_647_, v___x_705_);
lean_dec_ref(v___x_705_);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 0, v___x_706_);
v___x_708_ = v___x_701_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v___x_706_);
lean_ctor_set(v_reuseFailAlloc_709_, 1, v_snd_648_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
v___y_642_ = v___x_708_;
goto v___jp_641_;
}
}
}
v___jp_663_:
{
uint8_t v___x_664_; 
v___x_664_ = lean_nat_dec_lt(v___x_662_, v___x_661_);
if (v___x_664_ == 0)
{
lean_dec_ref(v_xs_660_);
lean_del_object(v___x_658_);
lean_dec(v_fst_656_);
v___y_642_ = v_b_640_;
goto v___jp_641_;
}
else
{
uint8_t v___x_665_; 
v___x_665_ = lean_nat_dec_le(v___x_661_, v___x_661_);
if (v___x_665_ == 0)
{
if (v___x_664_ == 0)
{
lean_dec_ref(v_xs_660_);
lean_del_object(v___x_658_);
lean_dec(v_fst_656_);
v___y_642_ = v_b_640_;
goto v___jp_641_;
}
else
{
size_t v___x_666_; size_t v___x_667_; lean_object* v___x_668_; lean_object* v___x_670_; 
lean_inc(v_snd_648_);
lean_inc(v_fst_647_);
lean_dec_ref(v_b_640_);
v___x_666_ = ((size_t)0ULL);
v___x_667_ = lean_usize_of_nat(v___x_661_);
v___x_668_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3(v_fst_656_, v_xs_660_, v___x_666_, v___x_667_, v_snd_648_);
lean_dec_ref(v_xs_660_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 1, v___x_668_);
lean_ctor_set(v___x_658_, 0, v_fst_647_);
v___x_670_ = v___x_658_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_fst_647_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v___x_668_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
v___y_642_ = v___x_670_;
goto v___jp_641_;
}
}
}
else
{
size_t v___x_672_; size_t v___x_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
lean_inc(v_snd_648_);
lean_inc(v_fst_647_);
lean_dec_ref(v_b_640_);
v___x_672_ = ((size_t)0ULL);
v___x_673_ = lean_usize_of_nat(v___x_661_);
v___x_674_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__3(v_fst_656_, v_xs_660_, v___x_672_, v___x_673_, v_snd_648_);
lean_dec_ref(v_xs_660_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 1, v___x_674_);
lean_ctor_set(v___x_658_, 0, v_fst_647_);
v___x_676_ = v___x_658_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_fst_647_);
lean_ctor_set(v_reuseFailAlloc_677_, 1, v___x_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
v___y_642_ = v___x_676_;
goto v___jp_641_;
}
}
}
}
}
}
case 6:
{
lean_object* v_xs_715_; lean_object* v_fst_716_; lean_object* v_items_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v_fs_723_; lean_object* v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; 
lean_inc(v_snd_648_);
lean_inc(v_fst_647_);
lean_dec_ref(v_b_640_);
v_xs_715_ = lean_ctor_get(v_snd_655_, 1);
lean_inc_ref(v_xs_715_);
v_fst_716_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_fst_716_);
lean_dec(v___x_654_);
v_items_717_ = lean_ctor_get(v_xs_715_, 0);
lean_inc_ref(v_items_717_);
lean_dec_ref(v_xs_715_);
v___x_718_ = ((lean_object*)(l_Lake_Toml_ppInlineArray___closed__0));
v___x_719_ = l_Lake_Toml_ppKey(v_fst_716_);
v___x_720_ = lean_string_append(v___x_718_, v___x_719_);
lean_dec_ref(v___x_719_);
v___x_721_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5___closed__1));
v___x_722_ = lean_string_append(v___x_720_, v___x_721_);
v_fs_723_ = lean_string_append(v_snd_648_, v___x_722_);
lean_dec_ref(v___x_722_);
v___x_724_ = lean_unsigned_to_nat(0u);
v___x_725_ = lean_array_get_size(v_items_717_);
v___x_726_ = lean_nat_dec_lt(v___x_724_, v___x_725_);
if (v___x_726_ == 0)
{
lean_dec_ref(v_items_717_);
v___y_650_ = v_fs_723_;
goto v___jp_649_;
}
else
{
uint8_t v___x_727_; 
v___x_727_ = lean_nat_dec_le(v___x_725_, v___x_725_);
if (v___x_727_ == 0)
{
if (v___x_726_ == 0)
{
lean_dec_ref(v_items_717_);
v___y_650_ = v_fs_723_;
goto v___jp_649_;
}
else
{
size_t v___x_728_; size_t v___x_729_; lean_object* v___x_730_; 
v___x_728_ = ((size_t)0ULL);
v___x_729_ = lean_usize_of_nat(v___x_725_);
v___x_730_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__1(v_items_717_, v___x_728_, v___x_729_, v_fs_723_);
lean_dec_ref(v_items_717_);
v___y_650_ = v___x_730_;
goto v___jp_649_;
}
}
else
{
size_t v___x_731_; size_t v___x_732_; lean_object* v___x_733_; 
v___x_731_ = ((size_t)0ULL);
v___x_732_ = lean_usize_of_nat(v___x_725_);
v___x_733_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__1(v_items_717_, v___x_731_, v___x_732_, v_fs_723_);
lean_dec_ref(v_items_717_);
v___y_650_ = v___x_733_;
goto v___jp_649_;
}
}
}
default: 
{
lean_object* v_fst_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_742_; 
lean_inc(v_snd_655_);
lean_inc(v_snd_648_);
lean_inc(v_fst_647_);
lean_dec_ref(v_b_640_);
v_fst_734_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_742_ == 0)
{
lean_object* v_unused_743_; 
v_unused_743_ = lean_ctor_get(v___x_654_, 1);
lean_dec(v_unused_743_);
v___x_736_ = v___x_654_;
v_isShared_737_ = v_isSharedCheck_742_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_fst_734_);
lean_dec(v___x_654_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_742_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_738_; lean_object* v___x_740_; 
v___x_738_ = l___private_Lake_Toml_Data_Value_0__Lake_Toml_ppTable_appendKeyval(v_fst_647_, v_fst_734_, v_snd_655_);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 1, v_snd_648_);
lean_ctor_set(v___x_736_, 0, v___x_738_);
v___x_740_ = v___x_736_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_738_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_snd_648_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
v___y_642_ = v___x_740_;
goto v___jp_641_;
}
}
}
}
v___jp_649_:
{
uint32_t v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_651_ = 10;
v___x_652_ = lean_string_push(v___y_650_, v___x_651_);
v___x_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_653_, 0, v_fst_647_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v___y_642_ = v___x_653_;
goto v___jp_641_;
}
}
else
{
return v_b_640_;
}
v___jp_641_:
{
size_t v___x_643_; size_t v___x_644_; 
v___x_643_ = ((size_t)1ULL);
v___x_644_ = lean_usize_add(v_i_638_, v___x_643_);
v_i_638_ = v___x_644_;
v_b_640_ = v___y_642_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5___boxed(lean_object* v_as_744_, lean_object* v_i_745_, lean_object* v_stop_746_, lean_object* v_b_747_){
_start:
{
size_t v_i_boxed_748_; size_t v_stop_boxed_749_; lean_object* v_res_750_; 
v_i_boxed_748_ = lean_unbox_usize(v_i_745_);
lean_dec(v_i_745_);
v_stop_boxed_749_ = lean_unbox_usize(v_stop_746_);
lean_dec(v_stop_746_);
v_res_750_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5(v_as_744_, v_i_boxed_748_, v_stop_boxed_749_, v_b_747_);
lean_dec_ref(v_as_744_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lake_Toml_ppTable_spec__0(lean_object* v_s_751_, lean_object* v_pos_752_){
_start:
{
lean_object* v_str_753_; lean_object* v_startInclusive_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; uint8_t v_decide_758_; 
v_str_753_ = lean_ctor_get(v_s_751_, 0);
v_startInclusive_754_ = lean_ctor_get(v_s_751_, 1);
v___x_755_ = lean_nat_add(v_startInclusive_754_, v_pos_752_);
v___x_756_ = lean_nat_sub(v___x_755_, v_startInclusive_754_);
v___x_757_ = lean_unsigned_to_nat(0u);
v_decide_758_ = lean_nat_dec_eq(v___x_756_, v___x_757_);
if (v_decide_758_ == 0)
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_767_; uint32_t v___x_768_; uint32_t v___x_769_; uint8_t v___x_770_; 
lean_inc(v_startInclusive_754_);
lean_inc_ref(v_str_753_);
v___x_759_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_759_, 0, v_str_753_);
lean_ctor_set(v___x_759_, 1, v_startInclusive_754_);
lean_ctor_set(v___x_759_, 2, v___x_755_);
v___x_760_ = lean_unsigned_to_nat(1u);
v___x_761_ = lean_nat_sub(v___x_756_, v___x_760_);
lean_dec(v___x_756_);
v___x_762_ = l_String_Slice_posLE(v___x_759_, v___x_761_);
lean_dec_ref_known(v___x_759_, 3);
v___x_767_ = lean_nat_add(v_startInclusive_754_, v___x_762_);
v___x_768_ = lean_string_utf8_get_fast(v_str_753_, v___x_767_);
lean_dec(v___x_767_);
v___x_769_ = 32;
v___x_770_ = lean_uint32_dec_eq(v___x_768_, v___x_769_);
if (v___x_770_ == 0)
{
uint32_t v___x_771_; uint8_t v___x_772_; 
v___x_771_ = 9;
v___x_772_ = lean_uint32_dec_eq(v___x_768_, v___x_771_);
if (v___x_772_ == 0)
{
uint32_t v___x_773_; uint8_t v___x_774_; 
v___x_773_ = 13;
v___x_774_ = lean_uint32_dec_eq(v___x_768_, v___x_773_);
if (v___x_774_ == 0)
{
uint32_t v___x_775_; uint8_t v___x_776_; 
v___x_775_ = 10;
v___x_776_ = lean_uint32_dec_eq(v___x_768_, v___x_775_);
if (v___x_776_ == 0)
{
lean_dec(v___x_762_);
return v_pos_752_;
}
else
{
goto v___jp_763_;
}
}
else
{
goto v___jp_763_;
}
}
else
{
goto v___jp_763_;
}
}
else
{
goto v___jp_763_;
}
v___jp_763_:
{
lean_object* v___x_764_; uint8_t v___x_765_; 
v___x_764_ = lean_nat_add(v___x_762_, v___x_760_);
v___x_765_ = lean_nat_dec_le(v___x_764_, v_pos_752_);
lean_dec(v___x_764_);
if (v___x_765_ == 0)
{
lean_dec(v___x_762_);
return v_pos_752_;
}
else
{
lean_dec(v_pos_752_);
v_pos_752_ = v___x_762_;
goto _start;
}
}
}
else
{
lean_dec(v___x_756_);
lean_dec(v___x_755_);
return v_pos_752_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lake_Toml_ppTable_spec__0___boxed(lean_object* v_s_777_, lean_object* v_pos_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_String_Slice_Pos_revSkipWhile___at___00Lake_Toml_ppTable_spec__0(v_s_777_, v_pos_778_);
lean_dec_ref(v_s_777_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ppTable(lean_object* v_t_782_){
_start:
{
lean_object* v_fst_784_; lean_object* v_snd_785_; lean_object* v___y_796_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v_items_801_; lean_object* v___x_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_799_ = ((lean_object*)(l_Lake_Toml_instInhabitedValue_default___closed__0));
v___x_800_ = ((lean_object*)(l_Lake_Toml_ppTable___closed__0));
v_items_801_ = lean_ctor_get(v_t_782_, 0);
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_array_get_size(v_items_801_);
v___x_804_ = lean_nat_dec_lt(v___x_802_, v___x_803_);
if (v___x_804_ == 0)
{
v_fst_784_ = v___x_799_;
v_snd_785_ = v___x_799_;
goto v___jp_783_;
}
else
{
uint8_t v___x_805_; 
v___x_805_ = lean_nat_dec_le(v___x_803_, v___x_803_);
if (v___x_805_ == 0)
{
if (v___x_804_ == 0)
{
v_fst_784_ = v___x_799_;
v_snd_785_ = v___x_799_;
goto v___jp_783_;
}
else
{
size_t v___x_806_; size_t v___x_807_; lean_object* v___x_808_; 
v___x_806_ = ((size_t)0ULL);
v___x_807_ = lean_usize_of_nat(v___x_803_);
v___x_808_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5(v_items_801_, v___x_806_, v___x_807_, v___x_800_);
v___y_796_ = v___x_808_;
goto v___jp_795_;
}
}
else
{
size_t v___x_809_; size_t v___x_810_; lean_object* v___x_811_; 
v___x_809_ = ((size_t)0ULL);
v___x_810_ = lean_usize_of_nat(v___x_803_);
v___x_811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Toml_ppTable_spec__5(v_items_801_, v___x_809_, v___x_810_, v___x_800_);
v___y_796_ = v___x_811_;
goto v___jp_795_;
}
}
v___jp_783_:
{
uint32_t v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_786_ = 10;
v___x_787_ = lean_string_push(v_fst_784_, v___x_786_);
v___x_788_ = lean_string_append(v___x_787_, v_snd_785_);
lean_dec_ref(v_snd_785_);
v___x_789_ = lean_unsigned_to_nat(0u);
v___x_790_ = lean_string_utf8_byte_size(v___x_788_);
lean_inc_ref(v___x_788_);
v___x_791_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_791_, 0, v___x_788_);
lean_ctor_set(v___x_791_, 1, v___x_789_);
lean_ctor_set(v___x_791_, 2, v___x_790_);
v___x_792_ = l_String_Slice_Pos_revSkipWhile___at___00Lake_Toml_ppTable_spec__0(v___x_791_, v___x_790_);
lean_dec_ref_known(v___x_791_, 3);
v___x_793_ = lean_string_utf8_extract_fast(v___x_788_, v___x_789_, v___x_792_);
lean_dec(v___x_792_);
lean_dec_ref(v___x_788_);
v___x_794_ = lean_string_push(v___x_793_, v___x_786_);
return v___x_794_;
}
v___jp_795_:
{
lean_object* v_fst_797_; lean_object* v_snd_798_; 
v_fst_797_ = lean_ctor_get(v___y_796_, 0);
lean_inc(v_fst_797_);
v_snd_798_ = lean_ctor_get(v___y_796_, 1);
lean_inc(v_snd_798_);
lean_dec_ref(v___y_796_);
v_fst_784_ = v_fst_797_;
v_snd_785_ = v_snd_798_;
goto v___jp_783_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_ppTable___boxed(lean_object* v_t_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lake_Toml_ppTable(v_t_812_);
lean_dec_ref(v_t_812_);
return v_res_813_;
}
}
lean_object* runtime_initialize_Init_Data_Float_Float(uint8_t builtin);
lean_object* runtime_initialize_Lake_Toml_Data_Dict(uint8_t builtin);
lean_object* runtime_initialize_Lake_Toml_Data_DateTime(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_String(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Toml_Data_Value(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init_Data_Float_Float(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Data_Dict(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Data_DateTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_Toml_Table_empty = _init_l_Lake_Toml_Table_empty();
lean_mark_persistent(l_Lake_Toml_Table_empty);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Toml_Data_Value(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Float_Float(uint8_t builtin);
lean_object* initialize_Lake_Toml_Data_Dict(uint8_t builtin);
lean_object* initialize_Lake_Toml_Data_DateTime(uint8_t builtin);
lean_object* initialize_Lake_Util_String(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Toml_Data_Value(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Float_Float(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Toml_Data_Dict(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Toml_Data_DateTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Data_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Toml_Data_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Toml_Data_Value(builtin);
}
#ifdef __cplusplus
}
#endif

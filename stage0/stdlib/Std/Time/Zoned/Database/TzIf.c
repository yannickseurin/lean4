// Lean compiler output
// Module: Std.Time.Zoned.Database.TzIf
// Imports: public import Init.Data.Range.Polymorphic.Iterators public import Std.Internal.Parsec import Init.Data.Int.Repr
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
uint64_t l_ByteArray_toUInt64BE_x21(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Int_negOfNat(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_string_length(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_String_quote(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint32_t lean_uint8_to_uint32(uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_take(lean_object*, lean_object*);
lean_object* l_ByteSlice_toByteArray(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_byte_array_get(lean_object*, lean_object*);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes(lean_object*, lean_object*);
uint64_t l_ByteArray_toUInt64LE_x21(lean_object*);
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__0;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__1_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__2;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__3_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__4;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Time"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__5 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__5_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__6;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Zoned"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__7 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__7_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__8;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Database"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__9 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__9_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__10;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "TzIf"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__11 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__11_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__12;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__13;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__14;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__15;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "TimeZone"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__16 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__16_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__17;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "TZif"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__18 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__18_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__19;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "termInt32"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__20 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__20_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int32"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__22 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__22_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__22_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__23 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__23_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__24;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__1;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__2_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__4 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__5 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__5_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__3_value),((lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__5_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__6 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__6_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "termInt64"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int64"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__2_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__3_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__4;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt64__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt64__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_TZif_instReprHeader_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isutcnt"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__10 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__11 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__11_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isstdcnt"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__12 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__12_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__13_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__14;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "leapcnt"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__15 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__15_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__15_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__16 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__16_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timecnt"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__17 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__17_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__17_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__18 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__18_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "typecnt"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__19 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__19_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__19_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__20 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__20_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "charcnt"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__21 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__21_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__21_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__22 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__22_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__23 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__23_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__24;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__26 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__26_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__23_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__27 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__27_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_TZif_instReprHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_TZif_instReprHeader_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instReprHeader = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instInhabitedHeader_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 32, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedHeader_default___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedHeader_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedHeader_default = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedHeader_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedHeader = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedHeader_default___closed__0_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "gmtOffset"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__2_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__4;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isDst"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "abbreviationIndex"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__9_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__10;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_TZif_instReprLocalTimeType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLocalTimeType___closed__0_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "transitionTime"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__2_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__4;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "correction"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__7;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_TZif_instReprLeapSecond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprLeapSecond___closed__0_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5_spec__10_spec__16_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5_spec__10_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5_spec__10(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__0 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__0_value;
static const lean_ctor_object l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__1 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__1_value;
static const lean_string_object l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__2 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__2_value;
static lean_once_cell_t l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__3;
static lean_once_cell_t l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4;
static const lean_ctor_object l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__5 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__5_value;
static const lean_ctor_object l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__2_value)}};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__6 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__6_value;
static const lean_string_object l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__7 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__8 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6_spec__10_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2_spec__4_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0_spec__1_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2_spec__4_spec__7_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4_spec__8_spec__13_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4_spec__8_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4(lean_object*);
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__2_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__4;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "transitionTimes"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "transitionIndices"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "localTimeTypes"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__10 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__11 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__11_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "abbreviations"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__12 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__12_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__13_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__14;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "leapSeconds"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__15 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__15_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__15_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__16 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__16_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__17;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "stdWallIndicators"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__18 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__18_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__18_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__19 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__19_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "utLocalIndicators"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__20 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__20_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__20_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__21 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__21_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_TZif_instReprTZifV1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV1___closed__0_value;
static const lean_array_object l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedHeader_default___closed__0_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__0_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__0_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__0_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__0_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__0_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__0_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedTZifV1 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__1_value;
static const lean_string_object l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toTZifV1"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__2_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "footer"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_TZif_instReprTZifV2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZifV2___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instInhabitedTZifV2_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedTZifV2_default___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV2_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedTZifV2_default = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV2_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedTZifV2 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV2_default___closed__0_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZif_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZif_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "v1"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__2_value),((lean_object*)&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__4;
static const lean_string_object l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "v2"};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_TZif_instReprTZif___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_TZif_instReprTZif_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_TZif_instReprTZif___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instReprTZif = (const lean_object*)&l_Std_Time_TimeZone_TZif_instReprTZif___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_TZif_instInhabitedTZif_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZifV1_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedTZif_default___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZif_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedTZif_default = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZif_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_TZif_instInhabitedTZif = (const lean_object*)&l_Std_Time_TimeZone_TZif_instInhabitedTZif_default___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0___boxed__const__1;
LEAN_EXPORT uint32_t l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0___boxed(lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Std.Time.Zoned.Database.TzIf"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__0_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "_private.Std.Time.Zoned.Database.TzIf.0.Std.Time.TimeZone.TZif.toUInt32"};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__1_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "assertion violation: bs.size == 4\n  "};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__2_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__3;
LEAN_EXPORT uint32_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt32(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt32___boxed(lean_object*);
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__0;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__1;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu64(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pi64(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu32(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pi32(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu8(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pbool(lean_object*);
static lean_once_cell_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseHeader___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseHeader___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseHeader(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLocalTimeType(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLeapSecond(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionTimes(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionTimes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionIndices(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionIndices___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLocalTimeTypes(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLocalTimeTypes___boxed(lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations___closed__0_value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLeapSeconds(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLeapSeconds___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseIndicators(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseIndicators___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTZifV1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "condition not satisfied"};
static const lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__0___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__0___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__0___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__0___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__0(lean_object*, lean_object*);
static const lean_array_object l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTZifV2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_parse(lean_object*);
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_unsafeCast___redArg(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__1));
v___x_5_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__0, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__0_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__0);
v___x_6_ = l_Lean_Name_str___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__4(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__3));
v___x_9_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__2, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__2_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__2);
v___x_10_ = l_Lean_Name_str___override(v___x_9_, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__6(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__5));
v___x_13_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__4, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__4_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__4);
v___x_14_ = l_Lean_Name_str___override(v___x_13_, v___x_12_);
return v___x_14_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__8(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__7));
v___x_17_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__6, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__6_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__6);
v___x_18_ = l_Lean_Name_str___override(v___x_17_, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__10(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__9));
v___x_21_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__8, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__8_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__8);
v___x_22_ = l_Lean_Name_str___override(v___x_21_, v___x_20_);
return v___x_22_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__12(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__11));
v___x_25_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__10, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__10_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__10);
v___x_26_ = l_Lean_Name_str___override(v___x_25_, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__13(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_unsigned_to_nat(0u);
v___x_28_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__12, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__12_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__12);
v___x_29_ = l_Lean_Name_num___override(v___x_28_, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__14(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__3));
v___x_31_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__13, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__13_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__13);
v___x_32_ = l_Lean_Name_str___override(v___x_31_, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__15(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__5));
v___x_34_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__14, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__14_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__14);
v___x_35_ = l_Lean_Name_str___override(v___x_34_, v___x_33_);
return v___x_35_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__17(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__16));
v___x_38_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__15, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__15_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__15);
v___x_39_ = l_Lean_Name_str___override(v___x_38_, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__19(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__18));
v___x_42_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__17, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__17_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__17);
v___x_43_ = l_Lean_Name_str___override(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_45_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__20));
v___x_46_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__19, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__19_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__19);
v___x_47_ = l_Lean_Name_str___override(v___x_46_, v___x_45_);
return v___x_47_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__24(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_51_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__23));
v___x_52_ = lean_unsigned_to_nat(1024u);
v___x_53_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21);
v___x_54_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set(v___x_54_, 1, v___x_52_);
lean_ctor_set(v___x_54_, 2, v___x_51_);
return v___x_54_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__24, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__24_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__24);
return v___x_55_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__1(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__0));
v___x_58_ = l_String_toRawSubstring_x27(v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1(lean_object* v_x_72_, lean_object* v_a_73_, lean_object* v_a_74_){
_start:
{
lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_75_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21);
v___x_76_ = l_Lean_Syntax_isOfKind(v_x_72_, v___x_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = lean_box(1);
v___x_78_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v_a_74_);
return v___x_78_;
}
else
{
lean_object* v_quotContext_79_; lean_object* v_currMacroScope_80_; lean_object* v_ref_81_; uint8_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v_quotContext_79_ = lean_ctor_get(v_a_73_, 1);
v_currMacroScope_80_ = lean_ctor_get(v_a_73_, 2);
v_ref_81_ = lean_ctor_get(v_a_73_, 5);
v___x_82_ = 0;
v___x_83_ = l_Lean_SourceInfo_fromRef(v_ref_81_, v___x_82_);
v___x_84_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__1, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__1_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__1);
v___x_85_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__2));
lean_inc(v_currMacroScope_80_);
lean_inc(v_quotContext_79_);
v___x_86_ = l_Lean_addMacroScope(v_quotContext_79_, v___x_85_, v_currMacroScope_80_);
v___x_87_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__6));
v___x_88_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_88_, 0, v___x_83_);
lean_ctor_set(v___x_88_, 1, v___x_84_);
lean_ctor_set(v___x_88_, 2, v___x_86_);
lean_ctor_set(v___x_88_, 3, v___x_87_);
v___x_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set(v___x_89_, 1, v_a_74_);
return v___x_89_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___boxed(lean_object* v_x_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1(v_x_90_, v_a_91_, v_a_92_);
lean_dec_ref(v_a_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1(lean_object* v_x_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1___closed__1));
lean_inc(v_x_97_);
v___x_101_ = l_Lean_Syntax_isOfKind(v_x_97_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_dec(v_x_97_);
v___x_102_ = lean_box(0);
v___x_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v_a_99_);
return v___x_103_;
}
else
{
lean_object* v_ref_104_; uint8_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v_ref_104_ = l_Lean_replaceRef(v_x_97_, v_a_98_);
lean_dec(v_x_97_);
v___x_105_ = 0;
v___x_106_ = l_Lean_SourceInfo_fromRef(v_ref_104_, v___x_105_);
lean_dec(v_ref_104_);
v___x_107_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__21);
v___x_108_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__22));
lean_inc(v___x_106_);
v___x_109_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_106_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
v___x_110_ = l_Lean_Syntax_node1(v___x_106_, v___x_107_, v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v_a_99_);
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1___boxed(lean_object* v_x_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1(v_x_112_, v_a_113_, v_a_114_);
lean_dec(v_a_113_);
return v_res_115_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_117_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__0));
v___x_118_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__19, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__19_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__19);
v___x_119_ = l_Lean_Name_str___override(v___x_118_, v___x_117_);
return v___x_119_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__4(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_123_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__3));
v___x_124_ = lean_unsigned_to_nat(1024u);
v___x_125_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1);
v___x_126_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_124_);
lean_ctor_set(v___x_126_, 2, v___x_123_);
return v___x_126_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64(void){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__4, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__4_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__4);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt64__1(lean_object* v_x_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1);
v___x_132_ = l_Lean_Syntax_isOfKind(v_x_128_, v___x_131_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = lean_box(1);
v___x_134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set(v___x_134_, 1, v_a_130_);
return v___x_134_;
}
else
{
lean_object* v_quotContext_135_; lean_object* v_currMacroScope_136_; lean_object* v_ref_137_; uint8_t v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_quotContext_135_ = lean_ctor_get(v_a_129_, 1);
v_currMacroScope_136_ = lean_ctor_get(v_a_129_, 2);
v_ref_137_ = lean_ctor_get(v_a_129_, 5);
v___x_138_ = 0;
v___x_139_ = l_Lean_SourceInfo_fromRef(v_ref_137_, v___x_138_);
v___x_140_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__1, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__1_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__1);
v___x_141_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__2));
lean_inc(v_currMacroScope_136_);
lean_inc(v_quotContext_135_);
v___x_142_ = l_Lean_addMacroScope(v_quotContext_135_, v___x_141_, v_currMacroScope_136_);
v___x_143_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt32__1___closed__6));
v___x_144_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_144_, 0, v___x_139_);
lean_ctor_set(v___x_144_, 1, v___x_140_);
lean_ctor_set(v___x_144_, 2, v___x_142_);
lean_ctor_set(v___x_144_, 3, v___x_143_);
v___x_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
lean_ctor_set(v___x_145_, 1, v_a_130_);
return v___x_145_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt64__1___boxed(lean_object* v_x_146_, lean_object* v_a_147_, lean_object* v_a_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______macroRules____private__Std__Time__Zoned__Database__TzIf__0__Std__Time__TimeZone__TZif__termInt64__1(v_x_146_, v_a_147_, v_a_148_);
lean_dec_ref(v_a_147_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__2(lean_object* v_x_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__1___closed__1));
lean_inc(v_x_150_);
v___x_154_ = l_Lean_Syntax_isOfKind(v_x_150_, v___x_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; lean_object* v___x_156_; 
lean_dec(v_x_150_);
v___x_155_ = lean_box(0);
v___x_156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v_a_152_);
return v___x_156_;
}
else
{
lean_object* v_ref_157_; uint8_t v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_ref_157_ = l_Lean_replaceRef(v_x_150_, v_a_151_);
lean_dec(v_x_150_);
v___x_158_ = 0;
v___x_159_ = l_Lean_SourceInfo_fromRef(v_ref_157_, v___x_158_);
lean_dec(v_ref_157_);
v___x_160_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__1);
v___x_161_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64___closed__2));
lean_inc(v___x_159_);
v___x_162_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_159_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = l_Lean_Syntax_node1(v___x_159_, v___x_160_, v___x_162_);
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v_a_152_);
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__2___boxed(lean_object* v_x_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif___aux__Std__Time__Zoned__Database__TzIf______unexpand__Int__2(v_x_165_, v_a_166_, v_a_167_);
lean_dec(v_a_166_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_TZif_instReprHeader_repr_spec__0(lean_object* v_a_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_nat_to_int(v_a_169_);
return v___x_170_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = lean_unsigned_to_nat(11u);
v___x_185_ = lean_nat_to_int(v___x_184_);
return v___x_185_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_unsigned_to_nat(12u);
v___x_196_ = lean_nat_to_int(v___x_195_);
return v___x_196_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__0));
v___x_211_ = lean_string_length(v___x_210_);
return v___x_211_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__24, &l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__24_once, _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__24);
v___x_213_ = lean_nat_to_int(v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg(lean_object* v_x_218_){
_start:
{
uint8_t v_version_219_; uint32_t v_isutcnt_220_; uint32_t v_isstdcnt_221_; uint32_t v_leapcnt_222_; uint32_t v_timecnt_223_; uint32_t v_typecnt_224_; uint32_t v_charcnt_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_version_219_ = lean_ctor_get_uint8(v_x_218_, 24);
v_isutcnt_220_ = lean_ctor_get_uint32(v_x_218_, 0);
v_isstdcnt_221_ = lean_ctor_get_uint32(v_x_218_, 4);
v_leapcnt_222_ = lean_ctor_get_uint32(v_x_218_, 8);
v_timecnt_223_ = lean_ctor_get_uint32(v_x_218_, 12);
v_typecnt_224_ = lean_ctor_get_uint32(v_x_218_, 16);
v_charcnt_225_ = lean_ctor_get_uint32(v_x_218_, 20);
v___x_226_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5));
v___x_227_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__6));
v___x_228_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__7, &l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__7_once, _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__7);
v___x_229_ = lean_uint8_to_nat(v_version_219_);
v___x_230_ = l_Nat_reprFast(v___x_229_);
v___x_231_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
v___x_232_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_228_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = 0;
v___x_234_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set_uint8(v___x_234_, sizeof(void*)*1, v___x_233_);
v___x_235_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_227_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
v___x_236_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__9));
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_box(1);
v___x_239_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__11));
v___x_241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v___x_226_);
v___x_243_ = lean_uint32_to_nat(v_isutcnt_220_);
v___x_244_ = l_Nat_reprFast(v___x_243_);
v___x_245_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
v___x_246_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_228_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set_uint8(v___x_247_, sizeof(void*)*1, v___x_233_);
v___x_248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_242_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
lean_ctor_set(v___x_249_, 1, v___x_236_);
v___x_250_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
lean_ctor_set(v___x_250_, 1, v___x_238_);
v___x_251_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__13));
v___x_252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v___x_226_);
v___x_254_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__14, &l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__14_once, _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__14);
v___x_255_ = lean_uint32_to_nat(v_isstdcnt_221_);
v___x_256_ = l_Nat_reprFast(v___x_255_);
v___x_257_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
v___x_258_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_254_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set_uint8(v___x_259_, sizeof(void*)*1, v___x_233_);
v___x_260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_253_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
v___x_261_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set(v___x_261_, 1, v___x_236_);
v___x_262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___x_238_);
v___x_263_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__16));
v___x_264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v___x_226_);
v___x_266_ = lean_uint32_to_nat(v_leapcnt_222_);
v___x_267_ = l_Nat_reprFast(v___x_266_);
v___x_268_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
v___x_269_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_228_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___x_270_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_270_, 0, v___x_269_);
lean_ctor_set_uint8(v___x_270_, sizeof(void*)*1, v___x_233_);
v___x_271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_265_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set(v___x_272_, 1, v___x_236_);
v___x_273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
lean_ctor_set(v___x_273_, 1, v___x_238_);
v___x_274_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__18));
v___x_275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___x_226_);
v___x_277_ = lean_uint32_to_nat(v_timecnt_223_);
v___x_278_ = l_Nat_reprFast(v___x_277_);
v___x_279_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
v___x_280_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_228_);
lean_ctor_set(v___x_280_, 1, v___x_279_);
v___x_281_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_281_, 0, v___x_280_);
lean_ctor_set_uint8(v___x_281_, sizeof(void*)*1, v___x_233_);
v___x_282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_276_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
v___x_283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v___x_236_);
v___x_284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v___x_238_);
v___x_285_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__20));
v___x_286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_284_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v___x_226_);
v___x_288_ = lean_uint32_to_nat(v_typecnt_224_);
v___x_289_ = l_Nat_reprFast(v___x_288_);
v___x_290_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
v___x_291_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_228_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_292_, 0, v___x_291_);
lean_ctor_set_uint8(v___x_292_, sizeof(void*)*1, v___x_233_);
v___x_293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_287_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v___x_236_);
v___x_295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set(v___x_295_, 1, v___x_238_);
v___x_296_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__22));
v___x_297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_295_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___x_298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
lean_ctor_set(v___x_298_, 1, v___x_226_);
v___x_299_ = lean_uint32_to_nat(v_charcnt_225_);
v___x_300_ = l_Nat_reprFast(v___x_299_);
v___x_301_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
v___x_302_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_228_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_303_, 0, v___x_302_);
lean_ctor_set_uint8(v___x_303_, sizeof(void*)*1, v___x_233_);
v___x_304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_298_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v___x_305_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25, &l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25_once, _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25);
v___x_306_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__26));
v___x_307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v___x_304_);
v___x_308_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__27));
v___x_309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_307_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
v___x_310_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_310_, 0, v___x_305_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
v___x_311_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*1, v___x_233_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___boxed(lean_object* v_x_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg(v_x_312_);
lean_dec_ref(v_x_312_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr(lean_object* v_x_314_, lean_object* v_prec_315_){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg(v_x_314_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprHeader_repr___boxed(lean_object* v_x_317_, lean_object* v_prec_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Std_Time_TimeZone_TZif_instReprHeader_repr(v_x_317_, v_prec_318_);
lean_dec(v_prec_318_);
lean_dec_ref(v_x_317_);
return v_res_319_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_unsigned_to_nat(13u);
v___x_337_ = lean_nat_to_int(v___x_336_);
return v___x_337_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_unsigned_to_nat(9u);
v___x_342_ = lean_nat_to_int(v___x_341_);
return v___x_342_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = lean_unsigned_to_nat(21u);
v___x_347_ = lean_nat_to_int(v___x_346_);
return v___x_347_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_unsigned_to_nat(0u);
v___x_349_ = lean_nat_to_int(v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg(lean_object* v_x_350_){
_start:
{
lean_object* v_gmtOffset_351_; uint8_t v_isDst_352_; uint8_t v_abbreviationIndex_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___y_358_; lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v_gmtOffset_351_ = lean_ctor_get(v_x_350_, 0);
v_isDst_352_ = lean_ctor_get_uint8(v_x_350_, sizeof(void*)*1);
v_abbreviationIndex_353_ = lean_ctor_get_uint8(v_x_350_, sizeof(void*)*1 + 1);
v___x_354_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5));
v___x_355_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__3));
v___x_356_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__4, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__4_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__4);
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11);
v___x_396_ = lean_int_dec_lt(v_gmtOffset_351_, v___x_395_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = l_Int_repr(v_gmtOffset_351_);
v___x_398_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
v___y_358_ = v___x_398_;
goto v___jp_357_;
}
else
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_399_ = l_Int_repr(v_gmtOffset_351_);
v___x_400_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
v___x_401_ = l_Repr_addAppParen(v___x_400_, v___x_394_);
v___y_358_ = v___x_401_;
goto v___jp_357_;
}
v___jp_357_:
{
lean_object* v___x_359_; uint8_t v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_359_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_356_);
lean_ctor_set(v___x_359_, 1, v___y_358_);
v___x_360_ = 0;
v___x_361_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_361_, 0, v___x_359_);
lean_ctor_set_uint8(v___x_361_, sizeof(void*)*1, v___x_360_);
v___x_362_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_362_, 0, v___x_355_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
v___x_363_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__9));
v___x_364_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_362_);
lean_ctor_set(v___x_364_, 1, v___x_363_);
v___x_365_ = lean_box(1);
v___x_366_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_364_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__6));
v___x_368_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_366_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
lean_ctor_set(v___x_369_, 1, v___x_354_);
v___x_370_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__7, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__7_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__7);
v___x_371_ = l_Bool_repr___redArg(v_isDst_352_);
v___x_372_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_370_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
v___x_373_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_373_, 0, v___x_372_);
lean_ctor_set_uint8(v___x_373_, sizeof(void*)*1, v___x_360_);
v___x_374_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_369_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
lean_ctor_set(v___x_375_, 1, v___x_363_);
v___x_376_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
lean_ctor_set(v___x_376_, 1, v___x_365_);
v___x_377_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__9));
v___x_378_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_376_);
lean_ctor_set(v___x_378_, 1, v___x_377_);
v___x_379_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
lean_ctor_set(v___x_379_, 1, v___x_354_);
v___x_380_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__10, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__10_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__10);
v___x_381_ = lean_uint8_to_nat(v_abbreviationIndex_353_);
v___x_382_ = l_Nat_reprFast(v___x_381_);
v___x_383_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
v___x_384_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_380_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
v___x_385_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set_uint8(v___x_385_, sizeof(void*)*1, v___x_360_);
v___x_386_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_379_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25, &l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25_once, _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25);
v___x_388_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__26));
v___x_389_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
lean_ctor_set(v___x_389_, 1, v___x_386_);
v___x_390_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__27));
v___x_391_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_389_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_387_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set_uint8(v___x_393_, sizeof(void*)*1, v___x_360_);
return v___x_393_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___boxed(lean_object* v_x_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg(v_x_402_);
lean_dec_ref(v_x_402_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr(lean_object* v_x_404_, lean_object* v_prec_405_){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg(v_x_404_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___boxed(lean_object* v_x_407_, lean_object* v_prec_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr(v_x_407_, v_prec_408_);
lean_dec(v_prec_408_);
lean_dec_ref(v_x_407_);
return v_res_409_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default___closed__0(void){
_start:
{
uint8_t v___x_412_; uint8_t v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_412_ = 0;
v___x_413_ = 0;
v___x_414_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11);
v___x_415_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_415_, 0, v___x_414_);
lean_ctor_set_uint8(v___x_415_, sizeof(void*)*1, v___x_413_);
lean_ctor_set_uint8(v___x_415_, sizeof(void*)*1 + 1, v___x_412_);
return v___x_415_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default(void){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default___closed__0, &l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default___closed__0_once, _init_l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default___closed__0);
return v___x_416_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType(void){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default;
return v___x_417_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = lean_unsigned_to_nat(18u);
v___x_428_ = lean_nat_to_int(v___x_427_);
return v___x_428_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = lean_unsigned_to_nat(14u);
v___x_433_ = lean_nat_to_int(v___x_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg(lean_object* v_x_434_){
_start:
{
lean_object* v_transitionTime_435_; lean_object* v_correction_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_490_; 
v_transitionTime_435_ = lean_ctor_get(v_x_434_, 0);
v_correction_436_ = lean_ctor_get(v_x_434_, 1);
v_isSharedCheck_490_ = !lean_is_exclusive(v_x_434_);
if (v_isSharedCheck_490_ == 0)
{
v___x_438_ = v_x_434_;
v_isShared_439_ = v_isSharedCheck_490_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_correction_436_);
lean_inc(v_transitionTime_435_);
lean_dec(v_x_434_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_490_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___y_441_; uint8_t v___y_442_; lean_object* v___y_443_; lean_object* v___y_444_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___y_461_; lean_object* v___x_482_; lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_457_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5));
v___x_458_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__3));
v___x_459_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__4, &l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__4_once, _init_l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__4);
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11);
v___x_484_ = lean_int_dec_lt(v_transitionTime_435_, v___x_483_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = l_Int_repr(v_transitionTime_435_);
lean_dec(v_transitionTime_435_);
v___x_486_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
v___y_461_ = v___x_486_;
goto v___jp_460_;
}
else
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_487_ = l_Int_repr(v_transitionTime_435_);
lean_dec(v_transitionTime_435_);
v___x_488_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_488_, 0, v___x_487_);
v___x_489_ = l_Repr_addAppParen(v___x_488_, v___x_482_);
v___y_461_ = v___x_489_;
goto v___jp_460_;
}
v___jp_440_:
{
lean_object* v___x_446_; 
lean_inc(v___y_443_);
if (v_isShared_439_ == 0)
{
lean_ctor_set_tag(v___x_438_, 4);
lean_ctor_set(v___x_438_, 1, v___y_444_);
lean_ctor_set(v___x_438_, 0, v___y_443_);
v___x_446_ = v___x_438_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___y_443_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v___y_444_);
v___x_446_ = v_reuseFailAlloc_456_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_447_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_447_, 0, v___x_446_);
lean_ctor_set_uint8(v___x_447_, sizeof(void*)*1, v___y_442_);
v___x_448_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_448_, 0, v___y_441_);
lean_ctor_set(v___x_448_, 1, v___x_447_);
v___x_449_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25, &l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25_once, _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25);
v___x_450_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__26));
v___x_451_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_448_);
v___x_452_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__27));
v___x_453_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_451_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_454_, 0, v___x_449_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
v___x_455_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set_uint8(v___x_455_, sizeof(void*)*1, v___y_442_);
return v___x_455_;
}
}
v___jp_460_:
{
lean_object* v___x_462_; uint8_t v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_462_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_459_);
lean_ctor_set(v___x_462_, 1, v___y_461_);
v___x_463_ = 0;
v___x_464_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set_uint8(v___x_464_, sizeof(void*)*1, v___x_463_);
v___x_465_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_458_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
v___x_466_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__9));
v___x_467_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_467_, 0, v___x_465_);
lean_ctor_set(v___x_467_, 1, v___x_466_);
v___x_468_ = lean_box(1);
v___x_469_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_467_);
lean_ctor_set(v___x_469_, 1, v___x_468_);
v___x_470_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__6));
v___x_471_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_469_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
v___x_472_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
lean_ctor_set(v___x_472_, 1, v___x_457_);
v___x_473_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__7, &l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__7_once, _init_l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__7);
v___x_474_ = lean_unsigned_to_nat(0u);
v___x_475_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11);
v___x_476_ = lean_int_dec_lt(v_correction_436_, v___x_475_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = l_Int_repr(v_correction_436_);
lean_dec(v_correction_436_);
v___x_478_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
v___y_441_ = v___x_472_;
v___y_442_ = v___x_463_;
v___y_443_ = v___x_473_;
v___y_444_ = v___x_478_;
goto v___jp_440_;
}
else
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_479_ = l_Int_repr(v_correction_436_);
lean_dec(v_correction_436_);
v___x_480_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
v___x_481_ = l_Repr_addAppParen(v___x_480_, v___x_474_);
v___y_441_ = v___x_472_;
v___y_442_ = v___x_463_;
v___y_443_ = v___x_473_;
v___y_444_ = v___x_481_;
goto v___jp_440_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr(lean_object* v_x_491_, lean_object* v_prec_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg(v_x_491_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___boxed(lean_object* v_x_494_, lean_object* v_prec_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr(v_x_494_, v_prec_495_);
lean_dec(v_prec_495_);
return v_res_496_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default___closed__0(void){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11);
v___x_500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
return v___x_500_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default(void){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default___closed__0, &l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default___closed__0_once, _init_l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default___closed__0);
return v___x_501_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond(void){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default;
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5_spec__10_spec__16_spec__22(lean_object* v_x_503_, lean_object* v_x_504_, lean_object* v_x_505_){
_start:
{
if (lean_obj_tag(v_x_505_) == 0)
{
lean_dec(v_x_503_);
return v_x_504_;
}
else
{
lean_object* v_head_506_; lean_object* v_tail_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_518_; 
v_head_506_ = lean_ctor_get(v_x_505_, 0);
v_tail_507_ = lean_ctor_get(v_x_505_, 1);
v_isSharedCheck_518_ = !lean_is_exclusive(v_x_505_);
if (v_isSharedCheck_518_ == 0)
{
v___x_509_ = v_x_505_;
v_isShared_510_ = v_isSharedCheck_518_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_tail_507_);
lean_inc(v_head_506_);
lean_dec(v_x_505_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_518_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
lean_inc(v_x_503_);
if (v_isShared_510_ == 0)
{
lean_ctor_set_tag(v___x_509_, 5);
lean_ctor_set(v___x_509_, 1, v_x_503_);
lean_ctor_set(v___x_509_, 0, v_x_504_);
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_x_504_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_x_503_);
v___x_512_ = v_reuseFailAlloc_517_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
uint8_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_513_ = lean_unbox(v_head_506_);
lean_dec(v_head_506_);
v___x_514_ = l_Bool_repr___redArg(v___x_513_);
v___x_515_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_512_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v_x_504_ = v___x_515_;
v_x_505_ = v_tail_507_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5_spec__10_spec__16(lean_object* v_x_519_, lean_object* v_x_520_, lean_object* v_x_521_){
_start:
{
if (lean_obj_tag(v_x_521_) == 0)
{
lean_dec(v_x_519_);
return v_x_520_;
}
else
{
lean_object* v_head_522_; lean_object* v_tail_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_534_; 
v_head_522_ = lean_ctor_get(v_x_521_, 0);
v_tail_523_ = lean_ctor_get(v_x_521_, 1);
v_isSharedCheck_534_ = !lean_is_exclusive(v_x_521_);
if (v_isSharedCheck_534_ == 0)
{
v___x_525_ = v_x_521_;
v_isShared_526_ = v_isSharedCheck_534_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_tail_523_);
lean_inc(v_head_522_);
lean_dec(v_x_521_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_534_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
lean_inc(v_x_519_);
if (v_isShared_526_ == 0)
{
lean_ctor_set_tag(v___x_525_, 5);
lean_ctor_set(v___x_525_, 1, v_x_519_);
lean_ctor_set(v___x_525_, 0, v_x_520_);
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_x_520_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v_x_519_);
v___x_528_ = v_reuseFailAlloc_533_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
uint8_t v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_529_ = lean_unbox(v_head_522_);
lean_dec(v_head_522_);
v___x_530_ = l_Bool_repr___redArg(v___x_529_);
v___x_531_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_528_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5_spec__10_spec__16_spec__22(v_x_519_, v___x_531_, v_tail_523_);
return v___x_532_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5_spec__10(lean_object* v_x_535_, lean_object* v_x_536_){
_start:
{
if (lean_obj_tag(v_x_535_) == 0)
{
lean_object* v___x_537_; 
lean_dec(v_x_536_);
v___x_537_ = lean_box(0);
return v___x_537_;
}
else
{
lean_object* v_tail_538_; 
v_tail_538_ = lean_ctor_get(v_x_535_, 1);
if (lean_obj_tag(v_tail_538_) == 0)
{
lean_object* v_head_539_; uint8_t v___x_540_; lean_object* v___x_541_; 
lean_dec(v_x_536_);
v_head_539_ = lean_ctor_get(v_x_535_, 0);
lean_inc(v_head_539_);
lean_dec_ref_known(v_x_535_, 2);
v___x_540_ = lean_unbox(v_head_539_);
lean_dec(v_head_539_);
v___x_541_ = l_Bool_repr___redArg(v___x_540_);
return v___x_541_;
}
else
{
lean_object* v_head_542_; uint8_t v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
lean_inc(v_tail_538_);
v_head_542_ = lean_ctor_get(v_x_535_, 0);
lean_inc(v_head_542_);
lean_dec_ref_known(v_x_535_, 2);
v___x_543_ = lean_unbox(v_head_542_);
lean_dec(v_head_542_);
v___x_544_ = l_Bool_repr___redArg(v___x_543_);
v___x_545_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5_spec__10_spec__16(v_x_536_, v___x_544_, v_tail_538_);
return v___x_545_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__3(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__0));
v___x_552_ = lean_string_length(v___x_551_);
return v___x_552_;
}
}
static lean_object* _init_l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_obj_once(&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__3, &l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__3_once, _init_l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__3);
v___x_554_ = lean_nat_to_int(v___x_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5(lean_object* v_xs_562_){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_563_ = lean_array_get_size(v_xs_562_);
v___x_564_ = lean_unsigned_to_nat(0u);
v___x_565_ = lean_nat_dec_eq(v___x_563_, v___x_564_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_566_ = lean_array_to_list(v_xs_562_);
v___x_567_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__1));
v___x_568_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5_spec__10(v___x_566_, v___x_567_);
v___x_569_ = lean_obj_once(&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4, &l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4_once, _init_l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4);
v___x_570_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__5));
v___x_571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
lean_ctor_set(v___x_571_, 1, v___x_568_);
v___x_572_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__6));
v___x_573_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_571_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___x_574_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_569_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
v___x_575_ = l_Std_Format_fill(v___x_574_);
return v___x_575_;
}
else
{
lean_object* v___x_576_; 
lean_dec_ref(v_xs_562_);
v___x_576_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__8));
return v___x_576_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6___lam__0(lean_object* v___y_577_){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_578_ = l_String_quote(v___y_577_);
v___x_579_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6_spec__10_spec__16(lean_object* v_x_580_, lean_object* v_x_581_, lean_object* v_x_582_){
_start:
{
if (lean_obj_tag(v_x_582_) == 0)
{
lean_dec(v_x_580_);
return v_x_581_;
}
else
{
lean_object* v_head_583_; lean_object* v_tail_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_595_; 
v_head_583_ = lean_ctor_get(v_x_582_, 0);
v_tail_584_ = lean_ctor_get(v_x_582_, 1);
v_isSharedCheck_595_ = !lean_is_exclusive(v_x_582_);
if (v_isSharedCheck_595_ == 0)
{
v___x_586_ = v_x_582_;
v_isShared_587_ = v_isSharedCheck_595_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_tail_584_);
lean_inc(v_head_583_);
lean_dec(v_x_582_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_595_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
lean_inc(v_x_580_);
if (v_isShared_587_ == 0)
{
lean_ctor_set_tag(v___x_586_, 5);
lean_ctor_set(v___x_586_, 1, v_x_580_);
lean_ctor_set(v___x_586_, 0, v_x_581_);
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_x_581_);
lean_ctor_set(v_reuseFailAlloc_594_, 1, v_x_580_);
v___x_589_ = v_reuseFailAlloc_594_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_590_ = l_String_quote(v_head_583_);
v___x_591_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_591_, 0, v___x_590_);
v___x_592_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_589_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v_x_581_ = v___x_592_;
v_x_582_ = v_tail_584_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6_spec__10(lean_object* v_x_596_, lean_object* v_x_597_, lean_object* v_x_598_){
_start:
{
if (lean_obj_tag(v_x_598_) == 0)
{
lean_dec(v_x_596_);
return v_x_597_;
}
else
{
lean_object* v_head_599_; lean_object* v_tail_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_611_; 
v_head_599_ = lean_ctor_get(v_x_598_, 0);
v_tail_600_ = lean_ctor_get(v_x_598_, 1);
v_isSharedCheck_611_ = !lean_is_exclusive(v_x_598_);
if (v_isSharedCheck_611_ == 0)
{
v___x_602_ = v_x_598_;
v_isShared_603_ = v_isSharedCheck_611_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_tail_600_);
lean_inc(v_head_599_);
lean_dec(v_x_598_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_611_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
lean_inc(v_x_596_);
if (v_isShared_603_ == 0)
{
lean_ctor_set_tag(v___x_602_, 5);
lean_ctor_set(v___x_602_, 1, v_x_596_);
lean_ctor_set(v___x_602_, 0, v_x_597_);
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_x_597_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_x_596_);
v___x_605_ = v_reuseFailAlloc_610_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_606_ = l_String_quote(v_head_599_);
v___x_607_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
v___x_608_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_605_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v___x_609_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6_spec__10_spec__16(v_x_596_, v___x_608_, v_tail_600_);
return v___x_609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6(lean_object* v_x_612_, lean_object* v_x_613_){
_start:
{
if (lean_obj_tag(v_x_612_) == 0)
{
lean_object* v___x_614_; 
lean_dec(v_x_613_);
v___x_614_ = lean_box(0);
return v___x_614_;
}
else
{
lean_object* v_tail_615_; 
v_tail_615_ = lean_ctor_get(v_x_612_, 1);
if (lean_obj_tag(v_tail_615_) == 0)
{
lean_object* v_head_616_; lean_object* v___x_617_; 
lean_dec(v_x_613_);
v_head_616_ = lean_ctor_get(v_x_612_, 0);
lean_inc(v_head_616_);
lean_dec_ref_known(v_x_612_, 2);
v___x_617_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6___lam__0(v_head_616_);
return v___x_617_;
}
else
{
lean_object* v_head_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
lean_inc(v_tail_615_);
v_head_618_ = lean_ctor_get(v_x_612_, 0);
lean_inc(v_head_618_);
lean_dec_ref_known(v_x_612_, 2);
v___x_619_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6___lam__0(v_head_618_);
v___x_620_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6_spec__10(v_x_613_, v___x_619_, v_tail_615_);
return v___x_620_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3(lean_object* v_xs_621_){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; uint8_t v___x_624_; 
v___x_622_ = lean_array_get_size(v_xs_621_);
v___x_623_ = lean_unsigned_to_nat(0u);
v___x_624_ = lean_nat_dec_eq(v___x_622_, v___x_623_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_625_ = lean_array_to_list(v_xs_621_);
v___x_626_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__1));
v___x_627_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3_spec__6(v___x_625_, v___x_626_);
v___x_628_ = lean_obj_once(&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4, &l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4_once, _init_l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4);
v___x_629_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__5));
v___x_630_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
lean_ctor_set(v___x_630_, 1, v___x_627_);
v___x_631_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__6));
v___x_632_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_630_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
v___x_633_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_628_);
lean_ctor_set(v___x_633_, 1, v___x_632_);
v___x_634_ = l_Std_Format_fill(v___x_633_);
return v___x_634_;
}
else
{
lean_object* v___x_635_; 
lean_dec_ref(v_xs_621_);
v___x_635_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__8));
return v___x_635_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2_spec__4_spec__10(lean_object* v_x_636_, lean_object* v_x_637_, lean_object* v_x_638_){
_start:
{
if (lean_obj_tag(v_x_638_) == 0)
{
lean_dec(v_x_636_);
return v_x_637_;
}
else
{
lean_object* v_head_639_; lean_object* v_tail_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_653_; 
v_head_639_ = lean_ctor_get(v_x_638_, 0);
v_tail_640_ = lean_ctor_get(v_x_638_, 1);
v_isSharedCheck_653_ = !lean_is_exclusive(v_x_638_);
if (v_isSharedCheck_653_ == 0)
{
v___x_642_ = v_x_638_;
v_isShared_643_ = v_isSharedCheck_653_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_tail_640_);
lean_inc(v_head_639_);
lean_dec(v_x_638_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_653_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
lean_inc(v_x_636_);
if (v_isShared_643_ == 0)
{
lean_ctor_set_tag(v___x_642_, 5);
lean_ctor_set(v___x_642_, 1, v_x_636_);
lean_ctor_set(v___x_642_, 0, v_x_637_);
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_x_637_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_x_636_);
v___x_645_ = v_reuseFailAlloc_652_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
uint8_t v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_646_ = lean_unbox(v_head_639_);
lean_dec(v_head_639_);
v___x_647_ = lean_uint8_to_nat(v___x_646_);
v___x_648_ = l_Nat_reprFast(v___x_647_);
v___x_649_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
v___x_650_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_645_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
v_x_637_ = v___x_650_;
v_x_638_ = v_tail_640_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2_spec__4(lean_object* v_x_654_, lean_object* v_x_655_, lean_object* v_x_656_){
_start:
{
if (lean_obj_tag(v_x_656_) == 0)
{
lean_dec(v_x_654_);
return v_x_655_;
}
else
{
lean_object* v_head_657_; lean_object* v_tail_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_671_; 
v_head_657_ = lean_ctor_get(v_x_656_, 0);
v_tail_658_ = lean_ctor_get(v_x_656_, 1);
v_isSharedCheck_671_ = !lean_is_exclusive(v_x_656_);
if (v_isSharedCheck_671_ == 0)
{
v___x_660_ = v_x_656_;
v_isShared_661_ = v_isSharedCheck_671_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_tail_658_);
lean_inc(v_head_657_);
lean_dec(v_x_656_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_671_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_663_; 
lean_inc(v_x_654_);
if (v_isShared_661_ == 0)
{
lean_ctor_set_tag(v___x_660_, 5);
lean_ctor_set(v___x_660_, 1, v_x_654_);
lean_ctor_set(v___x_660_, 0, v_x_655_);
v___x_663_ = v___x_660_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_x_655_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v_x_654_);
v___x_663_ = v_reuseFailAlloc_670_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
uint8_t v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_664_ = lean_unbox(v_head_657_);
lean_dec(v_head_657_);
v___x_665_ = lean_uint8_to_nat(v___x_664_);
v___x_666_ = l_Nat_reprFast(v___x_665_);
v___x_667_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
v___x_668_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_663_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2_spec__4_spec__10(v_x_654_, v___x_668_, v_tail_658_);
return v___x_669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2___lam__0(uint8_t v___y_672_){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_673_ = lean_uint8_to_nat(v___y_672_);
v___x_674_ = l_Nat_reprFast(v___x_673_);
v___x_675_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2___lam__0___boxed(lean_object* v___y_676_){
_start:
{
uint8_t v___y_2005__boxed_677_; lean_object* v_res_678_; 
v___y_2005__boxed_677_ = lean_unbox(v___y_676_);
v_res_678_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2___lam__0(v___y_2005__boxed_677_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2(lean_object* v_x_679_, lean_object* v_x_680_){
_start:
{
if (lean_obj_tag(v_x_679_) == 0)
{
lean_object* v___x_681_; 
lean_dec(v_x_680_);
v___x_681_ = lean_box(0);
return v___x_681_;
}
else
{
lean_object* v_tail_682_; 
v_tail_682_ = lean_ctor_get(v_x_679_, 1);
if (lean_obj_tag(v_tail_682_) == 0)
{
lean_object* v_head_683_; uint8_t v___x_684_; lean_object* v___x_685_; 
lean_dec(v_x_680_);
v_head_683_ = lean_ctor_get(v_x_679_, 0);
lean_inc(v_head_683_);
lean_dec_ref_known(v_x_679_, 2);
v___x_684_ = lean_unbox(v_head_683_);
lean_dec(v_head_683_);
v___x_685_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2___lam__0(v___x_684_);
return v___x_685_;
}
else
{
lean_object* v_head_686_; uint8_t v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
lean_inc(v_tail_682_);
v_head_686_ = lean_ctor_get(v_x_679_, 0);
lean_inc(v_head_686_);
lean_dec_ref_known(v_x_679_, 2);
v___x_687_ = lean_unbox(v_head_686_);
lean_dec(v_head_686_);
v___x_688_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2___lam__0(v___x_687_);
v___x_689_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2_spec__4(v_x_680_, v___x_688_, v_tail_682_);
return v___x_689_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1(lean_object* v_xs_690_){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_691_ = lean_array_get_size(v_xs_690_);
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_nat_dec_eq(v___x_691_, v___x_692_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_694_ = lean_array_to_list(v_xs_690_);
v___x_695_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__1));
v___x_696_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1_spec__2(v___x_694_, v___x_695_);
v___x_697_ = lean_obj_once(&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4, &l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4_once, _init_l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4);
v___x_698_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__5));
v___x_699_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
lean_ctor_set(v___x_699_, 1, v___x_696_);
v___x_700_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__6));
v___x_701_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_699_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
v___x_702_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_697_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
v___x_703_ = l_Std_Format_fill(v___x_702_);
return v___x_703_;
}
else
{
lean_object* v___x_704_; 
lean_dec_ref(v_xs_690_);
v___x_704_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__8));
return v___x_704_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0_spec__1_spec__7(lean_object* v_x_705_, lean_object* v_x_706_, lean_object* v_x_707_){
_start:
{
if (lean_obj_tag(v_x_707_) == 0)
{
lean_dec(v_x_705_);
return v_x_706_;
}
else
{
lean_object* v_head_708_; lean_object* v_tail_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_728_; 
v_head_708_ = lean_ctor_get(v_x_707_, 0);
v_tail_709_ = lean_ctor_get(v_x_707_, 1);
v_isSharedCheck_728_ = !lean_is_exclusive(v_x_707_);
if (v_isSharedCheck_728_ == 0)
{
v___x_711_ = v_x_707_;
v_isShared_712_ = v_isSharedCheck_728_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_tail_709_);
lean_inc(v_head_708_);
lean_dec(v_x_707_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_728_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
lean_inc(v_x_705_);
if (v_isShared_712_ == 0)
{
lean_ctor_set_tag(v___x_711_, 5);
lean_ctor_set(v___x_711_, 1, v_x_705_);
lean_ctor_set(v___x_711_, 0, v_x_706_);
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_x_706_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_x_705_);
v___x_714_ = v_reuseFailAlloc_727_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_715_ = lean_unsigned_to_nat(0u);
v___x_716_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11);
v___x_717_ = lean_int_dec_lt(v_head_708_, v___x_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_718_ = l_Int_repr(v_head_708_);
lean_dec(v_head_708_);
v___x_719_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_719_, 0, v___x_718_);
v___x_720_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_714_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v_x_706_ = v___x_720_;
v_x_707_ = v_tail_709_;
goto _start;
}
else
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_722_ = l_Int_repr(v_head_708_);
lean_dec(v_head_708_);
v___x_723_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
v___x_724_ = l_Repr_addAppParen(v___x_723_, v___x_715_);
v___x_725_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_714_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v_x_706_ = v___x_725_;
v_x_707_ = v_tail_709_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0_spec__1(lean_object* v_x_729_, lean_object* v_x_730_, lean_object* v_x_731_){
_start:
{
if (lean_obj_tag(v_x_731_) == 0)
{
lean_dec(v_x_729_);
return v_x_730_;
}
else
{
lean_object* v_head_732_; lean_object* v_tail_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_752_; 
v_head_732_ = lean_ctor_get(v_x_731_, 0);
v_tail_733_ = lean_ctor_get(v_x_731_, 1);
v_isSharedCheck_752_ = !lean_is_exclusive(v_x_731_);
if (v_isSharedCheck_752_ == 0)
{
v___x_735_ = v_x_731_;
v_isShared_736_ = v_isSharedCheck_752_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_tail_733_);
lean_inc(v_head_732_);
lean_dec(v_x_731_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_752_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
lean_inc(v_x_729_);
if (v_isShared_736_ == 0)
{
lean_ctor_set_tag(v___x_735_, 5);
lean_ctor_set(v___x_735_, 1, v_x_729_);
lean_ctor_set(v___x_735_, 0, v_x_730_);
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_x_730_);
lean_ctor_set(v_reuseFailAlloc_751_, 1, v_x_729_);
v___x_738_ = v_reuseFailAlloc_751_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_739_ = lean_unsigned_to_nat(0u);
v___x_740_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11);
v___x_741_ = lean_int_dec_lt(v_head_732_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_742_ = l_Int_repr(v_head_732_);
lean_dec(v_head_732_);
v___x_743_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_743_, 0, v___x_742_);
v___x_744_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_738_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0_spec__1_spec__7(v_x_729_, v___x_744_, v_tail_733_);
return v___x_745_;
}
else
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_746_ = l_Int_repr(v_head_732_);
lean_dec(v_head_732_);
v___x_747_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
v___x_748_ = l_Repr_addAppParen(v___x_747_, v___x_739_);
v___x_749_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_738_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
v___x_750_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0_spec__1_spec__7(v_x_729_, v___x_749_, v_tail_733_);
return v___x_750_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0___lam__0(lean_object* v___y_753_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; uint8_t v___x_756_; 
v___x_754_ = lean_unsigned_to_nat(0u);
v___x_755_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__11);
v___x_756_ = lean_int_dec_lt(v___y_753_, v___x_755_);
if (v___x_756_ == 0)
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = l_Int_repr(v___y_753_);
v___x_758_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
return v___x_758_;
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_759_ = l_Int_repr(v___y_753_);
v___x_760_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
v___x_761_ = l_Repr_addAppParen(v___x_760_, v___x_754_);
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0___lam__0___boxed(lean_object* v___y_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0___lam__0(v___y_762_);
lean_dec(v___y_762_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0(lean_object* v_x_764_, lean_object* v_x_765_){
_start:
{
if (lean_obj_tag(v_x_764_) == 0)
{
lean_object* v___x_766_; 
lean_dec(v_x_765_);
v___x_766_ = lean_box(0);
return v___x_766_;
}
else
{
lean_object* v_tail_767_; 
v_tail_767_ = lean_ctor_get(v_x_764_, 1);
if (lean_obj_tag(v_tail_767_) == 0)
{
lean_object* v_head_768_; lean_object* v___x_769_; 
lean_dec(v_x_765_);
v_head_768_ = lean_ctor_get(v_x_764_, 0);
lean_inc(v_head_768_);
lean_dec_ref_known(v_x_764_, 2);
v___x_769_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0___lam__0(v_head_768_);
lean_dec(v_head_768_);
return v___x_769_;
}
else
{
lean_object* v_head_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
lean_inc(v_tail_767_);
v_head_770_ = lean_ctor_get(v_x_764_, 0);
lean_inc(v_head_770_);
lean_dec_ref_known(v_x_764_, 2);
v___x_771_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0___lam__0(v_head_770_);
lean_dec(v_head_770_);
v___x_772_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0_spec__1(v_x_765_, v___x_771_, v_tail_767_);
return v___x_772_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0(lean_object* v_xs_773_){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_774_ = lean_array_get_size(v_xs_773_);
v___x_775_ = lean_unsigned_to_nat(0u);
v___x_776_ = lean_nat_dec_eq(v___x_774_, v___x_775_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_777_ = lean_array_to_list(v_xs_773_);
v___x_778_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__1));
v___x_779_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0_spec__0(v___x_777_, v___x_778_);
v___x_780_ = lean_obj_once(&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4, &l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4_once, _init_l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4);
v___x_781_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__5));
v___x_782_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_782_, 0, v___x_781_);
lean_ctor_set(v___x_782_, 1, v___x_779_);
v___x_783_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__6));
v___x_784_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_782_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_780_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
v___x_786_ = l_Std_Format_fill(v___x_785_);
return v___x_786_;
}
else
{
lean_object* v___x_787_; 
lean_dec_ref(v_xs_773_);
v___x_787_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__8));
return v___x_787_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2_spec__4_spec__7_spec__13(lean_object* v_x_788_, lean_object* v_x_789_, lean_object* v_x_790_){
_start:
{
if (lean_obj_tag(v_x_790_) == 0)
{
lean_dec(v_x_788_);
return v_x_789_;
}
else
{
lean_object* v_head_791_; lean_object* v_tail_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_802_; 
v_head_791_ = lean_ctor_get(v_x_790_, 0);
v_tail_792_ = lean_ctor_get(v_x_790_, 1);
v_isSharedCheck_802_ = !lean_is_exclusive(v_x_790_);
if (v_isSharedCheck_802_ == 0)
{
v___x_794_ = v_x_790_;
v_isShared_795_ = v_isSharedCheck_802_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_tail_792_);
lean_inc(v_head_791_);
lean_dec(v_x_790_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_802_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_797_; 
lean_inc(v_x_788_);
if (v_isShared_795_ == 0)
{
lean_ctor_set_tag(v___x_794_, 5);
lean_ctor_set(v___x_794_, 1, v_x_788_);
lean_ctor_set(v___x_794_, 0, v_x_789_);
v___x_797_ = v___x_794_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_x_789_);
lean_ctor_set(v_reuseFailAlloc_801_, 1, v_x_788_);
v___x_797_ = v_reuseFailAlloc_801_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_798_ = l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg(v_head_791_);
lean_dec(v_head_791_);
v___x_799_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_797_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v_x_789_ = v___x_799_;
v_x_790_ = v_tail_792_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2_spec__4_spec__7(lean_object* v_x_803_, lean_object* v_x_804_, lean_object* v_x_805_){
_start:
{
if (lean_obj_tag(v_x_805_) == 0)
{
lean_dec(v_x_803_);
return v_x_804_;
}
else
{
lean_object* v_head_806_; lean_object* v_tail_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_817_; 
v_head_806_ = lean_ctor_get(v_x_805_, 0);
v_tail_807_ = lean_ctor_get(v_x_805_, 1);
v_isSharedCheck_817_ = !lean_is_exclusive(v_x_805_);
if (v_isSharedCheck_817_ == 0)
{
v___x_809_ = v_x_805_;
v_isShared_810_ = v_isSharedCheck_817_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_tail_807_);
lean_inc(v_head_806_);
lean_dec(v_x_805_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_817_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
lean_inc(v_x_803_);
if (v_isShared_810_ == 0)
{
lean_ctor_set_tag(v___x_809_, 5);
lean_ctor_set(v___x_809_, 1, v_x_803_);
lean_ctor_set(v___x_809_, 0, v_x_804_);
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_x_804_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_x_803_);
v___x_812_ = v_reuseFailAlloc_816_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg(v_head_806_);
lean_dec(v_head_806_);
v___x_814_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_812_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
v___x_815_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2_spec__4_spec__7_spec__13(v_x_803_, v___x_814_, v_tail_807_);
return v___x_815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2_spec__4(lean_object* v_x_818_, lean_object* v_x_819_){
_start:
{
if (lean_obj_tag(v_x_818_) == 0)
{
lean_object* v___x_820_; 
lean_dec(v_x_819_);
v___x_820_ = lean_box(0);
return v___x_820_;
}
else
{
lean_object* v_tail_821_; 
v_tail_821_ = lean_ctor_get(v_x_818_, 1);
if (lean_obj_tag(v_tail_821_) == 0)
{
lean_object* v_head_822_; lean_object* v___x_823_; 
lean_dec(v_x_819_);
v_head_822_ = lean_ctor_get(v_x_818_, 0);
lean_inc(v_head_822_);
lean_dec_ref_known(v_x_818_, 2);
v___x_823_ = l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg(v_head_822_);
lean_dec(v_head_822_);
return v___x_823_;
}
else
{
lean_object* v_head_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
lean_inc(v_tail_821_);
v_head_824_ = lean_ctor_get(v_x_818_, 0);
lean_inc(v_head_824_);
lean_dec_ref_known(v_x_818_, 2);
v___x_825_ = l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg(v_head_824_);
lean_dec(v_head_824_);
v___x_826_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2_spec__4_spec__7(v_x_819_, v___x_825_, v_tail_821_);
return v___x_826_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2(lean_object* v_xs_827_){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; uint8_t v___x_830_; 
v___x_828_ = lean_array_get_size(v_xs_827_);
v___x_829_ = lean_unsigned_to_nat(0u);
v___x_830_ = lean_nat_dec_eq(v___x_828_, v___x_829_);
if (v___x_830_ == 0)
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_831_ = lean_array_to_list(v_xs_827_);
v___x_832_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__1));
v___x_833_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2_spec__4(v___x_831_, v___x_832_);
v___x_834_ = lean_obj_once(&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4, &l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4_once, _init_l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4);
v___x_835_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__5));
v___x_836_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
lean_ctor_set(v___x_836_, 1, v___x_833_);
v___x_837_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__6));
v___x_838_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_836_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___x_839_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_839_, 0, v___x_834_);
lean_ctor_set(v___x_839_, 1, v___x_838_);
v___x_840_ = l_Std_Format_fill(v___x_839_);
return v___x_840_;
}
else
{
lean_object* v___x_841_; 
lean_dec_ref(v_xs_827_);
v___x_841_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__8));
return v___x_841_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4_spec__8_spec__13_spec__19(lean_object* v_x_842_, lean_object* v_x_843_, lean_object* v_x_844_){
_start:
{
if (lean_obj_tag(v_x_844_) == 0)
{
lean_dec(v_x_842_);
return v_x_843_;
}
else
{
lean_object* v_head_845_; lean_object* v_tail_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_856_; 
v_head_845_ = lean_ctor_get(v_x_844_, 0);
v_tail_846_ = lean_ctor_get(v_x_844_, 1);
v_isSharedCheck_856_ = !lean_is_exclusive(v_x_844_);
if (v_isSharedCheck_856_ == 0)
{
v___x_848_ = v_x_844_;
v_isShared_849_ = v_isSharedCheck_856_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_tail_846_);
lean_inc(v_head_845_);
lean_dec(v_x_844_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_856_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
lean_inc(v_x_842_);
if (v_isShared_849_ == 0)
{
lean_ctor_set_tag(v___x_848_, 5);
lean_ctor_set(v___x_848_, 1, v_x_842_);
lean_ctor_set(v___x_848_, 0, v_x_843_);
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_x_843_);
lean_ctor_set(v_reuseFailAlloc_855_, 1, v_x_842_);
v___x_851_ = v_reuseFailAlloc_855_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg(v_head_845_);
v___x_853_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_851_);
lean_ctor_set(v___x_853_, 1, v___x_852_);
v_x_843_ = v___x_853_;
v_x_844_ = v_tail_846_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4_spec__8_spec__13(lean_object* v_x_857_, lean_object* v_x_858_, lean_object* v_x_859_){
_start:
{
if (lean_obj_tag(v_x_859_) == 0)
{
lean_dec(v_x_857_);
return v_x_858_;
}
else
{
lean_object* v_head_860_; lean_object* v_tail_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_871_; 
v_head_860_ = lean_ctor_get(v_x_859_, 0);
v_tail_861_ = lean_ctor_get(v_x_859_, 1);
v_isSharedCheck_871_ = !lean_is_exclusive(v_x_859_);
if (v_isSharedCheck_871_ == 0)
{
v___x_863_ = v_x_859_;
v_isShared_864_ = v_isSharedCheck_871_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_tail_861_);
lean_inc(v_head_860_);
lean_dec(v_x_859_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_871_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
lean_inc(v_x_857_);
if (v_isShared_864_ == 0)
{
lean_ctor_set_tag(v___x_863_, 5);
lean_ctor_set(v___x_863_, 1, v_x_857_);
lean_ctor_set(v___x_863_, 0, v_x_858_);
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_x_858_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v_x_857_);
v___x_866_ = v_reuseFailAlloc_870_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_867_ = l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg(v_head_860_);
v___x_868_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_866_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
v___x_869_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4_spec__8_spec__13_spec__19(v_x_857_, v___x_868_, v_tail_861_);
return v___x_869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4_spec__8(lean_object* v_x_872_, lean_object* v_x_873_){
_start:
{
if (lean_obj_tag(v_x_872_) == 0)
{
lean_object* v___x_874_; 
lean_dec(v_x_873_);
v___x_874_ = lean_box(0);
return v___x_874_;
}
else
{
lean_object* v_tail_875_; 
v_tail_875_ = lean_ctor_get(v_x_872_, 1);
if (lean_obj_tag(v_tail_875_) == 0)
{
lean_object* v_head_876_; lean_object* v___x_877_; 
lean_dec(v_x_873_);
v_head_876_ = lean_ctor_get(v_x_872_, 0);
lean_inc(v_head_876_);
lean_dec_ref_known(v_x_872_, 2);
v___x_877_ = l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg(v_head_876_);
return v___x_877_;
}
else
{
lean_object* v_head_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
lean_inc(v_tail_875_);
v_head_878_ = lean_ctor_get(v_x_872_, 0);
lean_inc(v_head_878_);
lean_dec_ref_known(v_x_872_, 2);
v___x_879_ = l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg(v_head_878_);
v___x_880_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4_spec__8_spec__13(v_x_873_, v___x_879_, v_tail_875_);
return v___x_880_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4(lean_object* v_xs_881_){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; uint8_t v___x_884_; 
v___x_882_ = lean_array_get_size(v_xs_881_);
v___x_883_ = lean_unsigned_to_nat(0u);
v___x_884_ = lean_nat_dec_eq(v___x_882_, v___x_883_);
if (v___x_884_ == 0)
{
lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_885_ = lean_array_to_list(v_xs_881_);
v___x_886_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__1));
v___x_887_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4_spec__8(v___x_885_, v___x_886_);
v___x_888_ = lean_obj_once(&l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4, &l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4_once, _init_l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__4);
v___x_889_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__5));
v___x_890_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_889_);
lean_ctor_set(v___x_890_, 1, v___x_887_);
v___x_891_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__6));
v___x_892_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_892_, 0, v___x_890_);
lean_ctor_set(v___x_892_, 1, v___x_891_);
v___x_893_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_893_, 0, v___x_888_);
lean_ctor_set(v___x_893_, 1, v___x_892_);
v___x_894_ = l_Std_Format_fill(v___x_893_);
return v___x_894_;
}
else
{
lean_object* v___x_895_; 
lean_dec_ref(v_xs_881_);
v___x_895_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5___closed__8));
return v___x_895_;
}
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lean_unsigned_to_nat(10u);
v___x_906_ = lean_nat_to_int(v___x_905_);
return v___x_906_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = lean_unsigned_to_nat(19u);
v___x_911_ = lean_nat_to_int(v___x_910_);
return v___x_911_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_921_ = lean_unsigned_to_nat(17u);
v___x_922_ = lean_nat_to_int(v___x_921_);
return v___x_922_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_926_ = lean_unsigned_to_nat(15u);
v___x_927_ = lean_nat_to_int(v___x_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg(lean_object* v_x_934_){
_start:
{
lean_object* v_header_935_; lean_object* v_transitionTimes_936_; lean_object* v_transitionIndices_937_; lean_object* v_localTimeTypes_938_; lean_object* v_abbreviations_939_; lean_object* v_leapSeconds_940_; lean_object* v_stdWallIndicators_941_; lean_object* v_utLocalIndicators_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; uint8_t v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v_header_935_ = lean_ctor_get(v_x_934_, 0);
lean_inc_ref(v_header_935_);
v_transitionTimes_936_ = lean_ctor_get(v_x_934_, 1);
lean_inc_ref(v_transitionTimes_936_);
v_transitionIndices_937_ = lean_ctor_get(v_x_934_, 2);
lean_inc_ref(v_transitionIndices_937_);
v_localTimeTypes_938_ = lean_ctor_get(v_x_934_, 3);
lean_inc_ref(v_localTimeTypes_938_);
v_abbreviations_939_ = lean_ctor_get(v_x_934_, 4);
lean_inc_ref(v_abbreviations_939_);
v_leapSeconds_940_ = lean_ctor_get(v_x_934_, 5);
lean_inc_ref(v_leapSeconds_940_);
v_stdWallIndicators_941_ = lean_ctor_get(v_x_934_, 6);
lean_inc_ref(v_stdWallIndicators_941_);
v_utLocalIndicators_942_ = lean_ctor_get(v_x_934_, 7);
lean_inc_ref(v_utLocalIndicators_942_);
lean_dec_ref(v_x_934_);
v___x_943_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5));
v___x_944_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__3));
v___x_945_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__4, &l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__4_once, _init_l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__4);
v___x_946_ = l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg(v_header_935_);
lean_dec_ref(v_header_935_);
v___x_947_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_945_);
lean_ctor_set(v___x_947_, 1, v___x_946_);
v___x_948_ = 0;
v___x_949_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_949_, 0, v___x_947_);
lean_ctor_set_uint8(v___x_949_, sizeof(void*)*1, v___x_948_);
v___x_950_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_944_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
v___x_951_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__9));
v___x_952_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = lean_box(1);
v___x_954_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_954_, 0, v___x_952_);
lean_ctor_set(v___x_954_, 1, v___x_953_);
v___x_955_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__6));
v___x_956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_954_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
lean_ctor_set(v___x_957_, 1, v___x_943_);
v___x_958_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__7, &l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__7_once, _init_l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__7);
v___x_959_ = l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__0(v_transitionTimes_936_);
v___x_960_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_960_, 0, v___x_958_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
v___x_961_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_961_, 0, v___x_960_);
lean_ctor_set_uint8(v___x_961_, sizeof(void*)*1, v___x_948_);
v___x_962_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_962_, 0, v___x_957_);
lean_ctor_set(v___x_962_, 1, v___x_961_);
v___x_963_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
lean_ctor_set(v___x_963_, 1, v___x_951_);
v___x_964_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
lean_ctor_set(v___x_964_, 1, v___x_953_);
v___x_965_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__9));
v___x_966_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_964_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v___x_967_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
lean_ctor_set(v___x_967_, 1, v___x_943_);
v___x_968_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__10, &l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__10_once, _init_l_Std_Time_TimeZone_TZif_instReprLocalTimeType_repr___redArg___closed__10);
v___x_969_ = l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__1(v_transitionIndices_937_);
v___x_970_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_968_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_971_, 0, v___x_970_);
lean_ctor_set_uint8(v___x_971_, sizeof(void*)*1, v___x_948_);
v___x_972_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_967_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
lean_ctor_set(v___x_973_, 1, v___x_951_);
v___x_974_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_973_);
lean_ctor_set(v___x_974_, 1, v___x_953_);
v___x_975_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__11));
v___x_976_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_974_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
lean_ctor_set(v___x_977_, 1, v___x_943_);
v___x_978_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__4, &l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__4_once, _init_l_Std_Time_TimeZone_TZif_instReprLeapSecond_repr___redArg___closed__4);
v___x_979_ = l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__2(v_localTimeTypes_938_);
v___x_980_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_981_, 0, v___x_980_);
lean_ctor_set_uint8(v___x_981_, sizeof(void*)*1, v___x_948_);
v___x_982_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_977_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_982_);
lean_ctor_set(v___x_983_, 1, v___x_951_);
v___x_984_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
lean_ctor_set(v___x_984_, 1, v___x_953_);
v___x_985_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__13));
v___x_986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_984_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
lean_ctor_set(v___x_987_, 1, v___x_943_);
v___x_988_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__14, &l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__14_once, _init_l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__14);
v___x_989_ = l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__3(v_abbreviations_939_);
v___x_990_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_988_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_991_, 0, v___x_990_);
lean_ctor_set_uint8(v___x_991_, sizeof(void*)*1, v___x_948_);
v___x_992_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_987_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
lean_ctor_set(v___x_993_, 1, v___x_951_);
v___x_994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
lean_ctor_set(v___x_994_, 1, v___x_953_);
v___x_995_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__16));
v___x_996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_994_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_996_);
lean_ctor_set(v___x_997_, 1, v___x_943_);
v___x_998_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__17, &l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__17_once, _init_l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__17);
v___x_999_ = l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__4(v_leapSeconds_940_);
v___x_1000_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1001_, 0, v___x_1000_);
lean_ctor_set_uint8(v___x_1001_, sizeof(void*)*1, v___x_948_);
v___x_1002_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_997_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___x_1003_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1002_);
lean_ctor_set(v___x_1003_, 1, v___x_951_);
v___x_1004_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
lean_ctor_set(v___x_1004_, 1, v___x_953_);
v___x_1005_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__19));
v___x_1006_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
lean_ctor_set(v___x_1007_, 1, v___x_943_);
v___x_1008_ = l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5(v_stdWallIndicators_941_);
v___x_1009_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_968_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
lean_ctor_set_uint8(v___x_1010_, sizeof(void*)*1, v___x_948_);
v___x_1011_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1007_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
lean_ctor_set(v___x_1012_, 1, v___x_951_);
v___x_1013_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1012_);
lean_ctor_set(v___x_1013_, 1, v___x_953_);
v___x_1014_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__21));
v___x_1015_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
lean_ctor_set(v___x_1016_, 1, v___x_943_);
v___x_1017_ = l_Array_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV1_repr_spec__5(v_utLocalIndicators_942_);
v___x_1018_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_968_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
lean_ctor_set_uint8(v___x_1019_, sizeof(void*)*1, v___x_948_);
v___x_1020_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1016_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25, &l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25_once, _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25);
v___x_1022_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__26));
v___x_1023_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
lean_ctor_set(v___x_1023_, 1, v___x_1020_);
v___x_1024_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__27));
v___x_1025_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1023_);
lean_ctor_set(v___x_1025_, 1, v___x_1024_);
v___x_1026_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1021_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
lean_ctor_set_uint8(v___x_1027_, sizeof(void*)*1, v___x_948_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr(lean_object* v_x_1028_, lean_object* v_prec_1029_){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg(v_x_1028_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___boxed(lean_object* v_x_1031_, lean_object* v_prec_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_Std_Time_TimeZone_TZif_instReprTZifV1_repr(v_x_1031_, v_prec_1032_);
lean_dec(v_prec_1032_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0(lean_object* v_x_1049_, lean_object* v_x_1050_){
_start:
{
if (lean_obj_tag(v_x_1049_) == 0)
{
lean_object* v___x_1051_; 
v___x_1051_ = ((lean_object*)(l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__1));
return v___x_1051_;
}
else
{
lean_object* v_val_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1063_; 
v_val_1052_ = lean_ctor_get(v_x_1049_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_x_1049_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1054_ = v_x_1049_;
v_isShared_1055_ = v_isSharedCheck_1063_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_val_1052_);
lean_dec(v_x_1049_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1063_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1056_ = ((lean_object*)(l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__3));
v___x_1057_ = l_String_quote(v_val_1052_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set_tag(v___x_1054_, 3);
lean_ctor_set(v___x_1054_, 0, v___x_1057_);
v___x_1059_ = v___x_1054_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1056_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = l_Repr_addAppParen(v___x_1060_, v_x_1050_);
return v___x_1061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___boxed(lean_object* v_x_1064_, lean_object* v_x_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0(v_x_1064_, v_x_1065_);
lean_dec(v_x_1065_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg(lean_object* v_x_1079_){
_start:
{
lean_object* v_toTZifV1_1080_; lean_object* v_footer_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1115_; 
v_toTZifV1_1080_ = lean_ctor_get(v_x_1079_, 0);
v_footer_1081_ = lean_ctor_get(v_x_1079_, 1);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_x_1079_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1083_ = v_x_1079_;
v_isShared_1084_ = v_isSharedCheck_1115_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_footer_1081_);
lean_inc(v_toTZifV1_1080_);
lean_dec(v_x_1079_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1115_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1091_; 
v___x_1085_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5));
v___x_1086_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__3));
v___x_1087_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__14, &l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__14_once, _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__14);
v___x_1088_ = lean_unsigned_to_nat(0u);
v___x_1089_ = l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg(v_toTZifV1_1080_);
if (v_isShared_1084_ == 0)
{
lean_ctor_set_tag(v___x_1083_, 4);
lean_ctor_set(v___x_1083_, 1, v___x_1089_);
lean_ctor_set(v___x_1083_, 0, v___x_1087_);
v___x_1091_ = v___x_1083_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1087_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v___x_1089_);
v___x_1091_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
uint8_t v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1092_ = 0;
v___x_1093_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set_uint8(v___x_1093_, sizeof(void*)*1, v___x_1092_);
v___x_1094_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1086_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__9));
v___x_1096_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_box(1);
v___x_1098_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1096_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
v___x_1099_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg___closed__5));
v___x_1100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
lean_ctor_set(v___x_1101_, 1, v___x_1085_);
v___x_1102_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__4, &l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__4_once, _init_l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg___closed__4);
v___x_1103_ = l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0(v_footer_1081_, v___x_1088_);
v___x_1104_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1102_);
lean_ctor_set(v___x_1104_, 1, v___x_1103_);
v___x_1105_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1105_, 0, v___x_1104_);
lean_ctor_set_uint8(v___x_1105_, sizeof(void*)*1, v___x_1092_);
v___x_1106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1101_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25, &l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25_once, _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25);
v___x_1108_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__26));
v___x_1109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1108_);
lean_ctor_set(v___x_1109_, 1, v___x_1106_);
v___x_1110_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__27));
v___x_1111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1107_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
v___x_1113_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*1, v___x_1092_);
return v___x_1113_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr(lean_object* v_x_1116_, lean_object* v_prec_1117_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg(v_x_1116_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___boxed(lean_object* v_x_1119_, lean_object* v_prec_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_Std_Time_TimeZone_TZif_instReprTZifV2_repr(v_x_1119_, v_prec_1120_);
lean_dec(v_prec_1120_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZif_repr_spec__0(lean_object* v_x_1129_, lean_object* v_x_1130_){
_start:
{
if (lean_obj_tag(v_x_1129_) == 0)
{
lean_object* v___x_1131_; 
v___x_1131_ = ((lean_object*)(l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__1));
return v___x_1131_;
}
else
{
lean_object* v_val_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v_val_1132_ = lean_ctor_get(v_x_1129_, 0);
lean_inc(v_val_1132_);
lean_dec_ref_known(v_x_1129_, 1);
v___x_1133_ = ((lean_object*)(l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZifV2_repr_spec__0___closed__3));
v___x_1134_ = l_Std_Time_TimeZone_TZif_instReprTZifV2_repr___redArg(v_val_1132_);
v___x_1135_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1133_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
v___x_1136_ = l_Repr_addAppParen(v___x_1135_, v_x_1130_);
return v___x_1136_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZif_repr_spec__0___boxed(lean_object* v_x_1137_, lean_object* v_x_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZif_repr_spec__0(v_x_1137_, v_x_1138_);
lean_dec(v_x_1138_);
return v_res_1139_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1149_ = lean_unsigned_to_nat(6u);
v___x_1150_ = lean_nat_to_int(v___x_1149_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg(lean_object* v_x_1154_){
_start:
{
lean_object* v_v1_1155_; lean_object* v_v2_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1189_; 
v_v1_1155_ = lean_ctor_get(v_x_1154_, 0);
v_v2_1156_ = lean_ctor_get(v_x_1154_, 1);
v_isSharedCheck_1189_ = !lean_is_exclusive(v_x_1154_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1158_ = v_x_1154_;
v_isShared_1159_ = v_isSharedCheck_1189_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_v2_1156_);
lean_inc(v_v1_1155_);
lean_dec(v_x_1154_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1189_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1166_; 
v___x_1160_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__5));
v___x_1161_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__3));
v___x_1162_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__4, &l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__4_once, _init_l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__4);
v___x_1163_ = lean_unsigned_to_nat(0u);
v___x_1164_ = l_Std_Time_TimeZone_TZif_instReprTZifV1_repr___redArg(v_v1_1155_);
if (v_isShared_1159_ == 0)
{
lean_ctor_set_tag(v___x_1158_, 4);
lean_ctor_set(v___x_1158_, 1, v___x_1164_);
lean_ctor_set(v___x_1158_, 0, v___x_1162_);
v___x_1166_ = v___x_1158_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1162_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v___x_1164_);
v___x_1166_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
uint8_t v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1167_ = 0;
v___x_1168_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1168_, 0, v___x_1166_);
lean_ctor_set_uint8(v___x_1168_, sizeof(void*)*1, v___x_1167_);
v___x_1169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1161_);
lean_ctor_set(v___x_1169_, 1, v___x_1168_);
v___x_1170_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__9));
v___x_1171_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1169_);
lean_ctor_set(v___x_1171_, 1, v___x_1170_);
v___x_1172_ = lean_box(1);
v___x_1173_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1171_);
lean_ctor_set(v___x_1173_, 1, v___x_1172_);
v___x_1174_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg___closed__6));
v___x_1175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1173_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
v___x_1176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
lean_ctor_set(v___x_1176_, 1, v___x_1160_);
v___x_1177_ = l_Option_repr___at___00Std_Time_TimeZone_TZif_instReprTZif_repr_spec__0(v_v2_1156_, v___x_1163_);
v___x_1178_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1162_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
v___x_1179_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
lean_ctor_set_uint8(v___x_1179_, sizeof(void*)*1, v___x_1167_);
v___x_1180_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1176_);
lean_ctor_set(v___x_1180_, 1, v___x_1179_);
v___x_1181_ = lean_obj_once(&l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25, &l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25_once, _init_l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__25);
v___x_1182_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__26));
v___x_1183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1182_);
lean_ctor_set(v___x_1183_, 1, v___x_1180_);
v___x_1184_ = ((lean_object*)(l_Std_Time_TimeZone_TZif_instReprHeader_repr___redArg___closed__27));
v___x_1185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1183_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
v___x_1186_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1181_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
v___x_1187_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
lean_ctor_set_uint8(v___x_1187_, sizeof(void*)*1, v___x_1167_);
return v___x_1187_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr(lean_object* v_x_1190_, lean_object* v_prec_1191_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = l_Std_Time_TimeZone_TZif_instReprTZif_repr___redArg(v_x_1190_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_instReprTZif_repr___boxed(lean_object* v_x_1193_, lean_object* v_prec_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Std_Time_TimeZone_TZif_instReprTZif_repr(v_x_1193_, v_prec_1194_);
lean_dec(v_prec_1194_);
return v_res_1195_;
}
}
static lean_object* _init_l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = 0;
v___x_1204_ = lean_box_uint32(v___x_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT uint32_t l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0(lean_object* v_msg_1205_){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; uint32_t v___x_1208_; 
v___x_1206_ = l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0___boxed__const__1;
v___x_1207_ = lean_panic_fn_borrowed(v___x_1206_, v_msg_1205_);
v___x_1208_ = lean_unbox_uint32(v___x_1207_);
lean_dec(v___x_1207_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0___boxed(lean_object* v_msg_1209_){
_start:
{
uint32_t v_res_1210_; lean_object* v_r_1211_; 
v_res_1210_ = l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0(v_msg_1209_);
v_r_1211_ = lean_box_uint32(v_res_1210_);
return v_r_1211_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__3(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1215_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__2));
v___x_1216_ = lean_unsigned_to_nat(2u);
v___x_1217_ = lean_unsigned_to_nat(182u);
v___x_1218_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__1));
v___x_1219_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__0));
v___x_1220_ = l_mkPanicMessageWithDecl(v___x_1219_, v___x_1218_, v___x_1217_, v___x_1216_, v___x_1215_);
return v___x_1220_;
}
}
LEAN_EXPORT uint32_t l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32(lean_object* v_bs_1221_){
_start:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; 
v___x_1222_ = lean_byte_array_size(v_bs_1221_);
v___x_1223_ = lean_unsigned_to_nat(4u);
v___x_1224_ = lean_nat_dec_eq(v___x_1222_, v___x_1223_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; uint32_t v___x_1226_; 
v___x_1225_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__3, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__3_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___closed__3);
v___x_1226_ = l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0(v___x_1225_);
return v___x_1226_;
}
else
{
lean_object* v___x_1227_; uint8_t v___x_1228_; uint32_t v___x_1229_; uint32_t v___x_1230_; uint32_t v___x_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; uint32_t v___x_1234_; uint32_t v___x_1235_; uint32_t v___x_1236_; uint32_t v___x_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; uint32_t v___x_1240_; uint32_t v___x_1241_; uint32_t v___x_1242_; uint32_t v___x_1243_; lean_object* v___x_1244_; uint8_t v___x_1245_; uint32_t v___x_1246_; uint32_t v___x_1247_; 
v___x_1227_ = lean_unsigned_to_nat(0u);
v___x_1228_ = lean_byte_array_get(v_bs_1221_, v___x_1227_);
v___x_1229_ = lean_uint8_to_uint32(v___x_1228_);
v___x_1230_ = 24;
v___x_1231_ = lean_uint32_shift_left(v___x_1229_, v___x_1230_);
v___x_1232_ = lean_unsigned_to_nat(1u);
v___x_1233_ = lean_byte_array_get(v_bs_1221_, v___x_1232_);
v___x_1234_ = lean_uint8_to_uint32(v___x_1233_);
v___x_1235_ = 16;
v___x_1236_ = lean_uint32_shift_left(v___x_1234_, v___x_1235_);
v___x_1237_ = lean_uint32_lor(v___x_1231_, v___x_1236_);
v___x_1238_ = lean_unsigned_to_nat(2u);
v___x_1239_ = lean_byte_array_get(v_bs_1221_, v___x_1238_);
v___x_1240_ = lean_uint8_to_uint32(v___x_1239_);
v___x_1241_ = 8;
v___x_1242_ = lean_uint32_shift_left(v___x_1240_, v___x_1241_);
v___x_1243_ = lean_uint32_lor(v___x_1237_, v___x_1242_);
v___x_1244_ = lean_unsigned_to_nat(3u);
v___x_1245_ = lean_byte_array_get(v_bs_1221_, v___x_1244_);
v___x_1246_ = lean_uint8_to_uint32(v___x_1245_);
v___x_1247_ = lean_uint32_lor(v___x_1243_, v___x_1246_);
return v___x_1247_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32___boxed(lean_object* v_bs_1248_){
_start:
{
uint32_t v_res_1249_; lean_object* v_r_1250_; 
v_res_1249_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32(v_bs_1248_);
lean_dec_ref(v_bs_1248_);
v_r_1250_ = lean_box_uint32(v_res_1249_);
return v_r_1250_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt32(lean_object* v_bs_1251_){
_start:
{
uint32_t v___x_1252_; lean_object* v_n_1253_; lean_object* v___x_1254_; uint8_t v___x_1255_; 
v___x_1252_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32(v_bs_1251_);
v_n_1253_ = lean_uint32_to_nat(v___x_1252_);
v___x_1254_ = lean_unsigned_to_nat(2147483648u);
v___x_1255_ = lean_nat_dec_lt(v_n_1253_, v___x_1254_);
if (v___x_1255_ == 0)
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1256_ = lean_cstr_to_nat("4294967296");
v___x_1257_ = lean_nat_sub(v___x_1256_, v_n_1253_);
lean_dec(v_n_1253_);
v___x_1258_ = l_Int_negOfNat(v___x_1257_);
lean_dec(v___x_1257_);
return v___x_1258_;
}
else
{
lean_object* v___x_1259_; 
v___x_1259_ = lean_nat_to_int(v_n_1253_);
return v___x_1259_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt32___boxed(lean_object* v_bs_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt32(v_bs_1260_);
lean_dec_ref(v_bs_1260_);
return v_res_1261_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__0(void){
_start:
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_cstr_to_nat("9223372036854775808");
return v___x_1262_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__1(void){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = lean_cstr_to_nat("18446744073709551616");
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64(lean_object* v_bs_1264_){
_start:
{
uint64_t v___x_1265_; lean_object* v_n_1266_; lean_object* v___x_1267_; uint8_t v___x_1268_; 
v___x_1265_ = l_ByteArray_toUInt64BE_x21(v_bs_1264_);
v_n_1266_ = lean_uint64_to_nat(v___x_1265_);
v___x_1267_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__0, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__0_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__0);
v___x_1268_ = lean_nat_dec_lt(v_n_1266_, v___x_1267_);
if (v___x_1268_ == 0)
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1269_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__1, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__1_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___closed__1);
v___x_1270_ = lean_nat_sub(v___x_1269_, v_n_1266_);
lean_dec(v_n_1266_);
v___x_1271_ = l_Int_negOfNat(v___x_1270_);
lean_dec(v___x_1270_);
return v___x_1271_;
}
else
{
lean_object* v___x_1272_; 
v___x_1272_ = lean_nat_to_int(v_n_1266_);
return v___x_1272_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64___boxed(lean_object* v_bs_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64(v_bs_1273_);
lean_dec_ref(v_bs_1273_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0___redArg(lean_object* v_upperBound_1275_, lean_object* v_p_1276_, lean_object* v_a_1277_, lean_object* v_b_1278_, lean_object* v___y_1279_){
_start:
{
uint8_t v___x_1280_; 
v___x_1280_ = lean_nat_dec_lt(v_a_1277_, v_upperBound_1275_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; 
lean_dec(v_a_1277_);
lean_dec_ref(v_p_1276_);
v___x_1281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___y_1279_);
lean_ctor_set(v___x_1281_, 1, v_b_1278_);
return v___x_1281_;
}
else
{
lean_object* v___x_1282_; 
lean_inc_ref(v_p_1276_);
v___x_1282_ = lean_apply_1(v_p_1276_, v___y_1279_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_pos_1283_; lean_object* v_res_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v_pos_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_pos_1283_);
v_res_1284_ = lean_ctor_get(v___x_1282_, 1);
lean_inc(v_res_1284_);
lean_dec_ref_known(v___x_1282_, 2);
v___x_1285_ = lean_array_push(v_b_1278_, v_res_1284_);
v___x_1286_ = lean_unsigned_to_nat(1u);
v___x_1287_ = lean_nat_add(v_a_1277_, v___x_1286_);
lean_dec(v_a_1277_);
v_a_1277_ = v___x_1287_;
v_b_1278_ = v___x_1285_;
v___y_1279_ = v_pos_1283_;
goto _start;
}
else
{
lean_object* v_pos_1289_; lean_object* v_err_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1297_; 
lean_dec_ref(v_b_1278_);
lean_dec(v_a_1277_);
lean_dec_ref(v_p_1276_);
v_pos_1289_ = lean_ctor_get(v___x_1282_, 0);
v_err_1290_ = lean_ctor_get(v___x_1282_, 1);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1292_ = v___x_1282_;
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_err_1290_);
lean_inc(v_pos_1289_);
lean_dec(v___x_1282_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_pos_1289_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v_err_1290_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0___redArg___boxed(lean_object* v_upperBound_1298_, lean_object* v_p_1299_, lean_object* v_a_1300_, lean_object* v_b_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0___redArg(v_upperBound_1298_, v_p_1299_, v_a_1300_, v_b_1301_, v___y_1302_);
lean_dec(v_upperBound_1298_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg(lean_object* v_n_1306_, lean_object* v_p_1307_, lean_object* v_a_1308_){
_start:
{
lean_object* v___x_1309_; lean_object* v_result_1310_; lean_object* v___x_1311_; 
v___x_1309_ = lean_unsigned_to_nat(0u);
v_result_1310_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg___closed__0));
v___x_1311_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0___redArg(v_n_1306_, v_p_1307_, v___x_1309_, v_result_1310_, v_a_1308_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg___boxed(lean_object* v_n_1312_, lean_object* v_p_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg(v_n_1312_, v_p_1313_, v_a_1314_);
lean_dec(v_n_1312_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN(lean_object* v_00_u03b1_1316_, lean_object* v_n_1317_, lean_object* v_p_1318_, lean_object* v_a_1319_){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg(v_n_1317_, v_p_1318_, v_a_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___boxed(lean_object* v_00_u03b1_1321_, lean_object* v_n_1322_, lean_object* v_p_1323_, lean_object* v_a_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN(v_00_u03b1_1321_, v_n_1322_, v_p_1323_, v_a_1324_);
lean_dec(v_n_1322_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0(lean_object* v_00_u03b1_1326_, lean_object* v_upperBound_1327_, lean_object* v_p_1328_, lean_object* v_inst_1329_, lean_object* v_R_1330_, lean_object* v_a_1331_, lean_object* v_b_1332_, lean_object* v_c_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0___redArg(v_upperBound_1327_, v_p_1328_, v_a_1331_, v_b_1332_, v___y_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0___boxed(lean_object* v_00_u03b1_1336_, lean_object* v_upperBound_1337_, lean_object* v_p_1338_, lean_object* v_inst_1339_, lean_object* v_R_1340_, lean_object* v_a_1341_, lean_object* v_b_1342_, lean_object* v_c_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN_spec__0(v_00_u03b1_1336_, v_upperBound_1337_, v_p_1338_, v_inst_1339_, v_R_1340_, v_a_1341_, v_b_1342_, v_c_1343_, v___y_1344_);
lean_dec(v_upperBound_1337_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu64(lean_object* v_a_1346_){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1347_ = lean_unsigned_to_nat(8u);
v___x_1348_ = l_Std_Internal_Parsec_ByteArray_take(v___x_1347_, v_a_1346_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_pos_1349_; lean_object* v_res_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1360_; 
v_pos_1349_ = lean_ctor_get(v___x_1348_, 0);
v_res_1350_ = lean_ctor_get(v___x_1348_, 1);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1352_ = v___x_1348_;
v_isShared_1353_ = v_isSharedCheck_1360_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_res_1350_);
lean_inc(v_pos_1349_);
lean_dec(v___x_1348_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1360_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1354_; uint64_t v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1358_; 
v___x_1354_ = l_ByteSlice_toByteArray(v_res_1350_);
v___x_1355_ = l_ByteArray_toUInt64LE_x21(v___x_1354_);
lean_dec_ref(v___x_1354_);
v___x_1356_ = lean_box_uint64(v___x_1355_);
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 1, v___x_1356_);
v___x_1358_ = v___x_1352_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_pos_1349_);
lean_ctor_set(v_reuseFailAlloc_1359_, 1, v___x_1356_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
}
else
{
lean_object* v_pos_1361_; lean_object* v_err_1362_; lean_object* v___x_1364_; uint8_t v_isShared_1365_; uint8_t v_isSharedCheck_1369_; 
v_pos_1361_ = lean_ctor_get(v___x_1348_, 0);
v_err_1362_ = lean_ctor_get(v___x_1348_, 1);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1364_ = v___x_1348_;
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
else
{
lean_inc(v_err_1362_);
lean_inc(v_pos_1361_);
lean_dec(v___x_1348_);
v___x_1364_ = lean_box(0);
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
v_resetjp_1363_:
{
lean_object* v___x_1367_; 
if (v_isShared_1365_ == 0)
{
v___x_1367_ = v___x_1364_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v_pos_1361_);
lean_ctor_set(v_reuseFailAlloc_1368_, 1, v_err_1362_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pi64(lean_object* v_a_1370_){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = lean_unsigned_to_nat(8u);
v___x_1372_ = l_Std_Internal_Parsec_ByteArray_take(v___x_1371_, v_a_1370_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_pos_1373_; lean_object* v_res_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1383_; 
v_pos_1373_ = lean_ctor_get(v___x_1372_, 0);
v_res_1374_ = lean_ctor_get(v___x_1372_, 1);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1376_ = v___x_1372_;
v_isShared_1377_ = v_isSharedCheck_1383_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_res_1374_);
lean_inc(v_pos_1373_);
lean_dec(v___x_1372_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1383_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1381_; 
v___x_1378_ = l_ByteSlice_toByteArray(v_res_1374_);
v___x_1379_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt64(v___x_1378_);
lean_dec_ref(v___x_1378_);
if (v_isShared_1377_ == 0)
{
lean_ctor_set(v___x_1376_, 1, v___x_1379_);
v___x_1381_ = v___x_1376_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_pos_1373_);
lean_ctor_set(v_reuseFailAlloc_1382_, 1, v___x_1379_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
else
{
lean_object* v_pos_1384_; lean_object* v_err_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1392_; 
v_pos_1384_ = lean_ctor_get(v___x_1372_, 0);
v_err_1385_ = lean_ctor_get(v___x_1372_, 1);
v_isSharedCheck_1392_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1387_ = v___x_1372_;
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_err_1385_);
lean_inc(v_pos_1384_);
lean_dec(v___x_1372_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1390_; 
if (v_isShared_1388_ == 0)
{
v___x_1390_ = v___x_1387_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v_pos_1384_);
lean_ctor_set(v_reuseFailAlloc_1391_, 1, v_err_1385_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
return v___x_1390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu32(lean_object* v_a_1393_){
_start:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = lean_unsigned_to_nat(4u);
v___x_1395_ = l_Std_Internal_Parsec_ByteArray_take(v___x_1394_, v_a_1393_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_pos_1396_; lean_object* v_res_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1407_; 
v_pos_1396_ = lean_ctor_get(v___x_1395_, 0);
v_res_1397_ = lean_ctor_get(v___x_1395_, 1);
v_isSharedCheck_1407_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1399_ = v___x_1395_;
v_isShared_1400_ = v_isSharedCheck_1407_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_res_1397_);
lean_inc(v_pos_1396_);
lean_dec(v___x_1395_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1407_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1401_; uint32_t v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1405_; 
v___x_1401_ = l_ByteSlice_toByteArray(v_res_1397_);
v___x_1402_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32(v___x_1401_);
lean_dec_ref(v___x_1401_);
v___x_1403_ = lean_box_uint32(v___x_1402_);
if (v_isShared_1400_ == 0)
{
lean_ctor_set(v___x_1399_, 1, v___x_1403_);
v___x_1405_ = v___x_1399_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v_pos_1396_);
lean_ctor_set(v_reuseFailAlloc_1406_, 1, v___x_1403_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
}
else
{
lean_object* v_pos_1408_; lean_object* v_err_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
v_pos_1408_ = lean_ctor_get(v___x_1395_, 0);
v_err_1409_ = lean_ctor_get(v___x_1395_, 1);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1411_ = v___x_1395_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_err_1409_);
lean_inc(v_pos_1408_);
lean_dec(v___x_1395_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_pos_1408_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v_err_1409_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pi32(lean_object* v_a_1417_){
_start:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1418_ = lean_unsigned_to_nat(4u);
v___x_1419_ = l_Std_Internal_Parsec_ByteArray_take(v___x_1418_, v_a_1417_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_pos_1420_; lean_object* v_res_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1430_; 
v_pos_1420_ = lean_ctor_get(v___x_1419_, 0);
v_res_1421_ = lean_ctor_get(v___x_1419_, 1);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1423_ = v___x_1419_;
v_isShared_1424_ = v_isSharedCheck_1430_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_res_1421_);
lean_inc(v_pos_1420_);
lean_dec(v___x_1419_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1430_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1428_; 
v___x_1425_ = l_ByteSlice_toByteArray(v_res_1421_);
v___x_1426_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toInt32(v___x_1425_);
lean_dec_ref(v___x_1425_);
if (v_isShared_1424_ == 0)
{
lean_ctor_set(v___x_1423_, 1, v___x_1426_);
v___x_1428_ = v___x_1423_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_pos_1420_);
lean_ctor_set(v_reuseFailAlloc_1429_, 1, v___x_1426_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
else
{
lean_object* v_pos_1431_; lean_object* v_err_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
v_pos_1431_ = lean_ctor_get(v___x_1419_, 0);
v_err_1432_ = lean_ctor_get(v___x_1419_, 1);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1419_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_err_1432_);
lean_inc(v_pos_1431_);
lean_dec(v___x_1419_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_pos_1431_);
lean_ctor_set(v_reuseFailAlloc_1438_, 1, v_err_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu8(lean_object* v_a_1440_){
_start:
{
lean_object* v_array_1441_; lean_object* v_idx_1442_; lean_object* v___x_1443_; uint8_t v___x_1444_; 
v_array_1441_ = lean_ctor_get(v_a_1440_, 0);
v_idx_1442_ = lean_ctor_get(v_a_1440_, 1);
v___x_1443_ = lean_byte_array_size(v_array_1441_);
v___x_1444_ = lean_nat_dec_lt(v_idx_1442_, v___x_1443_);
if (v___x_1444_ == 0)
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1445_ = lean_box(0);
v___x_1446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1446_, 0, v_a_1440_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
return v___x_1446_;
}
else
{
lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1458_; 
lean_inc(v_idx_1442_);
lean_inc_ref(v_array_1441_);
v_isSharedCheck_1458_ = !lean_is_exclusive(v_a_1440_);
if (v_isSharedCheck_1458_ == 0)
{
lean_object* v_unused_1459_; lean_object* v_unused_1460_; 
v_unused_1459_ = lean_ctor_get(v_a_1440_, 1);
lean_dec(v_unused_1459_);
v_unused_1460_ = lean_ctor_get(v_a_1440_, 0);
lean_dec(v_unused_1460_);
v___x_1448_ = v_a_1440_;
v_isShared_1449_ = v_isSharedCheck_1458_;
goto v_resetjp_1447_;
}
else
{
lean_dec(v_a_1440_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1458_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
uint8_t v_c_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v_it_x27_1454_; 
v_c_1450_ = lean_byte_array_fget(v_array_1441_, v_idx_1442_);
v___x_1451_ = lean_unsigned_to_nat(1u);
v___x_1452_ = lean_nat_add(v_idx_1442_, v___x_1451_);
lean_dec(v_idx_1442_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 1, v___x_1452_);
v_it_x27_1454_ = v___x_1448_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_array_1441_);
lean_ctor_set(v_reuseFailAlloc_1457_, 1, v___x_1452_);
v_it_x27_1454_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1455_ = lean_box(v_c_1450_);
v___x_1456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1456_, 0, v_it_x27_1454_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
return v___x_1456_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pbool(lean_object* v_a_1461_){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu8(v_a_1461_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_pos_1463_; lean_object* v_res_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1481_; 
v_pos_1463_ = lean_ctor_get(v___x_1462_, 0);
v_res_1464_ = lean_ctor_get(v___x_1462_, 1);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1466_ = v___x_1462_;
v_isShared_1467_ = v_isSharedCheck_1481_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_res_1464_);
lean_inc(v_pos_1463_);
lean_dec(v___x_1462_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1481_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
uint8_t v___x_1468_; uint8_t v___x_1469_; uint8_t v___x_1470_; 
v___x_1468_ = 0;
v___x_1469_ = lean_unbox(v_res_1464_);
lean_dec(v_res_1464_);
v___x_1470_ = lean_uint8_dec_eq(v___x_1469_, v___x_1468_);
if (v___x_1470_ == 0)
{
uint8_t v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1474_; 
v___x_1471_ = 1;
v___x_1472_ = lean_box(v___x_1471_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 1, v___x_1472_);
v___x_1474_ = v___x_1466_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_pos_1463_);
lean_ctor_set(v_reuseFailAlloc_1475_, 1, v___x_1472_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
else
{
uint8_t v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1479_; 
v___x_1476_ = 0;
v___x_1477_ = lean_box(v___x_1476_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 1, v___x_1477_);
v___x_1479_ = v___x_1466_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_pos_1463_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v___x_1477_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
else
{
lean_object* v_pos_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1490_; 
v_pos_1482_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1490_ == 0)
{
lean_object* v_unused_1491_; 
v_unused_1491_ = lean_ctor_get(v___x_1462_, 1);
lean_dec(v_unused_1491_);
v___x_1484_ = v___x_1462_;
v_isShared_1485_ = v_isSharedCheck_1490_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_pos_1482_);
lean_dec(v___x_1462_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1490_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1486_; lean_object* v___x_1488_; 
v___x_1486_ = lean_box(0);
if (v_isShared_1485_ == 0)
{
lean_ctor_set(v___x_1484_, 1, v___x_1486_);
v___x_1488_ = v___x_1484_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_pos_1482_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v___x_1486_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseHeader___closed__0(void){
_start:
{
lean_object* v___x_1492_; lean_object* v_utf8_1493_; 
v___x_1492_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32___closed__18));
v_utf8_1493_ = lean_string_to_utf8(v___x_1492_);
return v_utf8_1493_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseHeader(lean_object* v_a_1494_){
_start:
{
lean_object* v_utf8_1495_; lean_object* v___x_1496_; 
v_utf8_1495_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseHeader___closed__0, &l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseHeader___closed__0_once, _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseHeader___closed__0);
v___x_1496_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_1495_, v_a_1494_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_pos_1497_; lean_object* v___x_1498_; 
v_pos_1497_ = lean_ctor_get(v___x_1496_, 0);
lean_inc(v_pos_1497_);
lean_dec_ref_known(v___x_1496_, 2);
v___x_1498_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu8(v_pos_1497_);
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_pos_1499_; lean_object* v_res_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v_pos_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_pos_1499_);
v_res_1500_ = lean_ctor_get(v___x_1498_, 1);
lean_inc(v_res_1500_);
lean_dec_ref_known(v___x_1498_, 2);
v___x_1501_ = lean_unsigned_to_nat(15u);
v___x_1502_ = l_Std_Internal_Parsec_ByteArray_take(v___x_1501_, v_pos_1499_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_pos_1503_; lean_object* v___x_1504_; 
v_pos_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_pos_1503_);
lean_dec_ref_known(v___x_1502_, 2);
v___x_1504_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu32(v_pos_1503_);
if (lean_obj_tag(v___x_1504_) == 0)
{
lean_object* v_pos_1505_; lean_object* v_res_1506_; lean_object* v___x_1507_; 
v_pos_1505_ = lean_ctor_get(v___x_1504_, 0);
lean_inc(v_pos_1505_);
v_res_1506_ = lean_ctor_get(v___x_1504_, 1);
lean_inc(v_res_1506_);
lean_dec_ref_known(v___x_1504_, 2);
v___x_1507_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu32(v_pos_1505_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v_pos_1508_; lean_object* v_res_1509_; lean_object* v___x_1510_; 
v_pos_1508_ = lean_ctor_get(v___x_1507_, 0);
lean_inc(v_pos_1508_);
v_res_1509_ = lean_ctor_get(v___x_1507_, 1);
lean_inc(v_res_1509_);
lean_dec_ref_known(v___x_1507_, 2);
v___x_1510_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu32(v_pos_1508_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v_pos_1511_; lean_object* v_res_1512_; lean_object* v___x_1513_; 
v_pos_1511_ = lean_ctor_get(v___x_1510_, 0);
lean_inc(v_pos_1511_);
v_res_1512_ = lean_ctor_get(v___x_1510_, 1);
lean_inc(v_res_1512_);
lean_dec_ref_known(v___x_1510_, 2);
v___x_1513_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu32(v_pos_1511_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_pos_1514_; lean_object* v_res_1515_; lean_object* v___x_1516_; 
v_pos_1514_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_pos_1514_);
v_res_1515_ = lean_ctor_get(v___x_1513_, 1);
lean_inc(v_res_1515_);
lean_dec_ref_known(v___x_1513_, 2);
v___x_1516_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu32(v_pos_1514_);
if (lean_obj_tag(v___x_1516_) == 0)
{
lean_object* v_pos_1517_; lean_object* v_res_1518_; lean_object* v___x_1519_; 
v_pos_1517_ = lean_ctor_get(v___x_1516_, 0);
lean_inc(v_pos_1517_);
v_res_1518_ = lean_ctor_get(v___x_1516_, 1);
lean_inc(v_res_1518_);
lean_dec_ref_known(v___x_1516_, 2);
v___x_1519_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu32(v_pos_1517_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_pos_1520_; lean_object* v_res_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1536_; 
v_pos_1520_ = lean_ctor_get(v___x_1519_, 0);
v_res_1521_ = lean_ctor_get(v___x_1519_, 1);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1523_ = v___x_1519_;
v_isShared_1524_ = v_isSharedCheck_1536_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_res_1521_);
lean_inc(v_pos_1520_);
lean_dec(v___x_1519_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1536_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1525_; uint8_t v___x_1526_; uint32_t v___x_1527_; uint32_t v___x_1528_; uint32_t v___x_1529_; uint32_t v___x_1530_; uint32_t v___x_1531_; uint32_t v___x_1532_; lean_object* v___x_1534_; 
v___x_1525_ = lean_alloc_ctor(0, 0, 25);
v___x_1526_ = lean_unbox(v_res_1500_);
lean_dec(v_res_1500_);
lean_ctor_set_uint8(v___x_1525_, 24, v___x_1526_);
v___x_1527_ = lean_unbox_uint32(v_res_1506_);
lean_dec(v_res_1506_);
lean_ctor_set_uint32(v___x_1525_, 0, v___x_1527_);
v___x_1528_ = lean_unbox_uint32(v_res_1509_);
lean_dec(v_res_1509_);
lean_ctor_set_uint32(v___x_1525_, 4, v___x_1528_);
v___x_1529_ = lean_unbox_uint32(v_res_1512_);
lean_dec(v_res_1512_);
lean_ctor_set_uint32(v___x_1525_, 8, v___x_1529_);
v___x_1530_ = lean_unbox_uint32(v_res_1515_);
lean_dec(v_res_1515_);
lean_ctor_set_uint32(v___x_1525_, 12, v___x_1530_);
v___x_1531_ = lean_unbox_uint32(v_res_1518_);
lean_dec(v_res_1518_);
lean_ctor_set_uint32(v___x_1525_, 16, v___x_1531_);
v___x_1532_ = lean_unbox_uint32(v_res_1521_);
lean_dec(v_res_1521_);
lean_ctor_set_uint32(v___x_1525_, 20, v___x_1532_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 1, v___x_1525_);
v___x_1534_ = v___x_1523_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_pos_1520_);
lean_ctor_set(v_reuseFailAlloc_1535_, 1, v___x_1525_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
else
{
lean_object* v_pos_1537_; lean_object* v_err_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_dec(v_res_1518_);
lean_dec(v_res_1515_);
lean_dec(v_res_1512_);
lean_dec(v_res_1509_);
lean_dec(v_res_1506_);
lean_dec(v_res_1500_);
v_pos_1537_ = lean_ctor_get(v___x_1519_, 0);
v_err_1538_ = lean_ctor_get(v___x_1519_, 1);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1519_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_err_1538_);
lean_inc(v_pos_1537_);
lean_dec(v___x_1519_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_pos_1537_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v_err_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
else
{
lean_object* v_pos_1546_; lean_object* v_err_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1554_; 
lean_dec(v_res_1515_);
lean_dec(v_res_1512_);
lean_dec(v_res_1509_);
lean_dec(v_res_1506_);
lean_dec(v_res_1500_);
v_pos_1546_ = lean_ctor_get(v___x_1516_, 0);
v_err_1547_ = lean_ctor_get(v___x_1516_, 1);
v_isSharedCheck_1554_ = !lean_is_exclusive(v___x_1516_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1549_ = v___x_1516_;
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_err_1547_);
lean_inc(v_pos_1546_);
lean_dec(v___x_1516_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1554_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1552_; 
if (v_isShared_1550_ == 0)
{
v___x_1552_ = v___x_1549_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v_pos_1546_);
lean_ctor_set(v_reuseFailAlloc_1553_, 1, v_err_1547_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
else
{
lean_object* v_pos_1555_; lean_object* v_err_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_dec(v_res_1512_);
lean_dec(v_res_1509_);
lean_dec(v_res_1506_);
lean_dec(v_res_1500_);
v_pos_1555_ = lean_ctor_get(v___x_1513_, 0);
v_err_1556_ = lean_ctor_get(v___x_1513_, 1);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1513_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_err_1556_);
lean_inc(v_pos_1555_);
lean_dec(v___x_1513_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_pos_1555_);
lean_ctor_set(v_reuseFailAlloc_1562_, 1, v_err_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
else
{
lean_object* v_pos_1564_; lean_object* v_err_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec(v_res_1509_);
lean_dec(v_res_1506_);
lean_dec(v_res_1500_);
v_pos_1564_ = lean_ctor_get(v___x_1510_, 0);
v_err_1565_ = lean_ctor_get(v___x_1510_, 1);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1510_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_err_1565_);
lean_inc(v_pos_1564_);
lean_dec(v___x_1510_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_pos_1564_);
lean_ctor_set(v_reuseFailAlloc_1571_, 1, v_err_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
else
{
lean_object* v_pos_1573_; lean_object* v_err_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
lean_dec(v_res_1506_);
lean_dec(v_res_1500_);
v_pos_1573_ = lean_ctor_get(v___x_1507_, 0);
v_err_1574_ = lean_ctor_get(v___x_1507_, 1);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1507_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_err_1574_);
lean_inc(v_pos_1573_);
lean_dec(v___x_1507_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_pos_1573_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v_err_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
else
{
lean_object* v_pos_1582_; lean_object* v_err_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
lean_dec(v_res_1500_);
v_pos_1582_ = lean_ctor_get(v___x_1504_, 0);
v_err_1583_ = lean_ctor_get(v___x_1504_, 1);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1504_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_err_1583_);
lean_inc(v_pos_1582_);
lean_dec(v___x_1504_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_pos_1582_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v_err_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
else
{
lean_object* v_pos_1591_; lean_object* v_err_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
lean_dec(v_res_1500_);
v_pos_1591_ = lean_ctor_get(v___x_1502_, 0);
v_err_1592_ = lean_ctor_get(v___x_1502_, 1);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1502_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_err_1592_);
lean_inc(v_pos_1591_);
lean_dec(v___x_1502_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_pos_1591_);
lean_ctor_set(v_reuseFailAlloc_1598_, 1, v_err_1592_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
else
{
lean_object* v_pos_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1608_; 
v_pos_1600_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1608_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1608_ == 0)
{
lean_object* v_unused_1609_; 
v_unused_1609_ = lean_ctor_get(v___x_1498_, 1);
lean_dec(v_unused_1609_);
v___x_1602_ = v___x_1498_;
v_isShared_1603_ = v_isSharedCheck_1608_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_pos_1600_);
lean_dec(v___x_1498_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1608_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1604_; lean_object* v___x_1606_; 
v___x_1604_ = lean_box(0);
if (v_isShared_1603_ == 0)
{
lean_ctor_set(v___x_1602_, 1, v___x_1604_);
v___x_1606_ = v___x_1602_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v_pos_1600_);
lean_ctor_set(v_reuseFailAlloc_1607_, 1, v___x_1604_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
return v___x_1606_;
}
}
}
}
else
{
lean_object* v_pos_1610_; lean_object* v_err_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
v_pos_1610_ = lean_ctor_get(v___x_1496_, 0);
v_err_1611_ = lean_ctor_get(v___x_1496_, 1);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1613_ = v___x_1496_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_err_1611_);
lean_inc(v_pos_1610_);
lean_dec(v___x_1496_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_pos_1610_);
lean_ctor_set(v_reuseFailAlloc_1617_, 1, v_err_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLocalTimeType(lean_object* v_a_1619_){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pi32(v_a_1619_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_pos_1621_; lean_object* v_res_1622_; lean_object* v___x_1623_; 
v_pos_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_pos_1621_);
v_res_1622_ = lean_ctor_get(v___x_1620_, 1);
lean_inc(v_res_1622_);
lean_dec_ref_known(v___x_1620_, 2);
v___x_1623_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pbool(v_pos_1621_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_pos_1624_; lean_object* v_res_1625_; lean_object* v___x_1626_; 
v_pos_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_pos_1624_);
v_res_1625_ = lean_ctor_get(v___x_1623_, 1);
lean_inc(v_res_1625_);
lean_dec_ref_known(v___x_1623_, 2);
v___x_1626_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu8(v_pos_1624_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_object* v_pos_1627_; lean_object* v_res_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1638_; 
v_pos_1627_ = lean_ctor_get(v___x_1626_, 0);
v_res_1628_ = lean_ctor_get(v___x_1626_, 1);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1630_ = v___x_1626_;
v_isShared_1631_ = v_isSharedCheck_1638_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_res_1628_);
lean_inc(v_pos_1627_);
lean_dec(v___x_1626_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1638_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1632_; uint8_t v___x_1633_; uint8_t v___x_1634_; lean_object* v___x_1636_; 
v___x_1632_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_1632_, 0, v_res_1622_);
v___x_1633_ = lean_unbox(v_res_1625_);
lean_dec(v_res_1625_);
lean_ctor_set_uint8(v___x_1632_, sizeof(void*)*1, v___x_1633_);
v___x_1634_ = lean_unbox(v_res_1628_);
lean_dec(v_res_1628_);
lean_ctor_set_uint8(v___x_1632_, sizeof(void*)*1 + 1, v___x_1634_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 1, v___x_1632_);
v___x_1636_ = v___x_1630_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v_pos_1627_);
lean_ctor_set(v_reuseFailAlloc_1637_, 1, v___x_1632_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
else
{
lean_object* v_pos_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1647_; 
lean_dec(v_res_1625_);
lean_dec(v_res_1622_);
v_pos_1639_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1647_ == 0)
{
lean_object* v_unused_1648_; 
v_unused_1648_ = lean_ctor_get(v___x_1626_, 1);
lean_dec(v_unused_1648_);
v___x_1641_ = v___x_1626_;
v_isShared_1642_ = v_isSharedCheck_1647_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_pos_1639_);
lean_dec(v___x_1626_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1647_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1643_; lean_object* v___x_1645_; 
v___x_1643_ = lean_box(0);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 1, v___x_1643_);
v___x_1645_ = v___x_1641_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_pos_1639_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v___x_1643_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
else
{
lean_object* v_pos_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1657_; 
lean_dec(v_res_1622_);
v_pos_1649_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1657_ == 0)
{
lean_object* v_unused_1658_; 
v_unused_1658_ = lean_ctor_get(v___x_1623_, 1);
lean_dec(v_unused_1658_);
v___x_1651_ = v___x_1623_;
v_isShared_1652_ = v_isSharedCheck_1657_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_pos_1649_);
lean_dec(v___x_1623_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1657_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1653_; lean_object* v___x_1655_; 
v___x_1653_ = lean_box(0);
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 1, v___x_1653_);
v___x_1655_ = v___x_1651_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_pos_1649_);
lean_ctor_set(v_reuseFailAlloc_1656_, 1, v___x_1653_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
}
else
{
lean_object* v_pos_1659_; lean_object* v_err_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
v_pos_1659_ = lean_ctor_get(v___x_1620_, 0);
v_err_1660_ = lean_ctor_get(v___x_1620_, 1);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1620_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_err_1660_);
lean_inc(v_pos_1659_);
lean_dec(v___x_1620_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_pos_1659_);
lean_ctor_set(v_reuseFailAlloc_1666_, 1, v_err_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLeapSecond(lean_object* v_p_1668_, lean_object* v_a_1669_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = lean_apply_1(v_p_1668_, v_a_1669_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_pos_1671_; lean_object* v_res_1672_; lean_object* v___x_1673_; 
v_pos_1671_ = lean_ctor_get(v___x_1670_, 0);
lean_inc(v_pos_1671_);
v_res_1672_ = lean_ctor_get(v___x_1670_, 1);
lean_inc(v_res_1672_);
lean_dec_ref_known(v___x_1670_, 2);
v___x_1673_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pi32(v_pos_1671_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_pos_1674_; lean_object* v_res_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1683_; 
v_pos_1674_ = lean_ctor_get(v___x_1673_, 0);
v_res_1675_ = lean_ctor_get(v___x_1673_, 1);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1677_ = v___x_1673_;
v_isShared_1678_ = v_isSharedCheck_1683_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_res_1675_);
lean_inc(v_pos_1674_);
lean_dec(v___x_1673_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1683_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1679_, 0, v_res_1672_);
lean_ctor_set(v___x_1679_, 1, v_res_1675_);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 1, v___x_1679_);
v___x_1681_ = v___x_1677_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_pos_1674_);
lean_ctor_set(v_reuseFailAlloc_1682_, 1, v___x_1679_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
else
{
lean_object* v_pos_1684_; lean_object* v_err_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
lean_dec(v_res_1672_);
v_pos_1684_ = lean_ctor_get(v___x_1673_, 0);
v_err_1685_ = lean_ctor_get(v___x_1673_, 1);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1687_ = v___x_1673_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_err_1685_);
lean_inc(v_pos_1684_);
lean_dec(v___x_1673_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_pos_1684_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v_err_1685_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
}
else
{
lean_object* v_pos_1693_; lean_object* v_err_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1701_; 
v_pos_1693_ = lean_ctor_get(v___x_1670_, 0);
v_err_1694_ = lean_ctor_get(v___x_1670_, 1);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1696_ = v___x_1670_;
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_err_1694_);
lean_inc(v_pos_1693_);
lean_dec(v___x_1670_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_pos_1693_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v_err_1694_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionTimes(lean_object* v_size_1702_, uint32_t v_n_1703_, lean_object* v_a_1704_){
_start:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = lean_uint32_to_nat(v_n_1703_);
v___x_1706_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg(v___x_1705_, v_size_1702_, v_a_1704_);
lean_dec(v___x_1705_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionTimes___boxed(lean_object* v_size_1707_, lean_object* v_n_1708_, lean_object* v_a_1709_){
_start:
{
uint32_t v_n_boxed_1710_; lean_object* v_res_1711_; 
v_n_boxed_1710_ = lean_unbox_uint32(v_n_1708_);
lean_dec(v_n_1708_);
v_res_1711_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionTimes(v_size_1707_, v_n_boxed_1710_, v_a_1709_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionIndices(uint32_t v_n_1712_, lean_object* v_a_1713_){
_start:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1714_ = lean_uint32_to_nat(v_n_1712_);
v___x_1715_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu8), 1, 0);
v___x_1716_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg(v___x_1714_, v___x_1715_, v_a_1713_);
lean_dec(v___x_1714_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionIndices___boxed(lean_object* v_n_1717_, lean_object* v_a_1718_){
_start:
{
uint32_t v_n_boxed_1719_; lean_object* v_res_1720_; 
v_n_boxed_1719_ = lean_unbox_uint32(v_n_1717_);
lean_dec(v_n_1717_);
v_res_1720_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionIndices(v_n_boxed_1719_, v_a_1718_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLocalTimeTypes(uint32_t v_n_1721_, lean_object* v_a_1722_){
_start:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1723_ = lean_uint32_to_nat(v_n_1721_);
v___x_1724_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLocalTimeType), 1, 0);
v___x_1725_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg(v___x_1723_, v___x_1724_, v_a_1722_);
lean_dec(v___x_1723_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLocalTimeTypes___boxed(lean_object* v_n_1726_, lean_object* v_a_1727_){
_start:
{
uint32_t v_n_boxed_1728_; lean_object* v_res_1729_; 
v_n_boxed_1728_ = lean_unbox_uint32(v_n_1726_);
lean_dec(v_n_1726_);
v_res_1729_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLocalTimeTypes(v_n_boxed_1728_, v_a_1727_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg(lean_object* v_upperBound_1731_, lean_object* v_res_1732_, lean_object* v_a_1733_, lean_object* v_b_1734_, lean_object* v___y_1735_){
_start:
{
uint8_t v___x_1736_; 
v___x_1736_ = lean_nat_dec_lt(v_a_1733_, v_upperBound_1731_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; 
lean_dec(v_a_1733_);
v___x_1737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1737_, 0, v___y_1735_);
lean_ctor_set(v___x_1737_, 1, v_b_1734_);
return v___x_1737_;
}
else
{
lean_object* v_fst_1738_; lean_object* v_snd_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1763_; 
v_fst_1738_ = lean_ctor_get(v_b_1734_, 0);
v_snd_1739_ = lean_ctor_get(v_b_1734_, 1);
v_isSharedCheck_1763_ = !lean_is_exclusive(v_b_1734_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1741_ = v_b_1734_;
v_isShared_1742_ = v_isSharedCheck_1763_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_snd_1739_);
lean_inc(v_fst_1738_);
lean_dec(v_b_1734_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1763_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
uint8_t v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; uint8_t v___x_1746_; uint8_t v___x_1747_; 
v___x_1743_ = 0;
v___x_1744_ = lean_box(v___x_1743_);
v___x_1745_ = lean_array_get(v___x_1744_, v_res_1732_, v_a_1733_);
lean_dec(v___x_1744_);
v___x_1746_ = lean_unbox(v___x_1745_);
v___x_1747_ = lean_uint8_dec_eq(v___x_1746_, v___x_1743_);
if (v___x_1747_ == 0)
{
uint8_t v___x_1748_; uint32_t v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1748_ = lean_unbox(v___x_1745_);
lean_dec(v___x_1745_);
v___x_1749_ = lean_uint8_to_uint32(v___x_1748_);
v___x_1750_ = lean_string_push(v_snd_1739_, v___x_1749_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 1, v___x_1750_);
v___x_1752_ = v___x_1741_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_fst_1738_);
lean_ctor_set(v_reuseFailAlloc_1756_, 1, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1753_ = lean_unsigned_to_nat(1u);
v___x_1754_ = lean_nat_add(v_a_1733_, v___x_1753_);
lean_dec(v_a_1733_);
v_a_1733_ = v___x_1754_;
v_b_1734_ = v___x_1752_;
goto _start;
}
}
else
{
lean_object* v_current_1757_; lean_object* v___x_1758_; lean_object* v___x_1760_; 
lean_dec(v___x_1745_);
lean_dec(v_a_1733_);
v_current_1757_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg___closed__0));
v___x_1758_ = lean_array_push(v_fst_1738_, v_snd_1739_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 1, v_current_1757_);
lean_ctor_set(v___x_1741_, 0, v___x_1758_);
v___x_1760_ = v___x_1741_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___x_1758_);
lean_ctor_set(v_reuseFailAlloc_1762_, 1, v_current_1757_);
v___x_1760_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1761_, 0, v___y_1735_);
lean_ctor_set(v___x_1761_, 1, v___x_1760_);
return v___x_1761_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg___boxed(lean_object* v_upperBound_1764_, lean_object* v_res_1765_, lean_object* v_a_1766_, lean_object* v_b_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg(v_upperBound_1764_, v_res_1765_, v_a_1766_, v_b_1767_, v___y_1768_);
lean_dec_ref(v_res_1765_);
lean_dec(v_upperBound_1764_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__1(lean_object* v___x_1770_, lean_object* v_res_1771_, lean_object* v_as_1772_, size_t v_sz_1773_, size_t v_i_1774_, lean_object* v_b_1775_, lean_object* v___y_1776_){
_start:
{
uint8_t v___x_1777_; 
v___x_1777_ = lean_usize_dec_lt(v_i_1774_, v_sz_1773_);
if (v___x_1777_ == 0)
{
lean_object* v___x_1778_; 
v___x_1778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1778_, 0, v___y_1776_);
lean_ctor_set(v___x_1778_, 1, v_b_1775_);
return v___x_1778_;
}
else
{
lean_object* v_a_1779_; uint8_t v_abbreviationIndex_1780_; lean_object* v_fst_1781_; lean_object* v_snd_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1805_; 
v_a_1779_ = lean_array_uget_borrowed(v_as_1772_, v_i_1774_);
v_abbreviationIndex_1780_ = lean_ctor_get_uint8(v_a_1779_, sizeof(void*)*1 + 1);
v_fst_1781_ = lean_ctor_get(v_b_1775_, 0);
v_snd_1782_ = lean_ctor_get(v_b_1775_, 1);
v_isSharedCheck_1805_ = !lean_is_exclusive(v_b_1775_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1784_ = v_b_1775_;
v_isShared_1785_ = v_isSharedCheck_1805_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_snd_1782_);
lean_inc(v_fst_1781_);
lean_dec(v_b_1775_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1805_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1786_; lean_object* v___x_1788_; 
v___x_1786_ = lean_uint8_to_nat(v_abbreviationIndex_1780_);
if (v_isShared_1785_ == 0)
{
v___x_1788_ = v___x_1784_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_fst_1781_);
lean_ctor_set(v_reuseFailAlloc_1804_, 1, v_snd_1782_);
v___x_1788_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
lean_object* v___x_1789_; 
v___x_1789_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg(v___x_1770_, v_res_1771_, v___x_1786_, v___x_1788_, v___y_1776_);
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_object* v_res_1790_; lean_object* v_pos_1791_; lean_object* v_fst_1792_; lean_object* v_snd_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1803_; 
v_res_1790_ = lean_ctor_get(v___x_1789_, 1);
lean_inc(v_res_1790_);
v_pos_1791_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_pos_1791_);
lean_dec_ref_known(v___x_1789_, 2);
v_fst_1792_ = lean_ctor_get(v_res_1790_, 0);
v_snd_1793_ = lean_ctor_get(v_res_1790_, 1);
v_isSharedCheck_1803_ = !lean_is_exclusive(v_res_1790_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1795_ = v_res_1790_;
v_isShared_1796_ = v_isSharedCheck_1803_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_snd_1793_);
lean_inc(v_fst_1792_);
lean_dec(v_res_1790_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1803_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_fst_1792_);
lean_ctor_set(v_reuseFailAlloc_1802_, 1, v_snd_1793_);
v___x_1798_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
size_t v___x_1799_; size_t v___x_1800_; 
v___x_1799_ = ((size_t)1ULL);
v___x_1800_ = lean_usize_add(v_i_1774_, v___x_1799_);
v_i_1774_ = v___x_1800_;
v_b_1775_ = v___x_1798_;
v___y_1776_ = v_pos_1791_;
goto _start;
}
}
}
else
{
return v___x_1789_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__1___boxed(lean_object* v___x_1806_, lean_object* v_res_1807_, lean_object* v_as_1808_, lean_object* v_sz_1809_, lean_object* v_i_1810_, lean_object* v_b_1811_, lean_object* v___y_1812_){
_start:
{
size_t v_sz_boxed_1813_; size_t v_i_boxed_1814_; lean_object* v_res_1815_; 
v_sz_boxed_1813_ = lean_unbox_usize(v_sz_1809_);
lean_dec(v_sz_1809_);
v_i_boxed_1814_ = lean_unbox_usize(v_i_1810_);
lean_dec(v_i_1810_);
v_res_1815_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__1(v___x_1806_, v_res_1807_, v_as_1808_, v_sz_boxed_1813_, v_i_boxed_1814_, v_b_1811_, v___y_1812_);
lean_dec_ref(v_as_1808_);
lean_dec_ref(v_res_1807_);
lean_dec(v___x_1806_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations(lean_object* v_times_1821_, uint32_t v_n_1822_, lean_object* v_a_1823_){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1824_ = lean_uint32_to_nat(v_n_1822_);
v___x_1825_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu8), 1, 0);
v___x_1826_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg(v___x_1824_, v___x_1825_, v_a_1823_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_pos_1827_; lean_object* v_res_1828_; lean_object* v___x_1829_; size_t v_sz_1830_; size_t v___x_1831_; lean_object* v___x_1832_; 
v_pos_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_pos_1827_);
v_res_1828_ = lean_ctor_get(v___x_1826_, 1);
lean_inc(v_res_1828_);
lean_dec_ref_known(v___x_1826_, 2);
v___x_1829_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations___closed__1));
v_sz_1830_ = lean_array_size(v_times_1821_);
v___x_1831_ = ((size_t)0ULL);
v___x_1832_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__1(v___x_1824_, v_res_1828_, v_times_1821_, v_sz_1830_, v___x_1831_, v___x_1829_, v_pos_1827_);
lean_dec(v_res_1828_);
lean_dec(v___x_1824_);
if (lean_obj_tag(v___x_1832_) == 0)
{
lean_object* v_res_1833_; lean_object* v_pos_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1842_; 
v_res_1833_ = lean_ctor_get(v___x_1832_, 1);
v_pos_1834_ = lean_ctor_get(v___x_1832_, 0);
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1836_ = v___x_1832_;
v_isShared_1837_ = v_isSharedCheck_1842_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_res_1833_);
lean_inc(v_pos_1834_);
lean_dec(v___x_1832_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1842_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v_fst_1838_; lean_object* v___x_1840_; 
v_fst_1838_ = lean_ctor_get(v_res_1833_, 0);
lean_inc(v_fst_1838_);
lean_dec(v_res_1833_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v_fst_1838_);
v___x_1840_ = v___x_1836_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v_pos_1834_);
lean_ctor_set(v_reuseFailAlloc_1841_, 1, v_fst_1838_);
v___x_1840_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
return v___x_1840_;
}
}
}
else
{
lean_object* v_pos_1843_; lean_object* v_err_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
v_pos_1843_ = lean_ctor_get(v___x_1832_, 0);
v_err_1844_ = lean_ctor_get(v___x_1832_, 1);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v___x_1832_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_err_1844_);
lean_inc(v_pos_1843_);
lean_dec(v___x_1832_);
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
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_pos_1843_);
lean_ctor_set(v_reuseFailAlloc_1850_, 1, v_err_1844_);
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
else
{
lean_object* v_pos_1852_; lean_object* v_err_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1860_; 
lean_dec(v___x_1824_);
v_pos_1852_ = lean_ctor_get(v___x_1826_, 0);
v_err_1853_ = lean_ctor_get(v___x_1826_, 1);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1855_ = v___x_1826_;
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_err_1853_);
lean_inc(v_pos_1852_);
lean_dec(v___x_1826_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1856_ == 0)
{
v___x_1858_ = v___x_1855_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_pos_1852_);
lean_ctor_set(v_reuseFailAlloc_1859_, 1, v_err_1853_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations___boxed(lean_object* v_times_1861_, lean_object* v_n_1862_, lean_object* v_a_1863_){
_start:
{
uint32_t v_n_boxed_1864_; lean_object* v_res_1865_; 
v_n_boxed_1864_ = lean_unbox_uint32(v_n_1862_);
lean_dec(v_n_1862_);
v_res_1865_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations(v_times_1861_, v_n_boxed_1864_, v_a_1863_);
lean_dec_ref(v_times_1861_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0(lean_object* v_upperBound_1866_, lean_object* v_res_1867_, lean_object* v_inst_1868_, lean_object* v_R_1869_, lean_object* v_a_1870_, lean_object* v_b_1871_, lean_object* v_c_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v___x_1874_; 
v___x_1874_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg(v_upperBound_1866_, v_res_1867_, v_a_1870_, v_b_1871_, v___y_1873_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___boxed(lean_object* v_upperBound_1875_, lean_object* v_res_1876_, lean_object* v_inst_1877_, lean_object* v_R_1878_, lean_object* v_a_1879_, lean_object* v_b_1880_, lean_object* v_c_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0(v_upperBound_1875_, v_res_1876_, v_inst_1877_, v_R_1878_, v_a_1879_, v_b_1880_, v_c_1881_, v___y_1882_);
lean_dec_ref(v_res_1876_);
lean_dec(v_upperBound_1875_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLeapSeconds(lean_object* v_size_1884_, uint32_t v_n_1885_, lean_object* v_a_1886_){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1887_ = lean_uint32_to_nat(v_n_1885_);
v___x_1888_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLeapSecond), 2, 1);
lean_closure_set(v___x_1888_, 0, v_size_1884_);
v___x_1889_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg(v___x_1887_, v___x_1888_, v_a_1886_);
lean_dec(v___x_1887_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLeapSeconds___boxed(lean_object* v_size_1890_, lean_object* v_n_1891_, lean_object* v_a_1892_){
_start:
{
uint32_t v_n_boxed_1893_; lean_object* v_res_1894_; 
v_n_boxed_1893_ = lean_unbox_uint32(v_n_1891_);
lean_dec(v_n_1891_);
v_res_1894_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLeapSeconds(v_size_1890_, v_n_boxed_1893_, v_a_1892_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseIndicators(uint32_t v_n_1895_, lean_object* v_a_1896_){
_start:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1897_ = lean_uint32_to_nat(v_n_1895_);
v___x_1898_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pbool), 1, 0);
v___x_1899_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_manyN___redArg(v___x_1897_, v___x_1898_, v_a_1896_);
lean_dec(v___x_1897_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseIndicators___boxed(lean_object* v_n_1900_, lean_object* v_a_1901_){
_start:
{
uint32_t v_n_boxed_1902_; lean_object* v_res_1903_; 
v_n_boxed_1902_ = lean_unbox_uint32(v_n_1900_);
lean_dec(v_n_1900_);
v_res_1903_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseIndicators(v_n_boxed_1902_, v_a_1901_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTZifV1(lean_object* v_a_1904_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseHeader(v_a_1904_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_res_1906_; lean_object* v_pos_1907_; uint32_t v_isutcnt_1908_; uint32_t v_isstdcnt_1909_; uint32_t v_leapcnt_1910_; uint32_t v_timecnt_1911_; uint32_t v_typecnt_1912_; uint32_t v_charcnt_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v_res_1906_ = lean_ctor_get(v___x_1905_, 1);
lean_inc(v_res_1906_);
v_pos_1907_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_pos_1907_);
lean_dec_ref_known(v___x_1905_, 2);
v_isutcnt_1908_ = lean_ctor_get_uint32(v_res_1906_, 0);
v_isstdcnt_1909_ = lean_ctor_get_uint32(v_res_1906_, 4);
v_leapcnt_1910_ = lean_ctor_get_uint32(v_res_1906_, 8);
v_timecnt_1911_ = lean_ctor_get_uint32(v_res_1906_, 12);
v_typecnt_1912_ = lean_ctor_get_uint32(v_res_1906_, 16);
v_charcnt_1913_ = lean_ctor_get_uint32(v_res_1906_, 20);
v___x_1914_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pi32), 1, 0);
lean_inc_ref(v___x_1914_);
v___x_1915_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionTimes(v___x_1914_, v_timecnt_1911_, v_pos_1907_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_pos_1916_; lean_object* v_res_1917_; lean_object* v___x_1918_; 
v_pos_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_pos_1916_);
v_res_1917_ = lean_ctor_get(v___x_1915_, 1);
lean_inc(v_res_1917_);
lean_dec_ref_known(v___x_1915_, 2);
v___x_1918_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionIndices(v_timecnt_1911_, v_pos_1916_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_object* v_pos_1919_; lean_object* v_res_1920_; lean_object* v___x_1921_; 
v_pos_1919_ = lean_ctor_get(v___x_1918_, 0);
lean_inc(v_pos_1919_);
v_res_1920_ = lean_ctor_get(v___x_1918_, 1);
lean_inc(v_res_1920_);
lean_dec_ref_known(v___x_1918_, 2);
v___x_1921_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLocalTimeTypes(v_typecnt_1912_, v_pos_1919_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_pos_1922_; lean_object* v_res_1923_; lean_object* v___x_1924_; 
v_pos_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_pos_1922_);
v_res_1923_ = lean_ctor_get(v___x_1921_, 1);
lean_inc(v_res_1923_);
lean_dec_ref_known(v___x_1921_, 2);
v___x_1924_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations(v_res_1923_, v_charcnt_1913_, v_pos_1922_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_pos_1925_; lean_object* v_res_1926_; lean_object* v___x_1927_; 
v_pos_1925_ = lean_ctor_get(v___x_1924_, 0);
lean_inc(v_pos_1925_);
v_res_1926_ = lean_ctor_get(v___x_1924_, 1);
lean_inc(v_res_1926_);
lean_dec_ref_known(v___x_1924_, 2);
v___x_1927_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLeapSeconds(v___x_1914_, v_leapcnt_1910_, v_pos_1925_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_pos_1928_; lean_object* v_res_1929_; lean_object* v___x_1930_; 
v_pos_1928_ = lean_ctor_get(v___x_1927_, 0);
lean_inc(v_pos_1928_);
v_res_1929_ = lean_ctor_get(v___x_1927_, 1);
lean_inc(v_res_1929_);
lean_dec_ref_known(v___x_1927_, 2);
v___x_1930_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseIndicators(v_isstdcnt_1909_, v_pos_1928_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_pos_1931_; lean_object* v_res_1932_; lean_object* v___x_1933_; 
v_pos_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_pos_1931_);
v_res_1932_ = lean_ctor_get(v___x_1930_, 1);
lean_inc(v_res_1932_);
lean_dec_ref_known(v___x_1930_, 2);
v___x_1933_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseIndicators(v_isutcnt_1908_, v_pos_1931_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_pos_1934_; lean_object* v_res_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1943_; 
v_pos_1934_ = lean_ctor_get(v___x_1933_, 0);
v_res_1935_ = lean_ctor_get(v___x_1933_, 1);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1937_ = v___x_1933_;
v_isShared_1938_ = v_isSharedCheck_1943_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_res_1935_);
lean_inc(v_pos_1934_);
lean_dec(v___x_1933_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1943_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1939_; lean_object* v___x_1941_; 
v___x_1939_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1939_, 0, v_res_1906_);
lean_ctor_set(v___x_1939_, 1, v_res_1917_);
lean_ctor_set(v___x_1939_, 2, v_res_1920_);
lean_ctor_set(v___x_1939_, 3, v_res_1923_);
lean_ctor_set(v___x_1939_, 4, v_res_1926_);
lean_ctor_set(v___x_1939_, 5, v_res_1929_);
lean_ctor_set(v___x_1939_, 6, v_res_1932_);
lean_ctor_set(v___x_1939_, 7, v_res_1935_);
if (v_isShared_1938_ == 0)
{
lean_ctor_set(v___x_1937_, 1, v___x_1939_);
v___x_1941_ = v___x_1937_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_pos_1934_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v___x_1939_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
else
{
lean_object* v_pos_1944_; lean_object* v_err_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
lean_dec(v_res_1932_);
lean_dec(v_res_1929_);
lean_dec(v_res_1926_);
lean_dec(v_res_1923_);
lean_dec(v_res_1920_);
lean_dec(v_res_1917_);
lean_dec(v_res_1906_);
v_pos_1944_ = lean_ctor_get(v___x_1933_, 0);
v_err_1945_ = lean_ctor_get(v___x_1933_, 1);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___x_1933_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_err_1945_);
lean_inc(v_pos_1944_);
lean_dec(v___x_1933_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_pos_1944_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v_err_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
else
{
lean_object* v_pos_1953_; lean_object* v_err_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec(v_res_1929_);
lean_dec(v_res_1926_);
lean_dec(v_res_1923_);
lean_dec(v_res_1920_);
lean_dec(v_res_1917_);
lean_dec(v_res_1906_);
v_pos_1953_ = lean_ctor_get(v___x_1930_, 0);
v_err_1954_ = lean_ctor_get(v___x_1930_, 1);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1930_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_err_1954_);
lean_inc(v_pos_1953_);
lean_dec(v___x_1930_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_pos_1953_);
lean_ctor_set(v_reuseFailAlloc_1960_, 1, v_err_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
else
{
lean_object* v_pos_1962_; lean_object* v_err_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1970_; 
lean_dec(v_res_1926_);
lean_dec(v_res_1923_);
lean_dec(v_res_1920_);
lean_dec(v_res_1917_);
lean_dec(v_res_1906_);
v_pos_1962_ = lean_ctor_get(v___x_1927_, 0);
v_err_1963_ = lean_ctor_get(v___x_1927_, 1);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1965_ = v___x_1927_;
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_err_1963_);
lean_inc(v_pos_1962_);
lean_dec(v___x_1927_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1966_ == 0)
{
v___x_1968_ = v___x_1965_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_pos_1962_);
lean_ctor_set(v_reuseFailAlloc_1969_, 1, v_err_1963_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
}
else
{
lean_object* v_pos_1971_; lean_object* v_err_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
lean_dec(v_res_1923_);
lean_dec(v_res_1920_);
lean_dec(v_res_1917_);
lean_dec_ref(v___x_1914_);
lean_dec(v_res_1906_);
v_pos_1971_ = lean_ctor_get(v___x_1924_, 0);
v_err_1972_ = lean_ctor_get(v___x_1924_, 1);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1974_ = v___x_1924_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_err_1972_);
lean_inc(v_pos_1971_);
lean_dec(v___x_1924_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_pos_1971_);
lean_ctor_set(v_reuseFailAlloc_1978_, 1, v_err_1972_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
}
else
{
lean_object* v_pos_1980_; lean_object* v_err_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1988_; 
lean_dec(v_res_1920_);
lean_dec(v_res_1917_);
lean_dec_ref(v___x_1914_);
lean_dec(v_res_1906_);
v_pos_1980_ = lean_ctor_get(v___x_1921_, 0);
v_err_1981_ = lean_ctor_get(v___x_1921_, 1);
v_isSharedCheck_1988_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1983_ = v___x_1921_;
v_isShared_1984_ = v_isSharedCheck_1988_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_err_1981_);
lean_inc(v_pos_1980_);
lean_dec(v___x_1921_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1988_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1986_; 
if (v_isShared_1984_ == 0)
{
v___x_1986_ = v___x_1983_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v_pos_1980_);
lean_ctor_set(v_reuseFailAlloc_1987_, 1, v_err_1981_);
v___x_1986_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
return v___x_1986_;
}
}
}
}
else
{
lean_object* v_pos_1989_; lean_object* v_err_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
lean_dec(v_res_1917_);
lean_dec_ref(v___x_1914_);
lean_dec(v_res_1906_);
v_pos_1989_ = lean_ctor_get(v___x_1918_, 0);
v_err_1990_ = lean_ctor_get(v___x_1918_, 1);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1918_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_err_1990_);
lean_inc(v_pos_1989_);
lean_dec(v___x_1918_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_pos_1989_);
lean_ctor_set(v_reuseFailAlloc_1996_, 1, v_err_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
else
{
lean_object* v_pos_1998_; lean_object* v_err_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
lean_dec_ref(v___x_1914_);
lean_dec(v_res_1906_);
v_pos_1998_ = lean_ctor_get(v___x_1915_, 0);
v_err_1999_ = lean_ctor_get(v___x_1915_, 1);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1915_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_err_1999_);
lean_inc(v_pos_1998_);
lean_dec(v___x_1915_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_pos_1998_);
lean_ctor_set(v_reuseFailAlloc_2005_, 1, v_err_1999_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
}
else
{
lean_object* v_pos_2007_; lean_object* v_err_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
v_pos_2007_ = lean_ctor_get(v___x_1905_, 0);
v_err_2008_ = lean_ctor_get(v___x_1905_, 1);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_1905_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_err_2008_);
lean_inc(v_pos_2007_);
lean_dec(v___x_1905_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_pos_2007_);
lean_ctor_set(v_reuseFailAlloc_2014_, 1, v_err_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__1(lean_object* v_as_2016_, size_t v_sz_2017_, size_t v_i_2018_, lean_object* v_b_2019_, lean_object* v___y_2020_){
_start:
{
uint8_t v___x_2021_; 
v___x_2021_ = lean_usize_dec_lt(v_i_2018_, v_sz_2017_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; 
v___x_2022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2022_, 0, v___y_2020_);
lean_ctor_set(v___x_2022_, 1, v_b_2019_);
return v___x_2022_;
}
else
{
lean_object* v_a_2023_; uint8_t v___x_2024_; uint32_t v___x_2025_; lean_object* v___x_2026_; size_t v___x_2027_; size_t v___x_2028_; 
v_a_2023_ = lean_array_uget_borrowed(v_as_2016_, v_i_2018_);
v___x_2024_ = lean_unbox(v_a_2023_);
v___x_2025_ = lean_uint8_to_uint32(v___x_2024_);
v___x_2026_ = lean_string_push(v_b_2019_, v___x_2025_);
v___x_2027_ = ((size_t)1ULL);
v___x_2028_ = lean_usize_add(v_i_2018_, v___x_2027_);
v_i_2018_ = v___x_2028_;
v_b_2019_ = v___x_2026_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__1___boxed(lean_object* v_as_2030_, lean_object* v_sz_2031_, lean_object* v_i_2032_, lean_object* v_b_2033_, lean_object* v___y_2034_){
_start:
{
size_t v_sz_boxed_2035_; size_t v_i_boxed_2036_; lean_object* v_res_2037_; 
v_sz_boxed_2035_ = lean_unbox_usize(v_sz_2031_);
lean_dec(v_sz_2031_);
v_i_boxed_2036_ = lean_unbox_usize(v_i_2032_);
lean_dec(v_i_2032_);
v_res_2037_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__1(v_as_2030_, v_sz_boxed_2035_, v_i_boxed_2036_, v_b_2033_, v___y_2034_);
lean_dec_ref(v_as_2030_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__0(lean_object* v_acc_2041_, lean_object* v_a_2042_){
_start:
{
lean_object* v_array_2043_; lean_object* v_idx_2044_; lean_object* v_pos_2046_; lean_object* v_idx_2047_; lean_object* v_err_2048_; lean_object* v___x_2054_; uint8_t v___x_2055_; 
v_array_2043_ = lean_ctor_get(v_a_2042_, 0);
v_idx_2044_ = lean_ctor_get(v_a_2042_, 1);
lean_inc(v_idx_2044_);
v___x_2054_ = lean_byte_array_size(v_array_2043_);
v___x_2055_ = lean_nat_dec_lt(v_idx_2044_, v___x_2054_);
if (v___x_2055_ == 0)
{
lean_object* v___x_2056_; 
v___x_2056_ = lean_box(0);
lean_inc(v_idx_2044_);
v_pos_2046_ = v_a_2042_;
v_idx_2047_ = v_idx_2044_;
v_err_2048_ = v___x_2056_;
goto v___jp_2045_;
}
else
{
uint8_t v___x_2057_; uint8_t v_c_2058_; uint8_t v___x_2059_; 
v___x_2057_ = 10;
v_c_2058_ = lean_byte_array_fget(v_array_2043_, v_idx_2044_);
v___x_2059_ = lean_uint8_dec_eq(v_c_2058_, v___x_2057_);
if (v___x_2059_ == 0)
{
if (v___x_2055_ == 0)
{
goto v___jp_2052_;
}
else
{
lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2071_; 
lean_inc_ref(v_array_2043_);
v_isSharedCheck_2071_ = !lean_is_exclusive(v_a_2042_);
if (v_isSharedCheck_2071_ == 0)
{
lean_object* v_unused_2072_; lean_object* v_unused_2073_; 
v_unused_2072_ = lean_ctor_get(v_a_2042_, 1);
lean_dec(v_unused_2072_);
v_unused_2073_ = lean_ctor_get(v_a_2042_, 0);
lean_dec(v_unused_2073_);
v___x_2061_ = v_a_2042_;
v_isShared_2062_ = v_isSharedCheck_2071_;
goto v_resetjp_2060_;
}
else
{
lean_dec(v_a_2042_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2071_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v_it_x27_2066_; 
v___x_2063_ = lean_unsigned_to_nat(1u);
v___x_2064_ = lean_nat_add(v_idx_2044_, v___x_2063_);
lean_dec(v_idx_2044_);
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 1, v___x_2064_);
v_it_x27_2066_ = v___x_2061_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_array_2043_);
lean_ctor_set(v_reuseFailAlloc_2070_, 1, v___x_2064_);
v_it_x27_2066_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___x_2067_ = lean_box(v_c_2058_);
v___x_2068_ = lean_array_push(v_acc_2041_, v___x_2067_);
v_acc_2041_ = v___x_2068_;
v_a_2042_ = v_it_x27_2066_;
goto _start;
}
}
}
}
else
{
goto v___jp_2052_;
}
}
v___jp_2045_:
{
uint8_t v___x_2049_; 
v___x_2049_ = lean_nat_dec_eq(v_idx_2044_, v_idx_2047_);
lean_dec(v_idx_2047_);
lean_dec(v_idx_2044_);
if (v___x_2049_ == 0)
{
lean_object* v___x_2050_; 
lean_dec_ref(v_acc_2041_);
lean_inc(v_err_2048_);
v___x_2050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2050_, 0, v_pos_2046_);
lean_ctor_set(v___x_2050_, 1, v_err_2048_);
return v___x_2050_;
}
else
{
lean_object* v___x_2051_; 
v___x_2051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2051_, 0, v_pos_2046_);
lean_ctor_set(v___x_2051_, 1, v_acc_2041_);
return v___x_2051_;
}
}
v___jp_2052_:
{
lean_object* v___x_2053_; 
v___x_2053_ = ((lean_object*)(l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__0___closed__1));
lean_inc(v_idx_2044_);
v_pos_2046_ = v_a_2042_;
v_idx_2047_ = v_idx_2044_;
v_err_2048_ = v___x_2053_;
goto v___jp_2045_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter(lean_object* v_a_2076_){
_start:
{
lean_object* v___x_2077_; 
v___x_2077_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pu8(v_a_2076_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_pos_2078_; lean_object* v_res_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2126_; 
v_pos_2078_ = lean_ctor_get(v___x_2077_, 0);
v_res_2079_ = lean_ctor_get(v___x_2077_, 1);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2081_ = v___x_2077_;
v_isShared_2082_ = v_isSharedCheck_2126_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_res_2079_);
lean_inc(v_pos_2078_);
lean_dec(v___x_2077_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2126_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
uint8_t v___x_2083_; uint8_t v___x_2084_; uint8_t v___x_2085_; 
v___x_2083_ = 10;
v___x_2084_ = lean_unbox(v_res_2079_);
lean_dec(v_res_2079_);
v___x_2085_ = lean_uint8_dec_eq(v___x_2084_, v___x_2083_);
if (v___x_2085_ == 0)
{
lean_object* v___x_2086_; lean_object* v___x_2088_; 
v___x_2086_ = lean_box(0);
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 1, v___x_2086_);
v___x_2088_ = v___x_2081_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_pos_2078_);
lean_ctor_set(v_reuseFailAlloc_2089_, 1, v___x_2086_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
else
{
lean_object* v___x_2090_; lean_object* v___x_2091_; 
lean_del_object(v___x_2081_);
v___x_2090_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter___closed__0));
v___x_2091_ = l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__0(v___x_2090_, v_pos_2078_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_pos_2092_; lean_object* v_res_2093_; lean_object* v___x_2094_; size_t v_sz_2095_; size_t v___x_2096_; lean_object* v___x_2097_; 
v_pos_2092_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_pos_2092_);
v_res_2093_ = lean_ctor_get(v___x_2091_, 1);
lean_inc(v_res_2093_);
lean_dec_ref_known(v___x_2091_, 2);
v___x_2094_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations_spec__0___redArg___closed__0));
v_sz_2095_ = lean_array_size(v_res_2093_);
v___x_2096_ = ((size_t)0ULL);
v___x_2097_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter_spec__1(v_res_2093_, v_sz_2095_, v___x_2096_, v___x_2094_, v_pos_2092_);
lean_dec(v_res_2093_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v_pos_2098_; lean_object* v_res_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2107_; 
v_pos_2098_ = lean_ctor_get(v___x_2097_, 0);
v_res_2099_ = lean_ctor_get(v___x_2097_, 1);
v_isSharedCheck_2107_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2101_ = v___x_2097_;
v_isShared_2102_ = v_isSharedCheck_2107_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_res_2099_);
lean_inc(v_pos_2098_);
lean_dec(v___x_2097_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2107_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v___x_2103_; lean_object* v___x_2105_; 
v___x_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2103_, 0, v_res_2099_);
if (v_isShared_2102_ == 0)
{
lean_ctor_set(v___x_2101_, 1, v___x_2103_);
v___x_2105_ = v___x_2101_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v_pos_2098_);
lean_ctor_set(v_reuseFailAlloc_2106_, 1, v___x_2103_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
}
else
{
lean_object* v_pos_2108_; lean_object* v_err_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
v_pos_2108_ = lean_ctor_get(v___x_2097_, 0);
v_err_2109_ = lean_ctor_get(v___x_2097_, 1);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2097_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_err_2109_);
lean_inc(v_pos_2108_);
lean_dec(v___x_2097_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_pos_2108_);
lean_ctor_set(v_reuseFailAlloc_2115_, 1, v_err_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
else
{
lean_object* v_pos_2117_; lean_object* v_err_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2125_; 
v_pos_2117_ = lean_ctor_get(v___x_2091_, 0);
v_err_2118_ = lean_ctor_get(v___x_2091_, 1);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2120_ = v___x_2091_;
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_err_2118_);
lean_inc(v_pos_2117_);
lean_dec(v___x_2091_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2123_; 
if (v_isShared_2121_ == 0)
{
v___x_2123_ = v___x_2120_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_pos_2117_);
lean_ctor_set(v_reuseFailAlloc_2124_, 1, v_err_2118_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
}
}
else
{
lean_object* v_pos_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2135_; 
v_pos_2127_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2135_ == 0)
{
lean_object* v_unused_2136_; 
v_unused_2136_ = lean_ctor_get(v___x_2077_, 1);
lean_dec(v_unused_2136_);
v___x_2129_ = v___x_2077_;
v_isShared_2130_ = v_isSharedCheck_2135_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_pos_2127_);
lean_dec(v___x_2077_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2135_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2131_; lean_object* v___x_2133_; 
v___x_2131_ = lean_box(0);
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 1, v___x_2131_);
v___x_2133_ = v___x_2129_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_pos_2127_);
lean_ctor_set(v_reuseFailAlloc_2134_, 1, v___x_2131_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTZifV2(lean_object* v_a_2137_){
_start:
{
lean_object* v_pos_2139_; lean_object* v_err_2140_; lean_object* v___x_2156_; 
lean_inc_ref(v_a_2137_);
v___x_2156_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseHeader(v_a_2137_);
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_res_2157_; lean_object* v_pos_2158_; uint32_t v_isutcnt_2159_; uint32_t v_isstdcnt_2160_; uint32_t v_leapcnt_2161_; uint32_t v_timecnt_2162_; uint32_t v_typecnt_2163_; uint32_t v_charcnt_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v_res_2157_ = lean_ctor_get(v___x_2156_, 1);
lean_inc(v_res_2157_);
v_pos_2158_ = lean_ctor_get(v___x_2156_, 0);
lean_inc(v_pos_2158_);
lean_dec_ref_known(v___x_2156_, 2);
v_isutcnt_2159_ = lean_ctor_get_uint32(v_res_2157_, 0);
v_isstdcnt_2160_ = lean_ctor_get_uint32(v_res_2157_, 4);
v_leapcnt_2161_ = lean_ctor_get_uint32(v_res_2157_, 8);
v_timecnt_2162_ = lean_ctor_get_uint32(v_res_2157_, 12);
v_typecnt_2163_ = lean_ctor_get_uint32(v_res_2157_, 16);
v_charcnt_2164_ = lean_ctor_get_uint32(v_res_2157_, 20);
v___x_2165_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_pi64), 1, 0);
lean_inc_ref(v___x_2165_);
v___x_2166_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionTimes(v___x_2165_, v_timecnt_2162_, v_pos_2158_);
if (lean_obj_tag(v___x_2166_) == 0)
{
lean_object* v_pos_2167_; lean_object* v_res_2168_; lean_object* v___x_2169_; 
v_pos_2167_ = lean_ctor_get(v___x_2166_, 0);
lean_inc(v_pos_2167_);
v_res_2168_ = lean_ctor_get(v___x_2166_, 1);
lean_inc(v_res_2168_);
lean_dec_ref_known(v___x_2166_, 2);
v___x_2169_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTransitionIndices(v_timecnt_2162_, v_pos_2167_);
if (lean_obj_tag(v___x_2169_) == 0)
{
lean_object* v_pos_2170_; lean_object* v_res_2171_; lean_object* v___x_2172_; 
v_pos_2170_ = lean_ctor_get(v___x_2169_, 0);
lean_inc(v_pos_2170_);
v_res_2171_ = lean_ctor_get(v___x_2169_, 1);
lean_inc(v_res_2171_);
lean_dec_ref_known(v___x_2169_, 2);
v___x_2172_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLocalTimeTypes(v_typecnt_2163_, v_pos_2170_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_pos_2173_; lean_object* v_res_2174_; lean_object* v___x_2175_; 
v_pos_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_pos_2173_);
v_res_2174_ = lean_ctor_get(v___x_2172_, 1);
lean_inc(v_res_2174_);
lean_dec_ref_known(v___x_2172_, 2);
v___x_2175_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseAbbreviations(v_res_2174_, v_charcnt_2164_, v_pos_2173_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v_pos_2176_; lean_object* v_res_2177_; lean_object* v___x_2178_; 
v_pos_2176_ = lean_ctor_get(v___x_2175_, 0);
lean_inc(v_pos_2176_);
v_res_2177_ = lean_ctor_get(v___x_2175_, 1);
lean_inc(v_res_2177_);
lean_dec_ref_known(v___x_2175_, 2);
v___x_2178_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseLeapSeconds(v___x_2165_, v_leapcnt_2161_, v_pos_2176_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v_pos_2179_; lean_object* v_res_2180_; lean_object* v___x_2181_; 
v_pos_2179_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_pos_2179_);
v_res_2180_ = lean_ctor_get(v___x_2178_, 1);
lean_inc(v_res_2180_);
lean_dec_ref_known(v___x_2178_, 2);
v___x_2181_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseIndicators(v_isstdcnt_2160_, v_pos_2179_);
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v_pos_2182_; lean_object* v_res_2183_; lean_object* v___x_2184_; 
v_pos_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_pos_2182_);
v_res_2183_ = lean_ctor_get(v___x_2181_, 1);
lean_inc(v_res_2183_);
lean_dec_ref_known(v___x_2181_, 2);
v___x_2184_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseIndicators(v_isutcnt_2159_, v_pos_2182_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_pos_2185_; lean_object* v_res_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2207_; 
v_pos_2185_ = lean_ctor_get(v___x_2184_, 0);
v_res_2186_ = lean_ctor_get(v___x_2184_, 1);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2188_ = v___x_2184_;
v_isShared_2189_ = v_isSharedCheck_2207_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_res_2186_);
lean_inc(v_pos_2185_);
lean_dec(v___x_2184_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2207_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2190_; 
v___x_2190_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseFooter(v_pos_2185_);
if (lean_obj_tag(v___x_2190_) == 0)
{
lean_object* v_pos_2191_; lean_object* v_res_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2204_; 
lean_dec_ref(v_a_2137_);
v_pos_2191_ = lean_ctor_get(v___x_2190_, 0);
v_res_2192_ = lean_ctor_get(v___x_2190_, 1);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2190_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2194_ = v___x_2190_;
v_isShared_2195_ = v_isSharedCheck_2204_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_res_2192_);
lean_inc(v_pos_2191_);
lean_dec(v___x_2190_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2204_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2196_; lean_object* v___x_2198_; 
v___x_2196_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2196_, 0, v_res_2157_);
lean_ctor_set(v___x_2196_, 1, v_res_2168_);
lean_ctor_set(v___x_2196_, 2, v_res_2171_);
lean_ctor_set(v___x_2196_, 3, v_res_2174_);
lean_ctor_set(v___x_2196_, 4, v_res_2177_);
lean_ctor_set(v___x_2196_, 5, v_res_2180_);
lean_ctor_set(v___x_2196_, 6, v_res_2183_);
lean_ctor_set(v___x_2196_, 7, v_res_2186_);
if (v_isShared_2189_ == 0)
{
lean_ctor_set(v___x_2188_, 1, v_res_2192_);
lean_ctor_set(v___x_2188_, 0, v___x_2196_);
v___x_2198_ = v___x_2188_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2196_);
lean_ctor_set(v_reuseFailAlloc_2203_, 1, v_res_2192_);
v___x_2198_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
lean_object* v___x_2199_; lean_object* v___x_2201_; 
v___x_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2198_);
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 1, v___x_2199_);
v___x_2201_ = v___x_2194_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_pos_2191_);
lean_ctor_set(v_reuseFailAlloc_2202_, 1, v___x_2199_);
v___x_2201_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
return v___x_2201_;
}
}
}
}
else
{
lean_object* v_pos_2205_; lean_object* v_err_2206_; 
lean_del_object(v___x_2188_);
lean_dec(v_res_2186_);
lean_dec(v_res_2183_);
lean_dec(v_res_2180_);
lean_dec(v_res_2177_);
lean_dec(v_res_2174_);
lean_dec(v_res_2171_);
lean_dec(v_res_2168_);
lean_dec(v_res_2157_);
v_pos_2205_ = lean_ctor_get(v___x_2190_, 0);
lean_inc(v_pos_2205_);
v_err_2206_ = lean_ctor_get(v___x_2190_, 1);
lean_inc(v_err_2206_);
lean_dec_ref_known(v___x_2190_, 2);
v_pos_2139_ = v_pos_2205_;
v_err_2140_ = v_err_2206_;
goto v___jp_2138_;
}
}
}
else
{
lean_object* v_pos_2208_; lean_object* v_err_2209_; 
lean_dec(v_res_2183_);
lean_dec(v_res_2180_);
lean_dec(v_res_2177_);
lean_dec(v_res_2174_);
lean_dec(v_res_2171_);
lean_dec(v_res_2168_);
lean_dec(v_res_2157_);
v_pos_2208_ = lean_ctor_get(v___x_2184_, 0);
lean_inc(v_pos_2208_);
v_err_2209_ = lean_ctor_get(v___x_2184_, 1);
lean_inc(v_err_2209_);
lean_dec_ref_known(v___x_2184_, 2);
v_pos_2139_ = v_pos_2208_;
v_err_2140_ = v_err_2209_;
goto v___jp_2138_;
}
}
else
{
lean_object* v_pos_2210_; lean_object* v_err_2211_; 
lean_dec(v_res_2180_);
lean_dec(v_res_2177_);
lean_dec(v_res_2174_);
lean_dec(v_res_2171_);
lean_dec(v_res_2168_);
lean_dec(v_res_2157_);
v_pos_2210_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_pos_2210_);
v_err_2211_ = lean_ctor_get(v___x_2181_, 1);
lean_inc(v_err_2211_);
lean_dec_ref_known(v___x_2181_, 2);
v_pos_2139_ = v_pos_2210_;
v_err_2140_ = v_err_2211_;
goto v___jp_2138_;
}
}
else
{
lean_object* v_pos_2212_; lean_object* v_err_2213_; 
lean_dec(v_res_2177_);
lean_dec(v_res_2174_);
lean_dec(v_res_2171_);
lean_dec(v_res_2168_);
lean_dec(v_res_2157_);
v_pos_2212_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_pos_2212_);
v_err_2213_ = lean_ctor_get(v___x_2178_, 1);
lean_inc(v_err_2213_);
lean_dec_ref_known(v___x_2178_, 2);
v_pos_2139_ = v_pos_2212_;
v_err_2140_ = v_err_2213_;
goto v___jp_2138_;
}
}
else
{
lean_object* v_pos_2214_; lean_object* v_err_2215_; 
lean_dec(v_res_2174_);
lean_dec(v_res_2171_);
lean_dec(v_res_2168_);
lean_dec_ref(v___x_2165_);
lean_dec(v_res_2157_);
v_pos_2214_ = lean_ctor_get(v___x_2175_, 0);
lean_inc(v_pos_2214_);
v_err_2215_ = lean_ctor_get(v___x_2175_, 1);
lean_inc(v_err_2215_);
lean_dec_ref_known(v___x_2175_, 2);
v_pos_2139_ = v_pos_2214_;
v_err_2140_ = v_err_2215_;
goto v___jp_2138_;
}
}
else
{
lean_object* v_pos_2216_; lean_object* v_err_2217_; 
lean_dec(v_res_2171_);
lean_dec(v_res_2168_);
lean_dec_ref(v___x_2165_);
lean_dec(v_res_2157_);
v_pos_2216_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_pos_2216_);
v_err_2217_ = lean_ctor_get(v___x_2172_, 1);
lean_inc(v_err_2217_);
lean_dec_ref_known(v___x_2172_, 2);
v_pos_2139_ = v_pos_2216_;
v_err_2140_ = v_err_2217_;
goto v___jp_2138_;
}
}
else
{
lean_object* v_pos_2218_; lean_object* v_err_2219_; 
lean_dec(v_res_2168_);
lean_dec_ref(v___x_2165_);
lean_dec(v_res_2157_);
v_pos_2218_ = lean_ctor_get(v___x_2169_, 0);
lean_inc(v_pos_2218_);
v_err_2219_ = lean_ctor_get(v___x_2169_, 1);
lean_inc(v_err_2219_);
lean_dec_ref_known(v___x_2169_, 2);
v_pos_2139_ = v_pos_2218_;
v_err_2140_ = v_err_2219_;
goto v___jp_2138_;
}
}
else
{
lean_object* v_pos_2220_; lean_object* v_err_2221_; 
lean_dec_ref(v___x_2165_);
lean_dec(v_res_2157_);
v_pos_2220_ = lean_ctor_get(v___x_2166_, 0);
lean_inc(v_pos_2220_);
v_err_2221_ = lean_ctor_get(v___x_2166_, 1);
lean_inc(v_err_2221_);
lean_dec_ref_known(v___x_2166_, 2);
v_pos_2139_ = v_pos_2220_;
v_err_2140_ = v_err_2221_;
goto v___jp_2138_;
}
}
else
{
lean_object* v_pos_2222_; lean_object* v_err_2223_; 
v_pos_2222_ = lean_ctor_get(v___x_2156_, 0);
lean_inc(v_pos_2222_);
v_err_2223_ = lean_ctor_get(v___x_2156_, 1);
lean_inc(v_err_2223_);
lean_dec_ref_known(v___x_2156_, 2);
v_pos_2139_ = v_pos_2222_;
v_err_2140_ = v_err_2223_;
goto v___jp_2138_;
}
v___jp_2138_:
{
lean_object* v_idx_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2154_; 
v_idx_2141_ = lean_ctor_get(v_a_2137_, 1);
v_isSharedCheck_2154_ = !lean_is_exclusive(v_a_2137_);
if (v_isSharedCheck_2154_ == 0)
{
lean_object* v_unused_2155_; 
v_unused_2155_ = lean_ctor_get(v_a_2137_, 0);
lean_dec(v_unused_2155_);
v___x_2143_ = v_a_2137_;
v_isShared_2144_ = v_isSharedCheck_2154_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_idx_2141_);
lean_dec(v_a_2137_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2154_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v_idx_2145_; uint8_t v___x_2146_; 
v_idx_2145_ = lean_ctor_get(v_pos_2139_, 1);
v___x_2146_ = lean_nat_dec_eq(v_idx_2141_, v_idx_2145_);
lean_dec(v_idx_2141_);
if (v___x_2146_ == 0)
{
lean_object* v___x_2148_; 
if (v_isShared_2144_ == 0)
{
lean_ctor_set_tag(v___x_2143_, 1);
lean_ctor_set(v___x_2143_, 1, v_err_2140_);
lean_ctor_set(v___x_2143_, 0, v_pos_2139_);
v___x_2148_ = v___x_2143_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_pos_2139_);
lean_ctor_set(v_reuseFailAlloc_2149_, 1, v_err_2140_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
else
{
lean_object* v___x_2150_; lean_object* v___x_2152_; 
lean_dec(v_err_2140_);
v___x_2150_ = lean_box(0);
if (v_isShared_2144_ == 0)
{
lean_ctor_set(v___x_2143_, 1, v___x_2150_);
lean_ctor_set(v___x_2143_, 0, v_pos_2139_);
v___x_2152_ = v___x_2143_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_pos_2139_);
lean_ctor_set(v_reuseFailAlloc_2153_, 1, v___x_2150_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TZif_parse(lean_object* v_a_2224_){
_start:
{
lean_object* v___x_2225_; 
v___x_2225_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTZifV1(v_a_2224_);
if (lean_obj_tag(v___x_2225_) == 0)
{
lean_object* v_pos_2226_; lean_object* v_res_2227_; lean_object* v___x_2228_; 
v_pos_2226_ = lean_ctor_get(v___x_2225_, 0);
lean_inc(v_pos_2226_);
v_res_2227_ = lean_ctor_get(v___x_2225_, 1);
lean_inc(v_res_2227_);
lean_dec_ref_known(v___x_2225_, 2);
v___x_2228_ = l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_parseTZifV2(v_pos_2226_);
if (lean_obj_tag(v___x_2228_) == 0)
{
lean_object* v_pos_2229_; lean_object* v_res_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2238_; 
v_pos_2229_ = lean_ctor_get(v___x_2228_, 0);
v_res_2230_ = lean_ctor_get(v___x_2228_, 1);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2232_ = v___x_2228_;
v_isShared_2233_ = v_isSharedCheck_2238_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_res_2230_);
lean_inc(v_pos_2229_);
lean_dec(v___x_2228_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2238_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2234_; lean_object* v___x_2236_; 
v___x_2234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2234_, 0, v_res_2227_);
lean_ctor_set(v___x_2234_, 1, v_res_2230_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 1, v___x_2234_);
v___x_2236_ = v___x_2232_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_pos_2229_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v___x_2234_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
else
{
lean_object* v_pos_2239_; lean_object* v_err_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2247_; 
lean_dec(v_res_2227_);
v_pos_2239_ = lean_ctor_get(v___x_2228_, 0);
v_err_2240_ = lean_ctor_get(v___x_2228_, 1);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2242_ = v___x_2228_;
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_err_2240_);
lean_inc(v_pos_2239_);
lean_dec(v___x_2228_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2245_; 
if (v_isShared_2243_ == 0)
{
v___x_2245_ = v___x_2242_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_pos_2239_);
lean_ctor_set(v_reuseFailAlloc_2246_, 1, v_err_2240_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
else
{
lean_object* v_pos_2248_; lean_object* v_err_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2256_; 
v_pos_2248_ = lean_ctor_get(v___x_2225_, 0);
v_err_2249_ = lean_ctor_get(v___x_2225_, 1);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2225_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2251_ = v___x_2225_;
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_err_2249_);
lean_inc(v_pos_2248_);
lean_dec(v___x_2225_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2254_; 
if (v_isShared_2252_ == 0)
{
v___x_2254_ = v___x_2251_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_pos_2248_);
lean_ctor_set(v_reuseFailAlloc_2255_, 1, v_err_2249_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
}
}
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Repr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Zoned_Database_TzIf(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default = _init_l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default();
lean_mark_persistent(l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType_default);
l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType = _init_l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType();
lean_mark_persistent(l_Std_Time_TimeZone_TZif_instInhabitedLocalTimeType);
l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default = _init_l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default();
lean_mark_persistent(l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond_default);
l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond = _init_l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond();
lean_mark_persistent(l_Std_Time_TimeZone_TZif_instInhabitedLeapSecond);
l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0___boxed__const__1 = _init_l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0___boxed__const__1();
lean_mark_persistent(l_panic___at___00__private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_toUInt32_spec__0___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Zoned_Database_TzIf(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32 = _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32();
lean_mark_persistent(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt32);
l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64 = _init_l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64();
lean_mark_persistent(l___private_Std_Time_Zoned_Database_TzIf_0__Std_Time_TimeZone_TZif_termInt64);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Repr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Zoned_Database_TzIf(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned_Database_TzIf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Zoned_Database_TzIf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Zoned_Database_TzIf(builtin);
}
#ifdef __cplusplus
}
#endif

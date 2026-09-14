// Lean compiler output
// Module: Lake.Util.Version
// Imports: public import Lean.Data.Json public import Lake.Util.Date public import Init.Control.Do import Init.Data.String.TakeDrop import Lean.Data.Trie import Init.Data.String.Search import Init.Omega import Init.Data.String.Length
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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Lean_Data_Trie_empty___redArg();
lean_object* l_Lean_Data_Trie_insert___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Data_Trie_matchPrefix___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_String_Slice_beq(lean_object*, lean_object*);
lean_object* l_Lake_Date_toString(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Date_ofString_x3f(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lake_instReprDate_repr___redArg(lean_object*);
uint8_t l_Lake_instDecidableEqDate_decEq(lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t l_String_decLE(lean_object*, lean_object*);
uint8_t l_Lake_instOrdDate_ord(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Util_Version_0__Lake_isWildVer(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_isWildVer___boxed(lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "invalid "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " version: expected numeral, got '"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_none_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_none_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_wild_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_wild_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_nat_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_nat_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = " version: expected numeral or wildcard, got '"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "invalid version: '-' suffix cannot be empty"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "unexpected characters at end of version: "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_instInhabitedSemVerCore_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_instInhabitedSemVerCore_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedSemVerCore_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedSemVerCore_default = (const lean_object*)&l_Lake_instInhabitedSemVerCore_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedSemVerCore = (const lean_object*)&l_Lake_instInhabitedSemVerCore_default___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprSemVerCore_repr_spec__0(lean_object*);
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__0_value;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "major"};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__2_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__3_value;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__4 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__4_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__3_value),((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lake_instReprSemVerCore_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__7;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__8 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__8_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__9 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__9_value;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "minor"};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__10 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__10_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__11 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__11_value;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "patch"};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__12 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__12_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__13 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__13_value;
static const lean_string_object l_Lake_instReprSemVerCore_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__14 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lake_instReprSemVerCore_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__15;
static lean_once_cell_t l_Lake_instReprSemVerCore_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__16;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__17 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lake_instReprSemVerCore_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__14_value)}};
static const lean_object* l_Lake_instReprSemVerCore_repr___redArg___closed__18 = (const lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprSemVerCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprSemVerCore_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprSemVerCore___closed__0 = (const lean_object*)&l_Lake_instReprSemVerCore___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprSemVerCore = (const lean_object*)&l_Lake_instReprSemVerCore___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqSemVerCore_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqSemVerCore_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqSemVerCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqSemVerCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instOrdSemVerCore_ord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instOrdSemVerCore_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instOrdSemVerCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instOrdSemVerCore_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instOrdSemVerCore___closed__0 = (const lean_object*)&l_Lake_instOrdSemVerCore___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instOrdSemVerCore = (const lean_object*)&l_Lake_instOrdSemVerCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instLT;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instLE;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMin___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMin___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_SemVerCore_instMin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_instMin___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_SemVerCore_instMin___closed__0 = (const lean_object*)&l_Lake_SemVerCore_instMin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_SemVerCore_instMin = (const lean_object*)&l_Lake_SemVerCore_instMin___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMax___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMax___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_SemVerCore_instMax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_instMax___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_SemVerCore_instMax___closed__0 = (const lean_object*)&l_Lake_SemVerCore_instMax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_SemVerCore_instMax = (const lean_object*)&l_Lake_SemVerCore_instMax___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid version core: "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "incorrect number of components: got "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__1_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ", expected 3"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__2 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__2_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid patch version: expected numeral, got '"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid minor version: expected numeral, got '"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid major version: expected numeral, got '"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SemVerCore_parse(lean_object*);
static const lean_string_object l_Lake_SemVerCore_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_SemVerCore_toString___closed__0 = (const lean_object*)&l_Lake_SemVerCore_toString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_toString(lean_object*);
static const lean_closure_object l_Lake_SemVerCore_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_SemVerCore_instToString___closed__0 = (const lean_object*)&l_Lake_SemVerCore_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_SemVerCore_instToString = (const lean_object*)&l_Lake_SemVerCore_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instToJson___lam__0(lean_object*);
static const lean_closure_object l_Lake_SemVerCore_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_instToJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_SemVerCore_instToJson___closed__0 = (const lean_object*)&l_Lake_SemVerCore_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_SemVerCore_instToJson = (const lean_object*)&l_Lake_SemVerCore_instToJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instFromJson___lam__0(lean_object*);
static const lean_closure_object l_Lake_SemVerCore_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_instFromJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_SemVerCore_instFromJson___closed__0 = (const lean_object*)&l_Lake_SemVerCore_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_SemVerCore_instFromJson = (const lean_object*)&l_Lake_SemVerCore_instFromJson___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedStdVer_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instInhabitedSemVerCore_default___closed__0_value),((lean_object*)&l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1_value)}};
static const lean_object* l_Lake_instInhabitedStdVer_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedStdVer_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedStdVer_default = (const lean_object*)&l_Lake_instInhabitedStdVer_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedStdVer = (const lean_object*)&l_Lake_instInhabitedStdVer_default___closed__0_value;
static const lean_string_object l_Lake_instReprStdVer_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toSemVerCore"};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lake_instReprStdVer_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprStdVer_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprStdVer_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__2_value),((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lake_instReprStdVer_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprStdVer_repr___redArg___closed__4;
static const lean_string_object l_Lake_instReprStdVer_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "specialDescr"};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprStdVer_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprStdVer_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprStdVer_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprStdVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprStdVer_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprStdVer___closed__0 = (const lean_object*)&l_Lake_instReprStdVer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprStdVer = (const lean_object*)&l_Lake_instReprStdVer___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqStdVer_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqStdVer_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqStdVer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqStdVer___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_instCoeSemVerCore___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_instCoeSemVerCore___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_StdVer_instCoeSemVerCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_instCoeSemVerCore___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instCoeSemVerCore___closed__0 = (const lean_object*)&l_Lake_StdVer_instCoeSemVerCore___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instCoeSemVerCore = (const lean_object*)&l_Lake_StdVer_instCoeSemVerCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_ofSemVerCore(lean_object*);
static const lean_closure_object l_Lake_StdVer_instCoeSemVerCore__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_ofSemVerCore, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instCoeSemVerCore__1___closed__0 = (const lean_object*)&l_Lake_StdVer_instCoeSemVerCore__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instCoeSemVerCore__1 = (const lean_object*)&l_Lake_StdVer_instCoeSemVerCore__1___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_StdVer_compare(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_compare___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_StdVer_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instOrd___closed__0 = (const lean_object*)&l_Lake_StdVer_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instOrd = (const lean_object*)&l_Lake_StdVer_instOrd___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_instLT;
LEAN_EXPORT lean_object* l_Lake_StdVer_instLE;
LEAN_EXPORT lean_object* l_Lake_StdVer_instMin___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_instMin___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_StdVer_instMin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_instMin___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instMin___closed__0 = (const lean_object*)&l_Lake_StdVer_instMin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instMin = (const lean_object*)&l_Lake_StdVer_instMin___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_instMax___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_instMax___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_StdVer_instMax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_instMax___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instMax___closed__0 = (const lean_object*)&l_Lake_StdVer_instMax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instMax = (const lean_object*)&l_Lake_StdVer_instMax___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_parseM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_StdVer_parse(lean_object*);
static const lean_string_object l_Lake_StdVer_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lake_StdVer_toString___closed__0 = (const lean_object*)&l_Lake_StdVer_toString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_toString(lean_object*);
static const lean_closure_object l_Lake_StdVer_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instToString___closed__0 = (const lean_object*)&l_Lake_StdVer_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instToString = (const lean_object*)&l_Lake_StdVer_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_instToJson___lam__0(lean_object*);
static const lean_closure_object l_Lake_StdVer_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_instToJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instToJson___closed__0 = (const lean_object*)&l_Lake_StdVer_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instToJson = (const lean_object*)&l_Lake_StdVer_instToJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_StdVer_instFromJson___lam__0(lean_object*);
static const lean_closure_object l_Lake_StdVer_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_instFromJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_StdVer_instFromJson___closed__0 = (const lean_object*)&l_Lake_StdVer_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_StdVer_instFromJson = (const lean_object*)&l_Lake_StdVer_instFromJson___closed__0_value;
static const lean_string_object l_Lake_toolchainFileName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "lean-toolchain"};
static const lean_object* l_Lake_toolchainFileName___closed__0 = (const lean_object*)&l_Lake_toolchainFileName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_toolchainFileName = (const lean_object*)&l_Lake_toolchainFileName___closed__0_value;
static const lean_string_object l_Lake_ToolchainVer_defaultOrigin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "leanprover/lean4"};
static const lean_object* l_Lake_ToolchainVer_defaultOrigin___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_defaultOrigin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_defaultOrigin = (const lean_object*)&l_Lake_ToolchainVer_defaultOrigin___closed__0_value;
static const lean_string_object l_Lake_ToolchainVer_prOrigin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "leanprover/lean4-pr-releases"};
static const lean_object* l_Lake_ToolchainVer_prOrigin___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_prOrigin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_prOrigin = (const lean_object*)&l_Lake_ToolchainVer_prOrigin___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_ToolchainVer_release___override___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "leanprover/lean4:v"};
static const lean_object* l_Lake_ToolchainVer_release___override___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_release___override___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release___override(lean_object*);
static const lean_string_object l_Lake_ToolchainVer_nightly___override___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "leanprover/lean4:nightly-"};
static const lean_object* l_Lake_ToolchainVer_nightly___override___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_nightly___override___closed__0_value;
static const lean_string_object l_Lake_ToolchainVer_nightly___override___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-rev"};
static const lean_object* l_Lake_ToolchainVer_nightly___override___closed__1 = (const lean_object*)&l_Lake_ToolchainVer_nightly___override___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly___override(lean_object*, lean_object*);
static const lean_string_object l_Lake_ToolchainVer_pr___override___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "leanprover/lean4-pr-releases:pr-release-"};
static const lean_object* l_Lake_ToolchainVer_pr___override___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_pr___override___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr___override(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other___override(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_toString___override(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_toString___override___boxed(lean_object*);
static const lean_string_object l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_instReprToolchainVer_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lake.ToolchainVer.release"};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__0 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__1 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__1_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__2 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__2_value;
static lean_once_cell_t l_Lake_instReprToolchainVer_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprToolchainVer_repr___closed__3;
static lean_once_cell_t l_Lake_instReprToolchainVer_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprToolchainVer_repr___closed__4;
static const lean_string_object l_Lake_instReprToolchainVer_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lake.ToolchainVer.nightly"};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__5 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__5_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__5_value)}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__6 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__6_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__7 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__7_value;
static const lean_string_object l_Lake_instReprToolchainVer_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ToolchainVer.pr"};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__8 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__8_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__8_value)}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__9 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__9_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__10 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__10_value;
static const lean_string_object l_Lake_instReprToolchainVer_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lake.ToolchainVer.other"};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__11 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__11_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__11_value)}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__12 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__12_value;
static const lean_ctor_object l_Lake_instReprToolchainVer_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprToolchainVer_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprToolchainVer_repr___closed__13 = (const lean_object*)&l_Lake_instReprToolchainVer_repr___closed__13_value;
LEAN_EXPORT lean_object* l_Lake_instReprToolchainVer_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprToolchainVer_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprToolchainVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprToolchainVer_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprToolchainVer___closed__0 = (const lean_object*)&l_Lake_instReprToolchainVer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprToolchainVer = (const lean_object*)&l_Lake_instReprToolchainVer___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqToolchainVer_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqToolchainVer_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqToolchainVer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqToolchainVer___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_ToolchainVer_instCoeLeanVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ToolchainVer_release___override, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ToolchainVer_instCoeLeanVer___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_instCoeLeanVer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_instCoeLeanVer = (const lean_object*)&l_Lake_ToolchainVer_instCoeLeanVer___closed__0_value;
static const lean_string_object l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "nightly-"};
static const lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "pr-release-"};
static const lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_ToolchainVer_ofString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "-nightly"};
static const lean_object* l_Lake_ToolchainVer_ofString___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_ofString___closed__0_value;
static lean_once_cell_t l_Lake_ToolchainVer_ofString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ToolchainVer_ofString___closed__1;
static lean_once_cell_t l_Lake_ToolchainVer_ofString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ToolchainVer_ofString___closed__2;
static const lean_string_object l_Lake_ToolchainVer_ofString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "v"};
static const lean_object* l_Lake_ToolchainVer_ofString___closed__3 = (const lean_object*)&l_Lake_ToolchainVer_ofString___closed__3_value;
static lean_once_cell_t l_Lake_ToolchainVer_ofString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ToolchainVer_ofString___closed__4;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofString(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofFile_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofFile_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofDir_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofDir_x3f___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_ToolchainVer_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ToolchainVer_toString___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ToolchainVer_instToString___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_instToString = (const lean_object*)&l_Lake_ToolchainVer_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instToJson___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instToJson___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_ToolchainVer_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ToolchainVer_instToJson___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ToolchainVer_instToJson___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_instToJson = (const lean_object*)&l_Lake_ToolchainVer_instToJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instFromJson___lam__0(lean_object*);
static const lean_closure_object l_Lake_ToolchainVer_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ToolchainVer_instFromJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ToolchainVer_instFromJson___closed__0 = (const lean_object*)&l_Lake_ToolchainVer_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ToolchainVer_instFromJson = (const lean_object*)&l_Lake_ToolchainVer_instFromJson___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_blt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_blt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instLT;
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_decLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_decLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_ble(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ble___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instLE;
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_decLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_decLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_normalizeToolchain(lean_object*);
static const lean_closure_object l_Lake_instDecodeVersionSemVerCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_SemVerCore_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instDecodeVersionSemVerCore___closed__0 = (const lean_object*)&l_Lake_instDecodeVersionSemVerCore___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instDecodeVersionSemVerCore = (const lean_object*)&l_Lake_instDecodeVersionSemVerCore___closed__0_value;
static const lean_closure_object l_Lake_instDecodeVersionStdVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_StdVer_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instDecodeVersionStdVer___closed__0 = (const lean_object*)&l_Lake_instDecodeVersionStdVer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instDecodeVersionStdVer = (const lean_object*)&l_Lake_instDecodeVersionStdVer___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instDecodeVersionToolchainVer___lam__0(lean_object*);
static const lean_closure_object l_Lake_instDecodeVersionToolchainVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instDecodeVersionToolchainVer___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instDecodeVersionToolchainVer___closed__0 = (const lean_object*)&l_Lake_instDecodeVersionToolchainVer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instDecodeVersionToolchainVer = (const lean_object*)&l_Lake_instDecodeVersionToolchainVer___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.lt"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__0 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__1 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__1_value;
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.le"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__2 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__2_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__2_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__3 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__3_value;
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.gt"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__4 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__4_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__4_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__5 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__5_value;
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.ge"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__6 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__6_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__6_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__7 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__7_value;
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.eq"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__8 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__8_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__8_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__9 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__9_value;
static const lean_string_object l_Lake_instReprComparatorOp_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.ComparatorOp.ne"};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__10 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__10_value;
static const lean_ctor_object l_Lake_instReprComparatorOp_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprComparatorOp_repr___closed__10_value)}};
static const lean_object* l_Lake_instReprComparatorOp_repr___closed__11 = (const lean_object*)&l_Lake_instReprComparatorOp_repr___closed__11_value;
LEAN_EXPORT lean_object* l_Lake_instReprComparatorOp_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprComparatorOp_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprComparatorOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprComparatorOp_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprComparatorOp___closed__0 = (const lean_object*)&l_Lake_instReprComparatorOp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprComparatorOp = (const lean_object*)&l_Lake_instReprComparatorOp___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instInhabitedComparatorOp_default;
LEAN_EXPORT uint8_t l_Lake_instInhabitedComparatorOp;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "≠"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!="};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__1_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__2 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__2_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "≥"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__3 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__3_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ">="};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__4 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__4_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__5 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__5_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "≤"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__6 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__6_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "<="};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__7 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__7_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__8 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__8_value;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17;
static lean_once_cell_t l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "(internal) comparison operator parse produced invalid position"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected comparison operator"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ofString_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_toString(uint8_t);
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_toString___boxed(lean_object*);
static const lean_closure_object l_Lake_ComparatorOp_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ComparatorOp_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_ComparatorOp_instToString___closed__0 = (const lean_object*)&l_Lake_ComparatorOp_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_ComparatorOp_instToString = (const lean_object*)&l_Lake_ComparatorOp_instToString___closed__0_value;
static const lean_string_object l_Lake_instReprVerComparator_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ver"};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lake_instReprVerComparator_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprVerComparator_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprVerComparator_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__2_value),((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lake_instReprVerComparator_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__4;
static const lean_string_object l_Lake_instReprVerComparator_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "op"};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprVerComparator_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lake_instReprVerComparator_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__7;
static const lean_string_object l_Lake_instReprVerComparator_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "includeSuffixes"};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__8 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lake_instReprVerComparator_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__8_value)}};
static const lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__9 = (const lean_object*)&l_Lake_instReprVerComparator_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lake_instReprVerComparator_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerComparator_repr___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprVerComparator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprVerComparator_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprVerComparator___closed__0 = (const lean_object*)&l_Lake_instReprVerComparator___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprVerComparator = (const lean_object*)&l_Lake_instReprVerComparator___closed__0_value;
static const lean_ctor_object l_Lake_VerComparator_wild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instInhabitedSemVerCore_default___closed__0_value),((lean_object*)&l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1_value)}};
static const lean_object* l_Lake_VerComparator_wild___closed__0 = (const lean_object*)&l_Lake_VerComparator_wild___closed__0_value;
static const lean_ctor_object l_Lake_VerComparator_wild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_VerComparator_wild___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_VerComparator_wild___closed__1 = (const lean_object*)&l_Lake_VerComparator_wild___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_VerComparator_wild = (const lean_object*)&l_Lake_VerComparator_wild___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_VerComparator_instInhabited = (const lean_object*)&l_Lake_VerComparator_wild___closed__1_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "invalid comparison: expected version after `"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComparator_parseM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerComparator_parse(lean_object*);
LEAN_EXPORT uint8_t l_Lake_VerComparator_test(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerComparator_test___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerComparator_toString(lean_object*);
static const lean_closure_object l_Lake_VerComparator_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_VerComparator_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_VerComparator_instToString___closed__0 = (const lean_object*)&l_Lake_VerComparator_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_VerComparator_instToString = (const lean_object*)&l_Lake_VerComparator_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__5_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__2_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprVerRange_repr_spec__0(lean_object*);
static const lean_string_object l_Lake_instReprVerRange_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toString"};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lake_instReprVerRange_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprVerRange_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprVerRange_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__2_value),((lean_object*)&l_Lake_instReprSemVerCore_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lake_instReprVerRange_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerRange_repr___redArg___closed__4;
static const lean_string_object l_Lake_instReprVerRange_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "clauses"};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprVerRange_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprVerRange_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprVerRange_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lake_instReprVerRange_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerRange_repr___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprVerRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprVerRange_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprVerRange___closed__0 = (const lean_object*)&l_Lake_instReprVerRange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprVerRange = (const lean_object*)&l_Lake_instReprVerRange___closed__0_value;
static const lean_array_object l_Lake_instInhabitedVerRange_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_instInhabitedVerRange_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedVerRange_default___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedVerRange_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1_value),((lean_object*)&l_Lake_instInhabitedVerRange_default___closed__0_value)}};
static const lean_object* l_Lake_instInhabitedVerRange_default___closed__1 = (const lean_object*)&l_Lake_instInhabitedVerRange_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedVerRange_default = (const lean_object*)&l_Lake_instInhabitedVerRange_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedVerRange = (const lean_object*)&l_Lake_instInhabitedVerRange_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_VerRange_instToString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerRange_instToString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_VerRange_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_VerRange_instToString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_VerRange_instToString___closed__0 = (const lean_object*)&l_Lake_VerRange_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_VerRange_instToString = (const lean_object*)&l_Lake_VerRange_instToString___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<empty>"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " || "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerRange_ofClauses(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_appendRange(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "invalid tilde range: incorrect number of components: got "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ", expected 1-3"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "invalid caret range: incorrect number of components: got "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "invalid caret range: `^0.0.0` is degenerate; use `=0.0.0` instead"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "invalid patch version: components after a wildcard must be wildcards"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 183, .m_capacity = 183, .m_length = 180, .m_data = "invalid version range: bare versions are not supported; if you want to pin a specific version, use '=' before the full version; otherwise, use '≥' to support it and future versions"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__1_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "invalid minor version: components after a wildcard must be wildcards"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__2 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__2_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "invalid wildcard range: incorrect number of components: got "};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__3 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__3_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "invalid wildcard range: wildcard versions do not support suffixes"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__4 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "expected version range"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected '|' after first '|'"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__1 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__1_value;
static const lean_array_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__2 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__2_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid tilde range: expected version after `~`"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__3 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__3_value;
static const lean_string_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid caret range: expected version after `^`"};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__4 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Util_Version_0__Lake_VerRange_parseM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM___closed__0 = (const lean_object*)&l___private_Lake_Util_Version_0__Lake_VerRange_parseM___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerRange_parse(lean_object*);
static const lean_closure_object l_Lake_VerRange_instDecodeVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_VerRange_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_VerRange_instDecodeVersion___closed__0 = (const lean_object*)&l_Lake_VerRange_instDecodeVersion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_VerRange_instDecodeVersion = (const lean_object*)&l_Lake_VerRange_instDecodeVersion___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_VerRange_test(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_VerRange_test___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(lean_object* v_s_1_, lean_object* v_cs_2_, lean_object* v_iniPos_3_, lean_object* v_p_4_){
_start:
{
lean_object* v___x_8_; uint8_t v_decide_9_; 
v___x_8_ = lean_string_utf8_byte_size(v_s_1_);
v_decide_9_ = lean_nat_dec_eq(v_p_4_, v___x_8_);
if (v_decide_9_ == 0)
{
uint32_t v_c_10_; uint8_t v___y_23_; uint32_t v___x_28_; uint8_t v___x_29_; 
v_c_10_ = lean_string_utf8_get_fast(v_s_1_, v_p_4_);
v___x_28_ = 46;
v___x_29_ = lean_uint32_dec_eq(v_c_10_, v___x_28_);
if (v___x_29_ == 0)
{
uint32_t v___x_30_; uint8_t v___x_31_; 
v___x_30_ = 65;
v___x_31_ = lean_uint32_dec_le(v___x_30_, v_c_10_);
if (v___x_31_ == 0)
{
v___y_23_ = v___x_31_;
goto v___jp_22_;
}
else
{
uint32_t v___x_32_; uint8_t v___x_33_; 
v___x_32_ = 90;
v___x_33_ = lean_uint32_dec_le(v_c_10_, v___x_32_);
v___y_23_ = v___x_33_;
goto v___jp_22_;
}
}
else
{
lean_object* v_c_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
lean_inc(v_p_4_);
lean_inc_ref(v_s_1_);
v_c_34_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_c_34_, 0, v_s_1_);
lean_ctor_set(v_c_34_, 1, v_iniPos_3_);
lean_ctor_set(v_c_34_, 2, v_p_4_);
v___x_35_ = lean_array_push(v_cs_2_, v_c_34_);
v___x_36_ = lean_string_utf8_next_fast(v_s_1_, v_p_4_);
lean_dec(v_p_4_);
v_cs_2_ = v___x_35_;
v_iniPos_3_ = v___x_36_;
v_p_4_ = v___x_36_;
goto _start;
}
v___jp_11_:
{
uint32_t v___x_12_; uint8_t v___x_13_; 
v___x_12_ = 42;
v___x_13_ = lean_uint32_dec_eq(v_c_10_, v___x_12_);
if (v___x_13_ == 0)
{
lean_object* v_c_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
lean_inc(v_p_4_);
v_c_14_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_c_14_, 0, v_s_1_);
lean_ctor_set(v_c_14_, 1, v_iniPos_3_);
lean_ctor_set(v_c_14_, 2, v_p_4_);
v___x_15_ = lean_array_push(v_cs_2_, v_c_14_);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v_p_4_);
return v___x_16_;
}
else
{
goto v___jp_5_;
}
}
v___jp_17_:
{
uint32_t v___x_18_; uint8_t v___x_19_; 
v___x_18_ = 48;
v___x_19_ = lean_uint32_dec_le(v___x_18_, v_c_10_);
if (v___x_19_ == 0)
{
goto v___jp_11_;
}
else
{
uint32_t v___x_20_; uint8_t v___x_21_; 
v___x_20_ = 57;
v___x_21_ = lean_uint32_dec_le(v_c_10_, v___x_20_);
if (v___x_21_ == 0)
{
goto v___jp_11_;
}
else
{
goto v___jp_5_;
}
}
}
v___jp_22_:
{
if (v___y_23_ == 0)
{
uint32_t v___x_24_; uint8_t v___x_25_; 
v___x_24_ = 97;
v___x_25_ = lean_uint32_dec_le(v___x_24_, v_c_10_);
if (v___x_25_ == 0)
{
goto v___jp_17_;
}
else
{
uint32_t v___x_26_; uint8_t v___x_27_; 
v___x_26_ = 122;
v___x_27_ = lean_uint32_dec_le(v_c_10_, v___x_26_);
if (v___x_27_ == 0)
{
goto v___jp_17_;
}
else
{
goto v___jp_5_;
}
}
}
else
{
goto v___jp_5_;
}
}
}
else
{
lean_object* v_c_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
lean_inc(v_p_4_);
v_c_38_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_c_38_, 0, v_s_1_);
lean_ctor_set(v_c_38_, 1, v_iniPos_3_);
lean_ctor_set(v_c_38_, 2, v_p_4_);
v___x_39_ = lean_array_push(v_cs_2_, v_c_38_);
v___x_40_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v_p_4_);
return v___x_40_;
}
v___jp_5_:
{
lean_object* v___x_6_; 
v___x_6_ = lean_string_utf8_next_fast(v_s_1_, v_p_4_);
lean_dec(v_p_4_);
v_p_4_ = v___x_6_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents_go(lean_object* v_s_41_, lean_object* v_cs_42_, lean_object* v_iniPos_43_, lean_object* v_p_44_, lean_object* v_iniPos__le_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_41_, v_cs_42_, v_iniPos_43_, v_p_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponents(lean_object* v_s_49_, lean_object* v_p_50_){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0));
lean_inc(v_p_50_);
v___x_52_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_49_, v___x_51_, v_p_50_, v_p_50_);
return v___x_52_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Util_Version_0__Lake_isWildVer(lean_object* v_s_53_){
_start:
{
lean_object* v_str_54_; lean_object* v_startInclusive_55_; lean_object* v_endExclusive_56_; lean_object* v_p_57_; lean_object* v___x_58_; uint8_t v_decide_59_; 
v_str_54_ = lean_ctor_get(v_s_53_, 0);
v_startInclusive_55_ = lean_ctor_get(v_s_53_, 1);
v_endExclusive_56_ = lean_ctor_get(v_s_53_, 2);
v_p_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = lean_nat_sub(v_endExclusive_56_, v_startInclusive_55_);
v_decide_59_ = lean_nat_dec_eq(v_p_57_, v___x_58_);
if (v_decide_59_ == 0)
{
lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v_decide_62_; 
v___x_60_ = lean_string_utf8_next_fast(v_str_54_, v_startInclusive_55_);
v___x_61_ = lean_nat_sub(v___x_60_, v_startInclusive_55_);
v_decide_62_ = lean_nat_dec_eq(v___x_61_, v___x_58_);
lean_dec(v___x_58_);
lean_dec(v___x_61_);
if (v_decide_62_ == 0)
{
return v_decide_62_;
}
else
{
uint32_t v_c_63_; uint32_t v___x_64_; uint8_t v___x_65_; 
v_c_63_ = lean_string_utf8_get_fast(v_str_54_, v_startInclusive_55_);
v___x_64_ = 120;
v___x_65_ = lean_uint32_dec_eq(v_c_63_, v___x_64_);
if (v___x_65_ == 0)
{
uint32_t v___x_66_; uint8_t v___x_67_; 
v___x_66_ = 88;
v___x_67_ = lean_uint32_dec_eq(v_c_63_, v___x_66_);
if (v___x_67_ == 0)
{
uint32_t v___x_68_; uint8_t v___x_69_; 
v___x_68_ = 42;
v___x_69_ = lean_uint32_dec_eq(v_c_63_, v___x_68_);
return v___x_69_;
}
else
{
return v_decide_62_;
}
}
else
{
return v_decide_62_;
}
}
}
else
{
uint8_t v___x_70_; 
lean_dec(v___x_58_);
v___x_70_ = 0;
return v___x_70_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_isWildVer___boxed(lean_object* v_s_71_){
_start:
{
uint8_t v_res_72_; lean_object* v_r_73_; 
v_res_72_ = l___private_Lake_Util_Version_0__Lake_isWildVer(v_s_71_);
lean_dec_ref(v_s_71_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg(lean_object* v_what_77_, lean_object* v_s_78_, lean_object* v_a_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l_String_Slice_toNat_x3f(v_s_78_);
if (lean_obj_tag(v___x_80_) == 1)
{
lean_object* v_val_81_; lean_object* v___x_82_; 
v_val_81_ = lean_ctor_get(v___x_80_, 0);
lean_inc(v_val_81_);
lean_dec_ref_known(v___x_80_, 1);
v___x_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_82_, 0, v_val_81_);
lean_ctor_set(v___x_82_, 1, v_a_79_);
return v___x_82_;
}
else
{
lean_object* v_str_83_; lean_object* v_startInclusive_84_; lean_object* v_endExclusive_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
lean_dec(v___x_80_);
v_str_83_ = lean_ctor_get(v_s_78_, 0);
v_startInclusive_84_ = lean_ctor_get(v_s_78_, 1);
v_endExclusive_85_ = lean_ctor_get(v_s_78_, 2);
v___x_86_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0));
v___x_87_ = lean_string_append(v___x_86_, v_what_77_);
v___x_88_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__1));
v___x_89_ = lean_string_append(v___x_87_, v___x_88_);
v___x_90_ = lean_string_utf8_extract_fast(v_str_83_, v_startInclusive_84_, v_endExclusive_85_);
v___x_91_ = lean_string_append(v___x_89_, v___x_90_);
lean_dec_ref(v___x_90_);
v___x_92_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_93_ = lean_string_append(v___x_91_, v___x_92_);
v___x_94_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set(v___x_94_, 1, v_a_79_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___boxed(lean_object* v_what_95_, lean_object* v_s_96_, lean_object* v_a_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg(v_what_95_, v_s_96_, v_a_97_);
lean_dec_ref(v_s_96_);
lean_dec_ref(v_what_95_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat(lean_object* v_00_u03c3_99_, lean_object* v_what_100_, lean_object* v_s_101_, lean_object* v_a_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = l_String_Slice_toNat_x3f(v_s_101_);
if (lean_obj_tag(v___x_103_) == 1)
{
lean_object* v_val_104_; lean_object* v___x_105_; 
v_val_104_ = lean_ctor_get(v___x_103_, 0);
lean_inc(v_val_104_);
lean_dec_ref_known(v___x_103_, 1);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v_val_104_);
lean_ctor_set(v___x_105_, 1, v_a_102_);
return v___x_105_;
}
else
{
lean_object* v_str_106_; lean_object* v_startInclusive_107_; lean_object* v_endExclusive_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
lean_dec(v___x_103_);
v_str_106_ = lean_ctor_get(v_s_101_, 0);
v_startInclusive_107_ = lean_ctor_get(v_s_101_, 1);
v_endExclusive_108_ = lean_ctor_get(v_s_101_, 2);
v___x_109_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0));
v___x_110_ = lean_string_append(v___x_109_, v_what_100_);
v___x_111_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__1));
v___x_112_ = lean_string_append(v___x_110_, v___x_111_);
v___x_113_ = lean_string_utf8_extract_fast(v_str_106_, v_startInclusive_107_, v_endExclusive_108_);
v___x_114_ = lean_string_append(v___x_112_, v___x_113_);
lean_dec_ref(v___x_113_);
v___x_115_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_116_ = lean_string_append(v___x_114_, v___x_115_);
v___x_117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v_a_102_);
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerNat___boxed(lean_object* v_00_u03c3_118_, lean_object* v_what_119_, lean_object* v_s_120_, lean_object* v_a_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l___private_Lake_Util_Version_0__Lake_parseVerNat(v_00_u03c3_118_, v_what_119_, v_s_120_, v_a_121_);
lean_dec_ref(v_s_120_);
lean_dec_ref(v_what_119_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorIdx(lean_object* v_x_123_){
_start:
{
switch(lean_obj_tag(v_x_123_))
{
case 0:
{
lean_object* v___x_124_; 
v___x_124_ = lean_unsigned_to_nat(0u);
return v___x_124_;
}
case 1:
{
lean_object* v___x_125_; 
v___x_125_ = lean_unsigned_to_nat(1u);
return v___x_125_;
}
default: 
{
lean_object* v___x_126_; 
v___x_126_ = lean_unsigned_to_nat(2u);
return v___x_126_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorIdx___boxed(lean_object* v_x_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorIdx(v_x_127_);
lean_dec(v_x_127_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(lean_object* v_t_129_, lean_object* v_k_130_){
_start:
{
if (lean_obj_tag(v_t_129_) == 2)
{
lean_object* v_n_131_; lean_object* v___x_132_; 
v_n_131_ = lean_ctor_get(v_t_129_, 0);
lean_inc(v_n_131_);
lean_dec_ref_known(v_t_129_, 1);
v___x_132_ = lean_apply_1(v_k_130_, v_n_131_);
return v___x_132_;
}
else
{
lean_dec(v_t_129_);
return v_k_130_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim(lean_object* v_motive_133_, lean_object* v_ctorIdx_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_k_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_135_, v_k_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___boxed(lean_object* v_motive_139_, lean_object* v_ctorIdx_140_, lean_object* v_t_141_, lean_object* v_h_142_, lean_object* v_k_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim(v_motive_139_, v_ctorIdx_140_, v_t_141_, v_h_142_, v_k_143_);
lean_dec(v_ctorIdx_140_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_none_elim___redArg(lean_object* v_t_145_, lean_object* v_none_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_145_, v_none_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_none_elim(lean_object* v_motive_148_, lean_object* v_t_149_, lean_object* v_h_150_, lean_object* v_none_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_149_, v_none_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_wild_elim___redArg(lean_object* v_t_153_, lean_object* v_wild_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_153_, v_wild_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_wild_elim(lean_object* v_motive_156_, lean_object* v_t_157_, lean_object* v_h_158_, lean_object* v_wild_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_157_, v_wild_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_nat_elim___redArg(lean_object* v_t_161_, lean_object* v_nat_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_161_, v_nat_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComponent_nat_elim(lean_object* v_motive_164_, lean_object* v_t_165_, lean_object* v_h_166_, lean_object* v_nat_167_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = l___private_Lake_Util_Version_0__Lake_VerComponent_ctorElim___redArg(v_t_165_, v_nat_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(lean_object* v_what_170_, lean_object* v_s_x3f_171_, lean_object* v_a_172_){
_start:
{
if (lean_obj_tag(v_s_x3f_171_) == 1)
{
lean_object* v_val_173_; uint8_t v___x_174_; 
v_val_173_ = lean_ctor_get(v_s_x3f_171_, 0);
v___x_174_ = l___private_Lake_Util_Version_0__Lake_isWildVer(v_val_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; 
v___x_175_ = l_String_Slice_toNat_x3f(v_val_173_);
if (lean_obj_tag(v___x_175_) == 1)
{
lean_object* v_val_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_184_; 
v_val_176_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_184_ == 0)
{
v___x_178_ = v___x_175_;
v_isShared_179_ = v_isSharedCheck_184_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_val_176_);
lean_dec(v___x_175_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_184_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_181_; 
if (v_isShared_179_ == 0)
{
lean_ctor_set_tag(v___x_178_, 2);
v___x_181_ = v___x_178_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_val_176_);
v___x_181_ = v_reuseFailAlloc_183_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
lean_object* v___x_182_; 
v___x_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set(v___x_182_, 1, v_a_172_);
return v___x_182_;
}
}
}
else
{
lean_object* v_str_185_; lean_object* v_startInclusive_186_; lean_object* v_endExclusive_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
lean_dec(v___x_175_);
v_str_185_ = lean_ctor_get(v_val_173_, 0);
v_startInclusive_186_ = lean_ctor_get(v_val_173_, 1);
v_endExclusive_187_ = lean_ctor_get(v_val_173_, 2);
v___x_188_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__0));
v___x_189_ = lean_string_append(v___x_188_, v_what_170_);
v___x_190_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___closed__0));
v___x_191_ = lean_string_append(v___x_189_, v___x_190_);
v___x_192_ = lean_string_utf8_extract_fast(v_str_185_, v_startInclusive_186_, v_endExclusive_187_);
v___x_193_ = lean_string_append(v___x_191_, v___x_192_);
lean_dec_ref(v___x_192_);
v___x_194_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_195_ = lean_string_append(v___x_193_, v___x_194_);
v___x_196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v_a_172_);
return v___x_196_;
}
}
else
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = lean_box(1);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v_a_172_);
return v___x_198_;
}
}
else
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_box(0);
v___x_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v_a_172_);
return v___x_200_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg___boxed(lean_object* v_what_201_, lean_object* v_s_x3f_202_, lean_object* v_a_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(v_what_201_, v_s_x3f_202_, v_a_203_);
lean_dec(v_s_x3f_202_);
lean_dec_ref(v_what_201_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent(lean_object* v_00_u03c3_205_, lean_object* v_what_206_, lean_object* v_s_x3f_207_, lean_object* v_a_208_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(v_what_206_, v_s_x3f_207_, v_a_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseVerComponent___boxed(lean_object* v_00_u03c3_210_, lean_object* v_what_211_, lean_object* v_s_x3f_212_, lean_object* v_a_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent(v_00_u03c3_210_, v_what_211_, v_s_x3f_212_, v_a_213_);
lean_dec(v_s_x3f_212_);
lean_dec_ref(v_what_211_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace(lean_object* v_s_215_, lean_object* v_p_216_){
_start:
{
lean_object* v___x_217_; uint8_t v_decide_218_; 
v___x_217_ = lean_string_utf8_byte_size(v_s_215_);
v_decide_218_ = lean_nat_dec_eq(v_p_216_, v___x_217_);
if (v_decide_218_ == 0)
{
uint32_t v___x_219_; uint32_t v___x_220_; uint8_t v___x_221_; 
v___x_219_ = lean_string_utf8_get_fast(v_s_215_, v_p_216_);
v___x_220_ = 32;
v___x_221_ = lean_uint32_dec_eq(v___x_219_, v___x_220_);
if (v___x_221_ == 0)
{
uint32_t v___x_222_; uint8_t v___x_223_; 
v___x_222_ = 9;
v___x_223_ = lean_uint32_dec_eq(v___x_219_, v___x_222_);
if (v___x_223_ == 0)
{
uint32_t v___x_224_; uint8_t v___x_225_; 
v___x_224_ = 13;
v___x_225_ = lean_uint32_dec_eq(v___x_219_, v___x_224_);
if (v___x_225_ == 0)
{
uint32_t v___x_226_; uint8_t v___x_227_; 
v___x_226_ = 10;
v___x_227_ = lean_uint32_dec_eq(v___x_219_, v___x_226_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; 
v___x_228_ = lean_string_utf8_next_fast(v_s_215_, v_p_216_);
lean_dec(v_p_216_);
v_p_216_ = v___x_228_;
goto _start;
}
else
{
return v_p_216_;
}
}
else
{
return v_p_216_;
}
}
else
{
return v_p_216_;
}
}
else
{
return v_p_216_;
}
}
else
{
return v_p_216_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace___boxed(lean_object* v_s_230_, lean_object* v_p_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace(v_s_230_, v_p_231_);
lean_dec_ref(v_s_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f(lean_object* v_s_233_, lean_object* v_a_234_){
_start:
{
lean_object* v___x_235_; uint8_t v_decide_236_; 
v___x_235_ = lean_string_utf8_byte_size(v_s_233_);
v_decide_236_ = lean_nat_dec_eq(v_a_234_, v___x_235_);
if (v_decide_236_ == 0)
{
uint32_t v___x_237_; uint32_t v___x_238_; uint8_t v___x_239_; 
v___x_237_ = lean_string_utf8_get_fast(v_s_233_, v_a_234_);
v___x_238_ = 45;
v___x_239_ = lean_uint32_dec_eq(v___x_237_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = lean_box(0);
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v_a_234_);
return v___x_241_;
}
else
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_242_ = lean_string_utf8_next_fast(v_s_233_, v_a_234_);
lean_dec(v_a_234_);
v___x_243_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f_nextUntilWhitespace(v_s_233_, v___x_242_);
v___x_244_ = lean_string_utf8_extract_fast(v_s_233_, v___x_242_, v___x_243_);
v___x_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
v___x_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
lean_ctor_set(v___x_246_, 1, v___x_243_);
return v___x_246_;
}
}
else
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = lean_box(0);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v_a_234_);
return v___x_248_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f___boxed(lean_object* v_s_249_, lean_object* v_a_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f(v_s_249_, v_a_250_);
lean_dec_ref(v_s_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(lean_object* v_s_254_, lean_object* v_a_255_){
_start:
{
lean_object* v___x_256_; lean_object* v_a_257_; 
v___x_256_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f(v_s_254_, v_a_255_);
v_a_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_a_257_);
if (lean_obj_tag(v_a_257_) == 1)
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_273_; 
v_a_258_ = lean_ctor_get(v___x_256_, 1);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_273_ == 0)
{
lean_object* v_unused_274_; 
v_unused_274_ = lean_ctor_get(v___x_256_, 0);
lean_dec(v_unused_274_);
v___x_260_ = v___x_256_;
v_isShared_261_ = v_isSharedCheck_273_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_256_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_273_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v_val_262_; lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v_val_262_ = lean_ctor_get(v_a_257_, 0);
lean_inc(v_val_262_);
lean_dec_ref_known(v_a_257_, 1);
v___x_263_ = lean_string_utf8_byte_size(v_val_262_);
v___x_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = lean_nat_dec_eq(v___x_263_, v___x_264_);
if (v___x_265_ == 0)
{
lean_object* v___x_267_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v_val_262_);
v___x_267_ = v___x_260_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_val_262_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_a_258_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
else
{
lean_object* v___x_269_; lean_object* v___x_271_; 
lean_dec(v_val_262_);
v___x_269_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__0));
if (v_isShared_261_ == 0)
{
lean_ctor_set_tag(v___x_260_, 1);
lean_ctor_set(v___x_260_, 0, v___x_269_);
v___x_271_ = v___x_260_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_269_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_a_258_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
else
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_283_; 
lean_dec(v_a_257_);
v_a_275_ = lean_ctor_get(v___x_256_, 1);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_283_ == 0)
{
lean_object* v_unused_284_; 
v_unused_284_ = lean_ctor_get(v___x_256_, 0);
lean_dec(v_unused_284_);
v___x_277_ = v___x_256_;
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_256_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_279_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 0, v___x_279_);
v___x_281_ = v___x_277_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_279_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_a_275_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___boxed(lean_object* v_s_285_, lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(v_s_285_, v_a_286_);
lean_dec_ref(v_s_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___redArg(lean_object* v_s_289_, lean_object* v_x_290_, lean_object* v_startPos_291_, lean_object* v_endPos_292_){
_start:
{
lean_object* v___x_293_; 
lean_inc_ref(v_s_289_);
v___x_293_ = lean_apply_2(v_x_290_, v_s_289_, v_startPos_291_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v_a_294_; lean_object* v_a_295_; uint8_t v_decide_296_; 
v_a_294_ = lean_ctor_get(v___x_293_, 0);
lean_inc(v_a_294_);
v_a_295_ = lean_ctor_get(v___x_293_, 1);
lean_inc(v_a_295_);
lean_dec_ref_known(v___x_293_, 2);
v_decide_296_ = lean_nat_dec_eq(v_a_295_, v_endPos_292_);
if (v_decide_296_ == 0)
{
lean_object* v_tail_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
lean_dec(v_a_294_);
v_tail_297_ = lean_string_utf8_extract(v_s_289_, v_a_295_, v_endPos_292_);
lean_dec(v_a_295_);
lean_dec_ref(v_s_289_);
v___x_298_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_299_ = lean_string_append(v___x_298_, v_tail_297_);
lean_dec_ref(v_tail_297_);
v___x_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
return v___x_300_;
}
else
{
lean_object* v___x_301_; 
lean_dec(v_a_295_);
lean_dec_ref(v_s_289_);
v___x_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_301_, 0, v_a_294_);
return v___x_301_;
}
}
else
{
lean_object* v_a_302_; lean_object* v___x_303_; 
lean_dec_ref(v_s_289_);
v_a_302_ = lean_ctor_get(v___x_293_, 0);
lean_inc(v_a_302_);
lean_dec_ref_known(v___x_293_, 2);
v___x_303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_303_, 0, v_a_302_);
return v___x_303_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___boxed(lean_object* v_s_304_, lean_object* v_x_305_, lean_object* v_startPos_306_, lean_object* v_endPos_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l___private_Lake_Util_Version_0__Lake_runVerParse___redArg(v_s_304_, v_x_305_, v_startPos_306_, v_endPos_307_);
lean_dec(v_endPos_307_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse(lean_object* v_00_u03b1_309_, lean_object* v_s_310_, lean_object* v_x_311_, lean_object* v_startPos_312_, lean_object* v_endPos_313_){
_start:
{
lean_object* v___x_314_; 
lean_inc_ref(v_s_310_);
v___x_314_ = lean_apply_2(v_x_311_, v_s_310_, v_startPos_312_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; lean_object* v_a_316_; uint8_t v_decide_317_; 
v_a_315_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_a_315_);
v_a_316_ = lean_ctor_get(v___x_314_, 1);
lean_inc(v_a_316_);
lean_dec_ref_known(v___x_314_, 2);
v_decide_317_ = lean_nat_dec_eq(v_a_316_, v_endPos_313_);
if (v_decide_317_ == 0)
{
lean_object* v_tail_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
lean_dec(v_a_315_);
v_tail_318_ = lean_string_utf8_extract(v_s_310_, v_a_316_, v_endPos_313_);
lean_dec(v_a_316_);
lean_dec_ref(v_s_310_);
v___x_319_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_320_ = lean_string_append(v___x_319_, v_tail_318_);
lean_dec_ref(v_tail_318_);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
else
{
lean_object* v___x_322_; 
lean_dec(v_a_316_);
lean_dec_ref(v_s_310_);
v___x_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_322_, 0, v_a_315_);
return v___x_322_;
}
}
else
{
lean_object* v_a_323_; lean_object* v___x_324_; 
lean_dec_ref(v_s_310_);
v_a_323_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v___x_314_, 2);
v___x_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_324_, 0, v_a_323_);
return v___x_324_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_runVerParse___boxed(lean_object* v_00_u03b1_325_, lean_object* v_s_326_, lean_object* v_x_327_, lean_object* v_startPos_328_, lean_object* v_endPos_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l___private_Lake_Util_Version_0__Lake_runVerParse(v_00_u03b1_325_, v_s_326_, v_x_327_, v_startPos_328_, v_endPos_329_);
lean_dec(v_endPos_329_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprSemVerCore_repr_spec__0(lean_object* v_a_335_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = lean_nat_to_int(v_a_335_);
return v___x_336_;
}
}
static lean_object* _init_l_Lake_instReprSemVerCore_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(9u);
v___x_351_ = lean_nat_to_int(v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_l_Lake_instReprSemVerCore_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__0));
v___x_363_ = lean_string_length(v___x_362_);
return v___x_363_;
}
}
static lean_object* _init_l_Lake_instReprSemVerCore_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__15, &l_Lake_instReprSemVerCore_repr___redArg___closed__15_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__15);
v___x_365_ = lean_nat_to_int(v___x_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr___redArg(lean_object* v_x_370_){
_start:
{
lean_object* v_major_371_; lean_object* v_minor_372_; lean_object* v_patch_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v_major_371_ = lean_ctor_get(v_x_370_, 0);
lean_inc(v_major_371_);
v_minor_372_ = lean_ctor_get(v_x_370_, 1);
lean_inc(v_minor_372_);
v_patch_373_ = lean_ctor_get(v_x_370_, 2);
lean_inc(v_patch_373_);
lean_dec_ref(v_x_370_);
v___x_374_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__5));
v___x_375_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__6));
v___x_376_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__7, &l_Lake_instReprSemVerCore_repr___redArg___closed__7_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__7);
v___x_377_ = l_Nat_reprFast(v_major_371_);
v___x_378_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
v___x_379_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_376_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v___x_380_ = 0;
v___x_381_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_381_, 0, v___x_379_);
lean_ctor_set_uint8(v___x_381_, sizeof(void*)*1, v___x_380_);
v___x_382_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_375_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
v___x_383_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__9));
v___x_384_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_382_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
v___x_385_ = lean_box(1);
v___x_386_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__11));
v___x_388_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
lean_ctor_set(v___x_389_, 1, v___x_374_);
v___x_390_ = l_Nat_reprFast(v_minor_372_);
v___x_391_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
v___x_392_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_376_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set_uint8(v___x_393_, sizeof(void*)*1, v___x_380_);
v___x_394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_389_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
v___x_395_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v___x_383_);
v___x_396_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
lean_ctor_set(v___x_396_, 1, v___x_385_);
v___x_397_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__13));
v___x_398_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_396_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
v___x_399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
lean_ctor_set(v___x_399_, 1, v___x_374_);
v___x_400_ = l_Nat_reprFast(v_patch_373_);
v___x_401_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
v___x_402_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_402_, 0, v___x_376_);
lean_ctor_set(v___x_402_, 1, v___x_401_);
v___x_403_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_403_, 0, v___x_402_);
lean_ctor_set_uint8(v___x_403_, sizeof(void*)*1, v___x_380_);
v___x_404_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_399_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__16, &l_Lake_instReprSemVerCore_repr___redArg___closed__16_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__16);
v___x_406_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__17));
v___x_407_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
lean_ctor_set(v___x_407_, 1, v___x_404_);
v___x_408_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__18));
v___x_409_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_410_, 0, v___x_405_);
lean_ctor_set(v___x_410_, 1, v___x_409_);
v___x_411_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_411_, 0, v___x_410_);
lean_ctor_set_uint8(v___x_411_, sizeof(void*)*1, v___x_380_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr(lean_object* v_x_412_, lean_object* v_prec_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lake_instReprSemVerCore_repr___redArg(v_x_412_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprSemVerCore_repr___boxed(lean_object* v_x_415_, lean_object* v_prec_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lake_instReprSemVerCore_repr(v_x_415_, v_prec_416_);
lean_dec(v_prec_416_);
return v_res_417_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqSemVerCore_decEq(lean_object* v_x_420_, lean_object* v_x_421_){
_start:
{
lean_object* v_major_422_; lean_object* v_minor_423_; lean_object* v_patch_424_; lean_object* v_major_425_; lean_object* v_minor_426_; lean_object* v_patch_427_; uint8_t v___x_428_; 
v_major_422_ = lean_ctor_get(v_x_420_, 0);
v_minor_423_ = lean_ctor_get(v_x_420_, 1);
v_patch_424_ = lean_ctor_get(v_x_420_, 2);
v_major_425_ = lean_ctor_get(v_x_421_, 0);
v_minor_426_ = lean_ctor_get(v_x_421_, 1);
v_patch_427_ = lean_ctor_get(v_x_421_, 2);
v___x_428_ = lean_nat_dec_eq(v_major_422_, v_major_425_);
if (v___x_428_ == 0)
{
return v___x_428_;
}
else
{
uint8_t v___x_429_; 
v___x_429_ = lean_nat_dec_eq(v_minor_423_, v_minor_426_);
if (v___x_429_ == 0)
{
return v___x_429_;
}
else
{
uint8_t v___x_430_; 
v___x_430_ = lean_nat_dec_eq(v_patch_424_, v_patch_427_);
return v___x_430_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqSemVerCore_decEq___boxed(lean_object* v_x_431_, lean_object* v_x_432_){
_start:
{
uint8_t v_res_433_; lean_object* v_r_434_; 
v_res_433_ = l_Lake_instDecidableEqSemVerCore_decEq(v_x_431_, v_x_432_);
lean_dec_ref(v_x_432_);
lean_dec_ref(v_x_431_);
v_r_434_ = lean_box(v_res_433_);
return v_r_434_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqSemVerCore(lean_object* v_x_435_, lean_object* v_x_436_){
_start:
{
uint8_t v___x_437_; 
v___x_437_ = l_Lake_instDecidableEqSemVerCore_decEq(v_x_435_, v_x_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqSemVerCore___boxed(lean_object* v_x_438_, lean_object* v_x_439_){
_start:
{
uint8_t v_res_440_; lean_object* v_r_441_; 
v_res_440_ = l_Lake_instDecidableEqSemVerCore(v_x_438_, v_x_439_);
lean_dec_ref(v_x_439_);
lean_dec_ref(v_x_438_);
v_r_441_ = lean_box(v_res_440_);
return v_r_441_;
}
}
LEAN_EXPORT uint8_t l_Lake_instOrdSemVerCore_ord(lean_object* v_x_442_, lean_object* v_x_443_){
_start:
{
lean_object* v_major_444_; lean_object* v_minor_445_; lean_object* v_patch_446_; lean_object* v_major_447_; lean_object* v_minor_448_; lean_object* v_patch_449_; uint8_t v___x_450_; 
v_major_444_ = lean_ctor_get(v_x_442_, 0);
v_minor_445_ = lean_ctor_get(v_x_442_, 1);
v_patch_446_ = lean_ctor_get(v_x_442_, 2);
v_major_447_ = lean_ctor_get(v_x_443_, 0);
v_minor_448_ = lean_ctor_get(v_x_443_, 1);
v_patch_449_ = lean_ctor_get(v_x_443_, 2);
v___x_450_ = lean_nat_dec_lt(v_major_444_, v_major_447_);
if (v___x_450_ == 0)
{
uint8_t v___x_451_; 
v___x_451_ = lean_nat_dec_eq(v_major_444_, v_major_447_);
if (v___x_451_ == 0)
{
uint8_t v___x_452_; 
v___x_452_ = 2;
return v___x_452_;
}
else
{
uint8_t v___x_453_; 
v___x_453_ = lean_nat_dec_lt(v_minor_445_, v_minor_448_);
if (v___x_453_ == 0)
{
uint8_t v___x_454_; 
v___x_454_ = lean_nat_dec_eq(v_minor_445_, v_minor_448_);
if (v___x_454_ == 0)
{
uint8_t v___x_455_; 
v___x_455_ = 2;
return v___x_455_;
}
else
{
uint8_t v___x_456_; 
v___x_456_ = lean_nat_dec_lt(v_patch_446_, v_patch_449_);
if (v___x_456_ == 0)
{
uint8_t v___x_457_; 
v___x_457_ = lean_nat_dec_eq(v_patch_446_, v_patch_449_);
if (v___x_457_ == 0)
{
uint8_t v___x_458_; 
v___x_458_ = 2;
return v___x_458_;
}
else
{
uint8_t v___x_459_; 
v___x_459_ = 1;
return v___x_459_;
}
}
else
{
uint8_t v___x_460_; 
v___x_460_ = 0;
return v___x_460_;
}
}
}
else
{
uint8_t v___x_461_; 
v___x_461_ = 0;
return v___x_461_;
}
}
}
else
{
uint8_t v___x_462_; 
v___x_462_ = 0;
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instOrdSemVerCore_ord___boxed(lean_object* v_x_463_, lean_object* v_x_464_){
_start:
{
uint8_t v_res_465_; lean_object* v_r_466_; 
v_res_465_ = l_Lake_instOrdSemVerCore_ord(v_x_463_, v_x_464_);
lean_dec_ref(v_x_464_);
lean_dec_ref(v_x_463_);
v_r_466_ = lean_box(v_res_465_);
return v_r_466_;
}
}
static lean_object* _init_l_Lake_SemVerCore_instLT(void){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = lean_box(0);
return v___x_469_;
}
}
static lean_object* _init_l_Lake_SemVerCore_instLE(void){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = lean_box(0);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMin___lam__0(lean_object* v_x_471_, lean_object* v_y_472_){
_start:
{
uint8_t v___x_473_; 
v___x_473_ = l_Lake_instOrdSemVerCore_ord(v_x_471_, v_y_472_);
if (v___x_473_ == 2)
{
lean_inc_ref(v_y_472_);
return v_y_472_;
}
else
{
lean_inc_ref(v_x_471_);
return v_x_471_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMin___lam__0___boxed(lean_object* v_x_474_, lean_object* v_y_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Lake_SemVerCore_instMin___lam__0(v_x_474_, v_y_475_);
lean_dec_ref(v_y_475_);
lean_dec_ref(v_x_474_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMax___lam__0(lean_object* v_x_479_, lean_object* v_y_480_){
_start:
{
uint8_t v___x_481_; 
v___x_481_ = l_Lake_instOrdSemVerCore_ord(v_x_479_, v_y_480_);
if (v___x_481_ == 2)
{
lean_inc_ref(v_x_479_);
return v_x_479_;
}
else
{
lean_inc_ref(v_y_480_);
return v_y_480_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instMax___lam__0___boxed(lean_object* v_x_482_, lean_object* v_y_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lake_SemVerCore_instMax___lam__0(v_x_482_, v_y_483_);
lean_dec_ref(v_y_483_);
lean_dec_ref(v_x_482_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM(lean_object* v_s_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_a_496_; lean_object* v_a_497_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v_a_504_; lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_556_; 
v___x_501_ = lean_unsigned_to_nat(0u);
v___x_502_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0));
lean_inc(v_a_494_);
v___x_503_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_493_, v___x_502_, v_a_494_, v_a_494_);
v_a_504_ = lean_ctor_get(v___x_503_, 0);
v_a_505_ = lean_ctor_get(v___x_503_, 1);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_556_ == 0)
{
v___x_507_ = v___x_503_;
v_isShared_508_ = v_isSharedCheck_556_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_inc(v_a_504_);
lean_dec(v___x_503_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_556_;
goto v_resetjp_506_;
}
v___jp_495_:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__0));
v___x_499_ = lean_string_append(v___x_498_, v_a_496_);
lean_dec_ref(v_a_496_);
v___x_500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
lean_ctor_set(v___x_500_, 1, v_a_497_);
return v___x_500_;
}
v_resetjp_506_:
{
lean_object* v___x_509_; lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_509_ = lean_array_get_size(v_a_504_);
v___x_510_ = lean_unsigned_to_nat(3u);
v___x_511_ = lean_nat_dec_eq(v___x_509_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
lean_del_object(v___x_507_);
lean_dec(v_a_504_);
v___x_512_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__1));
v___x_513_ = l_Nat_reprFast(v___x_509_);
v___x_514_ = lean_string_append(v___x_512_, v___x_513_);
lean_dec_ref(v___x_513_);
v___x_515_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__2));
v___x_516_ = lean_string_append(v___x_514_, v___x_515_);
v_a_496_ = v___x_516_;
v_a_497_ = v_a_505_;
goto v___jp_495_;
}
else
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_array_fget_borrowed(v_a_504_, v___x_501_);
v___x_518_ = l_String_Slice_toNat_x3f(v___x_517_);
if (lean_obj_tag(v___x_518_) == 1)
{
lean_object* v_val_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v_val_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_val_519_);
lean_dec_ref_known(v___x_518_, 1);
v___x_520_ = lean_unsigned_to_nat(1u);
v___x_521_ = lean_array_fget_borrowed(v_a_504_, v___x_520_);
v___x_522_ = l_String_Slice_toNat_x3f(v___x_521_);
if (lean_obj_tag(v___x_522_) == 1)
{
lean_object* v_val_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v_val_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_val_523_);
lean_dec_ref_known(v___x_522_, 1);
v___x_524_ = lean_unsigned_to_nat(2u);
v___x_525_ = lean_array_fget(v_a_504_, v___x_524_);
lean_dec(v_a_504_);
v___x_526_ = l_String_Slice_toNat_x3f(v___x_525_);
if (lean_obj_tag(v___x_526_) == 1)
{
lean_object* v_val_527_; lean_object* v___x_528_; lean_object* v___x_530_; 
lean_dec(v___x_525_);
v_val_527_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_val_527_);
lean_dec_ref_known(v___x_526_, 1);
v___x_528_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_528_, 0, v_val_519_);
lean_ctor_set(v___x_528_, 1, v_val_523_);
lean_ctor_set(v___x_528_, 2, v_val_527_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v___x_528_);
v___x_530_ = v___x_507_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_a_505_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
else
{
lean_object* v_str_532_; lean_object* v_startInclusive_533_; lean_object* v_endExclusive_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
lean_dec(v___x_526_);
lean_dec(v_val_523_);
lean_dec(v_val_519_);
lean_del_object(v___x_507_);
v_str_532_ = lean_ctor_get(v___x_525_, 0);
lean_inc_ref(v_str_532_);
v_startInclusive_533_ = lean_ctor_get(v___x_525_, 1);
lean_inc(v_startInclusive_533_);
v_endExclusive_534_ = lean_ctor_get(v___x_525_, 2);
lean_inc(v_endExclusive_534_);
lean_dec(v___x_525_);
v___x_535_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3));
v___x_536_ = lean_string_utf8_extract_fast(v_str_532_, v_startInclusive_533_, v_endExclusive_534_);
lean_dec(v_endExclusive_534_);
lean_dec(v_startInclusive_533_);
lean_dec_ref(v_str_532_);
v___x_537_ = lean_string_append(v___x_535_, v___x_536_);
lean_dec_ref(v___x_536_);
v___x_538_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_539_ = lean_string_append(v___x_537_, v___x_538_);
v_a_496_ = v___x_539_;
v_a_497_ = v_a_505_;
goto v___jp_495_;
}
}
else
{
lean_object* v_str_540_; lean_object* v_startInclusive_541_; lean_object* v_endExclusive_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
lean_inc(v___x_521_);
lean_dec(v___x_522_);
lean_dec(v_val_519_);
lean_del_object(v___x_507_);
lean_dec(v_a_504_);
v_str_540_ = lean_ctor_get(v___x_521_, 0);
lean_inc_ref(v_str_540_);
v_startInclusive_541_ = lean_ctor_get(v___x_521_, 1);
lean_inc(v_startInclusive_541_);
v_endExclusive_542_ = lean_ctor_get(v___x_521_, 2);
lean_inc(v_endExclusive_542_);
lean_dec(v___x_521_);
v___x_543_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4));
v___x_544_ = lean_string_utf8_extract_fast(v_str_540_, v_startInclusive_541_, v_endExclusive_542_);
lean_dec(v_endExclusive_542_);
lean_dec(v_startInclusive_541_);
lean_dec_ref(v_str_540_);
v___x_545_ = lean_string_append(v___x_543_, v___x_544_);
lean_dec_ref(v___x_544_);
v___x_546_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_547_ = lean_string_append(v___x_545_, v___x_546_);
v_a_496_ = v___x_547_;
v_a_497_ = v_a_505_;
goto v___jp_495_;
}
}
else
{
lean_object* v_str_548_; lean_object* v_startInclusive_549_; lean_object* v_endExclusive_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
lean_inc(v___x_517_);
lean_dec(v___x_518_);
lean_del_object(v___x_507_);
lean_dec(v_a_504_);
v_str_548_ = lean_ctor_get(v___x_517_, 0);
lean_inc_ref(v_str_548_);
v_startInclusive_549_ = lean_ctor_get(v___x_517_, 1);
lean_inc(v_startInclusive_549_);
v_endExclusive_550_ = lean_ctor_get(v___x_517_, 2);
lean_inc(v_endExclusive_550_);
lean_dec(v___x_517_);
v___x_551_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_552_ = lean_string_utf8_extract_fast(v_str_548_, v_startInclusive_549_, v_endExclusive_550_);
lean_dec(v_endExclusive_550_);
lean_dec(v_startInclusive_549_);
lean_dec_ref(v_str_548_);
v___x_553_ = lean_string_append(v___x_551_, v___x_552_);
lean_dec_ref(v___x_552_);
v___x_554_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_555_ = lean_string_append(v___x_553_, v___x_554_);
v_a_496_ = v___x_555_;
v_a_497_ = v_a_505_;
goto v___jp_495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_parse(lean_object* v_s_557_){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_558_ = lean_unsigned_to_nat(0u);
v___x_559_ = lean_string_utf8_byte_size(v_s_557_);
lean_inc_ref(v_s_557_);
v___x_560_ = l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM(v_s_557_, v___x_558_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v_a_562_; uint8_t v_decide_563_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_561_);
v_a_562_ = lean_ctor_get(v___x_560_, 1);
lean_inc(v_a_562_);
lean_dec_ref_known(v___x_560_, 2);
v_decide_563_ = lean_nat_dec_eq(v_a_562_, v___x_559_);
if (v_decide_563_ == 0)
{
lean_object* v_tail_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
lean_dec(v_a_561_);
v_tail_564_ = lean_string_utf8_extract(v_s_557_, v_a_562_, v___x_559_);
lean_dec(v_a_562_);
lean_dec_ref(v_s_557_);
v___x_565_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_566_ = lean_string_append(v___x_565_, v_tail_564_);
lean_dec_ref(v_tail_564_);
v___x_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
return v___x_567_;
}
else
{
lean_object* v___x_568_; 
lean_dec(v_a_562_);
lean_dec_ref(v_s_557_);
v___x_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_568_, 0, v_a_561_);
return v___x_568_;
}
}
else
{
lean_object* v_a_569_; lean_object* v___x_570_; 
lean_dec_ref(v_s_557_);
v_a_569_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_560_, 2);
v___x_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_570_, 0, v_a_569_);
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_toString(lean_object* v_ver_572_){
_start:
{
lean_object* v_major_573_; lean_object* v_minor_574_; lean_object* v_patch_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v_major_573_ = lean_ctor_get(v_ver_572_, 0);
lean_inc(v_major_573_);
v_minor_574_ = lean_ctor_get(v_ver_572_, 1);
lean_inc(v_minor_574_);
v_patch_575_ = lean_ctor_get(v_ver_572_, 2);
lean_inc(v_patch_575_);
lean_dec_ref(v_ver_572_);
v___x_576_ = l_Nat_reprFast(v_major_573_);
v___x_577_ = ((lean_object*)(l_Lake_SemVerCore_toString___closed__0));
v___x_578_ = lean_string_append(v___x_576_, v___x_577_);
v___x_579_ = l_Nat_reprFast(v_minor_574_);
v___x_580_ = lean_string_append(v___x_578_, v___x_579_);
lean_dec_ref(v___x_579_);
v___x_581_ = lean_string_append(v___x_580_, v___x_577_);
v___x_582_ = l_Nat_reprFast(v_patch_575_);
v___x_583_ = lean_string_append(v___x_581_, v___x_582_);
lean_dec_ref(v___x_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instToJson___lam__0(lean_object* v_x_586_){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = l_Lake_SemVerCore_toString(v_x_586_);
v___x_588_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lake_SemVerCore_instFromJson___lam__0(lean_object* v_x_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = l_Lean_Json_getStr_x3f(v_x_591_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_593_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
else
{
lean_object* v_a_601_; lean_object* v___x_602_; 
v_a_601_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_601_);
lean_dec_ref_known(v___x_592_, 1);
v___x_602_ = l_Lake_SemVerCore_parse(v_a_601_);
return v___x_602_;
}
}
}
static lean_object* _init_l_Lake_instReprStdVer_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = lean_unsigned_to_nat(16u);
v___x_620_ = lean_nat_to_int(v___x_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr___redArg(lean_object* v_x_624_){
_start:
{
lean_object* v_toSemVerCore_625_; lean_object* v_specialDescr_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_659_; 
v_toSemVerCore_625_ = lean_ctor_get(v_x_624_, 0);
v_specialDescr_626_ = lean_ctor_get(v_x_624_, 1);
v_isSharedCheck_659_ = !lean_is_exclusive(v_x_624_);
if (v_isSharedCheck_659_ == 0)
{
v___x_628_ = v_x_624_;
v_isShared_629_ = v_isSharedCheck_659_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_specialDescr_626_);
lean_inc(v_toSemVerCore_625_);
lean_dec(v_x_624_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_659_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_635_; 
v___x_630_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__5));
v___x_631_ = ((lean_object*)(l_Lake_instReprStdVer_repr___redArg___closed__3));
v___x_632_ = lean_obj_once(&l_Lake_instReprStdVer_repr___redArg___closed__4, &l_Lake_instReprStdVer_repr___redArg___closed__4_once, _init_l_Lake_instReprStdVer_repr___redArg___closed__4);
v___x_633_ = l_Lake_instReprSemVerCore_repr___redArg(v_toSemVerCore_625_);
if (v_isShared_629_ == 0)
{
lean_ctor_set_tag(v___x_628_, 4);
lean_ctor_set(v___x_628_, 1, v___x_633_);
lean_ctor_set(v___x_628_, 0, v___x_632_);
v___x_635_ = v___x_628_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v___x_633_);
v___x_635_ = v_reuseFailAlloc_658_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
uint8_t v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_636_ = 0;
v___x_637_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set_uint8(v___x_637_, sizeof(void*)*1, v___x_636_);
v___x_638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_631_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__9));
v___x_640_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_638_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
v___x_641_ = lean_box(1);
v___x_642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_640_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = ((lean_object*)(l_Lake_instReprStdVer_repr___redArg___closed__6));
v___x_644_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_642_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
lean_ctor_set(v___x_645_, 1, v___x_630_);
v___x_646_ = l_String_quote(v_specialDescr_626_);
v___x_647_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
v___x_648_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_632_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
v___x_649_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_649_, 0, v___x_648_);
lean_ctor_set_uint8(v___x_649_, sizeof(void*)*1, v___x_636_);
v___x_650_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_645_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
v___x_651_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__16, &l_Lake_instReprSemVerCore_repr___redArg___closed__16_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__16);
v___x_652_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__17));
v___x_653_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
lean_ctor_set(v___x_653_, 1, v___x_650_);
v___x_654_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__18));
v___x_655_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_653_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
v___x_656_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_651_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
v___x_657_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_657_, 0, v___x_656_);
lean_ctor_set_uint8(v___x_657_, sizeof(void*)*1, v___x_636_);
return v___x_657_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr(lean_object* v_x_660_, lean_object* v_prec_661_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = l_Lake_instReprStdVer_repr___redArg(v_x_660_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprStdVer_repr___boxed(lean_object* v_x_663_, lean_object* v_prec_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lake_instReprStdVer_repr(v_x_663_, v_prec_664_);
lean_dec(v_prec_664_);
return v_res_665_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqStdVer_decEq(lean_object* v_x_668_, lean_object* v_x_669_){
_start:
{
lean_object* v_toSemVerCore_670_; lean_object* v_specialDescr_671_; lean_object* v_toSemVerCore_672_; lean_object* v_specialDescr_673_; uint8_t v___x_674_; 
v_toSemVerCore_670_ = lean_ctor_get(v_x_668_, 0);
v_specialDescr_671_ = lean_ctor_get(v_x_668_, 1);
v_toSemVerCore_672_ = lean_ctor_get(v_x_669_, 0);
v_specialDescr_673_ = lean_ctor_get(v_x_669_, 1);
v___x_674_ = l_Lake_instDecidableEqSemVerCore_decEq(v_toSemVerCore_670_, v_toSemVerCore_672_);
if (v___x_674_ == 0)
{
return v___x_674_;
}
else
{
uint8_t v___x_675_; 
v___x_675_ = lean_string_dec_eq(v_specialDescr_671_, v_specialDescr_673_);
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqStdVer_decEq___boxed(lean_object* v_x_676_, lean_object* v_x_677_){
_start:
{
uint8_t v_res_678_; lean_object* v_r_679_; 
v_res_678_ = l_Lake_instDecidableEqStdVer_decEq(v_x_676_, v_x_677_);
lean_dec_ref(v_x_677_);
lean_dec_ref(v_x_676_);
v_r_679_ = lean_box(v_res_678_);
return v_r_679_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqStdVer(lean_object* v_x_680_, lean_object* v_x_681_){
_start:
{
uint8_t v___x_682_; 
v___x_682_ = l_Lake_instDecidableEqStdVer_decEq(v_x_680_, v_x_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqStdVer___boxed(lean_object* v_x_683_, lean_object* v_x_684_){
_start:
{
uint8_t v_res_685_; lean_object* v_r_686_; 
v_res_685_ = l_Lake_instDecidableEqStdVer(v_x_683_, v_x_684_);
lean_dec_ref(v_x_684_);
lean_dec_ref(v_x_683_);
v_r_686_ = lean_box(v_res_685_);
return v_r_686_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instCoeSemVerCore___lam__0(lean_object* v_self_687_){
_start:
{
lean_object* v_toSemVerCore_688_; 
v_toSemVerCore_688_ = lean_ctor_get(v_self_687_, 0);
lean_inc_ref(v_toSemVerCore_688_);
return v_toSemVerCore_688_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instCoeSemVerCore___lam__0___boxed(lean_object* v_self_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lake_StdVer_instCoeSemVerCore___lam__0(v_self_689_);
lean_dec_ref(v_self_689_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_ofSemVerCore(lean_object* v_ver_693_){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v_ver_693_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
return v___x_695_;
}
}
LEAN_EXPORT uint8_t l_Lake_StdVer_compare(lean_object* v_a_698_, lean_object* v_b_699_){
_start:
{
lean_object* v_toSemVerCore_700_; lean_object* v_specialDescr_701_; lean_object* v_toSemVerCore_702_; lean_object* v_specialDescr_703_; uint8_t v___x_704_; 
v_toSemVerCore_700_ = lean_ctor_get(v_a_698_, 0);
v_specialDescr_701_ = lean_ctor_get(v_a_698_, 1);
v_toSemVerCore_702_ = lean_ctor_get(v_b_699_, 0);
v_specialDescr_703_ = lean_ctor_get(v_b_699_, 1);
v___x_704_ = l_Lake_instOrdSemVerCore_ord(v_toSemVerCore_700_, v_toSemVerCore_702_);
if (v___x_704_ == 1)
{
lean_object* v___x_705_; uint8_t v___x_706_; 
v___x_705_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___x_706_ = lean_string_dec_eq(v_specialDescr_701_, v___x_705_);
if (v___x_706_ == 0)
{
uint8_t v___x_707_; 
v___x_707_ = lean_string_dec_eq(v_specialDescr_703_, v___x_705_);
if (v___x_707_ == 0)
{
uint8_t v___x_708_; 
v___x_708_ = lean_string_compare(v_specialDescr_701_, v_specialDescr_703_);
return v___x_708_;
}
else
{
uint8_t v___x_709_; 
v___x_709_ = 0;
return v___x_709_;
}
}
else
{
uint8_t v___x_710_; 
v___x_710_ = lean_string_dec_eq(v_specialDescr_703_, v___x_705_);
if (v___x_710_ == 0)
{
uint8_t v___x_711_; 
v___x_711_ = 2;
return v___x_711_;
}
else
{
return v___x_704_;
}
}
}
else
{
return v___x_704_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_compare___boxed(lean_object* v_a_712_, lean_object* v_b_713_){
_start:
{
uint8_t v_res_714_; lean_object* v_r_715_; 
v_res_714_ = l_Lake_StdVer_compare(v_a_712_, v_b_713_);
lean_dec_ref(v_b_713_);
lean_dec_ref(v_a_712_);
v_r_715_ = lean_box(v_res_714_);
return v_r_715_;
}
}
static lean_object* _init_l_Lake_StdVer_instLT(void){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = lean_box(0);
return v___x_718_;
}
}
static lean_object* _init_l_Lake_StdVer_instLE(void){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = lean_box(0);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instMin___lam__0(lean_object* v_x_720_, lean_object* v_y_721_){
_start:
{
uint8_t v___x_722_; 
v___x_722_ = l_Lake_StdVer_compare(v_x_720_, v_y_721_);
if (v___x_722_ == 2)
{
lean_inc_ref(v_y_721_);
return v_y_721_;
}
else
{
lean_inc_ref(v_x_720_);
return v_x_720_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instMin___lam__0___boxed(lean_object* v_x_723_, lean_object* v_y_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lake_StdVer_instMin___lam__0(v_x_723_, v_y_724_);
lean_dec_ref(v_y_724_);
lean_dec_ref(v_x_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instMax___lam__0(lean_object* v_x_728_, lean_object* v_y_729_){
_start:
{
uint8_t v___x_730_; 
v___x_730_ = l_Lake_StdVer_compare(v_x_728_, v_y_729_);
if (v___x_730_ == 2)
{
lean_inc_ref(v_x_728_);
return v_x_728_;
}
else
{
lean_inc_ref(v_y_729_);
return v_y_729_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instMax___lam__0___boxed(lean_object* v_x_731_, lean_object* v_y_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lake_StdVer_instMax___lam__0(v_x_731_, v_y_732_);
lean_dec_ref(v_y_732_);
lean_dec_ref(v_x_731_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_parseM(lean_object* v_s_736_, lean_object* v_a_737_){
_start:
{
lean_object* v___x_738_; 
lean_inc_ref(v_s_736_);
v___x_738_ = l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM(v_s_736_, v_a_737_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; lean_object* v_a_740_; lean_object* v___x_741_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_739_);
v_a_740_ = lean_ctor_get(v___x_738_, 1);
lean_inc(v_a_740_);
lean_dec_ref_known(v___x_738_, 2);
v___x_741_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(v_s_736_, v_a_740_);
lean_dec_ref(v_s_736_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_751_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
v_a_743_ = lean_ctor_get(v___x_741_, 1);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_751_ == 0)
{
v___x_745_ = v___x_741_;
v_isShared_746_ = v_isSharedCheck_751_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_inc(v_a_742_);
lean_dec(v___x_741_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_751_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_747_; lean_object* v___x_749_; 
v___x_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_747_, 0, v_a_739_);
lean_ctor_set(v___x_747_, 1, v_a_742_);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 0, v___x_747_);
v___x_749_ = v___x_745_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_747_);
lean_ctor_set(v_reuseFailAlloc_750_, 1, v_a_743_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
else
{
lean_object* v_a_752_; lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec(v_a_739_);
v_a_752_ = lean_ctor_get(v___x_741_, 0);
v_a_753_ = lean_ctor_get(v___x_741_, 1);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_741_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_inc(v_a_752_);
lean_dec(v___x_741_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_752_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
else
{
lean_object* v_a_761_; lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_769_; 
lean_dec_ref(v_s_736_);
v_a_761_ = lean_ctor_get(v___x_738_, 0);
v_a_762_ = lean_ctor_get(v___x_738_, 1);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___x_738_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_inc(v_a_761_);
lean_dec(v___x_738_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_761_);
lean_ctor_set(v_reuseFailAlloc_768_, 1, v_a_762_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_parse(lean_object* v_s_770_){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_771_ = lean_unsigned_to_nat(0u);
v___x_772_ = lean_string_utf8_byte_size(v_s_770_);
lean_inc_ref(v_s_770_);
v___x_773_ = l_Lake_StdVer_parseM(v_s_770_, v___x_771_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v_a_775_; uint8_t v_decide_776_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
lean_inc(v_a_774_);
v_a_775_ = lean_ctor_get(v___x_773_, 1);
lean_inc(v_a_775_);
lean_dec_ref_known(v___x_773_, 2);
v_decide_776_ = lean_nat_dec_eq(v_a_775_, v___x_772_);
if (v_decide_776_ == 0)
{
lean_object* v_tail_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
lean_dec(v_a_774_);
v_tail_777_ = lean_string_utf8_extract(v_s_770_, v_a_775_, v___x_772_);
lean_dec(v_a_775_);
lean_dec_ref(v_s_770_);
v___x_778_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_779_ = lean_string_append(v___x_778_, v_tail_777_);
lean_dec_ref(v_tail_777_);
v___x_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
return v___x_780_;
}
else
{
lean_object* v___x_781_; 
lean_dec(v_a_775_);
lean_dec_ref(v_s_770_);
v___x_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_781_, 0, v_a_774_);
return v___x_781_;
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_783_; 
lean_dec_ref(v_s_770_);
v_a_782_ = lean_ctor_get(v___x_773_, 0);
lean_inc(v_a_782_);
lean_dec_ref_known(v___x_773_, 2);
v___x_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_783_, 0, v_a_782_);
return v___x_783_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_toString(lean_object* v_ver_785_){
_start:
{
lean_object* v_toSemVerCore_786_; lean_object* v_specialDescr_787_; lean_object* v___x_788_; lean_object* v___x_789_; uint8_t v___x_790_; 
v_toSemVerCore_786_ = lean_ctor_get(v_ver_785_, 0);
lean_inc_ref(v_toSemVerCore_786_);
v_specialDescr_787_ = lean_ctor_get(v_ver_785_, 1);
lean_inc_ref(v_specialDescr_787_);
lean_dec_ref(v_ver_785_);
v___x_788_ = lean_string_utf8_byte_size(v_specialDescr_787_);
v___x_789_ = lean_unsigned_to_nat(0u);
v___x_790_ = lean_nat_dec_eq(v___x_788_, v___x_789_);
if (v___x_790_ == 0)
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_791_ = l_Lake_SemVerCore_toString(v_toSemVerCore_786_);
v___x_792_ = ((lean_object*)(l_Lake_StdVer_toString___closed__0));
v___x_793_ = lean_string_append(v___x_791_, v___x_792_);
v___x_794_ = lean_string_append(v___x_793_, v_specialDescr_787_);
lean_dec_ref(v_specialDescr_787_);
return v___x_794_;
}
else
{
lean_object* v___x_795_; 
lean_dec_ref(v_specialDescr_787_);
v___x_795_ = l_Lake_SemVerCore_toString(v_toSemVerCore_786_);
return v___x_795_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instToJson___lam__0(lean_object* v_x_798_){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = l_Lake_StdVer_toString(v_x_798_);
v___x_800_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Lake_StdVer_instFromJson___lam__0(lean_object* v_x_803_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_Json_getStr_x3f(v_x_803_);
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
v_a_805_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_804_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_804_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
else
{
lean_object* v_a_813_; lean_object* v___x_814_; 
v_a_813_ = lean_ctor_get(v___x_804_, 0);
lean_inc(v_a_813_);
lean_dec_ref_known(v___x_804_, 1);
v___x_814_ = l_Lake_StdVer_parse(v_a_813_);
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorIdx(lean_object* v_x_823_){
_start:
{
switch(lean_obj_tag(v_x_823_))
{
case 0:
{
lean_object* v___x_824_; 
v___x_824_ = lean_unsigned_to_nat(0u);
return v___x_824_;
}
case 1:
{
lean_object* v___x_825_; 
v___x_825_ = lean_unsigned_to_nat(1u);
return v___x_825_;
}
case 2:
{
lean_object* v___x_826_; 
v___x_826_ = lean_unsigned_to_nat(2u);
return v___x_826_;
}
default: 
{
lean_object* v___x_827_; 
v___x_827_ = lean_unsigned_to_nat(3u);
return v___x_827_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorIdx___boxed(lean_object* v_x_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Lake_ToolchainVer_ctorIdx(v_x_828_);
lean_dec_ref(v_x_828_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim___redArg(lean_object* v_t_830_, lean_object* v_k_831_){
_start:
{
switch(lean_obj_tag(v_t_830_))
{
case 1:
{
lean_object* v_date_832_; lean_object* v_rev_833_; lean_object* v___x_834_; 
v_date_832_ = lean_ctor_get(v_t_830_, 0);
lean_inc_ref(v_date_832_);
v_rev_833_ = lean_ctor_get(v_t_830_, 1);
lean_inc(v_rev_833_);
lean_dec_ref_known(v_t_830_, 2);
v___x_834_ = lean_apply_2(v_k_831_, v_date_832_, v_rev_833_);
return v___x_834_;
}
case 2:
{
lean_object* v_n_835_; lean_object* v___x_836_; 
v_n_835_ = lean_ctor_get(v_t_830_, 0);
lean_inc(v_n_835_);
lean_dec_ref_known(v_t_830_, 1);
v___x_836_ = lean_apply_1(v_k_831_, v_n_835_);
return v___x_836_;
}
default: 
{
lean_object* v_ver_837_; lean_object* v___x_838_; 
v_ver_837_ = lean_ctor_get(v_t_830_, 0);
lean_inc_ref(v_ver_837_);
lean_dec_ref(v_t_830_);
v___x_838_ = lean_apply_1(v_k_831_, v_ver_837_);
return v___x_838_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim(lean_object* v_motive_839_, lean_object* v_ctorIdx_840_, lean_object* v_t_841_, lean_object* v_h_842_, lean_object* v_k_843_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_841_, v_k_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ctorElim___boxed(lean_object* v_motive_845_, lean_object* v_ctorIdx_846_, lean_object* v_t_847_, lean_object* v_h_848_, lean_object* v_k_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Lake_ToolchainVer_ctorElim(v_motive_845_, v_ctorIdx_846_, v_t_847_, v_h_848_, v_k_849_);
lean_dec(v_ctorIdx_846_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release_elim___redArg(lean_object* v_t_851_, lean_object* v_release_852_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_851_, v_release_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release_elim(lean_object* v_motive_854_, lean_object* v_t_855_, lean_object* v_h_856_, lean_object* v_release_857_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_855_, v_release_857_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly_elim___redArg(lean_object* v_t_859_, lean_object* v_nightly_860_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_859_, v_nightly_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly_elim(lean_object* v_motive_862_, lean_object* v_t_863_, lean_object* v_h_864_, lean_object* v_nightly_865_){
_start:
{
lean_object* v___x_866_; 
v___x_866_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_863_, v_nightly_865_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr_elim___redArg(lean_object* v_t_867_, lean_object* v_pr_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_867_, v_pr_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr_elim(lean_object* v_motive_870_, lean_object* v_t_871_, lean_object* v_h_872_, lean_object* v_pr_873_){
_start:
{
lean_object* v___x_874_; 
v___x_874_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_871_, v_pr_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other_elim___redArg(lean_object* v_t_875_, lean_object* v_other_876_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_875_, v_other_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other_elim(lean_object* v_motive_878_, lean_object* v_t_879_, lean_object* v_h_880_, lean_object* v_other_881_){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = l_Lake_ToolchainVer_ctorElim___redArg(v_t_879_, v_other_881_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override___redArg(lean_object* v_t_883_, lean_object* v_release_884_, lean_object* v_nightly_885_, lean_object* v_pr_886_, lean_object* v_other_887_){
_start:
{
lean_object* v___x_888_; 
v___x_888_ = l_unsafeCast___redArg(v_t_883_);
switch(lean_obj_tag(v___x_888_))
{
case 0:
{
lean_object* v_ver_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
lean_dec(v_other_887_);
lean_dec(v_pr_886_);
lean_dec(v_nightly_885_);
v_ver_889_ = lean_ctor_get(v___x_888_, 1);
lean_inc_ref(v_ver_889_);
lean_dec_ref_known(v___x_888_, 2);
v___x_890_ = lean_apply_1(v_release_884_, v_ver_889_);
v___x_891_ = l_unsafeCast___redArg(v___x_890_);
lean_dec(v___x_890_);
return v___x_891_;
}
case 1:
{
lean_object* v_date_892_; lean_object* v_rev_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
lean_dec(v_other_887_);
lean_dec(v_pr_886_);
lean_dec(v_release_884_);
v_date_892_ = lean_ctor_get(v___x_888_, 1);
lean_inc_ref(v_date_892_);
v_rev_893_ = lean_ctor_get(v___x_888_, 2);
lean_inc(v_rev_893_);
lean_dec_ref_known(v___x_888_, 3);
v___x_894_ = lean_apply_2(v_nightly_885_, v_date_892_, v_rev_893_);
v___x_895_ = l_unsafeCast___redArg(v___x_894_);
lean_dec(v___x_894_);
return v___x_895_;
}
case 2:
{
lean_object* v_n_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
lean_dec(v_other_887_);
lean_dec(v_nightly_885_);
lean_dec(v_release_884_);
v_n_896_ = lean_ctor_get(v___x_888_, 1);
lean_inc(v_n_896_);
lean_dec_ref_known(v___x_888_, 2);
v___x_897_ = lean_apply_1(v_pr_886_, v_n_896_);
v___x_898_ = l_unsafeCast___redArg(v___x_897_);
lean_dec(v___x_897_);
return v___x_898_;
}
default: 
{
lean_object* v_v_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
lean_dec(v_pr_886_);
lean_dec(v_nightly_885_);
lean_dec(v_release_884_);
v_v_899_ = lean_ctor_get(v___x_888_, 1);
lean_inc_ref(v_v_899_);
lean_dec_ref_known(v___x_888_, 2);
v___x_900_ = lean_apply_1(v_other_887_, v_v_899_);
v___x_901_ = l_unsafeCast___redArg(v___x_900_);
lean_dec(v___x_900_);
return v___x_901_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override___redArg___boxed(lean_object* v_t_902_, lean_object* v_release_903_, lean_object* v_nightly_904_, lean_object* v_pr_905_, lean_object* v_other_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Lake_ToolchainVer_casesOn___override___redArg(v_t_902_, v_release_903_, v_nightly_904_, v_pr_905_, v_other_906_);
lean_dec_ref(v_t_902_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override(lean_object* v_motive_908_, lean_object* v_t_909_, lean_object* v_release_910_, lean_object* v_nightly_911_, lean_object* v_pr_912_, lean_object* v_other_913_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_unsafeCast___redArg(v_t_909_);
switch(lean_obj_tag(v___x_914_))
{
case 0:
{
lean_object* v_ver_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
lean_dec(v_other_913_);
lean_dec(v_pr_912_);
lean_dec(v_nightly_911_);
v_ver_915_ = lean_ctor_get(v___x_914_, 1);
lean_inc_ref(v_ver_915_);
lean_dec_ref_known(v___x_914_, 2);
v___x_916_ = lean_apply_1(v_release_910_, v_ver_915_);
v___x_917_ = l_unsafeCast___redArg(v___x_916_);
lean_dec(v___x_916_);
return v___x_917_;
}
case 1:
{
lean_object* v_date_918_; lean_object* v_rev_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
lean_dec(v_other_913_);
lean_dec(v_pr_912_);
lean_dec(v_release_910_);
v_date_918_ = lean_ctor_get(v___x_914_, 1);
lean_inc_ref(v_date_918_);
v_rev_919_ = lean_ctor_get(v___x_914_, 2);
lean_inc(v_rev_919_);
lean_dec_ref_known(v___x_914_, 3);
v___x_920_ = lean_apply_2(v_nightly_911_, v_date_918_, v_rev_919_);
v___x_921_ = l_unsafeCast___redArg(v___x_920_);
lean_dec(v___x_920_);
return v___x_921_;
}
case 2:
{
lean_object* v_n_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
lean_dec(v_other_913_);
lean_dec(v_nightly_911_);
lean_dec(v_release_910_);
v_n_922_ = lean_ctor_get(v___x_914_, 1);
lean_inc(v_n_922_);
lean_dec_ref_known(v___x_914_, 2);
v___x_923_ = lean_apply_1(v_pr_912_, v_n_922_);
v___x_924_ = l_unsafeCast___redArg(v___x_923_);
lean_dec(v___x_923_);
return v___x_924_;
}
default: 
{
lean_object* v_v_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
lean_dec(v_pr_912_);
lean_dec(v_nightly_911_);
lean_dec(v_release_910_);
v_v_925_ = lean_ctor_get(v___x_914_, 1);
lean_inc_ref(v_v_925_);
lean_dec_ref_known(v___x_914_, 2);
v___x_926_ = lean_apply_1(v_other_913_, v_v_925_);
v___x_927_ = l_unsafeCast___redArg(v___x_926_);
lean_dec(v___x_926_);
return v___x_927_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_casesOn___override___boxed(lean_object* v_motive_928_, lean_object* v_t_929_, lean_object* v_release_930_, lean_object* v_nightly_931_, lean_object* v_pr_932_, lean_object* v_other_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lake_ToolchainVer_casesOn___override(v_motive_928_, v_t_929_, v_release_930_, v_nightly_931_, v_pr_932_, v_other_933_);
lean_dec_ref(v_t_929_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_release___override(lean_object* v_ver_936_){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_937_ = ((lean_object*)(l_Lake_ToolchainVer_release___override___closed__0));
lean_inc_ref(v_ver_936_);
v___x_938_ = l_Lake_StdVer_toString(v_ver_936_);
v___x_939_ = lean_string_append(v___x_937_, v___x_938_);
lean_dec_ref(v___x_938_);
v___x_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
lean_ctor_set(v___x_940_, 1, v_ver_936_);
v___x_941_ = l_unsafeCast___redArg(v___x_940_);
lean_dec_ref_known(v___x_940_, 2);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_nightly___override(lean_object* v_date_944_, lean_object* v_rev_945_){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___y_950_; 
v___x_946_ = ((lean_object*)(l_Lake_ToolchainVer_nightly___override___closed__0));
lean_inc_ref(v_date_944_);
v___x_947_ = l_Lake_Date_toString(v_date_944_);
v___x_948_ = lean_string_append(v___x_946_, v___x_947_);
lean_dec_ref(v___x_947_);
if (lean_obj_tag(v_rev_945_) == 0)
{
lean_object* v___x_954_; 
v___x_954_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___y_950_ = v___x_954_;
goto v___jp_949_;
}
else
{
lean_object* v_val_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v_val_955_ = lean_ctor_get(v_rev_945_, 0);
v___x_956_ = ((lean_object*)(l_Lake_ToolchainVer_nightly___override___closed__1));
lean_inc(v_val_955_);
v___x_957_ = l_Nat_reprFast(v_val_955_);
v___x_958_ = lean_string_append(v___x_956_, v___x_957_);
lean_dec_ref(v___x_957_);
v___y_950_ = v___x_958_;
goto v___jp_949_;
}
v___jp_949_:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_951_ = lean_string_append(v___x_948_, v___y_950_);
lean_dec_ref(v___y_950_);
v___x_952_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_952_, 0, v___x_951_);
lean_ctor_set(v___x_952_, 1, v_date_944_);
lean_ctor_set(v___x_952_, 2, v_rev_945_);
v___x_953_ = l_unsafeCast___redArg(v___x_952_);
lean_dec_ref_known(v___x_952_, 3);
return v___x_953_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_pr___override(lean_object* v_n_960_){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_961_ = ((lean_object*)(l_Lake_ToolchainVer_pr___override___closed__0));
lean_inc(v_n_960_);
v___x_962_ = l_Nat_reprFast(v_n_960_);
v___x_963_ = lean_string_append(v___x_961_, v___x_962_);
lean_dec_ref(v___x_962_);
v___x_964_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
lean_ctor_set(v___x_964_, 1, v_n_960_);
v___x_965_ = l_unsafeCast___redArg(v___x_964_);
lean_dec_ref_known(v___x_964_, 2);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_other___override(lean_object* v_v_966_){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_inc_ref(v_v_966_);
v___x_967_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_967_, 0, v_v_966_);
lean_ctor_set(v___x_967_, 1, v_v_966_);
v___x_968_ = l_unsafeCast___redArg(v___x_967_);
lean_dec_ref_known(v___x_967_, 2);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_toString___override(lean_object* v_x_969_){
_start:
{
lean_object* v___x_970_; lean_object* v_toString_971_; 
v___x_970_ = l_unsafeCast___redArg(v_x_969_);
v_toString_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc_ref(v_toString_971_);
lean_dec(v___x_970_);
return v_toString_971_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_toString___override___boxed(lean_object* v_x_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Lake_ToolchainVer_toString___override(v_x_972_);
lean_dec_ref(v_x_972_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0(lean_object* v_x_980_, lean_object* v_x_981_){
_start:
{
if (lean_obj_tag(v_x_980_) == 0)
{
lean_object* v___x_982_; 
v___x_982_ = ((lean_object*)(l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__1));
return v___x_982_;
}
else
{
lean_object* v_val_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_994_; 
v_val_983_ = lean_ctor_get(v_x_980_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v_x_980_);
if (v_isSharedCheck_994_ == 0)
{
v___x_985_ = v_x_980_;
v_isShared_986_ = v_isSharedCheck_994_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_val_983_);
lean_dec(v_x_980_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_994_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_990_; 
v___x_987_ = ((lean_object*)(l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___closed__3));
v___x_988_ = l_Nat_reprFast(v_val_983_);
if (v_isShared_986_ == 0)
{
lean_ctor_set_tag(v___x_985_, 3);
lean_ctor_set(v___x_985_, 0, v___x_988_);
v___x_990_ = v___x_985_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_988_);
v___x_990_ = v_reuseFailAlloc_993_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_987_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = l_Repr_addAppParen(v___x_991_, v_x_981_);
return v___x_992_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0___boxed(lean_object* v_x_995_, lean_object* v_x_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0(v_x_995_, v_x_996_);
lean_dec(v_x_996_);
return v_res_997_;
}
}
static lean_object* _init_l_Lake_instReprToolchainVer_repr___closed__3(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_unsigned_to_nat(2u);
v___x_1005_ = lean_nat_to_int(v___x_1004_);
return v___x_1005_;
}
}
static lean_object* _init_l_Lake_instReprToolchainVer_repr___closed__4(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = lean_unsigned_to_nat(1u);
v___x_1007_ = lean_nat_to_int(v___x_1006_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprToolchainVer_repr(lean_object* v_x_1026_, lean_object* v_prec_1027_){
_start:
{
switch(lean_obj_tag(v_x_1026_))
{
case 0:
{
lean_object* v_ver_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1047_; 
v_ver_1028_ = lean_ctor_get(v_x_1026_, 1);
v_isSharedCheck_1047_ = !lean_is_exclusive(v_x_1026_);
if (v_isSharedCheck_1047_ == 0)
{
lean_object* v_unused_1048_; 
v_unused_1048_ = lean_ctor_get(v_x_1026_, 0);
lean_dec(v_unused_1048_);
v___x_1030_ = v_x_1026_;
v_isShared_1031_ = v_isSharedCheck_1047_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_ver_1028_);
lean_dec(v_x_1026_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1047_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___y_1033_; lean_object* v___x_1043_; uint8_t v___x_1044_; 
v___x_1043_ = lean_unsigned_to_nat(1024u);
v___x_1044_ = lean_nat_dec_le(v___x_1043_, v_prec_1027_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; 
v___x_1045_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1033_ = v___x_1045_;
goto v___jp_1032_;
}
else
{
lean_object* v___x_1046_; 
v___x_1046_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1033_ = v___x_1046_;
goto v___jp_1032_;
}
v___jp_1032_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1037_; 
v___x_1034_ = ((lean_object*)(l_Lake_instReprToolchainVer_repr___closed__2));
v___x_1035_ = l_Lake_instReprStdVer_repr___redArg(v_ver_1028_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set_tag(v___x_1030_, 5);
lean_ctor_set(v___x_1030_, 1, v___x_1035_);
lean_ctor_set(v___x_1030_, 0, v___x_1034_);
v___x_1037_ = v___x_1030_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_1034_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v___x_1035_);
v___x_1037_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_object* v___x_1038_; uint8_t v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
lean_inc(v___y_1033_);
v___x_1038_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___y_1033_);
lean_ctor_set(v___x_1038_, 1, v___x_1037_);
v___x_1039_ = 0;
v___x_1040_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1040_, 0, v___x_1038_);
lean_ctor_set_uint8(v___x_1040_, sizeof(void*)*1, v___x_1039_);
v___x_1041_ = l_Repr_addAppParen(v___x_1040_, v_prec_1027_);
return v___x_1041_;
}
}
}
}
case 1:
{
lean_object* v_date_1049_; lean_object* v_rev_1050_; lean_object* v___y_1052_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
v_date_1049_ = lean_ctor_get(v_x_1026_, 1);
lean_inc_ref(v_date_1049_);
v_rev_1050_ = lean_ctor_get(v_x_1026_, 2);
lean_inc(v_rev_1050_);
lean_dec_ref_known(v_x_1026_, 3);
v___x_1065_ = lean_unsigned_to_nat(1024u);
v___x_1066_ = lean_nat_dec_le(v___x_1065_, v_prec_1027_);
if (v___x_1066_ == 0)
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1052_ = v___x_1067_;
goto v___jp_1051_;
}
else
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1052_ = v___x_1068_;
goto v___jp_1051_;
}
v___jp_1051_:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; uint8_t v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1053_ = lean_box(1);
v___x_1054_ = ((lean_object*)(l_Lake_instReprToolchainVer_repr___closed__7));
v___x_1055_ = lean_unsigned_to_nat(1024u);
v___x_1056_ = l_Lake_instReprDate_repr___redArg(v_date_1049_);
v___x_1057_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1054_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
lean_ctor_set(v___x_1058_, 1, v___x_1053_);
v___x_1059_ = l_Option_repr___at___00Lake_instReprToolchainVer_repr_spec__0(v_rev_1050_, v___x_1055_);
v___x_1060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1058_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
lean_inc(v___y_1052_);
v___x_1061_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___y_1052_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
v___x_1062_ = 0;
v___x_1063_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1063_, 0, v___x_1061_);
lean_ctor_set_uint8(v___x_1063_, sizeof(void*)*1, v___x_1062_);
v___x_1064_ = l_Repr_addAppParen(v___x_1063_, v_prec_1027_);
return v___x_1064_;
}
}
case 2:
{
lean_object* v_n_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1089_; 
v_n_1069_ = lean_ctor_get(v_x_1026_, 1);
v_isSharedCheck_1089_ = !lean_is_exclusive(v_x_1026_);
if (v_isSharedCheck_1089_ == 0)
{
lean_object* v_unused_1090_; 
v_unused_1090_ = lean_ctor_get(v_x_1026_, 0);
lean_dec(v_unused_1090_);
v___x_1071_ = v_x_1026_;
v_isShared_1072_ = v_isSharedCheck_1089_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_n_1069_);
lean_dec(v_x_1026_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1089_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___y_1074_; lean_object* v___x_1085_; uint8_t v___x_1086_; 
v___x_1085_ = lean_unsigned_to_nat(1024u);
v___x_1086_ = lean_nat_dec_le(v___x_1085_, v_prec_1027_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; 
v___x_1087_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1074_ = v___x_1087_;
goto v___jp_1073_;
}
else
{
lean_object* v___x_1088_; 
v___x_1088_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1074_ = v___x_1088_;
goto v___jp_1073_;
}
v___jp_1073_:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1079_; 
v___x_1075_ = ((lean_object*)(l_Lake_instReprToolchainVer_repr___closed__10));
v___x_1076_ = l_Nat_reprFast(v_n_1069_);
v___x_1077_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1076_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set_tag(v___x_1071_, 5);
lean_ctor_set(v___x_1071_, 1, v___x_1077_);
lean_ctor_set(v___x_1071_, 0, v___x_1075_);
v___x_1079_ = v___x_1071_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v___x_1077_);
v___x_1079_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
lean_object* v___x_1080_; uint8_t v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
lean_inc(v___y_1074_);
v___x_1080_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___y_1074_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = 0;
v___x_1082_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1082_, 0, v___x_1080_);
lean_ctor_set_uint8(v___x_1082_, sizeof(void*)*1, v___x_1081_);
v___x_1083_ = l_Repr_addAppParen(v___x_1082_, v_prec_1027_);
return v___x_1083_;
}
}
}
}
default: 
{
lean_object* v_v_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1111_; 
v_v_1091_ = lean_ctor_get(v_x_1026_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v_x_1026_);
if (v_isSharedCheck_1111_ == 0)
{
lean_object* v_unused_1112_; 
v_unused_1112_ = lean_ctor_get(v_x_1026_, 0);
lean_dec(v_unused_1112_);
v___x_1093_ = v_x_1026_;
v_isShared_1094_ = v_isSharedCheck_1111_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_v_1091_);
lean_dec(v_x_1026_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1111_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___y_1096_; lean_object* v___x_1107_; uint8_t v___x_1108_; 
v___x_1107_ = lean_unsigned_to_nat(1024u);
v___x_1108_ = lean_nat_dec_le(v___x_1107_, v_prec_1027_);
if (v___x_1108_ == 0)
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1096_ = v___x_1109_;
goto v___jp_1095_;
}
else
{
lean_object* v___x_1110_; 
v___x_1110_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1096_ = v___x_1110_;
goto v___jp_1095_;
}
v___jp_1095_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1101_; 
v___x_1097_ = ((lean_object*)(l_Lake_instReprToolchainVer_repr___closed__13));
v___x_1098_ = l_String_quote(v_v_1091_);
v___x_1099_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1098_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set_tag(v___x_1093_, 5);
lean_ctor_set(v___x_1093_, 1, v___x_1099_);
lean_ctor_set(v___x_1093_, 0, v___x_1097_);
v___x_1101_ = v___x_1093_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v___x_1097_);
lean_ctor_set(v_reuseFailAlloc_1106_, 1, v___x_1099_);
v___x_1101_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
lean_object* v___x_1102_; uint8_t v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
lean_inc(v___y_1096_);
v___x_1102_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___y_1096_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = 0;
v___x_1104_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1104_, 0, v___x_1102_);
lean_ctor_set_uint8(v___x_1104_, sizeof(void*)*1, v___x_1103_);
v___x_1105_ = l_Repr_addAppParen(v___x_1104_, v_prec_1027_);
return v___x_1105_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprToolchainVer_repr___boxed(lean_object* v_x_1113_, lean_object* v_prec_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Lake_instReprToolchainVer_repr(v_x_1113_, v_prec_1114_);
lean_dec(v_prec_1114_);
return v_res_1115_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqToolchainVer_decEq(lean_object* v_x_1118_, lean_object* v_x_1119_){
_start:
{
switch(lean_obj_tag(v_x_1118_))
{
case 0:
{
if (lean_obj_tag(v_x_1119_) == 0)
{
lean_object* v_ver_1120_; lean_object* v_ver_1121_; uint8_t v___x_1122_; 
v_ver_1120_ = lean_ctor_get(v_x_1118_, 1);
lean_inc_ref(v_ver_1120_);
lean_dec_ref_known(v_x_1118_, 2);
v_ver_1121_ = lean_ctor_get(v_x_1119_, 1);
lean_inc_ref(v_ver_1121_);
lean_dec_ref_known(v_x_1119_, 2);
v___x_1122_ = l_Lake_instDecidableEqStdVer_decEq(v_ver_1120_, v_ver_1121_);
lean_dec_ref(v_ver_1121_);
lean_dec_ref(v_ver_1120_);
return v___x_1122_;
}
else
{
uint8_t v___x_1123_; 
lean_dec_ref_known(v_x_1118_, 2);
lean_dec_ref(v_x_1119_);
v___x_1123_ = 0;
return v___x_1123_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1119_) == 1)
{
lean_object* v_date_1124_; lean_object* v_rev_1125_; lean_object* v_date_1126_; lean_object* v_rev_1127_; uint8_t v___x_1128_; 
v_date_1124_ = lean_ctor_get(v_x_1118_, 1);
lean_inc_ref(v_date_1124_);
v_rev_1125_ = lean_ctor_get(v_x_1118_, 2);
lean_inc(v_rev_1125_);
lean_dec_ref_known(v_x_1118_, 3);
v_date_1126_ = lean_ctor_get(v_x_1119_, 1);
lean_inc_ref(v_date_1126_);
v_rev_1127_ = lean_ctor_get(v_x_1119_, 2);
lean_inc(v_rev_1127_);
lean_dec_ref_known(v_x_1119_, 3);
v___x_1128_ = l_Lake_instDecidableEqDate_decEq(v_date_1124_, v_date_1126_);
lean_dec_ref(v_date_1126_);
lean_dec_ref(v_date_1124_);
if (v___x_1128_ == 0)
{
lean_dec(v_rev_1127_);
lean_dec(v_rev_1125_);
return v___x_1128_;
}
else
{
lean_object* v___x_1129_; uint8_t v___x_1130_; 
v___x_1129_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_1130_ = l_Option_instDecidableEq___redArg(v___x_1129_, v_rev_1125_, v_rev_1127_);
return v___x_1130_;
}
}
else
{
uint8_t v___x_1131_; 
lean_dec_ref_known(v_x_1118_, 3);
lean_dec_ref(v_x_1119_);
v___x_1131_ = 0;
return v___x_1131_;
}
}
case 2:
{
if (lean_obj_tag(v_x_1119_) == 2)
{
lean_object* v_n_1132_; lean_object* v_n_1133_; uint8_t v___x_1134_; 
v_n_1132_ = lean_ctor_get(v_x_1118_, 1);
lean_inc(v_n_1132_);
lean_dec_ref_known(v_x_1118_, 2);
v_n_1133_ = lean_ctor_get(v_x_1119_, 1);
lean_inc(v_n_1133_);
lean_dec_ref_known(v_x_1119_, 2);
v___x_1134_ = lean_nat_dec_eq(v_n_1132_, v_n_1133_);
lean_dec(v_n_1133_);
lean_dec(v_n_1132_);
return v___x_1134_;
}
else
{
uint8_t v___x_1135_; 
lean_dec_ref_known(v_x_1118_, 2);
lean_dec_ref(v_x_1119_);
v___x_1135_ = 0;
return v___x_1135_;
}
}
default: 
{
if (lean_obj_tag(v_x_1119_) == 3)
{
lean_object* v_v_1136_; lean_object* v_v_1137_; uint8_t v___x_1138_; 
v_v_1136_ = lean_ctor_get(v_x_1118_, 1);
lean_inc_ref(v_v_1136_);
lean_dec_ref_known(v_x_1118_, 2);
v_v_1137_ = lean_ctor_get(v_x_1119_, 1);
lean_inc_ref(v_v_1137_);
lean_dec_ref_known(v_x_1119_, 2);
v___x_1138_ = lean_string_dec_eq(v_v_1136_, v_v_1137_);
lean_dec_ref(v_v_1137_);
lean_dec_ref(v_v_1136_);
return v___x_1138_;
}
else
{
uint8_t v___x_1139_; 
lean_dec_ref_known(v_x_1118_, 2);
lean_dec_ref(v_x_1119_);
v___x_1139_ = 0;
return v___x_1139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqToolchainVer_decEq___boxed(lean_object* v_x_1140_, lean_object* v_x_1141_){
_start:
{
uint8_t v_res_1142_; lean_object* v_r_1143_; 
v_res_1142_ = l_Lake_instDecidableEqToolchainVer_decEq(v_x_1140_, v_x_1141_);
v_r_1143_ = lean_box(v_res_1142_);
return v_r_1143_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqToolchainVer(lean_object* v_x_1144_, lean_object* v_x_1145_){
_start:
{
uint8_t v___x_1146_; 
v___x_1146_ = l_Lake_instDecidableEqToolchainVer_decEq(v_x_1144_, v_x_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqToolchainVer___boxed(lean_object* v_x_1147_, lean_object* v_x_1148_){
_start:
{
uint8_t v_res_1149_; lean_object* v_r_1150_; 
v_res_1149_ = l_Lake_instDecidableEqToolchainVer(v_x_1147_, v_x_1148_);
v_r_1150_ = lean_box(v_res_1149_);
return v_r_1150_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__0));
v___x_1155_ = lean_string_utf8_byte_size(v___x_1154_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg(lean_object* v_s_1156_){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1157_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__0));
v___x_1158_ = lean_string_utf8_byte_size(v_s_1156_);
v___x_1159_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__1, &l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg___closed__1);
v___x_1160_ = lean_nat_dec_le(v___x_1159_, v___x_1158_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; 
lean_dec_ref(v_s_1156_);
v___x_1161_ = lean_box(0);
return v___x_1161_;
}
else
{
lean_object* v___x_1162_; uint8_t v___x_1163_; 
v___x_1162_ = lean_unsigned_to_nat(0u);
v___x_1163_ = lean_string_memcmp(v_s_1156_, v___x_1157_, v___x_1162_, v___x_1162_, v___x_1159_);
if (v___x_1163_ == 0)
{
lean_object* v___x_1164_; 
lean_dec_ref(v_s_1156_);
v___x_1164_ = lean_box(0);
return v___x_1164_;
}
else
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
lean_inc_ref(v_s_1156_);
v___x_1165_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1165_, 0, v_s_1156_);
lean_ctor_set(v___x_1165_, 1, v___x_1162_);
lean_ctor_set(v___x_1165_, 2, v___x_1158_);
v___x_1166_ = l_String_Slice_pos_x21(v___x_1165_, v___x_1159_);
lean_dec_ref_known(v___x_1165_, 3);
v___x_1167_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1167_, 0, v_s_1156_);
lean_ctor_set(v___x_1167_, 1, v___x_1166_);
lean_ctor_set(v___x_1167_, 2, v___x_1158_);
v___x_1168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
return v___x_1168_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0(lean_object* v_s_1169_, lean_object* v_pat_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg(v_s_1169_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___boxed(lean_object* v_s_1172_, lean_object* v_pat_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0(v_s_1172_, v_pat_1173_);
lean_dec_ref(v_pat_1173_);
return v_res_1174_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = ((lean_object*)(l_Lake_ToolchainVer_defaultOrigin___closed__0));
v___x_1176_ = lean_string_utf8_byte_size(v___x_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg(lean_object* v_s_1177_){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; uint8_t v___x_1181_; 
v___x_1178_ = ((lean_object*)(l_Lake_ToolchainVer_defaultOrigin___closed__0));
v___x_1179_ = lean_string_utf8_byte_size(v_s_1177_);
v___x_1180_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg___closed__0, &l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg___closed__0_once, _init_l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg___closed__0);
v___x_1181_ = lean_nat_dec_le(v___x_1180_, v___x_1179_);
if (v___x_1181_ == 0)
{
lean_object* v___x_1182_; 
lean_dec_ref(v_s_1177_);
v___x_1182_ = lean_box(0);
return v___x_1182_;
}
else
{
lean_object* v___x_1183_; uint8_t v___x_1184_; 
v___x_1183_ = lean_unsigned_to_nat(0u);
v___x_1184_ = lean_string_memcmp(v_s_1177_, v___x_1178_, v___x_1183_, v___x_1183_, v___x_1180_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; 
lean_dec_ref(v_s_1177_);
v___x_1185_ = lean_box(0);
return v___x_1185_;
}
else
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
lean_inc_ref(v_s_1177_);
v___x_1186_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1186_, 0, v_s_1177_);
lean_ctor_set(v___x_1186_, 1, v___x_1183_);
lean_ctor_set(v___x_1186_, 2, v___x_1179_);
v___x_1187_ = l_String_Slice_pos_x21(v___x_1186_, v___x_1180_);
lean_dec_ref_known(v___x_1186_, 3);
v___x_1188_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1188_, 0, v_s_1177_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
lean_ctor_set(v___x_1188_, 2, v___x_1179_);
v___x_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1188_);
return v___x_1189_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1(lean_object* v_s_1190_, lean_object* v_pat_1191_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg(v_s_1190_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___boxed(lean_object* v_s_1193_, lean_object* v_pat_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1(v_s_1193_, v_pat_1194_);
lean_dec_ref(v_pat_1194_);
return v_res_1195_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__0));
v___x_1198_ = lean_string_utf8_byte_size(v___x_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg(lean_object* v_s_1199_){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; uint8_t v___x_1203_; 
v___x_1200_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__0));
v___x_1201_ = lean_string_utf8_byte_size(v_s_1199_);
v___x_1202_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__1, &l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg___closed__1);
v___x_1203_ = lean_nat_dec_le(v___x_1202_, v___x_1201_);
if (v___x_1203_ == 0)
{
lean_object* v___x_1204_; 
lean_dec_ref(v_s_1199_);
v___x_1204_ = lean_box(0);
return v___x_1204_;
}
else
{
lean_object* v___x_1205_; uint8_t v___x_1206_; 
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = lean_string_memcmp(v_s_1199_, v___x_1200_, v___x_1205_, v___x_1205_, v___x_1202_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; 
lean_dec_ref(v_s_1199_);
v___x_1207_ = lean_box(0);
return v___x_1207_;
}
else
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
lean_inc_ref(v_s_1199_);
v___x_1208_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1208_, 0, v_s_1199_);
lean_ctor_set(v___x_1208_, 1, v___x_1205_);
lean_ctor_set(v___x_1208_, 2, v___x_1201_);
v___x_1209_ = l_String_Slice_pos_x21(v___x_1208_, v___x_1202_);
lean_dec_ref_known(v___x_1208_, 3);
v___x_1210_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1210_, 0, v_s_1199_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
lean_ctor_set(v___x_1210_, 2, v___x_1201_);
v___x_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1210_);
return v___x_1211_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3(lean_object* v_s_1212_, lean_object* v_pat_1213_){
_start:
{
lean_object* v___x_1214_; 
v___x_1214_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg(v_s_1212_);
return v___x_1214_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___boxed(lean_object* v_s_1215_, lean_object* v_pat_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3(v_s_1215_, v_pat_1216_);
lean_dec_ref(v_pat_1216_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg(lean_object* v___x_1218_, lean_object* v_ver_1219_, lean_object* v_a_1220_, lean_object* v_b_1221_){
_start:
{
uint8_t v_decide_1222_; 
v_decide_1222_ = lean_nat_dec_eq(v_a_1220_, v___x_1218_);
if (v_decide_1222_ == 0)
{
uint32_t v___x_1223_; uint32_t v___x_1224_; uint8_t v___x_1225_; 
v___x_1223_ = lean_string_utf8_get_fast(v_ver_1219_, v_a_1220_);
v___x_1224_ = 58;
v___x_1225_ = lean_uint32_dec_eq(v___x_1223_, v___x_1224_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = lean_box(0);
v___x_1227_ = lean_string_utf8_next_fast(v_ver_1219_, v_a_1220_);
lean_dec(v_a_1220_);
v_a_1220_ = v___x_1227_;
v_b_1221_ = v___x_1226_;
goto _start;
}
else
{
lean_object* v___x_1229_; 
v___x_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1229_, 0, v_a_1220_);
return v___x_1229_;
}
}
else
{
lean_dec(v_a_1220_);
lean_inc(v_b_1221_);
return v_b_1221_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg___boxed(lean_object* v___x_1230_, lean_object* v_ver_1231_, lean_object* v_a_1232_, lean_object* v_b_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg(v___x_1230_, v_ver_1231_, v_a_1232_, v_b_1233_);
lean_dec(v_b_1233_);
lean_dec_ref(v_ver_1231_);
lean_dec(v___x_1230_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg(lean_object* v___x_1235_, lean_object* v_rest_1236_, lean_object* v_a_1237_, lean_object* v_b_1238_){
_start:
{
uint8_t v_decide_1239_; 
v_decide_1239_ = lean_nat_dec_eq(v_a_1237_, v___x_1235_);
if (v_decide_1239_ == 0)
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1240_ = lean_string_utf8_next_fast(v_rest_1236_, v_a_1237_);
lean_dec(v_a_1237_);
v___x_1241_ = lean_unsigned_to_nat(1u);
v___x_1242_ = lean_nat_add(v_b_1238_, v___x_1241_);
lean_dec(v_b_1238_);
v_a_1237_ = v___x_1240_;
v_b_1238_ = v___x_1242_;
goto _start;
}
else
{
lean_dec(v_a_1237_);
return v_b_1238_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg___boxed(lean_object* v___x_1244_, lean_object* v_rest_1245_, lean_object* v_a_1246_, lean_object* v_b_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg(v___x_1244_, v_rest_1245_, v_a_1246_, v_b_1247_);
lean_dec_ref(v_rest_1245_);
lean_dec(v___x_1244_);
return v_res_1248_;
}
}
static lean_object* _init_l_Lake_ToolchainVer_ofString___closed__1(void){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = ((lean_object*)(l_Lake_ToolchainVer_ofString___closed__0));
v___x_1251_ = lean_string_utf8_byte_size(v___x_1250_);
return v___x_1251_;
}
}
static lean_object* _init_l_Lake_ToolchainVer_ofString___closed__2(void){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = ((lean_object*)(l_Lake_ToolchainVer_nightly___override___closed__1));
v___x_1253_ = lean_string_utf8_byte_size(v___x_1252_);
return v___x_1253_;
}
}
static lean_object* _init_l_Lake_ToolchainVer_ofString___closed__4(void){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1255_ = ((lean_object*)(l_Lake_ToolchainVer_ofString___closed__3));
v___x_1256_ = lean_string_utf8_byte_size(v___x_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofString(lean_object* v_ver_1257_){
_start:
{
lean_object* v___y_1259_; lean_object* v___y_1260_; uint8_t v___y_1261_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1280_; lean_object* v___y_1281_; lean_object* v___y_1282_; lean_object* v___y_1283_; lean_object* v___y_1284_; uint8_t v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___y_1294_; lean_object* v___y_1295_; lean_object* v___y_1296_; lean_object* v___y_1297_; lean_object* v___y_1298_; uint8_t v___y_1299_; lean_object* v___y_1300_; lean_object* v___y_1301_; lean_object* v___y_1304_; uint8_t v___y_1305_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v_fst_1354_; lean_object* v_snd_1355_; lean_object* v___y_1378_; lean_object* v_searcher_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v_searcher_1386_ = lean_unsigned_to_nat(0u);
v___x_1387_ = lean_string_utf8_byte_size(v_ver_1257_);
v___x_1388_ = lean_box(0);
v___x_1389_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg(v___x_1387_, v_ver_1257_, v_searcher_1386_, v___x_1388_);
if (lean_obj_tag(v___x_1389_) == 0)
{
v___y_1378_ = v___x_1387_;
goto v___jp_1377_;
}
else
{
lean_object* v_val_1390_; 
v_val_1390_ = lean_ctor_get(v___x_1389_, 0);
lean_inc(v_val_1390_);
lean_dec_ref_known(v___x_1389_, 1);
v___y_1378_ = v_val_1390_;
goto v___jp_1377_;
}
v___jp_1258_:
{
if (v___y_1261_ == 0)
{
lean_object* v___x_1264_; 
v___x_1264_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__1___redArg(v___y_1263_);
if (lean_obj_tag(v___x_1264_) == 1)
{
lean_object* v_val_1265_; lean_object* v_startInclusive_1266_; lean_object* v_endExclusive_1267_; lean_object* v___x_1268_; uint8_t v___x_1269_; 
v_val_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_val_1265_);
lean_dec_ref_known(v___x_1264_, 1);
v_startInclusive_1266_ = lean_ctor_get(v_val_1265_, 1);
v_endExclusive_1267_ = lean_ctor_get(v_val_1265_, 2);
v___x_1268_ = lean_nat_sub(v_endExclusive_1267_, v_startInclusive_1266_);
v___x_1269_ = lean_nat_dec_eq(v___x_1268_, v___y_1260_);
lean_dec(v___x_1268_);
if (v___x_1269_ == 0)
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; uint8_t v___x_1273_; 
v___x_1270_ = ((lean_object*)(l_Lake_ToolchainVer_ofString___closed__0));
v___x_1271_ = lean_obj_once(&l_Lake_ToolchainVer_ofString___closed__1, &l_Lake_ToolchainVer_ofString___closed__1_once, _init_l_Lake_ToolchainVer_ofString___closed__1);
v___x_1272_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1270_);
lean_ctor_set(v___x_1272_, 1, v___y_1260_);
lean_ctor_set(v___x_1272_, 2, v___x_1271_);
v___x_1273_ = l_String_Slice_beq(v_val_1265_, v___x_1272_);
lean_dec_ref_known(v___x_1272_, 3);
lean_dec(v_val_1265_);
if (v___x_1273_ == 0)
{
lean_object* v___x_1274_; 
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1259_);
v___x_1274_ = l_Lake_ToolchainVer_other___override(v_ver_1257_);
return v___x_1274_;
}
else
{
lean_object* v___x_1275_; 
lean_dec_ref(v_ver_1257_);
v___x_1275_ = l_Lake_ToolchainVer_nightly___override(v___y_1259_, v___y_1262_);
return v___x_1275_;
}
}
else
{
lean_object* v___x_1276_; 
lean_dec(v_val_1265_);
lean_dec(v___y_1260_);
lean_dec_ref(v_ver_1257_);
v___x_1276_ = l_Lake_ToolchainVer_nightly___override(v___y_1259_, v___y_1262_);
return v___x_1276_;
}
}
else
{
lean_object* v___x_1277_; 
lean_dec(v___x_1264_);
lean_dec(v___y_1262_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
v___x_1277_ = l_Lake_ToolchainVer_other___override(v_ver_1257_);
return v___x_1277_;
}
}
else
{
lean_object* v___x_1278_; 
lean_dec_ref(v___y_1263_);
lean_dec(v___y_1260_);
lean_dec_ref(v_ver_1257_);
v___x_1278_ = l_Lake_ToolchainVer_nightly___override(v___y_1259_, v___y_1262_);
return v___x_1278_;
}
}
v___jp_1279_:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
lean_dec_ref(v___y_1280_);
v___x_1289_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_1282_);
v___x_1290_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg(v___y_1284_, v___y_1281_, v___x_1289_, v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v___y_1284_);
v___x_1291_ = lean_nat_dec_le(v___x_1290_, v___y_1286_);
lean_dec(v___y_1286_);
lean_dec(v___x_1290_);
if (v___x_1291_ == 0)
{
if (lean_obj_tag(v___y_1288_) == 0)
{
lean_object* v___x_1292_; 
lean_dec_ref(v___y_1287_);
lean_dec_ref(v___y_1283_);
lean_dec(v___y_1282_);
v___x_1292_ = l_Lake_ToolchainVer_other___override(v_ver_1257_);
return v___x_1292_;
}
else
{
v___y_1259_ = v___y_1283_;
v___y_1260_ = v___y_1282_;
v___y_1261_ = v___y_1285_;
v___y_1262_ = v___y_1288_;
v___y_1263_ = v___y_1287_;
goto v___jp_1258_;
}
}
else
{
v___y_1259_ = v___y_1283_;
v___y_1260_ = v___y_1282_;
v___y_1261_ = v___y_1285_;
v___y_1262_ = v___y_1288_;
v___y_1263_ = v___y_1287_;
goto v___jp_1258_;
}
}
v___jp_1293_:
{
lean_object* v___x_1302_; 
v___x_1302_ = lean_box(0);
v___y_1280_ = v___y_1294_;
v___y_1281_ = v___y_1295_;
v___y_1282_ = v___y_1297_;
v___y_1283_ = v___y_1296_;
v___y_1284_ = v___y_1298_;
v___y_1285_ = v___y_1299_;
v___y_1286_ = v___y_1301_;
v___y_1287_ = v___y_1300_;
v___y_1288_ = v___x_1302_;
goto v___jp_1279_;
}
v___jp_1303_:
{
lean_object* v___x_1308_; 
lean_inc_ref(v___y_1306_);
v___x_1308_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__0___redArg(v___y_1306_);
if (lean_obj_tag(v___x_1308_) == 1)
{
lean_object* v_val_1309_; lean_object* v_rest_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
lean_dec_ref(v___y_1306_);
v_val_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_val_1309_);
lean_dec_ref_known(v___x_1308_, 1);
v_rest_1310_ = l_String_Slice_toString(v_val_1309_);
lean_dec(v_val_1309_);
v___x_1311_ = lean_unsigned_to_nat(10u);
v___x_1312_ = lean_string_utf8_byte_size(v_rest_1310_);
lean_inc_n(v___y_1304_, 3);
lean_inc_ref_n(v_rest_1310_, 2);
v___x_1313_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1313_, 0, v_rest_1310_);
lean_ctor_set(v___x_1313_, 1, v___y_1304_);
lean_ctor_set(v___x_1313_, 2, v___x_1312_);
v___x_1314_ = l_String_Slice_Pos_nextn(v___x_1313_, v___y_1304_, v___x_1311_);
lean_inc(v___x_1314_);
v___x_1315_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1315_, 0, v_rest_1310_);
lean_ctor_set(v___x_1315_, 1, v___y_1304_);
lean_ctor_set(v___x_1315_, 2, v___x_1314_);
v___x_1316_ = l_String_Slice_toString(v___x_1315_);
lean_dec_ref_known(v___x_1315_, 3);
v___x_1317_ = l_Lake_Date_ofString_x3f(v___x_1316_);
if (lean_obj_tag(v___x_1317_) == 1)
{
lean_object* v_val_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; uint8_t v___x_1322_; 
v_val_1318_ = lean_ctor_get(v___x_1317_, 0);
lean_inc(v_val_1318_);
lean_dec_ref_known(v___x_1317_, 1);
v___x_1319_ = ((lean_object*)(l_Lake_ToolchainVer_nightly___override___closed__1));
v___x_1320_ = lean_obj_once(&l_Lake_ToolchainVer_ofString___closed__2, &l_Lake_ToolchainVer_ofString___closed__2_once, _init_l_Lake_ToolchainVer_ofString___closed__2);
v___x_1321_ = lean_nat_sub(v___x_1312_, v___x_1314_);
v___x_1322_ = lean_nat_dec_le(v___x_1320_, v___x_1321_);
lean_dec(v___x_1321_);
if (v___x_1322_ == 0)
{
lean_dec(v___x_1314_);
v___y_1294_ = v___x_1313_;
v___y_1295_ = v_rest_1310_;
v___y_1296_ = v_val_1318_;
v___y_1297_ = v___y_1304_;
v___y_1298_ = v___x_1312_;
v___y_1299_ = v___y_1305_;
v___y_1300_ = v___y_1307_;
v___y_1301_ = v___x_1311_;
goto v___jp_1293_;
}
else
{
uint8_t v___x_1323_; 
v___x_1323_ = lean_string_memcmp(v_rest_1310_, v___x_1319_, v___x_1314_, v___y_1304_, v___x_1320_);
if (v___x_1323_ == 0)
{
lean_dec(v___x_1314_);
v___y_1294_ = v___x_1313_;
v___y_1295_ = v_rest_1310_;
v___y_1296_ = v_val_1318_;
v___y_1297_ = v___y_1304_;
v___y_1298_ = v___x_1312_;
v___y_1299_ = v___y_1305_;
v___y_1300_ = v___y_1307_;
v___y_1301_ = v___x_1311_;
goto v___jp_1293_;
}
else
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
lean_inc(v___x_1314_);
lean_inc_ref_n(v_rest_1310_, 2);
v___x_1324_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1324_, 0, v_rest_1310_);
lean_ctor_set(v___x_1324_, 1, v___x_1314_);
lean_ctor_set(v___x_1324_, 2, v___x_1312_);
v___x_1325_ = l_String_Slice_pos_x21(v___x_1324_, v___x_1320_);
lean_dec_ref_known(v___x_1324_, 3);
v___x_1326_ = lean_nat_add(v___x_1314_, v___x_1325_);
lean_dec(v___x_1325_);
lean_dec(v___x_1314_);
v___x_1327_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1327_, 0, v_rest_1310_);
lean_ctor_set(v___x_1327_, 1, v___x_1326_);
lean_ctor_set(v___x_1327_, 2, v___x_1312_);
v___x_1328_ = l_String_Slice_toString(v___x_1327_);
lean_dec_ref_known(v___x_1327_, 3);
v___x_1329_ = lean_string_utf8_byte_size(v___x_1328_);
lean_inc(v___y_1304_);
v___x_1330_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1328_);
lean_ctor_set(v___x_1330_, 1, v___y_1304_);
lean_ctor_set(v___x_1330_, 2, v___x_1329_);
v___x_1331_ = l_String_Slice_toNat_x3f(v___x_1330_);
lean_dec_ref_known(v___x_1330_, 3);
v___y_1280_ = v___x_1313_;
v___y_1281_ = v_rest_1310_;
v___y_1282_ = v___y_1304_;
v___y_1283_ = v_val_1318_;
v___y_1284_ = v___x_1312_;
v___y_1285_ = v___y_1305_;
v___y_1286_ = v___x_1311_;
v___y_1287_ = v___y_1307_;
v___y_1288_ = v___x_1331_;
goto v___jp_1279_;
}
}
}
else
{
lean_object* v___x_1332_; 
lean_dec(v___x_1317_);
lean_dec(v___x_1314_);
lean_dec_ref_known(v___x_1313_, 3);
lean_dec_ref(v_rest_1310_);
lean_dec_ref(v___y_1307_);
lean_dec(v___y_1304_);
v___x_1332_ = l_Lake_ToolchainVer_other___override(v_ver_1257_);
return v___x_1332_;
}
}
else
{
lean_object* v___x_1333_; 
lean_dec(v___x_1308_);
lean_dec(v___y_1304_);
v___x_1333_ = l_String_dropPrefix_x3f___at___00Lake_ToolchainVer_ofString_spec__3___redArg(v___y_1306_);
if (lean_obj_tag(v___x_1333_) == 1)
{
lean_object* v_val_1334_; lean_object* v___x_1335_; 
v_val_1334_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_val_1334_);
lean_dec_ref_known(v___x_1333_, 1);
v___x_1335_ = l_String_Slice_toNat_x3f(v_val_1334_);
lean_dec(v_val_1334_);
if (lean_obj_tag(v___x_1335_) == 1)
{
if (v___y_1305_ == 0)
{
lean_object* v_val_1336_; lean_object* v___x_1337_; uint8_t v___x_1338_; 
v_val_1336_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_val_1336_);
lean_dec_ref_known(v___x_1335_, 1);
v___x_1337_ = ((lean_object*)(l_Lake_ToolchainVer_prOrigin___closed__0));
v___x_1338_ = lean_string_dec_eq(v___y_1307_, v___x_1337_);
lean_dec_ref(v___y_1307_);
if (v___x_1338_ == 0)
{
lean_object* v___x_1339_; 
lean_dec(v_val_1336_);
v___x_1339_ = l_Lake_ToolchainVer_other___override(v_ver_1257_);
return v___x_1339_;
}
else
{
lean_object* v___x_1340_; 
lean_dec_ref(v_ver_1257_);
v___x_1340_ = l_Lake_ToolchainVer_pr___override(v_val_1336_);
return v___x_1340_;
}
}
else
{
lean_object* v_val_1341_; lean_object* v___x_1342_; 
lean_dec_ref(v___y_1307_);
lean_dec_ref(v_ver_1257_);
v_val_1341_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_val_1341_);
lean_dec_ref_known(v___x_1335_, 1);
v___x_1342_ = l_Lake_ToolchainVer_pr___override(v_val_1341_);
return v___x_1342_;
}
}
else
{
lean_object* v___x_1343_; 
lean_dec(v___x_1335_);
lean_dec_ref(v___y_1307_);
v___x_1343_ = l_Lake_ToolchainVer_other___override(v_ver_1257_);
return v___x_1343_;
}
}
else
{
lean_object* v___x_1344_; 
lean_dec(v___x_1333_);
lean_inc_ref(v_ver_1257_);
v___x_1344_ = l_Lake_StdVer_parse(v_ver_1257_);
if (lean_obj_tag(v___x_1344_) == 1)
{
if (v___y_1305_ == 0)
{
lean_object* v_a_1345_; lean_object* v___x_1346_; uint8_t v___x_1347_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1344_, 1);
v___x_1346_ = ((lean_object*)(l_Lake_ToolchainVer_defaultOrigin___closed__0));
v___x_1347_ = lean_string_dec_eq(v___y_1307_, v___x_1346_);
lean_dec_ref(v___y_1307_);
if (v___x_1347_ == 0)
{
lean_object* v___x_1348_; 
lean_dec(v_a_1345_);
v___x_1348_ = l_Lake_ToolchainVer_other___override(v_ver_1257_);
return v___x_1348_;
}
else
{
lean_object* v___x_1349_; 
lean_dec_ref(v_ver_1257_);
v___x_1349_ = l_Lake_ToolchainVer_release___override(v_a_1345_);
return v___x_1349_;
}
}
else
{
lean_object* v_a_1350_; lean_object* v___x_1351_; 
lean_dec_ref(v___y_1307_);
lean_dec_ref(v_ver_1257_);
v_a_1350_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1350_);
lean_dec_ref_known(v___x_1344_, 1);
v___x_1351_ = l_Lake_ToolchainVer_release___override(v_a_1350_);
return v___x_1351_;
}
}
else
{
lean_object* v___x_1352_; 
lean_dec_ref(v___x_1344_);
lean_dec_ref(v___y_1307_);
v___x_1352_ = l_Lake_ToolchainVer_other___override(v_ver_1257_);
return v___x_1352_;
}
}
}
}
v___jp_1353_:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; uint8_t v_noOrigin_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; uint8_t v___x_1362_; 
v___x_1356_ = lean_string_utf8_byte_size(v_fst_1354_);
v___x_1357_ = lean_unsigned_to_nat(0u);
v_noOrigin_1358_ = lean_nat_dec_eq(v___x_1356_, v___x_1357_);
v___x_1359_ = ((lean_object*)(l_Lake_ToolchainVer_ofString___closed__3));
v___x_1360_ = lean_string_utf8_byte_size(v_snd_1355_);
v___x_1361_ = lean_obj_once(&l_Lake_ToolchainVer_ofString___closed__4, &l_Lake_ToolchainVer_ofString___closed__4_once, _init_l_Lake_ToolchainVer_ofString___closed__4);
v___x_1362_ = lean_nat_dec_le(v___x_1361_, v___x_1360_);
if (v___x_1362_ == 0)
{
v___y_1304_ = v___x_1357_;
v___y_1305_ = v_noOrigin_1358_;
v___y_1306_ = v_snd_1355_;
v___y_1307_ = v_fst_1354_;
goto v___jp_1303_;
}
else
{
uint8_t v___x_1363_; 
v___x_1363_ = lean_string_memcmp(v_snd_1355_, v___x_1359_, v___x_1357_, v___x_1357_, v___x_1361_);
if (v___x_1363_ == 0)
{
v___y_1304_ = v___x_1357_;
v___y_1305_ = v_noOrigin_1358_;
v___y_1306_ = v_snd_1355_;
v___y_1307_ = v_fst_1354_;
goto v___jp_1303_;
}
else
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1364_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_snd_1355_);
v___x_1365_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1365_, 0, v_snd_1355_);
lean_ctor_set(v___x_1365_, 1, v___x_1357_);
lean_ctor_set(v___x_1365_, 2, v___x_1360_);
v___x_1366_ = l_String_Slice_Pos_nextn(v___x_1365_, v___x_1357_, v___x_1364_);
lean_dec_ref_known(v___x_1365_, 3);
v___x_1367_ = lean_string_utf8_extract_fast(v_snd_1355_, v___x_1366_, v___x_1360_);
lean_dec(v___x_1366_);
lean_dec_ref(v_snd_1355_);
v___x_1368_ = l_Lake_StdVer_parse(v___x_1367_);
if (lean_obj_tag(v___x_1368_) == 1)
{
if (v_noOrigin_1358_ == 0)
{
lean_object* v_a_1369_; lean_object* v___x_1370_; uint8_t v___x_1371_; 
v_a_1369_ = lean_ctor_get(v___x_1368_, 0);
lean_inc(v_a_1369_);
lean_dec_ref_known(v___x_1368_, 1);
v___x_1370_ = ((lean_object*)(l_Lake_ToolchainVer_defaultOrigin___closed__0));
v___x_1371_ = lean_string_dec_eq(v_fst_1354_, v___x_1370_);
lean_dec_ref(v_fst_1354_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; 
lean_dec(v_a_1369_);
v___x_1372_ = l_Lake_ToolchainVer_other___override(v_ver_1257_);
return v___x_1372_;
}
else
{
lean_object* v___x_1373_; 
lean_dec_ref(v_ver_1257_);
v___x_1373_ = l_Lake_ToolchainVer_release___override(v_a_1369_);
return v___x_1373_;
}
}
else
{
lean_object* v_a_1374_; lean_object* v___x_1375_; 
lean_dec_ref(v_fst_1354_);
lean_dec_ref(v_ver_1257_);
v_a_1374_ = lean_ctor_get(v___x_1368_, 0);
lean_inc(v_a_1374_);
lean_dec_ref_known(v___x_1368_, 1);
v___x_1375_ = l_Lake_ToolchainVer_release___override(v_a_1374_);
return v___x_1375_;
}
}
else
{
lean_object* v___x_1376_; 
lean_dec_ref(v___x_1368_);
lean_dec_ref(v_fst_1354_);
v___x_1376_ = l_Lake_ToolchainVer_other___override(v_ver_1257_);
return v___x_1376_;
}
}
}
}
v___jp_1377_:
{
lean_object* v___x_1379_; uint8_t v_decide_1380_; 
v___x_1379_ = lean_string_utf8_byte_size(v_ver_1257_);
v_decide_1380_ = lean_nat_dec_eq(v___y_1378_, v___x_1379_);
if (v_decide_1380_ == 0)
{
lean_object* v_pos_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v_pos_1381_ = lean_string_utf8_next_fast(v_ver_1257_, v___y_1378_);
v___x_1382_ = lean_unsigned_to_nat(0u);
v___x_1383_ = lean_string_utf8_extract_fast(v_ver_1257_, v___x_1382_, v___y_1378_);
lean_dec(v___y_1378_);
v___x_1384_ = lean_string_utf8_extract_fast(v_ver_1257_, v_pos_1381_, v___x_1379_);
v_fst_1354_ = v___x_1383_;
v_snd_1355_ = v___x_1384_;
goto v___jp_1353_;
}
else
{
lean_object* v___x_1385_; 
lean_dec(v___y_1378_);
v___x_1385_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
lean_inc_ref(v_ver_1257_);
v_fst_1354_ = v___x_1385_;
v_snd_1355_ = v_ver_1257_;
goto v___jp_1353_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2(lean_object* v___x_1391_, lean_object* v___x_1392_, lean_object* v_rest_1393_, lean_object* v_inst_1394_, lean_object* v_R_1395_, lean_object* v_a_1396_, lean_object* v_b_1397_, lean_object* v_c_1398_){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___redArg(v___x_1391_, v_rest_1393_, v_a_1396_, v_b_1397_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2___boxed(lean_object* v___x_1400_, lean_object* v___x_1401_, lean_object* v_rest_1402_, lean_object* v_inst_1403_, lean_object* v_R_1404_, lean_object* v_a_1405_, lean_object* v_b_1406_, lean_object* v_c_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__2(v___x_1400_, v___x_1401_, v_rest_1402_, v_inst_1403_, v_R_1404_, v_a_1405_, v_b_1406_, v_c_1407_);
lean_dec_ref(v_rest_1402_);
lean_dec_ref(v___x_1401_);
lean_dec(v___x_1400_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4(lean_object* v___x_1409_, lean_object* v___x_1410_, lean_object* v_ver_1411_, lean_object* v_inst_1412_, lean_object* v_R_1413_, lean_object* v_a_1414_, lean_object* v_b_1415_, lean_object* v_c_1416_){
_start:
{
lean_object* v___x_1417_; 
v___x_1417_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___redArg(v___x_1409_, v_ver_1411_, v_a_1414_, v_b_1415_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4___boxed(lean_object* v___x_1418_, lean_object* v___x_1419_, lean_object* v_ver_1420_, lean_object* v_inst_1421_, lean_object* v_R_1422_, lean_object* v_a_1423_, lean_object* v_b_1424_, lean_object* v_c_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_WellFounded_opaqueFix_u2083___at___00Lake_ToolchainVer_ofString_spec__4(v___x_1418_, v___x_1419_, v_ver_1420_, v_inst_1421_, v_R_1422_, v_a_1423_, v_b_1424_, v_c_1425_);
lean_dec(v_b_1424_);
lean_dec_ref(v_ver_1420_);
lean_dec_ref(v___x_1419_);
lean_dec(v___x_1418_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofFile_x3f(lean_object* v_toolchainFile_1427_){
_start:
{
lean_object* v___x_1429_; 
v___x_1429_ = l_IO_FS_readFile(v_toolchainFile_1427_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1447_; 
v_a_1430_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1432_ = v___x_1429_;
v_isShared_1433_ = v_isSharedCheck_1447_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1429_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1447_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v_str_1438_; lean_object* v_startInclusive_1439_; lean_object* v_endExclusive_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1434_ = lean_unsigned_to_nat(0u);
v___x_1435_ = lean_string_utf8_byte_size(v_a_1430_);
v___x_1436_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1436_, 0, v_a_1430_);
lean_ctor_set(v___x_1436_, 1, v___x_1434_);
lean_ctor_set(v___x_1436_, 2, v___x_1435_);
v___x_1437_ = l_String_Slice_trimAscii(v___x_1436_);
v_str_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc_ref(v_str_1438_);
v_startInclusive_1439_ = lean_ctor_get(v___x_1437_, 1);
lean_inc(v_startInclusive_1439_);
v_endExclusive_1440_ = lean_ctor_get(v___x_1437_, 2);
lean_inc(v_endExclusive_1440_);
lean_dec_ref(v___x_1437_);
v___x_1441_ = lean_string_utf8_extract_fast(v_str_1438_, v_startInclusive_1439_, v_endExclusive_1440_);
lean_dec(v_endExclusive_1440_);
lean_dec(v_startInclusive_1439_);
lean_dec_ref(v_str_1438_);
v___x_1442_ = l_Lake_ToolchainVer_ofString(v___x_1441_);
v___x_1443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v___x_1443_);
v___x_1445_ = v___x_1432_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v___x_1443_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1459_; 
v_a_1448_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1450_ = v___x_1429_;
v_isShared_1451_ = v_isSharedCheck_1459_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1429_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1459_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
if (lean_obj_tag(v_a_1448_) == 11)
{
lean_object* v___x_1452_; lean_object* v___x_1454_; 
lean_dec_ref_known(v_a_1448_, 2);
v___x_1452_ = lean_box(0);
if (v_isShared_1451_ == 0)
{
lean_ctor_set_tag(v___x_1450_, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1452_);
v___x_1454_ = v___x_1450_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1452_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
else
{
lean_object* v___x_1457_; 
if (v_isShared_1451_ == 0)
{
v___x_1457_ = v___x_1450_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1448_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofFile_x3f___boxed(lean_object* v_toolchainFile_1460_, lean_object* v_a_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l_Lake_ToolchainVer_ofFile_x3f(v_toolchainFile_1460_);
lean_dec_ref(v_toolchainFile_1460_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofDir_x3f(lean_object* v_dir_1463_){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = ((lean_object*)(l_Lake_toolchainFileName___closed__0));
v___x_1466_ = l_System_FilePath_join(v_dir_1463_, v___x_1465_);
v___x_1467_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_1466_);
lean_dec_ref(v___x_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ofDir_x3f___boxed(lean_object* v_dir_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Lake_ToolchainVer_ofDir_x3f(v_dir_1468_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instToJson___lam__0(lean_object* v_x_1473_){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = l_Lake_ToolchainVer_toString___override(v_x_1473_);
v___x_1475_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instToJson___lam__0___boxed(lean_object* v_x_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_Lake_ToolchainVer_instToJson___lam__0(v_x_1476_);
lean_dec_ref(v_x_1476_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_instFromJson___lam__0(lean_object* v_x_1480_){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = l_Lean_Json_getStr_x3f(v_x_1480_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1489_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1484_ = v___x_1481_;
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1481_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1482_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
else
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1498_; 
v_a_1490_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1492_ = v___x_1481_;
v_isShared_1493_ = v_isSharedCheck_1498_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1481_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1498_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1494_ = l_Lake_ToolchainVer_ofString(v_a_1490_);
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 0, v___x_1494_);
v___x_1496_ = v___x_1492_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1494_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_blt(lean_object* v_a_1501_, lean_object* v_b_1502_){
_start:
{
switch(lean_obj_tag(v_a_1501_))
{
case 0:
{
if (lean_obj_tag(v_b_1502_) == 0)
{
lean_object* v_ver_1503_; lean_object* v_ver_1504_; uint8_t v___x_1505_; 
v_ver_1503_ = lean_ctor_get(v_a_1501_, 1);
v_ver_1504_ = lean_ctor_get(v_b_1502_, 1);
v___x_1505_ = l_Lake_StdVer_compare(v_ver_1503_, v_ver_1504_);
if (v___x_1505_ == 0)
{
uint8_t v___x_1506_; 
v___x_1506_ = 1;
return v___x_1506_;
}
else
{
uint8_t v___x_1507_; 
v___x_1507_ = 0;
return v___x_1507_;
}
}
else
{
uint8_t v___x_1508_; 
v___x_1508_ = 0;
return v___x_1508_;
}
}
case 1:
{
if (lean_obj_tag(v_b_1502_) == 1)
{
lean_object* v_date_1509_; lean_object* v_rev_1510_; lean_object* v_date_1511_; lean_object* v_rev_1512_; lean_object* v___y_1514_; uint8_t v___x_1519_; 
v_date_1509_ = lean_ctor_get(v_a_1501_, 1);
v_rev_1510_ = lean_ctor_get(v_a_1501_, 2);
v_date_1511_ = lean_ctor_get(v_b_1502_, 1);
v_rev_1512_ = lean_ctor_get(v_b_1502_, 2);
v___x_1519_ = l_Lake_instOrdDate_ord(v_date_1509_, v_date_1511_);
if (v___x_1519_ == 0)
{
uint8_t v___x_1520_; 
v___x_1520_ = 1;
return v___x_1520_;
}
else
{
uint8_t v___x_1521_; 
v___x_1521_ = l_Lake_instDecidableEqDate_decEq(v_date_1509_, v_date_1511_);
if (v___x_1521_ == 0)
{
return v___x_1521_;
}
else
{
if (lean_obj_tag(v_rev_1510_) == 0)
{
lean_object* v___x_1522_; 
v___x_1522_ = lean_unsigned_to_nat(0u);
v___y_1514_ = v___x_1522_;
goto v___jp_1513_;
}
else
{
lean_object* v_val_1523_; 
v_val_1523_ = lean_ctor_get(v_rev_1510_, 0);
v___y_1514_ = v_val_1523_;
goto v___jp_1513_;
}
}
}
v___jp_1513_:
{
if (lean_obj_tag(v_rev_1512_) == 0)
{
lean_object* v___x_1515_; uint8_t v___x_1516_; 
v___x_1515_ = lean_unsigned_to_nat(0u);
v___x_1516_ = lean_nat_dec_lt(v___y_1514_, v___x_1515_);
return v___x_1516_;
}
else
{
lean_object* v_val_1517_; uint8_t v___x_1518_; 
v_val_1517_ = lean_ctor_get(v_rev_1512_, 0);
v___x_1518_ = lean_nat_dec_lt(v___y_1514_, v_val_1517_);
return v___x_1518_;
}
}
}
else
{
uint8_t v___x_1524_; 
v___x_1524_ = 0;
return v___x_1524_;
}
}
default: 
{
uint8_t v___x_1525_; 
v___x_1525_ = 0;
return v___x_1525_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_blt___boxed(lean_object* v_a_1526_, lean_object* v_b_1527_){
_start:
{
uint8_t v_res_1528_; lean_object* v_r_1529_; 
v_res_1528_ = l_Lake_ToolchainVer_blt(v_a_1526_, v_b_1527_);
lean_dec_ref(v_b_1527_);
lean_dec_ref(v_a_1526_);
v_r_1529_ = lean_box(v_res_1528_);
return v_r_1529_;
}
}
static lean_object* _init_l_Lake_ToolchainVer_instLT(void){
_start:
{
lean_object* v___x_1530_; 
v___x_1530_ = lean_box(0);
return v___x_1530_;
}
}
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_decLt(lean_object* v_a_1531_, lean_object* v_b_1532_){
_start:
{
uint8_t v___x_1533_; 
v___x_1533_ = l_Lake_ToolchainVer_blt(v_a_1531_, v_b_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_decLt___boxed(lean_object* v_a_1534_, lean_object* v_b_1535_){
_start:
{
uint8_t v_res_1536_; lean_object* v_r_1537_; 
v_res_1536_ = l_Lake_ToolchainVer_decLt(v_a_1534_, v_b_1535_);
lean_dec_ref(v_b_1535_);
lean_dec_ref(v_a_1534_);
v_r_1537_ = lean_box(v_res_1536_);
return v_r_1537_;
}
}
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_ble(lean_object* v_a_1538_, lean_object* v_b_1539_){
_start:
{
switch(lean_obj_tag(v_a_1538_))
{
case 0:
{
if (lean_obj_tag(v_b_1539_) == 0)
{
lean_object* v_ver_1540_; lean_object* v_ver_1541_; uint8_t v___x_1542_; 
v_ver_1540_ = lean_ctor_get(v_a_1538_, 1);
v_ver_1541_ = lean_ctor_get(v_b_1539_, 1);
v___x_1542_ = l_Lake_StdVer_compare(v_ver_1540_, v_ver_1541_);
if (v___x_1542_ == 2)
{
uint8_t v___x_1543_; 
v___x_1543_ = 0;
return v___x_1543_;
}
else
{
uint8_t v___x_1544_; 
v___x_1544_ = 1;
return v___x_1544_;
}
}
else
{
uint8_t v___x_1545_; 
v___x_1545_ = 0;
return v___x_1545_;
}
}
case 1:
{
if (lean_obj_tag(v_b_1539_) == 1)
{
lean_object* v_date_1546_; lean_object* v_rev_1547_; lean_object* v_date_1548_; lean_object* v_rev_1549_; lean_object* v___y_1551_; uint8_t v___x_1556_; 
v_date_1546_ = lean_ctor_get(v_a_1538_, 1);
v_rev_1547_ = lean_ctor_get(v_a_1538_, 2);
v_date_1548_ = lean_ctor_get(v_b_1539_, 1);
v_rev_1549_ = lean_ctor_get(v_b_1539_, 2);
v___x_1556_ = l_Lake_instOrdDate_ord(v_date_1546_, v_date_1548_);
if (v___x_1556_ == 0)
{
uint8_t v___x_1557_; 
v___x_1557_ = 1;
return v___x_1557_;
}
else
{
uint8_t v___x_1558_; 
v___x_1558_ = l_Lake_instDecidableEqDate_decEq(v_date_1546_, v_date_1548_);
if (v___x_1558_ == 0)
{
return v___x_1558_;
}
else
{
if (lean_obj_tag(v_rev_1547_) == 0)
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_unsigned_to_nat(0u);
v___y_1551_ = v___x_1559_;
goto v___jp_1550_;
}
else
{
lean_object* v_val_1560_; 
v_val_1560_ = lean_ctor_get(v_rev_1547_, 0);
v___y_1551_ = v_val_1560_;
goto v___jp_1550_;
}
}
}
v___jp_1550_:
{
if (lean_obj_tag(v_rev_1549_) == 0)
{
lean_object* v___x_1552_; uint8_t v___x_1553_; 
v___x_1552_ = lean_unsigned_to_nat(0u);
v___x_1553_ = lean_nat_dec_le(v___y_1551_, v___x_1552_);
return v___x_1553_;
}
else
{
lean_object* v_val_1554_; uint8_t v___x_1555_; 
v_val_1554_ = lean_ctor_get(v_rev_1549_, 0);
v___x_1555_ = lean_nat_dec_le(v___y_1551_, v_val_1554_);
return v___x_1555_;
}
}
}
else
{
uint8_t v___x_1561_; 
v___x_1561_ = 0;
return v___x_1561_;
}
}
case 2:
{
if (lean_obj_tag(v_b_1539_) == 2)
{
lean_object* v_n_1562_; lean_object* v_n_1563_; uint8_t v___x_1564_; 
v_n_1562_ = lean_ctor_get(v_a_1538_, 1);
v_n_1563_ = lean_ctor_get(v_b_1539_, 1);
v___x_1564_ = lean_nat_dec_eq(v_n_1562_, v_n_1563_);
return v___x_1564_;
}
else
{
uint8_t v___x_1565_; 
v___x_1565_ = 0;
return v___x_1565_;
}
}
default: 
{
if (lean_obj_tag(v_b_1539_) == 3)
{
lean_object* v_v_1566_; lean_object* v_v_1567_; uint8_t v___x_1568_; 
v_v_1566_ = lean_ctor_get(v_a_1538_, 1);
v_v_1567_ = lean_ctor_get(v_b_1539_, 1);
v___x_1568_ = lean_string_dec_eq(v_v_1566_, v_v_1567_);
return v___x_1568_;
}
else
{
uint8_t v___x_1569_; 
v___x_1569_ = 0;
return v___x_1569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_ble___boxed(lean_object* v_a_1570_, lean_object* v_b_1571_){
_start:
{
uint8_t v_res_1572_; lean_object* v_r_1573_; 
v_res_1572_ = l_Lake_ToolchainVer_ble(v_a_1570_, v_b_1571_);
lean_dec_ref(v_b_1571_);
lean_dec_ref(v_a_1570_);
v_r_1573_ = lean_box(v_res_1572_);
return v_r_1573_;
}
}
static lean_object* _init_l_Lake_ToolchainVer_instLE(void){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = lean_box(0);
return v___x_1574_;
}
}
LEAN_EXPORT uint8_t l_Lake_ToolchainVer_decLe(lean_object* v_a_1575_, lean_object* v_b_1576_){
_start:
{
uint8_t v___x_1577_; 
v___x_1577_ = l_Lake_ToolchainVer_ble(v_a_1575_, v_b_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Lake_ToolchainVer_decLe___boxed(lean_object* v_a_1578_, lean_object* v_b_1579_){
_start:
{
uint8_t v_res_1580_; lean_object* v_r_1581_; 
v_res_1580_ = l_Lake_ToolchainVer_decLe(v_a_1578_, v_b_1579_);
lean_dec_ref(v_b_1579_);
lean_dec_ref(v_a_1578_);
v_r_1581_ = lean_box(v_res_1580_);
return v_r_1581_;
}
}
LEAN_EXPORT lean_object* l_Lake_normalizeToolchain(lean_object* v_s_1582_){
_start:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1583_ = l_Lake_ToolchainVer_ofString(v_s_1582_);
v___x_1584_ = l_Lake_ToolchainVer_toString___override(v___x_1583_);
lean_dec_ref(v___x_1583_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecodeVersionToolchainVer___lam__0(lean_object* v_x_1589_){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1590_ = l_Lake_ToolchainVer_ofString(v_x_1589_);
v___x_1591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorIdx(uint8_t v_x_1594_){
_start:
{
switch(v_x_1594_)
{
case 0:
{
lean_object* v___x_1595_; 
v___x_1595_ = lean_unsigned_to_nat(0u);
return v___x_1595_;
}
case 1:
{
lean_object* v___x_1596_; 
v___x_1596_ = lean_unsigned_to_nat(1u);
return v___x_1596_;
}
case 2:
{
lean_object* v___x_1597_; 
v___x_1597_ = lean_unsigned_to_nat(2u);
return v___x_1597_;
}
case 3:
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_unsigned_to_nat(3u);
return v___x_1598_;
}
case 4:
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_unsigned_to_nat(4u);
return v___x_1599_;
}
default: 
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_unsigned_to_nat(5u);
return v___x_1600_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorIdx___boxed(lean_object* v_x_1601_){
_start:
{
uint8_t v_x_boxed_1602_; lean_object* v_res_1603_; 
v_x_boxed_1602_ = lean_unbox(v_x_1601_);
v_res_1603_ = l_Lake_ComparatorOp_ctorIdx(v_x_boxed_1602_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___redArg(lean_object* v_k_1604_){
_start:
{
lean_inc(v_k_1604_);
return v_k_1604_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___redArg___boxed(lean_object* v_k_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l_Lake_ComparatorOp_ctorElim___redArg(v_k_1605_);
lean_dec(v_k_1605_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim(lean_object* v_motive_1607_, lean_object* v_ctorIdx_1608_, uint8_t v_t_1609_, lean_object* v_h_1610_, lean_object* v_k_1611_){
_start:
{
lean_inc(v_k_1611_);
return v_k_1611_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ctorElim___boxed(lean_object* v_motive_1612_, lean_object* v_ctorIdx_1613_, lean_object* v_t_1614_, lean_object* v_h_1615_, lean_object* v_k_1616_){
_start:
{
uint8_t v_t_boxed_1617_; lean_object* v_res_1618_; 
v_t_boxed_1617_ = lean_unbox(v_t_1614_);
v_res_1618_ = l_Lake_ComparatorOp_ctorElim(v_motive_1612_, v_ctorIdx_1613_, v_t_boxed_1617_, v_h_1615_, v_k_1616_);
lean_dec(v_k_1616_);
lean_dec(v_ctorIdx_1613_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___redArg(lean_object* v_lt_1619_){
_start:
{
lean_inc(v_lt_1619_);
return v_lt_1619_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___redArg___boxed(lean_object* v_lt_1620_){
_start:
{
lean_object* v_res_1621_; 
v_res_1621_ = l_Lake_ComparatorOp_lt_elim___redArg(v_lt_1620_);
lean_dec(v_lt_1620_);
return v_res_1621_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim(lean_object* v_motive_1622_, uint8_t v_t_1623_, lean_object* v_h_1624_, lean_object* v_lt_1625_){
_start:
{
lean_inc(v_lt_1625_);
return v_lt_1625_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_lt_elim___boxed(lean_object* v_motive_1626_, lean_object* v_t_1627_, lean_object* v_h_1628_, lean_object* v_lt_1629_){
_start:
{
uint8_t v_t_boxed_1630_; lean_object* v_res_1631_; 
v_t_boxed_1630_ = lean_unbox(v_t_1627_);
v_res_1631_ = l_Lake_ComparatorOp_lt_elim(v_motive_1626_, v_t_boxed_1630_, v_h_1628_, v_lt_1629_);
lean_dec(v_lt_1629_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___redArg(lean_object* v_le_1632_){
_start:
{
lean_inc(v_le_1632_);
return v_le_1632_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___redArg___boxed(lean_object* v_le_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Lake_ComparatorOp_le_elim___redArg(v_le_1633_);
lean_dec(v_le_1633_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim(lean_object* v_motive_1635_, uint8_t v_t_1636_, lean_object* v_h_1637_, lean_object* v_le_1638_){
_start:
{
lean_inc(v_le_1638_);
return v_le_1638_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_le_elim___boxed(lean_object* v_motive_1639_, lean_object* v_t_1640_, lean_object* v_h_1641_, lean_object* v_le_1642_){
_start:
{
uint8_t v_t_boxed_1643_; lean_object* v_res_1644_; 
v_t_boxed_1643_ = lean_unbox(v_t_1640_);
v_res_1644_ = l_Lake_ComparatorOp_le_elim(v_motive_1639_, v_t_boxed_1643_, v_h_1641_, v_le_1642_);
lean_dec(v_le_1642_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___redArg(lean_object* v_gt_1645_){
_start:
{
lean_inc(v_gt_1645_);
return v_gt_1645_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___redArg___boxed(lean_object* v_gt_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l_Lake_ComparatorOp_gt_elim___redArg(v_gt_1646_);
lean_dec(v_gt_1646_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim(lean_object* v_motive_1648_, uint8_t v_t_1649_, lean_object* v_h_1650_, lean_object* v_gt_1651_){
_start:
{
lean_inc(v_gt_1651_);
return v_gt_1651_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_gt_elim___boxed(lean_object* v_motive_1652_, lean_object* v_t_1653_, lean_object* v_h_1654_, lean_object* v_gt_1655_){
_start:
{
uint8_t v_t_boxed_1656_; lean_object* v_res_1657_; 
v_t_boxed_1656_ = lean_unbox(v_t_1653_);
v_res_1657_ = l_Lake_ComparatorOp_gt_elim(v_motive_1652_, v_t_boxed_1656_, v_h_1654_, v_gt_1655_);
lean_dec(v_gt_1655_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___redArg(lean_object* v_ge_1658_){
_start:
{
lean_inc(v_ge_1658_);
return v_ge_1658_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___redArg___boxed(lean_object* v_ge_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l_Lake_ComparatorOp_ge_elim___redArg(v_ge_1659_);
lean_dec(v_ge_1659_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim(lean_object* v_motive_1661_, uint8_t v_t_1662_, lean_object* v_h_1663_, lean_object* v_ge_1664_){
_start:
{
lean_inc(v_ge_1664_);
return v_ge_1664_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ge_elim___boxed(lean_object* v_motive_1665_, lean_object* v_t_1666_, lean_object* v_h_1667_, lean_object* v_ge_1668_){
_start:
{
uint8_t v_t_boxed_1669_; lean_object* v_res_1670_; 
v_t_boxed_1669_ = lean_unbox(v_t_1666_);
v_res_1670_ = l_Lake_ComparatorOp_ge_elim(v_motive_1665_, v_t_boxed_1669_, v_h_1667_, v_ge_1668_);
lean_dec(v_ge_1668_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___redArg(lean_object* v_eq_1671_){
_start:
{
lean_inc(v_eq_1671_);
return v_eq_1671_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___redArg___boxed(lean_object* v_eq_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l_Lake_ComparatorOp_eq_elim___redArg(v_eq_1672_);
lean_dec(v_eq_1672_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim(lean_object* v_motive_1674_, uint8_t v_t_1675_, lean_object* v_h_1676_, lean_object* v_eq_1677_){
_start:
{
lean_inc(v_eq_1677_);
return v_eq_1677_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_eq_elim___boxed(lean_object* v_motive_1678_, lean_object* v_t_1679_, lean_object* v_h_1680_, lean_object* v_eq_1681_){
_start:
{
uint8_t v_t_boxed_1682_; lean_object* v_res_1683_; 
v_t_boxed_1682_ = lean_unbox(v_t_1679_);
v_res_1683_ = l_Lake_ComparatorOp_eq_elim(v_motive_1678_, v_t_boxed_1682_, v_h_1680_, v_eq_1681_);
lean_dec(v_eq_1681_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___redArg(lean_object* v_ne_1684_){
_start:
{
lean_inc(v_ne_1684_);
return v_ne_1684_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___redArg___boxed(lean_object* v_ne_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lake_ComparatorOp_ne_elim___redArg(v_ne_1685_);
lean_dec(v_ne_1685_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim(lean_object* v_motive_1687_, uint8_t v_t_1688_, lean_object* v_h_1689_, lean_object* v_ne_1690_){
_start:
{
lean_inc(v_ne_1690_);
return v_ne_1690_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ne_elim___boxed(lean_object* v_motive_1691_, lean_object* v_t_1692_, lean_object* v_h_1693_, lean_object* v_ne_1694_){
_start:
{
uint8_t v_t_boxed_1695_; lean_object* v_res_1696_; 
v_t_boxed_1695_ = lean_unbox(v_t_1692_);
v_res_1696_ = l_Lake_ComparatorOp_ne_elim(v_motive_1691_, v_t_boxed_1695_, v_h_1693_, v_ne_1694_);
lean_dec(v_ne_1694_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprComparatorOp_repr(uint8_t v_x_1715_, lean_object* v_prec_1716_){
_start:
{
lean_object* v___y_1718_; lean_object* v___y_1725_; lean_object* v___y_1732_; lean_object* v___y_1739_; lean_object* v___y_1746_; lean_object* v___y_1753_; 
switch(v_x_1715_)
{
case 0:
{
lean_object* v___x_1759_; uint8_t v___x_1760_; 
v___x_1759_ = lean_unsigned_to_nat(1024u);
v___x_1760_ = lean_nat_dec_le(v___x_1759_, v_prec_1716_);
if (v___x_1760_ == 0)
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1718_ = v___x_1761_;
goto v___jp_1717_;
}
else
{
lean_object* v___x_1762_; 
v___x_1762_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1718_ = v___x_1762_;
goto v___jp_1717_;
}
}
case 1:
{
lean_object* v___x_1763_; uint8_t v___x_1764_; 
v___x_1763_ = lean_unsigned_to_nat(1024u);
v___x_1764_ = lean_nat_dec_le(v___x_1763_, v_prec_1716_);
if (v___x_1764_ == 0)
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1725_ = v___x_1765_;
goto v___jp_1724_;
}
else
{
lean_object* v___x_1766_; 
v___x_1766_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1725_ = v___x_1766_;
goto v___jp_1724_;
}
}
case 2:
{
lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1767_ = lean_unsigned_to_nat(1024u);
v___x_1768_ = lean_nat_dec_le(v___x_1767_, v_prec_1716_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; 
v___x_1769_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1732_ = v___x_1769_;
goto v___jp_1731_;
}
else
{
lean_object* v___x_1770_; 
v___x_1770_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1732_ = v___x_1770_;
goto v___jp_1731_;
}
}
case 3:
{
lean_object* v___x_1771_; uint8_t v___x_1772_; 
v___x_1771_ = lean_unsigned_to_nat(1024u);
v___x_1772_ = lean_nat_dec_le(v___x_1771_, v_prec_1716_);
if (v___x_1772_ == 0)
{
lean_object* v___x_1773_; 
v___x_1773_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1739_ = v___x_1773_;
goto v___jp_1738_;
}
else
{
lean_object* v___x_1774_; 
v___x_1774_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1739_ = v___x_1774_;
goto v___jp_1738_;
}
}
case 4:
{
lean_object* v___x_1775_; uint8_t v___x_1776_; 
v___x_1775_ = lean_unsigned_to_nat(1024u);
v___x_1776_ = lean_nat_dec_le(v___x_1775_, v_prec_1716_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; 
v___x_1777_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1746_ = v___x_1777_;
goto v___jp_1745_;
}
else
{
lean_object* v___x_1778_; 
v___x_1778_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1746_ = v___x_1778_;
goto v___jp_1745_;
}
}
default: 
{
lean_object* v___x_1779_; uint8_t v___x_1780_; 
v___x_1779_ = lean_unsigned_to_nat(1024u);
v___x_1780_ = lean_nat_dec_le(v___x_1779_, v_prec_1716_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; 
v___x_1781_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__3, &l_Lake_instReprToolchainVer_repr___closed__3_once, _init_l_Lake_instReprToolchainVer_repr___closed__3);
v___y_1753_ = v___x_1781_;
goto v___jp_1752_;
}
else
{
lean_object* v___x_1782_; 
v___x_1782_ = lean_obj_once(&l_Lake_instReprToolchainVer_repr___closed__4, &l_Lake_instReprToolchainVer_repr___closed__4_once, _init_l_Lake_instReprToolchainVer_repr___closed__4);
v___y_1753_ = v___x_1782_;
goto v___jp_1752_;
}
}
}
v___jp_1717_:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; uint8_t v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1719_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__1));
lean_inc(v___y_1718_);
v___x_1720_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1720_, 0, v___y_1718_);
lean_ctor_set(v___x_1720_, 1, v___x_1719_);
v___x_1721_ = 0;
v___x_1722_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1722_, 0, v___x_1720_);
lean_ctor_set_uint8(v___x_1722_, sizeof(void*)*1, v___x_1721_);
v___x_1723_ = l_Repr_addAppParen(v___x_1722_, v_prec_1716_);
return v___x_1723_;
}
v___jp_1724_:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; uint8_t v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1726_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__3));
lean_inc(v___y_1725_);
v___x_1727_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1727_, 0, v___y_1725_);
lean_ctor_set(v___x_1727_, 1, v___x_1726_);
v___x_1728_ = 0;
v___x_1729_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1729_, 0, v___x_1727_);
lean_ctor_set_uint8(v___x_1729_, sizeof(void*)*1, v___x_1728_);
v___x_1730_ = l_Repr_addAppParen(v___x_1729_, v_prec_1716_);
return v___x_1730_;
}
v___jp_1731_:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; uint8_t v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1733_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__5));
lean_inc(v___y_1732_);
v___x_1734_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1734_, 0, v___y_1732_);
lean_ctor_set(v___x_1734_, 1, v___x_1733_);
v___x_1735_ = 0;
v___x_1736_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1736_, 0, v___x_1734_);
lean_ctor_set_uint8(v___x_1736_, sizeof(void*)*1, v___x_1735_);
v___x_1737_ = l_Repr_addAppParen(v___x_1736_, v_prec_1716_);
return v___x_1737_;
}
v___jp_1738_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; uint8_t v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1740_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__7));
lean_inc(v___y_1739_);
v___x_1741_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1741_, 0, v___y_1739_);
lean_ctor_set(v___x_1741_, 1, v___x_1740_);
v___x_1742_ = 0;
v___x_1743_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1743_, 0, v___x_1741_);
lean_ctor_set_uint8(v___x_1743_, sizeof(void*)*1, v___x_1742_);
v___x_1744_ = l_Repr_addAppParen(v___x_1743_, v_prec_1716_);
return v___x_1744_;
}
v___jp_1745_:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; uint8_t v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1747_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__9));
lean_inc(v___y_1746_);
v___x_1748_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___y_1746_);
lean_ctor_set(v___x_1748_, 1, v___x_1747_);
v___x_1749_ = 0;
v___x_1750_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1750_, 0, v___x_1748_);
lean_ctor_set_uint8(v___x_1750_, sizeof(void*)*1, v___x_1749_);
v___x_1751_ = l_Repr_addAppParen(v___x_1750_, v_prec_1716_);
return v___x_1751_;
}
v___jp_1752_:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; uint8_t v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1754_ = ((lean_object*)(l_Lake_instReprComparatorOp_repr___closed__11));
lean_inc(v___y_1753_);
v___x_1755_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1755_, 0, v___y_1753_);
lean_ctor_set(v___x_1755_, 1, v___x_1754_);
v___x_1756_ = 0;
v___x_1757_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1757_, 0, v___x_1755_);
lean_ctor_set_uint8(v___x_1757_, sizeof(void*)*1, v___x_1756_);
v___x_1758_ = l_Repr_addAppParen(v___x_1757_, v_prec_1716_);
return v___x_1758_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprComparatorOp_repr___boxed(lean_object* v_x_1783_, lean_object* v_prec_1784_){
_start:
{
uint8_t v_x_329__boxed_1785_; lean_object* v_res_1786_; 
v_x_329__boxed_1785_ = lean_unbox(v_x_1783_);
v_res_1786_ = l_Lake_instReprComparatorOp_repr(v_x_329__boxed_1785_, v_prec_1784_);
lean_dec(v_prec_1784_);
return v_res_1786_;
}
}
static uint8_t _init_l_Lake_instInhabitedComparatorOp_default(void){
_start:
{
uint8_t v___x_1789_; 
v___x_1789_ = 0;
return v___x_1789_;
}
}
static uint8_t _init_l_Lake_instInhabitedComparatorOp(void){
_start:
{
uint8_t v___x_1790_; 
v___x_1790_ = 0;
return v___x_1790_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(lean_object* v_sym_1791_, uint8_t v_cmp_1792_, lean_object* v_t_1793_){
_start:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1794_ = lean_box(v_cmp_1792_);
lean_inc_ref(v_sym_1791_);
v___x_1795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1795_, 0, v_sym_1791_);
lean_ctor_set(v___x_1795_, 1, v___x_1794_);
v___x_1796_ = l_Lean_Data_Trie_insert___redArg(v_t_1793_, v_sym_1791_, v___x_1795_);
lean_dec_ref(v_sym_1791_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0___boxed(lean_object* v_sym_1797_, lean_object* v_cmp_1798_, lean_object* v_t_1799_){
_start:
{
uint8_t v_cmp_boxed_1800_; lean_object* v_res_1801_; 
v_cmp_boxed_1800_ = lean_unbox(v_cmp_1798_);
v_res_1801_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v_sym_1797_, v_cmp_boxed_1800_, v_t_1799_);
return v_res_1801_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9(void){
_start:
{
lean_object* v___x_1811_; 
v___x_1811_ = l_Lean_Data_Trie_empty___redArg();
return v___x_1811_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10(void){
_start:
{
lean_object* v___x_1812_; uint8_t v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1812_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__9);
v___x_1813_ = 0;
v___x_1814_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__8));
v___x_1815_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1814_, v___x_1813_, v___x_1812_);
return v___x_1815_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11(void){
_start:
{
lean_object* v___x_1816_; uint8_t v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1816_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__10);
v___x_1817_ = 1;
v___x_1818_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__7));
v___x_1819_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1818_, v___x_1817_, v___x_1816_);
return v___x_1819_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12(void){
_start:
{
lean_object* v___x_1820_; uint8_t v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1820_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__11);
v___x_1821_ = 1;
v___x_1822_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__6));
v___x_1823_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1822_, v___x_1821_, v___x_1820_);
return v___x_1823_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13(void){
_start:
{
lean_object* v___x_1824_; uint8_t v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1824_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__12);
v___x_1825_ = 2;
v___x_1826_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__5));
v___x_1827_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1826_, v___x_1825_, v___x_1824_);
return v___x_1827_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14(void){
_start:
{
lean_object* v___x_1828_; uint8_t v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1828_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__13);
v___x_1829_ = 3;
v___x_1830_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__4));
v___x_1831_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1830_, v___x_1829_, v___x_1828_);
return v___x_1831_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15(void){
_start:
{
lean_object* v___x_1832_; uint8_t v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1832_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__14);
v___x_1833_ = 3;
v___x_1834_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__3));
v___x_1835_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1834_, v___x_1833_, v___x_1832_);
return v___x_1835_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16(void){
_start:
{
lean_object* v___x_1836_; uint8_t v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1836_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__15);
v___x_1837_ = 4;
v___x_1838_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__2));
v___x_1839_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1838_, v___x_1837_, v___x_1836_);
return v___x_1839_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17(void){
_start:
{
lean_object* v___x_1840_; uint8_t v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1840_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__16);
v___x_1841_ = 5;
v___x_1842_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__1));
v___x_1843_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1842_, v___x_1841_, v___x_1840_);
return v___x_1843_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18(void){
_start:
{
lean_object* v___x_1844_; uint8_t v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1844_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__17);
v___x_1845_ = 5;
v___x_1846_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__0));
v___x_1847_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___lam__0(v___x_1846_, v___x_1845_, v___x_1844_);
return v___x_1847_;
}
}
static lean_object* _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie(void){
_start:
{
lean_object* v___x_1848_; 
v___x_1848_ = lean_obj_once(&l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18, &l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18_once, _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__18);
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM(lean_object* v_s_1851_, lean_object* v_p_1852_){
_start:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1853_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie;
v___x_1854_ = lean_string_utf8_byte_size(v_s_1851_);
lean_inc(v_p_1852_);
v___x_1855_ = l_Lean_Data_Trie_matchPrefix___redArg(v_s_1851_, v___x_1853_, v_p_1852_, v___x_1854_);
if (lean_obj_tag(v___x_1855_) == 1)
{
lean_object* v_val_1856_; lean_object* v_fst_1857_; lean_object* v_snd_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1872_; 
v_val_1856_ = lean_ctor_get(v___x_1855_, 0);
lean_inc(v_val_1856_);
lean_dec_ref_known(v___x_1855_, 1);
v_fst_1857_ = lean_ctor_get(v_val_1856_, 0);
v_snd_1858_ = lean_ctor_get(v_val_1856_, 1);
v_isSharedCheck_1872_ = !lean_is_exclusive(v_val_1856_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1860_ = v_val_1856_;
v_isShared_1861_ = v_isSharedCheck_1872_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_snd_1858_);
lean_inc(v_fst_1857_);
lean_dec(v_val_1856_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1872_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1862_; lean_object* v_p_x27_1863_; uint8_t v___x_1864_; 
v___x_1862_ = lean_string_utf8_byte_size(v_fst_1857_);
lean_dec(v_fst_1857_);
v_p_x27_1863_ = lean_nat_add(v_p_1852_, v___x_1862_);
v___x_1864_ = lean_string_is_valid_pos(v_s_1851_, v_p_x27_1863_);
if (v___x_1864_ == 0)
{
lean_object* v___x_1865_; lean_object* v___x_1867_; 
lean_dec(v_p_x27_1863_);
lean_dec(v_snd_1858_);
v___x_1865_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__0));
if (v_isShared_1861_ == 0)
{
lean_ctor_set_tag(v___x_1860_, 1);
lean_ctor_set(v___x_1860_, 1, v_p_1852_);
lean_ctor_set(v___x_1860_, 0, v___x_1865_);
v___x_1867_ = v___x_1860_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v___x_1865_);
lean_ctor_set(v_reuseFailAlloc_1868_, 1, v_p_1852_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
else
{
lean_object* v___x_1870_; 
lean_dec(v_p_1852_);
if (v_isShared_1861_ == 0)
{
lean_ctor_set(v___x_1860_, 1, v_p_x27_1863_);
lean_ctor_set(v___x_1860_, 0, v_snd_1858_);
v___x_1870_ = v___x_1860_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_snd_1858_);
lean_ctor_set(v_reuseFailAlloc_1871_, 1, v_p_x27_1863_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
}
else
{
lean_object* v___x_1873_; lean_object* v___x_1874_; 
lean_dec(v___x_1855_);
v___x_1873_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___closed__1));
v___x_1874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1873_);
lean_ctor_set(v___x_1874_, 1, v_p_1852_);
return v___x_1874_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM___boxed(lean_object* v_s_1875_, lean_object* v_p_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM(v_s_1875_, v_p_1876_);
lean_dec_ref(v_s_1875_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ofString_x3f(lean_object* v_s_1878_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = lean_unsigned_to_nat(0u);
v___x_1880_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM(v_s_1878_, v___x_1879_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; lean_object* v_a_1882_; lean_object* v___x_1883_; uint8_t v_decide_1884_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1881_);
v_a_1882_ = lean_ctor_get(v___x_1880_, 1);
lean_inc(v_a_1882_);
lean_dec_ref_known(v___x_1880_, 2);
v___x_1883_ = lean_string_utf8_byte_size(v_s_1878_);
v_decide_1884_ = lean_nat_dec_eq(v_a_1882_, v___x_1883_);
lean_dec(v_a_1882_);
if (v_decide_1884_ == 0)
{
lean_object* v___x_1885_; 
lean_dec(v_a_1881_);
v___x_1885_ = lean_box(0);
return v___x_1885_;
}
else
{
lean_object* v___x_1886_; 
v___x_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1886_, 0, v_a_1881_);
return v___x_1886_;
}
}
else
{
lean_object* v___x_1887_; 
lean_dec_ref_known(v___x_1880_, 2);
v___x_1887_ = lean_box(0);
return v___x_1887_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_ofString_x3f___boxed(lean_object* v_s_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lake_ComparatorOp_ofString_x3f(v_s_1888_);
lean_dec_ref(v_s_1888_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_toString(uint8_t v_self_1890_){
_start:
{
switch(v_self_1890_)
{
case 0:
{
lean_object* v___x_1891_; 
v___x_1891_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__8));
return v___x_1891_;
}
case 1:
{
lean_object* v___x_1892_; 
v___x_1892_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__6));
return v___x_1892_;
}
case 2:
{
lean_object* v___x_1893_; 
v___x_1893_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__5));
return v___x_1893_;
}
case 3:
{
lean_object* v___x_1894_; 
v___x_1894_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__3));
return v___x_1894_;
}
case 4:
{
lean_object* v___x_1895_; 
v___x_1895_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__2));
return v___x_1895_;
}
default: 
{
lean_object* v___x_1896_; 
v___x_1896_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie___closed__0));
return v___x_1896_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ComparatorOp_toString___boxed(lean_object* v_self_1897_){
_start:
{
uint8_t v_self_boxed_1898_; lean_object* v_res_1899_; 
v_self_boxed_1898_ = lean_unbox(v_self_1897_);
v_res_1899_ = l_Lake_ComparatorOp_toString(v_self_boxed_1898_);
return v_res_1899_;
}
}
static lean_object* _init_l_Lake_instReprVerComparator_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1911_ = lean_unsigned_to_nat(7u);
v___x_1912_ = lean_nat_to_int(v___x_1911_);
return v___x_1912_;
}
}
static lean_object* _init_l_Lake_instReprVerComparator_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1916_ = lean_unsigned_to_nat(6u);
v___x_1917_ = lean_nat_to_int(v___x_1916_);
return v___x_1917_;
}
}
static lean_object* _init_l_Lake_instReprVerComparator_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1921_ = lean_unsigned_to_nat(19u);
v___x_1922_ = lean_nat_to_int(v___x_1921_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr___redArg(lean_object* v_x_1923_){
_start:
{
lean_object* v_ver_1924_; uint8_t v_op_1925_; uint8_t v_includeSuffixes_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; uint8_t v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
v_ver_1924_ = lean_ctor_get(v_x_1923_, 0);
lean_inc_ref(v_ver_1924_);
v_op_1925_ = lean_ctor_get_uint8(v_x_1923_, sizeof(void*)*1);
v_includeSuffixes_1926_ = lean_ctor_get_uint8(v_x_1923_, sizeof(void*)*1 + 1);
lean_dec_ref(v_x_1923_);
v___x_1927_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__5));
v___x_1928_ = ((lean_object*)(l_Lake_instReprVerComparator_repr___redArg___closed__3));
v___x_1929_ = lean_obj_once(&l_Lake_instReprVerComparator_repr___redArg___closed__4, &l_Lake_instReprVerComparator_repr___redArg___closed__4_once, _init_l_Lake_instReprVerComparator_repr___redArg___closed__4);
v___x_1930_ = lean_unsigned_to_nat(0u);
v___x_1931_ = l_Lake_instReprStdVer_repr___redArg(v_ver_1924_);
v___x_1932_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1929_);
lean_ctor_set(v___x_1932_, 1, v___x_1931_);
v___x_1933_ = 0;
v___x_1934_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1934_, 0, v___x_1932_);
lean_ctor_set_uint8(v___x_1934_, sizeof(void*)*1, v___x_1933_);
v___x_1935_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1928_);
lean_ctor_set(v___x_1935_, 1, v___x_1934_);
v___x_1936_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__9));
v___x_1937_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1937_, 0, v___x_1935_);
lean_ctor_set(v___x_1937_, 1, v___x_1936_);
v___x_1938_ = lean_box(1);
v___x_1939_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1937_);
lean_ctor_set(v___x_1939_, 1, v___x_1938_);
v___x_1940_ = ((lean_object*)(l_Lake_instReprVerComparator_repr___redArg___closed__6));
v___x_1941_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1939_);
lean_ctor_set(v___x_1941_, 1, v___x_1940_);
v___x_1942_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1942_, 0, v___x_1941_);
lean_ctor_set(v___x_1942_, 1, v___x_1927_);
v___x_1943_ = lean_obj_once(&l_Lake_instReprVerComparator_repr___redArg___closed__7, &l_Lake_instReprVerComparator_repr___redArg___closed__7_once, _init_l_Lake_instReprVerComparator_repr___redArg___closed__7);
v___x_1944_ = l_Lake_instReprComparatorOp_repr(v_op_1925_, v___x_1930_);
v___x_1945_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1943_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1946_, 0, v___x_1945_);
lean_ctor_set_uint8(v___x_1946_, sizeof(void*)*1, v___x_1933_);
v___x_1947_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1942_);
lean_ctor_set(v___x_1947_, 1, v___x_1946_);
v___x_1948_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1947_);
lean_ctor_set(v___x_1948_, 1, v___x_1936_);
v___x_1949_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
lean_ctor_set(v___x_1949_, 1, v___x_1938_);
v___x_1950_ = ((lean_object*)(l_Lake_instReprVerComparator_repr___redArg___closed__9));
v___x_1951_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1949_);
lean_ctor_set(v___x_1951_, 1, v___x_1950_);
v___x_1952_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
lean_ctor_set(v___x_1952_, 1, v___x_1927_);
v___x_1953_ = lean_obj_once(&l_Lake_instReprVerComparator_repr___redArg___closed__10, &l_Lake_instReprVerComparator_repr___redArg___closed__10_once, _init_l_Lake_instReprVerComparator_repr___redArg___closed__10);
v___x_1954_ = l_Bool_repr___redArg(v_includeSuffixes_1926_);
v___x_1955_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1953_);
lean_ctor_set(v___x_1955_, 1, v___x_1954_);
v___x_1956_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1956_, 0, v___x_1955_);
lean_ctor_set_uint8(v___x_1956_, sizeof(void*)*1, v___x_1933_);
v___x_1957_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1952_);
lean_ctor_set(v___x_1957_, 1, v___x_1956_);
v___x_1958_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__16, &l_Lake_instReprSemVerCore_repr___redArg___closed__16_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__16);
v___x_1959_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__17));
v___x_1960_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1960_, 0, v___x_1959_);
lean_ctor_set(v___x_1960_, 1, v___x_1957_);
v___x_1961_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__18));
v___x_1962_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1960_);
lean_ctor_set(v___x_1962_, 1, v___x_1961_);
v___x_1963_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1958_);
lean_ctor_set(v___x_1963_, 1, v___x_1962_);
v___x_1964_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1964_, 0, v___x_1963_);
lean_ctor_set_uint8(v___x_1964_, sizeof(void*)*1, v___x_1933_);
return v___x_1964_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr(lean_object* v_x_1965_, lean_object* v_prec_1966_){
_start:
{
lean_object* v___x_1967_; 
v___x_1967_ = l_Lake_instReprVerComparator_repr___redArg(v_x_1965_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerComparator_repr___boxed(lean_object* v_x_1968_, lean_object* v_prec_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_Lake_instReprVerComparator_repr(v_x_1968_, v_prec_1969_);
lean_dec(v_prec_1969_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerComparator_parseM(lean_object* v_s_1984_, lean_object* v_a_1985_){
_start:
{
lean_object* v___x_1986_; 
lean_inc(v_a_1985_);
v___x_1986_ = l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM(v_s_1984_, v_a_1985_);
if (lean_obj_tag(v___x_1986_) == 0)
{
lean_object* v_a_1987_; lean_object* v_a_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_2053_; 
v_a_1987_ = lean_ctor_get(v___x_1986_, 0);
v_a_1988_ = lean_ctor_get(v___x_1986_, 1);
v_isSharedCheck_2053_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2053_ == 0)
{
v___x_1990_ = v___x_1986_;
v_isShared_1991_ = v_isSharedCheck_2053_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_a_1988_);
lean_inc(v_a_1987_);
lean_dec(v___x_1986_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_2053_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v___x_1992_; uint8_t v_decide_1993_; 
v___x_1992_ = lean_string_utf8_byte_size(v_s_1984_);
v_decide_1993_ = lean_nat_dec_eq(v_a_1988_, v___x_1992_);
if (v_decide_1993_ == 0)
{
lean_object* v___x_1994_; 
lean_del_object(v___x_1990_);
lean_dec(v_a_1985_);
lean_inc_ref(v_s_1984_);
v___x_1994_ = l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM(v_s_1984_, v_a_1988_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; lean_object* v_a_1996_; lean_object* v___x_1997_; lean_object* v_a_1998_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
v_a_1996_ = lean_ctor_get(v___x_1994_, 1);
lean_inc(v_a_1996_);
lean_dec_ref_known(v___x_1994_, 2);
v___x_1997_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr_x3f(v_s_1984_, v_a_1996_);
lean_dec_ref(v_s_1984_);
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_1998_);
if (lean_obj_tag(v_a_1998_) == 1)
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2020_; 
v_a_1999_ = lean_ctor_get(v___x_1997_, 1);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2020_ == 0)
{
lean_object* v_unused_2021_; 
v_unused_2021_ = lean_ctor_get(v___x_1997_, 0);
lean_dec(v_unused_2021_);
v___x_2001_ = v___x_1997_;
v_isShared_2002_ = v_isSharedCheck_2020_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1997_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2020_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v_val_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; uint8_t v___x_2006_; 
v_val_2003_ = lean_ctor_get(v_a_1998_, 0);
lean_inc(v_val_2003_);
lean_dec_ref_known(v_a_1998_, 1);
v___x_2004_ = lean_string_utf8_byte_size(v_val_2003_);
v___x_2005_ = lean_unsigned_to_nat(0u);
v___x_2006_ = lean_nat_dec_eq(v___x_2004_, v___x_2005_);
if (v___x_2006_ == 0)
{
lean_object* v___x_2007_; lean_object* v___x_2008_; uint8_t v___x_2009_; lean_object* v___x_2011_; 
v___x_2007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2007_, 0, v_a_1995_);
lean_ctor_set(v___x_2007_, 1, v_val_2003_);
v___x_2008_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2008_, 0, v___x_2007_);
v___x_2009_ = lean_unbox(v_a_1987_);
lean_dec(v_a_1987_);
lean_ctor_set_uint8(v___x_2008_, sizeof(void*)*1, v___x_2009_);
lean_ctor_set_uint8(v___x_2008_, sizeof(void*)*1 + 1, v___x_2006_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 0, v___x_2008_);
v___x_2011_ = v___x_2001_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_2008_);
lean_ctor_set(v_reuseFailAlloc_2012_, 1, v_a_1999_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
else
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; uint8_t v___x_2016_; lean_object* v___x_2018_; 
lean_dec(v_val_2003_);
v___x_2013_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___x_2014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2014_, 0, v_a_1995_);
lean_ctor_set(v___x_2014_, 1, v___x_2013_);
v___x_2015_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2015_, 0, v___x_2014_);
v___x_2016_ = lean_unbox(v_a_1987_);
lean_dec(v_a_1987_);
lean_ctor_set_uint8(v___x_2015_, sizeof(void*)*1, v___x_2016_);
lean_ctor_set_uint8(v___x_2015_, sizeof(void*)*1 + 1, v___x_2006_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 0, v___x_2015_);
v___x_2018_ = v___x_2001_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v___x_2015_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v_a_1999_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
}
else
{
lean_object* v_a_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2033_; 
lean_dec(v_a_1998_);
v_a_2022_ = lean_ctor_get(v___x_1997_, 1);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2033_ == 0)
{
lean_object* v_unused_2034_; 
v_unused_2034_ = lean_ctor_get(v___x_1997_, 0);
lean_dec(v_unused_2034_);
v___x_2024_ = v___x_1997_;
v_isShared_2025_ = v_isSharedCheck_2033_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_a_2022_);
lean_dec(v___x_1997_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2033_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; uint8_t v___x_2029_; lean_object* v___x_2031_; 
v___x_2026_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___x_2027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2027_, 0, v_a_1995_);
lean_ctor_set(v___x_2027_, 1, v___x_2026_);
v___x_2028_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2028_, 0, v___x_2027_);
v___x_2029_ = lean_unbox(v_a_1987_);
lean_dec(v_a_1987_);
lean_ctor_set_uint8(v___x_2028_, sizeof(void*)*1, v___x_2029_);
lean_ctor_set_uint8(v___x_2028_, sizeof(void*)*1 + 1, v_decide_1993_);
if (v_isShared_2025_ == 0)
{
lean_ctor_set(v___x_2024_, 0, v___x_2028_);
v___x_2031_ = v___x_2024_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v___x_2028_);
lean_ctor_set(v_reuseFailAlloc_2032_, 1, v_a_2022_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
}
}
else
{
lean_object* v_a_2035_; lean_object* v_a_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2043_; 
lean_dec(v_a_1987_);
lean_dec_ref(v_s_1984_);
v_a_2035_ = lean_ctor_get(v___x_1994_, 0);
v_a_2036_ = lean_ctor_get(v___x_1994_, 1);
v_isSharedCheck_2043_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2038_ = v___x_1994_;
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_a_2036_);
lean_inc(v_a_2035_);
lean_dec(v___x_1994_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2041_; 
if (v_isShared_2039_ == 0)
{
v___x_2041_ = v___x_2038_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_a_2035_);
lean_ctor_set(v_reuseFailAlloc_2042_, 1, v_a_2036_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
return v___x_2041_;
}
}
}
}
else
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2051_; 
lean_dec(v_a_1987_);
v___x_2044_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__0));
v___x_2045_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2045_, 0, v_s_1984_);
lean_ctor_set(v___x_2045_, 1, v_a_1985_);
lean_ctor_set(v___x_2045_, 2, v___x_1992_);
v___x_2046_ = l_String_Slice_toString(v___x_2045_);
lean_dec_ref_known(v___x_2045_, 3);
v___x_2047_ = lean_string_append(v___x_2044_, v___x_2046_);
lean_dec_ref(v___x_2046_);
v___x_2048_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerComparator_parseM___closed__1));
v___x_2049_ = lean_string_append(v___x_2047_, v___x_2048_);
if (v_isShared_1991_ == 0)
{
lean_ctor_set_tag(v___x_1990_, 1);
lean_ctor_set(v___x_1990_, 0, v___x_2049_);
v___x_2051_ = v___x_1990_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v___x_2049_);
lean_ctor_set(v_reuseFailAlloc_2052_, 1, v_a_1988_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
}
}
else
{
lean_object* v_a_2054_; lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
lean_dec(v_a_1985_);
lean_dec_ref(v_s_1984_);
v_a_2054_ = lean_ctor_get(v___x_1986_, 0);
v_a_2055_ = lean_ctor_get(v___x_1986_, 1);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_1986_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_inc(v_a_2054_);
lean_dec(v___x_1986_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2054_);
lean_ctor_set(v_reuseFailAlloc_2061_, 1, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_VerComparator_parse(lean_object* v_s_2063_){
_start:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2064_ = lean_unsigned_to_nat(0u);
v___x_2065_ = lean_string_utf8_byte_size(v_s_2063_);
lean_inc_ref(v_s_2063_);
v___x_2066_ = l___private_Lake_Util_Version_0__Lake_VerComparator_parseM(v_s_2063_, v___x_2064_);
if (lean_obj_tag(v___x_2066_) == 0)
{
lean_object* v_a_2067_; lean_object* v_a_2068_; uint8_t v_decide_2069_; 
v_a_2067_ = lean_ctor_get(v___x_2066_, 0);
lean_inc(v_a_2067_);
v_a_2068_ = lean_ctor_get(v___x_2066_, 1);
lean_inc(v_a_2068_);
lean_dec_ref_known(v___x_2066_, 2);
v_decide_2069_ = lean_nat_dec_eq(v_a_2068_, v___x_2065_);
if (v_decide_2069_ == 0)
{
lean_object* v_tail_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
lean_dec(v_a_2067_);
v_tail_2070_ = lean_string_utf8_extract(v_s_2063_, v_a_2068_, v___x_2065_);
lean_dec(v_a_2068_);
lean_dec_ref(v_s_2063_);
v___x_2071_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_2072_ = lean_string_append(v___x_2071_, v_tail_2070_);
lean_dec_ref(v_tail_2070_);
v___x_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2072_);
return v___x_2073_;
}
else
{
lean_object* v___x_2074_; 
lean_dec(v_a_2068_);
lean_dec_ref(v_s_2063_);
v___x_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2074_, 0, v_a_2067_);
return v___x_2074_;
}
}
else
{
lean_object* v_a_2075_; lean_object* v___x_2076_; 
lean_dec_ref(v_s_2063_);
v_a_2075_ = lean_ctor_get(v___x_2066_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2066_, 2);
v___x_2076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2076_, 0, v_a_2075_);
return v___x_2076_;
}
}
}
LEAN_EXPORT uint8_t l_Lake_VerComparator_test(lean_object* v_self_2077_, lean_object* v_ver_2078_){
_start:
{
lean_object* v_ver_2079_; uint8_t v_op_2080_; uint8_t v_includeSuffixes_2081_; lean_object* v_ver_2083_; 
v_ver_2079_ = lean_ctor_get(v_self_2077_, 0);
v_op_2080_ = lean_ctor_get_uint8(v_self_2077_, sizeof(void*)*1);
v_includeSuffixes_2081_ = lean_ctor_get_uint8(v_self_2077_, sizeof(void*)*1 + 1);
if (v_includeSuffixes_2081_ == 0)
{
lean_object* v_toSemVerCore_2100_; lean_object* v_specialDescr_2101_; lean_object* v___x_2102_; uint8_t v___x_2103_; 
v_toSemVerCore_2100_ = lean_ctor_get(v_ver_2078_, 0);
v_specialDescr_2101_ = lean_ctor_get(v_ver_2078_, 1);
v___x_2102_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v___x_2103_ = lean_string_dec_eq(v_specialDescr_2101_, v___x_2102_);
if (v___x_2103_ == 0)
{
lean_object* v_toSemVerCore_2104_; lean_object* v_specialDescr_2105_; uint8_t v___x_2106_; 
v_toSemVerCore_2104_ = lean_ctor_get(v_ver_2079_, 0);
v_specialDescr_2105_ = lean_ctor_get(v_ver_2079_, 1);
v___x_2106_ = lean_string_dec_eq(v_specialDescr_2105_, v___x_2102_);
if (v___x_2106_ == 0)
{
uint8_t v___x_2107_; 
v___x_2107_ = l_Lake_instDecidableEqSemVerCore_decEq(v_toSemVerCore_2104_, v_toSemVerCore_2100_);
if (v___x_2107_ == 0)
{
return v___x_2107_;
}
else
{
switch(v_op_2080_)
{
case 0:
{
uint8_t v___x_2108_; 
v___x_2108_ = lean_string_dec_lt(v_specialDescr_2101_, v_specialDescr_2105_);
return v___x_2108_;
}
case 1:
{
uint8_t v___x_2109_; 
v___x_2109_ = l_String_decLE(v_specialDescr_2101_, v_specialDescr_2105_);
return v___x_2109_;
}
case 2:
{
uint8_t v___x_2110_; 
v___x_2110_ = lean_string_dec_lt(v_specialDescr_2105_, v_specialDescr_2101_);
return v___x_2110_;
}
case 3:
{
uint8_t v___x_2111_; 
v___x_2111_ = l_String_decLE(v_specialDescr_2105_, v_specialDescr_2101_);
return v___x_2111_;
}
case 4:
{
uint8_t v___x_2112_; 
v___x_2112_ = lean_string_dec_eq(v_specialDescr_2101_, v_specialDescr_2105_);
return v___x_2112_;
}
default: 
{
uint8_t v___x_2113_; 
v___x_2113_ = lean_string_dec_eq(v_specialDescr_2101_, v_specialDescr_2105_);
if (v___x_2113_ == 0)
{
return v___x_2107_;
}
else
{
return v___x_2106_;
}
}
}
}
}
else
{
return v_includeSuffixes_2081_;
}
}
else
{
v_ver_2083_ = v_ver_2078_;
goto v___jp_2082_;
}
}
else
{
v_ver_2083_ = v_ver_2078_;
goto v___jp_2082_;
}
v___jp_2082_:
{
switch(v_op_2080_)
{
case 0:
{
uint8_t v___x_2084_; 
v___x_2084_ = l_Lake_StdVer_compare(v_ver_2083_, v_ver_2079_);
if (v___x_2084_ == 0)
{
uint8_t v___x_2085_; 
v___x_2085_ = 1;
return v___x_2085_;
}
else
{
uint8_t v___x_2086_; 
v___x_2086_ = 0;
return v___x_2086_;
}
}
case 1:
{
uint8_t v___x_2087_; 
v___x_2087_ = l_Lake_StdVer_compare(v_ver_2083_, v_ver_2079_);
if (v___x_2087_ == 2)
{
uint8_t v___x_2088_; 
v___x_2088_ = 0;
return v___x_2088_;
}
else
{
uint8_t v___x_2089_; 
v___x_2089_ = 1;
return v___x_2089_;
}
}
case 2:
{
uint8_t v___x_2090_; 
v___x_2090_ = l_Lake_StdVer_compare(v_ver_2079_, v_ver_2083_);
if (v___x_2090_ == 0)
{
uint8_t v___x_2091_; 
v___x_2091_ = 1;
return v___x_2091_;
}
else
{
uint8_t v___x_2092_; 
v___x_2092_ = 0;
return v___x_2092_;
}
}
case 3:
{
uint8_t v___x_2093_; 
v___x_2093_ = l_Lake_StdVer_compare(v_ver_2079_, v_ver_2083_);
if (v___x_2093_ == 2)
{
uint8_t v___x_2094_; 
v___x_2094_ = 0;
return v___x_2094_;
}
else
{
uint8_t v___x_2095_; 
v___x_2095_ = 1;
return v___x_2095_;
}
}
case 4:
{
uint8_t v___x_2096_; 
v___x_2096_ = l_Lake_instDecidableEqStdVer_decEq(v_ver_2083_, v_ver_2079_);
return v___x_2096_;
}
default: 
{
uint8_t v___x_2097_; 
v___x_2097_ = l_Lake_instDecidableEqStdVer_decEq(v_ver_2083_, v_ver_2079_);
if (v___x_2097_ == 0)
{
uint8_t v___x_2098_; 
v___x_2098_ = 1;
return v___x_2098_;
}
else
{
uint8_t v___x_2099_; 
v___x_2099_ = 0;
return v___x_2099_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_VerComparator_test___boxed(lean_object* v_self_2114_, lean_object* v_ver_2115_){
_start:
{
uint8_t v_res_2116_; lean_object* v_r_2117_; 
v_res_2116_ = l_Lake_VerComparator_test(v_self_2114_, v_ver_2115_);
lean_dec_ref(v_ver_2115_);
lean_dec_ref(v_self_2114_);
v_r_2117_ = lean_box(v_res_2116_);
return v_r_2117_;
}
}
LEAN_EXPORT lean_object* l_Lake_VerComparator_toString(lean_object* v_self_2118_){
_start:
{
lean_object* v_ver_2119_; uint8_t v_op_2120_; uint8_t v_includeSuffixes_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v_ver_2119_ = lean_ctor_get(v_self_2118_, 0);
lean_inc_ref(v_ver_2119_);
v_op_2120_ = lean_ctor_get_uint8(v_self_2118_, sizeof(void*)*1);
v_includeSuffixes_2121_ = lean_ctor_get_uint8(v_self_2118_, sizeof(void*)*1 + 1);
lean_dec_ref(v_self_2118_);
v___x_2122_ = l_Lake_ComparatorOp_toString(v_op_2120_);
v___x_2123_ = l_Lake_StdVer_toString(v_ver_2119_);
v___x_2124_ = lean_string_append(v___x_2122_, v___x_2123_);
lean_dec_ref(v___x_2123_);
if (v_includeSuffixes_2121_ == 0)
{
return v___x_2124_;
}
else
{
lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2125_ = ((lean_object*)(l_Lake_StdVer_toString___closed__0));
v___x_2126_ = lean_string_append(v___x_2124_, v___x_2125_);
return v___x_2126_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_x_2129_, lean_object* v_x_2130_, lean_object* v_x_2131_){
_start:
{
if (lean_obj_tag(v_x_2131_) == 0)
{
lean_dec(v_x_2129_);
return v_x_2130_;
}
else
{
lean_object* v_head_2132_; lean_object* v_tail_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2143_; 
v_head_2132_ = lean_ctor_get(v_x_2131_, 0);
v_tail_2133_ = lean_ctor_get(v_x_2131_, 1);
v_isSharedCheck_2143_ = !lean_is_exclusive(v_x_2131_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2135_ = v_x_2131_;
v_isShared_2136_ = v_isSharedCheck_2143_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_tail_2133_);
lean_inc(v_head_2132_);
lean_dec(v_x_2131_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2143_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2138_; 
lean_inc(v_x_2129_);
if (v_isShared_2136_ == 0)
{
lean_ctor_set_tag(v___x_2135_, 5);
lean_ctor_set(v___x_2135_, 1, v_x_2129_);
lean_ctor_set(v___x_2135_, 0, v_x_2130_);
v___x_2138_ = v___x_2135_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_x_2130_);
lean_ctor_set(v_reuseFailAlloc_2142_, 1, v_x_2129_);
v___x_2138_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2139_ = l_Lake_instReprVerComparator_repr___redArg(v_head_2132_);
v___x_2140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2138_);
lean_ctor_set(v___x_2140_, 1, v___x_2139_);
v_x_2130_ = v___x_2140_;
v_x_2131_ = v_tail_2133_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_2144_, lean_object* v_x_2145_, lean_object* v_x_2146_){
_start:
{
if (lean_obj_tag(v_x_2146_) == 0)
{
lean_dec(v_x_2144_);
return v_x_2145_;
}
else
{
lean_object* v_head_2147_; lean_object* v_tail_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2158_; 
v_head_2147_ = lean_ctor_get(v_x_2146_, 0);
v_tail_2148_ = lean_ctor_get(v_x_2146_, 1);
v_isSharedCheck_2158_ = !lean_is_exclusive(v_x_2146_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2150_ = v_x_2146_;
v_isShared_2151_ = v_isSharedCheck_2158_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_tail_2148_);
lean_inc(v_head_2147_);
lean_dec(v_x_2146_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2158_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
lean_object* v___x_2153_; 
lean_inc(v_x_2144_);
if (v_isShared_2151_ == 0)
{
lean_ctor_set_tag(v___x_2150_, 5);
lean_ctor_set(v___x_2150_, 1, v_x_2144_);
lean_ctor_set(v___x_2150_, 0, v_x_2145_);
v___x_2153_ = v___x_2150_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_x_2145_);
lean_ctor_set(v_reuseFailAlloc_2157_, 1, v_x_2144_);
v___x_2153_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2154_ = l_Lake_instReprVerComparator_repr___redArg(v_head_2147_);
v___x_2155_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2153_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
v___x_2156_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2_spec__4(v_x_2144_, v___x_2155_, v_tail_2148_);
return v___x_2156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1(lean_object* v_x_2159_, lean_object* v_x_2160_){
_start:
{
if (lean_obj_tag(v_x_2159_) == 0)
{
lean_object* v___x_2161_; 
lean_dec(v_x_2160_);
v___x_2161_ = lean_box(0);
return v___x_2161_;
}
else
{
lean_object* v_tail_2162_; 
v_tail_2162_ = lean_ctor_get(v_x_2159_, 1);
if (lean_obj_tag(v_tail_2162_) == 0)
{
lean_object* v_head_2163_; lean_object* v___x_2164_; 
lean_dec(v_x_2160_);
v_head_2163_ = lean_ctor_get(v_x_2159_, 0);
lean_inc(v_head_2163_);
lean_dec_ref_known(v_x_2159_, 2);
v___x_2164_ = l_Lake_instReprVerComparator_repr___redArg(v_head_2163_);
return v___x_2164_;
}
else
{
lean_object* v_head_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
lean_inc(v_tail_2162_);
v_head_2165_ = lean_ctor_get(v_x_2159_, 0);
lean_inc(v_head_2165_);
lean_dec_ref_known(v_x_2159_, 2);
v___x_2166_ = l_Lake_instReprVerComparator_repr___redArg(v_head_2165_);
v___x_2167_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1_spec__2(v_x_2160_, v___x_2166_, v_tail_2162_);
return v___x_2167_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2173_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__0));
v___x_2174_ = lean_string_length(v___x_2173_);
return v___x_2174_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2175_; lean_object* v___x_2176_; 
v___x_2175_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3, &l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3_once, _init_l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__3);
v___x_2176_ = lean_nat_to_int(v___x_2175_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0(lean_object* v_xs_2184_){
_start:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; 
v___x_2185_ = lean_array_get_size(v_xs_2184_);
v___x_2186_ = lean_unsigned_to_nat(0u);
v___x_2187_ = lean_nat_dec_eq(v___x_2185_, v___x_2186_);
if (v___x_2187_ == 0)
{
lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2188_ = lean_array_to_list(v_xs_2184_);
v___x_2189_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__1));
v___x_2190_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0_spec__1(v___x_2188_, v___x_2189_);
v___x_2191_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4, &l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4_once, _init_l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4);
v___x_2192_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__5));
v___x_2193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2192_);
lean_ctor_set(v___x_2193_, 1, v___x_2190_);
v___x_2194_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__6));
v___x_2195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2195_, 0, v___x_2193_);
lean_ctor_set(v___x_2195_, 1, v___x_2194_);
v___x_2196_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2191_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
v___x_2197_ = l_Std_Format_fill(v___x_2196_);
return v___x_2197_;
}
else
{
lean_object* v___x_2198_; 
lean_dec_ref(v_xs_2184_);
v___x_2198_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__8));
return v___x_2198_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1_spec__3(lean_object* v_x_2199_, lean_object* v_x_2200_, lean_object* v_x_2201_){
_start:
{
if (lean_obj_tag(v_x_2201_) == 0)
{
lean_dec(v_x_2199_);
return v_x_2200_;
}
else
{
lean_object* v_head_2202_; lean_object* v_tail_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2213_; 
v_head_2202_ = lean_ctor_get(v_x_2201_, 0);
v_tail_2203_ = lean_ctor_get(v_x_2201_, 1);
v_isSharedCheck_2213_ = !lean_is_exclusive(v_x_2201_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2205_ = v_x_2201_;
v_isShared_2206_ = v_isSharedCheck_2213_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_tail_2203_);
lean_inc(v_head_2202_);
lean_dec(v_x_2201_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2213_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
lean_inc(v_x_2199_);
if (v_isShared_2206_ == 0)
{
lean_ctor_set_tag(v___x_2205_, 5);
lean_ctor_set(v___x_2205_, 1, v_x_2199_);
lean_ctor_set(v___x_2205_, 0, v_x_2200_);
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_x_2200_);
lean_ctor_set(v_reuseFailAlloc_2212_, 1, v_x_2199_);
v___x_2208_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2209_ = l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0(v_head_2202_);
v___x_2210_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2208_);
lean_ctor_set(v___x_2210_, 1, v___x_2209_);
v_x_2200_ = v___x_2210_;
v_x_2201_ = v_tail_2203_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1(lean_object* v_x_2214_, lean_object* v_x_2215_){
_start:
{
if (lean_obj_tag(v_x_2214_) == 0)
{
lean_object* v___x_2216_; 
lean_dec(v_x_2215_);
v___x_2216_ = lean_box(0);
return v___x_2216_;
}
else
{
lean_object* v_tail_2217_; 
v_tail_2217_ = lean_ctor_get(v_x_2214_, 1);
if (lean_obj_tag(v_tail_2217_) == 0)
{
lean_object* v_head_2218_; lean_object* v___x_2219_; 
lean_dec(v_x_2215_);
v_head_2218_ = lean_ctor_get(v_x_2214_, 0);
lean_inc(v_head_2218_);
lean_dec_ref_known(v_x_2214_, 2);
v___x_2219_ = l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0(v_head_2218_);
return v___x_2219_;
}
else
{
lean_object* v_head_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
lean_inc(v_tail_2217_);
v_head_2220_ = lean_ctor_get(v_x_2214_, 0);
lean_inc(v_head_2220_);
lean_dec_ref_known(v_x_2214_, 2);
v___x_2221_ = l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0(v_head_2220_);
v___x_2222_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1_spec__3(v_x_2215_, v___x_2221_, v_tail_2217_);
return v___x_2222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprVerRange_repr_spec__0(lean_object* v_xs_2223_){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; uint8_t v___x_2226_; 
v___x_2224_ = lean_array_get_size(v_xs_2223_);
v___x_2225_ = lean_unsigned_to_nat(0u);
v___x_2226_ = lean_nat_dec_eq(v___x_2224_, v___x_2225_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2227_ = lean_array_to_list(v_xs_2223_);
v___x_2228_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__1));
v___x_2229_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__1(v___x_2227_, v___x_2228_);
v___x_2230_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4, &l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4_once, _init_l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__4);
v___x_2231_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__5));
v___x_2232_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2232_, 0, v___x_2231_);
lean_ctor_set(v___x_2232_, 1, v___x_2229_);
v___x_2233_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__6));
v___x_2234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2232_);
lean_ctor_set(v___x_2234_, 1, v___x_2233_);
v___x_2235_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2230_);
lean_ctor_set(v___x_2235_, 1, v___x_2234_);
v___x_2236_ = l_Std_Format_fill(v___x_2235_);
return v___x_2236_;
}
else
{
lean_object* v___x_2237_; 
lean_dec_ref(v_xs_2223_);
v___x_2237_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lake_instReprVerRange_repr_spec__0_spec__0___closed__8));
return v___x_2237_;
}
}
}
static lean_object* _init_l_Lake_instReprVerRange_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2247_ = lean_unsigned_to_nat(12u);
v___x_2248_ = lean_nat_to_int(v___x_2247_);
return v___x_2248_;
}
}
static lean_object* _init_l_Lake_instReprVerRange_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2252_ = lean_unsigned_to_nat(11u);
v___x_2253_ = lean_nat_to_int(v___x_2252_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr___redArg(lean_object* v_x_2254_){
_start:
{
lean_object* v_toString_2255_; lean_object* v_clauses_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2290_; 
v_toString_2255_ = lean_ctor_get(v_x_2254_, 0);
v_clauses_2256_ = lean_ctor_get(v_x_2254_, 1);
v_isSharedCheck_2290_ = !lean_is_exclusive(v_x_2254_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2258_ = v_x_2254_;
v_isShared_2259_ = v_isSharedCheck_2290_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_clauses_2256_);
lean_inc(v_toString_2255_);
lean_dec(v_x_2254_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2290_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2266_; 
v___x_2260_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__5));
v___x_2261_ = ((lean_object*)(l_Lake_instReprVerRange_repr___redArg___closed__3));
v___x_2262_ = lean_obj_once(&l_Lake_instReprVerRange_repr___redArg___closed__4, &l_Lake_instReprVerRange_repr___redArg___closed__4_once, _init_l_Lake_instReprVerRange_repr___redArg___closed__4);
v___x_2263_ = l_String_quote(v_toString_2255_);
v___x_2264_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2264_, 0, v___x_2263_);
if (v_isShared_2259_ == 0)
{
lean_ctor_set_tag(v___x_2258_, 4);
lean_ctor_set(v___x_2258_, 1, v___x_2264_);
lean_ctor_set(v___x_2258_, 0, v___x_2262_);
v___x_2266_ = v___x_2258_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v___x_2262_);
lean_ctor_set(v_reuseFailAlloc_2289_, 1, v___x_2264_);
v___x_2266_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
uint8_t v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2267_ = 0;
v___x_2268_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2268_, 0, v___x_2266_);
lean_ctor_set_uint8(v___x_2268_, sizeof(void*)*1, v___x_2267_);
v___x_2269_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2261_);
lean_ctor_set(v___x_2269_, 1, v___x_2268_);
v___x_2270_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__9));
v___x_2271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2269_);
lean_ctor_set(v___x_2271_, 1, v___x_2270_);
v___x_2272_ = lean_box(1);
v___x_2273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2271_);
lean_ctor_set(v___x_2273_, 1, v___x_2272_);
v___x_2274_ = ((lean_object*)(l_Lake_instReprVerRange_repr___redArg___closed__6));
v___x_2275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2273_);
lean_ctor_set(v___x_2275_, 1, v___x_2274_);
v___x_2276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
lean_ctor_set(v___x_2276_, 1, v___x_2260_);
v___x_2277_ = lean_obj_once(&l_Lake_instReprVerRange_repr___redArg___closed__7, &l_Lake_instReprVerRange_repr___redArg___closed__7_once, _init_l_Lake_instReprVerRange_repr___redArg___closed__7);
v___x_2278_ = l_Array_repr___at___00Lake_instReprVerRange_repr_spec__0(v_clauses_2256_);
v___x_2279_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2277_);
lean_ctor_set(v___x_2279_, 1, v___x_2278_);
v___x_2280_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2280_, 0, v___x_2279_);
lean_ctor_set_uint8(v___x_2280_, sizeof(void*)*1, v___x_2267_);
v___x_2281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2276_);
lean_ctor_set(v___x_2281_, 1, v___x_2280_);
v___x_2282_ = lean_obj_once(&l_Lake_instReprSemVerCore_repr___redArg___closed__16, &l_Lake_instReprSemVerCore_repr___redArg___closed__16_once, _init_l_Lake_instReprSemVerCore_repr___redArg___closed__16);
v___x_2283_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__17));
v___x_2284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2283_);
lean_ctor_set(v___x_2284_, 1, v___x_2281_);
v___x_2285_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__18));
v___x_2286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2284_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
v___x_2287_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2282_);
lean_ctor_set(v___x_2287_, 1, v___x_2286_);
v___x_2288_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2288_, 0, v___x_2287_);
lean_ctor_set_uint8(v___x_2288_, sizeof(void*)*1, v___x_2267_);
return v___x_2288_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr(lean_object* v_x_2291_, lean_object* v_prec_2292_){
_start:
{
lean_object* v___x_2293_; 
v___x_2293_ = l_Lake_instReprVerRange_repr___redArg(v_x_2291_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerRange_repr___boxed(lean_object* v_x_2294_, lean_object* v_prec_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l_Lake_instReprVerRange_repr(v_x_2294_, v_prec_2295_);
lean_dec(v_prec_2295_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lake_VerRange_instToString___lam__0(lean_object* v_self_2306_){
_start:
{
lean_object* v_toString_2307_; 
v_toString_2307_ = lean_ctor_get(v_self_2306_, 0);
lean_inc_ref(v_toString_2307_);
return v_toString_2307_;
}
}
LEAN_EXPORT lean_object* l_Lake_VerRange_instToString___lam__0___boxed(lean_object* v_self_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l_Lake_VerRange_instToString___lam__0(v_self_2308_);
lean_dec_ref(v_self_2308_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0(lean_object* v_as_2313_, size_t v_i_2314_, size_t v_stop_2315_, lean_object* v_b_2316_){
_start:
{
uint8_t v___x_2317_; 
v___x_2317_ = lean_usize_dec_eq(v_i_2314_, v_stop_2315_);
if (v___x_2317_ == 0)
{
lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; size_t v___x_2323_; size_t v___x_2324_; 
v___x_2318_ = lean_array_uget_borrowed(v_as_2313_, v_i_2314_);
v___x_2319_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___closed__0));
v___x_2320_ = lean_string_append(v_b_2316_, v___x_2319_);
lean_inc(v___x_2318_);
v___x_2321_ = l_Lake_VerComparator_toString(v___x_2318_);
v___x_2322_ = lean_string_append(v___x_2320_, v___x_2321_);
lean_dec_ref(v___x_2321_);
v___x_2323_ = ((size_t)1ULL);
v___x_2324_ = lean_usize_add(v_i_2314_, v___x_2323_);
v_i_2314_ = v___x_2324_;
v_b_2316_ = v___x_2322_;
goto _start;
}
else
{
return v_b_2316_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0___boxed(lean_object* v_as_2326_, lean_object* v_i_2327_, lean_object* v_stop_2328_, lean_object* v_b_2329_){
_start:
{
size_t v_i_boxed_2330_; size_t v_stop_boxed_2331_; lean_object* v_res_2332_; 
v_i_boxed_2330_ = lean_unbox_usize(v_i_2327_);
lean_dec(v_i_2327_);
v_stop_boxed_2331_ = lean_unbox_usize(v_stop_2328_);
lean_dec(v_stop_2328_);
v_res_2332_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0(v_as_2326_, v_i_boxed_2330_, v_stop_boxed_2331_, v_b_2329_);
lean_dec_ref(v_as_2326_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds(lean_object* v_ands_2334_){
_start:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; 
v___x_2335_ = lean_array_get_size(v_ands_2334_);
v___x_2336_ = lean_unsigned_to_nat(0u);
v___x_2337_ = lean_nat_dec_eq(v___x_2335_, v___x_2336_);
if (v___x_2337_ == 0)
{
lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; uint8_t v___x_2341_; 
v___x_2338_ = lean_array_fget_borrowed(v_ands_2334_, v___x_2336_);
lean_inc(v___x_2338_);
v___x_2339_ = l_Lake_VerComparator_toString(v___x_2338_);
v___x_2340_ = lean_unsigned_to_nat(1u);
v___x_2341_ = lean_nat_dec_lt(v___x_2340_, v___x_2335_);
if (v___x_2341_ == 0)
{
return v___x_2339_;
}
else
{
uint8_t v___x_2342_; 
v___x_2342_ = lean_nat_dec_le(v___x_2335_, v___x_2335_);
if (v___x_2342_ == 0)
{
if (v___x_2341_ == 0)
{
return v___x_2339_;
}
else
{
size_t v___x_2343_; size_t v___x_2344_; lean_object* v___x_2345_; 
v___x_2343_ = ((size_t)1ULL);
v___x_2344_ = lean_usize_of_nat(v___x_2335_);
v___x_2345_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0(v_ands_2334_, v___x_2343_, v___x_2344_, v___x_2339_);
return v___x_2345_;
}
}
else
{
size_t v___x_2346_; size_t v___x_2347_; lean_object* v___x_2348_; 
v___x_2346_ = ((size_t)1ULL);
v___x_2347_ = lean_usize_of_nat(v___x_2335_);
v___x_2348_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds_spec__0(v_ands_2334_, v___x_2346_, v___x_2347_, v___x_2339_);
return v___x_2348_;
}
}
}
else
{
lean_object* v___x_2349_; 
v___x_2349_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___closed__0));
return v___x_2349_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds___boxed(lean_object* v_ands_2350_){
_start:
{
lean_object* v_res_2351_; 
v_res_2351_ = l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds(v_ands_2350_);
lean_dec_ref(v_ands_2350_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0(lean_object* v_as_2353_, size_t v_i_2354_, size_t v_stop_2355_, lean_object* v_b_2356_){
_start:
{
uint8_t v___x_2357_; 
v___x_2357_ = lean_usize_dec_eq(v_i_2354_, v_stop_2355_);
if (v___x_2357_ == 0)
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; size_t v___x_2363_; size_t v___x_2364_; 
v___x_2358_ = lean_array_uget_borrowed(v_as_2353_, v_i_2354_);
v___x_2359_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___closed__0));
v___x_2360_ = lean_string_append(v_b_2356_, v___x_2359_);
v___x_2361_ = l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds(v___x_2358_);
v___x_2362_ = lean_string_append(v___x_2360_, v___x_2361_);
lean_dec_ref(v___x_2361_);
v___x_2363_ = ((size_t)1ULL);
v___x_2364_ = lean_usize_add(v_i_2354_, v___x_2363_);
v_i_2354_ = v___x_2364_;
v_b_2356_ = v___x_2362_;
goto _start;
}
else
{
return v_b_2356_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0___boxed(lean_object* v_as_2366_, lean_object* v_i_2367_, lean_object* v_stop_2368_, lean_object* v_b_2369_){
_start:
{
size_t v_i_boxed_2370_; size_t v_stop_boxed_2371_; lean_object* v_res_2372_; 
v_i_boxed_2370_ = lean_unbox_usize(v_i_2367_);
lean_dec(v_i_2367_);
v_stop_boxed_2371_ = lean_unbox_usize(v_stop_2368_);
lean_dec(v_stop_2368_);
v_res_2372_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0(v_as_2366_, v_i_boxed_2370_, v_stop_boxed_2371_, v_b_2369_);
lean_dec_ref(v_as_2366_);
return v_res_2372_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs(lean_object* v_ors_2373_){
_start:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; uint8_t v___x_2376_; 
v___x_2374_ = lean_array_get_size(v_ors_2373_);
v___x_2375_ = lean_unsigned_to_nat(0u);
v___x_2376_ = lean_nat_dec_eq(v___x_2374_, v___x_2375_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; uint8_t v___x_2380_; 
v___x_2377_ = lean_array_fget_borrowed(v_ors_2373_, v___x_2375_);
v___x_2378_ = l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtAnds(v___x_2377_);
v___x_2379_ = lean_unsigned_to_nat(1u);
v___x_2380_ = lean_nat_dec_lt(v___x_2379_, v___x_2374_);
if (v___x_2380_ == 0)
{
return v___x_2378_;
}
else
{
uint8_t v___x_2381_; 
v___x_2381_ = lean_nat_dec_le(v___x_2374_, v___x_2374_);
if (v___x_2381_ == 0)
{
if (v___x_2380_ == 0)
{
return v___x_2378_;
}
else
{
size_t v___x_2382_; size_t v___x_2383_; lean_object* v___x_2384_; 
v___x_2382_ = ((size_t)1ULL);
v___x_2383_ = lean_usize_of_nat(v___x_2374_);
v___x_2384_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0(v_ors_2373_, v___x_2382_, v___x_2383_, v___x_2378_);
return v___x_2384_;
}
}
else
{
size_t v___x_2385_; size_t v___x_2386_; lean_object* v___x_2387_; 
v___x_2385_ = ((size_t)1ULL);
v___x_2386_ = lean_usize_of_nat(v___x_2374_);
v___x_2387_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs_spec__0(v_ors_2373_, v___x_2385_, v___x_2386_, v___x_2378_);
return v___x_2387_;
}
}
}
else
{
lean_object* v___x_2388_; 
v___x_2388_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
return v___x_2388_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs___boxed(lean_object* v_ors_2389_){
_start:
{
lean_object* v_res_2390_; 
v_res_2390_ = l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs(v_ors_2389_);
lean_dec_ref(v_ors_2389_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l_Lake_VerRange_ofClauses(lean_object* v_clauses_2391_){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2392_ = l___private_Lake_Util_Version_0__Lake_VerRange_ofClauses_fmtOrs(v_clauses_2391_);
v___x_2393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2392_);
lean_ctor_set(v___x_2393_, 1, v_clauses_2391_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_appendRange(lean_object* v_ands_2394_, lean_object* v_minVer_2395_, lean_object* v_maxVer_2396_, lean_object* v_specialDescr_2397_){
_start:
{
lean_object* v_minVer_2398_; lean_object* v___x_2399_; lean_object* v_maxVer_2400_; uint8_t v___x_2401_; uint8_t v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; uint8_t v___x_2405_; uint8_t v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v_minVer_2398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2398_, 0, v_minVer_2395_);
lean_ctor_set(v_minVer_2398_, 1, v_specialDescr_2397_);
v___x_2399_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2400_, 0, v_maxVer_2396_);
lean_ctor_set(v_maxVer_2400_, 1, v___x_2399_);
v___x_2401_ = 3;
v___x_2402_ = 0;
v___x_2403_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2403_, 0, v_minVer_2398_);
lean_ctor_set_uint8(v___x_2403_, sizeof(void*)*1, v___x_2401_);
lean_ctor_set_uint8(v___x_2403_, sizeof(void*)*1 + 1, v___x_2402_);
v___x_2404_ = lean_array_push(v_ands_2394_, v___x_2403_);
v___x_2405_ = 0;
v___x_2406_ = 1;
v___x_2407_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2407_, 0, v_maxVer_2400_);
lean_ctor_set_uint8(v___x_2407_, sizeof(void*)*1, v___x_2405_);
lean_ctor_set_uint8(v___x_2407_, sizeof(void*)*1 + 1, v___x_2406_);
v___x_2408_ = lean_array_push(v___x_2404_, v___x_2407_);
return v___x_2408_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde(lean_object* v_s_2411_, lean_object* v_ands_2412_, lean_object* v_a_2413_){
_start:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v_a_2417_; lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2589_; 
v___x_2414_ = lean_unsigned_to_nat(0u);
v___x_2415_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0));
lean_inc(v_a_2413_);
lean_inc_ref(v_s_2411_);
v___x_2416_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_2411_, v___x_2415_, v_a_2413_, v_a_2413_);
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
v_a_2418_ = lean_ctor_get(v___x_2416_, 1);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2420_ = v___x_2416_;
v_isShared_2421_ = v_isSharedCheck_2589_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_inc(v_a_2417_);
lean_dec(v___x_2416_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2589_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2422_; 
v___x_2422_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(v_s_2411_, v_a_2418_);
lean_dec_ref(v_s_2411_);
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v_a_2423_; lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2579_; 
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
v_a_2424_ = lean_ctor_get(v___x_2422_, 1);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2426_ = v___x_2422_;
v_isShared_2427_ = v_isSharedCheck_2579_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_inc(v_a_2423_);
lean_dec(v___x_2422_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2579_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; uint8_t v___x_2430_; 
v___x_2428_ = lean_array_get_size(v_a_2417_);
v___x_2429_ = lean_unsigned_to_nat(1u);
v___x_2430_ = lean_nat_dec_eq(v___x_2428_, v___x_2429_);
if (v___x_2430_ == 0)
{
lean_object* v___x_2431_; uint8_t v___x_2432_; 
v___x_2431_ = lean_unsigned_to_nat(2u);
v___x_2432_ = lean_nat_dec_eq(v___x_2428_, v___x_2431_);
if (v___x_2432_ == 0)
{
lean_object* v___x_2433_; uint8_t v___x_2434_; 
v___x_2433_ = lean_unsigned_to_nat(3u);
v___x_2434_ = lean_nat_dec_eq(v___x_2428_, v___x_2433_);
if (v___x_2434_ == 0)
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2441_; 
lean_dec(v_a_2423_);
lean_del_object(v___x_2420_);
lean_dec(v_a_2417_);
lean_dec_ref(v_ands_2412_);
v___x_2435_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__0));
v___x_2436_ = l_Nat_reprFast(v___x_2428_);
v___x_2437_ = lean_string_append(v___x_2435_, v___x_2436_);
lean_dec_ref(v___x_2436_);
v___x_2438_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1));
v___x_2439_ = lean_string_append(v___x_2437_, v___x_2438_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set_tag(v___x_2426_, 1);
lean_ctor_set(v___x_2426_, 0, v___x_2439_);
v___x_2441_ = v___x_2426_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2439_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v_a_2424_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
else
{
lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2443_ = lean_array_fget_borrowed(v_a_2417_, v___x_2414_);
v___x_2444_ = l_String_Slice_toNat_x3f(v___x_2443_);
if (lean_obj_tag(v___x_2444_) == 1)
{
lean_object* v_val_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v_val_2445_ = lean_ctor_get(v___x_2444_, 0);
lean_inc(v_val_2445_);
lean_dec_ref_known(v___x_2444_, 1);
v___x_2446_ = lean_array_fget_borrowed(v_a_2417_, v___x_2429_);
v___x_2447_ = l_String_Slice_toNat_x3f(v___x_2446_);
if (lean_obj_tag(v___x_2447_) == 1)
{
lean_object* v_val_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v_val_2448_ = lean_ctor_get(v___x_2447_, 0);
lean_inc(v_val_2448_);
lean_dec_ref_known(v___x_2447_, 1);
v___x_2449_ = lean_array_fget(v_a_2417_, v___x_2431_);
lean_dec(v_a_2417_);
v___x_2450_ = l_String_Slice_toNat_x3f(v___x_2449_);
if (lean_obj_tag(v___x_2450_) == 1)
{
lean_object* v_val_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v_minVer_2456_; 
lean_dec(v___x_2449_);
v_val_2451_ = lean_ctor_get(v___x_2450_, 0);
lean_inc(v_val_2451_);
lean_dec_ref_known(v___x_2450_, 1);
lean_inc(v_val_2448_);
lean_inc(v_val_2445_);
v___x_2452_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2452_, 0, v_val_2445_);
lean_ctor_set(v___x_2452_, 1, v_val_2448_);
lean_ctor_set(v___x_2452_, 2, v_val_2451_);
v___x_2453_ = lean_nat_add(v_val_2448_, v___x_2429_);
lean_dec(v_val_2448_);
v___x_2454_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2454_, 0, v_val_2445_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
lean_ctor_set(v___x_2454_, 2, v___x_2414_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 1, v_a_2423_);
lean_ctor_set(v___x_2420_, 0, v___x_2452_);
v_minVer_2456_ = v___x_2420_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v___x_2452_);
lean_ctor_set(v_reuseFailAlloc_2468_, 1, v_a_2423_);
v_minVer_2456_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
lean_object* v___x_2457_; lean_object* v_maxVer_2458_; uint8_t v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; uint8_t v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2466_; 
v___x_2457_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2458_, 0, v___x_2454_);
lean_ctor_set(v_maxVer_2458_, 1, v___x_2457_);
v___x_2459_ = 3;
v___x_2460_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2460_, 0, v_minVer_2456_);
lean_ctor_set_uint8(v___x_2460_, sizeof(void*)*1, v___x_2459_);
lean_ctor_set_uint8(v___x_2460_, sizeof(void*)*1 + 1, v___x_2432_);
v___x_2461_ = lean_array_push(v_ands_2412_, v___x_2460_);
v___x_2462_ = 0;
v___x_2463_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2463_, 0, v_maxVer_2458_);
lean_ctor_set_uint8(v___x_2463_, sizeof(void*)*1, v___x_2462_);
lean_ctor_set_uint8(v___x_2463_, sizeof(void*)*1 + 1, v___x_2434_);
v___x_2464_ = lean_array_push(v___x_2461_, v___x_2463_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 0, v___x_2464_);
v___x_2466_ = v___x_2426_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v___x_2464_);
lean_ctor_set(v_reuseFailAlloc_2467_, 1, v_a_2424_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
}
else
{
lean_object* v_str_2469_; lean_object* v_startInclusive_2470_; lean_object* v_endExclusive_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2478_; 
lean_dec(v___x_2450_);
lean_dec(v_val_2448_);
lean_dec(v_val_2445_);
lean_dec(v_a_2423_);
lean_del_object(v___x_2420_);
lean_dec_ref(v_ands_2412_);
v_str_2469_ = lean_ctor_get(v___x_2449_, 0);
lean_inc_ref(v_str_2469_);
v_startInclusive_2470_ = lean_ctor_get(v___x_2449_, 1);
lean_inc(v_startInclusive_2470_);
v_endExclusive_2471_ = lean_ctor_get(v___x_2449_, 2);
lean_inc(v_endExclusive_2471_);
lean_dec(v___x_2449_);
v___x_2472_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3));
v___x_2473_ = lean_string_utf8_extract_fast(v_str_2469_, v_startInclusive_2470_, v_endExclusive_2471_);
lean_dec(v_endExclusive_2471_);
lean_dec(v_startInclusive_2470_);
lean_dec_ref(v_str_2469_);
v___x_2474_ = lean_string_append(v___x_2472_, v___x_2473_);
lean_dec_ref(v___x_2473_);
v___x_2475_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2476_ = lean_string_append(v___x_2474_, v___x_2475_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set_tag(v___x_2426_, 1);
lean_ctor_set(v___x_2426_, 0, v___x_2476_);
v___x_2478_ = v___x_2426_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v___x_2476_);
lean_ctor_set(v_reuseFailAlloc_2479_, 1, v_a_2424_);
v___x_2478_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
return v___x_2478_;
}
}
}
else
{
lean_object* v_str_2480_; lean_object* v_startInclusive_2481_; lean_object* v_endExclusive_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2489_; 
lean_inc(v___x_2446_);
lean_dec(v___x_2447_);
lean_dec(v_val_2445_);
lean_dec(v_a_2423_);
lean_del_object(v___x_2420_);
lean_dec(v_a_2417_);
lean_dec_ref(v_ands_2412_);
v_str_2480_ = lean_ctor_get(v___x_2446_, 0);
lean_inc_ref(v_str_2480_);
v_startInclusive_2481_ = lean_ctor_get(v___x_2446_, 1);
lean_inc(v_startInclusive_2481_);
v_endExclusive_2482_ = lean_ctor_get(v___x_2446_, 2);
lean_inc(v_endExclusive_2482_);
lean_dec(v___x_2446_);
v___x_2483_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4));
v___x_2484_ = lean_string_utf8_extract_fast(v_str_2480_, v_startInclusive_2481_, v_endExclusive_2482_);
lean_dec(v_endExclusive_2482_);
lean_dec(v_startInclusive_2481_);
lean_dec_ref(v_str_2480_);
v___x_2485_ = lean_string_append(v___x_2483_, v___x_2484_);
lean_dec_ref(v___x_2484_);
v___x_2486_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2487_ = lean_string_append(v___x_2485_, v___x_2486_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set_tag(v___x_2426_, 1);
lean_ctor_set(v___x_2426_, 0, v___x_2487_);
v___x_2489_ = v___x_2426_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v___x_2487_);
lean_ctor_set(v_reuseFailAlloc_2490_, 1, v_a_2424_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
else
{
lean_object* v_str_2491_; lean_object* v_startInclusive_2492_; lean_object* v_endExclusive_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2500_; 
lean_inc(v___x_2443_);
lean_dec(v___x_2444_);
lean_dec(v_a_2423_);
lean_del_object(v___x_2420_);
lean_dec(v_a_2417_);
lean_dec_ref(v_ands_2412_);
v_str_2491_ = lean_ctor_get(v___x_2443_, 0);
lean_inc_ref(v_str_2491_);
v_startInclusive_2492_ = lean_ctor_get(v___x_2443_, 1);
lean_inc(v_startInclusive_2492_);
v_endExclusive_2493_ = lean_ctor_get(v___x_2443_, 2);
lean_inc(v_endExclusive_2493_);
lean_dec(v___x_2443_);
v___x_2494_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2495_ = lean_string_utf8_extract_fast(v_str_2491_, v_startInclusive_2492_, v_endExclusive_2493_);
lean_dec(v_endExclusive_2493_);
lean_dec(v_startInclusive_2492_);
lean_dec_ref(v_str_2491_);
v___x_2496_ = lean_string_append(v___x_2494_, v___x_2495_);
lean_dec_ref(v___x_2495_);
v___x_2497_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2498_ = lean_string_append(v___x_2496_, v___x_2497_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set_tag(v___x_2426_, 1);
lean_ctor_set(v___x_2426_, 0, v___x_2498_);
v___x_2500_ = v___x_2426_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v___x_2498_);
lean_ctor_set(v_reuseFailAlloc_2501_, 1, v_a_2424_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
else
{
lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2502_ = lean_array_fget_borrowed(v_a_2417_, v___x_2414_);
v___x_2503_ = l_String_Slice_toNat_x3f(v___x_2502_);
if (lean_obj_tag(v___x_2503_) == 1)
{
lean_object* v_val_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; 
v_val_2504_ = lean_ctor_get(v___x_2503_, 0);
lean_inc(v_val_2504_);
lean_dec_ref_known(v___x_2503_, 1);
v___x_2505_ = lean_array_fget(v_a_2417_, v___x_2429_);
lean_dec(v_a_2417_);
v___x_2506_ = l_String_Slice_toNat_x3f(v___x_2505_);
if (lean_obj_tag(v___x_2506_) == 1)
{
lean_object* v_val_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v_minVer_2512_; 
lean_dec(v___x_2505_);
v_val_2507_ = lean_ctor_get(v___x_2506_, 0);
lean_inc_n(v_val_2507_, 2);
lean_dec_ref_known(v___x_2506_, 1);
lean_inc(v_val_2504_);
v___x_2508_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2508_, 0, v_val_2504_);
lean_ctor_set(v___x_2508_, 1, v_val_2507_);
lean_ctor_set(v___x_2508_, 2, v___x_2414_);
v___x_2509_ = lean_nat_add(v_val_2507_, v___x_2429_);
lean_dec(v_val_2507_);
v___x_2510_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2510_, 0, v_val_2504_);
lean_ctor_set(v___x_2510_, 1, v___x_2509_);
lean_ctor_set(v___x_2510_, 2, v___x_2414_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 1, v_a_2423_);
lean_ctor_set(v___x_2420_, 0, v___x_2508_);
v_minVer_2512_ = v___x_2420_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v___x_2508_);
lean_ctor_set(v_reuseFailAlloc_2524_, 1, v_a_2423_);
v_minVer_2512_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
lean_object* v___x_2513_; lean_object* v_maxVer_2514_; uint8_t v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; uint8_t v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2522_; 
v___x_2513_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2514_, 0, v___x_2510_);
lean_ctor_set(v_maxVer_2514_, 1, v___x_2513_);
v___x_2515_ = 3;
v___x_2516_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2516_, 0, v_minVer_2512_);
lean_ctor_set_uint8(v___x_2516_, sizeof(void*)*1, v___x_2515_);
lean_ctor_set_uint8(v___x_2516_, sizeof(void*)*1 + 1, v___x_2430_);
v___x_2517_ = lean_array_push(v_ands_2412_, v___x_2516_);
v___x_2518_ = 0;
v___x_2519_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2519_, 0, v_maxVer_2514_);
lean_ctor_set_uint8(v___x_2519_, sizeof(void*)*1, v___x_2518_);
lean_ctor_set_uint8(v___x_2519_, sizeof(void*)*1 + 1, v___x_2432_);
v___x_2520_ = lean_array_push(v___x_2517_, v___x_2519_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 0, v___x_2520_);
v___x_2522_ = v___x_2426_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v___x_2520_);
lean_ctor_set(v_reuseFailAlloc_2523_, 1, v_a_2424_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
else
{
lean_object* v_str_2525_; lean_object* v_startInclusive_2526_; lean_object* v_endExclusive_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2534_; 
lean_dec(v___x_2506_);
lean_dec(v_val_2504_);
lean_dec(v_a_2423_);
lean_del_object(v___x_2420_);
lean_dec_ref(v_ands_2412_);
v_str_2525_ = lean_ctor_get(v___x_2505_, 0);
lean_inc_ref(v_str_2525_);
v_startInclusive_2526_ = lean_ctor_get(v___x_2505_, 1);
lean_inc(v_startInclusive_2526_);
v_endExclusive_2527_ = lean_ctor_get(v___x_2505_, 2);
lean_inc(v_endExclusive_2527_);
lean_dec(v___x_2505_);
v___x_2528_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4));
v___x_2529_ = lean_string_utf8_extract_fast(v_str_2525_, v_startInclusive_2526_, v_endExclusive_2527_);
lean_dec(v_endExclusive_2527_);
lean_dec(v_startInclusive_2526_);
lean_dec_ref(v_str_2525_);
v___x_2530_ = lean_string_append(v___x_2528_, v___x_2529_);
lean_dec_ref(v___x_2529_);
v___x_2531_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2532_ = lean_string_append(v___x_2530_, v___x_2531_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set_tag(v___x_2426_, 1);
lean_ctor_set(v___x_2426_, 0, v___x_2532_);
v___x_2534_ = v___x_2426_;
goto v_reusejp_2533_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v___x_2532_);
lean_ctor_set(v_reuseFailAlloc_2535_, 1, v_a_2424_);
v___x_2534_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2533_;
}
v_reusejp_2533_:
{
return v___x_2534_;
}
}
}
else
{
lean_object* v_str_2536_; lean_object* v_startInclusive_2537_; lean_object* v_endExclusive_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2545_; 
lean_inc(v___x_2502_);
lean_dec(v___x_2503_);
lean_dec(v_a_2423_);
lean_del_object(v___x_2420_);
lean_dec(v_a_2417_);
lean_dec_ref(v_ands_2412_);
v_str_2536_ = lean_ctor_get(v___x_2502_, 0);
lean_inc_ref(v_str_2536_);
v_startInclusive_2537_ = lean_ctor_get(v___x_2502_, 1);
lean_inc(v_startInclusive_2537_);
v_endExclusive_2538_ = lean_ctor_get(v___x_2502_, 2);
lean_inc(v_endExclusive_2538_);
lean_dec(v___x_2502_);
v___x_2539_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2540_ = lean_string_utf8_extract_fast(v_str_2536_, v_startInclusive_2537_, v_endExclusive_2538_);
lean_dec(v_endExclusive_2538_);
lean_dec(v_startInclusive_2537_);
lean_dec_ref(v_str_2536_);
v___x_2541_ = lean_string_append(v___x_2539_, v___x_2540_);
lean_dec_ref(v___x_2540_);
v___x_2542_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2543_ = lean_string_append(v___x_2541_, v___x_2542_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set_tag(v___x_2426_, 1);
lean_ctor_set(v___x_2426_, 0, v___x_2543_);
v___x_2545_ = v___x_2426_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v___x_2543_);
lean_ctor_set(v_reuseFailAlloc_2546_, 1, v_a_2424_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
else
{
lean_object* v___x_2547_; lean_object* v___x_2548_; 
v___x_2547_ = lean_array_fget(v_a_2417_, v___x_2414_);
lean_dec(v_a_2417_);
v___x_2548_ = l_String_Slice_toNat_x3f(v___x_2547_);
if (lean_obj_tag(v___x_2548_) == 1)
{
lean_object* v_val_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v_minVer_2554_; 
lean_dec(v___x_2547_);
v_val_2549_ = lean_ctor_get(v___x_2548_, 0);
lean_inc_n(v_val_2549_, 2);
lean_dec_ref_known(v___x_2548_, 1);
v___x_2550_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2550_, 0, v_val_2549_);
lean_ctor_set(v___x_2550_, 1, v___x_2414_);
lean_ctor_set(v___x_2550_, 2, v___x_2414_);
v___x_2551_ = lean_nat_add(v_val_2549_, v___x_2429_);
lean_dec(v_val_2549_);
v___x_2552_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2551_);
lean_ctor_set(v___x_2552_, 1, v___x_2414_);
lean_ctor_set(v___x_2552_, 2, v___x_2414_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 1, v_a_2423_);
lean_ctor_set(v___x_2420_, 0, v___x_2550_);
v_minVer_2554_ = v___x_2420_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v___x_2550_);
lean_ctor_set(v_reuseFailAlloc_2567_, 1, v_a_2423_);
v_minVer_2554_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
lean_object* v___x_2555_; lean_object* v_maxVer_2556_; uint8_t v___x_2557_; uint8_t v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; uint8_t v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2565_; 
v___x_2555_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2556_, 0, v___x_2552_);
lean_ctor_set(v_maxVer_2556_, 1, v___x_2555_);
v___x_2557_ = 3;
v___x_2558_ = 0;
v___x_2559_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2559_, 0, v_minVer_2554_);
lean_ctor_set_uint8(v___x_2559_, sizeof(void*)*1, v___x_2557_);
lean_ctor_set_uint8(v___x_2559_, sizeof(void*)*1 + 1, v___x_2558_);
v___x_2560_ = lean_array_push(v_ands_2412_, v___x_2559_);
v___x_2561_ = 0;
v___x_2562_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2562_, 0, v_maxVer_2556_);
lean_ctor_set_uint8(v___x_2562_, sizeof(void*)*1, v___x_2561_);
lean_ctor_set_uint8(v___x_2562_, sizeof(void*)*1 + 1, v___x_2430_);
v___x_2563_ = lean_array_push(v___x_2560_, v___x_2562_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 0, v___x_2563_);
v___x_2565_ = v___x_2426_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v___x_2563_);
lean_ctor_set(v_reuseFailAlloc_2566_, 1, v_a_2424_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
}
else
{
lean_object* v_str_2568_; lean_object* v_startInclusive_2569_; lean_object* v_endExclusive_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2577_; 
lean_dec(v___x_2548_);
lean_dec(v_a_2423_);
lean_del_object(v___x_2420_);
lean_dec_ref(v_ands_2412_);
v_str_2568_ = lean_ctor_get(v___x_2547_, 0);
lean_inc_ref(v_str_2568_);
v_startInclusive_2569_ = lean_ctor_get(v___x_2547_, 1);
lean_inc(v_startInclusive_2569_);
v_endExclusive_2570_ = lean_ctor_get(v___x_2547_, 2);
lean_inc(v_endExclusive_2570_);
lean_dec(v___x_2547_);
v___x_2571_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2572_ = lean_string_utf8_extract_fast(v_str_2568_, v_startInclusive_2569_, v_endExclusive_2570_);
lean_dec(v_endExclusive_2570_);
lean_dec(v_startInclusive_2569_);
lean_dec_ref(v_str_2568_);
v___x_2573_ = lean_string_append(v___x_2571_, v___x_2572_);
lean_dec_ref(v___x_2572_);
v___x_2574_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2575_ = lean_string_append(v___x_2573_, v___x_2574_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set_tag(v___x_2426_, 1);
lean_ctor_set(v___x_2426_, 0, v___x_2575_);
v___x_2577_ = v___x_2426_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v___x_2575_);
lean_ctor_set(v_reuseFailAlloc_2578_, 1, v_a_2424_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
}
}
else
{
lean_object* v_a_2580_; lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2588_; 
lean_del_object(v___x_2420_);
lean_dec(v_a_2417_);
lean_dec_ref(v_ands_2412_);
v_a_2580_ = lean_ctor_get(v___x_2422_, 0);
v_a_2581_ = lean_ctor_get(v___x_2422_, 1);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2583_ = v___x_2422_;
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_inc(v_a_2580_);
lean_dec(v___x_2422_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2584_ == 0)
{
v___x_2586_ = v___x_2583_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_a_2580_);
lean_ctor_set(v_reuseFailAlloc_2587_, 1, v_a_2581_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret(lean_object* v_s_2592_, lean_object* v_ands_2593_, lean_object* v_a_2594_){
_start:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v_a_2598_; lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2821_; 
v___x_2595_ = lean_unsigned_to_nat(0u);
v___x_2596_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0));
lean_inc(v_a_2594_);
lean_inc_ref(v_s_2592_);
v___x_2597_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_2592_, v___x_2596_, v_a_2594_, v_a_2594_);
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
v_a_2599_ = lean_ctor_get(v___x_2597_, 1);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2601_ = v___x_2597_;
v_isShared_2602_ = v_isSharedCheck_2821_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_inc(v_a_2598_);
lean_dec(v___x_2597_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2821_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2603_; 
v___x_2603_ = l___private_Lake_Util_Version_0__Lake_parseSpecialDescr(v_s_2592_, v_a_2599_);
lean_dec_ref(v_s_2592_);
if (lean_obj_tag(v___x_2603_) == 0)
{
lean_object* v_a_2604_; lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2811_; 
v_a_2604_ = lean_ctor_get(v___x_2603_, 0);
v_a_2605_ = lean_ctor_get(v___x_2603_, 1);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2603_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2607_ = v___x_2603_;
v_isShared_2608_ = v_isSharedCheck_2811_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_inc(v_a_2604_);
lean_dec(v___x_2603_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2811_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; uint8_t v___x_2611_; 
v___x_2609_ = lean_array_get_size(v_a_2598_);
v___x_2610_ = lean_unsigned_to_nat(1u);
v___x_2611_ = lean_nat_dec_eq(v___x_2609_, v___x_2610_);
if (v___x_2611_ == 0)
{
lean_object* v___x_2612_; uint8_t v___x_2613_; 
v___x_2612_ = lean_unsigned_to_nat(2u);
v___x_2613_ = lean_nat_dec_eq(v___x_2609_, v___x_2612_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; uint8_t v___x_2615_; 
v___x_2614_ = lean_unsigned_to_nat(3u);
v___x_2615_ = lean_nat_dec_eq(v___x_2609_, v___x_2614_);
if (v___x_2615_ == 0)
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2622_; 
lean_dec(v_a_2604_);
lean_del_object(v___x_2601_);
lean_dec(v_a_2598_);
lean_dec_ref(v_ands_2593_);
v___x_2616_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__0));
v___x_2617_ = l_Nat_reprFast(v___x_2609_);
v___x_2618_ = lean_string_append(v___x_2616_, v___x_2617_);
lean_dec_ref(v___x_2617_);
v___x_2619_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1));
v___x_2620_ = lean_string_append(v___x_2618_, v___x_2619_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set_tag(v___x_2607_, 1);
lean_ctor_set(v___x_2607_, 0, v___x_2620_);
v___x_2622_ = v___x_2607_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v___x_2620_);
lean_ctor_set(v_reuseFailAlloc_2623_, 1, v_a_2605_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
else
{
lean_object* v___x_2624_; lean_object* v___x_2625_; 
v___x_2624_ = lean_array_fget_borrowed(v_a_2598_, v___x_2595_);
v___x_2625_ = l_String_Slice_toNat_x3f(v___x_2624_);
if (lean_obj_tag(v___x_2625_) == 1)
{
lean_object* v_val_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v_val_2626_ = lean_ctor_get(v___x_2625_, 0);
lean_inc(v_val_2626_);
lean_dec_ref_known(v___x_2625_, 1);
v___x_2627_ = lean_array_fget_borrowed(v_a_2598_, v___x_2610_);
v___x_2628_ = l_String_Slice_toNat_x3f(v___x_2627_);
if (lean_obj_tag(v___x_2628_) == 1)
{
lean_object* v_val_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v_val_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_val_2629_);
lean_dec_ref_known(v___x_2628_, 1);
v___x_2630_ = lean_array_fget(v_a_2598_, v___x_2612_);
lean_dec(v_a_2598_);
v___x_2631_ = l_String_Slice_toNat_x3f(v___x_2630_);
if (lean_obj_tag(v___x_2631_) == 1)
{
lean_object* v_val_2632_; uint8_t v___x_2633_; 
lean_dec(v___x_2630_);
v_val_2632_ = lean_ctor_get(v___x_2631_, 0);
lean_inc(v_val_2632_);
lean_dec_ref_known(v___x_2631_, 1);
v___x_2633_ = lean_nat_dec_eq(v_val_2626_, v___x_2595_);
if (v___x_2633_ == 0)
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v_minVer_2637_; lean_object* v___x_2638_; lean_object* v_maxVer_2639_; uint8_t v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; uint8_t v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2647_; 
lean_del_object(v___x_2601_);
lean_inc(v_val_2626_);
v___x_2634_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2634_, 0, v_val_2626_);
lean_ctor_set(v___x_2634_, 1, v_val_2629_);
lean_ctor_set(v___x_2634_, 2, v_val_2632_);
v___x_2635_ = lean_nat_add(v_val_2626_, v___x_2610_);
lean_dec(v_val_2626_);
v___x_2636_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2636_, 0, v___x_2635_);
lean_ctor_set(v___x_2636_, 1, v___x_2595_);
lean_ctor_set(v___x_2636_, 2, v___x_2595_);
v_minVer_2637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2637_, 0, v___x_2634_);
lean_ctor_set(v_minVer_2637_, 1, v_a_2604_);
v___x_2638_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2639_, 0, v___x_2636_);
lean_ctor_set(v_maxVer_2639_, 1, v___x_2638_);
v___x_2640_ = 3;
v___x_2641_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2641_, 0, v_minVer_2637_);
lean_ctor_set_uint8(v___x_2641_, sizeof(void*)*1, v___x_2640_);
lean_ctor_set_uint8(v___x_2641_, sizeof(void*)*1 + 1, v___x_2633_);
v___x_2642_ = lean_array_push(v_ands_2593_, v___x_2641_);
v___x_2643_ = 0;
v___x_2644_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2644_, 0, v_maxVer_2639_);
lean_ctor_set_uint8(v___x_2644_, sizeof(void*)*1, v___x_2643_);
lean_ctor_set_uint8(v___x_2644_, sizeof(void*)*1 + 1, v___x_2615_);
v___x_2645_ = lean_array_push(v___x_2642_, v___x_2644_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 0, v___x_2645_);
v___x_2647_ = v___x_2607_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v___x_2645_);
lean_ctor_set(v_reuseFailAlloc_2648_, 1, v_a_2605_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
else
{
uint8_t v___x_2649_; uint8_t v___y_2651_; 
v___x_2649_ = lean_nat_dec_eq(v_val_2629_, v___x_2595_);
if (v___x_2649_ == 0)
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v_minVer_2670_; lean_object* v___x_2671_; lean_object* v_maxVer_2672_; uint8_t v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; uint8_t v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2680_; 
lean_del_object(v___x_2607_);
lean_inc(v_val_2629_);
lean_inc(v_val_2626_);
v___x_2667_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2667_, 0, v_val_2626_);
lean_ctor_set(v___x_2667_, 1, v_val_2629_);
lean_ctor_set(v___x_2667_, 2, v_val_2632_);
v___x_2668_ = lean_nat_add(v_val_2629_, v___x_2610_);
lean_dec(v_val_2629_);
v___x_2669_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2669_, 0, v_val_2626_);
lean_ctor_set(v___x_2669_, 1, v___x_2668_);
lean_ctor_set(v___x_2669_, 2, v___x_2595_);
v_minVer_2670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2670_, 0, v___x_2667_);
lean_ctor_set(v_minVer_2670_, 1, v_a_2604_);
v___x_2671_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2672_, 0, v___x_2669_);
lean_ctor_set(v_maxVer_2672_, 1, v___x_2671_);
v___x_2673_ = 3;
v___x_2674_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2674_, 0, v_minVer_2670_);
lean_ctor_set_uint8(v___x_2674_, sizeof(void*)*1, v___x_2673_);
lean_ctor_set_uint8(v___x_2674_, sizeof(void*)*1 + 1, v___x_2649_);
v___x_2675_ = lean_array_push(v_ands_2593_, v___x_2674_);
v___x_2676_ = 0;
v___x_2677_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2677_, 0, v_maxVer_2672_);
lean_ctor_set_uint8(v___x_2677_, sizeof(void*)*1, v___x_2676_);
lean_ctor_set_uint8(v___x_2677_, sizeof(void*)*1 + 1, v___x_2633_);
v___x_2678_ = lean_array_push(v___x_2675_, v___x_2677_);
if (v_isShared_2602_ == 0)
{
lean_ctor_set(v___x_2601_, 1, v_a_2605_);
lean_ctor_set(v___x_2601_, 0, v___x_2678_);
v___x_2680_ = v___x_2601_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v___x_2678_);
lean_ctor_set(v_reuseFailAlloc_2681_, 1, v_a_2605_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
return v___x_2680_;
}
}
else
{
uint8_t v___x_2682_; 
v___x_2682_ = lean_nat_dec_eq(v_val_2632_, v___x_2595_);
if (v___x_2682_ == 0)
{
lean_del_object(v___x_2601_);
v___y_2651_ = v___x_2613_;
goto v___jp_2650_;
}
else
{
lean_object* v___x_2683_; uint8_t v___x_2684_; 
v___x_2683_ = lean_string_utf8_byte_size(v_a_2604_);
v___x_2684_ = lean_nat_dec_eq(v___x_2683_, v___x_2595_);
if (v___x_2684_ == 0)
{
lean_del_object(v___x_2601_);
v___y_2651_ = v___x_2684_;
goto v___jp_2650_;
}
else
{
lean_object* v___x_2685_; lean_object* v___x_2687_; 
lean_dec(v_val_2632_);
lean_dec(v_val_2629_);
lean_dec(v_val_2626_);
lean_del_object(v___x_2607_);
lean_dec(v_a_2604_);
lean_dec_ref(v_ands_2593_);
v___x_2685_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret___closed__1));
if (v_isShared_2602_ == 0)
{
lean_ctor_set_tag(v___x_2601_, 1);
lean_ctor_set(v___x_2601_, 1, v_a_2605_);
lean_ctor_set(v___x_2601_, 0, v___x_2685_);
v___x_2687_ = v___x_2601_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2685_);
lean_ctor_set(v_reuseFailAlloc_2688_, 1, v_a_2605_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
v___jp_2650_:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v_minVer_2655_; lean_object* v___x_2656_; lean_object* v_maxVer_2657_; uint8_t v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; uint8_t v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2665_; 
lean_inc(v_val_2632_);
lean_inc(v_val_2629_);
lean_inc(v_val_2626_);
v___x_2652_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2652_, 0, v_val_2626_);
lean_ctor_set(v___x_2652_, 1, v_val_2629_);
lean_ctor_set(v___x_2652_, 2, v_val_2632_);
v___x_2653_ = lean_nat_add(v_val_2632_, v___x_2610_);
lean_dec(v_val_2632_);
v___x_2654_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2654_, 0, v_val_2626_);
lean_ctor_set(v___x_2654_, 1, v_val_2629_);
lean_ctor_set(v___x_2654_, 2, v___x_2653_);
v_minVer_2655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2655_, 0, v___x_2652_);
lean_ctor_set(v_minVer_2655_, 1, v_a_2604_);
v___x_2656_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2657_, 0, v___x_2654_);
lean_ctor_set(v_maxVer_2657_, 1, v___x_2656_);
v___x_2658_ = 3;
v___x_2659_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2659_, 0, v_minVer_2655_);
lean_ctor_set_uint8(v___x_2659_, sizeof(void*)*1, v___x_2658_);
lean_ctor_set_uint8(v___x_2659_, sizeof(void*)*1 + 1, v___y_2651_);
v___x_2660_ = lean_array_push(v_ands_2593_, v___x_2659_);
v___x_2661_ = 0;
v___x_2662_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2662_, 0, v_maxVer_2657_);
lean_ctor_set_uint8(v___x_2662_, sizeof(void*)*1, v___x_2661_);
lean_ctor_set_uint8(v___x_2662_, sizeof(void*)*1 + 1, v___x_2649_);
v___x_2663_ = lean_array_push(v___x_2660_, v___x_2662_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 0, v___x_2663_);
v___x_2665_ = v___x_2607_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v___x_2663_);
lean_ctor_set(v_reuseFailAlloc_2666_, 1, v_a_2605_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
}
else
{
lean_object* v_str_2689_; lean_object* v_startInclusive_2690_; lean_object* v_endExclusive_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2698_; 
lean_dec(v___x_2631_);
lean_dec(v_val_2629_);
lean_dec(v_val_2626_);
lean_dec(v_a_2604_);
lean_del_object(v___x_2601_);
lean_dec_ref(v_ands_2593_);
v_str_2689_ = lean_ctor_get(v___x_2630_, 0);
lean_inc_ref(v_str_2689_);
v_startInclusive_2690_ = lean_ctor_get(v___x_2630_, 1);
lean_inc(v_startInclusive_2690_);
v_endExclusive_2691_ = lean_ctor_get(v___x_2630_, 2);
lean_inc(v_endExclusive_2691_);
lean_dec(v___x_2630_);
v___x_2692_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__3));
v___x_2693_ = lean_string_utf8_extract_fast(v_str_2689_, v_startInclusive_2690_, v_endExclusive_2691_);
lean_dec(v_endExclusive_2691_);
lean_dec(v_startInclusive_2690_);
lean_dec_ref(v_str_2689_);
v___x_2694_ = lean_string_append(v___x_2692_, v___x_2693_);
lean_dec_ref(v___x_2693_);
v___x_2695_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2696_ = lean_string_append(v___x_2694_, v___x_2695_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set_tag(v___x_2607_, 1);
lean_ctor_set(v___x_2607_, 0, v___x_2696_);
v___x_2698_ = v___x_2607_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2696_);
lean_ctor_set(v_reuseFailAlloc_2699_, 1, v_a_2605_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
else
{
lean_object* v_str_2700_; lean_object* v_startInclusive_2701_; lean_object* v_endExclusive_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2709_; 
lean_inc(v___x_2627_);
lean_dec(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec(v_a_2604_);
lean_del_object(v___x_2601_);
lean_dec(v_a_2598_);
lean_dec_ref(v_ands_2593_);
v_str_2700_ = lean_ctor_get(v___x_2627_, 0);
lean_inc_ref(v_str_2700_);
v_startInclusive_2701_ = lean_ctor_get(v___x_2627_, 1);
lean_inc(v_startInclusive_2701_);
v_endExclusive_2702_ = lean_ctor_get(v___x_2627_, 2);
lean_inc(v_endExclusive_2702_);
lean_dec(v___x_2627_);
v___x_2703_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4));
v___x_2704_ = lean_string_utf8_extract_fast(v_str_2700_, v_startInclusive_2701_, v_endExclusive_2702_);
lean_dec(v_endExclusive_2702_);
lean_dec(v_startInclusive_2701_);
lean_dec_ref(v_str_2700_);
v___x_2705_ = lean_string_append(v___x_2703_, v___x_2704_);
lean_dec_ref(v___x_2704_);
v___x_2706_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2707_ = lean_string_append(v___x_2705_, v___x_2706_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set_tag(v___x_2607_, 1);
lean_ctor_set(v___x_2607_, 0, v___x_2707_);
v___x_2709_ = v___x_2607_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v___x_2707_);
lean_ctor_set(v_reuseFailAlloc_2710_, 1, v_a_2605_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
else
{
lean_object* v_str_2711_; lean_object* v_startInclusive_2712_; lean_object* v_endExclusive_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2720_; 
lean_inc(v___x_2624_);
lean_dec(v___x_2625_);
lean_dec(v_a_2604_);
lean_del_object(v___x_2601_);
lean_dec(v_a_2598_);
lean_dec_ref(v_ands_2593_);
v_str_2711_ = lean_ctor_get(v___x_2624_, 0);
lean_inc_ref(v_str_2711_);
v_startInclusive_2712_ = lean_ctor_get(v___x_2624_, 1);
lean_inc(v_startInclusive_2712_);
v_endExclusive_2713_ = lean_ctor_get(v___x_2624_, 2);
lean_inc(v_endExclusive_2713_);
lean_dec(v___x_2624_);
v___x_2714_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2715_ = lean_string_utf8_extract_fast(v_str_2711_, v_startInclusive_2712_, v_endExclusive_2713_);
lean_dec(v_endExclusive_2713_);
lean_dec(v_startInclusive_2712_);
lean_dec_ref(v_str_2711_);
v___x_2716_ = lean_string_append(v___x_2714_, v___x_2715_);
lean_dec_ref(v___x_2715_);
v___x_2717_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2718_ = lean_string_append(v___x_2716_, v___x_2717_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set_tag(v___x_2607_, 1);
lean_ctor_set(v___x_2607_, 0, v___x_2718_);
v___x_2720_ = v___x_2607_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v___x_2718_);
lean_ctor_set(v_reuseFailAlloc_2721_, 1, v_a_2605_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
return v___x_2720_;
}
}
}
}
else
{
lean_object* v___x_2722_; lean_object* v___x_2723_; 
lean_del_object(v___x_2601_);
v___x_2722_ = lean_array_fget_borrowed(v_a_2598_, v___x_2595_);
v___x_2723_ = l_String_Slice_toNat_x3f(v___x_2722_);
if (lean_obj_tag(v___x_2723_) == 1)
{
lean_object* v_val_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
v_val_2724_ = lean_ctor_get(v___x_2723_, 0);
lean_inc(v_val_2724_);
lean_dec_ref_known(v___x_2723_, 1);
v___x_2725_ = lean_array_fget(v_a_2598_, v___x_2610_);
lean_dec(v_a_2598_);
v___x_2726_ = l_String_Slice_toNat_x3f(v___x_2725_);
if (lean_obj_tag(v___x_2726_) == 1)
{
lean_object* v_val_2727_; uint8_t v___x_2728_; 
lean_dec(v___x_2725_);
v_val_2727_ = lean_ctor_get(v___x_2726_, 0);
lean_inc(v_val_2727_);
lean_dec_ref_known(v___x_2726_, 1);
v___x_2728_ = lean_nat_dec_eq(v_val_2724_, v___x_2595_);
if (v___x_2728_ == 0)
{
lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v_minVer_2732_; lean_object* v___x_2733_; lean_object* v_maxVer_2734_; uint8_t v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; uint8_t v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2742_; 
lean_inc(v_val_2724_);
v___x_2729_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2729_, 0, v_val_2724_);
lean_ctor_set(v___x_2729_, 1, v_val_2727_);
lean_ctor_set(v___x_2729_, 2, v___x_2595_);
v___x_2730_ = lean_nat_add(v_val_2724_, v___x_2610_);
lean_dec(v_val_2724_);
v___x_2731_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2730_);
lean_ctor_set(v___x_2731_, 1, v___x_2595_);
lean_ctor_set(v___x_2731_, 2, v___x_2595_);
v_minVer_2732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2732_, 0, v___x_2729_);
lean_ctor_set(v_minVer_2732_, 1, v_a_2604_);
v___x_2733_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2734_, 0, v___x_2731_);
lean_ctor_set(v_maxVer_2734_, 1, v___x_2733_);
v___x_2735_ = 3;
v___x_2736_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2736_, 0, v_minVer_2732_);
lean_ctor_set_uint8(v___x_2736_, sizeof(void*)*1, v___x_2735_);
lean_ctor_set_uint8(v___x_2736_, sizeof(void*)*1 + 1, v___x_2728_);
v___x_2737_ = lean_array_push(v_ands_2593_, v___x_2736_);
v___x_2738_ = 0;
v___x_2739_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2739_, 0, v_maxVer_2734_);
lean_ctor_set_uint8(v___x_2739_, sizeof(void*)*1, v___x_2738_);
lean_ctor_set_uint8(v___x_2739_, sizeof(void*)*1 + 1, v___x_2613_);
v___x_2740_ = lean_array_push(v___x_2737_, v___x_2739_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 0, v___x_2740_);
v___x_2742_ = v___x_2607_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v___x_2740_);
lean_ctor_set(v_reuseFailAlloc_2743_, 1, v_a_2605_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
else
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v_minVer_2747_; lean_object* v___x_2748_; lean_object* v_maxVer_2749_; uint8_t v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; uint8_t v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2757_; 
lean_inc(v_val_2727_);
lean_inc(v_val_2724_);
v___x_2744_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2744_, 0, v_val_2724_);
lean_ctor_set(v___x_2744_, 1, v_val_2727_);
lean_ctor_set(v___x_2744_, 2, v___x_2595_);
v___x_2745_ = lean_nat_add(v_val_2727_, v___x_2610_);
lean_dec(v_val_2727_);
v___x_2746_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2746_, 0, v_val_2724_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
lean_ctor_set(v___x_2746_, 2, v___x_2595_);
v_minVer_2747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2747_, 0, v___x_2744_);
lean_ctor_set(v_minVer_2747_, 1, v_a_2604_);
v___x_2748_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2749_, 0, v___x_2746_);
lean_ctor_set(v_maxVer_2749_, 1, v___x_2748_);
v___x_2750_ = 3;
v___x_2751_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2751_, 0, v_minVer_2747_);
lean_ctor_set_uint8(v___x_2751_, sizeof(void*)*1, v___x_2750_);
lean_ctor_set_uint8(v___x_2751_, sizeof(void*)*1 + 1, v___x_2611_);
v___x_2752_ = lean_array_push(v_ands_2593_, v___x_2751_);
v___x_2753_ = 0;
v___x_2754_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2754_, 0, v_maxVer_2749_);
lean_ctor_set_uint8(v___x_2754_, sizeof(void*)*1, v___x_2753_);
lean_ctor_set_uint8(v___x_2754_, sizeof(void*)*1 + 1, v___x_2728_);
v___x_2755_ = lean_array_push(v___x_2752_, v___x_2754_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 0, v___x_2755_);
v___x_2757_ = v___x_2607_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v___x_2755_);
lean_ctor_set(v_reuseFailAlloc_2758_, 1, v_a_2605_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
else
{
lean_object* v_str_2759_; lean_object* v_startInclusive_2760_; lean_object* v_endExclusive_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2768_; 
lean_dec(v___x_2726_);
lean_dec(v_val_2724_);
lean_dec(v_a_2604_);
lean_dec_ref(v_ands_2593_);
v_str_2759_ = lean_ctor_get(v___x_2725_, 0);
lean_inc_ref(v_str_2759_);
v_startInclusive_2760_ = lean_ctor_get(v___x_2725_, 1);
lean_inc(v_startInclusive_2760_);
v_endExclusive_2761_ = lean_ctor_get(v___x_2725_, 2);
lean_inc(v_endExclusive_2761_);
lean_dec(v___x_2725_);
v___x_2762_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__4));
v___x_2763_ = lean_string_utf8_extract_fast(v_str_2759_, v_startInclusive_2760_, v_endExclusive_2761_);
lean_dec(v_endExclusive_2761_);
lean_dec(v_startInclusive_2760_);
lean_dec_ref(v_str_2759_);
v___x_2764_ = lean_string_append(v___x_2762_, v___x_2763_);
lean_dec_ref(v___x_2763_);
v___x_2765_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2766_ = lean_string_append(v___x_2764_, v___x_2765_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set_tag(v___x_2607_, 1);
lean_ctor_set(v___x_2607_, 0, v___x_2766_);
v___x_2768_ = v___x_2607_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v___x_2766_);
lean_ctor_set(v_reuseFailAlloc_2769_, 1, v_a_2605_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
else
{
lean_object* v_str_2770_; lean_object* v_startInclusive_2771_; lean_object* v_endExclusive_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2779_; 
lean_inc(v___x_2722_);
lean_dec(v___x_2723_);
lean_dec(v_a_2604_);
lean_dec(v_a_2598_);
lean_dec_ref(v_ands_2593_);
v_str_2770_ = lean_ctor_get(v___x_2722_, 0);
lean_inc_ref(v_str_2770_);
v_startInclusive_2771_ = lean_ctor_get(v___x_2722_, 1);
lean_inc(v_startInclusive_2771_);
v_endExclusive_2772_ = lean_ctor_get(v___x_2722_, 2);
lean_inc(v_endExclusive_2772_);
lean_dec(v___x_2722_);
v___x_2773_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2774_ = lean_string_utf8_extract_fast(v_str_2770_, v_startInclusive_2771_, v_endExclusive_2772_);
lean_dec(v_endExclusive_2772_);
lean_dec(v_startInclusive_2771_);
lean_dec_ref(v_str_2770_);
v___x_2775_ = lean_string_append(v___x_2773_, v___x_2774_);
lean_dec_ref(v___x_2774_);
v___x_2776_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2777_ = lean_string_append(v___x_2775_, v___x_2776_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set_tag(v___x_2607_, 1);
lean_ctor_set(v___x_2607_, 0, v___x_2777_);
v___x_2779_ = v___x_2607_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v___x_2777_);
lean_ctor_set(v_reuseFailAlloc_2780_, 1, v_a_2605_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
else
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
lean_del_object(v___x_2601_);
v___x_2781_ = lean_array_fget(v_a_2598_, v___x_2595_);
lean_dec(v_a_2598_);
v___x_2782_ = l_String_Slice_toNat_x3f(v___x_2781_);
if (lean_obj_tag(v___x_2782_) == 1)
{
lean_object* v_val_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v_minVer_2787_; lean_object* v___x_2788_; lean_object* v_maxVer_2789_; uint8_t v___x_2790_; uint8_t v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; uint8_t v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2798_; 
lean_dec(v___x_2781_);
v_val_2783_ = lean_ctor_get(v___x_2782_, 0);
lean_inc_n(v_val_2783_, 2);
lean_dec_ref_known(v___x_2782_, 1);
v___x_2784_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2784_, 0, v_val_2783_);
lean_ctor_set(v___x_2784_, 1, v___x_2595_);
lean_ctor_set(v___x_2784_, 2, v___x_2595_);
v___x_2785_ = lean_nat_add(v_val_2783_, v___x_2610_);
lean_dec(v_val_2783_);
v___x_2786_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2785_);
lean_ctor_set(v___x_2786_, 1, v___x_2595_);
lean_ctor_set(v___x_2786_, 2, v___x_2595_);
v_minVer_2787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2787_, 0, v___x_2784_);
lean_ctor_set(v_minVer_2787_, 1, v_a_2604_);
v___x_2788_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_maxVer_2789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2789_, 0, v___x_2786_);
lean_ctor_set(v_maxVer_2789_, 1, v___x_2788_);
v___x_2790_ = 3;
v___x_2791_ = 0;
v___x_2792_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2792_, 0, v_minVer_2787_);
lean_ctor_set_uint8(v___x_2792_, sizeof(void*)*1, v___x_2790_);
lean_ctor_set_uint8(v___x_2792_, sizeof(void*)*1 + 1, v___x_2791_);
v___x_2793_ = lean_array_push(v_ands_2593_, v___x_2792_);
v___x_2794_ = 0;
v___x_2795_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2795_, 0, v_maxVer_2789_);
lean_ctor_set_uint8(v___x_2795_, sizeof(void*)*1, v___x_2794_);
lean_ctor_set_uint8(v___x_2795_, sizeof(void*)*1 + 1, v___x_2611_);
v___x_2796_ = lean_array_push(v___x_2793_, v___x_2795_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 0, v___x_2796_);
v___x_2798_ = v___x_2607_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v___x_2796_);
lean_ctor_set(v_reuseFailAlloc_2799_, 1, v_a_2605_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
else
{
lean_object* v_str_2800_; lean_object* v_startInclusive_2801_; lean_object* v_endExclusive_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2809_; 
lean_dec(v___x_2782_);
lean_dec(v_a_2604_);
lean_dec_ref(v_ands_2593_);
v_str_2800_ = lean_ctor_get(v___x_2781_, 0);
lean_inc_ref(v_str_2800_);
v_startInclusive_2801_ = lean_ctor_get(v___x_2781_, 1);
lean_inc(v_startInclusive_2801_);
v_endExclusive_2802_ = lean_ctor_get(v___x_2781_, 2);
lean_inc(v_endExclusive_2802_);
lean_dec(v___x_2781_);
v___x_2803_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_SemVerCore_parseM___closed__5));
v___x_2804_ = lean_string_utf8_extract_fast(v_str_2800_, v_startInclusive_2801_, v_endExclusive_2802_);
lean_dec(v_endExclusive_2802_);
lean_dec(v_startInclusive_2801_);
lean_dec_ref(v_str_2800_);
v___x_2805_ = lean_string_append(v___x_2803_, v___x_2804_);
lean_dec_ref(v___x_2804_);
v___x_2806_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerNat___redArg___closed__2));
v___x_2807_ = lean_string_append(v___x_2805_, v___x_2806_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set_tag(v___x_2607_, 1);
lean_ctor_set(v___x_2607_, 0, v___x_2807_);
v___x_2809_ = v___x_2607_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v___x_2807_);
lean_ctor_set(v_reuseFailAlloc_2810_, 1, v_a_2605_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
}
}
else
{
lean_object* v_a_2812_; lean_object* v_a_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2820_; 
lean_del_object(v___x_2601_);
lean_dec(v_a_2598_);
lean_dec_ref(v_ands_2593_);
v_a_2812_ = lean_ctor_get(v___x_2603_, 0);
v_a_2813_ = lean_ctor_get(v___x_2603_, 1);
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2603_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2815_ = v___x_2603_;
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_a_2813_);
lean_inc(v_a_2812_);
lean_dec(v___x_2603_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2818_; 
if (v_isShared_2816_ == 0)
{
v___x_2818_ = v___x_2815_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_a_2812_);
lean_ctor_set(v_reuseFailAlloc_2819_, 1, v_a_2813_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild(lean_object* v_s_2827_, lean_object* v_ands_2828_, lean_object* v_a_2829_){
_start:
{
lean_object* v___y_2831_; lean_object* v___y_2835_; lean_object* v___y_2840_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v_a_2846_; lean_object* v_a_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2993_; 
v___x_2843_ = lean_unsigned_to_nat(0u);
v___x_2844_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseVerComponents___closed__0));
lean_inc(v_a_2829_);
lean_inc_ref(v_s_2827_);
v___x_2845_ = l___private_Lake_Util_Version_0__Lake_parseVerComponents_go___redArg(v_s_2827_, v___x_2844_, v_a_2829_, v_a_2829_);
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
v_a_2847_ = lean_ctor_get(v___x_2845_, 1);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2849_ = v___x_2845_;
v_isShared_2850_ = v_isSharedCheck_2993_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_a_2847_);
lean_inc(v_a_2846_);
lean_dec(v___x_2845_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2993_;
goto v_resetjp_2848_;
}
v___jp_2830_:
{
lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___x_2832_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__0));
v___x_2833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2832_);
lean_ctor_set(v___x_2833_, 1, v___y_2831_);
return v___x_2833_;
}
v___jp_2834_:
{
lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2836_ = ((lean_object*)(l_Lake_VerComparator_wild));
v___x_2837_ = lean_array_push(v_ands_2828_, v___x_2836_);
v___x_2838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2837_);
lean_ctor_set(v___x_2838_, 1, v___y_2835_);
return v___x_2838_;
}
v___jp_2839_:
{
lean_object* v___x_2841_; lean_object* v___x_2842_; 
v___x_2841_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__1));
v___x_2842_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2841_);
lean_ctor_set(v___x_2842_, 1, v___y_2840_);
return v___x_2842_;
}
v_resetjp_2848_:
{
lean_object* v___y_2852_; lean_object* v___y_2853_; lean_object* v___y_2854_; lean_object* v___y_2855_; lean_object* v___y_2856_; lean_object* v___y_2908_; lean_object* v___y_2909_; lean_object* v___y_2910_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___x_2966_; lean_object* v___y_2968_; lean_object* v___x_2988_; uint8_t v___x_2989_; 
v___x_2966_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__1));
v___x_2988_ = lean_array_get_size(v_a_2846_);
v___x_2989_ = lean_nat_dec_lt(v___x_2843_, v___x_2988_);
if (v___x_2989_ == 0)
{
lean_object* v___x_2990_; 
v___x_2990_ = lean_box(0);
v___y_2968_ = v___x_2990_;
goto v___jp_2967_;
}
else
{
lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___x_2991_ = lean_array_fget_borrowed(v_a_2846_, v___x_2843_);
lean_inc(v___x_2991_);
v___x_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2991_);
v___y_2968_ = v___x_2992_;
goto v___jp_2967_;
}
v___jp_2851_:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; uint8_t v___x_2859_; 
v___x_2857_ = lean_unsigned_to_nat(3u);
v___x_2858_ = lean_array_get_size(v_a_2846_);
lean_dec(v_a_2846_);
v___x_2859_ = lean_nat_dec_lt(v___x_2857_, v___x_2858_);
if (v___x_2859_ == 0)
{
switch(lean_obj_tag(v___y_2853_))
{
case 2:
{
switch(lean_obj_tag(v___y_2855_))
{
case 2:
{
if (lean_obj_tag(v___y_2852_) == 1)
{
lean_object* v_n_2860_; lean_object* v_n_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v_minVer_2866_; lean_object* v_maxVer_2867_; uint8_t v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; uint8_t v___x_2871_; uint8_t v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2876_; 
v_n_2860_ = lean_ctor_get(v___y_2853_, 0);
lean_inc_n(v_n_2860_, 2);
lean_dec_ref_known(v___y_2853_, 1);
v_n_2861_ = lean_ctor_get(v___y_2855_, 0);
lean_inc_n(v_n_2861_, 2);
lean_dec_ref_known(v___y_2855_, 1);
v___x_2862_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2862_, 0, v_n_2860_);
lean_ctor_set(v___x_2862_, 1, v_n_2861_);
lean_ctor_set(v___x_2862_, 2, v___x_2843_);
v___x_2863_ = lean_nat_add(v_n_2861_, v___y_2856_);
lean_dec(v_n_2861_);
v___x_2864_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2864_, 0, v_n_2860_);
lean_ctor_set(v___x_2864_, 1, v___x_2863_);
lean_ctor_set(v___x_2864_, 2, v___x_2843_);
v___x_2865_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_minVer_2866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2866_, 0, v___x_2862_);
lean_ctor_set(v_minVer_2866_, 1, v___x_2865_);
v_maxVer_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2867_, 0, v___x_2864_);
lean_ctor_set(v_maxVer_2867_, 1, v___x_2865_);
v___x_2868_ = 3;
v___x_2869_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2869_, 0, v_minVer_2866_);
lean_ctor_set_uint8(v___x_2869_, sizeof(void*)*1, v___x_2868_);
lean_ctor_set_uint8(v___x_2869_, sizeof(void*)*1 + 1, v___x_2859_);
v___x_2870_ = lean_array_push(v_ands_2828_, v___x_2869_);
v___x_2871_ = 0;
v___x_2872_ = 1;
v___x_2873_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2873_, 0, v_maxVer_2867_);
lean_ctor_set_uint8(v___x_2873_, sizeof(void*)*1, v___x_2871_);
lean_ctor_set_uint8(v___x_2873_, sizeof(void*)*1 + 1, v___x_2872_);
v___x_2874_ = lean_array_push(v___x_2870_, v___x_2873_);
if (v_isShared_2850_ == 0)
{
lean_ctor_set(v___x_2849_, 1, v___y_2854_);
lean_ctor_set(v___x_2849_, 0, v___x_2874_);
v___x_2876_ = v___x_2849_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v___x_2874_);
lean_ctor_set(v_reuseFailAlloc_2877_, 1, v___y_2854_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
else
{
lean_dec_ref_known(v___y_2855_, 1);
lean_dec_ref_known(v___y_2853_, 1);
lean_dec(v___y_2852_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_ands_2828_);
v___y_2840_ = v___y_2854_;
goto v___jp_2839_;
}
}
case 1:
{
if (lean_obj_tag(v___y_2852_) == 2)
{
lean_dec_ref_known(v___y_2852_, 1);
lean_dec_ref_known(v___y_2853_, 1);
lean_del_object(v___x_2849_);
lean_dec_ref(v_ands_2828_);
v___y_2831_ = v___y_2854_;
goto v___jp_2830_;
}
else
{
lean_object* v_n_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v_minVer_2883_; lean_object* v_maxVer_2884_; uint8_t v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; uint8_t v___x_2888_; uint8_t v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2893_; 
lean_dec(v___y_2852_);
v_n_2878_ = lean_ctor_get(v___y_2853_, 0);
lean_inc_n(v_n_2878_, 2);
lean_dec_ref_known(v___y_2853_, 1);
v___x_2879_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2879_, 0, v_n_2878_);
lean_ctor_set(v___x_2879_, 1, v___x_2843_);
lean_ctor_set(v___x_2879_, 2, v___x_2843_);
v___x_2880_ = lean_nat_add(v_n_2878_, v___y_2856_);
lean_dec(v_n_2878_);
v___x_2881_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2880_);
lean_ctor_set(v___x_2881_, 1, v___x_2843_);
lean_ctor_set(v___x_2881_, 2, v___x_2843_);
v___x_2882_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_parseSpecialDescr___closed__1));
v_minVer_2883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_minVer_2883_, 0, v___x_2879_);
lean_ctor_set(v_minVer_2883_, 1, v___x_2882_);
v_maxVer_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_maxVer_2884_, 0, v___x_2881_);
lean_ctor_set(v_maxVer_2884_, 1, v___x_2882_);
v___x_2885_ = 3;
v___x_2886_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2886_, 0, v_minVer_2883_);
lean_ctor_set_uint8(v___x_2886_, sizeof(void*)*1, v___x_2885_);
lean_ctor_set_uint8(v___x_2886_, sizeof(void*)*1 + 1, v___x_2859_);
v___x_2887_ = lean_array_push(v_ands_2828_, v___x_2886_);
v___x_2888_ = 0;
v___x_2889_ = 1;
v___x_2890_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2890_, 0, v_maxVer_2884_);
lean_ctor_set_uint8(v___x_2890_, sizeof(void*)*1, v___x_2888_);
lean_ctor_set_uint8(v___x_2890_, sizeof(void*)*1 + 1, v___x_2889_);
v___x_2891_ = lean_array_push(v___x_2887_, v___x_2890_);
if (v_isShared_2850_ == 0)
{
lean_ctor_set(v___x_2849_, 1, v___y_2854_);
lean_ctor_set(v___x_2849_, 0, v___x_2891_);
v___x_2893_ = v___x_2849_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v___x_2891_);
lean_ctor_set(v_reuseFailAlloc_2894_, 1, v___y_2854_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
}
default: 
{
lean_dec_ref_known(v___y_2853_, 1);
lean_dec(v___y_2855_);
lean_dec(v___y_2852_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_ands_2828_);
v___y_2840_ = v___y_2854_;
goto v___jp_2839_;
}
}
}
case 1:
{
if (lean_obj_tag(v___y_2852_) == 2)
{
lean_dec_ref_known(v___y_2852_, 1);
lean_dec(v___y_2855_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_ands_2828_);
v___y_2831_ = v___y_2854_;
goto v___jp_2830_;
}
else
{
lean_dec(v___y_2852_);
if (lean_obj_tag(v___y_2855_) == 2)
{
lean_object* v___x_2895_; lean_object* v___x_2897_; 
lean_dec_ref_known(v___y_2855_, 1);
lean_dec_ref(v_ands_2828_);
v___x_2895_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__2));
if (v_isShared_2850_ == 0)
{
lean_ctor_set_tag(v___x_2849_, 1);
lean_ctor_set(v___x_2849_, 1, v___y_2854_);
lean_ctor_set(v___x_2849_, 0, v___x_2895_);
v___x_2897_ = v___x_2849_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v___x_2895_);
lean_ctor_set(v_reuseFailAlloc_2898_, 1, v___y_2854_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
else
{
lean_dec(v___y_2855_);
lean_del_object(v___x_2849_);
v___y_2835_ = v___y_2854_;
goto v___jp_2834_;
}
}
}
default: 
{
lean_dec(v___y_2853_);
lean_del_object(v___x_2849_);
if (lean_obj_tag(v___y_2855_) == 1)
{
if (lean_obj_tag(v___y_2852_) == 2)
{
lean_dec_ref_known(v___y_2852_, 1);
lean_dec_ref(v_ands_2828_);
v___y_2831_ = v___y_2854_;
goto v___jp_2830_;
}
else
{
lean_dec(v___y_2852_);
v___y_2835_ = v___y_2854_;
goto v___jp_2834_;
}
}
else
{
lean_dec(v___y_2855_);
lean_dec(v___y_2852_);
v___y_2835_ = v___y_2854_;
goto v___jp_2834_;
}
}
}
}
else
{
lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2905_; 
lean_dec(v___y_2855_);
lean_dec(v___y_2853_);
lean_dec(v___y_2852_);
lean_dec_ref(v_ands_2828_);
v___x_2899_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__3));
v___x_2900_ = l_Nat_reprFast(v___x_2858_);
v___x_2901_ = lean_string_append(v___x_2899_, v___x_2900_);
lean_dec_ref(v___x_2900_);
v___x_2902_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde___closed__1));
v___x_2903_ = lean_string_append(v___x_2901_, v___x_2902_);
if (v_isShared_2850_ == 0)
{
lean_ctor_set_tag(v___x_2849_, 1);
lean_ctor_set(v___x_2849_, 1, v___y_2854_);
lean_ctor_set(v___x_2849_, 0, v___x_2903_);
v___x_2905_ = v___x_2849_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v___x_2903_);
lean_ctor_set(v_reuseFailAlloc_2906_, 1, v___y_2854_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
v___jp_2907_:
{
lean_object* v___x_2914_; 
v___x_2914_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(v___y_2912_, v___y_2913_, v___y_2910_);
lean_dec(v___y_2913_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_object* v_a_2915_; lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2931_; 
v_a_2915_ = lean_ctor_get(v___x_2914_, 0);
v_a_2916_ = lean_ctor_get(v___x_2914_, 1);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2914_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2918_ = v___x_2914_;
v_isShared_2919_ = v_isSharedCheck_2931_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_inc(v_a_2915_);
lean_dec(v___x_2914_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2931_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
v___x_2920_ = lean_string_utf8_byte_size(v_s_2827_);
v___x_2921_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2921_, 0, v_s_2827_);
lean_ctor_set(v___x_2921_, 1, v___x_2843_);
lean_ctor_set(v___x_2921_, 2, v___x_2920_);
v___x_2922_ = l_String_Slice_Pos_get_x3f(v___x_2921_, v_a_2916_);
lean_dec_ref_known(v___x_2921_, 3);
if (lean_obj_tag(v___x_2922_) == 0)
{
lean_del_object(v___x_2918_);
v___y_2852_ = v_a_2915_;
v___y_2853_ = v___y_2908_;
v___y_2854_ = v_a_2916_;
v___y_2855_ = v___y_2909_;
v___y_2856_ = v___y_2911_;
goto v___jp_2851_;
}
else
{
lean_object* v_val_2923_; uint32_t v___x_2924_; uint32_t v___x_2925_; uint8_t v___x_2926_; 
v_val_2923_ = lean_ctor_get(v___x_2922_, 0);
lean_inc(v_val_2923_);
lean_dec_ref_known(v___x_2922_, 1);
v___x_2924_ = 45;
v___x_2925_ = lean_unbox_uint32(v_val_2923_);
lean_dec(v_val_2923_);
v___x_2926_ = lean_uint32_dec_eq(v___x_2925_, v___x_2924_);
if (v___x_2926_ == 0)
{
lean_del_object(v___x_2918_);
v___y_2852_ = v_a_2915_;
v___y_2853_ = v___y_2908_;
v___y_2854_ = v_a_2916_;
v___y_2855_ = v___y_2909_;
v___y_2856_ = v___y_2911_;
goto v___jp_2851_;
}
else
{
lean_object* v___x_2927_; lean_object* v___x_2929_; 
lean_dec(v_a_2915_);
lean_dec(v___y_2909_);
lean_dec(v___y_2908_);
lean_del_object(v___x_2849_);
lean_dec(v_a_2846_);
lean_dec_ref(v_ands_2828_);
v___x_2927_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild___closed__4));
if (v_isShared_2919_ == 0)
{
lean_ctor_set_tag(v___x_2918_, 1);
lean_ctor_set(v___x_2918_, 0, v___x_2927_);
v___x_2929_ = v___x_2918_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v___x_2927_);
lean_ctor_set(v_reuseFailAlloc_2930_, 1, v_a_2916_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
}
}
else
{
lean_object* v_a_2932_; lean_object* v_a_2933_; lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_2940_; 
lean_dec(v___y_2909_);
lean_dec(v___y_2908_);
lean_del_object(v___x_2849_);
lean_dec(v_a_2846_);
lean_dec_ref(v_ands_2828_);
lean_dec_ref(v_s_2827_);
v_a_2932_ = lean_ctor_get(v___x_2914_, 0);
v_a_2933_ = lean_ctor_get(v___x_2914_, 1);
v_isSharedCheck_2940_ = !lean_is_exclusive(v___x_2914_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2935_ = v___x_2914_;
v_isShared_2936_ = v_isSharedCheck_2940_;
goto v_resetjp_2934_;
}
else
{
lean_inc(v_a_2933_);
lean_inc(v_a_2932_);
lean_dec(v___x_2914_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_2940_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
lean_object* v___x_2938_; 
if (v_isShared_2936_ == 0)
{
v___x_2938_ = v___x_2935_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_a_2932_);
lean_ctor_set(v_reuseFailAlloc_2939_, 1, v_a_2933_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
return v___x_2938_;
}
}
}
}
v___jp_2941_:
{
lean_object* v___x_2947_; 
v___x_2947_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(v___y_2943_, v___y_2946_, v___y_2944_);
lean_dec(v___y_2946_);
if (lean_obj_tag(v___x_2947_) == 0)
{
lean_object* v_a_2948_; lean_object* v_a_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; uint8_t v___x_2953_; 
v_a_2948_ = lean_ctor_get(v___x_2947_, 0);
lean_inc(v_a_2948_);
v_a_2949_ = lean_ctor_get(v___x_2947_, 1);
lean_inc(v_a_2949_);
lean_dec_ref_known(v___x_2947_, 2);
v___x_2950_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__12));
v___x_2951_ = lean_unsigned_to_nat(2u);
v___x_2952_ = lean_array_get_size(v_a_2846_);
v___x_2953_ = lean_nat_dec_lt(v___x_2951_, v___x_2952_);
if (v___x_2953_ == 0)
{
lean_object* v___x_2954_; 
v___x_2954_ = lean_box(0);
v___y_2908_ = v___y_2942_;
v___y_2909_ = v_a_2948_;
v___y_2910_ = v_a_2949_;
v___y_2911_ = v___y_2945_;
v___y_2912_ = v___x_2950_;
v___y_2913_ = v___x_2954_;
goto v___jp_2907_;
}
else
{
lean_object* v___x_2955_; lean_object* v___x_2956_; 
v___x_2955_ = lean_array_fget_borrowed(v_a_2846_, v___x_2951_);
lean_inc(v___x_2955_);
v___x_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2956_, 0, v___x_2955_);
v___y_2908_ = v___y_2942_;
v___y_2909_ = v_a_2948_;
v___y_2910_ = v_a_2949_;
v___y_2911_ = v___y_2945_;
v___y_2912_ = v___x_2950_;
v___y_2913_ = v___x_2956_;
goto v___jp_2907_;
}
}
else
{
lean_object* v_a_2957_; lean_object* v_a_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2965_; 
lean_dec(v___y_2942_);
lean_del_object(v___x_2849_);
lean_dec(v_a_2846_);
lean_dec_ref(v_ands_2828_);
lean_dec_ref(v_s_2827_);
v_a_2957_ = lean_ctor_get(v___x_2947_, 0);
v_a_2958_ = lean_ctor_get(v___x_2947_, 1);
v_isSharedCheck_2965_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2960_ = v___x_2947_;
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_a_2958_);
lean_inc(v_a_2957_);
lean_dec(v___x_2947_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2963_; 
if (v_isShared_2961_ == 0)
{
v___x_2963_ = v___x_2960_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_a_2957_);
lean_ctor_set(v_reuseFailAlloc_2964_, 1, v_a_2958_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
return v___x_2963_;
}
}
}
}
v___jp_2967_:
{
lean_object* v___x_2969_; 
v___x_2969_ = l___private_Lake_Util_Version_0__Lake_parseVerComponent___redArg(v___x_2966_, v___y_2968_, v_a_2847_);
lean_dec(v___y_2968_);
if (lean_obj_tag(v___x_2969_) == 0)
{
lean_object* v_a_2970_; lean_object* v_a_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; uint8_t v___x_2975_; 
v_a_2970_ = lean_ctor_get(v___x_2969_, 0);
lean_inc(v_a_2970_);
v_a_2971_ = lean_ctor_get(v___x_2969_, 1);
lean_inc(v_a_2971_);
lean_dec_ref_known(v___x_2969_, 2);
v___x_2972_ = ((lean_object*)(l_Lake_instReprSemVerCore_repr___redArg___closed__10));
v___x_2973_ = lean_unsigned_to_nat(1u);
v___x_2974_ = lean_array_get_size(v_a_2846_);
v___x_2975_ = lean_nat_dec_lt(v___x_2973_, v___x_2974_);
if (v___x_2975_ == 0)
{
lean_object* v___x_2976_; 
v___x_2976_ = lean_box(0);
v___y_2942_ = v_a_2970_;
v___y_2943_ = v___x_2972_;
v___y_2944_ = v_a_2971_;
v___y_2945_ = v___x_2973_;
v___y_2946_ = v___x_2976_;
goto v___jp_2941_;
}
else
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2977_ = lean_array_fget_borrowed(v_a_2846_, v___x_2973_);
lean_inc(v___x_2977_);
v___x_2978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2977_);
v___y_2942_ = v_a_2970_;
v___y_2943_ = v___x_2972_;
v___y_2944_ = v_a_2971_;
v___y_2945_ = v___x_2973_;
v___y_2946_ = v___x_2978_;
goto v___jp_2941_;
}
}
else
{
lean_object* v_a_2979_; lean_object* v_a_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2987_; 
lean_del_object(v___x_2849_);
lean_dec(v_a_2846_);
lean_dec_ref(v_ands_2828_);
lean_dec_ref(v_s_2827_);
v_a_2979_ = lean_ctor_get(v___x_2969_, 0);
v_a_2980_ = lean_ctor_get(v___x_2969_, 1);
v_isSharedCheck_2987_ = !lean_is_exclusive(v___x_2969_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2982_ = v___x_2969_;
v_isShared_2983_ = v_isSharedCheck_2987_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_a_2980_);
lean_inc(v_a_2979_);
lean_dec(v___x_2969_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2987_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2985_; 
if (v_isShared_2983_ == 0)
{
v___x_2985_ = v___x_2982_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v_a_2979_);
lean_ctor_set(v_reuseFailAlloc_2986_, 1, v_a_2980_);
v___x_2985_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
return v___x_2985_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go(lean_object* v_s_3000_, uint8_t v_needsRange_3001_, lean_object* v_ors_3002_, lean_object* v_ands_3003_, lean_object* v_p_3004_){
_start:
{
lean_object* v___x_3011_; uint8_t v_decide_3012_; 
v___x_3011_ = lean_string_utf8_byte_size(v_s_3000_);
v_decide_3012_ = lean_nat_dec_eq(v_p_3004_, v___x_3011_);
if (v_decide_3012_ == 0)
{
uint32_t v_c_3027_; uint8_t v___y_3123_; uint32_t v___x_3128_; uint8_t v___x_3129_; 
v_c_3027_ = lean_string_utf8_get_fast(v_s_3000_, v_p_3004_);
v___x_3128_ = 65;
v___x_3129_ = lean_uint32_dec_le(v___x_3128_, v_c_3027_);
if (v___x_3129_ == 0)
{
v___y_3123_ = v___x_3129_;
goto v___jp_3122_;
}
else
{
uint32_t v___x_3130_; uint8_t v___x_3131_; 
v___x_3130_ = 90;
v___x_3131_ = lean_uint32_dec_le(v_c_3027_, v___x_3130_);
v___y_3123_ = v___x_3131_;
goto v___jp_3122_;
}
v___jp_3028_:
{
uint32_t v___x_3029_; uint8_t v___x_3030_; 
v___x_3029_ = 42;
v___x_3030_ = lean_uint32_dec_eq(v_c_3027_, v___x_3029_);
if (v___x_3030_ == 0)
{
uint32_t v___x_3031_; uint8_t v___x_3032_; 
v___x_3031_ = 94;
v___x_3032_ = lean_uint32_dec_eq(v_c_3027_, v___x_3031_);
if (v___x_3032_ == 0)
{
uint32_t v___x_3033_; uint8_t v___x_3034_; 
v___x_3033_ = 126;
v___x_3034_ = lean_uint32_dec_eq(v_c_3027_, v___x_3033_);
if (v___x_3034_ == 0)
{
uint32_t v___x_3035_; uint8_t v___x_3036_; 
v___x_3035_ = 32;
v___x_3036_ = lean_uint32_dec_eq(v_c_3027_, v___x_3035_);
if (v___x_3036_ == 0)
{
uint32_t v___x_3037_; uint8_t v___x_3038_; 
v___x_3037_ = 9;
v___x_3038_ = lean_uint32_dec_eq(v_c_3027_, v___x_3037_);
if (v___x_3038_ == 0)
{
uint32_t v___x_3039_; uint8_t v___x_3040_; 
v___x_3039_ = 13;
v___x_3040_ = lean_uint32_dec_eq(v_c_3027_, v___x_3039_);
if (v___x_3040_ == 0)
{
uint32_t v___x_3041_; uint8_t v___x_3042_; 
v___x_3041_ = 10;
v___x_3042_ = lean_uint32_dec_eq(v_c_3027_, v___x_3041_);
if (v___x_3042_ == 0)
{
uint8_t v___x_3043_; uint32_t v___x_3044_; uint8_t v___x_3045_; 
v___x_3043_ = 1;
v___x_3044_ = 44;
v___x_3045_ = lean_uint32_dec_eq(v_c_3027_, v___x_3044_);
if (v___x_3045_ == 0)
{
uint32_t v___x_3046_; uint8_t v___x_3047_; 
v___x_3046_ = 124;
v___x_3047_ = lean_uint32_dec_eq(v_c_3027_, v___x_3046_);
if (v___x_3047_ == 0)
{
lean_object* v___x_3048_; 
lean_inc_ref(v_s_3000_);
v___x_3048_ = l___private_Lake_Util_Version_0__Lake_VerComparator_parseM(v_s_3000_, v_p_3004_);
if (lean_obj_tag(v___x_3048_) == 0)
{
lean_object* v_a_3049_; lean_object* v_a_3050_; lean_object* v___x_3051_; 
v_a_3049_ = lean_ctor_get(v___x_3048_, 0);
lean_inc(v_a_3049_);
v_a_3050_ = lean_ctor_get(v___x_3048_, 1);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3048_, 2);
v___x_3051_ = lean_array_push(v_ands_3003_, v_a_3049_);
v_needsRange_3001_ = v___x_3047_;
v_ands_3003_ = v___x_3051_;
v_p_3004_ = v_a_3050_;
goto _start;
}
else
{
lean_object* v_a_3053_; lean_object* v_a_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3061_; 
lean_dec_ref(v_ands_3003_);
lean_dec_ref(v_ors_3002_);
lean_dec_ref(v_s_3000_);
v_a_3053_ = lean_ctor_get(v___x_3048_, 0);
v_a_3054_ = lean_ctor_get(v___x_3048_, 1);
v_isSharedCheck_3061_ = !lean_is_exclusive(v___x_3048_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_3056_ = v___x_3048_;
v_isShared_3057_ = v_isSharedCheck_3061_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_a_3054_);
lean_inc(v_a_3053_);
lean_dec(v___x_3048_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3061_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v___x_3059_; 
if (v_isShared_3057_ == 0)
{
v___x_3059_ = v___x_3056_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v_a_3053_);
lean_ctor_set(v_reuseFailAlloc_3060_, 1, v_a_3054_);
v___x_3059_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
return v___x_3059_;
}
}
}
}
else
{
lean_object* v_p_3062_; uint8_t v_decide_3063_; 
v_p_3062_ = lean_string_utf8_next_fast(v_s_3000_, v_p_3004_);
lean_dec(v_p_3004_);
v_decide_3063_ = lean_nat_dec_eq(v_p_3062_, v___x_3011_);
if (v_decide_3063_ == 0)
{
uint32_t v___x_3064_; uint8_t v___x_3065_; 
v___x_3064_ = lean_string_utf8_get_fast(v_s_3000_, v_p_3062_);
v___x_3065_ = lean_uint32_dec_eq(v___x_3064_, v___x_3046_);
if (v___x_3065_ == 0)
{
lean_object* v___x_3066_; lean_object* v___x_3067_; 
lean_dec_ref(v_ands_3003_);
lean_dec_ref(v_ors_3002_);
lean_dec_ref(v_s_3000_);
v___x_3066_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__1));
v___x_3067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3067_, 0, v___x_3066_);
lean_ctor_set(v___x_3067_, 1, v_p_3062_);
return v___x_3067_;
}
else
{
lean_object* v___x_3068_; lean_object* v___x_3069_; uint8_t v___x_3070_; 
v___x_3068_ = lean_array_get_size(v_ands_3003_);
v___x_3069_ = lean_unsigned_to_nat(0u);
v___x_3070_ = lean_nat_dec_eq(v___x_3068_, v___x_3069_);
if (v___x_3070_ == 0)
{
lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3071_ = lean_array_push(v_ors_3002_, v_ands_3003_);
v___x_3072_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__2));
v___x_3073_ = lean_string_utf8_next_fast(v_s_3000_, v_p_3062_);
v_needsRange_3001_ = v___x_3043_;
v_ors_3002_ = v___x_3071_;
v_ands_3003_ = v___x_3072_;
v_p_3004_ = v___x_3073_;
goto _start;
}
else
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
lean_dec_ref(v_ands_3003_);
lean_dec_ref(v_ors_3002_);
lean_dec_ref(v_s_3000_);
v___x_3075_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0));
v___x_3076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3075_);
lean_ctor_set(v___x_3076_, 1, v_p_3062_);
return v___x_3076_;
}
}
}
else
{
lean_object* v___x_3077_; lean_object* v___x_3078_; 
lean_dec_ref(v_ands_3003_);
lean_dec_ref(v_ors_3002_);
lean_dec_ref(v_s_3000_);
v___x_3077_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__1));
v___x_3078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3077_);
lean_ctor_set(v___x_3078_, 1, v_p_3062_);
return v___x_3078_;
}
}
}
else
{
if (v_needsRange_3001_ == 0)
{
lean_object* v___x_3079_; 
v___x_3079_ = lean_string_utf8_next_fast(v_s_3000_, v_p_3004_);
lean_dec(v_p_3004_);
v_needsRange_3001_ = v___x_3043_;
v_p_3004_ = v___x_3079_;
goto _start;
}
else
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
lean_dec_ref(v_ands_3003_);
lean_dec_ref(v_ors_3002_);
lean_dec_ref(v_s_3000_);
v___x_3081_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0));
v___x_3082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3081_);
lean_ctor_set(v___x_3082_, 1, v_p_3004_);
return v___x_3082_;
}
}
}
else
{
goto v___jp_3008_;
}
}
else
{
goto v___jp_3008_;
}
}
else
{
goto v___jp_3008_;
}
}
else
{
goto v___jp_3008_;
}
}
else
{
lean_object* v_p_3083_; uint8_t v_decide_3084_; 
v_p_3083_ = lean_string_utf8_next_fast(v_s_3000_, v_p_3004_);
lean_dec(v_p_3004_);
v_decide_3084_ = lean_nat_dec_eq(v_p_3083_, v___x_3011_);
if (v_decide_3084_ == 0)
{
lean_object* v___x_3085_; 
lean_inc_ref(v_s_3000_);
v___x_3085_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseTilde(v_s_3000_, v_ands_3003_, v_p_3083_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_object* v_a_3086_; lean_object* v_a_3087_; 
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
lean_inc(v_a_3086_);
v_a_3087_ = lean_ctor_get(v___x_3085_, 1);
lean_inc(v_a_3087_);
lean_dec_ref_known(v___x_3085_, 2);
v_needsRange_3001_ = v_decide_3084_;
v_ands_3003_ = v_a_3086_;
v_p_3004_ = v_a_3087_;
goto _start;
}
else
{
lean_object* v_a_3089_; lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3097_; 
lean_dec_ref(v_ors_3002_);
lean_dec_ref(v_s_3000_);
v_a_3089_ = lean_ctor_get(v___x_3085_, 0);
v_a_3090_ = lean_ctor_get(v___x_3085_, 1);
v_isSharedCheck_3097_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3092_ = v___x_3085_;
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_inc(v_a_3089_);
lean_dec(v___x_3085_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3095_; 
if (v_isShared_3093_ == 0)
{
v___x_3095_ = v___x_3092_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_a_3089_);
lean_ctor_set(v_reuseFailAlloc_3096_, 1, v_a_3090_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
}
}
else
{
lean_object* v___x_3098_; lean_object* v___x_3099_; 
lean_dec_ref(v_ands_3003_);
lean_dec_ref(v_ors_3002_);
lean_dec_ref(v_s_3000_);
v___x_3098_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__3));
v___x_3099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3098_);
lean_ctor_set(v___x_3099_, 1, v_p_3083_);
return v___x_3099_;
}
}
}
else
{
lean_object* v_p_3100_; uint8_t v_decide_3101_; 
v_p_3100_ = lean_string_utf8_next_fast(v_s_3000_, v_p_3004_);
lean_dec(v_p_3004_);
v_decide_3101_ = lean_nat_dec_eq(v_p_3100_, v___x_3011_);
if (v_decide_3101_ == 0)
{
lean_object* v___x_3102_; 
lean_inc_ref(v_s_3000_);
v___x_3102_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseCaret(v_s_3000_, v_ands_3003_, v_p_3100_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v_a_3103_; lean_object* v_a_3104_; 
v_a_3103_ = lean_ctor_get(v___x_3102_, 0);
lean_inc(v_a_3103_);
v_a_3104_ = lean_ctor_get(v___x_3102_, 1);
lean_inc(v_a_3104_);
lean_dec_ref_known(v___x_3102_, 2);
v_needsRange_3001_ = v_decide_3101_;
v_ands_3003_ = v_a_3103_;
v_p_3004_ = v_a_3104_;
goto _start;
}
else
{
lean_object* v_a_3106_; lean_object* v_a_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3114_; 
lean_dec_ref(v_ors_3002_);
lean_dec_ref(v_s_3000_);
v_a_3106_ = lean_ctor_get(v___x_3102_, 0);
v_a_3107_ = lean_ctor_get(v___x_3102_, 1);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3109_ = v___x_3102_;
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_a_3107_);
lean_inc(v_a_3106_);
lean_dec(v___x_3102_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3106_);
lean_ctor_set(v_reuseFailAlloc_3113_, 1, v_a_3107_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
}
else
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
lean_dec_ref(v_ands_3003_);
lean_dec_ref(v_ors_3002_);
lean_dec_ref(v_s_3000_);
v___x_3115_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__4));
v___x_3116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3115_);
lean_ctor_set(v___x_3116_, 1, v_p_3100_);
return v___x_3116_;
}
}
}
else
{
goto v___jp_3013_;
}
}
v___jp_3117_:
{
uint32_t v___x_3118_; uint8_t v___x_3119_; 
v___x_3118_ = 48;
v___x_3119_ = lean_uint32_dec_le(v___x_3118_, v_c_3027_);
if (v___x_3119_ == 0)
{
goto v___jp_3028_;
}
else
{
uint32_t v___x_3120_; uint8_t v___x_3121_; 
v___x_3120_ = 57;
v___x_3121_ = lean_uint32_dec_le(v_c_3027_, v___x_3120_);
if (v___x_3121_ == 0)
{
goto v___jp_3028_;
}
else
{
goto v___jp_3013_;
}
}
}
v___jp_3122_:
{
if (v___y_3123_ == 0)
{
uint32_t v___x_3124_; uint8_t v___x_3125_; 
v___x_3124_ = 97;
v___x_3125_ = lean_uint32_dec_le(v___x_3124_, v_c_3027_);
if (v___x_3125_ == 0)
{
goto v___jp_3117_;
}
else
{
uint32_t v___x_3126_; uint8_t v___x_3127_; 
v___x_3126_ = 122;
v___x_3127_ = lean_uint32_dec_le(v_c_3027_, v___x_3126_);
if (v___x_3127_ == 0)
{
goto v___jp_3117_;
}
else
{
goto v___jp_3013_;
}
}
}
else
{
goto v___jp_3013_;
}
}
}
else
{
lean_dec_ref(v_s_3000_);
if (v_needsRange_3001_ == 0)
{
lean_object* v___x_3132_; lean_object* v___x_3133_; uint8_t v___x_3134_; 
v___x_3132_ = lean_array_get_size(v_ands_3003_);
v___x_3133_ = lean_unsigned_to_nat(0u);
v___x_3134_ = lean_nat_dec_eq(v___x_3132_, v___x_3133_);
if (v___x_3134_ == 0)
{
lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3135_ = lean_array_push(v_ors_3002_, v_ands_3003_);
v___x_3136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3135_);
lean_ctor_set(v___x_3136_, 1, v_p_3004_);
return v___x_3136_;
}
else
{
lean_dec_ref(v_ands_3003_);
lean_dec_ref(v_ors_3002_);
goto v___jp_3005_;
}
}
else
{
lean_dec_ref(v_ands_3003_);
lean_dec_ref(v_ors_3002_);
goto v___jp_3005_;
}
}
v___jp_3005_:
{
lean_object* v___x_3006_; lean_object* v___x_3007_; 
v___x_3006_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___closed__0));
v___x_3007_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3006_);
lean_ctor_set(v___x_3007_, 1, v_p_3004_);
return v___x_3007_;
}
v___jp_3008_:
{
lean_object* v___x_3009_; 
v___x_3009_ = lean_string_utf8_next_fast(v_s_3000_, v_p_3004_);
lean_dec(v_p_3004_);
v_p_3004_ = v___x_3009_;
goto _start;
}
v___jp_3013_:
{
lean_object* v___x_3014_; 
lean_inc_ref(v_s_3000_);
v___x_3014_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_parseWild(v_s_3000_, v_ands_3003_, v_p_3004_);
if (lean_obj_tag(v___x_3014_) == 0)
{
lean_object* v_a_3015_; lean_object* v_a_3016_; 
v_a_3015_ = lean_ctor_get(v___x_3014_, 0);
lean_inc(v_a_3015_);
v_a_3016_ = lean_ctor_get(v___x_3014_, 1);
lean_inc(v_a_3016_);
lean_dec_ref_known(v___x_3014_, 2);
v_needsRange_3001_ = v_decide_3012_;
v_ands_3003_ = v_a_3015_;
v_p_3004_ = v_a_3016_;
goto _start;
}
else
{
lean_object* v_a_3018_; lean_object* v_a_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3026_; 
lean_dec_ref(v_ors_3002_);
lean_dec_ref(v_s_3000_);
v_a_3018_ = lean_ctor_get(v___x_3014_, 0);
v_a_3019_ = lean_ctor_get(v___x_3014_, 1);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_3014_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3021_ = v___x_3014_;
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_a_3019_);
lean_inc(v_a_3018_);
lean_dec(v___x_3014_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3018_);
lean_ctor_set(v_reuseFailAlloc_3025_, 1, v_a_3019_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
return v___x_3024_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go___boxed(lean_object* v_s_3137_, lean_object* v_needsRange_3138_, lean_object* v_ors_3139_, lean_object* v_ands_3140_, lean_object* v_p_3141_){
_start:
{
uint8_t v_needsRange_boxed_3142_; lean_object* v_res_3143_; 
v_needsRange_boxed_3142_ = lean_unbox(v_needsRange_3138_);
v_res_3143_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go(v_s_3137_, v_needsRange_boxed_3142_, v_ors_3139_, v_ands_3140_, v_p_3141_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Version_0__Lake_VerRange_parseM(lean_object* v_s_3146_, lean_object* v_a_3147_){
_start:
{
uint8_t v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; 
v___x_3148_ = 1;
v___x_3149_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM___closed__0));
lean_inc_ref(v_s_3146_);
v___x_3150_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go(v_s_3146_, v___x_3148_, v___x_3149_, v___x_3149_, v_a_3147_);
if (lean_obj_tag(v___x_3150_) == 0)
{
lean_object* v_a_3151_; lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3160_; 
v_a_3151_ = lean_ctor_get(v___x_3150_, 0);
v_a_3152_ = lean_ctor_get(v___x_3150_, 1);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3154_ = v___x_3150_;
v_isShared_3155_ = v_isSharedCheck_3160_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_inc(v_a_3151_);
lean_dec(v___x_3150_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3160_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3156_; lean_object* v___x_3158_; 
v___x_3156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3156_, 0, v_s_3146_);
lean_ctor_set(v___x_3156_, 1, v_a_3151_);
if (v_isShared_3155_ == 0)
{
lean_ctor_set(v___x_3154_, 0, v___x_3156_);
v___x_3158_ = v___x_3154_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v___x_3156_);
lean_ctor_set(v_reuseFailAlloc_3159_, 1, v_a_3152_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
else
{
lean_object* v_a_3161_; lean_object* v_a_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3169_; 
lean_dec_ref(v_s_3146_);
v_a_3161_ = lean_ctor_get(v___x_3150_, 0);
v_a_3162_ = lean_ctor_get(v___x_3150_, 1);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3164_ = v___x_3150_;
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_a_3162_);
lean_inc(v_a_3161_);
lean_dec(v___x_3150_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3167_; 
if (v_isShared_3165_ == 0)
{
v___x_3167_ = v___x_3164_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_a_3161_);
lean_ctor_set(v_reuseFailAlloc_3168_, 1, v_a_3162_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_VerRange_parse(lean_object* v_s_3170_){
_start:
{
lean_object* v___x_3171_; lean_object* v___x_3172_; uint8_t v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3171_ = lean_unsigned_to_nat(0u);
v___x_3172_ = lean_string_utf8_byte_size(v_s_3170_);
v___x_3173_ = 1;
v___x_3174_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_VerRange_parseM___closed__0));
lean_inc_ref(v_s_3170_);
v___x_3175_ = l___private_Lake_Util_Version_0__Lake_VerRange_parseM_go(v_s_3170_, v___x_3173_, v___x_3174_, v___x_3174_, v___x_3171_);
if (lean_obj_tag(v___x_3175_) == 0)
{
lean_object* v_a_3176_; lean_object* v_a_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3190_; 
v_a_3176_ = lean_ctor_get(v___x_3175_, 0);
v_a_3177_ = lean_ctor_get(v___x_3175_, 1);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3175_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3179_ = v___x_3175_;
v_isShared_3180_ = v_isSharedCheck_3190_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_inc(v_a_3176_);
lean_dec(v___x_3175_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3190_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
uint8_t v_decide_3181_; 
v_decide_3181_ = lean_nat_dec_eq(v_a_3177_, v___x_3172_);
if (v_decide_3181_ == 0)
{
lean_object* v_tail_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; 
lean_del_object(v___x_3179_);
lean_dec(v_a_3176_);
v_tail_3182_ = lean_string_utf8_extract(v_s_3170_, v_a_3177_, v___x_3172_);
lean_dec(v_a_3177_);
lean_dec_ref(v_s_3170_);
v___x_3183_ = ((lean_object*)(l___private_Lake_Util_Version_0__Lake_runVerParse___redArg___closed__0));
v___x_3184_ = lean_string_append(v___x_3183_, v_tail_3182_);
lean_dec_ref(v_tail_3182_);
v___x_3185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3184_);
return v___x_3185_;
}
else
{
lean_object* v___x_3187_; 
lean_dec(v_a_3177_);
if (v_isShared_3180_ == 0)
{
lean_ctor_set(v___x_3179_, 1, v_a_3176_);
lean_ctor_set(v___x_3179_, 0, v_s_3170_);
v___x_3187_ = v___x_3179_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_s_3170_);
lean_ctor_set(v_reuseFailAlloc_3189_, 1, v_a_3176_);
v___x_3187_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
lean_object* v___x_3188_; 
v___x_3188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3187_);
return v___x_3188_;
}
}
}
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3192_; 
lean_dec_ref(v_s_3170_);
v_a_3191_ = lean_ctor_get(v___x_3175_, 0);
lean_inc(v_a_3191_);
lean_dec_ref_known(v___x_3175_, 2);
v___x_3192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3192_, 0, v_a_3191_);
return v___x_3192_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0(lean_object* v_ver_3195_, lean_object* v_as_3196_, size_t v_i_3197_, size_t v_stop_3198_){
_start:
{
uint8_t v___x_3199_; 
v___x_3199_ = lean_usize_dec_eq(v_i_3197_, v_stop_3198_);
if (v___x_3199_ == 0)
{
lean_object* v___x_3200_; uint8_t v___x_3201_; 
v___x_3200_ = lean_array_uget_borrowed(v_as_3196_, v_i_3197_);
v___x_3201_ = l_Lake_VerComparator_test(v___x_3200_, v_ver_3195_);
if (v___x_3201_ == 0)
{
uint8_t v___x_3202_; 
v___x_3202_ = 1;
return v___x_3202_;
}
else
{
size_t v___x_3203_; size_t v___x_3204_; 
v___x_3203_ = ((size_t)1ULL);
v___x_3204_ = lean_usize_add(v_i_3197_, v___x_3203_);
v_i_3197_ = v___x_3204_;
goto _start;
}
}
else
{
uint8_t v___x_3206_; 
v___x_3206_ = 0;
return v___x_3206_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0___boxed(lean_object* v_ver_3207_, lean_object* v_as_3208_, lean_object* v_i_3209_, lean_object* v_stop_3210_){
_start:
{
size_t v_i_boxed_3211_; size_t v_stop_boxed_3212_; uint8_t v_res_3213_; lean_object* v_r_3214_; 
v_i_boxed_3211_ = lean_unbox_usize(v_i_3209_);
lean_dec(v_i_3209_);
v_stop_boxed_3212_ = lean_unbox_usize(v_stop_3210_);
lean_dec(v_stop_3210_);
v_res_3213_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0(v_ver_3207_, v_as_3208_, v_i_boxed_3211_, v_stop_boxed_3212_);
lean_dec_ref(v_as_3208_);
lean_dec_ref(v_ver_3207_);
v_r_3214_ = lean_box(v_res_3213_);
return v_r_3214_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1(lean_object* v_ver_3215_, lean_object* v_as_3216_, size_t v_i_3217_, size_t v_stop_3218_){
_start:
{
uint8_t v___x_3219_; 
v___x_3219_ = lean_usize_dec_eq(v_i_3217_, v_stop_3218_);
if (v___x_3219_ == 0)
{
uint8_t v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; uint8_t v___x_3224_; 
v___x_3220_ = 1;
v___x_3221_ = lean_array_uget_borrowed(v_as_3216_, v_i_3217_);
v___x_3222_ = lean_unsigned_to_nat(0u);
v___x_3223_ = lean_array_get_size(v___x_3221_);
v___x_3224_ = lean_nat_dec_lt(v___x_3222_, v___x_3223_);
if (v___x_3224_ == 0)
{
return v___x_3220_;
}
else
{
if (v___x_3224_ == 0)
{
return v___x_3220_;
}
else
{
size_t v___x_3225_; size_t v___x_3226_; uint8_t v___x_3227_; 
v___x_3225_ = ((size_t)0ULL);
v___x_3226_ = lean_usize_of_nat(v___x_3223_);
v___x_3227_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__0(v_ver_3215_, v___x_3221_, v___x_3225_, v___x_3226_);
if (v___x_3227_ == 0)
{
return v___x_3220_;
}
else
{
size_t v___x_3228_; size_t v___x_3229_; 
v___x_3228_ = ((size_t)1ULL);
v___x_3229_ = lean_usize_add(v_i_3217_, v___x_3228_);
v_i_3217_ = v___x_3229_;
goto _start;
}
}
}
}
else
{
uint8_t v___x_3231_; 
v___x_3231_ = 0;
return v___x_3231_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1___boxed(lean_object* v_ver_3232_, lean_object* v_as_3233_, lean_object* v_i_3234_, lean_object* v_stop_3235_){
_start:
{
size_t v_i_boxed_3236_; size_t v_stop_boxed_3237_; uint8_t v_res_3238_; lean_object* v_r_3239_; 
v_i_boxed_3236_ = lean_unbox_usize(v_i_3234_);
lean_dec(v_i_3234_);
v_stop_boxed_3237_ = lean_unbox_usize(v_stop_3235_);
lean_dec(v_stop_3235_);
v_res_3238_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1(v_ver_3232_, v_as_3233_, v_i_boxed_3236_, v_stop_boxed_3237_);
lean_dec_ref(v_as_3233_);
lean_dec_ref(v_ver_3232_);
v_r_3239_ = lean_box(v_res_3238_);
return v_r_3239_;
}
}
LEAN_EXPORT uint8_t l_Lake_VerRange_test(lean_object* v_self_3240_, lean_object* v_ver_3241_){
_start:
{
lean_object* v_clauses_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; uint8_t v___x_3245_; 
v_clauses_3242_ = lean_ctor_get(v_self_3240_, 1);
v___x_3243_ = lean_unsigned_to_nat(0u);
v___x_3244_ = lean_array_get_size(v_clauses_3242_);
v___x_3245_ = lean_nat_dec_lt(v___x_3243_, v___x_3244_);
if (v___x_3245_ == 0)
{
return v___x_3245_;
}
else
{
if (v___x_3245_ == 0)
{
return v___x_3245_;
}
else
{
size_t v___x_3246_; size_t v___x_3247_; uint8_t v___x_3248_; 
v___x_3246_ = ((size_t)0ULL);
v___x_3247_ = lean_usize_of_nat(v___x_3244_);
v___x_3248_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_VerRange_test_spec__1(v_ver_3241_, v_clauses_3242_, v___x_3246_, v___x_3247_);
return v___x_3248_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_VerRange_test___boxed(lean_object* v_self_3249_, lean_object* v_ver_3250_){
_start:
{
uint8_t v_res_3251_; lean_object* v_r_3252_; 
v_res_3251_ = l_Lake_VerRange_test(v_self_3249_, v_ver_3250_);
lean_dec_ref(v_ver_3250_);
lean_dec_ref(v_self_3249_);
v_r_3252_ = lean_box(v_res_3251_);
return v_r_3252_;
}
}
lean_object* runtime_initialize_Lean_Data_Json(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Date(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Trie(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_Version(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_SemVerCore_instLT = _init_l_Lake_SemVerCore_instLT();
lean_mark_persistent(l_Lake_SemVerCore_instLT);
l_Lake_SemVerCore_instLE = _init_l_Lake_SemVerCore_instLE();
lean_mark_persistent(l_Lake_SemVerCore_instLE);
l_Lake_StdVer_instLT = _init_l_Lake_StdVer_instLT();
lean_mark_persistent(l_Lake_StdVer_instLT);
l_Lake_StdVer_instLE = _init_l_Lake_StdVer_instLE();
lean_mark_persistent(l_Lake_StdVer_instLE);
l_Lake_ToolchainVer_instLT = _init_l_Lake_ToolchainVer_instLT();
lean_mark_persistent(l_Lake_ToolchainVer_instLT);
l_Lake_ToolchainVer_instLE = _init_l_Lake_ToolchainVer_instLE();
lean_mark_persistent(l_Lake_ToolchainVer_instLE);
l_Lake_instInhabitedComparatorOp_default = _init_l_Lake_instInhabitedComparatorOp_default();
l_Lake_instInhabitedComparatorOp = _init_l_Lake_instInhabitedComparatorOp();
l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie = _init_l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie();
lean_mark_persistent(l___private_Lake_Util_Version_0__Lake_ComparatorOp_parseM_trie);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_Version(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
lean_object* initialize_Lake_Util_Date(uint8_t builtin);
lean_object* initialize_Init_Control_Do(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Lean_Data_Trie(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_Version(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_Version(builtin);
}
#ifdef __cplusplus
}
#endif

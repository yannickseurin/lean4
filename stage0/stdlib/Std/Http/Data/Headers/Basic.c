// Lean compiler output
// Module: Std.Http.Data.Headers.Basic
// Imports: public import Std.Http.Data.URI public import Std.Http.Data.Headers.Name public import Std.Http.Data.Headers.Value public import Std.Internal.Parsec.Basic import Init.Data.String.Search
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
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Http_URI_Parser_parseHostHeader(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Std_Http_Internal_isToken(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_length(lean_object*);
extern lean_object* l_Std_Http_Header_Name_expect;
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_instReprPort_repr(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_transferEncoding;
extern lean_object* l_Std_Http_Header_Name_contentLength;
lean_object* l_String_Slice_Pattern_Char_instToForwardSearcherCharDefaultForwardSearcherForallBoolBeq___redArg___lam__0___boxed(lean_object*);
lean_object* l_String_Slice_splitToSubslice___redArg(lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_connection;
uint8_t l_Std_Http_URI_instBEqHost_beq(lean_object*, lean_object*);
uint8_t l_Std_Http_URI_instDecidableEqPort_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__0 = (const lean_object*)&l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__0_value;
static const lean_string_object l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\r\n"};
static const lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__1 = (const lean_object*)&l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_Pattern_Char_instToForwardSearcherCharDefaultForwardSearcherForallBoolBeq___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__2 = (const lean_object*)&l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__2_value;
static const lean_string_object l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__3 = (const lean_object*)&l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__3_value;
static lean_once_cell_t l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__4;
static const lean_string_object l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__5 = (const lean_object*)&l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___boxed__const__1;
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader(lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqContentLength_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqContentLength_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instBEqContentLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instBEqContentLength_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instBEqContentLength___closed__0 = (const lean_object*)&l_Std_Http_Header_instBEqContentLength___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instBEqContentLength = (const lean_object*)&l_Std_Http_Header_instBEqContentLength___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Header_instReprContentLength_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__3_value),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__8_value;
static lean_once_cell_t l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9;
static lean_once_cell_t l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11_value;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instReprContentLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instReprContentLength_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instReprContentLength___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprContentLength___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instReprContentLength = (const lean_object*)&l_Std_Http_Header_instReprContentLength___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_ContentLength_parse(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_ContentLength_serialize(lean_object*);
static const lean_closure_object l_Std_Http_Header_ContentLength_inst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_ContentLength_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_ContentLength_inst___closed__0 = (const lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__0_value;
static const lean_closure_object l_Std_Http_Header_ContentLength_inst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_ContentLength_serialize, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_ContentLength_inst___closed__1 = (const lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_ContentLength_inst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__0_value),((lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__1_value)}};
static const lean_object* l_Std_Http_Header_ContentLength_inst___closed__2 = (const lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_ContentLength_inst = (const lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__2_value;
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "chunked"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Header_TransferEncoding_Validate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0_value)}};
static const lean_object* l_Std_Http_Header_TransferEncoding_Validate___closed__0 = (const lean_object*)&l_Std_Http_Header_TransferEncoding_Validate___closed__0_value;
static const lean_array_object l_Std_Http_Header_TransferEncoding_Validate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_Header_TransferEncoding_Validate___closed__1 = (const lean_object*)&l_Std_Http_Header_TransferEncoding_Validate___closed__1_value;
LEAN_EXPORT uint8_t l_Std_Http_Header_TransferEncoding_Validate(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_Validate___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__3_value;
static const lean_string_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5;
static lean_once_cell_t l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6;
static const lean_ctor_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__8_value;
static const lean_string_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__9 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__10 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "codings"};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4;
static const lean_string_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isValid"};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__6_value;
static const lean_string_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__7 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__7_value)}};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instReprTransferEncoding___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instReprTransferEncoding_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instReprTransferEncoding___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instReprTransferEncoding = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_Header_TransferEncoding_isChunked(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_isChunked___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_parse(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_serialize(lean_object*);
static const lean_closure_object l_Std_Http_Header_TransferEncoding_inst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_TransferEncoding_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_TransferEncoding_inst___closed__0 = (const lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__0_value;
static const lean_closure_object l_Std_Http_Header_TransferEncoding_inst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_TransferEncoding_serialize, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_TransferEncoding_inst___closed__1 = (const lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_TransferEncoding_inst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__0_value),((lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__1_value)}};
static const lean_object* l_Std_Http_Header_TransferEncoding_inst___closed__2 = (const lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_TransferEncoding_inst = (const lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__2_value;
static const lean_string_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tokens"};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "valid"};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instReprConnection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instReprConnection_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instReprConnection___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprConnection___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instReprConnection = (const lean_object*)&l_Std_Http_Header_instReprConnection___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Header_Connection_containsToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_containsToken___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Header_Connection_shouldClose___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Std_Http_Header_Connection_shouldClose___closed__0 = (const lean_object*)&l_Std_Http_Header_Connection_shouldClose___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_Header_Connection_shouldClose(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_shouldClose___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_parse(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_serialize(lean_object*);
static const lean_closure_object l_Std_Http_Header_Connection_inst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Connection_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Connection_inst___closed__0 = (const lean_object*)&l_Std_Http_Header_Connection_inst___closed__0_value;
static const lean_closure_object l_Std_Http_Header_Connection_inst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Connection_serialize, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Connection_inst___closed__1 = (const lean_object*)&l_Std_Http_Header_Connection_inst___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_Connection_inst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Header_Connection_inst___closed__0_value),((lean_object*)&l_Std_Http_Header_Connection_inst___closed__1_value)}};
static const lean_object* l_Std_Http_Header_Connection_inst___closed__2 = (const lean_object*)&l_Std_Http_Header_Connection_inst___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_Connection_inst = (const lean_object*)&l_Std_Http_Header_Connection_inst___closed__2_value;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_instReprHost_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_instReprHost_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Header_instReprHost_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Http_Header_instReprHost_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__4;
static lean_once_cell_t l_Std_Http_Header_instReprHost_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__5;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Std.Http.URI.Host."};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__6_value;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__7 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Http_Header_instReprHost_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__7_value)}};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__8_value;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ipv4"};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__10_value;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ipv6"};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instReprHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instReprHost_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instReprHost___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instReprHost = (const lean_object*)&l_Std_Http_Header_instReprHost___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqHost_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqHost_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instBEqHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instBEqHost_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instBEqHost___closed__0 = (const lean_object*)&l_Std_Http_Header_instBEqHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instBEqHost = (const lean_object*)&l_Std_Http_Header_instBEqHost___closed__0_value;
static const lean_string_object l_Std_Http_Header_Host_parse___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l_Std_Http_Header_Host_parse___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Header_Host_parse___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_Host_parse___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Header_Host_parse___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Header_Host_parse___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Header_Host_parse___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Header_Host_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*9 + 0, .m_other = 9, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(253) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(256) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(128) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(100) << 1) | 1))}};
static const lean_object* l_Std_Http_Header_Host_parse___closed__0 = (const lean_object*)&l_Std_Http_Header_Host_parse___closed__0_value;
static const lean_closure_object l_Std_Http_Header_Host_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Host_parse___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Header_Host_parse___closed__0_value)} };
static const lean_object* l_Std_Http_Header_Host_parse___closed__1 = (const lean_object*)&l_Std_Http_Header_Host_parse___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse___boxed(lean_object*);
static const lean_string_object l_Std_Http_Header_Host_serialize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Http_Header_Host_serialize___closed__0 = (const lean_object*)&l_Std_Http_Header_Host_serialize___closed__0_value;
static const lean_string_object l_Std_Http_Header_Host_serialize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Http_Header_Host_serialize___closed__1 = (const lean_object*)&l_Std_Http_Header_Host_serialize___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_serialize(lean_object*);
static const lean_closure_object l_Std_Http_Header_Host_inst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Host_parse___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Host_inst___closed__0 = (const lean_object*)&l_Std_Http_Header_Host_inst___closed__0_value;
static const lean_closure_object l_Std_Http_Header_Host_inst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Host_serialize, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Host_inst___closed__1 = (const lean_object*)&l_Std_Http_Header_Host_inst___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_Host_inst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Header_Host_inst___closed__0_value),((lean_object*)&l_Std_Http_Header_Host_inst___closed__1_value)}};
static const lean_object* l_Std_Http_Header_Host_inst___closed__2 = (const lean_object*)&l_Std_Http_Header_Host_inst___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_Host_inst = (const lean_object*)&l_Std_Http_Header_Host_inst___closed__2_value;
static const lean_ctor_object l_Std_Http_Header_instReprExpect_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprExpect_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_instReprExpect_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprExpect_repr___redArg___closed__0_value),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Header_instReprExpect_repr___redArg___closed__1_value;
static lean_once_cell_t l_Std_Http_Header_instReprExpect_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___closed__2;
static lean_once_cell_t l_Std_Http_Header_instReprExpect_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___closed__3;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___redArg();
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Http_Header_instReprExpect_repr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprExpect_repr___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instReprExpect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instReprExpect_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instReprExpect___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprExpect___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instReprExpect = (const lean_object*)&l_Std_Http_Header_instReprExpect___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqExpect_beq___redArg();
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqExpect_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqExpect_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqExpect_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instBEqExpect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instBEqExpect_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instBEqExpect___closed__0 = (const lean_object*)&l_Std_Http_Header_instBEqExpect___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instBEqExpect = (const lean_object*)&l_Std_Http_Header_instBEqExpect___closed__0_value;
static const lean_string_object l_Std_Http_Header_Expect_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "100-continue"};
static const lean_object* l_Std_Http_Header_Expect_parse___closed__0 = (const lean_object*)&l_Std_Http_Header_Expect_parse___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_Expect_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Header_Expect_parse___closed__1 = (const lean_object*)&l_Std_Http_Header_Expect_parse___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_parse(lean_object*);
static lean_once_cell_t l_Std_Http_Header_Expect_serialize___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Expect_serialize___redArg___closed__0;
static lean_once_cell_t l_Std_Http_Header_Expect_serialize___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Expect_serialize___redArg___closed__1;
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize___redArg();
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Http_Header_Expect_serialize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Expect_serialize___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize(lean_object*);
static const lean_closure_object l_Std_Http_Header_Expect_inst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Expect_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Expect_inst___closed__0 = (const lean_object*)&l_Std_Http_Header_Expect_inst___closed__0_value;
static const lean_closure_object l_Std_Http_Header_Expect_inst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Expect_serialize, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Expect_inst___closed__1 = (const lean_object*)&l_Std_Http_Header_Expect_inst___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_Expect_inst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Header_Expect_inst___closed__0_value),((lean_object*)&l_Std_Http_Header_Expect_inst___closed__1_value)}};
static const lean_object* l_Std_Http_Header_Expect_inst___closed__2 = (const lean_object*)&l_Std_Http_Header_Expect_inst___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_Expect_inst = (const lean_object*)&l_Std_Http_Header_Expect_inst___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__0(lean_object* v___x_1_, lean_object* v___x_2_, lean_object* v___x_3_, lean_object* v_fst_4_, lean_object* v___x_5_, uint32_t v___x_6_, lean_object* v___x_7_, lean_object* v_it_8_, lean_object* v_acc_9_, lean_object* v_hP_10_, lean_object* v_recur_11_){
_start:
{
lean_object* v_it_13_; lean_object* v_out_14_; lean_object* v___y_30_; uint32_t v___y_31_; lean_object* v___y_32_; uint8_t v___y_33_; lean_object* v_it_39_; lean_object* v_startInclusive_40_; lean_object* v_endExclusive_41_; 
if (lean_obj_tag(v_it_8_) == 0)
{
lean_object* v_currPos_48_; lean_object* v_searcher_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_71_; 
v_currPos_48_ = lean_ctor_get(v_it_8_, 0);
v_searcher_49_ = lean_ctor_get(v_it_8_, 1);
v_isSharedCheck_71_ = !lean_is_exclusive(v_it_8_);
if (v_isSharedCheck_71_ == 0)
{
v___x_51_ = v_it_8_;
v_isShared_52_ = v_isSharedCheck_71_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_searcher_49_);
lean_inc(v_currPos_48_);
lean_dec(v_it_8_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_71_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
uint8_t v_decide_53_; 
v_decide_53_ = lean_nat_dec_eq(v_searcher_49_, v___x_5_);
if (v_decide_53_ == 0)
{
uint32_t v___x_54_; uint8_t v___x_55_; 
lean_dec(v___x_5_);
v___x_54_ = lean_string_utf8_get_fast(v_fst_4_, v_searcher_49_);
v___x_55_ = lean_uint32_dec_eq(v___x_54_, v___x_6_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; lean_object* v___x_58_; 
v___x_56_ = lean_string_utf8_next_fast(v_fst_4_, v_searcher_49_);
lean_dec(v_searcher_49_);
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 1, v___x_56_);
v___x_58_ = v___x_51_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_currPos_48_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v___x_56_);
v___x_58_ = v_reuseFailAlloc_60_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
lean_object* v___x_59_; 
v___x_59_ = lean_apply_4(v_recur_11_, v___x_58_, v_acc_9_, lean_box(0), lean_box(0));
return v___x_59_;
}
}
else
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v_slice_64_; lean_object* v_nextIt_66_; 
v___x_61_ = lean_string_utf8_next_fast(v_fst_4_, v_searcher_49_);
v___x_62_ = lean_nat_sub(v___x_61_, v_searcher_49_);
v___x_63_ = lean_nat_add(v_searcher_49_, v___x_62_);
lean_dec(v___x_62_);
v_slice_64_ = l_String_Slice_subslice_x21(v___x_7_, v_currPos_48_, v_searcher_49_);
lean_inc(v___x_63_);
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 1, v___x_63_);
lean_ctor_set(v___x_51_, 0, v___x_63_);
v_nextIt_66_ = v___x_51_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v___x_63_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v___x_63_);
v_nextIt_66_ = v_reuseFailAlloc_69_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
lean_object* v_startInclusive_67_; lean_object* v_endExclusive_68_; 
v_startInclusive_67_ = lean_ctor_get(v_slice_64_, 0);
lean_inc(v_startInclusive_67_);
v_endExclusive_68_ = lean_ctor_get(v_slice_64_, 1);
lean_inc(v_endExclusive_68_);
lean_dec_ref(v_slice_64_);
v_it_39_ = v_nextIt_66_;
v_startInclusive_40_ = v_startInclusive_67_;
v_endExclusive_41_ = v_endExclusive_68_;
goto v___jp_38_;
}
}
}
else
{
lean_object* v___x_70_; 
lean_del_object(v___x_51_);
lean_dec(v_searcher_49_);
v___x_70_ = lean_box(1);
v_it_39_ = v___x_70_;
v_startInclusive_40_ = v_currPos_48_;
v_endExclusive_41_ = v___x_5_;
goto v___jp_38_;
}
}
}
else
{
lean_dec_ref(v_recur_11_);
lean_dec(v___x_5_);
return v_acc_9_;
}
v___jp_12_:
{
if (lean_obj_tag(v_acc_9_) == 0)
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_15_, 0, v_out_14_);
v___x_16_ = lean_apply_4(v_recur_11_, v_it_13_, v___x_15_, lean_box(0), lean_box(0));
return v___x_16_;
}
else
{
lean_object* v_val_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_28_; 
v_val_17_ = lean_ctor_get(v_acc_9_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v_acc_9_);
if (v_isSharedCheck_28_ == 0)
{
v___x_19_ = v_acc_9_;
v_isShared_20_ = v_isSharedCheck_28_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_val_17_);
lean_dec(v_acc_9_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_28_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_21_ = lean_string_utf8_extract_fast(v___x_1_, v___x_2_, v___x_3_);
v___x_22_ = lean_string_append(v_val_17_, v___x_21_);
lean_dec_ref(v___x_21_);
v___x_23_ = lean_string_append(v___x_22_, v_out_14_);
lean_dec_ref(v_out_14_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 0, v___x_23_);
v___x_25_ = v___x_19_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v___x_23_);
v___x_25_ = v_reuseFailAlloc_27_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
lean_object* v___x_26_; 
v___x_26_ = lean_apply_4(v_recur_11_, v_it_13_, v___x_25_, lean_box(0), lean_box(0));
return v___x_26_;
}
}
}
}
v___jp_29_:
{
if (v___y_33_ == 0)
{
lean_object* v___x_34_; 
v___x_34_ = lean_string_utf8_set(v___y_30_, v___x_2_, v___y_31_);
v_it_13_ = v___y_32_;
v_out_14_ = v___x_34_;
goto v___jp_12_;
}
else
{
uint32_t v___x_35_; uint32_t v___x_36_; lean_object* v___x_37_; 
v___x_35_ = 4294967264;
v___x_36_ = lean_uint32_add(v___y_31_, v___x_35_);
v___x_37_ = lean_string_utf8_set(v___y_30_, v___x_2_, v___x_36_);
v_it_13_ = v___y_32_;
v_out_14_ = v___x_37_;
goto v___jp_12_;
}
}
v___jp_38_:
{
lean_object* v___x_42_; uint32_t v___x_43_; uint32_t v___x_44_; uint8_t v___x_45_; 
v___x_42_ = lean_string_utf8_extract_fast(v_fst_4_, v_startInclusive_40_, v_endExclusive_41_);
lean_dec(v_endExclusive_41_);
lean_dec(v_startInclusive_40_);
v___x_43_ = lean_string_utf8_get(v___x_42_, v___x_2_);
v___x_44_ = 97;
v___x_45_ = lean_uint32_dec_le(v___x_44_, v___x_43_);
if (v___x_45_ == 0)
{
v___y_30_ = v___x_42_;
v___y_31_ = v___x_43_;
v___y_32_ = v_it_39_;
v___y_33_ = v___x_45_;
goto v___jp_29_;
}
else
{
uint32_t v___x_46_; uint8_t v___x_47_; 
v___x_46_ = 122;
v___x_47_ = lean_uint32_dec_le(v___x_43_, v___x_46_);
v___y_30_ = v___x_42_;
v___y_31_ = v___x_43_;
v___y_32_ = v_it_39_;
v___y_33_ = v___x_47_;
goto v___jp_29_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__0___boxed(lean_object* v___x_72_, lean_object* v___x_73_, lean_object* v___x_74_, lean_object* v_fst_75_, lean_object* v___x_76_, lean_object* v___x_77_, lean_object* v___x_78_, lean_object* v_it_79_, lean_object* v_acc_80_, lean_object* v_hP_81_, lean_object* v_recur_82_){
_start:
{
uint32_t v___x_1423__boxed_83_; lean_object* v_res_84_; 
v___x_1423__boxed_83_ = lean_unbox_uint32(v___x_77_);
lean_dec(v___x_77_);
v_res_84_ = l_Std_Http_instEncodeV11OfHeader___redArg___lam__0(v___x_72_, v___x_73_, v___x_74_, v_fst_75_, v___x_76_, v___x_1423__boxed_83_, v___x_78_, v_it_79_, v_acc_80_, v_hP_81_, v_recur_82_);
lean_dec_ref(v___x_78_);
lean_dec_ref(v_fst_75_);
lean_dec(v___x_74_);
lean_dec(v___x_73_);
lean_dec_ref(v___x_72_);
return v_res_84_;
}
}
static lean_object* _init_l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = ((lean_object*)(l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__3));
v___x_90_ = lean_string_utf8_byte_size(v___x_89_);
return v___x_90_;
}
}
static lean_object* _init_l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___boxed__const__1(void){
_start:
{
uint32_t v___x_92_; lean_object* v___x_93_; 
v___x_92_ = 45;
v___x_93_ = lean_box_uint32(v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__1(lean_object* v_h_94_, lean_object* v_buffer_95_, lean_object* v_a_96_){
_start:
{
lean_object* v_serialize_97_; lean_object* v___x_98_; lean_object* v_fst_99_; lean_object* v_snd_100_; lean_object* v___y_102_; lean_object* v___f_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v_it_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___f_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_serialize_97_ = lean_ctor_get(v_h_94_, 1);
lean_inc_ref(v_serialize_97_);
lean_dec_ref(v_h_94_);
v___x_98_ = lean_apply_1(v_serialize_97_, v_a_96_);
v_fst_99_ = lean_ctor_get(v___x_98_, 0);
lean_inc_n(v_fst_99_, 2);
v_snd_100_ = lean_ctor_get(v___x_98_, 1);
lean_inc(v_snd_100_);
lean_dec_ref(v___x_98_);
v___f_121_ = ((lean_object*)(l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__2));
v___x_122_ = lean_unsigned_to_nat(0u);
v___x_123_ = lean_string_utf8_byte_size(v_fst_99_);
v___x_124_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_124_, 0, v_fst_99_);
lean_ctor_set(v___x_124_, 1, v___x_122_);
lean_ctor_set(v___x_124_, 2, v___x_123_);
lean_inc_ref(v___x_124_);
v_it_125_ = l_String_Slice_splitToSubslice___redArg(v___x_124_, v___f_121_);
v___x_126_ = ((lean_object*)(l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__3));
v___x_127_ = lean_obj_once(&l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__4, &l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__4_once, _init_l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__4);
v___x_128_ = l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___boxed__const__1;
v___f_129_ = lean_alloc_closure((void*)(l_Std_Http_instEncodeV11OfHeader___redArg___lam__0___boxed), 11, 7);
lean_closure_set(v___f_129_, 0, v___x_126_);
lean_closure_set(v___f_129_, 1, v___x_122_);
lean_closure_set(v___f_129_, 2, v___x_127_);
lean_closure_set(v___f_129_, 3, v_fst_99_);
lean_closure_set(v___f_129_, 4, v___x_123_);
lean_closure_set(v___f_129_, 5, v___x_128_);
lean_closure_set(v___f_129_, 6, v___x_124_);
v___x_130_ = lean_box(0);
v___x_131_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_129_, v_it_125_, v___x_130_, lean_box(0));
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v___x_132_; 
v___x_132_ = ((lean_object*)(l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__5));
v___y_102_ = v___x_132_;
goto v___jp_101_;
}
else
{
lean_object* v_val_133_; 
v_val_133_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_val_133_);
lean_dec_ref_known(v___x_131_, 1);
v___y_102_ = v_val_133_;
goto v___jp_101_;
}
v___jp_101_:
{
lean_object* v_data_103_; lean_object* v_size_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_120_; 
v_data_103_ = lean_ctor_get(v_buffer_95_, 0);
v_size_104_ = lean_ctor_get(v_buffer_95_, 1);
v_isSharedCheck_120_ = !lean_is_exclusive(v_buffer_95_);
if (v_isSharedCheck_120_ == 0)
{
v___x_106_ = v_buffer_95_;
v_isShared_107_ = v_isSharedCheck_120_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_size_104_);
lean_inc(v_data_103_);
lean_dec(v_buffer_95_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_120_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_108_ = ((lean_object*)(l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__0));
v___x_109_ = lean_string_append(v___y_102_, v___x_108_);
v___x_110_ = lean_string_append(v___x_109_, v_snd_100_);
lean_dec(v_snd_100_);
v___x_111_ = ((lean_object*)(l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___closed__1));
v___x_112_ = lean_string_append(v___x_110_, v___x_111_);
v___x_113_ = lean_string_to_utf8(v___x_112_);
lean_dec_ref(v___x_112_);
lean_inc_ref(v___x_113_);
v___x_114_ = lean_array_push(v_data_103_, v___x_113_);
v___x_115_ = lean_byte_array_size(v___x_113_);
lean_dec_ref(v___x_113_);
v___x_116_ = lean_nat_add(v_size_104_, v___x_115_);
lean_dec(v_size_104_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 1, v___x_116_);
lean_ctor_set(v___x_106_, 0, v___x_114_);
v___x_118_ = v___x_106_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_114_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v___x_116_);
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
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg(lean_object* v_h_134_){
_start:
{
lean_object* v___f_135_; 
v___f_135_ = lean_alloc_closure((void*)(l_Std_Http_instEncodeV11OfHeader___redArg___lam__1), 3, 1);
lean_closure_set(v___f_135_, 0, v_h_134_);
return v___f_135_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader(lean_object* v_00_u03b1_136_, lean_object* v_h_137_){
_start:
{
lean_object* v___f_138_; 
v___f_138_ = lean_alloc_closure((void*)(l_Std_Http_instEncodeV11OfHeader___redArg___lam__1), 3, 1);
lean_closure_set(v___f_138_, 0, v_h_137_);
return v___f_138_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg(){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___closed__0));
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___boxed(lean_object* v___dummy_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg();
return v_res_144_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0(void){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg();
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1(lean_object* v_s_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___boxed(lean_object* v_s_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1(v_s_148_);
lean_dec_ref(v_s_148_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__0(lean_object* v_s_150_, lean_object* v_p_151_){
_start:
{
uint32_t v___y_153_; lean_object* v___x_158_; uint8_t v_decide_159_; 
v___x_158_ = lean_string_utf8_byte_size(v_s_150_);
v_decide_159_ = lean_nat_dec_eq(v_p_151_, v___x_158_);
if (v_decide_159_ == 0)
{
uint32_t v___x_160_; uint8_t v___y_162_; uint32_t v___x_165_; uint8_t v___x_166_; 
v___x_160_ = lean_string_utf8_get_fast(v_s_150_, v_p_151_);
v___x_165_ = 65;
v___x_166_ = lean_uint32_dec_le(v___x_165_, v___x_160_);
if (v___x_166_ == 0)
{
v___y_162_ = v___x_166_;
goto v___jp_161_;
}
else
{
uint32_t v___x_167_; uint8_t v___x_168_; 
v___x_167_ = 90;
v___x_168_ = lean_uint32_dec_le(v___x_160_, v___x_167_);
v___y_162_ = v___x_168_;
goto v___jp_161_;
}
v___jp_161_:
{
if (v___y_162_ == 0)
{
v___y_153_ = v___x_160_;
goto v___jp_152_;
}
else
{
uint32_t v___x_163_; uint32_t v___x_164_; 
v___x_163_ = 32;
v___x_164_ = lean_uint32_add(v___x_160_, v___x_163_);
v___y_153_ = v___x_164_;
goto v___jp_152_;
}
}
}
else
{
lean_dec(v_p_151_);
return v_s_150_;
}
v___jp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
lean_inc(v_p_151_);
v___x_154_ = lean_string_utf8_set(v_s_150_, v_p_151_, v___y_153_);
v___x_155_ = l_Char_utf8Size(v___y_153_);
v___x_156_ = lean_nat_add(v_p_151_, v___x_155_);
lean_dec(v___x_155_);
lean_dec(v_p_151_);
v_s_150_ = v___x_154_;
v_p_151_ = v___x_156_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4(size_t v_sz_169_, size_t v_i_170_, lean_object* v_bs_171_){
_start:
{
uint8_t v___x_172_; 
v___x_172_ = lean_usize_dec_lt(v_i_170_, v_sz_169_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
v___x_173_ = l_unsafeCast___redArg(v_bs_171_);
lean_dec_ref(v_bs_171_);
return v___x_173_;
}
else
{
lean_object* v_v_174_; lean_object* v___x_175_; lean_object* v_bs_x27_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; size_t v___x_180_; size_t v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_v_174_ = lean_array_uget(v_bs_171_, v_i_170_);
v___x_175_ = lean_unsigned_to_nat(0u);
v_bs_x27_176_ = lean_array_uset(v_bs_171_, v_i_170_, v___x_175_);
v___x_177_ = l_unsafeCast___redArg(v_v_174_);
lean_dec(v_v_174_);
v___x_178_ = l_String_Slice_toString(v___x_177_);
lean_dec(v___x_177_);
v___x_179_ = l_String_mapAux___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__0(v___x_178_, v___x_175_);
v___x_180_ = ((size_t)1ULL);
v___x_181_ = lean_usize_add(v_i_170_, v___x_180_);
v___x_182_ = l_unsafeCast___redArg(v___x_179_);
lean_dec_ref(v___x_179_);
v___x_183_ = lean_array_uset(v_bs_x27_176_, v_i_170_, v___x_182_);
v_i_170_ = v___x_181_;
v_bs_171_ = v___x_183_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4___boxed(lean_object* v_sz_185_, lean_object* v_i_186_, lean_object* v_bs_187_){
_start:
{
size_t v_sz_boxed_188_; size_t v_i_boxed_189_; lean_object* v_res_190_; 
v_sz_boxed_188_ = lean_unbox_usize(v_sz_185_);
lean_dec(v_sz_185_);
v_i_boxed_189_ = lean_unbox_usize(v_i_186_);
lean_dec(v_i_186_);
v_res_190_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4(v_sz_boxed_188_, v_i_boxed_189_, v_bs_187_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(lean_object* v___x_191_, lean_object* v___x_192_, lean_object* v___x_193_, lean_object* v_a_194_, lean_object* v_b_195_){
_start:
{
lean_object* v_it_197_; lean_object* v_startInclusive_198_; lean_object* v_endExclusive_199_; 
if (lean_obj_tag(v_a_194_) == 0)
{
lean_object* v_currPos_204_; lean_object* v_searcher_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_234_; 
v_currPos_204_ = lean_ctor_get(v_a_194_, 0);
v_searcher_205_ = lean_ctor_get(v_a_194_, 1);
v_isSharedCheck_234_ = !lean_is_exclusive(v_a_194_);
if (v_isSharedCheck_234_ == 0)
{
v___x_207_ = v_a_194_;
v_isShared_208_ = v_isSharedCheck_234_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_searcher_205_);
lean_inc(v_currPos_204_);
lean_dec(v_a_194_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_234_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v_str_209_; lean_object* v_startInclusive_210_; lean_object* v_endExclusive_211_; lean_object* v___x_212_; uint8_t v_decide_213_; 
v_str_209_ = lean_ctor_get(v___x_192_, 0);
v_startInclusive_210_ = lean_ctor_get(v___x_192_, 1);
v_endExclusive_211_ = lean_ctor_get(v___x_192_, 2);
v___x_212_ = lean_nat_sub(v_endExclusive_211_, v_startInclusive_210_);
v_decide_213_ = lean_nat_dec_eq(v_searcher_205_, v___x_212_);
lean_dec(v___x_212_);
if (v_decide_213_ == 0)
{
lean_object* v___x_214_; uint32_t v___x_215_; uint32_t v___x_216_; uint8_t v___x_217_; 
v___x_214_ = lean_nat_add(v_startInclusive_210_, v_searcher_205_);
v___x_215_ = lean_string_utf8_get_fast(v_str_209_, v___x_214_);
v___x_216_ = 44;
v___x_217_ = lean_uint32_dec_eq(v___x_215_, v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_221_; 
lean_dec(v_searcher_205_);
v___x_218_ = lean_string_utf8_next_fast(v_str_209_, v___x_214_);
lean_dec(v___x_214_);
v___x_219_ = lean_nat_sub(v___x_218_, v_startInclusive_210_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 1, v___x_219_);
v___x_221_ = v___x_207_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_currPos_204_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v___x_219_);
v___x_221_ = v_reuseFailAlloc_223_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
v_a_194_ = v___x_221_;
goto _start;
}
}
else
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_slice_227_; lean_object* v_nextIt_229_; 
v___x_224_ = lean_string_utf8_next_fast(v_str_209_, v___x_214_);
v___x_225_ = lean_nat_sub(v___x_224_, v___x_214_);
lean_dec(v___x_214_);
v___x_226_ = lean_nat_add(v_searcher_205_, v___x_225_);
lean_dec(v___x_225_);
v_slice_227_ = l_String_Slice_subslice_x21(v___x_192_, v_currPos_204_, v_searcher_205_);
lean_inc(v___x_226_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 1, v___x_226_);
lean_ctor_set(v___x_207_, 0, v___x_226_);
v_nextIt_229_ = v___x_207_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v___x_226_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v___x_226_);
v_nextIt_229_ = v_reuseFailAlloc_232_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v_startInclusive_230_; lean_object* v_endExclusive_231_; 
v_startInclusive_230_ = lean_ctor_get(v_slice_227_, 0);
lean_inc(v_startInclusive_230_);
v_endExclusive_231_ = lean_ctor_get(v_slice_227_, 1);
lean_inc(v_endExclusive_231_);
lean_dec_ref(v_slice_227_);
v_it_197_ = v_nextIt_229_;
v_startInclusive_198_ = v_startInclusive_230_;
v_endExclusive_199_ = v_endExclusive_231_;
goto v___jp_196_;
}
}
}
else
{
lean_object* v___x_233_; 
lean_del_object(v___x_207_);
lean_dec(v_searcher_205_);
v___x_233_ = lean_box(1);
lean_inc(v___x_193_);
v_it_197_ = v___x_233_;
v_startInclusive_198_ = v_currPos_204_;
v_endExclusive_199_ = v___x_193_;
goto v___jp_196_;
}
}
}
else
{
lean_dec(v___x_193_);
lean_dec_ref(v___x_191_);
return v_b_195_;
}
v___jp_196_:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
lean_inc_ref(v___x_191_);
v___x_200_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_200_, 0, v___x_191_);
lean_ctor_set(v___x_200_, 1, v_startInclusive_198_);
lean_ctor_set(v___x_200_, 2, v_endExclusive_199_);
v___x_201_ = l_String_Slice_trimAscii(v___x_200_);
v___x_202_ = lean_array_push(v_b_195_, v___x_201_);
v_a_194_ = v_it_197_;
v_b_195_ = v___x_202_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg___boxed(lean_object* v___x_235_, lean_object* v___x_236_, lean_object* v___x_237_, lean_object* v_a_238_, lean_object* v_b_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(v___x_235_, v___x_236_, v___x_237_, v_a_238_, v_b_239_);
lean_dec_ref(v___x_236_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg(lean_object* v___x_241_, lean_object* v___x_242_, lean_object* v___x_243_, lean_object* v_a_244_, lean_object* v_b_245_){
_start:
{
lean_object* v_it_247_; lean_object* v_startInclusive_248_; lean_object* v_endExclusive_249_; 
if (lean_obj_tag(v_a_244_) == 0)
{
lean_object* v_currPos_254_; lean_object* v_searcher_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_284_; 
v_currPos_254_ = lean_ctor_get(v_a_244_, 0);
v_searcher_255_ = lean_ctor_get(v_a_244_, 1);
v_isSharedCheck_284_ = !lean_is_exclusive(v_a_244_);
if (v_isSharedCheck_284_ == 0)
{
v___x_257_ = v_a_244_;
v_isShared_258_ = v_isSharedCheck_284_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_searcher_255_);
lean_inc(v_currPos_254_);
lean_dec(v_a_244_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_284_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v_str_259_; lean_object* v_startInclusive_260_; lean_object* v_endExclusive_261_; lean_object* v___x_262_; uint8_t v_decide_263_; 
v_str_259_ = lean_ctor_get(v___x_242_, 0);
v_startInclusive_260_ = lean_ctor_get(v___x_242_, 1);
v_endExclusive_261_ = lean_ctor_get(v___x_242_, 2);
v___x_262_ = lean_nat_sub(v_endExclusive_261_, v_startInclusive_260_);
v_decide_263_ = lean_nat_dec_eq(v_searcher_255_, v___x_262_);
lean_dec(v___x_262_);
if (v_decide_263_ == 0)
{
lean_object* v___x_264_; uint32_t v___x_265_; uint32_t v___x_266_; uint8_t v___x_267_; 
v___x_264_ = lean_nat_add(v_startInclusive_260_, v_searcher_255_);
v___x_265_ = lean_string_utf8_get_fast(v_str_259_, v___x_264_);
v___x_266_ = 44;
v___x_267_ = lean_uint32_dec_eq(v___x_265_, v___x_266_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_271_; 
lean_dec(v_searcher_255_);
v___x_268_ = lean_string_utf8_next_fast(v_str_259_, v___x_264_);
lean_dec(v___x_264_);
v___x_269_ = lean_nat_sub(v___x_268_, v_startInclusive_260_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 1, v___x_269_);
v___x_271_ = v___x_257_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_currPos_254_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v___x_269_);
v___x_271_ = v_reuseFailAlloc_273_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_272_; 
v___x_272_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(v___x_241_, v___x_242_, v___x_243_, v___x_271_, v_b_245_);
return v___x_272_;
}
}
else
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v_slice_277_; lean_object* v_nextIt_279_; 
v___x_274_ = lean_string_utf8_next_fast(v_str_259_, v___x_264_);
v___x_275_ = lean_nat_sub(v___x_274_, v___x_264_);
lean_dec(v___x_264_);
v___x_276_ = lean_nat_add(v_searcher_255_, v___x_275_);
lean_dec(v___x_275_);
v_slice_277_ = l_String_Slice_subslice_x21(v___x_242_, v_currPos_254_, v_searcher_255_);
lean_inc(v___x_276_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 1, v___x_276_);
lean_ctor_set(v___x_257_, 0, v___x_276_);
v_nextIt_279_ = v___x_257_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v___x_276_);
v_nextIt_279_ = v_reuseFailAlloc_282_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
lean_object* v_startInclusive_280_; lean_object* v_endExclusive_281_; 
v_startInclusive_280_ = lean_ctor_get(v_slice_277_, 0);
lean_inc(v_startInclusive_280_);
v_endExclusive_281_ = lean_ctor_get(v_slice_277_, 1);
lean_inc(v_endExclusive_281_);
lean_dec_ref(v_slice_277_);
v_it_247_ = v_nextIt_279_;
v_startInclusive_248_ = v_startInclusive_280_;
v_endExclusive_249_ = v_endExclusive_281_;
goto v___jp_246_;
}
}
}
else
{
lean_object* v___x_283_; 
lean_del_object(v___x_257_);
lean_dec(v_searcher_255_);
v___x_283_ = lean_box(1);
lean_inc(v___x_243_);
v_it_247_ = v___x_283_;
v_startInclusive_248_ = v_currPos_254_;
v_endExclusive_249_ = v___x_243_;
goto v___jp_246_;
}
}
}
else
{
lean_dec(v___x_243_);
lean_dec_ref(v___x_241_);
return v_b_245_;
}
v___jp_246_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
lean_inc_ref(v___x_241_);
v___x_250_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_250_, 0, v___x_241_);
lean_ctor_set(v___x_250_, 1, v_startInclusive_248_);
lean_ctor_set(v___x_250_, 2, v_endExclusive_249_);
v___x_251_ = l_String_Slice_trimAscii(v___x_250_);
v___x_252_ = lean_array_push(v_b_245_, v___x_251_);
v___x_253_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(v___x_241_, v___x_242_, v___x_243_, v_it_247_, v___x_252_);
return v___x_253_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg___boxed(lean_object* v___x_285_, lean_object* v___x_286_, lean_object* v___x_287_, lean_object* v_a_288_, lean_object* v_b_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg(v___x_285_, v___x_286_, v___x_287_, v_a_288_, v_b_289_);
lean_dec_ref(v___x_286_);
return v_res_290_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(lean_object* v___x_291_, lean_object* v___x_292_, lean_object* v___x_293_, lean_object* v_a_294_, uint8_t v_b_295_){
_start:
{
if (lean_obj_tag(v_a_294_) == 0)
{
lean_object* v_currPos_296_; lean_object* v_searcher_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_340_; 
v_currPos_296_ = lean_ctor_get(v_a_294_, 0);
v_searcher_297_ = lean_ctor_get(v_a_294_, 1);
v_isSharedCheck_340_ = !lean_is_exclusive(v_a_294_);
if (v_isSharedCheck_340_ == 0)
{
v___x_299_ = v_a_294_;
v_isShared_300_ = v_isSharedCheck_340_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_searcher_297_);
lean_inc(v_currPos_296_);
lean_dec(v_a_294_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_340_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v_str_301_; lean_object* v_startInclusive_302_; lean_object* v_endExclusive_303_; uint8_t v___x_304_; lean_object* v_it_306_; lean_object* v_startInclusive_307_; lean_object* v_endExclusive_308_; lean_object* v___x_318_; uint8_t v_decide_319_; 
v_str_301_ = lean_ctor_get(v___x_292_, 0);
v_startInclusive_302_ = lean_ctor_get(v___x_292_, 1);
v_endExclusive_303_ = lean_ctor_get(v___x_292_, 2);
v___x_304_ = 1;
v___x_318_ = lean_nat_sub(v_endExclusive_303_, v_startInclusive_302_);
v_decide_319_ = lean_nat_dec_eq(v_searcher_297_, v___x_318_);
lean_dec(v___x_318_);
if (v_decide_319_ == 0)
{
lean_object* v___x_320_; uint32_t v___x_321_; uint32_t v___x_322_; uint8_t v___x_323_; 
v___x_320_ = lean_nat_add(v_startInclusive_302_, v_searcher_297_);
v___x_321_ = lean_string_utf8_get_fast(v_str_301_, v___x_320_);
v___x_322_ = 44;
v___x_323_ = lean_uint32_dec_eq(v___x_321_, v___x_322_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_327_; 
lean_dec(v_searcher_297_);
v___x_324_ = lean_string_utf8_next_fast(v_str_301_, v___x_320_);
lean_dec(v___x_320_);
v___x_325_ = lean_nat_sub(v___x_324_, v_startInclusive_302_);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 1, v___x_325_);
v___x_327_ = v___x_299_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_currPos_296_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v___x_325_);
v___x_327_ = v_reuseFailAlloc_329_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
v_a_294_ = v___x_327_;
goto _start;
}
}
else
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v_slice_333_; lean_object* v_nextIt_335_; 
v___x_330_ = lean_string_utf8_next_fast(v_str_301_, v___x_320_);
v___x_331_ = lean_nat_sub(v___x_330_, v___x_320_);
lean_dec(v___x_320_);
v___x_332_ = lean_nat_add(v_searcher_297_, v___x_331_);
lean_dec(v___x_331_);
v_slice_333_ = l_String_Slice_subslice_x21(v___x_292_, v_currPos_296_, v_searcher_297_);
lean_inc(v___x_332_);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 1, v___x_332_);
lean_ctor_set(v___x_299_, 0, v___x_332_);
v_nextIt_335_ = v___x_299_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_332_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v___x_332_);
v_nextIt_335_ = v_reuseFailAlloc_338_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
lean_object* v_startInclusive_336_; lean_object* v_endExclusive_337_; 
v_startInclusive_336_ = lean_ctor_get(v_slice_333_, 0);
lean_inc(v_startInclusive_336_);
v_endExclusive_337_ = lean_ctor_get(v_slice_333_, 1);
lean_inc(v_endExclusive_337_);
lean_dec_ref(v_slice_333_);
v_it_306_ = v_nextIt_335_;
v_startInclusive_307_ = v_startInclusive_336_;
v_endExclusive_308_ = v_endExclusive_337_;
goto v___jp_305_;
}
}
}
else
{
lean_object* v___x_339_; 
lean_del_object(v___x_299_);
lean_dec(v_searcher_297_);
v___x_339_ = lean_box(1);
lean_inc(v___x_293_);
v_it_306_ = v___x_339_;
v_startInclusive_307_ = v_currPos_296_;
v_endExclusive_308_ = v___x_293_;
goto v___jp_305_;
}
v___jp_305_:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v_startInclusive_311_; lean_object* v_endExclusive_312_; lean_object* v___x_313_; lean_object* v___x_314_; uint8_t v___x_315_; 
lean_inc_ref(v___x_291_);
v___x_309_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_309_, 0, v___x_291_);
lean_ctor_set(v___x_309_, 1, v_startInclusive_307_);
lean_ctor_set(v___x_309_, 2, v_endExclusive_308_);
v___x_310_ = l_String_Slice_trimAscii(v___x_309_);
v_startInclusive_311_ = lean_ctor_get(v___x_310_, 1);
lean_inc(v_startInclusive_311_);
v_endExclusive_312_ = lean_ctor_get(v___x_310_, 2);
lean_inc(v_endExclusive_312_);
lean_dec_ref(v___x_310_);
v___x_313_ = lean_nat_sub(v_endExclusive_312_, v_startInclusive_311_);
lean_dec(v_startInclusive_311_);
lean_dec(v_endExclusive_312_);
v___x_314_ = lean_unsigned_to_nat(0u);
v___x_315_ = lean_nat_dec_eq(v___x_313_, v___x_314_);
lean_dec(v___x_313_);
if (v___x_315_ == 0)
{
v_a_294_ = v_it_306_;
v_b_295_ = v___x_304_;
goto _start;
}
else
{
uint8_t v___x_317_; 
lean_dec(v_it_306_);
lean_dec(v___x_293_);
lean_dec_ref(v___x_291_);
v___x_317_ = 0;
return v___x_317_;
}
}
}
}
else
{
lean_dec(v___x_293_);
lean_dec_ref(v___x_291_);
return v_b_295_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg___boxed(lean_object* v___x_341_, lean_object* v___x_342_, lean_object* v___x_343_, lean_object* v_a_344_, lean_object* v_b_345_){
_start:
{
uint8_t v_b_boxed_346_; uint8_t v_res_347_; lean_object* v_r_348_; 
v_b_boxed_346_ = lean_unbox(v_b_345_);
v_res_347_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(v___x_341_, v___x_342_, v___x_343_, v_a_344_, v_b_boxed_346_);
lean_dec_ref(v___x_342_);
v_r_348_ = lean_box(v_res_347_);
return v_r_348_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg(lean_object* v___x_349_, lean_object* v___x_350_, lean_object* v___x_351_, lean_object* v_a_352_, uint8_t v_b_353_){
_start:
{
if (lean_obj_tag(v_a_352_) == 0)
{
lean_object* v_currPos_354_; lean_object* v_searcher_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_398_; 
v_currPos_354_ = lean_ctor_get(v_a_352_, 0);
v_searcher_355_ = lean_ctor_get(v_a_352_, 1);
v_isSharedCheck_398_ = !lean_is_exclusive(v_a_352_);
if (v_isSharedCheck_398_ == 0)
{
v___x_357_ = v_a_352_;
v_isShared_358_ = v_isSharedCheck_398_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_searcher_355_);
lean_inc(v_currPos_354_);
lean_dec(v_a_352_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_398_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v_str_359_; lean_object* v_startInclusive_360_; lean_object* v_endExclusive_361_; uint8_t v___x_362_; lean_object* v_it_364_; lean_object* v_startInclusive_365_; lean_object* v_endExclusive_366_; lean_object* v___x_376_; uint8_t v_decide_377_; 
v_str_359_ = lean_ctor_get(v___x_350_, 0);
v_startInclusive_360_ = lean_ctor_get(v___x_350_, 1);
v_endExclusive_361_ = lean_ctor_get(v___x_350_, 2);
v___x_362_ = 1;
v___x_376_ = lean_nat_sub(v_endExclusive_361_, v_startInclusive_360_);
v_decide_377_ = lean_nat_dec_eq(v_searcher_355_, v___x_376_);
lean_dec(v___x_376_);
if (v_decide_377_ == 0)
{
lean_object* v___x_378_; uint32_t v___x_379_; uint32_t v___x_380_; uint8_t v___x_381_; 
v___x_378_ = lean_nat_add(v_startInclusive_360_, v_searcher_355_);
v___x_379_ = lean_string_utf8_get_fast(v_str_359_, v___x_378_);
v___x_380_ = 44;
v___x_381_ = lean_uint32_dec_eq(v___x_379_, v___x_380_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_385_; 
lean_dec(v_searcher_355_);
v___x_382_ = lean_string_utf8_next_fast(v_str_359_, v___x_378_);
lean_dec(v___x_378_);
v___x_383_ = lean_nat_sub(v___x_382_, v_startInclusive_360_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v___x_383_);
v___x_385_ = v___x_357_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_currPos_354_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v___x_383_);
v___x_385_ = v_reuseFailAlloc_387_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
uint8_t v___x_386_; 
v___x_386_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(v___x_349_, v___x_350_, v___x_351_, v___x_385_, v_b_353_);
return v___x_386_;
}
}
else
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v_slice_391_; lean_object* v_nextIt_393_; 
v___x_388_ = lean_string_utf8_next_fast(v_str_359_, v___x_378_);
v___x_389_ = lean_nat_sub(v___x_388_, v___x_378_);
lean_dec(v___x_378_);
v___x_390_ = lean_nat_add(v_searcher_355_, v___x_389_);
lean_dec(v___x_389_);
v_slice_391_ = l_String_Slice_subslice_x21(v___x_350_, v_currPos_354_, v_searcher_355_);
lean_inc(v___x_390_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v___x_390_);
lean_ctor_set(v___x_357_, 0, v___x_390_);
v_nextIt_393_ = v___x_357_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v___x_390_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v___x_390_);
v_nextIt_393_ = v_reuseFailAlloc_396_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v_startInclusive_394_; lean_object* v_endExclusive_395_; 
v_startInclusive_394_ = lean_ctor_get(v_slice_391_, 0);
lean_inc(v_startInclusive_394_);
v_endExclusive_395_ = lean_ctor_get(v_slice_391_, 1);
lean_inc(v_endExclusive_395_);
lean_dec_ref(v_slice_391_);
v_it_364_ = v_nextIt_393_;
v_startInclusive_365_ = v_startInclusive_394_;
v_endExclusive_366_ = v_endExclusive_395_;
goto v___jp_363_;
}
}
}
else
{
lean_object* v___x_397_; 
lean_del_object(v___x_357_);
lean_dec(v_searcher_355_);
v___x_397_ = lean_box(1);
lean_inc(v___x_351_);
v_it_364_ = v___x_397_;
v_startInclusive_365_ = v_currPos_354_;
v_endExclusive_366_ = v___x_351_;
goto v___jp_363_;
}
v___jp_363_:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v_startInclusive_369_; lean_object* v_endExclusive_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
lean_inc_ref(v___x_349_);
v___x_367_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_367_, 0, v___x_349_);
lean_ctor_set(v___x_367_, 1, v_startInclusive_365_);
lean_ctor_set(v___x_367_, 2, v_endExclusive_366_);
v___x_368_ = l_String_Slice_trimAscii(v___x_367_);
v_startInclusive_369_ = lean_ctor_get(v___x_368_, 1);
lean_inc(v_startInclusive_369_);
v_endExclusive_370_ = lean_ctor_get(v___x_368_, 2);
lean_inc(v_endExclusive_370_);
lean_dec_ref(v___x_368_);
v___x_371_ = lean_nat_sub(v_endExclusive_370_, v_startInclusive_369_);
lean_dec(v_startInclusive_369_);
lean_dec(v_endExclusive_370_);
v___x_372_ = lean_unsigned_to_nat(0u);
v___x_373_ = lean_nat_dec_eq(v___x_371_, v___x_372_);
lean_dec(v___x_371_);
if (v___x_373_ == 0)
{
uint8_t v___x_374_; 
v___x_374_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(v___x_349_, v___x_350_, v___x_351_, v_it_364_, v___x_362_);
return v___x_374_;
}
else
{
uint8_t v___x_375_; 
lean_dec(v_it_364_);
lean_dec(v___x_351_);
lean_dec_ref(v___x_349_);
v___x_375_ = 0;
return v___x_375_;
}
}
}
}
else
{
lean_dec(v___x_351_);
lean_dec_ref(v___x_349_);
return v_b_353_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg___boxed(lean_object* v___x_399_, lean_object* v___x_400_, lean_object* v___x_401_, lean_object* v_a_402_, lean_object* v_b_403_){
_start:
{
uint8_t v_b_boxed_404_; uint8_t v_res_405_; lean_object* v_r_406_; 
v_b_boxed_404_ = lean_unbox(v_b_403_);
v_res_405_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg(v___x_399_, v___x_400_, v___x_401_, v_a_402_, v_b_boxed_404_);
lean_dec_ref(v___x_400_);
v_r_406_ = lean_box(v_res_405_);
return v_r_406_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList(lean_object* v_v_409_){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v_parts_413_; uint8_t v___x_414_; uint8_t v___x_415_; 
v___x_410_ = lean_unsigned_to_nat(0u);
v___x_411_ = lean_string_utf8_byte_size(v_v_409_);
lean_inc_ref_n(v_v_409_, 2);
v___x_412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_412_, 0, v_v_409_);
lean_ctor_set(v___x_412_, 1, v___x_410_);
lean_ctor_set(v___x_412_, 2, v___x_411_);
v_parts_413_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0);
v___x_414_ = 1;
v___x_415_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg(v_v_409_, v___x_412_, v___x_411_, v_parts_413_, v___x_414_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; 
lean_dec_ref_known(v___x_412_, 3);
lean_dec_ref(v_v_409_);
v___x_416_ = lean_box(0);
return v___x_416_;
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; size_t v_sz_419_; size_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_417_ = ((lean_object*)(l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList___closed__0));
v___x_418_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg(v_v_409_, v___x_412_, v___x_411_, v_parts_413_, v___x_417_);
lean_dec_ref_known(v___x_412_, 3);
v_sz_419_ = lean_array_size(v___x_418_);
v___x_420_ = ((size_t)0ULL);
v___x_421_ = l_unsafeCast___redArg(v___x_418_);
lean_dec_ref(v___x_418_);
v___x_422_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4(v_sz_419_, v___x_420_, v___x_421_);
v___x_423_ = l_unsafeCast___redArg(v___x_422_);
lean_dec_ref(v___x_422_);
v___x_424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
return v___x_424_;
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2(lean_object* v___x_425_, lean_object* v___x_426_, lean_object* v___x_427_, lean_object* v_inst_428_, lean_object* v_R_429_, lean_object* v_a_430_, uint8_t v_b_431_, lean_object* v_c_432_){
_start:
{
uint8_t v___x_433_; 
v___x_433_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg(v___x_425_, v___x_426_, v___x_427_, v_a_430_, v_b_431_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___boxed(lean_object* v___x_434_, lean_object* v___x_435_, lean_object* v___x_436_, lean_object* v_inst_437_, lean_object* v_R_438_, lean_object* v_a_439_, lean_object* v_b_440_, lean_object* v_c_441_){
_start:
{
uint8_t v_b_boxed_442_; uint8_t v_res_443_; lean_object* v_r_444_; 
v_b_boxed_442_ = lean_unbox(v_b_440_);
v_res_443_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2(v___x_434_, v___x_435_, v___x_436_, v_inst_437_, v_R_438_, v_a_439_, v_b_boxed_442_, v_c_441_);
lean_dec_ref(v___x_435_);
v_r_444_ = lean_box(v_res_443_);
return v_r_444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3(lean_object* v___x_445_, lean_object* v___x_446_, lean_object* v___x_447_, lean_object* v_inst_448_, lean_object* v_R_449_, lean_object* v_a_450_, lean_object* v_b_451_){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg(v___x_445_, v___x_446_, v___x_447_, v_a_450_, v_b_451_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___boxed(lean_object* v___x_453_, lean_object* v___x_454_, lean_object* v___x_455_, lean_object* v_inst_456_, lean_object* v_R_457_, lean_object* v_a_458_, lean_object* v_b_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3(v___x_453_, v___x_454_, v___x_455_, v_inst_456_, v_R_457_, v_a_458_, v_b_459_);
lean_dec_ref(v___x_454_);
return v_res_460_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2(lean_object* v___x_461_, lean_object* v___x_462_, lean_object* v___x_463_, lean_object* v_inst_464_, lean_object* v_R_465_, lean_object* v_a_466_, uint8_t v_b_467_, lean_object* v_c_468_){
_start:
{
uint8_t v___x_469_; 
v___x_469_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(v___x_461_, v___x_462_, v___x_463_, v_a_466_, v_b_467_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___boxed(lean_object* v___x_470_, lean_object* v___x_471_, lean_object* v___x_472_, lean_object* v_inst_473_, lean_object* v_R_474_, lean_object* v_a_475_, lean_object* v_b_476_, lean_object* v_c_477_){
_start:
{
uint8_t v_b_boxed_478_; uint8_t v_res_479_; lean_object* v_r_480_; 
v_b_boxed_478_ = lean_unbox(v_b_476_);
v_res_479_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2(v___x_470_, v___x_471_, v___x_472_, v_inst_473_, v_R_474_, v_a_475_, v_b_boxed_478_, v_c_477_);
lean_dec_ref(v___x_471_);
v_r_480_ = lean_box(v_res_479_);
return v_r_480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4(lean_object* v___x_481_, lean_object* v___x_482_, lean_object* v___x_483_, lean_object* v_inst_484_, lean_object* v_R_485_, lean_object* v_a_486_, lean_object* v_b_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(v___x_481_, v___x_482_, v___x_483_, v_a_486_, v_b_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___boxed(lean_object* v___x_489_, lean_object* v___x_490_, lean_object* v___x_491_, lean_object* v_inst_492_, lean_object* v_R_493_, lean_object* v_a_494_, lean_object* v_b_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4(v___x_489_, v___x_490_, v___x_491_, v_inst_492_, v_R_493_, v_a_494_, v_b_495_);
lean_dec_ref(v___x_490_);
return v_res_496_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqContentLength_beq(lean_object* v_x_497_, lean_object* v_x_498_){
_start:
{
uint8_t v___x_499_; 
v___x_499_ = lean_nat_dec_eq(v_x_497_, v_x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqContentLength_beq___boxed(lean_object* v_x_500_, lean_object* v_x_501_){
_start:
{
uint8_t v_res_502_; lean_object* v_r_503_; 
v_res_502_ = l_Std_Http_Header_instBEqContentLength_beq(v_x_500_, v_x_501_);
lean_dec(v_x_501_);
lean_dec(v_x_500_);
v_r_503_ = lean_box(v_res_502_);
return v_r_503_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Header_instReprContentLength_repr_spec__0(lean_object* v_a_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = lean_nat_to_int(v_a_506_);
return v___x_507_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = lean_unsigned_to_nat(10u);
v___x_522_ = lean_nat_to_int(v___x_521_);
return v___x_522_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__0));
v___x_525_ = lean_string_length(v___x_524_);
return v___x_525_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9);
v___x_527_ = lean_nat_to_int(v___x_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg(lean_object* v_x_532_){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; uint8_t v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_533_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__6));
v___x_534_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7);
v___x_535_ = l_Nat_reprFast(v_x_532_);
v___x_536_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
v___x_537_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_534_);
lean_ctor_set(v___x_537_, 1, v___x_536_);
v___x_538_ = 0;
v___x_539_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_539_, 0, v___x_537_);
lean_ctor_set_uint8(v___x_539_, sizeof(void*)*1, v___x_538_);
v___x_540_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_540_, 0, v___x_533_);
lean_ctor_set(v___x_540_, 1, v___x_539_);
v___x_541_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10);
v___x_542_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11));
v___x_543_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
lean_ctor_set(v___x_543_, 1, v___x_540_);
v___x_544_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12));
v___x_545_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_543_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
v___x_546_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_546_, 0, v___x_541_);
lean_ctor_set(v___x_546_, 1, v___x_545_);
v___x_547_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set_uint8(v___x_547_, sizeof(void*)*1, v___x_538_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr(lean_object* v_x_548_, lean_object* v_prec_549_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Std_Http_Header_instReprContentLength_repr___redArg(v_x_548_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr___boxed(lean_object* v_x_551_, lean_object* v_prec_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Std_Http_Header_instReprContentLength_repr(v_x_551_, v_prec_552_);
lean_dec(v_prec_552_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0(lean_object* v_s_556_, lean_object* v_pos_557_){
_start:
{
lean_object* v_str_558_; lean_object* v_startInclusive_559_; lean_object* v_endExclusive_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; uint8_t v_decide_564_; 
v_str_558_ = lean_ctor_get(v_s_556_, 0);
v_startInclusive_559_ = lean_ctor_get(v_s_556_, 1);
v_endExclusive_560_ = lean_ctor_get(v_s_556_, 2);
v___x_561_ = lean_nat_add(v_startInclusive_559_, v_pos_557_);
v___x_562_ = lean_unsigned_to_nat(0u);
v___x_563_ = lean_nat_sub(v_endExclusive_560_, v___x_561_);
v_decide_564_ = lean_nat_dec_eq(v___x_562_, v___x_563_);
lean_dec(v___x_563_);
if (v_decide_564_ == 0)
{
uint32_t v___x_565_; uint32_t v___x_566_; uint8_t v___x_567_; 
v___x_565_ = lean_string_utf8_get_fast(v_str_558_, v___x_561_);
v___x_566_ = 48;
v___x_567_ = lean_uint32_dec_le(v___x_566_, v___x_565_);
if (v___x_567_ == 0)
{
lean_dec(v___x_561_);
return v_pos_557_;
}
else
{
uint32_t v___x_568_; uint8_t v___x_569_; 
v___x_568_ = 57;
v___x_569_ = lean_uint32_dec_le(v___x_565_, v___x_568_);
if (v___x_569_ == 0)
{
lean_dec(v___x_561_);
return v_pos_557_;
}
else
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; uint8_t v___x_575_; 
v___x_570_ = lean_string_utf8_next_fast(v_str_558_, v___x_561_);
v___x_571_ = lean_nat_sub(v___x_570_, v___x_561_);
lean_dec(v___x_561_);
v___x_572_ = lean_nat_add(v_pos_557_, v___x_571_);
lean_dec(v___x_571_);
v___x_573_ = lean_unsigned_to_nat(1u);
v___x_574_ = lean_nat_add(v_pos_557_, v___x_573_);
v___x_575_ = lean_nat_dec_le(v___x_574_, v___x_572_);
lean_dec(v___x_574_);
if (v___x_575_ == 0)
{
lean_dec(v___x_572_);
return v_pos_557_;
}
else
{
lean_dec(v_pos_557_);
v_pos_557_ = v___x_572_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_561_);
return v_pos_557_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0___boxed(lean_object* v_s_577_, lean_object* v_pos_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0(v_s_577_, v_pos_578_);
lean_dec_ref(v_s_577_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_ContentLength_parse(lean_object* v_v_580_){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; uint8_t v___x_583_; 
v___x_581_ = lean_string_utf8_byte_size(v_v_580_);
v___x_582_ = lean_unsigned_to_nat(0u);
v___x_583_ = lean_nat_dec_eq(v___x_581_, v___x_582_);
if (v___x_583_ == 0)
{
lean_object* v___x_584_; lean_object* v___x_585_; uint8_t v_decide_586_; 
v___x_584_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_584_, 0, v_v_580_);
lean_ctor_set(v___x_584_, 1, v___x_582_);
lean_ctor_set(v___x_584_, 2, v___x_581_);
v___x_585_ = l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0(v___x_584_, v___x_582_);
v_decide_586_ = lean_nat_dec_eq(v___x_585_, v___x_581_);
lean_dec(v___x_585_);
if (v_decide_586_ == 0)
{
lean_object* v___x_587_; 
lean_dec_ref_known(v___x_584_, 3);
v___x_587_ = lean_box(0);
return v___x_587_;
}
else
{
lean_object* v___x_588_; 
v___x_588_ = l_String_Slice_toNat_x3f(v___x_584_);
lean_dec_ref_known(v___x_584_, 3);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v___x_589_; 
v___x_589_ = lean_box(0);
return v___x_589_;
}
else
{
lean_object* v_val_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
v_val_590_ = lean_ctor_get(v___x_588_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_588_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_val_590_);
lean_dec(v___x_588_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_val_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
}
else
{
lean_object* v___x_598_; 
lean_dec_ref(v_v_580_);
v___x_598_ = lean_box(0);
return v___x_598_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_ContentLength_serialize(lean_object* v_h_599_){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_600_ = l_Std_Http_Header_Name_contentLength;
v___x_601_ = l_Nat_reprFast(v_h_599_);
v___x_602_ = l_Std_Http_Header_Value_ofString_x21(v___x_601_);
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_600_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
return v___x_603_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0(lean_object* v_x_610_, lean_object* v_x_611_){
_start:
{
if (lean_obj_tag(v_x_610_) == 0)
{
if (lean_obj_tag(v_x_611_) == 0)
{
uint8_t v___x_612_; 
v___x_612_ = 1;
return v___x_612_;
}
else
{
uint8_t v___x_613_; 
v___x_613_ = 0;
return v___x_613_;
}
}
else
{
if (lean_obj_tag(v_x_611_) == 0)
{
uint8_t v___x_614_; 
v___x_614_ = 0;
return v___x_614_;
}
else
{
lean_object* v_val_615_; lean_object* v_val_616_; uint8_t v___x_617_; 
v_val_615_ = lean_ctor_get(v_x_610_, 0);
v_val_616_ = lean_ctor_get(v_x_611_, 0);
v___x_617_ = lean_string_dec_eq(v_val_615_, v_val_616_);
return v___x_617_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0___boxed(lean_object* v_x_618_, lean_object* v_x_619_){
_start:
{
uint8_t v_res_620_; lean_object* v_r_621_; 
v_res_620_ = l_Option_instBEq_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0(v_x_618_, v_x_619_);
lean_dec(v_x_619_);
lean_dec(v_x_618_);
v_r_621_ = lean_box(v_res_620_);
return v_r_621_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1(lean_object* v_as_623_, size_t v_i_624_, size_t v_stop_625_, lean_object* v_b_626_){
_start:
{
lean_object* v___y_628_; uint8_t v___x_632_; 
v___x_632_ = lean_usize_dec_eq(v_i_624_, v_stop_625_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v___x_633_ = lean_array_uget_borrowed(v_as_623_, v_i_624_);
v___x_634_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0));
v___x_635_ = lean_string_dec_eq(v___x_633_, v___x_634_);
if (v___x_635_ == 0)
{
v___y_628_ = v_b_626_;
goto v___jp_627_;
}
else
{
lean_object* v___x_636_; 
lean_inc(v___x_633_);
v___x_636_ = lean_array_push(v_b_626_, v___x_633_);
v___y_628_ = v___x_636_;
goto v___jp_627_;
}
}
else
{
return v_b_626_;
}
v___jp_627_:
{
size_t v___x_629_; size_t v___x_630_; 
v___x_629_ = ((size_t)1ULL);
v___x_630_ = lean_usize_add(v_i_624_, v___x_629_);
v_i_624_ = v___x_630_;
v_b_626_ = v___y_628_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___boxed(lean_object* v_as_637_, lean_object* v_i_638_, lean_object* v_stop_639_, lean_object* v_b_640_){
_start:
{
size_t v_i_boxed_641_; size_t v_stop_boxed_642_; lean_object* v_res_643_; 
v_i_boxed_641_ = lean_unbox_usize(v_i_638_);
lean_dec(v_i_638_);
v_stop_boxed_642_ = lean_unbox_usize(v_stop_639_);
lean_dec(v_stop_639_);
v_res_643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1(v_as_637_, v_i_boxed_641_, v_stop_boxed_642_, v_b_640_);
lean_dec_ref(v_as_637_);
return v_res_643_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2(lean_object* v___x_644_, lean_object* v_as_645_, size_t v_i_646_, size_t v_stop_647_){
_start:
{
uint8_t v___x_648_; 
v___x_648_ = lean_usize_dec_eq(v_i_646_, v_stop_647_);
if (v___x_648_ == 0)
{
uint8_t v___x_649_; lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_649_ = 1;
v___x_650_ = lean_array_uget_borrowed(v_as_645_, v_i_646_);
lean_inc(v___x_650_);
v___x_651_ = l_Std_Http_Internal_isToken(v___x_650_);
if (v___x_651_ == 0)
{
return v___x_649_;
}
else
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = lean_unsigned_to_nat(0u);
v___x_653_ = lean_nat_dec_eq(v___x_644_, v___x_652_);
if (v___x_653_ == 0)
{
size_t v___x_654_; size_t v___x_655_; 
v___x_654_ = ((size_t)1ULL);
v___x_655_ = lean_usize_add(v_i_646_, v___x_654_);
v_i_646_ = v___x_655_;
goto _start;
}
else
{
return v___x_649_;
}
}
}
else
{
uint8_t v___x_657_; 
v___x_657_ = 0;
return v___x_657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2___boxed(lean_object* v___x_658_, lean_object* v_as_659_, lean_object* v_i_660_, lean_object* v_stop_661_){
_start:
{
size_t v_i_boxed_662_; size_t v_stop_boxed_663_; uint8_t v_res_664_; lean_object* v_r_665_; 
v_i_boxed_662_ = lean_unbox_usize(v_i_660_);
lean_dec(v_i_660_);
v_stop_boxed_663_ = lean_unbox_usize(v_stop_661_);
lean_dec(v_stop_661_);
v_res_664_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2(v___x_658_, v_as_659_, v_i_boxed_662_, v_stop_boxed_663_);
lean_dec_ref(v_as_659_);
lean_dec(v___x_658_);
v_r_665_ = lean_box(v_res_664_);
return v_r_665_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_TransferEncoding_Validate(lean_object* v_codings_670_){
_start:
{
lean_object* v___y_672_; uint8_t v___y_673_; uint8_t v___y_674_; lean_object* v___y_675_; uint8_t v___y_682_; uint8_t v___y_683_; lean_object* v___y_684_; uint8_t v___y_694_; lean_object* v___x_707_; lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_707_ = lean_array_get_size(v_codings_670_);
v___x_708_ = lean_unsigned_to_nat(0u);
v___x_709_ = lean_nat_dec_eq(v___x_707_, v___x_708_);
if (v___x_709_ == 0)
{
uint8_t v___x_710_; 
v___x_710_ = lean_nat_dec_lt(v___x_708_, v___x_707_);
if (v___x_710_ == 0)
{
v___y_694_ = v___x_710_;
goto v___jp_693_;
}
else
{
if (v___x_710_ == 0)
{
v___y_694_ = v___x_710_;
goto v___jp_693_;
}
else
{
size_t v___x_711_; size_t v___x_712_; uint8_t v___x_713_; 
v___x_711_ = ((size_t)0ULL);
v___x_712_ = lean_usize_of_nat(v___x_707_);
v___x_713_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2(v___x_707_, v_codings_670_, v___x_711_, v___x_712_);
if (v___x_713_ == 0)
{
v___y_694_ = v___x_713_;
goto v___jp_693_;
}
else
{
return v___x_709_;
}
}
}
}
else
{
uint8_t v___x_714_; 
v___x_714_ = 0;
return v___x_714_;
}
v___jp_671_:
{
lean_object* v___x_676_; uint8_t v___x_677_; 
v___x_676_ = lean_unsigned_to_nat(1u);
v___x_677_ = lean_nat_dec_lt(v___x_676_, v___y_672_);
if (v___x_677_ == 0)
{
uint8_t v___x_678_; 
v___x_678_ = lean_nat_dec_eq(v___y_672_, v___x_676_);
lean_dec(v___y_672_);
if (v___x_678_ == 0)
{
lean_dec(v___y_675_);
return v___y_674_;
}
else
{
lean_object* v___x_679_; uint8_t v_lastIsChunked_680_; 
v___x_679_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__0));
v_lastIsChunked_680_ = l_Option_instBEq_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0(v___y_675_, v___x_679_);
lean_dec(v___y_675_);
if (v_lastIsChunked_680_ == 0)
{
return v___x_677_;
}
else
{
return v___y_674_;
}
}
}
else
{
lean_dec(v___y_675_);
lean_dec(v___y_672_);
return v___y_673_;
}
}
v___jp_681_:
{
lean_object* v_chunkedCount_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; uint8_t v___x_689_; 
v_chunkedCount_685_ = lean_array_get_size(v___y_684_);
lean_dec_ref(v___y_684_);
v___x_686_ = lean_array_get_size(v_codings_670_);
v___x_687_ = lean_unsigned_to_nat(1u);
v___x_688_ = lean_nat_sub(v___x_686_, v___x_687_);
v___x_689_ = lean_nat_dec_lt(v___x_688_, v___x_686_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; 
lean_dec(v___x_688_);
v___x_690_ = lean_box(0);
v___y_672_ = v_chunkedCount_685_;
v___y_673_ = v___y_683_;
v___y_674_ = v___y_682_;
v___y_675_ = v___x_690_;
goto v___jp_671_;
}
else
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_array_fget_borrowed(v_codings_670_, v___x_688_);
lean_dec(v___x_688_);
lean_inc(v___x_691_);
v___x_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
v___y_672_ = v_chunkedCount_685_;
v___y_673_ = v___y_683_;
v___y_674_ = v___y_682_;
v___y_675_ = v___x_692_;
goto v___jp_671_;
}
}
v___jp_693_:
{
uint8_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; uint8_t v___x_699_; 
v___x_695_ = 1;
v___x_696_ = lean_unsigned_to_nat(0u);
v___x_697_ = lean_array_get_size(v_codings_670_);
v___x_698_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__1));
v___x_699_ = lean_nat_dec_lt(v___x_696_, v___x_697_);
if (v___x_699_ == 0)
{
v___y_682_ = v___x_695_;
v___y_683_ = v___y_694_;
v___y_684_ = v___x_698_;
goto v___jp_681_;
}
else
{
uint8_t v___x_700_; 
v___x_700_ = lean_nat_dec_le(v___x_697_, v___x_697_);
if (v___x_700_ == 0)
{
if (v___x_699_ == 0)
{
v___y_682_ = v___x_695_;
v___y_683_ = v___y_694_;
v___y_684_ = v___x_698_;
goto v___jp_681_;
}
else
{
size_t v___x_701_; size_t v___x_702_; lean_object* v___x_703_; 
v___x_701_ = ((size_t)0ULL);
v___x_702_ = lean_usize_of_nat(v___x_697_);
v___x_703_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1(v_codings_670_, v___x_701_, v___x_702_, v___x_698_);
v___y_682_ = v___x_695_;
v___y_683_ = v___y_694_;
v___y_684_ = v___x_703_;
goto v___jp_681_;
}
}
else
{
size_t v___x_704_; size_t v___x_705_; lean_object* v___x_706_; 
v___x_704_ = ((size_t)0ULL);
v___x_705_ = lean_usize_of_nat(v___x_697_);
v___x_706_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1(v_codings_670_, v___x_704_, v___x_705_, v___x_698_);
v___y_682_ = v___x_695_;
v___y_683_ = v___y_694_;
v___y_684_ = v___x_706_;
goto v___jp_681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_Validate___boxed(lean_object* v_codings_715_){
_start:
{
uint8_t v_res_716_; lean_object* v_r_717_; 
v_res_716_ = l_Std_Http_Header_TransferEncoding_Validate(v_codings_715_);
lean_dec_ref(v_codings_715_);
v_r_717_ = lean_box(v_res_716_);
return v_r_717_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0___lam__0(lean_object* v___y_718_){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_719_ = l_String_quote(v___y_718_);
v___x_720_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_720_, 0, v___x_719_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_721_, lean_object* v_x_722_, lean_object* v_x_723_){
_start:
{
if (lean_obj_tag(v_x_723_) == 0)
{
lean_dec(v_x_721_);
return v_x_722_;
}
else
{
lean_object* v_head_724_; lean_object* v_tail_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_736_; 
v_head_724_ = lean_ctor_get(v_x_723_, 0);
v_tail_725_ = lean_ctor_get(v_x_723_, 1);
v_isSharedCheck_736_ = !lean_is_exclusive(v_x_723_);
if (v_isSharedCheck_736_ == 0)
{
v___x_727_ = v_x_723_;
v_isShared_728_ = v_isSharedCheck_736_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_tail_725_);
lean_inc(v_head_724_);
lean_dec(v_x_723_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_736_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_730_; 
lean_inc(v_x_721_);
if (v_isShared_728_ == 0)
{
lean_ctor_set_tag(v___x_727_, 5);
lean_ctor_set(v___x_727_, 1, v_x_721_);
lean_ctor_set(v___x_727_, 0, v_x_722_);
v___x_730_ = v___x_727_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_x_722_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_x_721_);
v___x_730_ = v_reuseFailAlloc_735_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_731_ = l_String_quote(v_head_724_);
v___x_732_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_732_, 0, v___x_731_);
v___x_733_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_733_, 0, v___x_730_);
lean_ctor_set(v___x_733_, 1, v___x_732_);
v_x_722_ = v___x_733_;
v_x_723_ = v_tail_725_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1(lean_object* v_x_737_, lean_object* v_x_738_, lean_object* v_x_739_){
_start:
{
if (lean_obj_tag(v_x_739_) == 0)
{
lean_dec(v_x_737_);
return v_x_738_;
}
else
{
lean_object* v_head_740_; lean_object* v_tail_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_752_; 
v_head_740_ = lean_ctor_get(v_x_739_, 0);
v_tail_741_ = lean_ctor_get(v_x_739_, 1);
v_isSharedCheck_752_ = !lean_is_exclusive(v_x_739_);
if (v_isSharedCheck_752_ == 0)
{
v___x_743_ = v_x_739_;
v_isShared_744_ = v_isSharedCheck_752_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_tail_741_);
lean_inc(v_head_740_);
lean_dec(v_x_739_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_752_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
lean_inc(v_x_737_);
if (v_isShared_744_ == 0)
{
lean_ctor_set_tag(v___x_743_, 5);
lean_ctor_set(v___x_743_, 1, v_x_737_);
lean_ctor_set(v___x_743_, 0, v_x_738_);
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_x_738_);
lean_ctor_set(v_reuseFailAlloc_751_, 1, v_x_737_);
v___x_746_ = v_reuseFailAlloc_751_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_747_ = l_String_quote(v_head_740_);
v___x_748_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
v___x_749_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_746_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
v___x_750_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1_spec__2(v_x_737_, v___x_749_, v_tail_741_);
return v___x_750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0(lean_object* v_x_753_, lean_object* v_x_754_){
_start:
{
if (lean_obj_tag(v_x_753_) == 0)
{
lean_object* v___x_755_; 
lean_dec(v_x_754_);
v___x_755_ = lean_box(0);
return v___x_755_;
}
else
{
lean_object* v_tail_756_; 
v_tail_756_ = lean_ctor_get(v_x_753_, 1);
if (lean_obj_tag(v_tail_756_) == 0)
{
lean_object* v_head_757_; lean_object* v___x_758_; 
lean_dec(v_x_754_);
v_head_757_ = lean_ctor_get(v_x_753_, 0);
lean_inc(v_head_757_);
lean_dec_ref_known(v_x_753_, 2);
v___x_758_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0___lam__0(v_head_757_);
return v___x_758_;
}
else
{
lean_object* v_head_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
lean_inc(v_tail_756_);
v_head_759_ = lean_ctor_get(v_x_753_, 0);
lean_inc(v_head_759_);
lean_dec_ref_known(v_x_753_, 2);
v___x_760_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0___lam__0(v_head_759_);
v___x_761_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1(v_x_754_, v___x_760_, v_tail_756_);
return v___x_761_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__0));
v___x_771_ = lean_string_length(v___x_770_);
return v___x_771_;
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = lean_obj_once(&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5, &l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5_once, _init_l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5);
v___x_773_ = lean_nat_to_int(v___x_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0(lean_object* v_xs_781_){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; uint8_t v___x_784_; 
v___x_782_ = lean_array_get_size(v_xs_781_);
v___x_783_ = lean_unsigned_to_nat(0u);
v___x_784_ = lean_nat_dec_eq(v___x_782_, v___x_783_);
if (v___x_784_ == 0)
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_785_ = lean_array_to_list(v_xs_781_);
v___x_786_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__3));
v___x_787_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0(v___x_785_, v___x_786_);
v___x_788_ = lean_obj_once(&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6, &l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6);
v___x_789_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__7));
v___x_790_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
lean_ctor_set(v___x_790_, 1, v___x_787_);
v___x_791_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__8));
v___x_792_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_792_, 0, v___x_790_);
lean_ctor_set(v___x_792_, 1, v___x_791_);
v___x_793_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_793_, 0, v___x_788_);
lean_ctor_set(v___x_793_, 1, v___x_792_);
v___x_794_ = l_Std_Format_fill(v___x_793_);
return v___x_794_;
}
else
{
lean_object* v___x_795_; 
lean_dec_ref(v_xs_781_);
v___x_795_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__10));
return v___x_795_;
}
}
}
static lean_object* _init_l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = lean_unsigned_to_nat(11u);
v___x_806_ = lean_nat_to_int(v___x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg(lean_object* v_x_813_){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; uint8_t v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_814_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5));
v___x_815_ = ((lean_object*)(l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__3));
v___x_816_ = lean_obj_once(&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4, &l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4_once, _init_l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4);
v___x_817_ = l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0(v_x_813_);
v___x_818_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_818_, 0, v___x_816_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
v___x_819_ = 0;
v___x_820_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_820_, 0, v___x_818_);
lean_ctor_set_uint8(v___x_820_, sizeof(void*)*1, v___x_819_);
v___x_821_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_821_, 0, v___x_815_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
v___x_822_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2));
v___x_823_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_823_, 0, v___x_821_);
lean_ctor_set(v___x_823_, 1, v___x_822_);
v___x_824_ = lean_box(1);
v___x_825_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_823_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
v___x_826_ = ((lean_object*)(l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__6));
v___x_827_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_825_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
v___x_828_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
lean_ctor_set(v___x_828_, 1, v___x_814_);
v___x_829_ = ((lean_object*)(l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__8));
v___x_830_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_830_, 0, v___x_828_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10);
v___x_832_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11));
v___x_833_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
lean_ctor_set(v___x_833_, 1, v___x_830_);
v___x_834_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12));
v___x_835_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_833_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
v___x_836_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_831_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_837_, 0, v___x_836_);
lean_ctor_set_uint8(v___x_837_, sizeof(void*)*1, v___x_819_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr(lean_object* v_x_838_, lean_object* v_prec_839_){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = l_Std_Http_Header_instReprTransferEncoding_repr___redArg(v_x_838_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___boxed(lean_object* v_x_841_, lean_object* v_prec_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Std_Http_Header_instReprTransferEncoding_repr(v_x_841_, v_prec_842_);
lean_dec(v_prec_842_);
return v_res_843_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_TransferEncoding_isChunked(lean_object* v_te_846_){
_start:
{
lean_object* v___y_848_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; uint8_t v___x_854_; 
v___x_851_ = lean_array_get_size(v_te_846_);
v___x_852_ = lean_unsigned_to_nat(1u);
v___x_853_ = lean_nat_sub(v___x_851_, v___x_852_);
v___x_854_ = lean_nat_dec_lt(v___x_853_, v___x_851_);
if (v___x_854_ == 0)
{
lean_object* v___x_855_; 
lean_dec(v___x_853_);
v___x_855_ = lean_box(0);
v___y_848_ = v___x_855_;
goto v___jp_847_;
}
else
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = lean_array_fget_borrowed(v_te_846_, v___x_853_);
lean_dec(v___x_853_);
lean_inc(v___x_856_);
v___x_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
v___y_848_ = v___x_857_;
goto v___jp_847_;
}
v___jp_847_:
{
lean_object* v___x_849_; uint8_t v___x_850_; 
v___x_849_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__0));
v___x_850_ = l_Option_instBEq_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0(v___y_848_, v___x_849_);
lean_dec(v___y_848_);
return v___x_850_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_isChunked___boxed(lean_object* v_te_858_){
_start:
{
uint8_t v_res_859_; lean_object* v_r_860_; 
v_res_859_ = l_Std_Http_Header_TransferEncoding_isChunked(v_te_858_);
lean_dec_ref(v_te_858_);
v_r_860_ = lean_box(v_res_859_);
return v_r_860_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_parse(lean_object* v_v_861_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList(v_v_861_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v___x_863_; 
v___x_863_ = lean_box(0);
return v___x_863_;
}
else
{
lean_object* v_val_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_873_; 
v_val_864_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_873_ == 0)
{
v___x_866_ = v___x_862_;
v_isShared_867_ = v_isSharedCheck_873_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_val_864_);
lean_dec(v___x_862_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_873_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
uint8_t v___x_868_; 
v___x_868_ = l_Std_Http_Header_TransferEncoding_Validate(v_val_864_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; 
lean_del_object(v___x_866_);
lean_dec(v_val_864_);
v___x_869_ = lean_box(0);
return v___x_869_;
}
else
{
lean_object* v___x_871_; 
if (v_isShared_867_ == 0)
{
v___x_871_ = v___x_866_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_val_864_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_serialize(lean_object* v_te_874_){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v_value_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_875_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1));
v___x_876_ = lean_array_to_list(v_te_874_);
v_value_877_ = l_String_intercalate(v___x_875_, v___x_876_);
v___x_878_ = l_Std_Http_Header_Name_transferEncoding;
v___x_879_ = l_Std_Http_Header_Value_ofString_x21(v_value_877_);
v___x_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_880_, 0, v___x_878_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr___redArg(lean_object* v_x_899_){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; uint8_t v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_900_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5));
v___x_901_ = ((lean_object*)(l_Std_Http_Header_instReprConnection_repr___redArg___closed__3));
v___x_902_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7);
v___x_903_ = l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0(v_x_899_);
v___x_904_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_902_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = 0;
v___x_906_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_906_, 0, v___x_904_);
lean_ctor_set_uint8(v___x_906_, sizeof(void*)*1, v___x_905_);
v___x_907_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_907_, 0, v___x_901_);
lean_ctor_set(v___x_907_, 1, v___x_906_);
v___x_908_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2));
v___x_909_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_907_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = lean_box(1);
v___x_911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_909_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = ((lean_object*)(l_Std_Http_Header_instReprConnection_repr___redArg___closed__5));
v___x_913_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_911_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
lean_ctor_set(v___x_914_, 1, v___x_900_);
v___x_915_ = ((lean_object*)(l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__8));
v___x_916_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10);
v___x_918_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11));
v___x_919_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_918_);
lean_ctor_set(v___x_919_, 1, v___x_916_);
v___x_920_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12));
v___x_921_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_919_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
v___x_922_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_917_);
lean_ctor_set(v___x_922_, 1, v___x_921_);
v___x_923_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_923_, 0, v___x_922_);
lean_ctor_set_uint8(v___x_923_, sizeof(void*)*1, v___x_905_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr(lean_object* v_x_924_, lean_object* v_prec_925_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = l_Std_Http_Header_instReprConnection_repr___redArg(v_x_924_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr___boxed(lean_object* v_x_927_, lean_object* v_prec_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l_Std_Http_Header_instReprConnection_repr(v_x_927_, v_prec_928_);
lean_dec(v_prec_928_);
return v_res_929_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0(lean_object* v_token_932_, lean_object* v_as_933_, size_t v_i_934_, size_t v_stop_935_){
_start:
{
uint8_t v___x_936_; 
v___x_936_ = lean_usize_dec_eq(v_i_934_, v_stop_935_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; uint8_t v___x_938_; 
v___x_937_ = lean_array_uget_borrowed(v_as_933_, v_i_934_);
v___x_938_ = lean_string_dec_eq(v___x_937_, v_token_932_);
if (v___x_938_ == 0)
{
size_t v___x_939_; size_t v___x_940_; 
v___x_939_ = ((size_t)1ULL);
v___x_940_ = lean_usize_add(v_i_934_, v___x_939_);
v_i_934_ = v___x_940_;
goto _start;
}
else
{
return v___x_938_;
}
}
else
{
uint8_t v___x_942_; 
v___x_942_ = 0;
return v___x_942_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0___boxed(lean_object* v_token_943_, lean_object* v_as_944_, lean_object* v_i_945_, lean_object* v_stop_946_){
_start:
{
size_t v_i_boxed_947_; size_t v_stop_boxed_948_; uint8_t v_res_949_; lean_object* v_r_950_; 
v_i_boxed_947_ = lean_unbox_usize(v_i_945_);
lean_dec(v_i_945_);
v_stop_boxed_948_ = lean_unbox_usize(v_stop_946_);
lean_dec(v_stop_946_);
v_res_949_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0(v_token_943_, v_as_944_, v_i_boxed_947_, v_stop_boxed_948_);
lean_dec_ref(v_as_944_);
lean_dec_ref(v_token_943_);
v_r_950_ = lean_box(v_res_949_);
return v_r_950_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_Connection_containsToken(lean_object* v_connection_951_, lean_object* v_token_952_){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; uint8_t v___x_955_; 
v___x_953_ = lean_unsigned_to_nat(0u);
v___x_954_ = lean_array_get_size(v_connection_951_);
v___x_955_ = lean_nat_dec_lt(v___x_953_, v___x_954_);
if (v___x_955_ == 0)
{
lean_dec_ref(v_token_952_);
return v___x_955_;
}
else
{
lean_object* v___x_956_; 
v___x_956_ = lean_string_utf8_byte_size(v_token_952_);
if (v___x_955_ == 0)
{
lean_dec_ref(v_token_952_);
return v___x_955_;
}
else
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v_token_960_; size_t v___x_961_; size_t v___x_962_; uint8_t v___x_963_; 
v___x_957_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_957_, 0, v_token_952_);
lean_ctor_set(v___x_957_, 1, v___x_953_);
lean_ctor_set(v___x_957_, 2, v___x_956_);
v___x_958_ = l_String_Slice_trimAscii(v___x_957_);
v___x_959_ = l_String_Slice_toString(v___x_958_);
lean_dec_ref(v___x_958_);
v_token_960_ = l_String_mapAux___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__0(v___x_959_, v___x_953_);
v___x_961_ = ((size_t)0ULL);
v___x_962_ = lean_usize_of_nat(v___x_954_);
v___x_963_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0(v_token_960_, v_connection_951_, v___x_961_, v___x_962_);
lean_dec_ref(v_token_960_);
return v___x_963_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_containsToken___boxed(lean_object* v_connection_964_, lean_object* v_token_965_){
_start:
{
uint8_t v_res_966_; lean_object* v_r_967_; 
v_res_966_ = l_Std_Http_Header_Connection_containsToken(v_connection_964_, v_token_965_);
lean_dec_ref(v_connection_964_);
v_r_967_ = lean_box(v_res_966_);
return v_r_967_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_Connection_shouldClose(lean_object* v_connection_969_){
_start:
{
lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_970_ = ((lean_object*)(l_Std_Http_Header_Connection_shouldClose___closed__0));
v___x_971_ = l_Std_Http_Header_Connection_containsToken(v_connection_969_, v___x_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_shouldClose___boxed(lean_object* v_connection_972_){
_start:
{
uint8_t v_res_973_; lean_object* v_r_974_; 
v_res_973_ = l_Std_Http_Header_Connection_shouldClose(v_connection_972_);
lean_dec_ref(v_connection_972_);
v_r_974_ = lean_box(v_res_973_);
return v_r_974_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0(lean_object* v_as_975_, size_t v_i_976_, size_t v_stop_977_){
_start:
{
uint8_t v___x_978_; 
v___x_978_ = lean_usize_dec_eq(v_i_976_, v_stop_977_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; uint8_t v___x_980_; 
v___x_979_ = lean_array_uget_borrowed(v_as_975_, v_i_976_);
lean_inc(v___x_979_);
v___x_980_ = l_Std_Http_Internal_isToken(v___x_979_);
if (v___x_980_ == 0)
{
uint8_t v___x_981_; 
v___x_981_ = 1;
return v___x_981_;
}
else
{
size_t v___x_982_; size_t v___x_983_; 
v___x_982_ = ((size_t)1ULL);
v___x_983_ = lean_usize_add(v_i_976_, v___x_982_);
v_i_976_ = v___x_983_;
goto _start;
}
}
else
{
uint8_t v___x_985_; 
v___x_985_ = 0;
return v___x_985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0___boxed(lean_object* v_as_986_, lean_object* v_i_987_, lean_object* v_stop_988_){
_start:
{
size_t v_i_boxed_989_; size_t v_stop_boxed_990_; uint8_t v_res_991_; lean_object* v_r_992_; 
v_i_boxed_989_ = lean_unbox_usize(v_i_987_);
lean_dec(v_i_987_);
v_stop_boxed_990_ = lean_unbox_usize(v_stop_988_);
lean_dec(v_stop_988_);
v_res_991_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0(v_as_986_, v_i_boxed_989_, v_stop_boxed_990_);
lean_dec_ref(v_as_986_);
v_r_992_ = lean_box(v_res_991_);
return v_r_992_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_parse(lean_object* v_v_993_){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList(v_v_993_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v___x_995_; 
v___x_995_ = lean_box(0);
return v___x_995_;
}
else
{
lean_object* v_val_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1016_; 
v_val_996_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_998_ = v___x_994_;
v_isShared_999_ = v_isSharedCheck_1016_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_val_996_);
lean_dec(v___x_994_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1016_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; uint8_t v___x_1002_; 
v___x_1000_ = lean_unsigned_to_nat(0u);
v___x_1001_ = lean_array_get_size(v_val_996_);
v___x_1002_ = lean_nat_dec_lt(v___x_1000_, v___x_1001_);
if (v___x_1002_ == 0)
{
lean_object* v___x_1004_; 
if (v_isShared_999_ == 0)
{
v___x_1004_ = v___x_998_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_val_996_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
else
{
if (v___x_1002_ == 0)
{
lean_object* v___x_1007_; 
if (v_isShared_999_ == 0)
{
v___x_1007_ = v___x_998_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_val_996_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
else
{
size_t v___x_1009_; size_t v___x_1010_; uint8_t v___x_1011_; 
v___x_1009_ = ((size_t)0ULL);
v___x_1010_ = lean_usize_of_nat(v___x_1001_);
v___x_1011_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0(v_val_996_, v___x_1009_, v___x_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1013_; 
if (v_isShared_999_ == 0)
{
v___x_1013_ = v___x_998_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_val_996_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
else
{
lean_object* v___x_1015_; 
lean_del_object(v___x_998_);
lean_dec(v_val_996_);
v___x_1015_ = lean_box(0);
return v___x_1015_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_serialize(lean_object* v_connection_1017_){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v_value_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1018_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1));
v___x_1019_ = lean_array_to_list(v_connection_1017_);
v_value_1020_ = l_String_intercalate(v___x_1018_, v___x_1019_);
v___x_1021_ = l_Std_Http_Header_Name_connection;
v___x_1022_ = l_Std_Http_Header_Value_ofString_x21(v_value_1020_);
v___x_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1021_);
lean_ctor_set(v___x_1023_, 1, v___x_1022_);
return v___x_1023_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprHost_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = lean_unsigned_to_nat(8u);
v___x_1040_ = lean_nat_to_int(v___x_1039_);
return v___x_1040_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprHost_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = lean_unsigned_to_nat(2u);
v___x_1042_ = lean_nat_to_int(v___x_1041_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr___redArg(lean_object* v_x_1050_){
_start:
{
lean_object* v_host_1051_; lean_object* v_port_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1126_; 
v_host_1051_ = lean_ctor_get(v_x_1050_, 0);
v_port_1052_ = lean_ctor_get(v_x_1050_, 1);
v_isSharedCheck_1126_ = !lean_is_exclusive(v_x_1050_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1054_ = v_x_1050_;
v_isShared_1055_ = v_isSharedCheck_1126_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_port_1052_);
lean_inc(v_host_1051_);
lean_dec(v_x_1050_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1126_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v_ctr_1062_; lean_object* v_a_1063_; 
v___x_1056_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5));
v___x_1057_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__3));
v___x_1058_ = lean_obj_once(&l_Std_Http_Header_instReprHost_repr___redArg___closed__4, &l_Std_Http_Header_instReprHost_repr___redArg___closed__4_once, _init_l_Std_Http_Header_instReprHost_repr___redArg___closed__4);
v___x_1059_ = lean_unsigned_to_nat(0u);
v___x_1060_ = lean_obj_once(&l_Std_Http_Header_instReprHost_repr___redArg___closed__5, &l_Std_Http_Header_instReprHost_repr___redArg___closed__5_once, _init_l_Std_Http_Header_instReprHost_repr___redArg___closed__5);
switch(lean_obj_tag(v_host_1051_))
{
case 0:
{
lean_object* v_name_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1105_; 
v_name_1096_ = lean_ctor_get(v_host_1051_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v_host_1051_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1098_ = v_host_1051_;
v_isShared_1099_ = v_isSharedCheck_1105_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_name_1096_);
lean_dec(v_host_1051_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1105_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1103_; 
v___x_1100_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__9));
v___x_1101_ = l_String_quote(v_name_1096_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set_tag(v___x_1098_, 3);
lean_ctor_set(v___x_1098_, 0, v___x_1101_);
v___x_1103_ = v___x_1098_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v___x_1101_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
v_ctr_1062_ = v___x_1100_;
v_a_1063_ = v___x_1103_;
goto v___jp_1061_;
}
}
}
case 1:
{
lean_object* v_ipv4_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1115_; 
v_ipv4_1106_ = lean_ctor_get(v_host_1051_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_host_1051_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1108_ = v_host_1051_;
v_isShared_1109_ = v_isSharedCheck_1115_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_ipv4_1106_);
lean_dec(v_host_1051_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1115_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1110_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__10));
v___x_1111_ = lean_uv_ntop_v4(v_ipv4_1106_);
lean_dec_ref(v_ipv4_1106_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set_tag(v___x_1108_, 3);
lean_ctor_set(v___x_1108_, 0, v___x_1111_);
v___x_1113_ = v___x_1108_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1111_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
v_ctr_1062_ = v___x_1110_;
v_a_1063_ = v___x_1113_;
goto v___jp_1061_;
}
}
}
default: 
{
lean_object* v_ipv6_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1125_; 
v_ipv6_1116_ = lean_ctor_get(v_host_1051_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v_host_1051_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1118_ = v_host_1051_;
v_isShared_1119_ = v_isSharedCheck_1125_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_ipv6_1116_);
lean_dec(v_host_1051_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1125_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1120_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__11));
v___x_1121_ = lean_uv_ntop_v6(v_ipv6_1116_);
lean_dec_ref(v_ipv6_1116_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set_tag(v___x_1118_, 3);
lean_ctor_set(v___x_1118_, 0, v___x_1121_);
v___x_1123_ = v___x_1118_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v___x_1121_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
v_ctr_1062_ = v___x_1120_;
v_a_1063_ = v___x_1123_;
goto v___jp_1061_;
}
}
}
}
v___jp_1061_:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1069_; 
v___x_1064_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__6));
v___x_1065_ = lean_string_append(v___x_1064_, v_ctr_1062_);
v___x_1066_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
v___x_1067_ = lean_box(1);
if (v_isShared_1055_ == 0)
{
lean_ctor_set_tag(v___x_1054_, 5);
lean_ctor_set(v___x_1054_, 1, v___x_1067_);
lean_ctor_set(v___x_1054_, 0, v___x_1066_);
v___x_1069_ = v___x_1054_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v___x_1066_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v___x_1067_);
v___x_1069_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1070_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
lean_ctor_set(v___x_1070_, 1, v_a_1063_);
v___x_1071_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1060_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = 0;
v___x_1073_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1073_, 0, v___x_1071_);
lean_ctor_set_uint8(v___x_1073_, sizeof(void*)*1, v___x_1072_);
v___x_1074_ = l_Repr_addAppParen(v___x_1073_, v___x_1059_);
v___x_1075_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1058_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
lean_ctor_set_uint8(v___x_1076_, sizeof(void*)*1, v___x_1072_);
v___x_1077_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1057_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
v___x_1078_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2));
v___x_1079_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1077_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
lean_ctor_set(v___x_1080_, 1, v___x_1067_);
v___x_1081_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__8));
v___x_1082_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1080_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1082_);
lean_ctor_set(v___x_1083_, 1, v___x_1056_);
v___x_1084_ = l_Std_Http_URI_instReprPort_repr(v_port_1052_, v___x_1059_);
lean_dec(v_port_1052_);
v___x_1085_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1058_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
lean_ctor_set_uint8(v___x_1086_, sizeof(void*)*1, v___x_1072_);
v___x_1087_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1083_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10);
v___x_1089_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11));
v___x_1090_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
lean_ctor_set(v___x_1090_, 1, v___x_1087_);
v___x_1091_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12));
v___x_1092_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1090_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1088_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1094_, 0, v___x_1093_);
lean_ctor_set_uint8(v___x_1094_, sizeof(void*)*1, v___x_1072_);
return v___x_1094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr(lean_object* v_x_1127_, lean_object* v_prec_1128_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l_Std_Http_Header_instReprHost_repr___redArg(v_x_1127_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr___boxed(lean_object* v_x_1130_, lean_object* v_prec_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l_Std_Http_Header_instReprHost_repr(v_x_1130_, v_prec_1131_);
lean_dec(v_prec_1131_);
return v_res_1132_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqHost_beq(lean_object* v_x_1135_, lean_object* v_x_1136_){
_start:
{
lean_object* v_host_1137_; lean_object* v_port_1138_; lean_object* v_host_1139_; lean_object* v_port_1140_; uint8_t v___x_1141_; 
v_host_1137_ = lean_ctor_get(v_x_1135_, 0);
v_port_1138_ = lean_ctor_get(v_x_1135_, 1);
v_host_1139_ = lean_ctor_get(v_x_1136_, 0);
v_port_1140_ = lean_ctor_get(v_x_1136_, 1);
v___x_1141_ = l_Std_Http_URI_instBEqHost_beq(v_host_1137_, v_host_1139_);
if (v___x_1141_ == 0)
{
return v___x_1141_;
}
else
{
uint8_t v___x_1142_; 
v___x_1142_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_port_1138_, v_port_1140_);
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqHost_beq___boxed(lean_object* v_x_1143_, lean_object* v_x_1144_){
_start:
{
uint8_t v_res_1145_; lean_object* v_r_1146_; 
v_res_1145_ = l_Std_Http_Header_instBEqHost_beq(v_x_1143_, v_x_1144_);
lean_dec_ref(v_x_1144_);
lean_dec_ref(v_x_1143_);
v_r_1146_ = lean_box(v_res_1145_);
return v_r_1146_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse___lam__0(lean_object* v___x_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l_Std_Http_URI_Parser_parseHostHeader(v___x_1152_, v___y_1153_);
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v_pos_1155_; lean_object* v_array_1156_; lean_object* v_idx_1157_; lean_object* v___x_1158_; uint8_t v___x_1159_; 
v_pos_1155_ = lean_ctor_get(v___x_1154_, 0);
lean_inc(v_pos_1155_);
v_array_1156_ = lean_ctor_get(v_pos_1155_, 0);
v_idx_1157_ = lean_ctor_get(v_pos_1155_, 1);
v___x_1158_ = lean_byte_array_size(v_array_1156_);
v___x_1159_ = lean_nat_dec_lt(v_idx_1157_, v___x_1158_);
if (v___x_1159_ == 0)
{
lean_dec(v_pos_1155_);
return v___x_1154_;
}
else
{
lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1167_; 
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1167_ == 0)
{
lean_object* v_unused_1168_; lean_object* v_unused_1169_; 
v_unused_1168_ = lean_ctor_get(v___x_1154_, 1);
lean_dec(v_unused_1168_);
v_unused_1169_ = lean_ctor_get(v___x_1154_, 0);
lean_dec(v_unused_1169_);
v___x_1161_ = v___x_1154_;
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
else
{
lean_dec(v___x_1154_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1163_ = ((lean_object*)(l_Std_Http_Header_Host_parse___lam__0___closed__1));
if (v_isShared_1162_ == 0)
{
lean_ctor_set_tag(v___x_1161_, 1);
lean_ctor_set(v___x_1161_, 1, v___x_1163_);
v___x_1165_ = v___x_1161_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_pos_1155_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v___x_1163_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
else
{
return v___x_1154_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse___lam__0___boxed(lean_object* v___x_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Std_Http_Header_Host_parse___lam__0(v___x_1170_, v___y_1171_);
lean_dec_ref(v___x_1170_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse(lean_object* v_v_1183_){
_start:
{
lean_object* v___f_1184_; lean_object* v___x_1185_; lean_object* v_parsed_1186_; 
v___f_1184_ = ((lean_object*)(l_Std_Http_Header_Host_parse___closed__1));
v___x_1185_ = lean_string_to_utf8(v_v_1183_);
v_parsed_1186_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___f_1184_, v___x_1185_);
if (lean_obj_tag(v_parsed_1186_) == 0)
{
lean_object* v___x_1187_; 
lean_dec_ref_known(v_parsed_1186_, 1);
v___x_1187_ = lean_box(0);
return v___x_1187_;
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1204_; 
v_a_1188_ = lean_ctor_get(v_parsed_1186_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v_parsed_1186_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1190_ = v_parsed_1186_;
v_isShared_1191_ = v_isSharedCheck_1204_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v_parsed_1186_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1204_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v_fst_1192_; lean_object* v_snd_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1203_; 
v_fst_1192_ = lean_ctor_get(v_a_1188_, 0);
v_snd_1193_ = lean_ctor_get(v_a_1188_, 1);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_a_1188_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1195_ = v_a_1188_;
v_isShared_1196_ = v_isSharedCheck_1203_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_snd_1193_);
lean_inc(v_fst_1192_);
lean_dec(v_a_1188_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1203_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_fst_1192_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v_snd_1193_);
v___x_1198_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1200_; 
if (v_isShared_1191_ == 0)
{
lean_ctor_set(v___x_1190_, 0, v___x_1198_);
v___x_1200_ = v___x_1190_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1198_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse___boxed(lean_object* v_v_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Std_Http_Header_Host_parse(v_v_1205_);
lean_dec_ref(v_v_1205_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_serialize(lean_object* v_host_1209_){
_start:
{
lean_object* v___y_1211_; lean_object* v___y_1215_; lean_object* v_port_1219_; 
v_port_1219_ = lean_ctor_get(v_host_1209_, 1);
switch(lean_obj_tag(v_port_1219_))
{
case 0:
{
lean_object* v_host_1220_; 
v_host_1220_ = lean_ctor_get(v_host_1209_, 0);
lean_inc_ref(v_host_1220_);
lean_dec_ref(v_host_1209_);
switch(lean_obj_tag(v_host_1220_))
{
case 0:
{
lean_object* v_name_1221_; lean_object* v___x_1222_; 
v_name_1221_ = lean_ctor_get(v_host_1220_, 0);
lean_inc_ref(v_name_1221_);
lean_dec_ref_known(v_host_1220_, 1);
v___x_1222_ = l_Std_Http_Header_Value_ofString_x21(v_name_1221_);
v___y_1211_ = v___x_1222_;
goto v___jp_1210_;
}
case 1:
{
lean_object* v_ipv4_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v_ipv4_1223_ = lean_ctor_get(v_host_1220_, 0);
lean_inc_ref(v_ipv4_1223_);
lean_dec_ref_known(v_host_1220_, 1);
v___x_1224_ = lean_uv_ntop_v4(v_ipv4_1223_);
lean_dec_ref(v_ipv4_1223_);
v___x_1225_ = l_Std_Http_Header_Value_ofString_x21(v___x_1224_);
v___y_1211_ = v___x_1225_;
goto v___jp_1210_;
}
default: 
{
lean_object* v_ipv6_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v_ipv6_1226_ = lean_ctor_get(v_host_1220_, 0);
lean_inc_ref(v_ipv6_1226_);
lean_dec_ref_known(v_host_1220_, 1);
v___x_1227_ = ((lean_object*)(l_Std_Http_Header_Host_serialize___closed__1));
v___x_1228_ = lean_uv_ntop_v6(v_ipv6_1226_);
lean_dec_ref(v_ipv6_1226_);
v___x_1229_ = lean_string_append(v___x_1227_, v___x_1228_);
lean_dec_ref(v___x_1228_);
v___x_1230_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4));
v___x_1231_ = lean_string_append(v___x_1229_, v___x_1230_);
v___x_1232_ = l_Std_Http_Header_Value_ofString_x21(v___x_1231_);
v___y_1211_ = v___x_1232_;
goto v___jp_1210_;
}
}
}
case 1:
{
lean_object* v_host_1233_; 
v_host_1233_ = lean_ctor_get(v_host_1209_, 0);
lean_inc_ref(v_host_1233_);
lean_dec_ref(v_host_1209_);
switch(lean_obj_tag(v_host_1233_))
{
case 0:
{
lean_object* v_name_1234_; 
v_name_1234_ = lean_ctor_get(v_host_1233_, 0);
lean_inc_ref(v_name_1234_);
lean_dec_ref_known(v_host_1233_, 1);
v___y_1215_ = v_name_1234_;
goto v___jp_1214_;
}
case 1:
{
lean_object* v_ipv4_1235_; lean_object* v___x_1236_; 
v_ipv4_1235_ = lean_ctor_get(v_host_1233_, 0);
lean_inc_ref(v_ipv4_1235_);
lean_dec_ref_known(v_host_1233_, 1);
v___x_1236_ = lean_uv_ntop_v4(v_ipv4_1235_);
lean_dec_ref(v_ipv4_1235_);
v___y_1215_ = v___x_1236_;
goto v___jp_1214_;
}
default: 
{
lean_object* v_ipv6_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v_ipv6_1237_ = lean_ctor_get(v_host_1233_, 0);
lean_inc_ref(v_ipv6_1237_);
lean_dec_ref_known(v_host_1233_, 1);
v___x_1238_ = ((lean_object*)(l_Std_Http_Header_Host_serialize___closed__1));
v___x_1239_ = lean_uv_ntop_v6(v_ipv6_1237_);
lean_dec_ref(v_ipv6_1237_);
v___x_1240_ = lean_string_append(v___x_1238_, v___x_1239_);
lean_dec_ref(v___x_1239_);
v___x_1241_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4));
v___x_1242_ = lean_string_append(v___x_1240_, v___x_1241_);
v___y_1215_ = v___x_1242_;
goto v___jp_1214_;
}
}
}
default: 
{
lean_object* v_host_1243_; uint16_t v_port_1244_; lean_object* v___y_1246_; 
lean_inc_ref(v_port_1219_);
v_host_1243_ = lean_ctor_get(v_host_1209_, 0);
lean_inc_ref(v_host_1243_);
lean_dec_ref(v_host_1209_);
v_port_1244_ = lean_ctor_get_uint16(v_port_1219_, 0);
lean_dec_ref_known(v_port_1219_, 0);
switch(lean_obj_tag(v_host_1243_))
{
case 0:
{
lean_object* v_name_1253_; 
v_name_1253_ = lean_ctor_get(v_host_1243_, 0);
lean_inc_ref(v_name_1253_);
lean_dec_ref_known(v_host_1243_, 1);
v___y_1246_ = v_name_1253_;
goto v___jp_1245_;
}
case 1:
{
lean_object* v_ipv4_1254_; lean_object* v___x_1255_; 
v_ipv4_1254_ = lean_ctor_get(v_host_1243_, 0);
lean_inc_ref(v_ipv4_1254_);
lean_dec_ref_known(v_host_1243_, 1);
v___x_1255_ = lean_uv_ntop_v4(v_ipv4_1254_);
lean_dec_ref(v_ipv4_1254_);
v___y_1246_ = v___x_1255_;
goto v___jp_1245_;
}
default: 
{
lean_object* v_ipv6_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
v_ipv6_1256_ = lean_ctor_get(v_host_1243_, 0);
lean_inc_ref(v_ipv6_1256_);
lean_dec_ref_known(v_host_1243_, 1);
v___x_1257_ = ((lean_object*)(l_Std_Http_Header_Host_serialize___closed__1));
v___x_1258_ = lean_uv_ntop_v6(v_ipv6_1256_);
lean_dec_ref(v_ipv6_1256_);
v___x_1259_ = lean_string_append(v___x_1257_, v___x_1258_);
lean_dec_ref(v___x_1258_);
v___x_1260_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4));
v___x_1261_ = lean_string_append(v___x_1259_, v___x_1260_);
v___y_1246_ = v___x_1261_;
goto v___jp_1245_;
}
}
v___jp_1245_:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1247_ = ((lean_object*)(l_Std_Http_Header_Host_serialize___closed__0));
v___x_1248_ = lean_string_append(v___y_1246_, v___x_1247_);
v___x_1249_ = lean_uint16_to_nat(v_port_1244_);
v___x_1250_ = l_Nat_reprFast(v___x_1249_);
v___x_1251_ = lean_string_append(v___x_1248_, v___x_1250_);
lean_dec_ref(v___x_1250_);
v___x_1252_ = l_Std_Http_Header_Value_ofString_x21(v___x_1251_);
v___y_1211_ = v___x_1252_;
goto v___jp_1210_;
}
}
}
v___jp_1210_:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1212_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__0));
v___x_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
lean_ctor_set(v___x_1213_, 1, v___y_1211_);
return v___x_1213_;
}
v___jp_1214_:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1216_ = ((lean_object*)(l_Std_Http_Header_Host_serialize___closed__0));
v___x_1217_ = lean_string_append(v___y_1215_, v___x_1216_);
v___x_1218_ = l_Std_Http_Header_Value_ofString_x21(v___x_1217_);
v___y_1211_ = v___x_1218_;
goto v___jp_1210_;
}
}
}
static lean_object* _init_l_Std_Http_Header_instReprExpect_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1274_ = ((lean_object*)(l_Std_Http_Header_instReprExpect_repr___redArg___closed__1));
v___x_1275_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10);
v___x_1276_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
lean_ctor_set(v___x_1276_, 1, v___x_1274_);
return v___x_1276_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprExpect_repr___redArg___closed__3(void){
_start:
{
uint8_t v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1277_ = 0;
v___x_1278_ = lean_obj_once(&l_Std_Http_Header_instReprExpect_repr___redArg___closed__2, &l_Std_Http_Header_instReprExpect_repr___redArg___closed__2_once, _init_l_Std_Http_Header_instReprExpect_repr___redArg___closed__2);
v___x_1279_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
lean_ctor_set_uint8(v___x_1279_, sizeof(void*)*1, v___x_1277_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___redArg(){
_start:
{
lean_object* v___x_1281_; 
v___x_1281_ = lean_obj_once(&l_Std_Http_Header_instReprExpect_repr___redArg___closed__3, &l_Std_Http_Header_instReprExpect_repr___redArg___closed__3_once, _init_l_Std_Http_Header_instReprExpect_repr___redArg___closed__3);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___boxed(lean_object* v___dummy_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_Std_Http_Header_instReprExpect_repr___redArg();
return v_res_1283_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprExpect_repr___closed__0(void){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l_Std_Http_Header_instReprExpect_repr___redArg();
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr(lean_object* v_x_1285_, lean_object* v_prec_1286_){
_start:
{
lean_object* v___x_1287_; 
v___x_1287_ = lean_obj_once(&l_Std_Http_Header_instReprExpect_repr___closed__0, &l_Std_Http_Header_instReprExpect_repr___closed__0_once, _init_l_Std_Http_Header_instReprExpect_repr___closed__0);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___boxed(lean_object* v_x_1288_, lean_object* v_prec_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Std_Http_Header_instReprExpect_repr(v_x_1288_, v_prec_1289_);
lean_dec(v_prec_1289_);
return v_res_1290_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqExpect_beq___redArg(){
_start:
{
uint8_t v___x_1294_; 
v___x_1294_ = 1;
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqExpect_beq___redArg___boxed(lean_object* v___dummy_1295_){
_start:
{
uint8_t v_res_1296_; lean_object* v_r_1297_; 
v_res_1296_ = l_Std_Http_Header_instBEqExpect_beq___redArg();
v_r_1297_ = lean_box(v_res_1296_);
return v_r_1297_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqExpect_beq(lean_object* v_x_1298_, lean_object* v_y_1299_){
_start:
{
uint8_t v___x_1300_; 
v___x_1300_ = 1;
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqExpect_beq___boxed(lean_object* v_x_1301_, lean_object* v_y_1302_){
_start:
{
uint8_t v_res_1303_; lean_object* v_r_1304_; 
v_res_1303_ = l_Std_Http_Header_instBEqExpect_beq(v_x_1301_, v_y_1302_);
v_r_1304_ = lean_box(v_res_1303_);
return v_r_1304_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_parse(lean_object* v_v_1310_){
_start:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v_normalized_1316_; lean_object* v___x_1317_; uint8_t v___x_1318_; 
v___x_1311_ = lean_unsigned_to_nat(0u);
v___x_1312_ = lean_string_utf8_byte_size(v_v_1310_);
v___x_1313_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1313_, 0, v_v_1310_);
lean_ctor_set(v___x_1313_, 1, v___x_1311_);
lean_ctor_set(v___x_1313_, 2, v___x_1312_);
v___x_1314_ = l_String_Slice_trimAscii(v___x_1313_);
v___x_1315_ = l_String_Slice_toString(v___x_1314_);
lean_dec_ref(v___x_1314_);
v_normalized_1316_ = l_String_mapAux___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__0(v___x_1315_, v___x_1311_);
v___x_1317_ = ((lean_object*)(l_Std_Http_Header_Expect_parse___closed__0));
v___x_1318_ = lean_string_dec_eq(v_normalized_1316_, v___x_1317_);
lean_dec_ref(v_normalized_1316_);
if (v___x_1318_ == 0)
{
lean_object* v___x_1319_; 
v___x_1319_ = lean_box(0);
return v___x_1319_;
}
else
{
lean_object* v___x_1320_; 
v___x_1320_ = ((lean_object*)(l_Std_Http_Header_Expect_parse___closed__1));
return v___x_1320_;
}
}
}
static lean_object* _init_l_Std_Http_Header_Expect_serialize___redArg___closed__0(void){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = ((lean_object*)(l_Std_Http_Header_Expect_parse___closed__0));
v___x_1322_ = l_Std_Http_Header_Value_ofString_x21(v___x_1321_);
return v___x_1322_;
}
}
static lean_object* _init_l_Std_Http_Header_Expect_serialize___redArg___closed__1(void){
_start:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1323_ = lean_obj_once(&l_Std_Http_Header_Expect_serialize___redArg___closed__0, &l_Std_Http_Header_Expect_serialize___redArg___closed__0_once, _init_l_Std_Http_Header_Expect_serialize___redArg___closed__0);
v___x_1324_ = l_Std_Http_Header_Name_expect;
v___x_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
lean_ctor_set(v___x_1325_, 1, v___x_1323_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize___redArg(){
_start:
{
lean_object* v___x_1327_; 
v___x_1327_ = lean_obj_once(&l_Std_Http_Header_Expect_serialize___redArg___closed__1, &l_Std_Http_Header_Expect_serialize___redArg___closed__1_once, _init_l_Std_Http_Header_Expect_serialize___redArg___closed__1);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize___redArg___boxed(lean_object* v___dummy_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l_Std_Http_Header_Expect_serialize___redArg();
return v_res_1329_;
}
}
static lean_object* _init_l_Std_Http_Header_Expect_serialize___closed__0(void){
_start:
{
lean_object* v___x_1330_; 
v___x_1330_ = l_Std_Http_Header_Expect_serialize___redArg();
return v___x_1330_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize(lean_object* v_x_1331_){
_start:
{
lean_object* v___x_1332_; 
v___x_1332_ = lean_obj_once(&l_Std_Http_Header_Expect_serialize___closed__0, &l_Std_Http_Header_Expect_serialize___closed__0_once, _init_l_Std_Http_Header_Expect_serialize___closed__0);
return v___x_1332_;
}
}
lean_object* runtime_initialize_Std_Http_Data_URI(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Headers_Name(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Headers_Value(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Headers_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Http_Data_URI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___boxed__const__1 = _init_l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___boxed__const__1();
lean_mark_persistent(l_Std_Http_instEncodeV11OfHeader___redArg___lam__1___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Headers_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Data_URI(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Headers_Name(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Headers_Value(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Headers_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Data_URI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Headers_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Headers_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Headers_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Headers_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

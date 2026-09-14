// Lean compiler output
// Module: Std.Http.Protocol.H1.Message
// Imports: import Init.Data.Array public import Std.Http.Data
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
lean_object* l_Std_Http_Response_instReprHead_repr___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_Char_instToForwardSearcherCharDefaultForwardSearcherForallBoolBeq___redArg___lam__0___boxed(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_splitToSubslice___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Request_instReprHead_repr___redArg(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Std_Http_Headers_empty;
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
uint16_t l_Std_Http_Status_toCode(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Std_Http_Status_reasonPhrase(lean_object*);
lean_object* l_Std_Http_Headers_fold___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* l_Std_Http_URI_Query_formatOption(lean_object*);
lean_object* l_Std_Http_URI_EncodedFragment_encode(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
uint8_t l_Std_Http_instBEqVersion_beq(uint8_t, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_connection;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_Http_Header_Connection_parse(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_transferEncoding;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Std_Http_Header_ContentLength_parse(lean_object*);
lean_object* l_Std_Http_Header_TransferEncoding_parse(lean_object*);
uint8_t l_Std_Http_Header_TransferEncoding_isChunked(lean_object*);
extern lean_object* l_Std_Http_Header_Name_contentLength;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_receiving_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_receiving_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_receiving_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_receiving_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_sending_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_sending_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_sending_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_sending_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_instBEqDirection_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instBEqDirection_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Protocol_H1_instBEqDirection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Protocol_H1_instBEqDirection_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instBEqDirection___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_instBEqDirection___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Protocol_H1_instBEqDirection = (const lean_object*)&l_Std_Http_Protocol_H1_instBEqDirection___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_Direction_swap(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_swap___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_headers(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_headers___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_setHeaders(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_setHeaders___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_Message_Head_version(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_version___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Protocol_H1_Message_Head_getSize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Protocol_H1_Message_Head_getSize___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_Message_Head_getSize___closed__0_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_Message_Head_getSize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_Message_Head_getSize___closed__0_value)}};
static const lean_object* l_Std_Http_Protocol_H1_Message_Head_getSize___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_Message_Head_getSize___closed__1_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_Message_Head_getSize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Protocol_H1_Message_Head_getSize___closed__2 = (const lean_object*)&l_Std_Http_Protocol_H1_Message_Head_getSize___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_getSize(uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_getSize___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__1___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "keep-alive"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__0___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___closed__0_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___closed__0_value)}};
static const lean_object* l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___closed__1_value;
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Protocol_H1_instReprHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Protocol_H1_instReprHead___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instReprHead___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprHead___closed__0_value;
static const lean_closure_object l_Std_Http_Protocol_H1_instReprHead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Protocol_H1_instReprHead___aux__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instReprHead___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprHead___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__0_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\r\n"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__1_value;
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_Pattern_Char_instToForwardSearcherCharDefaultForwardSearcherForallBoolBeq___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__2 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__2_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__3 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__3_value;
static lean_once_cell_t l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__4;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__5 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___boxed__const__1;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__0_value;
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__1_value;
static lean_once_cell_t l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2;
static lean_once_cell_t l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__3;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/1.0"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__4 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__4_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/1.1"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__5 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__5_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/2.0"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__6 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__6_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/3.0"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__7 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__7_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__8 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__8_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__9 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__9_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__10 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__10_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__11 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__11_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__12 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__12_value;
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__13 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__13_value;
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__14 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__14_value;
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__15 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__15_value;
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__16 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__16_value;
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__17 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__17_value;
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__18 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__18_value;
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__19 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__19_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__13_value),((lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__14_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__20 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__20_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__20_value),((lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__15_value),((lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__16_value),((lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__17_value),((lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__18_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__21 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__21_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__21_value),((lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__19_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__22 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__22_value;
static lean_once_cell_t l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__23;
static lean_once_cell_t l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24;
static lean_once_cell_t l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__25;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "//"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__26 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__26_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__27 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__27_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__28 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__28_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ACL"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__29 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__29_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "BASELINE-CONTROL"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__30 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__30_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "BIND"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__31 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__31_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CHECKIN"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__32 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__32_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "CHECKOUT"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__33 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__33_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CONNECT"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__34 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__34_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COPY"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__35 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__35_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "DELETE"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__36 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__36_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__37 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__37_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HEAD"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__38 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__38_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "LABEL"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__39 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__39_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LINK"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__40 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__40_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LOCK"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__41 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__41_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "MERGE"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__42 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__42_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MKACTIVITY"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__43 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__43_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MKCALENDAR"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__44 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__44_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "MKCOL"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__45 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__45_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "MKREDIRECTREF"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__46 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__46_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MKWORKSPACE"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__47 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__47_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "MOVE"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__48 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__48_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "OPTIONS"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__49 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__49_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ORDERPATCH"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__50 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__50_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PATCH"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__51 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__51_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__52 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__52_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PRI"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__53 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__53_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "PROPFIND"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__54 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__54_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "PROPPATCH"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__55 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__55_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PUT"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__56 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__56_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "QUERY"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__57 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__57_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "REBIND"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__58 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__58_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "REPORT"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__59 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__59_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SEARCH"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__60 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__60_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "TRACE"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__61 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__61_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNBIND"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__62 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__62_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UNCHECKOUT"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__63 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__63_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNLINK"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__64 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__64_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNLOCK"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__65 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__65_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UPDATE"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__66 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__66_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "UPDATEREDIRECTREF"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__67 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__67_value;
static const lean_string_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "VERSION-CONTROL"};
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__68 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__68_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___closed__0_value;
static const lean_closure_object l_Std_Http_Protocol_H1_instEncodeV11Head___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_instEncodeV11Head___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___boxed(lean_object*);
static lean_once_cell_t l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__0;
static lean_once_cell_t l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__1;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEmptyCollectionHead(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEmptyCollectionHead___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorIdx(uint8_t v_x_1_){
_start:
{
if (v_x_1_ == 0)
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
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_boxed_5_; lean_object* v_res_6_; 
v_x_boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Std_Http_Protocol_H1_Direction_ctorIdx(v_x_boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Http_Protocol_H1_Direction_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Std_Http_Protocol_H1_Direction_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_receiving_elim___redArg(lean_object* v_receiving_22_){
_start:
{
lean_inc(v_receiving_22_);
return v_receiving_22_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_receiving_elim___redArg___boxed(lean_object* v_receiving_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Std_Http_Protocol_H1_Direction_receiving_elim___redArg(v_receiving_23_);
lean_dec(v_receiving_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_receiving_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_receiving_28_){
_start:
{
lean_inc(v_receiving_28_);
return v_receiving_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_receiving_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_receiving_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Std_Http_Protocol_H1_Direction_receiving_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_receiving_32_);
lean_dec(v_receiving_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_sending_elim___redArg(lean_object* v_sending_35_){
_start:
{
lean_inc(v_sending_35_);
return v_sending_35_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_sending_elim___redArg___boxed(lean_object* v_sending_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_Http_Protocol_H1_Direction_sending_elim___redArg(v_sending_36_);
lean_dec(v_sending_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_sending_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_sending_41_){
_start:
{
lean_inc(v_sending_41_);
return v_sending_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_sending_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_sending_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Std_Http_Protocol_H1_Direction_sending_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_sending_45_);
lean_dec(v_sending_45_);
return v_res_47_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_instBEqDirection_beq(uint8_t v_x_48_, uint8_t v_y_49_){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_50_ = l_Std_Http_Protocol_H1_Direction_ctorIdx(v_x_48_);
v___x_51_ = l_Std_Http_Protocol_H1_Direction_ctorIdx(v_y_49_);
v___x_52_ = lean_nat_dec_eq(v___x_50_, v___x_51_);
lean_dec(v___x_51_);
lean_dec(v___x_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instBEqDirection_beq___boxed(lean_object* v_x_53_, lean_object* v_y_54_){
_start:
{
uint8_t v_x_21__boxed_55_; uint8_t v_y_22__boxed_56_; uint8_t v_res_57_; lean_object* v_r_58_; 
v_x_21__boxed_55_ = lean_unbox(v_x_53_);
v_y_22__boxed_56_ = lean_unbox(v_y_54_);
v_res_57_ = l_Std_Http_Protocol_H1_instBEqDirection_beq(v_x_21__boxed_55_, v_y_22__boxed_56_);
v_r_58_ = lean_box(v_res_57_);
return v_r_58_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_Direction_swap(uint8_t v_x_61_){
_start:
{
if (v_x_61_ == 0)
{
uint8_t v___x_62_; 
v___x_62_ = 1;
return v___x_62_;
}
else
{
uint8_t v___x_63_; 
v___x_63_ = 0;
return v___x_63_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Direction_swap___boxed(lean_object* v_x_64_){
_start:
{
uint8_t v_x_18__boxed_65_; uint8_t v_res_66_; lean_object* v_r_67_; 
v_x_18__boxed_65_ = lean_unbox(v_x_64_);
v_res_66_ = l_Std_Http_Protocol_H1_Direction_swap(v_x_18__boxed_65_);
v_r_67_ = lean_box(v_res_66_);
return v_r_67_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_headers(uint8_t v_dir_68_, lean_object* v_m_69_){
_start:
{
lean_object* v_headers_70_; 
v_headers_70_ = lean_ctor_get(v_m_69_, 1);
lean_inc_ref(v_headers_70_);
return v_headers_70_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_headers___boxed(lean_object* v_dir_71_, lean_object* v_m_72_){
_start:
{
uint8_t v_dir_boxed_73_; lean_object* v_res_74_; 
v_dir_boxed_73_ = lean_unbox(v_dir_71_);
v_res_74_ = l_Std_Http_Protocol_H1_Message_Head_headers(v_dir_boxed_73_, v_m_72_);
lean_dec(v_m_72_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_setHeaders(uint8_t v_dir_75_, lean_object* v_m_76_, lean_object* v_headers_77_){
_start:
{
if (v_dir_75_ == 0)
{
uint8_t v_method_78_; uint8_t v_version_79_; lean_object* v_uri_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_87_; 
v_method_78_ = lean_ctor_get_uint8(v_m_76_, sizeof(void*)*2);
v_version_79_ = lean_ctor_get_uint8(v_m_76_, sizeof(void*)*2 + 1);
v_uri_80_ = lean_ctor_get(v_m_76_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v_m_76_);
if (v_isSharedCheck_87_ == 0)
{
lean_object* v_unused_88_; 
v_unused_88_ = lean_ctor_get(v_m_76_, 1);
lean_dec(v_unused_88_);
v___x_82_ = v_m_76_;
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_uri_80_);
lean_dec(v_m_76_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_85_; 
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 1, v_headers_77_);
v___x_85_ = v___x_82_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_uri_80_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v_headers_77_);
lean_ctor_set_uint8(v_reuseFailAlloc_86_, sizeof(void*)*2, v_method_78_);
lean_ctor_set_uint8(v_reuseFailAlloc_86_, sizeof(void*)*2 + 1, v_version_79_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
else
{
lean_object* v_status_89_; uint8_t v_version_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_97_; 
v_status_89_ = lean_ctor_get(v_m_76_, 0);
v_version_90_ = lean_ctor_get_uint8(v_m_76_, sizeof(void*)*2);
v_isSharedCheck_97_ = !lean_is_exclusive(v_m_76_);
if (v_isSharedCheck_97_ == 0)
{
lean_object* v_unused_98_; 
v_unused_98_ = lean_ctor_get(v_m_76_, 1);
lean_dec(v_unused_98_);
v___x_92_ = v_m_76_;
v_isShared_93_ = v_isSharedCheck_97_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_status_89_);
lean_dec(v_m_76_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_97_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v___x_95_; 
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 1, v_headers_77_);
v___x_95_ = v___x_92_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_status_89_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v_headers_77_);
lean_ctor_set_uint8(v_reuseFailAlloc_96_, sizeof(void*)*2, v_version_90_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_setHeaders___boxed(lean_object* v_dir_99_, lean_object* v_m_100_, lean_object* v_headers_101_){
_start:
{
uint8_t v_dir_boxed_102_; lean_object* v_res_103_; 
v_dir_boxed_102_ = lean_unbox(v_dir_99_);
v_res_103_ = l_Std_Http_Protocol_H1_Message_Head_setHeaders(v_dir_boxed_102_, v_m_100_, v_headers_101_);
return v_res_103_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_Message_Head_version(uint8_t v_dir_104_, lean_object* v_m_105_){
_start:
{
if (v_dir_104_ == 0)
{
uint8_t v_version_106_; 
v_version_106_ = lean_ctor_get_uint8(v_m_105_, sizeof(void*)*2 + 1);
return v_version_106_;
}
else
{
uint8_t v_version_107_; 
v_version_107_ = lean_ctor_get_uint8(v_m_105_, sizeof(void*)*2);
return v_version_107_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_version___boxed(lean_object* v_dir_108_, lean_object* v_m_109_){
_start:
{
uint8_t v_dir_boxed_110_; uint8_t v_res_111_; lean_object* v_r_112_; 
v_dir_boxed_110_ = lean_unbox(v_dir_108_);
v_res_111_ = l_Std_Http_Protocol_H1_Message_Head_version(v_dir_boxed_110_, v_m_109_);
lean_dec(v_m_109_);
v_r_112_ = lean_box(v_res_111_);
return v_r_112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2___redArg(lean_object* v___x_113_, lean_object* v___x_114_, size_t v_sz_115_, size_t v_i_116_, lean_object* v_bs_117_){
_start:
{
uint8_t v___x_118_; 
v___x_118_ = lean_usize_dec_lt(v_i_116_, v_sz_115_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; 
v___x_119_ = l_unsafeCast___redArg(v_bs_117_);
lean_dec_ref(v_bs_117_);
return v___x_119_;
}
else
{
lean_object* v_entries_120_; lean_object* v___x_121_; lean_object* v_bs_x27_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v_snd_126_; size_t v___x_127_; size_t v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_entries_120_ = lean_ctor_get(v___x_113_, 0);
v___x_121_ = lean_unsigned_to_nat(0u);
v_bs_x27_122_ = lean_array_uset(v_bs_117_, v_i_116_, v___x_121_);
v___x_123_ = lean_usize_to_nat(v_i_116_);
v___x_124_ = lean_array_fget_borrowed(v___x_114_, v___x_123_);
lean_dec(v___x_123_);
v___x_125_ = lean_array_fget_borrowed(v_entries_120_, v___x_124_);
v_snd_126_ = lean_ctor_get(v___x_125_, 1);
v___x_127_ = ((size_t)1ULL);
v___x_128_ = lean_usize_add(v_i_116_, v___x_127_);
v___x_129_ = l_unsafeCast___redArg(v_snd_126_);
v___x_130_ = lean_array_uset(v_bs_x27_122_, v_i_116_, v___x_129_);
v_i_116_ = v___x_128_;
v_bs_117_ = v___x_130_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2___redArg___boxed(lean_object* v___x_132_, lean_object* v___x_133_, lean_object* v_sz_134_, lean_object* v_i_135_, lean_object* v_bs_136_){
_start:
{
size_t v_sz_boxed_137_; size_t v_i_boxed_138_; lean_object* v_res_139_; 
v_sz_boxed_137_ = lean_unbox_usize(v_sz_134_);
lean_dec(v_sz_134_);
v_i_boxed_138_ = lean_unbox_usize(v_i_135_);
lean_dec(v_i_135_);
v_res_139_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2___redArg(v___x_132_, v___x_133_, v_sz_boxed_137_, v_i_boxed_138_, v_bs_136_);
lean_dec_ref(v___x_133_);
lean_dec_ref(v___x_132_);
return v_res_139_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0___redArg(lean_object* v_a_140_, lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_141_) == 0)
{
uint8_t v___x_142_; 
v___x_142_ = 0;
return v___x_142_;
}
else
{
lean_object* v_key_143_; lean_object* v_tail_144_; uint8_t v___x_145_; 
v_key_143_ = lean_ctor_get(v_x_141_, 0);
v_tail_144_ = lean_ctor_get(v_x_141_, 2);
v___x_145_ = lean_string_dec_eq(v_key_143_, v_a_140_);
if (v___x_145_ == 0)
{
v_x_141_ = v_tail_144_;
goto _start;
}
else
{
return v___x_145_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0___redArg___boxed(lean_object* v_a_147_, lean_object* v_x_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0___redArg(v_a_147_, v_x_148_);
lean_dec(v_x_148_);
lean_dec_ref(v_a_147_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0___redArg(lean_object* v_m_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_buckets_153_; lean_object* v___x_154_; uint64_t v___x_155_; uint64_t v___x_156_; uint64_t v___x_157_; uint64_t v_fold_158_; uint64_t v___x_159_; uint64_t v___x_160_; uint64_t v___x_161_; size_t v___x_162_; size_t v___x_163_; size_t v___x_164_; size_t v___x_165_; size_t v___x_166_; lean_object* v___x_167_; uint8_t v___x_168_; 
v_buckets_153_ = lean_ctor_get(v_m_151_, 1);
v___x_154_ = lean_array_get_size(v_buckets_153_);
v___x_155_ = lean_string_hash(v_a_152_);
v___x_156_ = 32ULL;
v___x_157_ = lean_uint64_shift_right(v___x_155_, v___x_156_);
v_fold_158_ = lean_uint64_xor(v___x_155_, v___x_157_);
v___x_159_ = 16ULL;
v___x_160_ = lean_uint64_shift_right(v_fold_158_, v___x_159_);
v___x_161_ = lean_uint64_xor(v_fold_158_, v___x_160_);
v___x_162_ = lean_uint64_to_usize(v___x_161_);
v___x_163_ = lean_usize_of_nat(v___x_154_);
v___x_164_ = ((size_t)1ULL);
v___x_165_ = lean_usize_sub(v___x_163_, v___x_164_);
v___x_166_ = lean_usize_land(v___x_162_, v___x_165_);
v___x_167_ = lean_array_uget_borrowed(v_buckets_153_, v___x_166_);
v___x_168_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0___redArg(v_a_152_, v___x_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0___redArg___boxed(lean_object* v_m_169_, lean_object* v_a_170_){
_start:
{
uint8_t v_res_171_; lean_object* v_r_172_; 
v_res_171_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0___redArg(v_m_169_, v_a_170_);
lean_dec_ref(v_a_170_);
lean_dec_ref(v_m_169_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2___redArg(lean_object* v_a_173_, lean_object* v_x_174_){
_start:
{
lean_object* v_key_175_; lean_object* v_value_176_; lean_object* v_tail_177_; uint8_t v___x_178_; 
v_key_175_ = lean_ctor_get(v_x_174_, 0);
v_value_176_ = lean_ctor_get(v_x_174_, 1);
v_tail_177_ = lean_ctor_get(v_x_174_, 2);
v___x_178_ = lean_string_dec_eq(v_key_175_, v_a_173_);
if (v___x_178_ == 0)
{
v_x_174_ = v_tail_177_;
goto _start;
}
else
{
lean_inc(v_value_176_);
return v_value_176_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2___redArg___boxed(lean_object* v_a_180_, lean_object* v_x_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2___redArg(v_a_180_, v_x_181_);
lean_dec(v_x_181_);
lean_dec_ref(v_a_180_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1___redArg(lean_object* v_m_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_buckets_185_; lean_object* v___x_186_; uint64_t v___x_187_; uint64_t v___x_188_; uint64_t v___x_189_; uint64_t v_fold_190_; uint64_t v___x_191_; uint64_t v___x_192_; uint64_t v___x_193_; size_t v___x_194_; size_t v___x_195_; size_t v___x_196_; size_t v___x_197_; size_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v_buckets_185_ = lean_ctor_get(v_m_183_, 1);
v___x_186_ = lean_array_get_size(v_buckets_185_);
v___x_187_ = lean_string_hash(v_a_184_);
v___x_188_ = 32ULL;
v___x_189_ = lean_uint64_shift_right(v___x_187_, v___x_188_);
v_fold_190_ = lean_uint64_xor(v___x_187_, v___x_189_);
v___x_191_ = 16ULL;
v___x_192_ = lean_uint64_shift_right(v_fold_190_, v___x_191_);
v___x_193_ = lean_uint64_xor(v_fold_190_, v___x_192_);
v___x_194_ = lean_uint64_to_usize(v___x_193_);
v___x_195_ = lean_usize_of_nat(v___x_186_);
v___x_196_ = ((size_t)1ULL);
v___x_197_ = lean_usize_sub(v___x_195_, v___x_196_);
v___x_198_ = lean_usize_land(v___x_194_, v___x_197_);
v___x_199_ = lean_array_uget_borrowed(v_buckets_185_, v___x_198_);
v___x_200_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2___redArg(v_a_184_, v___x_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1___redArg___boxed(lean_object* v_m_201_, lean_object* v_a_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1___redArg(v_m_201_, v_a_202_);
lean_dec_ref(v_a_202_);
lean_dec_ref(v_m_201_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_getSize(uint8_t v_dir_210_, lean_object* v_message_211_, uint8_t v_allowEOFBody_212_){
_start:
{
lean_object* v___x_213_; lean_object* v___y_215_; lean_object* v_indexes_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v___x_213_ = l_Std_Http_Protocol_H1_Message_Head_headers(v_dir_210_, v_message_211_);
v_indexes_268_ = lean_ctor_get(v___x_213_, 1);
lean_inc_ref(v_indexes_268_);
v___x_269_ = l_Std_Http_Header_Name_contentLength;
v___x_270_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0___redArg(v_indexes_268_, v___x_269_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; 
lean_dec_ref(v_indexes_268_);
v___x_271_ = lean_box(0);
v___y_215_ = v___x_271_;
goto v___jp_214_;
}
else
{
lean_object* v___x_272_; size_t v_sz_273_; size_t v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v_entries_277_; lean_object* v___x_278_; 
v___x_272_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1___redArg(v_indexes_268_, v___x_269_);
lean_dec_ref(v_indexes_268_);
v_sz_273_ = lean_array_size(v___x_272_);
v___x_274_ = ((size_t)0ULL);
v___x_275_ = l_unsafeCast___redArg(v___x_272_);
v___x_276_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2___redArg(v___x_213_, v___x_272_, v_sz_273_, v___x_274_, v___x_275_);
lean_dec(v___x_272_);
v_entries_277_ = l_unsafeCast___redArg(v___x_276_);
lean_dec_ref(v___x_276_);
v___x_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_278_, 0, v_entries_277_);
v___y_215_ = v___x_278_;
goto v___jp_214_;
}
v___jp_214_:
{
lean_object* v_indexes_216_; lean_object* v___x_217_; uint8_t v___x_218_; 
v_indexes_216_ = lean_ctor_get(v___x_213_, 1);
lean_inc_ref(v_indexes_216_);
v___x_217_ = l_Std_Http_Header_Name_transferEncoding;
v___x_218_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0___redArg(v_indexes_216_, v___x_217_);
if (v___x_218_ == 0)
{
lean_dec_ref(v_indexes_216_);
lean_dec_ref(v___x_213_);
if (lean_obj_tag(v___y_215_) == 0)
{
if (v_allowEOFBody_212_ == 0)
{
lean_object* v___x_219_; 
v___x_219_ = lean_box(0);
return v___x_219_;
}
else
{
lean_object* v___x_220_; 
v___x_220_ = ((lean_object*)(l_Std_Http_Protocol_H1_Message_Head_getSize___closed__1));
return v___x_220_;
}
}
else
{
lean_object* v_val_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_244_; 
v_val_221_ = lean_ctor_get(v___y_215_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___y_215_);
if (v_isSharedCheck_244_ == 0)
{
v___x_223_ = v___y_215_;
v_isShared_224_ = v_isSharedCheck_244_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_val_221_);
lean_dec(v___y_215_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_244_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_225_ = lean_array_get_size(v_val_221_);
v___x_226_ = lean_unsigned_to_nat(1u);
v___x_227_ = lean_nat_dec_eq(v___x_225_, v___x_226_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; 
lean_del_object(v___x_223_);
lean_dec(v_val_221_);
v___x_228_ = lean_box(0);
return v___x_228_;
}
else
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_229_ = lean_unsigned_to_nat(0u);
v___x_230_ = lean_array_fget(v_val_221_, v___x_229_);
lean_dec(v_val_221_);
v___x_231_ = l_Std_Http_Header_ContentLength_parse(v___x_230_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v___x_232_; 
lean_del_object(v___x_223_);
v___x_232_ = lean_box(0);
return v___x_232_;
}
else
{
lean_object* v_val_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_243_; 
v_val_233_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_243_ == 0)
{
v___x_235_ = v___x_231_;
v_isShared_236_ = v_isSharedCheck_243_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_val_233_);
lean_dec(v___x_231_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_243_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 0, v_val_233_);
v___x_238_ = v___x_223_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_val_233_);
v___x_238_ = v_reuseFailAlloc_242_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_240_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 0, v___x_238_);
v___x_240_ = v___x_235_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_238_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
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
lean_object* v___x_245_; size_t v_sz_246_; size_t v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v_entries_250_; lean_object* v___x_251_; lean_object* v___x_252_; uint8_t v___x_253_; 
v___x_245_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1___redArg(v_indexes_216_, v___x_217_);
lean_dec_ref(v_indexes_216_);
v_sz_246_ = lean_array_size(v___x_245_);
v___x_247_ = ((size_t)0ULL);
v___x_248_ = l_unsafeCast___redArg(v___x_245_);
v___x_249_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2___redArg(v___x_213_, v___x_245_, v_sz_246_, v___x_247_, v___x_248_);
lean_dec(v___x_245_);
lean_dec_ref(v___x_213_);
v_entries_250_ = l_unsafeCast___redArg(v___x_249_);
lean_dec_ref(v___x_249_);
v___x_251_ = lean_array_get_size(v_entries_250_);
v___x_252_ = lean_unsigned_to_nat(1u);
v___x_253_ = lean_nat_dec_eq(v___x_251_, v___x_252_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; 
lean_dec(v_entries_250_);
lean_dec(v___y_215_);
v___x_254_ = lean_box(0);
return v___x_254_;
}
else
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v_te_257_; 
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = lean_array_fget(v_entries_250_, v___x_255_);
lean_dec(v_entries_250_);
v_te_257_ = l_Std_Http_Header_TransferEncoding_parse(v___x_256_);
if (lean_obj_tag(v_te_257_) == 0)
{
lean_object* v___x_258_; 
lean_dec(v___y_215_);
v___x_258_ = lean_box(0);
return v___x_258_;
}
else
{
lean_object* v_val_259_; uint8_t v___x_260_; 
v_val_259_ = lean_ctor_get(v_te_257_, 0);
lean_inc(v_val_259_);
lean_dec_ref_known(v_te_257_, 1);
v___x_260_ = l_Std_Http_Header_TransferEncoding_isChunked(v_val_259_);
lean_dec(v_val_259_);
if (v___x_260_ == 1)
{
if (lean_obj_tag(v___y_215_) == 0)
{
uint8_t v___x_261_; uint8_t v___x_262_; uint8_t v___x_263_; 
v___x_261_ = l_Std_Http_Protocol_H1_Message_Head_version(v_dir_210_, v_message_211_);
v___x_262_ = 0;
v___x_263_ = l_Std_Http_instBEqVersion_beq(v___x_261_, v___x_262_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; 
v___x_264_ = ((lean_object*)(l_Std_Http_Protocol_H1_Message_Head_getSize___closed__2));
return v___x_264_;
}
else
{
lean_object* v___x_265_; 
v___x_265_ = lean_box(0);
return v___x_265_;
}
}
else
{
lean_object* v___x_266_; 
lean_dec(v___y_215_);
v___x_266_ = lean_box(0);
return v___x_266_;
}
}
else
{
lean_object* v___x_267_; 
lean_dec(v___y_215_);
v___x_267_ = lean_box(0);
return v___x_267_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_getSize___boxed(lean_object* v_dir_279_, lean_object* v_message_280_, lean_object* v_allowEOFBody_281_){
_start:
{
uint8_t v_dir_boxed_282_; uint8_t v_allowEOFBody_boxed_283_; lean_object* v_res_284_; 
v_dir_boxed_282_ = lean_unbox(v_dir_279_);
v_allowEOFBody_boxed_283_ = lean_unbox(v_allowEOFBody_281_);
v_res_284_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v_dir_boxed_282_, v_message_280_, v_allowEOFBody_boxed_283_);
lean_dec(v_message_280_);
return v_res_284_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0(lean_object* v_00_u03b2_285_, lean_object* v_m_286_, lean_object* v_a_287_){
_start:
{
uint8_t v___x_288_; 
v___x_288_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0___redArg(v_m_286_, v_a_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0___boxed(lean_object* v_00_u03b2_289_, lean_object* v_m_290_, lean_object* v_a_291_){
_start:
{
uint8_t v_res_292_; lean_object* v_r_293_; 
v_res_292_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0(v_00_u03b2_289_, v_m_290_, v_a_291_);
lean_dec_ref(v_a_291_);
lean_dec_ref(v_m_290_);
v_r_293_ = lean_box(v_res_292_);
return v_r_293_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1(lean_object* v_00_u03b2_294_, lean_object* v_m_295_, lean_object* v_a_296_, lean_object* v_hma_297_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1___redArg(v_m_295_, v_a_296_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1___boxed(lean_object* v_00_u03b2_299_, lean_object* v_m_300_, lean_object* v_a_301_, lean_object* v_hma_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1(v_00_u03b2_299_, v_m_300_, v_a_301_, v_hma_302_);
lean_dec_ref(v_a_301_);
lean_dec_ref(v_m_300_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2(lean_object* v___x_304_, lean_object* v___x_305_, lean_object* v_as_306_, size_t v_sz_307_, size_t v_i_308_, lean_object* v_bs_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2___redArg(v___x_304_, v___x_305_, v_sz_307_, v_i_308_, v_bs_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2___boxed(lean_object* v___x_311_, lean_object* v___x_312_, lean_object* v_as_313_, lean_object* v_sz_314_, lean_object* v_i_315_, lean_object* v_bs_316_){
_start:
{
size_t v_sz_boxed_317_; size_t v_i_boxed_318_; lean_object* v_res_319_; 
v_sz_boxed_317_ = lean_unbox_usize(v_sz_314_);
lean_dec(v_sz_314_);
v_i_boxed_318_ = lean_unbox_usize(v_i_315_);
lean_dec(v_i_315_);
v_res_319_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2(v___x_311_, v___x_312_, v_as_313_, v_sz_boxed_317_, v_i_boxed_318_, v_bs_316_);
lean_dec_ref(v_as_313_);
lean_dec_ref(v___x_312_);
lean_dec_ref(v___x_311_);
return v_res_319_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0(lean_object* v_00_u03b2_320_, lean_object* v_a_321_, lean_object* v_x_322_){
_start:
{
uint8_t v___x_323_; 
v___x_323_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0___redArg(v_a_321_, v_x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0___boxed(lean_object* v_00_u03b2_324_, lean_object* v_a_325_, lean_object* v_x_326_){
_start:
{
uint8_t v_res_327_; lean_object* v_r_328_; 
v_res_327_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0_spec__0(v_00_u03b2_324_, v_a_325_, v_x_326_);
lean_dec(v_x_326_);
lean_dec_ref(v_a_325_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2(lean_object* v_00_u03b2_329_, lean_object* v_a_330_, lean_object* v_x_331_, lean_object* v_x_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2___redArg(v_a_330_, v_x_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2___boxed(lean_object* v_00_u03b2_334_, lean_object* v_a_335_, lean_object* v_x_336_, lean_object* v_x_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1_spec__2(v_00_u03b2_334_, v_a_335_, v_x_336_, v_x_337_);
lean_dec(v_x_336_);
lean_dec_ref(v_a_335_);
return v_res_338_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__1(lean_object* v_as_340_, size_t v_i_341_, size_t v_stop_342_){
_start:
{
uint8_t v___x_343_; 
v___x_343_ = lean_usize_dec_eq(v_i_341_, v_stop_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_344_ = lean_array_uget_borrowed(v_as_340_, v_i_341_);
v___x_345_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__1___closed__0));
v___x_346_ = lean_string_dec_eq(v___x_344_, v___x_345_);
if (v___x_346_ == 0)
{
size_t v___x_347_; size_t v___x_348_; 
v___x_347_ = ((size_t)1ULL);
v___x_348_ = lean_usize_add(v_i_341_, v___x_347_);
v_i_341_ = v___x_348_;
goto _start;
}
else
{
return v___x_346_;
}
}
else
{
uint8_t v___x_350_; 
v___x_350_ = 0;
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__1___boxed(lean_object* v_as_351_, lean_object* v_i_352_, lean_object* v_stop_353_){
_start:
{
size_t v_i_boxed_354_; size_t v_stop_boxed_355_; uint8_t v_res_356_; lean_object* v_r_357_; 
v_i_boxed_354_ = lean_unbox_usize(v_i_352_);
lean_dec(v_i_352_);
v_stop_boxed_355_ = lean_unbox_usize(v_stop_353_);
lean_dec(v_stop_353_);
v_res_356_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__1(v_as_351_, v_i_boxed_354_, v_stop_boxed_355_);
lean_dec_ref(v_as_351_);
v_r_357_ = lean_box(v_res_356_);
return v_r_357_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__0(lean_object* v_as_359_, size_t v_i_360_, size_t v_stop_361_){
_start:
{
uint8_t v___x_362_; 
v___x_362_ = lean_usize_dec_eq(v_i_360_, v_stop_361_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_363_ = lean_array_uget_borrowed(v_as_359_, v_i_360_);
v___x_364_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__0___closed__0));
v___x_365_ = lean_string_dec_eq(v___x_363_, v___x_364_);
if (v___x_365_ == 0)
{
size_t v___x_366_; size_t v___x_367_; 
v___x_366_ = ((size_t)1ULL);
v___x_367_ = lean_usize_add(v_i_360_, v___x_366_);
v_i_360_ = v___x_367_;
goto _start;
}
else
{
return v___x_365_;
}
}
else
{
uint8_t v___x_369_; 
v___x_369_ = 0;
return v___x_369_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__0___boxed(lean_object* v_as_370_, lean_object* v_i_371_, lean_object* v_stop_372_){
_start:
{
size_t v_i_boxed_373_; size_t v_stop_boxed_374_; uint8_t v_res_375_; lean_object* v_r_376_; 
v_i_boxed_373_ = lean_unbox_usize(v_i_371_);
lean_dec(v_i_371_);
v_stop_boxed_374_ = lean_unbox_usize(v_stop_372_);
lean_dec(v_stop_372_);
v_res_375_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__0(v_as_370_, v_i_boxed_373_, v_stop_boxed_374_);
lean_dec_ref(v_as_370_);
v_r_376_ = lean_box(v_res_375_);
return v_r_376_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__2(lean_object* v_as_377_, size_t v_i_378_, size_t v_stop_379_, lean_object* v_b_380_){
_start:
{
lean_object* v___y_382_; uint8_t v___x_386_; 
v___x_386_ = lean_usize_dec_eq(v_i_378_, v_stop_379_);
if (v___x_386_ == 0)
{
if (lean_obj_tag(v_b_380_) == 0)
{
v___y_382_ = v_b_380_;
goto v___jp_381_;
}
else
{
lean_object* v_val_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v_val_387_ = lean_ctor_get(v_b_380_, 0);
lean_inc(v_val_387_);
lean_dec_ref_known(v_b_380_, 1);
v___x_388_ = lean_array_uget_borrowed(v_as_377_, v_i_378_);
lean_inc(v___x_388_);
v___x_389_ = l_Std_Http_Header_Connection_parse(v___x_388_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v___x_390_; 
lean_dec(v_val_387_);
v___x_390_ = lean_box(0);
v___y_382_ = v___x_390_;
goto v___jp_381_;
}
else
{
lean_object* v_val_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_399_; 
v_val_391_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_399_ == 0)
{
v___x_393_ = v___x_389_;
v_isShared_394_ = v_isSharedCheck_399_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_val_391_);
lean_dec(v___x_389_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_399_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_395_ = l_Array_append___redArg(v_val_387_, v_val_391_);
lean_dec(v_val_391_);
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 0, v___x_395_);
v___x_397_ = v___x_393_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v___x_395_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
v___y_382_ = v___x_397_;
goto v___jp_381_;
}
}
}
}
}
else
{
return v_b_380_;
}
v___jp_381_:
{
size_t v___x_383_; size_t v___x_384_; 
v___x_383_ = ((size_t)1ULL);
v___x_384_ = lean_usize_add(v_i_378_, v___x_383_);
v_i_378_ = v___x_384_;
v_b_380_ = v___y_382_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__2___boxed(lean_object* v_as_400_, lean_object* v_i_401_, lean_object* v_stop_402_, lean_object* v_b_403_){
_start:
{
size_t v_i_boxed_404_; size_t v_stop_boxed_405_; lean_object* v_res_406_; 
v_i_boxed_404_ = lean_unbox_usize(v_i_401_);
lean_dec(v_i_401_);
v_stop_boxed_405_ = lean_unbox_usize(v_stop_402_);
lean_dec(v_stop_402_);
v_res_406_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__2(v_as_400_, v_i_boxed_404_, v_stop_boxed_405_, v_b_403_);
lean_dec_ref(v_as_400_);
return v_res_406_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive(uint8_t v_dir_411_, lean_object* v_message_412_){
_start:
{
lean_object* v_val_414_; lean_object* v___y_432_; lean_object* v___x_435_; lean_object* v_indexes_436_; lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_435_ = l_Std_Http_Protocol_H1_Message_Head_headers(v_dir_411_, v_message_412_);
v_indexes_436_ = lean_ctor_get(v___x_435_, 1);
lean_inc_ref(v_indexes_436_);
v___x_437_ = l_Std_Http_Header_Name_connection;
v___x_438_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__0___redArg(v_indexes_436_, v___x_437_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; 
lean_dec_ref(v_indexes_436_);
lean_dec_ref(v___x_435_);
v___x_439_ = ((lean_object*)(l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___closed__0));
v_val_414_ = v___x_439_;
goto v___jp_413_;
}
else
{
lean_object* v___x_440_; size_t v_sz_441_; size_t v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v_entries_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_440_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__1___redArg(v_indexes_436_, v___x_437_);
lean_dec_ref(v_indexes_436_);
v_sz_441_ = lean_array_size(v___x_440_);
v___x_442_ = ((size_t)0ULL);
v___x_443_ = l_unsafeCast___redArg(v___x_440_);
v___x_444_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Http_Protocol_H1_Message_Head_getSize_spec__2___redArg(v___x_435_, v___x_440_, v_sz_441_, v___x_442_, v___x_443_);
lean_dec(v___x_440_);
lean_dec_ref(v___x_435_);
v_entries_445_ = l_unsafeCast___redArg(v___x_444_);
lean_dec_ref(v___x_444_);
v___x_446_ = lean_unsigned_to_nat(0u);
v___x_447_ = ((lean_object*)(l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___closed__0));
v___x_448_ = lean_array_get_size(v_entries_445_);
v___x_449_ = lean_nat_dec_lt(v___x_446_, v___x_448_);
if (v___x_449_ == 0)
{
lean_dec(v_entries_445_);
v_val_414_ = v___x_447_;
goto v___jp_413_;
}
else
{
lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_450_ = ((lean_object*)(l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___closed__1));
v___x_451_ = lean_nat_dec_le(v___x_448_, v___x_448_);
if (v___x_451_ == 0)
{
if (v___x_449_ == 0)
{
lean_dec(v_entries_445_);
v_val_414_ = v___x_447_;
goto v___jp_413_;
}
else
{
size_t v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_usize_of_nat(v___x_448_);
v___x_453_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__2(v_entries_445_, v___x_442_, v___x_452_, v___x_450_);
lean_dec(v_entries_445_);
v___y_432_ = v___x_453_;
goto v___jp_431_;
}
}
else
{
size_t v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_usize_of_nat(v___x_448_);
v___x_455_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__2(v_entries_445_, v___x_442_, v___x_454_, v___x_450_);
lean_dec(v_entries_445_);
v___y_432_ = v___x_455_;
goto v___jp_431_;
}
}
}
v___jp_413_:
{
uint8_t v___x_415_; uint8_t v___x_416_; uint8_t v___x_417_; 
v___x_415_ = l_Std_Http_Protocol_H1_Message_Head_version(v_dir_411_, v_message_412_);
v___x_416_ = 1;
v___x_417_ = l_Std_Http_instBEqVersion_beq(v___x_415_, v___x_416_);
if (v___x_417_ == 0)
{
lean_object* v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; 
v___x_418_ = lean_unsigned_to_nat(0u);
v___x_419_ = lean_array_get_size(v_val_414_);
v___x_420_ = lean_nat_dec_lt(v___x_418_, v___x_419_);
if (v___x_420_ == 0)
{
lean_dec_ref(v_val_414_);
return v___x_420_;
}
else
{
if (v___x_420_ == 0)
{
lean_dec_ref(v_val_414_);
return v___x_420_;
}
else
{
size_t v___x_421_; size_t v___x_422_; uint8_t v___x_423_; 
v___x_421_ = ((size_t)0ULL);
v___x_422_ = lean_usize_of_nat(v___x_419_);
v___x_423_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__0(v_val_414_, v___x_421_, v___x_422_);
lean_dec_ref(v_val_414_);
return v___x_423_;
}
}
}
else
{
lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = lean_array_get_size(v_val_414_);
v___x_426_ = lean_nat_dec_lt(v___x_424_, v___x_425_);
if (v___x_426_ == 0)
{
lean_dec_ref(v_val_414_);
return v___x_417_;
}
else
{
if (v___x_426_ == 0)
{
lean_dec_ref(v_val_414_);
return v___x_417_;
}
else
{
size_t v___x_427_; size_t v___x_428_; uint8_t v___x_429_; 
v___x_427_ = ((size_t)0ULL);
v___x_428_ = lean_usize_of_nat(v___x_425_);
v___x_429_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Protocol_H1_Message_Head_shouldKeepAlive_spec__1(v_val_414_, v___x_427_, v___x_428_);
lean_dec_ref(v_val_414_);
if (v___x_429_ == 0)
{
return v___x_417_;
}
else
{
uint8_t v___x_430_; 
v___x_430_ = 0;
return v___x_430_;
}
}
}
}
}
v___jp_431_:
{
if (lean_obj_tag(v___y_432_) == 0)
{
uint8_t v___x_433_; 
v___x_433_ = 0;
return v___x_433_;
}
else
{
lean_object* v_val_434_; 
v_val_434_ = lean_ctor_get(v___y_432_, 0);
lean_inc(v_val_434_);
lean_dec_ref_known(v___y_432_, 1);
v_val_414_ = v_val_434_;
goto v___jp_413_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive___boxed(lean_object* v_dir_456_, lean_object* v_message_457_){
_start:
{
uint8_t v_dir_boxed_458_; uint8_t v_res_459_; lean_object* v_r_460_; 
v_dir_boxed_458_ = lean_unbox(v_dir_456_);
v_res_459_ = l_Std_Http_Protocol_H1_Message_Head_shouldKeepAlive(v_dir_boxed_458_, v_message_457_);
lean_dec(v_message_457_);
v_r_460_ = lean_box(v_res_459_);
return v_r_460_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__1___redArg(lean_object* v_x_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = l_Std_Http_Request_instReprHead_repr___redArg(v_x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__1(lean_object* v_x_463_, lean_object* v_prec_464_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l_Std_Http_Request_instReprHead_repr___redArg(v_x_463_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__1___boxed(lean_object* v_x_466_, lean_object* v_prec_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Std_Http_Protocol_H1_instReprHead___aux__1(v_x_466_, v_prec_467_);
lean_dec(v_prec_467_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__3___redArg(lean_object* v_x_469_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_Std_Http_Response_instReprHead_repr___redArg(v_x_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__3(lean_object* v_x_471_, lean_object* v_prec_472_){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = l_Std_Http_Response_instReprHead_repr___redArg(v_x_471_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___aux__3___boxed(lean_object* v_x_474_, lean_object* v_prec_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Std_Http_Protocol_H1_instReprHead___aux__3(v_x_474_, v_prec_475_);
lean_dec(v_prec_475_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead(uint8_t v_dir_479_){
_start:
{
if (v_dir_479_ == 0)
{
lean_object* v___x_480_; 
v___x_480_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprHead___closed__0));
return v___x_480_;
}
else
{
lean_object* v___x_481_; 
v___x_481_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprHead___closed__1));
return v___x_481_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprHead___boxed(lean_object* v_dir_482_){
_start:
{
uint8_t v_dir_boxed_483_; lean_object* v_res_484_; 
v_dir_boxed_483_ = lean_unbox(v_dir_482_);
v_res_484_ = l_Std_Http_Protocol_H1_instReprHead(v_dir_boxed_483_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__0(lean_object* v_x_485_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = lean_string_from_utf8_unchecked(v_x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__1(lean_object* v___x_487_, lean_object* v___x_488_, lean_object* v___x_489_, lean_object* v_name_490_, lean_object* v___x_491_, uint32_t v___x_492_, lean_object* v___x_493_, lean_object* v_it_494_, lean_object* v_acc_495_, lean_object* v_hP_496_, lean_object* v_recur_497_){
_start:
{
lean_object* v_it_499_; lean_object* v_out_500_; lean_object* v___y_516_; uint32_t v___y_517_; lean_object* v___y_518_; uint8_t v___y_519_; lean_object* v_it_525_; lean_object* v_startInclusive_526_; lean_object* v_endExclusive_527_; 
if (lean_obj_tag(v_it_494_) == 0)
{
lean_object* v_currPos_534_; lean_object* v_searcher_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_557_; 
v_currPos_534_ = lean_ctor_get(v_it_494_, 0);
v_searcher_535_ = lean_ctor_get(v_it_494_, 1);
v_isSharedCheck_557_ = !lean_is_exclusive(v_it_494_);
if (v_isSharedCheck_557_ == 0)
{
v___x_537_ = v_it_494_;
v_isShared_538_ = v_isSharedCheck_557_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_searcher_535_);
lean_inc(v_currPos_534_);
lean_dec(v_it_494_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_557_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
uint8_t v_decide_539_; 
v_decide_539_ = lean_nat_dec_eq(v_searcher_535_, v___x_491_);
if (v_decide_539_ == 0)
{
uint32_t v___x_540_; uint8_t v___x_541_; 
lean_dec(v___x_491_);
v___x_540_ = lean_string_utf8_get_fast(v_name_490_, v_searcher_535_);
v___x_541_ = lean_uint32_dec_eq(v___x_540_, v___x_492_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; lean_object* v___x_544_; 
v___x_542_ = lean_string_utf8_next_fast(v_name_490_, v_searcher_535_);
lean_dec(v_searcher_535_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 1, v___x_542_);
v___x_544_ = v___x_537_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_currPos_534_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v___x_542_);
v___x_544_ = v_reuseFailAlloc_546_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
lean_object* v___x_545_; 
v___x_545_ = lean_apply_4(v_recur_497_, v___x_544_, v_acc_495_, lean_box(0), lean_box(0));
return v___x_545_;
}
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v_slice_550_; lean_object* v_nextIt_552_; 
v___x_547_ = lean_string_utf8_next_fast(v_name_490_, v_searcher_535_);
v___x_548_ = lean_nat_sub(v___x_547_, v_searcher_535_);
v___x_549_ = lean_nat_add(v_searcher_535_, v___x_548_);
lean_dec(v___x_548_);
v_slice_550_ = l_String_Slice_subslice_x21(v___x_493_, v_currPos_534_, v_searcher_535_);
lean_inc(v___x_549_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 1, v___x_549_);
lean_ctor_set(v___x_537_, 0, v___x_549_);
v_nextIt_552_ = v___x_537_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v___x_549_);
v_nextIt_552_ = v_reuseFailAlloc_555_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
lean_object* v_startInclusive_553_; lean_object* v_endExclusive_554_; 
v_startInclusive_553_ = lean_ctor_get(v_slice_550_, 0);
lean_inc(v_startInclusive_553_);
v_endExclusive_554_ = lean_ctor_get(v_slice_550_, 1);
lean_inc(v_endExclusive_554_);
lean_dec_ref(v_slice_550_);
v_it_525_ = v_nextIt_552_;
v_startInclusive_526_ = v_startInclusive_553_;
v_endExclusive_527_ = v_endExclusive_554_;
goto v___jp_524_;
}
}
}
else
{
lean_object* v___x_556_; 
lean_del_object(v___x_537_);
lean_dec(v_searcher_535_);
v___x_556_ = lean_box(1);
v_it_525_ = v___x_556_;
v_startInclusive_526_ = v_currPos_534_;
v_endExclusive_527_ = v___x_491_;
goto v___jp_524_;
}
}
}
else
{
lean_dec_ref(v_recur_497_);
lean_dec(v___x_491_);
return v_acc_495_;
}
v___jp_498_:
{
if (lean_obj_tag(v_acc_495_) == 0)
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_501_, 0, v_out_500_);
v___x_502_ = lean_apply_4(v_recur_497_, v_it_499_, v___x_501_, lean_box(0), lean_box(0));
return v___x_502_;
}
else
{
lean_object* v_val_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_514_; 
v_val_503_ = lean_ctor_get(v_acc_495_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v_acc_495_);
if (v_isSharedCheck_514_ == 0)
{
v___x_505_ = v_acc_495_;
v_isShared_506_ = v_isSharedCheck_514_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_val_503_);
lean_dec(v_acc_495_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_514_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_511_; 
v___x_507_ = lean_string_utf8_extract_fast(v___x_487_, v___x_488_, v___x_489_);
v___x_508_ = lean_string_append(v_val_503_, v___x_507_);
lean_dec_ref(v___x_507_);
v___x_509_ = lean_string_append(v___x_508_, v_out_500_);
lean_dec_ref(v_out_500_);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v___x_509_);
v___x_511_ = v___x_505_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_509_);
v___x_511_ = v_reuseFailAlloc_513_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
lean_object* v___x_512_; 
v___x_512_ = lean_apply_4(v_recur_497_, v_it_499_, v___x_511_, lean_box(0), lean_box(0));
return v___x_512_;
}
}
}
}
v___jp_515_:
{
if (v___y_519_ == 0)
{
lean_object* v___x_520_; 
v___x_520_ = lean_string_utf8_set(v___y_516_, v___x_488_, v___y_517_);
v_it_499_ = v___y_518_;
v_out_500_ = v___x_520_;
goto v___jp_498_;
}
else
{
uint32_t v___x_521_; uint32_t v___x_522_; lean_object* v___x_523_; 
v___x_521_ = 4294967264;
v___x_522_ = lean_uint32_add(v___y_517_, v___x_521_);
v___x_523_ = lean_string_utf8_set(v___y_516_, v___x_488_, v___x_522_);
v_it_499_ = v___y_518_;
v_out_500_ = v___x_523_;
goto v___jp_498_;
}
}
v___jp_524_:
{
lean_object* v___x_528_; uint32_t v___x_529_; uint32_t v___x_530_; uint8_t v___x_531_; 
v___x_528_ = lean_string_utf8_extract_fast(v_name_490_, v_startInclusive_526_, v_endExclusive_527_);
lean_dec(v_endExclusive_527_);
lean_dec(v_startInclusive_526_);
v___x_529_ = lean_string_utf8_get(v___x_528_, v___x_488_);
v___x_530_ = 97;
v___x_531_ = lean_uint32_dec_le(v___x_530_, v___x_529_);
if (v___x_531_ == 0)
{
v___y_516_ = v___x_528_;
v___y_517_ = v___x_529_;
v___y_518_ = v_it_525_;
v___y_519_ = v___x_531_;
goto v___jp_515_;
}
else
{
uint32_t v___x_532_; uint8_t v___x_533_; 
v___x_532_ = 122;
v___x_533_ = lean_uint32_dec_le(v___x_529_, v___x_532_);
v___y_516_ = v___x_528_;
v___y_517_ = v___x_529_;
v___y_518_ = v_it_525_;
v___y_519_ = v___x_533_;
goto v___jp_515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__1___boxed(lean_object* v___x_558_, lean_object* v___x_559_, lean_object* v___x_560_, lean_object* v_name_561_, lean_object* v___x_562_, lean_object* v___x_563_, lean_object* v___x_564_, lean_object* v_it_565_, lean_object* v_acc_566_, lean_object* v_hP_567_, lean_object* v_recur_568_){
_start:
{
uint32_t v___x_2774__boxed_569_; lean_object* v_res_570_; 
v___x_2774__boxed_569_ = lean_unbox_uint32(v___x_563_);
lean_dec(v___x_563_);
v_res_570_ = l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__1(v___x_558_, v___x_559_, v___x_560_, v_name_561_, v___x_562_, v___x_2774__boxed_569_, v___x_564_, v_it_565_, v_acc_566_, v_hP_567_, v_recur_568_);
lean_dec_ref(v___x_564_);
lean_dec_ref(v_name_561_);
lean_dec(v___x_560_);
lean_dec(v___x_559_);
lean_dec_ref(v___x_558_);
return v_res_570_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__4(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__3));
v___x_576_ = lean_string_utf8_byte_size(v___x_575_);
return v___x_576_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___boxed__const__1(void){
_start:
{
uint32_t v___x_578_; lean_object* v___x_579_; 
v___x_578_ = 45;
v___x_579_ = lean_box_uint32(v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2(lean_object* v_buf_580_, lean_object* v_name_581_, lean_object* v_value_582_){
_start:
{
lean_object* v___y_584_; lean_object* v___f_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v_it_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___f_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___f_603_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__2));
v___x_604_ = lean_unsigned_to_nat(0u);
v___x_605_ = lean_string_utf8_byte_size(v_name_581_);
lean_inc_ref(v_name_581_);
v___x_606_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_606_, 0, v_name_581_);
lean_ctor_set(v___x_606_, 1, v___x_604_);
lean_ctor_set(v___x_606_, 2, v___x_605_);
lean_inc_ref(v___x_606_);
v_it_607_ = l_String_Slice_splitToSubslice___redArg(v___x_606_, v___f_603_);
v___x_608_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__3));
v___x_609_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__4, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__4_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__4);
v___x_610_ = l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___boxed__const__1;
v___f_611_ = lean_alloc_closure((void*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__1___boxed), 11, 7);
lean_closure_set(v___f_611_, 0, v___x_608_);
lean_closure_set(v___f_611_, 1, v___x_604_);
lean_closure_set(v___f_611_, 2, v___x_609_);
lean_closure_set(v___f_611_, 3, v_name_581_);
lean_closure_set(v___f_611_, 4, v___x_605_);
lean_closure_set(v___f_611_, 5, v___x_610_);
lean_closure_set(v___f_611_, 6, v___x_606_);
v___x_612_ = lean_box(0);
v___x_613_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_611_, v_it_607_, v___x_612_, lean_box(0));
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v___x_614_; 
v___x_614_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__5));
v___y_584_ = v___x_614_;
goto v___jp_583_;
}
else
{
lean_object* v_val_615_; 
v_val_615_ = lean_ctor_get(v___x_613_, 0);
lean_inc(v_val_615_);
lean_dec_ref_known(v___x_613_, 1);
v___y_584_ = v_val_615_;
goto v___jp_583_;
}
v___jp_583_:
{
lean_object* v_data_585_; lean_object* v_size_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_602_; 
v_data_585_ = lean_ctor_get(v_buf_580_, 0);
v_size_586_ = lean_ctor_get(v_buf_580_, 1);
v_isSharedCheck_602_ = !lean_is_exclusive(v_buf_580_);
if (v_isSharedCheck_602_ == 0)
{
v___x_588_ = v_buf_580_;
v_isShared_589_ = v_isSharedCheck_602_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_size_586_);
lean_inc(v_data_585_);
lean_dec(v_buf_580_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_602_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_600_; 
v___x_590_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__0));
v___x_591_ = lean_string_append(v___y_584_, v___x_590_);
v___x_592_ = lean_string_append(v___x_591_, v_value_582_);
v___x_593_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__1));
v___x_594_ = lean_string_append(v___x_592_, v___x_593_);
v___x_595_ = lean_string_to_utf8(v___x_594_);
lean_dec_ref(v___x_594_);
lean_inc_ref(v___x_595_);
v___x_596_ = lean_array_push(v_data_585_, v___x_595_);
v___x_597_ = lean_byte_array_size(v___x_595_);
lean_dec_ref(v___x_595_);
v___x_598_ = lean_nat_add(v_size_586_, v___x_597_);
lean_dec(v_size_586_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 1, v___x_598_);
lean_ctor_set(v___x_588_, 0, v___x_596_);
v___x_600_ = v___x_588_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_596_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v___x_598_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___boxed(lean_object* v_buf_616_, lean_object* v_name_617_, lean_object* v_value_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2(v_buf_616_, v_name_617_, v_value_618_);
lean_dec_ref(v_value_618_);
return v_res_619_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__1));
v___x_623_ = lean_string_to_utf8(v___x_622_);
return v___x_623_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__3(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2);
v___x_625_ = lean_byte_array_size(v___x_624_);
return v___x_625_;
}
}
static uint8_t _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__23(void){
_start:
{
uint32_t v___x_654_; uint8_t v___x_655_; 
v___x_654_ = 32;
v___x_655_ = lean_uint32_to_uint8(v___x_654_);
return v___x_655_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24(void){
_start:
{
uint8_t v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_656_ = lean_uint8_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__23, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__23_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__23);
v___x_657_ = lean_unsigned_to_nat(1u);
v___x_658_ = lean_mk_empty_array_with_capacity(v___x_657_);
v___x_659_ = lean_box(v___x_656_);
v___x_660_ = lean_array_push(v___x_658_, v___x_659_);
v___x_661_ = lean_byte_array_mk(v___x_660_);
return v___x_661_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__25(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24);
v___x_663_ = lean_byte_array_size(v___x_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1(lean_object* v_buffer_707_, lean_object* v_req_708_){
_start:
{
uint8_t v_method_709_; uint8_t v_version_710_; lean_object* v_uri_711_; lean_object* v_headers_712_; lean_object* v___f_713_; lean_object* v___f_714_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v_port_772_; lean_object* v___y_773_; lean_object* v___y_782_; lean_object* v___y_783_; lean_object* v___y_784_; lean_object* v___y_785_; lean_object* v_host_786_; lean_object* v_port_787_; lean_object* v___y_788_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v___y_802_; lean_object* v___y_803_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___y_807_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___y_848_; lean_object* v___y_849_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v___y_870_; lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v_port_886_; lean_object* v___y_887_; lean_object* v___y_888_; lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v_host_905_; lean_object* v_port_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_909_; lean_object* v___y_910_; lean_object* v___y_921_; 
v_method_709_ = lean_ctor_get_uint8(v_req_708_, sizeof(void*)*2);
v_version_710_ = lean_ctor_get_uint8(v_req_708_, sizeof(void*)*2 + 1);
v_uri_711_ = lean_ctor_get(v_req_708_, 0);
lean_inc(v_uri_711_);
v_headers_712_ = lean_ctor_get(v_req_708_, 1);
lean_inc_ref(v_headers_712_);
lean_dec_ref(v_req_708_);
v___f_713_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__0));
v___f_714_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__1));
switch(v_method_709_)
{
case 0:
{
lean_object* v___x_1003_; 
v___x_1003_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__29));
v___y_921_ = v___x_1003_;
goto v___jp_920_;
}
case 1:
{
lean_object* v___x_1004_; 
v___x_1004_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__30));
v___y_921_ = v___x_1004_;
goto v___jp_920_;
}
case 2:
{
lean_object* v___x_1005_; 
v___x_1005_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__31));
v___y_921_ = v___x_1005_;
goto v___jp_920_;
}
case 3:
{
lean_object* v___x_1006_; 
v___x_1006_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__32));
v___y_921_ = v___x_1006_;
goto v___jp_920_;
}
case 4:
{
lean_object* v___x_1007_; 
v___x_1007_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__33));
v___y_921_ = v___x_1007_;
goto v___jp_920_;
}
case 5:
{
lean_object* v___x_1008_; 
v___x_1008_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__34));
v___y_921_ = v___x_1008_;
goto v___jp_920_;
}
case 6:
{
lean_object* v___x_1009_; 
v___x_1009_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__35));
v___y_921_ = v___x_1009_;
goto v___jp_920_;
}
case 7:
{
lean_object* v___x_1010_; 
v___x_1010_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__36));
v___y_921_ = v___x_1010_;
goto v___jp_920_;
}
case 8:
{
lean_object* v___x_1011_; 
v___x_1011_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__37));
v___y_921_ = v___x_1011_;
goto v___jp_920_;
}
case 9:
{
lean_object* v___x_1012_; 
v___x_1012_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__38));
v___y_921_ = v___x_1012_;
goto v___jp_920_;
}
case 10:
{
lean_object* v___x_1013_; 
v___x_1013_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__39));
v___y_921_ = v___x_1013_;
goto v___jp_920_;
}
case 11:
{
lean_object* v___x_1014_; 
v___x_1014_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__40));
v___y_921_ = v___x_1014_;
goto v___jp_920_;
}
case 12:
{
lean_object* v___x_1015_; 
v___x_1015_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__41));
v___y_921_ = v___x_1015_;
goto v___jp_920_;
}
case 13:
{
lean_object* v___x_1016_; 
v___x_1016_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__42));
v___y_921_ = v___x_1016_;
goto v___jp_920_;
}
case 14:
{
lean_object* v___x_1017_; 
v___x_1017_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__43));
v___y_921_ = v___x_1017_;
goto v___jp_920_;
}
case 15:
{
lean_object* v___x_1018_; 
v___x_1018_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__44));
v___y_921_ = v___x_1018_;
goto v___jp_920_;
}
case 16:
{
lean_object* v___x_1019_; 
v___x_1019_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__45));
v___y_921_ = v___x_1019_;
goto v___jp_920_;
}
case 17:
{
lean_object* v___x_1020_; 
v___x_1020_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__46));
v___y_921_ = v___x_1020_;
goto v___jp_920_;
}
case 18:
{
lean_object* v___x_1021_; 
v___x_1021_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__47));
v___y_921_ = v___x_1021_;
goto v___jp_920_;
}
case 19:
{
lean_object* v___x_1022_; 
v___x_1022_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__48));
v___y_921_ = v___x_1022_;
goto v___jp_920_;
}
case 20:
{
lean_object* v___x_1023_; 
v___x_1023_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__49));
v___y_921_ = v___x_1023_;
goto v___jp_920_;
}
case 21:
{
lean_object* v___x_1024_; 
v___x_1024_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__50));
v___y_921_ = v___x_1024_;
goto v___jp_920_;
}
case 22:
{
lean_object* v___x_1025_; 
v___x_1025_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__51));
v___y_921_ = v___x_1025_;
goto v___jp_920_;
}
case 23:
{
lean_object* v___x_1026_; 
v___x_1026_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__52));
v___y_921_ = v___x_1026_;
goto v___jp_920_;
}
case 24:
{
lean_object* v___x_1027_; 
v___x_1027_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__53));
v___y_921_ = v___x_1027_;
goto v___jp_920_;
}
case 25:
{
lean_object* v___x_1028_; 
v___x_1028_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__54));
v___y_921_ = v___x_1028_;
goto v___jp_920_;
}
case 26:
{
lean_object* v___x_1029_; 
v___x_1029_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__55));
v___y_921_ = v___x_1029_;
goto v___jp_920_;
}
case 27:
{
lean_object* v___x_1030_; 
v___x_1030_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__56));
v___y_921_ = v___x_1030_;
goto v___jp_920_;
}
case 28:
{
lean_object* v___x_1031_; 
v___x_1031_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__57));
v___y_921_ = v___x_1031_;
goto v___jp_920_;
}
case 29:
{
lean_object* v___x_1032_; 
v___x_1032_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__58));
v___y_921_ = v___x_1032_;
goto v___jp_920_;
}
case 30:
{
lean_object* v___x_1033_; 
v___x_1033_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__59));
v___y_921_ = v___x_1033_;
goto v___jp_920_;
}
case 31:
{
lean_object* v___x_1034_; 
v___x_1034_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__60));
v___y_921_ = v___x_1034_;
goto v___jp_920_;
}
case 32:
{
lean_object* v___x_1035_; 
v___x_1035_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__61));
v___y_921_ = v___x_1035_;
goto v___jp_920_;
}
case 33:
{
lean_object* v___x_1036_; 
v___x_1036_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__62));
v___y_921_ = v___x_1036_;
goto v___jp_920_;
}
case 34:
{
lean_object* v___x_1037_; 
v___x_1037_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__63));
v___y_921_ = v___x_1037_;
goto v___jp_920_;
}
case 35:
{
lean_object* v___x_1038_; 
v___x_1038_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__64));
v___y_921_ = v___x_1038_;
goto v___jp_920_;
}
case 36:
{
lean_object* v___x_1039_; 
v___x_1039_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__65));
v___y_921_ = v___x_1039_;
goto v___jp_920_;
}
case 37:
{
lean_object* v___x_1040_; 
v___x_1040_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__66));
v___y_921_ = v___x_1040_;
goto v___jp_920_;
}
case 38:
{
lean_object* v___x_1041_; 
v___x_1041_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__67));
v___y_921_ = v___x_1041_;
goto v___jp_920_;
}
default: 
{
lean_object* v___x_1042_; 
v___x_1042_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__68));
v___y_921_ = v___x_1042_;
goto v___jp_920_;
}
}
v___jp_715_:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v_buffer_727_; lean_object* v_buffer_728_; lean_object* v_data_729_; lean_object* v_size_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_739_; 
v___x_719_ = lean_string_to_utf8(v___y_718_);
lean_inc_ref(v___x_719_);
v___x_720_ = lean_array_push(v___y_717_, v___x_719_);
v___x_721_ = lean_byte_array_size(v___x_719_);
lean_dec_ref(v___x_719_);
v___x_722_ = lean_nat_add(v___y_716_, v___x_721_);
lean_dec(v___y_716_);
v___x_723_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2);
v___x_724_ = lean_array_push(v___x_720_, v___x_723_);
v___x_725_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__3, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__3_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__3);
v___x_726_ = lean_nat_add(v___x_722_, v___x_725_);
lean_dec(v___x_722_);
v_buffer_727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_buffer_727_, 0, v___x_724_);
lean_ctor_set(v_buffer_727_, 1, v___x_726_);
v_buffer_728_ = l_Std_Http_Headers_fold___redArg(v_headers_712_, v_buffer_727_, v___f_714_);
lean_dec_ref(v_headers_712_);
v_data_729_ = lean_ctor_get(v_buffer_728_, 0);
v_size_730_ = lean_ctor_get(v_buffer_728_, 1);
v_isSharedCheck_739_ = !lean_is_exclusive(v_buffer_728_);
if (v_isSharedCheck_739_ == 0)
{
v___x_732_ = v_buffer_728_;
v_isShared_733_ = v_isSharedCheck_739_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_size_730_);
lean_inc(v_data_729_);
lean_dec(v_buffer_728_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_739_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_734_ = lean_array_push(v_data_729_, v___x_723_);
v___x_735_ = lean_nat_add(v_size_730_, v___x_725_);
lean_dec(v_size_730_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v___x_735_);
lean_ctor_set(v___x_732_, 0, v___x_734_);
v___x_737_ = v___x_732_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_734_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v___x_735_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
v___jp_740_:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_746_ = lean_string_to_utf8(v___y_745_);
lean_dec_ref(v___y_745_);
lean_inc_ref(v___x_746_);
v___x_747_ = lean_array_push(v___y_743_, v___x_746_);
v___x_748_ = lean_byte_array_size(v___x_746_);
lean_dec_ref(v___x_746_);
v___x_749_ = lean_nat_add(v___y_741_, v___x_748_);
lean_dec(v___y_741_);
v___x_750_ = lean_array_push(v___x_747_, v___y_744_);
v___x_751_ = lean_nat_add(v___x_749_, v___y_742_);
lean_dec(v___x_749_);
switch(v_version_710_)
{
case 0:
{
lean_object* v___x_752_; 
v___x_752_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__4));
v___y_716_ = v___x_751_;
v___y_717_ = v___x_750_;
v___y_718_ = v___x_752_;
goto v___jp_715_;
}
case 1:
{
lean_object* v___x_753_; 
v___x_753_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__5));
v___y_716_ = v___x_751_;
v___y_717_ = v___x_750_;
v___y_718_ = v___x_753_;
goto v___jp_715_;
}
case 2:
{
lean_object* v___x_754_; 
v___x_754_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__6));
v___y_716_ = v___x_751_;
v___y_717_ = v___x_750_;
v___y_718_ = v___x_754_;
goto v___jp_715_;
}
default: 
{
lean_object* v___x_755_; 
v___x_755_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__7));
v___y_716_ = v___x_751_;
v___y_717_ = v___x_750_;
v___y_718_ = v___x_755_;
goto v___jp_715_;
}
}
}
v___jp_756_:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = lean_string_append(v___y_757_, v___y_762_);
lean_dec_ref(v___y_762_);
v___x_765_ = lean_string_append(v___x_764_, v___y_763_);
lean_dec_ref(v___y_763_);
v___y_741_ = v___y_758_;
v___y_742_ = v___y_759_;
v___y_743_ = v___y_760_;
v___y_744_ = v___y_761_;
v___y_745_ = v___x_765_;
goto v___jp_740_;
}
v___jp_766_:
{
switch(lean_obj_tag(v_port_772_))
{
case 0:
{
lean_object* v___x_774_; 
v___x_774_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__5));
v___y_757_ = v___y_767_;
v___y_758_ = v___y_768_;
v___y_759_ = v___y_769_;
v___y_760_ = v___y_770_;
v___y_761_ = v___y_771_;
v___y_762_ = v___y_773_;
v___y_763_ = v___x_774_;
goto v___jp_756_;
}
case 1:
{
lean_object* v___x_775_; 
v___x_775_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__8));
v___y_757_ = v___y_767_;
v___y_758_ = v___y_768_;
v___y_759_ = v___y_769_;
v___y_760_ = v___y_770_;
v___y_761_ = v___y_771_;
v___y_762_ = v___y_773_;
v___y_763_ = v___x_775_;
goto v___jp_756_;
}
default: 
{
uint16_t v_port_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v_port_776_ = lean_ctor_get_uint16(v_port_772_, 0);
lean_dec_ref_known(v_port_772_, 0);
v___x_777_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__8));
v___x_778_ = lean_uint16_to_nat(v_port_776_);
v___x_779_ = l_Nat_reprFast(v___x_778_);
v___x_780_ = lean_string_append(v___x_777_, v___x_779_);
lean_dec_ref(v___x_779_);
v___y_757_ = v___y_767_;
v___y_758_ = v___y_768_;
v___y_759_ = v___y_769_;
v___y_760_ = v___y_770_;
v___y_761_ = v___y_771_;
v___y_762_ = v___y_773_;
v___y_763_ = v___x_780_;
goto v___jp_756_;
}
}
}
v___jp_781_:
{
switch(lean_obj_tag(v_host_786_))
{
case 0:
{
lean_object* v_name_789_; 
v_name_789_ = lean_ctor_get(v_host_786_, 0);
lean_inc_ref(v_name_789_);
lean_dec_ref_known(v_host_786_, 1);
v___y_767_ = v___y_788_;
v___y_768_ = v___y_782_;
v___y_769_ = v___y_783_;
v___y_770_ = v___y_784_;
v___y_771_ = v___y_785_;
v_port_772_ = v_port_787_;
v___y_773_ = v_name_789_;
goto v___jp_766_;
}
case 1:
{
lean_object* v_ipv4_790_; lean_object* v___x_791_; 
v_ipv4_790_ = lean_ctor_get(v_host_786_, 0);
lean_inc_ref(v_ipv4_790_);
lean_dec_ref_known(v_host_786_, 1);
v___x_791_ = lean_uv_ntop_v4(v_ipv4_790_);
lean_dec_ref(v_ipv4_790_);
v___y_767_ = v___y_788_;
v___y_768_ = v___y_782_;
v___y_769_ = v___y_783_;
v___y_770_ = v___y_784_;
v___y_771_ = v___y_785_;
v_port_772_ = v_port_787_;
v___y_773_ = v___x_791_;
goto v___jp_766_;
}
default: 
{
lean_object* v_ipv6_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v_ipv6_792_ = lean_ctor_get(v_host_786_, 0);
lean_inc_ref(v_ipv6_792_);
lean_dec_ref_known(v_host_786_, 1);
v___x_793_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__9));
v___x_794_ = lean_uv_ntop_v6(v_ipv6_792_);
lean_dec_ref(v_ipv6_792_);
v___x_795_ = lean_string_append(v___x_793_, v___x_794_);
lean_dec_ref(v___x_794_);
v___x_796_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__10));
v___x_797_ = lean_string_append(v___x_795_, v___x_796_);
v___y_767_ = v___y_788_;
v___y_768_ = v___y_782_;
v___y_769_ = v___y_783_;
v___y_770_ = v___y_784_;
v___y_771_ = v___y_785_;
v_port_772_ = v_port_787_;
v___y_773_ = v___x_797_;
goto v___jp_766_;
}
}
}
v___jp_798_:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_808_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__8));
v___x_809_ = lean_string_append(v___y_806_, v___x_808_);
v___x_810_ = lean_string_append(v___x_809_, v___y_799_);
lean_dec_ref(v___y_799_);
v___x_811_ = lean_string_append(v___x_810_, v___y_805_);
lean_dec_ref(v___y_805_);
v___x_812_ = lean_string_append(v___x_811_, v___y_802_);
lean_dec_ref(v___y_802_);
v___x_813_ = lean_string_append(v___x_812_, v___y_807_);
lean_dec_ref(v___y_807_);
v___y_741_ = v___y_800_;
v___y_742_ = v___y_801_;
v___y_743_ = v___y_803_;
v___y_744_ = v___y_804_;
v___y_745_ = v___x_813_;
goto v___jp_740_;
}
v___jp_814_:
{
lean_object* v_queryPart_824_; 
v_queryPart_824_ = l_Std_Http_URI_Query_formatOption(v___y_820_);
if (lean_obj_tag(v___y_821_) == 0)
{
lean_object* v___x_825_; 
v___x_825_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__5));
v___y_799_ = v___y_815_;
v___y_800_ = v___y_816_;
v___y_801_ = v___y_817_;
v___y_802_ = v_queryPart_824_;
v___y_803_ = v___y_818_;
v___y_804_ = v___y_819_;
v___y_805_ = v___y_823_;
v___y_806_ = v___y_822_;
v___y_807_ = v___x_825_;
goto v___jp_798_;
}
else
{
lean_object* v_val_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v_val_826_ = lean_ctor_get(v___y_821_, 0);
lean_inc(v_val_826_);
lean_dec_ref_known(v___y_821_, 1);
v___x_827_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__11));
v___x_828_ = l_Std_Http_URI_EncodedFragment_encode(v_val_826_);
lean_dec(v_val_826_);
v___x_829_ = lean_string_from_utf8_unchecked(v___x_828_);
v___x_830_ = lean_string_append(v___x_827_, v___x_829_);
lean_dec_ref(v___x_829_);
v___y_799_ = v___y_815_;
v___y_800_ = v___y_816_;
v___y_801_ = v___y_817_;
v___y_802_ = v_queryPart_824_;
v___y_803_ = v___y_818_;
v___y_804_ = v___y_819_;
v___y_805_ = v___y_823_;
v___y_806_ = v___y_822_;
v___y_807_ = v___x_830_;
goto v___jp_798_;
}
}
v___jp_831_:
{
lean_object* v_queryStr_838_; lean_object* v___x_839_; 
v_queryStr_838_ = l_Std_Http_URI_Query_formatOption(v___y_836_);
v___x_839_ = lean_string_append(v___y_837_, v_queryStr_838_);
lean_dec_ref(v_queryStr_838_);
v___y_741_ = v___y_832_;
v___y_742_ = v___y_833_;
v___y_743_ = v___y_834_;
v___y_744_ = v___y_835_;
v___y_745_ = v___x_839_;
goto v___jp_740_;
}
v___jp_840_:
{
lean_object* v_segments_850_; uint8_t v_absolute_851_; lean_object* v___x_852_; lean_object* v___x_853_; size_t v_sz_854_; size_t v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v_result_860_; 
v_segments_850_ = lean_ctor_get(v___y_845_, 0);
lean_inc_ref(v_segments_850_);
v_absolute_851_ = lean_ctor_get_uint8(v___y_845_, sizeof(void*)*1);
lean_dec_ref(v___y_845_);
v___x_852_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__12));
v___x_853_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__22));
v_sz_854_ = lean_array_size(v_segments_850_);
v___x_855_ = ((size_t)0ULL);
v___x_856_ = l_unsafeCast___redArg(v_segments_850_);
lean_dec_ref(v_segments_850_);
v___x_857_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_853_, v___f_713_, v_sz_854_, v___x_855_, v___x_856_);
v___x_858_ = l_unsafeCast___redArg(v___x_857_);
lean_dec(v___x_857_);
v___x_859_ = lean_array_to_list(v___x_858_);
v_result_860_ = l_String_intercalate(v___x_852_, v___x_859_);
if (v_absolute_851_ == 0)
{
v___y_815_ = v___y_849_;
v___y_816_ = v___y_841_;
v___y_817_ = v___y_842_;
v___y_818_ = v___y_843_;
v___y_819_ = v___y_844_;
v___y_820_ = v___y_846_;
v___y_821_ = v___y_848_;
v___y_822_ = v___y_847_;
v___y_823_ = v_result_860_;
goto v___jp_814_;
}
else
{
lean_object* v___x_861_; 
v___x_861_ = lean_string_append(v___x_852_, v_result_860_);
lean_dec_ref(v_result_860_);
v___y_815_ = v___y_849_;
v___y_816_ = v___y_841_;
v___y_817_ = v___y_842_;
v___y_818_ = v___y_843_;
v___y_819_ = v___y_844_;
v___y_820_ = v___y_846_;
v___y_821_ = v___y_848_;
v___y_822_ = v___y_847_;
v___y_823_ = v___x_861_;
goto v___jp_814_;
}
}
v___jp_862_:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_875_ = lean_string_append(v___y_870_, v___y_868_);
lean_dec_ref(v___y_868_);
v___x_876_ = lean_string_append(v___x_875_, v___y_874_);
lean_dec_ref(v___y_874_);
lean_inc_ref(v___y_863_);
v___x_877_ = lean_string_append(v___y_863_, v___x_876_);
lean_dec_ref(v___x_876_);
v___y_841_ = v___y_864_;
v___y_842_ = v___y_865_;
v___y_843_ = v___y_866_;
v___y_844_ = v___y_867_;
v___y_845_ = v___y_869_;
v___y_846_ = v___y_871_;
v___y_847_ = v___y_873_;
v___y_848_ = v___y_872_;
v___y_849_ = v___x_877_;
goto v___jp_840_;
}
v___jp_878_:
{
switch(lean_obj_tag(v_port_886_))
{
case 0:
{
lean_object* v___x_891_; 
v___x_891_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__5));
v___y_863_ = v___y_879_;
v___y_864_ = v___y_880_;
v___y_865_ = v___y_881_;
v___y_866_ = v___y_882_;
v___y_867_ = v___y_883_;
v___y_868_ = v___y_890_;
v___y_869_ = v___y_885_;
v___y_870_ = v___y_884_;
v___y_871_ = v___y_887_;
v___y_872_ = v___y_889_;
v___y_873_ = v___y_888_;
v___y_874_ = v___x_891_;
goto v___jp_862_;
}
case 1:
{
lean_object* v___x_892_; 
v___x_892_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__8));
v___y_863_ = v___y_879_;
v___y_864_ = v___y_880_;
v___y_865_ = v___y_881_;
v___y_866_ = v___y_882_;
v___y_867_ = v___y_883_;
v___y_868_ = v___y_890_;
v___y_869_ = v___y_885_;
v___y_870_ = v___y_884_;
v___y_871_ = v___y_887_;
v___y_872_ = v___y_889_;
v___y_873_ = v___y_888_;
v___y_874_ = v___x_892_;
goto v___jp_862_;
}
default: 
{
uint16_t v_port_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_port_893_ = lean_ctor_get_uint16(v_port_886_, 0);
lean_dec_ref_known(v_port_886_, 0);
v___x_894_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__8));
v___x_895_ = lean_uint16_to_nat(v_port_893_);
v___x_896_ = l_Nat_reprFast(v___x_895_);
v___x_897_ = lean_string_append(v___x_894_, v___x_896_);
lean_dec_ref(v___x_896_);
v___y_863_ = v___y_879_;
v___y_864_ = v___y_880_;
v___y_865_ = v___y_881_;
v___y_866_ = v___y_882_;
v___y_867_ = v___y_883_;
v___y_868_ = v___y_890_;
v___y_869_ = v___y_885_;
v___y_870_ = v___y_884_;
v___y_871_ = v___y_887_;
v___y_872_ = v___y_889_;
v___y_873_ = v___y_888_;
v___y_874_ = v___x_897_;
goto v___jp_862_;
}
}
}
v___jp_898_:
{
switch(lean_obj_tag(v_host_905_))
{
case 0:
{
lean_object* v_name_911_; 
v_name_911_ = lean_ctor_get(v_host_905_, 0);
lean_inc_ref(v_name_911_);
lean_dec_ref_known(v_host_905_, 1);
v___y_879_ = v___y_899_;
v___y_880_ = v___y_900_;
v___y_881_ = v___y_901_;
v___y_882_ = v___y_902_;
v___y_883_ = v___y_903_;
v___y_884_ = v___y_910_;
v___y_885_ = v___y_904_;
v_port_886_ = v_port_906_;
v___y_887_ = v___y_907_;
v___y_888_ = v___y_909_;
v___y_889_ = v___y_908_;
v___y_890_ = v_name_911_;
goto v___jp_878_;
}
case 1:
{
lean_object* v_ipv4_912_; lean_object* v___x_913_; 
v_ipv4_912_ = lean_ctor_get(v_host_905_, 0);
lean_inc_ref(v_ipv4_912_);
lean_dec_ref_known(v_host_905_, 1);
v___x_913_ = lean_uv_ntop_v4(v_ipv4_912_);
lean_dec_ref(v_ipv4_912_);
v___y_879_ = v___y_899_;
v___y_880_ = v___y_900_;
v___y_881_ = v___y_901_;
v___y_882_ = v___y_902_;
v___y_883_ = v___y_903_;
v___y_884_ = v___y_910_;
v___y_885_ = v___y_904_;
v_port_886_ = v_port_906_;
v___y_887_ = v___y_907_;
v___y_888_ = v___y_909_;
v___y_889_ = v___y_908_;
v___y_890_ = v___x_913_;
goto v___jp_878_;
}
default: 
{
lean_object* v_ipv6_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v_ipv6_914_ = lean_ctor_get(v_host_905_, 0);
lean_inc_ref(v_ipv6_914_);
lean_dec_ref_known(v_host_905_, 1);
v___x_915_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__9));
v___x_916_ = lean_uv_ntop_v6(v_ipv6_914_);
lean_dec_ref(v_ipv6_914_);
v___x_917_ = lean_string_append(v___x_915_, v___x_916_);
lean_dec_ref(v___x_916_);
v___x_918_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__10));
v___x_919_ = lean_string_append(v___x_917_, v___x_918_);
v___y_879_ = v___y_899_;
v___y_880_ = v___y_900_;
v___y_881_ = v___y_901_;
v___y_882_ = v___y_902_;
v___y_883_ = v___y_903_;
v___y_884_ = v___y_910_;
v___y_885_ = v___y_904_;
v_port_886_ = v_port_906_;
v___y_887_ = v___y_907_;
v___y_888_ = v___y_909_;
v___y_889_ = v___y_908_;
v___y_890_ = v___x_919_;
goto v___jp_878_;
}
}
}
v___jp_920_:
{
lean_object* v_data_922_; lean_object* v_size_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_data_922_ = lean_ctor_get(v_buffer_707_, 0);
lean_inc_ref(v_data_922_);
v_size_923_ = lean_ctor_get(v_buffer_707_, 1);
lean_inc(v_size_923_);
lean_dec_ref(v_buffer_707_);
v___x_924_ = lean_string_to_utf8(v___y_921_);
lean_inc_ref(v___x_924_);
v___x_925_ = lean_array_push(v_data_922_, v___x_924_);
v___x_926_ = lean_byte_array_size(v___x_924_);
lean_dec_ref(v___x_924_);
v___x_927_ = lean_nat_add(v_size_923_, v___x_926_);
lean_dec(v_size_923_);
v___x_928_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24);
v___x_929_ = lean_array_push(v___x_925_, v___x_928_);
v___x_930_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__25, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__25_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__25);
v___x_931_ = lean_nat_add(v___x_927_, v___x_930_);
lean_dec(v___x_927_);
switch(lean_obj_tag(v_uri_711_))
{
case 0:
{
lean_object* v_path_932_; lean_object* v_query_933_; lean_object* v_segments_934_; uint8_t v_absolute_935_; lean_object* v___x_936_; lean_object* v___x_937_; size_t v_sz_938_; size_t v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v_result_944_; 
v_path_932_ = lean_ctor_get(v_uri_711_, 0);
lean_inc_ref(v_path_932_);
v_query_933_ = lean_ctor_get(v_uri_711_, 1);
lean_inc(v_query_933_);
lean_dec_ref_known(v_uri_711_, 2);
v_segments_934_ = lean_ctor_get(v_path_932_, 0);
lean_inc_ref(v_segments_934_);
v_absolute_935_ = lean_ctor_get_uint8(v_path_932_, sizeof(void*)*1);
lean_dec_ref(v_path_932_);
v___x_936_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__12));
v___x_937_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__22));
v_sz_938_ = lean_array_size(v_segments_934_);
v___x_939_ = ((size_t)0ULL);
v___x_940_ = l_unsafeCast___redArg(v_segments_934_);
lean_dec_ref(v_segments_934_);
v___x_941_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_937_, v___f_713_, v_sz_938_, v___x_939_, v___x_940_);
v___x_942_ = l_unsafeCast___redArg(v___x_941_);
lean_dec(v___x_941_);
v___x_943_ = lean_array_to_list(v___x_942_);
v_result_944_ = l_String_intercalate(v___x_936_, v___x_943_);
if (v_absolute_935_ == 0)
{
v___y_832_ = v___x_931_;
v___y_833_ = v___x_930_;
v___y_834_ = v___x_929_;
v___y_835_ = v___x_928_;
v___y_836_ = v_query_933_;
v___y_837_ = v_result_944_;
goto v___jp_831_;
}
else
{
lean_object* v___x_945_; 
v___x_945_ = lean_string_append(v___x_936_, v_result_944_);
lean_dec_ref(v_result_944_);
v___y_832_ = v___x_931_;
v___y_833_ = v___x_930_;
v___y_834_ = v___x_929_;
v___y_835_ = v___x_928_;
v___y_836_ = v_query_933_;
v___y_837_ = v___x_945_;
goto v___jp_831_;
}
}
case 1:
{
lean_object* v_uri_946_; lean_object* v_authority_947_; 
v_uri_946_ = lean_ctor_get(v_uri_711_, 0);
lean_inc_ref(v_uri_946_);
lean_dec_ref_known(v_uri_711_, 1);
v_authority_947_ = lean_ctor_get(v_uri_946_, 1);
if (lean_obj_tag(v_authority_947_) == 0)
{
lean_object* v_scheme_948_; lean_object* v_path_949_; lean_object* v_query_950_; lean_object* v_fragment_951_; lean_object* v___x_952_; 
v_scheme_948_ = lean_ctor_get(v_uri_946_, 0);
lean_inc_ref(v_scheme_948_);
v_path_949_ = lean_ctor_get(v_uri_946_, 2);
lean_inc_ref(v_path_949_);
v_query_950_ = lean_ctor_get(v_uri_946_, 3);
lean_inc(v_query_950_);
v_fragment_951_ = lean_ctor_get(v_uri_946_, 4);
lean_inc(v_fragment_951_);
lean_dec_ref(v_uri_946_);
v___x_952_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__5));
v___y_841_ = v___x_931_;
v___y_842_ = v___x_930_;
v___y_843_ = v___x_929_;
v___y_844_ = v___x_928_;
v___y_845_ = v_path_949_;
v___y_846_ = v_query_950_;
v___y_847_ = v_scheme_948_;
v___y_848_ = v_fragment_951_;
v___y_849_ = v___x_952_;
goto v___jp_840_;
}
else
{
lean_object* v_val_953_; lean_object* v_scheme_954_; lean_object* v_path_955_; lean_object* v_query_956_; lean_object* v_fragment_957_; lean_object* v_userInfo_958_; lean_object* v_host_959_; lean_object* v_port_960_; lean_object* v___x_961_; 
v_val_953_ = lean_ctor_get(v_authority_947_, 0);
lean_inc(v_val_953_);
v_scheme_954_ = lean_ctor_get(v_uri_946_, 0);
lean_inc_ref(v_scheme_954_);
v_path_955_ = lean_ctor_get(v_uri_946_, 2);
lean_inc_ref(v_path_955_);
v_query_956_ = lean_ctor_get(v_uri_946_, 3);
lean_inc(v_query_956_);
v_fragment_957_ = lean_ctor_get(v_uri_946_, 4);
lean_inc(v_fragment_957_);
lean_dec_ref(v_uri_946_);
v_userInfo_958_ = lean_ctor_get(v_val_953_, 0);
lean_inc(v_userInfo_958_);
v_host_959_ = lean_ctor_get(v_val_953_, 1);
lean_inc_ref(v_host_959_);
v_port_960_ = lean_ctor_get(v_val_953_, 2);
lean_inc(v_port_960_);
lean_dec(v_val_953_);
v___x_961_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__26));
if (lean_obj_tag(v_userInfo_958_) == 0)
{
lean_object* v___x_962_; 
v___x_962_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__5));
v___y_899_ = v___x_961_;
v___y_900_ = v___x_931_;
v___y_901_ = v___x_930_;
v___y_902_ = v___x_929_;
v___y_903_ = v___x_928_;
v___y_904_ = v_path_955_;
v_host_905_ = v_host_959_;
v_port_906_ = v_port_960_;
v___y_907_ = v_query_956_;
v___y_908_ = v_fragment_957_;
v___y_909_ = v_scheme_954_;
v___y_910_ = v___x_962_;
goto v___jp_898_;
}
else
{
lean_object* v_val_963_; lean_object* v_password_964_; 
v_val_963_ = lean_ctor_get(v_userInfo_958_, 0);
lean_inc(v_val_963_);
lean_dec_ref_known(v_userInfo_958_, 1);
v_password_964_ = lean_ctor_get(v_val_963_, 1);
if (lean_obj_tag(v_password_964_) == 0)
{
lean_object* v_username_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v_username_965_ = lean_ctor_get(v_val_963_, 0);
lean_inc_ref(v_username_965_);
lean_dec(v_val_963_);
v___x_966_ = lean_string_from_utf8_unchecked(v_username_965_);
v___x_967_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__27));
v___x_968_ = lean_string_append(v___x_966_, v___x_967_);
v___y_899_ = v___x_961_;
v___y_900_ = v___x_931_;
v___y_901_ = v___x_930_;
v___y_902_ = v___x_929_;
v___y_903_ = v___x_928_;
v___y_904_ = v_path_955_;
v_host_905_ = v_host_959_;
v_port_906_ = v_port_960_;
v___y_907_ = v_query_956_;
v___y_908_ = v_fragment_957_;
v___y_909_ = v_scheme_954_;
v___y_910_ = v___x_968_;
goto v___jp_898_;
}
else
{
lean_object* v_username_969_; lean_object* v_val_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
lean_inc_ref(v_password_964_);
v_username_969_ = lean_ctor_get(v_val_963_, 0);
lean_inc_ref(v_username_969_);
lean_dec(v_val_963_);
v_val_970_ = lean_ctor_get(v_password_964_, 0);
lean_inc(v_val_970_);
lean_dec_ref_known(v_password_964_, 1);
v___x_971_ = lean_string_from_utf8_unchecked(v_username_969_);
v___x_972_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__8));
v___x_973_ = lean_string_append(v___x_971_, v___x_972_);
v___x_974_ = lean_string_from_utf8_unchecked(v_val_970_);
v___x_975_ = lean_string_append(v___x_973_, v___x_974_);
lean_dec_ref(v___x_974_);
v___x_976_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__27));
v___x_977_ = lean_string_append(v___x_975_, v___x_976_);
v___y_899_ = v___x_961_;
v___y_900_ = v___x_931_;
v___y_901_ = v___x_930_;
v___y_902_ = v___x_929_;
v___y_903_ = v___x_928_;
v___y_904_ = v_path_955_;
v_host_905_ = v_host_959_;
v_port_906_ = v_port_960_;
v___y_907_ = v_query_956_;
v___y_908_ = v_fragment_957_;
v___y_909_ = v_scheme_954_;
v___y_910_ = v___x_977_;
goto v___jp_898_;
}
}
}
}
case 2:
{
lean_object* v_authority_978_; lean_object* v_userInfo_979_; 
v_authority_978_ = lean_ctor_get(v_uri_711_, 0);
lean_inc_ref(v_authority_978_);
lean_dec_ref_known(v_uri_711_, 1);
v_userInfo_979_ = lean_ctor_get(v_authority_978_, 0);
if (lean_obj_tag(v_userInfo_979_) == 0)
{
lean_object* v_host_980_; lean_object* v_port_981_; lean_object* v___x_982_; 
v_host_980_ = lean_ctor_get(v_authority_978_, 1);
lean_inc_ref(v_host_980_);
v_port_981_ = lean_ctor_get(v_authority_978_, 2);
lean_inc(v_port_981_);
lean_dec_ref(v_authority_978_);
v___x_982_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__5));
v___y_782_ = v___x_931_;
v___y_783_ = v___x_930_;
v___y_784_ = v___x_929_;
v___y_785_ = v___x_928_;
v_host_786_ = v_host_980_;
v_port_787_ = v_port_981_;
v___y_788_ = v___x_982_;
goto v___jp_781_;
}
else
{
lean_object* v_val_983_; lean_object* v_password_984_; 
v_val_983_ = lean_ctor_get(v_userInfo_979_, 0);
lean_inc(v_val_983_);
v_password_984_ = lean_ctor_get(v_val_983_, 1);
if (lean_obj_tag(v_password_984_) == 0)
{
lean_object* v_host_985_; lean_object* v_port_986_; lean_object* v_username_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v_host_985_ = lean_ctor_get(v_authority_978_, 1);
lean_inc_ref(v_host_985_);
v_port_986_ = lean_ctor_get(v_authority_978_, 2);
lean_inc(v_port_986_);
lean_dec_ref(v_authority_978_);
v_username_987_ = lean_ctor_get(v_val_983_, 0);
lean_inc_ref(v_username_987_);
lean_dec(v_val_983_);
v___x_988_ = lean_string_from_utf8_unchecked(v_username_987_);
v___x_989_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__27));
v___x_990_ = lean_string_append(v___x_988_, v___x_989_);
v___y_782_ = v___x_931_;
v___y_783_ = v___x_930_;
v___y_784_ = v___x_929_;
v___y_785_ = v___x_928_;
v_host_786_ = v_host_985_;
v_port_787_ = v_port_986_;
v___y_788_ = v___x_990_;
goto v___jp_781_;
}
else
{
lean_object* v_host_991_; lean_object* v_port_992_; lean_object* v_username_993_; lean_object* v_val_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
lean_inc_ref(v_password_984_);
v_host_991_ = lean_ctor_get(v_authority_978_, 1);
lean_inc_ref(v_host_991_);
v_port_992_ = lean_ctor_get(v_authority_978_, 2);
lean_inc(v_port_992_);
lean_dec_ref(v_authority_978_);
v_username_993_ = lean_ctor_get(v_val_983_, 0);
lean_inc_ref(v_username_993_);
lean_dec(v_val_983_);
v_val_994_ = lean_ctor_get(v_password_984_, 0);
lean_inc(v_val_994_);
lean_dec_ref_known(v_password_984_, 1);
v___x_995_ = lean_string_from_utf8_unchecked(v_username_993_);
v___x_996_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__8));
v___x_997_ = lean_string_append(v___x_995_, v___x_996_);
v___x_998_ = lean_string_from_utf8_unchecked(v_val_994_);
v___x_999_ = lean_string_append(v___x_997_, v___x_998_);
lean_dec_ref(v___x_998_);
v___x_1000_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__27));
v___x_1001_ = lean_string_append(v___x_999_, v___x_1000_);
v___y_782_ = v___x_931_;
v___y_783_ = v___x_930_;
v___y_784_ = v___x_929_;
v___y_785_ = v___x_928_;
v_host_786_ = v_host_991_;
v_port_787_ = v_port_992_;
v___y_788_ = v___x_1001_;
goto v___jp_781_;
}
}
}
default: 
{
lean_object* v___x_1002_; 
v___x_1002_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__28));
v___y_741_ = v___x_931_;
v___y_742_ = v___x_930_;
v___y_743_ = v___x_929_;
v___y_744_ = v___x_928_;
v___y_745_ = v___x_1002_;
goto v___jp_740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__0(lean_object* v___x_1043_, lean_object* v___x_1044_, lean_object* v___x_1045_, lean_object* v_name_1046_, lean_object* v___x_1047_, uint32_t v___x_1048_, lean_object* v___x_1049_, lean_object* v_it_1050_, lean_object* v_acc_1051_, lean_object* v_hP_1052_, lean_object* v_recur_1053_){
_start:
{
lean_object* v_it_1055_; lean_object* v_out_1056_; lean_object* v___y_1072_; lean_object* v___y_1073_; uint32_t v___y_1074_; uint8_t v___y_1075_; lean_object* v_it_1081_; lean_object* v_startInclusive_1082_; lean_object* v_endExclusive_1083_; 
if (lean_obj_tag(v_it_1050_) == 0)
{
lean_object* v_currPos_1090_; lean_object* v_searcher_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1113_; 
v_currPos_1090_ = lean_ctor_get(v_it_1050_, 0);
v_searcher_1091_ = lean_ctor_get(v_it_1050_, 1);
v_isSharedCheck_1113_ = !lean_is_exclusive(v_it_1050_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1093_ = v_it_1050_;
v_isShared_1094_ = v_isSharedCheck_1113_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_searcher_1091_);
lean_inc(v_currPos_1090_);
lean_dec(v_it_1050_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1113_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
uint8_t v_decide_1095_; 
v_decide_1095_ = lean_nat_dec_eq(v_searcher_1091_, v___x_1047_);
if (v_decide_1095_ == 0)
{
uint32_t v___x_1096_; uint8_t v___x_1097_; 
lean_dec(v___x_1047_);
v___x_1096_ = lean_string_utf8_get_fast(v_name_1046_, v_searcher_1091_);
v___x_1097_ = lean_uint32_dec_eq(v___x_1096_, v___x_1048_);
if (v___x_1097_ == 0)
{
lean_object* v___x_1098_; lean_object* v___x_1100_; 
v___x_1098_ = lean_string_utf8_next_fast(v_name_1046_, v_searcher_1091_);
lean_dec(v_searcher_1091_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 1, v___x_1098_);
v___x_1100_ = v___x_1093_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_currPos_1090_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v___x_1098_);
v___x_1100_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_apply_4(v_recur_1053_, v___x_1100_, v_acc_1051_, lean_box(0), lean_box(0));
return v___x_1101_;
}
}
else
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v_slice_1106_; lean_object* v_nextIt_1108_; 
v___x_1103_ = lean_string_utf8_next_fast(v_name_1046_, v_searcher_1091_);
v___x_1104_ = lean_nat_sub(v___x_1103_, v_searcher_1091_);
v___x_1105_ = lean_nat_add(v_searcher_1091_, v___x_1104_);
lean_dec(v___x_1104_);
v_slice_1106_ = l_String_Slice_subslice_x21(v___x_1049_, v_currPos_1090_, v_searcher_1091_);
lean_inc(v___x_1105_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 1, v___x_1105_);
lean_ctor_set(v___x_1093_, 0, v___x_1105_);
v_nextIt_1108_ = v___x_1093_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1105_);
lean_ctor_set(v_reuseFailAlloc_1111_, 1, v___x_1105_);
v_nextIt_1108_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
lean_object* v_startInclusive_1109_; lean_object* v_endExclusive_1110_; 
v_startInclusive_1109_ = lean_ctor_get(v_slice_1106_, 0);
lean_inc(v_startInclusive_1109_);
v_endExclusive_1110_ = lean_ctor_get(v_slice_1106_, 1);
lean_inc(v_endExclusive_1110_);
lean_dec_ref(v_slice_1106_);
v_it_1081_ = v_nextIt_1108_;
v_startInclusive_1082_ = v_startInclusive_1109_;
v_endExclusive_1083_ = v_endExclusive_1110_;
goto v___jp_1080_;
}
}
}
else
{
lean_object* v___x_1112_; 
lean_del_object(v___x_1093_);
lean_dec(v_searcher_1091_);
v___x_1112_ = lean_box(1);
v_it_1081_ = v___x_1112_;
v_startInclusive_1082_ = v_currPos_1090_;
v_endExclusive_1083_ = v___x_1047_;
goto v___jp_1080_;
}
}
}
else
{
lean_dec_ref(v_recur_1053_);
lean_dec(v___x_1047_);
return v_acc_1051_;
}
v___jp_1054_:
{
if (lean_obj_tag(v_acc_1051_) == 0)
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1057_, 0, v_out_1056_);
v___x_1058_ = lean_apply_4(v_recur_1053_, v_it_1055_, v___x_1057_, lean_box(0), lean_box(0));
return v___x_1058_;
}
else
{
lean_object* v_val_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1070_; 
v_val_1059_ = lean_ctor_get(v_acc_1051_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_acc_1051_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1061_ = v_acc_1051_;
v_isShared_1062_ = v_isSharedCheck_1070_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_val_1059_);
lean_dec(v_acc_1051_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1070_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1067_; 
v___x_1063_ = lean_string_utf8_extract_fast(v___x_1043_, v___x_1044_, v___x_1045_);
v___x_1064_ = lean_string_append(v_val_1059_, v___x_1063_);
lean_dec_ref(v___x_1063_);
v___x_1065_ = lean_string_append(v___x_1064_, v_out_1056_);
lean_dec_ref(v_out_1056_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 0, v___x_1065_);
v___x_1067_ = v___x_1061_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1065_);
v___x_1067_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_apply_4(v_recur_1053_, v_it_1055_, v___x_1067_, lean_box(0), lean_box(0));
return v___x_1068_;
}
}
}
}
v___jp_1071_:
{
if (v___y_1075_ == 0)
{
lean_object* v___x_1076_; 
v___x_1076_ = lean_string_utf8_set(v___y_1073_, v___x_1044_, v___y_1074_);
v_it_1055_ = v___y_1072_;
v_out_1056_ = v___x_1076_;
goto v___jp_1054_;
}
else
{
uint32_t v___x_1077_; uint32_t v___x_1078_; lean_object* v___x_1079_; 
v___x_1077_ = 4294967264;
v___x_1078_ = lean_uint32_add(v___y_1074_, v___x_1077_);
v___x_1079_ = lean_string_utf8_set(v___y_1073_, v___x_1044_, v___x_1078_);
v_it_1055_ = v___y_1072_;
v_out_1056_ = v___x_1079_;
goto v___jp_1054_;
}
}
v___jp_1080_:
{
lean_object* v___x_1084_; uint32_t v___x_1085_; uint32_t v___x_1086_; uint8_t v___x_1087_; 
v___x_1084_ = lean_string_utf8_extract_fast(v_name_1046_, v_startInclusive_1082_, v_endExclusive_1083_);
lean_dec(v_endExclusive_1083_);
lean_dec(v_startInclusive_1082_);
v___x_1085_ = lean_string_utf8_get(v___x_1084_, v___x_1044_);
v___x_1086_ = 97;
v___x_1087_ = lean_uint32_dec_le(v___x_1086_, v___x_1085_);
if (v___x_1087_ == 0)
{
v___y_1072_ = v_it_1081_;
v___y_1073_ = v___x_1084_;
v___y_1074_ = v___x_1085_;
v___y_1075_ = v___x_1087_;
goto v___jp_1071_;
}
else
{
uint32_t v___x_1088_; uint8_t v___x_1089_; 
v___x_1088_ = 122;
v___x_1089_ = lean_uint32_dec_le(v___x_1085_, v___x_1088_);
v___y_1072_ = v_it_1081_;
v___y_1073_ = v___x_1084_;
v___y_1074_ = v___x_1085_;
v___y_1075_ = v___x_1089_;
goto v___jp_1071_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__0___boxed(lean_object* v___x_1114_, lean_object* v___x_1115_, lean_object* v___x_1116_, lean_object* v_name_1117_, lean_object* v___x_1118_, lean_object* v___x_1119_, lean_object* v___x_1120_, lean_object* v_it_1121_, lean_object* v_acc_1122_, lean_object* v_hP_1123_, lean_object* v_recur_1124_){
_start:
{
uint32_t v___x_1197__boxed_1125_; lean_object* v_res_1126_; 
v___x_1197__boxed_1125_ = lean_unbox_uint32(v___x_1119_);
lean_dec(v___x_1119_);
v_res_1126_ = l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__0(v___x_1114_, v___x_1115_, v___x_1116_, v_name_1117_, v___x_1118_, v___x_1197__boxed_1125_, v___x_1120_, v_it_1121_, v_acc_1122_, v_hP_1123_, v_recur_1124_);
lean_dec_ref(v___x_1120_);
lean_dec_ref(v_name_1117_);
lean_dec(v___x_1116_);
lean_dec(v___x_1115_);
lean_dec_ref(v___x_1114_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__1(lean_object* v_buf_1127_, lean_object* v_name_1128_, lean_object* v_value_1129_){
_start:
{
lean_object* v___y_1131_; lean_object* v___f_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v_it_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___f_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___f_1150_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__2));
v___x_1151_ = lean_unsigned_to_nat(0u);
v___x_1152_ = lean_string_utf8_byte_size(v_name_1128_);
lean_inc_ref(v_name_1128_);
v___x_1153_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1153_, 0, v_name_1128_);
lean_ctor_set(v___x_1153_, 1, v___x_1151_);
lean_ctor_set(v___x_1153_, 2, v___x_1152_);
lean_inc_ref(v___x_1153_);
v_it_1154_ = l_String_Slice_splitToSubslice___redArg(v___x_1153_, v___f_1150_);
v___x_1155_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__3));
v___x_1156_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__4, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__4_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__4);
v___x_1157_ = l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___boxed__const__1;
v___f_1158_ = lean_alloc_closure((void*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__0___boxed), 11, 7);
lean_closure_set(v___f_1158_, 0, v___x_1155_);
lean_closure_set(v___f_1158_, 1, v___x_1151_);
lean_closure_set(v___f_1158_, 2, v___x_1156_);
lean_closure_set(v___f_1158_, 3, v_name_1128_);
lean_closure_set(v___f_1158_, 4, v___x_1152_);
lean_closure_set(v___f_1158_, 5, v___x_1157_);
lean_closure_set(v___f_1158_, 6, v___x_1153_);
v___x_1159_ = lean_box(0);
v___x_1160_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_1158_, v_it_1154_, v___x_1159_, lean_box(0));
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v___x_1161_; 
v___x_1161_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__5));
v___y_1131_ = v___x_1161_;
goto v___jp_1130_;
}
else
{
lean_object* v_val_1162_; 
v_val_1162_ = lean_ctor_get(v___x_1160_, 0);
lean_inc(v_val_1162_);
lean_dec_ref_known(v___x_1160_, 1);
v___y_1131_ = v_val_1162_;
goto v___jp_1130_;
}
v___jp_1130_:
{
lean_object* v_data_1132_; lean_object* v_size_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1149_; 
v_data_1132_ = lean_ctor_get(v_buf_1127_, 0);
v_size_1133_ = lean_ctor_get(v_buf_1127_, 1);
v_isSharedCheck_1149_ = !lean_is_exclusive(v_buf_1127_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1135_ = v_buf_1127_;
v_isShared_1136_ = v_isSharedCheck_1149_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_size_1133_);
lean_inc(v_data_1132_);
lean_dec(v_buf_1127_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1149_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1147_; 
v___x_1137_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__0));
v___x_1138_ = lean_string_append(v___y_1131_, v___x_1137_);
v___x_1139_ = lean_string_append(v___x_1138_, v_value_1129_);
v___x_1140_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___closed__1));
v___x_1141_ = lean_string_append(v___x_1139_, v___x_1140_);
v___x_1142_ = lean_string_to_utf8(v___x_1141_);
lean_dec_ref(v___x_1141_);
lean_inc_ref(v___x_1142_);
v___x_1143_ = lean_array_push(v_data_1132_, v___x_1142_);
v___x_1144_ = lean_byte_array_size(v___x_1142_);
lean_dec_ref(v___x_1142_);
v___x_1145_ = lean_nat_add(v_size_1133_, v___x_1144_);
lean_dec(v_size_1133_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 1, v___x_1145_);
lean_ctor_set(v___x_1135_, 0, v___x_1143_);
v___x_1147_ = v___x_1135_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v___x_1143_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v___x_1145_);
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
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__1___boxed(lean_object* v_buf_1163_, lean_object* v_name_1164_, lean_object* v_value_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___lam__1(v_buf_1163_, v_name_1164_, v_value_1165_);
lean_dec_ref(v_value_1165_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3(lean_object* v_buffer_1168_, lean_object* v_r_1169_){
_start:
{
lean_object* v_status_1170_; uint8_t v_version_1171_; lean_object* v_headers_1172_; lean_object* v___f_1173_; lean_object* v___y_1175_; 
v_status_1170_ = lean_ctor_get(v_r_1169_, 0);
v_version_1171_ = lean_ctor_get_uint8(v_r_1169_, sizeof(void*)*2);
v_headers_1172_ = lean_ctor_get(v_r_1169_, 1);
v___f_1173_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___closed__0));
switch(v_version_1171_)
{
case 0:
{
lean_object* v___x_1223_; 
v___x_1223_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__4));
v___y_1175_ = v___x_1223_;
goto v___jp_1174_;
}
case 1:
{
lean_object* v___x_1224_; 
v___x_1224_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__5));
v___y_1175_ = v___x_1224_;
goto v___jp_1174_;
}
case 2:
{
lean_object* v___x_1225_; 
v___x_1225_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__6));
v___y_1175_ = v___x_1225_;
goto v___jp_1174_;
}
default: 
{
lean_object* v___x_1226_; 
v___x_1226_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__7));
v___y_1175_ = v___x_1226_;
goto v___jp_1174_;
}
}
v___jp_1174_:
{
lean_object* v_data_1176_; lean_object* v_size_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1222_; 
v_data_1176_ = lean_ctor_get(v_buffer_1168_, 0);
v_size_1177_ = lean_ctor_get(v_buffer_1168_, 1);
v_isSharedCheck_1222_ = !lean_is_exclusive(v_buffer_1168_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1179_ = v_buffer_1168_;
v_isShared_1180_ = v_isSharedCheck_1222_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_size_1177_);
lean_inc(v_data_1176_);
lean_dec(v_buffer_1168_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1222_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; uint16_t v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v_buffer_1208_; 
v___x_1181_ = lean_string_to_utf8(v___y_1175_);
lean_inc_ref(v___x_1181_);
v___x_1182_ = lean_array_push(v_data_1176_, v___x_1181_);
v___x_1183_ = lean_byte_array_size(v___x_1181_);
lean_dec_ref(v___x_1181_);
v___x_1184_ = lean_nat_add(v_size_1177_, v___x_1183_);
lean_dec(v_size_1177_);
v___x_1185_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__24);
v___x_1186_ = lean_array_push(v___x_1182_, v___x_1185_);
v___x_1187_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__25, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__25_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__25);
v___x_1188_ = lean_nat_add(v___x_1184_, v___x_1187_);
lean_dec(v___x_1184_);
v___x_1189_ = l_Std_Http_Status_toCode(v_status_1170_);
v___x_1190_ = lean_uint16_to_nat(v___x_1189_);
v___x_1191_ = l_Nat_reprFast(v___x_1190_);
v___x_1192_ = lean_string_to_utf8(v___x_1191_);
lean_dec_ref(v___x_1191_);
lean_inc_ref(v___x_1192_);
v___x_1193_ = lean_array_push(v___x_1186_, v___x_1192_);
v___x_1194_ = lean_byte_array_size(v___x_1192_);
lean_dec_ref(v___x_1192_);
v___x_1195_ = lean_nat_add(v___x_1188_, v___x_1194_);
lean_dec(v___x_1188_);
v___x_1196_ = lean_array_push(v___x_1193_, v___x_1185_);
v___x_1197_ = lean_nat_add(v___x_1195_, v___x_1187_);
lean_dec(v___x_1195_);
v___x_1198_ = l_Std_Http_Status_reasonPhrase(v_status_1170_);
v___x_1199_ = lean_string_to_utf8(v___x_1198_);
lean_dec_ref(v___x_1198_);
lean_inc_ref(v___x_1199_);
v___x_1200_ = lean_array_push(v___x_1196_, v___x_1199_);
v___x_1201_ = lean_byte_array_size(v___x_1199_);
lean_dec_ref(v___x_1199_);
v___x_1202_ = lean_nat_add(v___x_1197_, v___x_1201_);
lean_dec(v___x_1197_);
v___x_1203_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__2);
v___x_1204_ = lean_array_push(v___x_1200_, v___x_1203_);
v___x_1205_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__3, &l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__3_once, _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___closed__3);
v___x_1206_ = lean_nat_add(v___x_1202_, v___x_1205_);
lean_dec(v___x_1202_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 1, v___x_1206_);
lean_ctor_set(v___x_1179_, 0, v___x_1204_);
v_buffer_1208_ = v___x_1179_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1204_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v___x_1206_);
v_buffer_1208_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
lean_object* v_buffer_1209_; lean_object* v_data_1210_; lean_object* v_size_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1220_; 
v_buffer_1209_ = l_Std_Http_Headers_fold___redArg(v_headers_1172_, v_buffer_1208_, v___f_1173_);
v_data_1210_ = lean_ctor_get(v_buffer_1209_, 0);
v_size_1211_ = lean_ctor_get(v_buffer_1209_, 1);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_buffer_1209_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1213_ = v_buffer_1209_;
v_isShared_1214_ = v_isSharedCheck_1220_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_size_1211_);
lean_inc(v_data_1210_);
lean_dec(v_buffer_1209_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1220_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1218_; 
v___x_1215_ = lean_array_push(v_data_1210_, v___x_1203_);
v___x_1216_ = lean_nat_add(v_size_1211_, v___x_1205_);
lean_dec(v_size_1211_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 1, v___x_1216_);
lean_ctor_set(v___x_1213_, 0, v___x_1215_);
v___x_1218_ = v___x_1213_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v___x_1215_);
lean_ctor_set(v_reuseFailAlloc_1219_, 1, v___x_1216_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3___boxed(lean_object* v_buffer_1227_, lean_object* v_r_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l_Std_Http_Protocol_H1_instEncodeV11Head___aux__3(v_buffer_1227_, v_r_1228_);
lean_dec_ref(v_r_1228_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head(uint8_t v_dir_1232_){
_start:
{
if (v_dir_1232_ == 0)
{
lean_object* v___x_1233_; 
v___x_1233_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___closed__0));
return v___x_1233_;
}
else
{
lean_object* v___x_1234_; 
v___x_1234_ = ((lean_object*)(l_Std_Http_Protocol_H1_instEncodeV11Head___closed__1));
return v___x_1234_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head___boxed(lean_object* v_dir_1235_){
_start:
{
uint8_t v_dir_boxed_1236_; lean_object* v_res_1237_; 
v_dir_boxed_1236_ = lean_unbox(v_dir_1235_);
v_res_1237_ = l_Std_Http_Protocol_H1_instEncodeV11Head(v_dir_boxed_1236_);
return v_res_1237_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__0(void){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; uint8_t v___x_1241_; lean_object* v___x_1242_; 
v___x_1238_ = l_Std_Http_Headers_empty;
v___x_1239_ = lean_box(3);
v___x_1240_ = 1;
v___x_1241_ = 8;
v___x_1242_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_1242_, 0, v___x_1239_);
lean_ctor_set(v___x_1242_, 1, v___x_1238_);
lean_ctor_set_uint8(v___x_1242_, sizeof(void*)*2, v___x_1241_);
lean_ctor_set_uint8(v___x_1242_, sizeof(void*)*2 + 1, v___x_1240_);
return v___x_1242_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__1(void){
_start:
{
lean_object* v___x_1243_; uint8_t v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1243_ = l_Std_Http_Headers_empty;
v___x_1244_ = 1;
v___x_1245_ = lean_box(4);
v___x_1246_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1246_, 0, v___x_1245_);
lean_ctor_set(v___x_1246_, 1, v___x_1243_);
lean_ctor_set_uint8(v___x_1246_, sizeof(void*)*2, v___x_1244_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEmptyCollectionHead(uint8_t v_dir_1247_){
_start:
{
if (v_dir_1247_ == 0)
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__0, &l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__0_once, _init_l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__0);
return v___x_1248_;
}
else
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_obj_once(&l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__1, &l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__1_once, _init_l_Std_Http_Protocol_H1_instEmptyCollectionHead___closed__1);
return v___x_1249_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instEmptyCollectionHead___boxed(lean_object* v_dir_1250_){
_start:
{
uint8_t v_dir_boxed_1251_; lean_object* v_res_1252_; 
v_dir_boxed_1251_ = lean_unbox(v_dir_1250_);
v_res_1252_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v_dir_boxed_1251_);
return v_res_1252_;
}
}
lean_object* runtime_initialize_Init_Data_Array(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Protocol_H1_Message(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___boxed__const__1 = _init_l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___boxed__const__1();
lean_mark_persistent(l_Std_Http_Protocol_H1_instEncodeV11Head___aux__1___lam__2___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Protocol_H1_Message(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array(uint8_t builtin);
lean_object* initialize_Std_Http_Data(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Protocol_H1_Message(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Protocol_H1_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Protocol_H1_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Protocol_H1_Message(builtin);
}
#ifdef __cplusplus
}
#endif

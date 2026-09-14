// Lean compiler output
// Module: Std.Http.Data.URI.Basic
// Imports: import Init.Data.ToString public import Std.Net public import Std.Http.Internal public import Std.Http.Data.URI.Encoding public import Init.Data.String.Search public import Init.Data.String.Length
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_sarray_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t l_Std_Http_Internal_instDecidableIsLowerCase(lean_object*);
lean_object* lean_string_data(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Std_Net_instDecidableEqIPv4Addr_decEq(lean_object*, lean_object*);
uint8_t l_Std_Net_instDecidableEqIPv6Addr_decEq(lean_object*, lean_object*);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_ByteArray_empty;
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Std_Http_URI_EncodedSegment_encode(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_Http_URI_EncodedQueryParam_encode(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_Http_URI_EncodedFragment_encode(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* l_Std_Http_URI_EncodedSegment_decode(lean_object*);
extern lean_object* l_Std_Net_instInhabitedIPv4Addr_default;
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Option_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedUserInfo_decode(lean_object*);
lean_object* l_Std_Http_URI_EncodedUserInfo_encode(lean_object*);
lean_object* l_Std_Http_URI_EncodedQueryParam_decode(lean_object*);
lean_object* l_ByteArray_decEq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
static const lean_string_object l_Std_Http_URI_instInhabitedScheme___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
static const lean_object* l_Std_Http_URI_instInhabitedScheme___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedScheme___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedScheme = (const lean_object*)&l_Std_Http_URI_instInhabitedScheme___closed__0_value;
LEAN_EXPORT lean_object* l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Scheme_ofString_x21_spec__0(lean_object*);
static const lean_string_object l_Std_Http_URI_Scheme_ofString_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Http.Data.URI.Basic"};
static const lean_object* l_Std_Http_URI_Scheme_ofString_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_Scheme_ofString_x21___closed__0_value;
static const lean_string_object l_Std_Http_URI_Scheme_ofString_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.Http.URI.Scheme.ofString!"};
static const lean_object* l_Std_Http_URI_Scheme_ofString_x21___closed__1 = (const lean_object*)&l_Std_Http_URI_Scheme_ofString_x21___closed__1_value;
static const lean_string_object l_Std_Http_URI_Scheme_ofString_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid URI scheme: "};
static const lean_object* l_Std_Http_URI_Scheme_ofString_x21___closed__2 = (const lean_object*)&l_Std_Http_URI_Scheme_ofString_x21___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x21(lean_object*);
static const lean_string_object l_Std_Http_URI_Scheme_defaultPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "https"};
static const lean_object* l_Std_Http_URI_Scheme_defaultPort___closed__0 = (const lean_object*)&l_Std_Http_URI_Scheme_defaultPort___closed__0_value;
LEAN_EXPORT uint16_t l_Std_Http_URI_Scheme_defaultPort(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_defaultPort___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort(uint16_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort___boxed(lean_object*);
static lean_once_cell_t l_Std_Http_URI_instInhabitedUserInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instInhabitedUserInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedUserInfo_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedUserInfo;
static const lean_string_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_URI_instReprUserInfo_repr_spec__1(lean_object*);
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "username"};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "password"};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12_value;
static lean_once_cell_t l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13;
static lean_once_cell_t l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprUserInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprUserInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprUserInfo___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprUserInfo = (const lean_object*)&l_Std_Http_URI_instReprUserInfo___closed__0_value;
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqUserInfo_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqUserInfo_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqUserInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqUserInfo_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqUserInfo___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqUserInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqUserInfo = (const lean_object*)&l_Std_Http_URI_instBEqUserInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_isValidDomainLabel(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_isValidDomainLabel___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_DomainName_ofString_x3f(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_URI_instInhabitedHost_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instInhabitedHost_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedHost_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedHost;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqHost_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqHost_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqHost_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqHost___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqHost = (const lean_object*)&l_Std_Http_URI_instBEqHost___closed__0_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Std.Http.URI.Host."};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__1_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ipv4"};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__2_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ipv6"};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__3_value;
static lean_once_cell_t l_Std_Http_URI_instReprHost___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__4;
static lean_once_cell_t l_Std_Http_URI_instReprHost___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprHost___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprHost___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprHost = (const lean_object*)&l_Std_Http_URI_instReprHost___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringHost___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Http_URI_instToStringHost___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringHost___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringHost___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Std_Http_URI_instToStringHost___lam__0___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringHost___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_instToStringHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringHost___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringHost___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instToStringHost = (const lean_object*)&l_Std_Http_URI_instToStringHost___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedPort_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedPort;
static const lean_string_object l_Std_Http_URI_instReprPort_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Http.URI.Port.empty"};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__1_value;
static const lean_string_object l_Std_Http_URI_instReprPort_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Std.Http.URI.Port.omitted"};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__2_value)}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprPort_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Http.URI.Port.value"};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__5_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__6 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprPort_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprPort___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPort___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprPort = (const lean_object*)&l_Std_Http_URI_instReprPort___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_URI_instInhabitedAuthority_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instInhabitedAuthority_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedAuthority_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedAuthority;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "userInfo"};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5_value;
static lean_once_cell_t l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6;
static const lean_string_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprAuthority_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprAuthority___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprAuthority___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprAuthority = (const lean_object*)&l_Std_Http_URI_instReprAuthority___closed__0_value;
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqAuthority_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqAuthority_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqAuthority_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqAuthority___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqAuthority___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqAuthority = (const lean_object*)&l_Std_Http_URI_instBEqAuthority___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringAuthority___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Http_URI_instToStringAuthority___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringAuthority___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Http_URI_instToStringAuthority___lam__0___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__1_value;
static const lean_string_object l_Std_Http_URI_instToStringAuthority___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_Std_Http_URI_instToStringAuthority___lam__0___closed__2 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringAuthority___lam__0(lean_object*);
static const lean_closure_object l_Std_Http_URI_instToStringAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringAuthority___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringAuthority___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instToStringAuthority = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___closed__0_value;
static const lean_array_object l_Std_Http_URI_instInhabitedPath_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_instInhabitedPath_default___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instInhabitedPath_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_URI_instInhabitedPath_default___closed__1 = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedPath_default = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedPath = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1_value;
static lean_once_cell_t l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2;
static lean_once_cell_t l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringHost___lam__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5_value;
static const lean_string_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Http_URI_instReprPath_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "segments"};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprPath_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "absolute"};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprPath_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprPath___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPath___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprPath = (const lean_object*)&l_Std_Http_URI_instReprPath___closed__0_value;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqPath_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqPath_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqPath_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqPath___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqPath___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqPath = (const lean_object*)&l_Std_Http_URI_instBEqPath___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__0(lean_object*);
static const lean_string_object l_Std_Http_URI_instToStringPath___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__1_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__2 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__2_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__3 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__3_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__4 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__4_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__5 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__5_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__6 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__6_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__7 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__7_value;
static const lean_ctor_object l_Std_Http_URI_instToStringPath___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__1_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__2_value)}};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__8 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__8_value;
static const lean_ctor_object l_Std_Http_URI_instToStringPath___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__8_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__3_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__4_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__5_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__6_value)}};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__9 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__9_value;
static const lean_ctor_object l_Std_Http_URI_instToStringPath___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__9_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__7_value)}};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__10 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__10_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instToStringPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringPath___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringPath___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_URI_instToStringPath___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringPath___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instToStringPath = (const lean_object*)&l_Std_Http_URI_instToStringPath___closed__1_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_Path_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_parent(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_append___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_appendEncoded(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".."};
static const lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_normalize(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_toDecodedSegments(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_toDecodedSegments___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_repr___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprTupleOfRepr___redArg___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Prod_repr___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value),((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprQuery___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprQuery___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprQuery = (const lean_object*)&l_Std_Http_URI_instReprQuery___closed__0_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedQuery___aux__1 = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedQuery = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqQuery___aux__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqQuery___aux__1___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqQuery___aux__1___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instBEqQuery___aux__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqQuery___aux__1___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instBEqQuery___aux__1___closed__0_value)} };
static const lean_object* l_Std_Http_URI_instBEqQuery___aux__1___closed__1 = (const lean_object*)&l_Std_Http_URI_instBEqQuery___aux__1___closed__1_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqQuery___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqQuery___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqQuery = (const lean_object*)&l_Std_Http_URI_instBEqQuery___closed__0_value;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_names(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_names___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_values(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_values___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray___boxed(lean_object*);
static const lean_string_object l_Std_Http_URI_Query_formatQueryParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_Std_Http_URI_Query_formatQueryParam___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_formatQueryParam___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatQueryParam(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insert___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insertEncoded(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_Http_URI_Query_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_Query_empty___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_empty___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_empty = (const lean_object*)&l_Std_Http_URI_Query_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_ofList(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_containsEncoded(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_containsEncoded___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_URI_Query_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Query_get___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_get___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Query_toRawString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "&"};
static const lean_object* l_Std_Http_URI_Query_toRawString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_toRawString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toRawString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toRawString___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instEmptyCollection = (const lean_object*)&l_Std_Http_URI_Query_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instSingletonProdString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instSingletonProdString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_Query_instSingletonProdString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instSingletonProdString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_Query_instSingletonProdString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instSingletonProdString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instSingletonProdString = (const lean_object*)&l_Std_Http_URI_Query_instSingletonProdString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_Query_instInsertProdString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instInsertProdString___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_Query_instInsertProdString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instInsertProdString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instInsertProdString = (const lean_object*)&l_Std_Http_URI_Query_instInsertProdString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__0(lean_object*);
static const lean_string_object l_Std_Http_URI_Query_instToString___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Std_Http_URI_Query_instToString___lam__1___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instToString___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_Query_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_Query_instToString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instToString___closed__0_value;
static const lean_closure_object l_Std_Http_URI_Query_instToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instToString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_Query_instToString___closed__0_value)} };
static const lean_object* l_Std_Http_URI_Query_instToString___closed__1 = (const lean_object*)&l_Std_Http_URI_Query_instToString___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instToString = (const lean_object*)&l_Std_Http_URI_Query_instToString___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Http_URI_Query_formatOption_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatOption(lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scheme"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Http_instReprURI_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instReprURI_repr___redArg___closed__4;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "authority"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_instReprURI_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instReprURI_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "query"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Http_instReprURI_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instReprURI_repr___redArg___closed__12;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fragment"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__13 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__14 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instReprURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instReprURI_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instReprURI___closed__0 = (const lean_object*)&l_Std_Http_instReprURI___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instReprURI = (const lean_object*)&l_Std_Http_instReprURI___closed__0_value;
static const lean_ctor_object l_Std_Http_instInhabitedURI_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instInhabitedScheme___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_instInhabitedURI_default___closed__0 = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURI_default = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURI = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_instBEqURI_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instBEqURI_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instBEqURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instBEqURI_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instBEqURI___closed__0 = (const lean_object*)&l_Std_Http_instBEqURI___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instBEqURI = (const lean_object*)&l_Std_Http_instBEqURI___closed__0_value;
static const lean_string_object l_Std_Http_instToStringURI___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Std_Http_instToStringURI___lam__1___closed__0 = (const lean_object*)&l_Std_Http_instToStringURI___lam__1___closed__0_value;
static const lean_string_object l_Std_Http_instToStringURI___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "//"};
static const lean_object* l_Std_Http_instToStringURI___lam__1___closed__1 = (const lean_object*)&l_Std_Http_instToStringURI___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_instToStringURI___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instToStringURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instToStringURI___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_instToStringURI___closed__0 = (const lean_object*)&l_Std_Http_instToStringURI___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instToStringURI = (const lean_object*)&l_Std_Http_instToStringURI___closed__0_value;
static const lean_array_object l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_instInhabitedBuilder_default___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value),((lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_URI_instInhabitedBuilder_default___closed__1 = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedBuilder_default = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedBuilder = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Builder_empty = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(lean_object*);
static const lean_string_object l_Std_Http_URI_Builder_setScheme_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Std.Http.URI.Builder.setScheme!"};
static const lean_object* l_Std_Http_URI_Builder_setScheme_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_Builder_setScheme_x21___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setUserInfo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setUserInfo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x3f(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Builder_setHost_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.Http.URI.Builder.setHost!"};
static const lean_object* l_Std_Http_URI_Builder_setHost_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_Builder_setHost_x21___closed__0_value;
static const lean_string_object l_Std_Http_URI_Builder_setHost_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid domain name: "};
static const lean_object* l_Std_Http_URI_Builder_setHost_x21___closed__1 = (const lean_object*)&l_Std_Http_URI_Builder_setHost_x21___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_appendPathSegment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryParam(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryFlag(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setQuery(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setFragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_build(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withScheme_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withAuthority(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withQuery(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withFragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_normalize(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprOrigin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprOrigin_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprOrigin___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprOrigin___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprOrigin = (const lean_object*)&l_Std_Http_URI_instReprOrigin___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqOrigin_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqOrigin_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqOrigin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqOrigin_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqOrigin___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqOrigin___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqOrigin = (const lean_object*)&l_Std_Http_URI_instBEqOrigin___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Origin_hostHeader(lean_object*);
static const lean_ctor_object l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__6_value)}};
static const lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprRelativeRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprRelativeRef_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprRelativeRef___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprRelativeRef = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedRelativeRef_default = (const lean_object*)&l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedRelativeRef = (const lean_object*)&l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqRelativeRef_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqRelativeRef_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqRelativeRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqRelativeRef_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqRelativeRef___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqRelativeRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqRelativeRef = (const lean_object*)&l_Std_Http_URI_instBEqRelativeRef___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_instToStringRelativeRef___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instToStringRelativeRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instToStringRelativeRef___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_instToStringRelativeRef___closed__0 = (const lean_object*)&l_Std_Http_instToStringRelativeRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instToStringRelativeRef = (const lean_object*)&l_Std_Http_instToStringRelativeRef___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_instReprURIReference_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Std.Http.URIReference.absolute"};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__0 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__0_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__0_value)}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__1 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__1_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__2 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__2_value;
static const lean_string_object l_Std_Http_instReprURIReference_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Std.Http.URIReference.relative"};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__3 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__3_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__3_value)}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__4 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__4_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__5 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instReprURIReference___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instReprURIReference_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instReprURIReference___closed__0 = (const lean_object*)&l_Std_Http_instReprURIReference___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instReprURIReference = (const lean_object*)&l_Std_Http_instReprURIReference___closed__0_value;
static const lean_ctor_object l_Std_Http_instInhabitedURIReference_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value)}};
static const lean_object* l_Std_Http_instInhabitedURIReference_default___closed__0 = (const lean_object*)&l_Std_Http_instInhabitedURIReference_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURIReference_default = (const lean_object*)&l_Std_Http_instInhabitedURIReference_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURIReference = (const lean_object*)&l_Std_Http_instInhabitedURIReference_default___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_instToStringURIReference___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instToStringURIReference___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instToStringURIReference___lam__2, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value),((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_instToStringURIReference___closed__0 = (const lean_object*)&l_Std_Http_instToStringURIReference___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instToStringURIReference = (const lean_object*)&l_Std_Http_instToStringURIReference___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_instInhabitedRequestTarget_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_instInhabitedRequestTarget_default___closed__0 = (const lean_object*)&l_Std_Http_instInhabitedRequestTarget_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedRequestTarget_default = (const lean_object*)&l_Std_Http_instInhabitedRequestTarget_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedRequestTarget = (const lean_object*)&l_Std_Http_instInhabitedRequestTarget_default___closed__0_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Std.Http.RequestTarget.asteriskForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__0 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__0_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__0_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__1 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__1_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Std.Http.RequestTarget.originForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__2 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__2_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__2_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__3 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__3_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__4 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__4_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Std.Http.RequestTarget.absoluteForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__5 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__5_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__5_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__6 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__6_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__7 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__7_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Http.RequestTarget.authorityForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__8 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__8_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__8_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__9 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__9_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__10 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instReprRequestTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instReprRequestTarget_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instReprRequestTarget___closed__0 = (const lean_object*)&l_Std_Http_instReprRequestTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instReprRequestTarget = (const lean_object*)&l_Std_Http_instReprRequestTarget___closed__0_value;
static const lean_array_object l_Std_Http_RequestTarget_path___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_RequestTarget_path___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_path___closed__0_value;
static const lean_ctor_object l_Std_Http_RequestTarget_path___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_RequestTarget_path___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_RequestTarget_path___closed__1 = (const lean_object*)&l_Std_Http_RequestTarget_path___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authority_x3f(lean_object*);
static const lean_string_object l_Std_Http_RequestTarget_instToString___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Std_Http_RequestTarget_instToString___lam__2___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_instToString___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instToString___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_RequestTarget_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_RequestTarget_instToString___lam__2, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value),((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_RequestTarget_instToString___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_RequestTarget_instToString = (const lean_object*)&l_Std_Http_RequestTarget_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instEncodeV11___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_RequestTarget_instEncodeV11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_RequestTarget_instEncodeV11___lam__2, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value),((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_RequestTarget_instEncodeV11___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_instEncodeV11___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_RequestTarget_instEncodeV11 = (const lean_object*)&l_Std_Http_RequestTarget_instEncodeV11___closed__0_value;
LEAN_EXPORT lean_object* l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(lean_object* v_s_3_, lean_object* v_p_4_){
_start:
{
uint32_t v___y_6_; lean_object* v___x_11_; uint8_t v_decide_12_; 
v___x_11_ = lean_string_utf8_byte_size(v_s_3_);
v_decide_12_ = lean_nat_dec_eq(v_p_4_, v___x_11_);
if (v_decide_12_ == 0)
{
uint32_t v___x_13_; uint8_t v___y_15_; uint32_t v___x_18_; uint8_t v___x_19_; 
v___x_13_ = lean_string_utf8_get_fast(v_s_3_, v_p_4_);
v___x_18_ = 65;
v___x_19_ = lean_uint32_dec_le(v___x_18_, v___x_13_);
if (v___x_19_ == 0)
{
v___y_15_ = v___x_19_;
goto v___jp_14_;
}
else
{
uint32_t v___x_20_; uint8_t v___x_21_; 
v___x_20_ = 90;
v___x_21_ = lean_uint32_dec_le(v___x_13_, v___x_20_);
v___y_15_ = v___x_21_;
goto v___jp_14_;
}
v___jp_14_:
{
if (v___y_15_ == 0)
{
v___y_6_ = v___x_13_;
goto v___jp_5_;
}
else
{
uint32_t v___x_16_; uint32_t v___x_17_; 
v___x_16_ = 32;
v___x_17_ = lean_uint32_add(v___x_13_, v___x_16_);
v___y_6_ = v___x_17_;
goto v___jp_5_;
}
}
}
else
{
lean_dec(v_p_4_);
return v_s_3_;
}
v___jp_5_:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
lean_inc(v_p_4_);
v___x_7_ = lean_string_utf8_set(v_s_3_, v_p_4_, v___y_6_);
v___x_8_ = l_Char_utf8Size(v___y_6_);
v___x_9_ = lean_nat_add(v_p_4_, v___x_8_);
lean_dec(v___x_8_);
lean_dec(v_p_4_);
v_s_3_ = v___x_7_;
v_p_4_ = v___x_9_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(lean_object* v_x_22_){
_start:
{
if (lean_obj_tag(v_x_22_) == 0)
{
uint8_t v___x_23_; 
v___x_23_ = 1;
return v___x_23_;
}
else
{
lean_object* v_head_24_; lean_object* v_tail_25_; uint8_t v___y_40_; uint32_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; uint8_t v___x_59_; 
v_head_24_ = lean_ctor_get(v_x_22_, 0);
v_tail_25_ = lean_ctor_get(v_x_22_, 1);
v___x_56_ = lean_unbox_uint32(v_head_24_);
v___x_57_ = lean_uint32_to_nat(v___x_56_);
v___x_58_ = lean_unsigned_to_nat(128u);
v___x_59_ = lean_nat_dec_lt(v___x_57_, v___x_58_);
lean_dec(v___x_57_);
if (v___x_59_ == 0)
{
goto v___jp_26_;
}
else
{
uint32_t v___x_60_; uint32_t v___x_61_; uint8_t v___x_62_; 
v___x_60_ = 48;
v___x_61_ = lean_unbox_uint32(v_head_24_);
v___x_62_ = lean_uint32_dec_le(v___x_60_, v___x_61_);
if (v___x_62_ == 0)
{
goto v___jp_49_;
}
else
{
uint32_t v___x_63_; uint32_t v___x_64_; uint8_t v___x_65_; 
v___x_63_ = 57;
v___x_64_ = lean_unbox_uint32(v_head_24_);
v___x_65_ = lean_uint32_dec_le(v___x_64_, v___x_63_);
if (v___x_65_ == 0)
{
goto v___jp_49_;
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
}
v___jp_26_:
{
uint32_t v___x_27_; uint32_t v___x_28_; uint8_t v___x_29_; 
v___x_27_ = 43;
v___x_28_ = lean_unbox_uint32(v_head_24_);
v___x_29_ = lean_uint32_dec_eq(v___x_28_, v___x_27_);
if (v___x_29_ == 0)
{
uint32_t v___x_30_; uint32_t v___x_31_; uint8_t v___x_32_; 
v___x_30_ = 45;
v___x_31_ = lean_unbox_uint32(v_head_24_);
v___x_32_ = lean_uint32_dec_eq(v___x_31_, v___x_30_);
if (v___x_32_ == 0)
{
uint32_t v___x_33_; uint32_t v___x_34_; uint8_t v___x_35_; 
v___x_33_ = 46;
v___x_34_ = lean_unbox_uint32(v_head_24_);
v___x_35_ = lean_uint32_dec_eq(v___x_34_, v___x_33_);
if (v___x_35_ == 0)
{
return v___x_35_;
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
v___jp_39_:
{
if (v___y_40_ == 0)
{
uint32_t v___x_41_; uint32_t v___x_42_; uint8_t v___x_43_; 
v___x_41_ = 97;
v___x_42_ = lean_unbox_uint32(v_head_24_);
v___x_43_ = lean_uint32_dec_le(v___x_41_, v___x_42_);
if (v___x_43_ == 0)
{
goto v___jp_26_;
}
else
{
uint32_t v___x_44_; uint32_t v___x_45_; uint8_t v___x_46_; 
v___x_44_ = 122;
v___x_45_ = lean_unbox_uint32(v_head_24_);
v___x_46_ = lean_uint32_dec_le(v___x_45_, v___x_44_);
if (v___x_46_ == 0)
{
goto v___jp_26_;
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
v___jp_49_:
{
uint32_t v___x_50_; uint32_t v___x_51_; uint8_t v___x_52_; 
v___x_50_ = 65;
v___x_51_ = lean_unbox_uint32(v_head_24_);
v___x_52_ = lean_uint32_dec_le(v___x_50_, v___x_51_);
if (v___x_52_ == 0)
{
v___y_40_ = v___x_52_;
goto v___jp_39_;
}
else
{
uint32_t v___x_53_; uint32_t v___x_54_; uint8_t v___x_55_; 
v___x_53_ = 90;
v___x_54_ = lean_unbox_uint32(v_head_24_);
v___x_55_ = lean_uint32_dec_le(v___x_54_, v___x_53_);
v___y_40_ = v___x_55_;
goto v___jp_39_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1___boxed(lean_object* v_x_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(v_x_67_);
lean_dec(v_x_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x3f(lean_object* v_s_70_){
_start:
{
lean_object* v___x_71_; lean_object* v_lower_72_; uint8_t v___y_74_; uint8_t v___x_77_; uint8_t v___y_79_; lean_object* v___x_80_; uint8_t v___x_81_; uint8_t v___y_83_; lean_object* v___x_84_; 
v___x_71_ = lean_unsigned_to_nat(0u);
v_lower_72_ = l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(v_s_70_, v___x_71_);
lean_inc_ref_n(v_lower_72_, 2);
v___x_77_ = l_Std_Http_Internal_instDecidableIsLowerCase(v_lower_72_);
v___x_80_ = lean_string_data(v_lower_72_);
v___x_81_ = l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(v___x_80_);
v___x_84_ = l_List_head_x3f___redArg(v___x_80_);
lean_dec(v___x_80_);
if (lean_obj_tag(v___x_84_) == 0)
{
uint8_t v___x_85_; 
v___x_85_ = 0;
v___y_83_ = v___x_85_;
goto v___jp_82_;
}
else
{
lean_object* v_val_86_; uint8_t v___y_88_; uint32_t v___x_95_; uint32_t v___x_96_; uint8_t v___x_97_; 
v_val_86_ = lean_ctor_get(v___x_84_, 0);
lean_inc(v_val_86_);
lean_dec_ref_known(v___x_84_, 1);
v___x_95_ = 65;
v___x_96_ = lean_unbox_uint32(v_val_86_);
v___x_97_ = lean_uint32_dec_le(v___x_95_, v___x_96_);
if (v___x_97_ == 0)
{
v___y_88_ = v___x_97_;
goto v___jp_87_;
}
else
{
uint32_t v___x_98_; uint32_t v___x_99_; uint8_t v___x_100_; 
v___x_98_ = 90;
v___x_99_ = lean_unbox_uint32(v_val_86_);
v___x_100_ = lean_uint32_dec_le(v___x_99_, v___x_98_);
v___y_88_ = v___x_100_;
goto v___jp_87_;
}
v___jp_87_:
{
if (v___y_88_ == 0)
{
uint32_t v___x_89_; uint32_t v___x_90_; uint8_t v___x_91_; 
v___x_89_ = 97;
v___x_90_ = lean_unbox_uint32(v_val_86_);
v___x_91_ = lean_uint32_dec_le(v___x_89_, v___x_90_);
if (v___x_91_ == 0)
{
lean_dec(v_val_86_);
v___y_83_ = v___x_91_;
goto v___jp_82_;
}
else
{
uint32_t v___x_92_; uint32_t v___x_93_; uint8_t v___x_94_; 
v___x_92_ = 122;
v___x_93_ = lean_unbox_uint32(v_val_86_);
lean_dec(v_val_86_);
v___x_94_ = lean_uint32_dec_le(v___x_93_, v___x_92_);
v___y_83_ = v___x_94_;
goto v___jp_82_;
}
}
else
{
lean_dec(v_val_86_);
v___y_83_ = v___y_88_;
goto v___jp_82_;
}
}
}
v___jp_73_:
{
if (v___y_74_ == 0)
{
lean_object* v___x_75_; 
lean_dec_ref(v_lower_72_);
v___x_75_ = lean_box(0);
return v___x_75_;
}
else
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_76_, 0, v_lower_72_);
return v___x_76_;
}
}
v___jp_78_:
{
if (v___x_77_ == 0)
{
v___y_74_ = v___x_77_;
goto v___jp_73_;
}
else
{
v___y_74_ = v___y_79_;
goto v___jp_73_;
}
}
v___jp_82_:
{
if (v___x_81_ == 0)
{
v___y_79_ = v___x_81_;
goto v___jp_78_;
}
else
{
v___y_79_ = v___y_83_;
goto v___jp_78_;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Scheme_ofString_x21_spec__0(lean_object* v_msg_101_){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = ((lean_object*)(l_Std_Http_URI_instInhabitedScheme___closed__0));
v___x_103_ = lean_panic_fn_borrowed(v___x_102_, v_msg_101_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x21(lean_object* v_s_107_){
_start:
{
lean_object* v___x_108_; 
lean_inc_ref(v_s_107_);
v___x_108_ = l_Std_Http_URI_Scheme_ofString_x3f(v_s_107_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_109_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_110_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__1));
v___x_111_ = lean_unsigned_to_nat(84u);
v___x_112_ = lean_unsigned_to_nat(12u);
v___x_113_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__2));
v___x_114_ = l_String_quote(v_s_107_);
v___x_115_ = lean_string_append(v___x_113_, v___x_114_);
lean_dec_ref(v___x_114_);
v___x_116_ = l_mkPanicMessageWithDecl(v___x_109_, v___x_110_, v___x_111_, v___x_112_, v___x_115_);
lean_dec_ref(v___x_115_);
v___x_117_ = l_panic___at___00Std_Http_URI_Scheme_ofString_x21_spec__0(v___x_116_);
return v___x_117_;
}
else
{
lean_object* v_val_118_; 
lean_dec_ref(v_s_107_);
v_val_118_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_val_118_);
lean_dec_ref_known(v___x_108_, 1);
return v_val_118_;
}
}
}
LEAN_EXPORT uint16_t l_Std_Http_URI_Scheme_defaultPort(lean_object* v_scheme_120_){
_start:
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
v___x_122_ = lean_string_dec_eq(v_scheme_120_, v___x_121_);
if (v___x_122_ == 0)
{
uint16_t v___x_123_; 
v___x_123_ = 80;
return v___x_123_;
}
else
{
uint16_t v___x_124_; 
v___x_124_ = 443;
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_defaultPort___boxed(lean_object* v_scheme_125_){
_start:
{
uint16_t v_res_126_; lean_object* v_r_127_; 
v_res_126_ = l_Std_Http_URI_Scheme_defaultPort(v_scheme_125_);
lean_dec_ref(v_scheme_125_);
v_r_127_ = lean_box(v_res_126_);
return v_r_127_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort(uint16_t v_port_128_){
_start:
{
uint16_t v___x_129_; uint8_t v___x_130_; 
v___x_129_ = 443;
v___x_130_ = lean_uint16_dec_eq(v_port_128_, v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; 
v___x_131_ = ((lean_object*)(l_Std_Http_URI_instInhabitedScheme___closed__0));
return v___x_131_;
}
else
{
lean_object* v___x_132_; 
v___x_132_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort___boxed(lean_object* v_port_133_){
_start:
{
uint16_t v_port_boxed_134_; lean_object* v_res_135_; 
v_port_boxed_134_ = lean_unbox(v_port_133_);
v_res_135_ = l_Std_Http_URI_Scheme_ofPort(v_port_boxed_134_);
return v_res_135_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo_default___closed__0(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_136_ = lean_box(0);
v___x_137_ = l_ByteArray_empty;
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
lean_ctor_set(v___x_138_, 1, v___x_136_);
return v___x_138_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo_default(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_obj_once(&l_Std_Http_URI_instInhabitedUserInfo_default___closed__0, &l_Std_Http_URI_instInhabitedUserInfo_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedUserInfo_default___closed__0);
return v___x_139_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Std_Http_URI_instInhabitedUserInfo_default;
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(lean_object* v_x_147_, lean_object* v_x_148_){
_start:
{
if (lean_obj_tag(v_x_147_) == 0)
{
lean_object* v___x_149_; 
v___x_149_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_149_;
}
else
{
lean_object* v_val_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_162_; 
v_val_150_ = lean_ctor_get(v_x_147_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v_x_147_);
if (v_isSharedCheck_162_ == 0)
{
v___x_152_ = v_x_147_;
v_isShared_153_ = v_isSharedCheck_162_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_val_150_);
lean_dec(v_x_147_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_162_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_154_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_155_ = lean_string_from_utf8_unchecked(v_val_150_);
v___x_156_ = l_String_quote(v___x_155_);
if (v_isShared_153_ == 0)
{
lean_ctor_set_tag(v___x_152_, 3);
lean_ctor_set(v___x_152_, 0, v___x_156_);
v___x_158_ = v___x_152_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_161_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_154_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = l_Repr_addAppParen(v___x_159_, v_x_148_);
return v___x_160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___boxed(lean_object* v_x_163_, lean_object* v_x_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(v_x_163_, v_x_164_);
lean_dec(v_x_164_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_URI_instReprUserInfo_repr_spec__1(lean_object* v_a_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_nat_to_int(v_a_166_);
return v___x_167_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_unsigned_to_nat(12u);
v___x_182_ = lean_nat_to_int(v___x_181_);
return v___x_182_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0));
v___x_191_ = lean_string_length(v___x_190_);
return v___x_191_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13);
v___x_193_ = lean_nat_to_int(v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg(lean_object* v_x_198_){
_start:
{
lean_object* v_username_199_; lean_object* v_password_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_235_; 
v_username_199_ = lean_ctor_get(v_x_198_, 0);
v_password_200_ = lean_ctor_get(v_x_198_, 1);
v_isSharedCheck_235_ = !lean_is_exclusive(v_x_198_);
if (v_isSharedCheck_235_ == 0)
{
v___x_202_ = v_x_198_;
v_isShared_203_ = v_isSharedCheck_235_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_password_200_);
lean_inc(v_username_199_);
lean_dec(v_x_198_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_235_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_211_; 
v___x_204_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_205_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6));
v___x_206_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_207_ = lean_string_from_utf8_unchecked(v_username_199_);
v___x_208_ = l_String_quote(v___x_207_);
v___x_209_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
if (v_isShared_203_ == 0)
{
lean_ctor_set_tag(v___x_202_, 4);
lean_ctor_set(v___x_202_, 1, v___x_209_);
lean_ctor_set(v___x_202_, 0, v___x_206_);
v___x_211_ = v___x_202_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_206_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v___x_209_);
v___x_211_ = v_reuseFailAlloc_234_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
uint8_t v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_212_ = 0;
v___x_213_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_213_, 0, v___x_211_);
lean_ctor_set_uint8(v___x_213_, sizeof(void*)*1, v___x_212_);
v___x_214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_205_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
v___x_217_ = lean_box(1);
v___x_218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11));
v___x_220_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_218_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
v___x_221_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
lean_ctor_set(v___x_221_, 1, v___x_204_);
v___x_222_ = lean_unsigned_to_nat(0u);
v___x_223_ = l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(v_password_200_, v___x_222_);
v___x_224_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_206_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_225_, 0, v___x_224_);
lean_ctor_set_uint8(v___x_225_, sizeof(void*)*1, v___x_212_);
v___x_226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_221_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_228_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v___x_226_);
v___x_230_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_231_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_227_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1, v___x_212_);
return v___x_233_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr(lean_object* v_x_236_, lean_object* v_prec_237_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = l_Std_Http_URI_instReprUserInfo_repr___redArg(v_x_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___boxed(lean_object* v_x_239_, lean_object* v_prec_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Std_Http_URI_instReprUserInfo_repr(v_x_239_, v_prec_240_);
lean_dec(v_prec_240_);
return v_res_241_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(lean_object* v_x_244_, lean_object* v_x_245_){
_start:
{
if (lean_obj_tag(v_x_244_) == 0)
{
if (lean_obj_tag(v_x_245_) == 0)
{
uint8_t v___x_246_; 
v___x_246_ = 1;
return v___x_246_;
}
else
{
uint8_t v___x_247_; 
v___x_247_ = 0;
return v___x_247_;
}
}
else
{
if (lean_obj_tag(v_x_245_) == 0)
{
uint8_t v___x_248_; 
v___x_248_ = 0;
return v___x_248_;
}
else
{
lean_object* v_val_249_; lean_object* v_val_250_; uint8_t v___x_251_; 
v_val_249_ = lean_ctor_get(v_x_244_, 0);
v_val_250_ = lean_ctor_get(v_x_245_, 0);
v___x_251_ = lean_sarray_dec_eq(v_val_249_, v_val_250_);
return v___x_251_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0___boxed(lean_object* v_x_252_, lean_object* v_x_253_){
_start:
{
uint8_t v_res_254_; lean_object* v_r_255_; 
v_res_254_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(v_x_252_, v_x_253_);
lean_dec(v_x_253_);
lean_dec(v_x_252_);
v_r_255_ = lean_box(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqUserInfo_beq(lean_object* v_x_256_, lean_object* v_x_257_){
_start:
{
lean_object* v_username_258_; lean_object* v_password_259_; lean_object* v_username_260_; lean_object* v_password_261_; uint8_t v___x_262_; 
v_username_258_ = lean_ctor_get(v_x_256_, 0);
v_password_259_ = lean_ctor_get(v_x_256_, 1);
v_username_260_ = lean_ctor_get(v_x_257_, 0);
v_password_261_ = lean_ctor_get(v_x_257_, 1);
v___x_262_ = lean_sarray_dec_eq(v_username_258_, v_username_260_);
if (v___x_262_ == 0)
{
return v___x_262_;
}
else
{
uint8_t v___x_263_; 
v___x_263_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(v_password_259_, v_password_261_);
return v___x_263_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqUserInfo_beq___boxed(lean_object* v_x_264_, lean_object* v_x_265_){
_start:
{
uint8_t v_res_266_; lean_object* v_r_267_; 
v_res_266_ = l_Std_Http_URI_instBEqUserInfo_beq(v_x_264_, v_x_265_);
lean_dec_ref(v_x_265_);
lean_dec_ref(v_x_264_);
v_r_267_ = lean_box(v_res_266_);
return v_r_267_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings(lean_object* v_username_270_, lean_object* v_password_271_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l_Std_Http_URI_EncodedUserInfo_encode(v_username_270_);
if (lean_obj_tag(v_password_271_) == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_box(0);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_272_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
return v___x_274_;
}
else
{
lean_object* v_val_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_284_; 
v_val_275_ = lean_ctor_get(v_password_271_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v_password_271_);
if (v_isSharedCheck_284_ == 0)
{
v___x_277_ = v_password_271_;
v_isShared_278_ = v_isSharedCheck_284_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_val_275_);
lean_dec(v_password_271_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_284_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_279_ = l_Std_Http_URI_EncodedUserInfo_encode(v_val_275_);
lean_dec(v_val_275_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 0, v___x_279_);
v___x_281_ = v___x_277_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_279_);
v___x_281_ = v_reuseFailAlloc_283_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_object* v___x_282_; 
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_272_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings___boxed(lean_object* v_username_285_, lean_object* v_password_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Std_Http_URI_UserInfo_ofStrings(v_username_285_, v_password_286_);
lean_dec_ref(v_username_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f(lean_object* v_ui_288_){
_start:
{
lean_object* v_username_289_; lean_object* v___x_290_; 
v_username_289_ = lean_ctor_get(v_ui_288_, 0);
v___x_290_ = l_Std_Http_URI_EncodedUserInfo_decode(v_username_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f___boxed(lean_object* v_ui_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Std_Http_URI_UserInfo_username_x3f(v_ui_291_);
lean_dec_ref(v_ui_291_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f(lean_object* v_ui_293_){
_start:
{
lean_object* v_password_294_; 
v_password_294_ = lean_ctor_get(v_ui_293_, 1);
if (lean_obj_tag(v_password_294_) == 0)
{
lean_object* v___x_295_; 
v___x_295_ = lean_box(0);
return v___x_295_;
}
else
{
lean_object* v_val_296_; lean_object* v___x_297_; 
v_val_296_ = lean_ctor_get(v_password_294_, 0);
v___x_297_ = l_Std_Http_URI_EncodedUserInfo_decode(v_val_296_);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f___boxed(lean_object* v_ui_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Std_Http_URI_UserInfo_password_x3f(v_ui_298_);
lean_dec_ref(v_ui_298_);
return v_res_299_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(lean_object* v_x_300_){
_start:
{
if (lean_obj_tag(v_x_300_) == 0)
{
uint8_t v___x_301_; 
v___x_301_ = 1;
return v___x_301_;
}
else
{
lean_object* v_head_302_; lean_object* v_tail_303_; uint8_t v___y_305_; uint8_t v___y_312_; uint32_t v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; uint8_t v___x_330_; 
v_head_302_ = lean_ctor_get(v_x_300_, 0);
v_tail_303_ = lean_ctor_get(v_x_300_, 1);
v___x_327_ = lean_unbox_uint32(v_head_302_);
v___x_328_ = lean_uint32_to_nat(v___x_327_);
v___x_329_ = lean_unsigned_to_nat(128u);
v___x_330_ = lean_nat_dec_lt(v___x_328_, v___x_329_);
lean_dec(v___x_328_);
if (v___x_330_ == 0)
{
v___y_305_ = v___x_330_;
goto v___jp_304_;
}
else
{
uint32_t v___x_331_; uint32_t v___x_332_; uint8_t v___x_333_; 
v___x_331_ = 48;
v___x_332_ = lean_unbox_uint32(v_head_302_);
v___x_333_ = lean_uint32_dec_le(v___x_331_, v___x_332_);
if (v___x_333_ == 0)
{
goto v___jp_320_;
}
else
{
uint32_t v___x_334_; uint32_t v___x_335_; uint8_t v___x_336_; 
v___x_334_ = 57;
v___x_335_ = lean_unbox_uint32(v_head_302_);
v___x_336_ = lean_uint32_dec_le(v___x_335_, v___x_334_);
if (v___x_336_ == 0)
{
goto v___jp_320_;
}
else
{
v___y_305_ = v___x_336_;
goto v___jp_304_;
}
}
}
v___jp_304_:
{
if (v___y_305_ == 0)
{
uint32_t v___x_306_; uint32_t v___x_307_; uint8_t v___x_308_; 
v___x_306_ = 45;
v___x_307_ = lean_unbox_uint32(v_head_302_);
v___x_308_ = lean_uint32_dec_eq(v___x_307_, v___x_306_);
if (v___x_308_ == 0)
{
return v___x_308_;
}
else
{
v_x_300_ = v_tail_303_;
goto _start;
}
}
else
{
v_x_300_ = v_tail_303_;
goto _start;
}
}
v___jp_311_:
{
if (v___y_312_ == 0)
{
uint32_t v___x_313_; uint32_t v___x_314_; uint8_t v___x_315_; 
v___x_313_ = 97;
v___x_314_ = lean_unbox_uint32(v_head_302_);
v___x_315_ = lean_uint32_dec_le(v___x_313_, v___x_314_);
if (v___x_315_ == 0)
{
v___y_305_ = v___x_315_;
goto v___jp_304_;
}
else
{
uint32_t v___x_316_; uint32_t v___x_317_; uint8_t v___x_318_; 
v___x_316_ = 122;
v___x_317_ = lean_unbox_uint32(v_head_302_);
v___x_318_ = lean_uint32_dec_le(v___x_317_, v___x_316_);
v___y_305_ = v___x_318_;
goto v___jp_304_;
}
}
else
{
v_x_300_ = v_tail_303_;
goto _start;
}
}
v___jp_320_:
{
uint32_t v___x_321_; uint32_t v___x_322_; uint8_t v___x_323_; 
v___x_321_ = 65;
v___x_322_ = lean_unbox_uint32(v_head_302_);
v___x_323_ = lean_uint32_dec_le(v___x_321_, v___x_322_);
if (v___x_323_ == 0)
{
v___y_312_ = v___x_323_;
goto v___jp_311_;
}
else
{
uint32_t v___x_324_; uint32_t v___x_325_; uint8_t v___x_326_; 
v___x_324_ = 90;
v___x_325_ = lean_unbox_uint32(v_head_302_);
v___x_326_ = lean_uint32_dec_le(v___x_325_, v___x_324_);
v___y_312_ = v___x_326_;
goto v___jp_311_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0___boxed(lean_object* v_x_337_){
_start:
{
uint8_t v_res_338_; lean_object* v_r_339_; 
v_res_338_ = l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(v_x_337_);
lean_dec(v_x_337_);
v_r_339_ = lean_box(v_res_338_);
return v_r_339_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_isValidDomainLabel(lean_object* v_s_340_){
_start:
{
uint32_t v___y_342_; uint8_t v___y_343_; uint32_t v___y_349_; lean_object* v_chars_354_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v_chars_354_ = lean_string_data(v_s_340_);
v___x_371_ = l_List_lengthTR___redArg(v_chars_354_);
v___x_372_ = lean_unsigned_to_nat(63u);
v___x_373_ = lean_nat_dec_le(v___x_371_, v___x_372_);
lean_dec(v___x_371_);
if (v___x_373_ == 0)
{
lean_dec(v_chars_354_);
return v___x_373_;
}
else
{
uint8_t v___x_374_; 
v___x_374_ = l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(v_chars_354_);
if (v___x_374_ == 0)
{
lean_dec(v_chars_354_);
return v___x_374_;
}
else
{
lean_object* v___x_375_; 
v___x_375_ = l_List_head_x3f___redArg(v_chars_354_);
if (lean_obj_tag(v___x_375_) == 0)
{
uint8_t v___x_376_; 
lean_dec(v_chars_354_);
v___x_376_ = 0;
return v___x_376_;
}
else
{
lean_object* v_val_377_; uint8_t v___y_379_; uint32_t v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v_val_377_ = lean_ctor_get(v___x_375_, 0);
lean_inc(v_val_377_);
lean_dec_ref_known(v___x_375_, 1);
v___x_393_ = lean_unbox_uint32(v_val_377_);
v___x_394_ = lean_uint32_to_nat(v___x_393_);
v___x_395_ = lean_unsigned_to_nat(128u);
v___x_396_ = lean_nat_dec_lt(v___x_394_, v___x_395_);
lean_dec(v___x_394_);
if (v___x_396_ == 0)
{
lean_dec(v_val_377_);
lean_dec(v_chars_354_);
return v___x_396_;
}
else
{
uint32_t v___x_397_; uint32_t v___x_398_; uint8_t v___x_399_; 
v___x_397_ = 48;
v___x_398_ = lean_unbox_uint32(v_val_377_);
v___x_399_ = lean_uint32_dec_le(v___x_397_, v___x_398_);
if (v___x_399_ == 0)
{
goto v___jp_386_;
}
else
{
uint32_t v___x_400_; uint32_t v___x_401_; uint8_t v___x_402_; 
v___x_400_ = 57;
v___x_401_ = lean_unbox_uint32(v_val_377_);
v___x_402_ = lean_uint32_dec_le(v___x_401_, v___x_400_);
if (v___x_402_ == 0)
{
goto v___jp_386_;
}
else
{
lean_dec(v_val_377_);
goto v___jp_355_;
}
}
}
v___jp_378_:
{
if (v___y_379_ == 0)
{
uint32_t v___x_380_; uint32_t v___x_381_; uint8_t v___x_382_; 
v___x_380_ = 97;
v___x_381_ = lean_unbox_uint32(v_val_377_);
v___x_382_ = lean_uint32_dec_le(v___x_380_, v___x_381_);
if (v___x_382_ == 0)
{
lean_dec(v_val_377_);
lean_dec(v_chars_354_);
return v___x_382_;
}
else
{
uint32_t v___x_383_; uint32_t v___x_384_; uint8_t v___x_385_; 
v___x_383_ = 122;
v___x_384_ = lean_unbox_uint32(v_val_377_);
lean_dec(v_val_377_);
v___x_385_ = lean_uint32_dec_le(v___x_384_, v___x_383_);
if (v___x_385_ == 0)
{
lean_dec(v_chars_354_);
return v___x_385_;
}
else
{
goto v___jp_355_;
}
}
}
else
{
lean_dec(v_val_377_);
goto v___jp_355_;
}
}
v___jp_386_:
{
uint32_t v___x_387_; uint32_t v___x_388_; uint8_t v___x_389_; 
v___x_387_ = 65;
v___x_388_ = lean_unbox_uint32(v_val_377_);
v___x_389_ = lean_uint32_dec_le(v___x_387_, v___x_388_);
if (v___x_389_ == 0)
{
v___y_379_ = v___x_389_;
goto v___jp_378_;
}
else
{
uint32_t v___x_390_; uint32_t v___x_391_; uint8_t v___x_392_; 
v___x_390_ = 90;
v___x_391_ = lean_unbox_uint32(v_val_377_);
v___x_392_ = lean_uint32_dec_le(v___x_391_, v___x_390_);
v___y_379_ = v___x_392_;
goto v___jp_378_;
}
}
}
}
}
v___jp_341_:
{
if (v___y_343_ == 0)
{
uint32_t v___x_344_; uint8_t v___x_345_; 
v___x_344_ = 97;
v___x_345_ = lean_uint32_dec_le(v___x_344_, v___y_342_);
if (v___x_345_ == 0)
{
return v___x_345_;
}
else
{
uint32_t v___x_346_; uint8_t v___x_347_; 
v___x_346_ = 122;
v___x_347_ = lean_uint32_dec_le(v___y_342_, v___x_346_);
return v___x_347_;
}
}
else
{
return v___y_343_;
}
}
v___jp_348_:
{
uint32_t v___x_350_; uint8_t v___x_351_; 
v___x_350_ = 65;
v___x_351_ = lean_uint32_dec_le(v___x_350_, v___y_349_);
if (v___x_351_ == 0)
{
v___y_342_ = v___y_349_;
v___y_343_ = v___x_351_;
goto v___jp_341_;
}
else
{
uint32_t v___x_352_; uint8_t v___x_353_; 
v___x_352_ = 90;
v___x_353_ = lean_uint32_dec_le(v___y_349_, v___x_352_);
v___y_342_ = v___y_349_;
v___y_343_ = v___x_353_;
goto v___jp_341_;
}
}
v___jp_355_:
{
lean_object* v___x_356_; 
v___x_356_ = l_List_getLast_x3f___redArg(v_chars_354_);
lean_dec(v_chars_354_);
if (lean_obj_tag(v___x_356_) == 0)
{
uint8_t v___x_357_; 
v___x_357_ = 0;
return v___x_357_;
}
else
{
lean_object* v_val_358_; uint32_t v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; uint8_t v___x_362_; 
v_val_358_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_val_358_);
lean_dec_ref_known(v___x_356_, 1);
v___x_359_ = lean_unbox_uint32(v_val_358_);
v___x_360_ = lean_uint32_to_nat(v___x_359_);
v___x_361_ = lean_unsigned_to_nat(128u);
v___x_362_ = lean_nat_dec_lt(v___x_360_, v___x_361_);
lean_dec(v___x_360_);
if (v___x_362_ == 0)
{
lean_dec(v_val_358_);
return v___x_362_;
}
else
{
uint32_t v___x_363_; uint32_t v___x_364_; uint8_t v___x_365_; 
v___x_363_ = 48;
v___x_364_ = lean_unbox_uint32(v_val_358_);
v___x_365_ = lean_uint32_dec_le(v___x_363_, v___x_364_);
if (v___x_365_ == 0)
{
uint32_t v___x_366_; 
v___x_366_ = lean_unbox_uint32(v_val_358_);
lean_dec(v_val_358_);
v___y_349_ = v___x_366_;
goto v___jp_348_;
}
else
{
uint32_t v___x_367_; uint32_t v___x_368_; uint8_t v___x_369_; 
v___x_367_ = 57;
v___x_368_ = lean_unbox_uint32(v_val_358_);
v___x_369_ = lean_uint32_dec_le(v___x_368_, v___x_367_);
if (v___x_369_ == 0)
{
uint32_t v___x_370_; 
v___x_370_ = lean_unbox_uint32(v_val_358_);
lean_dec(v_val_358_);
v___y_349_ = v___x_370_;
goto v___jp_348_;
}
else
{
lean_dec(v_val_358_);
return v___x_369_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_isValidDomainLabel___boxed(lean_object* v_s_403_){
_start:
{
uint8_t v_res_404_; lean_object* v_r_405_; 
v_res_404_ = l_Std_Http_URI_isValidDomainLabel(v_s_403_);
v_r_405_ = lean_box(v_res_404_);
return v_r_405_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg(){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0));
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___boxed(lean_object* v___dummy_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg();
return v_res_411_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg();
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0(lean_object* v_s_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___boxed(lean_object* v_s_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0(v_s_415_);
lean_dec_ref(v_s_415_);
return v_res_416_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(lean_object* v_lower_417_, lean_object* v___x_418_, lean_object* v___x_419_, lean_object* v_a_420_, uint8_t v_b_421_){
_start:
{
if (lean_obj_tag(v_a_420_) == 0)
{
lean_object* v_currPos_422_; lean_object* v_searcher_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_460_; 
v_currPos_422_ = lean_ctor_get(v_a_420_, 0);
v_searcher_423_ = lean_ctor_get(v_a_420_, 1);
v_isSharedCheck_460_ = !lean_is_exclusive(v_a_420_);
if (v_isSharedCheck_460_ == 0)
{
v___x_425_ = v_a_420_;
v_isShared_426_ = v_isSharedCheck_460_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_searcher_423_);
lean_inc(v_currPos_422_);
lean_dec(v_a_420_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_460_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v_str_427_; lean_object* v_startInclusive_428_; lean_object* v_endExclusive_429_; uint8_t v___x_430_; lean_object* v_it_432_; lean_object* v_startInclusive_433_; lean_object* v_endExclusive_434_; lean_object* v___x_438_; uint8_t v_decide_439_; 
v_str_427_ = lean_ctor_get(v___x_418_, 0);
v_startInclusive_428_ = lean_ctor_get(v___x_418_, 1);
v_endExclusive_429_ = lean_ctor_get(v___x_418_, 2);
v___x_430_ = 1;
v___x_438_ = lean_nat_sub(v_endExclusive_429_, v_startInclusive_428_);
v_decide_439_ = lean_nat_dec_eq(v_searcher_423_, v___x_438_);
lean_dec(v___x_438_);
if (v_decide_439_ == 0)
{
uint32_t v___x_440_; lean_object* v___x_441_; uint32_t v___x_442_; uint8_t v___x_443_; 
v___x_440_ = 46;
v___x_441_ = lean_nat_add(v_startInclusive_428_, v_searcher_423_);
v___x_442_ = lean_string_utf8_get_fast(v_str_427_, v___x_441_);
v___x_443_ = lean_uint32_dec_eq(v___x_442_, v___x_440_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
lean_dec(v_searcher_423_);
v___x_444_ = lean_string_utf8_next_fast(v_str_427_, v___x_441_);
lean_dec(v___x_441_);
v___x_445_ = lean_nat_sub(v___x_444_, v_startInclusive_428_);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 1, v___x_445_);
v___x_447_ = v___x_425_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_currPos_422_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v___x_445_);
v___x_447_ = v_reuseFailAlloc_449_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
v_a_420_ = v___x_447_;
goto _start;
}
}
else
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v_slice_453_; lean_object* v_nextIt_455_; 
v___x_450_ = lean_string_utf8_next_fast(v_str_427_, v___x_441_);
v___x_451_ = lean_nat_sub(v___x_450_, v___x_441_);
lean_dec(v___x_441_);
v___x_452_ = lean_nat_add(v_searcher_423_, v___x_451_);
lean_dec(v___x_451_);
v_slice_453_ = l_String_Slice_subslice_x21(v___x_418_, v_currPos_422_, v_searcher_423_);
lean_inc(v___x_452_);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 1, v___x_452_);
lean_ctor_set(v___x_425_, 0, v___x_452_);
v_nextIt_455_ = v___x_425_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_452_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v___x_452_);
v_nextIt_455_ = v_reuseFailAlloc_458_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
lean_object* v_startInclusive_456_; lean_object* v_endExclusive_457_; 
v_startInclusive_456_ = lean_ctor_get(v_slice_453_, 0);
lean_inc(v_startInclusive_456_);
v_endExclusive_457_ = lean_ctor_get(v_slice_453_, 1);
lean_inc(v_endExclusive_457_);
lean_dec_ref(v_slice_453_);
v_it_432_ = v_nextIt_455_;
v_startInclusive_433_ = v_startInclusive_456_;
v_endExclusive_434_ = v_endExclusive_457_;
goto v___jp_431_;
}
}
}
else
{
lean_object* v___x_459_; 
lean_del_object(v___x_425_);
lean_dec(v_searcher_423_);
v___x_459_ = lean_box(1);
lean_inc(v___x_419_);
v_it_432_ = v___x_459_;
v_startInclusive_433_ = v_currPos_422_;
v_endExclusive_434_ = v___x_419_;
goto v___jp_431_;
}
v___jp_431_:
{
lean_object* v___x_435_; uint8_t v___x_436_; 
v___x_435_ = lean_string_utf8_extract_fast(v_lower_417_, v_startInclusive_433_, v_endExclusive_434_);
lean_dec(v_endExclusive_434_);
lean_dec(v_startInclusive_433_);
v___x_436_ = l_Std_Http_URI_isValidDomainLabel(v___x_435_);
if (v___x_436_ == 0)
{
lean_dec(v_it_432_);
lean_dec(v___x_419_);
return v___x_436_;
}
else
{
v_a_420_ = v_it_432_;
v_b_421_ = v___x_430_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_419_);
return v_b_421_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg___boxed(lean_object* v_lower_461_, lean_object* v___x_462_, lean_object* v___x_463_, lean_object* v_a_464_, lean_object* v_b_465_){
_start:
{
uint8_t v_b_boxed_466_; uint8_t v_res_467_; lean_object* v_r_468_; 
v_b_boxed_466_ = lean_unbox(v_b_465_);
v_res_467_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(v_lower_461_, v___x_462_, v___x_463_, v_a_464_, v_b_boxed_466_);
lean_dec_ref(v___x_462_);
lean_dec_ref(v_lower_461_);
v_r_468_ = lean_box(v_res_467_);
return v_r_468_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(lean_object* v_lower_469_, lean_object* v___x_470_, lean_object* v___x_471_, lean_object* v_a_472_, uint8_t v_b_473_){
_start:
{
if (lean_obj_tag(v_a_472_) == 0)
{
lean_object* v_currPos_474_; lean_object* v_searcher_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_512_; 
v_currPos_474_ = lean_ctor_get(v_a_472_, 0);
v_searcher_475_ = lean_ctor_get(v_a_472_, 1);
v_isSharedCheck_512_ = !lean_is_exclusive(v_a_472_);
if (v_isSharedCheck_512_ == 0)
{
v___x_477_ = v_a_472_;
v_isShared_478_ = v_isSharedCheck_512_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_searcher_475_);
lean_inc(v_currPos_474_);
lean_dec(v_a_472_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_512_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v_str_479_; lean_object* v_startInclusive_480_; lean_object* v_endExclusive_481_; uint8_t v___x_482_; lean_object* v_it_484_; lean_object* v_startInclusive_485_; lean_object* v_endExclusive_486_; lean_object* v___x_490_; uint8_t v_decide_491_; 
v_str_479_ = lean_ctor_get(v___x_470_, 0);
v_startInclusive_480_ = lean_ctor_get(v___x_470_, 1);
v_endExclusive_481_ = lean_ctor_get(v___x_470_, 2);
v___x_482_ = 1;
v___x_490_ = lean_nat_sub(v_endExclusive_481_, v_startInclusive_480_);
v_decide_491_ = lean_nat_dec_eq(v_searcher_475_, v___x_490_);
lean_dec(v___x_490_);
if (v_decide_491_ == 0)
{
lean_object* v___x_492_; uint32_t v___x_493_; uint32_t v___x_494_; uint8_t v___x_495_; 
v___x_492_ = lean_nat_add(v_startInclusive_480_, v_searcher_475_);
v___x_493_ = lean_string_utf8_get_fast(v_str_479_, v___x_492_);
v___x_494_ = 46;
v___x_495_ = lean_uint32_dec_eq(v___x_493_, v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_499_; 
lean_dec(v_searcher_475_);
v___x_496_ = lean_string_utf8_next_fast(v_str_479_, v___x_492_);
lean_dec(v___x_492_);
v___x_497_ = lean_nat_sub(v___x_496_, v_startInclusive_480_);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 1, v___x_497_);
v___x_499_ = v___x_477_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_currPos_474_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v___x_497_);
v___x_499_ = v_reuseFailAlloc_501_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
uint8_t v___x_500_; 
v___x_500_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(v_lower_469_, v___x_470_, v___x_471_, v___x_499_, v_b_473_);
return v___x_500_;
}
}
else
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v_slice_505_; lean_object* v_nextIt_507_; 
v___x_502_ = lean_string_utf8_next_fast(v_str_479_, v___x_492_);
v___x_503_ = lean_nat_sub(v___x_502_, v___x_492_);
lean_dec(v___x_492_);
v___x_504_ = lean_nat_add(v_searcher_475_, v___x_503_);
lean_dec(v___x_503_);
v_slice_505_ = l_String_Slice_subslice_x21(v___x_470_, v_currPos_474_, v_searcher_475_);
lean_inc(v___x_504_);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 1, v___x_504_);
lean_ctor_set(v___x_477_, 0, v___x_504_);
v_nextIt_507_ = v___x_477_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v___x_504_);
v_nextIt_507_ = v_reuseFailAlloc_510_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
lean_object* v_startInclusive_508_; lean_object* v_endExclusive_509_; 
v_startInclusive_508_ = lean_ctor_get(v_slice_505_, 0);
lean_inc(v_startInclusive_508_);
v_endExclusive_509_ = lean_ctor_get(v_slice_505_, 1);
lean_inc(v_endExclusive_509_);
lean_dec_ref(v_slice_505_);
v_it_484_ = v_nextIt_507_;
v_startInclusive_485_ = v_startInclusive_508_;
v_endExclusive_486_ = v_endExclusive_509_;
goto v___jp_483_;
}
}
}
else
{
lean_object* v___x_511_; 
lean_del_object(v___x_477_);
lean_dec(v_searcher_475_);
v___x_511_ = lean_box(1);
lean_inc(v___x_471_);
v_it_484_ = v___x_511_;
v_startInclusive_485_ = v_currPos_474_;
v_endExclusive_486_ = v___x_471_;
goto v___jp_483_;
}
v___jp_483_:
{
lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_487_ = lean_string_utf8_extract_fast(v_lower_469_, v_startInclusive_485_, v_endExclusive_486_);
lean_dec(v_endExclusive_486_);
lean_dec(v_startInclusive_485_);
v___x_488_ = l_Std_Http_URI_isValidDomainLabel(v___x_487_);
if (v___x_488_ == 0)
{
lean_dec(v_it_484_);
lean_dec(v___x_471_);
return v___x_488_;
}
else
{
uint8_t v___x_489_; 
v___x_489_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(v_lower_469_, v___x_470_, v___x_471_, v_it_484_, v___x_482_);
return v___x_489_;
}
}
}
}
else
{
lean_dec(v___x_471_);
return v_b_473_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg___boxed(lean_object* v_lower_513_, lean_object* v___x_514_, lean_object* v___x_515_, lean_object* v_a_516_, lean_object* v_b_517_){
_start:
{
uint8_t v_b_boxed_518_; uint8_t v_res_519_; lean_object* v_r_520_; 
v_b_boxed_518_ = lean_unbox(v_b_517_);
v_res_519_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v_lower_513_, v___x_514_, v___x_515_, v_a_516_, v_b_boxed_518_);
lean_dec_ref(v___x_514_);
lean_dec_ref(v_lower_513_);
v_r_520_ = lean_box(v_res_519_);
return v_r_520_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg(lean_object* v___x_521_, lean_object* v___x_522_, lean_object* v_a_523_, uint8_t v_b_524_){
_start:
{
if (lean_obj_tag(v_a_523_) == 0)
{
lean_object* v_currPos_525_; lean_object* v_searcher_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_547_; 
v_currPos_525_ = lean_ctor_get(v_a_523_, 0);
v_searcher_526_ = lean_ctor_get(v_a_523_, 1);
v_isSharedCheck_547_ = !lean_is_exclusive(v_a_523_);
if (v_isSharedCheck_547_ == 0)
{
v___x_528_ = v_a_523_;
v_isShared_529_ = v_isSharedCheck_547_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_searcher_526_);
lean_inc(v_currPos_525_);
lean_dec(v_a_523_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_547_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v_str_530_; lean_object* v_startInclusive_531_; lean_object* v_endExclusive_532_; lean_object* v___x_533_; uint8_t v___x_534_; lean_object* v___x_535_; uint8_t v_decide_536_; 
v_str_530_ = lean_ctor_get(v___x_522_, 0);
v_startInclusive_531_ = lean_ctor_get(v___x_522_, 1);
v_endExclusive_532_ = lean_ctor_get(v___x_522_, 2);
v___x_533_ = lean_unsigned_to_nat(0u);
v___x_534_ = lean_nat_dec_eq(v___x_521_, v___x_533_);
v___x_535_ = lean_nat_sub(v_endExclusive_532_, v_startInclusive_531_);
v_decide_536_ = lean_nat_dec_eq(v_searcher_526_, v___x_535_);
lean_dec(v___x_535_);
if (v_decide_536_ == 0)
{
uint32_t v___x_537_; lean_object* v___x_538_; uint32_t v___x_539_; uint8_t v___x_540_; 
v___x_537_ = 46;
v___x_538_ = lean_nat_add(v_startInclusive_531_, v_searcher_526_);
lean_dec(v_searcher_526_);
v___x_539_ = lean_string_utf8_get_fast(v_str_530_, v___x_538_);
v___x_540_ = lean_uint32_dec_eq(v___x_539_, v___x_537_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_544_; 
v___x_541_ = lean_string_utf8_next_fast(v_str_530_, v___x_538_);
lean_dec(v___x_538_);
v___x_542_ = lean_nat_sub(v___x_541_, v_startInclusive_531_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 1, v___x_542_);
v___x_544_ = v___x_528_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_currPos_525_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v___x_542_);
v___x_544_ = v_reuseFailAlloc_546_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
v_a_523_ = v___x_544_;
goto _start;
}
}
else
{
lean_dec(v___x_538_);
lean_del_object(v___x_528_);
lean_dec(v_currPos_525_);
return v___x_534_;
}
}
else
{
lean_del_object(v___x_528_);
lean_dec(v_searcher_526_);
lean_dec(v_currPos_525_);
return v___x_534_;
}
}
}
else
{
return v_b_524_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg___boxed(lean_object* v___x_548_, lean_object* v___x_549_, lean_object* v_a_550_, lean_object* v_b_551_){
_start:
{
uint8_t v_b_boxed_552_; uint8_t v_res_553_; lean_object* v_r_554_; 
v_b_boxed_552_ = lean_unbox(v_b_551_);
v_res_553_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg(v___x_548_, v___x_549_, v_a_550_, v_b_boxed_552_);
lean_dec_ref(v___x_549_);
lean_dec(v___x_548_);
v_r_554_ = lean_box(v_res_553_);
return v_r_554_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(lean_object* v___x_555_, lean_object* v_lower_556_, lean_object* v___x_557_, lean_object* v___x_558_, lean_object* v_a_559_, uint8_t v_b_560_){
_start:
{
if (lean_obj_tag(v_a_559_) == 0)
{
lean_object* v_currPos_561_; lean_object* v_searcher_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_583_; 
v_currPos_561_ = lean_ctor_get(v_a_559_, 0);
v_searcher_562_ = lean_ctor_get(v_a_559_, 1);
v_isSharedCheck_583_ = !lean_is_exclusive(v_a_559_);
if (v_isSharedCheck_583_ == 0)
{
v___x_564_ = v_a_559_;
v_isShared_565_ = v_isSharedCheck_583_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_searcher_562_);
lean_inc(v_currPos_561_);
lean_dec(v_a_559_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_583_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v_str_566_; lean_object* v_startInclusive_567_; lean_object* v_endExclusive_568_; lean_object* v___x_569_; uint8_t v___x_570_; lean_object* v___x_571_; uint8_t v_decide_572_; 
v_str_566_ = lean_ctor_get(v___x_557_, 0);
v_startInclusive_567_ = lean_ctor_get(v___x_557_, 1);
v_endExclusive_568_ = lean_ctor_get(v___x_557_, 2);
v___x_569_ = lean_unsigned_to_nat(0u);
v___x_570_ = lean_nat_dec_eq(v___x_555_, v___x_569_);
v___x_571_ = lean_nat_sub(v_endExclusive_568_, v_startInclusive_567_);
v_decide_572_ = lean_nat_dec_eq(v_searcher_562_, v___x_571_);
lean_dec(v___x_571_);
if (v_decide_572_ == 0)
{
lean_object* v___x_573_; uint32_t v___x_574_; uint32_t v___x_575_; uint8_t v___x_576_; 
v___x_573_ = lean_nat_add(v_startInclusive_567_, v_searcher_562_);
lean_dec(v_searcher_562_);
v___x_574_ = lean_string_utf8_get_fast(v_str_566_, v___x_573_);
v___x_575_ = 46;
v___x_576_ = lean_uint32_dec_eq(v___x_574_, v___x_575_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_577_ = lean_string_utf8_next_fast(v_str_566_, v___x_573_);
lean_dec(v___x_573_);
v___x_578_ = lean_nat_sub(v___x_577_, v_startInclusive_567_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 1, v___x_578_);
v___x_580_ = v___x_564_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_currPos_561_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v___x_578_);
v___x_580_ = v_reuseFailAlloc_582_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
uint8_t v___x_581_; 
v___x_581_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg(v___x_555_, v___x_557_, v___x_580_, v_b_560_);
return v___x_581_;
}
}
else
{
lean_dec(v___x_573_);
lean_del_object(v___x_564_);
lean_dec(v_currPos_561_);
return v___x_570_;
}
}
else
{
lean_del_object(v___x_564_);
lean_dec(v_searcher_562_);
lean_dec(v_currPos_561_);
return v___x_570_;
}
}
}
else
{
return v_b_560_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg___boxed(lean_object* v___x_584_, lean_object* v_lower_585_, lean_object* v___x_586_, lean_object* v___x_587_, lean_object* v_a_588_, lean_object* v_b_589_){
_start:
{
uint8_t v_b_boxed_590_; uint8_t v_res_591_; lean_object* v_r_592_; 
v_b_boxed_590_ = lean_unbox(v_b_589_);
v_res_591_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_584_, v_lower_585_, v___x_586_, v___x_587_, v_a_588_, v_b_boxed_590_);
lean_dec(v___x_587_);
lean_dec_ref(v___x_586_);
lean_dec_ref(v_lower_585_);
lean_dec(v___x_584_);
v_r_592_ = lean_box(v_res_591_);
return v_r_592_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_DomainName_ofString_x3f(lean_object* v_s_593_){
_start:
{
lean_object* v___x_594_; lean_object* v_lower_595_; uint8_t v___y_597_; uint8_t v___y_598_; lean_object* v___x_602_; uint8_t v___x_603_; 
v___x_594_ = lean_unsigned_to_nat(0u);
v_lower_595_ = l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(v_s_593_, v___x_594_);
v___x_602_ = lean_string_utf8_byte_size(v_lower_595_);
v___x_603_ = lean_nat_dec_eq(v___x_602_, v___x_594_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; uint8_t v___x_606_; uint8_t v___y_608_; uint8_t v___x_613_; 
lean_inc_ref(v_lower_595_);
v___x_604_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_604_, 0, v_lower_595_);
lean_ctor_set(v___x_604_, 1, v___x_594_);
lean_ctor_set(v___x_604_, 2, v___x_602_);
v___x_605_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0);
v___x_606_ = 1;
v___x_613_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_602_, v_lower_595_, v___x_604_, v___x_602_, v___x_605_, v___x_606_);
if (v___x_613_ == 0)
{
v___y_608_ = v___x_606_;
goto v___jp_607_;
}
else
{
v___y_608_ = v___x_603_;
goto v___jp_607_;
}
v___jp_607_:
{
uint8_t v___x_609_; 
v___x_609_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v_lower_595_, v___x_604_, v___x_602_, v___x_605_, v___x_606_);
lean_dec_ref_known(v___x_604_, 3);
if (v___x_609_ == 0)
{
v___y_597_ = v___y_608_;
v___y_598_ = v___x_609_;
goto v___jp_596_;
}
else
{
lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_610_ = lean_string_length(v_lower_595_);
v___x_611_ = lean_unsigned_to_nat(255u);
v___x_612_ = lean_nat_dec_le(v___x_610_, v___x_611_);
v___y_597_ = v___y_608_;
v___y_598_ = v___x_612_;
goto v___jp_596_;
}
}
}
else
{
lean_object* v___x_614_; 
lean_dec_ref(v_lower_595_);
v___x_614_ = lean_box(0);
return v___x_614_;
}
v___jp_596_:
{
if (v___y_597_ == 0)
{
lean_object* v___x_599_; 
lean_dec_ref(v_lower_595_);
v___x_599_ = lean_box(0);
return v___x_599_;
}
else
{
if (v___y_598_ == 0)
{
lean_object* v___x_600_; 
lean_dec_ref(v_lower_595_);
v___x_600_ = lean_box(0);
return v___x_600_;
}
else
{
lean_object* v___x_601_; 
v___x_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_601_, 0, v_lower_595_);
return v___x_601_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(lean_object* v___x_615_, lean_object* v_lower_616_, lean_object* v___x_617_, lean_object* v___x_618_, lean_object* v_inst_619_, lean_object* v_R_620_, lean_object* v_a_621_, uint8_t v_b_622_, lean_object* v_c_623_){
_start:
{
uint8_t v___x_624_; 
v___x_624_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_615_, v_lower_616_, v___x_617_, v___x_618_, v_a_621_, v_b_622_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___boxed(lean_object* v___x_625_, lean_object* v_lower_626_, lean_object* v___x_627_, lean_object* v___x_628_, lean_object* v_inst_629_, lean_object* v_R_630_, lean_object* v_a_631_, lean_object* v_b_632_, lean_object* v_c_633_){
_start:
{
uint8_t v_b_boxed_634_; uint8_t v_res_635_; lean_object* v_r_636_; 
v_b_boxed_634_ = lean_unbox(v_b_632_);
v_res_635_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(v___x_625_, v_lower_626_, v___x_627_, v___x_628_, v_inst_629_, v_R_630_, v_a_631_, v_b_boxed_634_, v_c_633_);
lean_dec(v___x_628_);
lean_dec_ref(v___x_627_);
lean_dec_ref(v_lower_626_);
lean_dec(v___x_625_);
v_r_636_ = lean_box(v_res_635_);
return v_r_636_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(lean_object* v_lower_637_, lean_object* v___x_638_, lean_object* v___x_639_, lean_object* v_inst_640_, lean_object* v_R_641_, lean_object* v_a_642_, uint8_t v_b_643_, lean_object* v_c_644_){
_start:
{
uint8_t v___x_645_; 
v___x_645_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v_lower_637_, v___x_638_, v___x_639_, v_a_642_, v_b_643_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___boxed(lean_object* v_lower_646_, lean_object* v___x_647_, lean_object* v___x_648_, lean_object* v_inst_649_, lean_object* v_R_650_, lean_object* v_a_651_, lean_object* v_b_652_, lean_object* v_c_653_){
_start:
{
uint8_t v_b_boxed_654_; uint8_t v_res_655_; lean_object* v_r_656_; 
v_b_boxed_654_ = lean_unbox(v_b_652_);
v_res_655_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(v_lower_646_, v___x_647_, v___x_648_, v_inst_649_, v_R_650_, v_a_651_, v_b_boxed_654_, v_c_653_);
lean_dec_ref(v___x_647_);
lean_dec_ref(v_lower_646_);
v_r_656_ = lean_box(v_res_655_);
return v_r_656_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1(lean_object* v___x_657_, lean_object* v_lower_658_, lean_object* v___x_659_, lean_object* v___x_660_, lean_object* v_inst_661_, lean_object* v_R_662_, lean_object* v_a_663_, uint8_t v_b_664_, lean_object* v_c_665_){
_start:
{
uint8_t v___x_666_; 
v___x_666_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg(v___x_657_, v___x_659_, v_a_663_, v_b_664_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___boxed(lean_object* v___x_667_, lean_object* v_lower_668_, lean_object* v___x_669_, lean_object* v___x_670_, lean_object* v_inst_671_, lean_object* v_R_672_, lean_object* v_a_673_, lean_object* v_b_674_, lean_object* v_c_675_){
_start:
{
uint8_t v_b_boxed_676_; uint8_t v_res_677_; lean_object* v_r_678_; 
v_b_boxed_676_ = lean_unbox(v_b_674_);
v_res_677_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1(v___x_667_, v_lower_668_, v___x_669_, v___x_670_, v_inst_671_, v_R_672_, v_a_673_, v_b_boxed_676_, v_c_675_);
lean_dec(v___x_670_);
lean_dec_ref(v___x_669_);
lean_dec_ref(v_lower_668_);
lean_dec(v___x_667_);
v_r_678_ = lean_box(v_res_677_);
return v_r_678_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3(lean_object* v_lower_679_, lean_object* v___x_680_, lean_object* v___x_681_, lean_object* v_inst_682_, lean_object* v_R_683_, lean_object* v_a_684_, uint8_t v_b_685_, lean_object* v_c_686_){
_start:
{
uint8_t v___x_687_; 
v___x_687_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(v_lower_679_, v___x_680_, v___x_681_, v_a_684_, v_b_685_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___boxed(lean_object* v_lower_688_, lean_object* v___x_689_, lean_object* v___x_690_, lean_object* v_inst_691_, lean_object* v_R_692_, lean_object* v_a_693_, lean_object* v_b_694_, lean_object* v_c_695_){
_start:
{
uint8_t v_b_boxed_696_; uint8_t v_res_697_; lean_object* v_r_698_; 
v_b_boxed_696_ = lean_unbox(v_b_694_);
v_res_697_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3(v_lower_688_, v___x_689_, v___x_690_, v_inst_691_, v_R_692_, v_a_693_, v_b_boxed_696_, v_c_695_);
lean_dec_ref(v___x_689_);
lean_dec_ref(v_lower_688_);
v_r_698_ = lean_box(v_res_697_);
return v_r_698_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx(lean_object* v_x_699_){
_start:
{
switch(lean_obj_tag(v_x_699_))
{
case 0:
{
lean_object* v___x_700_; 
v___x_700_ = lean_unsigned_to_nat(0u);
return v___x_700_;
}
case 1:
{
lean_object* v___x_701_; 
v___x_701_ = lean_unsigned_to_nat(1u);
return v___x_701_;
}
default: 
{
lean_object* v___x_702_; 
v___x_702_ = lean_unsigned_to_nat(2u);
return v___x_702_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___boxed(lean_object* v_x_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Std_Http_URI_Host_ctorIdx(v_x_703_);
lean_dec_ref(v_x_703_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___redArg(lean_object* v_t_705_, lean_object* v_k_706_){
_start:
{
lean_object* v_name_707_; lean_object* v___x_708_; 
v_name_707_ = lean_ctor_get(v_t_705_, 0);
lean_inc_ref(v_name_707_);
lean_dec_ref(v_t_705_);
v___x_708_ = lean_apply_1(v_k_706_, v_name_707_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim(lean_object* v_motive_709_, lean_object* v_ctorIdx_710_, lean_object* v_t_711_, lean_object* v_h_712_, lean_object* v_k_713_){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_711_, v_k_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___boxed(lean_object* v_motive_715_, lean_object* v_ctorIdx_716_, lean_object* v_t_717_, lean_object* v_h_718_, lean_object* v_k_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Std_Http_URI_Host_ctorElim(v_motive_715_, v_ctorIdx_716_, v_t_717_, v_h_718_, v_k_719_);
lean_dec(v_ctorIdx_716_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim___redArg(lean_object* v_t_721_, lean_object* v_name_722_){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_721_, v_name_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim(lean_object* v_motive_724_, lean_object* v_t_725_, lean_object* v_h_726_, lean_object* v_name_727_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_725_, v_name_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim___redArg(lean_object* v_t_729_, lean_object* v_ipv4_730_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_729_, v_ipv4_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim(lean_object* v_motive_732_, lean_object* v_t_733_, lean_object* v_h_734_, lean_object* v_ipv4_735_){
_start:
{
lean_object* v___x_736_; 
v___x_736_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_733_, v_ipv4_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim___redArg(lean_object* v_t_737_, lean_object* v_ipv6_738_){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_737_, v_ipv6_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim(lean_object* v_motive_740_, lean_object* v_t_741_, lean_object* v_h_742_, lean_object* v_ipv6_743_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_741_, v_ipv6_743_);
return v___x_744_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost_default___closed__0(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = l_Std_Net_instInhabitedIPv4Addr_default;
v___x_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
return v___x_746_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost_default(void){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = lean_obj_once(&l_Std_Http_URI_instInhabitedHost_default___closed__0, &l_Std_Http_URI_instInhabitedHost_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedHost_default___closed__0);
return v___x_747_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost(void){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Std_Http_URI_instInhabitedHost_default;
return v___x_748_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqHost_beq(lean_object* v_x_749_, lean_object* v_x_750_){
_start:
{
switch(lean_obj_tag(v_x_749_))
{
case 0:
{
if (lean_obj_tag(v_x_750_) == 0)
{
lean_object* v_name_751_; lean_object* v_name_752_; uint8_t v___x_753_; 
v_name_751_ = lean_ctor_get(v_x_749_, 0);
v_name_752_ = lean_ctor_get(v_x_750_, 0);
v___x_753_ = lean_string_dec_eq(v_name_751_, v_name_752_);
return v___x_753_;
}
else
{
uint8_t v___x_754_; 
v___x_754_ = 0;
return v___x_754_;
}
}
case 1:
{
if (lean_obj_tag(v_x_750_) == 1)
{
lean_object* v_ipv4_755_; lean_object* v_ipv4_756_; uint8_t v___x_757_; 
v_ipv4_755_ = lean_ctor_get(v_x_749_, 0);
v_ipv4_756_ = lean_ctor_get(v_x_750_, 0);
v___x_757_ = l_Std_Net_instDecidableEqIPv4Addr_decEq(v_ipv4_755_, v_ipv4_756_);
return v___x_757_;
}
else
{
uint8_t v___x_758_; 
v___x_758_ = 0;
return v___x_758_;
}
}
default: 
{
if (lean_obj_tag(v_x_750_) == 2)
{
lean_object* v_ipv6_759_; lean_object* v_ipv6_760_; uint8_t v___x_761_; 
v_ipv6_759_ = lean_ctor_get(v_x_749_, 0);
v_ipv6_760_ = lean_ctor_get(v_x_750_, 0);
v___x_761_ = l_Std_Net_instDecidableEqIPv6Addr_decEq(v_ipv6_759_, v_ipv6_760_);
return v___x_761_;
}
else
{
uint8_t v___x_762_; 
v___x_762_ = 0;
return v___x_762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqHost_beq___boxed(lean_object* v_x_763_, lean_object* v_x_764_){
_start:
{
uint8_t v_res_765_; lean_object* v_r_766_; 
v_res_765_ = l_Std_Http_URI_instBEqHost_beq(v_x_763_, v_x_764_);
lean_dec_ref(v_x_764_);
lean_dec_ref(v_x_763_);
v_r_766_ = lean_box(v_res_765_);
return v_r_766_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprHost___lam__0___closed__4(void){
_start:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = lean_unsigned_to_nat(2u);
v___x_774_ = lean_nat_to_int(v___x_773_);
return v___x_774_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprHost___lam__0___closed__5(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = lean_unsigned_to_nat(1u);
v___x_776_ = lean_nat_to_int(v___x_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0(lean_object* v_x_777_, lean_object* v_prec_778_){
_start:
{
lean_object* v___y_780_; lean_object* v_ctr_781_; lean_object* v_a_782_; lean_object* v___y_794_; lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = lean_unsigned_to_nat(1024u);
v___x_826_ = lean_nat_dec_le(v___x_825_, v_prec_778_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; 
v___x_827_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_794_ = v___x_827_;
goto v___jp_793_;
}
else
{
lean_object* v___x_828_; 
v___x_828_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_794_ = v___x_828_;
goto v___jp_793_;
}
v___jp_779_:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_783_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_784_ = lean_string_append(v___x_783_, v_ctr_781_);
v___x_785_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
v___x_786_ = lean_box(1);
v___x_787_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_785_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v___x_788_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
lean_ctor_set(v___x_788_, 1, v_a_782_);
lean_inc(v___y_780_);
v___x_789_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_789_, 0, v___y_780_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
v___x_790_ = 0;
v___x_791_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_791_, 0, v___x_789_);
lean_ctor_set_uint8(v___x_791_, sizeof(void*)*1, v___x_790_);
v___x_792_ = l_Repr_addAppParen(v___x_791_, v_prec_778_);
return v___x_792_;
}
v___jp_793_:
{
switch(lean_obj_tag(v_x_777_))
{
case 0:
{
lean_object* v_name_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_804_; 
v_name_795_ = lean_ctor_get(v_x_777_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_804_ == 0)
{
v___x_797_ = v_x_777_;
v_isShared_798_ = v_isSharedCheck_804_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_name_795_);
lean_dec(v_x_777_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_804_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_802_; 
v___x_799_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_800_ = l_String_quote(v_name_795_);
if (v_isShared_798_ == 0)
{
lean_ctor_set_tag(v___x_797_, 3);
lean_ctor_set(v___x_797_, 0, v___x_800_);
v___x_802_ = v___x_797_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_800_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
v___y_780_ = v___y_794_;
v_ctr_781_ = v___x_799_;
v_a_782_ = v___x_802_;
goto v___jp_779_;
}
}
}
case 1:
{
lean_object* v_ipv4_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_814_; 
v_ipv4_805_ = lean_ctor_get(v_x_777_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_814_ == 0)
{
v___x_807_ = v_x_777_;
v_isShared_808_ = v_isSharedCheck_814_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_ipv4_805_);
lean_dec(v_x_777_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_814_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_809_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_810_ = lean_uv_ntop_v4(v_ipv4_805_);
lean_dec_ref(v_ipv4_805_);
if (v_isShared_808_ == 0)
{
lean_ctor_set_tag(v___x_807_, 3);
lean_ctor_set(v___x_807_, 0, v___x_810_);
v___x_812_ = v___x_807_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v___x_810_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
v___y_780_ = v___y_794_;
v_ctr_781_ = v___x_809_;
v_a_782_ = v___x_812_;
goto v___jp_779_;
}
}
}
default: 
{
lean_object* v_ipv6_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_824_; 
v_ipv6_815_ = lean_ctor_get(v_x_777_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_824_ == 0)
{
v___x_817_ = v_x_777_;
v_isShared_818_ = v_isSharedCheck_824_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_ipv6_815_);
lean_dec(v_x_777_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_824_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_822_; 
v___x_819_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_820_ = lean_uv_ntop_v6(v_ipv6_815_);
lean_dec_ref(v_ipv6_815_);
if (v_isShared_818_ == 0)
{
lean_ctor_set_tag(v___x_817_, 3);
lean_ctor_set(v___x_817_, 0, v___x_820_);
v___x_822_ = v___x_817_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
v___y_780_ = v___y_794_;
v_ctr_781_ = v___x_819_;
v_a_782_ = v___x_822_;
goto v___jp_779_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0___boxed(lean_object* v_x_829_, lean_object* v_prec_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Std_Http_URI_instReprHost___lam__0(v_x_829_, v_prec_830_);
lean_dec(v_prec_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0(lean_object* v_x_836_){
_start:
{
switch(lean_obj_tag(v_x_836_))
{
case 0:
{
lean_object* v_name_837_; 
v_name_837_ = lean_ctor_get(v_x_836_, 0);
lean_inc_ref(v_name_837_);
return v_name_837_;
}
case 1:
{
lean_object* v_ipv4_838_; lean_object* v___x_839_; 
v_ipv4_838_ = lean_ctor_get(v_x_836_, 0);
v___x_839_ = lean_uv_ntop_v4(v_ipv4_838_);
return v___x_839_;
}
default: 
{
lean_object* v_ipv6_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_ipv6_840_ = lean_ctor_get(v_x_836_, 0);
v___x_841_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_842_ = lean_uv_ntop_v6(v_ipv6_840_);
v___x_843_ = lean_string_append(v___x_841_, v___x_842_);
lean_dec_ref(v___x_842_);
v___x_844_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_845_ = lean_string_append(v___x_843_, v___x_844_);
return v___x_845_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0___boxed(lean_object* v_x_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Std_Http_URI_instToStringHost___lam__0(v_x_846_);
lean_dec_ref(v_x_846_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx(lean_object* v_x_850_){
_start:
{
switch(lean_obj_tag(v_x_850_))
{
case 0:
{
lean_object* v___x_851_; 
v___x_851_ = lean_unsigned_to_nat(0u);
return v___x_851_;
}
case 1:
{
lean_object* v___x_852_; 
v___x_852_ = lean_unsigned_to_nat(1u);
return v___x_852_;
}
default: 
{
lean_object* v___x_853_; 
v___x_853_ = lean_unsigned_to_nat(2u);
return v___x_853_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___boxed(lean_object* v_x_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Std_Http_URI_Port_ctorIdx(v_x_854_);
lean_dec(v_x_854_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg(lean_object* v_t_856_, lean_object* v_k_857_){
_start:
{
if (lean_obj_tag(v_t_856_) == 2)
{
uint16_t v_port_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v_port_858_ = lean_ctor_get_uint16(v_t_856_, 0);
v___x_859_ = lean_box(v_port_858_);
v___x_860_ = lean_apply_1(v_k_857_, v___x_859_);
return v___x_860_;
}
else
{
return v_k_857_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg___boxed(lean_object* v_t_861_, lean_object* v_k_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_861_, v_k_862_);
lean_dec(v_t_861_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim(lean_object* v_motive_864_, lean_object* v_ctorIdx_865_, lean_object* v_t_866_, lean_object* v_h_867_, lean_object* v_k_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_866_, v_k_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___boxed(lean_object* v_motive_870_, lean_object* v_ctorIdx_871_, lean_object* v_t_872_, lean_object* v_h_873_, lean_object* v_k_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Std_Http_URI_Port_ctorElim(v_motive_870_, v_ctorIdx_871_, v_t_872_, v_h_873_, v_k_874_);
lean_dec(v_t_872_);
lean_dec(v_ctorIdx_871_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg(lean_object* v_t_876_, lean_object* v_omitted_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_876_, v_omitted_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg___boxed(lean_object* v_t_879_, lean_object* v_omitted_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Std_Http_URI_Port_omitted_elim___redArg(v_t_879_, v_omitted_880_);
lean_dec(v_t_879_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim(lean_object* v_motive_882_, lean_object* v_t_883_, lean_object* v_h_884_, lean_object* v_omitted_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_883_, v_omitted_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___boxed(lean_object* v_motive_887_, lean_object* v_t_888_, lean_object* v_h_889_, lean_object* v_omitted_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Std_Http_URI_Port_omitted_elim(v_motive_887_, v_t_888_, v_h_889_, v_omitted_890_);
lean_dec(v_t_888_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg(lean_object* v_t_892_, lean_object* v_empty_893_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_892_, v_empty_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg___boxed(lean_object* v_t_895_, lean_object* v_empty_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Std_Http_URI_Port_empty_elim___redArg(v_t_895_, v_empty_896_);
lean_dec(v_t_895_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim(lean_object* v_motive_898_, lean_object* v_t_899_, lean_object* v_h_900_, lean_object* v_empty_901_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_899_, v_empty_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___boxed(lean_object* v_motive_903_, lean_object* v_t_904_, lean_object* v_h_905_, lean_object* v_empty_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Std_Http_URI_Port_empty_elim(v_motive_903_, v_t_904_, v_h_905_, v_empty_906_);
lean_dec(v_t_904_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg(lean_object* v_t_908_, lean_object* v_value_909_){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_908_, v_value_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg___boxed(lean_object* v_t_911_, lean_object* v_value_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Std_Http_URI_Port_value_elim___redArg(v_t_911_, v_value_912_);
lean_dec(v_t_911_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim(lean_object* v_motive_914_, lean_object* v_t_915_, lean_object* v_h_916_, lean_object* v_value_917_){
_start:
{
lean_object* v___x_918_; 
v___x_918_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_915_, v_value_917_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___boxed(lean_object* v_motive_919_, lean_object* v_t_920_, lean_object* v_h_921_, lean_object* v_value_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Std_Http_URI_Port_value_elim(v_motive_919_, v_t_920_, v_h_921_, v_value_922_);
lean_dec(v_t_920_);
return v_res_923_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedPort_default(void){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = lean_box(0);
return v___x_924_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedPort(void){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = lean_box(0);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr(lean_object* v_x_938_, lean_object* v_prec_939_){
_start:
{
lean_object* v___y_941_; lean_object* v___y_948_; 
switch(lean_obj_tag(v_x_938_))
{
case 0:
{
lean_object* v___x_954_; uint8_t v___x_955_; 
v___x_954_ = lean_unsigned_to_nat(1024u);
v___x_955_ = lean_nat_dec_le(v___x_954_, v_prec_939_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; 
v___x_956_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_948_ = v___x_956_;
goto v___jp_947_;
}
else
{
lean_object* v___x_957_; 
v___x_957_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_948_ = v___x_957_;
goto v___jp_947_;
}
}
case 1:
{
lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_958_ = lean_unsigned_to_nat(1024u);
v___x_959_ = lean_nat_dec_le(v___x_958_, v_prec_939_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; 
v___x_960_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_941_ = v___x_960_;
goto v___jp_940_;
}
else
{
lean_object* v___x_961_; 
v___x_961_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_941_ = v___x_961_;
goto v___jp_940_;
}
}
default: 
{
uint16_t v_port_962_; lean_object* v___y_964_; lean_object* v___x_974_; uint8_t v___x_975_; 
v_port_962_ = lean_ctor_get_uint16(v_x_938_, 0);
v___x_974_ = lean_unsigned_to_nat(1024u);
v___x_975_ = lean_nat_dec_le(v___x_974_, v_prec_939_);
if (v___x_975_ == 0)
{
lean_object* v___x_976_; 
v___x_976_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_964_ = v___x_976_;
goto v___jp_963_;
}
else
{
lean_object* v___x_977_; 
v___x_977_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_964_ = v___x_977_;
goto v___jp_963_;
}
v___jp_963_:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; uint8_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_965_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__6));
v___x_966_ = lean_uint16_to_nat(v_port_962_);
v___x_967_ = l_Nat_reprFast(v___x_966_);
v___x_968_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
v___x_969_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_965_);
lean_ctor_set(v___x_969_, 1, v___x_968_);
lean_inc(v___y_964_);
v___x_970_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_970_, 0, v___y_964_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = 0;
v___x_972_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set_uint8(v___x_972_, sizeof(void*)*1, v___x_971_);
v___x_973_ = l_Repr_addAppParen(v___x_972_, v_prec_939_);
return v___x_973_;
}
}
}
v___jp_940_:
{
lean_object* v___x_942_; lean_object* v___x_943_; uint8_t v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_942_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__1));
lean_inc(v___y_941_);
v___x_943_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_943_, 0, v___y_941_);
lean_ctor_set(v___x_943_, 1, v___x_942_);
v___x_944_ = 0;
v___x_945_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_945_, 0, v___x_943_);
lean_ctor_set_uint8(v___x_945_, sizeof(void*)*1, v___x_944_);
v___x_946_ = l_Repr_addAppParen(v___x_945_, v_prec_939_);
return v___x_946_;
}
v___jp_947_:
{
lean_object* v___x_949_; lean_object* v___x_950_; uint8_t v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_949_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__3));
lean_inc(v___y_948_);
v___x_950_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_950_, 0, v___y_948_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
v___x_951_ = 0;
v___x_952_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set_uint8(v___x_952_, sizeof(void*)*1, v___x_951_);
v___x_953_ = l_Repr_addAppParen(v___x_952_, v_prec_939_);
return v___x_953_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr___boxed(lean_object* v_x_978_, lean_object* v_prec_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Std_Http_URI_instReprPort_repr(v_x_978_, v_prec_979_);
lean_dec(v_prec_979_);
lean_dec(v_x_978_);
return v_res_980_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort_decEq(lean_object* v_x_983_, lean_object* v_x_984_){
_start:
{
switch(lean_obj_tag(v_x_983_))
{
case 0:
{
if (lean_obj_tag(v_x_984_) == 0)
{
uint8_t v___x_985_; 
v___x_985_ = 1;
return v___x_985_;
}
else
{
uint8_t v___x_986_; 
v___x_986_ = 0;
return v___x_986_;
}
}
case 1:
{
if (lean_obj_tag(v_x_984_) == 1)
{
uint8_t v___x_987_; 
v___x_987_ = 1;
return v___x_987_;
}
else
{
uint8_t v___x_988_; 
v___x_988_ = 0;
return v___x_988_;
}
}
default: 
{
if (lean_obj_tag(v_x_984_) == 2)
{
uint16_t v_port_989_; uint16_t v_port_990_; uint8_t v___x_991_; 
v_port_989_ = lean_ctor_get_uint16(v_x_983_, 0);
v_port_990_ = lean_ctor_get_uint16(v_x_984_, 0);
v___x_991_ = lean_uint16_dec_eq(v_port_989_, v_port_990_);
return v___x_991_;
}
else
{
uint8_t v___x_992_; 
v___x_992_ = 0;
return v___x_992_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort_decEq___boxed(lean_object* v_x_993_, lean_object* v_x_994_){
_start:
{
uint8_t v_res_995_; lean_object* v_r_996_; 
v_res_995_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_x_993_, v_x_994_);
lean_dec(v_x_994_);
lean_dec(v_x_993_);
v_r_996_ = lean_box(v_res_995_);
return v_r_996_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort(lean_object* v_x_997_, lean_object* v_x_998_){
_start:
{
uint8_t v___x_999_; 
v___x_999_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_x_997_, v_x_998_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort___boxed(lean_object* v_x_1000_, lean_object* v_x_1001_){
_start:
{
uint8_t v_res_1002_; lean_object* v_r_1003_; 
v_res_1002_ = l_Std_Http_URI_instDecidableEqPort(v_x_1000_, v_x_1001_);
lean_dec(v_x_1001_);
lean_dec(v_x_1000_);
v_r_1003_ = lean_box(v_res_1002_);
return v_r_1003_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority_default___closed__0(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1004_ = lean_box(0);
v___x_1005_ = l_Std_Http_URI_instInhabitedHost_default;
v___x_1006_ = lean_box(0);
v___x_1007_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
lean_ctor_set(v___x_1007_, 1, v___x_1005_);
lean_ctor_set(v___x_1007_, 2, v___x_1004_);
return v___x_1007_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority_default(void){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = lean_obj_once(&l_Std_Http_URI_instInhabitedAuthority_default___closed__0, &l_Std_Http_URI_instInhabitedAuthority_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedAuthority_default___closed__0);
return v___x_1008_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority(void){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = l_Std_Http_URI_instInhabitedAuthority_default;
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(lean_object* v_x_1010_, lean_object* v_x_1011_){
_start:
{
if (lean_obj_tag(v_x_1010_) == 0)
{
lean_object* v___x_1012_; 
v___x_1012_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_1012_;
}
else
{
lean_object* v_val_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v_val_1013_ = lean_ctor_get(v_x_1010_, 0);
lean_inc(v_val_1013_);
lean_dec_ref_known(v_x_1010_, 1);
v___x_1014_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_1015_ = l_Std_Http_URI_instReprUserInfo_repr___redArg(v_val_1013_);
v___x_1016_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1014_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = l_Repr_addAppParen(v___x_1016_, v_x_1011_);
return v___x_1017_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0___boxed(lean_object* v_x_1018_, lean_object* v_x_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(v_x_1018_, v_x_1019_);
lean_dec(v_x_1019_);
return v_res_1020_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = lean_unsigned_to_nat(8u);
v___x_1034_ = lean_nat_to_int(v___x_1033_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg(lean_object* v_x_1038_){
_start:
{
lean_object* v_userInfo_1039_; lean_object* v_host_1040_; lean_object* v_port_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; uint8_t v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v_ctr_1061_; lean_object* v_a_1062_; 
v_userInfo_1039_ = lean_ctor_get(v_x_1038_, 0);
lean_inc(v_userInfo_1039_);
v_host_1040_ = lean_ctor_get(v_x_1038_, 1);
lean_inc_ref(v_host_1040_);
v_port_1041_ = lean_ctor_get(v_x_1038_, 2);
lean_inc(v_port_1041_);
lean_dec_ref(v_x_1038_);
v___x_1042_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_1043_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3));
v___x_1044_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_1045_ = lean_unsigned_to_nat(0u);
v___x_1046_ = l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(v_userInfo_1039_, v___x_1045_);
v___x_1047_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1044_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
v___x_1048_ = 0;
v___x_1049_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1049_, 0, v___x_1047_);
lean_ctor_set_uint8(v___x_1049_, sizeof(void*)*1, v___x_1048_);
v___x_1050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1043_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_1052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = lean_box(1);
v___x_1054_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1052_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5));
v___x_1056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
lean_ctor_set(v___x_1057_, 1, v___x_1042_);
v___x_1058_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_1059_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
switch(lean_obj_tag(v_host_1040_))
{
case 0:
{
lean_object* v_name_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1099_; 
v_name_1090_ = lean_ctor_get(v_host_1040_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v_host_1040_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1092_ = v_host_1040_;
v_isShared_1093_ = v_isSharedCheck_1099_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_name_1090_);
lean_dec(v_host_1040_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1099_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___x_1094_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_1095_ = l_String_quote(v_name_1090_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set_tag(v___x_1092_, 3);
lean_ctor_set(v___x_1092_, 0, v___x_1095_);
v___x_1097_ = v___x_1092_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
v_ctr_1061_ = v___x_1094_;
v_a_1062_ = v___x_1097_;
goto v___jp_1060_;
}
}
}
case 1:
{
lean_object* v_ipv4_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1109_; 
v_ipv4_1100_ = lean_ctor_get(v_host_1040_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_host_1040_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1102_ = v_host_1040_;
v_isShared_1103_ = v_isSharedCheck_1109_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_ipv4_1100_);
lean_dec(v_host_1040_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1109_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1107_; 
v___x_1104_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_1105_ = lean_uv_ntop_v4(v_ipv4_1100_);
lean_dec_ref(v_ipv4_1100_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set_tag(v___x_1102_, 3);
lean_ctor_set(v___x_1102_, 0, v___x_1105_);
v___x_1107_ = v___x_1102_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v___x_1105_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
v_ctr_1061_ = v___x_1104_;
v_a_1062_ = v___x_1107_;
goto v___jp_1060_;
}
}
}
default: 
{
lean_object* v_ipv6_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1119_; 
v_ipv6_1110_ = lean_ctor_get(v_host_1040_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_host_1040_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1112_ = v_host_1040_;
v_isShared_1113_ = v_isSharedCheck_1119_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_ipv6_1110_);
lean_dec(v_host_1040_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1119_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1117_; 
v___x_1114_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_1115_ = lean_uv_ntop_v6(v_ipv6_1110_);
lean_dec_ref(v_ipv6_1110_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 3);
lean_ctor_set(v___x_1112_, 0, v___x_1115_);
v___x_1117_ = v___x_1112_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
v_ctr_1061_ = v___x_1114_;
v_a_1062_ = v___x_1117_;
goto v___jp_1060_;
}
}
}
}
v___jp_1060_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1063_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_1064_ = lean_string_append(v___x_1063_, v_ctr_1061_);
v___x_1065_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
v___x_1066_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
lean_ctor_set(v___x_1066_, 1, v___x_1053_);
v___x_1067_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
lean_ctor_set(v___x_1067_, 1, v_a_1062_);
v___x_1068_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1059_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*1, v___x_1048_);
v___x_1070_ = l_Repr_addAppParen(v___x_1069_, v___x_1045_);
v___x_1071_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1058_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
lean_ctor_set_uint8(v___x_1072_, sizeof(void*)*1, v___x_1048_);
v___x_1073_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1057_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
lean_ctor_set(v___x_1074_, 1, v___x_1051_);
v___x_1075_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
lean_ctor_set(v___x_1075_, 1, v___x_1053_);
v___x_1076_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8));
v___x_1077_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1075_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
v___x_1078_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
lean_ctor_set(v___x_1078_, 1, v___x_1042_);
v___x_1079_ = l_Std_Http_URI_instReprPort_repr(v_port_1041_, v___x_1045_);
lean_dec(v_port_1041_);
v___x_1080_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1058_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
lean_ctor_set_uint8(v___x_1081_, sizeof(void*)*1, v___x_1048_);
v___x_1082_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1078_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_1084_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_1085_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v___x_1082_);
v___x_1086_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_1087_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1083_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
lean_ctor_set_uint8(v___x_1089_, sizeof(void*)*1, v___x_1048_);
return v___x_1089_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr(lean_object* v_x_1120_, lean_object* v_prec_1121_){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_x_1120_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___boxed(lean_object* v_x_1123_, lean_object* v_prec_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Std_Http_URI_instReprAuthority_repr(v_x_1123_, v_prec_1124_);
lean_dec(v_prec_1124_);
return v_res_1125_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(lean_object* v_x_1128_, lean_object* v_x_1129_){
_start:
{
if (lean_obj_tag(v_x_1128_) == 0)
{
if (lean_obj_tag(v_x_1129_) == 0)
{
uint8_t v___x_1130_; 
v___x_1130_ = 1;
return v___x_1130_;
}
else
{
uint8_t v___x_1131_; 
v___x_1131_ = 0;
return v___x_1131_;
}
}
else
{
if (lean_obj_tag(v_x_1129_) == 0)
{
uint8_t v___x_1132_; 
v___x_1132_ = 0;
return v___x_1132_;
}
else
{
lean_object* v_val_1133_; lean_object* v_val_1134_; uint8_t v___x_1135_; 
v_val_1133_ = lean_ctor_get(v_x_1128_, 0);
v_val_1134_ = lean_ctor_get(v_x_1129_, 0);
v___x_1135_ = l_Std_Http_URI_instBEqUserInfo_beq(v_val_1133_, v_val_1134_);
return v___x_1135_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0___boxed(lean_object* v_x_1136_, lean_object* v_x_1137_){
_start:
{
uint8_t v_res_1138_; lean_object* v_r_1139_; 
v_res_1138_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(v_x_1136_, v_x_1137_);
lean_dec(v_x_1137_);
lean_dec(v_x_1136_);
v_r_1139_ = lean_box(v_res_1138_);
return v_r_1139_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqAuthority_beq(lean_object* v_x_1140_, lean_object* v_x_1141_){
_start:
{
lean_object* v_userInfo_1142_; lean_object* v_host_1143_; lean_object* v_port_1144_; lean_object* v_userInfo_1145_; lean_object* v_host_1146_; lean_object* v_port_1147_; uint8_t v___x_1148_; 
v_userInfo_1142_ = lean_ctor_get(v_x_1140_, 0);
v_host_1143_ = lean_ctor_get(v_x_1140_, 1);
v_port_1144_ = lean_ctor_get(v_x_1140_, 2);
v_userInfo_1145_ = lean_ctor_get(v_x_1141_, 0);
v_host_1146_ = lean_ctor_get(v_x_1141_, 1);
v_port_1147_ = lean_ctor_get(v_x_1141_, 2);
v___x_1148_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(v_userInfo_1142_, v_userInfo_1145_);
if (v___x_1148_ == 0)
{
return v___x_1148_;
}
else
{
uint8_t v___x_1149_; 
v___x_1149_ = l_Std_Http_URI_instBEqHost_beq(v_host_1143_, v_host_1146_);
if (v___x_1149_ == 0)
{
return v___x_1149_;
}
else
{
uint8_t v___x_1150_; 
v___x_1150_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_port_1144_, v_port_1147_);
return v___x_1150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqAuthority_beq___boxed(lean_object* v_x_1151_, lean_object* v_x_1152_){
_start:
{
uint8_t v_res_1153_; lean_object* v_r_1154_; 
v_res_1153_ = l_Std_Http_URI_instBEqAuthority_beq(v_x_1151_, v_x_1152_);
lean_dec_ref(v_x_1152_);
lean_dec_ref(v_x_1151_);
v_r_1154_ = lean_box(v_res_1153_);
return v_r_1154_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringAuthority___lam__0(lean_object* v_auth_1160_){
_start:
{
lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v_userInfo_1167_; lean_object* v_host_1168_; lean_object* v_port_1169_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1181_; 
v_userInfo_1167_ = lean_ctor_get(v_auth_1160_, 0);
lean_inc(v_userInfo_1167_);
v_host_1168_ = lean_ctor_get(v_auth_1160_, 1);
lean_inc_ref(v_host_1168_);
v_port_1169_ = lean_ctor_get(v_auth_1160_, 2);
lean_inc(v_port_1169_);
lean_dec_ref(v_auth_1160_);
if (lean_obj_tag(v_userInfo_1167_) == 0)
{
lean_object* v___x_1191_; 
v___x_1191_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_1181_ = v___x_1191_;
goto v___jp_1180_;
}
else
{
lean_object* v_val_1192_; lean_object* v_password_1193_; 
v_val_1192_ = lean_ctor_get(v_userInfo_1167_, 0);
lean_inc(v_val_1192_);
lean_dec_ref_known(v_userInfo_1167_, 1);
v_password_1193_ = lean_ctor_get(v_val_1192_, 1);
if (lean_obj_tag(v_password_1193_) == 0)
{
lean_object* v_username_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v_username_1194_ = lean_ctor_get(v_val_1192_, 0);
lean_inc_ref(v_username_1194_);
lean_dec(v_val_1192_);
v___x_1195_ = lean_string_from_utf8_unchecked(v_username_1194_);
v___x_1196_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_1197_ = lean_string_append(v___x_1195_, v___x_1196_);
v___y_1181_ = v___x_1197_;
goto v___jp_1180_;
}
else
{
lean_object* v_username_1198_; lean_object* v_val_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
lean_inc_ref(v_password_1193_);
v_username_1198_ = lean_ctor_get(v_val_1192_, 0);
lean_inc_ref(v_username_1198_);
lean_dec(v_val_1192_);
v_val_1199_ = lean_ctor_get(v_password_1193_, 0);
lean_inc(v_val_1199_);
lean_dec_ref_known(v_password_1193_, 1);
v___x_1200_ = lean_string_from_utf8_unchecked(v_username_1198_);
v___x_1201_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_1202_ = lean_string_append(v___x_1200_, v___x_1201_);
v___x_1203_ = lean_string_from_utf8_unchecked(v_val_1199_);
v___x_1204_ = lean_string_append(v___x_1202_, v___x_1203_);
lean_dec_ref(v___x_1203_);
v___x_1205_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_1206_ = lean_string_append(v___x_1204_, v___x_1205_);
v___y_1181_ = v___x_1206_;
goto v___jp_1180_;
}
}
v___jp_1161_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = lean_string_append(v___y_1162_, v___y_1163_);
lean_dec_ref(v___y_1163_);
v___x_1166_ = lean_string_append(v___x_1165_, v___y_1164_);
lean_dec_ref(v___y_1164_);
return v___x_1166_;
}
v___jp_1170_:
{
switch(lean_obj_tag(v_port_1169_))
{
case 0:
{
lean_object* v___x_1173_; 
v___x_1173_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_1162_ = v___y_1171_;
v___y_1163_ = v___y_1172_;
v___y_1164_ = v___x_1173_;
goto v___jp_1161_;
}
case 1:
{
lean_object* v___x_1174_; 
v___x_1174_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_1162_ = v___y_1171_;
v___y_1163_ = v___y_1172_;
v___y_1164_ = v___x_1174_;
goto v___jp_1161_;
}
default: 
{
uint16_t v_port_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v_port_1175_ = lean_ctor_get_uint16(v_port_1169_, 0);
lean_dec_ref_known(v_port_1169_, 0);
v___x_1176_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_1177_ = lean_uint16_to_nat(v_port_1175_);
v___x_1178_ = l_Nat_reprFast(v___x_1177_);
v___x_1179_ = lean_string_append(v___x_1176_, v___x_1178_);
lean_dec_ref(v___x_1178_);
v___y_1162_ = v___y_1171_;
v___y_1163_ = v___y_1172_;
v___y_1164_ = v___x_1179_;
goto v___jp_1161_;
}
}
}
v___jp_1180_:
{
switch(lean_obj_tag(v_host_1168_))
{
case 0:
{
lean_object* v_name_1182_; 
v_name_1182_ = lean_ctor_get(v_host_1168_, 0);
lean_inc_ref(v_name_1182_);
lean_dec_ref_known(v_host_1168_, 1);
v___y_1171_ = v___y_1181_;
v___y_1172_ = v_name_1182_;
goto v___jp_1170_;
}
case 1:
{
lean_object* v_ipv4_1183_; lean_object* v___x_1184_; 
v_ipv4_1183_ = lean_ctor_get(v_host_1168_, 0);
lean_inc_ref(v_ipv4_1183_);
lean_dec_ref_known(v_host_1168_, 1);
v___x_1184_ = lean_uv_ntop_v4(v_ipv4_1183_);
lean_dec_ref(v_ipv4_1183_);
v___y_1171_ = v___y_1181_;
v___y_1172_ = v___x_1184_;
goto v___jp_1170_;
}
default: 
{
lean_object* v_ipv6_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v_ipv6_1185_ = lean_ctor_get(v_host_1168_, 0);
lean_inc_ref(v_ipv6_1185_);
lean_dec_ref_known(v_host_1168_, 1);
v___x_1186_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_1187_ = lean_uv_ntop_v6(v_ipv6_1185_);
lean_dec_ref(v_ipv6_1185_);
v___x_1188_ = lean_string_append(v___x_1186_, v___x_1187_);
lean_dec_ref(v___x_1187_);
v___x_1189_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_1190_ = lean_string_append(v___x_1188_, v___x_1189_);
v___y_1171_ = v___y_1181_;
v___y_1172_ = v___x_1190_;
goto v___jp_1170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_1216_, lean_object* v_x_1217_, lean_object* v_x_1218_){
_start:
{
if (lean_obj_tag(v_x_1218_) == 0)
{
lean_dec(v_x_1216_);
return v_x_1217_;
}
else
{
lean_object* v_head_1219_; lean_object* v_tail_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1232_; 
v_head_1219_ = lean_ctor_get(v_x_1218_, 0);
v_tail_1220_ = lean_ctor_get(v_x_1218_, 1);
v_isSharedCheck_1232_ = !lean_is_exclusive(v_x_1218_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1222_ = v_x_1218_;
v_isShared_1223_ = v_isSharedCheck_1232_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_tail_1220_);
lean_inc(v_head_1219_);
lean_dec(v_x_1218_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1232_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
lean_inc(v_x_1216_);
if (v_isShared_1223_ == 0)
{
lean_ctor_set_tag(v___x_1222_, 5);
lean_ctor_set(v___x_1222_, 1, v_x_1216_);
lean_ctor_set(v___x_1222_, 0, v_x_1217_);
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_x_1217_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_x_1216_);
v___x_1225_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1226_ = lean_string_from_utf8_unchecked(v_head_1219_);
v___x_1227_ = l_String_quote(v___x_1226_);
v___x_1228_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
v___x_1229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1225_);
lean_ctor_set(v___x_1229_, 1, v___x_1228_);
v_x_1217_ = v___x_1229_;
v_x_1218_ = v_tail_1220_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1(lean_object* v_x_1233_, lean_object* v_x_1234_, lean_object* v_x_1235_){
_start:
{
if (lean_obj_tag(v_x_1235_) == 0)
{
lean_dec(v_x_1233_);
return v_x_1234_;
}
else
{
lean_object* v_head_1236_; lean_object* v_tail_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1249_; 
v_head_1236_ = lean_ctor_get(v_x_1235_, 0);
v_tail_1237_ = lean_ctor_get(v_x_1235_, 1);
v_isSharedCheck_1249_ = !lean_is_exclusive(v_x_1235_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1239_ = v_x_1235_;
v_isShared_1240_ = v_isSharedCheck_1249_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_tail_1237_);
lean_inc(v_head_1236_);
lean_dec(v_x_1235_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1249_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
lean_inc(v_x_1233_);
if (v_isShared_1240_ == 0)
{
lean_ctor_set_tag(v___x_1239_, 5);
lean_ctor_set(v___x_1239_, 1, v_x_1233_);
lean_ctor_set(v___x_1239_, 0, v_x_1234_);
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_x_1234_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v_x_1233_);
v___x_1242_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1243_ = lean_string_from_utf8_unchecked(v_head_1236_);
v___x_1244_ = l_String_quote(v___x_1243_);
v___x_1245_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1244_);
v___x_1246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1242_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1_spec__2(v_x_1233_, v___x_1246_, v_tail_1237_);
return v___x_1247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(lean_object* v___y_1250_){
_start:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1251_ = lean_string_from_utf8_unchecked(v___y_1250_);
v___x_1252_ = l_String_quote(v___x_1251_);
v___x_1253_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0(lean_object* v_x_1254_, lean_object* v_x_1255_){
_start:
{
if (lean_obj_tag(v_x_1254_) == 0)
{
lean_object* v___x_1256_; 
lean_dec(v_x_1255_);
v___x_1256_ = lean_box(0);
return v___x_1256_;
}
else
{
lean_object* v_tail_1257_; 
v_tail_1257_ = lean_ctor_get(v_x_1254_, 1);
if (lean_obj_tag(v_tail_1257_) == 0)
{
lean_object* v_head_1258_; lean_object* v___x_1259_; 
lean_dec(v_x_1255_);
v_head_1258_ = lean_ctor_get(v_x_1254_, 0);
lean_inc(v_head_1258_);
lean_dec_ref_known(v_x_1254_, 2);
v___x_1259_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(v_head_1258_);
return v___x_1259_;
}
else
{
lean_object* v_head_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
lean_inc(v_tail_1257_);
v_head_1260_ = lean_ctor_get(v_x_1254_, 0);
lean_inc(v_head_1260_);
lean_dec_ref_known(v_x_1254_, 2);
v___x_1261_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(v_head_1260_);
v___x_1262_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1(v_x_1255_, v___x_1261_, v_tail_1257_);
return v___x_1262_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1267_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0));
v___x_1268_ = lean_string_length(v___x_1267_);
return v___x_1268_;
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2);
v___x_1270_ = lean_nat_to_int(v___x_1269_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0(lean_object* v_xs_1278_){
_start:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; uint8_t v___x_1281_; 
v___x_1279_ = lean_array_get_size(v_xs_1278_);
v___x_1280_ = lean_unsigned_to_nat(0u);
v___x_1281_ = lean_nat_dec_eq(v___x_1279_, v___x_1280_);
if (v___x_1281_ == 0)
{
lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1282_ = lean_array_to_list(v_xs_1278_);
v___x_1283_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_1284_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0(v___x_1282_, v___x_1283_);
v___x_1285_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3);
v___x_1286_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4));
v___x_1287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1286_);
lean_ctor_set(v___x_1287_, 1, v___x_1284_);
v___x_1288_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5));
v___x_1289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1287_);
lean_ctor_set(v___x_1289_, 1, v___x_1288_);
v___x_1290_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1285_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
v___x_1291_ = l_Std_Format_fill(v___x_1290_);
return v___x_1291_;
}
else
{
lean_object* v___x_1292_; 
lean_dec_ref(v_xs_1278_);
v___x_1292_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7));
return v___x_1292_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___redArg(lean_object* v_x_1305_){
_start:
{
lean_object* v_segments_1306_; uint8_t v_absolute_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1339_; 
v_segments_1306_ = lean_ctor_get(v_x_1305_, 0);
v_absolute_1307_ = lean_ctor_get_uint8(v_x_1305_, sizeof(void*)*1);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_x_1305_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1309_ = v_x_1305_;
v_isShared_1310_ = v_isSharedCheck_1339_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_segments_1306_);
lean_dec(v_x_1305_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1339_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; lean_object* v___x_1318_; 
v___x_1311_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_1312_ = ((lean_object*)(l_Std_Http_URI_instReprPath_repr___redArg___closed__3));
v___x_1313_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_1314_ = l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0(v_segments_1306_);
v___x_1315_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1313_);
lean_ctor_set(v___x_1315_, 1, v___x_1314_);
v___x_1316_ = 0;
if (v_isShared_1310_ == 0)
{
lean_ctor_set_tag(v___x_1309_, 6);
lean_ctor_set(v___x_1309_, 0, v___x_1315_);
v___x_1318_ = v___x_1309_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1315_);
v___x_1318_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
lean_ctor_set_uint8(v___x_1318_, sizeof(void*)*1, v___x_1316_);
v___x_1319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1312_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_1321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1319_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = lean_box(1);
v___x_1323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = ((lean_object*)(l_Std_Http_URI_instReprPath_repr___redArg___closed__5));
v___x_1325_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1323_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
v___x_1326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
lean_ctor_set(v___x_1326_, 1, v___x_1311_);
v___x_1327_ = l_Bool_repr___redArg(v_absolute_1307_);
v___x_1328_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1313_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
lean_ctor_set_uint8(v___x_1329_, sizeof(void*)*1, v___x_1316_);
v___x_1330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1326_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_1332_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_1333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
lean_ctor_set(v___x_1333_, 1, v___x_1330_);
v___x_1334_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_1335_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1333_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
v___x_1336_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1331_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
v___x_1337_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
lean_ctor_set_uint8(v___x_1337_, sizeof(void*)*1, v___x_1316_);
return v___x_1337_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr(lean_object* v_x_1340_, lean_object* v_prec_1341_){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = l_Std_Http_URI_instReprPath_repr___redArg(v_x_1340_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___boxed(lean_object* v_x_1343_, lean_object* v_prec_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Std_Http_URI_instReprPath_repr(v_x_1343_, v_prec_1344_);
lean_dec(v_prec_1344_);
return v_res_1345_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(lean_object* v_xs_1348_, lean_object* v_ys_1349_, lean_object* v_x_1350_){
_start:
{
lean_object* v_zero_1351_; uint8_t v_isZero_1352_; 
v_zero_1351_ = lean_unsigned_to_nat(0u);
v_isZero_1352_ = lean_nat_dec_eq(v_x_1350_, v_zero_1351_);
if (v_isZero_1352_ == 1)
{
lean_dec(v_x_1350_);
return v_isZero_1352_;
}
else
{
lean_object* v_one_1353_; lean_object* v_n_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v_one_1353_ = lean_unsigned_to_nat(1u);
v_n_1354_ = lean_nat_sub(v_x_1350_, v_one_1353_);
lean_dec(v_x_1350_);
v___x_1355_ = lean_array_fget_borrowed(v_xs_1348_, v_n_1354_);
v___x_1356_ = lean_array_fget_borrowed(v_ys_1349_, v_n_1354_);
v___x_1357_ = lean_sarray_dec_eq(v___x_1355_, v___x_1356_);
if (v___x_1357_ == 0)
{
lean_dec(v_n_1354_);
return v___x_1357_;
}
else
{
v_x_1350_ = v_n_1354_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg___boxed(lean_object* v_xs_1359_, lean_object* v_ys_1360_, lean_object* v_x_1361_){
_start:
{
uint8_t v_res_1362_; lean_object* v_r_1363_; 
v_res_1362_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_xs_1359_, v_ys_1360_, v_x_1361_);
lean_dec_ref(v_ys_1360_);
lean_dec_ref(v_xs_1359_);
v_r_1363_ = lean_box(v_res_1362_);
return v_r_1363_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqPath_beq(lean_object* v_x_1364_, lean_object* v_x_1365_){
_start:
{
lean_object* v_segments_1366_; uint8_t v_absolute_1367_; lean_object* v_segments_1368_; uint8_t v_absolute_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; uint8_t v___x_1372_; 
v_segments_1366_ = lean_ctor_get(v_x_1364_, 0);
v_absolute_1367_ = lean_ctor_get_uint8(v_x_1364_, sizeof(void*)*1);
v_segments_1368_ = lean_ctor_get(v_x_1365_, 0);
v_absolute_1369_ = lean_ctor_get_uint8(v_x_1365_, sizeof(void*)*1);
v___x_1370_ = lean_array_get_size(v_segments_1366_);
v___x_1371_ = lean_array_get_size(v_segments_1368_);
v___x_1372_ = lean_nat_dec_eq(v___x_1370_, v___x_1371_);
if (v___x_1372_ == 0)
{
return v___x_1372_;
}
else
{
uint8_t v___x_1373_; 
v___x_1373_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_segments_1366_, v_segments_1368_, v___x_1370_);
if (v___x_1373_ == 0)
{
return v___x_1373_;
}
else
{
if (v_absolute_1369_ == 0)
{
if (v_absolute_1367_ == 0)
{
return v___x_1373_;
}
else
{
return v_absolute_1369_;
}
}
else
{
return v_absolute_1367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqPath_beq___boxed(lean_object* v_x_1374_, lean_object* v_x_1375_){
_start:
{
uint8_t v_res_1376_; lean_object* v_r_1377_; 
v_res_1376_ = l_Std_Http_URI_instBEqPath_beq(v_x_1374_, v_x_1375_);
lean_dec_ref(v_x_1375_);
lean_dec_ref(v_x_1374_);
v_r_1377_ = lean_box(v_res_1376_);
return v_r_1377_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0(lean_object* v_xs_1378_, lean_object* v_ys_1379_, lean_object* v_hsz_1380_, lean_object* v_x_1381_, lean_object* v_x_1382_){
_start:
{
uint8_t v___x_1383_; 
v___x_1383_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_xs_1378_, v_ys_1379_, v_x_1381_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___boxed(lean_object* v_xs_1384_, lean_object* v_ys_1385_, lean_object* v_hsz_1386_, lean_object* v_x_1387_, lean_object* v_x_1388_){
_start:
{
uint8_t v_res_1389_; lean_object* v_r_1390_; 
v_res_1389_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0(v_xs_1384_, v_ys_1385_, v_hsz_1386_, v_x_1387_, v_x_1388_);
lean_dec_ref(v_ys_1385_);
lean_dec_ref(v_xs_1384_);
v_r_1390_ = lean_box(v_res_1389_);
return v_r_1390_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__0(lean_object* v_x_1393_){
_start:
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_string_from_utf8_unchecked(v_x_1393_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__1(lean_object* v___f_1415_, lean_object* v_path_1416_){
_start:
{
lean_object* v_segments_1417_; uint8_t v_absolute_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; size_t v_sz_1421_; size_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v_result_1427_; 
v_segments_1417_ = lean_ctor_get(v_path_1416_, 0);
v_absolute_1418_ = lean_ctor_get_uint8(v_path_1416_, sizeof(void*)*1);
v___x_1419_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_1420_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_1421_ = lean_array_size(v_segments_1417_);
v___x_1422_ = ((size_t)0ULL);
v___x_1423_ = l_unsafeCast___redArg(v_segments_1417_);
v___x_1424_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1420_, v___f_1415_, v_sz_1421_, v___x_1422_, v___x_1423_);
v___x_1425_ = l_unsafeCast___redArg(v___x_1424_);
lean_dec(v___x_1424_);
v___x_1426_ = lean_array_to_list(v___x_1425_);
v_result_1427_ = l_String_intercalate(v___x_1419_, v___x_1426_);
if (v_absolute_1418_ == 0)
{
return v_result_1427_;
}
else
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_string_append(v___x_1419_, v_result_1427_);
lean_dec_ref(v_result_1427_);
return v___x_1428_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__1___boxed(lean_object* v___f_1429_, lean_object* v_path_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_Std_Http_URI_instToStringPath___lam__1(v___f_1429_, v_path_1430_);
lean_dec_ref(v_path_1430_);
return v_res_1431_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Path_isEmpty(lean_object* v_p_1436_){
_start:
{
lean_object* v_segments_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; uint8_t v___x_1440_; 
v_segments_1437_ = lean_ctor_get(v_p_1436_, 0);
v___x_1438_ = lean_array_get_size(v_segments_1437_);
v___x_1439_ = lean_unsigned_to_nat(0u);
v___x_1440_ = lean_nat_dec_eq(v___x_1438_, v___x_1439_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_isEmpty___boxed(lean_object* v_p_1441_){
_start:
{
uint8_t v_res_1442_; lean_object* v_r_1443_; 
v_res_1442_ = l_Std_Http_URI_Path_isEmpty(v_p_1441_);
lean_dec_ref(v_p_1441_);
v_r_1443_ = lean_box(v_res_1442_);
return v_r_1443_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_parent(lean_object* v_p_1444_){
_start:
{
lean_object* v_segments_1445_; uint8_t v_absolute_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; uint8_t v___x_1449_; 
v_segments_1445_ = lean_ctor_get(v_p_1444_, 0);
v_absolute_1446_ = lean_ctor_get_uint8(v_p_1444_, sizeof(void*)*1);
v___x_1447_ = lean_array_get_size(v_segments_1445_);
v___x_1448_ = lean_unsigned_to_nat(0u);
v___x_1449_ = lean_nat_dec_eq(v___x_1447_, v___x_1448_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1457_; 
lean_inc_ref(v_segments_1445_);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_p_1444_);
if (v_isSharedCheck_1457_ == 0)
{
lean_object* v_unused_1458_; 
v_unused_1458_ = lean_ctor_get(v_p_1444_, 0);
lean_dec(v_unused_1458_);
v___x_1451_ = v_p_1444_;
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
else
{
lean_dec(v_p_1444_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1453_; lean_object* v___x_1455_; 
v___x_1453_ = lean_array_pop(v_segments_1445_);
if (v_isShared_1452_ == 0)
{
lean_ctor_set(v___x_1451_, 0, v___x_1453_);
v___x_1455_ = v___x_1451_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1453_);
lean_ctor_set_uint8(v_reuseFailAlloc_1456_, sizeof(void*)*1, v_absolute_1446_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
else
{
return v_p_1444_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join(lean_object* v_p1_1459_, lean_object* v_p2_1460_){
_start:
{
uint8_t v_absolute_1461_; 
v_absolute_1461_ = lean_ctor_get_uint8(v_p2_1460_, sizeof(void*)*1);
if (v_absolute_1461_ == 0)
{
lean_object* v_segments_1462_; lean_object* v_segments_1463_; uint8_t v_absolute_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1472_; 
v_segments_1462_ = lean_ctor_get(v_p2_1460_, 0);
v_segments_1463_ = lean_ctor_get(v_p1_1459_, 0);
v_absolute_1464_ = lean_ctor_get_uint8(v_p1_1459_, sizeof(void*)*1);
v_isSharedCheck_1472_ = !lean_is_exclusive(v_p1_1459_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1466_ = v_p1_1459_;
v_isShared_1467_ = v_isSharedCheck_1472_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_segments_1463_);
lean_dec(v_p1_1459_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1472_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1468_; lean_object* v___x_1470_; 
v___x_1468_ = l_Array_append___redArg(v_segments_1463_, v_segments_1462_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 0, v___x_1468_);
v___x_1470_ = v___x_1466_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1468_);
lean_ctor_set_uint8(v_reuseFailAlloc_1471_, sizeof(void*)*1, v_absolute_1464_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
else
{
lean_dec_ref(v_p1_1459_);
lean_inc_ref(v_p2_1460_);
return v_p2_1460_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join___boxed(lean_object* v_p1_1473_, lean_object* v_p2_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_Std_Http_URI_Path_join(v_p1_1473_, v_p2_1474_);
lean_dec_ref(v_p2_1474_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_append(lean_object* v_p_1476_, lean_object* v_segment_1477_){
_start:
{
lean_object* v_segments_1478_; uint8_t v_absolute_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1488_; 
v_segments_1478_ = lean_ctor_get(v_p_1476_, 0);
v_absolute_1479_ = lean_ctor_get_uint8(v_p_1476_, sizeof(void*)*1);
v_isSharedCheck_1488_ = !lean_is_exclusive(v_p_1476_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1481_ = v_p_1476_;
v_isShared_1482_ = v_isSharedCheck_1488_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_segments_1478_);
lean_dec(v_p_1476_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1488_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1486_; 
v___x_1483_ = l_Std_Http_URI_EncodedSegment_encode(v_segment_1477_);
v___x_1484_ = lean_array_push(v_segments_1478_, v___x_1483_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 0, v___x_1484_);
v___x_1486_ = v___x_1481_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1484_);
lean_ctor_set_uint8(v_reuseFailAlloc_1487_, sizeof(void*)*1, v_absolute_1479_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_append___boxed(lean_object* v_p_1489_, lean_object* v_segment_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Std_Http_URI_Path_append(v_p_1489_, v_segment_1490_);
lean_dec_ref(v_segment_1490_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_appendEncoded(lean_object* v_p_1492_, lean_object* v_segment_1493_){
_start:
{
lean_object* v_segments_1494_; uint8_t v_absolute_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1503_; 
v_segments_1494_ = lean_ctor_get(v_p_1492_, 0);
v_absolute_1495_ = lean_ctor_get_uint8(v_p_1492_, sizeof(void*)*1);
v_isSharedCheck_1503_ = !lean_is_exclusive(v_p_1492_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1497_ = v_p_1492_;
v_isShared_1498_ = v_isSharedCheck_1503_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_segments_1494_);
lean_dec(v_p_1492_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1503_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1499_; lean_object* v___x_1501_; 
v___x_1499_ = lean_array_push(v_segments_1494_, v_segment_1493_);
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 0, v___x_1499_);
v___x_1501_ = v___x_1497_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1499_);
lean_ctor_set_uint8(v_reuseFailAlloc_1502_, sizeof(void*)*1, v_absolute_1495_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop(lean_object* v_input_1506_, lean_object* v_output_1507_){
_start:
{
if (lean_obj_tag(v_input_1506_) == 0)
{
lean_object* v___x_1508_; 
v___x_1508_ = l_List_reverse___redArg(v_output_1507_);
return v___x_1508_;
}
else
{
lean_object* v_head_1509_; lean_object* v_tail_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1527_; 
v_head_1509_ = lean_ctor_get(v_input_1506_, 0);
v_tail_1510_ = lean_ctor_get(v_input_1506_, 1);
v_isSharedCheck_1527_ = !lean_is_exclusive(v_input_1506_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1512_ = v_input_1506_;
v_isShared_1513_ = v_isSharedCheck_1527_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_tail_1510_);
lean_inc(v_head_1509_);
lean_dec(v_input_1506_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1527_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; uint8_t v___x_1516_; 
lean_inc(v_head_1509_);
v___x_1514_ = lean_string_from_utf8_unchecked(v_head_1509_);
v___x_1515_ = ((lean_object*)(l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0));
v___x_1516_ = lean_string_dec_eq(v___x_1514_, v___x_1515_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; uint8_t v___x_1518_; 
v___x_1517_ = ((lean_object*)(l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__1));
v___x_1518_ = lean_string_dec_eq(v___x_1514_, v___x_1517_);
lean_dec_ref(v___x_1514_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1520_; 
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 1, v_output_1507_);
v___x_1520_ = v___x_1512_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_head_1509_);
lean_ctor_set(v_reuseFailAlloc_1522_, 1, v_output_1507_);
v___x_1520_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
v_input_1506_ = v_tail_1510_;
v_output_1507_ = v___x_1520_;
goto _start;
}
}
else
{
lean_del_object(v___x_1512_);
lean_dec(v_head_1509_);
if (lean_obj_tag(v_output_1507_) == 0)
{
v_input_1506_ = v_tail_1510_;
goto _start;
}
else
{
lean_object* v_tail_1524_; 
v_tail_1524_ = lean_ctor_get(v_output_1507_, 1);
lean_inc(v_tail_1524_);
lean_dec_ref_known(v_output_1507_, 2);
v_input_1506_ = v_tail_1510_;
v_output_1507_ = v_tail_1524_;
goto _start;
}
}
}
else
{
lean_dec_ref(v___x_1514_);
lean_del_object(v___x_1512_);
lean_dec(v_head_1509_);
v_input_1506_ = v_tail_1510_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_normalize(lean_object* v_p_1528_){
_start:
{
lean_object* v_segments_1529_; uint8_t v_absolute_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1541_; 
v_segments_1529_ = lean_ctor_get(v_p_1528_, 0);
v_absolute_1530_ = lean_ctor_get_uint8(v_p_1528_, sizeof(void*)*1);
v_isSharedCheck_1541_ = !lean_is_exclusive(v_p_1528_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1532_ = v_p_1528_;
v_isShared_1533_ = v_isSharedCheck_1541_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_segments_1529_);
lean_dec(v_p_1528_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1541_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1539_; 
v___x_1534_ = lean_array_to_list(v_segments_1529_);
v___x_1535_ = lean_box(0);
v___x_1536_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop(v___x_1534_, v___x_1535_);
v___x_1537_ = lean_array_mk(v___x_1536_);
if (v_isShared_1533_ == 0)
{
lean_ctor_set(v___x_1532_, 0, v___x_1537_);
v___x_1539_ = v___x_1532_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1537_);
lean_ctor_set_uint8(v_reuseFailAlloc_1540_, sizeof(void*)*1, v_absolute_1530_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(size_t v_sz_1542_, size_t v_i_1543_, lean_object* v_bs_1544_){
_start:
{
uint8_t v___x_1545_; 
v___x_1545_ = lean_usize_dec_lt(v_i_1543_, v_sz_1542_);
if (v___x_1545_ == 0)
{
lean_object* v___x_1546_; 
v___x_1546_ = l_unsafeCast___redArg(v_bs_1544_);
lean_dec_ref(v_bs_1544_);
return v___x_1546_;
}
else
{
lean_object* v_v_1547_; lean_object* v___x_1548_; lean_object* v_bs_x27_1549_; lean_object* v___y_1551_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v_v_1547_ = lean_array_uget(v_bs_1544_, v_i_1543_);
v___x_1548_ = lean_unsigned_to_nat(0u);
v_bs_x27_1549_ = lean_array_uset(v_bs_1544_, v_i_1543_, v___x_1548_);
v___x_1557_ = l_unsafeCast___redArg(v_v_1547_);
lean_dec(v_v_1547_);
v___x_1558_ = l_Std_Http_URI_EncodedSegment_decode(v___x_1557_);
if (lean_obj_tag(v___x_1558_) == 0)
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_string_from_utf8_unchecked(v___x_1557_);
v___y_1551_ = v___x_1559_;
goto v___jp_1550_;
}
else
{
lean_object* v_val_1560_; 
lean_dec(v___x_1557_);
v_val_1560_ = lean_ctor_get(v___x_1558_, 0);
lean_inc(v_val_1560_);
lean_dec_ref_known(v___x_1558_, 1);
v___y_1551_ = v_val_1560_;
goto v___jp_1550_;
}
v___jp_1550_:
{
size_t v___x_1552_; size_t v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1552_ = ((size_t)1ULL);
v___x_1553_ = lean_usize_add(v_i_1543_, v___x_1552_);
v___x_1554_ = l_unsafeCast___redArg(v___y_1551_);
lean_dec_ref(v___y_1551_);
v___x_1555_ = lean_array_uset(v_bs_x27_1549_, v_i_1543_, v___x_1554_);
v_i_1543_ = v___x_1553_;
v_bs_1544_ = v___x_1555_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0___boxed(lean_object* v_sz_1561_, lean_object* v_i_1562_, lean_object* v_bs_1563_){
_start:
{
size_t v_sz_boxed_1564_; size_t v_i_boxed_1565_; lean_object* v_res_1566_; 
v_sz_boxed_1564_ = lean_unbox_usize(v_sz_1561_);
lean_dec(v_sz_1561_);
v_i_boxed_1565_ = lean_unbox_usize(v_i_1562_);
lean_dec(v_i_1562_);
v_res_1566_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(v_sz_boxed_1564_, v_i_boxed_1565_, v_bs_1563_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_toDecodedSegments(lean_object* v_p_1567_){
_start:
{
lean_object* v_segments_1568_; size_t v_sz_1569_; size_t v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v_segments_1568_ = lean_ctor_get(v_p_1567_, 0);
v_sz_1569_ = lean_array_size(v_segments_1568_);
v___x_1570_ = ((size_t)0ULL);
v___x_1571_ = l_unsafeCast___redArg(v_segments_1568_);
v___x_1572_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(v_sz_1569_, v___x_1570_, v___x_1571_);
v___x_1573_ = l_unsafeCast___redArg(v___x_1572_);
lean_dec_ref(v___x_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_toDecodedSegments___boxed(lean_object* v_p_1574_){
_start:
{
lean_object* v_res_1575_; 
v_res_1575_ = l_Std_Http_URI_Path_toDecodedSegments(v_p_1574_);
lean_dec_ref(v_p_1574_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg(lean_object* v_xs_1584_){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = ((lean_object*)(l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3));
v___x_1586_ = l_Array_repr___redArg(v___x_1585_, v_xs_1584_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1(lean_object* v_xs_1587_, lean_object* v_x_1588_){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = ((lean_object*)(l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3));
v___x_1590_ = l_Array_repr___redArg(v___x_1589_, v_xs_1587_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___boxed(lean_object* v_xs_1591_, lean_object* v_x_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_Std_Http_URI_instReprQuery___aux__1(v_xs_1591_, v_x_1592_);
lean_dec(v_x_1592_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_1594_, lean_object* v_x_1595_, lean_object* v_x_1596_){
_start:
{
if (lean_obj_tag(v_x_1596_) == 0)
{
lean_dec(v_x_1594_);
return v_x_1595_;
}
else
{
lean_object* v_head_1597_; lean_object* v_tail_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1607_; 
v_head_1597_ = lean_ctor_get(v_x_1596_, 0);
v_tail_1598_ = lean_ctor_get(v_x_1596_, 1);
v_isSharedCheck_1607_ = !lean_is_exclusive(v_x_1596_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1600_ = v_x_1596_;
v_isShared_1601_ = v_isSharedCheck_1607_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_tail_1598_);
lean_inc(v_head_1597_);
lean_dec(v_x_1596_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1607_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
lean_inc(v_x_1594_);
if (v_isShared_1601_ == 0)
{
lean_ctor_set_tag(v___x_1600_, 5);
lean_ctor_set(v___x_1600_, 1, v_x_1594_);
lean_ctor_set(v___x_1600_, 0, v_x_1595_);
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_x_1595_);
lean_ctor_set(v_reuseFailAlloc_1606_, 1, v_x_1594_);
v___x_1603_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
lean_object* v___x_1604_; 
v___x_1604_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
lean_ctor_set(v___x_1604_, 1, v_head_1597_);
v_x_1595_ = v___x_1604_;
v_x_1596_ = v_tail_1598_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2(lean_object* v_x_1608_, lean_object* v_x_1609_){
_start:
{
if (lean_obj_tag(v_x_1608_) == 0)
{
lean_object* v___x_1610_; 
lean_dec(v_x_1609_);
v___x_1610_ = lean_box(0);
return v___x_1610_;
}
else
{
lean_object* v_tail_1611_; 
v_tail_1611_ = lean_ctor_get(v_x_1608_, 1);
if (lean_obj_tag(v_tail_1611_) == 0)
{
lean_object* v_head_1612_; 
lean_dec(v_x_1609_);
v_head_1612_ = lean_ctor_get(v_x_1608_, 0);
lean_inc(v_head_1612_);
lean_dec_ref_known(v_x_1608_, 2);
return v_head_1612_;
}
else
{
lean_object* v_head_1613_; lean_object* v___x_1614_; 
lean_inc(v_tail_1611_);
v_head_1613_ = lean_ctor_get(v_x_1608_, 0);
lean_inc(v_head_1613_);
lean_dec_ref_known(v_x_1608_, 2);
v___x_1614_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2_spec__3(v_x_1609_, v_head_1613_, v_tail_1611_);
return v___x_1614_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(lean_object* v_x_1615_, lean_object* v_x_1616_){
_start:
{
if (lean_obj_tag(v_x_1615_) == 0)
{
lean_object* v___x_1617_; 
v___x_1617_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_1617_;
}
else
{
lean_object* v_val_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1630_; 
v_val_1618_ = lean_ctor_get(v_x_1615_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v_x_1615_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1620_ = v_x_1615_;
v_isShared_1621_ = v_isSharedCheck_1630_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_val_1618_);
lean_dec(v_x_1615_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1630_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1626_; 
v___x_1622_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_1623_ = lean_string_from_utf8_unchecked(v_val_1618_);
v___x_1624_ = l_String_quote(v___x_1623_);
if (v_isShared_1621_ == 0)
{
lean_ctor_set_tag(v___x_1620_, 3);
lean_ctor_set(v___x_1620_, 0, v___x_1624_);
v___x_1626_ = v___x_1620_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v___x_1624_);
v___x_1626_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1627_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1622_);
lean_ctor_set(v___x_1627_, 1, v___x_1626_);
v___x_1628_ = l_Repr_addAppParen(v___x_1627_, v_x_1616_);
return v___x_1628_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1___boxed(lean_object* v_x_1631_, lean_object* v_x_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(v_x_1631_, v_x_1632_);
lean_dec(v_x_1632_);
return v_res_1633_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1636_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0));
v___x_1637_ = lean_string_length(v___x_1636_);
return v___x_1637_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1638_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2, &l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2_once, _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2);
v___x_1639_ = lean_nat_to_int(v___x_1638_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(lean_object* v_x_1644_){
_start:
{
lean_object* v_fst_1645_; lean_object* v_snd_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1671_; 
v_fst_1645_ = lean_ctor_get(v_x_1644_, 0);
v_snd_1646_ = lean_ctor_get(v_x_1644_, 1);
v_isSharedCheck_1671_ = !lean_is_exclusive(v_x_1644_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1648_ = v_x_1644_;
v_isShared_1649_ = v_isSharedCheck_1671_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_snd_1646_);
lean_inc(v_fst_1645_);
lean_dec(v_x_1644_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1671_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1655_; 
v___x_1650_ = lean_string_from_utf8_unchecked(v_fst_1645_);
v___x_1651_ = l_String_quote(v___x_1650_);
v___x_1652_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1651_);
v___x_1653_ = lean_box(0);
if (v_isShared_1649_ == 0)
{
lean_ctor_set_tag(v___x_1648_, 1);
lean_ctor_set(v___x_1648_, 1, v___x_1653_);
lean_ctor_set(v___x_1648_, 0, v___x_1652_);
v___x_1655_ = v___x_1648_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1652_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v___x_1653_);
v___x_1655_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; uint8_t v___x_1668_; lean_object* v___x_1669_; 
v___x_1656_ = lean_unsigned_to_nat(0u);
v___x_1657_ = l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(v_snd_1646_, v___x_1656_);
v___x_1658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
lean_ctor_set(v___x_1658_, 1, v___x_1655_);
v___x_1659_ = l_List_reverse___redArg(v___x_1658_);
v___x_1660_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_1661_ = l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2(v___x_1659_, v___x_1660_);
v___x_1662_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3, &l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3_once, _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3);
v___x_1663_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4));
v___x_1664_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
lean_ctor_set(v___x_1664_, 1, v___x_1661_);
v___x_1665_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5));
v___x_1666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1664_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
v___x_1667_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1662_);
lean_ctor_set(v___x_1667_, 1, v___x_1666_);
v___x_1668_ = 0;
v___x_1669_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1669_, 0, v___x_1667_);
lean_ctor_set_uint8(v___x_1669_, sizeof(void*)*1, v___x_1668_);
return v___x_1669_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4_spec__6(lean_object* v_x_1672_, lean_object* v_x_1673_, lean_object* v_x_1674_){
_start:
{
if (lean_obj_tag(v_x_1674_) == 0)
{
lean_dec(v_x_1672_);
return v_x_1673_;
}
else
{
lean_object* v_head_1675_; lean_object* v_tail_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1686_; 
v_head_1675_ = lean_ctor_get(v_x_1674_, 0);
v_tail_1676_ = lean_ctor_get(v_x_1674_, 1);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_x_1674_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1678_ = v_x_1674_;
v_isShared_1679_ = v_isSharedCheck_1686_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_tail_1676_);
lean_inc(v_head_1675_);
lean_dec(v_x_1674_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1686_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
lean_inc(v_x_1672_);
if (v_isShared_1679_ == 0)
{
lean_ctor_set_tag(v___x_1678_, 5);
lean_ctor_set(v___x_1678_, 1, v_x_1672_);
lean_ctor_set(v___x_1678_, 0, v_x_1673_);
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_x_1673_);
lean_ctor_set(v_reuseFailAlloc_1685_, 1, v_x_1672_);
v___x_1681_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1682_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1675_);
v___x_1683_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v_x_1673_ = v___x_1683_;
v_x_1674_ = v_tail_1676_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4(lean_object* v_x_1687_, lean_object* v_x_1688_, lean_object* v_x_1689_){
_start:
{
if (lean_obj_tag(v_x_1689_) == 0)
{
lean_dec(v_x_1687_);
return v_x_1688_;
}
else
{
lean_object* v_head_1690_; lean_object* v_tail_1691_; lean_object* v___x_1693_; uint8_t v_isShared_1694_; uint8_t v_isSharedCheck_1701_; 
v_head_1690_ = lean_ctor_get(v_x_1689_, 0);
v_tail_1691_ = lean_ctor_get(v_x_1689_, 1);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_x_1689_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1693_ = v_x_1689_;
v_isShared_1694_ = v_isSharedCheck_1701_;
goto v_resetjp_1692_;
}
else
{
lean_inc(v_tail_1691_);
lean_inc(v_head_1690_);
lean_dec(v_x_1689_);
v___x_1693_ = lean_box(0);
v_isShared_1694_ = v_isSharedCheck_1701_;
goto v_resetjp_1692_;
}
v_resetjp_1692_:
{
lean_object* v___x_1696_; 
lean_inc(v_x_1687_);
if (v_isShared_1694_ == 0)
{
lean_ctor_set_tag(v___x_1693_, 5);
lean_ctor_set(v___x_1693_, 1, v_x_1687_);
lean_ctor_set(v___x_1693_, 0, v_x_1688_);
v___x_1696_ = v___x_1693_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_x_1688_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v_x_1687_);
v___x_1696_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1697_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1690_);
v___x_1698_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1696_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4_spec__6(v_x_1687_, v___x_1698_, v_tail_1691_);
return v___x_1699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1(lean_object* v_x_1702_, lean_object* v_x_1703_){
_start:
{
if (lean_obj_tag(v_x_1702_) == 0)
{
lean_object* v___x_1704_; 
lean_dec(v_x_1703_);
v___x_1704_ = lean_box(0);
return v___x_1704_;
}
else
{
lean_object* v_tail_1705_; 
v_tail_1705_ = lean_ctor_get(v_x_1702_, 1);
if (lean_obj_tag(v_tail_1705_) == 0)
{
lean_object* v_head_1706_; lean_object* v___x_1707_; 
lean_dec(v_x_1703_);
v_head_1706_ = lean_ctor_get(v_x_1702_, 0);
lean_inc(v_head_1706_);
lean_dec_ref_known(v_x_1702_, 2);
v___x_1707_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1706_);
return v___x_1707_;
}
else
{
lean_object* v_head_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
lean_inc(v_tail_1705_);
v_head_1708_ = lean_ctor_get(v_x_1702_, 0);
lean_inc(v_head_1708_);
lean_dec_ref_known(v_x_1702_, 2);
v___x_1709_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1708_);
v___x_1710_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4(v_x_1703_, v___x_1709_, v_tail_1705_);
return v___x_1710_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(lean_object* v_xs_1711_){
_start:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; uint8_t v___x_1714_; 
v___x_1712_ = lean_array_get_size(v_xs_1711_);
v___x_1713_ = lean_unsigned_to_nat(0u);
v___x_1714_ = lean_nat_dec_eq(v___x_1712_, v___x_1713_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1715_ = lean_array_to_list(v_xs_1711_);
v___x_1716_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_1717_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1(v___x_1715_, v___x_1716_);
v___x_1718_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3);
v___x_1719_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4));
v___x_1720_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1719_);
lean_ctor_set(v___x_1720_, 1, v___x_1717_);
v___x_1721_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5));
v___x_1722_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1720_);
lean_ctor_set(v___x_1722_, 1, v___x_1721_);
v___x_1723_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1718_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
v___x_1724_ = l_Std_Format_fill(v___x_1723_);
return v___x_1724_;
}
else
{
lean_object* v___x_1725_; 
lean_dec_ref(v_xs_1711_);
v___x_1725_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7));
return v___x_1725_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0(lean_object* v___y_1726_, lean_object* v___y_1727_){
_start:
{
lean_object* v___x_1728_; 
v___x_1728_ = l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(v___y_1726_);
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0___boxed(lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Std_Http_URI_instReprQuery___lam__0(v___y_1729_, v___y_1730_);
lean_dec(v___y_1730_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0(lean_object* v_x_1734_, lean_object* v_x_1735_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_x_1734_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___boxed(lean_object* v_x_1737_, lean_object* v_x_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0(v_x_1737_, v_x_1738_);
lean_dec(v_x_1738_);
return v_res_1739_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1___lam__0(lean_object* v___f_1744_, lean_object* v_x_1745_, lean_object* v_x_1746_){
_start:
{
lean_object* v_fst_1747_; lean_object* v_snd_1748_; lean_object* v_fst_1749_; lean_object* v_snd_1750_; uint8_t v___x_1751_; 
v_fst_1747_ = lean_ctor_get(v_x_1745_, 0);
lean_inc(v_fst_1747_);
v_snd_1748_ = lean_ctor_get(v_x_1745_, 1);
lean_inc(v_snd_1748_);
lean_dec_ref(v_x_1745_);
v_fst_1749_ = lean_ctor_get(v_x_1746_, 0);
lean_inc(v_fst_1749_);
v_snd_1750_ = lean_ctor_get(v_x_1746_, 1);
lean_inc(v_snd_1750_);
lean_dec_ref(v_x_1746_);
v___x_1751_ = lean_sarray_dec_eq(v_fst_1747_, v_fst_1749_);
lean_dec(v_fst_1749_);
lean_dec(v_fst_1747_);
if (v___x_1751_ == 0)
{
lean_dec(v_snd_1750_);
lean_dec(v_snd_1748_);
lean_dec_ref(v___f_1744_);
return v___x_1751_;
}
else
{
uint8_t v___x_1752_; 
v___x_1752_ = l_Option_instBEq_beq___redArg(v___f_1744_, v_snd_1748_, v_snd_1750_);
return v___x_1752_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___lam__0___boxed(lean_object* v___f_1753_, lean_object* v_x_1754_, lean_object* v_x_1755_){
_start:
{
uint8_t v_res_1756_; lean_object* v_r_1757_; 
v_res_1756_ = l_Std_Http_URI_instBEqQuery___aux__1___lam__0(v___f_1753_, v_x_1754_, v_x_1755_);
v_r_1757_ = lean_box(v_res_1756_);
return v_r_1757_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1(lean_object* v_xs_1761_, lean_object* v_ys_1762_){
_start:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; uint8_t v___x_1765_; 
v___x_1763_ = lean_array_get_size(v_xs_1761_);
v___x_1764_ = lean_array_get_size(v_ys_1762_);
v___x_1765_ = lean_nat_dec_eq(v___x_1763_, v___x_1764_);
if (v___x_1765_ == 0)
{
return v___x_1765_;
}
else
{
lean_object* v___f_1766_; uint8_t v___x_1767_; 
v___f_1766_ = ((lean_object*)(l_Std_Http_URI_instBEqQuery___aux__1___closed__1));
v___x_1767_ = l_Array_isEqvAux___redArg(v_xs_1761_, v_ys_1762_, v___f_1766_, v___x_1763_);
return v___x_1767_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___boxed(lean_object* v_xs_1768_, lean_object* v_ys_1769_){
_start:
{
uint8_t v_res_1770_; lean_object* v_r_1771_; 
v_res_1770_ = l_Std_Http_URI_instBEqQuery___aux__1(v_xs_1768_, v_ys_1769_);
lean_dec_ref(v_ys_1769_);
lean_dec_ref(v_xs_1768_);
v_r_1771_ = lean_box(v_res_1770_);
return v_r_1771_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_spec__0(lean_object* v_x_1772_, lean_object* v_x_1773_){
_start:
{
if (lean_obj_tag(v_x_1772_) == 0)
{
if (lean_obj_tag(v_x_1773_) == 0)
{
uint8_t v___x_1774_; 
v___x_1774_ = 1;
return v___x_1774_;
}
else
{
uint8_t v___x_1775_; 
v___x_1775_ = 0;
return v___x_1775_;
}
}
else
{
if (lean_obj_tag(v_x_1773_) == 0)
{
uint8_t v___x_1776_; 
v___x_1776_ = 0;
return v___x_1776_;
}
else
{
lean_object* v_val_1777_; lean_object* v_val_1778_; uint8_t v___x_1779_; 
v_val_1777_ = lean_ctor_get(v_x_1772_, 0);
v_val_1778_ = lean_ctor_get(v_x_1773_, 0);
v___x_1779_ = lean_sarray_dec_eq(v_val_1777_, v_val_1778_);
return v___x_1779_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_spec__0___boxed(lean_object* v_x_1780_, lean_object* v_x_1781_){
_start:
{
uint8_t v_res_1782_; lean_object* v_r_1783_; 
v_res_1782_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_spec__0(v_x_1780_, v_x_1781_);
lean_dec(v_x_1781_);
lean_dec(v_x_1780_);
v_r_1783_ = lean_box(v_res_1782_);
return v_r_1783_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(lean_object* v_xs_1784_, lean_object* v_ys_1785_, lean_object* v_x_1786_){
_start:
{
lean_object* v_zero_1787_; uint8_t v_isZero_1788_; 
v_zero_1787_ = lean_unsigned_to_nat(0u);
v_isZero_1788_ = lean_nat_dec_eq(v_x_1786_, v_zero_1787_);
if (v_isZero_1788_ == 1)
{
lean_dec(v_x_1786_);
return v_isZero_1788_;
}
else
{
lean_object* v_one_1789_; lean_object* v_n_1790_; lean_object* v___x_1791_; lean_object* v_fst_1792_; lean_object* v_snd_1793_; lean_object* v___x_1794_; lean_object* v_fst_1795_; lean_object* v_snd_1796_; uint8_t v___x_1797_; 
v_one_1789_ = lean_unsigned_to_nat(1u);
v_n_1790_ = lean_nat_sub(v_x_1786_, v_one_1789_);
lean_dec(v_x_1786_);
v___x_1791_ = lean_array_fget_borrowed(v_xs_1784_, v_n_1790_);
v_fst_1792_ = lean_ctor_get(v___x_1791_, 0);
v_snd_1793_ = lean_ctor_get(v___x_1791_, 1);
v___x_1794_ = lean_array_fget_borrowed(v_ys_1785_, v_n_1790_);
v_fst_1795_ = lean_ctor_get(v___x_1794_, 0);
v_snd_1796_ = lean_ctor_get(v___x_1794_, 1);
v___x_1797_ = lean_sarray_dec_eq(v_fst_1792_, v_fst_1795_);
if (v___x_1797_ == 0)
{
lean_dec(v_n_1790_);
return v___x_1797_;
}
else
{
uint8_t v___x_1798_; 
v___x_1798_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_spec__0(v_snd_1793_, v_snd_1796_);
if (v___x_1798_ == 0)
{
lean_dec(v_n_1790_);
return v___x_1798_;
}
else
{
v_x_1786_ = v_n_1790_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg___boxed(lean_object* v_xs_1800_, lean_object* v_ys_1801_, lean_object* v_x_1802_){
_start:
{
uint8_t v_res_1803_; lean_object* v_r_1804_; 
v_res_1803_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v_xs_1800_, v_ys_1801_, v_x_1802_);
lean_dec_ref(v_ys_1801_);
lean_dec_ref(v_xs_1800_);
v_r_1804_ = lean_box(v_res_1803_);
return v_r_1804_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___lam__0(lean_object* v___y_1805_, lean_object* v___y_1806_){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; uint8_t v___x_1809_; 
v___x_1807_ = lean_array_get_size(v___y_1805_);
v___x_1808_ = lean_array_get_size(v___y_1806_);
v___x_1809_ = lean_nat_dec_eq(v___x_1807_, v___x_1808_);
if (v___x_1809_ == 0)
{
return v___x_1809_;
}
else
{
uint8_t v___x_1810_; 
v___x_1810_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v___y_1805_, v___y_1806_, v___x_1807_);
return v___x_1810_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___lam__0___boxed(lean_object* v___y_1811_, lean_object* v___y_1812_){
_start:
{
uint8_t v_res_1813_; lean_object* v_r_1814_; 
v_res_1813_ = l_Std_Http_URI_instBEqQuery___lam__0(v___y_1811_, v___y_1812_);
lean_dec_ref(v___y_1812_);
lean_dec_ref(v___y_1811_);
v_r_1814_ = lean_box(v_res_1813_);
return v_r_1814_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1(lean_object* v_xs_1817_, lean_object* v_ys_1818_, lean_object* v_hsz_1819_, lean_object* v_x_1820_, lean_object* v_x_1821_){
_start:
{
uint8_t v___x_1822_; 
v___x_1822_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v_xs_1817_, v_ys_1818_, v_x_1820_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___boxed(lean_object* v_xs_1823_, lean_object* v_ys_1824_, lean_object* v_hsz_1825_, lean_object* v_x_1826_, lean_object* v_x_1827_){
_start:
{
uint8_t v_res_1828_; lean_object* v_r_1829_; 
v_res_1828_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1(v_xs_1823_, v_ys_1824_, v_hsz_1825_, v_x_1826_, v_x_1827_);
lean_dec_ref(v_ys_1824_);
lean_dec_ref(v_xs_1823_);
v_r_1829_ = lean_box(v_res_1828_);
return v_r_1829_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(lean_object* v_as_1830_){
_start:
{
lean_object* v___f_1831_; lean_object* v___x_1832_; 
v___f_1831_ = ((lean_object*)(l_Std_Http_URI_instBEqQuery___aux__1___closed__0));
v___x_1832_ = l_List_eraseDupsBy___redArg(v___f_1831_, v_as_1830_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(size_t v_sz_1833_, size_t v_i_1834_, lean_object* v_bs_1835_){
_start:
{
uint8_t v___x_1836_; 
v___x_1836_ = lean_usize_dec_lt(v_i_1834_, v_sz_1833_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; 
v___x_1837_ = l_unsafeCast___redArg(v_bs_1835_);
lean_dec_ref(v_bs_1835_);
return v___x_1837_;
}
else
{
lean_object* v_v_1838_; lean_object* v___x_1839_; lean_object* v_fst_1840_; lean_object* v___x_1841_; lean_object* v_bs_x27_1842_; size_t v___x_1843_; size_t v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v_v_1838_ = lean_array_uget_borrowed(v_bs_1835_, v_i_1834_);
v___x_1839_ = l_unsafeCast___redArg(v_v_1838_);
v_fst_1840_ = lean_ctor_get(v___x_1839_, 0);
lean_inc(v_fst_1840_);
lean_dec(v___x_1839_);
v___x_1841_ = lean_unsigned_to_nat(0u);
v_bs_x27_1842_ = lean_array_uset(v_bs_1835_, v_i_1834_, v___x_1841_);
v___x_1843_ = ((size_t)1ULL);
v___x_1844_ = lean_usize_add(v_i_1834_, v___x_1843_);
v___x_1845_ = l_unsafeCast___redArg(v_fst_1840_);
lean_dec(v_fst_1840_);
v___x_1846_ = lean_array_uset(v_bs_x27_1842_, v_i_1834_, v___x_1845_);
v_i_1834_ = v___x_1844_;
v_bs_1835_ = v___x_1846_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0___boxed(lean_object* v_sz_1848_, lean_object* v_i_1849_, lean_object* v_bs_1850_){
_start:
{
size_t v_sz_boxed_1851_; size_t v_i_boxed_1852_; lean_object* v_res_1853_; 
v_sz_boxed_1851_ = lean_unbox_usize(v_sz_1848_);
lean_dec(v_sz_1848_);
v_i_boxed_1852_ = lean_unbox_usize(v_i_1849_);
lean_dec(v_i_1849_);
v_res_1853_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(v_sz_boxed_1851_, v_i_boxed_1852_, v_bs_1850_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_names(lean_object* v_query_1854_){
_start:
{
size_t v_sz_1855_; size_t v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; 
v_sz_1855_ = lean_array_size(v_query_1854_);
v___x_1856_ = ((size_t)0ULL);
v___x_1857_ = l_unsafeCast___redArg(v_query_1854_);
v___x_1858_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(v_sz_1855_, v___x_1856_, v___x_1857_);
v___x_1859_ = l_unsafeCast___redArg(v___x_1858_);
lean_dec_ref(v___x_1858_);
v___x_1860_ = lean_array_to_list(v___x_1859_);
v___x_1861_ = l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(v___x_1860_);
v___x_1862_ = lean_array_mk(v___x_1861_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_names___boxed(lean_object* v_query_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_Std_Http_URI_Query_names(v_query_1863_);
lean_dec_ref(v_query_1863_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(size_t v_sz_1865_, size_t v_i_1866_, lean_object* v_bs_1867_){
_start:
{
uint8_t v___x_1868_; 
v___x_1868_ = lean_usize_dec_lt(v_i_1866_, v_sz_1865_);
if (v___x_1868_ == 0)
{
lean_object* v___x_1869_; 
v___x_1869_ = l_unsafeCast___redArg(v_bs_1867_);
lean_dec_ref(v_bs_1867_);
return v___x_1869_;
}
else
{
lean_object* v_v_1870_; lean_object* v___x_1871_; lean_object* v_snd_1872_; lean_object* v___x_1873_; lean_object* v_bs_x27_1874_; size_t v___x_1875_; size_t v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v_v_1870_ = lean_array_uget_borrowed(v_bs_1867_, v_i_1866_);
v___x_1871_ = l_unsafeCast___redArg(v_v_1870_);
v_snd_1872_ = lean_ctor_get(v___x_1871_, 1);
lean_inc(v_snd_1872_);
lean_dec(v___x_1871_);
v___x_1873_ = lean_unsigned_to_nat(0u);
v_bs_x27_1874_ = lean_array_uset(v_bs_1867_, v_i_1866_, v___x_1873_);
v___x_1875_ = ((size_t)1ULL);
v___x_1876_ = lean_usize_add(v_i_1866_, v___x_1875_);
v___x_1877_ = l_unsafeCast___redArg(v_snd_1872_);
lean_dec(v_snd_1872_);
v___x_1878_ = lean_array_uset(v_bs_x27_1874_, v_i_1866_, v___x_1877_);
v_i_1866_ = v___x_1876_;
v_bs_1867_ = v___x_1878_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0___boxed(lean_object* v_sz_1880_, lean_object* v_i_1881_, lean_object* v_bs_1882_){
_start:
{
size_t v_sz_boxed_1883_; size_t v_i_boxed_1884_; lean_object* v_res_1885_; 
v_sz_boxed_1883_ = lean_unbox_usize(v_sz_1880_);
lean_dec(v_sz_1880_);
v_i_boxed_1884_ = lean_unbox_usize(v_i_1881_);
lean_dec(v_i_1881_);
v_res_1885_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(v_sz_boxed_1883_, v_i_boxed_1884_, v_bs_1882_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_values(lean_object* v_query_1886_){
_start:
{
size_t v_sz_1887_; size_t v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v_sz_1887_ = lean_array_size(v_query_1886_);
v___x_1888_ = ((size_t)0ULL);
v___x_1889_ = l_unsafeCast___redArg(v_query_1886_);
v___x_1890_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(v_sz_1887_, v___x_1888_, v___x_1889_);
v___x_1891_ = l_unsafeCast___redArg(v___x_1890_);
lean_dec_ref(v___x_1890_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_values___boxed(lean_object* v_query_1892_){
_start:
{
lean_object* v_res_1893_; 
v_res_1893_ = l_Std_Http_URI_Query_values(v_query_1892_);
lean_dec_ref(v_query_1892_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray(lean_object* v_query_1894_){
_start:
{
lean_inc_ref(v_query_1894_);
return v_query_1894_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray___boxed(lean_object* v_query_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l_Std_Http_URI_Query_toArray(v_query_1895_);
lean_dec_ref(v_query_1895_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatQueryParam(lean_object* v_key_1898_, lean_object* v_value_1899_){
_start:
{
if (lean_obj_tag(v_value_1899_) == 0)
{
lean_object* v___x_1900_; 
v___x_1900_ = lean_string_from_utf8_unchecked(v_key_1898_);
return v___x_1900_;
}
else
{
lean_object* v_val_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v_val_1901_ = lean_ctor_get(v_value_1899_, 0);
lean_inc(v_val_1901_);
lean_dec_ref_known(v_value_1899_, 1);
v___x_1902_ = lean_string_from_utf8_unchecked(v_key_1898_);
v___x_1903_ = ((lean_object*)(l_Std_Http_URI_Query_formatQueryParam___closed__0));
v___x_1904_ = lean_string_append(v___x_1902_, v___x_1903_);
v___x_1905_ = lean_string_from_utf8_unchecked(v_val_1901_);
v___x_1906_ = lean_string_append(v___x_1904_, v___x_1905_);
lean_dec_ref(v___x_1905_);
return v___x_1906_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(lean_object* v_key_1910_, lean_object* v_as_1911_, size_t v_sz_1912_, size_t v_i_1913_, lean_object* v_b_1914_){
_start:
{
uint8_t v___x_1915_; 
v___x_1915_ = lean_usize_dec_lt(v_i_1913_, v_sz_1912_);
if (v___x_1915_ == 0)
{
lean_inc_ref(v_b_1914_);
return v_b_1914_;
}
else
{
lean_object* v_a_1916_; lean_object* v_fst_1917_; lean_object* v___x_1918_; uint8_t v___x_1919_; 
v_a_1916_ = lean_array_uget_borrowed(v_as_1911_, v_i_1913_);
v_fst_1917_ = lean_ctor_get(v_a_1916_, 0);
v___x_1918_ = lean_box(0);
v___x_1919_ = lean_sarray_dec_eq(v_fst_1917_, v_key_1910_);
if (v___x_1919_ == 0)
{
lean_object* v___x_1920_; size_t v___x_1921_; size_t v___x_1922_; 
v___x_1920_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0));
v___x_1921_ = ((size_t)1ULL);
v___x_1922_ = lean_usize_add(v_i_1913_, v___x_1921_);
v_i_1913_ = v___x_1922_;
v_b_1914_ = v___x_1920_;
goto _start;
}
else
{
lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
lean_inc(v_a_1916_);
v___x_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_a_1916_);
v___x_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1924_);
v___x_1926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1925_);
lean_ctor_set(v___x_1926_, 1, v___x_1918_);
return v___x_1926_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___boxed(lean_object* v_key_1927_, lean_object* v_as_1928_, lean_object* v_sz_1929_, lean_object* v_i_1930_, lean_object* v_b_1931_){
_start:
{
size_t v_sz_boxed_1932_; size_t v_i_boxed_1933_; lean_object* v_res_1934_; 
v_sz_boxed_1932_ = lean_unbox_usize(v_sz_1929_);
lean_dec(v_sz_1929_);
v_i_boxed_1933_ = lean_unbox_usize(v_i_1930_);
lean_dec(v_i_1930_);
v_res_1934_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(v_key_1927_, v_as_1928_, v_sz_boxed_1932_, v_i_boxed_1933_, v_b_1931_);
lean_dec_ref(v_b_1931_);
lean_dec_ref(v_as_1928_);
lean_dec_ref(v_key_1927_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f(lean_object* v_query_1935_, lean_object* v_key_1936_){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; size_t v_sz_1939_; size_t v___x_1940_; lean_object* v___x_1941_; lean_object* v_fst_1942_; 
v___x_1937_ = lean_box(0);
v___x_1938_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0));
v_sz_1939_ = lean_array_size(v_query_1935_);
v___x_1940_ = ((size_t)0ULL);
v___x_1941_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(v_key_1936_, v_query_1935_, v_sz_1939_, v___x_1940_, v___x_1938_);
v_fst_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_fst_1942_);
lean_dec_ref(v___x_1941_);
if (lean_obj_tag(v_fst_1942_) == 0)
{
return v___x_1937_;
}
else
{
lean_object* v_val_1943_; 
v_val_1943_ = lean_ctor_get(v_fst_1942_, 0);
lean_inc(v_val_1943_);
lean_dec_ref_known(v_fst_1942_, 1);
if (lean_obj_tag(v_val_1943_) == 0)
{
return v___x_1937_;
}
else
{
lean_object* v_val_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1952_; 
v_val_1944_ = lean_ctor_get(v_val_1943_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v_val_1943_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1946_ = v_val_1943_;
v_isShared_1947_ = v_isSharedCheck_1952_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_val_1944_);
lean_dec(v_val_1943_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1952_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v_snd_1948_; lean_object* v___x_1950_; 
v_snd_1948_ = lean_ctor_get(v_val_1944_, 1);
lean_inc(v_snd_1948_);
lean_dec(v_val_1944_);
if (v_isShared_1947_ == 0)
{
lean_ctor_set(v___x_1946_, 0, v_snd_1948_);
v___x_1950_ = v___x_1946_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_snd_1948_);
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
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f___boxed(lean_object* v_query_1953_, lean_object* v_key_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l_Std_Http_URI_Query_findEncoded_x3f(v_query_1953_, v_key_1954_);
lean_dec_ref(v_key_1954_);
lean_dec_ref(v_query_1953_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f(lean_object* v_query_1956_, lean_object* v_key_1957_){
_start:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; 
v___x_1958_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_1957_);
v___x_1959_ = l_Std_Http_URI_Query_findEncoded_x3f(v_query_1956_, v___x_1958_);
lean_dec_ref(v___x_1958_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f___boxed(lean_object* v_query_1960_, lean_object* v_key_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l_Std_Http_URI_Query_find_x3f(v_query_1960_, v_key_1961_);
lean_dec_ref(v_key_1961_);
lean_dec_ref(v_query_1960_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(lean_object* v_key_1963_, lean_object* v_as_1964_, size_t v_i_1965_, size_t v_stop_1966_, lean_object* v_b_1967_){
_start:
{
lean_object* v___y_1969_; uint8_t v___x_1973_; 
v___x_1973_ = lean_usize_dec_eq(v_i_1965_, v_stop_1966_);
if (v___x_1973_ == 0)
{
lean_object* v___x_1974_; lean_object* v_fst_1975_; lean_object* v_snd_1976_; uint8_t v___x_1977_; 
v___x_1974_ = lean_array_uget_borrowed(v_as_1964_, v_i_1965_);
v_fst_1975_ = lean_ctor_get(v___x_1974_, 0);
v_snd_1976_ = lean_ctor_get(v___x_1974_, 1);
v___x_1977_ = lean_sarray_dec_eq(v_fst_1975_, v_key_1963_);
if (v___x_1977_ == 0)
{
v___y_1969_ = v_b_1967_;
goto v___jp_1968_;
}
else
{
lean_object* v___x_1978_; 
lean_inc(v_snd_1976_);
v___x_1978_ = lean_array_push(v_b_1967_, v_snd_1976_);
v___y_1969_ = v___x_1978_;
goto v___jp_1968_;
}
}
else
{
return v_b_1967_;
}
v___jp_1968_:
{
size_t v___x_1970_; size_t v___x_1971_; 
v___x_1970_ = ((size_t)1ULL);
v___x_1971_ = lean_usize_add(v_i_1965_, v___x_1970_);
v_i_1965_ = v___x_1971_;
v_b_1967_ = v___y_1969_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0___boxed(lean_object* v_key_1979_, lean_object* v_as_1980_, lean_object* v_i_1981_, lean_object* v_stop_1982_, lean_object* v_b_1983_){
_start:
{
size_t v_i_boxed_1984_; size_t v_stop_boxed_1985_; lean_object* v_res_1986_; 
v_i_boxed_1984_ = lean_unbox_usize(v_i_1981_);
lean_dec(v_i_1981_);
v_stop_boxed_1985_ = lean_unbox_usize(v_stop_1982_);
lean_dec(v_stop_1982_);
v_res_1986_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_1979_, v_as_1980_, v_i_boxed_1984_, v_stop_boxed_1985_, v_b_1983_);
lean_dec_ref(v_as_1980_);
lean_dec_ref(v_key_1979_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(lean_object* v_key_1989_, lean_object* v_as_1990_, lean_object* v_start_1991_, lean_object* v_stop_1992_){
_start:
{
lean_object* v___x_1993_; uint8_t v___x_1994_; 
v___x_1993_ = ((lean_object*)(l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0));
v___x_1994_ = lean_nat_dec_lt(v_start_1991_, v_stop_1992_);
if (v___x_1994_ == 0)
{
return v___x_1993_;
}
else
{
lean_object* v___x_1995_; uint8_t v___x_1996_; 
v___x_1995_ = lean_array_get_size(v_as_1990_);
v___x_1996_ = lean_nat_dec_le(v_stop_1992_, v___x_1995_);
if (v___x_1996_ == 0)
{
uint8_t v___x_1997_; 
v___x_1997_ = lean_nat_dec_lt(v_start_1991_, v___x_1995_);
if (v___x_1997_ == 0)
{
return v___x_1993_;
}
else
{
size_t v___x_1998_; size_t v___x_1999_; lean_object* v___x_2000_; 
v___x_1998_ = lean_usize_of_nat(v_start_1991_);
v___x_1999_ = lean_usize_of_nat(v___x_1995_);
v___x_2000_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_1989_, v_as_1990_, v___x_1998_, v___x_1999_, v___x_1993_);
return v___x_2000_;
}
}
else
{
size_t v___x_2001_; size_t v___x_2002_; lean_object* v___x_2003_; 
v___x_2001_ = lean_usize_of_nat(v_start_1991_);
v___x_2002_ = lean_usize_of_nat(v_stop_1992_);
v___x_2003_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_1989_, v_as_1990_, v___x_2001_, v___x_2002_, v___x_1993_);
return v___x_2003_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___boxed(lean_object* v_key_2004_, lean_object* v_as_2005_, lean_object* v_start_2006_, lean_object* v_stop_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(v_key_2004_, v_as_2005_, v_start_2006_, v_stop_2007_);
lean_dec(v_stop_2007_);
lean_dec(v_start_2006_);
lean_dec_ref(v_as_2005_);
lean_dec_ref(v_key_2004_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded(lean_object* v_query_2009_, lean_object* v_key_2010_){
_start:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2011_ = lean_unsigned_to_nat(0u);
v___x_2012_ = lean_array_get_size(v_query_2009_);
v___x_2013_ = l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(v_key_2010_, v_query_2009_, v___x_2011_, v___x_2012_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded___boxed(lean_object* v_query_2014_, lean_object* v_key_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l_Std_Http_URI_Query_findAllEncoded(v_query_2014_, v_key_2015_);
lean_dec_ref(v_key_2015_);
lean_dec_ref(v_query_2014_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll(lean_object* v_query_2017_, lean_object* v_key_2018_){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_2018_);
v___x_2020_ = l_Std_Http_URI_Query_findAllEncoded(v_query_2017_, v___x_2019_);
lean_dec_ref(v___x_2019_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll___boxed(lean_object* v_query_2021_, lean_object* v_key_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l_Std_Http_URI_Query_findAll(v_query_2021_, v_key_2022_);
lean_dec_ref(v_key_2022_);
lean_dec_ref(v_query_2021_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insert(lean_object* v_query_2024_, lean_object* v_key_2025_, lean_object* v_value_2026_){
_start:
{
lean_object* v_encodedKey_2027_; lean_object* v_encodedValue_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v_encodedKey_2027_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_2025_);
v_encodedValue_2028_ = l_Std_Http_URI_EncodedQueryParam_encode(v_value_2026_);
v___x_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2029_, 0, v_encodedValue_2028_);
v___x_2030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2030_, 0, v_encodedKey_2027_);
lean_ctor_set(v___x_2030_, 1, v___x_2029_);
v___x_2031_ = lean_array_push(v_query_2024_, v___x_2030_);
return v___x_2031_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insert___boxed(lean_object* v_query_2032_, lean_object* v_key_2033_, lean_object* v_value_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l_Std_Http_URI_Query_insert(v_query_2032_, v_key_2033_, v_value_2034_);
lean_dec_ref(v_value_2034_);
lean_dec_ref(v_key_2033_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insertEncoded(lean_object* v_query_2036_, lean_object* v_key_2037_, lean_object* v_value_2038_){
_start:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2039_, 0, v_key_2037_);
lean_ctor_set(v___x_2039_, 1, v_value_2038_);
v___x_2040_ = lean_array_push(v_query_2036_, v___x_2039_);
return v___x_2040_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_ofList(lean_object* v_pairs_2044_){
_start:
{
lean_object* v___x_2045_; 
v___x_2045_ = lean_array_mk(v_pairs_2044_);
return v___x_2045_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(lean_object* v_key_2046_, lean_object* v_as_2047_, size_t v_i_2048_, size_t v_stop_2049_){
_start:
{
uint8_t v___x_2050_; 
v___x_2050_ = lean_usize_dec_eq(v_i_2048_, v_stop_2049_);
if (v___x_2050_ == 0)
{
lean_object* v___x_2051_; lean_object* v_fst_2052_; uint8_t v___x_2053_; 
v___x_2051_ = lean_array_uget_borrowed(v_as_2047_, v_i_2048_);
v_fst_2052_ = lean_ctor_get(v___x_2051_, 0);
v___x_2053_ = lean_sarray_dec_eq(v_fst_2052_, v_key_2046_);
if (v___x_2053_ == 0)
{
size_t v___x_2054_; size_t v___x_2055_; 
v___x_2054_ = ((size_t)1ULL);
v___x_2055_ = lean_usize_add(v_i_2048_, v___x_2054_);
v_i_2048_ = v___x_2055_;
goto _start;
}
else
{
return v___x_2053_;
}
}
else
{
uint8_t v___x_2057_; 
v___x_2057_ = 0;
return v___x_2057_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0___boxed(lean_object* v_key_2058_, lean_object* v_as_2059_, lean_object* v_i_2060_, lean_object* v_stop_2061_){
_start:
{
size_t v_i_boxed_2062_; size_t v_stop_boxed_2063_; uint8_t v_res_2064_; lean_object* v_r_2065_; 
v_i_boxed_2062_ = lean_unbox_usize(v_i_2060_);
lean_dec(v_i_2060_);
v_stop_boxed_2063_ = lean_unbox_usize(v_stop_2061_);
lean_dec(v_stop_2061_);
v_res_2064_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(v_key_2058_, v_as_2059_, v_i_boxed_2062_, v_stop_boxed_2063_);
lean_dec_ref(v_as_2059_);
lean_dec_ref(v_key_2058_);
v_r_2065_ = lean_box(v_res_2064_);
return v_r_2065_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_containsEncoded(lean_object* v_query_2066_, lean_object* v_key_2067_){
_start:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; uint8_t v___x_2070_; 
v___x_2068_ = lean_unsigned_to_nat(0u);
v___x_2069_ = lean_array_get_size(v_query_2066_);
v___x_2070_ = lean_nat_dec_lt(v___x_2068_, v___x_2069_);
if (v___x_2070_ == 0)
{
return v___x_2070_;
}
else
{
if (v___x_2070_ == 0)
{
return v___x_2070_;
}
else
{
size_t v___x_2071_; size_t v___x_2072_; uint8_t v___x_2073_; 
v___x_2071_ = ((size_t)0ULL);
v___x_2072_ = lean_usize_of_nat(v___x_2069_);
v___x_2073_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(v_key_2067_, v_query_2066_, v___x_2071_, v___x_2072_);
return v___x_2073_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_containsEncoded___boxed(lean_object* v_query_2074_, lean_object* v_key_2075_){
_start:
{
uint8_t v_res_2076_; lean_object* v_r_2077_; 
v_res_2076_ = l_Std_Http_URI_Query_containsEncoded(v_query_2074_, v_key_2075_);
lean_dec_ref(v_key_2075_);
lean_dec_ref(v_query_2074_);
v_r_2077_ = lean_box(v_res_2076_);
return v_r_2077_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_contains(lean_object* v_query_2078_, lean_object* v_key_2079_){
_start:
{
lean_object* v___x_2080_; uint8_t v___x_2081_; 
v___x_2080_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_2079_);
v___x_2081_ = l_Std_Http_URI_Query_containsEncoded(v_query_2078_, v___x_2080_);
lean_dec_ref(v___x_2080_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_contains___boxed(lean_object* v_query_2082_, lean_object* v_key_2083_){
_start:
{
uint8_t v_res_2084_; lean_object* v_r_2085_; 
v_res_2084_ = l_Std_Http_URI_Query_contains(v_query_2082_, v_key_2083_);
lean_dec_ref(v_key_2083_);
lean_dec_ref(v_query_2082_);
v_r_2085_ = lean_box(v_res_2084_);
return v_r_2085_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(lean_object* v_key_2086_, lean_object* v_as_2087_, size_t v_i_2088_, size_t v_stop_2089_, lean_object* v_b_2090_){
_start:
{
lean_object* v___y_2092_; uint8_t v___x_2096_; 
v___x_2096_ = lean_usize_dec_eq(v_i_2088_, v_stop_2089_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; lean_object* v_fst_2100_; uint8_t v___x_2101_; 
v___x_2097_ = lean_array_uget_borrowed(v_as_2087_, v_i_2088_);
v_fst_2100_ = lean_ctor_get(v___x_2097_, 0);
v___x_2101_ = lean_sarray_dec_eq(v_fst_2100_, v_key_2086_);
if (v___x_2101_ == 0)
{
goto v___jp_2098_;
}
else
{
if (v___x_2096_ == 0)
{
v___y_2092_ = v_b_2090_;
goto v___jp_2091_;
}
else
{
goto v___jp_2098_;
}
}
v___jp_2098_:
{
lean_object* v___x_2099_; 
lean_inc(v___x_2097_);
v___x_2099_ = lean_array_push(v_b_2090_, v___x_2097_);
v___y_2092_ = v___x_2099_;
goto v___jp_2091_;
}
}
else
{
return v_b_2090_;
}
v___jp_2091_:
{
size_t v___x_2093_; size_t v___x_2094_; 
v___x_2093_ = ((size_t)1ULL);
v___x_2094_ = lean_usize_add(v_i_2088_, v___x_2093_);
v_i_2088_ = v___x_2094_;
v_b_2090_ = v___y_2092_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0___boxed(lean_object* v_key_2102_, lean_object* v_as_2103_, lean_object* v_i_2104_, lean_object* v_stop_2105_, lean_object* v_b_2106_){
_start:
{
size_t v_i_boxed_2107_; size_t v_stop_boxed_2108_; lean_object* v_res_2109_; 
v_i_boxed_2107_ = lean_unbox_usize(v_i_2104_);
lean_dec(v_i_2104_);
v_stop_boxed_2108_ = lean_unbox_usize(v_stop_2105_);
lean_dec(v_stop_2105_);
v_res_2109_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(v_key_2102_, v_as_2103_, v_i_boxed_2107_, v_stop_boxed_2108_, v_b_2106_);
lean_dec_ref(v_as_2103_);
lean_dec_ref(v_key_2102_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded(lean_object* v_query_2110_, lean_object* v_key_2111_){
_start:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; uint8_t v___x_2115_; 
v___x_2112_ = lean_unsigned_to_nat(0u);
v___x_2113_ = lean_array_get_size(v_query_2110_);
v___x_2114_ = ((lean_object*)(l_Std_Http_URI_Query_empty___closed__0));
v___x_2115_ = lean_nat_dec_lt(v___x_2112_, v___x_2113_);
if (v___x_2115_ == 0)
{
return v___x_2114_;
}
else
{
uint8_t v___x_2116_; 
v___x_2116_ = lean_nat_dec_le(v___x_2113_, v___x_2113_);
if (v___x_2116_ == 0)
{
if (v___x_2115_ == 0)
{
return v___x_2114_;
}
else
{
size_t v___x_2117_; size_t v___x_2118_; lean_object* v___x_2119_; 
v___x_2117_ = ((size_t)0ULL);
v___x_2118_ = lean_usize_of_nat(v___x_2113_);
v___x_2119_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(v_key_2111_, v_query_2110_, v___x_2117_, v___x_2118_, v___x_2114_);
return v___x_2119_;
}
}
else
{
size_t v___x_2120_; size_t v___x_2121_; lean_object* v___x_2122_; 
v___x_2120_ = ((size_t)0ULL);
v___x_2121_ = lean_usize_of_nat(v___x_2113_);
v___x_2122_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(v_key_2111_, v_query_2110_, v___x_2120_, v___x_2121_, v___x_2114_);
return v___x_2122_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded___boxed(lean_object* v_query_2123_, lean_object* v_key_2124_){
_start:
{
lean_object* v_res_2125_; 
v_res_2125_ = l_Std_Http_URI_Query_eraseEncoded(v_query_2123_, v_key_2124_);
lean_dec_ref(v_key_2124_);
lean_dec_ref(v_query_2123_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase(lean_object* v_query_2126_, lean_object* v_key_2127_){
_start:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2128_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_2127_);
v___x_2129_ = l_Std_Http_URI_Query_eraseEncoded(v_query_2126_, v___x_2128_);
lean_dec_ref(v___x_2128_);
return v___x_2129_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase___boxed(lean_object* v_query_2130_, lean_object* v_key_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l_Std_Http_URI_Query_erase(v_query_2130_, v_key_2131_);
lean_dec_ref(v_key_2131_);
lean_dec_ref(v_query_2130_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get(lean_object* v_query_2135_, lean_object* v_key_2136_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = l_Std_Http_URI_Query_find_x3f(v_query_2135_, v_key_2136_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v___x_2138_; 
v___x_2138_ = lean_box(0);
return v___x_2138_;
}
else
{
lean_object* v_val_2139_; 
v_val_2139_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_val_2139_);
lean_dec_ref_known(v___x_2137_, 1);
if (lean_obj_tag(v_val_2139_) == 0)
{
lean_object* v___x_2140_; 
v___x_2140_ = ((lean_object*)(l_Std_Http_URI_Query_get___closed__0));
return v___x_2140_;
}
else
{
lean_object* v_val_2141_; lean_object* v___x_2142_; 
v_val_2141_ = lean_ctor_get(v_val_2139_, 0);
lean_inc(v_val_2141_);
lean_dec_ref_known(v_val_2139_, 1);
v___x_2142_ = l_Std_Http_URI_EncodedQueryParam_decode(v_val_2141_);
lean_dec(v_val_2141_);
return v___x_2142_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get___boxed(lean_object* v_query_2143_, lean_object* v_key_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l_Std_Http_URI_Query_get(v_query_2143_, v_key_2144_);
lean_dec_ref(v_key_2144_);
lean_dec_ref(v_query_2143_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD(lean_object* v_query_2146_, lean_object* v_key_2147_, lean_object* v_default_2148_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = l_Std_Http_URI_Query_get(v_query_2146_, v_key_2147_);
if (lean_obj_tag(v___x_2149_) == 0)
{
lean_inc_ref(v_default_2148_);
return v_default_2148_;
}
else
{
lean_object* v_val_2150_; 
v_val_2150_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_val_2150_);
lean_dec_ref_known(v___x_2149_, 1);
return v_val_2150_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD___boxed(lean_object* v_query_2151_, lean_object* v_key_2152_, lean_object* v_default_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l_Std_Http_URI_Query_getD(v_query_2151_, v_key_2152_, v_default_2153_);
lean_dec_ref(v_default_2153_);
lean_dec_ref(v_key_2152_);
lean_dec_ref(v_query_2151_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set(lean_object* v_query_2155_, lean_object* v_key_2156_, lean_object* v_value_2157_){
_start:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2158_ = l_Std_Http_URI_Query_erase(v_query_2155_, v_key_2156_);
v___x_2159_ = l_Std_Http_URI_Query_insert(v___x_2158_, v_key_2156_, v_value_2157_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set___boxed(lean_object* v_query_2160_, lean_object* v_key_2161_, lean_object* v_value_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l_Std_Http_URI_Query_set(v_query_2160_, v_key_2161_, v_value_2162_);
lean_dec_ref(v_value_2162_);
lean_dec_ref(v_key_2161_);
lean_dec_ref(v_query_2160_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(size_t v_sz_2164_, size_t v_i_2165_, lean_object* v_bs_2166_){
_start:
{
uint8_t v___x_2167_; 
v___x_2167_ = lean_usize_dec_lt(v_i_2165_, v_sz_2164_);
if (v___x_2167_ == 0)
{
lean_object* v___x_2168_; 
v___x_2168_ = l_unsafeCast___redArg(v_bs_2166_);
lean_dec_ref(v_bs_2166_);
return v___x_2168_;
}
else
{
lean_object* v_v_2169_; lean_object* v___x_2170_; lean_object* v_fst_2171_; lean_object* v_snd_2172_; lean_object* v___x_2173_; lean_object* v_bs_x27_2174_; lean_object* v___x_2175_; size_t v___x_2176_; size_t v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v_v_2169_ = lean_array_uget_borrowed(v_bs_2166_, v_i_2165_);
v___x_2170_ = l_unsafeCast___redArg(v_v_2169_);
v_fst_2171_ = lean_ctor_get(v___x_2170_, 0);
lean_inc(v_fst_2171_);
v_snd_2172_ = lean_ctor_get(v___x_2170_, 1);
lean_inc(v_snd_2172_);
lean_dec(v___x_2170_);
v___x_2173_ = lean_unsigned_to_nat(0u);
v_bs_x27_2174_ = lean_array_uset(v_bs_2166_, v_i_2165_, v___x_2173_);
v___x_2175_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_2171_, v_snd_2172_);
v___x_2176_ = ((size_t)1ULL);
v___x_2177_ = lean_usize_add(v_i_2165_, v___x_2176_);
v___x_2178_ = l_unsafeCast___redArg(v___x_2175_);
lean_dec_ref(v___x_2175_);
v___x_2179_ = lean_array_uset(v_bs_x27_2174_, v_i_2165_, v___x_2178_);
v_i_2165_ = v___x_2177_;
v_bs_2166_ = v___x_2179_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0___boxed(lean_object* v_sz_2181_, lean_object* v_i_2182_, lean_object* v_bs_2183_){
_start:
{
size_t v_sz_boxed_2184_; size_t v_i_boxed_2185_; lean_object* v_res_2186_; 
v_sz_boxed_2184_ = lean_unbox_usize(v_sz_2181_);
lean_dec(v_sz_2181_);
v_i_boxed_2185_ = lean_unbox_usize(v_i_2182_);
lean_dec(v_i_2182_);
v_res_2186_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(v_sz_boxed_2184_, v_i_boxed_2185_, v_bs_2183_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toRawString(lean_object* v_query_2188_){
_start:
{
size_t v_sz_2189_; size_t v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v_params_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v_sz_2189_ = lean_array_size(v_query_2188_);
v___x_2190_ = ((size_t)0ULL);
v___x_2191_ = l_unsafeCast___redArg(v_query_2188_);
v___x_2192_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(v_sz_2189_, v___x_2190_, v___x_2191_);
v_params_2193_ = l_unsafeCast___redArg(v___x_2192_);
lean_dec_ref(v___x_2192_);
v___x_2194_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_2195_ = lean_array_to_list(v_params_2193_);
v___x_2196_ = l_String_intercalate(v___x_2194_, v___x_2195_);
return v___x_2196_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toRawString___boxed(lean_object* v_query_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Std_Http_URI_Query_toRawString(v_query_2197_);
lean_dec_ref(v_query_2197_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instSingletonProdString___lam__0(lean_object* v_x_2200_){
_start:
{
lean_object* v_fst_2201_; lean_object* v_snd_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v_fst_2201_ = lean_ctor_get(v_x_2200_, 0);
v_snd_2202_ = lean_ctor_get(v_x_2200_, 1);
v___x_2203_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
v___x_2204_ = l_Std_Http_URI_Query_insert(v___x_2203_, v_fst_2201_, v_snd_2202_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instSingletonProdString___lam__0___boxed(lean_object* v_x_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l_Std_Http_URI_Query_instSingletonProdString___lam__0(v_x_2205_);
lean_dec_ref(v_x_2205_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0(lean_object* v_x_2209_, lean_object* v_q_2210_){
_start:
{
lean_object* v_fst_2211_; lean_object* v_snd_2212_; lean_object* v___x_2213_; 
v_fst_2211_ = lean_ctor_get(v_x_2209_, 0);
v_snd_2212_ = lean_ctor_get(v_x_2209_, 1);
v___x_2213_ = l_Std_Http_URI_Query_insert(v_q_2210_, v_fst_2211_, v_snd_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0___boxed(lean_object* v_x_2214_, lean_object* v_q_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l_Std_Http_URI_Query_instInsertProdString___lam__0(v_x_2214_, v_q_2215_);
lean_dec_ref(v_x_2214_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__0(lean_object* v_x_2219_){
_start:
{
lean_object* v_fst_2220_; lean_object* v_snd_2221_; lean_object* v___x_2222_; 
v_fst_2220_ = lean_ctor_get(v_x_2219_, 0);
lean_inc(v_fst_2220_);
v_snd_2221_ = lean_ctor_get(v_x_2219_, 1);
lean_inc(v_snd_2221_);
lean_dec_ref(v_x_2219_);
v___x_2222_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_2220_, v_snd_2221_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__1(lean_object* v___f_2224_, lean_object* v_q_2225_){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; uint8_t v___x_2228_; 
v___x_2226_ = lean_array_get_size(v_q_2225_);
v___x_2227_ = lean_unsigned_to_nat(0u);
v___x_2228_ = lean_nat_dec_eq(v___x_2226_, v___x_2227_);
if (v___x_2228_ == 0)
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v_encodedParams_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___x_2229_ = lean_array_to_list(v_q_2225_);
v___x_2230_ = lean_box(0);
v_encodedParams_2231_ = l_List_mapTR_loop___redArg(v___f_2224_, v___x_2229_, v___x_2230_);
v___x_2232_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
v___x_2233_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_2234_ = l_String_intercalate(v___x_2233_, v_encodedParams_2231_);
v___x_2235_ = lean_string_append(v___x_2232_, v___x_2234_);
lean_dec_ref(v___x_2234_);
return v___x_2235_;
}
else
{
lean_object* v___x_2236_; 
lean_dec_ref(v_q_2225_);
lean_dec_ref(v___f_2224_);
v___x_2236_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
return v___x_2236_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Http_URI_Query_formatOption_spec__0(lean_object* v_a_2241_, lean_object* v_a_2242_){
_start:
{
if (lean_obj_tag(v_a_2241_) == 0)
{
lean_object* v___x_2243_; 
v___x_2243_ = l_List_reverse___redArg(v_a_2242_);
return v___x_2243_;
}
else
{
lean_object* v_head_2244_; lean_object* v_tail_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2256_; 
v_head_2244_ = lean_ctor_get(v_a_2241_, 0);
v_tail_2245_ = lean_ctor_get(v_a_2241_, 1);
v_isSharedCheck_2256_ = !lean_is_exclusive(v_a_2241_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2247_ = v_a_2241_;
v_isShared_2248_ = v_isSharedCheck_2256_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_tail_2245_);
lean_inc(v_head_2244_);
lean_dec(v_a_2241_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2256_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v_fst_2249_; lean_object* v_snd_2250_; lean_object* v___x_2251_; lean_object* v___x_2253_; 
v_fst_2249_ = lean_ctor_get(v_head_2244_, 0);
lean_inc(v_fst_2249_);
v_snd_2250_ = lean_ctor_get(v_head_2244_, 1);
lean_inc(v_snd_2250_);
lean_dec(v_head_2244_);
v___x_2251_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_2249_, v_snd_2250_);
if (v_isShared_2248_ == 0)
{
lean_ctor_set(v___x_2247_, 1, v_a_2242_);
lean_ctor_set(v___x_2247_, 0, v___x_2251_);
v___x_2253_ = v___x_2247_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v___x_2251_);
lean_ctor_set(v_reuseFailAlloc_2255_, 1, v_a_2242_);
v___x_2253_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
v_a_2241_ = v_tail_2245_;
v_a_2242_ = v___x_2253_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatOption(lean_object* v_x_2257_){
_start:
{
if (lean_obj_tag(v_x_2257_) == 0)
{
lean_object* v___x_2258_; 
v___x_2258_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
return v___x_2258_;
}
else
{
lean_object* v_val_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; uint8_t v___x_2262_; 
v_val_2259_ = lean_ctor_get(v_x_2257_, 0);
lean_inc(v_val_2259_);
lean_dec_ref_known(v_x_2257_, 1);
v___x_2260_ = lean_array_get_size(v_val_2259_);
v___x_2261_ = lean_unsigned_to_nat(0u);
v___x_2262_ = lean_nat_dec_eq(v___x_2260_, v___x_2261_);
if (v___x_2262_ == 0)
{
if (v___x_2262_ == 0)
{
lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v_encodedParams_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2263_ = lean_array_to_list(v_val_2259_);
v___x_2264_ = lean_box(0);
v_encodedParams_2265_ = l_List_mapTR_loop___at___00Std_Http_URI_Query_formatOption_spec__0(v___x_2263_, v___x_2264_);
v___x_2266_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
v___x_2267_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_2268_ = l_String_intercalate(v___x_2267_, v_encodedParams_2265_);
v___x_2269_ = lean_string_append(v___x_2266_, v___x_2268_);
lean_dec_ref(v___x_2268_);
return v___x_2269_;
}
else
{
lean_object* v___x_2270_; 
lean_dec(v_val_2259_);
v___x_2270_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
return v___x_2270_;
}
}
else
{
lean_object* v___x_2271_; 
lean_dec(v_val_2259_);
v___x_2271_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
return v___x_2271_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(lean_object* v_x_2272_, lean_object* v_x_2273_){
_start:
{
if (lean_obj_tag(v_x_2272_) == 0)
{
lean_object* v___x_2274_; 
v___x_2274_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2274_;
}
else
{
lean_object* v_val_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v_val_2275_ = lean_ctor_get(v_x_2272_, 0);
lean_inc(v_val_2275_);
lean_dec_ref_known(v_x_2272_, 1);
v___x_2276_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2277_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_val_2275_);
v___x_2278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2276_);
lean_ctor_set(v___x_2278_, 1, v___x_2277_);
v___x_2279_ = l_Repr_addAppParen(v___x_2278_, v_x_2273_);
return v___x_2279_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0___boxed(lean_object* v_x_2280_, lean_object* v_x_2281_){
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_x_2280_, v_x_2281_);
lean_dec(v_x_2281_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(lean_object* v_x_2283_, lean_object* v_x_2284_){
_start:
{
if (lean_obj_tag(v_x_2283_) == 0)
{
lean_object* v___x_2285_; 
v___x_2285_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2285_;
}
else
{
lean_object* v_val_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v_val_2286_ = lean_ctor_get(v_x_2283_, 0);
lean_inc(v_val_2286_);
lean_dec_ref_known(v_x_2283_, 1);
v___x_2287_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2288_ = l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(v_val_2286_);
v___x_2289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2287_);
lean_ctor_set(v___x_2289_, 1, v___x_2288_);
v___x_2290_ = l_Repr_addAppParen(v___x_2289_, v_x_2284_);
return v___x_2290_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1___boxed(lean_object* v_x_2291_, lean_object* v_x_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_x_2291_, v_x_2292_);
lean_dec(v_x_2292_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(lean_object* v_x_2294_, lean_object* v_x_2295_){
_start:
{
if (lean_obj_tag(v_x_2294_) == 0)
{
lean_object* v___x_2296_; 
v___x_2296_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2296_;
}
else
{
lean_object* v_val_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2308_; 
v_val_2297_ = lean_ctor_get(v_x_2294_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v_x_2294_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2299_ = v_x_2294_;
v_isShared_2300_ = v_isSharedCheck_2308_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_val_2297_);
lean_dec(v_x_2294_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2308_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2304_; 
v___x_2301_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2302_ = l_String_quote(v_val_2297_);
if (v_isShared_2300_ == 0)
{
lean_ctor_set_tag(v___x_2299_, 3);
lean_ctor_set(v___x_2299_, 0, v___x_2302_);
v___x_2304_ = v___x_2299_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v___x_2302_);
v___x_2304_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
lean_object* v___x_2305_; lean_object* v___x_2306_; 
v___x_2305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2301_);
lean_ctor_set(v___x_2305_, 1, v___x_2304_);
v___x_2306_ = l_Repr_addAppParen(v___x_2305_, v_x_2295_);
return v___x_2306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2___boxed(lean_object* v_x_2309_, lean_object* v_x_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_x_2309_, v_x_2310_);
lean_dec(v_x_2310_);
return v_res_2311_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = lean_unsigned_to_nat(10u);
v___x_2322_ = lean_nat_to_int(v___x_2321_);
return v___x_2322_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2326_ = lean_unsigned_to_nat(13u);
v___x_2327_ = lean_nat_to_int(v___x_2326_);
return v___x_2327_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2334_ = lean_unsigned_to_nat(9u);
v___x_2335_ = lean_nat_to_int(v___x_2334_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___redArg(lean_object* v_x_2339_){
_start:
{
lean_object* v_scheme_2340_; lean_object* v_authority_2341_; lean_object* v_path_2342_; lean_object* v_query_2343_; lean_object* v_fragment_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; uint8_t v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v_scheme_2340_ = lean_ctor_get(v_x_2339_, 0);
lean_inc_ref(v_scheme_2340_);
v_authority_2341_ = lean_ctor_get(v_x_2339_, 1);
lean_inc(v_authority_2341_);
v_path_2342_ = lean_ctor_get(v_x_2339_, 2);
lean_inc_ref(v_path_2342_);
v_query_2343_ = lean_ctor_get(v_x_2339_, 3);
lean_inc(v_query_2343_);
v_fragment_2344_ = lean_ctor_get(v_x_2339_, 4);
lean_inc(v_fragment_2344_);
lean_dec_ref(v_x_2339_);
v___x_2345_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_2346_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__3));
v___x_2347_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__4, &l_Std_Http_instReprURI_repr___redArg___closed__4_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__4);
v___x_2348_ = l_String_quote(v_scheme_2340_);
v___x_2349_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
v___x_2350_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2347_);
lean_ctor_set(v___x_2350_, 1, v___x_2349_);
v___x_2351_ = 0;
v___x_2352_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2352_, 0, v___x_2350_);
lean_ctor_set_uint8(v___x_2352_, sizeof(void*)*1, v___x_2351_);
v___x_2353_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2346_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
v___x_2354_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_2355_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2353_);
lean_ctor_set(v___x_2355_, 1, v___x_2354_);
v___x_2356_ = lean_box(1);
v___x_2357_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2357_, 0, v___x_2355_);
lean_ctor_set(v___x_2357_, 1, v___x_2356_);
v___x_2358_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__6));
v___x_2359_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2357_);
lean_ctor_set(v___x_2359_, 1, v___x_2358_);
v___x_2360_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2359_);
lean_ctor_set(v___x_2360_, 1, v___x_2345_);
v___x_2361_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__7, &l_Std_Http_instReprURI_repr___redArg___closed__7_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__7);
v___x_2362_ = lean_unsigned_to_nat(0u);
v___x_2363_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_authority_2341_, v___x_2362_);
v___x_2364_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2361_);
lean_ctor_set(v___x_2364_, 1, v___x_2363_);
v___x_2365_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2365_, 0, v___x_2364_);
lean_ctor_set_uint8(v___x_2365_, sizeof(void*)*1, v___x_2351_);
v___x_2366_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2366_, 0, v___x_2360_);
lean_ctor_set(v___x_2366_, 1, v___x_2365_);
v___x_2367_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2366_);
lean_ctor_set(v___x_2367_, 1, v___x_2354_);
v___x_2368_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2368_, 0, v___x_2367_);
lean_ctor_set(v___x_2368_, 1, v___x_2356_);
v___x_2369_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__9));
v___x_2370_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2368_);
lean_ctor_set(v___x_2370_, 1, v___x_2369_);
v___x_2371_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2370_);
lean_ctor_set(v___x_2371_, 1, v___x_2345_);
v___x_2372_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_2373_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_2342_);
v___x_2374_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2372_);
lean_ctor_set(v___x_2374_, 1, v___x_2373_);
v___x_2375_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2375_, 0, v___x_2374_);
lean_ctor_set_uint8(v___x_2375_, sizeof(void*)*1, v___x_2351_);
v___x_2376_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2371_);
lean_ctor_set(v___x_2376_, 1, v___x_2375_);
v___x_2377_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
lean_ctor_set(v___x_2377_, 1, v___x_2354_);
v___x_2378_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2377_);
lean_ctor_set(v___x_2378_, 1, v___x_2356_);
v___x_2379_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__11));
v___x_2380_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2378_);
lean_ctor_set(v___x_2380_, 1, v___x_2379_);
v___x_2381_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2380_);
lean_ctor_set(v___x_2381_, 1, v___x_2345_);
v___x_2382_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__12, &l_Std_Http_instReprURI_repr___redArg___closed__12_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__12);
v___x_2383_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_2343_, v___x_2362_);
v___x_2384_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2382_);
lean_ctor_set(v___x_2384_, 1, v___x_2383_);
v___x_2385_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2385_, 0, v___x_2384_);
lean_ctor_set_uint8(v___x_2385_, sizeof(void*)*1, v___x_2351_);
v___x_2386_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2381_);
lean_ctor_set(v___x_2386_, 1, v___x_2385_);
v___x_2387_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2386_);
lean_ctor_set(v___x_2387_, 1, v___x_2354_);
v___x_2388_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2388_, 0, v___x_2387_);
lean_ctor_set(v___x_2388_, 1, v___x_2356_);
v___x_2389_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__14));
v___x_2390_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2390_, 0, v___x_2388_);
lean_ctor_set(v___x_2390_, 1, v___x_2389_);
v___x_2391_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2390_);
lean_ctor_set(v___x_2391_, 1, v___x_2345_);
v___x_2392_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_2393_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_fragment_2344_, v___x_2362_);
v___x_2394_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2392_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
v___x_2395_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2395_, 0, v___x_2394_);
lean_ctor_set_uint8(v___x_2395_, sizeof(void*)*1, v___x_2351_);
v___x_2396_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2391_);
lean_ctor_set(v___x_2396_, 1, v___x_2395_);
v___x_2397_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_2398_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_2399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2399_, 0, v___x_2398_);
lean_ctor_set(v___x_2399_, 1, v___x_2396_);
v___x_2400_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_2401_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2401_, 0, v___x_2399_);
lean_ctor_set(v___x_2401_, 1, v___x_2400_);
v___x_2402_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2397_);
lean_ctor_set(v___x_2402_, 1, v___x_2401_);
v___x_2403_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2403_, 0, v___x_2402_);
lean_ctor_set_uint8(v___x_2403_, sizeof(void*)*1, v___x_2351_);
return v___x_2403_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr(lean_object* v_x_2404_, lean_object* v_prec_2405_){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = l_Std_Http_instReprURI_repr___redArg(v_x_2404_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___boxed(lean_object* v_x_2407_, lean_object* v_prec_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l_Std_Http_instReprURI_repr(v_x_2407_, v_prec_2408_);
lean_dec(v_prec_2408_);
return v_res_2409_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0(lean_object* v_x_2418_, lean_object* v_x_2419_){
_start:
{
if (lean_obj_tag(v_x_2418_) == 0)
{
if (lean_obj_tag(v_x_2419_) == 0)
{
uint8_t v___x_2420_; 
v___x_2420_ = 1;
return v___x_2420_;
}
else
{
uint8_t v___x_2421_; 
v___x_2421_ = 0;
return v___x_2421_;
}
}
else
{
if (lean_obj_tag(v_x_2419_) == 0)
{
uint8_t v___x_2422_; 
v___x_2422_ = 0;
return v___x_2422_;
}
else
{
lean_object* v_val_2423_; lean_object* v_val_2424_; uint8_t v___x_2425_; 
v_val_2423_ = lean_ctor_get(v_x_2418_, 0);
v_val_2424_ = lean_ctor_get(v_x_2419_, 0);
v___x_2425_ = l_Std_Http_URI_instBEqAuthority_beq(v_val_2423_, v_val_2424_);
return v___x_2425_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0___boxed(lean_object* v_x_2426_, lean_object* v_x_2427_){
_start:
{
uint8_t v_res_2428_; lean_object* v_r_2429_; 
v_res_2428_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_x_2426_, v_x_2427_);
lean_dec(v_x_2427_);
lean_dec(v_x_2426_);
v_r_2429_ = lean_box(v_res_2428_);
return v_r_2429_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1(lean_object* v_x_2430_, lean_object* v_x_2431_){
_start:
{
if (lean_obj_tag(v_x_2430_) == 0)
{
if (lean_obj_tag(v_x_2431_) == 0)
{
uint8_t v___x_2432_; 
v___x_2432_ = 1;
return v___x_2432_;
}
else
{
uint8_t v___x_2433_; 
v___x_2433_ = 0;
return v___x_2433_;
}
}
else
{
if (lean_obj_tag(v_x_2431_) == 0)
{
uint8_t v___x_2434_; 
v___x_2434_ = 0;
return v___x_2434_;
}
else
{
lean_object* v_val_2435_; lean_object* v_val_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; uint8_t v___x_2439_; 
v_val_2435_ = lean_ctor_get(v_x_2430_, 0);
v_val_2436_ = lean_ctor_get(v_x_2431_, 0);
v___x_2437_ = lean_array_get_size(v_val_2435_);
v___x_2438_ = lean_array_get_size(v_val_2436_);
v___x_2439_ = lean_nat_dec_eq(v___x_2437_, v___x_2438_);
if (v___x_2439_ == 0)
{
return v___x_2439_;
}
else
{
uint8_t v___x_2440_; 
v___x_2440_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v_val_2435_, v_val_2436_, v___x_2437_);
return v___x_2440_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1___boxed(lean_object* v_x_2441_, lean_object* v_x_2442_){
_start:
{
uint8_t v_res_2443_; lean_object* v_r_2444_; 
v_res_2443_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_x_2441_, v_x_2442_);
lean_dec(v_x_2442_);
lean_dec(v_x_2441_);
v_r_2444_ = lean_box(v_res_2443_);
return v_r_2444_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2(lean_object* v_x_2445_, lean_object* v_x_2446_){
_start:
{
if (lean_obj_tag(v_x_2445_) == 0)
{
if (lean_obj_tag(v_x_2446_) == 0)
{
uint8_t v___x_2447_; 
v___x_2447_ = 1;
return v___x_2447_;
}
else
{
uint8_t v___x_2448_; 
v___x_2448_ = 0;
return v___x_2448_;
}
}
else
{
if (lean_obj_tag(v_x_2446_) == 0)
{
uint8_t v___x_2449_; 
v___x_2449_ = 0;
return v___x_2449_;
}
else
{
lean_object* v_val_2450_; lean_object* v_val_2451_; uint8_t v___x_2452_; 
v_val_2450_ = lean_ctor_get(v_x_2445_, 0);
v_val_2451_ = lean_ctor_get(v_x_2446_, 0);
v___x_2452_ = lean_string_dec_eq(v_val_2450_, v_val_2451_);
return v___x_2452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2___boxed(lean_object* v_x_2453_, lean_object* v_x_2454_){
_start:
{
uint8_t v_res_2455_; lean_object* v_r_2456_; 
v_res_2455_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2(v_x_2453_, v_x_2454_);
lean_dec(v_x_2454_);
lean_dec(v_x_2453_);
v_r_2456_ = lean_box(v_res_2455_);
return v_r_2456_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_instBEqURI_beq(lean_object* v_x_2457_, lean_object* v_x_2458_){
_start:
{
lean_object* v_scheme_2459_; lean_object* v_authority_2460_; lean_object* v_path_2461_; lean_object* v_query_2462_; lean_object* v_fragment_2463_; lean_object* v_scheme_2464_; lean_object* v_authority_2465_; lean_object* v_path_2466_; lean_object* v_query_2467_; lean_object* v_fragment_2468_; uint8_t v___x_2469_; 
v_scheme_2459_ = lean_ctor_get(v_x_2457_, 0);
v_authority_2460_ = lean_ctor_get(v_x_2457_, 1);
v_path_2461_ = lean_ctor_get(v_x_2457_, 2);
v_query_2462_ = lean_ctor_get(v_x_2457_, 3);
v_fragment_2463_ = lean_ctor_get(v_x_2457_, 4);
v_scheme_2464_ = lean_ctor_get(v_x_2458_, 0);
v_authority_2465_ = lean_ctor_get(v_x_2458_, 1);
v_path_2466_ = lean_ctor_get(v_x_2458_, 2);
v_query_2467_ = lean_ctor_get(v_x_2458_, 3);
v_fragment_2468_ = lean_ctor_get(v_x_2458_, 4);
v___x_2469_ = lean_string_dec_eq(v_scheme_2459_, v_scheme_2464_);
if (v___x_2469_ == 0)
{
return v___x_2469_;
}
else
{
uint8_t v___x_2470_; 
v___x_2470_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_authority_2460_, v_authority_2465_);
if (v___x_2470_ == 0)
{
return v___x_2470_;
}
else
{
uint8_t v___x_2471_; 
v___x_2471_ = l_Std_Http_URI_instBEqPath_beq(v_path_2461_, v_path_2466_);
if (v___x_2471_ == 0)
{
return v___x_2471_;
}
else
{
uint8_t v___x_2472_; 
v___x_2472_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_query_2462_, v_query_2467_);
if (v___x_2472_ == 0)
{
return v___x_2472_;
}
else
{
uint8_t v___x_2473_; 
v___x_2473_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2(v_fragment_2463_, v_fragment_2468_);
return v___x_2473_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instBEqURI_beq___boxed(lean_object* v_x_2474_, lean_object* v_x_2475_){
_start:
{
uint8_t v_res_2476_; lean_object* v_r_2477_; 
v_res_2476_ = l_Std_Http_instBEqURI_beq(v_x_2474_, v_x_2475_);
lean_dec_ref(v_x_2475_);
lean_dec_ref(v_x_2474_);
v_r_2477_ = lean_box(v_res_2476_);
return v_r_2477_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringURI___lam__1(lean_object* v___f_2482_, lean_object* v_uri_2483_){
_start:
{
lean_object* v_scheme_2484_; lean_object* v_authority_2485_; lean_object* v_path_2486_; lean_object* v_query_2487_; lean_object* v_fragment_2488_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2501_; lean_object* v___y_2502_; lean_object* v___y_2511_; 
v_scheme_2484_ = lean_ctor_get(v_uri_2483_, 0);
lean_inc_ref(v_scheme_2484_);
v_authority_2485_ = lean_ctor_get(v_uri_2483_, 1);
lean_inc(v_authority_2485_);
v_path_2486_ = lean_ctor_get(v_uri_2483_, 2);
lean_inc_ref(v_path_2486_);
v_query_2487_ = lean_ctor_get(v_uri_2483_, 3);
lean_inc(v_query_2487_);
v_fragment_2488_ = lean_ctor_get(v_uri_2483_, 4);
lean_inc(v_fragment_2488_);
lean_dec_ref(v_uri_2483_);
if (lean_obj_tag(v_authority_2485_) == 0)
{
lean_object* v___x_2524_; 
v___x_2524_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2511_ = v___x_2524_;
goto v___jp_2510_;
}
else
{
lean_object* v_val_2525_; lean_object* v_userInfo_2526_; lean_object* v_host_2527_; lean_object* v_port_2528_; lean_object* v___x_2529_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___y_2533_; lean_object* v___y_2538_; lean_object* v___y_2539_; lean_object* v___y_2548_; 
v_val_2525_ = lean_ctor_get(v_authority_2485_, 0);
lean_inc(v_val_2525_);
lean_dec_ref_known(v_authority_2485_, 1);
v_userInfo_2526_ = lean_ctor_get(v_val_2525_, 0);
lean_inc(v_userInfo_2526_);
v_host_2527_ = lean_ctor_get(v_val_2525_, 1);
lean_inc_ref(v_host_2527_);
v_port_2528_ = lean_ctor_get(v_val_2525_, 2);
lean_inc(v_port_2528_);
lean_dec(v_val_2525_);
v___x_2529_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_2526_) == 0)
{
lean_object* v___x_2558_; 
v___x_2558_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2548_ = v___x_2558_;
goto v___jp_2547_;
}
else
{
lean_object* v_val_2559_; lean_object* v_password_2560_; 
v_val_2559_ = lean_ctor_get(v_userInfo_2526_, 0);
lean_inc(v_val_2559_);
lean_dec_ref_known(v_userInfo_2526_, 1);
v_password_2560_ = lean_ctor_get(v_val_2559_, 1);
if (lean_obj_tag(v_password_2560_) == 0)
{
lean_object* v_username_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v_username_2561_ = lean_ctor_get(v_val_2559_, 0);
lean_inc_ref(v_username_2561_);
lean_dec(v_val_2559_);
v___x_2562_ = lean_string_from_utf8_unchecked(v_username_2561_);
v___x_2563_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_2564_ = lean_string_append(v___x_2562_, v___x_2563_);
v___y_2548_ = v___x_2564_;
goto v___jp_2547_;
}
else
{
lean_object* v_username_2565_; lean_object* v_val_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
lean_inc_ref(v_password_2560_);
v_username_2565_ = lean_ctor_get(v_val_2559_, 0);
lean_inc_ref(v_username_2565_);
lean_dec(v_val_2559_);
v_val_2566_ = lean_ctor_get(v_password_2560_, 0);
lean_inc(v_val_2566_);
lean_dec_ref_known(v_password_2560_, 1);
v___x_2567_ = lean_string_from_utf8_unchecked(v_username_2565_);
v___x_2568_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2569_ = lean_string_append(v___x_2567_, v___x_2568_);
v___x_2570_ = lean_string_from_utf8_unchecked(v_val_2566_);
v___x_2571_ = lean_string_append(v___x_2569_, v___x_2570_);
lean_dec_ref(v___x_2570_);
v___x_2572_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_2573_ = lean_string_append(v___x_2571_, v___x_2572_);
v___y_2548_ = v___x_2573_;
goto v___jp_2547_;
}
}
v___jp_2530_:
{
lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2534_ = lean_string_append(v___y_2532_, v___y_2531_);
lean_dec_ref(v___y_2531_);
v___x_2535_ = lean_string_append(v___x_2534_, v___y_2533_);
lean_dec_ref(v___y_2533_);
v___x_2536_ = lean_string_append(v___x_2529_, v___x_2535_);
lean_dec_ref(v___x_2535_);
v___y_2511_ = v___x_2536_;
goto v___jp_2510_;
}
v___jp_2537_:
{
switch(lean_obj_tag(v_port_2528_))
{
case 0:
{
lean_object* v___x_2540_; 
v___x_2540_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2531_ = v___y_2539_;
v___y_2532_ = v___y_2538_;
v___y_2533_ = v___x_2540_;
goto v___jp_2530_;
}
case 1:
{
lean_object* v___x_2541_; 
v___x_2541_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_2531_ = v___y_2539_;
v___y_2532_ = v___y_2538_;
v___y_2533_ = v___x_2541_;
goto v___jp_2530_;
}
default: 
{
uint16_t v_port_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v_port_2542_ = lean_ctor_get_uint16(v_port_2528_, 0);
lean_dec_ref_known(v_port_2528_, 0);
v___x_2543_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2544_ = lean_uint16_to_nat(v_port_2542_);
v___x_2545_ = l_Nat_reprFast(v___x_2544_);
v___x_2546_ = lean_string_append(v___x_2543_, v___x_2545_);
lean_dec_ref(v___x_2545_);
v___y_2531_ = v___y_2539_;
v___y_2532_ = v___y_2538_;
v___y_2533_ = v___x_2546_;
goto v___jp_2530_;
}
}
}
v___jp_2547_:
{
switch(lean_obj_tag(v_host_2527_))
{
case 0:
{
lean_object* v_name_2549_; 
v_name_2549_ = lean_ctor_get(v_host_2527_, 0);
lean_inc_ref(v_name_2549_);
lean_dec_ref_known(v_host_2527_, 1);
v___y_2538_ = v___y_2548_;
v___y_2539_ = v_name_2549_;
goto v___jp_2537_;
}
case 1:
{
lean_object* v_ipv4_2550_; lean_object* v___x_2551_; 
v_ipv4_2550_ = lean_ctor_get(v_host_2527_, 0);
lean_inc_ref(v_ipv4_2550_);
lean_dec_ref_known(v_host_2527_, 1);
v___x_2551_ = lean_uv_ntop_v4(v_ipv4_2550_);
lean_dec_ref(v_ipv4_2550_);
v___y_2538_ = v___y_2548_;
v___y_2539_ = v___x_2551_;
goto v___jp_2537_;
}
default: 
{
lean_object* v_ipv6_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v_ipv6_2552_ = lean_ctor_get(v_host_2527_, 0);
lean_inc_ref(v_ipv6_2552_);
lean_dec_ref_known(v_host_2527_, 1);
v___x_2553_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_2554_ = lean_uv_ntop_v6(v_ipv6_2552_);
lean_dec_ref(v_ipv6_2552_);
v___x_2555_ = lean_string_append(v___x_2553_, v___x_2554_);
lean_dec_ref(v___x_2554_);
v___x_2556_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_2557_ = lean_string_append(v___x_2555_, v___x_2556_);
v___y_2538_ = v___y_2548_;
v___y_2539_ = v___x_2557_;
goto v___jp_2537_;
}
}
}
}
v___jp_2489_:
{
lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2494_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2495_ = lean_string_append(v_scheme_2484_, v___x_2494_);
v___x_2496_ = lean_string_append(v___x_2495_, v___y_2491_);
lean_dec_ref(v___y_2491_);
v___x_2497_ = lean_string_append(v___x_2496_, v___y_2490_);
lean_dec_ref(v___y_2490_);
v___x_2498_ = lean_string_append(v___x_2497_, v___y_2492_);
lean_dec_ref(v___y_2492_);
v___x_2499_ = lean_string_append(v___x_2498_, v___y_2493_);
lean_dec_ref(v___y_2493_);
return v___x_2499_;
}
v___jp_2500_:
{
lean_object* v_queryPart_2503_; 
v_queryPart_2503_ = l_Std_Http_URI_Query_formatOption(v_query_2487_);
if (lean_obj_tag(v_fragment_2488_) == 0)
{
lean_object* v___x_2504_; 
v___x_2504_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2490_ = v___y_2502_;
v___y_2491_ = v___y_2501_;
v___y_2492_ = v_queryPart_2503_;
v___y_2493_ = v___x_2504_;
goto v___jp_2489_;
}
else
{
lean_object* v_val_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v_val_2505_ = lean_ctor_get(v_fragment_2488_, 0);
lean_inc(v_val_2505_);
lean_dec_ref_known(v_fragment_2488_, 1);
v___x_2506_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_2507_ = l_Std_Http_URI_EncodedFragment_encode(v_val_2505_);
lean_dec(v_val_2505_);
v___x_2508_ = lean_string_from_utf8_unchecked(v___x_2507_);
v___x_2509_ = lean_string_append(v___x_2506_, v___x_2508_);
lean_dec_ref(v___x_2508_);
v___y_2490_ = v___y_2502_;
v___y_2491_ = v___y_2501_;
v___y_2492_ = v_queryPart_2503_;
v___y_2493_ = v___x_2509_;
goto v___jp_2489_;
}
}
v___jp_2510_:
{
lean_object* v_segments_2512_; uint8_t v_absolute_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; size_t v_sz_2516_; size_t v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v_result_2522_; 
v_segments_2512_ = lean_ctor_get(v_path_2486_, 0);
lean_inc_ref(v_segments_2512_);
v_absolute_2513_ = lean_ctor_get_uint8(v_path_2486_, sizeof(void*)*1);
lean_dec_ref(v_path_2486_);
v___x_2514_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_2515_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_2516_ = lean_array_size(v_segments_2512_);
v___x_2517_ = ((size_t)0ULL);
v___x_2518_ = l_unsafeCast___redArg(v_segments_2512_);
lean_dec_ref(v_segments_2512_);
v___x_2519_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2515_, v___f_2482_, v_sz_2516_, v___x_2517_, v___x_2518_);
v___x_2520_ = l_unsafeCast___redArg(v___x_2519_);
lean_dec(v___x_2519_);
v___x_2521_ = lean_array_to_list(v___x_2520_);
v_result_2522_ = l_String_intercalate(v___x_2514_, v___x_2521_);
if (v_absolute_2513_ == 0)
{
v___y_2501_ = v___y_2511_;
v___y_2502_ = v_result_2522_;
goto v___jp_2500_;
}
else
{
lean_object* v___x_2523_; 
v___x_2523_ = lean_string_append(v___x_2514_, v_result_2522_);
lean_dec_ref(v_result_2522_);
v___y_2501_ = v___y_2511_;
v___y_2502_ = v___x_2523_;
goto v___jp_2500_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x3f(lean_object* v_b_2586_, lean_object* v_scheme_2587_){
_start:
{
lean_object* v___x_2588_; 
v___x_2588_ = l_Std_Http_URI_Scheme_ofString_x3f(v_scheme_2587_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v___x_2589_; 
lean_dec_ref(v_b_2586_);
v___x_2589_ = lean_box(0);
return v___x_2589_;
}
else
{
lean_object* v_userInfo_2590_; lean_object* v_host_2591_; lean_object* v_port_2592_; lean_object* v_pathSegments_2593_; lean_object* v_query_2594_; lean_object* v_fragment_2595_; lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2610_; 
v_userInfo_2590_ = lean_ctor_get(v_b_2586_, 1);
v_host_2591_ = lean_ctor_get(v_b_2586_, 2);
v_port_2592_ = lean_ctor_get(v_b_2586_, 3);
v_pathSegments_2593_ = lean_ctor_get(v_b_2586_, 4);
v_query_2594_ = lean_ctor_get(v_b_2586_, 5);
v_fragment_2595_ = lean_ctor_get(v_b_2586_, 6);
v_isSharedCheck_2610_ = !lean_is_exclusive(v_b_2586_);
if (v_isSharedCheck_2610_ == 0)
{
lean_object* v_unused_2611_; 
v_unused_2611_ = lean_ctor_get(v_b_2586_, 0);
lean_dec(v_unused_2611_);
v___x_2597_ = v_b_2586_;
v_isShared_2598_ = v_isSharedCheck_2610_;
goto v_resetjp_2596_;
}
else
{
lean_inc(v_fragment_2595_);
lean_inc(v_query_2594_);
lean_inc(v_pathSegments_2593_);
lean_inc(v_port_2592_);
lean_inc(v_host_2591_);
lean_inc(v_userInfo_2590_);
lean_dec(v_b_2586_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2610_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v___x_2600_; 
lean_inc_ref(v___x_2588_);
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 0, v___x_2588_);
v___x_2600_ = v___x_2597_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v___x_2588_);
lean_ctor_set(v_reuseFailAlloc_2609_, 1, v_userInfo_2590_);
lean_ctor_set(v_reuseFailAlloc_2609_, 2, v_host_2591_);
lean_ctor_set(v_reuseFailAlloc_2609_, 3, v_port_2592_);
lean_ctor_set(v_reuseFailAlloc_2609_, 4, v_pathSegments_2593_);
lean_ctor_set(v_reuseFailAlloc_2609_, 5, v_query_2594_);
lean_ctor_set(v_reuseFailAlloc_2609_, 6, v_fragment_2595_);
v___x_2600_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2607_; 
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2607_ == 0)
{
lean_object* v_unused_2608_; 
v_unused_2608_ = lean_ctor_get(v___x_2588_, 0);
lean_dec(v_unused_2608_);
v___x_2602_ = v___x_2588_;
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
else
{
lean_dec(v___x_2588_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v___x_2605_; 
if (v_isShared_2603_ == 0)
{
lean_ctor_set(v___x_2602_, 0, v___x_2600_);
v___x_2605_ = v___x_2602_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v___x_2600_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(lean_object* v_msg_2612_){
_start:
{
lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2613_ = ((lean_object*)(l_Std_Http_URI_instInhabitedBuilder_default));
v___x_2614_ = lean_panic_fn_borrowed(v___x_2613_, v_msg_2612_);
return v___x_2614_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x21(lean_object* v_b_2616_, lean_object* v_scheme_2617_){
_start:
{
lean_object* v___x_2618_; 
lean_inc_ref(v_scheme_2617_);
v___x_2618_ = l_Std_Http_URI_Builder_setScheme_x3f(v_b_2616_, v_scheme_2617_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2619_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_2620_ = ((lean_object*)(l_Std_Http_URI_Builder_setScheme_x21___closed__0));
v___x_2621_ = lean_unsigned_to_nat(687u);
v___x_2622_ = lean_unsigned_to_nat(14u);
v___x_2623_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__2));
v___x_2624_ = l_String_quote(v_scheme_2617_);
v___x_2625_ = lean_string_append(v___x_2623_, v___x_2624_);
lean_dec_ref(v___x_2624_);
v___x_2626_ = l_mkPanicMessageWithDecl(v___x_2619_, v___x_2620_, v___x_2621_, v___x_2622_, v___x_2625_);
lean_dec_ref(v___x_2625_);
v___x_2627_ = l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(v___x_2626_);
return v___x_2627_;
}
else
{
lean_object* v_val_2628_; 
lean_dec_ref(v_scheme_2617_);
v_val_2628_ = lean_ctor_get(v___x_2618_, 0);
lean_inc(v_val_2628_);
lean_dec_ref_known(v___x_2618_, 1);
return v_val_2628_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setUserInfo(lean_object* v_b_2629_, lean_object* v_username_2630_, lean_object* v_password_2631_){
_start:
{
lean_object* v_scheme_2632_; lean_object* v_host_2633_; lean_object* v_port_2634_; lean_object* v_pathSegments_2635_; lean_object* v_query_2636_; lean_object* v_fragment_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2660_; 
v_scheme_2632_ = lean_ctor_get(v_b_2629_, 0);
v_host_2633_ = lean_ctor_get(v_b_2629_, 2);
v_port_2634_ = lean_ctor_get(v_b_2629_, 3);
v_pathSegments_2635_ = lean_ctor_get(v_b_2629_, 4);
v_query_2636_ = lean_ctor_get(v_b_2629_, 5);
v_fragment_2637_ = lean_ctor_get(v_b_2629_, 6);
v_isSharedCheck_2660_ = !lean_is_exclusive(v_b_2629_);
if (v_isSharedCheck_2660_ == 0)
{
lean_object* v_unused_2661_; 
v_unused_2661_ = lean_ctor_get(v_b_2629_, 1);
lean_dec(v_unused_2661_);
v___x_2639_ = v_b_2629_;
v_isShared_2640_ = v_isSharedCheck_2660_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_fragment_2637_);
lean_inc(v_query_2636_);
lean_inc(v_pathSegments_2635_);
lean_inc(v_port_2634_);
lean_inc(v_host_2633_);
lean_inc(v_scheme_2632_);
lean_dec(v_b_2629_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2660_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___y_2642_; lean_object* v___x_2647_; 
v___x_2647_ = l_Std_Http_URI_EncodedUserInfo_encode(v_username_2630_);
if (lean_obj_tag(v_password_2631_) == 0)
{
lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2648_ = lean_box(0);
v___x_2649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2647_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___y_2642_ = v___x_2649_;
goto v___jp_2641_;
}
else
{
lean_object* v_val_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2659_; 
v_val_2650_ = lean_ctor_get(v_password_2631_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v_password_2631_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2652_ = v_password_2631_;
v_isShared_2653_ = v_isSharedCheck_2659_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_val_2650_);
lean_dec(v_password_2631_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2659_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2654_; lean_object* v___x_2656_; 
v___x_2654_ = l_Std_Http_URI_EncodedUserInfo_encode(v_val_2650_);
lean_dec(v_val_2650_);
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 0, v___x_2654_);
v___x_2656_ = v___x_2652_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v___x_2654_);
v___x_2656_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
lean_object* v___x_2657_; 
v___x_2657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2647_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
v___y_2642_ = v___x_2657_;
goto v___jp_2641_;
}
}
}
v___jp_2641_:
{
lean_object* v___x_2643_; lean_object* v___x_2645_; 
v___x_2643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2643_, 0, v___y_2642_);
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 1, v___x_2643_);
v___x_2645_ = v___x_2639_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_scheme_2632_);
lean_ctor_set(v_reuseFailAlloc_2646_, 1, v___x_2643_);
lean_ctor_set(v_reuseFailAlloc_2646_, 2, v_host_2633_);
lean_ctor_set(v_reuseFailAlloc_2646_, 3, v_port_2634_);
lean_ctor_set(v_reuseFailAlloc_2646_, 4, v_pathSegments_2635_);
lean_ctor_set(v_reuseFailAlloc_2646_, 5, v_query_2636_);
lean_ctor_set(v_reuseFailAlloc_2646_, 6, v_fragment_2637_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setUserInfo___boxed(lean_object* v_b_2662_, lean_object* v_username_2663_, lean_object* v_password_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Std_Http_URI_Builder_setUserInfo(v_b_2662_, v_username_2663_, v_password_2664_);
lean_dec_ref(v_username_2663_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x3f(lean_object* v_b_2666_, lean_object* v_name_2667_){
_start:
{
lean_object* v___x_2668_; 
v___x_2668_ = l_Std_Http_URI_DomainName_ofString_x3f(v_name_2667_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v___x_2669_; 
lean_dec_ref(v_b_2666_);
v___x_2669_ = lean_box(0);
return v___x_2669_;
}
else
{
lean_object* v_val_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2693_; 
v_val_2670_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2672_ = v___x_2668_;
v_isShared_2673_ = v_isSharedCheck_2693_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_val_2670_);
lean_dec(v___x_2668_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2693_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v_scheme_2674_; lean_object* v_userInfo_2675_; lean_object* v_port_2676_; lean_object* v_pathSegments_2677_; lean_object* v_query_2678_; lean_object* v_fragment_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2691_; 
v_scheme_2674_ = lean_ctor_get(v_b_2666_, 0);
v_userInfo_2675_ = lean_ctor_get(v_b_2666_, 1);
v_port_2676_ = lean_ctor_get(v_b_2666_, 3);
v_pathSegments_2677_ = lean_ctor_get(v_b_2666_, 4);
v_query_2678_ = lean_ctor_get(v_b_2666_, 5);
v_fragment_2679_ = lean_ctor_get(v_b_2666_, 6);
v_isSharedCheck_2691_ = !lean_is_exclusive(v_b_2666_);
if (v_isSharedCheck_2691_ == 0)
{
lean_object* v_unused_2692_; 
v_unused_2692_ = lean_ctor_get(v_b_2666_, 2);
lean_dec(v_unused_2692_);
v___x_2681_ = v_b_2666_;
v_isShared_2682_ = v_isSharedCheck_2691_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_fragment_2679_);
lean_inc(v_query_2678_);
lean_inc(v_pathSegments_2677_);
lean_inc(v_port_2676_);
lean_inc(v_userInfo_2675_);
lean_inc(v_scheme_2674_);
lean_dec(v_b_2666_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2691_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2683_; lean_object* v___x_2685_; 
v___x_2683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2683_, 0, v_val_2670_);
if (v_isShared_2673_ == 0)
{
lean_ctor_set(v___x_2672_, 0, v___x_2683_);
v___x_2685_ = v___x_2672_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v___x_2683_);
v___x_2685_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2687_; 
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 2, v___x_2685_);
v___x_2687_ = v___x_2681_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_scheme_2674_);
lean_ctor_set(v_reuseFailAlloc_2689_, 1, v_userInfo_2675_);
lean_ctor_set(v_reuseFailAlloc_2689_, 2, v___x_2685_);
lean_ctor_set(v_reuseFailAlloc_2689_, 3, v_port_2676_);
lean_ctor_set(v_reuseFailAlloc_2689_, 4, v_pathSegments_2677_);
lean_ctor_set(v_reuseFailAlloc_2689_, 5, v_query_2678_);
lean_ctor_set(v_reuseFailAlloc_2689_, 6, v_fragment_2679_);
v___x_2687_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
lean_object* v___x_2688_; 
v___x_2688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2687_);
return v___x_2688_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x21(lean_object* v_b_2696_, lean_object* v_name_2697_){
_start:
{
lean_object* v___x_2698_; 
lean_inc_ref(v_name_2697_);
v___x_2698_ = l_Std_Http_URI_Builder_setHost_x3f(v_b_2696_, v_name_2697_);
if (lean_obj_tag(v___x_2698_) == 0)
{
lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2699_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_2700_ = ((lean_object*)(l_Std_Http_URI_Builder_setHost_x21___closed__0));
v___x_2701_ = lean_unsigned_to_nat(716u);
v___x_2702_ = lean_unsigned_to_nat(14u);
v___x_2703_ = ((lean_object*)(l_Std_Http_URI_Builder_setHost_x21___closed__1));
v___x_2704_ = l_String_quote(v_name_2697_);
v___x_2705_ = lean_string_append(v___x_2703_, v___x_2704_);
lean_dec_ref(v___x_2704_);
v___x_2706_ = l_mkPanicMessageWithDecl(v___x_2699_, v___x_2700_, v___x_2701_, v___x_2702_, v___x_2705_);
lean_dec_ref(v___x_2705_);
v___x_2707_ = l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(v___x_2706_);
return v___x_2707_;
}
else
{
lean_object* v_val_2708_; 
lean_dec_ref(v_name_2697_);
v_val_2708_ = lean_ctor_get(v___x_2698_, 0);
lean_inc(v_val_2708_);
lean_dec_ref_known(v___x_2698_, 1);
return v_val_2708_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv4(lean_object* v_b_2709_, lean_object* v_addr_2710_){
_start:
{
lean_object* v_scheme_2711_; lean_object* v_userInfo_2712_; lean_object* v_port_2713_; lean_object* v_pathSegments_2714_; lean_object* v_query_2715_; lean_object* v_fragment_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2725_; 
v_scheme_2711_ = lean_ctor_get(v_b_2709_, 0);
v_userInfo_2712_ = lean_ctor_get(v_b_2709_, 1);
v_port_2713_ = lean_ctor_get(v_b_2709_, 3);
v_pathSegments_2714_ = lean_ctor_get(v_b_2709_, 4);
v_query_2715_ = lean_ctor_get(v_b_2709_, 5);
v_fragment_2716_ = lean_ctor_get(v_b_2709_, 6);
v_isSharedCheck_2725_ = !lean_is_exclusive(v_b_2709_);
if (v_isSharedCheck_2725_ == 0)
{
lean_object* v_unused_2726_; 
v_unused_2726_ = lean_ctor_get(v_b_2709_, 2);
lean_dec(v_unused_2726_);
v___x_2718_ = v_b_2709_;
v_isShared_2719_ = v_isSharedCheck_2725_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_fragment_2716_);
lean_inc(v_query_2715_);
lean_inc(v_pathSegments_2714_);
lean_inc(v_port_2713_);
lean_inc(v_userInfo_2712_);
lean_inc(v_scheme_2711_);
lean_dec(v_b_2709_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2725_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2723_; 
v___x_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2720_, 0, v_addr_2710_);
v___x_2721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2720_);
if (v_isShared_2719_ == 0)
{
lean_ctor_set(v___x_2718_, 2, v___x_2721_);
v___x_2723_ = v___x_2718_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_scheme_2711_);
lean_ctor_set(v_reuseFailAlloc_2724_, 1, v_userInfo_2712_);
lean_ctor_set(v_reuseFailAlloc_2724_, 2, v___x_2721_);
lean_ctor_set(v_reuseFailAlloc_2724_, 3, v_port_2713_);
lean_ctor_set(v_reuseFailAlloc_2724_, 4, v_pathSegments_2714_);
lean_ctor_set(v_reuseFailAlloc_2724_, 5, v_query_2715_);
lean_ctor_set(v_reuseFailAlloc_2724_, 6, v_fragment_2716_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv6(lean_object* v_b_2727_, lean_object* v_addr_2728_){
_start:
{
lean_object* v_scheme_2729_; lean_object* v_userInfo_2730_; lean_object* v_port_2731_; lean_object* v_pathSegments_2732_; lean_object* v_query_2733_; lean_object* v_fragment_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2743_; 
v_scheme_2729_ = lean_ctor_get(v_b_2727_, 0);
v_userInfo_2730_ = lean_ctor_get(v_b_2727_, 1);
v_port_2731_ = lean_ctor_get(v_b_2727_, 3);
v_pathSegments_2732_ = lean_ctor_get(v_b_2727_, 4);
v_query_2733_ = lean_ctor_get(v_b_2727_, 5);
v_fragment_2734_ = lean_ctor_get(v_b_2727_, 6);
v_isSharedCheck_2743_ = !lean_is_exclusive(v_b_2727_);
if (v_isSharedCheck_2743_ == 0)
{
lean_object* v_unused_2744_; 
v_unused_2744_ = lean_ctor_get(v_b_2727_, 2);
lean_dec(v_unused_2744_);
v___x_2736_ = v_b_2727_;
v_isShared_2737_ = v_isSharedCheck_2743_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_fragment_2734_);
lean_inc(v_query_2733_);
lean_inc(v_pathSegments_2732_);
lean_inc(v_port_2731_);
lean_inc(v_userInfo_2730_);
lean_inc(v_scheme_2729_);
lean_dec(v_b_2727_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2743_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2741_; 
v___x_2738_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2738_, 0, v_addr_2728_);
v___x_2739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2739_, 0, v___x_2738_);
if (v_isShared_2737_ == 0)
{
lean_ctor_set(v___x_2736_, 2, v___x_2739_);
v___x_2741_ = v___x_2736_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_scheme_2729_);
lean_ctor_set(v_reuseFailAlloc_2742_, 1, v_userInfo_2730_);
lean_ctor_set(v_reuseFailAlloc_2742_, 2, v___x_2739_);
lean_ctor_set(v_reuseFailAlloc_2742_, 3, v_port_2731_);
lean_ctor_set(v_reuseFailAlloc_2742_, 4, v_pathSegments_2732_);
lean_ctor_set(v_reuseFailAlloc_2742_, 5, v_query_2733_);
lean_ctor_set(v_reuseFailAlloc_2742_, 6, v_fragment_2734_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort(lean_object* v_b_2745_, uint16_t v_port_2746_){
_start:
{
lean_object* v_scheme_2747_; lean_object* v_userInfo_2748_; lean_object* v_host_2749_; lean_object* v_pathSegments_2750_; lean_object* v_query_2751_; lean_object* v_fragment_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2760_; 
v_scheme_2747_ = lean_ctor_get(v_b_2745_, 0);
v_userInfo_2748_ = lean_ctor_get(v_b_2745_, 1);
v_host_2749_ = lean_ctor_get(v_b_2745_, 2);
v_pathSegments_2750_ = lean_ctor_get(v_b_2745_, 4);
v_query_2751_ = lean_ctor_get(v_b_2745_, 5);
v_fragment_2752_ = lean_ctor_get(v_b_2745_, 6);
v_isSharedCheck_2760_ = !lean_is_exclusive(v_b_2745_);
if (v_isSharedCheck_2760_ == 0)
{
lean_object* v_unused_2761_; 
v_unused_2761_ = lean_ctor_get(v_b_2745_, 3);
lean_dec(v_unused_2761_);
v___x_2754_ = v_b_2745_;
v_isShared_2755_ = v_isSharedCheck_2760_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_fragment_2752_);
lean_inc(v_query_2751_);
lean_inc(v_pathSegments_2750_);
lean_inc(v_host_2749_);
lean_inc(v_userInfo_2748_);
lean_inc(v_scheme_2747_);
lean_dec(v_b_2745_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2760_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2756_; lean_object* v___x_2758_; 
v___x_2756_ = lean_alloc_ctor(2, 0, 2);
lean_ctor_set_uint16(v___x_2756_, 0, v_port_2746_);
if (v_isShared_2755_ == 0)
{
lean_ctor_set(v___x_2754_, 3, v___x_2756_);
v___x_2758_ = v___x_2754_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_scheme_2747_);
lean_ctor_set(v_reuseFailAlloc_2759_, 1, v_userInfo_2748_);
lean_ctor_set(v_reuseFailAlloc_2759_, 2, v_host_2749_);
lean_ctor_set(v_reuseFailAlloc_2759_, 3, v___x_2756_);
lean_ctor_set(v_reuseFailAlloc_2759_, 4, v_pathSegments_2750_);
lean_ctor_set(v_reuseFailAlloc_2759_, 5, v_query_2751_);
lean_ctor_set(v_reuseFailAlloc_2759_, 6, v_fragment_2752_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort___boxed(lean_object* v_b_2762_, lean_object* v_port_2763_){
_start:
{
uint16_t v_port_boxed_2764_; lean_object* v_res_2765_; 
v_port_boxed_2764_ = lean_unbox(v_port_2763_);
v_res_2765_ = l_Std_Http_URI_Builder_setPort(v_b_2762_, v_port_boxed_2764_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPath(lean_object* v_b_2766_, lean_object* v_segments_2767_){
_start:
{
lean_object* v_scheme_2768_; lean_object* v_userInfo_2769_; lean_object* v_host_2770_; lean_object* v_port_2771_; lean_object* v_query_2772_; lean_object* v_fragment_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2780_; 
v_scheme_2768_ = lean_ctor_get(v_b_2766_, 0);
v_userInfo_2769_ = lean_ctor_get(v_b_2766_, 1);
v_host_2770_ = lean_ctor_get(v_b_2766_, 2);
v_port_2771_ = lean_ctor_get(v_b_2766_, 3);
v_query_2772_ = lean_ctor_get(v_b_2766_, 5);
v_fragment_2773_ = lean_ctor_get(v_b_2766_, 6);
v_isSharedCheck_2780_ = !lean_is_exclusive(v_b_2766_);
if (v_isSharedCheck_2780_ == 0)
{
lean_object* v_unused_2781_; 
v_unused_2781_ = lean_ctor_get(v_b_2766_, 4);
lean_dec(v_unused_2781_);
v___x_2775_ = v_b_2766_;
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_fragment_2773_);
lean_inc(v_query_2772_);
lean_inc(v_port_2771_);
lean_inc(v_host_2770_);
lean_inc(v_userInfo_2769_);
lean_inc(v_scheme_2768_);
lean_dec(v_b_2766_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2778_; 
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 4, v_segments_2767_);
v___x_2778_ = v___x_2775_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_scheme_2768_);
lean_ctor_set(v_reuseFailAlloc_2779_, 1, v_userInfo_2769_);
lean_ctor_set(v_reuseFailAlloc_2779_, 2, v_host_2770_);
lean_ctor_set(v_reuseFailAlloc_2779_, 3, v_port_2771_);
lean_ctor_set(v_reuseFailAlloc_2779_, 4, v_segments_2767_);
lean_ctor_set(v_reuseFailAlloc_2779_, 5, v_query_2772_);
lean_ctor_set(v_reuseFailAlloc_2779_, 6, v_fragment_2773_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_appendPathSegment(lean_object* v_b_2782_, lean_object* v_segment_2783_){
_start:
{
lean_object* v_scheme_2784_; lean_object* v_userInfo_2785_; lean_object* v_host_2786_; lean_object* v_port_2787_; lean_object* v_pathSegments_2788_; lean_object* v_query_2789_; lean_object* v_fragment_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2798_; 
v_scheme_2784_ = lean_ctor_get(v_b_2782_, 0);
v_userInfo_2785_ = lean_ctor_get(v_b_2782_, 1);
v_host_2786_ = lean_ctor_get(v_b_2782_, 2);
v_port_2787_ = lean_ctor_get(v_b_2782_, 3);
v_pathSegments_2788_ = lean_ctor_get(v_b_2782_, 4);
v_query_2789_ = lean_ctor_get(v_b_2782_, 5);
v_fragment_2790_ = lean_ctor_get(v_b_2782_, 6);
v_isSharedCheck_2798_ = !lean_is_exclusive(v_b_2782_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2792_ = v_b_2782_;
v_isShared_2793_ = v_isSharedCheck_2798_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_fragment_2790_);
lean_inc(v_query_2789_);
lean_inc(v_pathSegments_2788_);
lean_inc(v_port_2787_);
lean_inc(v_host_2786_);
lean_inc(v_userInfo_2785_);
lean_inc(v_scheme_2784_);
lean_dec(v_b_2782_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2798_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2794_; lean_object* v___x_2796_; 
v___x_2794_ = lean_array_push(v_pathSegments_2788_, v_segment_2783_);
if (v_isShared_2793_ == 0)
{
lean_ctor_set(v___x_2792_, 4, v___x_2794_);
v___x_2796_ = v___x_2792_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_scheme_2784_);
lean_ctor_set(v_reuseFailAlloc_2797_, 1, v_userInfo_2785_);
lean_ctor_set(v_reuseFailAlloc_2797_, 2, v_host_2786_);
lean_ctor_set(v_reuseFailAlloc_2797_, 3, v_port_2787_);
lean_ctor_set(v_reuseFailAlloc_2797_, 4, v___x_2794_);
lean_ctor_set(v_reuseFailAlloc_2797_, 5, v_query_2789_);
lean_ctor_set(v_reuseFailAlloc_2797_, 6, v_fragment_2790_);
v___x_2796_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
return v___x_2796_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryParam(lean_object* v_b_2799_, lean_object* v_key_2800_, lean_object* v_value_2801_){
_start:
{
lean_object* v_scheme_2802_; lean_object* v_userInfo_2803_; lean_object* v_host_2804_; lean_object* v_port_2805_; lean_object* v_pathSegments_2806_; lean_object* v_query_2807_; lean_object* v_fragment_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2818_; 
v_scheme_2802_ = lean_ctor_get(v_b_2799_, 0);
v_userInfo_2803_ = lean_ctor_get(v_b_2799_, 1);
v_host_2804_ = lean_ctor_get(v_b_2799_, 2);
v_port_2805_ = lean_ctor_get(v_b_2799_, 3);
v_pathSegments_2806_ = lean_ctor_get(v_b_2799_, 4);
v_query_2807_ = lean_ctor_get(v_b_2799_, 5);
v_fragment_2808_ = lean_ctor_get(v_b_2799_, 6);
v_isSharedCheck_2818_ = !lean_is_exclusive(v_b_2799_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2810_ = v_b_2799_;
v_isShared_2811_ = v_isSharedCheck_2818_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_fragment_2808_);
lean_inc(v_query_2807_);
lean_inc(v_pathSegments_2806_);
lean_inc(v_port_2805_);
lean_inc(v_host_2804_);
lean_inc(v_userInfo_2803_);
lean_inc(v_scheme_2802_);
lean_dec(v_b_2799_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2818_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2816_; 
v___x_2812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2812_, 0, v_value_2801_);
v___x_2813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2813_, 0, v_key_2800_);
lean_ctor_set(v___x_2813_, 1, v___x_2812_);
v___x_2814_ = lean_array_push(v_query_2807_, v___x_2813_);
if (v_isShared_2811_ == 0)
{
lean_ctor_set(v___x_2810_, 5, v___x_2814_);
v___x_2816_ = v___x_2810_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_scheme_2802_);
lean_ctor_set(v_reuseFailAlloc_2817_, 1, v_userInfo_2803_);
lean_ctor_set(v_reuseFailAlloc_2817_, 2, v_host_2804_);
lean_ctor_set(v_reuseFailAlloc_2817_, 3, v_port_2805_);
lean_ctor_set(v_reuseFailAlloc_2817_, 4, v_pathSegments_2806_);
lean_ctor_set(v_reuseFailAlloc_2817_, 5, v___x_2814_);
lean_ctor_set(v_reuseFailAlloc_2817_, 6, v_fragment_2808_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryFlag(lean_object* v_b_2819_, lean_object* v_key_2820_){
_start:
{
lean_object* v_scheme_2821_; lean_object* v_userInfo_2822_; lean_object* v_host_2823_; lean_object* v_port_2824_; lean_object* v_pathSegments_2825_; lean_object* v_query_2826_; lean_object* v_fragment_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2837_; 
v_scheme_2821_ = lean_ctor_get(v_b_2819_, 0);
v_userInfo_2822_ = lean_ctor_get(v_b_2819_, 1);
v_host_2823_ = lean_ctor_get(v_b_2819_, 2);
v_port_2824_ = lean_ctor_get(v_b_2819_, 3);
v_pathSegments_2825_ = lean_ctor_get(v_b_2819_, 4);
v_query_2826_ = lean_ctor_get(v_b_2819_, 5);
v_fragment_2827_ = lean_ctor_get(v_b_2819_, 6);
v_isSharedCheck_2837_ = !lean_is_exclusive(v_b_2819_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2829_ = v_b_2819_;
v_isShared_2830_ = v_isSharedCheck_2837_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_fragment_2827_);
lean_inc(v_query_2826_);
lean_inc(v_pathSegments_2825_);
lean_inc(v_port_2824_);
lean_inc(v_host_2823_);
lean_inc(v_userInfo_2822_);
lean_inc(v_scheme_2821_);
lean_dec(v_b_2819_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2837_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2835_; 
v___x_2831_ = lean_box(0);
v___x_2832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2832_, 0, v_key_2820_);
lean_ctor_set(v___x_2832_, 1, v___x_2831_);
v___x_2833_ = lean_array_push(v_query_2826_, v___x_2832_);
if (v_isShared_2830_ == 0)
{
lean_ctor_set(v___x_2829_, 5, v___x_2833_);
v___x_2835_ = v___x_2829_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_scheme_2821_);
lean_ctor_set(v_reuseFailAlloc_2836_, 1, v_userInfo_2822_);
lean_ctor_set(v_reuseFailAlloc_2836_, 2, v_host_2823_);
lean_ctor_set(v_reuseFailAlloc_2836_, 3, v_port_2824_);
lean_ctor_set(v_reuseFailAlloc_2836_, 4, v_pathSegments_2825_);
lean_ctor_set(v_reuseFailAlloc_2836_, 5, v___x_2833_);
lean_ctor_set(v_reuseFailAlloc_2836_, 6, v_fragment_2827_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setQuery(lean_object* v_b_2838_, lean_object* v_query_2839_){
_start:
{
lean_object* v_scheme_2840_; lean_object* v_userInfo_2841_; lean_object* v_host_2842_; lean_object* v_port_2843_; lean_object* v_pathSegments_2844_; lean_object* v_fragment_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2852_; 
v_scheme_2840_ = lean_ctor_get(v_b_2838_, 0);
v_userInfo_2841_ = lean_ctor_get(v_b_2838_, 1);
v_host_2842_ = lean_ctor_get(v_b_2838_, 2);
v_port_2843_ = lean_ctor_get(v_b_2838_, 3);
v_pathSegments_2844_ = lean_ctor_get(v_b_2838_, 4);
v_fragment_2845_ = lean_ctor_get(v_b_2838_, 6);
v_isSharedCheck_2852_ = !lean_is_exclusive(v_b_2838_);
if (v_isSharedCheck_2852_ == 0)
{
lean_object* v_unused_2853_; 
v_unused_2853_ = lean_ctor_get(v_b_2838_, 5);
lean_dec(v_unused_2853_);
v___x_2847_ = v_b_2838_;
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_fragment_2845_);
lean_inc(v_pathSegments_2844_);
lean_inc(v_port_2843_);
lean_inc(v_host_2842_);
lean_inc(v_userInfo_2841_);
lean_inc(v_scheme_2840_);
lean_dec(v_b_2838_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 5, v_query_2839_);
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_scheme_2840_);
lean_ctor_set(v_reuseFailAlloc_2851_, 1, v_userInfo_2841_);
lean_ctor_set(v_reuseFailAlloc_2851_, 2, v_host_2842_);
lean_ctor_set(v_reuseFailAlloc_2851_, 3, v_port_2843_);
lean_ctor_set(v_reuseFailAlloc_2851_, 4, v_pathSegments_2844_);
lean_ctor_set(v_reuseFailAlloc_2851_, 5, v_query_2839_);
lean_ctor_set(v_reuseFailAlloc_2851_, 6, v_fragment_2845_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setFragment(lean_object* v_b_2854_, lean_object* v_fragment_2855_){
_start:
{
lean_object* v_scheme_2856_; lean_object* v_userInfo_2857_; lean_object* v_host_2858_; lean_object* v_port_2859_; lean_object* v_pathSegments_2860_; lean_object* v_query_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2869_; 
v_scheme_2856_ = lean_ctor_get(v_b_2854_, 0);
v_userInfo_2857_ = lean_ctor_get(v_b_2854_, 1);
v_host_2858_ = lean_ctor_get(v_b_2854_, 2);
v_port_2859_ = lean_ctor_get(v_b_2854_, 3);
v_pathSegments_2860_ = lean_ctor_get(v_b_2854_, 4);
v_query_2861_ = lean_ctor_get(v_b_2854_, 5);
v_isSharedCheck_2869_ = !lean_is_exclusive(v_b_2854_);
if (v_isSharedCheck_2869_ == 0)
{
lean_object* v_unused_2870_; 
v_unused_2870_ = lean_ctor_get(v_b_2854_, 6);
lean_dec(v_unused_2870_);
v___x_2863_ = v_b_2854_;
v_isShared_2864_ = v_isSharedCheck_2869_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_query_2861_);
lean_inc(v_pathSegments_2860_);
lean_inc(v_port_2859_);
lean_inc(v_host_2858_);
lean_inc(v_userInfo_2857_);
lean_inc(v_scheme_2856_);
lean_dec(v_b_2854_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2869_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2865_; lean_object* v___x_2867_; 
v___x_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2865_, 0, v_fragment_2855_);
if (v_isShared_2864_ == 0)
{
lean_ctor_set(v___x_2863_, 6, v___x_2865_);
v___x_2867_ = v___x_2863_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_scheme_2856_);
lean_ctor_set(v_reuseFailAlloc_2868_, 1, v_userInfo_2857_);
lean_ctor_set(v_reuseFailAlloc_2868_, 2, v_host_2858_);
lean_ctor_set(v_reuseFailAlloc_2868_, 3, v_port_2859_);
lean_ctor_set(v_reuseFailAlloc_2868_, 4, v_pathSegments_2860_);
lean_ctor_set(v_reuseFailAlloc_2868_, 5, v_query_2861_);
lean_ctor_set(v_reuseFailAlloc_2868_, 6, v___x_2865_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
return v___x_2867_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(size_t v_sz_2871_, size_t v_i_2872_, lean_object* v_bs_2873_){
_start:
{
uint8_t v___x_2874_; 
v___x_2874_ = lean_usize_dec_lt(v_i_2872_, v_sz_2871_);
if (v___x_2874_ == 0)
{
lean_object* v___x_2875_; 
v___x_2875_ = l_unsafeCast___redArg(v_bs_2873_);
lean_dec_ref(v_bs_2873_);
return v___x_2875_;
}
else
{
lean_object* v_v_2876_; lean_object* v___x_2877_; lean_object* v_bs_x27_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; size_t v___x_2881_; size_t v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v_v_2876_ = lean_array_uget(v_bs_2873_, v_i_2872_);
v___x_2877_ = lean_unsigned_to_nat(0u);
v_bs_x27_2878_ = lean_array_uset(v_bs_2873_, v_i_2872_, v___x_2877_);
v___x_2879_ = l_unsafeCast___redArg(v_v_2876_);
lean_dec(v_v_2876_);
v___x_2880_ = l_Std_Http_URI_EncodedSegment_encode(v___x_2879_);
lean_dec(v___x_2879_);
v___x_2881_ = ((size_t)1ULL);
v___x_2882_ = lean_usize_add(v_i_2872_, v___x_2881_);
v___x_2883_ = l_unsafeCast___redArg(v___x_2880_);
lean_dec_ref(v___x_2880_);
v___x_2884_ = lean_array_uset(v_bs_x27_2878_, v_i_2872_, v___x_2883_);
v_i_2872_ = v___x_2882_;
v_bs_2873_ = v___x_2884_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0___boxed(lean_object* v_sz_2886_, lean_object* v_i_2887_, lean_object* v_bs_2888_){
_start:
{
size_t v_sz_boxed_2889_; size_t v_i_boxed_2890_; lean_object* v_res_2891_; 
v_sz_boxed_2889_ = lean_unbox_usize(v_sz_2886_);
lean_dec(v_sz_2886_);
v_i_boxed_2890_ = lean_unbox_usize(v_i_2887_);
lean_dec(v_i_2887_);
v_res_2891_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(v_sz_boxed_2889_, v_i_boxed_2890_, v_bs_2888_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(size_t v_sz_2892_, size_t v_i_2893_, lean_object* v_bs_2894_){
_start:
{
uint8_t v___x_2895_; 
v___x_2895_ = lean_usize_dec_lt(v_i_2893_, v_sz_2892_);
if (v___x_2895_ == 0)
{
lean_object* v___x_2896_; 
v___x_2896_ = l_unsafeCast___redArg(v_bs_2894_);
lean_dec_ref(v_bs_2894_);
return v___x_2896_;
}
else
{
lean_object* v_v_2897_; lean_object* v___x_2898_; lean_object* v_fst_2899_; lean_object* v_snd_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2930_; 
v_v_2897_ = lean_array_uget_borrowed(v_bs_2894_, v_i_2893_);
v___x_2898_ = l_unsafeCast___redArg(v_v_2897_);
v_fst_2899_ = lean_ctor_get(v___x_2898_, 0);
v_snd_2900_ = lean_ctor_get(v___x_2898_, 1);
v_isSharedCheck_2930_ = !lean_is_exclusive(v___x_2898_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2902_ = v___x_2898_;
v_isShared_2903_ = v_isSharedCheck_2930_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_snd_2900_);
lean_inc(v_fst_2899_);
lean_dec(v___x_2898_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2930_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2904_; lean_object* v_bs_x27_2905_; lean_object* v___y_2907_; lean_object* v___x_2913_; 
v___x_2904_ = lean_unsigned_to_nat(0u);
v_bs_x27_2905_ = lean_array_uset(v_bs_2894_, v_i_2893_, v___x_2904_);
v___x_2913_ = l_Std_Http_URI_EncodedQueryParam_encode(v_fst_2899_);
lean_dec(v_fst_2899_);
if (lean_obj_tag(v_snd_2900_) == 0)
{
lean_object* v___x_2914_; lean_object* v___x_2916_; 
v___x_2914_ = lean_box(0);
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 1, v___x_2914_);
lean_ctor_set(v___x_2902_, 0, v___x_2913_);
v___x_2916_ = v___x_2902_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___x_2913_);
lean_ctor_set(v_reuseFailAlloc_2917_, 1, v___x_2914_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
v___y_2907_ = v___x_2916_;
goto v___jp_2906_;
}
}
else
{
lean_object* v_val_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2929_; 
v_val_2918_ = lean_ctor_get(v_snd_2900_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v_snd_2900_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2920_ = v_snd_2900_;
v_isShared_2921_ = v_isSharedCheck_2929_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_val_2918_);
lean_dec(v_snd_2900_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2929_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2922_; lean_object* v___x_2924_; 
v___x_2922_ = l_Std_Http_URI_EncodedQueryParam_encode(v_val_2918_);
lean_dec(v_val_2918_);
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 0, v___x_2922_);
v___x_2924_ = v___x_2920_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v___x_2922_);
v___x_2924_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
lean_object* v___x_2926_; 
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 1, v___x_2924_);
lean_ctor_set(v___x_2902_, 0, v___x_2913_);
v___x_2926_ = v___x_2902_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v___x_2913_);
lean_ctor_set(v_reuseFailAlloc_2927_, 1, v___x_2924_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
v___y_2907_ = v___x_2926_;
goto v___jp_2906_;
}
}
}
}
v___jp_2906_:
{
size_t v___x_2908_; size_t v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2908_ = ((size_t)1ULL);
v___x_2909_ = lean_usize_add(v_i_2893_, v___x_2908_);
v___x_2910_ = l_unsafeCast___redArg(v___y_2907_);
lean_dec_ref(v___y_2907_);
v___x_2911_ = lean_array_uset(v_bs_x27_2905_, v_i_2893_, v___x_2910_);
v_i_2893_ = v___x_2909_;
v_bs_2894_ = v___x_2911_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1___boxed(lean_object* v_sz_2931_, lean_object* v_i_2932_, lean_object* v_bs_2933_){
_start:
{
size_t v_sz_boxed_2934_; size_t v_i_boxed_2935_; lean_object* v_res_2936_; 
v_sz_boxed_2934_ = lean_unbox_usize(v_sz_2931_);
lean_dec(v_sz_2931_);
v_i_boxed_2935_ = lean_unbox_usize(v_i_2932_);
lean_dec(v_i_2932_);
v_res_2936_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(v_sz_boxed_2934_, v_i_boxed_2935_, v_bs_2933_);
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_build(lean_object* v_b_2937_){
_start:
{
lean_object* v___y_2939_; uint8_t v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v_scheme_2964_; lean_object* v_userInfo_2965_; lean_object* v_host_2966_; lean_object* v_port_2967_; lean_object* v_pathSegments_2968_; lean_object* v_query_2969_; lean_object* v_fragment_2970_; lean_object* v___y_2972_; 
v_scheme_2964_ = lean_ctor_get(v_b_2937_, 0);
lean_inc(v_scheme_2964_);
v_userInfo_2965_ = lean_ctor_get(v_b_2937_, 1);
lean_inc(v_userInfo_2965_);
v_host_2966_ = lean_ctor_get(v_b_2937_, 2);
lean_inc(v_host_2966_);
v_port_2967_ = lean_ctor_get(v_b_2937_, 3);
lean_inc(v_port_2967_);
v_pathSegments_2968_ = lean_ctor_get(v_b_2937_, 4);
lean_inc_ref(v_pathSegments_2968_);
v_query_2969_ = lean_ctor_get(v_b_2937_, 5);
lean_inc_ref(v_query_2969_);
v_fragment_2970_ = lean_ctor_get(v_b_2937_, 6);
lean_inc(v_fragment_2970_);
lean_dec_ref(v_b_2937_);
if (lean_obj_tag(v_scheme_2964_) == 0)
{
lean_object* v___x_2985_; 
v___x_2985_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
v___y_2972_ = v___x_2985_;
goto v___jp_2971_;
}
else
{
lean_object* v_val_2986_; 
v_val_2986_ = lean_ctor_get(v_scheme_2964_, 0);
lean_inc(v_val_2986_);
lean_dec_ref_known(v_scheme_2964_, 1);
v___y_2972_ = v_val_2986_;
goto v___jp_2971_;
}
v___jp_2938_:
{
size_t v_sz_2945_; size_t v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v_path_2950_; size_t v_sz_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v_query_2954_; lean_object* v___x_2955_; lean_object* v_query_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; uint8_t v___x_2959_; 
v_sz_2945_ = lean_array_size(v___y_2942_);
v___x_2946_ = ((size_t)0ULL);
v___x_2947_ = l_unsafeCast___redArg(v___y_2942_);
lean_dec_ref(v___y_2942_);
v___x_2948_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(v_sz_2945_, v___x_2946_, v___x_2947_);
v___x_2949_ = l_unsafeCast___redArg(v___x_2948_);
lean_dec_ref(v___x_2948_);
v_path_2950_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_path_2950_, 0, v___x_2949_);
lean_ctor_set_uint8(v_path_2950_, sizeof(void*)*1, v___y_2940_);
v_sz_2951_ = lean_array_size(v___y_2943_);
v___x_2952_ = l_unsafeCast___redArg(v___y_2943_);
lean_dec_ref(v___y_2943_);
v___x_2953_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(v_sz_2951_, v___x_2946_, v___x_2952_);
v_query_2954_ = l_unsafeCast___redArg(v___x_2953_);
lean_dec_ref(v___x_2953_);
v___x_2955_ = lean_array_to_list(v_query_2954_);
v_query_2956_ = lean_array_mk(v___x_2955_);
v___x_2957_ = lean_array_get_size(v_query_2956_);
v___x_2958_ = lean_unsigned_to_nat(0u);
v___x_2959_ = lean_nat_dec_eq(v___x_2957_, v___x_2958_);
if (v___x_2959_ == 0)
{
lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___x_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2960_, 0, v_query_2956_);
v___x_2961_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2961_, 0, v___y_2939_);
lean_ctor_set(v___x_2961_, 1, v___y_2944_);
lean_ctor_set(v___x_2961_, 2, v_path_2950_);
lean_ctor_set(v___x_2961_, 3, v___x_2960_);
lean_ctor_set(v___x_2961_, 4, v___y_2941_);
return v___x_2961_;
}
else
{
lean_object* v___x_2962_; lean_object* v___x_2963_; 
lean_dec_ref(v_query_2956_);
v___x_2962_ = lean_box(0);
v___x_2963_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2963_, 0, v___y_2939_);
lean_ctor_set(v___x_2963_, 1, v___y_2944_);
lean_ctor_set(v___x_2963_, 2, v_path_2950_);
lean_ctor_set(v___x_2963_, 3, v___x_2962_);
lean_ctor_set(v___x_2963_, 4, v___y_2941_);
return v___x_2963_;
}
}
v___jp_2971_:
{
if (lean_obj_tag(v_host_2966_) == 0)
{
uint8_t v___x_2973_; lean_object* v___x_2974_; 
lean_dec(v_port_2967_);
lean_dec(v_userInfo_2965_);
v___x_2973_ = 1;
v___x_2974_ = lean_box(0);
v___y_2939_ = v___y_2972_;
v___y_2940_ = v___x_2973_;
v___y_2941_ = v_fragment_2970_;
v___y_2942_ = v_pathSegments_2968_;
v___y_2943_ = v_query_2969_;
v___y_2944_ = v___x_2974_;
goto v___jp_2938_;
}
else
{
lean_object* v_val_2975_; lean_object* v___x_2977_; uint8_t v_isShared_2978_; uint8_t v_isSharedCheck_2984_; 
v_val_2975_ = lean_ctor_get(v_host_2966_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v_host_2966_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2977_ = v_host_2966_;
v_isShared_2978_ = v_isSharedCheck_2984_;
goto v_resetjp_2976_;
}
else
{
lean_inc(v_val_2975_);
lean_dec(v_host_2966_);
v___x_2977_ = lean_box(0);
v_isShared_2978_ = v_isSharedCheck_2984_;
goto v_resetjp_2976_;
}
v_resetjp_2976_:
{
uint8_t v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2982_; 
v___x_2979_ = 1;
v___x_2980_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2980_, 0, v_userInfo_2965_);
lean_ctor_set(v___x_2980_, 1, v_val_2975_);
lean_ctor_set(v___x_2980_, 2, v_port_2967_);
if (v_isShared_2978_ == 0)
{
lean_ctor_set(v___x_2977_, 0, v___x_2980_);
v___x_2982_ = v___x_2977_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v___x_2980_);
v___x_2982_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
v___y_2939_ = v___y_2972_;
v___y_2940_ = v___x_2979_;
v___y_2941_ = v_fragment_2970_;
v___y_2942_ = v_pathSegments_2968_;
v___y_2943_ = v_query_2969_;
v___y_2944_ = v___x_2982_;
goto v___jp_2938_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withScheme_x21(lean_object* v_uri_2987_, lean_object* v_scheme_2988_){
_start:
{
lean_object* v_authority_2989_; lean_object* v_path_2990_; lean_object* v_query_2991_; lean_object* v_fragment_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3000_; 
v_authority_2989_ = lean_ctor_get(v_uri_2987_, 1);
v_path_2990_ = lean_ctor_get(v_uri_2987_, 2);
v_query_2991_ = lean_ctor_get(v_uri_2987_, 3);
v_fragment_2992_ = lean_ctor_get(v_uri_2987_, 4);
v_isSharedCheck_3000_ = !lean_is_exclusive(v_uri_2987_);
if (v_isSharedCheck_3000_ == 0)
{
lean_object* v_unused_3001_; 
v_unused_3001_ = lean_ctor_get(v_uri_2987_, 0);
lean_dec(v_unused_3001_);
v___x_2994_ = v_uri_2987_;
v_isShared_2995_ = v_isSharedCheck_3000_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_fragment_2992_);
lean_inc(v_query_2991_);
lean_inc(v_path_2990_);
lean_inc(v_authority_2989_);
lean_dec(v_uri_2987_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3000_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v___x_2996_; lean_object* v___x_2998_; 
v___x_2996_ = l_Std_Http_URI_Scheme_ofString_x21(v_scheme_2988_);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 0, v___x_2996_);
v___x_2998_ = v___x_2994_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v___x_2996_);
lean_ctor_set(v_reuseFailAlloc_2999_, 1, v_authority_2989_);
lean_ctor_set(v_reuseFailAlloc_2999_, 2, v_path_2990_);
lean_ctor_set(v_reuseFailAlloc_2999_, 3, v_query_2991_);
lean_ctor_set(v_reuseFailAlloc_2999_, 4, v_fragment_2992_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withAuthority(lean_object* v_uri_3002_, lean_object* v_authority_3003_){
_start:
{
lean_object* v_scheme_3004_; lean_object* v_path_3005_; lean_object* v_query_3006_; lean_object* v_fragment_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3014_; 
v_scheme_3004_ = lean_ctor_get(v_uri_3002_, 0);
v_path_3005_ = lean_ctor_get(v_uri_3002_, 2);
v_query_3006_ = lean_ctor_get(v_uri_3002_, 3);
v_fragment_3007_ = lean_ctor_get(v_uri_3002_, 4);
v_isSharedCheck_3014_ = !lean_is_exclusive(v_uri_3002_);
if (v_isSharedCheck_3014_ == 0)
{
lean_object* v_unused_3015_; 
v_unused_3015_ = lean_ctor_get(v_uri_3002_, 1);
lean_dec(v_unused_3015_);
v___x_3009_ = v_uri_3002_;
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_fragment_3007_);
lean_inc(v_query_3006_);
lean_inc(v_path_3005_);
lean_inc(v_scheme_3004_);
lean_dec(v_uri_3002_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v___x_3012_; 
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 1, v_authority_3003_);
v___x_3012_ = v___x_3009_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_scheme_3004_);
lean_ctor_set(v_reuseFailAlloc_3013_, 1, v_authority_3003_);
lean_ctor_set(v_reuseFailAlloc_3013_, 2, v_path_3005_);
lean_ctor_set(v_reuseFailAlloc_3013_, 3, v_query_3006_);
lean_ctor_set(v_reuseFailAlloc_3013_, 4, v_fragment_3007_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withPath(lean_object* v_uri_3016_, lean_object* v_path_3017_){
_start:
{
lean_object* v_scheme_3018_; lean_object* v_authority_3019_; lean_object* v_query_3020_; lean_object* v_fragment_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
v_scheme_3018_ = lean_ctor_get(v_uri_3016_, 0);
v_authority_3019_ = lean_ctor_get(v_uri_3016_, 1);
v_query_3020_ = lean_ctor_get(v_uri_3016_, 3);
v_fragment_3021_ = lean_ctor_get(v_uri_3016_, 4);
v_isSharedCheck_3028_ = !lean_is_exclusive(v_uri_3016_);
if (v_isSharedCheck_3028_ == 0)
{
lean_object* v_unused_3029_; 
v_unused_3029_ = lean_ctor_get(v_uri_3016_, 2);
lean_dec(v_unused_3029_);
v___x_3023_ = v_uri_3016_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_fragment_3021_);
lean_inc(v_query_3020_);
lean_inc(v_authority_3019_);
lean_inc(v_scheme_3018_);
lean_dec(v_uri_3016_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
lean_ctor_set(v___x_3023_, 2, v_path_3017_);
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_scheme_3018_);
lean_ctor_set(v_reuseFailAlloc_3027_, 1, v_authority_3019_);
lean_ctor_set(v_reuseFailAlloc_3027_, 2, v_path_3017_);
lean_ctor_set(v_reuseFailAlloc_3027_, 3, v_query_3020_);
lean_ctor_set(v_reuseFailAlloc_3027_, 4, v_fragment_3021_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withQuery(lean_object* v_uri_3030_, lean_object* v_query_3031_){
_start:
{
lean_object* v_scheme_3032_; lean_object* v_authority_3033_; lean_object* v_path_3034_; lean_object* v_fragment_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3043_; 
v_scheme_3032_ = lean_ctor_get(v_uri_3030_, 0);
v_authority_3033_ = lean_ctor_get(v_uri_3030_, 1);
v_path_3034_ = lean_ctor_get(v_uri_3030_, 2);
v_fragment_3035_ = lean_ctor_get(v_uri_3030_, 4);
v_isSharedCheck_3043_ = !lean_is_exclusive(v_uri_3030_);
if (v_isSharedCheck_3043_ == 0)
{
lean_object* v_unused_3044_; 
v_unused_3044_ = lean_ctor_get(v_uri_3030_, 3);
lean_dec(v_unused_3044_);
v___x_3037_ = v_uri_3030_;
v_isShared_3038_ = v_isSharedCheck_3043_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_fragment_3035_);
lean_inc(v_path_3034_);
lean_inc(v_authority_3033_);
lean_inc(v_scheme_3032_);
lean_dec(v_uri_3030_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3043_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
lean_object* v___x_3039_; lean_object* v___x_3041_; 
v___x_3039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3039_, 0, v_query_3031_);
if (v_isShared_3038_ == 0)
{
lean_ctor_set(v___x_3037_, 3, v___x_3039_);
v___x_3041_ = v___x_3037_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_scheme_3032_);
lean_ctor_set(v_reuseFailAlloc_3042_, 1, v_authority_3033_);
lean_ctor_set(v_reuseFailAlloc_3042_, 2, v_path_3034_);
lean_ctor_set(v_reuseFailAlloc_3042_, 3, v___x_3039_);
lean_ctor_set(v_reuseFailAlloc_3042_, 4, v_fragment_3035_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withFragment(lean_object* v_uri_3045_, lean_object* v_fragment_3046_){
_start:
{
lean_object* v_scheme_3047_; lean_object* v_authority_3048_; lean_object* v_path_3049_; lean_object* v_query_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3057_; 
v_scheme_3047_ = lean_ctor_get(v_uri_3045_, 0);
v_authority_3048_ = lean_ctor_get(v_uri_3045_, 1);
v_path_3049_ = lean_ctor_get(v_uri_3045_, 2);
v_query_3050_ = lean_ctor_get(v_uri_3045_, 3);
v_isSharedCheck_3057_ = !lean_is_exclusive(v_uri_3045_);
if (v_isSharedCheck_3057_ == 0)
{
lean_object* v_unused_3058_; 
v_unused_3058_ = lean_ctor_get(v_uri_3045_, 4);
lean_dec(v_unused_3058_);
v___x_3052_ = v_uri_3045_;
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_query_3050_);
lean_inc(v_path_3049_);
lean_inc(v_authority_3048_);
lean_inc(v_scheme_3047_);
lean_dec(v_uri_3045_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3055_; 
if (v_isShared_3053_ == 0)
{
lean_ctor_set(v___x_3052_, 4, v_fragment_3046_);
v___x_3055_ = v___x_3052_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_scheme_3047_);
lean_ctor_set(v_reuseFailAlloc_3056_, 1, v_authority_3048_);
lean_ctor_set(v_reuseFailAlloc_3056_, 2, v_path_3049_);
lean_ctor_set(v_reuseFailAlloc_3056_, 3, v_query_3050_);
lean_ctor_set(v_reuseFailAlloc_3056_, 4, v_fragment_3046_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_normalize(lean_object* v_uri_3059_){
_start:
{
lean_object* v_scheme_3060_; lean_object* v_authority_3061_; lean_object* v_path_3062_; lean_object* v_query_3063_; lean_object* v_fragment_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3072_; 
v_scheme_3060_ = lean_ctor_get(v_uri_3059_, 0);
v_authority_3061_ = lean_ctor_get(v_uri_3059_, 1);
v_path_3062_ = lean_ctor_get(v_uri_3059_, 2);
v_query_3063_ = lean_ctor_get(v_uri_3059_, 3);
v_fragment_3064_ = lean_ctor_get(v_uri_3059_, 4);
v_isSharedCheck_3072_ = !lean_is_exclusive(v_uri_3059_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3066_ = v_uri_3059_;
v_isShared_3067_ = v_isSharedCheck_3072_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_fragment_3064_);
lean_inc(v_query_3063_);
lean_inc(v_path_3062_);
lean_inc(v_authority_3061_);
lean_inc(v_scheme_3060_);
lean_dec(v_uri_3059_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3072_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3068_; lean_object* v___x_3070_; 
v___x_3068_ = l_Std_Http_URI_Path_normalize(v_path_3062_);
if (v_isShared_3067_ == 0)
{
lean_ctor_set(v___x_3066_, 2, v___x_3068_);
v___x_3070_ = v___x_3066_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_scheme_3060_);
lean_ctor_set(v_reuseFailAlloc_3071_, 1, v_authority_3061_);
lean_ctor_set(v_reuseFailAlloc_3071_, 2, v___x_3068_);
lean_ctor_set(v_reuseFailAlloc_3071_, 3, v_query_3063_);
lean_ctor_set(v_reuseFailAlloc_3071_, 4, v_fragment_3064_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___redArg(lean_object* v_x_3073_){
_start:
{
lean_object* v_scheme_3074_; lean_object* v_host_3075_; uint16_t v_port_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; uint8_t v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v_ctr_3097_; lean_object* v_a_3098_; 
v_scheme_3074_ = lean_ctor_get(v_x_3073_, 0);
lean_inc_ref(v_scheme_3074_);
v_host_3075_ = lean_ctor_get(v_x_3073_, 1);
lean_inc_ref(v_host_3075_);
v_port_3076_ = lean_ctor_get_uint16(v_x_3073_, sizeof(void*)*2);
lean_dec_ref(v_x_3073_);
v___x_3077_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_3078_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__3));
v___x_3079_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__4, &l_Std_Http_instReprURI_repr___redArg___closed__4_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__4);
v___x_3080_ = l_String_quote(v_scheme_3074_);
v___x_3081_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3080_);
v___x_3082_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3079_);
lean_ctor_set(v___x_3082_, 1, v___x_3081_);
v___x_3083_ = 0;
v___x_3084_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3084_, 0, v___x_3082_);
lean_ctor_set_uint8(v___x_3084_, sizeof(void*)*1, v___x_3083_);
v___x_3085_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3078_);
lean_ctor_set(v___x_3085_, 1, v___x_3084_);
v___x_3086_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_3087_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3085_);
lean_ctor_set(v___x_3087_, 1, v___x_3086_);
v___x_3088_ = lean_box(1);
v___x_3089_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3087_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
v___x_3090_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5));
v___x_3091_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3089_);
lean_ctor_set(v___x_3091_, 1, v___x_3090_);
v___x_3092_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3091_);
lean_ctor_set(v___x_3092_, 1, v___x_3077_);
v___x_3093_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_3094_ = lean_unsigned_to_nat(0u);
v___x_3095_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
switch(lean_obj_tag(v_host_3075_))
{
case 0:
{
lean_object* v_name_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3137_; 
v_name_3128_ = lean_ctor_get(v_host_3075_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v_host_3075_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3130_ = v_host_3075_;
v_isShared_3131_ = v_isSharedCheck_3137_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_name_3128_);
lean_dec(v_host_3075_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3137_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3135_; 
v___x_3132_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_3133_ = l_String_quote(v_name_3128_);
if (v_isShared_3131_ == 0)
{
lean_ctor_set_tag(v___x_3130_, 3);
lean_ctor_set(v___x_3130_, 0, v___x_3133_);
v___x_3135_ = v___x_3130_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v___x_3133_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
v_ctr_3097_ = v___x_3132_;
v_a_3098_ = v___x_3135_;
goto v___jp_3096_;
}
}
}
case 1:
{
lean_object* v_ipv4_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3147_; 
v_ipv4_3138_ = lean_ctor_get(v_host_3075_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v_host_3075_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3140_ = v_host_3075_;
v_isShared_3141_ = v_isSharedCheck_3147_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_ipv4_3138_);
lean_dec(v_host_3075_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3147_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3145_; 
v___x_3142_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_3143_ = lean_uv_ntop_v4(v_ipv4_3138_);
lean_dec_ref(v_ipv4_3138_);
if (v_isShared_3141_ == 0)
{
lean_ctor_set_tag(v___x_3140_, 3);
lean_ctor_set(v___x_3140_, 0, v___x_3143_);
v___x_3145_ = v___x_3140_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v___x_3143_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
v_ctr_3097_ = v___x_3142_;
v_a_3098_ = v___x_3145_;
goto v___jp_3096_;
}
}
}
default: 
{
lean_object* v_ipv6_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3157_; 
v_ipv6_3148_ = lean_ctor_get(v_host_3075_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v_host_3075_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3150_ = v_host_3075_;
v_isShared_3151_ = v_isSharedCheck_3157_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_ipv6_3148_);
lean_dec(v_host_3075_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3157_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3155_; 
v___x_3152_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_3153_ = lean_uv_ntop_v6(v_ipv6_3148_);
lean_dec_ref(v_ipv6_3148_);
if (v_isShared_3151_ == 0)
{
lean_ctor_set_tag(v___x_3150_, 3);
lean_ctor_set(v___x_3150_, 0, v___x_3153_);
v___x_3155_ = v___x_3150_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v___x_3153_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
v_ctr_3097_ = v___x_3152_;
v_a_3098_ = v___x_3155_;
goto v___jp_3096_;
}
}
}
}
v___jp_3096_:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
v___x_3099_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_3100_ = lean_string_append(v___x_3099_, v_ctr_3097_);
v___x_3101_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3100_);
v___x_3102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3101_);
lean_ctor_set(v___x_3102_, 1, v___x_3088_);
v___x_3103_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3103_, 0, v___x_3102_);
lean_ctor_set(v___x_3103_, 1, v_a_3098_);
v___x_3104_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3095_);
lean_ctor_set(v___x_3104_, 1, v___x_3103_);
v___x_3105_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3105_, 0, v___x_3104_);
lean_ctor_set_uint8(v___x_3105_, sizeof(void*)*1, v___x_3083_);
v___x_3106_ = l_Repr_addAppParen(v___x_3105_, v___x_3094_);
v___x_3107_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3093_);
lean_ctor_set(v___x_3107_, 1, v___x_3106_);
v___x_3108_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3108_, 0, v___x_3107_);
lean_ctor_set_uint8(v___x_3108_, sizeof(void*)*1, v___x_3083_);
v___x_3109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3092_);
lean_ctor_set(v___x_3109_, 1, v___x_3108_);
v___x_3110_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
lean_ctor_set(v___x_3110_, 1, v___x_3086_);
v___x_3111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3110_);
lean_ctor_set(v___x_3111_, 1, v___x_3088_);
v___x_3112_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8));
v___x_3113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3111_);
lean_ctor_set(v___x_3113_, 1, v___x_3112_);
v___x_3114_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3113_);
lean_ctor_set(v___x_3114_, 1, v___x_3077_);
v___x_3115_ = lean_uint16_to_nat(v_port_3076_);
v___x_3116_ = l_Nat_reprFast(v___x_3115_);
v___x_3117_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3117_, 0, v___x_3116_);
v___x_3118_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3093_);
lean_ctor_set(v___x_3118_, 1, v___x_3117_);
v___x_3119_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
lean_ctor_set_uint8(v___x_3119_, sizeof(void*)*1, v___x_3083_);
v___x_3120_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3120_, 0, v___x_3114_);
lean_ctor_set(v___x_3120_, 1, v___x_3119_);
v___x_3121_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_3122_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_3123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3122_);
lean_ctor_set(v___x_3123_, 1, v___x_3120_);
v___x_3124_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_3125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3123_);
lean_ctor_set(v___x_3125_, 1, v___x_3124_);
v___x_3126_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3121_);
lean_ctor_set(v___x_3126_, 1, v___x_3125_);
v___x_3127_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3127_, 0, v___x_3126_);
lean_ctor_set_uint8(v___x_3127_, sizeof(void*)*1, v___x_3083_);
return v___x_3127_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr(lean_object* v_x_3158_, lean_object* v_prec_3159_){
_start:
{
lean_object* v___x_3160_; 
v___x_3160_ = l_Std_Http_URI_instReprOrigin_repr___redArg(v_x_3158_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___boxed(lean_object* v_x_3161_, lean_object* v_prec_3162_){
_start:
{
lean_object* v_res_3163_; 
v_res_3163_ = l_Std_Http_URI_instReprOrigin_repr(v_x_3161_, v_prec_3162_);
lean_dec(v_prec_3162_);
return v_res_3163_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqOrigin_beq(lean_object* v_x_3166_, lean_object* v_x_3167_){
_start:
{
lean_object* v_scheme_3168_; lean_object* v_host_3169_; uint16_t v_port_3170_; lean_object* v_scheme_3171_; lean_object* v_host_3172_; uint16_t v_port_3173_; uint8_t v___x_3174_; 
v_scheme_3168_ = lean_ctor_get(v_x_3166_, 0);
v_host_3169_ = lean_ctor_get(v_x_3166_, 1);
v_port_3170_ = lean_ctor_get_uint16(v_x_3166_, sizeof(void*)*2);
v_scheme_3171_ = lean_ctor_get(v_x_3167_, 0);
v_host_3172_ = lean_ctor_get(v_x_3167_, 1);
v_port_3173_ = lean_ctor_get_uint16(v_x_3167_, sizeof(void*)*2);
v___x_3174_ = lean_string_dec_eq(v_scheme_3168_, v_scheme_3171_);
if (v___x_3174_ == 0)
{
return v___x_3174_;
}
else
{
uint8_t v___x_3175_; 
v___x_3175_ = l_Std_Http_URI_instBEqHost_beq(v_host_3169_, v_host_3172_);
if (v___x_3175_ == 0)
{
return v___x_3175_;
}
else
{
uint8_t v___x_3176_; 
v___x_3176_ = lean_uint16_dec_eq(v_port_3170_, v_port_3173_);
return v___x_3176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqOrigin_beq___boxed(lean_object* v_x_3177_, lean_object* v_x_3178_){
_start:
{
uint8_t v_res_3179_; lean_object* v_r_3180_; 
v_res_3179_ = l_Std_Http_URI_instBEqOrigin_beq(v_x_3177_, v_x_3178_);
lean_dec_ref(v_x_3178_);
lean_dec_ref(v_x_3177_);
v_r_3180_ = lean_box(v_res_3179_);
return v_r_3180_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Origin_hostHeader(lean_object* v_o_3183_){
_start:
{
lean_object* v_scheme_3184_; lean_object* v_host_3185_; uint16_t v_port_3186_; lean_object* v___y_3188_; uint16_t v_defaultPort_3194_; uint8_t v___x_3195_; 
v_scheme_3184_ = lean_ctor_get(v_o_3183_, 0);
lean_inc_ref(v_scheme_3184_);
v_host_3185_ = lean_ctor_get(v_o_3183_, 1);
lean_inc_ref(v_host_3185_);
v_port_3186_ = lean_ctor_get_uint16(v_o_3183_, sizeof(void*)*2);
lean_dec_ref(v_o_3183_);
v_defaultPort_3194_ = l_Std_Http_URI_Scheme_defaultPort(v_scheme_3184_);
lean_dec_ref(v_scheme_3184_);
v___x_3195_ = lean_uint16_dec_eq(v_port_3186_, v_defaultPort_3194_);
if (v___x_3195_ == 0)
{
switch(lean_obj_tag(v_host_3185_))
{
case 0:
{
lean_object* v_name_3196_; 
v_name_3196_ = lean_ctor_get(v_host_3185_, 0);
lean_inc_ref(v_name_3196_);
lean_dec_ref_known(v_host_3185_, 1);
v___y_3188_ = v_name_3196_;
goto v___jp_3187_;
}
case 1:
{
lean_object* v_ipv4_3197_; lean_object* v___x_3198_; 
v_ipv4_3197_ = lean_ctor_get(v_host_3185_, 0);
lean_inc_ref(v_ipv4_3197_);
lean_dec_ref_known(v_host_3185_, 1);
v___x_3198_ = lean_uv_ntop_v4(v_ipv4_3197_);
lean_dec_ref(v_ipv4_3197_);
v___y_3188_ = v___x_3198_;
goto v___jp_3187_;
}
default: 
{
lean_object* v_ipv6_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
v_ipv6_3199_ = lean_ctor_get(v_host_3185_, 0);
lean_inc_ref(v_ipv6_3199_);
lean_dec_ref_known(v_host_3185_, 1);
v___x_3200_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3201_ = lean_uv_ntop_v6(v_ipv6_3199_);
lean_dec_ref(v_ipv6_3199_);
v___x_3202_ = lean_string_append(v___x_3200_, v___x_3201_);
lean_dec_ref(v___x_3201_);
v___x_3203_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3204_ = lean_string_append(v___x_3202_, v___x_3203_);
v___y_3188_ = v___x_3204_;
goto v___jp_3187_;
}
}
}
else
{
switch(lean_obj_tag(v_host_3185_))
{
case 0:
{
lean_object* v_name_3205_; 
v_name_3205_ = lean_ctor_get(v_host_3185_, 0);
lean_inc_ref(v_name_3205_);
lean_dec_ref_known(v_host_3185_, 1);
return v_name_3205_;
}
case 1:
{
lean_object* v_ipv4_3206_; lean_object* v___x_3207_; 
v_ipv4_3206_ = lean_ctor_get(v_host_3185_, 0);
lean_inc_ref(v_ipv4_3206_);
lean_dec_ref_known(v_host_3185_, 1);
v___x_3207_ = lean_uv_ntop_v4(v_ipv4_3206_);
lean_dec_ref(v_ipv4_3206_);
return v___x_3207_;
}
default: 
{
lean_object* v_ipv6_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; 
v_ipv6_3208_ = lean_ctor_get(v_host_3185_, 0);
lean_inc_ref(v_ipv6_3208_);
lean_dec_ref_known(v_host_3185_, 1);
v___x_3209_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3210_ = lean_uv_ntop_v6(v_ipv6_3208_);
lean_dec_ref(v_ipv6_3208_);
v___x_3211_ = lean_string_append(v___x_3209_, v___x_3210_);
lean_dec_ref(v___x_3210_);
v___x_3212_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3213_ = lean_string_append(v___x_3211_, v___x_3212_);
return v___x_3213_;
}
}
}
v___jp_3187_:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
v___x_3189_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3190_ = lean_string_append(v___y_3188_, v___x_3189_);
v___x_3191_ = lean_uint16_to_nat(v_port_3186_);
v___x_3192_ = l_Nat_reprFast(v___x_3191_);
v___x_3193_ = lean_string_append(v___x_3190_, v___x_3192_);
lean_dec_ref(v___x_3192_);
return v___x_3193_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg(lean_object* v_x_3220_){
_start:
{
lean_object* v_authority_3221_; lean_object* v_path_3222_; lean_object* v_query_3223_; lean_object* v_fragment_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; uint8_t v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
v_authority_3221_ = lean_ctor_get(v_x_3220_, 0);
lean_inc(v_authority_3221_);
v_path_3222_ = lean_ctor_get(v_x_3220_, 1);
lean_inc_ref(v_path_3222_);
v_query_3223_ = lean_ctor_get(v_x_3220_, 2);
lean_inc(v_query_3223_);
v_fragment_3224_ = lean_ctor_get(v_x_3220_, 3);
lean_inc(v_fragment_3224_);
lean_dec_ref(v_x_3220_);
v___x_3225_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_3226_ = ((lean_object*)(l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1));
v___x_3227_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__7, &l_Std_Http_instReprURI_repr___redArg___closed__7_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__7);
v___x_3228_ = lean_unsigned_to_nat(0u);
v___x_3229_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_authority_3221_, v___x_3228_);
v___x_3230_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3227_);
lean_ctor_set(v___x_3230_, 1, v___x_3229_);
v___x_3231_ = 0;
v___x_3232_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3232_, 0, v___x_3230_);
lean_ctor_set_uint8(v___x_3232_, sizeof(void*)*1, v___x_3231_);
v___x_3233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3226_);
lean_ctor_set(v___x_3233_, 1, v___x_3232_);
v___x_3234_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_3235_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3235_, 0, v___x_3233_);
lean_ctor_set(v___x_3235_, 1, v___x_3234_);
v___x_3236_ = lean_box(1);
v___x_3237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3237_, 0, v___x_3235_);
lean_ctor_set(v___x_3237_, 1, v___x_3236_);
v___x_3238_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__9));
v___x_3239_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3239_, 0, v___x_3237_);
lean_ctor_set(v___x_3239_, 1, v___x_3238_);
v___x_3240_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3239_);
lean_ctor_set(v___x_3240_, 1, v___x_3225_);
v___x_3241_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_3242_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_3222_);
v___x_3243_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3241_);
lean_ctor_set(v___x_3243_, 1, v___x_3242_);
v___x_3244_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3244_, 0, v___x_3243_);
lean_ctor_set_uint8(v___x_3244_, sizeof(void*)*1, v___x_3231_);
v___x_3245_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3245_, 0, v___x_3240_);
lean_ctor_set(v___x_3245_, 1, v___x_3244_);
v___x_3246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3245_);
lean_ctor_set(v___x_3246_, 1, v___x_3234_);
v___x_3247_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3247_, 0, v___x_3246_);
lean_ctor_set(v___x_3247_, 1, v___x_3236_);
v___x_3248_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__11));
v___x_3249_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3247_);
lean_ctor_set(v___x_3249_, 1, v___x_3248_);
v___x_3250_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3249_);
lean_ctor_set(v___x_3250_, 1, v___x_3225_);
v___x_3251_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__12, &l_Std_Http_instReprURI_repr___redArg___closed__12_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__12);
v___x_3252_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_3223_, v___x_3228_);
v___x_3253_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3251_);
lean_ctor_set(v___x_3253_, 1, v___x_3252_);
v___x_3254_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3254_, 0, v___x_3253_);
lean_ctor_set_uint8(v___x_3254_, sizeof(void*)*1, v___x_3231_);
v___x_3255_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3250_);
lean_ctor_set(v___x_3255_, 1, v___x_3254_);
v___x_3256_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3255_);
lean_ctor_set(v___x_3256_, 1, v___x_3234_);
v___x_3257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3257_, 0, v___x_3256_);
lean_ctor_set(v___x_3257_, 1, v___x_3236_);
v___x_3258_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__14));
v___x_3259_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3257_);
lean_ctor_set(v___x_3259_, 1, v___x_3258_);
v___x_3260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3259_);
lean_ctor_set(v___x_3260_, 1, v___x_3225_);
v___x_3261_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_3262_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_fragment_3224_, v___x_3228_);
v___x_3263_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3261_);
lean_ctor_set(v___x_3263_, 1, v___x_3262_);
v___x_3264_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3264_, 0, v___x_3263_);
lean_ctor_set_uint8(v___x_3264_, sizeof(void*)*1, v___x_3231_);
v___x_3265_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3265_, 0, v___x_3260_);
lean_ctor_set(v___x_3265_, 1, v___x_3264_);
v___x_3266_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_3267_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_3268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3267_);
lean_ctor_set(v___x_3268_, 1, v___x_3265_);
v___x_3269_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_3270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3270_, 0, v___x_3268_);
lean_ctor_set(v___x_3270_, 1, v___x_3269_);
v___x_3271_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3266_);
lean_ctor_set(v___x_3271_, 1, v___x_3270_);
v___x_3272_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3272_, 0, v___x_3271_);
lean_ctor_set_uint8(v___x_3272_, sizeof(void*)*1, v___x_3231_);
return v___x_3272_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr(lean_object* v_x_3273_, lean_object* v_prec_3274_){
_start:
{
lean_object* v___x_3275_; 
v___x_3275_ = l_Std_Http_URI_instReprRelativeRef_repr___redArg(v_x_3273_);
return v___x_3275_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___boxed(lean_object* v_x_3276_, lean_object* v_prec_3277_){
_start:
{
lean_object* v_res_3278_; 
v_res_3278_ = l_Std_Http_URI_instReprRelativeRef_repr(v_x_3276_, v_prec_3277_);
lean_dec(v_prec_3277_);
return v_res_3278_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqRelativeRef_beq(lean_object* v_x_3286_, lean_object* v_x_3287_){
_start:
{
lean_object* v_authority_3288_; lean_object* v_path_3289_; lean_object* v_query_3290_; lean_object* v_fragment_3291_; lean_object* v_authority_3292_; lean_object* v_path_3293_; lean_object* v_query_3294_; lean_object* v_fragment_3295_; uint8_t v___x_3296_; 
v_authority_3288_ = lean_ctor_get(v_x_3286_, 0);
v_path_3289_ = lean_ctor_get(v_x_3286_, 1);
v_query_3290_ = lean_ctor_get(v_x_3286_, 2);
v_fragment_3291_ = lean_ctor_get(v_x_3286_, 3);
v_authority_3292_ = lean_ctor_get(v_x_3287_, 0);
v_path_3293_ = lean_ctor_get(v_x_3287_, 1);
v_query_3294_ = lean_ctor_get(v_x_3287_, 2);
v_fragment_3295_ = lean_ctor_get(v_x_3287_, 3);
v___x_3296_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_authority_3288_, v_authority_3292_);
if (v___x_3296_ == 0)
{
return v___x_3296_;
}
else
{
uint8_t v___x_3297_; 
v___x_3297_ = l_Std_Http_URI_instBEqPath_beq(v_path_3289_, v_path_3293_);
if (v___x_3297_ == 0)
{
return v___x_3297_;
}
else
{
uint8_t v___x_3298_; 
v___x_3298_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_query_3290_, v_query_3294_);
if (v___x_3298_ == 0)
{
return v___x_3298_;
}
else
{
uint8_t v___x_3299_; 
v___x_3299_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2(v_fragment_3291_, v_fragment_3295_);
return v___x_3299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqRelativeRef_beq___boxed(lean_object* v_x_3300_, lean_object* v_x_3301_){
_start:
{
uint8_t v_res_3302_; lean_object* v_r_3303_; 
v_res_3302_ = l_Std_Http_URI_instBEqRelativeRef_beq(v_x_3300_, v_x_3301_);
lean_dec_ref(v_x_3301_);
lean_dec_ref(v_x_3300_);
v_r_3303_ = lean_box(v_res_3302_);
return v_r_3303_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringRelativeRef___lam__1(lean_object* v___f_3306_, lean_object* v_ref_3307_){
_start:
{
lean_object* v___y_3309_; lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v_authority_3316_; lean_object* v_path_3317_; lean_object* v_query_3318_; lean_object* v_fragment_3319_; lean_object* v___y_3321_; lean_object* v___y_3322_; lean_object* v___y_3331_; 
v_authority_3316_ = lean_ctor_get(v_ref_3307_, 0);
lean_inc(v_authority_3316_);
v_path_3317_ = lean_ctor_get(v_ref_3307_, 1);
lean_inc_ref(v_path_3317_);
v_query_3318_ = lean_ctor_get(v_ref_3307_, 2);
lean_inc(v_query_3318_);
v_fragment_3319_ = lean_ctor_get(v_ref_3307_, 3);
lean_inc(v_fragment_3319_);
lean_dec_ref(v_ref_3307_);
if (lean_obj_tag(v_authority_3316_) == 0)
{
lean_object* v___x_3344_; 
v___x_3344_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3331_ = v___x_3344_;
goto v___jp_3330_;
}
else
{
lean_object* v_val_3345_; lean_object* v_userInfo_3346_; lean_object* v_host_3347_; lean_object* v_port_3348_; lean_object* v___x_3349_; lean_object* v___y_3351_; lean_object* v___y_3352_; lean_object* v___y_3353_; lean_object* v___y_3358_; lean_object* v___y_3359_; lean_object* v___y_3368_; 
v_val_3345_ = lean_ctor_get(v_authority_3316_, 0);
lean_inc(v_val_3345_);
lean_dec_ref_known(v_authority_3316_, 1);
v_userInfo_3346_ = lean_ctor_get(v_val_3345_, 0);
lean_inc(v_userInfo_3346_);
v_host_3347_ = lean_ctor_get(v_val_3345_, 1);
lean_inc_ref(v_host_3347_);
v_port_3348_ = lean_ctor_get(v_val_3345_, 2);
lean_inc(v_port_3348_);
lean_dec(v_val_3345_);
v___x_3349_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3346_) == 0)
{
lean_object* v___x_3378_; 
v___x_3378_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3368_ = v___x_3378_;
goto v___jp_3367_;
}
else
{
lean_object* v_val_3379_; lean_object* v_password_3380_; 
v_val_3379_ = lean_ctor_get(v_userInfo_3346_, 0);
lean_inc(v_val_3379_);
lean_dec_ref_known(v_userInfo_3346_, 1);
v_password_3380_ = lean_ctor_get(v_val_3379_, 1);
if (lean_obj_tag(v_password_3380_) == 0)
{
lean_object* v_username_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v_username_3381_ = lean_ctor_get(v_val_3379_, 0);
lean_inc_ref(v_username_3381_);
lean_dec(v_val_3379_);
v___x_3382_ = lean_string_from_utf8_unchecked(v_username_3381_);
v___x_3383_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3384_ = lean_string_append(v___x_3382_, v___x_3383_);
v___y_3368_ = v___x_3384_;
goto v___jp_3367_;
}
else
{
lean_object* v_username_3385_; lean_object* v_val_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
lean_inc_ref(v_password_3380_);
v_username_3385_ = lean_ctor_get(v_val_3379_, 0);
lean_inc_ref(v_username_3385_);
lean_dec(v_val_3379_);
v_val_3386_ = lean_ctor_get(v_password_3380_, 0);
lean_inc(v_val_3386_);
lean_dec_ref_known(v_password_3380_, 1);
v___x_3387_ = lean_string_from_utf8_unchecked(v_username_3385_);
v___x_3388_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3389_ = lean_string_append(v___x_3387_, v___x_3388_);
v___x_3390_ = lean_string_from_utf8_unchecked(v_val_3386_);
v___x_3391_ = lean_string_append(v___x_3389_, v___x_3390_);
lean_dec_ref(v___x_3390_);
v___x_3392_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3393_ = lean_string_append(v___x_3391_, v___x_3392_);
v___y_3368_ = v___x_3393_;
goto v___jp_3367_;
}
}
v___jp_3350_:
{
lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; 
v___x_3354_ = lean_string_append(v___y_3351_, v___y_3352_);
lean_dec_ref(v___y_3352_);
v___x_3355_ = lean_string_append(v___x_3354_, v___y_3353_);
lean_dec_ref(v___y_3353_);
v___x_3356_ = lean_string_append(v___x_3349_, v___x_3355_);
lean_dec_ref(v___x_3355_);
v___y_3331_ = v___x_3356_;
goto v___jp_3330_;
}
v___jp_3357_:
{
switch(lean_obj_tag(v_port_3348_))
{
case 0:
{
lean_object* v___x_3360_; 
v___x_3360_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3351_ = v___y_3358_;
v___y_3352_ = v___y_3359_;
v___y_3353_ = v___x_3360_;
goto v___jp_3350_;
}
case 1:
{
lean_object* v___x_3361_; 
v___x_3361_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3351_ = v___y_3358_;
v___y_3352_ = v___y_3359_;
v___y_3353_ = v___x_3361_;
goto v___jp_3350_;
}
default: 
{
uint16_t v_port_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
v_port_3362_ = lean_ctor_get_uint16(v_port_3348_, 0);
lean_dec_ref_known(v_port_3348_, 0);
v___x_3363_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3364_ = lean_uint16_to_nat(v_port_3362_);
v___x_3365_ = l_Nat_reprFast(v___x_3364_);
v___x_3366_ = lean_string_append(v___x_3363_, v___x_3365_);
lean_dec_ref(v___x_3365_);
v___y_3351_ = v___y_3358_;
v___y_3352_ = v___y_3359_;
v___y_3353_ = v___x_3366_;
goto v___jp_3350_;
}
}
}
v___jp_3367_:
{
switch(lean_obj_tag(v_host_3347_))
{
case 0:
{
lean_object* v_name_3369_; 
v_name_3369_ = lean_ctor_get(v_host_3347_, 0);
lean_inc_ref(v_name_3369_);
lean_dec_ref_known(v_host_3347_, 1);
v___y_3358_ = v___y_3368_;
v___y_3359_ = v_name_3369_;
goto v___jp_3357_;
}
case 1:
{
lean_object* v_ipv4_3370_; lean_object* v___x_3371_; 
v_ipv4_3370_ = lean_ctor_get(v_host_3347_, 0);
lean_inc_ref(v_ipv4_3370_);
lean_dec_ref_known(v_host_3347_, 1);
v___x_3371_ = lean_uv_ntop_v4(v_ipv4_3370_);
lean_dec_ref(v_ipv4_3370_);
v___y_3358_ = v___y_3368_;
v___y_3359_ = v___x_3371_;
goto v___jp_3357_;
}
default: 
{
lean_object* v_ipv6_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; 
v_ipv6_3372_ = lean_ctor_get(v_host_3347_, 0);
lean_inc_ref(v_ipv6_3372_);
lean_dec_ref_known(v_host_3347_, 1);
v___x_3373_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3374_ = lean_uv_ntop_v6(v_ipv6_3372_);
lean_dec_ref(v_ipv6_3372_);
v___x_3375_ = lean_string_append(v___x_3373_, v___x_3374_);
lean_dec_ref(v___x_3374_);
v___x_3376_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3377_ = lean_string_append(v___x_3375_, v___x_3376_);
v___y_3358_ = v___y_3368_;
v___y_3359_ = v___x_3377_;
goto v___jp_3357_;
}
}
}
}
v___jp_3308_:
{
lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; 
v___x_3313_ = lean_string_append(v___y_3311_, v___y_3309_);
lean_dec_ref(v___y_3309_);
v___x_3314_ = lean_string_append(v___x_3313_, v___y_3310_);
lean_dec_ref(v___y_3310_);
v___x_3315_ = lean_string_append(v___x_3314_, v___y_3312_);
lean_dec_ref(v___y_3312_);
return v___x_3315_;
}
v___jp_3320_:
{
lean_object* v_queryPart_3323_; 
v_queryPart_3323_ = l_Std_Http_URI_Query_formatOption(v_query_3318_);
if (lean_obj_tag(v_fragment_3319_) == 0)
{
lean_object* v___x_3324_; 
v___x_3324_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3309_ = v___y_3322_;
v___y_3310_ = v_queryPart_3323_;
v___y_3311_ = v___y_3321_;
v___y_3312_ = v___x_3324_;
goto v___jp_3308_;
}
else
{
lean_object* v_val_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v_val_3325_ = lean_ctor_get(v_fragment_3319_, 0);
lean_inc(v_val_3325_);
lean_dec_ref_known(v_fragment_3319_, 1);
v___x_3326_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3327_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3325_);
lean_dec(v_val_3325_);
v___x_3328_ = lean_string_from_utf8_unchecked(v___x_3327_);
v___x_3329_ = lean_string_append(v___x_3326_, v___x_3328_);
lean_dec_ref(v___x_3328_);
v___y_3309_ = v___y_3322_;
v___y_3310_ = v_queryPart_3323_;
v___y_3311_ = v___y_3321_;
v___y_3312_ = v___x_3329_;
goto v___jp_3308_;
}
}
v___jp_3330_:
{
lean_object* v_segments_3332_; uint8_t v_absolute_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; size_t v_sz_3336_; size_t v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v_result_3342_; 
v_segments_3332_ = lean_ctor_get(v_path_3317_, 0);
lean_inc_ref(v_segments_3332_);
v_absolute_3333_ = lean_ctor_get_uint8(v_path_3317_, sizeof(void*)*1);
lean_dec_ref(v_path_3317_);
v___x_3334_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3335_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3336_ = lean_array_size(v_segments_3332_);
v___x_3337_ = ((size_t)0ULL);
v___x_3338_ = l_unsafeCast___redArg(v_segments_3332_);
lean_dec_ref(v_segments_3332_);
v___x_3339_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3335_, v___f_3306_, v_sz_3336_, v___x_3337_, v___x_3338_);
v___x_3340_ = l_unsafeCast___redArg(v___x_3339_);
lean_dec(v___x_3339_);
v___x_3341_ = lean_array_to_list(v___x_3340_);
v_result_3342_ = l_String_intercalate(v___x_3334_, v___x_3341_);
if (v_absolute_3333_ == 0)
{
v___y_3321_ = v___y_3331_;
v___y_3322_ = v_result_3342_;
goto v___jp_3320_;
}
else
{
lean_object* v___x_3343_; 
v___x_3343_ = lean_string_append(v___x_3334_, v_result_3342_);
lean_dec_ref(v_result_3342_);
v___y_3321_ = v___y_3331_;
v___y_3322_ = v___x_3343_;
goto v___jp_3320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx(lean_object* v_x_3397_){
_start:
{
if (lean_obj_tag(v_x_3397_) == 0)
{
lean_object* v___x_3398_; 
v___x_3398_ = lean_unsigned_to_nat(0u);
return v___x_3398_;
}
else
{
lean_object* v___x_3399_; 
v___x_3399_ = lean_unsigned_to_nat(1u);
return v___x_3399_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___boxed(lean_object* v_x_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_Std_Http_URIReference_ctorIdx(v_x_3400_);
lean_dec_ref(v_x_3400_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___redArg(lean_object* v_t_3402_, lean_object* v_k_3403_){
_start:
{
lean_object* v_uri_3404_; lean_object* v___x_3405_; 
v_uri_3404_ = lean_ctor_get(v_t_3402_, 0);
lean_inc_ref(v_uri_3404_);
lean_dec_ref(v_t_3402_);
v___x_3405_ = lean_apply_1(v_k_3403_, v_uri_3404_);
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim(lean_object* v_motive_3406_, lean_object* v_ctorIdx_3407_, lean_object* v_t_3408_, lean_object* v_h_3409_, lean_object* v_k_3410_){
_start:
{
lean_object* v___x_3411_; 
v___x_3411_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3408_, v_k_3410_);
return v___x_3411_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___boxed(lean_object* v_motive_3412_, lean_object* v_ctorIdx_3413_, lean_object* v_t_3414_, lean_object* v_h_3415_, lean_object* v_k_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l_Std_Http_URIReference_ctorElim(v_motive_3412_, v_ctorIdx_3413_, v_t_3414_, v_h_3415_, v_k_3416_);
lean_dec(v_ctorIdx_3413_);
return v_res_3417_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim___redArg(lean_object* v_t_3418_, lean_object* v_absolute_3419_){
_start:
{
lean_object* v___x_3420_; 
v___x_3420_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3418_, v_absolute_3419_);
return v___x_3420_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim(lean_object* v_motive_3421_, lean_object* v_t_3422_, lean_object* v_h_3423_, lean_object* v_absolute_3424_){
_start:
{
lean_object* v___x_3425_; 
v___x_3425_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3422_, v_absolute_3424_);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim___redArg(lean_object* v_t_3426_, lean_object* v_relative_3427_){
_start:
{
lean_object* v___x_3428_; 
v___x_3428_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3426_, v_relative_3427_);
return v___x_3428_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim(lean_object* v_motive_3429_, lean_object* v_t_3430_, lean_object* v_h_3431_, lean_object* v_relative_3432_){
_start:
{
lean_object* v___x_3433_; 
v___x_3433_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3430_, v_relative_3432_);
return v___x_3433_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr(lean_object* v_x_3446_, lean_object* v_prec_3447_){
_start:
{
if (lean_obj_tag(v_x_3446_) == 0)
{
lean_object* v_uri_3448_; lean_object* v___y_3450_; lean_object* v___x_3458_; uint8_t v___x_3459_; 
v_uri_3448_ = lean_ctor_get(v_x_3446_, 0);
lean_inc_ref(v_uri_3448_);
lean_dec_ref_known(v_x_3446_, 1);
v___x_3458_ = lean_unsigned_to_nat(1024u);
v___x_3459_ = lean_nat_dec_le(v___x_3458_, v_prec_3447_);
if (v___x_3459_ == 0)
{
lean_object* v___x_3460_; 
v___x_3460_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3450_ = v___x_3460_;
goto v___jp_3449_;
}
else
{
lean_object* v___x_3461_; 
v___x_3461_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3450_ = v___x_3461_;
goto v___jp_3449_;
}
v___jp_3449_:
{
lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; uint8_t v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3451_ = ((lean_object*)(l_Std_Http_instReprURIReference_repr___closed__2));
v___x_3452_ = l_Std_Http_instReprURI_repr___redArg(v_uri_3448_);
v___x_3453_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3451_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
lean_inc(v___y_3450_);
v___x_3454_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3454_, 0, v___y_3450_);
lean_ctor_set(v___x_3454_, 1, v___x_3453_);
v___x_3455_ = 0;
v___x_3456_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3456_, 0, v___x_3454_);
lean_ctor_set_uint8(v___x_3456_, sizeof(void*)*1, v___x_3455_);
v___x_3457_ = l_Repr_addAppParen(v___x_3456_, v_prec_3447_);
return v___x_3457_;
}
}
else
{
lean_object* v_ref_3462_; lean_object* v___y_3464_; lean_object* v___x_3472_; uint8_t v___x_3473_; 
v_ref_3462_ = lean_ctor_get(v_x_3446_, 0);
lean_inc_ref(v_ref_3462_);
lean_dec_ref_known(v_x_3446_, 1);
v___x_3472_ = lean_unsigned_to_nat(1024u);
v___x_3473_ = lean_nat_dec_le(v___x_3472_, v_prec_3447_);
if (v___x_3473_ == 0)
{
lean_object* v___x_3474_; 
v___x_3474_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3464_ = v___x_3474_;
goto v___jp_3463_;
}
else
{
lean_object* v___x_3475_; 
v___x_3475_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3464_ = v___x_3475_;
goto v___jp_3463_;
}
v___jp_3463_:
{
lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; uint8_t v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; 
v___x_3465_ = ((lean_object*)(l_Std_Http_instReprURIReference_repr___closed__5));
v___x_3466_ = l_Std_Http_URI_instReprRelativeRef_repr___redArg(v_ref_3462_);
v___x_3467_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3467_, 0, v___x_3465_);
lean_ctor_set(v___x_3467_, 1, v___x_3466_);
lean_inc(v___y_3464_);
v___x_3468_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3468_, 0, v___y_3464_);
lean_ctor_set(v___x_3468_, 1, v___x_3467_);
v___x_3469_ = 0;
v___x_3470_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3470_, 0, v___x_3468_);
lean_ctor_set_uint8(v___x_3470_, sizeof(void*)*1, v___x_3469_);
v___x_3471_ = l_Repr_addAppParen(v___x_3470_, v_prec_3447_);
return v___x_3471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr___boxed(lean_object* v_x_3476_, lean_object* v_prec_3477_){
_start:
{
lean_object* v_res_3478_; 
v_res_3478_ = l_Std_Http_instReprURIReference_repr(v_x_3476_, v_prec_3477_);
lean_dec(v_prec_3477_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringURIReference___lam__2(lean_object* v___f_3485_, lean_object* v___f_3486_, lean_object* v_x_3487_){
_start:
{
lean_object* v___y_3489_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v___y_3492_; 
if (lean_obj_tag(v_x_3487_) == 0)
{
lean_object* v_uri_3496_; lean_object* v_scheme_3497_; lean_object* v_authority_3498_; lean_object* v_path_3499_; lean_object* v_query_3500_; lean_object* v_fragment_3501_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3505_; lean_object* v___y_3506_; lean_object* v___y_3514_; lean_object* v___y_3515_; lean_object* v___y_3524_; 
lean_dec_ref(v___f_3486_);
v_uri_3496_ = lean_ctor_get(v_x_3487_, 0);
lean_inc_ref(v_uri_3496_);
lean_dec_ref_known(v_x_3487_, 1);
v_scheme_3497_ = lean_ctor_get(v_uri_3496_, 0);
lean_inc_ref(v_scheme_3497_);
v_authority_3498_ = lean_ctor_get(v_uri_3496_, 1);
lean_inc(v_authority_3498_);
v_path_3499_ = lean_ctor_get(v_uri_3496_, 2);
lean_inc_ref(v_path_3499_);
v_query_3500_ = lean_ctor_get(v_uri_3496_, 3);
lean_inc(v_query_3500_);
v_fragment_3501_ = lean_ctor_get(v_uri_3496_, 4);
lean_inc(v_fragment_3501_);
lean_dec_ref(v_uri_3496_);
if (lean_obj_tag(v_authority_3498_) == 0)
{
lean_object* v___x_3537_; 
v___x_3537_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3524_ = v___x_3537_;
goto v___jp_3523_;
}
else
{
lean_object* v_val_3538_; lean_object* v_userInfo_3539_; lean_object* v_host_3540_; lean_object* v_port_3541_; lean_object* v___x_3542_; lean_object* v___y_3544_; lean_object* v___y_3545_; lean_object* v___y_3546_; lean_object* v___y_3551_; lean_object* v___y_3552_; lean_object* v___y_3561_; 
v_val_3538_ = lean_ctor_get(v_authority_3498_, 0);
lean_inc(v_val_3538_);
lean_dec_ref_known(v_authority_3498_, 1);
v_userInfo_3539_ = lean_ctor_get(v_val_3538_, 0);
lean_inc(v_userInfo_3539_);
v_host_3540_ = lean_ctor_get(v_val_3538_, 1);
lean_inc_ref(v_host_3540_);
v_port_3541_ = lean_ctor_get(v_val_3538_, 2);
lean_inc(v_port_3541_);
lean_dec(v_val_3538_);
v___x_3542_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3539_) == 0)
{
lean_object* v___x_3571_; 
v___x_3571_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3561_ = v___x_3571_;
goto v___jp_3560_;
}
else
{
lean_object* v_val_3572_; lean_object* v_password_3573_; 
v_val_3572_ = lean_ctor_get(v_userInfo_3539_, 0);
lean_inc(v_val_3572_);
lean_dec_ref_known(v_userInfo_3539_, 1);
v_password_3573_ = lean_ctor_get(v_val_3572_, 1);
if (lean_obj_tag(v_password_3573_) == 0)
{
lean_object* v_username_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
v_username_3574_ = lean_ctor_get(v_val_3572_, 0);
lean_inc_ref(v_username_3574_);
lean_dec(v_val_3572_);
v___x_3575_ = lean_string_from_utf8_unchecked(v_username_3574_);
v___x_3576_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3577_ = lean_string_append(v___x_3575_, v___x_3576_);
v___y_3561_ = v___x_3577_;
goto v___jp_3560_;
}
else
{
lean_object* v_username_3578_; lean_object* v_val_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
lean_inc_ref(v_password_3573_);
v_username_3578_ = lean_ctor_get(v_val_3572_, 0);
lean_inc_ref(v_username_3578_);
lean_dec(v_val_3572_);
v_val_3579_ = lean_ctor_get(v_password_3573_, 0);
lean_inc(v_val_3579_);
lean_dec_ref_known(v_password_3573_, 1);
v___x_3580_ = lean_string_from_utf8_unchecked(v_username_3578_);
v___x_3581_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3582_ = lean_string_append(v___x_3580_, v___x_3581_);
v___x_3583_ = lean_string_from_utf8_unchecked(v_val_3579_);
v___x_3584_ = lean_string_append(v___x_3582_, v___x_3583_);
lean_dec_ref(v___x_3583_);
v___x_3585_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3586_ = lean_string_append(v___x_3584_, v___x_3585_);
v___y_3561_ = v___x_3586_;
goto v___jp_3560_;
}
}
v___jp_3543_:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3547_ = lean_string_append(v___y_3544_, v___y_3545_);
lean_dec_ref(v___y_3545_);
v___x_3548_ = lean_string_append(v___x_3547_, v___y_3546_);
lean_dec_ref(v___y_3546_);
v___x_3549_ = lean_string_append(v___x_3542_, v___x_3548_);
lean_dec_ref(v___x_3548_);
v___y_3524_ = v___x_3549_;
goto v___jp_3523_;
}
v___jp_3550_:
{
switch(lean_obj_tag(v_port_3541_))
{
case 0:
{
lean_object* v___x_3553_; 
v___x_3553_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3544_ = v___y_3551_;
v___y_3545_ = v___y_3552_;
v___y_3546_ = v___x_3553_;
goto v___jp_3543_;
}
case 1:
{
lean_object* v___x_3554_; 
v___x_3554_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3544_ = v___y_3551_;
v___y_3545_ = v___y_3552_;
v___y_3546_ = v___x_3554_;
goto v___jp_3543_;
}
default: 
{
uint16_t v_port_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v_port_3555_ = lean_ctor_get_uint16(v_port_3541_, 0);
lean_dec_ref_known(v_port_3541_, 0);
v___x_3556_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3557_ = lean_uint16_to_nat(v_port_3555_);
v___x_3558_ = l_Nat_reprFast(v___x_3557_);
v___x_3559_ = lean_string_append(v___x_3556_, v___x_3558_);
lean_dec_ref(v___x_3558_);
v___y_3544_ = v___y_3551_;
v___y_3545_ = v___y_3552_;
v___y_3546_ = v___x_3559_;
goto v___jp_3543_;
}
}
}
v___jp_3560_:
{
switch(lean_obj_tag(v_host_3540_))
{
case 0:
{
lean_object* v_name_3562_; 
v_name_3562_ = lean_ctor_get(v_host_3540_, 0);
lean_inc_ref(v_name_3562_);
lean_dec_ref_known(v_host_3540_, 1);
v___y_3551_ = v___y_3561_;
v___y_3552_ = v_name_3562_;
goto v___jp_3550_;
}
case 1:
{
lean_object* v_ipv4_3563_; lean_object* v___x_3564_; 
v_ipv4_3563_ = lean_ctor_get(v_host_3540_, 0);
lean_inc_ref(v_ipv4_3563_);
lean_dec_ref_known(v_host_3540_, 1);
v___x_3564_ = lean_uv_ntop_v4(v_ipv4_3563_);
lean_dec_ref(v_ipv4_3563_);
v___y_3551_ = v___y_3561_;
v___y_3552_ = v___x_3564_;
goto v___jp_3550_;
}
default: 
{
lean_object* v_ipv6_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
v_ipv6_3565_ = lean_ctor_get(v_host_3540_, 0);
lean_inc_ref(v_ipv6_3565_);
lean_dec_ref_known(v_host_3540_, 1);
v___x_3566_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3567_ = lean_uv_ntop_v6(v_ipv6_3565_);
lean_dec_ref(v_ipv6_3565_);
v___x_3568_ = lean_string_append(v___x_3566_, v___x_3567_);
lean_dec_ref(v___x_3567_);
v___x_3569_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3570_ = lean_string_append(v___x_3568_, v___x_3569_);
v___y_3551_ = v___y_3561_;
v___y_3552_ = v___x_3570_;
goto v___jp_3550_;
}
}
}
}
v___jp_3502_:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3507_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3508_ = lean_string_append(v_scheme_3497_, v___x_3507_);
v___x_3509_ = lean_string_append(v___x_3508_, v___y_3503_);
lean_dec_ref(v___y_3503_);
v___x_3510_ = lean_string_append(v___x_3509_, v___y_3504_);
lean_dec_ref(v___y_3504_);
v___x_3511_ = lean_string_append(v___x_3510_, v___y_3505_);
lean_dec_ref(v___y_3505_);
v___x_3512_ = lean_string_append(v___x_3511_, v___y_3506_);
lean_dec_ref(v___y_3506_);
return v___x_3512_;
}
v___jp_3513_:
{
lean_object* v_queryPart_3516_; 
v_queryPart_3516_ = l_Std_Http_URI_Query_formatOption(v_query_3500_);
if (lean_obj_tag(v_fragment_3501_) == 0)
{
lean_object* v___x_3517_; 
v___x_3517_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3503_ = v___y_3514_;
v___y_3504_ = v___y_3515_;
v___y_3505_ = v_queryPart_3516_;
v___y_3506_ = v___x_3517_;
goto v___jp_3502_;
}
else
{
lean_object* v_val_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; 
v_val_3518_ = lean_ctor_get(v_fragment_3501_, 0);
lean_inc(v_val_3518_);
lean_dec_ref_known(v_fragment_3501_, 1);
v___x_3519_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3520_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3518_);
lean_dec(v_val_3518_);
v___x_3521_ = lean_string_from_utf8_unchecked(v___x_3520_);
v___x_3522_ = lean_string_append(v___x_3519_, v___x_3521_);
lean_dec_ref(v___x_3521_);
v___y_3503_ = v___y_3514_;
v___y_3504_ = v___y_3515_;
v___y_3505_ = v_queryPart_3516_;
v___y_3506_ = v___x_3522_;
goto v___jp_3502_;
}
}
v___jp_3523_:
{
lean_object* v_segments_3525_; uint8_t v_absolute_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; size_t v_sz_3529_; size_t v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v_result_3535_; 
v_segments_3525_ = lean_ctor_get(v_path_3499_, 0);
lean_inc_ref(v_segments_3525_);
v_absolute_3526_ = lean_ctor_get_uint8(v_path_3499_, sizeof(void*)*1);
lean_dec_ref(v_path_3499_);
v___x_3527_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3528_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3529_ = lean_array_size(v_segments_3525_);
v___x_3530_ = ((size_t)0ULL);
v___x_3531_ = l_unsafeCast___redArg(v_segments_3525_);
lean_dec_ref(v_segments_3525_);
v___x_3532_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3528_, v___f_3485_, v_sz_3529_, v___x_3530_, v___x_3531_);
v___x_3533_ = l_unsafeCast___redArg(v___x_3532_);
lean_dec(v___x_3532_);
v___x_3534_ = lean_array_to_list(v___x_3533_);
v_result_3535_ = l_String_intercalate(v___x_3527_, v___x_3534_);
if (v_absolute_3526_ == 0)
{
v___y_3514_ = v___y_3524_;
v___y_3515_ = v_result_3535_;
goto v___jp_3513_;
}
else
{
lean_object* v___x_3536_; 
v___x_3536_ = lean_string_append(v___x_3527_, v_result_3535_);
lean_dec_ref(v_result_3535_);
v___y_3514_ = v___y_3524_;
v___y_3515_ = v___x_3536_;
goto v___jp_3513_;
}
}
}
else
{
lean_object* v_ref_3587_; lean_object* v_authority_3588_; lean_object* v_path_3589_; lean_object* v_query_3590_; lean_object* v_fragment_3591_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3603_; 
lean_dec_ref(v___f_3485_);
v_ref_3587_ = lean_ctor_get(v_x_3487_, 0);
lean_inc_ref(v_ref_3587_);
lean_dec_ref_known(v_x_3487_, 1);
v_authority_3588_ = lean_ctor_get(v_ref_3587_, 0);
lean_inc(v_authority_3588_);
v_path_3589_ = lean_ctor_get(v_ref_3587_, 1);
lean_inc_ref(v_path_3589_);
v_query_3590_ = lean_ctor_get(v_ref_3587_, 2);
lean_inc(v_query_3590_);
v_fragment_3591_ = lean_ctor_get(v_ref_3587_, 3);
lean_inc(v_fragment_3591_);
lean_dec_ref(v_ref_3587_);
if (lean_obj_tag(v_authority_3588_) == 0)
{
lean_object* v___x_3616_; 
v___x_3616_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3603_ = v___x_3616_;
goto v___jp_3602_;
}
else
{
lean_object* v_val_3617_; lean_object* v_userInfo_3618_; lean_object* v_host_3619_; lean_object* v_port_3620_; lean_object* v___x_3621_; lean_object* v___y_3623_; lean_object* v___y_3624_; lean_object* v___y_3625_; lean_object* v___y_3630_; lean_object* v___y_3631_; lean_object* v___y_3640_; 
v_val_3617_ = lean_ctor_get(v_authority_3588_, 0);
lean_inc(v_val_3617_);
lean_dec_ref_known(v_authority_3588_, 1);
v_userInfo_3618_ = lean_ctor_get(v_val_3617_, 0);
lean_inc(v_userInfo_3618_);
v_host_3619_ = lean_ctor_get(v_val_3617_, 1);
lean_inc_ref(v_host_3619_);
v_port_3620_ = lean_ctor_get(v_val_3617_, 2);
lean_inc(v_port_3620_);
lean_dec(v_val_3617_);
v___x_3621_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3618_) == 0)
{
lean_object* v___x_3650_; 
v___x_3650_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3640_ = v___x_3650_;
goto v___jp_3639_;
}
else
{
lean_object* v_val_3651_; lean_object* v_password_3652_; 
v_val_3651_ = lean_ctor_get(v_userInfo_3618_, 0);
lean_inc(v_val_3651_);
lean_dec_ref_known(v_userInfo_3618_, 1);
v_password_3652_ = lean_ctor_get(v_val_3651_, 1);
if (lean_obj_tag(v_password_3652_) == 0)
{
lean_object* v_username_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; 
v_username_3653_ = lean_ctor_get(v_val_3651_, 0);
lean_inc_ref(v_username_3653_);
lean_dec(v_val_3651_);
v___x_3654_ = lean_string_from_utf8_unchecked(v_username_3653_);
v___x_3655_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3656_ = lean_string_append(v___x_3654_, v___x_3655_);
v___y_3640_ = v___x_3656_;
goto v___jp_3639_;
}
else
{
lean_object* v_username_3657_; lean_object* v_val_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; 
lean_inc_ref(v_password_3652_);
v_username_3657_ = lean_ctor_get(v_val_3651_, 0);
lean_inc_ref(v_username_3657_);
lean_dec(v_val_3651_);
v_val_3658_ = lean_ctor_get(v_password_3652_, 0);
lean_inc(v_val_3658_);
lean_dec_ref_known(v_password_3652_, 1);
v___x_3659_ = lean_string_from_utf8_unchecked(v_username_3657_);
v___x_3660_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3661_ = lean_string_append(v___x_3659_, v___x_3660_);
v___x_3662_ = lean_string_from_utf8_unchecked(v_val_3658_);
v___x_3663_ = lean_string_append(v___x_3661_, v___x_3662_);
lean_dec_ref(v___x_3662_);
v___x_3664_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3665_ = lean_string_append(v___x_3663_, v___x_3664_);
v___y_3640_ = v___x_3665_;
goto v___jp_3639_;
}
}
v___jp_3622_:
{
lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v___x_3626_ = lean_string_append(v___y_3624_, v___y_3623_);
lean_dec_ref(v___y_3623_);
v___x_3627_ = lean_string_append(v___x_3626_, v___y_3625_);
lean_dec_ref(v___y_3625_);
v___x_3628_ = lean_string_append(v___x_3621_, v___x_3627_);
lean_dec_ref(v___x_3627_);
v___y_3603_ = v___x_3628_;
goto v___jp_3602_;
}
v___jp_3629_:
{
switch(lean_obj_tag(v_port_3620_))
{
case 0:
{
lean_object* v___x_3632_; 
v___x_3632_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3623_ = v___y_3631_;
v___y_3624_ = v___y_3630_;
v___y_3625_ = v___x_3632_;
goto v___jp_3622_;
}
case 1:
{
lean_object* v___x_3633_; 
v___x_3633_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3623_ = v___y_3631_;
v___y_3624_ = v___y_3630_;
v___y_3625_ = v___x_3633_;
goto v___jp_3622_;
}
default: 
{
uint16_t v_port_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; 
v_port_3634_ = lean_ctor_get_uint16(v_port_3620_, 0);
lean_dec_ref_known(v_port_3620_, 0);
v___x_3635_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3636_ = lean_uint16_to_nat(v_port_3634_);
v___x_3637_ = l_Nat_reprFast(v___x_3636_);
v___x_3638_ = lean_string_append(v___x_3635_, v___x_3637_);
lean_dec_ref(v___x_3637_);
v___y_3623_ = v___y_3631_;
v___y_3624_ = v___y_3630_;
v___y_3625_ = v___x_3638_;
goto v___jp_3622_;
}
}
}
v___jp_3639_:
{
switch(lean_obj_tag(v_host_3619_))
{
case 0:
{
lean_object* v_name_3641_; 
v_name_3641_ = lean_ctor_get(v_host_3619_, 0);
lean_inc_ref(v_name_3641_);
lean_dec_ref_known(v_host_3619_, 1);
v___y_3630_ = v___y_3640_;
v___y_3631_ = v_name_3641_;
goto v___jp_3629_;
}
case 1:
{
lean_object* v_ipv4_3642_; lean_object* v___x_3643_; 
v_ipv4_3642_ = lean_ctor_get(v_host_3619_, 0);
lean_inc_ref(v_ipv4_3642_);
lean_dec_ref_known(v_host_3619_, 1);
v___x_3643_ = lean_uv_ntop_v4(v_ipv4_3642_);
lean_dec_ref(v_ipv4_3642_);
v___y_3630_ = v___y_3640_;
v___y_3631_ = v___x_3643_;
goto v___jp_3629_;
}
default: 
{
lean_object* v_ipv6_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; 
v_ipv6_3644_ = lean_ctor_get(v_host_3619_, 0);
lean_inc_ref(v_ipv6_3644_);
lean_dec_ref_known(v_host_3619_, 1);
v___x_3645_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3646_ = lean_uv_ntop_v6(v_ipv6_3644_);
lean_dec_ref(v_ipv6_3644_);
v___x_3647_ = lean_string_append(v___x_3645_, v___x_3646_);
lean_dec_ref(v___x_3646_);
v___x_3648_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3649_ = lean_string_append(v___x_3647_, v___x_3648_);
v___y_3630_ = v___y_3640_;
v___y_3631_ = v___x_3649_;
goto v___jp_3629_;
}
}
}
}
v___jp_3592_:
{
lean_object* v_queryPart_3595_; 
v_queryPart_3595_ = l_Std_Http_URI_Query_formatOption(v_query_3590_);
if (lean_obj_tag(v_fragment_3591_) == 0)
{
lean_object* v___x_3596_; 
v___x_3596_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3489_ = v_queryPart_3595_;
v___y_3490_ = v___y_3594_;
v___y_3491_ = v___y_3593_;
v___y_3492_ = v___x_3596_;
goto v___jp_3488_;
}
else
{
lean_object* v_val_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v_val_3597_ = lean_ctor_get(v_fragment_3591_, 0);
lean_inc(v_val_3597_);
lean_dec_ref_known(v_fragment_3591_, 1);
v___x_3598_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3599_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3597_);
lean_dec(v_val_3597_);
v___x_3600_ = lean_string_from_utf8_unchecked(v___x_3599_);
v___x_3601_ = lean_string_append(v___x_3598_, v___x_3600_);
lean_dec_ref(v___x_3600_);
v___y_3489_ = v_queryPart_3595_;
v___y_3490_ = v___y_3594_;
v___y_3491_ = v___y_3593_;
v___y_3492_ = v___x_3601_;
goto v___jp_3488_;
}
}
v___jp_3602_:
{
lean_object* v_segments_3604_; uint8_t v_absolute_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; size_t v_sz_3608_; size_t v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v_result_3614_; 
v_segments_3604_ = lean_ctor_get(v_path_3589_, 0);
lean_inc_ref(v_segments_3604_);
v_absolute_3605_ = lean_ctor_get_uint8(v_path_3589_, sizeof(void*)*1);
lean_dec_ref(v_path_3589_);
v___x_3606_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3607_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3608_ = lean_array_size(v_segments_3604_);
v___x_3609_ = ((size_t)0ULL);
v___x_3610_ = l_unsafeCast___redArg(v_segments_3604_);
lean_dec_ref(v_segments_3604_);
v___x_3611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3607_, v___f_3486_, v_sz_3608_, v___x_3609_, v___x_3610_);
v___x_3612_ = l_unsafeCast___redArg(v___x_3611_);
lean_dec(v___x_3611_);
v___x_3613_ = lean_array_to_list(v___x_3612_);
v_result_3614_ = l_String_intercalate(v___x_3606_, v___x_3613_);
if (v_absolute_3605_ == 0)
{
v___y_3593_ = v___y_3603_;
v___y_3594_ = v_result_3614_;
goto v___jp_3592_;
}
else
{
lean_object* v___x_3615_; 
v___x_3615_ = lean_string_append(v___x_3606_, v_result_3614_);
lean_dec_ref(v_result_3614_);
v___y_3593_ = v___y_3603_;
v___y_3594_ = v___x_3615_;
goto v___jp_3592_;
}
}
}
v___jp_3488_:
{
lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3493_ = lean_string_append(v___y_3491_, v___y_3490_);
lean_dec_ref(v___y_3490_);
v___x_3494_ = lean_string_append(v___x_3493_, v___y_3489_);
lean_dec_ref(v___y_3489_);
v___x_3495_ = lean_string_append(v___x_3494_, v___y_3492_);
lean_dec_ref(v___y_3492_);
return v___x_3495_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx(lean_object* v_x_3669_){
_start:
{
switch(lean_obj_tag(v_x_3669_))
{
case 0:
{
lean_object* v___x_3670_; 
v___x_3670_ = lean_unsigned_to_nat(0u);
return v___x_3670_;
}
case 1:
{
lean_object* v___x_3671_; 
v___x_3671_ = lean_unsigned_to_nat(1u);
return v___x_3671_;
}
case 2:
{
lean_object* v___x_3672_; 
v___x_3672_ = lean_unsigned_to_nat(2u);
return v___x_3672_;
}
default: 
{
lean_object* v___x_3673_; 
v___x_3673_ = lean_unsigned_to_nat(3u);
return v___x_3673_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___boxed(lean_object* v_x_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l_Std_Http_RequestTarget_ctorIdx(v_x_3674_);
lean_dec(v_x_3674_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___redArg(lean_object* v_t_3676_, lean_object* v_k_3677_){
_start:
{
switch(lean_obj_tag(v_t_3676_))
{
case 0:
{
lean_object* v_path_3678_; lean_object* v_query_3679_; lean_object* v___x_3680_; 
v_path_3678_ = lean_ctor_get(v_t_3676_, 0);
lean_inc_ref(v_path_3678_);
v_query_3679_ = lean_ctor_get(v_t_3676_, 1);
lean_inc(v_query_3679_);
lean_dec_ref_known(v_t_3676_, 2);
v___x_3680_ = lean_apply_2(v_k_3677_, v_path_3678_, v_query_3679_);
return v___x_3680_;
}
case 3:
{
return v_k_3677_;
}
default: 
{
lean_object* v_uri_3681_; lean_object* v___x_3682_; 
v_uri_3681_ = lean_ctor_get(v_t_3676_, 0);
lean_inc_ref(v_uri_3681_);
lean_dec(v_t_3676_);
v___x_3682_ = lean_apply_1(v_k_3677_, v_uri_3681_);
return v___x_3682_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim(lean_object* v_motive_3683_, lean_object* v_ctorIdx_3684_, lean_object* v_t_3685_, lean_object* v_h_3686_, lean_object* v_k_3687_){
_start:
{
lean_object* v___x_3688_; 
v___x_3688_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3685_, v_k_3687_);
return v___x_3688_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___boxed(lean_object* v_motive_3689_, lean_object* v_ctorIdx_3690_, lean_object* v_t_3691_, lean_object* v_h_3692_, lean_object* v_k_3693_){
_start:
{
lean_object* v_res_3694_; 
v_res_3694_ = l_Std_Http_RequestTarget_ctorElim(v_motive_3689_, v_ctorIdx_3690_, v_t_3691_, v_h_3692_, v_k_3693_);
lean_dec(v_ctorIdx_3690_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim___redArg(lean_object* v_t_3695_, lean_object* v_originForm_3696_){
_start:
{
lean_object* v___x_3697_; 
v___x_3697_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3695_, v_originForm_3696_);
return v___x_3697_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim(lean_object* v_motive_3698_, lean_object* v_t_3699_, lean_object* v_h_3700_, lean_object* v_originForm_3701_){
_start:
{
lean_object* v___x_3702_; 
v___x_3702_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3699_, v_originForm_3701_);
return v___x_3702_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim___redArg(lean_object* v_t_3703_, lean_object* v_absoluteForm_3704_){
_start:
{
lean_object* v___x_3705_; 
v___x_3705_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3703_, v_absoluteForm_3704_);
return v___x_3705_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim(lean_object* v_motive_3706_, lean_object* v_t_3707_, lean_object* v_h_3708_, lean_object* v_absoluteForm_3709_){
_start:
{
lean_object* v___x_3710_; 
v___x_3710_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3707_, v_absoluteForm_3709_);
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim___redArg(lean_object* v_t_3711_, lean_object* v_authorityForm_3712_){
_start:
{
lean_object* v___x_3713_; 
v___x_3713_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3711_, v_authorityForm_3712_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim(lean_object* v_motive_3714_, lean_object* v_t_3715_, lean_object* v_h_3716_, lean_object* v_authorityForm_3717_){
_start:
{
lean_object* v___x_3718_; 
v___x_3718_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3715_, v_authorityForm_3717_);
return v___x_3718_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim___redArg(lean_object* v_t_3719_, lean_object* v_asteriskForm_3720_){
_start:
{
lean_object* v___x_3721_; 
v___x_3721_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3719_, v_asteriskForm_3720_);
return v___x_3721_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim(lean_object* v_motive_3722_, lean_object* v_t_3723_, lean_object* v_h_3724_, lean_object* v_asteriskForm_3725_){
_start:
{
lean_object* v___x_3726_; 
v___x_3726_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3723_, v_asteriskForm_3725_);
return v___x_3726_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr(lean_object* v_x_3753_, lean_object* v_prec_3754_){
_start:
{
lean_object* v___y_3756_; 
switch(lean_obj_tag(v_x_3753_))
{
case 0:
{
lean_object* v_path_3762_; lean_object* v_query_3763_; lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3787_; 
v_path_3762_ = lean_ctor_get(v_x_3753_, 0);
v_query_3763_ = lean_ctor_get(v_x_3753_, 1);
v_isSharedCheck_3787_ = !lean_is_exclusive(v_x_3753_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3765_ = v_x_3753_;
v_isShared_3766_ = v_isSharedCheck_3787_;
goto v_resetjp_3764_;
}
else
{
lean_inc(v_query_3763_);
lean_inc(v_path_3762_);
lean_dec(v_x_3753_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3787_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
lean_object* v___y_3768_; lean_object* v___x_3783_; uint8_t v___x_3784_; 
v___x_3783_ = lean_unsigned_to_nat(1024u);
v___x_3784_ = lean_nat_dec_le(v___x_3783_, v_prec_3754_);
if (v___x_3784_ == 0)
{
lean_object* v___x_3785_; 
v___x_3785_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3768_ = v___x_3785_;
goto v___jp_3767_;
}
else
{
lean_object* v___x_3786_; 
v___x_3786_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3768_ = v___x_3786_;
goto v___jp_3767_;
}
v___jp_3767_:
{
lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3774_; 
v___x_3769_ = lean_box(1);
v___x_3770_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__4));
v___x_3771_ = lean_unsigned_to_nat(1024u);
v___x_3772_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_3762_);
if (v_isShared_3766_ == 0)
{
lean_ctor_set_tag(v___x_3765_, 5);
lean_ctor_set(v___x_3765_, 1, v___x_3772_);
lean_ctor_set(v___x_3765_, 0, v___x_3770_);
v___x_3774_ = v___x_3765_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3782_; 
v_reuseFailAlloc_3782_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3782_, 0, v___x_3770_);
lean_ctor_set(v_reuseFailAlloc_3782_, 1, v___x_3772_);
v___x_3774_ = v_reuseFailAlloc_3782_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; uint8_t v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; 
v___x_3775_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3774_);
lean_ctor_set(v___x_3775_, 1, v___x_3769_);
v___x_3776_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_3763_, v___x_3771_);
v___x_3777_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3775_);
lean_ctor_set(v___x_3777_, 1, v___x_3776_);
lean_inc(v___y_3768_);
v___x_3778_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3778_, 0, v___y_3768_);
lean_ctor_set(v___x_3778_, 1, v___x_3777_);
v___x_3779_ = 0;
v___x_3780_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3780_, 0, v___x_3778_);
lean_ctor_set_uint8(v___x_3780_, sizeof(void*)*1, v___x_3779_);
v___x_3781_ = l_Repr_addAppParen(v___x_3780_, v_prec_3754_);
return v___x_3781_;
}
}
}
}
case 1:
{
lean_object* v_uri_3788_; lean_object* v___y_3790_; lean_object* v___x_3798_; uint8_t v___x_3799_; 
v_uri_3788_ = lean_ctor_get(v_x_3753_, 0);
lean_inc_ref(v_uri_3788_);
lean_dec_ref_known(v_x_3753_, 1);
v___x_3798_ = lean_unsigned_to_nat(1024u);
v___x_3799_ = lean_nat_dec_le(v___x_3798_, v_prec_3754_);
if (v___x_3799_ == 0)
{
lean_object* v___x_3800_; 
v___x_3800_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3790_ = v___x_3800_;
goto v___jp_3789_;
}
else
{
lean_object* v___x_3801_; 
v___x_3801_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3790_ = v___x_3801_;
goto v___jp_3789_;
}
v___jp_3789_:
{
lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; uint8_t v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; 
v___x_3791_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__7));
v___x_3792_ = l_Std_Http_instReprURI_repr___redArg(v_uri_3788_);
v___x_3793_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3791_);
lean_ctor_set(v___x_3793_, 1, v___x_3792_);
lean_inc(v___y_3790_);
v___x_3794_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3794_, 0, v___y_3790_);
lean_ctor_set(v___x_3794_, 1, v___x_3793_);
v___x_3795_ = 0;
v___x_3796_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3796_, 0, v___x_3794_);
lean_ctor_set_uint8(v___x_3796_, sizeof(void*)*1, v___x_3795_);
v___x_3797_ = l_Repr_addAppParen(v___x_3796_, v_prec_3754_);
return v___x_3797_;
}
}
case 2:
{
lean_object* v_authority_3802_; lean_object* v___y_3804_; lean_object* v___x_3812_; uint8_t v___x_3813_; 
v_authority_3802_ = lean_ctor_get(v_x_3753_, 0);
lean_inc_ref(v_authority_3802_);
lean_dec_ref_known(v_x_3753_, 1);
v___x_3812_ = lean_unsigned_to_nat(1024u);
v___x_3813_ = lean_nat_dec_le(v___x_3812_, v_prec_3754_);
if (v___x_3813_ == 0)
{
lean_object* v___x_3814_; 
v___x_3814_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3804_ = v___x_3814_;
goto v___jp_3803_;
}
else
{
lean_object* v___x_3815_; 
v___x_3815_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3804_ = v___x_3815_;
goto v___jp_3803_;
}
v___jp_3803_:
{
lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; uint8_t v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3805_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__10));
v___x_3806_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_authority_3802_);
v___x_3807_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3805_);
lean_ctor_set(v___x_3807_, 1, v___x_3806_);
lean_inc(v___y_3804_);
v___x_3808_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3808_, 0, v___y_3804_);
lean_ctor_set(v___x_3808_, 1, v___x_3807_);
v___x_3809_ = 0;
v___x_3810_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3810_, 0, v___x_3808_);
lean_ctor_set_uint8(v___x_3810_, sizeof(void*)*1, v___x_3809_);
v___x_3811_ = l_Repr_addAppParen(v___x_3810_, v_prec_3754_);
return v___x_3811_;
}
}
default: 
{
lean_object* v___x_3816_; uint8_t v___x_3817_; 
v___x_3816_ = lean_unsigned_to_nat(1024u);
v___x_3817_ = lean_nat_dec_le(v___x_3816_, v_prec_3754_);
if (v___x_3817_ == 0)
{
lean_object* v___x_3818_; 
v___x_3818_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3756_ = v___x_3818_;
goto v___jp_3755_;
}
else
{
lean_object* v___x_3819_; 
v___x_3819_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3756_ = v___x_3819_;
goto v___jp_3755_;
}
}
}
v___jp_3755_:
{
lean_object* v___x_3757_; lean_object* v___x_3758_; uint8_t v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; 
v___x_3757_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__1));
lean_inc(v___y_3756_);
v___x_3758_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___y_3756_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = 0;
v___x_3760_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3760_, 0, v___x_3758_);
lean_ctor_set_uint8(v___x_3760_, sizeof(void*)*1, v___x_3759_);
v___x_3761_ = l_Repr_addAppParen(v___x_3760_, v_prec_3754_);
return v___x_3761_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr___boxed(lean_object* v_x_3820_, lean_object* v_prec_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l_Std_Http_instReprRequestTarget_repr(v_x_3820_, v_prec_3821_);
lean_dec(v_prec_3821_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path(lean_object* v_x_3830_){
_start:
{
switch(lean_obj_tag(v_x_3830_))
{
case 0:
{
lean_object* v_path_3831_; 
v_path_3831_ = lean_ctor_get(v_x_3830_, 0);
lean_inc_ref(v_path_3831_);
return v_path_3831_;
}
case 1:
{
lean_object* v_uri_3832_; lean_object* v_path_3833_; 
v_uri_3832_ = lean_ctor_get(v_x_3830_, 0);
v_path_3833_ = lean_ctor_get(v_uri_3832_, 2);
lean_inc_ref(v_path_3833_);
return v_path_3833_;
}
default: 
{
lean_object* v___x_3834_; 
v___x_3834_ = ((lean_object*)(l_Std_Http_RequestTarget_path___closed__1));
return v___x_3834_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path___boxed(lean_object* v_x_3835_){
_start:
{
lean_object* v_res_3836_; 
v_res_3836_ = l_Std_Http_RequestTarget_path(v_x_3835_);
lean_dec(v_x_3835_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query(lean_object* v_x_3837_){
_start:
{
switch(lean_obj_tag(v_x_3837_))
{
case 0:
{
lean_object* v_query_3838_; 
v_query_3838_ = lean_ctor_get(v_x_3837_, 1);
if (lean_obj_tag(v_query_3838_) == 0)
{
lean_object* v___x_3839_; 
v___x_3839_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_3839_;
}
else
{
lean_object* v_val_3840_; 
v_val_3840_ = lean_ctor_get(v_query_3838_, 0);
lean_inc(v_val_3840_);
return v_val_3840_;
}
}
case 1:
{
lean_object* v_uri_3841_; lean_object* v_query_3842_; 
v_uri_3841_ = lean_ctor_get(v_x_3837_, 0);
v_query_3842_ = lean_ctor_get(v_uri_3841_, 3);
if (lean_obj_tag(v_query_3842_) == 0)
{
lean_object* v___x_3843_; 
v___x_3843_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_3843_;
}
else
{
lean_object* v_val_3844_; 
v_val_3844_ = lean_ctor_get(v_query_3842_, 0);
lean_inc(v_val_3844_);
return v_val_3844_;
}
}
default: 
{
lean_object* v___x_3845_; 
v___x_3845_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_3845_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query___boxed(lean_object* v_x_3846_){
_start:
{
lean_object* v_res_3847_; 
v_res_3847_ = l_Std_Http_RequestTarget_query(v_x_3846_);
lean_dec(v_x_3846_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authority_x3f(lean_object* v_x_3848_){
_start:
{
switch(lean_obj_tag(v_x_3848_))
{
case 2:
{
lean_object* v_authority_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3856_; 
v_authority_3849_ = lean_ctor_get(v_x_3848_, 0);
v_isSharedCheck_3856_ = !lean_is_exclusive(v_x_3848_);
if (v_isSharedCheck_3856_ == 0)
{
v___x_3851_ = v_x_3848_;
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_authority_3849_);
lean_dec(v_x_3848_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___x_3854_; 
if (v_isShared_3852_ == 0)
{
lean_ctor_set_tag(v___x_3851_, 1);
v___x_3854_ = v___x_3851_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v_authority_3849_);
v___x_3854_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
return v___x_3854_;
}
}
}
case 1:
{
lean_object* v_uri_3857_; lean_object* v_authority_3858_; 
v_uri_3857_ = lean_ctor_get(v_x_3848_, 0);
lean_inc_ref(v_uri_3857_);
lean_dec_ref_known(v_x_3848_, 1);
v_authority_3858_ = lean_ctor_get(v_uri_3857_, 1);
lean_inc(v_authority_3858_);
lean_dec_ref(v_uri_3857_);
return v_authority_3858_;
}
default: 
{
lean_object* v___x_3859_; 
lean_dec(v_x_3848_);
v___x_3859_ = lean_box(0);
return v___x_3859_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instToString___lam__2(lean_object* v___f_3861_, lean_object* v___f_3862_, lean_object* v_x_3863_){
_start:
{
lean_object* v___y_3865_; lean_object* v___y_3866_; lean_object* v___y_3867_; 
switch(lean_obj_tag(v_x_3863_))
{
case 0:
{
lean_object* v_path_3870_; lean_object* v_query_3871_; lean_object* v___y_3873_; lean_object* v_segments_3876_; uint8_t v_absolute_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; size_t v_sz_3880_; size_t v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v_result_3886_; 
lean_dec_ref(v___f_3862_);
v_path_3870_ = lean_ctor_get(v_x_3863_, 0);
lean_inc_ref(v_path_3870_);
v_query_3871_ = lean_ctor_get(v_x_3863_, 1);
lean_inc(v_query_3871_);
lean_dec_ref_known(v_x_3863_, 2);
v_segments_3876_ = lean_ctor_get(v_path_3870_, 0);
lean_inc_ref(v_segments_3876_);
v_absolute_3877_ = lean_ctor_get_uint8(v_path_3870_, sizeof(void*)*1);
lean_dec_ref(v_path_3870_);
v___x_3878_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3879_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3880_ = lean_array_size(v_segments_3876_);
v___x_3881_ = ((size_t)0ULL);
v___x_3882_ = l_unsafeCast___redArg(v_segments_3876_);
lean_dec_ref(v_segments_3876_);
v___x_3883_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3879_, v___f_3861_, v_sz_3880_, v___x_3881_, v___x_3882_);
v___x_3884_ = l_unsafeCast___redArg(v___x_3883_);
lean_dec(v___x_3883_);
v___x_3885_ = lean_array_to_list(v___x_3884_);
v_result_3886_ = l_String_intercalate(v___x_3878_, v___x_3885_);
if (v_absolute_3877_ == 0)
{
v___y_3873_ = v_result_3886_;
goto v___jp_3872_;
}
else
{
lean_object* v___x_3887_; 
v___x_3887_ = lean_string_append(v___x_3878_, v_result_3886_);
lean_dec_ref(v_result_3886_);
v___y_3873_ = v___x_3887_;
goto v___jp_3872_;
}
v___jp_3872_:
{
lean_object* v_queryStr_3874_; lean_object* v___x_3875_; 
v_queryStr_3874_ = l_Std_Http_URI_Query_formatOption(v_query_3871_);
v___x_3875_ = lean_string_append(v___y_3873_, v_queryStr_3874_);
lean_dec_ref(v_queryStr_3874_);
return v___x_3875_;
}
}
case 1:
{
lean_object* v_uri_3888_; lean_object* v_scheme_3889_; lean_object* v_authority_3890_; lean_object* v_path_3891_; lean_object* v_query_3892_; lean_object* v_fragment_3893_; lean_object* v___y_3895_; lean_object* v___y_3896_; lean_object* v___y_3897_; lean_object* v___y_3898_; lean_object* v___y_3906_; lean_object* v___y_3907_; lean_object* v___y_3916_; 
lean_dec_ref(v___f_3861_);
v_uri_3888_ = lean_ctor_get(v_x_3863_, 0);
lean_inc_ref(v_uri_3888_);
lean_dec_ref_known(v_x_3863_, 1);
v_scheme_3889_ = lean_ctor_get(v_uri_3888_, 0);
lean_inc_ref(v_scheme_3889_);
v_authority_3890_ = lean_ctor_get(v_uri_3888_, 1);
lean_inc(v_authority_3890_);
v_path_3891_ = lean_ctor_get(v_uri_3888_, 2);
lean_inc_ref(v_path_3891_);
v_query_3892_ = lean_ctor_get(v_uri_3888_, 3);
lean_inc(v_query_3892_);
v_fragment_3893_ = lean_ctor_get(v_uri_3888_, 4);
lean_inc(v_fragment_3893_);
lean_dec_ref(v_uri_3888_);
if (lean_obj_tag(v_authority_3890_) == 0)
{
lean_object* v___x_3929_; 
v___x_3929_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3916_ = v___x_3929_;
goto v___jp_3915_;
}
else
{
lean_object* v_val_3930_; lean_object* v_userInfo_3931_; lean_object* v_host_3932_; lean_object* v_port_3933_; lean_object* v___x_3934_; lean_object* v___y_3936_; lean_object* v___y_3937_; lean_object* v___y_3938_; lean_object* v___y_3943_; lean_object* v___y_3944_; lean_object* v___y_3953_; 
v_val_3930_ = lean_ctor_get(v_authority_3890_, 0);
lean_inc(v_val_3930_);
lean_dec_ref_known(v_authority_3890_, 1);
v_userInfo_3931_ = lean_ctor_get(v_val_3930_, 0);
lean_inc(v_userInfo_3931_);
v_host_3932_ = lean_ctor_get(v_val_3930_, 1);
lean_inc_ref(v_host_3932_);
v_port_3933_ = lean_ctor_get(v_val_3930_, 2);
lean_inc(v_port_3933_);
lean_dec(v_val_3930_);
v___x_3934_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3931_) == 0)
{
lean_object* v___x_3963_; 
v___x_3963_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3953_ = v___x_3963_;
goto v___jp_3952_;
}
else
{
lean_object* v_val_3964_; lean_object* v_password_3965_; 
v_val_3964_ = lean_ctor_get(v_userInfo_3931_, 0);
lean_inc(v_val_3964_);
lean_dec_ref_known(v_userInfo_3931_, 1);
v_password_3965_ = lean_ctor_get(v_val_3964_, 1);
if (lean_obj_tag(v_password_3965_) == 0)
{
lean_object* v_username_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; 
v_username_3966_ = lean_ctor_get(v_val_3964_, 0);
lean_inc_ref(v_username_3966_);
lean_dec(v_val_3964_);
v___x_3967_ = lean_string_from_utf8_unchecked(v_username_3966_);
v___x_3968_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3969_ = lean_string_append(v___x_3967_, v___x_3968_);
v___y_3953_ = v___x_3969_;
goto v___jp_3952_;
}
else
{
lean_object* v_username_3970_; lean_object* v_val_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; 
lean_inc_ref(v_password_3965_);
v_username_3970_ = lean_ctor_get(v_val_3964_, 0);
lean_inc_ref(v_username_3970_);
lean_dec(v_val_3964_);
v_val_3971_ = lean_ctor_get(v_password_3965_, 0);
lean_inc(v_val_3971_);
lean_dec_ref_known(v_password_3965_, 1);
v___x_3972_ = lean_string_from_utf8_unchecked(v_username_3970_);
v___x_3973_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3974_ = lean_string_append(v___x_3972_, v___x_3973_);
v___x_3975_ = lean_string_from_utf8_unchecked(v_val_3971_);
v___x_3976_ = lean_string_append(v___x_3974_, v___x_3975_);
lean_dec_ref(v___x_3975_);
v___x_3977_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3978_ = lean_string_append(v___x_3976_, v___x_3977_);
v___y_3953_ = v___x_3978_;
goto v___jp_3952_;
}
}
v___jp_3935_:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3939_ = lean_string_append(v___y_3936_, v___y_3937_);
lean_dec_ref(v___y_3937_);
v___x_3940_ = lean_string_append(v___x_3939_, v___y_3938_);
lean_dec_ref(v___y_3938_);
v___x_3941_ = lean_string_append(v___x_3934_, v___x_3940_);
lean_dec_ref(v___x_3940_);
v___y_3916_ = v___x_3941_;
goto v___jp_3915_;
}
v___jp_3942_:
{
switch(lean_obj_tag(v_port_3933_))
{
case 0:
{
lean_object* v___x_3945_; 
v___x_3945_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3936_ = v___y_3943_;
v___y_3937_ = v___y_3944_;
v___y_3938_ = v___x_3945_;
goto v___jp_3935_;
}
case 1:
{
lean_object* v___x_3946_; 
v___x_3946_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3936_ = v___y_3943_;
v___y_3937_ = v___y_3944_;
v___y_3938_ = v___x_3946_;
goto v___jp_3935_;
}
default: 
{
uint16_t v_port_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
v_port_3947_ = lean_ctor_get_uint16(v_port_3933_, 0);
lean_dec_ref_known(v_port_3933_, 0);
v___x_3948_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3949_ = lean_uint16_to_nat(v_port_3947_);
v___x_3950_ = l_Nat_reprFast(v___x_3949_);
v___x_3951_ = lean_string_append(v___x_3948_, v___x_3950_);
lean_dec_ref(v___x_3950_);
v___y_3936_ = v___y_3943_;
v___y_3937_ = v___y_3944_;
v___y_3938_ = v___x_3951_;
goto v___jp_3935_;
}
}
}
v___jp_3952_:
{
switch(lean_obj_tag(v_host_3932_))
{
case 0:
{
lean_object* v_name_3954_; 
v_name_3954_ = lean_ctor_get(v_host_3932_, 0);
lean_inc_ref(v_name_3954_);
lean_dec_ref_known(v_host_3932_, 1);
v___y_3943_ = v___y_3953_;
v___y_3944_ = v_name_3954_;
goto v___jp_3942_;
}
case 1:
{
lean_object* v_ipv4_3955_; lean_object* v___x_3956_; 
v_ipv4_3955_ = lean_ctor_get(v_host_3932_, 0);
lean_inc_ref(v_ipv4_3955_);
lean_dec_ref_known(v_host_3932_, 1);
v___x_3956_ = lean_uv_ntop_v4(v_ipv4_3955_);
lean_dec_ref(v_ipv4_3955_);
v___y_3943_ = v___y_3953_;
v___y_3944_ = v___x_3956_;
goto v___jp_3942_;
}
default: 
{
lean_object* v_ipv6_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; 
v_ipv6_3957_ = lean_ctor_get(v_host_3932_, 0);
lean_inc_ref(v_ipv6_3957_);
lean_dec_ref_known(v_host_3932_, 1);
v___x_3958_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3959_ = lean_uv_ntop_v6(v_ipv6_3957_);
lean_dec_ref(v_ipv6_3957_);
v___x_3960_ = lean_string_append(v___x_3958_, v___x_3959_);
lean_dec_ref(v___x_3959_);
v___x_3961_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3962_ = lean_string_append(v___x_3960_, v___x_3961_);
v___y_3943_ = v___y_3953_;
v___y_3944_ = v___x_3962_;
goto v___jp_3942_;
}
}
}
}
v___jp_3894_:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; 
v___x_3899_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3900_ = lean_string_append(v_scheme_3889_, v___x_3899_);
v___x_3901_ = lean_string_append(v___x_3900_, v___y_3897_);
lean_dec_ref(v___y_3897_);
v___x_3902_ = lean_string_append(v___x_3901_, v___y_3896_);
lean_dec_ref(v___y_3896_);
v___x_3903_ = lean_string_append(v___x_3902_, v___y_3895_);
lean_dec_ref(v___y_3895_);
v___x_3904_ = lean_string_append(v___x_3903_, v___y_3898_);
lean_dec_ref(v___y_3898_);
return v___x_3904_;
}
v___jp_3905_:
{
lean_object* v_queryPart_3908_; 
v_queryPart_3908_ = l_Std_Http_URI_Query_formatOption(v_query_3892_);
if (lean_obj_tag(v_fragment_3893_) == 0)
{
lean_object* v___x_3909_; 
v___x_3909_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3895_ = v_queryPart_3908_;
v___y_3896_ = v___y_3907_;
v___y_3897_ = v___y_3906_;
v___y_3898_ = v___x_3909_;
goto v___jp_3894_;
}
else
{
lean_object* v_val_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; 
v_val_3910_ = lean_ctor_get(v_fragment_3893_, 0);
lean_inc(v_val_3910_);
lean_dec_ref_known(v_fragment_3893_, 1);
v___x_3911_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3912_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3910_);
lean_dec(v_val_3910_);
v___x_3913_ = lean_string_from_utf8_unchecked(v___x_3912_);
v___x_3914_ = lean_string_append(v___x_3911_, v___x_3913_);
lean_dec_ref(v___x_3913_);
v___y_3895_ = v_queryPart_3908_;
v___y_3896_ = v___y_3907_;
v___y_3897_ = v___y_3906_;
v___y_3898_ = v___x_3914_;
goto v___jp_3894_;
}
}
v___jp_3915_:
{
lean_object* v_segments_3917_; uint8_t v_absolute_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; size_t v_sz_3921_; size_t v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v_result_3927_; 
v_segments_3917_ = lean_ctor_get(v_path_3891_, 0);
lean_inc_ref(v_segments_3917_);
v_absolute_3918_ = lean_ctor_get_uint8(v_path_3891_, sizeof(void*)*1);
lean_dec_ref(v_path_3891_);
v___x_3919_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3920_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3921_ = lean_array_size(v_segments_3917_);
v___x_3922_ = ((size_t)0ULL);
v___x_3923_ = l_unsafeCast___redArg(v_segments_3917_);
lean_dec_ref(v_segments_3917_);
v___x_3924_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3920_, v___f_3862_, v_sz_3921_, v___x_3922_, v___x_3923_);
v___x_3925_ = l_unsafeCast___redArg(v___x_3924_);
lean_dec(v___x_3924_);
v___x_3926_ = lean_array_to_list(v___x_3925_);
v_result_3927_ = l_String_intercalate(v___x_3919_, v___x_3926_);
if (v_absolute_3918_ == 0)
{
v___y_3906_ = v___y_3916_;
v___y_3907_ = v_result_3927_;
goto v___jp_3905_;
}
else
{
lean_object* v___x_3928_; 
v___x_3928_ = lean_string_append(v___x_3919_, v_result_3927_);
lean_dec_ref(v_result_3927_);
v___y_3906_ = v___y_3916_;
v___y_3907_ = v___x_3928_;
goto v___jp_3905_;
}
}
}
case 2:
{
lean_object* v_authority_3979_; lean_object* v_userInfo_3980_; lean_object* v_host_3981_; lean_object* v_port_3982_; lean_object* v___y_3984_; lean_object* v___y_3985_; lean_object* v___y_3994_; 
lean_dec_ref(v___f_3862_);
lean_dec_ref(v___f_3861_);
v_authority_3979_ = lean_ctor_get(v_x_3863_, 0);
lean_inc_ref(v_authority_3979_);
lean_dec_ref_known(v_x_3863_, 1);
v_userInfo_3980_ = lean_ctor_get(v_authority_3979_, 0);
lean_inc(v_userInfo_3980_);
v_host_3981_ = lean_ctor_get(v_authority_3979_, 1);
lean_inc_ref(v_host_3981_);
v_port_3982_ = lean_ctor_get(v_authority_3979_, 2);
lean_inc(v_port_3982_);
lean_dec_ref(v_authority_3979_);
if (lean_obj_tag(v_userInfo_3980_) == 0)
{
lean_object* v___x_4004_; 
v___x_4004_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3994_ = v___x_4004_;
goto v___jp_3993_;
}
else
{
lean_object* v_val_4005_; lean_object* v_password_4006_; 
v_val_4005_ = lean_ctor_get(v_userInfo_3980_, 0);
lean_inc(v_val_4005_);
lean_dec_ref_known(v_userInfo_3980_, 1);
v_password_4006_ = lean_ctor_get(v_val_4005_, 1);
if (lean_obj_tag(v_password_4006_) == 0)
{
lean_object* v_username_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; 
v_username_4007_ = lean_ctor_get(v_val_4005_, 0);
lean_inc_ref(v_username_4007_);
lean_dec(v_val_4005_);
v___x_4008_ = lean_string_from_utf8_unchecked(v_username_4007_);
v___x_4009_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4010_ = lean_string_append(v___x_4008_, v___x_4009_);
v___y_3994_ = v___x_4010_;
goto v___jp_3993_;
}
else
{
lean_object* v_username_4011_; lean_object* v_val_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; 
lean_inc_ref(v_password_4006_);
v_username_4011_ = lean_ctor_get(v_val_4005_, 0);
lean_inc_ref(v_username_4011_);
lean_dec(v_val_4005_);
v_val_4012_ = lean_ctor_get(v_password_4006_, 0);
lean_inc(v_val_4012_);
lean_dec_ref_known(v_password_4006_, 1);
v___x_4013_ = lean_string_from_utf8_unchecked(v_username_4011_);
v___x_4014_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4015_ = lean_string_append(v___x_4013_, v___x_4014_);
v___x_4016_ = lean_string_from_utf8_unchecked(v_val_4012_);
v___x_4017_ = lean_string_append(v___x_4015_, v___x_4016_);
lean_dec_ref(v___x_4016_);
v___x_4018_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4019_ = lean_string_append(v___x_4017_, v___x_4018_);
v___y_3994_ = v___x_4019_;
goto v___jp_3993_;
}
}
v___jp_3983_:
{
switch(lean_obj_tag(v_port_3982_))
{
case 0:
{
lean_object* v___x_3986_; 
v___x_3986_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3865_ = v___y_3985_;
v___y_3866_ = v___y_3984_;
v___y_3867_ = v___x_3986_;
goto v___jp_3864_;
}
case 1:
{
lean_object* v___x_3987_; 
v___x_3987_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3865_ = v___y_3985_;
v___y_3866_ = v___y_3984_;
v___y_3867_ = v___x_3987_;
goto v___jp_3864_;
}
default: 
{
uint16_t v_port_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; 
v_port_3988_ = lean_ctor_get_uint16(v_port_3982_, 0);
lean_dec_ref_known(v_port_3982_, 0);
v___x_3989_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3990_ = lean_uint16_to_nat(v_port_3988_);
v___x_3991_ = l_Nat_reprFast(v___x_3990_);
v___x_3992_ = lean_string_append(v___x_3989_, v___x_3991_);
lean_dec_ref(v___x_3991_);
v___y_3865_ = v___y_3985_;
v___y_3866_ = v___y_3984_;
v___y_3867_ = v___x_3992_;
goto v___jp_3864_;
}
}
}
v___jp_3993_:
{
switch(lean_obj_tag(v_host_3981_))
{
case 0:
{
lean_object* v_name_3995_; 
v_name_3995_ = lean_ctor_get(v_host_3981_, 0);
lean_inc_ref(v_name_3995_);
lean_dec_ref_known(v_host_3981_, 1);
v___y_3984_ = v___y_3994_;
v___y_3985_ = v_name_3995_;
goto v___jp_3983_;
}
case 1:
{
lean_object* v_ipv4_3996_; lean_object* v___x_3997_; 
v_ipv4_3996_ = lean_ctor_get(v_host_3981_, 0);
lean_inc_ref(v_ipv4_3996_);
lean_dec_ref_known(v_host_3981_, 1);
v___x_3997_ = lean_uv_ntop_v4(v_ipv4_3996_);
lean_dec_ref(v_ipv4_3996_);
v___y_3984_ = v___y_3994_;
v___y_3985_ = v___x_3997_;
goto v___jp_3983_;
}
default: 
{
lean_object* v_ipv6_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; 
v_ipv6_3998_ = lean_ctor_get(v_host_3981_, 0);
lean_inc_ref(v_ipv6_3998_);
lean_dec_ref_known(v_host_3981_, 1);
v___x_3999_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_4000_ = lean_uv_ntop_v6(v_ipv6_3998_);
lean_dec_ref(v_ipv6_3998_);
v___x_4001_ = lean_string_append(v___x_3999_, v___x_4000_);
lean_dec_ref(v___x_4000_);
v___x_4002_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_4003_ = lean_string_append(v___x_4001_, v___x_4002_);
v___y_3984_ = v___y_3994_;
v___y_3985_ = v___x_4003_;
goto v___jp_3983_;
}
}
}
}
default: 
{
lean_object* v___x_4020_; 
lean_dec_ref(v___f_3862_);
lean_dec_ref(v___f_3861_);
v___x_4020_ = ((lean_object*)(l_Std_Http_RequestTarget_instToString___lam__2___closed__0));
return v___x_4020_;
}
}
v___jp_3864_:
{
lean_object* v___x_3868_; lean_object* v___x_3869_; 
v___x_3868_ = lean_string_append(v___y_3866_, v___y_3865_);
lean_dec_ref(v___y_3865_);
v___x_3869_ = lean_string_append(v___x_3868_, v___y_3867_);
lean_dec_ref(v___y_3867_);
return v___x_3869_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instEncodeV11___lam__2(lean_object* v___f_4024_, lean_object* v___f_4025_, lean_object* v_buffer_4026_, lean_object* v_target_4027_){
_start:
{
lean_object* v___y_4029_; lean_object* v___y_4044_; lean_object* v___y_4045_; lean_object* v___y_4046_; 
switch(lean_obj_tag(v_target_4027_))
{
case 0:
{
lean_object* v_path_4049_; lean_object* v_query_4050_; lean_object* v___y_4052_; lean_object* v_segments_4055_; uint8_t v_absolute_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; size_t v_sz_4059_; size_t v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v_result_4065_; 
lean_dec_ref(v___f_4025_);
v_path_4049_ = lean_ctor_get(v_target_4027_, 0);
lean_inc_ref(v_path_4049_);
v_query_4050_ = lean_ctor_get(v_target_4027_, 1);
lean_inc(v_query_4050_);
lean_dec_ref_known(v_target_4027_, 2);
v_segments_4055_ = lean_ctor_get(v_path_4049_, 0);
lean_inc_ref(v_segments_4055_);
v_absolute_4056_ = lean_ctor_get_uint8(v_path_4049_, sizeof(void*)*1);
lean_dec_ref(v_path_4049_);
v___x_4057_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_4058_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_4059_ = lean_array_size(v_segments_4055_);
v___x_4060_ = ((size_t)0ULL);
v___x_4061_ = l_unsafeCast___redArg(v_segments_4055_);
lean_dec_ref(v_segments_4055_);
v___x_4062_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4058_, v___f_4024_, v_sz_4059_, v___x_4060_, v___x_4061_);
v___x_4063_ = l_unsafeCast___redArg(v___x_4062_);
lean_dec(v___x_4062_);
v___x_4064_ = lean_array_to_list(v___x_4063_);
v_result_4065_ = l_String_intercalate(v___x_4057_, v___x_4064_);
if (v_absolute_4056_ == 0)
{
v___y_4052_ = v_result_4065_;
goto v___jp_4051_;
}
else
{
lean_object* v___x_4066_; 
v___x_4066_ = lean_string_append(v___x_4057_, v_result_4065_);
lean_dec_ref(v_result_4065_);
v___y_4052_ = v___x_4066_;
goto v___jp_4051_;
}
v___jp_4051_:
{
lean_object* v_queryStr_4053_; lean_object* v___x_4054_; 
v_queryStr_4053_ = l_Std_Http_URI_Query_formatOption(v_query_4050_);
v___x_4054_ = lean_string_append(v___y_4052_, v_queryStr_4053_);
lean_dec_ref(v_queryStr_4053_);
v___y_4029_ = v___x_4054_;
goto v___jp_4028_;
}
}
case 1:
{
lean_object* v_uri_4067_; lean_object* v_scheme_4068_; lean_object* v_authority_4069_; lean_object* v_path_4070_; lean_object* v_query_4071_; lean_object* v_fragment_4072_; lean_object* v___y_4074_; lean_object* v___y_4075_; lean_object* v___y_4076_; lean_object* v___y_4077_; lean_object* v___y_4085_; lean_object* v___y_4086_; lean_object* v___y_4095_; 
lean_dec_ref(v___f_4024_);
v_uri_4067_ = lean_ctor_get(v_target_4027_, 0);
lean_inc_ref(v_uri_4067_);
lean_dec_ref_known(v_target_4027_, 1);
v_scheme_4068_ = lean_ctor_get(v_uri_4067_, 0);
lean_inc_ref(v_scheme_4068_);
v_authority_4069_ = lean_ctor_get(v_uri_4067_, 1);
lean_inc(v_authority_4069_);
v_path_4070_ = lean_ctor_get(v_uri_4067_, 2);
lean_inc_ref(v_path_4070_);
v_query_4071_ = lean_ctor_get(v_uri_4067_, 3);
lean_inc(v_query_4071_);
v_fragment_4072_ = lean_ctor_get(v_uri_4067_, 4);
lean_inc(v_fragment_4072_);
lean_dec_ref(v_uri_4067_);
if (lean_obj_tag(v_authority_4069_) == 0)
{
lean_object* v___x_4108_; 
v___x_4108_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4095_ = v___x_4108_;
goto v___jp_4094_;
}
else
{
lean_object* v_val_4109_; lean_object* v_userInfo_4110_; lean_object* v_host_4111_; lean_object* v_port_4112_; lean_object* v___x_4113_; lean_object* v___y_4115_; lean_object* v___y_4116_; lean_object* v___y_4117_; lean_object* v___y_4122_; lean_object* v___y_4123_; lean_object* v___y_4132_; 
v_val_4109_ = lean_ctor_get(v_authority_4069_, 0);
lean_inc(v_val_4109_);
lean_dec_ref_known(v_authority_4069_, 1);
v_userInfo_4110_ = lean_ctor_get(v_val_4109_, 0);
lean_inc(v_userInfo_4110_);
v_host_4111_ = lean_ctor_get(v_val_4109_, 1);
lean_inc_ref(v_host_4111_);
v_port_4112_ = lean_ctor_get(v_val_4109_, 2);
lean_inc(v_port_4112_);
lean_dec(v_val_4109_);
v___x_4113_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_4110_) == 0)
{
lean_object* v___x_4142_; 
v___x_4142_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4132_ = v___x_4142_;
goto v___jp_4131_;
}
else
{
lean_object* v_val_4143_; lean_object* v_password_4144_; 
v_val_4143_ = lean_ctor_get(v_userInfo_4110_, 0);
lean_inc(v_val_4143_);
lean_dec_ref_known(v_userInfo_4110_, 1);
v_password_4144_ = lean_ctor_get(v_val_4143_, 1);
if (lean_obj_tag(v_password_4144_) == 0)
{
lean_object* v_username_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; 
v_username_4145_ = lean_ctor_get(v_val_4143_, 0);
lean_inc_ref(v_username_4145_);
lean_dec(v_val_4143_);
v___x_4146_ = lean_string_from_utf8_unchecked(v_username_4145_);
v___x_4147_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4148_ = lean_string_append(v___x_4146_, v___x_4147_);
v___y_4132_ = v___x_4148_;
goto v___jp_4131_;
}
else
{
lean_object* v_username_4149_; lean_object* v_val_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; 
lean_inc_ref(v_password_4144_);
v_username_4149_ = lean_ctor_get(v_val_4143_, 0);
lean_inc_ref(v_username_4149_);
lean_dec(v_val_4143_);
v_val_4150_ = lean_ctor_get(v_password_4144_, 0);
lean_inc(v_val_4150_);
lean_dec_ref_known(v_password_4144_, 1);
v___x_4151_ = lean_string_from_utf8_unchecked(v_username_4149_);
v___x_4152_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4153_ = lean_string_append(v___x_4151_, v___x_4152_);
v___x_4154_ = lean_string_from_utf8_unchecked(v_val_4150_);
v___x_4155_ = lean_string_append(v___x_4153_, v___x_4154_);
lean_dec_ref(v___x_4154_);
v___x_4156_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4157_ = lean_string_append(v___x_4155_, v___x_4156_);
v___y_4132_ = v___x_4157_;
goto v___jp_4131_;
}
}
v___jp_4114_:
{
lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; 
v___x_4118_ = lean_string_append(v___y_4115_, v___y_4116_);
lean_dec_ref(v___y_4116_);
v___x_4119_ = lean_string_append(v___x_4118_, v___y_4117_);
lean_dec_ref(v___y_4117_);
v___x_4120_ = lean_string_append(v___x_4113_, v___x_4119_);
lean_dec_ref(v___x_4119_);
v___y_4095_ = v___x_4120_;
goto v___jp_4094_;
}
v___jp_4121_:
{
switch(lean_obj_tag(v_port_4112_))
{
case 0:
{
lean_object* v___x_4124_; 
v___x_4124_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4115_ = v___y_4122_;
v___y_4116_ = v___y_4123_;
v___y_4117_ = v___x_4124_;
goto v___jp_4114_;
}
case 1:
{
lean_object* v___x_4125_; 
v___x_4125_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_4115_ = v___y_4122_;
v___y_4116_ = v___y_4123_;
v___y_4117_ = v___x_4125_;
goto v___jp_4114_;
}
default: 
{
uint16_t v_port_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; 
v_port_4126_ = lean_ctor_get_uint16(v_port_4112_, 0);
lean_dec_ref_known(v_port_4112_, 0);
v___x_4127_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4128_ = lean_uint16_to_nat(v_port_4126_);
v___x_4129_ = l_Nat_reprFast(v___x_4128_);
v___x_4130_ = lean_string_append(v___x_4127_, v___x_4129_);
lean_dec_ref(v___x_4129_);
v___y_4115_ = v___y_4122_;
v___y_4116_ = v___y_4123_;
v___y_4117_ = v___x_4130_;
goto v___jp_4114_;
}
}
}
v___jp_4131_:
{
switch(lean_obj_tag(v_host_4111_))
{
case 0:
{
lean_object* v_name_4133_; 
v_name_4133_ = lean_ctor_get(v_host_4111_, 0);
lean_inc_ref(v_name_4133_);
lean_dec_ref_known(v_host_4111_, 1);
v___y_4122_ = v___y_4132_;
v___y_4123_ = v_name_4133_;
goto v___jp_4121_;
}
case 1:
{
lean_object* v_ipv4_4134_; lean_object* v___x_4135_; 
v_ipv4_4134_ = lean_ctor_get(v_host_4111_, 0);
lean_inc_ref(v_ipv4_4134_);
lean_dec_ref_known(v_host_4111_, 1);
v___x_4135_ = lean_uv_ntop_v4(v_ipv4_4134_);
lean_dec_ref(v_ipv4_4134_);
v___y_4122_ = v___y_4132_;
v___y_4123_ = v___x_4135_;
goto v___jp_4121_;
}
default: 
{
lean_object* v_ipv6_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; 
v_ipv6_4136_ = lean_ctor_get(v_host_4111_, 0);
lean_inc_ref(v_ipv6_4136_);
lean_dec_ref_known(v_host_4111_, 1);
v___x_4137_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_4138_ = lean_uv_ntop_v6(v_ipv6_4136_);
lean_dec_ref(v_ipv6_4136_);
v___x_4139_ = lean_string_append(v___x_4137_, v___x_4138_);
lean_dec_ref(v___x_4138_);
v___x_4140_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_4141_ = lean_string_append(v___x_4139_, v___x_4140_);
v___y_4122_ = v___y_4132_;
v___y_4123_ = v___x_4141_;
goto v___jp_4121_;
}
}
}
}
v___jp_4073_:
{
lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; 
v___x_4078_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4079_ = lean_string_append(v_scheme_4068_, v___x_4078_);
v___x_4080_ = lean_string_append(v___x_4079_, v___y_4074_);
lean_dec_ref(v___y_4074_);
v___x_4081_ = lean_string_append(v___x_4080_, v___y_4076_);
lean_dec_ref(v___y_4076_);
v___x_4082_ = lean_string_append(v___x_4081_, v___y_4075_);
lean_dec_ref(v___y_4075_);
v___x_4083_ = lean_string_append(v___x_4082_, v___y_4077_);
lean_dec_ref(v___y_4077_);
v___y_4029_ = v___x_4083_;
goto v___jp_4028_;
}
v___jp_4084_:
{
lean_object* v_queryPart_4087_; 
v_queryPart_4087_ = l_Std_Http_URI_Query_formatOption(v_query_4071_);
if (lean_obj_tag(v_fragment_4072_) == 0)
{
lean_object* v___x_4088_; 
v___x_4088_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4074_ = v___y_4085_;
v___y_4075_ = v_queryPart_4087_;
v___y_4076_ = v___y_4086_;
v___y_4077_ = v___x_4088_;
goto v___jp_4073_;
}
else
{
lean_object* v_val_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; 
v_val_4089_ = lean_ctor_get(v_fragment_4072_, 0);
lean_inc(v_val_4089_);
lean_dec_ref_known(v_fragment_4072_, 1);
v___x_4090_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_4091_ = l_Std_Http_URI_EncodedFragment_encode(v_val_4089_);
lean_dec(v_val_4089_);
v___x_4092_ = lean_string_from_utf8_unchecked(v___x_4091_);
v___x_4093_ = lean_string_append(v___x_4090_, v___x_4092_);
lean_dec_ref(v___x_4092_);
v___y_4074_ = v___y_4085_;
v___y_4075_ = v_queryPart_4087_;
v___y_4076_ = v___y_4086_;
v___y_4077_ = v___x_4093_;
goto v___jp_4073_;
}
}
v___jp_4094_:
{
lean_object* v_segments_4096_; uint8_t v_absolute_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; size_t v_sz_4100_; size_t v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v_result_4106_; 
v_segments_4096_ = lean_ctor_get(v_path_4070_, 0);
lean_inc_ref(v_segments_4096_);
v_absolute_4097_ = lean_ctor_get_uint8(v_path_4070_, sizeof(void*)*1);
lean_dec_ref(v_path_4070_);
v___x_4098_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_4099_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_4100_ = lean_array_size(v_segments_4096_);
v___x_4101_ = ((size_t)0ULL);
v___x_4102_ = l_unsafeCast___redArg(v_segments_4096_);
lean_dec_ref(v_segments_4096_);
v___x_4103_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4099_, v___f_4025_, v_sz_4100_, v___x_4101_, v___x_4102_);
v___x_4104_ = l_unsafeCast___redArg(v___x_4103_);
lean_dec(v___x_4103_);
v___x_4105_ = lean_array_to_list(v___x_4104_);
v_result_4106_ = l_String_intercalate(v___x_4098_, v___x_4105_);
if (v_absolute_4097_ == 0)
{
v___y_4085_ = v___y_4095_;
v___y_4086_ = v_result_4106_;
goto v___jp_4084_;
}
else
{
lean_object* v___x_4107_; 
v___x_4107_ = lean_string_append(v___x_4098_, v_result_4106_);
lean_dec_ref(v_result_4106_);
v___y_4085_ = v___y_4095_;
v___y_4086_ = v___x_4107_;
goto v___jp_4084_;
}
}
}
case 2:
{
lean_object* v_authority_4158_; lean_object* v_userInfo_4159_; lean_object* v_host_4160_; lean_object* v_port_4161_; lean_object* v___y_4163_; lean_object* v___y_4164_; lean_object* v___y_4173_; 
lean_dec_ref(v___f_4025_);
lean_dec_ref(v___f_4024_);
v_authority_4158_ = lean_ctor_get(v_target_4027_, 0);
lean_inc_ref(v_authority_4158_);
lean_dec_ref_known(v_target_4027_, 1);
v_userInfo_4159_ = lean_ctor_get(v_authority_4158_, 0);
lean_inc(v_userInfo_4159_);
v_host_4160_ = lean_ctor_get(v_authority_4158_, 1);
lean_inc_ref(v_host_4160_);
v_port_4161_ = lean_ctor_get(v_authority_4158_, 2);
lean_inc(v_port_4161_);
lean_dec_ref(v_authority_4158_);
if (lean_obj_tag(v_userInfo_4159_) == 0)
{
lean_object* v___x_4183_; 
v___x_4183_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4173_ = v___x_4183_;
goto v___jp_4172_;
}
else
{
lean_object* v_val_4184_; lean_object* v_password_4185_; 
v_val_4184_ = lean_ctor_get(v_userInfo_4159_, 0);
lean_inc(v_val_4184_);
lean_dec_ref_known(v_userInfo_4159_, 1);
v_password_4185_ = lean_ctor_get(v_val_4184_, 1);
if (lean_obj_tag(v_password_4185_) == 0)
{
lean_object* v_username_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; 
v_username_4186_ = lean_ctor_get(v_val_4184_, 0);
lean_inc_ref(v_username_4186_);
lean_dec(v_val_4184_);
v___x_4187_ = lean_string_from_utf8_unchecked(v_username_4186_);
v___x_4188_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4189_ = lean_string_append(v___x_4187_, v___x_4188_);
v___y_4173_ = v___x_4189_;
goto v___jp_4172_;
}
else
{
lean_object* v_username_4190_; lean_object* v_val_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; 
lean_inc_ref(v_password_4185_);
v_username_4190_ = lean_ctor_get(v_val_4184_, 0);
lean_inc_ref(v_username_4190_);
lean_dec(v_val_4184_);
v_val_4191_ = lean_ctor_get(v_password_4185_, 0);
lean_inc(v_val_4191_);
lean_dec_ref_known(v_password_4185_, 1);
v___x_4192_ = lean_string_from_utf8_unchecked(v_username_4190_);
v___x_4193_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4194_ = lean_string_append(v___x_4192_, v___x_4193_);
v___x_4195_ = lean_string_from_utf8_unchecked(v_val_4191_);
v___x_4196_ = lean_string_append(v___x_4194_, v___x_4195_);
lean_dec_ref(v___x_4195_);
v___x_4197_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4198_ = lean_string_append(v___x_4196_, v___x_4197_);
v___y_4173_ = v___x_4198_;
goto v___jp_4172_;
}
}
v___jp_4162_:
{
switch(lean_obj_tag(v_port_4161_))
{
case 0:
{
lean_object* v___x_4165_; 
v___x_4165_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4044_ = v___y_4164_;
v___y_4045_ = v___y_4163_;
v___y_4046_ = v___x_4165_;
goto v___jp_4043_;
}
case 1:
{
lean_object* v___x_4166_; 
v___x_4166_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_4044_ = v___y_4164_;
v___y_4045_ = v___y_4163_;
v___y_4046_ = v___x_4166_;
goto v___jp_4043_;
}
default: 
{
uint16_t v_port_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; 
v_port_4167_ = lean_ctor_get_uint16(v_port_4161_, 0);
lean_dec_ref_known(v_port_4161_, 0);
v___x_4168_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4169_ = lean_uint16_to_nat(v_port_4167_);
v___x_4170_ = l_Nat_reprFast(v___x_4169_);
v___x_4171_ = lean_string_append(v___x_4168_, v___x_4170_);
lean_dec_ref(v___x_4170_);
v___y_4044_ = v___y_4164_;
v___y_4045_ = v___y_4163_;
v___y_4046_ = v___x_4171_;
goto v___jp_4043_;
}
}
}
v___jp_4172_:
{
switch(lean_obj_tag(v_host_4160_))
{
case 0:
{
lean_object* v_name_4174_; 
v_name_4174_ = lean_ctor_get(v_host_4160_, 0);
lean_inc_ref(v_name_4174_);
lean_dec_ref_known(v_host_4160_, 1);
v___y_4163_ = v___y_4173_;
v___y_4164_ = v_name_4174_;
goto v___jp_4162_;
}
case 1:
{
lean_object* v_ipv4_4175_; lean_object* v___x_4176_; 
v_ipv4_4175_ = lean_ctor_get(v_host_4160_, 0);
lean_inc_ref(v_ipv4_4175_);
lean_dec_ref_known(v_host_4160_, 1);
v___x_4176_ = lean_uv_ntop_v4(v_ipv4_4175_);
lean_dec_ref(v_ipv4_4175_);
v___y_4163_ = v___y_4173_;
v___y_4164_ = v___x_4176_;
goto v___jp_4162_;
}
default: 
{
lean_object* v_ipv6_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; 
v_ipv6_4177_ = lean_ctor_get(v_host_4160_, 0);
lean_inc_ref(v_ipv6_4177_);
lean_dec_ref_known(v_host_4160_, 1);
v___x_4178_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_4179_ = lean_uv_ntop_v6(v_ipv6_4177_);
lean_dec_ref(v_ipv6_4177_);
v___x_4180_ = lean_string_append(v___x_4178_, v___x_4179_);
lean_dec_ref(v___x_4179_);
v___x_4181_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_4182_ = lean_string_append(v___x_4180_, v___x_4181_);
v___y_4163_ = v___y_4173_;
v___y_4164_ = v___x_4182_;
goto v___jp_4162_;
}
}
}
}
default: 
{
lean_object* v___x_4199_; 
lean_dec_ref(v___f_4025_);
lean_dec_ref(v___f_4024_);
v___x_4199_ = ((lean_object*)(l_Std_Http_RequestTarget_instToString___lam__2___closed__0));
v___y_4029_ = v___x_4199_;
goto v___jp_4028_;
}
}
v___jp_4028_:
{
lean_object* v_data_4030_; lean_object* v_size_4031_; lean_object* v___x_4033_; uint8_t v_isShared_4034_; uint8_t v_isSharedCheck_4042_; 
v_data_4030_ = lean_ctor_get(v_buffer_4026_, 0);
v_size_4031_ = lean_ctor_get(v_buffer_4026_, 1);
v_isSharedCheck_4042_ = !lean_is_exclusive(v_buffer_4026_);
if (v_isSharedCheck_4042_ == 0)
{
v___x_4033_ = v_buffer_4026_;
v_isShared_4034_ = v_isSharedCheck_4042_;
goto v_resetjp_4032_;
}
else
{
lean_inc(v_size_4031_);
lean_inc(v_data_4030_);
lean_dec(v_buffer_4026_);
v___x_4033_ = lean_box(0);
v_isShared_4034_ = v_isSharedCheck_4042_;
goto v_resetjp_4032_;
}
v_resetjp_4032_:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4040_; 
v___x_4035_ = lean_string_to_utf8(v___y_4029_);
lean_dec_ref(v___y_4029_);
lean_inc_ref(v___x_4035_);
v___x_4036_ = lean_array_push(v_data_4030_, v___x_4035_);
v___x_4037_ = lean_byte_array_size(v___x_4035_);
lean_dec_ref(v___x_4035_);
v___x_4038_ = lean_nat_add(v_size_4031_, v___x_4037_);
lean_dec(v_size_4031_);
if (v_isShared_4034_ == 0)
{
lean_ctor_set(v___x_4033_, 1, v___x_4038_);
lean_ctor_set(v___x_4033_, 0, v___x_4036_);
v___x_4040_ = v___x_4033_;
goto v_reusejp_4039_;
}
else
{
lean_object* v_reuseFailAlloc_4041_; 
v_reuseFailAlloc_4041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4041_, 0, v___x_4036_);
lean_ctor_set(v_reuseFailAlloc_4041_, 1, v___x_4038_);
v___x_4040_ = v_reuseFailAlloc_4041_;
goto v_reusejp_4039_;
}
v_reusejp_4039_:
{
return v___x_4040_;
}
}
}
v___jp_4043_:
{
lean_object* v___x_4047_; lean_object* v___x_4048_; 
v___x_4047_ = lean_string_append(v___y_4045_, v___y_4044_);
lean_dec_ref(v___y_4044_);
v___x_4048_ = lean_string_append(v___x_4047_, v___y_4046_);
lean_dec_ref(v___y_4046_);
v___y_4029_ = v___x_4048_;
goto v___jp_4028_;
}
}
}
lean_object* runtime_initialize_Init_Data_ToString(uint8_t builtin);
lean_object* runtime_initialize_Std_Net(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Internal(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI_Encoding(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_URI_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Encoding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_URI_instInhabitedUserInfo_default = _init_l_Std_Http_URI_instInhabitedUserInfo_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedUserInfo_default);
l_Std_Http_URI_instInhabitedUserInfo = _init_l_Std_Http_URI_instInhabitedUserInfo();
lean_mark_persistent(l_Std_Http_URI_instInhabitedUserInfo);
l_Std_Http_URI_instInhabitedHost_default = _init_l_Std_Http_URI_instInhabitedHost_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedHost_default);
l_Std_Http_URI_instInhabitedHost = _init_l_Std_Http_URI_instInhabitedHost();
lean_mark_persistent(l_Std_Http_URI_instInhabitedHost);
l_Std_Http_URI_instInhabitedPort_default = _init_l_Std_Http_URI_instInhabitedPort_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedPort_default);
l_Std_Http_URI_instInhabitedPort = _init_l_Std_Http_URI_instInhabitedPort();
lean_mark_persistent(l_Std_Http_URI_instInhabitedPort);
l_Std_Http_URI_instInhabitedAuthority_default = _init_l_Std_Http_URI_instInhabitedAuthority_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedAuthority_default);
l_Std_Http_URI_instInhabitedAuthority = _init_l_Std_Http_URI_instInhabitedAuthority();
lean_mark_persistent(l_Std_Http_URI_instInhabitedAuthority);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_URI_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_ToString(uint8_t builtin);
lean_object* initialize_Std_Net(uint8_t builtin);
lean_object* initialize_Std_Http_Internal(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI_Encoding(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_URI_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI_Encoding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_URI_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

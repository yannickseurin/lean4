// Lean compiler output
// Module: Std.Http.Data.Request
// Imports: public import Std.Http.Data.Extensions public import Std.Http.Data.Method public import Std.Http.Data.Version public import Std.Http.Data.Headers public import Std.Http.Data.URI
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
lean_object* lean_string_from_utf8_unchecked(lean_object*);
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
lean_object* l_Std_Http_Headers_fold___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* l_Std_Http_URI_Query_formatOption(lean_object*);
lean_object* l_Std_Http_URI_EncodedFragment_encode(lean_object*);
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
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Http_Extensions_empty;
extern lean_object* l_Std_Http_Headers_empty;
lean_object* l_Std_Http_instReprMethod_repr(uint8_t, lean_object*);
lean_object* l_Std_Http_instReprVersion_repr(uint8_t, lean_object*);
lean_object* l_Std_Http_instReprRequestTarget_repr(lean_object*, lean_object*);
lean_object* l_Std_Http_instReprHeaders_repr___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Http_URI_Parser_parseRequestTarget(lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Http_instInhabitedRequestTarget_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Std_Http_Header_Name_ofString_x21(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
lean_object* l_Std_Http_Extensions_compareName___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Header_Name_ofString_x3f(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x3f(lean_object*);
static lean_once_cell_t l_Std_Http_Request_instInhabitedHead_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instInhabitedHead_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_instInhabitedHead_default;
LEAN_EXPORT lean_object* l_Std_Http_Request_instInhabitedHead;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Request_instReprHead_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "method"};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__3_value),((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_Request_instReprHead_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Http_Request_instReprHead_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__12;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "uri"};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__13 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__14 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__14_value;
static lean_once_cell_t l_Std_Http_Request_instReprHead_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__15;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "headers"};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__16 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__16_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__16_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__17 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__17_value;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__18 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__18_value;
static lean_once_cell_t l_Std_Http_Request_instReprHead_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__19;
static lean_once_cell_t l_Std_Http_Request_instReprHead_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__20;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__21 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__21_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__18_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__22 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__22_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Request_instReprHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_instReprHead_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instReprHead___closed__0 = (const lean_object*)&l_Std_Http_Request_instReprHead___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Request_instReprHead = (const lean_object*)&l_Std_Http_Request_instReprHead___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__0 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__0_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_Pattern_Char_instToForwardSearcherCharDefaultForwardSearcherForallBoolBeq___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__1 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__1_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__2 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__2_value;
static lean_once_cell_t l_Std_Http_Request_instToStringHead___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__3;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__4 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__4_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__2___boxed__const__1;
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__2(lean_object*);
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\r\n"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__0 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__0_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__1 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__1_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__2 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__2_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__3 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__3_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__4 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__4_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__5 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__5_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__6 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__6_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__7 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__7_value;
static const lean_ctor_object l_Std_Http_Request_instToStringHead___lam__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__1_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__2_value)}};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__8 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__8_value;
static const lean_ctor_object l_Std_Http_Request_instToStringHead___lam__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__8_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__3_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__4_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__5_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__6_value)}};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__9 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__9_value;
static const lean_ctor_object l_Std_Http_Request_instToStringHead___lam__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__9_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__7_value)}};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__10 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__10_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/1.0"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__11 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__11_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/1.1"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__12 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__12_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/2.0"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__13 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__13_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/3.0"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__14 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__14_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__15 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__15_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__16 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__16_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__17 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__17_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__18 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__18_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__19 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__19_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__20 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__20_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "//"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__21 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__21_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__22 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__22_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__23 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__23_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ACL"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__24 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__24_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "BASELINE-CONTROL"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__25 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__25_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "BIND"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__26 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__26_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CHECKIN"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__27 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__27_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "CHECKOUT"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__28 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__28_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CONNECT"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__29 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__29_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COPY"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__30 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__30_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "DELETE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__31 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__31_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__32 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__32_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HEAD"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__33 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__33_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "LABEL"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__34 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__34_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LINK"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__35 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__35_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LOCK"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__36 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__36_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "MERGE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__37 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__37_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MKACTIVITY"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__38 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__38_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MKCALENDAR"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__39 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__39_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "MKCOL"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__40 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__40_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "MKREDIRECTREF"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__41 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__41_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MKWORKSPACE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__42 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__42_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "MOVE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__43 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__43_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "OPTIONS"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__44 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__44_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ORDERPATCH"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__45 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__45_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PATCH"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__46 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__46_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__47 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__47_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PRI"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__48 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__48_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "PROPFIND"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__49 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__49_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "PROPPATCH"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__50 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__50_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PUT"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__51 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__51_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "QUERY"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__52 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__52_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "REBIND"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__53 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__53_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "REPORT"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__54 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__54_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SEARCH"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__55 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__55_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "TRACE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__56 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__56_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNBIND"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__57 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__57_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UNCHECKOUT"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__58 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__58_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNLINK"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__59 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__59_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNLOCK"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__60 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__60_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UPDATE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__61 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__61_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "UPDATEREDIRECTREF"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__62 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__62_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__4___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "VERSION-CONTROL"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__4___closed__63 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__4___closed__63_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Request_instToStringHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_instToStringHead___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___closed__0 = (const lean_object*)&l_Std_Http_Request_instToStringHead___closed__0_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_instToStringHead___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___closed__1 = (const lean_object*)&l_Std_Http_Request_instToStringHead___closed__1_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_instToStringHead___lam__4, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Std_Http_Request_instToStringHead___closed__1_value),((lean_object*)&l_Std_Http_Request_instToStringHead___closed__0_value),((lean_object*)&l_Std_Http_Request_instToStringHead___closed__0_value)} };
static const lean_object* l_Std_Http_Request_instToStringHead___closed__2 = (const lean_object*)&l_Std_Http_Request_instToStringHead___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Http_Request_instToStringHead = (const lean_object*)&l_Std_Http_Request_instToStringHead___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__3___closed__0;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__3___closed__1;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Std_Http_Request_instEncodeV11Head___lam__3___closed__2;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__3___closed__3;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__3___closed__4;
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Request_instEncodeV11Head___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_instEncodeV11Head___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instEncodeV11Head___closed__0 = (const lean_object*)&l_Std_Http_Request_instEncodeV11Head___closed__0_value;
static const lean_closure_object l_Std_Http_Request_instEncodeV11Head___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_instEncodeV11Head___lam__3, .m_arity = 5, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Std_Http_Request_instEncodeV11Head___closed__0_value),((lean_object*)&l_Std_Http_Request_instToStringHead___closed__0_value),((lean_object*)&l_Std_Http_Request_instToStringHead___closed__0_value)} };
static const lean_object* l_Std_Http_Request_instEncodeV11Head___closed__1 = (const lean_object*)&l_Std_Http_Request_instEncodeV11Head___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_Request_instEncodeV11Head = (const lean_object*)&l_Std_Http_Request_instEncodeV11Head___closed__1_value;
static lean_once_cell_t l_Std_Http_Request_new___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_new___closed__0;
static lean_once_cell_t l_Std_Http_Request_new___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_new___closed__1;
LEAN_EXPORT lean_object* l_Std_Http_Request_new;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_method(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_method___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_version(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_version___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_Request_Builder_uri_x21_spec__0(lean_object*);
static const lean_string_object l_Std_Http_Request_Builder_uri_x21___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Request_Builder_uri_x21___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Request_Builder_uri_x21___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri_x21___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Request_Builder_uri_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*9 + 0, .m_other = 9, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(253) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(256) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(128) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(100) << 1) | 1))}};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___closed__0 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__0_value;
static const lean_closure_object l_Std_Http_Request_Builder_uri_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_Builder_uri_x21___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__0_value)} };
static const lean_object* l_Std_Http_Request_Builder_uri_x21___closed__1 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__1_value;
static const lean_string_object l_Std_Http_Request_Builder_uri_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Std.Http.Data.URI"};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___closed__2 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__2_value;
static const lean_string_object l_Std_Http_Request_Builder_uri_x21___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.Http.RequestTarget.parse!"};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___closed__3 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__3_value;
static const lean_string_object l_Std_Http_Request_Builder_uri_x21___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid request target"};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___closed__4 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__4_value;
static lean_once_cell_t l_Std_Http_Request_Builder_uri_x21___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_Builder_uri_x21___closed__5;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_headers(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_headerOpt(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Request_Builder_extension___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Extensions_compareName___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_Builder_extension___redArg___closed__0 = (const lean_object*)&l_Std_Http_Request_Builder_extension___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Request_get___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_get___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_get(lean_object*);
static lean_once_cell_t l_Std_Http_Request_post___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_post___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_post(lean_object*);
static lean_once_cell_t l_Std_Http_Request_put___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_put___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_put(lean_object*);
static lean_once_cell_t l_Std_Http_Request_delete___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_delete___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_delete(lean_object*);
static lean_once_cell_t l_Std_Http_Request_patch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_patch___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_patch(lean_object*);
static lean_once_cell_t l_Std_Http_Request_head___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_head___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_head(lean_object*);
static lean_once_cell_t l_Std_Http_Request_options___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_options___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_options(lean_object*);
static lean_once_cell_t l_Std_Http_Request_connect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_connect___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_connect(lean_object*);
static lean_once_cell_t l_Std_Http_Request_trace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_trace___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_trace(lean_object*);
static lean_object* _init_l_Std_Http_Request_instInhabitedHead_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; uint8_t v___x_3_; uint8_t v___x_4_; lean_object* v___x_5_; 
v___x_1_ = l_Std_Http_Headers_empty;
v___x_2_ = lean_box(3);
v___x_3_ = 0;
v___x_4_ = 0;
v___x_5_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_5_, 0, v___x_2_);
lean_ctor_set(v___x_5_, 1, v___x_1_);
lean_ctor_set_uint8(v___x_5_, sizeof(void*)*2, v___x_4_);
lean_ctor_set_uint8(v___x_5_, sizeof(void*)*2 + 1, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Std_Http_Request_instInhabitedHead_default(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Std_Http_Request_instInhabitedHead_default___closed__0, &l_Std_Http_Request_instInhabitedHead_default___closed__0_once, _init_l_Std_Http_Request_instInhabitedHead_default___closed__0);
return v___x_6_;
}
}
static lean_object* _init_l_Std_Http_Request_instInhabitedHead(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Std_Http_Request_instInhabitedHead_default;
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Request_instReprHead_repr_spec__0(lean_object* v_a_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_nat_to_int(v_a_8_);
return v___x_9_;
}
}
static lean_object* _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = lean_unsigned_to_nat(10u);
v___x_24_ = lean_nat_to_int(v___x_23_);
return v___x_24_;
}
}
static lean_object* _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_unsigned_to_nat(11u);
v___x_32_ = lean_nat_to_int(v___x_31_);
return v___x_32_;
}
}
static lean_object* _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(7u);
v___x_37_ = lean_nat_to_int(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__0));
v___x_43_ = lean_string_length(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_obj_once(&l_Std_Http_Request_instReprHead_repr___redArg___closed__19, &l_Std_Http_Request_instReprHead_repr___redArg___closed__19_once, _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__19);
v___x_45_ = lean_nat_to_int(v___x_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr___redArg(lean_object* v_x_50_){
_start:
{
uint8_t v_method_51_; uint8_t v_version_52_; lean_object* v_uri_53_; lean_object* v_headers_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; uint8_t v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v_method_51_ = lean_ctor_get_uint8(v_x_50_, sizeof(void*)*2);
v_version_52_ = lean_ctor_get_uint8(v_x_50_, sizeof(void*)*2 + 1);
v_uri_53_ = lean_ctor_get(v_x_50_, 0);
lean_inc(v_uri_53_);
v_headers_54_ = lean_ctor_get(v_x_50_, 1);
lean_inc_ref(v_headers_54_);
lean_dec_ref(v_x_50_);
v___x_55_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__5));
v___x_56_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__6));
v___x_57_ = lean_obj_once(&l_Std_Http_Request_instReprHead_repr___redArg___closed__7, &l_Std_Http_Request_instReprHead_repr___redArg___closed__7_once, _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__7);
v___x_58_ = lean_unsigned_to_nat(0u);
v___x_59_ = l_Std_Http_instReprMethod_repr(v_method_51_, v___x_58_);
v___x_60_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_57_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = 0;
v___x_62_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set_uint8(v___x_62_, sizeof(void*)*1, v___x_61_);
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_56_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__9));
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_63_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
v___x_66_ = lean_box(1);
v___x_67_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_65_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__11));
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_67_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_55_);
v___x_71_ = lean_obj_once(&l_Std_Http_Request_instReprHead_repr___redArg___closed__12, &l_Std_Http_Request_instReprHead_repr___redArg___closed__12_once, _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__12);
v___x_72_ = l_Std_Http_instReprVersion_repr(v_version_52_, v___x_58_);
v___x_73_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_71_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v___x_74_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set_uint8(v___x_74_, sizeof(void*)*1, v___x_61_);
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_70_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v___x_64_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_66_);
v___x_78_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__14));
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_77_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_55_);
v___x_81_ = lean_obj_once(&l_Std_Http_Request_instReprHead_repr___redArg___closed__15, &l_Std_Http_Request_instReprHead_repr___redArg___closed__15_once, _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__15);
v___x_82_ = l_Std_Http_instReprRequestTarget_repr(v_uri_53_, v___x_58_);
v___x_83_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_81_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_61_);
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_80_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_64_);
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_66_);
v___x_88_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__17));
v___x_89_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set(v___x_90_, 1, v___x_55_);
v___x_91_ = l_Std_Http_instReprHeaders_repr___redArg(v_headers_54_);
v___x_92_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_71_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set_uint8(v___x_93_, sizeof(void*)*1, v___x_61_);
v___x_94_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_90_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = lean_obj_once(&l_Std_Http_Request_instReprHead_repr___redArg___closed__20, &l_Std_Http_Request_instReprHead_repr___redArg___closed__20_once, _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__20);
v___x_96_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__21));
v___x_97_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___x_94_);
v___x_98_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__22));
v___x_99_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_97_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_95_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set_uint8(v___x_101_, sizeof(void*)*1, v___x_61_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr(lean_object* v_x_102_, lean_object* v_prec_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Std_Http_Request_instReprHead_repr___redArg(v_x_102_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr___boxed(lean_object* v_x_105_, lean_object* v_prec_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Std_Http_Request_instReprHead_repr(v_x_105_, v_prec_106_);
lean_dec(v_prec_106_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest_default___redArg(lean_object* v_inst_110_){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = l_Std_Http_Request_instInhabitedHead_default;
v___x_112_ = l_Std_Http_Extensions_empty;
v___x_113_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set(v___x_113_, 1, v_inst_110_);
lean_ctor_set(v___x_113_, 2, v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest_default(lean_object* v_t_114_, lean_object* v_inst_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = l_Std_Http_instInhabitedRequest_default___redArg(v_inst_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest___redArg(lean_object* v_inst_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Std_Http_instInhabitedRequest_default___redArg(v_inst_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest(lean_object* v_a_119_, lean_object* v_inst_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Std_Http_instInhabitedRequest_default___redArg(v_inst_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__0(lean_object* v_x_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_string_from_utf8_unchecked(v_x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__1(lean_object* v___x_124_, lean_object* v___x_125_, lean_object* v___x_126_, lean_object* v_fst_127_, lean_object* v___x_128_, uint32_t v___x_129_, lean_object* v___x_130_, lean_object* v_it_131_, lean_object* v_acc_132_, lean_object* v_hP_133_, lean_object* v_recur_134_){
_start:
{
lean_object* v_it_136_; lean_object* v_out_137_; lean_object* v___y_153_; lean_object* v___y_154_; uint32_t v___y_155_; uint8_t v___y_156_; lean_object* v_it_162_; lean_object* v_startInclusive_163_; lean_object* v_endExclusive_164_; 
if (lean_obj_tag(v_it_131_) == 0)
{
lean_object* v_currPos_171_; lean_object* v_searcher_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_194_; 
v_currPos_171_ = lean_ctor_get(v_it_131_, 0);
v_searcher_172_ = lean_ctor_get(v_it_131_, 1);
v_isSharedCheck_194_ = !lean_is_exclusive(v_it_131_);
if (v_isSharedCheck_194_ == 0)
{
v___x_174_ = v_it_131_;
v_isShared_175_ = v_isSharedCheck_194_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_searcher_172_);
lean_inc(v_currPos_171_);
lean_dec(v_it_131_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_194_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
uint8_t v_decide_176_; 
v_decide_176_ = lean_nat_dec_eq(v_searcher_172_, v___x_128_);
if (v_decide_176_ == 0)
{
uint32_t v___x_177_; uint8_t v___x_178_; 
lean_dec(v___x_128_);
v___x_177_ = lean_string_utf8_get_fast(v_fst_127_, v_searcher_172_);
v___x_178_ = lean_uint32_dec_eq(v___x_177_, v___x_129_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_179_ = lean_string_utf8_next_fast(v_fst_127_, v_searcher_172_);
lean_dec(v_searcher_172_);
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 1, v___x_179_);
v___x_181_ = v___x_174_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_currPos_171_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v___x_179_);
v___x_181_ = v_reuseFailAlloc_183_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
lean_object* v___x_182_; 
v___x_182_ = lean_apply_4(v_recur_134_, v___x_181_, v_acc_132_, lean_box(0), lean_box(0));
return v___x_182_;
}
}
else
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v_slice_187_; lean_object* v_nextIt_189_; 
v___x_184_ = lean_string_utf8_next_fast(v_fst_127_, v_searcher_172_);
v___x_185_ = lean_nat_sub(v___x_184_, v_searcher_172_);
v___x_186_ = lean_nat_add(v_searcher_172_, v___x_185_);
lean_dec(v___x_185_);
v_slice_187_ = l_String_Slice_subslice_x21(v___x_130_, v_currPos_171_, v_searcher_172_);
lean_inc(v___x_186_);
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 1, v___x_186_);
lean_ctor_set(v___x_174_, 0, v___x_186_);
v_nextIt_189_ = v___x_174_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_186_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v___x_186_);
v_nextIt_189_ = v_reuseFailAlloc_192_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v_startInclusive_190_; lean_object* v_endExclusive_191_; 
v_startInclusive_190_ = lean_ctor_get(v_slice_187_, 0);
lean_inc(v_startInclusive_190_);
v_endExclusive_191_ = lean_ctor_get(v_slice_187_, 1);
lean_inc(v_endExclusive_191_);
lean_dec_ref(v_slice_187_);
v_it_162_ = v_nextIt_189_;
v_startInclusive_163_ = v_startInclusive_190_;
v_endExclusive_164_ = v_endExclusive_191_;
goto v___jp_161_;
}
}
}
else
{
lean_object* v___x_193_; 
lean_del_object(v___x_174_);
lean_dec(v_searcher_172_);
v___x_193_ = lean_box(1);
v_it_162_ = v___x_193_;
v_startInclusive_163_ = v_currPos_171_;
v_endExclusive_164_ = v___x_128_;
goto v___jp_161_;
}
}
}
else
{
lean_dec_ref(v_recur_134_);
lean_dec(v___x_128_);
return v_acc_132_;
}
v___jp_135_:
{
if (lean_obj_tag(v_acc_132_) == 0)
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_138_, 0, v_out_137_);
v___x_139_ = lean_apply_4(v_recur_134_, v_it_136_, v___x_138_, lean_box(0), lean_box(0));
return v___x_139_;
}
else
{
lean_object* v_val_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_151_; 
v_val_140_ = lean_ctor_get(v_acc_132_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v_acc_132_);
if (v_isSharedCheck_151_ == 0)
{
v___x_142_ = v_acc_132_;
v_isShared_143_ = v_isSharedCheck_151_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_val_140_);
lean_dec(v_acc_132_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_151_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_148_; 
v___x_144_ = lean_string_utf8_extract_fast(v___x_124_, v___x_125_, v___x_126_);
v___x_145_ = lean_string_append(v_val_140_, v___x_144_);
lean_dec_ref(v___x_144_);
v___x_146_ = lean_string_append(v___x_145_, v_out_137_);
lean_dec_ref(v_out_137_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_146_);
v___x_148_ = v___x_142_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_146_);
v___x_148_ = v_reuseFailAlloc_150_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_149_; 
v___x_149_ = lean_apply_4(v_recur_134_, v_it_136_, v___x_148_, lean_box(0), lean_box(0));
return v___x_149_;
}
}
}
}
v___jp_152_:
{
if (v___y_156_ == 0)
{
lean_object* v___x_157_; 
v___x_157_ = lean_string_utf8_set(v___y_154_, v___x_125_, v___y_155_);
v_it_136_ = v___y_153_;
v_out_137_ = v___x_157_;
goto v___jp_135_;
}
else
{
uint32_t v___x_158_; uint32_t v___x_159_; lean_object* v___x_160_; 
v___x_158_ = 4294967264;
v___x_159_ = lean_uint32_add(v___y_155_, v___x_158_);
v___x_160_ = lean_string_utf8_set(v___y_154_, v___x_125_, v___x_159_);
v_it_136_ = v___y_153_;
v_out_137_ = v___x_160_;
goto v___jp_135_;
}
}
v___jp_161_:
{
lean_object* v___x_165_; uint32_t v___x_166_; uint32_t v___x_167_; uint8_t v___x_168_; 
v___x_165_ = lean_string_utf8_extract_fast(v_fst_127_, v_startInclusive_163_, v_endExclusive_164_);
lean_dec(v_endExclusive_164_);
lean_dec(v_startInclusive_163_);
v___x_166_ = lean_string_utf8_get(v___x_165_, v___x_125_);
v___x_167_ = 97;
v___x_168_ = lean_uint32_dec_le(v___x_167_, v___x_166_);
if (v___x_168_ == 0)
{
v___y_153_ = v_it_162_;
v___y_154_ = v___x_165_;
v___y_155_ = v___x_166_;
v___y_156_ = v___x_168_;
goto v___jp_152_;
}
else
{
uint32_t v___x_169_; uint8_t v___x_170_; 
v___x_169_ = 122;
v___x_170_ = lean_uint32_dec_le(v___x_166_, v___x_169_);
v___y_153_ = v_it_162_;
v___y_154_ = v___x_165_;
v___y_155_ = v___x_166_;
v___y_156_ = v___x_170_;
goto v___jp_152_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__1___boxed(lean_object* v___x_195_, lean_object* v___x_196_, lean_object* v___x_197_, lean_object* v_fst_198_, lean_object* v___x_199_, lean_object* v___x_200_, lean_object* v___x_201_, lean_object* v_it_202_, lean_object* v_acc_203_, lean_object* v_hP_204_, lean_object* v_recur_205_){
_start:
{
uint32_t v___x_1573__boxed_206_; lean_object* v_res_207_; 
v___x_1573__boxed_206_ = lean_unbox_uint32(v___x_200_);
lean_dec(v___x_200_);
v_res_207_ = l_Std_Http_Request_instToStringHead___lam__1(v___x_195_, v___x_196_, v___x_197_, v_fst_198_, v___x_199_, v___x_1573__boxed_206_, v___x_201_, v_it_202_, v_acc_203_, v_hP_204_, v_recur_205_);
lean_dec_ref(v___x_201_);
lean_dec_ref(v_fst_198_);
lean_dec(v___x_197_);
lean_dec(v___x_196_);
lean_dec_ref(v___x_195_);
return v_res_207_;
}
}
static lean_object* _init_l_Std_Http_Request_instToStringHead___lam__2___closed__3(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__2));
v___x_212_ = lean_string_utf8_byte_size(v___x_211_);
return v___x_212_;
}
}
static lean_object* _init_l_Std_Http_Request_instToStringHead___lam__2___boxed__const__1(void){
_start:
{
uint32_t v___x_214_; lean_object* v___x_215_; 
v___x_214_ = 45;
v___x_215_ = lean_box_uint32(v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__2(lean_object* v_x_216_){
_start:
{
lean_object* v_fst_217_; lean_object* v_snd_218_; lean_object* v___y_220_; lean_object* v___f_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v_it_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___f_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v_fst_217_ = lean_ctor_get(v_x_216_, 0);
lean_inc_n(v_fst_217_, 2);
v_snd_218_ = lean_ctor_get(v_x_216_, 1);
lean_inc(v_snd_218_);
lean_dec_ref(v_x_216_);
v___f_224_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__1));
v___x_225_ = lean_unsigned_to_nat(0u);
v___x_226_ = lean_string_utf8_byte_size(v_fst_217_);
v___x_227_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_227_, 0, v_fst_217_);
lean_ctor_set(v___x_227_, 1, v___x_225_);
lean_ctor_set(v___x_227_, 2, v___x_226_);
lean_inc_ref(v___x_227_);
v_it_228_ = l_String_Slice_splitToSubslice___redArg(v___x_227_, v___f_224_);
v___x_229_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__2));
v___x_230_ = lean_obj_once(&l_Std_Http_Request_instToStringHead___lam__2___closed__3, &l_Std_Http_Request_instToStringHead___lam__2___closed__3_once, _init_l_Std_Http_Request_instToStringHead___lam__2___closed__3);
v___x_231_ = l_Std_Http_Request_instToStringHead___lam__2___boxed__const__1;
v___f_232_ = lean_alloc_closure((void*)(l_Std_Http_Request_instToStringHead___lam__1___boxed), 11, 7);
lean_closure_set(v___f_232_, 0, v___x_229_);
lean_closure_set(v___f_232_, 1, v___x_225_);
lean_closure_set(v___f_232_, 2, v___x_230_);
lean_closure_set(v___f_232_, 3, v_fst_217_);
lean_closure_set(v___f_232_, 4, v___x_226_);
lean_closure_set(v___f_232_, 5, v___x_231_);
lean_closure_set(v___f_232_, 6, v___x_227_);
v___x_233_ = lean_box(0);
v___x_234_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_232_, v_it_228_, v___x_233_, lean_box(0));
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v___x_235_; 
v___x_235_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_220_ = v___x_235_;
goto v___jp_219_;
}
else
{
lean_object* v_val_236_; 
v_val_236_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_val_236_);
lean_dec_ref_known(v___x_234_, 1);
v___y_220_ = v_val_236_;
goto v___jp_219_;
}
v___jp_219_:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__0));
v___x_222_ = lean_string_append(v___y_220_, v___x_221_);
v___x_223_ = lean_string_append(v___x_222_, v_snd_218_);
lean_dec(v_snd_218_);
return v___x_223_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__4(lean_object* v___f_310_, lean_object* v___f_311_, lean_object* v___f_312_, lean_object* v_req_313_){
_start:
{
uint8_t v_method_314_; uint8_t v_version_315_; lean_object* v_uri_316_; lean_object* v_headers_317_; lean_object* v___y_319_; lean_object* v___y_320_; lean_object* v___y_336_; lean_object* v___y_337_; lean_object* v___y_338_; lean_object* v___y_346_; lean_object* v___y_347_; lean_object* v___y_348_; lean_object* v___y_349_; lean_object* v___y_353_; lean_object* v___y_354_; lean_object* v___y_355_; lean_object* v___y_356_; lean_object* v___y_357_; lean_object* v___y_358_; lean_object* v___y_359_; lean_object* v___y_367_; lean_object* v___y_368_; lean_object* v___y_369_; lean_object* v___y_370_; lean_object* v___y_371_; lean_object* v___y_372_; lean_object* v___y_373_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; lean_object* v___y_385_; lean_object* v___y_386_; lean_object* v___y_387_; lean_object* v___y_388_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_406_; lean_object* v___y_407_; lean_object* v___y_408_; lean_object* v___y_409_; lean_object* v___y_410_; lean_object* v___y_411_; lean_object* v___y_416_; lean_object* v___y_417_; lean_object* v___y_418_; lean_object* v_port_419_; lean_object* v___y_420_; lean_object* v___y_421_; lean_object* v___y_422_; lean_object* v___y_423_; lean_object* v___y_424_; lean_object* v___y_425_; lean_object* v___y_434_; lean_object* v___y_435_; lean_object* v___y_436_; lean_object* v___y_437_; lean_object* v___y_438_; lean_object* v_host_439_; lean_object* v_port_440_; lean_object* v___y_441_; lean_object* v___y_442_; lean_object* v___y_443_; lean_object* v___y_454_; lean_object* v___y_455_; lean_object* v___y_456_; lean_object* v___y_457_; lean_object* v___y_458_; lean_object* v___y_462_; lean_object* v___y_463_; lean_object* v_port_464_; lean_object* v___y_465_; lean_object* v___y_466_; lean_object* v___y_475_; lean_object* v___y_476_; lean_object* v_host_477_; lean_object* v_port_478_; lean_object* v___y_479_; lean_object* v___y_490_; 
v_method_314_ = lean_ctor_get_uint8(v_req_313_, sizeof(void*)*2);
v_version_315_ = lean_ctor_get_uint8(v_req_313_, sizeof(void*)*2 + 1);
v_uri_316_ = lean_ctor_get(v_req_313_, 0);
lean_inc(v_uri_316_);
v_headers_317_ = lean_ctor_get(v_req_313_, 1);
lean_inc_ref(v_headers_317_);
lean_dec_ref(v_req_313_);
switch(v_method_314_)
{
case 0:
{
lean_object* v___x_564_; 
v___x_564_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__24));
v___y_490_ = v___x_564_;
goto v___jp_489_;
}
case 1:
{
lean_object* v___x_565_; 
v___x_565_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__25));
v___y_490_ = v___x_565_;
goto v___jp_489_;
}
case 2:
{
lean_object* v___x_566_; 
v___x_566_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__26));
v___y_490_ = v___x_566_;
goto v___jp_489_;
}
case 3:
{
lean_object* v___x_567_; 
v___x_567_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__27));
v___y_490_ = v___x_567_;
goto v___jp_489_;
}
case 4:
{
lean_object* v___x_568_; 
v___x_568_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__28));
v___y_490_ = v___x_568_;
goto v___jp_489_;
}
case 5:
{
lean_object* v___x_569_; 
v___x_569_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__29));
v___y_490_ = v___x_569_;
goto v___jp_489_;
}
case 6:
{
lean_object* v___x_570_; 
v___x_570_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__30));
v___y_490_ = v___x_570_;
goto v___jp_489_;
}
case 7:
{
lean_object* v___x_571_; 
v___x_571_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__31));
v___y_490_ = v___x_571_;
goto v___jp_489_;
}
case 8:
{
lean_object* v___x_572_; 
v___x_572_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__32));
v___y_490_ = v___x_572_;
goto v___jp_489_;
}
case 9:
{
lean_object* v___x_573_; 
v___x_573_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__33));
v___y_490_ = v___x_573_;
goto v___jp_489_;
}
case 10:
{
lean_object* v___x_574_; 
v___x_574_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__34));
v___y_490_ = v___x_574_;
goto v___jp_489_;
}
case 11:
{
lean_object* v___x_575_; 
v___x_575_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__35));
v___y_490_ = v___x_575_;
goto v___jp_489_;
}
case 12:
{
lean_object* v___x_576_; 
v___x_576_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__36));
v___y_490_ = v___x_576_;
goto v___jp_489_;
}
case 13:
{
lean_object* v___x_577_; 
v___x_577_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__37));
v___y_490_ = v___x_577_;
goto v___jp_489_;
}
case 14:
{
lean_object* v___x_578_; 
v___x_578_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__38));
v___y_490_ = v___x_578_;
goto v___jp_489_;
}
case 15:
{
lean_object* v___x_579_; 
v___x_579_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__39));
v___y_490_ = v___x_579_;
goto v___jp_489_;
}
case 16:
{
lean_object* v___x_580_; 
v___x_580_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__40));
v___y_490_ = v___x_580_;
goto v___jp_489_;
}
case 17:
{
lean_object* v___x_581_; 
v___x_581_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__41));
v___y_490_ = v___x_581_;
goto v___jp_489_;
}
case 18:
{
lean_object* v___x_582_; 
v___x_582_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__42));
v___y_490_ = v___x_582_;
goto v___jp_489_;
}
case 19:
{
lean_object* v___x_583_; 
v___x_583_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__43));
v___y_490_ = v___x_583_;
goto v___jp_489_;
}
case 20:
{
lean_object* v___x_584_; 
v___x_584_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__44));
v___y_490_ = v___x_584_;
goto v___jp_489_;
}
case 21:
{
lean_object* v___x_585_; 
v___x_585_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__45));
v___y_490_ = v___x_585_;
goto v___jp_489_;
}
case 22:
{
lean_object* v___x_586_; 
v___x_586_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__46));
v___y_490_ = v___x_586_;
goto v___jp_489_;
}
case 23:
{
lean_object* v___x_587_; 
v___x_587_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__47));
v___y_490_ = v___x_587_;
goto v___jp_489_;
}
case 24:
{
lean_object* v___x_588_; 
v___x_588_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__48));
v___y_490_ = v___x_588_;
goto v___jp_489_;
}
case 25:
{
lean_object* v___x_589_; 
v___x_589_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__49));
v___y_490_ = v___x_589_;
goto v___jp_489_;
}
case 26:
{
lean_object* v___x_590_; 
v___x_590_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__50));
v___y_490_ = v___x_590_;
goto v___jp_489_;
}
case 27:
{
lean_object* v___x_591_; 
v___x_591_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__51));
v___y_490_ = v___x_591_;
goto v___jp_489_;
}
case 28:
{
lean_object* v___x_592_; 
v___x_592_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__52));
v___y_490_ = v___x_592_;
goto v___jp_489_;
}
case 29:
{
lean_object* v___x_593_; 
v___x_593_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__53));
v___y_490_ = v___x_593_;
goto v___jp_489_;
}
case 30:
{
lean_object* v___x_594_; 
v___x_594_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__54));
v___y_490_ = v___x_594_;
goto v___jp_489_;
}
case 31:
{
lean_object* v___x_595_; 
v___x_595_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__55));
v___y_490_ = v___x_595_;
goto v___jp_489_;
}
case 32:
{
lean_object* v___x_596_; 
v___x_596_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__56));
v___y_490_ = v___x_596_;
goto v___jp_489_;
}
case 33:
{
lean_object* v___x_597_; 
v___x_597_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__57));
v___y_490_ = v___x_597_;
goto v___jp_489_;
}
case 34:
{
lean_object* v___x_598_; 
v___x_598_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__58));
v___y_490_ = v___x_598_;
goto v___jp_489_;
}
case 35:
{
lean_object* v___x_599_; 
v___x_599_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__59));
v___y_490_ = v___x_599_;
goto v___jp_489_;
}
case 36:
{
lean_object* v___x_600_; 
v___x_600_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__60));
v___y_490_ = v___x_600_;
goto v___jp_489_;
}
case 37:
{
lean_object* v___x_601_; 
v___x_601_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__61));
v___y_490_ = v___x_601_;
goto v___jp_489_;
}
case 38:
{
lean_object* v___x_602_; 
v___x_602_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__62));
v___y_490_ = v___x_602_;
goto v___jp_489_;
}
default: 
{
lean_object* v___x_603_; 
v___x_603_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__63));
v___y_490_ = v___x_603_;
goto v___jp_489_;
}
}
v___jp_318_:
{
lean_object* v_entries_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; size_t v_sz_326_; size_t v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v_pairs_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v_entries_321_ = lean_ctor_get(v_headers_317_, 0);
lean_inc_ref(v_entries_321_);
lean_dec_ref(v_headers_317_);
v___x_322_ = lean_string_append(v___y_319_, v___y_320_);
v___x_323_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__0));
v___x_324_ = lean_string_append(v___x_322_, v___x_323_);
v___x_325_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__10));
v_sz_326_ = lean_array_size(v_entries_321_);
v___x_327_ = ((size_t)0ULL);
v___x_328_ = l_unsafeCast___redArg(v_entries_321_);
lean_dec_ref(v_entries_321_);
v___x_329_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_325_, v___f_310_, v_sz_326_, v___x_327_, v___x_328_);
v_pairs_330_ = l_unsafeCast___redArg(v___x_329_);
lean_dec(v___x_329_);
v___x_331_ = lean_array_to_list(v_pairs_330_);
v___x_332_ = l_String_intercalate(v___x_323_, v___x_331_);
v___x_333_ = lean_string_append(v___x_324_, v___x_332_);
lean_dec_ref(v___x_332_);
v___x_334_ = lean_string_append(v___x_333_, v___x_323_);
return v___x_334_;
}
v___jp_335_:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_string_append(v___y_336_, v___y_338_);
lean_dec_ref(v___y_338_);
v___x_340_ = lean_string_append(v___x_339_, v___y_337_);
switch(v_version_315_)
{
case 0:
{
lean_object* v___x_341_; 
v___x_341_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__11));
v___y_319_ = v___x_340_;
v___y_320_ = v___x_341_;
goto v___jp_318_;
}
case 1:
{
lean_object* v___x_342_; 
v___x_342_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__12));
v___y_319_ = v___x_340_;
v___y_320_ = v___x_342_;
goto v___jp_318_;
}
case 2:
{
lean_object* v___x_343_; 
v___x_343_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__13));
v___y_319_ = v___x_340_;
v___y_320_ = v___x_343_;
goto v___jp_318_;
}
default: 
{
lean_object* v___x_344_; 
v___x_344_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__14));
v___y_319_ = v___x_340_;
v___y_320_ = v___x_344_;
goto v___jp_318_;
}
}
}
v___jp_345_:
{
lean_object* v_queryStr_350_; lean_object* v___x_351_; 
v_queryStr_350_ = l_Std_Http_URI_Query_formatOption(v___y_347_);
v___x_351_ = lean_string_append(v___y_349_, v_queryStr_350_);
lean_dec_ref(v_queryStr_350_);
v___y_336_ = v___y_346_;
v___y_337_ = v___y_348_;
v___y_338_ = v___x_351_;
goto v___jp_335_;
}
v___jp_352_:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_360_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___x_361_ = lean_string_append(v___y_358_, v___x_360_);
v___x_362_ = lean_string_append(v___x_361_, v___y_355_);
lean_dec_ref(v___y_355_);
v___x_363_ = lean_string_append(v___x_362_, v___y_357_);
lean_dec_ref(v___y_357_);
v___x_364_ = lean_string_append(v___x_363_, v___y_356_);
lean_dec_ref(v___y_356_);
v___x_365_ = lean_string_append(v___x_364_, v___y_359_);
lean_dec_ref(v___y_359_);
v___y_336_ = v___y_353_;
v___y_337_ = v___y_354_;
v___y_338_ = v___x_365_;
goto v___jp_335_;
}
v___jp_366_:
{
lean_object* v_queryPart_374_; 
v_queryPart_374_ = l_Std_Http_URI_Query_formatOption(v___y_369_);
if (lean_obj_tag(v___y_367_) == 0)
{
lean_object* v___x_375_; 
v___x_375_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_353_ = v___y_368_;
v___y_354_ = v___y_370_;
v___y_355_ = v___y_371_;
v___y_356_ = v_queryPart_374_;
v___y_357_ = v___y_373_;
v___y_358_ = v___y_372_;
v___y_359_ = v___x_375_;
goto v___jp_352_;
}
else
{
lean_object* v_val_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v_val_376_ = lean_ctor_get(v___y_367_, 0);
lean_inc(v_val_376_);
lean_dec_ref_known(v___y_367_, 1);
v___x_377_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__16));
v___x_378_ = l_Std_Http_URI_EncodedFragment_encode(v_val_376_);
lean_dec(v_val_376_);
v___x_379_ = lean_string_from_utf8_unchecked(v___x_378_);
v___x_380_ = lean_string_append(v___x_377_, v___x_379_);
lean_dec_ref(v___x_379_);
v___y_353_ = v___y_368_;
v___y_354_ = v___y_370_;
v___y_355_ = v___y_371_;
v___y_356_ = v_queryPart_374_;
v___y_357_ = v___y_373_;
v___y_358_ = v___y_372_;
v___y_359_ = v___x_380_;
goto v___jp_352_;
}
}
v___jp_381_:
{
lean_object* v_segments_389_; uint8_t v_absolute_390_; lean_object* v___x_391_; lean_object* v___x_392_; size_t v_sz_393_; size_t v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v_result_399_; 
v_segments_389_ = lean_ctor_get(v___y_386_, 0);
lean_inc_ref(v_segments_389_);
v_absolute_390_ = lean_ctor_get_uint8(v___y_386_, sizeof(void*)*1);
lean_dec_ref(v___y_386_);
v___x_391_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__17));
v___x_392_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__10));
v_sz_393_ = lean_array_size(v_segments_389_);
v___x_394_ = ((size_t)0ULL);
v___x_395_ = l_unsafeCast___redArg(v_segments_389_);
lean_dec_ref(v_segments_389_);
v___x_396_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_392_, v___f_311_, v_sz_393_, v___x_394_, v___x_395_);
v___x_397_ = l_unsafeCast___redArg(v___x_396_);
lean_dec(v___x_396_);
v___x_398_ = lean_array_to_list(v___x_397_);
v_result_399_ = l_String_intercalate(v___x_391_, v___x_398_);
if (v_absolute_390_ == 0)
{
v___y_367_ = v___y_382_;
v___y_368_ = v___y_383_;
v___y_369_ = v___y_384_;
v___y_370_ = v___y_385_;
v___y_371_ = v___y_388_;
v___y_372_ = v___y_387_;
v___y_373_ = v_result_399_;
goto v___jp_366_;
}
else
{
lean_object* v___x_400_; 
v___x_400_ = lean_string_append(v___x_391_, v_result_399_);
lean_dec_ref(v_result_399_);
v___y_367_ = v___y_382_;
v___y_368_ = v___y_383_;
v___y_369_ = v___y_384_;
v___y_370_ = v___y_385_;
v___y_371_ = v___y_388_;
v___y_372_ = v___y_387_;
v___y_373_ = v___x_400_;
goto v___jp_366_;
}
}
v___jp_401_:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_412_ = lean_string_append(v___y_410_, v___y_403_);
lean_dec_ref(v___y_403_);
v___x_413_ = lean_string_append(v___x_412_, v___y_411_);
lean_dec_ref(v___y_411_);
lean_inc_ref(v___y_407_);
v___x_414_ = lean_string_append(v___y_407_, v___x_413_);
lean_dec_ref(v___x_413_);
v___y_382_ = v___y_402_;
v___y_383_ = v___y_404_;
v___y_384_ = v___y_405_;
v___y_385_ = v___y_406_;
v___y_386_ = v___y_408_;
v___y_387_ = v___y_409_;
v___y_388_ = v___x_414_;
goto v___jp_381_;
}
v___jp_415_:
{
switch(lean_obj_tag(v_port_419_))
{
case 0:
{
lean_object* v___x_426_; 
v___x_426_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_402_ = v___y_416_;
v___y_403_ = v___y_425_;
v___y_404_ = v___y_417_;
v___y_405_ = v___y_418_;
v___y_406_ = v___y_421_;
v___y_407_ = v___y_420_;
v___y_408_ = v___y_422_;
v___y_409_ = v___y_423_;
v___y_410_ = v___y_424_;
v___y_411_ = v___x_426_;
goto v___jp_401_;
}
case 1:
{
lean_object* v___x_427_; 
v___x_427_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___y_402_ = v___y_416_;
v___y_403_ = v___y_425_;
v___y_404_ = v___y_417_;
v___y_405_ = v___y_418_;
v___y_406_ = v___y_421_;
v___y_407_ = v___y_420_;
v___y_408_ = v___y_422_;
v___y_409_ = v___y_423_;
v___y_410_ = v___y_424_;
v___y_411_ = v___x_427_;
goto v___jp_401_;
}
default: 
{
uint16_t v_port_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v_port_428_ = lean_ctor_get_uint16(v_port_419_, 0);
lean_dec_ref_known(v_port_419_, 0);
v___x_429_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___x_430_ = lean_uint16_to_nat(v_port_428_);
v___x_431_ = l_Nat_reprFast(v___x_430_);
v___x_432_ = lean_string_append(v___x_429_, v___x_431_);
lean_dec_ref(v___x_431_);
v___y_402_ = v___y_416_;
v___y_403_ = v___y_425_;
v___y_404_ = v___y_417_;
v___y_405_ = v___y_418_;
v___y_406_ = v___y_421_;
v___y_407_ = v___y_420_;
v___y_408_ = v___y_422_;
v___y_409_ = v___y_423_;
v___y_410_ = v___y_424_;
v___y_411_ = v___x_432_;
goto v___jp_401_;
}
}
}
v___jp_433_:
{
switch(lean_obj_tag(v_host_439_))
{
case 0:
{
lean_object* v_name_444_; 
v_name_444_ = lean_ctor_get(v_host_439_, 0);
lean_inc_ref(v_name_444_);
lean_dec_ref_known(v_host_439_, 1);
v___y_416_ = v___y_434_;
v___y_417_ = v___y_435_;
v___y_418_ = v___y_436_;
v_port_419_ = v_port_440_;
v___y_420_ = v___y_438_;
v___y_421_ = v___y_437_;
v___y_422_ = v___y_441_;
v___y_423_ = v___y_442_;
v___y_424_ = v___y_443_;
v___y_425_ = v_name_444_;
goto v___jp_415_;
}
case 1:
{
lean_object* v_ipv4_445_; lean_object* v___x_446_; 
v_ipv4_445_ = lean_ctor_get(v_host_439_, 0);
lean_inc_ref(v_ipv4_445_);
lean_dec_ref_known(v_host_439_, 1);
v___x_446_ = lean_uv_ntop_v4(v_ipv4_445_);
lean_dec_ref(v_ipv4_445_);
v___y_416_ = v___y_434_;
v___y_417_ = v___y_435_;
v___y_418_ = v___y_436_;
v_port_419_ = v_port_440_;
v___y_420_ = v___y_438_;
v___y_421_ = v___y_437_;
v___y_422_ = v___y_441_;
v___y_423_ = v___y_442_;
v___y_424_ = v___y_443_;
v___y_425_ = v___x_446_;
goto v___jp_415_;
}
default: 
{
lean_object* v_ipv6_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_ipv6_447_ = lean_ctor_get(v_host_439_, 0);
lean_inc_ref(v_ipv6_447_);
lean_dec_ref_known(v_host_439_, 1);
v___x_448_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__18));
v___x_449_ = lean_uv_ntop_v6(v_ipv6_447_);
lean_dec_ref(v_ipv6_447_);
v___x_450_ = lean_string_append(v___x_448_, v___x_449_);
lean_dec_ref(v___x_449_);
v___x_451_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__19));
v___x_452_ = lean_string_append(v___x_450_, v___x_451_);
v___y_416_ = v___y_434_;
v___y_417_ = v___y_435_;
v___y_418_ = v___y_436_;
v_port_419_ = v_port_440_;
v___y_420_ = v___y_438_;
v___y_421_ = v___y_437_;
v___y_422_ = v___y_441_;
v___y_423_ = v___y_442_;
v___y_424_ = v___y_443_;
v___y_425_ = v___x_452_;
goto v___jp_415_;
}
}
}
v___jp_453_:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_string_append(v___y_457_, v___y_456_);
lean_dec_ref(v___y_456_);
v___x_460_ = lean_string_append(v___x_459_, v___y_458_);
lean_dec_ref(v___y_458_);
v___y_336_ = v___y_454_;
v___y_337_ = v___y_455_;
v___y_338_ = v___x_460_;
goto v___jp_335_;
}
v___jp_461_:
{
switch(lean_obj_tag(v_port_464_))
{
case 0:
{
lean_object* v___x_467_; 
v___x_467_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_454_ = v___y_462_;
v___y_455_ = v___y_463_;
v___y_456_ = v___y_466_;
v___y_457_ = v___y_465_;
v___y_458_ = v___x_467_;
goto v___jp_453_;
}
case 1:
{
lean_object* v___x_468_; 
v___x_468_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___y_454_ = v___y_462_;
v___y_455_ = v___y_463_;
v___y_456_ = v___y_466_;
v___y_457_ = v___y_465_;
v___y_458_ = v___x_468_;
goto v___jp_453_;
}
default: 
{
uint16_t v_port_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v_port_469_ = lean_ctor_get_uint16(v_port_464_, 0);
lean_dec_ref_known(v_port_464_, 0);
v___x_470_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___x_471_ = lean_uint16_to_nat(v_port_469_);
v___x_472_ = l_Nat_reprFast(v___x_471_);
v___x_473_ = lean_string_append(v___x_470_, v___x_472_);
lean_dec_ref(v___x_472_);
v___y_454_ = v___y_462_;
v___y_455_ = v___y_463_;
v___y_456_ = v___y_466_;
v___y_457_ = v___y_465_;
v___y_458_ = v___x_473_;
goto v___jp_453_;
}
}
}
v___jp_474_:
{
switch(lean_obj_tag(v_host_477_))
{
case 0:
{
lean_object* v_name_480_; 
v_name_480_ = lean_ctor_get(v_host_477_, 0);
lean_inc_ref(v_name_480_);
lean_dec_ref_known(v_host_477_, 1);
v___y_462_ = v___y_475_;
v___y_463_ = v___y_476_;
v_port_464_ = v_port_478_;
v___y_465_ = v___y_479_;
v___y_466_ = v_name_480_;
goto v___jp_461_;
}
case 1:
{
lean_object* v_ipv4_481_; lean_object* v___x_482_; 
v_ipv4_481_ = lean_ctor_get(v_host_477_, 0);
lean_inc_ref(v_ipv4_481_);
lean_dec_ref_known(v_host_477_, 1);
v___x_482_ = lean_uv_ntop_v4(v_ipv4_481_);
lean_dec_ref(v_ipv4_481_);
v___y_462_ = v___y_475_;
v___y_463_ = v___y_476_;
v_port_464_ = v_port_478_;
v___y_465_ = v___y_479_;
v___y_466_ = v___x_482_;
goto v___jp_461_;
}
default: 
{
lean_object* v_ipv6_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v_ipv6_483_ = lean_ctor_get(v_host_477_, 0);
lean_inc_ref(v_ipv6_483_);
lean_dec_ref_known(v_host_477_, 1);
v___x_484_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__18));
v___x_485_ = lean_uv_ntop_v6(v_ipv6_483_);
lean_dec_ref(v_ipv6_483_);
v___x_486_ = lean_string_append(v___x_484_, v___x_485_);
lean_dec_ref(v___x_485_);
v___x_487_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__19));
v___x_488_ = lean_string_append(v___x_486_, v___x_487_);
v___y_462_ = v___y_475_;
v___y_463_ = v___y_476_;
v_port_464_ = v_port_478_;
v___y_465_ = v___y_479_;
v___y_466_ = v___x_488_;
goto v___jp_461_;
}
}
}
v___jp_489_:
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__20));
lean_inc_ref(v___y_490_);
v___x_492_ = lean_string_append(v___y_490_, v___x_491_);
switch(lean_obj_tag(v_uri_316_))
{
case 0:
{
lean_object* v_path_493_; lean_object* v_query_494_; lean_object* v_segments_495_; uint8_t v_absolute_496_; lean_object* v___x_497_; lean_object* v___x_498_; size_t v_sz_499_; size_t v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v_result_505_; 
lean_dec_ref(v___f_311_);
v_path_493_ = lean_ctor_get(v_uri_316_, 0);
lean_inc_ref(v_path_493_);
v_query_494_ = lean_ctor_get(v_uri_316_, 1);
lean_inc(v_query_494_);
lean_dec_ref_known(v_uri_316_, 2);
v_segments_495_ = lean_ctor_get(v_path_493_, 0);
lean_inc_ref(v_segments_495_);
v_absolute_496_ = lean_ctor_get_uint8(v_path_493_, sizeof(void*)*1);
lean_dec_ref(v_path_493_);
v___x_497_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__17));
v___x_498_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__10));
v_sz_499_ = lean_array_size(v_segments_495_);
v___x_500_ = ((size_t)0ULL);
v___x_501_ = l_unsafeCast___redArg(v_segments_495_);
lean_dec_ref(v_segments_495_);
v___x_502_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_498_, v___f_312_, v_sz_499_, v___x_500_, v___x_501_);
v___x_503_ = l_unsafeCast___redArg(v___x_502_);
lean_dec(v___x_502_);
v___x_504_ = lean_array_to_list(v___x_503_);
v_result_505_ = l_String_intercalate(v___x_497_, v___x_504_);
if (v_absolute_496_ == 0)
{
v___y_346_ = v___x_492_;
v___y_347_ = v_query_494_;
v___y_348_ = v___x_491_;
v___y_349_ = v_result_505_;
goto v___jp_345_;
}
else
{
lean_object* v___x_506_; 
v___x_506_ = lean_string_append(v___x_497_, v_result_505_);
lean_dec_ref(v_result_505_);
v___y_346_ = v___x_492_;
v___y_347_ = v_query_494_;
v___y_348_ = v___x_491_;
v___y_349_ = v___x_506_;
goto v___jp_345_;
}
}
case 1:
{
lean_object* v_uri_507_; lean_object* v_authority_508_; 
lean_dec_ref(v___f_312_);
v_uri_507_ = lean_ctor_get(v_uri_316_, 0);
lean_inc_ref(v_uri_507_);
lean_dec_ref_known(v_uri_316_, 1);
v_authority_508_ = lean_ctor_get(v_uri_507_, 1);
if (lean_obj_tag(v_authority_508_) == 0)
{
lean_object* v_scheme_509_; lean_object* v_path_510_; lean_object* v_query_511_; lean_object* v_fragment_512_; lean_object* v___x_513_; 
v_scheme_509_ = lean_ctor_get(v_uri_507_, 0);
lean_inc_ref(v_scheme_509_);
v_path_510_ = lean_ctor_get(v_uri_507_, 2);
lean_inc_ref(v_path_510_);
v_query_511_ = lean_ctor_get(v_uri_507_, 3);
lean_inc(v_query_511_);
v_fragment_512_ = lean_ctor_get(v_uri_507_, 4);
lean_inc(v_fragment_512_);
lean_dec_ref(v_uri_507_);
v___x_513_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_382_ = v_fragment_512_;
v___y_383_ = v___x_492_;
v___y_384_ = v_query_511_;
v___y_385_ = v___x_491_;
v___y_386_ = v_path_510_;
v___y_387_ = v_scheme_509_;
v___y_388_ = v___x_513_;
goto v___jp_381_;
}
else
{
lean_object* v_val_514_; lean_object* v_scheme_515_; lean_object* v_path_516_; lean_object* v_query_517_; lean_object* v_fragment_518_; lean_object* v_userInfo_519_; lean_object* v_host_520_; lean_object* v_port_521_; lean_object* v___x_522_; 
v_val_514_ = lean_ctor_get(v_authority_508_, 0);
lean_inc(v_val_514_);
v_scheme_515_ = lean_ctor_get(v_uri_507_, 0);
lean_inc_ref(v_scheme_515_);
v_path_516_ = lean_ctor_get(v_uri_507_, 2);
lean_inc_ref(v_path_516_);
v_query_517_ = lean_ctor_get(v_uri_507_, 3);
lean_inc(v_query_517_);
v_fragment_518_ = lean_ctor_get(v_uri_507_, 4);
lean_inc(v_fragment_518_);
lean_dec_ref(v_uri_507_);
v_userInfo_519_ = lean_ctor_get(v_val_514_, 0);
lean_inc(v_userInfo_519_);
v_host_520_ = lean_ctor_get(v_val_514_, 1);
lean_inc_ref(v_host_520_);
v_port_521_ = lean_ctor_get(v_val_514_, 2);
lean_inc(v_port_521_);
lean_dec(v_val_514_);
v___x_522_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__21));
if (lean_obj_tag(v_userInfo_519_) == 0)
{
lean_object* v___x_523_; 
v___x_523_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_434_ = v_fragment_518_;
v___y_435_ = v___x_492_;
v___y_436_ = v_query_517_;
v___y_437_ = v___x_491_;
v___y_438_ = v___x_522_;
v_host_439_ = v_host_520_;
v_port_440_ = v_port_521_;
v___y_441_ = v_path_516_;
v___y_442_ = v_scheme_515_;
v___y_443_ = v___x_523_;
goto v___jp_433_;
}
else
{
lean_object* v_val_524_; lean_object* v_password_525_; 
v_val_524_ = lean_ctor_get(v_userInfo_519_, 0);
lean_inc(v_val_524_);
lean_dec_ref_known(v_userInfo_519_, 1);
v_password_525_ = lean_ctor_get(v_val_524_, 1);
if (lean_obj_tag(v_password_525_) == 0)
{
lean_object* v_username_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v_username_526_ = lean_ctor_get(v_val_524_, 0);
lean_inc_ref(v_username_526_);
lean_dec(v_val_524_);
v___x_527_ = lean_string_from_utf8_unchecked(v_username_526_);
v___x_528_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__22));
v___x_529_ = lean_string_append(v___x_527_, v___x_528_);
v___y_434_ = v_fragment_518_;
v___y_435_ = v___x_492_;
v___y_436_ = v_query_517_;
v___y_437_ = v___x_491_;
v___y_438_ = v___x_522_;
v_host_439_ = v_host_520_;
v_port_440_ = v_port_521_;
v___y_441_ = v_path_516_;
v___y_442_ = v_scheme_515_;
v___y_443_ = v___x_529_;
goto v___jp_433_;
}
else
{
lean_object* v_username_530_; lean_object* v_val_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
lean_inc_ref(v_password_525_);
v_username_530_ = lean_ctor_get(v_val_524_, 0);
lean_inc_ref(v_username_530_);
lean_dec(v_val_524_);
v_val_531_ = lean_ctor_get(v_password_525_, 0);
lean_inc(v_val_531_);
lean_dec_ref_known(v_password_525_, 1);
v___x_532_ = lean_string_from_utf8_unchecked(v_username_530_);
v___x_533_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___x_534_ = lean_string_append(v___x_532_, v___x_533_);
v___x_535_ = lean_string_from_utf8_unchecked(v_val_531_);
v___x_536_ = lean_string_append(v___x_534_, v___x_535_);
lean_dec_ref(v___x_535_);
v___x_537_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__22));
v___x_538_ = lean_string_append(v___x_536_, v___x_537_);
v___y_434_ = v_fragment_518_;
v___y_435_ = v___x_492_;
v___y_436_ = v_query_517_;
v___y_437_ = v___x_491_;
v___y_438_ = v___x_522_;
v_host_439_ = v_host_520_;
v_port_440_ = v_port_521_;
v___y_441_ = v_path_516_;
v___y_442_ = v_scheme_515_;
v___y_443_ = v___x_538_;
goto v___jp_433_;
}
}
}
}
case 2:
{
lean_object* v_authority_539_; lean_object* v_userInfo_540_; 
lean_dec_ref(v___f_312_);
lean_dec_ref(v___f_311_);
v_authority_539_ = lean_ctor_get(v_uri_316_, 0);
lean_inc_ref(v_authority_539_);
lean_dec_ref_known(v_uri_316_, 1);
v_userInfo_540_ = lean_ctor_get(v_authority_539_, 0);
if (lean_obj_tag(v_userInfo_540_) == 0)
{
lean_object* v_host_541_; lean_object* v_port_542_; lean_object* v___x_543_; 
v_host_541_ = lean_ctor_get(v_authority_539_, 1);
lean_inc_ref(v_host_541_);
v_port_542_ = lean_ctor_get(v_authority_539_, 2);
lean_inc(v_port_542_);
lean_dec_ref(v_authority_539_);
v___x_543_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_475_ = v___x_492_;
v___y_476_ = v___x_491_;
v_host_477_ = v_host_541_;
v_port_478_ = v_port_542_;
v___y_479_ = v___x_543_;
goto v___jp_474_;
}
else
{
lean_object* v_val_544_; lean_object* v_password_545_; 
v_val_544_ = lean_ctor_get(v_userInfo_540_, 0);
lean_inc(v_val_544_);
v_password_545_ = lean_ctor_get(v_val_544_, 1);
if (lean_obj_tag(v_password_545_) == 0)
{
lean_object* v_host_546_; lean_object* v_port_547_; lean_object* v_username_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v_host_546_ = lean_ctor_get(v_authority_539_, 1);
lean_inc_ref(v_host_546_);
v_port_547_ = lean_ctor_get(v_authority_539_, 2);
lean_inc(v_port_547_);
lean_dec_ref(v_authority_539_);
v_username_548_ = lean_ctor_get(v_val_544_, 0);
lean_inc_ref(v_username_548_);
lean_dec(v_val_544_);
v___x_549_ = lean_string_from_utf8_unchecked(v_username_548_);
v___x_550_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__22));
v___x_551_ = lean_string_append(v___x_549_, v___x_550_);
v___y_475_ = v___x_492_;
v___y_476_ = v___x_491_;
v_host_477_ = v_host_546_;
v_port_478_ = v_port_547_;
v___y_479_ = v___x_551_;
goto v___jp_474_;
}
else
{
lean_object* v_host_552_; lean_object* v_port_553_; lean_object* v_username_554_; lean_object* v_val_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
lean_inc_ref(v_password_545_);
v_host_552_ = lean_ctor_get(v_authority_539_, 1);
lean_inc_ref(v_host_552_);
v_port_553_ = lean_ctor_get(v_authority_539_, 2);
lean_inc(v_port_553_);
lean_dec_ref(v_authority_539_);
v_username_554_ = lean_ctor_get(v_val_544_, 0);
lean_inc_ref(v_username_554_);
lean_dec(v_val_544_);
v_val_555_ = lean_ctor_get(v_password_545_, 0);
lean_inc(v_val_555_);
lean_dec_ref_known(v_password_545_, 1);
v___x_556_ = lean_string_from_utf8_unchecked(v_username_554_);
v___x_557_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___x_558_ = lean_string_append(v___x_556_, v___x_557_);
v___x_559_ = lean_string_from_utf8_unchecked(v_val_555_);
v___x_560_ = lean_string_append(v___x_558_, v___x_559_);
lean_dec_ref(v___x_559_);
v___x_561_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__22));
v___x_562_ = lean_string_append(v___x_560_, v___x_561_);
v___y_475_ = v___x_492_;
v___y_476_ = v___x_491_;
v_host_477_ = v_host_552_;
v_port_478_ = v_port_553_;
v___y_479_ = v___x_562_;
goto v___jp_474_;
}
}
}
default: 
{
lean_object* v___x_563_; 
lean_dec_ref(v___f_312_);
lean_dec_ref(v___f_311_);
v___x_563_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__23));
v___y_336_ = v___x_492_;
v___y_337_ = v___x_491_;
v___y_338_ = v___x_563_;
goto v___jp_335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__1(lean_object* v___x_610_, lean_object* v___x_611_, lean_object* v___x_612_, lean_object* v_name_613_, lean_object* v___x_614_, uint32_t v___x_615_, lean_object* v___x_616_, lean_object* v_it_617_, lean_object* v_acc_618_, lean_object* v_hP_619_, lean_object* v_recur_620_){
_start:
{
lean_object* v_it_622_; lean_object* v_out_623_; uint32_t v___y_639_; lean_object* v___y_640_; lean_object* v___y_641_; uint8_t v___y_642_; lean_object* v_it_648_; lean_object* v_startInclusive_649_; lean_object* v_endExclusive_650_; 
if (lean_obj_tag(v_it_617_) == 0)
{
lean_object* v_currPos_657_; lean_object* v_searcher_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_680_; 
v_currPos_657_ = lean_ctor_get(v_it_617_, 0);
v_searcher_658_ = lean_ctor_get(v_it_617_, 1);
v_isSharedCheck_680_ = !lean_is_exclusive(v_it_617_);
if (v_isSharedCheck_680_ == 0)
{
v___x_660_ = v_it_617_;
v_isShared_661_ = v_isSharedCheck_680_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_searcher_658_);
lean_inc(v_currPos_657_);
lean_dec(v_it_617_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_680_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
uint8_t v_decide_662_; 
v_decide_662_ = lean_nat_dec_eq(v_searcher_658_, v___x_614_);
if (v_decide_662_ == 0)
{
uint32_t v___x_663_; uint8_t v___x_664_; 
lean_dec(v___x_614_);
v___x_663_ = lean_string_utf8_get_fast(v_name_613_, v_searcher_658_);
v___x_664_ = lean_uint32_dec_eq(v___x_663_, v___x_615_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; lean_object* v___x_667_; 
v___x_665_ = lean_string_utf8_next_fast(v_name_613_, v_searcher_658_);
lean_dec(v_searcher_658_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 1, v___x_665_);
v___x_667_ = v___x_660_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_currPos_657_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v___x_665_);
v___x_667_ = v_reuseFailAlloc_669_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_668_; 
v___x_668_ = lean_apply_4(v_recur_620_, v___x_667_, v_acc_618_, lean_box(0), lean_box(0));
return v___x_668_;
}
}
else
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v_slice_673_; lean_object* v_nextIt_675_; 
v___x_670_ = lean_string_utf8_next_fast(v_name_613_, v_searcher_658_);
v___x_671_ = lean_nat_sub(v___x_670_, v_searcher_658_);
v___x_672_ = lean_nat_add(v_searcher_658_, v___x_671_);
lean_dec(v___x_671_);
v_slice_673_ = l_String_Slice_subslice_x21(v___x_616_, v_currPos_657_, v_searcher_658_);
lean_inc(v___x_672_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 1, v___x_672_);
lean_ctor_set(v___x_660_, 0, v___x_672_);
v_nextIt_675_ = v___x_660_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_672_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v___x_672_);
v_nextIt_675_ = v_reuseFailAlloc_678_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
lean_object* v_startInclusive_676_; lean_object* v_endExclusive_677_; 
v_startInclusive_676_ = lean_ctor_get(v_slice_673_, 0);
lean_inc(v_startInclusive_676_);
v_endExclusive_677_ = lean_ctor_get(v_slice_673_, 1);
lean_inc(v_endExclusive_677_);
lean_dec_ref(v_slice_673_);
v_it_648_ = v_nextIt_675_;
v_startInclusive_649_ = v_startInclusive_676_;
v_endExclusive_650_ = v_endExclusive_677_;
goto v___jp_647_;
}
}
}
else
{
lean_object* v___x_679_; 
lean_del_object(v___x_660_);
lean_dec(v_searcher_658_);
v___x_679_ = lean_box(1);
v_it_648_ = v___x_679_;
v_startInclusive_649_ = v_currPos_657_;
v_endExclusive_650_ = v___x_614_;
goto v___jp_647_;
}
}
}
else
{
lean_dec_ref(v_recur_620_);
lean_dec(v___x_614_);
return v_acc_618_;
}
v___jp_621_:
{
if (lean_obj_tag(v_acc_618_) == 0)
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_624_, 0, v_out_623_);
v___x_625_ = lean_apply_4(v_recur_620_, v_it_622_, v___x_624_, lean_box(0), lean_box(0));
return v___x_625_;
}
else
{
lean_object* v_val_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_637_; 
v_val_626_ = lean_ctor_get(v_acc_618_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v_acc_618_);
if (v_isSharedCheck_637_ == 0)
{
v___x_628_ = v_acc_618_;
v_isShared_629_ = v_isSharedCheck_637_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_val_626_);
lean_dec(v_acc_618_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_637_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_630_ = lean_string_utf8_extract_fast(v___x_610_, v___x_611_, v___x_612_);
v___x_631_ = lean_string_append(v_val_626_, v___x_630_);
lean_dec_ref(v___x_630_);
v___x_632_ = lean_string_append(v___x_631_, v_out_623_);
lean_dec_ref(v_out_623_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 0, v___x_632_);
v___x_634_ = v___x_628_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_632_);
v___x_634_ = v_reuseFailAlloc_636_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_635_; 
v___x_635_ = lean_apply_4(v_recur_620_, v_it_622_, v___x_634_, lean_box(0), lean_box(0));
return v___x_635_;
}
}
}
}
v___jp_638_:
{
if (v___y_642_ == 0)
{
lean_object* v___x_643_; 
v___x_643_ = lean_string_utf8_set(v___y_641_, v___x_611_, v___y_639_);
v_it_622_ = v___y_640_;
v_out_623_ = v___x_643_;
goto v___jp_621_;
}
else
{
uint32_t v___x_644_; uint32_t v___x_645_; lean_object* v___x_646_; 
v___x_644_ = 4294967264;
v___x_645_ = lean_uint32_add(v___y_639_, v___x_644_);
v___x_646_ = lean_string_utf8_set(v___y_641_, v___x_611_, v___x_645_);
v_it_622_ = v___y_640_;
v_out_623_ = v___x_646_;
goto v___jp_621_;
}
}
v___jp_647_:
{
lean_object* v___x_651_; uint32_t v___x_652_; uint32_t v___x_653_; uint8_t v___x_654_; 
v___x_651_ = lean_string_utf8_extract_fast(v_name_613_, v_startInclusive_649_, v_endExclusive_650_);
lean_dec(v_endExclusive_650_);
lean_dec(v_startInclusive_649_);
v___x_652_ = lean_string_utf8_get(v___x_651_, v___x_611_);
v___x_653_ = 97;
v___x_654_ = lean_uint32_dec_le(v___x_653_, v___x_652_);
if (v___x_654_ == 0)
{
v___y_639_ = v___x_652_;
v___y_640_ = v_it_648_;
v___y_641_ = v___x_651_;
v___y_642_ = v___x_654_;
goto v___jp_638_;
}
else
{
uint32_t v___x_655_; uint8_t v___x_656_; 
v___x_655_ = 122;
v___x_656_ = lean_uint32_dec_le(v___x_652_, v___x_655_);
v___y_639_ = v___x_652_;
v___y_640_ = v_it_648_;
v___y_641_ = v___x_651_;
v___y_642_ = v___x_656_;
goto v___jp_638_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__1___boxed(lean_object* v___x_681_, lean_object* v___x_682_, lean_object* v___x_683_, lean_object* v_name_684_, lean_object* v___x_685_, lean_object* v___x_686_, lean_object* v___x_687_, lean_object* v_it_688_, lean_object* v_acc_689_, lean_object* v_hP_690_, lean_object* v_recur_691_){
_start:
{
uint32_t v___x_3078__boxed_692_; lean_object* v_res_693_; 
v___x_3078__boxed_692_ = lean_unbox_uint32(v___x_686_);
lean_dec(v___x_686_);
v_res_693_ = l_Std_Http_Request_instEncodeV11Head___lam__1(v___x_681_, v___x_682_, v___x_683_, v_name_684_, v___x_685_, v___x_3078__boxed_692_, v___x_687_, v_it_688_, v_acc_689_, v_hP_690_, v_recur_691_);
lean_dec_ref(v___x_687_);
lean_dec_ref(v_name_684_);
lean_dec(v___x_683_);
lean_dec(v___x_682_);
lean_dec_ref(v___x_681_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0(lean_object* v_buf_694_, lean_object* v_name_695_, lean_object* v_value_696_){
_start:
{
lean_object* v___y_698_; lean_object* v___f_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v_it_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___f_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___f_717_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__1));
v___x_718_ = lean_unsigned_to_nat(0u);
v___x_719_ = lean_string_utf8_byte_size(v_name_695_);
lean_inc_ref(v_name_695_);
v___x_720_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_720_, 0, v_name_695_);
lean_ctor_set(v___x_720_, 1, v___x_718_);
lean_ctor_set(v___x_720_, 2, v___x_719_);
lean_inc_ref(v___x_720_);
v_it_721_ = l_String_Slice_splitToSubslice___redArg(v___x_720_, v___f_717_);
v___x_722_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__2));
v___x_723_ = lean_obj_once(&l_Std_Http_Request_instToStringHead___lam__2___closed__3, &l_Std_Http_Request_instToStringHead___lam__2___closed__3_once, _init_l_Std_Http_Request_instToStringHead___lam__2___closed__3);
v___x_724_ = l_Std_Http_Request_instToStringHead___lam__2___boxed__const__1;
v___f_725_ = lean_alloc_closure((void*)(l_Std_Http_Request_instEncodeV11Head___lam__1___boxed), 11, 7);
lean_closure_set(v___f_725_, 0, v___x_722_);
lean_closure_set(v___f_725_, 1, v___x_718_);
lean_closure_set(v___f_725_, 2, v___x_723_);
lean_closure_set(v___f_725_, 3, v_name_695_);
lean_closure_set(v___f_725_, 4, v___x_719_);
lean_closure_set(v___f_725_, 5, v___x_724_);
lean_closure_set(v___f_725_, 6, v___x_720_);
v___x_726_ = lean_box(0);
v___x_727_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_725_, v_it_721_, v___x_726_, lean_box(0));
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v___x_728_; 
v___x_728_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_698_ = v___x_728_;
goto v___jp_697_;
}
else
{
lean_object* v_val_729_; 
v_val_729_ = lean_ctor_get(v___x_727_, 0);
lean_inc(v_val_729_);
lean_dec_ref_known(v___x_727_, 1);
v___y_698_ = v_val_729_;
goto v___jp_697_;
}
v___jp_697_:
{
lean_object* v_data_699_; lean_object* v_size_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_716_; 
v_data_699_ = lean_ctor_get(v_buf_694_, 0);
v_size_700_ = lean_ctor_get(v_buf_694_, 1);
v_isSharedCheck_716_ = !lean_is_exclusive(v_buf_694_);
if (v_isSharedCheck_716_ == 0)
{
v___x_702_ = v_buf_694_;
v_isShared_703_ = v_isSharedCheck_716_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_size_700_);
lean_inc(v_data_699_);
lean_dec(v_buf_694_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_716_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_714_; 
v___x_704_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__0));
v___x_705_ = lean_string_append(v___y_698_, v___x_704_);
v___x_706_ = lean_string_append(v___x_705_, v_value_696_);
v___x_707_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__0));
v___x_708_ = lean_string_append(v___x_706_, v___x_707_);
v___x_709_ = lean_string_to_utf8(v___x_708_);
lean_dec_ref(v___x_708_);
lean_inc_ref(v___x_709_);
v___x_710_ = lean_array_push(v_data_699_, v___x_709_);
v___x_711_ = lean_byte_array_size(v___x_709_);
lean_dec_ref(v___x_709_);
v___x_712_ = lean_nat_add(v_size_700_, v___x_711_);
lean_dec(v_size_700_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 1, v___x_712_);
lean_ctor_set(v___x_702_, 0, v___x_710_);
v___x_714_ = v___x_702_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_710_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v___x_712_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___boxed(lean_object* v_buf_730_, lean_object* v_name_731_, lean_object* v_value_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Std_Http_Request_instEncodeV11Head___lam__0(v_buf_730_, v_name_731_, v_value_732_);
lean_dec_ref(v_value_732_);
return v_res_733_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__0(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__0));
v___x_735_ = lean_string_to_utf8(v___x_734_);
return v___x_735_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__1(void){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__3___closed__0, &l_Std_Http_Request_instEncodeV11Head___lam__3___closed__0_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__0);
v___x_737_ = lean_byte_array_size(v___x_736_);
return v___x_737_;
}
}
static uint8_t _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__2(void){
_start:
{
uint32_t v___x_738_; uint8_t v___x_739_; 
v___x_738_ = 32;
v___x_739_ = lean_uint32_to_uint8(v___x_738_);
return v___x_739_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__3(void){
_start:
{
uint8_t v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_740_ = lean_uint8_once(&l_Std_Http_Request_instEncodeV11Head___lam__3___closed__2, &l_Std_Http_Request_instEncodeV11Head___lam__3___closed__2_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__2);
v___x_741_ = lean_unsigned_to_nat(1u);
v___x_742_ = lean_mk_empty_array_with_capacity(v___x_741_);
v___x_743_ = lean_box(v___x_740_);
v___x_744_ = lean_array_push(v___x_742_, v___x_743_);
v___x_745_ = lean_byte_array_mk(v___x_744_);
return v___x_745_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__4(void){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__3___closed__3, &l_Std_Http_Request_instEncodeV11Head___lam__3___closed__3_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__3);
v___x_747_ = lean_byte_array_size(v___x_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__3(lean_object* v___f_748_, lean_object* v___f_749_, lean_object* v___f_750_, lean_object* v_buffer_751_, lean_object* v_req_752_){
_start:
{
uint8_t v_method_753_; uint8_t v_version_754_; lean_object* v_uri_755_; lean_object* v_headers_756_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_783_; lean_object* v___y_784_; lean_object* v___y_785_; lean_object* v___y_786_; lean_object* v___y_787_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v___y_802_; lean_object* v___y_803_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v_port_813_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v_host_827_; lean_object* v_port_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___y_848_; lean_object* v___y_849_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_898_; lean_object* v___y_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_912_; lean_object* v___y_913_; lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v___y_916_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v_port_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_923_; lean_object* v___y_932_; lean_object* v___y_933_; lean_object* v___y_934_; lean_object* v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v_host_939_; lean_object* v_port_940_; lean_object* v___y_941_; lean_object* v___y_942_; lean_object* v___y_943_; lean_object* v___y_954_; lean_object* v___y_955_; lean_object* v___y_956_; lean_object* v___y_957_; lean_object* v___y_958_; lean_object* v___y_959_; lean_object* v___y_963_; 
v_method_753_ = lean_ctor_get_uint8(v_req_752_, sizeof(void*)*2);
v_version_754_ = lean_ctor_get_uint8(v_req_752_, sizeof(void*)*2 + 1);
v_uri_755_ = lean_ctor_get(v_req_752_, 0);
lean_inc(v_uri_755_);
v_headers_756_ = lean_ctor_get(v_req_752_, 1);
lean_inc_ref(v_headers_756_);
lean_dec_ref(v_req_752_);
switch(v_method_753_)
{
case 0:
{
lean_object* v___x_1045_; 
v___x_1045_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__24));
v___y_963_ = v___x_1045_;
goto v___jp_962_;
}
case 1:
{
lean_object* v___x_1046_; 
v___x_1046_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__25));
v___y_963_ = v___x_1046_;
goto v___jp_962_;
}
case 2:
{
lean_object* v___x_1047_; 
v___x_1047_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__26));
v___y_963_ = v___x_1047_;
goto v___jp_962_;
}
case 3:
{
lean_object* v___x_1048_; 
v___x_1048_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__27));
v___y_963_ = v___x_1048_;
goto v___jp_962_;
}
case 4:
{
lean_object* v___x_1049_; 
v___x_1049_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__28));
v___y_963_ = v___x_1049_;
goto v___jp_962_;
}
case 5:
{
lean_object* v___x_1050_; 
v___x_1050_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__29));
v___y_963_ = v___x_1050_;
goto v___jp_962_;
}
case 6:
{
lean_object* v___x_1051_; 
v___x_1051_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__30));
v___y_963_ = v___x_1051_;
goto v___jp_962_;
}
case 7:
{
lean_object* v___x_1052_; 
v___x_1052_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__31));
v___y_963_ = v___x_1052_;
goto v___jp_962_;
}
case 8:
{
lean_object* v___x_1053_; 
v___x_1053_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__32));
v___y_963_ = v___x_1053_;
goto v___jp_962_;
}
case 9:
{
lean_object* v___x_1054_; 
v___x_1054_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__33));
v___y_963_ = v___x_1054_;
goto v___jp_962_;
}
case 10:
{
lean_object* v___x_1055_; 
v___x_1055_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__34));
v___y_963_ = v___x_1055_;
goto v___jp_962_;
}
case 11:
{
lean_object* v___x_1056_; 
v___x_1056_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__35));
v___y_963_ = v___x_1056_;
goto v___jp_962_;
}
case 12:
{
lean_object* v___x_1057_; 
v___x_1057_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__36));
v___y_963_ = v___x_1057_;
goto v___jp_962_;
}
case 13:
{
lean_object* v___x_1058_; 
v___x_1058_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__37));
v___y_963_ = v___x_1058_;
goto v___jp_962_;
}
case 14:
{
lean_object* v___x_1059_; 
v___x_1059_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__38));
v___y_963_ = v___x_1059_;
goto v___jp_962_;
}
case 15:
{
lean_object* v___x_1060_; 
v___x_1060_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__39));
v___y_963_ = v___x_1060_;
goto v___jp_962_;
}
case 16:
{
lean_object* v___x_1061_; 
v___x_1061_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__40));
v___y_963_ = v___x_1061_;
goto v___jp_962_;
}
case 17:
{
lean_object* v___x_1062_; 
v___x_1062_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__41));
v___y_963_ = v___x_1062_;
goto v___jp_962_;
}
case 18:
{
lean_object* v___x_1063_; 
v___x_1063_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__42));
v___y_963_ = v___x_1063_;
goto v___jp_962_;
}
case 19:
{
lean_object* v___x_1064_; 
v___x_1064_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__43));
v___y_963_ = v___x_1064_;
goto v___jp_962_;
}
case 20:
{
lean_object* v___x_1065_; 
v___x_1065_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__44));
v___y_963_ = v___x_1065_;
goto v___jp_962_;
}
case 21:
{
lean_object* v___x_1066_; 
v___x_1066_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__45));
v___y_963_ = v___x_1066_;
goto v___jp_962_;
}
case 22:
{
lean_object* v___x_1067_; 
v___x_1067_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__46));
v___y_963_ = v___x_1067_;
goto v___jp_962_;
}
case 23:
{
lean_object* v___x_1068_; 
v___x_1068_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__47));
v___y_963_ = v___x_1068_;
goto v___jp_962_;
}
case 24:
{
lean_object* v___x_1069_; 
v___x_1069_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__48));
v___y_963_ = v___x_1069_;
goto v___jp_962_;
}
case 25:
{
lean_object* v___x_1070_; 
v___x_1070_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__49));
v___y_963_ = v___x_1070_;
goto v___jp_962_;
}
case 26:
{
lean_object* v___x_1071_; 
v___x_1071_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__50));
v___y_963_ = v___x_1071_;
goto v___jp_962_;
}
case 27:
{
lean_object* v___x_1072_; 
v___x_1072_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__51));
v___y_963_ = v___x_1072_;
goto v___jp_962_;
}
case 28:
{
lean_object* v___x_1073_; 
v___x_1073_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__52));
v___y_963_ = v___x_1073_;
goto v___jp_962_;
}
case 29:
{
lean_object* v___x_1074_; 
v___x_1074_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__53));
v___y_963_ = v___x_1074_;
goto v___jp_962_;
}
case 30:
{
lean_object* v___x_1075_; 
v___x_1075_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__54));
v___y_963_ = v___x_1075_;
goto v___jp_962_;
}
case 31:
{
lean_object* v___x_1076_; 
v___x_1076_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__55));
v___y_963_ = v___x_1076_;
goto v___jp_962_;
}
case 32:
{
lean_object* v___x_1077_; 
v___x_1077_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__56));
v___y_963_ = v___x_1077_;
goto v___jp_962_;
}
case 33:
{
lean_object* v___x_1078_; 
v___x_1078_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__57));
v___y_963_ = v___x_1078_;
goto v___jp_962_;
}
case 34:
{
lean_object* v___x_1079_; 
v___x_1079_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__58));
v___y_963_ = v___x_1079_;
goto v___jp_962_;
}
case 35:
{
lean_object* v___x_1080_; 
v___x_1080_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__59));
v___y_963_ = v___x_1080_;
goto v___jp_962_;
}
case 36:
{
lean_object* v___x_1081_; 
v___x_1081_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__60));
v___y_963_ = v___x_1081_;
goto v___jp_962_;
}
case 37:
{
lean_object* v___x_1082_; 
v___x_1082_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__61));
v___y_963_ = v___x_1082_;
goto v___jp_962_;
}
case 38:
{
lean_object* v___x_1083_; 
v___x_1083_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__62));
v___y_963_ = v___x_1083_;
goto v___jp_962_;
}
default: 
{
lean_object* v___x_1084_; 
v___x_1084_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__63));
v___y_963_ = v___x_1084_;
goto v___jp_962_;
}
}
v___jp_757_:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v_buffer_769_; lean_object* v_buffer_770_; lean_object* v_data_771_; lean_object* v_size_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_781_; 
v___x_761_ = lean_string_to_utf8(v___y_760_);
lean_inc_ref(v___x_761_);
v___x_762_ = lean_array_push(v___y_758_, v___x_761_);
v___x_763_ = lean_byte_array_size(v___x_761_);
lean_dec_ref(v___x_761_);
v___x_764_ = lean_nat_add(v___y_759_, v___x_763_);
lean_dec(v___y_759_);
v___x_765_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__3___closed__0, &l_Std_Http_Request_instEncodeV11Head___lam__3___closed__0_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__0);
v___x_766_ = lean_array_push(v___x_762_, v___x_765_);
v___x_767_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__3___closed__1, &l_Std_Http_Request_instEncodeV11Head___lam__3___closed__1_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__1);
v___x_768_ = lean_nat_add(v___x_764_, v___x_767_);
lean_dec(v___x_764_);
v_buffer_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_buffer_769_, 0, v___x_766_);
lean_ctor_set(v_buffer_769_, 1, v___x_768_);
v_buffer_770_ = l_Std_Http_Headers_fold___redArg(v_headers_756_, v_buffer_769_, v___f_748_);
lean_dec_ref(v_headers_756_);
v_data_771_ = lean_ctor_get(v_buffer_770_, 0);
v_size_772_ = lean_ctor_get(v_buffer_770_, 1);
v_isSharedCheck_781_ = !lean_is_exclusive(v_buffer_770_);
if (v_isSharedCheck_781_ == 0)
{
v___x_774_ = v_buffer_770_;
v_isShared_775_ = v_isSharedCheck_781_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_size_772_);
lean_inc(v_data_771_);
lean_dec(v_buffer_770_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_781_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_779_; 
v___x_776_ = lean_array_push(v_data_771_, v___x_765_);
v___x_777_ = lean_nat_add(v_size_772_, v___x_767_);
lean_dec(v_size_772_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 1, v___x_777_);
lean_ctor_set(v___x_774_, 0, v___x_776_);
v___x_779_ = v___x_774_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_776_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v___x_777_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
v___jp_782_:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_788_ = lean_string_to_utf8(v___y_787_);
lean_dec_ref(v___y_787_);
lean_inc_ref(v___x_788_);
v___x_789_ = lean_array_push(v___y_785_, v___x_788_);
v___x_790_ = lean_byte_array_size(v___x_788_);
lean_dec_ref(v___x_788_);
v___x_791_ = lean_nat_add(v___y_786_, v___x_790_);
lean_dec(v___y_786_);
v___x_792_ = lean_array_push(v___x_789_, v___y_783_);
v___x_793_ = lean_nat_add(v___x_791_, v___y_784_);
lean_dec(v___x_791_);
switch(v_version_754_)
{
case 0:
{
lean_object* v___x_794_; 
v___x_794_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__11));
v___y_758_ = v___x_792_;
v___y_759_ = v___x_793_;
v___y_760_ = v___x_794_;
goto v___jp_757_;
}
case 1:
{
lean_object* v___x_795_; 
v___x_795_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__12));
v___y_758_ = v___x_792_;
v___y_759_ = v___x_793_;
v___y_760_ = v___x_795_;
goto v___jp_757_;
}
case 2:
{
lean_object* v___x_796_; 
v___x_796_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__13));
v___y_758_ = v___x_792_;
v___y_759_ = v___x_793_;
v___y_760_ = v___x_796_;
goto v___jp_757_;
}
default: 
{
lean_object* v___x_797_; 
v___x_797_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__14));
v___y_758_ = v___x_792_;
v___y_759_ = v___x_793_;
v___y_760_ = v___x_797_;
goto v___jp_757_;
}
}
}
v___jp_798_:
{
lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_806_ = lean_string_append(v___y_803_, v___y_800_);
lean_dec_ref(v___y_800_);
v___x_807_ = lean_string_append(v___x_806_, v___y_805_);
lean_dec_ref(v___y_805_);
v___y_783_ = v___y_799_;
v___y_784_ = v___y_801_;
v___y_785_ = v___y_802_;
v___y_786_ = v___y_804_;
v___y_787_ = v___x_807_;
goto v___jp_782_;
}
v___jp_808_:
{
switch(lean_obj_tag(v_port_813_))
{
case 0:
{
lean_object* v___x_816_; 
v___x_816_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_799_ = v___y_809_;
v___y_800_ = v___y_815_;
v___y_801_ = v___y_810_;
v___y_802_ = v___y_812_;
v___y_803_ = v___y_811_;
v___y_804_ = v___y_814_;
v___y_805_ = v___x_816_;
goto v___jp_798_;
}
case 1:
{
lean_object* v___x_817_; 
v___x_817_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___y_799_ = v___y_809_;
v___y_800_ = v___y_815_;
v___y_801_ = v___y_810_;
v___y_802_ = v___y_812_;
v___y_803_ = v___y_811_;
v___y_804_ = v___y_814_;
v___y_805_ = v___x_817_;
goto v___jp_798_;
}
default: 
{
uint16_t v_port_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_port_818_ = lean_ctor_get_uint16(v_port_813_, 0);
lean_dec_ref_known(v_port_813_, 0);
v___x_819_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___x_820_ = lean_uint16_to_nat(v_port_818_);
v___x_821_ = l_Nat_reprFast(v___x_820_);
v___x_822_ = lean_string_append(v___x_819_, v___x_821_);
lean_dec_ref(v___x_821_);
v___y_799_ = v___y_809_;
v___y_800_ = v___y_815_;
v___y_801_ = v___y_810_;
v___y_802_ = v___y_812_;
v___y_803_ = v___y_811_;
v___y_804_ = v___y_814_;
v___y_805_ = v___x_822_;
goto v___jp_798_;
}
}
}
v___jp_823_:
{
switch(lean_obj_tag(v_host_827_))
{
case 0:
{
lean_object* v_name_831_; 
v_name_831_ = lean_ctor_get(v_host_827_, 0);
lean_inc_ref(v_name_831_);
lean_dec_ref_known(v_host_827_, 1);
v___y_809_ = v___y_824_;
v___y_810_ = v___y_825_;
v___y_811_ = v___y_830_;
v___y_812_ = v___y_826_;
v_port_813_ = v_port_828_;
v___y_814_ = v___y_829_;
v___y_815_ = v_name_831_;
goto v___jp_808_;
}
case 1:
{
lean_object* v_ipv4_832_; lean_object* v___x_833_; 
v_ipv4_832_ = lean_ctor_get(v_host_827_, 0);
lean_inc_ref(v_ipv4_832_);
lean_dec_ref_known(v_host_827_, 1);
v___x_833_ = lean_uv_ntop_v4(v_ipv4_832_);
lean_dec_ref(v_ipv4_832_);
v___y_809_ = v___y_824_;
v___y_810_ = v___y_825_;
v___y_811_ = v___y_830_;
v___y_812_ = v___y_826_;
v_port_813_ = v_port_828_;
v___y_814_ = v___y_829_;
v___y_815_ = v___x_833_;
goto v___jp_808_;
}
default: 
{
lean_object* v_ipv6_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v_ipv6_834_ = lean_ctor_get(v_host_827_, 0);
lean_inc_ref(v_ipv6_834_);
lean_dec_ref_known(v_host_827_, 1);
v___x_835_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__18));
v___x_836_ = lean_uv_ntop_v6(v_ipv6_834_);
lean_dec_ref(v_ipv6_834_);
v___x_837_ = lean_string_append(v___x_835_, v___x_836_);
lean_dec_ref(v___x_836_);
v___x_838_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__19));
v___x_839_ = lean_string_append(v___x_837_, v___x_838_);
v___y_809_ = v___y_824_;
v___y_810_ = v___y_825_;
v___y_811_ = v___y_830_;
v___y_812_ = v___y_826_;
v_port_813_ = v_port_828_;
v___y_814_ = v___y_829_;
v___y_815_ = v___x_839_;
goto v___jp_808_;
}
}
}
v___jp_840_:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_850_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___x_851_ = lean_string_append(v___y_842_, v___x_850_);
v___x_852_ = lean_string_append(v___x_851_, v___y_843_);
lean_dec_ref(v___y_843_);
v___x_853_ = lean_string_append(v___x_852_, v___y_846_);
lean_dec_ref(v___y_846_);
v___x_854_ = lean_string_append(v___x_853_, v___y_847_);
lean_dec_ref(v___y_847_);
v___x_855_ = lean_string_append(v___x_854_, v___y_849_);
lean_dec_ref(v___y_849_);
v___y_783_ = v___y_841_;
v___y_784_ = v___y_844_;
v___y_785_ = v___y_845_;
v___y_786_ = v___y_848_;
v___y_787_ = v___x_855_;
goto v___jp_782_;
}
v___jp_856_:
{
lean_object* v_queryPart_866_; 
v_queryPart_866_ = l_Std_Http_URI_Query_formatOption(v___y_862_);
if (lean_obj_tag(v___y_863_) == 0)
{
lean_object* v___x_867_; 
v___x_867_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_841_ = v___y_857_;
v___y_842_ = v___y_858_;
v___y_843_ = v___y_859_;
v___y_844_ = v___y_860_;
v___y_845_ = v___y_861_;
v___y_846_ = v___y_865_;
v___y_847_ = v_queryPart_866_;
v___y_848_ = v___y_864_;
v___y_849_ = v___x_867_;
goto v___jp_840_;
}
else
{
lean_object* v_val_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_val_868_ = lean_ctor_get(v___y_863_, 0);
lean_inc(v_val_868_);
lean_dec_ref_known(v___y_863_, 1);
v___x_869_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__16));
v___x_870_ = l_Std_Http_URI_EncodedFragment_encode(v_val_868_);
lean_dec(v_val_868_);
v___x_871_ = lean_string_from_utf8_unchecked(v___x_870_);
v___x_872_ = lean_string_append(v___x_869_, v___x_871_);
lean_dec_ref(v___x_871_);
v___y_841_ = v___y_857_;
v___y_842_ = v___y_858_;
v___y_843_ = v___y_859_;
v___y_844_ = v___y_860_;
v___y_845_ = v___y_861_;
v___y_846_ = v___y_865_;
v___y_847_ = v_queryPart_866_;
v___y_848_ = v___y_864_;
v___y_849_ = v___x_872_;
goto v___jp_840_;
}
}
v___jp_873_:
{
lean_object* v_segments_883_; uint8_t v_absolute_884_; lean_object* v___x_885_; lean_object* v___x_886_; size_t v_sz_887_; size_t v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v_result_893_; 
v_segments_883_ = lean_ctor_get(v___y_879_, 0);
lean_inc_ref(v_segments_883_);
v_absolute_884_ = lean_ctor_get_uint8(v___y_879_, sizeof(void*)*1);
lean_dec_ref(v___y_879_);
v___x_885_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__17));
v___x_886_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__10));
v_sz_887_ = lean_array_size(v_segments_883_);
v___x_888_ = ((size_t)0ULL);
v___x_889_ = l_unsafeCast___redArg(v_segments_883_);
lean_dec_ref(v_segments_883_);
v___x_890_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_886_, v___f_749_, v_sz_887_, v___x_888_, v___x_889_);
v___x_891_ = l_unsafeCast___redArg(v___x_890_);
lean_dec(v___x_890_);
v___x_892_ = lean_array_to_list(v___x_891_);
v_result_893_ = l_String_intercalate(v___x_885_, v___x_892_);
if (v_absolute_884_ == 0)
{
v___y_857_ = v___y_874_;
v___y_858_ = v___y_875_;
v___y_859_ = v___y_882_;
v___y_860_ = v___y_876_;
v___y_861_ = v___y_878_;
v___y_862_ = v___y_877_;
v___y_863_ = v___y_880_;
v___y_864_ = v___y_881_;
v___y_865_ = v_result_893_;
goto v___jp_856_;
}
else
{
lean_object* v___x_894_; 
v___x_894_ = lean_string_append(v___x_885_, v_result_893_);
lean_dec_ref(v_result_893_);
v___y_857_ = v___y_874_;
v___y_858_ = v___y_875_;
v___y_859_ = v___y_882_;
v___y_860_ = v___y_876_;
v___y_861_ = v___y_878_;
v___y_862_ = v___y_877_;
v___y_863_ = v___y_880_;
v___y_864_ = v___y_881_;
v___y_865_ = v___x_894_;
goto v___jp_856_;
}
}
v___jp_895_:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_908_ = lean_string_append(v___y_897_, v___y_900_);
lean_dec_ref(v___y_900_);
v___x_909_ = lean_string_append(v___x_908_, v___y_907_);
lean_dec_ref(v___y_907_);
lean_inc_ref(v___y_899_);
v___x_910_ = lean_string_append(v___y_899_, v___x_909_);
lean_dec_ref(v___x_909_);
v___y_874_ = v___y_896_;
v___y_875_ = v___y_898_;
v___y_876_ = v___y_901_;
v___y_877_ = v___y_903_;
v___y_878_ = v___y_902_;
v___y_879_ = v___y_904_;
v___y_880_ = v___y_905_;
v___y_881_ = v___y_906_;
v___y_882_ = v___x_910_;
goto v___jp_873_;
}
v___jp_911_:
{
switch(lean_obj_tag(v_port_920_))
{
case 0:
{
lean_object* v___x_924_; 
v___x_924_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_896_ = v___y_913_;
v___y_897_ = v___y_912_;
v___y_898_ = v___y_914_;
v___y_899_ = v___y_915_;
v___y_900_ = v___y_923_;
v___y_901_ = v___y_916_;
v___y_902_ = v___y_918_;
v___y_903_ = v___y_917_;
v___y_904_ = v___y_919_;
v___y_905_ = v___y_921_;
v___y_906_ = v___y_922_;
v___y_907_ = v___x_924_;
goto v___jp_895_;
}
case 1:
{
lean_object* v___x_925_; 
v___x_925_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___y_896_ = v___y_913_;
v___y_897_ = v___y_912_;
v___y_898_ = v___y_914_;
v___y_899_ = v___y_915_;
v___y_900_ = v___y_923_;
v___y_901_ = v___y_916_;
v___y_902_ = v___y_918_;
v___y_903_ = v___y_917_;
v___y_904_ = v___y_919_;
v___y_905_ = v___y_921_;
v___y_906_ = v___y_922_;
v___y_907_ = v___x_925_;
goto v___jp_895_;
}
default: 
{
uint16_t v_port_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v_port_926_ = lean_ctor_get_uint16(v_port_920_, 0);
lean_dec_ref_known(v_port_920_, 0);
v___x_927_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___x_928_ = lean_uint16_to_nat(v_port_926_);
v___x_929_ = l_Nat_reprFast(v___x_928_);
v___x_930_ = lean_string_append(v___x_927_, v___x_929_);
lean_dec_ref(v___x_929_);
v___y_896_ = v___y_913_;
v___y_897_ = v___y_912_;
v___y_898_ = v___y_914_;
v___y_899_ = v___y_915_;
v___y_900_ = v___y_923_;
v___y_901_ = v___y_916_;
v___y_902_ = v___y_918_;
v___y_903_ = v___y_917_;
v___y_904_ = v___y_919_;
v___y_905_ = v___y_921_;
v___y_906_ = v___y_922_;
v___y_907_ = v___x_930_;
goto v___jp_895_;
}
}
}
v___jp_931_:
{
switch(lean_obj_tag(v_host_939_))
{
case 0:
{
lean_object* v_name_944_; 
v_name_944_ = lean_ctor_get(v_host_939_, 0);
lean_inc_ref(v_name_944_);
lean_dec_ref_known(v_host_939_, 1);
v___y_912_ = v___y_943_;
v___y_913_ = v___y_932_;
v___y_914_ = v___y_933_;
v___y_915_ = v___y_934_;
v___y_916_ = v___y_935_;
v___y_917_ = v___y_937_;
v___y_918_ = v___y_936_;
v___y_919_ = v___y_938_;
v_port_920_ = v_port_940_;
v___y_921_ = v___y_941_;
v___y_922_ = v___y_942_;
v___y_923_ = v_name_944_;
goto v___jp_911_;
}
case 1:
{
lean_object* v_ipv4_945_; lean_object* v___x_946_; 
v_ipv4_945_ = lean_ctor_get(v_host_939_, 0);
lean_inc_ref(v_ipv4_945_);
lean_dec_ref_known(v_host_939_, 1);
v___x_946_ = lean_uv_ntop_v4(v_ipv4_945_);
lean_dec_ref(v_ipv4_945_);
v___y_912_ = v___y_943_;
v___y_913_ = v___y_932_;
v___y_914_ = v___y_933_;
v___y_915_ = v___y_934_;
v___y_916_ = v___y_935_;
v___y_917_ = v___y_937_;
v___y_918_ = v___y_936_;
v___y_919_ = v___y_938_;
v_port_920_ = v_port_940_;
v___y_921_ = v___y_941_;
v___y_922_ = v___y_942_;
v___y_923_ = v___x_946_;
goto v___jp_911_;
}
default: 
{
lean_object* v_ipv6_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v_ipv6_947_ = lean_ctor_get(v_host_939_, 0);
lean_inc_ref(v_ipv6_947_);
lean_dec_ref_known(v_host_939_, 1);
v___x_948_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__18));
v___x_949_ = lean_uv_ntop_v6(v_ipv6_947_);
lean_dec_ref(v_ipv6_947_);
v___x_950_ = lean_string_append(v___x_948_, v___x_949_);
lean_dec_ref(v___x_949_);
v___x_951_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__19));
v___x_952_ = lean_string_append(v___x_950_, v___x_951_);
v___y_912_ = v___y_943_;
v___y_913_ = v___y_932_;
v___y_914_ = v___y_933_;
v___y_915_ = v___y_934_;
v___y_916_ = v___y_935_;
v___y_917_ = v___y_937_;
v___y_918_ = v___y_936_;
v___y_919_ = v___y_938_;
v_port_920_ = v_port_940_;
v___y_921_ = v___y_941_;
v___y_922_ = v___y_942_;
v___y_923_ = v___x_952_;
goto v___jp_911_;
}
}
}
v___jp_953_:
{
lean_object* v_queryStr_960_; lean_object* v___x_961_; 
v_queryStr_960_ = l_Std_Http_URI_Query_formatOption(v___y_957_);
v___x_961_ = lean_string_append(v___y_959_, v_queryStr_960_);
lean_dec_ref(v_queryStr_960_);
v___y_783_ = v___y_954_;
v___y_784_ = v___y_955_;
v___y_785_ = v___y_956_;
v___y_786_ = v___y_958_;
v___y_787_ = v___x_961_;
goto v___jp_782_;
}
v___jp_962_:
{
lean_object* v_data_964_; lean_object* v_size_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v_data_964_ = lean_ctor_get(v_buffer_751_, 0);
lean_inc_ref(v_data_964_);
v_size_965_ = lean_ctor_get(v_buffer_751_, 1);
lean_inc(v_size_965_);
lean_dec_ref(v_buffer_751_);
v___x_966_ = lean_string_to_utf8(v___y_963_);
lean_inc_ref(v___x_966_);
v___x_967_ = lean_array_push(v_data_964_, v___x_966_);
v___x_968_ = lean_byte_array_size(v___x_966_);
lean_dec_ref(v___x_966_);
v___x_969_ = lean_nat_add(v_size_965_, v___x_968_);
lean_dec(v_size_965_);
v___x_970_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__3___closed__3, &l_Std_Http_Request_instEncodeV11Head___lam__3___closed__3_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__3);
v___x_971_ = lean_array_push(v___x_967_, v___x_970_);
v___x_972_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__3___closed__4, &l_Std_Http_Request_instEncodeV11Head___lam__3___closed__4_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__3___closed__4);
v___x_973_ = lean_nat_add(v___x_969_, v___x_972_);
lean_dec(v___x_969_);
switch(lean_obj_tag(v_uri_755_))
{
case 0:
{
lean_object* v_path_974_; lean_object* v_query_975_; lean_object* v_segments_976_; uint8_t v_absolute_977_; lean_object* v___x_978_; lean_object* v___x_979_; size_t v_sz_980_; size_t v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v_result_986_; 
lean_dec_ref(v___f_749_);
v_path_974_ = lean_ctor_get(v_uri_755_, 0);
lean_inc_ref(v_path_974_);
v_query_975_ = lean_ctor_get(v_uri_755_, 1);
lean_inc(v_query_975_);
lean_dec_ref_known(v_uri_755_, 2);
v_segments_976_ = lean_ctor_get(v_path_974_, 0);
lean_inc_ref(v_segments_976_);
v_absolute_977_ = lean_ctor_get_uint8(v_path_974_, sizeof(void*)*1);
lean_dec_ref(v_path_974_);
v___x_978_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__17));
v___x_979_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__10));
v_sz_980_ = lean_array_size(v_segments_976_);
v___x_981_ = ((size_t)0ULL);
v___x_982_ = l_unsafeCast___redArg(v_segments_976_);
lean_dec_ref(v_segments_976_);
v___x_983_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_979_, v___f_750_, v_sz_980_, v___x_981_, v___x_982_);
v___x_984_ = l_unsafeCast___redArg(v___x_983_);
lean_dec(v___x_983_);
v___x_985_ = lean_array_to_list(v___x_984_);
v_result_986_ = l_String_intercalate(v___x_978_, v___x_985_);
if (v_absolute_977_ == 0)
{
v___y_954_ = v___x_970_;
v___y_955_ = v___x_972_;
v___y_956_ = v___x_971_;
v___y_957_ = v_query_975_;
v___y_958_ = v___x_973_;
v___y_959_ = v_result_986_;
goto v___jp_953_;
}
else
{
lean_object* v___x_987_; 
v___x_987_ = lean_string_append(v___x_978_, v_result_986_);
lean_dec_ref(v_result_986_);
v___y_954_ = v___x_970_;
v___y_955_ = v___x_972_;
v___y_956_ = v___x_971_;
v___y_957_ = v_query_975_;
v___y_958_ = v___x_973_;
v___y_959_ = v___x_987_;
goto v___jp_953_;
}
}
case 1:
{
lean_object* v_uri_988_; lean_object* v_authority_989_; 
lean_dec_ref(v___f_750_);
v_uri_988_ = lean_ctor_get(v_uri_755_, 0);
lean_inc_ref(v_uri_988_);
lean_dec_ref_known(v_uri_755_, 1);
v_authority_989_ = lean_ctor_get(v_uri_988_, 1);
if (lean_obj_tag(v_authority_989_) == 0)
{
lean_object* v_scheme_990_; lean_object* v_path_991_; lean_object* v_query_992_; lean_object* v_fragment_993_; lean_object* v___x_994_; 
v_scheme_990_ = lean_ctor_get(v_uri_988_, 0);
lean_inc_ref(v_scheme_990_);
v_path_991_ = lean_ctor_get(v_uri_988_, 2);
lean_inc_ref(v_path_991_);
v_query_992_ = lean_ctor_get(v_uri_988_, 3);
lean_inc(v_query_992_);
v_fragment_993_ = lean_ctor_get(v_uri_988_, 4);
lean_inc(v_fragment_993_);
lean_dec_ref(v_uri_988_);
v___x_994_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_874_ = v___x_970_;
v___y_875_ = v_scheme_990_;
v___y_876_ = v___x_972_;
v___y_877_ = v_query_992_;
v___y_878_ = v___x_971_;
v___y_879_ = v_path_991_;
v___y_880_ = v_fragment_993_;
v___y_881_ = v___x_973_;
v___y_882_ = v___x_994_;
goto v___jp_873_;
}
else
{
lean_object* v_val_995_; lean_object* v_scheme_996_; lean_object* v_path_997_; lean_object* v_query_998_; lean_object* v_fragment_999_; lean_object* v_userInfo_1000_; lean_object* v_host_1001_; lean_object* v_port_1002_; lean_object* v___x_1003_; 
v_val_995_ = lean_ctor_get(v_authority_989_, 0);
lean_inc(v_val_995_);
v_scheme_996_ = lean_ctor_get(v_uri_988_, 0);
lean_inc_ref(v_scheme_996_);
v_path_997_ = lean_ctor_get(v_uri_988_, 2);
lean_inc_ref(v_path_997_);
v_query_998_ = lean_ctor_get(v_uri_988_, 3);
lean_inc(v_query_998_);
v_fragment_999_ = lean_ctor_get(v_uri_988_, 4);
lean_inc(v_fragment_999_);
lean_dec_ref(v_uri_988_);
v_userInfo_1000_ = lean_ctor_get(v_val_995_, 0);
lean_inc(v_userInfo_1000_);
v_host_1001_ = lean_ctor_get(v_val_995_, 1);
lean_inc_ref(v_host_1001_);
v_port_1002_ = lean_ctor_get(v_val_995_, 2);
lean_inc(v_port_1002_);
lean_dec(v_val_995_);
v___x_1003_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__21));
if (lean_obj_tag(v_userInfo_1000_) == 0)
{
lean_object* v___x_1004_; 
v___x_1004_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_932_ = v___x_970_;
v___y_933_ = v_scheme_996_;
v___y_934_ = v___x_1003_;
v___y_935_ = v___x_972_;
v___y_936_ = v___x_971_;
v___y_937_ = v_query_998_;
v___y_938_ = v_path_997_;
v_host_939_ = v_host_1001_;
v_port_940_ = v_port_1002_;
v___y_941_ = v_fragment_999_;
v___y_942_ = v___x_973_;
v___y_943_ = v___x_1004_;
goto v___jp_931_;
}
else
{
lean_object* v_val_1005_; lean_object* v_password_1006_; 
v_val_1005_ = lean_ctor_get(v_userInfo_1000_, 0);
lean_inc(v_val_1005_);
lean_dec_ref_known(v_userInfo_1000_, 1);
v_password_1006_ = lean_ctor_get(v_val_1005_, 1);
if (lean_obj_tag(v_password_1006_) == 0)
{
lean_object* v_username_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v_username_1007_ = lean_ctor_get(v_val_1005_, 0);
lean_inc_ref(v_username_1007_);
lean_dec(v_val_1005_);
v___x_1008_ = lean_string_from_utf8_unchecked(v_username_1007_);
v___x_1009_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__22));
v___x_1010_ = lean_string_append(v___x_1008_, v___x_1009_);
v___y_932_ = v___x_970_;
v___y_933_ = v_scheme_996_;
v___y_934_ = v___x_1003_;
v___y_935_ = v___x_972_;
v___y_936_ = v___x_971_;
v___y_937_ = v_query_998_;
v___y_938_ = v_path_997_;
v_host_939_ = v_host_1001_;
v_port_940_ = v_port_1002_;
v___y_941_ = v_fragment_999_;
v___y_942_ = v___x_973_;
v___y_943_ = v___x_1010_;
goto v___jp_931_;
}
else
{
lean_object* v_username_1011_; lean_object* v_val_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
lean_inc_ref(v_password_1006_);
v_username_1011_ = lean_ctor_get(v_val_1005_, 0);
lean_inc_ref(v_username_1011_);
lean_dec(v_val_1005_);
v_val_1012_ = lean_ctor_get(v_password_1006_, 0);
lean_inc(v_val_1012_);
lean_dec_ref_known(v_password_1006_, 1);
v___x_1013_ = lean_string_from_utf8_unchecked(v_username_1011_);
v___x_1014_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___x_1015_ = lean_string_append(v___x_1013_, v___x_1014_);
v___x_1016_ = lean_string_from_utf8_unchecked(v_val_1012_);
v___x_1017_ = lean_string_append(v___x_1015_, v___x_1016_);
lean_dec_ref(v___x_1016_);
v___x_1018_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__22));
v___x_1019_ = lean_string_append(v___x_1017_, v___x_1018_);
v___y_932_ = v___x_970_;
v___y_933_ = v_scheme_996_;
v___y_934_ = v___x_1003_;
v___y_935_ = v___x_972_;
v___y_936_ = v___x_971_;
v___y_937_ = v_query_998_;
v___y_938_ = v_path_997_;
v_host_939_ = v_host_1001_;
v_port_940_ = v_port_1002_;
v___y_941_ = v_fragment_999_;
v___y_942_ = v___x_973_;
v___y_943_ = v___x_1019_;
goto v___jp_931_;
}
}
}
}
case 2:
{
lean_object* v_authority_1020_; lean_object* v_userInfo_1021_; 
lean_dec_ref(v___f_750_);
lean_dec_ref(v___f_749_);
v_authority_1020_ = lean_ctor_get(v_uri_755_, 0);
lean_inc_ref(v_authority_1020_);
lean_dec_ref_known(v_uri_755_, 1);
v_userInfo_1021_ = lean_ctor_get(v_authority_1020_, 0);
if (lean_obj_tag(v_userInfo_1021_) == 0)
{
lean_object* v_host_1022_; lean_object* v_port_1023_; lean_object* v___x_1024_; 
v_host_1022_ = lean_ctor_get(v_authority_1020_, 1);
lean_inc_ref(v_host_1022_);
v_port_1023_ = lean_ctor_get(v_authority_1020_, 2);
lean_inc(v_port_1023_);
lean_dec_ref(v_authority_1020_);
v___x_1024_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__4));
v___y_824_ = v___x_970_;
v___y_825_ = v___x_972_;
v___y_826_ = v___x_971_;
v_host_827_ = v_host_1022_;
v_port_828_ = v_port_1023_;
v___y_829_ = v___x_973_;
v___y_830_ = v___x_1024_;
goto v___jp_823_;
}
else
{
lean_object* v_val_1025_; lean_object* v_password_1026_; 
v_val_1025_ = lean_ctor_get(v_userInfo_1021_, 0);
lean_inc(v_val_1025_);
v_password_1026_ = lean_ctor_get(v_val_1025_, 1);
if (lean_obj_tag(v_password_1026_) == 0)
{
lean_object* v_host_1027_; lean_object* v_port_1028_; lean_object* v_username_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v_host_1027_ = lean_ctor_get(v_authority_1020_, 1);
lean_inc_ref(v_host_1027_);
v_port_1028_ = lean_ctor_get(v_authority_1020_, 2);
lean_inc(v_port_1028_);
lean_dec_ref(v_authority_1020_);
v_username_1029_ = lean_ctor_get(v_val_1025_, 0);
lean_inc_ref(v_username_1029_);
lean_dec(v_val_1025_);
v___x_1030_ = lean_string_from_utf8_unchecked(v_username_1029_);
v___x_1031_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__22));
v___x_1032_ = lean_string_append(v___x_1030_, v___x_1031_);
v___y_824_ = v___x_970_;
v___y_825_ = v___x_972_;
v___y_826_ = v___x_971_;
v_host_827_ = v_host_1027_;
v_port_828_ = v_port_1028_;
v___y_829_ = v___x_973_;
v___y_830_ = v___x_1032_;
goto v___jp_823_;
}
else
{
lean_object* v_host_1033_; lean_object* v_port_1034_; lean_object* v_username_1035_; lean_object* v_val_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
lean_inc_ref(v_password_1026_);
v_host_1033_ = lean_ctor_get(v_authority_1020_, 1);
lean_inc_ref(v_host_1033_);
v_port_1034_ = lean_ctor_get(v_authority_1020_, 2);
lean_inc(v_port_1034_);
lean_dec_ref(v_authority_1020_);
v_username_1035_ = lean_ctor_get(v_val_1025_, 0);
lean_inc_ref(v_username_1035_);
lean_dec(v_val_1025_);
v_val_1036_ = lean_ctor_get(v_password_1026_, 0);
lean_inc(v_val_1036_);
lean_dec_ref_known(v_password_1026_, 1);
v___x_1037_ = lean_string_from_utf8_unchecked(v_username_1035_);
v___x_1038_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__15));
v___x_1039_ = lean_string_append(v___x_1037_, v___x_1038_);
v___x_1040_ = lean_string_from_utf8_unchecked(v_val_1036_);
v___x_1041_ = lean_string_append(v___x_1039_, v___x_1040_);
lean_dec_ref(v___x_1040_);
v___x_1042_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__22));
v___x_1043_ = lean_string_append(v___x_1041_, v___x_1042_);
v___y_824_ = v___x_970_;
v___y_825_ = v___x_972_;
v___y_826_ = v___x_971_;
v_host_827_ = v_host_1033_;
v_port_828_ = v_port_1034_;
v___y_829_ = v___x_973_;
v___y_830_ = v___x_1043_;
goto v___jp_823_;
}
}
}
default: 
{
lean_object* v___x_1044_; 
lean_dec_ref(v___f_750_);
lean_dec_ref(v___f_749_);
v___x_1044_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__4___closed__23));
v___y_783_ = v___x_970_;
v___y_784_ = v___x_972_;
v___y_785_ = v___x_971_;
v___y_786_ = v___x_973_;
v___y_787_ = v___x_1044_;
goto v___jp_782_;
}
}
}
}
}
static lean_object* _init_l_Std_Http_Request_new___closed__0(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; uint8_t v___x_1092_; uint8_t v___x_1093_; lean_object* v___x_1094_; 
v___x_1090_ = l_Std_Http_Headers_empty;
v___x_1091_ = lean_box(3);
v___x_1092_ = 1;
v___x_1093_ = 8;
v___x_1094_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_1094_, 0, v___x_1091_);
lean_ctor_set(v___x_1094_, 1, v___x_1090_);
lean_ctor_set_uint8(v___x_1094_, sizeof(void*)*2, v___x_1093_);
lean_ctor_set_uint8(v___x_1094_, sizeof(void*)*2 + 1, v___x_1092_);
return v___x_1094_;
}
}
static lean_object* _init_l_Std_Http_Request_new___closed__1(void){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1095_ = l_Std_Http_Extensions_empty;
v___x_1096_ = lean_obj_once(&l_Std_Http_Request_new___closed__0, &l_Std_Http_Request_new___closed__0_once, _init_l_Std_Http_Request_new___closed__0);
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
lean_ctor_set(v___x_1097_, 1, v___x_1095_);
return v___x_1097_;
}
}
static lean_object* _init_l_Std_Http_Request_new(void){
_start:
{
lean_object* v___x_1098_; 
v___x_1098_ = lean_obj_once(&l_Std_Http_Request_new___closed__1, &l_Std_Http_Request_new___closed__1_once, _init_l_Std_Http_Request_new___closed__1);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_method(lean_object* v_builder_1099_, uint8_t v_method_1100_){
_start:
{
lean_object* v_line_1101_; lean_object* v_extensions_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1119_; 
v_line_1101_ = lean_ctor_get(v_builder_1099_, 0);
v_extensions_1102_ = lean_ctor_get(v_builder_1099_, 1);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_builder_1099_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1104_ = v_builder_1099_;
v_isShared_1105_ = v_isSharedCheck_1119_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_extensions_1102_);
lean_inc(v_line_1101_);
lean_dec(v_builder_1099_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1119_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
uint8_t v_version_1106_; lean_object* v_uri_1107_; lean_object* v_headers_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1118_; 
v_version_1106_ = lean_ctor_get_uint8(v_line_1101_, sizeof(void*)*2 + 1);
v_uri_1107_ = lean_ctor_get(v_line_1101_, 0);
v_headers_1108_ = lean_ctor_get(v_line_1101_, 1);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_line_1101_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1110_ = v_line_1101_;
v_isShared_1111_ = v_isSharedCheck_1118_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_headers_1108_);
lean_inc(v_uri_1107_);
lean_dec(v_line_1101_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1118_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_uri_1107_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_headers_1108_);
lean_ctor_set_uint8(v_reuseFailAlloc_1117_, sizeof(void*)*2 + 1, v_version_1106_);
v___x_1113_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
lean_object* v___x_1115_; 
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*2, v_method_1100_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 0, v___x_1113_);
v___x_1115_ = v___x_1104_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1113_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_extensions_1102_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_method___boxed(lean_object* v_builder_1120_, lean_object* v_method_1121_){
_start:
{
uint8_t v_method_boxed_1122_; lean_object* v_res_1123_; 
v_method_boxed_1122_ = lean_unbox(v_method_1121_);
v_res_1123_ = l_Std_Http_Request_Builder_method(v_builder_1120_, v_method_boxed_1122_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_version(lean_object* v_builder_1124_, uint8_t v_version_1125_){
_start:
{
lean_object* v_line_1126_; lean_object* v_extensions_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1144_; 
v_line_1126_ = lean_ctor_get(v_builder_1124_, 0);
v_extensions_1127_ = lean_ctor_get(v_builder_1124_, 1);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_builder_1124_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1129_ = v_builder_1124_;
v_isShared_1130_ = v_isSharedCheck_1144_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_extensions_1127_);
lean_inc(v_line_1126_);
lean_dec(v_builder_1124_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1144_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
uint8_t v_method_1131_; lean_object* v_uri_1132_; lean_object* v_headers_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1143_; 
v_method_1131_ = lean_ctor_get_uint8(v_line_1126_, sizeof(void*)*2);
v_uri_1132_ = lean_ctor_get(v_line_1126_, 0);
v_headers_1133_ = lean_ctor_get(v_line_1126_, 1);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_line_1126_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1135_ = v_line_1126_;
v_isShared_1136_ = v_isSharedCheck_1143_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_headers_1133_);
lean_inc(v_uri_1132_);
lean_dec(v_line_1126_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1143_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1138_; 
if (v_isShared_1136_ == 0)
{
v___x_1138_ = v___x_1135_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_uri_1132_);
lean_ctor_set(v_reuseFailAlloc_1142_, 1, v_headers_1133_);
lean_ctor_set_uint8(v_reuseFailAlloc_1142_, sizeof(void*)*2, v_method_1131_);
v___x_1138_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
lean_object* v___x_1140_; 
lean_ctor_set_uint8(v___x_1138_, sizeof(void*)*2 + 1, v_version_1125_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 0, v___x_1138_);
v___x_1140_ = v___x_1129_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v___x_1138_);
lean_ctor_set(v_reuseFailAlloc_1141_, 1, v_extensions_1127_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_version___boxed(lean_object* v_builder_1145_, lean_object* v_version_1146_){
_start:
{
uint8_t v_version_boxed_1147_; lean_object* v_res_1148_; 
v_version_boxed_1147_ = lean_unbox(v_version_1146_);
v_res_1148_ = l_Std_Http_Request_Builder_version(v_builder_1145_, v_version_boxed_1147_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri(lean_object* v_builder_1149_, lean_object* v_uri_1150_){
_start:
{
lean_object* v_line_1151_; lean_object* v_extensions_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1170_; 
v_line_1151_ = lean_ctor_get(v_builder_1149_, 0);
v_extensions_1152_ = lean_ctor_get(v_builder_1149_, 1);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_builder_1149_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1154_ = v_builder_1149_;
v_isShared_1155_ = v_isSharedCheck_1170_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_extensions_1152_);
lean_inc(v_line_1151_);
lean_dec(v_builder_1149_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1170_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
uint8_t v_method_1156_; uint8_t v_version_1157_; lean_object* v_headers_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1168_; 
v_method_1156_ = lean_ctor_get_uint8(v_line_1151_, sizeof(void*)*2);
v_version_1157_ = lean_ctor_get_uint8(v_line_1151_, sizeof(void*)*2 + 1);
v_headers_1158_ = lean_ctor_get(v_line_1151_, 1);
v_isSharedCheck_1168_ = !lean_is_exclusive(v_line_1151_);
if (v_isSharedCheck_1168_ == 0)
{
lean_object* v_unused_1169_; 
v_unused_1169_ = lean_ctor_get(v_line_1151_, 0);
lean_dec(v_unused_1169_);
v___x_1160_ = v_line_1151_;
v_isShared_1161_ = v_isSharedCheck_1168_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_headers_1158_);
lean_dec(v_line_1151_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1168_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v_uri_1150_);
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_uri_1150_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v_headers_1158_);
lean_ctor_set_uint8(v_reuseFailAlloc_1167_, sizeof(void*)*2, v_method_1156_);
lean_ctor_set_uint8(v_reuseFailAlloc_1167_, sizeof(void*)*2 + 1, v_version_1157_);
v___x_1163_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1165_; 
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v___x_1163_);
v___x_1165_ = v___x_1154_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_extensions_1152_);
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
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_Request_Builder_uri_x21_spec__0(lean_object* v_msg_1171_){
_start:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = l_Std_Http_instInhabitedRequestTarget_default;
v___x_1173_ = lean_panic_fn_borrowed(v___x_1172_, v_msg_1171_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri_x21___lam__0(lean_object* v___x_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = l_Std_Http_URI_Parser_parseRequestTarget(v___x_1177_, v___y_1178_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_pos_1180_; lean_object* v_array_1181_; lean_object* v_idx_1182_; lean_object* v___x_1183_; uint8_t v___x_1184_; 
v_pos_1180_ = lean_ctor_get(v___x_1179_, 0);
lean_inc(v_pos_1180_);
v_array_1181_ = lean_ctor_get(v_pos_1180_, 0);
v_idx_1182_ = lean_ctor_get(v_pos_1180_, 1);
v___x_1183_ = lean_byte_array_size(v_array_1181_);
v___x_1184_ = lean_nat_dec_lt(v_idx_1182_, v___x_1183_);
if (v___x_1184_ == 0)
{
lean_dec(v_pos_1180_);
return v___x_1179_;
}
else
{
lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1192_; 
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1192_ == 0)
{
lean_object* v_unused_1193_; lean_object* v_unused_1194_; 
v_unused_1193_ = lean_ctor_get(v___x_1179_, 1);
lean_dec(v_unused_1193_);
v_unused_1194_ = lean_ctor_get(v___x_1179_, 0);
lean_dec(v_unused_1194_);
v___x_1186_ = v___x_1179_;
v_isShared_1187_ = v_isSharedCheck_1192_;
goto v_resetjp_1185_;
}
else
{
lean_dec(v___x_1179_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1192_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1188_; lean_object* v___x_1190_; 
v___x_1188_ = ((lean_object*)(l_Std_Http_Request_Builder_uri_x21___lam__0___closed__1));
if (v_isShared_1187_ == 0)
{
lean_ctor_set_tag(v___x_1186_, 1);
lean_ctor_set(v___x_1186_, 1, v___x_1188_);
v___x_1190_ = v___x_1186_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_pos_1180_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
else
{
return v___x_1179_;
}
}
}
static lean_object* _init_l_Std_Http_Request_Builder_uri_x21___closed__5(void){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1208_ = ((lean_object*)(l_Std_Http_Request_Builder_uri_x21___closed__4));
v___x_1209_ = lean_unsigned_to_nat(12u);
v___x_1210_ = lean_unsigned_to_nat(45u);
v___x_1211_ = ((lean_object*)(l_Std_Http_Request_Builder_uri_x21___closed__3));
v___x_1212_ = ((lean_object*)(l_Std_Http_Request_Builder_uri_x21___closed__2));
v___x_1213_ = l_mkPanicMessageWithDecl(v___x_1212_, v___x_1211_, v___x_1210_, v___x_1209_, v___x_1208_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri_x21(lean_object* v_builder_1214_, lean_object* v_uri_1215_){
_start:
{
lean_object* v___y_1217_; lean_object* v___f_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___f_1238_ = ((lean_object*)(l_Std_Http_Request_Builder_uri_x21___closed__1));
v___x_1239_ = lean_string_to_utf8(v_uri_1215_);
v___x_1240_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___f_1238_, v___x_1239_);
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
lean_dec_ref_known(v___x_1240_, 1);
v___x_1241_ = lean_obj_once(&l_Std_Http_Request_Builder_uri_x21___closed__5, &l_Std_Http_Request_Builder_uri_x21___closed__5_once, _init_l_Std_Http_Request_Builder_uri_x21___closed__5);
v___x_1242_ = l_panic___at___00Std_Http_Request_Builder_uri_x21_spec__0(v___x_1241_);
v___y_1217_ = v___x_1242_;
goto v___jp_1216_;
}
else
{
lean_object* v_a_1243_; 
v_a_1243_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_a_1243_);
lean_dec_ref_known(v___x_1240_, 1);
v___y_1217_ = v_a_1243_;
goto v___jp_1216_;
}
v___jp_1216_:
{
lean_object* v_line_1218_; lean_object* v_extensions_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1237_; 
v_line_1218_ = lean_ctor_get(v_builder_1214_, 0);
v_extensions_1219_ = lean_ctor_get(v_builder_1214_, 1);
v_isSharedCheck_1237_ = !lean_is_exclusive(v_builder_1214_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1221_ = v_builder_1214_;
v_isShared_1222_ = v_isSharedCheck_1237_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_extensions_1219_);
lean_inc(v_line_1218_);
lean_dec(v_builder_1214_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1237_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
uint8_t v_method_1223_; uint8_t v_version_1224_; lean_object* v_headers_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1235_; 
v_method_1223_ = lean_ctor_get_uint8(v_line_1218_, sizeof(void*)*2);
v_version_1224_ = lean_ctor_get_uint8(v_line_1218_, sizeof(void*)*2 + 1);
v_headers_1225_ = lean_ctor_get(v_line_1218_, 1);
v_isSharedCheck_1235_ = !lean_is_exclusive(v_line_1218_);
if (v_isSharedCheck_1235_ == 0)
{
lean_object* v_unused_1236_; 
v_unused_1236_ = lean_ctor_get(v_line_1218_, 0);
lean_dec(v_unused_1236_);
v___x_1227_ = v_line_1218_;
v_isShared_1228_ = v_isSharedCheck_1235_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_headers_1225_);
lean_dec(v_line_1218_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1235_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 0, v___y_1217_);
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___y_1217_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v_headers_1225_);
lean_ctor_set_uint8(v_reuseFailAlloc_1234_, sizeof(void*)*2, v_method_1223_);
lean_ctor_set_uint8(v_reuseFailAlloc_1234_, sizeof(void*)*2 + 1, v_version_1224_);
v___x_1230_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
lean_object* v___x_1232_; 
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 0, v___x_1230_);
v___x_1232_ = v___x_1221_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v___x_1230_);
lean_ctor_set(v_reuseFailAlloc_1233_, 1, v_extensions_1219_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri_x21___boxed(lean_object* v_builder_1244_, lean_object* v_uri_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Std_Http_Request_Builder_uri_x21(v_builder_1244_, v_uri_1245_);
lean_dec_ref(v_uri_1245_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_headers(lean_object* v_builder_1247_, lean_object* v_headers_1248_){
_start:
{
lean_object* v_line_1249_; lean_object* v_extensions_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1268_; 
v_line_1249_ = lean_ctor_get(v_builder_1247_, 0);
v_extensions_1250_ = lean_ctor_get(v_builder_1247_, 1);
v_isSharedCheck_1268_ = !lean_is_exclusive(v_builder_1247_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1252_ = v_builder_1247_;
v_isShared_1253_ = v_isSharedCheck_1268_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_extensions_1250_);
lean_inc(v_line_1249_);
lean_dec(v_builder_1247_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1268_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
uint8_t v_method_1254_; uint8_t v_version_1255_; lean_object* v_uri_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1266_; 
v_method_1254_ = lean_ctor_get_uint8(v_line_1249_, sizeof(void*)*2);
v_version_1255_ = lean_ctor_get_uint8(v_line_1249_, sizeof(void*)*2 + 1);
v_uri_1256_ = lean_ctor_get(v_line_1249_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v_line_1249_);
if (v_isSharedCheck_1266_ == 0)
{
lean_object* v_unused_1267_; 
v_unused_1267_ = lean_ctor_get(v_line_1249_, 1);
lean_dec(v_unused_1267_);
v___x_1258_ = v_line_1249_;
v_isShared_1259_ = v_isSharedCheck_1266_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_uri_1256_);
lean_dec(v_line_1249_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1266_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 1, v_headers_1248_);
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_uri_1256_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v_headers_1248_);
lean_ctor_set_uint8(v_reuseFailAlloc_1265_, sizeof(void*)*2, v_method_1254_);
lean_ctor_set_uint8(v_reuseFailAlloc_1265_, sizeof(void*)*2 + 1, v_version_1255_);
v___x_1261_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v___x_1263_; 
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v___x_1261_);
v___x_1263_ = v___x_1252_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v___x_1261_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v_extensions_1250_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__2___lam__0(lean_object* v_i_1269_, lean_object* v_x_1270_){
_start:
{
if (lean_obj_tag(v_x_1270_) == 0)
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1271_ = lean_unsigned_to_nat(1u);
v___x_1272_ = lean_mk_empty_array_with_capacity(v___x_1271_);
v___x_1273_ = lean_array_push(v___x_1272_, v_i_1269_);
v___x_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
return v___x_1274_;
}
else
{
lean_object* v_val_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1283_; 
v_val_1275_ = lean_ctor_get(v_x_1270_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v_x_1270_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1277_ = v_x_1270_;
v_isShared_1278_ = v_isSharedCheck_1283_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_val_1275_);
lean_dec(v_x_1270_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1283_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1279_; lean_object* v___x_1281_; 
v___x_1279_ = lean_array_push(v_val_1275_, v_i_1269_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 0, v___x_1279_);
v___x_1281_ = v___x_1277_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1279_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__2(lean_object* v_i_1284_, lean_object* v_a_1285_, lean_object* v_x_1286_){
_start:
{
if (lean_obj_tag(v_x_1286_) == 0)
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v_val_1289_; lean_object* v___x_1290_; 
v___x_1287_ = lean_box(0);
v___x_1288_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__2___lam__0(v_i_1284_, v___x_1287_);
v_val_1289_ = lean_ctor_get(v___x_1288_, 0);
lean_inc(v_val_1289_);
lean_dec(v___x_1288_);
v___x_1290_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1290_, 0, v_a_1285_);
lean_ctor_set(v___x_1290_, 1, v_val_1289_);
lean_ctor_set(v___x_1290_, 2, v_x_1286_);
return v___x_1290_;
}
else
{
lean_object* v_key_1291_; lean_object* v_value_1292_; lean_object* v_tail_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1308_; 
v_key_1291_ = lean_ctor_get(v_x_1286_, 0);
v_value_1292_ = lean_ctor_get(v_x_1286_, 1);
v_tail_1293_ = lean_ctor_get(v_x_1286_, 2);
v_isSharedCheck_1308_ = !lean_is_exclusive(v_x_1286_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1295_ = v_x_1286_;
v_isShared_1296_ = v_isSharedCheck_1308_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_tail_1293_);
lean_inc(v_value_1292_);
lean_inc(v_key_1291_);
lean_dec(v_x_1286_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1308_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
uint8_t v___x_1297_; 
v___x_1297_ = lean_string_dec_eq(v_key_1291_, v_a_1285_);
if (v___x_1297_ == 0)
{
lean_object* v_tail_1298_; lean_object* v___x_1300_; 
v_tail_1298_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__2(v_i_1284_, v_a_1285_, v_tail_1293_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 2, v_tail_1298_);
v___x_1300_ = v___x_1295_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_key_1291_);
lean_ctor_set(v_reuseFailAlloc_1301_, 1, v_value_1292_);
lean_ctor_set(v_reuseFailAlloc_1301_, 2, v_tail_1298_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
else
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v_val_1304_; lean_object* v___x_1306_; 
lean_dec(v_key_1291_);
v___x_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1302_, 0, v_value_1292_);
v___x_1303_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__2___lam__0(v_i_1284_, v___x_1302_);
v_val_1304_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_val_1304_);
lean_dec(v___x_1303_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 1, v_val_1304_);
lean_ctor_set(v___x_1295_, 0, v_a_1285_);
v___x_1306_ = v___x_1295_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1285_);
lean_ctor_set(v_reuseFailAlloc_1307_, 1, v_val_1304_);
lean_ctor_set(v_reuseFailAlloc_1307_, 2, v_tail_1293_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0___redArg(lean_object* v_a_1309_, lean_object* v_x_1310_){
_start:
{
if (lean_obj_tag(v_x_1310_) == 0)
{
uint8_t v___x_1311_; 
v___x_1311_ = 0;
return v___x_1311_;
}
else
{
lean_object* v_key_1312_; lean_object* v_tail_1313_; uint8_t v___x_1314_; 
v_key_1312_ = lean_ctor_get(v_x_1310_, 0);
v_tail_1313_ = lean_ctor_get(v_x_1310_, 2);
v___x_1314_ = lean_string_dec_eq(v_key_1312_, v_a_1309_);
if (v___x_1314_ == 0)
{
v_x_1310_ = v_tail_1313_;
goto _start;
}
else
{
return v___x_1314_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0___redArg___boxed(lean_object* v_a_1316_, lean_object* v_x_1317_){
_start:
{
uint8_t v_res_1318_; lean_object* v_r_1319_; 
v_res_1318_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0___redArg(v_a_1316_, v_x_1317_);
lean_dec(v_x_1317_);
lean_dec_ref(v_a_1316_);
v_r_1319_ = lean_box(v_res_1318_);
return v_r_1319_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1320_, lean_object* v_x_1321_){
_start:
{
if (lean_obj_tag(v_x_1321_) == 0)
{
return v_x_1320_;
}
else
{
lean_object* v_key_1322_; lean_object* v_value_1323_; lean_object* v_tail_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1347_; 
v_key_1322_ = lean_ctor_get(v_x_1321_, 0);
v_value_1323_ = lean_ctor_get(v_x_1321_, 1);
v_tail_1324_ = lean_ctor_get(v_x_1321_, 2);
v_isSharedCheck_1347_ = !lean_is_exclusive(v_x_1321_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1326_ = v_x_1321_;
v_isShared_1327_ = v_isSharedCheck_1347_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_tail_1324_);
lean_inc(v_value_1323_);
lean_inc(v_key_1322_);
lean_dec(v_x_1321_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1347_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1328_; uint64_t v___x_1329_; uint64_t v___x_1330_; uint64_t v___x_1331_; uint64_t v_fold_1332_; uint64_t v___x_1333_; uint64_t v___x_1334_; uint64_t v___x_1335_; size_t v___x_1336_; size_t v___x_1337_; size_t v___x_1338_; size_t v___x_1339_; size_t v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1343_; 
v___x_1328_ = lean_array_get_size(v_x_1320_);
v___x_1329_ = lean_string_hash(v_key_1322_);
v___x_1330_ = 32ULL;
v___x_1331_ = lean_uint64_shift_right(v___x_1329_, v___x_1330_);
v_fold_1332_ = lean_uint64_xor(v___x_1329_, v___x_1331_);
v___x_1333_ = 16ULL;
v___x_1334_ = lean_uint64_shift_right(v_fold_1332_, v___x_1333_);
v___x_1335_ = lean_uint64_xor(v_fold_1332_, v___x_1334_);
v___x_1336_ = lean_uint64_to_usize(v___x_1335_);
v___x_1337_ = lean_usize_of_nat(v___x_1328_);
v___x_1338_ = ((size_t)1ULL);
v___x_1339_ = lean_usize_sub(v___x_1337_, v___x_1338_);
v___x_1340_ = lean_usize_land(v___x_1336_, v___x_1339_);
v___x_1341_ = lean_array_uget_borrowed(v_x_1320_, v___x_1340_);
lean_inc(v___x_1341_);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 2, v___x_1341_);
v___x_1343_ = v___x_1326_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_key_1322_);
lean_ctor_set(v_reuseFailAlloc_1346_, 1, v_value_1323_);
lean_ctor_set(v_reuseFailAlloc_1346_, 2, v___x_1341_);
v___x_1343_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_array_uset(v_x_1320_, v___x_1340_, v___x_1343_);
v_x_1320_ = v___x_1344_;
v_x_1321_ = v_tail_1324_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2___redArg(lean_object* v_i_1348_, lean_object* v_source_1349_, lean_object* v_target_1350_){
_start:
{
lean_object* v___x_1351_; uint8_t v___x_1352_; 
v___x_1351_ = lean_array_get_size(v_source_1349_);
v___x_1352_ = lean_nat_dec_lt(v_i_1348_, v___x_1351_);
if (v___x_1352_ == 0)
{
lean_dec_ref(v_source_1349_);
lean_dec(v_i_1348_);
return v_target_1350_;
}
else
{
lean_object* v_es_1353_; lean_object* v___x_1354_; lean_object* v_source_1355_; lean_object* v_target_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v_es_1353_ = lean_array_fget(v_source_1349_, v_i_1348_);
v___x_1354_ = lean_box(0);
v_source_1355_ = lean_array_fset(v_source_1349_, v_i_1348_, v___x_1354_);
v_target_1356_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2_spec__3___redArg(v_target_1350_, v_es_1353_);
v___x_1357_ = lean_unsigned_to_nat(1u);
v___x_1358_ = lean_nat_add(v_i_1348_, v___x_1357_);
lean_dec(v_i_1348_);
v_i_1348_ = v___x_1358_;
v_source_1349_ = v_source_1355_;
v_target_1350_ = v_target_1356_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1___redArg(lean_object* v_data_1360_){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v_nbuckets_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1361_ = lean_array_get_size(v_data_1360_);
v___x_1362_ = lean_unsigned_to_nat(2u);
v_nbuckets_1363_ = lean_nat_mul(v___x_1361_, v___x_1362_);
v___x_1364_ = lean_unsigned_to_nat(0u);
v___x_1365_ = lean_box(0);
v___x_1366_ = lean_mk_array(v_nbuckets_1363_, v___x_1365_);
v___x_1367_ = lean_array_propagate_mark(v_data_1360_, v___x_1366_);
v___x_1368_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2___redArg(v___x_1364_, v_data_1360_, v___x_1367_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0(lean_object* v_i_1369_, lean_object* v_m_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v_size_1372_; lean_object* v_buckets_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1423_; 
v_size_1372_ = lean_ctor_get(v_m_1370_, 0);
v_buckets_1373_ = lean_ctor_get(v_m_1370_, 1);
v_isSharedCheck_1423_ = !lean_is_exclusive(v_m_1370_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1375_ = v_m_1370_;
v_isShared_1376_ = v_isSharedCheck_1423_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_buckets_1373_);
lean_inc(v_size_1372_);
lean_dec(v_m_1370_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1423_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; uint64_t v___x_1378_; uint64_t v___x_1379_; uint64_t v___x_1380_; uint64_t v_fold_1381_; uint64_t v___x_1382_; uint64_t v___x_1383_; uint64_t v___x_1384_; size_t v___x_1385_; size_t v___x_1386_; size_t v___x_1387_; size_t v___x_1388_; size_t v___x_1389_; lean_object* v_bkt_1390_; uint8_t v___x_1391_; 
v___x_1377_ = lean_array_get_size(v_buckets_1373_);
v___x_1378_ = lean_string_hash(v_a_1371_);
v___x_1379_ = 32ULL;
v___x_1380_ = lean_uint64_shift_right(v___x_1378_, v___x_1379_);
v_fold_1381_ = lean_uint64_xor(v___x_1378_, v___x_1380_);
v___x_1382_ = 16ULL;
v___x_1383_ = lean_uint64_shift_right(v_fold_1381_, v___x_1382_);
v___x_1384_ = lean_uint64_xor(v_fold_1381_, v___x_1383_);
v___x_1385_ = lean_uint64_to_usize(v___x_1384_);
v___x_1386_ = lean_usize_of_nat(v___x_1377_);
v___x_1387_ = ((size_t)1ULL);
v___x_1388_ = lean_usize_sub(v___x_1386_, v___x_1387_);
v___x_1389_ = lean_usize_land(v___x_1385_, v___x_1388_);
v_bkt_1390_ = lean_array_uget_borrowed(v_buckets_1373_, v___x_1389_);
v___x_1391_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0___redArg(v_a_1371_, v_bkt_1390_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v_size_x27_1395_; lean_object* v___x_1396_; lean_object* v_buckets_x27_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; uint8_t v___x_1403_; 
v___x_1392_ = lean_unsigned_to_nat(1u);
v___x_1393_ = lean_mk_empty_array_with_capacity(v___x_1392_);
v___x_1394_ = lean_array_push(v___x_1393_, v_i_1369_);
v_size_x27_1395_ = lean_nat_add(v_size_1372_, v___x_1392_);
lean_dec(v_size_1372_);
lean_inc(v_bkt_1390_);
v___x_1396_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1396_, 0, v_a_1371_);
lean_ctor_set(v___x_1396_, 1, v___x_1394_);
lean_ctor_set(v___x_1396_, 2, v_bkt_1390_);
v_buckets_x27_1397_ = lean_array_uset(v_buckets_1373_, v___x_1389_, v___x_1396_);
v___x_1398_ = lean_unsigned_to_nat(4u);
v___x_1399_ = lean_nat_mul(v_size_x27_1395_, v___x_1398_);
v___x_1400_ = lean_unsigned_to_nat(3u);
v___x_1401_ = lean_nat_div(v___x_1399_, v___x_1400_);
lean_dec(v___x_1399_);
v___x_1402_ = lean_array_get_size(v_buckets_x27_1397_);
v___x_1403_ = lean_nat_dec_le(v___x_1401_, v___x_1402_);
lean_dec(v___x_1401_);
if (v___x_1403_ == 0)
{
lean_object* v_val_1404_; lean_object* v___x_1406_; 
v_val_1404_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1___redArg(v_buckets_x27_1397_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v_val_1404_);
lean_ctor_set(v___x_1375_, 0, v_size_x27_1395_);
v___x_1406_ = v___x_1375_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_size_x27_1395_);
lean_ctor_set(v_reuseFailAlloc_1407_, 1, v_val_1404_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
else
{
lean_object* v___x_1409_; 
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v_buckets_x27_1397_);
lean_ctor_set(v___x_1375_, 0, v_size_x27_1395_);
v___x_1409_ = v___x_1375_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_size_x27_1395_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v_buckets_x27_1397_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
else
{
lean_object* v___x_1411_; lean_object* v_buckets_x27_1412_; lean_object* v_bkt_x27_1413_; lean_object* v___y_1415_; uint8_t v___x_1420_; 
lean_inc(v_bkt_1390_);
v___x_1411_ = lean_box(0);
v_buckets_x27_1412_ = lean_array_uset(v_buckets_1373_, v___x_1389_, v___x_1411_);
lean_inc_ref(v_a_1371_);
v_bkt_x27_1413_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__2(v_i_1369_, v_a_1371_, v_bkt_1390_);
v___x_1420_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0___redArg(v_a_1371_, v_bkt_x27_1413_);
lean_dec_ref(v_a_1371_);
if (v___x_1420_ == 0)
{
lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1421_ = lean_unsigned_to_nat(1u);
v___x_1422_ = lean_nat_sub(v_size_1372_, v___x_1421_);
lean_dec(v_size_1372_);
v___y_1415_ = v___x_1422_;
goto v___jp_1414_;
}
else
{
v___y_1415_ = v_size_1372_;
goto v___jp_1414_;
}
v___jp_1414_:
{
lean_object* v___x_1416_; lean_object* v___x_1418_; 
v___x_1416_ = lean_array_uset(v_buckets_x27_1412_, v___x_1389_, v_bkt_x27_1413_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v___x_1416_);
lean_ctor_set(v___x_1375_, 0, v___y_1415_);
v___x_1418_ = v___x_1375_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v___y_1415_);
lean_ctor_set(v_reuseFailAlloc_1419_, 1, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header(lean_object* v_builder_1424_, lean_object* v_key_1425_, lean_object* v_value_1426_){
_start:
{
lean_object* v_line_1427_; lean_object* v_headers_1428_; lean_object* v_extensions_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1460_; 
v_line_1427_ = lean_ctor_get(v_builder_1424_, 0);
lean_inc_ref(v_line_1427_);
v_headers_1428_ = lean_ctor_get(v_line_1427_, 1);
lean_inc_ref(v_headers_1428_);
v_extensions_1429_ = lean_ctor_get(v_builder_1424_, 1);
v_isSharedCheck_1460_ = !lean_is_exclusive(v_builder_1424_);
if (v_isSharedCheck_1460_ == 0)
{
lean_object* v_unused_1461_; 
v_unused_1461_ = lean_ctor_get(v_builder_1424_, 0);
lean_dec(v_unused_1461_);
v___x_1431_ = v_builder_1424_;
v_isShared_1432_ = v_isSharedCheck_1460_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_extensions_1429_);
lean_dec(v_builder_1424_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1460_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
uint8_t v_method_1433_; uint8_t v_version_1434_; lean_object* v_uri_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1458_; 
v_method_1433_ = lean_ctor_get_uint8(v_line_1427_, sizeof(void*)*2);
v_version_1434_ = lean_ctor_get_uint8(v_line_1427_, sizeof(void*)*2 + 1);
v_uri_1435_ = lean_ctor_get(v_line_1427_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v_line_1427_);
if (v_isSharedCheck_1458_ == 0)
{
lean_object* v_unused_1459_; 
v_unused_1459_ = lean_ctor_get(v_line_1427_, 1);
lean_dec(v_unused_1459_);
v___x_1437_ = v_line_1427_;
v_isShared_1438_ = v_isSharedCheck_1458_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_uri_1435_);
lean_dec(v_line_1427_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1458_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v_entries_1439_; lean_object* v_indexes_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1457_; 
v_entries_1439_ = lean_ctor_get(v_headers_1428_, 0);
v_indexes_1440_ = lean_ctor_get(v_headers_1428_, 1);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_headers_1428_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1442_ = v_headers_1428_;
v_isShared_1443_ = v_isSharedCheck_1457_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_indexes_1440_);
lean_inc(v_entries_1439_);
lean_dec(v_headers_1428_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1457_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v_i_1444_; lean_object* v___x_1445_; lean_object* v_entries_1446_; lean_object* v_indexes_1447_; lean_object* v___x_1449_; 
v_i_1444_ = lean_array_get_size(v_entries_1439_);
lean_inc_ref(v_key_1425_);
v___x_1445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1445_, 0, v_key_1425_);
lean_ctor_set(v___x_1445_, 1, v_value_1426_);
v_entries_1446_ = lean_array_push(v_entries_1439_, v___x_1445_);
v_indexes_1447_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0(v_i_1444_, v_indexes_1440_, v_key_1425_);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 1, v_indexes_1447_);
lean_ctor_set(v___x_1442_, 0, v_entries_1446_);
v___x_1449_ = v___x_1442_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_entries_1446_);
lean_ctor_set(v_reuseFailAlloc_1456_, 1, v_indexes_1447_);
v___x_1449_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
lean_object* v___x_1451_; 
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 1, v___x_1449_);
v___x_1451_ = v___x_1437_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_uri_1435_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v___x_1449_);
lean_ctor_set_uint8(v_reuseFailAlloc_1455_, sizeof(void*)*2, v_method_1433_);
lean_ctor_set_uint8(v_reuseFailAlloc_1455_, sizeof(void*)*2 + 1, v_version_1434_);
v___x_1451_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
lean_object* v___x_1453_; 
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1451_);
v___x_1453_ = v___x_1431_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1451_);
lean_ctor_set(v_reuseFailAlloc_1454_, 1, v_extensions_1429_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0(lean_object* v_00_u03b2_1462_, lean_object* v_a_1463_, lean_object* v_x_1464_){
_start:
{
uint8_t v___x_1465_; 
v___x_1465_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0___redArg(v_a_1463_, v_x_1464_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1466_, lean_object* v_a_1467_, lean_object* v_x_1468_){
_start:
{
uint8_t v_res_1469_; lean_object* v_r_1470_; 
v_res_1469_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__0(v_00_u03b2_1466_, v_a_1467_, v_x_1468_);
lean_dec(v_x_1468_);
lean_dec_ref(v_a_1467_);
v_r_1470_ = lean_box(v_res_1469_);
return v_r_1470_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1(lean_object* v_00_u03b2_1471_, lean_object* v_data_1472_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1___redArg(v_data_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1474_, lean_object* v_i_1475_, lean_object* v_source_1476_, lean_object* v_target_1477_){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2___redArg(v_i_1475_, v_source_1476_, v_target_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1479_, lean_object* v_x_1480_, lean_object* v_x_1481_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0_spec__1_spec__2_spec__3___redArg(v_x_1480_, v_x_1481_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header_x21(lean_object* v_builder_1483_, lean_object* v_key_1484_, lean_object* v_value_1485_){
_start:
{
lean_object* v_line_1486_; lean_object* v_headers_1487_; lean_object* v_extensions_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1521_; 
v_line_1486_ = lean_ctor_get(v_builder_1483_, 0);
lean_inc_ref(v_line_1486_);
v_headers_1487_ = lean_ctor_get(v_line_1486_, 1);
lean_inc_ref(v_headers_1487_);
v_extensions_1488_ = lean_ctor_get(v_builder_1483_, 1);
v_isSharedCheck_1521_ = !lean_is_exclusive(v_builder_1483_);
if (v_isSharedCheck_1521_ == 0)
{
lean_object* v_unused_1522_; 
v_unused_1522_ = lean_ctor_get(v_builder_1483_, 0);
lean_dec(v_unused_1522_);
v___x_1490_ = v_builder_1483_;
v_isShared_1491_ = v_isSharedCheck_1521_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_extensions_1488_);
lean_dec(v_builder_1483_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1521_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
uint8_t v_method_1492_; uint8_t v_version_1493_; lean_object* v_uri_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1519_; 
v_method_1492_ = lean_ctor_get_uint8(v_line_1486_, sizeof(void*)*2);
v_version_1493_ = lean_ctor_get_uint8(v_line_1486_, sizeof(void*)*2 + 1);
v_uri_1494_ = lean_ctor_get(v_line_1486_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v_line_1486_);
if (v_isSharedCheck_1519_ == 0)
{
lean_object* v_unused_1520_; 
v_unused_1520_ = lean_ctor_get(v_line_1486_, 1);
lean_dec(v_unused_1520_);
v___x_1496_ = v_line_1486_;
v_isShared_1497_ = v_isSharedCheck_1519_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_uri_1494_);
lean_dec(v_line_1486_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1519_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v_entries_1498_; lean_object* v_indexes_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1518_; 
v_entries_1498_ = lean_ctor_get(v_headers_1487_, 0);
v_indexes_1499_ = lean_ctor_get(v_headers_1487_, 1);
v_isSharedCheck_1518_ = !lean_is_exclusive(v_headers_1487_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1501_ = v_headers_1487_;
v_isShared_1502_ = v_isSharedCheck_1518_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_indexes_1499_);
lean_inc(v_entries_1498_);
lean_dec(v_headers_1487_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1518_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v_key_1503_; lean_object* v_value_1504_; lean_object* v_i_1505_; lean_object* v___x_1506_; lean_object* v_entries_1507_; lean_object* v_indexes_1508_; lean_object* v___x_1510_; 
v_key_1503_ = l_Std_Http_Header_Name_ofString_x21(v_key_1484_);
v_value_1504_ = l_Std_Http_Header_Value_ofString_x21(v_value_1485_);
v_i_1505_ = lean_array_get_size(v_entries_1498_);
lean_inc_ref(v_key_1503_);
v___x_1506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1506_, 0, v_key_1503_);
lean_ctor_set(v___x_1506_, 1, v_value_1504_);
v_entries_1507_ = lean_array_push(v_entries_1498_, v___x_1506_);
v_indexes_1508_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0(v_i_1505_, v_indexes_1499_, v_key_1503_);
if (v_isShared_1502_ == 0)
{
lean_ctor_set(v___x_1501_, 1, v_indexes_1508_);
lean_ctor_set(v___x_1501_, 0, v_entries_1507_);
v___x_1510_ = v___x_1501_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_entries_1507_);
lean_ctor_set(v_reuseFailAlloc_1517_, 1, v_indexes_1508_);
v___x_1510_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
lean_object* v___x_1512_; 
if (v_isShared_1497_ == 0)
{
lean_ctor_set(v___x_1496_, 1, v___x_1510_);
v___x_1512_ = v___x_1496_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v_uri_1494_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v___x_1510_);
lean_ctor_set_uint8(v_reuseFailAlloc_1516_, sizeof(void*)*2, v_method_1492_);
lean_ctor_set_uint8(v_reuseFailAlloc_1516_, sizeof(void*)*2 + 1, v_version_1493_);
v___x_1512_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
lean_object* v___x_1514_; 
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 0, v___x_1512_);
v___x_1514_ = v___x_1490_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1512_);
lean_ctor_set(v_reuseFailAlloc_1515_, 1, v_extensions_1488_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header_x3f(lean_object* v_builder_1523_, lean_object* v_key_1524_, lean_object* v_value_1525_){
_start:
{
lean_object* v___x_1526_; 
v___x_1526_ = l_Std_Http_Header_Name_ofString_x3f(v_key_1524_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v___x_1527_; 
lean_dec_ref(v_value_1525_);
lean_dec_ref(v_builder_1523_);
v___x_1527_ = lean_box(0);
return v___x_1527_;
}
else
{
lean_object* v_val_1528_; lean_object* v___x_1529_; 
v_val_1528_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_val_1528_);
lean_dec_ref_known(v___x_1526_, 1);
v___x_1529_ = l_Std_Http_Header_Value_ofString_x3f(v_value_1525_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v___x_1530_; 
lean_dec(v_val_1528_);
lean_dec_ref(v_builder_1523_);
v___x_1530_ = lean_box(0);
return v___x_1530_;
}
else
{
lean_object* v_line_1531_; lean_object* v_headers_1532_; lean_object* v_val_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1573_; 
v_line_1531_ = lean_ctor_get(v_builder_1523_, 0);
lean_inc_ref(v_line_1531_);
v_headers_1532_ = lean_ctor_get(v_line_1531_, 1);
lean_inc_ref(v_headers_1532_);
v_val_1533_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1535_ = v___x_1529_;
v_isShared_1536_ = v_isSharedCheck_1573_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_val_1533_);
lean_dec(v___x_1529_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1573_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v_extensions_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1571_; 
v_extensions_1537_ = lean_ctor_get(v_builder_1523_, 1);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_builder_1523_);
if (v_isSharedCheck_1571_ == 0)
{
lean_object* v_unused_1572_; 
v_unused_1572_ = lean_ctor_get(v_builder_1523_, 0);
lean_dec(v_unused_1572_);
v___x_1539_ = v_builder_1523_;
v_isShared_1540_ = v_isSharedCheck_1571_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_extensions_1537_);
lean_dec(v_builder_1523_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1571_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
uint8_t v_method_1541_; uint8_t v_version_1542_; lean_object* v_uri_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1569_; 
v_method_1541_ = lean_ctor_get_uint8(v_line_1531_, sizeof(void*)*2);
v_version_1542_ = lean_ctor_get_uint8(v_line_1531_, sizeof(void*)*2 + 1);
v_uri_1543_ = lean_ctor_get(v_line_1531_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v_line_1531_);
if (v_isSharedCheck_1569_ == 0)
{
lean_object* v_unused_1570_; 
v_unused_1570_ = lean_ctor_get(v_line_1531_, 1);
lean_dec(v_unused_1570_);
v___x_1545_ = v_line_1531_;
v_isShared_1546_ = v_isSharedCheck_1569_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_uri_1543_);
lean_dec(v_line_1531_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1569_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v_entries_1547_; lean_object* v_indexes_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1568_; 
v_entries_1547_ = lean_ctor_get(v_headers_1532_, 0);
v_indexes_1548_ = lean_ctor_get(v_headers_1532_, 1);
v_isSharedCheck_1568_ = !lean_is_exclusive(v_headers_1532_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1550_ = v_headers_1532_;
v_isShared_1551_ = v_isSharedCheck_1568_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_indexes_1548_);
lean_inc(v_entries_1547_);
lean_dec(v_headers_1532_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1568_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v_i_1552_; lean_object* v___x_1553_; lean_object* v_entries_1554_; lean_object* v_indexes_1555_; lean_object* v___x_1557_; 
v_i_1552_ = lean_array_get_size(v_entries_1547_);
lean_inc(v_val_1528_);
v___x_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1553_, 0, v_val_1528_);
lean_ctor_set(v___x_1553_, 1, v_val_1533_);
v_entries_1554_ = lean_array_push(v_entries_1547_, v___x_1553_);
v_indexes_1555_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Request_Builder_header_spec__0(v_i_1552_, v_indexes_1548_, v_val_1528_);
if (v_isShared_1551_ == 0)
{
lean_ctor_set(v___x_1550_, 1, v_indexes_1555_);
lean_ctor_set(v___x_1550_, 0, v_entries_1554_);
v___x_1557_ = v___x_1550_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_entries_1554_);
lean_ctor_set(v_reuseFailAlloc_1567_, 1, v_indexes_1555_);
v___x_1557_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1559_; 
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 1, v___x_1557_);
v___x_1559_ = v___x_1545_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_uri_1543_);
lean_ctor_set(v_reuseFailAlloc_1566_, 1, v___x_1557_);
lean_ctor_set_uint8(v_reuseFailAlloc_1566_, sizeof(void*)*2, v_method_1541_);
lean_ctor_set_uint8(v_reuseFailAlloc_1566_, sizeof(void*)*2 + 1, v_version_1542_);
v___x_1559_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
lean_object* v___x_1561_; 
if (v_isShared_1540_ == 0)
{
lean_ctor_set(v___x_1539_, 0, v___x_1559_);
v___x_1561_ = v___x_1539_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v___x_1559_);
lean_ctor_set(v_reuseFailAlloc_1565_, 1, v_extensions_1537_);
v___x_1561_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
lean_object* v___x_1563_; 
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 0, v___x_1561_);
v___x_1563_ = v___x_1535_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v___x_1561_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_headerOpt(lean_object* v_builder_1574_, lean_object* v_key_1575_, lean_object* v_value_1576_){
_start:
{
if (lean_obj_tag(v_value_1576_) == 0)
{
lean_dec_ref(v_key_1575_);
return v_builder_1574_;
}
else
{
lean_object* v_val_1577_; lean_object* v___x_1578_; 
v_val_1577_ = lean_ctor_get(v_value_1576_, 0);
lean_inc(v_val_1577_);
lean_dec_ref_known(v_value_1576_, 1);
v___x_1578_ = l_Std_Http_Request_Builder_header(v_builder_1574_, v_key_1575_, v_val_1577_);
return v___x_1578_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension___redArg(lean_object* v_builder_1580_, lean_object* v_inst_1581_, lean_object* v_data_1582_){
_start:
{
lean_object* v_line_1583_; lean_object* v_extensions_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1595_; 
v_line_1583_ = lean_ctor_get(v_builder_1580_, 0);
v_extensions_1584_ = lean_ctor_get(v_builder_1580_, 1);
v_isSharedCheck_1595_ = !lean_is_exclusive(v_builder_1580_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1586_ = v_builder_1580_;
v_isShared_1587_ = v_isSharedCheck_1595_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_extensions_1584_);
lean_inc(v_line_1583_);
lean_dec(v_builder_1580_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1595_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v_dyn_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1593_; 
v_dyn_1588_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_1581_, v_data_1582_);
v___x_1589_ = ((lean_object*)(l_Std_Http_Request_Builder_extension___redArg___closed__0));
v___x_1590_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_dyn_1588_);
v___x_1591_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_1589_, v___x_1590_, v_dyn_1588_, v_extensions_1584_);
if (v_isShared_1587_ == 0)
{
lean_ctor_set(v___x_1586_, 1, v___x_1591_);
v___x_1593_ = v___x_1586_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v_line_1583_);
lean_ctor_set(v_reuseFailAlloc_1594_, 1, v___x_1591_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension___redArg___boxed(lean_object* v_builder_1596_, lean_object* v_inst_1597_, lean_object* v_data_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l_Std_Http_Request_Builder_extension___redArg(v_builder_1596_, v_inst_1597_, v_data_1598_);
lean_dec(v_data_1598_);
lean_dec(v_inst_1597_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension(lean_object* v_00_u03b1_1600_, lean_object* v_builder_1601_, lean_object* v_inst_1602_, lean_object* v_data_1603_){
_start:
{
lean_object* v___x_1604_; 
v___x_1604_ = l_Std_Http_Request_Builder_extension___redArg(v_builder_1601_, v_inst_1602_, v_data_1603_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension___boxed(lean_object* v_00_u03b1_1605_, lean_object* v_builder_1606_, lean_object* v_inst_1607_, lean_object* v_data_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l_Std_Http_Request_Builder_extension(v_00_u03b1_1605_, v_builder_1606_, v_inst_1607_, v_data_1608_);
lean_dec(v_data_1608_);
lean_dec(v_inst_1607_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___redArg(lean_object* v_builder_1610_, lean_object* v_body_1611_){
_start:
{
lean_object* v_line_1612_; lean_object* v_extensions_1613_; lean_object* v___x_1614_; 
v_line_1612_ = lean_ctor_get(v_builder_1610_, 0);
v_extensions_1613_ = lean_ctor_get(v_builder_1610_, 1);
lean_inc(v_extensions_1613_);
lean_inc_ref(v_line_1612_);
v___x_1614_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1614_, 0, v_line_1612_);
lean_ctor_set(v___x_1614_, 1, v_body_1611_);
lean_ctor_set(v___x_1614_, 2, v_extensions_1613_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___redArg___boxed(lean_object* v_builder_1615_, lean_object* v_body_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Std_Http_Request_Builder_body___redArg(v_builder_1615_, v_body_1616_);
lean_dec_ref(v_builder_1615_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body(lean_object* v_t_1618_, lean_object* v_builder_1619_, lean_object* v_body_1620_){
_start:
{
lean_object* v___x_1621_; 
v___x_1621_ = l_Std_Http_Request_Builder_body___redArg(v_builder_1619_, v_body_1620_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___boxed(lean_object* v_t_1622_, lean_object* v_builder_1623_, lean_object* v_body_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_Std_Http_Request_Builder_body(v_t_1622_, v_builder_1623_, v_body_1624_);
lean_dec_ref(v_builder_1623_);
return v_res_1625_;
}
}
static lean_object* _init_l_Std_Http_Request_get___closed__0(void){
_start:
{
uint8_t v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1626_ = 8;
v___x_1627_ = l_Std_Http_Request_new;
v___x_1628_ = l_Std_Http_Request_Builder_method(v___x_1627_, v___x_1626_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_get(lean_object* v_uri_1629_){
_start:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1630_ = lean_obj_once(&l_Std_Http_Request_get___closed__0, &l_Std_Http_Request_get___closed__0_once, _init_l_Std_Http_Request_get___closed__0);
v___x_1631_ = l_Std_Http_Request_Builder_uri(v___x_1630_, v_uri_1629_);
return v___x_1631_;
}
}
static lean_object* _init_l_Std_Http_Request_post___closed__0(void){
_start:
{
uint8_t v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1632_ = 23;
v___x_1633_ = l_Std_Http_Request_new;
v___x_1634_ = l_Std_Http_Request_Builder_method(v___x_1633_, v___x_1632_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_post(lean_object* v_uri_1635_){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1636_ = lean_obj_once(&l_Std_Http_Request_post___closed__0, &l_Std_Http_Request_post___closed__0_once, _init_l_Std_Http_Request_post___closed__0);
v___x_1637_ = l_Std_Http_Request_Builder_uri(v___x_1636_, v_uri_1635_);
return v___x_1637_;
}
}
static lean_object* _init_l_Std_Http_Request_put___closed__0(void){
_start:
{
uint8_t v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1638_ = 27;
v___x_1639_ = l_Std_Http_Request_new;
v___x_1640_ = l_Std_Http_Request_Builder_method(v___x_1639_, v___x_1638_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_put(lean_object* v_uri_1641_){
_start:
{
lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1642_ = lean_obj_once(&l_Std_Http_Request_put___closed__0, &l_Std_Http_Request_put___closed__0_once, _init_l_Std_Http_Request_put___closed__0);
v___x_1643_ = l_Std_Http_Request_Builder_uri(v___x_1642_, v_uri_1641_);
return v___x_1643_;
}
}
static lean_object* _init_l_Std_Http_Request_delete___closed__0(void){
_start:
{
uint8_t v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1644_ = 7;
v___x_1645_ = l_Std_Http_Request_new;
v___x_1646_ = l_Std_Http_Request_Builder_method(v___x_1645_, v___x_1644_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_delete(lean_object* v_uri_1647_){
_start:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1648_ = lean_obj_once(&l_Std_Http_Request_delete___closed__0, &l_Std_Http_Request_delete___closed__0_once, _init_l_Std_Http_Request_delete___closed__0);
v___x_1649_ = l_Std_Http_Request_Builder_uri(v___x_1648_, v_uri_1647_);
return v___x_1649_;
}
}
static lean_object* _init_l_Std_Http_Request_patch___closed__0(void){
_start:
{
uint8_t v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1650_ = 22;
v___x_1651_ = l_Std_Http_Request_new;
v___x_1652_ = l_Std_Http_Request_Builder_method(v___x_1651_, v___x_1650_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_patch(lean_object* v_uri_1653_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1654_ = lean_obj_once(&l_Std_Http_Request_patch___closed__0, &l_Std_Http_Request_patch___closed__0_once, _init_l_Std_Http_Request_patch___closed__0);
v___x_1655_ = l_Std_Http_Request_Builder_uri(v___x_1654_, v_uri_1653_);
return v___x_1655_;
}
}
static lean_object* _init_l_Std_Http_Request_head___closed__0(void){
_start:
{
uint8_t v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1656_ = 9;
v___x_1657_ = l_Std_Http_Request_new;
v___x_1658_ = l_Std_Http_Request_Builder_method(v___x_1657_, v___x_1656_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_head(lean_object* v_uri_1659_){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = lean_obj_once(&l_Std_Http_Request_head___closed__0, &l_Std_Http_Request_head___closed__0_once, _init_l_Std_Http_Request_head___closed__0);
v___x_1661_ = l_Std_Http_Request_Builder_uri(v___x_1660_, v_uri_1659_);
return v___x_1661_;
}
}
static lean_object* _init_l_Std_Http_Request_options___closed__0(void){
_start:
{
uint8_t v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1662_ = 20;
v___x_1663_ = l_Std_Http_Request_new;
v___x_1664_ = l_Std_Http_Request_Builder_method(v___x_1663_, v___x_1662_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_options(lean_object* v_uri_1665_){
_start:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1666_ = lean_obj_once(&l_Std_Http_Request_options___closed__0, &l_Std_Http_Request_options___closed__0_once, _init_l_Std_Http_Request_options___closed__0);
v___x_1667_ = l_Std_Http_Request_Builder_uri(v___x_1666_, v_uri_1665_);
return v___x_1667_;
}
}
static lean_object* _init_l_Std_Http_Request_connect___closed__0(void){
_start:
{
uint8_t v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; 
v___x_1668_ = 5;
v___x_1669_ = l_Std_Http_Request_new;
v___x_1670_ = l_Std_Http_Request_Builder_method(v___x_1669_, v___x_1668_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_connect(lean_object* v_uri_1671_){
_start:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1672_ = lean_obj_once(&l_Std_Http_Request_connect___closed__0, &l_Std_Http_Request_connect___closed__0_once, _init_l_Std_Http_Request_connect___closed__0);
v___x_1673_ = l_Std_Http_Request_Builder_uri(v___x_1672_, v_uri_1671_);
return v___x_1673_;
}
}
static lean_object* _init_l_Std_Http_Request_trace___closed__0(void){
_start:
{
uint8_t v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1674_ = 32;
v___x_1675_ = l_Std_Http_Request_new;
v___x_1676_ = l_Std_Http_Request_Builder_method(v___x_1675_, v___x_1674_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_trace(lean_object* v_uri_1677_){
_start:
{
lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1678_ = lean_obj_once(&l_Std_Http_Request_trace___closed__0, &l_Std_Http_Request_trace___closed__0_once, _init_l_Std_Http_Request_trace___closed__0);
v___x_1679_ = l_Std_Http_Request_Builder_uri(v___x_1678_, v_uri_1677_);
return v___x_1679_;
}
}
lean_object* runtime_initialize_Std_Http_Data_Extensions(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Method(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Version(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Headers(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Request(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Http_Data_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Method(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_Request_instInhabitedHead_default = _init_l_Std_Http_Request_instInhabitedHead_default();
lean_mark_persistent(l_Std_Http_Request_instInhabitedHead_default);
l_Std_Http_Request_instInhabitedHead = _init_l_Std_Http_Request_instInhabitedHead();
lean_mark_persistent(l_Std_Http_Request_instInhabitedHead);
l_Std_Http_Request_instToStringHead___lam__2___boxed__const__1 = _init_l_Std_Http_Request_instToStringHead___lam__2___boxed__const__1();
lean_mark_persistent(l_Std_Http_Request_instToStringHead___lam__2___boxed__const__1);
l_Std_Http_Request_new = _init_l_Std_Http_Request_new();
lean_mark_persistent(l_Std_Http_Request_new);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Request(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Data_Extensions(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Method(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Version(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Headers(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Request(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Data_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Method(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Headers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Request(builtin);
}
#ifdef __cplusplus
}
#endif

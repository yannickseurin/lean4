// Lean compiler output
// Module: Std.Http.Data.Response
// Imports: public import Std.Http.Data.Extensions public import Std.Http.Data.Status public import Std.Http.Data.Version public import Std.Http.Data.Headers
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
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Headers_empty;
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
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
uint16_t l_Std_Http_Status_toCode(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Std_Http_Status_reasonPhrase(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Extensions_empty;
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
lean_object* l_Std_Http_Extensions_compareName___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_instReprStatus_repr(lean_object*, lean_object*);
lean_object* l_Std_Http_instReprVersion_repr(uint8_t, lean_object*);
lean_object* l_Std_Http_instReprHeaders_repr___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_byte_array_mk(lean_object*);
lean_object* l_Std_Http_Headers_fold___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Header_Name_ofString_x21(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
lean_object* l_Std_Http_Header_Name_ofString_x3f(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x3f(lean_object*);
static lean_once_cell_t l_Std_Http_Response_instInhabitedHead_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_instInhabitedHead_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_instInhabitedHead_default;
LEAN_EXPORT lean_object* l_Std_Http_Response_instInhabitedHead;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Response_instReprHead_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Http_Response_instReprHead_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Http_Response_instReprHead_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "status"};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Response_instReprHead_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Response_instReprHead_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_Response_instReprHead_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_Response_instReprHead_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_Response_instReprHead_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__3_value),((lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_Response_instReprHead_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_Response_instReprHead_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Http_Response_instReprHead_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_Response_instReprHead_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Http_Response_instReprHead_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Http_Response_instReprHead_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__12;
static const lean_string_object l_Std_Http_Response_instReprHead_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "headers"};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__13 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Http_Response_instReprHead_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__14 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__14_value;
static const lean_string_object l_Std_Http_Response_instReprHead_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__15 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__15_value;
static lean_once_cell_t l_Std_Http_Response_instReprHead_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__16;
static lean_once_cell_t l_Std_Http_Response_instReprHead_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__17;
static const lean_ctor_object l_Std_Http_Response_instReprHead_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__18 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__18_value;
static const lean_ctor_object l_Std_Http_Response_instReprHead_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__15_value)}};
static const lean_object* l_Std_Http_Response_instReprHead_repr___redArg___closed__19 = (const lean_object*)&l_Std_Http_Response_instReprHead_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* l_Std_Http_Response_instReprHead_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_instReprHead_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_instReprHead_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Response_instReprHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Response_instReprHead_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_instReprHead___closed__0 = (const lean_object*)&l_Std_Http_Response_instReprHead___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Response_instReprHead = (const lean_object*)&l_Std_Http_Response_instReprHead___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedResponse_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedResponse_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedResponse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedResponse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_instToStringHead___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_instToStringHead___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Response_instToStringHead___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__1___closed__0 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__1___closed__0_value;
static const lean_closure_object l_Std_Http_Response_instToStringHead___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_Pattern_Char_instToForwardSearcherCharDefaultForwardSearcherForallBoolBeq___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_instToStringHead___lam__1___closed__1 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__1___closed__1_value;
static const lean_string_object l_Std_Http_Response_instToStringHead___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__1___closed__2 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__1___closed__2_value;
static lean_once_cell_t l_Std_Http_Response_instToStringHead___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_instToStringHead___lam__1___closed__3;
static const lean_string_object l_Std_Http_Response_instToStringHead___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__1___closed__4 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__1___closed__4_value;
LEAN_EXPORT lean_object* l_Std_Http_Response_instToStringHead___lam__1___boxed__const__1;
LEAN_EXPORT lean_object* l_Std_Http_Response_instToStringHead___lam__1(lean_object*);
static const lean_string_object l_Std_Http_Response_instToStringHead___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__0 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__0_value;
static const lean_string_object l_Std_Http_Response_instToStringHead___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\r\n"};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__1 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__1_value;
static const lean_closure_object l_Std_Http_Response_instToStringHead___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__2 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__2_value;
static const lean_closure_object l_Std_Http_Response_instToStringHead___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__3 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__3_value;
static const lean_closure_object l_Std_Http_Response_instToStringHead___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__4 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__4_value;
static const lean_closure_object l_Std_Http_Response_instToStringHead___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__5 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__5_value;
static const lean_closure_object l_Std_Http_Response_instToStringHead___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__6 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__6_value;
static const lean_closure_object l_Std_Http_Response_instToStringHead___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__7 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__7_value;
static const lean_closure_object l_Std_Http_Response_instToStringHead___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__8 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__8_value;
static const lean_ctor_object l_Std_Http_Response_instToStringHead___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__2_value),((lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__3_value)}};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__9 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__9_value;
static const lean_ctor_object l_Std_Http_Response_instToStringHead___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__9_value),((lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__4_value),((lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__5_value),((lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__6_value),((lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__7_value)}};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__10 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__10_value;
static const lean_ctor_object l_Std_Http_Response_instToStringHead___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__10_value),((lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__8_value)}};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__11 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__11_value;
static const lean_string_object l_Std_Http_Response_instToStringHead___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/1.0"};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__12 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__12_value;
static const lean_string_object l_Std_Http_Response_instToStringHead___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/1.1"};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__13 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__13_value;
static const lean_string_object l_Std_Http_Response_instToStringHead___lam__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/2.0"};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__14 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__14_value;
static const lean_string_object l_Std_Http_Response_instToStringHead___lam__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/3.0"};
static const lean_object* l_Std_Http_Response_instToStringHead___lam__2___closed__15 = (const lean_object*)&l_Std_Http_Response_instToStringHead___lam__2___closed__15_value;
LEAN_EXPORT lean_object* l_Std_Http_Response_instToStringHead___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_instToStringHead___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Response_instToStringHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Response_instToStringHead___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_instToStringHead___closed__0 = (const lean_object*)&l_Std_Http_Response_instToStringHead___closed__0_value;
static const lean_closure_object l_Std_Http_Response_instToStringHead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Response_instToStringHead___lam__2___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Response_instToStringHead___closed__0_value)} };
static const lean_object* l_Std_Http_Response_instToStringHead___closed__1 = (const lean_object*)&l_Std_Http_Response_instToStringHead___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_Response_instToStringHead = (const lean_object*)&l_Std_Http_Response_instToStringHead___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Response_instEncodeV11Head___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Std_Http_Response_instEncodeV11Head___lam__2___closed__0;
static lean_once_cell_t l_Std_Http_Response_instEncodeV11Head___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_instEncodeV11Head___lam__2___closed__1;
static lean_once_cell_t l_Std_Http_Response_instEncodeV11Head___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_instEncodeV11Head___lam__2___closed__2;
static lean_once_cell_t l_Std_Http_Response_instEncodeV11Head___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_instEncodeV11Head___lam__2___closed__3;
static lean_once_cell_t l_Std_Http_Response_instEncodeV11Head___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_instEncodeV11Head___lam__2___closed__4;
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Response_instEncodeV11Head___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Response_instEncodeV11Head___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_instEncodeV11Head___closed__0 = (const lean_object*)&l_Std_Http_Response_instEncodeV11Head___closed__0_value;
static const lean_closure_object l_Std_Http_Response_instEncodeV11Head___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Response_instEncodeV11Head___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Response_instEncodeV11Head___closed__0_value)} };
static const lean_object* l_Std_Http_Response_instEncodeV11Head___closed__1 = (const lean_object*)&l_Std_Http_Response_instEncodeV11Head___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_Response_instEncodeV11Head = (const lean_object*)&l_Std_Http_Response_instEncodeV11Head___closed__1_value;
static lean_once_cell_t l_Std_Http_Response_new___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_new___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_new;
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_new;
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_status(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_headers(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_header(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_header_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_header_x3f(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Response_Builder_extension___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Extensions_compareName___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Response_Builder_extension___redArg___closed__0 = (const lean_object*)&l_Std_Http_Response_Builder_extension___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_extension___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_extension___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_extension(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_extension___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_body___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_body___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_body(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_body___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_build___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_build___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_build(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_build___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Response_ok___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_ok___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_ok;
LEAN_EXPORT lean_object* l_Std_Http_Response_withStatus(lean_object*);
static lean_once_cell_t l_Std_Http_Response_notFound___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_notFound___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_notFound;
static lean_once_cell_t l_Std_Http_Response_internalServerError___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_internalServerError___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_internalServerError;
static lean_once_cell_t l_Std_Http_Response_badRequest___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_badRequest___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_badRequest;
static lean_once_cell_t l_Std_Http_Response_created___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_created___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_created;
static lean_once_cell_t l_Std_Http_Response_accepted___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_accepted___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_accepted;
static lean_once_cell_t l_Std_Http_Response_unauthorized___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_unauthorized___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_unauthorized;
static lean_once_cell_t l_Std_Http_Response_forbidden___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_forbidden___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_forbidden;
static lean_once_cell_t l_Std_Http_Response_conflict___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_conflict___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_conflict;
static lean_once_cell_t l_Std_Http_Response_serviceUnavailable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Response_serviceUnavailable___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Response_serviceUnavailable;
static lean_object* _init_l_Std_Http_Response_instInhabitedHead_default___closed__0(void){
_start:
{
lean_object* v___x_1_; uint8_t v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_1_ = l_Std_Http_Headers_empty;
v___x_2_ = 1;
v___x_3_ = lean_box(4);
v___x_4_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4_, 0, v___x_3_);
lean_ctor_set(v___x_4_, 1, v___x_1_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2, v___x_2_);
return v___x_4_;
}
}
static lean_object* _init_l_Std_Http_Response_instInhabitedHead_default(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_obj_once(&l_Std_Http_Response_instInhabitedHead_default___closed__0, &l_Std_Http_Response_instInhabitedHead_default___closed__0_once, _init_l_Std_Http_Response_instInhabitedHead_default___closed__0);
return v___x_5_;
}
}
static lean_object* _init_l_Std_Http_Response_instInhabitedHead(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Std_Http_Response_instInhabitedHead_default;
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Response_instReprHead_repr_spec__0(lean_object* v_a_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_nat_to_int(v_a_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Std_Http_Response_instReprHead_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_unsigned_to_nat(10u);
v___x_23_ = lean_nat_to_int(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Std_Http_Response_instReprHead_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(11u);
v___x_31_ = lean_nat_to_int(v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_l_Std_Http_Response_instReprHead_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(l_Std_Http_Response_instReprHead_repr___redArg___closed__0));
v___x_37_ = lean_string_length(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Std_Http_Response_instReprHead_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_obj_once(&l_Std_Http_Response_instReprHead_repr___redArg___closed__16, &l_Std_Http_Response_instReprHead_repr___redArg___closed__16_once, _init_l_Std_Http_Response_instReprHead_repr___redArg___closed__16);
v___x_39_ = lean_nat_to_int(v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instReprHead_repr___redArg(lean_object* v_x_44_){
_start:
{
lean_object* v_status_45_; uint8_t v_version_46_; lean_object* v_headers_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_status_45_ = lean_ctor_get(v_x_44_, 0);
lean_inc(v_status_45_);
v_version_46_ = lean_ctor_get_uint8(v_x_44_, sizeof(void*)*2);
v_headers_47_ = lean_ctor_get(v_x_44_, 1);
lean_inc_ref(v_headers_47_);
lean_dec_ref(v_x_44_);
v___x_48_ = ((lean_object*)(l_Std_Http_Response_instReprHead_repr___redArg___closed__5));
v___x_49_ = ((lean_object*)(l_Std_Http_Response_instReprHead_repr___redArg___closed__6));
v___x_50_ = lean_obj_once(&l_Std_Http_Response_instReprHead_repr___redArg___closed__7, &l_Std_Http_Response_instReprHead_repr___redArg___closed__7_once, _init_l_Std_Http_Response_instReprHead_repr___redArg___closed__7);
v___x_51_ = lean_unsigned_to_nat(0u);
v___x_52_ = l_Std_Http_instReprStatus_repr(v_status_45_, v___x_51_);
v___x_53_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_50_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = 0;
v___x_55_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_55_, 0, v___x_53_);
lean_ctor_set_uint8(v___x_55_, sizeof(void*)*1, v___x_54_);
v___x_56_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_49_);
lean_ctor_set(v___x_56_, 1, v___x_55_);
v___x_57_ = ((lean_object*)(l_Std_Http_Response_instReprHead_repr___redArg___closed__9));
v___x_58_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_56_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = lean_box(1);
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_58_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = ((lean_object*)(l_Std_Http_Response_instReprHead_repr___redArg___closed__11));
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_48_);
v___x_64_ = lean_obj_once(&l_Std_Http_Response_instReprHead_repr___redArg___closed__12, &l_Std_Http_Response_instReprHead_repr___redArg___closed__12_once, _init_l_Std_Http_Response_instReprHead_repr___redArg___closed__12);
v___x_65_ = l_Std_Http_instReprVersion_repr(v_version_46_, v___x_51_);
v___x_66_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*1, v___x_54_);
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_63_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_57_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_59_);
v___x_71_ = ((lean_object*)(l_Std_Http_Response_instReprHead_repr___redArg___closed__14));
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_48_);
v___x_74_ = l_Std_Http_instReprHeaders_repr___redArg(v_headers_47_);
v___x_75_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_64_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set_uint8(v___x_76_, sizeof(void*)*1, v___x_54_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_73_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = lean_obj_once(&l_Std_Http_Response_instReprHead_repr___redArg___closed__17, &l_Std_Http_Response_instReprHead_repr___redArg___closed__17_once, _init_l_Std_Http_Response_instReprHead_repr___redArg___closed__17);
v___x_79_ = ((lean_object*)(l_Std_Http_Response_instReprHead_repr___redArg___closed__18));
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_77_);
v___x_81_ = ((lean_object*)(l_Std_Http_Response_instReprHead_repr___redArg___closed__19));
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_80_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_78_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_54_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instReprHead_repr(lean_object* v_x_85_, lean_object* v_prec_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Std_Http_Response_instReprHead_repr___redArg(v_x_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instReprHead_repr___boxed(lean_object* v_x_88_, lean_object* v_prec_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Std_Http_Response_instReprHead_repr(v_x_88_, v_prec_89_);
lean_dec(v_prec_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedResponse_default___redArg(lean_object* v_inst_93_){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_obj_once(&l_Std_Http_Response_instInhabitedHead_default___closed__0, &l_Std_Http_Response_instInhabitedHead_default___closed__0_once, _init_l_Std_Http_Response_instInhabitedHead_default___closed__0);
v___x_95_ = l_Std_Http_Extensions_empty;
v___x_96_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_96_, 0, v___x_94_);
lean_ctor_set(v___x_96_, 1, v_inst_93_);
lean_ctor_set(v___x_96_, 2, v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedResponse_default(lean_object* v_t_97_, lean_object* v_inst_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Std_Http_instInhabitedResponse_default___redArg(v_inst_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedResponse___redArg(lean_object* v_inst_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Std_Http_instInhabitedResponse_default___redArg(v_inst_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedResponse(lean_object* v_a_102_, lean_object* v_inst_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Std_Http_instInhabitedResponse_default___redArg(v_inst_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instToStringHead___lam__0(lean_object* v___x_105_, lean_object* v___x_106_, lean_object* v___x_107_, lean_object* v_fst_108_, lean_object* v___x_109_, uint32_t v___x_110_, lean_object* v___x_111_, lean_object* v_it_112_, lean_object* v_acc_113_, lean_object* v_hP_114_, lean_object* v_recur_115_){
_start:
{
lean_object* v_it_117_; lean_object* v_out_118_; uint32_t v___y_134_; lean_object* v___y_135_; lean_object* v___y_136_; uint8_t v___y_137_; lean_object* v_it_143_; lean_object* v_startInclusive_144_; lean_object* v_endExclusive_145_; 
if (lean_obj_tag(v_it_112_) == 0)
{
lean_object* v_currPos_152_; lean_object* v_searcher_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_175_; 
v_currPos_152_ = lean_ctor_get(v_it_112_, 0);
v_searcher_153_ = lean_ctor_get(v_it_112_, 1);
v_isSharedCheck_175_ = !lean_is_exclusive(v_it_112_);
if (v_isSharedCheck_175_ == 0)
{
v___x_155_ = v_it_112_;
v_isShared_156_ = v_isSharedCheck_175_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_searcher_153_);
lean_inc(v_currPos_152_);
lean_dec(v_it_112_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_175_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
uint8_t v_decide_157_; 
v_decide_157_ = lean_nat_dec_eq(v_searcher_153_, v___x_109_);
if (v_decide_157_ == 0)
{
uint32_t v___x_158_; uint8_t v___x_159_; 
lean_dec(v___x_109_);
v___x_158_ = lean_string_utf8_get_fast(v_fst_108_, v_searcher_153_);
v___x_159_ = lean_uint32_dec_eq(v___x_158_, v___x_110_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_160_ = lean_string_utf8_next_fast(v_fst_108_, v_searcher_153_);
lean_dec(v_searcher_153_);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 1, v___x_160_);
v___x_162_ = v___x_155_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_currPos_152_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v___x_160_);
v___x_162_ = v_reuseFailAlloc_164_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
lean_object* v___x_163_; 
v___x_163_ = lean_apply_4(v_recur_115_, v___x_162_, v_acc_113_, lean_box(0), lean_box(0));
return v___x_163_;
}
}
else
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v_slice_168_; lean_object* v_nextIt_170_; 
v___x_165_ = lean_string_utf8_next_fast(v_fst_108_, v_searcher_153_);
v___x_166_ = lean_nat_sub(v___x_165_, v_searcher_153_);
v___x_167_ = lean_nat_add(v_searcher_153_, v___x_166_);
lean_dec(v___x_166_);
v_slice_168_ = l_String_Slice_subslice_x21(v___x_111_, v_currPos_152_, v_searcher_153_);
lean_inc(v___x_167_);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 1, v___x_167_);
lean_ctor_set(v___x_155_, 0, v___x_167_);
v_nextIt_170_ = v___x_155_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_173_, 1, v___x_167_);
v_nextIt_170_ = v_reuseFailAlloc_173_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
lean_object* v_startInclusive_171_; lean_object* v_endExclusive_172_; 
v_startInclusive_171_ = lean_ctor_get(v_slice_168_, 0);
lean_inc(v_startInclusive_171_);
v_endExclusive_172_ = lean_ctor_get(v_slice_168_, 1);
lean_inc(v_endExclusive_172_);
lean_dec_ref(v_slice_168_);
v_it_143_ = v_nextIt_170_;
v_startInclusive_144_ = v_startInclusive_171_;
v_endExclusive_145_ = v_endExclusive_172_;
goto v___jp_142_;
}
}
}
else
{
lean_object* v___x_174_; 
lean_del_object(v___x_155_);
lean_dec(v_searcher_153_);
v___x_174_ = lean_box(1);
v_it_143_ = v___x_174_;
v_startInclusive_144_ = v_currPos_152_;
v_endExclusive_145_ = v___x_109_;
goto v___jp_142_;
}
}
}
else
{
lean_dec_ref(v_recur_115_);
lean_dec(v___x_109_);
return v_acc_113_;
}
v___jp_116_:
{
if (lean_obj_tag(v_acc_113_) == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_119_, 0, v_out_118_);
v___x_120_ = lean_apply_4(v_recur_115_, v_it_117_, v___x_119_, lean_box(0), lean_box(0));
return v___x_120_;
}
else
{
lean_object* v_val_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_132_; 
v_val_121_ = lean_ctor_get(v_acc_113_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v_acc_113_);
if (v_isSharedCheck_132_ == 0)
{
v___x_123_ = v_acc_113_;
v_isShared_124_ = v_isSharedCheck_132_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_val_121_);
lean_dec(v_acc_113_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_132_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_125_ = lean_string_utf8_extract_fast(v___x_105_, v___x_106_, v___x_107_);
v___x_126_ = lean_string_append(v_val_121_, v___x_125_);
lean_dec_ref(v___x_125_);
v___x_127_ = lean_string_append(v___x_126_, v_out_118_);
lean_dec_ref(v_out_118_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 0, v___x_127_);
v___x_129_ = v___x_123_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_127_);
v___x_129_ = v_reuseFailAlloc_131_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_130_; 
v___x_130_ = lean_apply_4(v_recur_115_, v_it_117_, v___x_129_, lean_box(0), lean_box(0));
return v___x_130_;
}
}
}
}
v___jp_133_:
{
if (v___y_137_ == 0)
{
lean_object* v___x_138_; 
v___x_138_ = lean_string_utf8_set(v___y_136_, v___x_106_, v___y_134_);
v_it_117_ = v___y_135_;
v_out_118_ = v___x_138_;
goto v___jp_116_;
}
else
{
uint32_t v___x_139_; uint32_t v___x_140_; lean_object* v___x_141_; 
v___x_139_ = 4294967264;
v___x_140_ = lean_uint32_add(v___y_134_, v___x_139_);
v___x_141_ = lean_string_utf8_set(v___y_136_, v___x_106_, v___x_140_);
v_it_117_ = v___y_135_;
v_out_118_ = v___x_141_;
goto v___jp_116_;
}
}
v___jp_142_:
{
lean_object* v___x_146_; uint32_t v___x_147_; uint32_t v___x_148_; uint8_t v___x_149_; 
v___x_146_ = lean_string_utf8_extract_fast(v_fst_108_, v_startInclusive_144_, v_endExclusive_145_);
lean_dec(v_endExclusive_145_);
lean_dec(v_startInclusive_144_);
v___x_147_ = lean_string_utf8_get(v___x_146_, v___x_106_);
v___x_148_ = 97;
v___x_149_ = lean_uint32_dec_le(v___x_148_, v___x_147_);
if (v___x_149_ == 0)
{
v___y_134_ = v___x_147_;
v___y_135_ = v_it_143_;
v___y_136_ = v___x_146_;
v___y_137_ = v___x_149_;
goto v___jp_133_;
}
else
{
uint32_t v___x_150_; uint8_t v___x_151_; 
v___x_150_ = 122;
v___x_151_ = lean_uint32_dec_le(v___x_147_, v___x_150_);
v___y_134_ = v___x_147_;
v___y_135_ = v_it_143_;
v___y_136_ = v___x_146_;
v___y_137_ = v___x_151_;
goto v___jp_133_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instToStringHead___lam__0___boxed(lean_object* v___x_176_, lean_object* v___x_177_, lean_object* v___x_178_, lean_object* v_fst_179_, lean_object* v___x_180_, lean_object* v___x_181_, lean_object* v___x_182_, lean_object* v_it_183_, lean_object* v_acc_184_, lean_object* v_hP_185_, lean_object* v_recur_186_){
_start:
{
uint32_t v___x_789__boxed_187_; lean_object* v_res_188_; 
v___x_789__boxed_187_ = lean_unbox_uint32(v___x_181_);
lean_dec(v___x_181_);
v_res_188_ = l_Std_Http_Response_instToStringHead___lam__0(v___x_176_, v___x_177_, v___x_178_, v_fst_179_, v___x_180_, v___x_789__boxed_187_, v___x_182_, v_it_183_, v_acc_184_, v_hP_185_, v_recur_186_);
lean_dec_ref(v___x_182_);
lean_dec_ref(v_fst_179_);
lean_dec(v___x_178_);
lean_dec(v___x_177_);
lean_dec_ref(v___x_176_);
return v_res_188_;
}
}
static lean_object* _init_l_Std_Http_Response_instToStringHead___lam__1___closed__3(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__1___closed__2));
v___x_193_ = lean_string_utf8_byte_size(v___x_192_);
return v___x_193_;
}
}
static lean_object* _init_l_Std_Http_Response_instToStringHead___lam__1___boxed__const__1(void){
_start:
{
uint32_t v___x_195_; lean_object* v___x_196_; 
v___x_195_ = 45;
v___x_196_ = lean_box_uint32(v___x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instToStringHead___lam__1(lean_object* v_x_197_){
_start:
{
lean_object* v_fst_198_; lean_object* v_snd_199_; lean_object* v___y_201_; lean_object* v___f_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v_it_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___f_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v_fst_198_ = lean_ctor_get(v_x_197_, 0);
lean_inc_n(v_fst_198_, 2);
v_snd_199_ = lean_ctor_get(v_x_197_, 1);
lean_inc(v_snd_199_);
lean_dec_ref(v_x_197_);
v___f_205_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__1___closed__1));
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = lean_string_utf8_byte_size(v_fst_198_);
v___x_208_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_208_, 0, v_fst_198_);
lean_ctor_set(v___x_208_, 1, v___x_206_);
lean_ctor_set(v___x_208_, 2, v___x_207_);
lean_inc_ref(v___x_208_);
v_it_209_ = l_String_Slice_splitToSubslice___redArg(v___x_208_, v___f_205_);
v___x_210_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__1___closed__2));
v___x_211_ = lean_obj_once(&l_Std_Http_Response_instToStringHead___lam__1___closed__3, &l_Std_Http_Response_instToStringHead___lam__1___closed__3_once, _init_l_Std_Http_Response_instToStringHead___lam__1___closed__3);
v___x_212_ = l_Std_Http_Response_instToStringHead___lam__1___boxed__const__1;
v___f_213_ = lean_alloc_closure((void*)(l_Std_Http_Response_instToStringHead___lam__0___boxed), 11, 7);
lean_closure_set(v___f_213_, 0, v___x_210_);
lean_closure_set(v___f_213_, 1, v___x_206_);
lean_closure_set(v___f_213_, 2, v___x_211_);
lean_closure_set(v___f_213_, 3, v_fst_198_);
lean_closure_set(v___f_213_, 4, v___x_207_);
lean_closure_set(v___f_213_, 5, v___x_212_);
lean_closure_set(v___f_213_, 6, v___x_208_);
v___x_214_ = lean_box(0);
v___x_215_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_213_, v_it_209_, v___x_214_, lean_box(0));
if (lean_obj_tag(v___x_215_) == 0)
{
lean_object* v___x_216_; 
v___x_216_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__1___closed__4));
v___y_201_ = v___x_216_;
goto v___jp_200_;
}
else
{
lean_object* v_val_217_; 
v_val_217_ = lean_ctor_get(v___x_215_, 0);
lean_inc(v_val_217_);
lean_dec_ref_known(v___x_215_, 1);
v___y_201_ = v_val_217_;
goto v___jp_200_;
}
v___jp_200_:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_202_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__1___closed__0));
v___x_203_ = lean_string_append(v___y_201_, v___x_202_);
v___x_204_ = lean_string_append(v___x_203_, v_snd_199_);
lean_dec(v_snd_199_);
return v___x_204_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instToStringHead___lam__2(lean_object* v___f_243_, lean_object* v_r_244_){
_start:
{
lean_object* v_status_245_; uint8_t v_version_246_; lean_object* v_headers_247_; lean_object* v___y_249_; 
v_status_245_ = lean_ctor_get(v_r_244_, 0);
v_version_246_ = lean_ctor_get_uint8(v_r_244_, sizeof(void*)*2);
v_headers_247_ = lean_ctor_get(v_r_244_, 1);
switch(v_version_246_)
{
case 0:
{
lean_object* v___x_272_; 
v___x_272_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__12));
v___y_249_ = v___x_272_;
goto v___jp_248_;
}
case 1:
{
lean_object* v___x_273_; 
v___x_273_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__13));
v___y_249_ = v___x_273_;
goto v___jp_248_;
}
case 2:
{
lean_object* v___x_274_; 
v___x_274_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__14));
v___y_249_ = v___x_274_;
goto v___jp_248_;
}
default: 
{
lean_object* v___x_275_; 
v___x_275_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__15));
v___y_249_ = v___x_275_;
goto v___jp_248_;
}
}
v___jp_248_:
{
lean_object* v_entries_250_; lean_object* v___x_251_; lean_object* v___x_252_; uint16_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; size_t v_sz_263_; size_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v_pairs_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_entries_250_ = lean_ctor_get(v_headers_247_, 0);
v___x_251_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__0));
lean_inc_ref(v___y_249_);
v___x_252_ = lean_string_append(v___y_249_, v___x_251_);
v___x_253_ = l_Std_Http_Status_toCode(v_status_245_);
v___x_254_ = lean_uint16_to_nat(v___x_253_);
v___x_255_ = l_Nat_reprFast(v___x_254_);
v___x_256_ = lean_string_append(v___x_252_, v___x_255_);
lean_dec_ref(v___x_255_);
v___x_257_ = lean_string_append(v___x_256_, v___x_251_);
v___x_258_ = l_Std_Http_Status_reasonPhrase(v_status_245_);
v___x_259_ = lean_string_append(v___x_257_, v___x_258_);
lean_dec_ref(v___x_258_);
v___x_260_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__1));
v___x_261_ = lean_string_append(v___x_259_, v___x_260_);
v___x_262_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__11));
v_sz_263_ = lean_array_size(v_entries_250_);
v___x_264_ = ((size_t)0ULL);
v___x_265_ = l_unsafeCast___redArg(v_entries_250_);
v___x_266_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_262_, v___f_243_, v_sz_263_, v___x_264_, v___x_265_);
v_pairs_267_ = l_unsafeCast___redArg(v___x_266_);
lean_dec(v___x_266_);
v___x_268_ = lean_array_to_list(v_pairs_267_);
v___x_269_ = l_String_intercalate(v___x_260_, v___x_268_);
v___x_270_ = lean_string_append(v___x_261_, v___x_269_);
lean_dec_ref(v___x_269_);
v___x_271_ = lean_string_append(v___x_270_, v___x_260_);
return v___x_271_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instToStringHead___lam__2___boxed(lean_object* v___f_276_, lean_object* v_r_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Std_Http_Response_instToStringHead___lam__2(v___f_276_, v_r_277_);
lean_dec_ref(v_r_277_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__0(lean_object* v___x_283_, lean_object* v___x_284_, lean_object* v___x_285_, lean_object* v_name_286_, lean_object* v___x_287_, uint32_t v___x_288_, lean_object* v___x_289_, lean_object* v_it_290_, lean_object* v_acc_291_, lean_object* v_hP_292_, lean_object* v_recur_293_){
_start:
{
lean_object* v_it_295_; lean_object* v_out_296_; uint32_t v___y_312_; lean_object* v___y_313_; lean_object* v___y_314_; uint8_t v___y_315_; lean_object* v_it_321_; lean_object* v_startInclusive_322_; lean_object* v_endExclusive_323_; 
if (lean_obj_tag(v_it_290_) == 0)
{
lean_object* v_currPos_330_; lean_object* v_searcher_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_353_; 
v_currPos_330_ = lean_ctor_get(v_it_290_, 0);
v_searcher_331_ = lean_ctor_get(v_it_290_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v_it_290_);
if (v_isSharedCheck_353_ == 0)
{
v___x_333_ = v_it_290_;
v_isShared_334_ = v_isSharedCheck_353_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_searcher_331_);
lean_inc(v_currPos_330_);
lean_dec(v_it_290_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_353_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
uint8_t v_decide_335_; 
v_decide_335_ = lean_nat_dec_eq(v_searcher_331_, v___x_287_);
if (v_decide_335_ == 0)
{
uint32_t v___x_336_; uint8_t v___x_337_; 
lean_dec(v___x_287_);
v___x_336_ = lean_string_utf8_get_fast(v_name_286_, v_searcher_331_);
v___x_337_ = lean_uint32_dec_eq(v___x_336_, v___x_288_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_338_ = lean_string_utf8_next_fast(v_name_286_, v_searcher_331_);
lean_dec(v_searcher_331_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 1, v___x_338_);
v___x_340_ = v___x_333_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_currPos_330_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v___x_338_);
v___x_340_ = v_reuseFailAlloc_342_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_341_; 
v___x_341_ = lean_apply_4(v_recur_293_, v___x_340_, v_acc_291_, lean_box(0), lean_box(0));
return v___x_341_;
}
}
else
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v_slice_346_; lean_object* v_nextIt_348_; 
v___x_343_ = lean_string_utf8_next_fast(v_name_286_, v_searcher_331_);
v___x_344_ = lean_nat_sub(v___x_343_, v_searcher_331_);
v___x_345_ = lean_nat_add(v_searcher_331_, v___x_344_);
lean_dec(v___x_344_);
v_slice_346_ = l_String_Slice_subslice_x21(v___x_289_, v_currPos_330_, v_searcher_331_);
lean_inc(v___x_345_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 1, v___x_345_);
lean_ctor_set(v___x_333_, 0, v___x_345_);
v_nextIt_348_ = v___x_333_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v___x_345_);
lean_ctor_set(v_reuseFailAlloc_351_, 1, v___x_345_);
v_nextIt_348_ = v_reuseFailAlloc_351_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
lean_object* v_startInclusive_349_; lean_object* v_endExclusive_350_; 
v_startInclusive_349_ = lean_ctor_get(v_slice_346_, 0);
lean_inc(v_startInclusive_349_);
v_endExclusive_350_ = lean_ctor_get(v_slice_346_, 1);
lean_inc(v_endExclusive_350_);
lean_dec_ref(v_slice_346_);
v_it_321_ = v_nextIt_348_;
v_startInclusive_322_ = v_startInclusive_349_;
v_endExclusive_323_ = v_endExclusive_350_;
goto v___jp_320_;
}
}
}
else
{
lean_object* v___x_352_; 
lean_del_object(v___x_333_);
lean_dec(v_searcher_331_);
v___x_352_ = lean_box(1);
v_it_321_ = v___x_352_;
v_startInclusive_322_ = v_currPos_330_;
v_endExclusive_323_ = v___x_287_;
goto v___jp_320_;
}
}
}
else
{
lean_dec_ref(v_recur_293_);
lean_dec(v___x_287_);
return v_acc_291_;
}
v___jp_294_:
{
if (lean_obj_tag(v_acc_291_) == 0)
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_297_, 0, v_out_296_);
v___x_298_ = lean_apply_4(v_recur_293_, v_it_295_, v___x_297_, lean_box(0), lean_box(0));
return v___x_298_;
}
else
{
lean_object* v_val_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_310_; 
v_val_299_ = lean_ctor_get(v_acc_291_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v_acc_291_);
if (v_isSharedCheck_310_ == 0)
{
v___x_301_ = v_acc_291_;
v_isShared_302_ = v_isSharedCheck_310_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_val_299_);
lean_dec(v_acc_291_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_310_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_307_; 
v___x_303_ = lean_string_utf8_extract_fast(v___x_283_, v___x_284_, v___x_285_);
v___x_304_ = lean_string_append(v_val_299_, v___x_303_);
lean_dec_ref(v___x_303_);
v___x_305_ = lean_string_append(v___x_304_, v_out_296_);
lean_dec_ref(v_out_296_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v___x_305_);
v___x_307_ = v___x_301_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_305_);
v___x_307_ = v_reuseFailAlloc_309_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
lean_object* v___x_308_; 
v___x_308_ = lean_apply_4(v_recur_293_, v_it_295_, v___x_307_, lean_box(0), lean_box(0));
return v___x_308_;
}
}
}
}
v___jp_311_:
{
if (v___y_315_ == 0)
{
lean_object* v___x_316_; 
v___x_316_ = lean_string_utf8_set(v___y_313_, v___x_284_, v___y_312_);
v_it_295_ = v___y_314_;
v_out_296_ = v___x_316_;
goto v___jp_294_;
}
else
{
uint32_t v___x_317_; uint32_t v___x_318_; lean_object* v___x_319_; 
v___x_317_ = 4294967264;
v___x_318_ = lean_uint32_add(v___y_312_, v___x_317_);
v___x_319_ = lean_string_utf8_set(v___y_313_, v___x_284_, v___x_318_);
v_it_295_ = v___y_314_;
v_out_296_ = v___x_319_;
goto v___jp_294_;
}
}
v___jp_320_:
{
lean_object* v___x_324_; uint32_t v___x_325_; uint32_t v___x_326_; uint8_t v___x_327_; 
v___x_324_ = lean_string_utf8_extract_fast(v_name_286_, v_startInclusive_322_, v_endExclusive_323_);
lean_dec(v_endExclusive_323_);
lean_dec(v_startInclusive_322_);
v___x_325_ = lean_string_utf8_get(v___x_324_, v___x_284_);
v___x_326_ = 97;
v___x_327_ = lean_uint32_dec_le(v___x_326_, v___x_325_);
if (v___x_327_ == 0)
{
v___y_312_ = v___x_325_;
v___y_313_ = v___x_324_;
v___y_314_ = v_it_321_;
v___y_315_ = v___x_327_;
goto v___jp_311_;
}
else
{
uint32_t v___x_328_; uint8_t v___x_329_; 
v___x_328_ = 122;
v___x_329_ = lean_uint32_dec_le(v___x_325_, v___x_328_);
v___y_312_ = v___x_325_;
v___y_313_ = v___x_324_;
v___y_314_ = v_it_321_;
v___y_315_ = v___x_329_;
goto v___jp_311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__0___boxed(lean_object* v___x_354_, lean_object* v___x_355_, lean_object* v___x_356_, lean_object* v_name_357_, lean_object* v___x_358_, lean_object* v___x_359_, lean_object* v___x_360_, lean_object* v_it_361_, lean_object* v_acc_362_, lean_object* v_hP_363_, lean_object* v_recur_364_){
_start:
{
uint32_t v___x_1241__boxed_365_; lean_object* v_res_366_; 
v___x_1241__boxed_365_ = lean_unbox_uint32(v___x_359_);
lean_dec(v___x_359_);
v_res_366_ = l_Std_Http_Response_instEncodeV11Head___lam__0(v___x_354_, v___x_355_, v___x_356_, v_name_357_, v___x_358_, v___x_1241__boxed_365_, v___x_360_, v_it_361_, v_acc_362_, v_hP_363_, v_recur_364_);
lean_dec_ref(v___x_360_);
lean_dec_ref(v_name_357_);
lean_dec(v___x_356_);
lean_dec(v___x_355_);
lean_dec_ref(v___x_354_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__1(lean_object* v_buf_367_, lean_object* v_name_368_, lean_object* v_value_369_){
_start:
{
lean_object* v___y_371_; lean_object* v___f_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v_it_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___f_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___f_390_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__1___closed__1));
v___x_391_ = lean_unsigned_to_nat(0u);
v___x_392_ = lean_string_utf8_byte_size(v_name_368_);
lean_inc_ref(v_name_368_);
v___x_393_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_393_, 0, v_name_368_);
lean_ctor_set(v___x_393_, 1, v___x_391_);
lean_ctor_set(v___x_393_, 2, v___x_392_);
lean_inc_ref(v___x_393_);
v_it_394_ = l_String_Slice_splitToSubslice___redArg(v___x_393_, v___f_390_);
v___x_395_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__1___closed__2));
v___x_396_ = lean_obj_once(&l_Std_Http_Response_instToStringHead___lam__1___closed__3, &l_Std_Http_Response_instToStringHead___lam__1___closed__3_once, _init_l_Std_Http_Response_instToStringHead___lam__1___closed__3);
v___x_397_ = l_Std_Http_Response_instToStringHead___lam__1___boxed__const__1;
v___f_398_ = lean_alloc_closure((void*)(l_Std_Http_Response_instEncodeV11Head___lam__0___boxed), 11, 7);
lean_closure_set(v___f_398_, 0, v___x_395_);
lean_closure_set(v___f_398_, 1, v___x_391_);
lean_closure_set(v___f_398_, 2, v___x_396_);
lean_closure_set(v___f_398_, 3, v_name_368_);
lean_closure_set(v___f_398_, 4, v___x_392_);
lean_closure_set(v___f_398_, 5, v___x_397_);
lean_closure_set(v___f_398_, 6, v___x_393_);
v___x_399_ = lean_box(0);
v___x_400_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_398_, v_it_394_, v___x_399_, lean_box(0));
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v___x_401_; 
v___x_401_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__1___closed__4));
v___y_371_ = v___x_401_;
goto v___jp_370_;
}
else
{
lean_object* v_val_402_; 
v_val_402_ = lean_ctor_get(v___x_400_, 0);
lean_inc(v_val_402_);
lean_dec_ref_known(v___x_400_, 1);
v___y_371_ = v_val_402_;
goto v___jp_370_;
}
v___jp_370_:
{
lean_object* v_data_372_; lean_object* v_size_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_389_; 
v_data_372_ = lean_ctor_get(v_buf_367_, 0);
v_size_373_ = lean_ctor_get(v_buf_367_, 1);
v_isSharedCheck_389_ = !lean_is_exclusive(v_buf_367_);
if (v_isSharedCheck_389_ == 0)
{
v___x_375_ = v_buf_367_;
v_isShared_376_ = v_isSharedCheck_389_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_size_373_);
lean_inc(v_data_372_);
lean_dec(v_buf_367_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_389_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_387_; 
v___x_377_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__1___closed__0));
v___x_378_ = lean_string_append(v___y_371_, v___x_377_);
v___x_379_ = lean_string_append(v___x_378_, v_value_369_);
v___x_380_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__1));
v___x_381_ = lean_string_append(v___x_379_, v___x_380_);
v___x_382_ = lean_string_to_utf8(v___x_381_);
lean_dec_ref(v___x_381_);
lean_inc_ref(v___x_382_);
v___x_383_ = lean_array_push(v_data_372_, v___x_382_);
v___x_384_ = lean_byte_array_size(v___x_382_);
lean_dec_ref(v___x_382_);
v___x_385_ = lean_nat_add(v_size_373_, v___x_384_);
lean_dec(v_size_373_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 1, v___x_385_);
lean_ctor_set(v___x_375_, 0, v___x_383_);
v___x_387_ = v___x_375_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_383_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v___x_385_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__1___boxed(lean_object* v_buf_403_, lean_object* v_name_404_, lean_object* v_value_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Std_Http_Response_instEncodeV11Head___lam__1(v_buf_403_, v_name_404_, v_value_405_);
lean_dec_ref(v_value_405_);
return v_res_406_;
}
}
static uint8_t _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__0(void){
_start:
{
uint32_t v___x_407_; uint8_t v___x_408_; 
v___x_407_ = 32;
v___x_408_ = lean_uint32_to_uint8(v___x_407_);
return v___x_408_;
}
}
static lean_object* _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__1(void){
_start:
{
uint8_t v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_409_ = lean_uint8_once(&l_Std_Http_Response_instEncodeV11Head___lam__2___closed__0, &l_Std_Http_Response_instEncodeV11Head___lam__2___closed__0_once, _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__0);
v___x_410_ = lean_unsigned_to_nat(1u);
v___x_411_ = lean_mk_empty_array_with_capacity(v___x_410_);
v___x_412_ = lean_box(v___x_409_);
v___x_413_ = lean_array_push(v___x_411_, v___x_412_);
v___x_414_ = lean_byte_array_mk(v___x_413_);
return v___x_414_;
}
}
static lean_object* _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__2(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = lean_obj_once(&l_Std_Http_Response_instEncodeV11Head___lam__2___closed__1, &l_Std_Http_Response_instEncodeV11Head___lam__2___closed__1_once, _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__1);
v___x_416_ = lean_byte_array_size(v___x_415_);
return v___x_416_;
}
}
static lean_object* _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__3(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__1));
v___x_418_ = lean_string_to_utf8(v___x_417_);
return v___x_418_;
}
}
static lean_object* _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__4(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = lean_obj_once(&l_Std_Http_Response_instEncodeV11Head___lam__2___closed__3, &l_Std_Http_Response_instEncodeV11Head___lam__2___closed__3_once, _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__3);
v___x_420_ = lean_byte_array_size(v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__2(lean_object* v___f_421_, lean_object* v_buffer_422_, lean_object* v_r_423_){
_start:
{
lean_object* v_status_424_; uint8_t v_version_425_; lean_object* v_headers_426_; lean_object* v___y_428_; 
v_status_424_ = lean_ctor_get(v_r_423_, 0);
v_version_425_ = lean_ctor_get_uint8(v_r_423_, sizeof(void*)*2);
v_headers_426_ = lean_ctor_get(v_r_423_, 1);
switch(v_version_425_)
{
case 0:
{
lean_object* v___x_476_; 
v___x_476_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__12));
v___y_428_ = v___x_476_;
goto v___jp_427_;
}
case 1:
{
lean_object* v___x_477_; 
v___x_477_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__13));
v___y_428_ = v___x_477_;
goto v___jp_427_;
}
case 2:
{
lean_object* v___x_478_; 
v___x_478_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__14));
v___y_428_ = v___x_478_;
goto v___jp_427_;
}
default: 
{
lean_object* v___x_479_; 
v___x_479_ = ((lean_object*)(l_Std_Http_Response_instToStringHead___lam__2___closed__15));
v___y_428_ = v___x_479_;
goto v___jp_427_;
}
}
v___jp_427_:
{
lean_object* v_data_429_; lean_object* v_size_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_475_; 
v_data_429_ = lean_ctor_get(v_buffer_422_, 0);
v_size_430_ = lean_ctor_get(v_buffer_422_, 1);
v_isSharedCheck_475_ = !lean_is_exclusive(v_buffer_422_);
if (v_isSharedCheck_475_ == 0)
{
v___x_432_ = v_buffer_422_;
v_isShared_433_ = v_isSharedCheck_475_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_size_430_);
lean_inc(v_data_429_);
lean_dec(v_buffer_422_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_475_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; uint16_t v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v_buffer_461_; 
v___x_434_ = lean_string_to_utf8(v___y_428_);
lean_inc_ref(v___x_434_);
v___x_435_ = lean_array_push(v_data_429_, v___x_434_);
v___x_436_ = lean_byte_array_size(v___x_434_);
lean_dec_ref(v___x_434_);
v___x_437_ = lean_nat_add(v_size_430_, v___x_436_);
lean_dec(v_size_430_);
v___x_438_ = lean_obj_once(&l_Std_Http_Response_instEncodeV11Head___lam__2___closed__1, &l_Std_Http_Response_instEncodeV11Head___lam__2___closed__1_once, _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__1);
v___x_439_ = lean_array_push(v___x_435_, v___x_438_);
v___x_440_ = lean_obj_once(&l_Std_Http_Response_instEncodeV11Head___lam__2___closed__2, &l_Std_Http_Response_instEncodeV11Head___lam__2___closed__2_once, _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__2);
v___x_441_ = lean_nat_add(v___x_437_, v___x_440_);
lean_dec(v___x_437_);
v___x_442_ = l_Std_Http_Status_toCode(v_status_424_);
v___x_443_ = lean_uint16_to_nat(v___x_442_);
v___x_444_ = l_Nat_reprFast(v___x_443_);
v___x_445_ = lean_string_to_utf8(v___x_444_);
lean_dec_ref(v___x_444_);
lean_inc_ref(v___x_445_);
v___x_446_ = lean_array_push(v___x_439_, v___x_445_);
v___x_447_ = lean_byte_array_size(v___x_445_);
lean_dec_ref(v___x_445_);
v___x_448_ = lean_nat_add(v___x_441_, v___x_447_);
lean_dec(v___x_441_);
v___x_449_ = lean_array_push(v___x_446_, v___x_438_);
v___x_450_ = lean_nat_add(v___x_448_, v___x_440_);
lean_dec(v___x_448_);
v___x_451_ = l_Std_Http_Status_reasonPhrase(v_status_424_);
v___x_452_ = lean_string_to_utf8(v___x_451_);
lean_dec_ref(v___x_451_);
lean_inc_ref(v___x_452_);
v___x_453_ = lean_array_push(v___x_449_, v___x_452_);
v___x_454_ = lean_byte_array_size(v___x_452_);
lean_dec_ref(v___x_452_);
v___x_455_ = lean_nat_add(v___x_450_, v___x_454_);
lean_dec(v___x_450_);
v___x_456_ = lean_obj_once(&l_Std_Http_Response_instEncodeV11Head___lam__2___closed__3, &l_Std_Http_Response_instEncodeV11Head___lam__2___closed__3_once, _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__3);
v___x_457_ = lean_array_push(v___x_453_, v___x_456_);
v___x_458_ = lean_obj_once(&l_Std_Http_Response_instEncodeV11Head___lam__2___closed__4, &l_Std_Http_Response_instEncodeV11Head___lam__2___closed__4_once, _init_l_Std_Http_Response_instEncodeV11Head___lam__2___closed__4);
v___x_459_ = lean_nat_add(v___x_455_, v___x_458_);
lean_dec(v___x_455_);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 1, v___x_459_);
lean_ctor_set(v___x_432_, 0, v___x_457_);
v_buffer_461_ = v___x_432_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v___x_457_);
lean_ctor_set(v_reuseFailAlloc_474_, 1, v___x_459_);
v_buffer_461_ = v_reuseFailAlloc_474_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
lean_object* v_buffer_462_; lean_object* v_data_463_; lean_object* v_size_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_473_; 
v_buffer_462_ = l_Std_Http_Headers_fold___redArg(v_headers_426_, v_buffer_461_, v___f_421_);
v_data_463_ = lean_ctor_get(v_buffer_462_, 0);
v_size_464_ = lean_ctor_get(v_buffer_462_, 1);
v_isSharedCheck_473_ = !lean_is_exclusive(v_buffer_462_);
if (v_isSharedCheck_473_ == 0)
{
v___x_466_ = v_buffer_462_;
v_isShared_467_ = v_isSharedCheck_473_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_size_464_);
lean_inc(v_data_463_);
lean_dec(v_buffer_462_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_473_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_471_; 
v___x_468_ = lean_array_push(v_data_463_, v___x_456_);
v___x_469_ = lean_nat_add(v_size_464_, v___x_458_);
lean_dec(v_size_464_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 1, v___x_469_);
lean_ctor_set(v___x_466_, 0, v___x_468_);
v___x_471_ = v___x_466_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_468_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_instEncodeV11Head___lam__2___boxed(lean_object* v___f_480_, lean_object* v_buffer_481_, lean_object* v_r_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Std_Http_Response_instEncodeV11Head___lam__2(v___f_480_, v_buffer_481_, v_r_482_);
lean_dec_ref(v_r_482_);
return v_res_483_;
}
}
static lean_object* _init_l_Std_Http_Response_new___closed__0(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = l_Std_Http_Extensions_empty;
v___x_489_ = lean_obj_once(&l_Std_Http_Response_instInhabitedHead_default___closed__0, &l_Std_Http_Response_instInhabitedHead_default___closed__0_once, _init_l_Std_Http_Response_instInhabitedHead_default___closed__0);
v___x_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
lean_ctor_set(v___x_490_, 1, v___x_488_);
return v___x_490_;
}
}
static lean_object* _init_l_Std_Http_Response_new(void){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = lean_obj_once(&l_Std_Http_Response_new___closed__0, &l_Std_Http_Response_new___closed__0_once, _init_l_Std_Http_Response_new___closed__0);
return v___x_491_;
}
}
static lean_object* _init_l_Std_Http_Response_Builder_new(void){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = lean_obj_once(&l_Std_Http_Response_new___closed__0, &l_Std_Http_Response_new___closed__0_once, _init_l_Std_Http_Response_new___closed__0);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_status(lean_object* v_builder_493_, lean_object* v_status_494_){
_start:
{
lean_object* v_line_495_; lean_object* v_extensions_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_513_; 
v_line_495_ = lean_ctor_get(v_builder_493_, 0);
v_extensions_496_ = lean_ctor_get(v_builder_493_, 1);
v_isSharedCheck_513_ = !lean_is_exclusive(v_builder_493_);
if (v_isSharedCheck_513_ == 0)
{
v___x_498_ = v_builder_493_;
v_isShared_499_ = v_isSharedCheck_513_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_extensions_496_);
lean_inc(v_line_495_);
lean_dec(v_builder_493_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_513_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
uint8_t v_version_500_; lean_object* v_headers_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_511_; 
v_version_500_ = lean_ctor_get_uint8(v_line_495_, sizeof(void*)*2);
v_headers_501_ = lean_ctor_get(v_line_495_, 1);
v_isSharedCheck_511_ = !lean_is_exclusive(v_line_495_);
if (v_isSharedCheck_511_ == 0)
{
lean_object* v_unused_512_; 
v_unused_512_ = lean_ctor_get(v_line_495_, 0);
lean_dec(v_unused_512_);
v___x_503_ = v_line_495_;
v_isShared_504_ = v_isSharedCheck_511_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_headers_501_);
lean_dec(v_line_495_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_511_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
lean_ctor_set(v___x_503_, 0, v_status_494_);
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_status_494_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v_headers_501_);
lean_ctor_set_uint8(v_reuseFailAlloc_510_, sizeof(void*)*2, v_version_500_);
v___x_506_ = v_reuseFailAlloc_510_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
lean_object* v___x_508_; 
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_506_);
v___x_508_ = v___x_498_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
lean_ctor_set(v_reuseFailAlloc_509_, 1, v_extensions_496_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_headers(lean_object* v_builder_514_, lean_object* v_headers_515_){
_start:
{
lean_object* v_line_516_; lean_object* v_extensions_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_534_; 
v_line_516_ = lean_ctor_get(v_builder_514_, 0);
v_extensions_517_ = lean_ctor_get(v_builder_514_, 1);
v_isSharedCheck_534_ = !lean_is_exclusive(v_builder_514_);
if (v_isSharedCheck_534_ == 0)
{
v___x_519_ = v_builder_514_;
v_isShared_520_ = v_isSharedCheck_534_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_extensions_517_);
lean_inc(v_line_516_);
lean_dec(v_builder_514_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_534_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v_status_521_; uint8_t v_version_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_532_; 
v_status_521_ = lean_ctor_get(v_line_516_, 0);
v_version_522_ = lean_ctor_get_uint8(v_line_516_, sizeof(void*)*2);
v_isSharedCheck_532_ = !lean_is_exclusive(v_line_516_);
if (v_isSharedCheck_532_ == 0)
{
lean_object* v_unused_533_; 
v_unused_533_ = lean_ctor_get(v_line_516_, 1);
lean_dec(v_unused_533_);
v___x_524_ = v_line_516_;
v_isShared_525_ = v_isSharedCheck_532_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_status_521_);
lean_dec(v_line_516_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_532_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 1, v_headers_515_);
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_status_521_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_headers_515_);
lean_ctor_set_uint8(v_reuseFailAlloc_531_, sizeof(void*)*2, v_version_522_);
v___x_527_ = v_reuseFailAlloc_531_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_529_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_527_);
v___x_529_ = v___x_519_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_527_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_extensions_517_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0___redArg(lean_object* v_a_535_, lean_object* v_x_536_){
_start:
{
if (lean_obj_tag(v_x_536_) == 0)
{
uint8_t v___x_537_; 
v___x_537_ = 0;
return v___x_537_;
}
else
{
lean_object* v_key_538_; lean_object* v_tail_539_; uint8_t v___x_540_; 
v_key_538_ = lean_ctor_get(v_x_536_, 0);
v_tail_539_ = lean_ctor_get(v_x_536_, 2);
v___x_540_ = lean_string_dec_eq(v_key_538_, v_a_535_);
if (v___x_540_ == 0)
{
v_x_536_ = v_tail_539_;
goto _start;
}
else
{
return v___x_540_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0___redArg___boxed(lean_object* v_a_542_, lean_object* v_x_543_){
_start:
{
uint8_t v_res_544_; lean_object* v_r_545_; 
v_res_544_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0___redArg(v_a_542_, v_x_543_);
lean_dec(v_x_543_);
lean_dec_ref(v_a_542_);
v_r_545_ = lean_box(v_res_544_);
return v_r_545_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_546_, lean_object* v_x_547_){
_start:
{
if (lean_obj_tag(v_x_547_) == 0)
{
return v_x_546_;
}
else
{
lean_object* v_key_548_; lean_object* v_value_549_; lean_object* v_tail_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_573_; 
v_key_548_ = lean_ctor_get(v_x_547_, 0);
v_value_549_ = lean_ctor_get(v_x_547_, 1);
v_tail_550_ = lean_ctor_get(v_x_547_, 2);
v_isSharedCheck_573_ = !lean_is_exclusive(v_x_547_);
if (v_isSharedCheck_573_ == 0)
{
v___x_552_ = v_x_547_;
v_isShared_553_ = v_isSharedCheck_573_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_tail_550_);
lean_inc(v_value_549_);
lean_inc(v_key_548_);
lean_dec(v_x_547_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_573_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_554_; uint64_t v___x_555_; uint64_t v___x_556_; uint64_t v___x_557_; uint64_t v_fold_558_; uint64_t v___x_559_; uint64_t v___x_560_; uint64_t v___x_561_; size_t v___x_562_; size_t v___x_563_; size_t v___x_564_; size_t v___x_565_; size_t v___x_566_; lean_object* v___x_567_; lean_object* v___x_569_; 
v___x_554_ = lean_array_get_size(v_x_546_);
v___x_555_ = lean_string_hash(v_key_548_);
v___x_556_ = 32ULL;
v___x_557_ = lean_uint64_shift_right(v___x_555_, v___x_556_);
v_fold_558_ = lean_uint64_xor(v___x_555_, v___x_557_);
v___x_559_ = 16ULL;
v___x_560_ = lean_uint64_shift_right(v_fold_558_, v___x_559_);
v___x_561_ = lean_uint64_xor(v_fold_558_, v___x_560_);
v___x_562_ = lean_uint64_to_usize(v___x_561_);
v___x_563_ = lean_usize_of_nat(v___x_554_);
v___x_564_ = ((size_t)1ULL);
v___x_565_ = lean_usize_sub(v___x_563_, v___x_564_);
v___x_566_ = lean_usize_land(v___x_562_, v___x_565_);
v___x_567_ = lean_array_uget_borrowed(v_x_546_, v___x_566_);
lean_inc(v___x_567_);
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 2, v___x_567_);
v___x_569_ = v___x_552_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_key_548_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_value_549_);
lean_ctor_set(v_reuseFailAlloc_572_, 2, v___x_567_);
v___x_569_ = v_reuseFailAlloc_572_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
lean_object* v___x_570_; 
v___x_570_ = lean_array_uset(v_x_546_, v___x_566_, v___x_569_);
v_x_546_ = v___x_570_;
v_x_547_ = v_tail_550_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2___redArg(lean_object* v_i_574_, lean_object* v_source_575_, lean_object* v_target_576_){
_start:
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = lean_array_get_size(v_source_575_);
v___x_578_ = lean_nat_dec_lt(v_i_574_, v___x_577_);
if (v___x_578_ == 0)
{
lean_dec_ref(v_source_575_);
lean_dec(v_i_574_);
return v_target_576_;
}
else
{
lean_object* v_es_579_; lean_object* v___x_580_; lean_object* v_source_581_; lean_object* v_target_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v_es_579_ = lean_array_fget(v_source_575_, v_i_574_);
v___x_580_ = lean_box(0);
v_source_581_ = lean_array_fset(v_source_575_, v_i_574_, v___x_580_);
v_target_582_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2_spec__3___redArg(v_target_576_, v_es_579_);
v___x_583_ = lean_unsigned_to_nat(1u);
v___x_584_ = lean_nat_add(v_i_574_, v___x_583_);
lean_dec(v_i_574_);
v_i_574_ = v___x_584_;
v_source_575_ = v_source_581_;
v_target_576_ = v_target_582_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1___redArg(lean_object* v_data_586_){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v_nbuckets_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_587_ = lean_array_get_size(v_data_586_);
v___x_588_ = lean_unsigned_to_nat(2u);
v_nbuckets_589_ = lean_nat_mul(v___x_587_, v___x_588_);
v___x_590_ = lean_unsigned_to_nat(0u);
v___x_591_ = lean_box(0);
v___x_592_ = lean_mk_array(v_nbuckets_589_, v___x_591_);
v___x_593_ = lean_array_propagate_mark(v_data_586_, v___x_592_);
v___x_594_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2___redArg(v___x_590_, v_data_586_, v___x_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__2___lam__0(lean_object* v_i_595_, lean_object* v_x_596_){
_start:
{
if (lean_obj_tag(v_x_596_) == 0)
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_597_ = lean_unsigned_to_nat(1u);
v___x_598_ = lean_mk_empty_array_with_capacity(v___x_597_);
v___x_599_ = lean_array_push(v___x_598_, v_i_595_);
v___x_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
return v___x_600_;
}
else
{
lean_object* v_val_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_609_; 
v_val_601_ = lean_ctor_get(v_x_596_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v_x_596_);
if (v_isSharedCheck_609_ == 0)
{
v___x_603_ = v_x_596_;
v_isShared_604_ = v_isSharedCheck_609_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_val_601_);
lean_dec(v_x_596_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_609_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_605_; lean_object* v___x_607_; 
v___x_605_ = lean_array_push(v_val_601_, v_i_595_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v___x_605_);
v___x_607_ = v___x_603_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_605_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__2(lean_object* v_i_610_, lean_object* v_a_611_, lean_object* v_x_612_){
_start:
{
if (lean_obj_tag(v_x_612_) == 0)
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v_val_615_; lean_object* v___x_616_; 
v___x_613_ = lean_box(0);
v___x_614_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__2___lam__0(v_i_610_, v___x_613_);
v_val_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_val_615_);
lean_dec(v___x_614_);
v___x_616_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_616_, 0, v_a_611_);
lean_ctor_set(v___x_616_, 1, v_val_615_);
lean_ctor_set(v___x_616_, 2, v_x_612_);
return v___x_616_;
}
else
{
lean_object* v_key_617_; lean_object* v_value_618_; lean_object* v_tail_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_634_; 
v_key_617_ = lean_ctor_get(v_x_612_, 0);
v_value_618_ = lean_ctor_get(v_x_612_, 1);
v_tail_619_ = lean_ctor_get(v_x_612_, 2);
v_isSharedCheck_634_ = !lean_is_exclusive(v_x_612_);
if (v_isSharedCheck_634_ == 0)
{
v___x_621_ = v_x_612_;
v_isShared_622_ = v_isSharedCheck_634_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_tail_619_);
lean_inc(v_value_618_);
lean_inc(v_key_617_);
lean_dec(v_x_612_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_634_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
uint8_t v___x_623_; 
v___x_623_ = lean_string_dec_eq(v_key_617_, v_a_611_);
if (v___x_623_ == 0)
{
lean_object* v_tail_624_; lean_object* v___x_626_; 
v_tail_624_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__2(v_i_610_, v_a_611_, v_tail_619_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 2, v_tail_624_);
v___x_626_ = v___x_621_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_key_617_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v_value_618_);
lean_ctor_set(v_reuseFailAlloc_627_, 2, v_tail_624_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
else
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v_val_630_; lean_object* v___x_632_; 
lean_dec(v_key_617_);
v___x_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_628_, 0, v_value_618_);
v___x_629_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__2___lam__0(v_i_610_, v___x_628_);
v_val_630_ = lean_ctor_get(v___x_629_, 0);
lean_inc(v_val_630_);
lean_dec(v___x_629_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 1, v_val_630_);
lean_ctor_set(v___x_621_, 0, v_a_611_);
v___x_632_ = v___x_621_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_611_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v_val_630_);
lean_ctor_set(v_reuseFailAlloc_633_, 2, v_tail_619_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0(lean_object* v_i_635_, lean_object* v_m_636_, lean_object* v_a_637_){
_start:
{
lean_object* v_size_638_; lean_object* v_buckets_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_689_; 
v_size_638_ = lean_ctor_get(v_m_636_, 0);
v_buckets_639_ = lean_ctor_get(v_m_636_, 1);
v_isSharedCheck_689_ = !lean_is_exclusive(v_m_636_);
if (v_isSharedCheck_689_ == 0)
{
v___x_641_ = v_m_636_;
v_isShared_642_ = v_isSharedCheck_689_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_buckets_639_);
lean_inc(v_size_638_);
lean_dec(v_m_636_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_689_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_643_; uint64_t v___x_644_; uint64_t v___x_645_; uint64_t v___x_646_; uint64_t v_fold_647_; uint64_t v___x_648_; uint64_t v___x_649_; uint64_t v___x_650_; size_t v___x_651_; size_t v___x_652_; size_t v___x_653_; size_t v___x_654_; size_t v___x_655_; lean_object* v_bkt_656_; uint8_t v___x_657_; 
v___x_643_ = lean_array_get_size(v_buckets_639_);
v___x_644_ = lean_string_hash(v_a_637_);
v___x_645_ = 32ULL;
v___x_646_ = lean_uint64_shift_right(v___x_644_, v___x_645_);
v_fold_647_ = lean_uint64_xor(v___x_644_, v___x_646_);
v___x_648_ = 16ULL;
v___x_649_ = lean_uint64_shift_right(v_fold_647_, v___x_648_);
v___x_650_ = lean_uint64_xor(v_fold_647_, v___x_649_);
v___x_651_ = lean_uint64_to_usize(v___x_650_);
v___x_652_ = lean_usize_of_nat(v___x_643_);
v___x_653_ = ((size_t)1ULL);
v___x_654_ = lean_usize_sub(v___x_652_, v___x_653_);
v___x_655_ = lean_usize_land(v___x_651_, v___x_654_);
v_bkt_656_ = lean_array_uget_borrowed(v_buckets_639_, v___x_655_);
v___x_657_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0___redArg(v_a_637_, v_bkt_656_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v_size_x27_661_; lean_object* v___x_662_; lean_object* v_buckets_x27_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_658_ = lean_unsigned_to_nat(1u);
v___x_659_ = lean_mk_empty_array_with_capacity(v___x_658_);
v___x_660_ = lean_array_push(v___x_659_, v_i_635_);
v_size_x27_661_ = lean_nat_add(v_size_638_, v___x_658_);
lean_dec(v_size_638_);
lean_inc(v_bkt_656_);
v___x_662_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_662_, 0, v_a_637_);
lean_ctor_set(v___x_662_, 1, v___x_660_);
lean_ctor_set(v___x_662_, 2, v_bkt_656_);
v_buckets_x27_663_ = lean_array_uset(v_buckets_639_, v___x_655_, v___x_662_);
v___x_664_ = lean_unsigned_to_nat(4u);
v___x_665_ = lean_nat_mul(v_size_x27_661_, v___x_664_);
v___x_666_ = lean_unsigned_to_nat(3u);
v___x_667_ = lean_nat_div(v___x_665_, v___x_666_);
lean_dec(v___x_665_);
v___x_668_ = lean_array_get_size(v_buckets_x27_663_);
v___x_669_ = lean_nat_dec_le(v___x_667_, v___x_668_);
lean_dec(v___x_667_);
if (v___x_669_ == 0)
{
lean_object* v_val_670_; lean_object* v___x_672_; 
v_val_670_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1___redArg(v_buckets_x27_663_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 1, v_val_670_);
lean_ctor_set(v___x_641_, 0, v_size_x27_661_);
v___x_672_ = v___x_641_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_size_x27_661_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v_val_670_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
else
{
lean_object* v___x_675_; 
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 1, v_buckets_x27_663_);
lean_ctor_set(v___x_641_, 0, v_size_x27_661_);
v___x_675_ = v___x_641_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_size_x27_661_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v_buckets_x27_663_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
else
{
lean_object* v___x_677_; lean_object* v_buckets_x27_678_; lean_object* v_bkt_x27_679_; lean_object* v___y_681_; uint8_t v___x_686_; 
lean_inc(v_bkt_656_);
v___x_677_ = lean_box(0);
v_buckets_x27_678_ = lean_array_uset(v_buckets_639_, v___x_655_, v___x_677_);
lean_inc_ref(v_a_637_);
v_bkt_x27_679_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__2(v_i_635_, v_a_637_, v_bkt_656_);
v___x_686_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0___redArg(v_a_637_, v_bkt_x27_679_);
lean_dec_ref(v_a_637_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_687_ = lean_unsigned_to_nat(1u);
v___x_688_ = lean_nat_sub(v_size_638_, v___x_687_);
lean_dec(v_size_638_);
v___y_681_ = v___x_688_;
goto v___jp_680_;
}
else
{
v___y_681_ = v_size_638_;
goto v___jp_680_;
}
v___jp_680_:
{
lean_object* v___x_682_; lean_object* v___x_684_; 
v___x_682_ = lean_array_uset(v_buckets_x27_678_, v___x_655_, v_bkt_x27_679_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 1, v___x_682_);
lean_ctor_set(v___x_641_, 0, v___y_681_);
v___x_684_ = v___x_641_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___y_681_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_header(lean_object* v_builder_690_, lean_object* v_key_691_, lean_object* v_value_692_){
_start:
{
lean_object* v_line_693_; lean_object* v_headers_694_; lean_object* v_extensions_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_725_; 
v_line_693_ = lean_ctor_get(v_builder_690_, 0);
lean_inc_ref(v_line_693_);
v_headers_694_ = lean_ctor_get(v_line_693_, 1);
lean_inc_ref(v_headers_694_);
v_extensions_695_ = lean_ctor_get(v_builder_690_, 1);
v_isSharedCheck_725_ = !lean_is_exclusive(v_builder_690_);
if (v_isSharedCheck_725_ == 0)
{
lean_object* v_unused_726_; 
v_unused_726_ = lean_ctor_get(v_builder_690_, 0);
lean_dec(v_unused_726_);
v___x_697_ = v_builder_690_;
v_isShared_698_ = v_isSharedCheck_725_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_extensions_695_);
lean_dec(v_builder_690_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_725_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v_status_699_; uint8_t v_version_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_723_; 
v_status_699_ = lean_ctor_get(v_line_693_, 0);
v_version_700_ = lean_ctor_get_uint8(v_line_693_, sizeof(void*)*2);
v_isSharedCheck_723_ = !lean_is_exclusive(v_line_693_);
if (v_isSharedCheck_723_ == 0)
{
lean_object* v_unused_724_; 
v_unused_724_ = lean_ctor_get(v_line_693_, 1);
lean_dec(v_unused_724_);
v___x_702_ = v_line_693_;
v_isShared_703_ = v_isSharedCheck_723_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_status_699_);
lean_dec(v_line_693_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_723_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v_entries_704_; lean_object* v_indexes_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_722_; 
v_entries_704_ = lean_ctor_get(v_headers_694_, 0);
v_indexes_705_ = lean_ctor_get(v_headers_694_, 1);
v_isSharedCheck_722_ = !lean_is_exclusive(v_headers_694_);
if (v_isSharedCheck_722_ == 0)
{
v___x_707_ = v_headers_694_;
v_isShared_708_ = v_isSharedCheck_722_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_indexes_705_);
lean_inc(v_entries_704_);
lean_dec(v_headers_694_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_722_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v_i_709_; lean_object* v___x_710_; lean_object* v_entries_711_; lean_object* v_indexes_712_; lean_object* v___x_714_; 
v_i_709_ = lean_array_get_size(v_entries_704_);
lean_inc_ref(v_key_691_);
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v_key_691_);
lean_ctor_set(v___x_710_, 1, v_value_692_);
v_entries_711_ = lean_array_push(v_entries_704_, v___x_710_);
v_indexes_712_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0(v_i_709_, v_indexes_705_, v_key_691_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 1, v_indexes_712_);
lean_ctor_set(v___x_707_, 0, v_entries_711_);
v___x_714_ = v___x_707_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_entries_711_);
lean_ctor_set(v_reuseFailAlloc_721_, 1, v_indexes_712_);
v___x_714_ = v_reuseFailAlloc_721_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v___x_716_; 
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 1, v___x_714_);
v___x_716_ = v___x_702_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_status_699_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v___x_714_);
lean_ctor_set_uint8(v_reuseFailAlloc_720_, sizeof(void*)*2, v_version_700_);
v___x_716_ = v_reuseFailAlloc_720_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_718_; 
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 0, v___x_716_);
v___x_718_ = v___x_697_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v_extensions_695_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0(lean_object* v_00_u03b2_727_, lean_object* v_a_728_, lean_object* v_x_729_){
_start:
{
uint8_t v___x_730_; 
v___x_730_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0___redArg(v_a_728_, v_x_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0___boxed(lean_object* v_00_u03b2_731_, lean_object* v_a_732_, lean_object* v_x_733_){
_start:
{
uint8_t v_res_734_; lean_object* v_r_735_; 
v_res_734_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__0(v_00_u03b2_731_, v_a_732_, v_x_733_);
lean_dec(v_x_733_);
lean_dec_ref(v_a_732_);
v_r_735_ = lean_box(v_res_734_);
return v_r_735_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1(lean_object* v_00_u03b2_736_, lean_object* v_data_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1___redArg(v_data_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_739_, lean_object* v_i_740_, lean_object* v_source_741_, lean_object* v_target_742_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2___redArg(v_i_740_, v_source_741_, v_target_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_744_, lean_object* v_x_745_, lean_object* v_x_746_){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0_spec__1_spec__2_spec__3___redArg(v_x_745_, v_x_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_header_x21(lean_object* v_builder_748_, lean_object* v_key_749_, lean_object* v_value_750_){
_start:
{
lean_object* v_line_751_; lean_object* v_headers_752_; lean_object* v_extensions_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_785_; 
v_line_751_ = lean_ctor_get(v_builder_748_, 0);
lean_inc_ref(v_line_751_);
v_headers_752_ = lean_ctor_get(v_line_751_, 1);
lean_inc_ref(v_headers_752_);
v_extensions_753_ = lean_ctor_get(v_builder_748_, 1);
v_isSharedCheck_785_ = !lean_is_exclusive(v_builder_748_);
if (v_isSharedCheck_785_ == 0)
{
lean_object* v_unused_786_; 
v_unused_786_ = lean_ctor_get(v_builder_748_, 0);
lean_dec(v_unused_786_);
v___x_755_ = v_builder_748_;
v_isShared_756_ = v_isSharedCheck_785_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_extensions_753_);
lean_dec(v_builder_748_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_785_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v_status_757_; uint8_t v_version_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_783_; 
v_status_757_ = lean_ctor_get(v_line_751_, 0);
v_version_758_ = lean_ctor_get_uint8(v_line_751_, sizeof(void*)*2);
v_isSharedCheck_783_ = !lean_is_exclusive(v_line_751_);
if (v_isSharedCheck_783_ == 0)
{
lean_object* v_unused_784_; 
v_unused_784_ = lean_ctor_get(v_line_751_, 1);
lean_dec(v_unused_784_);
v___x_760_ = v_line_751_;
v_isShared_761_ = v_isSharedCheck_783_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_status_757_);
lean_dec(v_line_751_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_783_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v_entries_762_; lean_object* v_indexes_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_782_; 
v_entries_762_ = lean_ctor_get(v_headers_752_, 0);
v_indexes_763_ = lean_ctor_get(v_headers_752_, 1);
v_isSharedCheck_782_ = !lean_is_exclusive(v_headers_752_);
if (v_isSharedCheck_782_ == 0)
{
v___x_765_ = v_headers_752_;
v_isShared_766_ = v_isSharedCheck_782_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_indexes_763_);
lean_inc(v_entries_762_);
lean_dec(v_headers_752_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_782_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v_key_767_; lean_object* v_value_768_; lean_object* v_i_769_; lean_object* v___x_770_; lean_object* v_entries_771_; lean_object* v_indexes_772_; lean_object* v___x_774_; 
v_key_767_ = l_Std_Http_Header_Name_ofString_x21(v_key_749_);
v_value_768_ = l_Std_Http_Header_Value_ofString_x21(v_value_750_);
v_i_769_ = lean_array_get_size(v_entries_762_);
lean_inc_ref(v_key_767_);
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v_key_767_);
lean_ctor_set(v___x_770_, 1, v_value_768_);
v_entries_771_ = lean_array_push(v_entries_762_, v___x_770_);
v_indexes_772_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0(v_i_769_, v_indexes_763_, v_key_767_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 1, v_indexes_772_);
lean_ctor_set(v___x_765_, 0, v_entries_771_);
v___x_774_ = v___x_765_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_entries_771_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_indexes_772_);
v___x_774_ = v_reuseFailAlloc_781_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_776_; 
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 1, v___x_774_);
v___x_776_ = v___x_760_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_status_757_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v___x_774_);
lean_ctor_set_uint8(v_reuseFailAlloc_780_, sizeof(void*)*2, v_version_758_);
v___x_776_ = v_reuseFailAlloc_780_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_778_; 
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v___x_776_);
v___x_778_ = v___x_755_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_776_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v_extensions_753_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_header_x3f(lean_object* v_builder_787_, lean_object* v_key_788_, lean_object* v_value_789_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l_Std_Http_Header_Name_ofString_x3f(v_key_788_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v___x_791_; 
lean_dec_ref(v_value_789_);
lean_dec_ref(v_builder_787_);
v___x_791_ = lean_box(0);
return v___x_791_;
}
else
{
lean_object* v_val_792_; lean_object* v___x_793_; 
v_val_792_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_val_792_);
lean_dec_ref_known(v___x_790_, 1);
v___x_793_ = l_Std_Http_Header_Value_ofString_x3f(v_value_789_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v___x_794_; 
lean_dec(v_val_792_);
lean_dec_ref(v_builder_787_);
v___x_794_ = lean_box(0);
return v___x_794_;
}
else
{
lean_object* v_line_795_; lean_object* v_headers_796_; lean_object* v_val_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_836_; 
v_line_795_ = lean_ctor_get(v_builder_787_, 0);
lean_inc_ref(v_line_795_);
v_headers_796_ = lean_ctor_get(v_line_795_, 1);
lean_inc_ref(v_headers_796_);
v_val_797_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_836_ == 0)
{
v___x_799_ = v___x_793_;
v_isShared_800_ = v_isSharedCheck_836_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_val_797_);
lean_dec(v___x_793_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_836_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v_extensions_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_834_; 
v_extensions_801_ = lean_ctor_get(v_builder_787_, 1);
v_isSharedCheck_834_ = !lean_is_exclusive(v_builder_787_);
if (v_isSharedCheck_834_ == 0)
{
lean_object* v_unused_835_; 
v_unused_835_ = lean_ctor_get(v_builder_787_, 0);
lean_dec(v_unused_835_);
v___x_803_ = v_builder_787_;
v_isShared_804_ = v_isSharedCheck_834_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_extensions_801_);
lean_dec(v_builder_787_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_834_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v_status_805_; uint8_t v_version_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_832_; 
v_status_805_ = lean_ctor_get(v_line_795_, 0);
v_version_806_ = lean_ctor_get_uint8(v_line_795_, sizeof(void*)*2);
v_isSharedCheck_832_ = !lean_is_exclusive(v_line_795_);
if (v_isSharedCheck_832_ == 0)
{
lean_object* v_unused_833_; 
v_unused_833_ = lean_ctor_get(v_line_795_, 1);
lean_dec(v_unused_833_);
v___x_808_ = v_line_795_;
v_isShared_809_ = v_isSharedCheck_832_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_status_805_);
lean_dec(v_line_795_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_832_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v_entries_810_; lean_object* v_indexes_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_831_; 
v_entries_810_ = lean_ctor_get(v_headers_796_, 0);
v_indexes_811_ = lean_ctor_get(v_headers_796_, 1);
v_isSharedCheck_831_ = !lean_is_exclusive(v_headers_796_);
if (v_isSharedCheck_831_ == 0)
{
v___x_813_ = v_headers_796_;
v_isShared_814_ = v_isSharedCheck_831_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_indexes_811_);
lean_inc(v_entries_810_);
lean_dec(v_headers_796_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_831_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v_i_815_; lean_object* v___x_816_; lean_object* v_entries_817_; lean_object* v_indexes_818_; lean_object* v___x_820_; 
v_i_815_ = lean_array_get_size(v_entries_810_);
lean_inc(v_val_792_);
v___x_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_816_, 0, v_val_792_);
lean_ctor_set(v___x_816_, 1, v_val_797_);
v_entries_817_ = lean_array_push(v_entries_810_, v___x_816_);
v_indexes_818_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Std_Http_Response_Builder_header_spec__0(v_i_815_, v_indexes_811_, v_val_792_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 1, v_indexes_818_);
lean_ctor_set(v___x_813_, 0, v_entries_817_);
v___x_820_ = v___x_813_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_entries_817_);
lean_ctor_set(v_reuseFailAlloc_830_, 1, v_indexes_818_);
v___x_820_ = v_reuseFailAlloc_830_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
lean_object* v___x_822_; 
if (v_isShared_809_ == 0)
{
lean_ctor_set(v___x_808_, 1, v___x_820_);
v___x_822_ = v___x_808_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_status_805_);
lean_ctor_set(v_reuseFailAlloc_829_, 1, v___x_820_);
lean_ctor_set_uint8(v_reuseFailAlloc_829_, sizeof(void*)*2, v_version_806_);
v___x_822_ = v_reuseFailAlloc_829_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
lean_object* v___x_824_; 
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 0, v___x_822_);
v___x_824_ = v___x_803_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v___x_822_);
lean_ctor_set(v_reuseFailAlloc_828_, 1, v_extensions_801_);
v___x_824_ = v_reuseFailAlloc_828_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
lean_object* v___x_826_; 
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v___x_824_);
v___x_826_ = v___x_799_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
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
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_extension___redArg(lean_object* v_builder_838_, lean_object* v_inst_839_, lean_object* v_data_840_){
_start:
{
lean_object* v_line_841_; lean_object* v_extensions_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_853_; 
v_line_841_ = lean_ctor_get(v_builder_838_, 0);
v_extensions_842_ = lean_ctor_get(v_builder_838_, 1);
v_isSharedCheck_853_ = !lean_is_exclusive(v_builder_838_);
if (v_isSharedCheck_853_ == 0)
{
v___x_844_ = v_builder_838_;
v_isShared_845_ = v_isSharedCheck_853_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_extensions_842_);
lean_inc(v_line_841_);
lean_dec(v_builder_838_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_853_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v_dyn_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_851_; 
v_dyn_846_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_839_, v_data_840_);
v___x_847_ = ((lean_object*)(l_Std_Http_Response_Builder_extension___redArg___closed__0));
v___x_848_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_dyn_846_);
v___x_849_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_847_, v___x_848_, v_dyn_846_, v_extensions_842_);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 1, v___x_849_);
v___x_851_ = v___x_844_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_line_841_);
lean_ctor_set(v_reuseFailAlloc_852_, 1, v___x_849_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_extension___redArg___boxed(lean_object* v_builder_854_, lean_object* v_inst_855_, lean_object* v_data_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Std_Http_Response_Builder_extension___redArg(v_builder_854_, v_inst_855_, v_data_856_);
lean_dec(v_data_856_);
lean_dec(v_inst_855_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_extension(lean_object* v_00_u03b1_858_, lean_object* v_builder_859_, lean_object* v_inst_860_, lean_object* v_data_861_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = l_Std_Http_Response_Builder_extension___redArg(v_builder_859_, v_inst_860_, v_data_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_extension___boxed(lean_object* v_00_u03b1_863_, lean_object* v_builder_864_, lean_object* v_inst_865_, lean_object* v_data_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_Std_Http_Response_Builder_extension(v_00_u03b1_863_, v_builder_864_, v_inst_865_, v_data_866_);
lean_dec(v_data_866_);
lean_dec(v_inst_865_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_body___redArg(lean_object* v_builder_868_, lean_object* v_body_869_){
_start:
{
lean_object* v_line_870_; lean_object* v_extensions_871_; lean_object* v___x_872_; 
v_line_870_ = lean_ctor_get(v_builder_868_, 0);
v_extensions_871_ = lean_ctor_get(v_builder_868_, 1);
lean_inc(v_extensions_871_);
lean_inc_ref(v_line_870_);
v___x_872_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_872_, 0, v_line_870_);
lean_ctor_set(v___x_872_, 1, v_body_869_);
lean_ctor_set(v___x_872_, 2, v_extensions_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_body___redArg___boxed(lean_object* v_builder_873_, lean_object* v_body_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Std_Http_Response_Builder_body___redArg(v_builder_873_, v_body_874_);
lean_dec_ref(v_builder_873_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_body(lean_object* v_t_876_, lean_object* v_builder_877_, lean_object* v_body_878_){
_start:
{
lean_object* v___x_879_; 
v___x_879_ = l_Std_Http_Response_Builder_body___redArg(v_builder_877_, v_body_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_body___boxed(lean_object* v_t_880_, lean_object* v_builder_881_, lean_object* v_body_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Std_Http_Response_Builder_body(v_t_880_, v_builder_881_, v_body_882_);
lean_dec_ref(v_builder_881_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_build___redArg(lean_object* v_inst_884_, lean_object* v_builder_885_){
_start:
{
lean_object* v_line_886_; lean_object* v_extensions_887_; lean_object* v___x_888_; 
v_line_886_ = lean_ctor_get(v_builder_885_, 0);
v_extensions_887_ = lean_ctor_get(v_builder_885_, 1);
lean_inc(v_extensions_887_);
lean_inc_ref(v_line_886_);
v___x_888_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_888_, 0, v_line_886_);
lean_ctor_set(v___x_888_, 1, v_inst_884_);
lean_ctor_set(v___x_888_, 2, v_extensions_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_build___redArg___boxed(lean_object* v_inst_889_, lean_object* v_builder_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Std_Http_Response_Builder_build___redArg(v_inst_889_, v_builder_890_);
lean_dec_ref(v_builder_890_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_build(lean_object* v_t_892_, lean_object* v_inst_893_, lean_object* v_builder_894_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = l_Std_Http_Response_Builder_build___redArg(v_inst_893_, v_builder_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_build___boxed(lean_object* v_t_896_, lean_object* v_inst_897_, lean_object* v_builder_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_Std_Http_Response_Builder_build(v_t_896_, v_inst_897_, v_builder_898_);
lean_dec_ref(v_builder_898_);
return v_res_899_;
}
}
static lean_object* _init_l_Std_Http_Response_ok___closed__0(void){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_900_ = lean_box(4);
v___x_901_ = l_Std_Http_Response_Builder_new;
v___x_902_ = l_Std_Http_Response_Builder_status(v___x_901_, v___x_900_);
return v___x_902_;
}
}
static lean_object* _init_l_Std_Http_Response_ok(void){
_start:
{
lean_object* v___x_903_; 
v___x_903_ = lean_obj_once(&l_Std_Http_Response_ok___closed__0, &l_Std_Http_Response_ok___closed__0_once, _init_l_Std_Http_Response_ok___closed__0);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_withStatus(lean_object* v_status_904_){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = l_Std_Http_Response_Builder_new;
v___x_906_ = l_Std_Http_Response_Builder_status(v___x_905_, v_status_904_);
return v___x_906_;
}
}
static lean_object* _init_l_Std_Http_Response_notFound___closed__0(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_907_ = lean_box(27);
v___x_908_ = l_Std_Http_Response_Builder_new;
v___x_909_ = l_Std_Http_Response_Builder_status(v___x_908_, v___x_907_);
return v___x_909_;
}
}
static lean_object* _init_l_Std_Http_Response_notFound(void){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = lean_obj_once(&l_Std_Http_Response_notFound___closed__0, &l_Std_Http_Response_notFound___closed__0_once, _init_l_Std_Http_Response_notFound___closed__0);
return v___x_910_;
}
}
static lean_object* _init_l_Std_Http_Response_internalServerError___closed__0(void){
_start:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_911_ = lean_box(52);
v___x_912_ = l_Std_Http_Response_Builder_new;
v___x_913_ = l_Std_Http_Response_Builder_status(v___x_912_, v___x_911_);
return v___x_913_;
}
}
static lean_object* _init_l_Std_Http_Response_internalServerError(void){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = lean_obj_once(&l_Std_Http_Response_internalServerError___closed__0, &l_Std_Http_Response_internalServerError___closed__0_once, _init_l_Std_Http_Response_internalServerError___closed__0);
return v___x_914_;
}
}
static lean_object* _init_l_Std_Http_Response_badRequest___closed__0(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_915_ = lean_box(23);
v___x_916_ = l_Std_Http_Response_Builder_new;
v___x_917_ = l_Std_Http_Response_Builder_status(v___x_916_, v___x_915_);
return v___x_917_;
}
}
static lean_object* _init_l_Std_Http_Response_badRequest(void){
_start:
{
lean_object* v___x_918_; 
v___x_918_ = lean_obj_once(&l_Std_Http_Response_badRequest___closed__0, &l_Std_Http_Response_badRequest___closed__0_once, _init_l_Std_Http_Response_badRequest___closed__0);
return v___x_918_;
}
}
static lean_object* _init_l_Std_Http_Response_created___closed__0(void){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_919_ = lean_box(5);
v___x_920_ = l_Std_Http_Response_Builder_new;
v___x_921_ = l_Std_Http_Response_Builder_status(v___x_920_, v___x_919_);
return v___x_921_;
}
}
static lean_object* _init_l_Std_Http_Response_created(void){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = lean_obj_once(&l_Std_Http_Response_created___closed__0, &l_Std_Http_Response_created___closed__0_once, _init_l_Std_Http_Response_created___closed__0);
return v___x_922_;
}
}
static lean_object* _init_l_Std_Http_Response_accepted___closed__0(void){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_923_ = lean_box(6);
v___x_924_ = l_Std_Http_Response_Builder_new;
v___x_925_ = l_Std_Http_Response_Builder_status(v___x_924_, v___x_923_);
return v___x_925_;
}
}
static lean_object* _init_l_Std_Http_Response_accepted(void){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = lean_obj_once(&l_Std_Http_Response_accepted___closed__0, &l_Std_Http_Response_accepted___closed__0_once, _init_l_Std_Http_Response_accepted___closed__0);
return v___x_926_;
}
}
static lean_object* _init_l_Std_Http_Response_unauthorized___closed__0(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_927_ = lean_box(24);
v___x_928_ = l_Std_Http_Response_Builder_new;
v___x_929_ = l_Std_Http_Response_Builder_status(v___x_928_, v___x_927_);
return v___x_929_;
}
}
static lean_object* _init_l_Std_Http_Response_unauthorized(void){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = lean_obj_once(&l_Std_Http_Response_unauthorized___closed__0, &l_Std_Http_Response_unauthorized___closed__0_once, _init_l_Std_Http_Response_unauthorized___closed__0);
return v___x_930_;
}
}
static lean_object* _init_l_Std_Http_Response_forbidden___closed__0(void){
_start:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_931_ = lean_box(26);
v___x_932_ = l_Std_Http_Response_Builder_new;
v___x_933_ = l_Std_Http_Response_Builder_status(v___x_932_, v___x_931_);
return v___x_933_;
}
}
static lean_object* _init_l_Std_Http_Response_forbidden(void){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = lean_obj_once(&l_Std_Http_Response_forbidden___closed__0, &l_Std_Http_Response_forbidden___closed__0_once, _init_l_Std_Http_Response_forbidden___closed__0);
return v___x_934_;
}
}
static lean_object* _init_l_Std_Http_Response_conflict___closed__0(void){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_935_ = lean_box(32);
v___x_936_ = l_Std_Http_Response_Builder_new;
v___x_937_ = l_Std_Http_Response_Builder_status(v___x_936_, v___x_935_);
return v___x_937_;
}
}
static lean_object* _init_l_Std_Http_Response_conflict(void){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = lean_obj_once(&l_Std_Http_Response_conflict___closed__0, &l_Std_Http_Response_conflict___closed__0_once, _init_l_Std_Http_Response_conflict___closed__0);
return v___x_938_;
}
}
static lean_object* _init_l_Std_Http_Response_serviceUnavailable___closed__0(void){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_939_ = lean_box(55);
v___x_940_ = l_Std_Http_Response_Builder_new;
v___x_941_ = l_Std_Http_Response_Builder_status(v___x_940_, v___x_939_);
return v___x_941_;
}
}
static lean_object* _init_l_Std_Http_Response_serviceUnavailable(void){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = lean_obj_once(&l_Std_Http_Response_serviceUnavailable___closed__0, &l_Std_Http_Response_serviceUnavailable___closed__0_once, _init_l_Std_Http_Response_serviceUnavailable___closed__0);
return v___x_942_;
}
}
lean_object* runtime_initialize_Std_Http_Data_Extensions(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Status(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Version(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Headers(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Response(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Http_Data_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Status(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_Response_instInhabitedHead_default = _init_l_Std_Http_Response_instInhabitedHead_default();
lean_mark_persistent(l_Std_Http_Response_instInhabitedHead_default);
l_Std_Http_Response_instInhabitedHead = _init_l_Std_Http_Response_instInhabitedHead();
lean_mark_persistent(l_Std_Http_Response_instInhabitedHead);
l_Std_Http_Response_instToStringHead___lam__1___boxed__const__1 = _init_l_Std_Http_Response_instToStringHead___lam__1___boxed__const__1();
lean_mark_persistent(l_Std_Http_Response_instToStringHead___lam__1___boxed__const__1);
l_Std_Http_Response_new = _init_l_Std_Http_Response_new();
lean_mark_persistent(l_Std_Http_Response_new);
l_Std_Http_Response_Builder_new = _init_l_Std_Http_Response_Builder_new();
lean_mark_persistent(l_Std_Http_Response_Builder_new);
l_Std_Http_Response_ok = _init_l_Std_Http_Response_ok();
lean_mark_persistent(l_Std_Http_Response_ok);
l_Std_Http_Response_notFound = _init_l_Std_Http_Response_notFound();
lean_mark_persistent(l_Std_Http_Response_notFound);
l_Std_Http_Response_internalServerError = _init_l_Std_Http_Response_internalServerError();
lean_mark_persistent(l_Std_Http_Response_internalServerError);
l_Std_Http_Response_badRequest = _init_l_Std_Http_Response_badRequest();
lean_mark_persistent(l_Std_Http_Response_badRequest);
l_Std_Http_Response_created = _init_l_Std_Http_Response_created();
lean_mark_persistent(l_Std_Http_Response_created);
l_Std_Http_Response_accepted = _init_l_Std_Http_Response_accepted();
lean_mark_persistent(l_Std_Http_Response_accepted);
l_Std_Http_Response_unauthorized = _init_l_Std_Http_Response_unauthorized();
lean_mark_persistent(l_Std_Http_Response_unauthorized);
l_Std_Http_Response_forbidden = _init_l_Std_Http_Response_forbidden();
lean_mark_persistent(l_Std_Http_Response_forbidden);
l_Std_Http_Response_conflict = _init_l_Std_Http_Response_conflict();
lean_mark_persistent(l_Std_Http_Response_conflict);
l_Std_Http_Response_serviceUnavailable = _init_l_Std_Http_Response_serviceUnavailable();
lean_mark_persistent(l_Std_Http_Response_serviceUnavailable);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Response(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Data_Extensions(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Status(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Version(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Headers(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Response(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Data_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Status(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Headers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Response(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Response(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Response(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Std.Http.Protocol.H1.Redirect
// Imports: public import Std.Http.Data.Request public import Std.Http.Data.Status public import Std.Http.Data.URI
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
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Http_URI_instReprOrigin_repr___redArg(lean_object*);
lean_object* l_Std_Http_instReprRequestTarget_repr(lean_object*, lean_object*);
lean_object* l_Std_Http_instReprMethod_repr(uint8_t, lean_object*);
lean_object* l_Std_Http_instReprHeaders_repr___redArg(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_Http_Header_Name_ofString_x3f(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
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
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_host;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_Origin_hostHeader(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_proxyAuthorization;
extern lean_object* l_Std_Http_Header_Name_lastModified;
extern lean_object* l_Std_Http_Header_Name_contentLocation;
extern lean_object* l_Std_Http_Header_Name_contentLanguage;
extern lean_object* l_Std_Http_Header_Name_contentEncoding;
extern lean_object* l_Std_Http_Header_Name_contentLength;
extern lean_object* l_Std_Http_Header_Name_contentType;
uint16_t l_Std_Http_URI_Scheme_defaultPort(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_connection;
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Std_Http_Header_Connection_parse(lean_object*);
lean_object* l_Std_Http_URI_Parser_parseURIReference(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
extern lean_object* l_Std_Http_Header_Name_ifModifiedSince;
extern lean_object* l_Std_Http_Header_Name_ifNoneMatch;
lean_object* l_Std_Http_RequestTarget_pathOrRoot(lean_object*);
lean_object* l_Std_Http_URI_Path_normalize(lean_object*);
uint8_t l_Std_Http_URI_Path_isEmpty(lean_object*);
lean_object* l_Std_Http_URI_Path_parent(lean_object*);
lean_object* l_Std_Http_URI_Path_join(lean_object*, lean_object*);
uint8_t l_Std_Http_instBEqMethod_beq(uint8_t, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_transferEncoding;
extern lean_object* l_Std_Http_Header_Name_keepAlive;
extern lean_object* l_Std_Http_Header_Name_referer;
extern lean_object* l_Std_Http_Header_Name_cookie;
extern lean_object* l_Std_Http_Header_Name_authorization;
uint8_t l_Std_Http_URI_instBEqOrigin_beq(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_location;
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(lean_object*, lean_object*);
uint8_t l_Std_Http_instBEqVersion_beq(uint8_t, uint8_t);
uint8_t l_Std_Http_instBEqStatus_beq(lean_object*, lean_object*);
uint8_t l_Std_Http_Method_isSafe(uint8_t);
uint16_t l_Std_Http_Status_toCode(lean_object*);
uint8_t lean_uint16_dec_le(uint16_t, uint16_t);
uint8_t lean_uint16_dec_lt(uint16_t, uint16_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_empty_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_empty_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_empty_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_empty_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_replay_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_replay_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_replay_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_replay_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_RedirectBodyAction_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_instDecidableEqRedirectBodyAction(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instDecidableEqRedirectBodyAction___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Std.Http.Protocol.H1.RedirectBodyAction.empty"};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__0_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__0_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__1_value;
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Std.Http.Protocol.H1.RedirectBodyAction.replay"};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__2 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__2_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__2_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__3 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__3_value;
static lean_once_cell_t l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__4;
static lean_once_cell_t l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__5;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Protocol_H1_instReprRedirectBodyAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectBodyAction___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectBodyAction___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_instInhabitedRedirectBodyAction_default;
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_instInhabitedRedirectBodyAction;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Protocol_H1_instReprRedirectPlan_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "origin"};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__3_value),((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__11_value;
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "method"};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__12 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__12_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__13 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__13_value;
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "headers"};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__14 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__14_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__14_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__15 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__15_value;
static lean_once_cell_t l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__16;
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "bodyAction"};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__17 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__17_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__17_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__18 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__18_value;
static lean_once_cell_t l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__19;
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "isCrossOrigin"};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__20 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__20_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__20_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__21 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__21_value;
static lean_once_cell_t l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__22;
static const lean_string_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__23 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__23_value;
static lean_once_cell_t l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__24;
static lean_once_cell_t l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__25;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__26 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__26_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__23_value)}};
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__27 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__27_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Protocol_H1_instReprRedirectPlan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan = (const lean_object*)&l_Std_Http_Protocol_H1_instReprRedirectPlan___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_done_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_follow_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_follow_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instInhabitedRedirectOutcome_default;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instInhabitedRedirectOutcome;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resolveOrigin(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_chooseMethod(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_chooseMethod___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders;
static const lean_array_object l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__1;
static lean_once_cell_t l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__2;
static lean_once_cell_t l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg();
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___closed__0;
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_rewriteHostHeader(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_requestTargetQuery_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_requestTargetQuery_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_rewriteTarget(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_rewriteTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Protocol_H1_decideRedirect___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l_Std_Http_Protocol_H1_decideRedirect___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_decideRedirect___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_decideRedirect___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_decideRedirect___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Protocol_H1_decideRedirect___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_decideRedirect___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_decideRedirect___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Protocol_H1_decideRedirect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "https"};
static const lean_object* l_Std_Http_Protocol_H1_decideRedirect___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_decideRedirect___closed__0_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_decideRedirect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*9 + 0, .m_other = 9, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(253) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(256) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(128) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(100) << 1) | 1))}};
static const lean_object* l_Std_Http_Protocol_H1_decideRedirect___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_decideRedirect___closed__1_value;
static const lean_closure_object l_Std_Http_Protocol_H1_decideRedirect___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Protocol_H1_decideRedirect___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_decideRedirect___closed__1_value)} };
static const lean_object* l_Std_Http_Protocol_H1_decideRedirect___closed__2 = (const lean_object*)&l_Std_Http_Protocol_H1_decideRedirect___closed__2_value;
static const lean_string_object l_Std_Http_Protocol_H1_decideRedirect___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
static const lean_object* l_Std_Http_Protocol_H1_decideRedirect___closed__3 = (const lean_object*)&l_Std_Http_Protocol_H1_decideRedirect___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_decideRedirect(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_decideRedirect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorIdx(uint8_t v_x_1_){
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
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_boxed_5_; lean_object* v_res_6_; 
v_x_boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Std_Http_Protocol_H1_RedirectBodyAction_ctorIdx(v_x_boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Http_Protocol_H1_RedirectBodyAction_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Std_Http_Protocol_H1_RedirectBodyAction_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_empty_elim___redArg(lean_object* v_empty_22_){
_start:
{
lean_inc(v_empty_22_);
return v_empty_22_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_empty_elim___redArg___boxed(lean_object* v_empty_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Std_Http_Protocol_H1_RedirectBodyAction_empty_elim___redArg(v_empty_23_);
lean_dec(v_empty_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_empty_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_empty_28_){
_start:
{
lean_inc(v_empty_28_);
return v_empty_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_empty_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_empty_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Std_Http_Protocol_H1_RedirectBodyAction_empty_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_empty_32_);
lean_dec(v_empty_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_replay_elim___redArg(lean_object* v_replay_35_){
_start:
{
lean_inc(v_replay_35_);
return v_replay_35_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_replay_elim___redArg___boxed(lean_object* v_replay_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_Http_Protocol_H1_RedirectBodyAction_replay_elim___redArg(v_replay_36_);
lean_dec(v_replay_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_replay_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_replay_41_){
_start:
{
lean_inc(v_replay_41_);
return v_replay_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_replay_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_replay_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Std_Http_Protocol_H1_RedirectBodyAction_replay_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_replay_45_);
lean_dec(v_replay_45_);
return v_res_47_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_RedirectBodyAction_ofNat(lean_object* v_n_48_){
_start:
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = lean_nat_dec_le(v_n_48_, v___x_49_);
if (v___x_50_ == 0)
{
uint8_t v___x_51_; 
v___x_51_ = 1;
return v___x_51_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectBodyAction_ofNat___boxed(lean_object* v_n_53_){
_start:
{
uint8_t v_res_54_; lean_object* v_r_55_; 
v_res_54_ = l_Std_Http_Protocol_H1_RedirectBodyAction_ofNat(v_n_53_);
lean_dec(v_n_53_);
v_r_55_ = lean_box(v_res_54_);
return v_r_55_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Protocol_H1_instDecidableEqRedirectBodyAction(uint8_t v_x_56_, uint8_t v_y_57_){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_58_ = l_Std_Http_Protocol_H1_RedirectBodyAction_ctorIdx(v_x_56_);
v___x_59_ = l_Std_Http_Protocol_H1_RedirectBodyAction_ctorIdx(v_y_57_);
v___x_60_ = lean_nat_dec_eq(v___x_58_, v___x_59_);
lean_dec(v___x_59_);
lean_dec(v___x_58_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instDecidableEqRedirectBodyAction___boxed(lean_object* v_x_61_, lean_object* v_y_62_){
_start:
{
uint8_t v_x_20__boxed_63_; uint8_t v_y_21__boxed_64_; uint8_t v_res_65_; lean_object* v_r_66_; 
v_x_20__boxed_63_ = lean_unbox(v_x_61_);
v_y_21__boxed_64_ = lean_unbox(v_y_62_);
v_res_65_ = l_Std_Http_Protocol_H1_instDecidableEqRedirectBodyAction(v_x_20__boxed_63_, v_y_21__boxed_64_);
v_r_66_ = lean_box(v_res_65_);
return v_r_66_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__4(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = lean_unsigned_to_nat(2u);
v___x_74_ = lean_nat_to_int(v___x_73_);
return v___x_74_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__5(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_unsigned_to_nat(1u);
v___x_76_ = lean_nat_to_int(v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr(uint8_t v_x_77_, lean_object* v_prec_78_){
_start:
{
lean_object* v___y_80_; lean_object* v___y_87_; 
if (v_x_77_ == 0)
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = lean_unsigned_to_nat(1024u);
v___x_94_ = lean_nat_dec_le(v___x_93_, v_prec_78_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; 
v___x_95_ = lean_obj_once(&l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__4, &l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__4_once, _init_l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__4);
v___y_80_ = v___x_95_;
goto v___jp_79_;
}
else
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__5, &l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__5_once, _init_l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__5);
v___y_80_ = v___x_96_;
goto v___jp_79_;
}
}
else
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = lean_unsigned_to_nat(1024u);
v___x_98_ = lean_nat_dec_le(v___x_97_, v_prec_78_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; 
v___x_99_ = lean_obj_once(&l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__4, &l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__4_once, _init_l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__4);
v___y_87_ = v___x_99_;
goto v___jp_86_;
}
else
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__5, &l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__5_once, _init_l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__5);
v___y_87_ = v___x_100_;
goto v___jp_86_;
}
}
v___jp_79_:
{
lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_81_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__1));
lean_inc(v___y_80_);
v___x_82_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_82_, 0, v___y_80_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = 0;
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_83_);
v___x_85_ = l_Repr_addAppParen(v___x_84_, v_prec_78_);
return v___x_85_;
}
v___jp_86_:
{
lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_88_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___closed__3));
lean_inc(v___y_87_);
v___x_89_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_89_, 0, v___y_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = 0;
v___x_91_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_91_, 0, v___x_89_);
lean_ctor_set_uint8(v___x_91_, sizeof(void*)*1, v___x_90_);
v___x_92_ = l_Repr_addAppParen(v___x_91_, v_prec_78_);
return v___x_92_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr___boxed(lean_object* v_x_101_, lean_object* v_prec_102_){
_start:
{
uint8_t v_x_117__boxed_103_; lean_object* v_res_104_; 
v_x_117__boxed_103_ = lean_unbox(v_x_101_);
v_res_104_ = l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr(v_x_117__boxed_103_, v_prec_102_);
lean_dec(v_prec_102_);
return v_res_104_;
}
}
static uint8_t _init_l_Std_Http_Protocol_H1_instInhabitedRedirectBodyAction_default(void){
_start:
{
uint8_t v___x_107_; 
v___x_107_ = 0;
return v___x_107_;
}
}
static uint8_t _init_l_Std_Http_Protocol_H1_instInhabitedRedirectBodyAction(void){
_start:
{
uint8_t v___x_108_; 
v___x_108_ = 0;
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Protocol_H1_instReprRedirectPlan_repr_spec__0(lean_object* v_a_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = lean_nat_to_int(v_a_109_);
return v___x_110_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = lean_unsigned_to_nat(10u);
v___x_125_ = lean_nat_to_int(v___x_124_);
return v___x_125_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = lean_unsigned_to_nat(11u);
v___x_139_ = lean_nat_to_int(v___x_138_);
return v___x_139_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_unsigned_to_nat(14u);
v___x_144_ = lean_nat_to_int(v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = lean_unsigned_to_nat(17u);
v___x_149_ = lean_nat_to_int(v___x_148_);
return v___x_149_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__0));
v___x_152_ = lean_string_length(v___x_151_);
return v___x_152_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__25(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_obj_once(&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__24, &l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__24_once, _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__24);
v___x_154_ = lean_nat_to_int(v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg(lean_object* v_x_159_){
_start:
{
lean_object* v_origin_160_; lean_object* v_target_161_; uint8_t v_method_162_; lean_object* v_headers_163_; uint8_t v_bodyAction_164_; uint8_t v_isCrossOrigin_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v_origin_160_ = lean_ctor_get(v_x_159_, 0);
lean_inc_ref(v_origin_160_);
v_target_161_ = lean_ctor_get(v_x_159_, 1);
lean_inc(v_target_161_);
v_method_162_ = lean_ctor_get_uint8(v_x_159_, sizeof(void*)*3);
v_headers_163_ = lean_ctor_get(v_x_159_, 2);
lean_inc_ref(v_headers_163_);
v_bodyAction_164_ = lean_ctor_get_uint8(v_x_159_, sizeof(void*)*3 + 1);
v_isCrossOrigin_165_ = lean_ctor_get_uint8(v_x_159_, sizeof(void*)*3 + 2);
lean_dec_ref(v_x_159_);
v___x_166_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__5));
v___x_167_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__6));
v___x_168_ = lean_obj_once(&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__7, &l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__7_once, _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__7);
v___x_169_ = lean_unsigned_to_nat(0u);
v___x_170_ = l_Std_Http_URI_instReprOrigin_repr___redArg(v_origin_160_);
v___x_171_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_168_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = 0;
v___x_173_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_173_, 0, v___x_171_);
lean_ctor_set_uint8(v___x_173_, sizeof(void*)*1, v___x_172_);
v___x_174_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_167_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
v___x_175_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__9));
v___x_176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = lean_box(1);
v___x_178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v___x_179_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__11));
v___x_180_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_178_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
v___x_181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set(v___x_181_, 1, v___x_166_);
v___x_182_ = l_Std_Http_instReprRequestTarget_repr(v_target_161_, v___x_169_);
v___x_183_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_168_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_184_, 0, v___x_183_);
lean_ctor_set_uint8(v___x_184_, sizeof(void*)*1, v___x_172_);
v___x_185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_181_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
v___x_186_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
lean_ctor_set(v___x_186_, 1, v___x_175_);
v___x_187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v___x_177_);
v___x_188_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__13));
v___x_189_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_187_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
v___x_190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
lean_ctor_set(v___x_190_, 1, v___x_166_);
v___x_191_ = l_Std_Http_instReprMethod_repr(v_method_162_, v___x_169_);
v___x_192_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_168_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set_uint8(v___x_193_, sizeof(void*)*1, v___x_172_);
v___x_194_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_190_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
lean_ctor_set(v___x_195_, 1, v___x_175_);
v___x_196_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v___x_177_);
v___x_197_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__15));
v___x_198_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
lean_ctor_set(v___x_199_, 1, v___x_166_);
v___x_200_ = lean_obj_once(&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__16, &l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__16_once, _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__16);
v___x_201_ = l_Std_Http_instReprHeaders_repr___redArg(v_headers_163_);
v___x_202_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
v___x_203_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set_uint8(v___x_203_, sizeof(void*)*1, v___x_172_);
v___x_204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_199_);
lean_ctor_set(v___x_204_, 1, v___x_203_);
v___x_205_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
lean_ctor_set(v___x_205_, 1, v___x_175_);
v___x_206_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
lean_ctor_set(v___x_206_, 1, v___x_177_);
v___x_207_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__18));
v___x_208_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_206_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
v___x_209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
lean_ctor_set(v___x_209_, 1, v___x_166_);
v___x_210_ = lean_obj_once(&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__19, &l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__19_once, _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__19);
v___x_211_ = l_Std_Http_Protocol_H1_instReprRedirectBodyAction_repr(v_bodyAction_164_, v___x_169_);
v___x_212_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_210_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_213_, 0, v___x_212_);
lean_ctor_set_uint8(v___x_213_, sizeof(void*)*1, v___x_172_);
v___x_214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_209_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
lean_ctor_set(v___x_215_, 1, v___x_175_);
v___x_216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v___x_177_);
v___x_217_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__21));
v___x_218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
lean_ctor_set(v___x_219_, 1, v___x_166_);
v___x_220_ = lean_obj_once(&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__22, &l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__22_once, _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__22);
v___x_221_ = l_Bool_repr___redArg(v_isCrossOrigin_165_);
v___x_222_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_220_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set_uint8(v___x_223_, sizeof(void*)*1, v___x_172_);
v___x_224_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_219_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = lean_obj_once(&l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__25, &l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__25_once, _init_l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__25);
v___x_226_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__26));
v___x_227_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v___x_224_);
v___x_228_ = ((lean_object*)(l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg___closed__27));
v___x_229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_227_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_225_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_231_, 0, v___x_230_);
lean_ctor_set_uint8(v___x_231_, sizeof(void*)*1, v___x_172_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr(lean_object* v_x_232_, lean_object* v_prec_233_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___redArg(v_x_232_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_instReprRedirectPlan_repr___boxed(lean_object* v_x_235_, lean_object* v_prec_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Std_Http_Protocol_H1_instReprRedirectPlan_repr(v_x_235_, v_prec_236_);
lean_dec(v_prec_236_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_ctorIdx(lean_object* v_x_240_){
_start:
{
if (lean_obj_tag(v_x_240_) == 0)
{
lean_object* v___x_241_; 
v___x_241_ = lean_unsigned_to_nat(0u);
return v___x_241_;
}
else
{
lean_object* v___x_242_; 
v___x_242_ = lean_unsigned_to_nat(1u);
return v___x_242_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_ctorIdx___boxed(lean_object* v_x_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Std_Http_Protocol_H1_RedirectOutcome_ctorIdx(v_x_243_);
lean_dec(v_x_243_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim___redArg(lean_object* v_t_245_, lean_object* v_k_246_){
_start:
{
if (lean_obj_tag(v_t_245_) == 0)
{
return v_k_246_;
}
else
{
lean_object* v_plan_247_; lean_object* v___x_248_; 
v_plan_247_ = lean_ctor_get(v_t_245_, 0);
lean_inc_ref(v_plan_247_);
lean_dec_ref_known(v_t_245_, 1);
v___x_248_ = lean_apply_1(v_k_246_, v_plan_247_);
return v___x_248_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim(lean_object* v_motive_249_, lean_object* v_ctorIdx_250_, lean_object* v_t_251_, lean_object* v_h_252_, lean_object* v_k_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim___redArg(v_t_251_, v_k_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim___boxed(lean_object* v_motive_255_, lean_object* v_ctorIdx_256_, lean_object* v_t_257_, lean_object* v_h_258_, lean_object* v_k_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim(v_motive_255_, v_ctorIdx_256_, v_t_257_, v_h_258_, v_k_259_);
lean_dec(v_ctorIdx_256_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_done_elim___redArg(lean_object* v_t_261_, lean_object* v_done_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim___redArg(v_t_261_, v_done_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_done_elim(lean_object* v_motive_264_, lean_object* v_t_265_, lean_object* v_h_266_, lean_object* v_done_267_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim___redArg(v_t_265_, v_done_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_follow_elim___redArg(lean_object* v_t_269_, lean_object* v_follow_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim___redArg(v_t_269_, v_follow_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_RedirectOutcome_follow_elim(lean_object* v_motive_272_, lean_object* v_t_273_, lean_object* v_h_274_, lean_object* v_follow_275_){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = l_Std_Http_Protocol_H1_RedirectOutcome_ctorElim___redArg(v_t_273_, v_follow_275_);
return v___x_276_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instInhabitedRedirectOutcome_default(void){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = lean_box(0);
return v___x_277_;
}
}
static lean_object* _init_l_Std_Http_Protocol_H1_instInhabitedRedirectOutcome(void){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = lean_box(0);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resolveOrigin(lean_object* v_current_279_, lean_object* v_x_280_){
_start:
{
if (lean_obj_tag(v_x_280_) == 0)
{
lean_object* v_uri_281_; lean_object* v_authority_282_; 
lean_dec_ref(v_current_279_);
v_uri_281_ = lean_ctor_get(v_x_280_, 0);
lean_inc_ref(v_uri_281_);
lean_dec_ref_known(v_x_280_, 1);
v_authority_282_ = lean_ctor_get(v_uri_281_, 1);
lean_inc(v_authority_282_);
if (lean_obj_tag(v_authority_282_) == 0)
{
lean_object* v___x_283_; 
lean_dec_ref(v_uri_281_);
v___x_283_ = lean_box(0);
return v___x_283_;
}
else
{
lean_object* v_val_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_299_; 
v_val_284_ = lean_ctor_get(v_authority_282_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v_authority_282_);
if (v_isSharedCheck_299_ == 0)
{
v___x_286_ = v_authority_282_;
v_isShared_287_ = v_isSharedCheck_299_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_val_284_);
lean_dec(v_authority_282_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_299_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v_scheme_288_; lean_object* v_host_289_; lean_object* v_port_290_; uint16_t v___y_292_; 
v_scheme_288_ = lean_ctor_get(v_uri_281_, 0);
lean_inc_ref(v_scheme_288_);
lean_dec_ref(v_uri_281_);
v_host_289_ = lean_ctor_get(v_val_284_, 1);
lean_inc_ref(v_host_289_);
v_port_290_ = lean_ctor_get(v_val_284_, 2);
lean_inc(v_port_290_);
lean_dec(v_val_284_);
if (lean_obj_tag(v_port_290_) == 2)
{
uint16_t v_port_297_; 
v_port_297_ = lean_ctor_get_uint16(v_port_290_, 0);
lean_dec_ref_known(v_port_290_, 0);
v___y_292_ = v_port_297_;
goto v___jp_291_;
}
else
{
uint16_t v___x_298_; 
lean_dec(v_port_290_);
v___x_298_ = l_Std_Http_URI_Scheme_defaultPort(v_scheme_288_);
v___y_292_ = v___x_298_;
goto v___jp_291_;
}
v___jp_291_:
{
lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_293_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_293_, 0, v_scheme_288_);
lean_ctor_set(v___x_293_, 1, v_host_289_);
lean_ctor_set_uint16(v___x_293_, sizeof(void*)*2, v___y_292_);
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_293_);
v___x_295_ = v___x_286_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
}
else
{
lean_object* v_ref_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_332_; 
v_ref_300_ = lean_ctor_get(v_x_280_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v_x_280_);
if (v_isSharedCheck_332_ == 0)
{
v___x_302_ = v_x_280_;
v_isShared_303_ = v_isSharedCheck_332_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_ref_300_);
lean_dec(v_x_280_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_332_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v_authority_304_; 
v_authority_304_ = lean_ctor_get(v_ref_300_, 0);
lean_inc(v_authority_304_);
lean_dec_ref(v_ref_300_);
if (lean_obj_tag(v_authority_304_) == 1)
{
lean_object* v_val_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_328_; 
lean_del_object(v___x_302_);
v_val_305_ = lean_ctor_get(v_authority_304_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v_authority_304_);
if (v_isSharedCheck_328_ == 0)
{
v___x_307_ = v_authority_304_;
v_isShared_308_ = v_isSharedCheck_328_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_val_305_);
lean_dec(v_authority_304_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_328_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v_host_309_; lean_object* v_port_310_; uint16_t v___y_312_; 
v_host_309_ = lean_ctor_get(v_val_305_, 1);
lean_inc_ref(v_host_309_);
v_port_310_ = lean_ctor_get(v_val_305_, 2);
lean_inc(v_port_310_);
lean_dec(v_val_305_);
if (lean_obj_tag(v_port_310_) == 2)
{
uint16_t v_port_325_; 
v_port_325_ = lean_ctor_get_uint16(v_port_310_, 0);
lean_dec_ref_known(v_port_310_, 0);
v___y_312_ = v_port_325_;
goto v___jp_311_;
}
else
{
lean_object* v_scheme_326_; uint16_t v___x_327_; 
lean_dec(v_port_310_);
v_scheme_326_ = lean_ctor_get(v_current_279_, 0);
v___x_327_ = l_Std_Http_URI_Scheme_defaultPort(v_scheme_326_);
v___y_312_ = v___x_327_;
goto v___jp_311_;
}
v___jp_311_:
{
lean_object* v_scheme_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_323_; 
v_scheme_313_ = lean_ctor_get(v_current_279_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v_current_279_);
if (v_isSharedCheck_323_ == 0)
{
lean_object* v_unused_324_; 
v_unused_324_ = lean_ctor_get(v_current_279_, 1);
lean_dec(v_unused_324_);
v___x_315_ = v_current_279_;
v_isShared_316_ = v_isSharedCheck_323_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_scheme_313_);
lean_dec(v_current_279_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_323_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 1, v_host_309_);
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_scheme_313_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v_host_309_);
v___x_318_ = v_reuseFailAlloc_322_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_320_; 
lean_ctor_set_uint16(v___x_318_, sizeof(void*)*2, v___y_312_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 0, v___x_318_);
v___x_320_ = v___x_307_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
}
}
else
{
lean_object* v___x_330_; 
lean_dec(v_authority_304_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 0, v_current_279_);
v___x_330_ = v___x_302_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_current_279_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_chooseMethod(uint8_t v_originalMethod_333_, uint8_t v_responseVersion_334_, lean_object* v_x_335_){
_start:
{
uint8_t v___y_337_; 
switch(lean_obj_tag(v_x_335_))
{
case 17:
{
uint8_t v___x_344_; uint8_t v___x_345_; 
v___x_344_ = 9;
v___x_345_ = l_Std_Http_instBEqMethod_beq(v_originalMethod_333_, v___x_344_);
if (v___x_345_ == 0)
{
uint8_t v___x_346_; 
v___x_346_ = 8;
return v___x_346_;
}
else
{
return v___x_344_;
}
}
case 15:
{
goto v___jp_339_;
}
case 16:
{
goto v___jp_339_;
}
default: 
{
return v_originalMethod_333_;
}
}
v___jp_336_:
{
if (v___y_337_ == 0)
{
return v_originalMethod_333_;
}
else
{
uint8_t v___x_338_; 
v___x_338_ = 8;
return v___x_338_;
}
}
v___jp_339_:
{
uint8_t v___x_340_; uint8_t v___x_341_; 
v___x_340_ = 23;
v___x_341_ = l_Std_Http_instBEqMethod_beq(v_originalMethod_333_, v___x_340_);
if (v___x_341_ == 0)
{
v___y_337_ = v___x_341_;
goto v___jp_336_;
}
else
{
uint8_t v___x_342_; uint8_t v___x_343_; 
v___x_342_ = 0;
v___x_343_ = l_Std_Http_instBEqVersion_beq(v_responseVersion_334_, v___x_342_);
if (v___x_343_ == 0)
{
v___y_337_ = v___x_341_;
goto v___jp_336_;
}
else
{
return v_originalMethod_333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_chooseMethod___boxed(lean_object* v_originalMethod_347_, lean_object* v_responseVersion_348_, lean_object* v_x_349_){
_start:
{
uint8_t v_originalMethod_boxed_350_; uint8_t v_responseVersion_boxed_351_; uint8_t v_res_352_; lean_object* v_r_353_; 
v_originalMethod_boxed_350_ = lean_unbox(v_originalMethod_347_);
v_responseVersion_boxed_351_ = lean_unbox(v_responseVersion_348_);
v_res_352_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_chooseMethod(v_originalMethod_boxed_350_, v_responseVersion_boxed_351_, v_x_349_);
lean_dec(v_x_349_);
v_r_353_ = lean_box(v_res_352_);
return v_r_353_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders___closed__0(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_354_ = l_Std_Http_Header_Name_transferEncoding;
v___x_355_ = l_Std_Http_Header_Name_keepAlive;
v___x_356_ = l_Std_Http_Header_Name_connection;
v___x_357_ = lean_unsigned_to_nat(3u);
v___x_358_ = lean_mk_empty_array_with_capacity(v___x_357_);
v___x_359_ = lean_array_push(v___x_358_, v___x_356_);
v___x_360_ = lean_array_push(v___x_359_, v___x_355_);
v___x_361_ = lean_array_push(v___x_360_, v___x_354_);
return v___x_361_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders(void){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders___closed__0, &l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders___closed__0_once, _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders___closed__0);
return v___x_362_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1___redArg(lean_object* v_a_363_, lean_object* v_x_364_){
_start:
{
if (lean_obj_tag(v_x_364_) == 0)
{
uint8_t v___x_365_; 
v___x_365_ = 0;
return v___x_365_;
}
else
{
lean_object* v_key_366_; lean_object* v_tail_367_; uint8_t v___x_368_; 
v_key_366_ = lean_ctor_get(v_x_364_, 0);
v_tail_367_ = lean_ctor_get(v_x_364_, 2);
v___x_368_ = lean_string_dec_eq(v_key_366_, v_a_363_);
if (v___x_368_ == 0)
{
v_x_364_ = v_tail_367_;
goto _start;
}
else
{
return v___x_368_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1___redArg___boxed(lean_object* v_a_370_, lean_object* v_x_371_){
_start:
{
uint8_t v_res_372_; lean_object* v_r_373_; 
v_res_372_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1___redArg(v_a_370_, v_x_371_);
lean_dec(v_x_371_);
lean_dec_ref(v_a_370_);
v_r_373_ = lean_box(v_res_372_);
return v_r_373_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1___redArg(lean_object* v_m_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_buckets_376_; lean_object* v___x_377_; uint64_t v___x_378_; uint64_t v___x_379_; uint64_t v___x_380_; uint64_t v_fold_381_; uint64_t v___x_382_; uint64_t v___x_383_; uint64_t v___x_384_; size_t v___x_385_; size_t v___x_386_; size_t v___x_387_; size_t v___x_388_; size_t v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; 
v_buckets_376_ = lean_ctor_get(v_m_374_, 1);
v___x_377_ = lean_array_get_size(v_buckets_376_);
v___x_378_ = lean_string_hash(v_a_375_);
v___x_379_ = 32ULL;
v___x_380_ = lean_uint64_shift_right(v___x_378_, v___x_379_);
v_fold_381_ = lean_uint64_xor(v___x_378_, v___x_380_);
v___x_382_ = 16ULL;
v___x_383_ = lean_uint64_shift_right(v_fold_381_, v___x_382_);
v___x_384_ = lean_uint64_xor(v_fold_381_, v___x_383_);
v___x_385_ = lean_uint64_to_usize(v___x_384_);
v___x_386_ = lean_usize_of_nat(v___x_377_);
v___x_387_ = ((size_t)1ULL);
v___x_388_ = lean_usize_sub(v___x_386_, v___x_387_);
v___x_389_ = lean_usize_land(v___x_385_, v___x_388_);
v___x_390_ = lean_array_uget_borrowed(v_buckets_376_, v___x_389_);
v___x_391_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1___redArg(v_a_375_, v___x_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1___redArg___boxed(lean_object* v_m_392_, lean_object* v_a_393_){
_start:
{
uint8_t v_res_394_; lean_object* v_r_395_; 
v_res_394_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1___redArg(v_m_392_, v_a_393_);
lean_dec_ref(v_a_393_);
lean_dec_ref(v_m_392_);
v_r_395_ = lean_box(v_res_394_);
return v_r_395_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3___redArg(lean_object* v_a_396_, lean_object* v_x_397_){
_start:
{
lean_object* v_key_398_; lean_object* v_value_399_; lean_object* v_tail_400_; uint8_t v___x_401_; 
v_key_398_ = lean_ctor_get(v_x_397_, 0);
v_value_399_ = lean_ctor_get(v_x_397_, 1);
v_tail_400_ = lean_ctor_get(v_x_397_, 2);
v___x_401_ = lean_string_dec_eq(v_key_398_, v_a_396_);
if (v___x_401_ == 0)
{
v_x_397_ = v_tail_400_;
goto _start;
}
else
{
lean_inc(v_value_399_);
return v_value_399_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3___redArg___boxed(lean_object* v_a_403_, lean_object* v_x_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3___redArg(v_a_403_, v_x_404_);
lean_dec(v_x_404_);
lean_dec_ref(v_a_403_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2___redArg(lean_object* v_m_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_buckets_408_; lean_object* v___x_409_; uint64_t v___x_410_; uint64_t v___x_411_; uint64_t v___x_412_; uint64_t v_fold_413_; uint64_t v___x_414_; uint64_t v___x_415_; uint64_t v___x_416_; size_t v___x_417_; size_t v___x_418_; size_t v___x_419_; size_t v___x_420_; size_t v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v_buckets_408_ = lean_ctor_get(v_m_406_, 1);
v___x_409_ = lean_array_get_size(v_buckets_408_);
v___x_410_ = lean_string_hash(v_a_407_);
v___x_411_ = 32ULL;
v___x_412_ = lean_uint64_shift_right(v___x_410_, v___x_411_);
v_fold_413_ = lean_uint64_xor(v___x_410_, v___x_412_);
v___x_414_ = 16ULL;
v___x_415_ = lean_uint64_shift_right(v_fold_413_, v___x_414_);
v___x_416_ = lean_uint64_xor(v_fold_413_, v___x_415_);
v___x_417_ = lean_uint64_to_usize(v___x_416_);
v___x_418_ = lean_usize_of_nat(v___x_409_);
v___x_419_ = ((size_t)1ULL);
v___x_420_ = lean_usize_sub(v___x_418_, v___x_419_);
v___x_421_ = lean_usize_land(v___x_417_, v___x_420_);
v___x_422_ = lean_array_uget_borrowed(v_buckets_408_, v___x_421_);
v___x_423_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3___redArg(v_a_407_, v___x_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2___redArg___boxed(lean_object* v_m_424_, lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2___redArg(v_m_424_, v_a_425_);
lean_dec_ref(v_a_425_);
lean_dec_ref(v_m_424_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__0(lean_object* v_as_427_, size_t v_i_428_, size_t v_stop_429_, lean_object* v_b_430_){
_start:
{
lean_object* v___y_432_; uint8_t v___x_436_; 
v___x_436_ = lean_usize_dec_eq(v_i_428_, v_stop_429_);
if (v___x_436_ == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_array_uget_borrowed(v_as_427_, v_i_428_);
lean_inc(v___x_437_);
v___x_438_ = l_Std_Http_Header_Name_ofString_x3f(v___x_437_);
if (lean_obj_tag(v___x_438_) == 0)
{
v___y_432_ = v_b_430_;
goto v___jp_431_;
}
else
{
lean_object* v_val_439_; lean_object* v___x_440_; 
v_val_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_val_439_);
lean_dec_ref_known(v___x_438_, 1);
v___x_440_ = lean_array_push(v_b_430_, v_val_439_);
v___y_432_ = v___x_440_;
goto v___jp_431_;
}
}
else
{
return v_b_430_;
}
v___jp_431_:
{
size_t v___x_433_; size_t v___x_434_; 
v___x_433_ = ((size_t)1ULL);
v___x_434_ = lean_usize_add(v_i_428_, v___x_433_);
v_i_428_ = v___x_434_;
v_b_430_ = v___y_432_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__0___boxed(lean_object* v_as_441_, lean_object* v_i_442_, lean_object* v_stop_443_, lean_object* v_b_444_){
_start:
{
size_t v_i_boxed_445_; size_t v_stop_boxed_446_; lean_object* v_res_447_; 
v_i_boxed_445_ = lean_unbox_usize(v_i_442_);
lean_dec(v_i_442_);
v_stop_boxed_446_ = lean_unbox_usize(v_stop_443_);
lean_dec(v_stop_443_);
v_res_447_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__0(v_as_441_, v_i_boxed_445_, v_stop_boxed_446_, v_b_444_);
lean_dec_ref(v_as_441_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__4(lean_object* v_as_448_, size_t v_i_449_, size_t v_stop_450_, lean_object* v_b_451_){
_start:
{
lean_object* v___y_453_; uint8_t v___x_457_; 
v___x_457_ = lean_usize_dec_eq(v_i_449_, v_stop_450_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_array_uget_borrowed(v_as_448_, v_i_449_);
lean_inc(v___x_458_);
v___x_459_ = l_Std_Http_Header_Connection_parse(v___x_458_);
if (lean_obj_tag(v___x_459_) == 0)
{
v___y_453_ = v_b_451_;
goto v___jp_452_;
}
else
{
lean_object* v_val_460_; lean_object* v___x_461_; lean_object* v___x_462_; uint8_t v___x_463_; 
v_val_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_val_460_);
lean_dec_ref_known(v___x_459_, 1);
v___x_461_ = lean_unsigned_to_nat(0u);
v___x_462_ = lean_array_get_size(v_val_460_);
v___x_463_ = lean_nat_dec_lt(v___x_461_, v___x_462_);
if (v___x_463_ == 0)
{
lean_dec(v_val_460_);
v___y_453_ = v_b_451_;
goto v___jp_452_;
}
else
{
uint8_t v___x_464_; 
v___x_464_ = lean_nat_dec_le(v___x_462_, v___x_462_);
if (v___x_464_ == 0)
{
if (v___x_463_ == 0)
{
lean_dec(v_val_460_);
v___y_453_ = v_b_451_;
goto v___jp_452_;
}
else
{
size_t v___x_465_; size_t v___x_466_; lean_object* v___x_467_; 
v___x_465_ = ((size_t)0ULL);
v___x_466_ = lean_usize_of_nat(v___x_462_);
v___x_467_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__0(v_val_460_, v___x_465_, v___x_466_, v_b_451_);
lean_dec(v_val_460_);
v___y_453_ = v___x_467_;
goto v___jp_452_;
}
}
else
{
size_t v___x_468_; size_t v___x_469_; lean_object* v___x_470_; 
v___x_468_ = ((size_t)0ULL);
v___x_469_ = lean_usize_of_nat(v___x_462_);
v___x_470_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__0(v_val_460_, v___x_468_, v___x_469_, v_b_451_);
lean_dec(v_val_460_);
v___y_453_ = v___x_470_;
goto v___jp_452_;
}
}
}
}
else
{
return v_b_451_;
}
v___jp_452_:
{
size_t v___x_454_; size_t v___x_455_; 
v___x_454_ = ((size_t)1ULL);
v___x_455_ = lean_usize_add(v_i_449_, v___x_454_);
v_i_449_ = v___x_455_;
v_b_451_ = v___y_453_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__4___boxed(lean_object* v_as_471_, lean_object* v_i_472_, lean_object* v_stop_473_, lean_object* v_b_474_){
_start:
{
size_t v_i_boxed_475_; size_t v_stop_boxed_476_; lean_object* v_res_477_; 
v_i_boxed_475_ = lean_unbox_usize(v_i_472_);
lean_dec(v_i_472_);
v_stop_boxed_476_ = lean_unbox_usize(v_stop_473_);
lean_dec(v_stop_473_);
v_res_477_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__4(v_as_471_, v_i_boxed_475_, v_stop_boxed_476_, v_b_474_);
lean_dec_ref(v_as_471_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3___redArg(lean_object* v___x_478_, lean_object* v___x_479_, size_t v_sz_480_, size_t v_i_481_, lean_object* v_bs_482_){
_start:
{
uint8_t v___x_483_; 
v___x_483_ = lean_usize_dec_lt(v_i_481_, v_sz_480_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
v___x_484_ = l_unsafeCast___redArg(v_bs_482_);
lean_dec_ref(v_bs_482_);
return v___x_484_;
}
else
{
lean_object* v_entries_485_; lean_object* v___x_486_; lean_object* v_bs_x27_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v_snd_491_; size_t v___x_492_; size_t v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_entries_485_ = lean_ctor_get(v___x_478_, 0);
v___x_486_ = lean_unsigned_to_nat(0u);
v_bs_x27_487_ = lean_array_uset(v_bs_482_, v_i_481_, v___x_486_);
v___x_488_ = lean_usize_to_nat(v_i_481_);
v___x_489_ = lean_array_fget_borrowed(v___x_479_, v___x_488_);
lean_dec(v___x_488_);
v___x_490_ = lean_array_fget_borrowed(v_entries_485_, v___x_489_);
v_snd_491_ = lean_ctor_get(v___x_490_, 1);
v___x_492_ = ((size_t)1ULL);
v___x_493_ = lean_usize_add(v_i_481_, v___x_492_);
v___x_494_ = l_unsafeCast___redArg(v_snd_491_);
v___x_495_ = lean_array_uset(v_bs_x27_487_, v_i_481_, v___x_494_);
v_i_481_ = v___x_493_;
v_bs_482_ = v___x_495_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3___redArg___boxed(lean_object* v___x_497_, lean_object* v___x_498_, lean_object* v_sz_499_, lean_object* v_i_500_, lean_object* v_bs_501_){
_start:
{
size_t v_sz_boxed_502_; size_t v_i_boxed_503_; lean_object* v_res_504_; 
v_sz_boxed_502_ = lean_unbox_usize(v_sz_499_);
lean_dec(v_sz_499_);
v_i_boxed_503_ = lean_unbox_usize(v_i_500_);
lean_dec(v_i_500_);
v_res_504_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3___redArg(v___x_497_, v___x_498_, v_sz_boxed_502_, v_i_boxed_503_, v_bs_501_);
lean_dec_ref(v___x_498_);
lean_dec_ref(v___x_497_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders(lean_object* v_headers_507_){
_start:
{
lean_object* v_indexes_508_; lean_object* v___x_509_; uint8_t v___x_510_; 
v_indexes_508_ = lean_ctor_get(v_headers_507_, 1);
v___x_509_ = l_Std_Http_Header_Name_connection;
v___x_510_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1___redArg(v_indexes_508_, v___x_509_);
if (v___x_510_ == 0)
{
lean_object* v___x_511_; 
v___x_511_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders___closed__0));
return v___x_511_;
}
else
{
lean_object* v___x_512_; size_t v_sz_513_; size_t v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v_entries_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; 
v___x_512_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2___redArg(v_indexes_508_, v___x_509_);
v_sz_513_ = lean_array_size(v___x_512_);
v___x_514_ = ((size_t)0ULL);
v___x_515_ = l_unsafeCast___redArg(v___x_512_);
v___x_516_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3___redArg(v_headers_507_, v___x_512_, v_sz_513_, v___x_514_, v___x_515_);
lean_dec(v___x_512_);
v_entries_517_ = l_unsafeCast___redArg(v___x_516_);
lean_dec_ref(v___x_516_);
v___x_518_ = lean_unsigned_to_nat(0u);
v___x_519_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders___closed__0));
v___x_520_ = lean_array_get_size(v_entries_517_);
v___x_521_ = lean_nat_dec_lt(v___x_518_, v___x_520_);
if (v___x_521_ == 0)
{
lean_dec(v_entries_517_);
return v___x_519_;
}
else
{
uint8_t v___x_522_; 
v___x_522_ = lean_nat_dec_le(v___x_520_, v___x_520_);
if (v___x_522_ == 0)
{
if (v___x_521_ == 0)
{
lean_dec(v_entries_517_);
return v___x_519_;
}
else
{
size_t v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_usize_of_nat(v___x_520_);
v___x_524_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__4(v_entries_517_, v___x_514_, v___x_523_, v___x_519_);
lean_dec(v_entries_517_);
return v___x_524_;
}
}
else
{
size_t v___x_525_; lean_object* v___x_526_; 
v___x_525_ = lean_usize_of_nat(v___x_520_);
v___x_526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__4(v_entries_517_, v___x_514_, v___x_525_, v___x_519_);
lean_dec(v_entries_517_);
return v___x_526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders___boxed(lean_object* v_headers_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders(v_headers_527_);
lean_dec_ref(v_headers_527_);
return v_res_528_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1(lean_object* v_00_u03b2_529_, lean_object* v_m_530_, lean_object* v_a_531_){
_start:
{
uint8_t v___x_532_; 
v___x_532_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1___redArg(v_m_530_, v_a_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1___boxed(lean_object* v_00_u03b2_533_, lean_object* v_m_534_, lean_object* v_a_535_){
_start:
{
uint8_t v_res_536_; lean_object* v_r_537_; 
v_res_536_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1(v_00_u03b2_533_, v_m_534_, v_a_535_);
lean_dec_ref(v_a_535_);
lean_dec_ref(v_m_534_);
v_r_537_ = lean_box(v_res_536_);
return v_r_537_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2(lean_object* v_00_u03b2_538_, lean_object* v_m_539_, lean_object* v_a_540_, lean_object* v_hma_541_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2___redArg(v_m_539_, v_a_540_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2___boxed(lean_object* v_00_u03b2_543_, lean_object* v_m_544_, lean_object* v_a_545_, lean_object* v_hma_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2(v_00_u03b2_543_, v_m_544_, v_a_545_, v_hma_546_);
lean_dec_ref(v_a_545_);
lean_dec_ref(v_m_544_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3(lean_object* v___x_548_, lean_object* v___x_549_, lean_object* v_as_550_, size_t v_sz_551_, size_t v_i_552_, lean_object* v_bs_553_){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3___redArg(v___x_548_, v___x_549_, v_sz_551_, v_i_552_, v_bs_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3___boxed(lean_object* v___x_555_, lean_object* v___x_556_, lean_object* v_as_557_, lean_object* v_sz_558_, lean_object* v_i_559_, lean_object* v_bs_560_){
_start:
{
size_t v_sz_boxed_561_; size_t v_i_boxed_562_; lean_object* v_res_563_; 
v_sz_boxed_561_ = lean_unbox_usize(v_sz_558_);
lean_dec(v_sz_558_);
v_i_boxed_562_ = lean_unbox_usize(v_i_559_);
lean_dec(v_i_559_);
v_res_563_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__3(v___x_555_, v___x_556_, v_as_557_, v_sz_boxed_561_, v_i_boxed_562_, v_bs_560_);
lean_dec_ref(v_as_557_);
lean_dec_ref(v___x_556_);
lean_dec_ref(v___x_555_);
return v_res_563_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1(lean_object* v_00_u03b2_564_, lean_object* v_a_565_, lean_object* v_x_566_){
_start:
{
uint8_t v___x_567_; 
v___x_567_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1___redArg(v_a_565_, v_x_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1___boxed(lean_object* v_00_u03b2_568_, lean_object* v_a_569_, lean_object* v_x_570_){
_start:
{
uint8_t v_res_571_; lean_object* v_r_572_; 
v_res_571_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1(v_00_u03b2_568_, v_a_569_, v_x_570_);
lean_dec(v_x_570_);
lean_dec_ref(v_a_569_);
v_r_572_ = lean_box(v_res_571_);
return v_r_572_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3(lean_object* v_00_u03b2_573_, lean_object* v_a_574_, lean_object* v_x_575_, lean_object* v_x_576_){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3___redArg(v_a_574_, v_x_575_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3___boxed(lean_object* v_00_u03b2_578_, lean_object* v_a_579_, lean_object* v_x_580_, lean_object* v_x_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2_spec__3(v_00_u03b2_578_, v_a_579_, v_x_580_, v_x_581_);
lean_dec(v_x_580_);
lean_dec_ref(v_a_579_);
return v_res_582_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders___closed__0(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_583_ = l_Std_Http_Header_Name_proxyAuthorization;
v___x_584_ = lean_unsigned_to_nat(1u);
v___x_585_ = lean_mk_empty_array_with_capacity(v___x_584_);
v___x_586_ = lean_array_push(v___x_585_, v___x_583_);
return v___x_586_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders(void){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders___closed__0, &l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders___closed__0_once, _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders___closed__0);
return v___x_587_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders___closed__0(void){
_start:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_588_ = l_Std_Http_Header_Name_referer;
v___x_589_ = l_Std_Http_Header_Name_cookie;
v___x_590_ = l_Std_Http_Header_Name_authorization;
v___x_591_ = lean_unsigned_to_nat(3u);
v___x_592_ = lean_mk_empty_array_with_capacity(v___x_591_);
v___x_593_ = lean_array_push(v___x_592_, v___x_590_);
v___x_594_ = lean_array_push(v___x_593_, v___x_589_);
v___x_595_ = lean_array_push(v___x_594_, v___x_588_);
return v___x_595_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders(void){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders___closed__0, &l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders___closed__0_once, _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders___closed__0);
return v___x_596_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders___closed__0(void){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_597_ = l_Std_Http_Header_Name_ifModifiedSince;
v___x_598_ = l_Std_Http_Header_Name_ifNoneMatch;
v___x_599_ = lean_unsigned_to_nat(2u);
v___x_600_ = lean_mk_empty_array_with_capacity(v___x_599_);
v___x_601_ = lean_array_push(v___x_600_, v___x_598_);
v___x_602_ = lean_array_push(v___x_601_, v___x_597_);
return v___x_602_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders(void){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders___closed__0, &l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders___closed__0_once, _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders___closed__0);
return v___x_603_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders___closed__0(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_604_ = l_Std_Http_Header_Name_lastModified;
v___x_605_ = l_Std_Http_Header_Name_contentLocation;
v___x_606_ = l_Std_Http_Header_Name_contentLanguage;
v___x_607_ = l_Std_Http_Header_Name_contentEncoding;
v___x_608_ = l_Std_Http_Header_Name_contentLength;
v___x_609_ = l_Std_Http_Header_Name_contentType;
v___x_610_ = lean_unsigned_to_nat(6u);
v___x_611_ = lean_mk_empty_array_with_capacity(v___x_610_);
v___x_612_ = lean_array_push(v___x_611_, v___x_609_);
v___x_613_ = lean_array_push(v___x_612_, v___x_608_);
v___x_614_ = lean_array_push(v___x_613_, v___x_607_);
v___x_615_ = lean_array_push(v___x_614_, v___x_606_);
v___x_616_ = lean_array_push(v___x_615_, v___x_605_);
v___x_617_ = lean_array_push(v___x_616_, v___x_604_);
return v___x_617_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders(void){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders___closed__0, &l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders___closed__0_once, _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders___closed__0);
return v___x_618_;
}
}
static lean_object* _init_l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_621_ = lean_box(0);
v___x_622_ = lean_unsigned_to_nat(16u);
v___x_623_ = lean_mk_array(v___x_622_, v___x_621_);
return v___x_623_;
}
}
static lean_object* _init_l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_624_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__1, &l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__1_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__1);
v___x_625_ = lean_unsigned_to_nat(0u);
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___x_624_);
return v___x_626_;
}
}
static lean_object* _init_l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_627_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__2, &l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__2_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__2);
v___x_628_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__0));
v___x_629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
lean_ctor_set(v___x_629_, 1, v___x_627_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg(){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__3, &l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__3_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___closed__3);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg___boxed(lean_object* v___dummy_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg();
return v_res_633_;
}
}
static lean_object* _init_l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___closed__0(void){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___redArg();
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2(lean_object* v_00_u03b2_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___closed__0, &l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___closed__0);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__3___lam__0(lean_object* v_i_637_, lean_object* v_x_638_){
_start:
{
if (lean_obj_tag(v_x_638_) == 0)
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_639_ = lean_unsigned_to_nat(1u);
v___x_640_ = lean_mk_empty_array_with_capacity(v___x_639_);
v___x_641_ = lean_array_push(v___x_640_, v_i_637_);
v___x_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
return v___x_642_;
}
else
{
lean_object* v_val_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_651_; 
v_val_643_ = lean_ctor_get(v_x_638_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v_x_638_);
if (v_isSharedCheck_651_ == 0)
{
v___x_645_ = v_x_638_;
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_val_643_);
lean_dec(v_x_638_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_647_; lean_object* v___x_649_; 
v___x_647_ = lean_array_push(v_val_643_, v_i_637_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v___x_647_);
v___x_649_ = v___x_645_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v___x_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__3(lean_object* v_i_652_, lean_object* v_a_653_, lean_object* v_x_654_){
_start:
{
if (lean_obj_tag(v_x_654_) == 0)
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v_val_657_; lean_object* v___x_658_; 
v___x_655_ = lean_box(0);
v___x_656_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__3___lam__0(v_i_652_, v___x_655_);
v_val_657_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_val_657_);
lean_dec(v___x_656_);
v___x_658_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_658_, 0, v_a_653_);
lean_ctor_set(v___x_658_, 1, v_val_657_);
lean_ctor_set(v___x_658_, 2, v_x_654_);
return v___x_658_;
}
else
{
lean_object* v_key_659_; lean_object* v_value_660_; lean_object* v_tail_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_676_; 
v_key_659_ = lean_ctor_get(v_x_654_, 0);
v_value_660_ = lean_ctor_get(v_x_654_, 1);
v_tail_661_ = lean_ctor_get(v_x_654_, 2);
v_isSharedCheck_676_ = !lean_is_exclusive(v_x_654_);
if (v_isSharedCheck_676_ == 0)
{
v___x_663_ = v_x_654_;
v_isShared_664_ = v_isSharedCheck_676_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_tail_661_);
lean_inc(v_value_660_);
lean_inc(v_key_659_);
lean_dec(v_x_654_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_676_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
uint8_t v___x_665_; 
v___x_665_ = lean_string_dec_eq(v_key_659_, v_a_653_);
if (v___x_665_ == 0)
{
lean_object* v_tail_666_; lean_object* v___x_668_; 
v_tail_666_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__3(v_i_652_, v_a_653_, v_tail_661_);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 2, v_tail_666_);
v___x_668_ = v___x_663_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_key_659_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_value_660_);
lean_ctor_set(v_reuseFailAlloc_669_, 2, v_tail_666_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
else
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v_val_672_; lean_object* v___x_674_; 
lean_dec(v_key_659_);
v___x_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_670_, 0, v_value_660_);
v___x_671_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__3___lam__0(v_i_652_, v___x_670_);
v_val_672_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_val_672_);
lean_dec(v___x_671_);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 1, v_val_672_);
lean_ctor_set(v___x_663_, 0, v_a_653_);
v___x_674_ = v___x_663_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_653_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v_val_672_);
lean_ctor_set(v_reuseFailAlloc_675_, 2, v_tail_661_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_x_677_, lean_object* v_x_678_){
_start:
{
if (lean_obj_tag(v_x_678_) == 0)
{
return v_x_677_;
}
else
{
lean_object* v_key_679_; lean_object* v_value_680_; lean_object* v_tail_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_704_; 
v_key_679_ = lean_ctor_get(v_x_678_, 0);
v_value_680_ = lean_ctor_get(v_x_678_, 1);
v_tail_681_ = lean_ctor_get(v_x_678_, 2);
v_isSharedCheck_704_ = !lean_is_exclusive(v_x_678_);
if (v_isSharedCheck_704_ == 0)
{
v___x_683_ = v_x_678_;
v_isShared_684_ = v_isSharedCheck_704_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_tail_681_);
lean_inc(v_value_680_);
lean_inc(v_key_679_);
lean_dec(v_x_678_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_704_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_685_; uint64_t v___x_686_; uint64_t v___x_687_; uint64_t v___x_688_; uint64_t v_fold_689_; uint64_t v___x_690_; uint64_t v___x_691_; uint64_t v___x_692_; size_t v___x_693_; size_t v___x_694_; size_t v___x_695_; size_t v___x_696_; size_t v___x_697_; lean_object* v___x_698_; lean_object* v___x_700_; 
v___x_685_ = lean_array_get_size(v_x_677_);
v___x_686_ = lean_string_hash(v_key_679_);
v___x_687_ = 32ULL;
v___x_688_ = lean_uint64_shift_right(v___x_686_, v___x_687_);
v_fold_689_ = lean_uint64_xor(v___x_686_, v___x_688_);
v___x_690_ = 16ULL;
v___x_691_ = lean_uint64_shift_right(v_fold_689_, v___x_690_);
v___x_692_ = lean_uint64_xor(v_fold_689_, v___x_691_);
v___x_693_ = lean_uint64_to_usize(v___x_692_);
v___x_694_ = lean_usize_of_nat(v___x_685_);
v___x_695_ = ((size_t)1ULL);
v___x_696_ = lean_usize_sub(v___x_694_, v___x_695_);
v___x_697_ = lean_usize_land(v___x_693_, v___x_696_);
v___x_698_ = lean_array_uget_borrowed(v_x_677_, v___x_697_);
lean_inc(v___x_698_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 2, v___x_698_);
v___x_700_ = v___x_683_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_key_679_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v_value_680_);
lean_ctor_set(v_reuseFailAlloc_703_, 2, v___x_698_);
v___x_700_ = v_reuseFailAlloc_703_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
lean_object* v___x_701_; 
v___x_701_ = lean_array_uset(v_x_677_, v___x_697_, v___x_700_);
v_x_677_ = v___x_701_;
v_x_678_ = v_tail_681_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4___redArg(lean_object* v_i_705_, lean_object* v_source_706_, lean_object* v_target_707_){
_start:
{
lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_708_ = lean_array_get_size(v_source_706_);
v___x_709_ = lean_nat_dec_lt(v_i_705_, v___x_708_);
if (v___x_709_ == 0)
{
lean_dec_ref(v_source_706_);
lean_dec(v_i_705_);
return v_target_707_;
}
else
{
lean_object* v_es_710_; lean_object* v___x_711_; lean_object* v_source_712_; lean_object* v_target_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v_es_710_ = lean_array_fget(v_source_706_, v_i_705_);
v___x_711_ = lean_box(0);
v_source_712_ = lean_array_fset(v_source_706_, v_i_705_, v___x_711_);
v_target_713_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4_spec__6___redArg(v_target_707_, v_es_710_);
v___x_714_ = lean_unsigned_to_nat(1u);
v___x_715_ = lean_nat_add(v_i_705_, v___x_714_);
lean_dec(v_i_705_);
v_i_705_ = v___x_715_;
v_source_706_ = v_source_712_;
v_target_707_ = v_target_713_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2___redArg(lean_object* v_data_717_){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v_nbuckets_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_718_ = lean_array_get_size(v_data_717_);
v___x_719_ = lean_unsigned_to_nat(2u);
v_nbuckets_720_ = lean_nat_mul(v___x_718_, v___x_719_);
v___x_721_ = lean_unsigned_to_nat(0u);
v___x_722_ = lean_box(0);
v___x_723_ = lean_mk_array(v_nbuckets_720_, v___x_722_);
v___x_724_ = lean_array_propagate_mark(v_data_717_, v___x_723_);
v___x_725_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4___redArg(v___x_721_, v_data_717_, v___x_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1(lean_object* v_i_726_, lean_object* v_m_727_, lean_object* v_a_728_){
_start:
{
lean_object* v_size_729_; lean_object* v_buckets_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_780_; 
v_size_729_ = lean_ctor_get(v_m_727_, 0);
v_buckets_730_ = lean_ctor_get(v_m_727_, 1);
v_isSharedCheck_780_ = !lean_is_exclusive(v_m_727_);
if (v_isSharedCheck_780_ == 0)
{
v___x_732_ = v_m_727_;
v_isShared_733_ = v_isSharedCheck_780_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_buckets_730_);
lean_inc(v_size_729_);
lean_dec(v_m_727_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_780_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_734_; uint64_t v___x_735_; uint64_t v___x_736_; uint64_t v___x_737_; uint64_t v_fold_738_; uint64_t v___x_739_; uint64_t v___x_740_; uint64_t v___x_741_; size_t v___x_742_; size_t v___x_743_; size_t v___x_744_; size_t v___x_745_; size_t v___x_746_; lean_object* v_bkt_747_; uint8_t v___x_748_; 
v___x_734_ = lean_array_get_size(v_buckets_730_);
v___x_735_ = lean_string_hash(v_a_728_);
v___x_736_ = 32ULL;
v___x_737_ = lean_uint64_shift_right(v___x_735_, v___x_736_);
v_fold_738_ = lean_uint64_xor(v___x_735_, v___x_737_);
v___x_739_ = 16ULL;
v___x_740_ = lean_uint64_shift_right(v_fold_738_, v___x_739_);
v___x_741_ = lean_uint64_xor(v_fold_738_, v___x_740_);
v___x_742_ = lean_uint64_to_usize(v___x_741_);
v___x_743_ = lean_usize_of_nat(v___x_734_);
v___x_744_ = ((size_t)1ULL);
v___x_745_ = lean_usize_sub(v___x_743_, v___x_744_);
v___x_746_ = lean_usize_land(v___x_742_, v___x_745_);
v_bkt_747_ = lean_array_uget_borrowed(v_buckets_730_, v___x_746_);
v___x_748_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1___redArg(v_a_728_, v_bkt_747_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v_size_x27_752_; lean_object* v___x_753_; lean_object* v_buckets_x27_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; uint8_t v___x_760_; 
v___x_749_ = lean_unsigned_to_nat(1u);
v___x_750_ = lean_mk_empty_array_with_capacity(v___x_749_);
v___x_751_ = lean_array_push(v___x_750_, v_i_726_);
v_size_x27_752_ = lean_nat_add(v_size_729_, v___x_749_);
lean_dec(v_size_729_);
lean_inc(v_bkt_747_);
v___x_753_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_753_, 0, v_a_728_);
lean_ctor_set(v___x_753_, 1, v___x_751_);
lean_ctor_set(v___x_753_, 2, v_bkt_747_);
v_buckets_x27_754_ = lean_array_uset(v_buckets_730_, v___x_746_, v___x_753_);
v___x_755_ = lean_unsigned_to_nat(4u);
v___x_756_ = lean_nat_mul(v_size_x27_752_, v___x_755_);
v___x_757_ = lean_unsigned_to_nat(3u);
v___x_758_ = lean_nat_div(v___x_756_, v___x_757_);
lean_dec(v___x_756_);
v___x_759_ = lean_array_get_size(v_buckets_x27_754_);
v___x_760_ = lean_nat_dec_le(v___x_758_, v___x_759_);
lean_dec(v___x_758_);
if (v___x_760_ == 0)
{
lean_object* v_val_761_; lean_object* v___x_763_; 
v_val_761_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2___redArg(v_buckets_x27_754_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v_val_761_);
lean_ctor_set(v___x_732_, 0, v_size_x27_752_);
v___x_763_ = v___x_732_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_size_x27_752_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_val_761_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
else
{
lean_object* v___x_766_; 
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v_buckets_x27_754_);
lean_ctor_set(v___x_732_, 0, v_size_x27_752_);
v___x_766_ = v___x_732_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_size_x27_752_);
lean_ctor_set(v_reuseFailAlloc_767_, 1, v_buckets_x27_754_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
else
{
lean_object* v___x_768_; lean_object* v_buckets_x27_769_; lean_object* v_bkt_x27_770_; lean_object* v___y_772_; uint8_t v___x_777_; 
lean_inc(v_bkt_747_);
v___x_768_ = lean_box(0);
v_buckets_x27_769_ = lean_array_uset(v_buckets_730_, v___x_746_, v___x_768_);
lean_inc_ref(v_a_728_);
v_bkt_x27_770_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__3(v_i_726_, v_a_728_, v_bkt_747_);
v___x_777_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1_spec__1___redArg(v_a_728_, v_bkt_x27_770_);
lean_dec_ref(v_a_728_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = lean_unsigned_to_nat(1u);
v___x_779_ = lean_nat_sub(v_size_729_, v___x_778_);
lean_dec(v_size_729_);
v___y_772_ = v___x_779_;
goto v___jp_771_;
}
else
{
v___y_772_ = v_size_729_;
goto v___jp_771_;
}
v___jp_771_:
{
lean_object* v___x_773_; lean_object* v___x_775_; 
v___x_773_ = lean_array_uset(v_buckets_x27_769_, v___x_746_, v_bkt_x27_770_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v___x_773_);
lean_ctor_set(v___x_732_, 0, v___y_772_);
v___x_775_ = v___x_732_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___y_772_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v___x_773_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0_spec__0(lean_object* v_a_781_, lean_object* v_as_782_, size_t v_i_783_, size_t v_stop_784_){
_start:
{
uint8_t v___x_785_; 
v___x_785_ = lean_usize_dec_eq(v_i_783_, v_stop_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; uint8_t v___x_787_; 
v___x_786_ = lean_array_uget_borrowed(v_as_782_, v_i_783_);
v___x_787_ = lean_string_dec_eq(v_a_781_, v___x_786_);
if (v___x_787_ == 0)
{
size_t v___x_788_; size_t v___x_789_; 
v___x_788_ = ((size_t)1ULL);
v___x_789_ = lean_usize_add(v_i_783_, v___x_788_);
v_i_783_ = v___x_789_;
goto _start;
}
else
{
return v___x_787_;
}
}
else
{
uint8_t v___x_791_; 
v___x_791_ = 0;
return v___x_791_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0_spec__0___boxed(lean_object* v_a_792_, lean_object* v_as_793_, lean_object* v_i_794_, lean_object* v_stop_795_){
_start:
{
size_t v_i_boxed_796_; size_t v_stop_boxed_797_; uint8_t v_res_798_; lean_object* v_r_799_; 
v_i_boxed_796_ = lean_unbox_usize(v_i_794_);
lean_dec(v_i_794_);
v_stop_boxed_797_ = lean_unbox_usize(v_stop_795_);
lean_dec(v_stop_795_);
v_res_798_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0_spec__0(v_a_792_, v_as_793_, v_i_boxed_796_, v_stop_boxed_797_);
lean_dec_ref(v_as_793_);
lean_dec_ref(v_a_792_);
v_r_799_ = lean_box(v_res_798_);
return v_r_799_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0(lean_object* v_as_800_, lean_object* v_a_801_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_array_get_size(v_as_800_);
v___x_804_ = lean_nat_dec_lt(v___x_802_, v___x_803_);
if (v___x_804_ == 0)
{
return v___x_804_;
}
else
{
if (v___x_804_ == 0)
{
return v___x_804_;
}
else
{
size_t v___x_805_; size_t v___x_806_; uint8_t v___x_807_; 
v___x_805_ = ((size_t)0ULL);
v___x_806_ = lean_usize_of_nat(v___x_803_);
v___x_807_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0_spec__0(v_a_801_, v_as_800_, v___x_805_, v___x_806_);
return v___x_807_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0___boxed(lean_object* v_as_808_, lean_object* v_a_809_){
_start:
{
uint8_t v_res_810_; lean_object* v_r_811_; 
v_res_810_ = l_Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0(v_as_808_, v_a_809_);
lean_dec_ref(v_a_809_);
lean_dec_ref(v_as_808_);
v_r_811_ = lean_box(v_res_810_);
return v_r_811_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__3(lean_object* v___y_812_, lean_object* v_as_813_, size_t v_i_814_, size_t v_stop_815_, lean_object* v_b_816_){
_start:
{
lean_object* v___y_818_; uint8_t v___x_822_; 
v___x_822_ = lean_usize_dec_eq(v_i_814_, v_stop_815_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; lean_object* v_fst_824_; uint8_t v___x_838_; 
v___x_823_ = lean_array_uget_borrowed(v_as_813_, v_i_814_);
v_fst_824_ = lean_ctor_get(v___x_823_, 0);
v___x_838_ = l_Array_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__0(v___y_812_, v_fst_824_);
if (v___x_838_ == 0)
{
goto v___jp_825_;
}
else
{
if (v___x_822_ == 0)
{
v___y_818_ = v_b_816_;
goto v___jp_817_;
}
else
{
goto v___jp_825_;
}
}
v___jp_825_:
{
lean_object* v_entries_826_; lean_object* v_indexes_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_837_; 
v_entries_826_ = lean_ctor_get(v_b_816_, 0);
v_indexes_827_ = lean_ctor_get(v_b_816_, 1);
v_isSharedCheck_837_ = !lean_is_exclusive(v_b_816_);
if (v_isSharedCheck_837_ == 0)
{
v___x_829_ = v_b_816_;
v_isShared_830_ = v_isSharedCheck_837_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_indexes_827_);
lean_inc(v_entries_826_);
lean_dec(v_b_816_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_837_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v_i_831_; lean_object* v_entries_832_; lean_object* v_indexes_833_; lean_object* v___x_835_; 
v_i_831_ = lean_array_get_size(v_entries_826_);
lean_inc(v___x_823_);
v_entries_832_ = lean_array_push(v_entries_826_, v___x_823_);
lean_inc(v_fst_824_);
v_indexes_833_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1(v_i_831_, v_indexes_827_, v_fst_824_);
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 1, v_indexes_833_);
lean_ctor_set(v___x_829_, 0, v_entries_832_);
v___x_835_ = v___x_829_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_entries_832_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v_indexes_833_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
v___y_818_ = v___x_835_;
goto v___jp_817_;
}
}
}
}
else
{
return v_b_816_;
}
v___jp_817_:
{
size_t v___x_819_; size_t v___x_820_; 
v___x_819_ = ((size_t)1ULL);
v___x_820_ = lean_usize_add(v_i_814_, v___x_819_);
v_i_814_ = v___x_820_;
v_b_816_ = v___y_818_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__3___boxed(lean_object* v___y_839_, lean_object* v_as_840_, lean_object* v_i_841_, lean_object* v_stop_842_, lean_object* v_b_843_){
_start:
{
size_t v_i_boxed_844_; size_t v_stop_boxed_845_; lean_object* v_res_846_; 
v_i_boxed_844_ = lean_unbox_usize(v_i_841_);
lean_dec(v_i_841_);
v_stop_boxed_845_ = lean_unbox_usize(v_stop_842_);
lean_dec(v_stop_842_);
v_res_846_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__3(v___y_839_, v_as_840_, v_i_boxed_844_, v_stop_boxed_845_, v_b_843_);
lean_dec_ref(v_as_840_);
lean_dec_ref(v___y_839_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders(lean_object* v_headers_847_, uint8_t v_isCrossOrigin_848_, uint8_t v_methodChanged_849_){
_start:
{
lean_object* v___y_851_; lean_object* v___y_861_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v_afterConnection_868_; 
v___x_866_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders;
v___x_867_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders(v_headers_847_);
v_afterConnection_868_ = l_Array_append___redArg(v___x_866_, v___x_867_);
lean_dec_ref(v___x_867_);
if (v_isCrossOrigin_848_ == 0)
{
v___y_861_ = v_afterConnection_868_;
goto v___jp_860_;
}
else
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_869_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders;
v___x_870_ = l_Array_append___redArg(v_afterConnection_868_, v___x_869_);
v___x_871_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders;
v___x_872_ = l_Array_append___redArg(v___x_870_, v___x_871_);
v___x_873_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders;
v___x_874_ = l_Array_append___redArg(v___x_872_, v___x_873_);
v___y_861_ = v___x_874_;
goto v___jp_860_;
}
v___jp_850_:
{
lean_object* v_entries_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; uint8_t v___x_856_; 
v_entries_852_ = lean_ctor_get(v_headers_847_, 0);
v___x_853_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___closed__0, &l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__2___closed__0);
v___x_854_ = lean_unsigned_to_nat(0u);
v___x_855_ = lean_array_get_size(v_entries_852_);
v___x_856_ = lean_nat_dec_lt(v___x_854_, v___x_855_);
if (v___x_856_ == 0)
{
lean_dec_ref(v___y_851_);
return v___x_853_;
}
else
{
size_t v___x_857_; size_t v___x_858_; lean_object* v___x_859_; 
v___x_857_ = ((size_t)0ULL);
v___x_858_ = lean_usize_of_nat(v___x_855_);
v___x_859_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__3(v___y_851_, v_entries_852_, v___x_857_, v___x_858_, v___x_853_);
lean_dec_ref(v___y_851_);
return v___x_859_;
}
}
v___jp_860_:
{
if (v_methodChanged_849_ == 0)
{
v___y_851_ = v___y_861_;
goto v___jp_850_;
}
else
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_862_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders;
v___x_863_ = l_Array_append___redArg(v___y_861_, v___x_862_);
v___x_864_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders;
v___x_865_ = l_Array_append___redArg(v___x_863_, v___x_864_);
v___y_851_ = v___x_865_;
goto v___jp_850_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders___boxed(lean_object* v_headers_875_, lean_object* v_isCrossOrigin_876_, lean_object* v_methodChanged_877_){
_start:
{
uint8_t v_isCrossOrigin_boxed_878_; uint8_t v_methodChanged_boxed_879_; lean_object* v_res_880_; 
v_isCrossOrigin_boxed_878_ = lean_unbox(v_isCrossOrigin_876_);
v_methodChanged_boxed_879_ = lean_unbox(v_methodChanged_877_);
v_res_880_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders(v_headers_875_, v_isCrossOrigin_boxed_878_, v_methodChanged_boxed_879_);
lean_dec_ref(v_headers_875_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2(lean_object* v_00_u03b2_881_, lean_object* v_data_882_){
_start:
{
lean_object* v___x_883_; 
v___x_883_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2___redArg(v_data_882_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_884_, lean_object* v_i_885_, lean_object* v_source_886_, lean_object* v_target_887_){
_start:
{
lean_object* v___x_888_; 
v___x_888_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4___redArg(v_i_885_, v_source_886_, v_target_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_889_, lean_object* v_x_890_, lean_object* v_x_891_){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders_spec__1_spec__2_spec__4_spec__6___redArg(v_x_890_, v_x_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_rewriteHostHeader(lean_object* v_headers_893_, lean_object* v_origin_894_){
_start:
{
lean_object* v_entries_895_; lean_object* v_indexes_896_; lean_object* v___x_897_; uint8_t v___x_898_; 
v_entries_895_ = lean_ctor_get(v_headers_893_, 0);
v_indexes_896_ = lean_ctor_get(v_headers_893_, 1);
v___x_897_ = l_Std_Http_Header_Name_host;
v___x_898_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1___redArg(v_indexes_896_, v___x_897_);
if (v___x_898_ == 0)
{
lean_dec_ref(v_origin_894_);
return v_headers_893_;
}
else
{
if (v___x_898_ == 0)
{
lean_dec_ref(v_origin_894_);
return v_headers_893_;
}
else
{
lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_914_; 
lean_inc_ref(v_indexes_896_);
lean_inc_ref(v_entries_895_);
v_isSharedCheck_914_ = !lean_is_exclusive(v_headers_893_);
if (v_isSharedCheck_914_ == 0)
{
lean_object* v_unused_915_; lean_object* v_unused_916_; 
v_unused_915_ = lean_ctor_get(v_headers_893_, 1);
lean_dec(v_unused_915_);
v_unused_916_ = lean_ctor_get(v_headers_893_, 0);
lean_dec(v_unused_916_);
v___x_900_ = v_headers_893_;
v_isShared_901_ = v_isSharedCheck_914_;
goto v_resetjp_899_;
}
else
{
lean_dec(v_headers_893_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_914_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v_idxs_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v_lastIdx_908_; lean_object* v___x_909_; lean_object* v_entries_910_; lean_object* v___x_912_; 
v___x_902_ = l_Std_Http_URI_Origin_hostHeader(v_origin_894_);
v___x_903_ = l_Std_Http_Header_Value_ofString_x21(v___x_902_);
v_idxs_904_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2___redArg(v_indexes_896_, v___x_897_);
v___x_905_ = lean_array_get_size(v_idxs_904_);
v___x_906_ = lean_unsigned_to_nat(1u);
v___x_907_ = lean_nat_sub(v___x_905_, v___x_906_);
v_lastIdx_908_ = lean_array_fget(v_idxs_904_, v___x_907_);
lean_dec(v___x_907_);
lean_dec(v_idxs_904_);
v___x_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_897_);
lean_ctor_set(v___x_909_, 1, v___x_903_);
v_entries_910_ = lean_array_fset(v_entries_895_, v_lastIdx_908_, v___x_909_);
lean_dec(v_lastIdx_908_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 0, v_entries_910_);
v___x_912_ = v___x_900_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_entries_910_);
lean_ctor_set(v_reuseFailAlloc_913_, 1, v_indexes_896_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_requestTargetQuery_x3f(lean_object* v_x_917_){
_start:
{
switch(lean_obj_tag(v_x_917_))
{
case 0:
{
lean_object* v_query_918_; 
v_query_918_ = lean_ctor_get(v_x_917_, 1);
lean_inc(v_query_918_);
return v_query_918_;
}
case 1:
{
lean_object* v_uri_919_; lean_object* v_query_920_; 
v_uri_919_ = lean_ctor_get(v_x_917_, 0);
v_query_920_ = lean_ctor_get(v_uri_919_, 3);
lean_inc(v_query_920_);
return v_query_920_;
}
default: 
{
lean_object* v___x_921_; 
v___x_921_ = lean_box(0);
return v___x_921_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_requestTargetQuery_x3f___boxed(lean_object* v_x_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_requestTargetQuery_x3f(v_x_922_);
lean_dec(v_x_922_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_rewriteTarget(lean_object* v_ref_924_, uint8_t v_isCrossOrigin_925_, lean_object* v_basePath_926_, lean_object* v_baseQuery_927_, lean_object* v_currentScheme_928_){
_start:
{
lean_object* v___y_930_; lean_object* v___y_931_; 
if (lean_obj_tag(v_ref_924_) == 0)
{
lean_object* v_uri_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_976_; 
lean_dec_ref(v_currentScheme_928_);
lean_dec(v_baseQuery_927_);
lean_dec_ref(v_basePath_926_);
v_uri_934_ = lean_ctor_get(v_ref_924_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v_ref_924_);
if (v_isSharedCheck_976_ == 0)
{
v___x_936_ = v_ref_924_;
v_isShared_937_ = v_isSharedCheck_976_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_uri_934_);
lean_dec(v_ref_924_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_976_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v_scheme_938_; lean_object* v_authority_939_; lean_object* v_path_940_; lean_object* v_query_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_974_; 
v_scheme_938_ = lean_ctor_get(v_uri_934_, 0);
v_authority_939_ = lean_ctor_get(v_uri_934_, 1);
v_path_940_ = lean_ctor_get(v_uri_934_, 2);
v_query_941_ = lean_ctor_get(v_uri_934_, 3);
v_isSharedCheck_974_ = !lean_is_exclusive(v_uri_934_);
if (v_isSharedCheck_974_ == 0)
{
lean_object* v_unused_975_; 
v_unused_975_ = lean_ctor_get(v_uri_934_, 4);
lean_dec(v_unused_975_);
v___x_943_ = v_uri_934_;
v_isShared_944_ = v_isSharedCheck_974_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_query_941_);
lean_inc(v_path_940_);
lean_inc(v_authority_939_);
lean_inc(v_scheme_938_);
lean_dec(v_uri_934_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_974_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___y_946_; 
if (lean_obj_tag(v_authority_939_) == 0)
{
v___y_946_ = v_authority_939_;
goto v___jp_945_;
}
else
{
lean_object* v_val_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_973_; 
v_val_955_ = lean_ctor_get(v_authority_939_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v_authority_939_);
if (v_isSharedCheck_973_ == 0)
{
v___x_957_ = v_authority_939_;
v_isShared_958_ = v_isSharedCheck_973_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_val_955_);
lean_dec(v_authority_939_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_973_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v_host_959_; lean_object* v_port_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_971_; 
v_host_959_ = lean_ctor_get(v_val_955_, 1);
v_port_960_ = lean_ctor_get(v_val_955_, 2);
v_isSharedCheck_971_ = !lean_is_exclusive(v_val_955_);
if (v_isSharedCheck_971_ == 0)
{
lean_object* v_unused_972_; 
v_unused_972_ = lean_ctor_get(v_val_955_, 0);
lean_dec(v_unused_972_);
v___x_962_ = v_val_955_;
v_isShared_963_ = v_isSharedCheck_971_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_port_960_);
lean_inc(v_host_959_);
lean_dec(v_val_955_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_971_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v___x_966_; 
v___x_964_ = lean_box(0);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v___x_964_);
v___x_966_ = v___x_962_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_964_);
lean_ctor_set(v_reuseFailAlloc_970_, 1, v_host_959_);
lean_ctor_set(v_reuseFailAlloc_970_, 2, v_port_960_);
v___x_966_ = v_reuseFailAlloc_970_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
lean_object* v___x_968_; 
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 0, v___x_966_);
v___x_968_ = v___x_957_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___x_966_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
v___y_946_ = v___x_968_;
goto v___jp_945_;
}
}
}
}
}
v___jp_945_:
{
if (v_isCrossOrigin_925_ == 0)
{
lean_object* v___x_947_; 
lean_dec(v___y_946_);
lean_del_object(v___x_943_);
lean_dec_ref(v_scheme_938_);
lean_del_object(v___x_936_);
v___x_947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_947_, 0, v_path_940_);
lean_ctor_set(v___x_947_, 1, v_query_941_);
return v___x_947_;
}
else
{
lean_object* v___x_948_; lean_object* v_stripped_950_; 
v___x_948_ = lean_box(0);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 4, v___x_948_);
lean_ctor_set(v___x_943_, 1, v___y_946_);
v_stripped_950_ = v___x_943_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_scheme_938_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v___y_946_);
lean_ctor_set(v_reuseFailAlloc_954_, 2, v_path_940_);
lean_ctor_set(v_reuseFailAlloc_954_, 3, v_query_941_);
lean_ctor_set(v_reuseFailAlloc_954_, 4, v___x_948_);
v_stripped_950_ = v_reuseFailAlloc_954_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
lean_object* v___x_952_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set_tag(v___x_936_, 1);
lean_ctor_set(v___x_936_, 0, v_stripped_950_);
v___x_952_ = v___x_936_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_stripped_950_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
}
}
}
else
{
lean_object* v_ref_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_1018_; 
v_ref_977_ = lean_ctor_get(v_ref_924_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_ref_924_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_979_ = v_ref_924_;
v_isShared_980_ = v_isSharedCheck_1018_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_ref_977_);
lean_dec(v_ref_924_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_1018_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v_authority_981_; lean_object* v_path_982_; lean_object* v_query_983_; lean_object* v___y_985_; uint8_t v___y_986_; 
v_authority_981_ = lean_ctor_get(v_ref_977_, 0);
lean_inc(v_authority_981_);
v_path_982_ = lean_ctor_get(v_ref_977_, 1);
lean_inc_ref(v_path_982_);
v_query_983_ = lean_ctor_get(v_ref_977_, 2);
lean_inc(v_query_983_);
lean_dec_ref(v_ref_977_);
if (lean_obj_tag(v_authority_981_) == 0)
{
uint8_t v___x_987_; lean_object* v___y_989_; 
lean_del_object(v___x_979_);
lean_dec_ref(v_currentScheme_928_);
v___x_987_ = l_Std_Http_URI_Path_isEmpty(v_path_982_);
if (v___x_987_ == 0)
{
uint8_t v_absolute_990_; 
v_absolute_990_ = lean_ctor_get_uint8(v_path_982_, sizeof(void*)*1);
if (v_absolute_990_ == 0)
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = l_Std_Http_URI_Path_parent(v_basePath_926_);
v___x_992_ = l_Std_Http_URI_Path_join(v___x_991_, v_path_982_);
lean_dec_ref(v_path_982_);
v___y_989_ = v___x_992_;
goto v___jp_988_;
}
else
{
lean_dec_ref(v_basePath_926_);
v___y_989_ = v_path_982_;
goto v___jp_988_;
}
}
else
{
lean_dec_ref(v_path_982_);
v___y_989_ = v_basePath_926_;
goto v___jp_988_;
}
v___jp_988_:
{
if (v___x_987_ == 0)
{
v___y_985_ = v___y_989_;
v___y_986_ = v___x_987_;
goto v___jp_984_;
}
else
{
if (lean_obj_tag(v_query_983_) == 0)
{
v___y_985_ = v___y_989_;
v___y_986_ = v___x_987_;
goto v___jp_984_;
}
else
{
lean_dec(v_baseQuery_927_);
v___y_930_ = v___y_989_;
v___y_931_ = v_query_983_;
goto v___jp_929_;
}
}
}
}
else
{
lean_dec(v_baseQuery_927_);
lean_dec_ref(v_basePath_926_);
if (v_isCrossOrigin_925_ == 0)
{
lean_object* v___x_993_; lean_object* v___x_994_; 
lean_dec_ref_known(v_authority_981_, 1);
lean_del_object(v___x_979_);
lean_dec_ref(v_currentScheme_928_);
v___x_993_ = l_Std_Http_URI_Path_normalize(v_path_982_);
v___x_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
lean_ctor_set(v___x_994_, 1, v_query_983_);
return v___x_994_;
}
else
{
lean_object* v_val_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1017_; 
v_val_995_ = lean_ctor_get(v_authority_981_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_authority_981_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_997_ = v_authority_981_;
v_isShared_998_ = v_isSharedCheck_1017_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_val_995_);
lean_dec(v_authority_981_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1017_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v_host_999_; lean_object* v_port_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1015_; 
v_host_999_ = lean_ctor_get(v_val_995_, 1);
v_port_1000_ = lean_ctor_get(v_val_995_, 2);
v_isSharedCheck_1015_ = !lean_is_exclusive(v_val_995_);
if (v_isSharedCheck_1015_ == 0)
{
lean_object* v_unused_1016_; 
v_unused_1016_ = lean_ctor_get(v_val_995_, 0);
lean_dec(v_unused_1016_);
v___x_1002_ = v_val_995_;
v_isShared_1003_ = v_isSharedCheck_1015_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_port_1000_);
lean_inc(v_host_999_);
lean_dec(v_val_995_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1015_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1004_; lean_object* v_stripped_1006_; 
v___x_1004_ = lean_box(0);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 0, v___x_1004_);
v_stripped_1006_ = v___x_1002_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v___x_1004_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v_host_999_);
lean_ctor_set(v_reuseFailAlloc_1014_, 2, v_port_1000_);
v_stripped_1006_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
lean_object* v___x_1008_; 
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 0, v_stripped_1006_);
v___x_1008_ = v___x_997_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_stripped_1006_);
v___x_1008_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
lean_object* v_af_1009_; lean_object* v___x_1011_; 
v_af_1009_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_af_1009_, 0, v_currentScheme_928_);
lean_ctor_set(v_af_1009_, 1, v___x_1008_);
lean_ctor_set(v_af_1009_, 2, v_path_982_);
lean_ctor_set(v_af_1009_, 3, v_query_983_);
lean_ctor_set(v_af_1009_, 4, v___x_1004_);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 0, v_af_1009_);
v___x_1011_ = v___x_979_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_af_1009_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
}
}
}
v___jp_984_:
{
if (v___y_986_ == 0)
{
lean_dec(v_baseQuery_927_);
v___y_930_ = v___y_985_;
v___y_931_ = v_query_983_;
goto v___jp_929_;
}
else
{
lean_dec(v_query_983_);
v___y_930_ = v___y_985_;
v___y_931_ = v_baseQuery_927_;
goto v___jp_929_;
}
}
}
}
v___jp_929_:
{
lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_932_ = l_Std_Http_URI_Path_normalize(v___y_930_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_932_);
lean_ctor_set(v___x_933_, 1, v___y_931_);
return v___x_933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_rewriteTarget___boxed(lean_object* v_ref_1019_, lean_object* v_isCrossOrigin_1020_, lean_object* v_basePath_1021_, lean_object* v_baseQuery_1022_, lean_object* v_currentScheme_1023_){
_start:
{
uint8_t v_isCrossOrigin_boxed_1024_; lean_object* v_res_1025_; 
v_isCrossOrigin_boxed_1024_ = lean_unbox(v_isCrossOrigin_1020_);
v_res_1025_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_rewriteTarget(v_ref_1019_, v_isCrossOrigin_boxed_1024_, v_basePath_1021_, v_baseQuery_1022_, v_currentScheme_1023_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_decideRedirect___lam__0(lean_object* v___x_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Std_Http_URI_Parser_parseURIReference(v___x_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_pos_1032_; lean_object* v_array_1033_; lean_object* v_idx_1034_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v_pos_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_pos_1032_);
v_array_1033_ = lean_ctor_get(v_pos_1032_, 0);
v_idx_1034_ = lean_ctor_get(v_pos_1032_, 1);
v___x_1035_ = lean_byte_array_size(v_array_1033_);
v___x_1036_ = lean_nat_dec_lt(v_idx_1034_, v___x_1035_);
if (v___x_1036_ == 0)
{
lean_dec(v_pos_1032_);
return v___x_1031_;
}
else
{
lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1044_; 
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1044_ == 0)
{
lean_object* v_unused_1045_; lean_object* v_unused_1046_; 
v_unused_1045_ = lean_ctor_get(v___x_1031_, 1);
lean_dec(v_unused_1045_);
v_unused_1046_ = lean_ctor_get(v___x_1031_, 0);
lean_dec(v_unused_1046_);
v___x_1038_ = v___x_1031_;
v_isShared_1039_ = v_isSharedCheck_1044_;
goto v_resetjp_1037_;
}
else
{
lean_dec(v___x_1031_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1044_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1040_; lean_object* v___x_1042_; 
v___x_1040_ = ((lean_object*)(l_Std_Http_Protocol_H1_decideRedirect___lam__0___closed__1));
if (v_isShared_1039_ == 0)
{
lean_ctor_set_tag(v___x_1038_, 1);
lean_ctor_set(v___x_1038_, 1, v___x_1040_);
v___x_1042_ = v___x_1038_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_pos_1032_);
lean_ctor_set(v_reuseFailAlloc_1043_, 1, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
else
{
return v___x_1031_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_decideRedirect(lean_object* v_current_1059_, lean_object* v_request_1060_, uint8_t v_bodyReplayable_1061_, uint8_t v_onlySafeRedirects_1062_, uint8_t v_responseVersion_1063_, lean_object* v_status_1064_, lean_object* v_responseHeaders_1065_){
_start:
{
lean_object* v___y_1067_; lean_object* v___y_1068_; lean_object* v___y_1069_; uint8_t v___y_1070_; uint8_t v___y_1071_; lean_object* v___y_1072_; uint8_t v___y_1073_; lean_object* v___y_1081_; lean_object* v___y_1082_; lean_object* v___y_1083_; uint8_t v___y_1084_; uint8_t v___y_1085_; lean_object* v___y_1086_; lean_object* v___y_1089_; uint8_t v___y_1090_; uint8_t v___y_1091_; lean_object* v___y_1092_; lean_object* v___y_1093_; uint8_t v___y_1094_; uint8_t v___y_1095_; lean_object* v___y_1096_; lean_object* v___y_1102_; uint8_t v___y_1103_; uint8_t v___y_1104_; uint8_t v___y_1105_; lean_object* v___y_1106_; lean_object* v___y_1107_; uint8_t v___y_1108_; uint8_t v___y_1109_; lean_object* v___y_1110_; lean_object* v___y_1114_; uint8_t v___y_1115_; uint8_t v___y_1116_; uint8_t v___y_1117_; lean_object* v___y_1118_; lean_object* v___y_1119_; uint8_t v___y_1120_; uint8_t v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1126_; uint8_t v___y_1127_; uint8_t v___y_1128_; uint8_t v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; uint8_t v___y_1132_; uint8_t v___y_1133_; lean_object* v___y_1134_; uint8_t v___y_1135_; uint8_t v___y_1138_; lean_object* v___y_1139_; uint8_t v___y_1140_; uint8_t v___y_1141_; uint8_t v___y_1142_; lean_object* v___y_1143_; uint8_t v___y_1144_; uint8_t v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1149_; uint8_t v___y_1150_; uint8_t v___y_1151_; uint8_t v___y_1152_; uint8_t v___y_1153_; lean_object* v___y_1154_; uint8_t v___y_1155_; lean_object* v___y_1156_; uint8_t v___y_1157_; lean_object* v___y_1158_; uint8_t v___y_1162_; lean_object* v___y_1163_; uint8_t v___y_1164_; uint8_t v___y_1165_; uint8_t v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; uint8_t v___y_1169_; uint8_t v___y_1170_; lean_object* v___y_1171_; uint8_t v___y_1172_; uint8_t v___y_1173_; lean_object* v___y_1177_; uint8_t v___y_1178_; uint8_t v___y_1179_; uint8_t v___y_1180_; uint8_t v___y_1181_; uint8_t v___y_1182_; lean_object* v___y_1183_; uint8_t v___y_1184_; lean_object* v___y_1185_; uint8_t v___y_1186_; lean_object* v___y_1187_; uint8_t v___y_1188_; uint8_t v___y_1190_; lean_object* v___y_1191_; uint8_t v___y_1192_; uint8_t v___y_1193_; uint8_t v___y_1194_; lean_object* v___y_1195_; lean_object* v___y_1196_; uint8_t v___y_1197_; uint8_t v___y_1198_; lean_object* v___y_1199_; uint8_t v___y_1200_; lean_object* v___y_1204_; uint8_t v___y_1205_; uint8_t v___y_1206_; uint8_t v___y_1207_; uint8_t v___y_1208_; uint8_t v___y_1209_; lean_object* v___y_1210_; uint8_t v___y_1211_; lean_object* v___y_1212_; uint8_t v___y_1213_; lean_object* v___y_1214_; uint8_t v___y_1216_; lean_object* v___y_1217_; uint8_t v___y_1218_; uint8_t v___y_1219_; uint8_t v___y_1220_; uint8_t v___y_1221_; lean_object* v___y_1222_; lean_object* v___y_1223_; uint8_t v___y_1224_; uint8_t v___y_1225_; lean_object* v___y_1226_; uint8_t v___y_1227_; uint8_t v___y_1231_; lean_object* v___y_1232_; uint8_t v___y_1233_; uint8_t v___y_1234_; uint8_t v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; uint8_t v___y_1238_; uint8_t v___y_1239_; lean_object* v___y_1240_; uint8_t v___y_1241_; uint8_t v___y_1247_; lean_object* v___y_1248_; uint8_t v___y_1249_; uint8_t v___y_1250_; uint8_t v___y_1251_; lean_object* v___y_1252_; lean_object* v___y_1253_; uint8_t v___y_1254_; lean_object* v___y_1255_; uint8_t v___y_1256_; uint8_t v___y_1259_; lean_object* v___y_1260_; uint8_t v___y_1261_; uint8_t v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; uint8_t v___y_1265_; lean_object* v___y_1266_; uint8_t v___y_1267_; uint8_t v___y_1270_; lean_object* v___y_1271_; uint8_t v___y_1272_; uint8_t v___y_1273_; uint8_t v___y_1274_; lean_object* v___y_1275_; lean_object* v___y_1276_; uint8_t v___y_1277_; lean_object* v___y_1278_; uint8_t v___y_1279_; uint8_t v___y_1280_; uint8_t v___y_1287_; uint8_t v___y_1288_; uint8_t v___y_1289_; uint8_t v___y_1316_; uint8_t v___y_1317_; uint8_t v___y_1335_; uint16_t v___x_1345_; uint16_t v___x_1346_; uint8_t v___x_1347_; 
v___x_1345_ = 300;
v___x_1346_ = l_Std_Http_Status_toCode(v_status_1064_);
v___x_1347_ = lean_uint16_dec_le(v___x_1345_, v___x_1346_);
if (v___x_1347_ == 0)
{
v___y_1335_ = v___x_1347_;
goto v___jp_1334_;
}
else
{
uint16_t v___x_1348_; uint8_t v___x_1349_; 
v___x_1348_ = 400;
v___x_1349_ = lean_uint16_dec_lt(v___x_1346_, v___x_1348_);
v___y_1335_ = v___x_1349_;
goto v___jp_1334_;
}
v___jp_1066_:
{
lean_object* v_scheme_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v_rewrittenTarget_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v_scheme_1074_ = lean_ctor_get(v_current_1059_, 0);
lean_inc_ref(v_scheme_1074_);
lean_dec_ref(v_current_1059_);
v___x_1075_ = l_Std_Http_RequestTarget_pathOrRoot(v___y_1068_);
v___x_1076_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_requestTargetQuery_x3f(v___y_1068_);
v_rewrittenTarget_1077_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_rewriteTarget(v___y_1072_, v___y_1070_, v___x_1075_, v___x_1076_, v_scheme_1074_);
v___x_1078_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_1078_, 0, v___y_1067_);
lean_ctor_set(v___x_1078_, 1, v_rewrittenTarget_1077_);
lean_ctor_set(v___x_1078_, 2, v___y_1069_);
lean_ctor_set_uint8(v___x_1078_, sizeof(void*)*3, v___y_1071_);
lean_ctor_set_uint8(v___x_1078_, sizeof(void*)*3 + 1, v___y_1073_);
lean_ctor_set_uint8(v___x_1078_, sizeof(void*)*3 + 2, v___y_1070_);
v___x_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
return v___x_1079_;
}
v___jp_1080_:
{
uint8_t v___x_1087_; 
v___x_1087_ = 0;
v___y_1067_ = v___y_1081_;
v___y_1068_ = v___y_1082_;
v___y_1069_ = v___y_1083_;
v___y_1070_ = v___y_1084_;
v___y_1071_ = v___y_1085_;
v___y_1072_ = v___y_1086_;
v___y_1073_ = v___x_1087_;
goto v___jp_1066_;
}
v___jp_1088_:
{
uint8_t v___x_1097_; 
v___x_1097_ = l_Std_Http_instBEqMethod_beq(v___y_1095_, v___y_1091_);
if (v___x_1097_ == 0)
{
uint8_t v___x_1098_; uint8_t v___x_1099_; 
v___x_1098_ = 9;
v___x_1099_ = l_Std_Http_instBEqMethod_beq(v___y_1095_, v___x_1098_);
if (v___x_1099_ == 0)
{
if (v___y_1090_ == 0)
{
uint8_t v___x_1100_; 
v___x_1100_ = 1;
v___y_1067_ = v___y_1089_;
v___y_1068_ = v___y_1092_;
v___y_1069_ = v___y_1093_;
v___y_1070_ = v___y_1094_;
v___y_1071_ = v___y_1095_;
v___y_1072_ = v___y_1096_;
v___y_1073_ = v___x_1100_;
goto v___jp_1066_;
}
else
{
v___y_1081_ = v___y_1089_;
v___y_1082_ = v___y_1092_;
v___y_1083_ = v___y_1093_;
v___y_1084_ = v___y_1094_;
v___y_1085_ = v___y_1095_;
v___y_1086_ = v___y_1096_;
goto v___jp_1080_;
}
}
else
{
v___y_1081_ = v___y_1089_;
v___y_1082_ = v___y_1092_;
v___y_1083_ = v___y_1093_;
v___y_1084_ = v___y_1094_;
v___y_1085_ = v___y_1095_;
v___y_1086_ = v___y_1096_;
goto v___jp_1080_;
}
}
else
{
v___y_1081_ = v___y_1089_;
v___y_1082_ = v___y_1092_;
v___y_1083_ = v___y_1093_;
v___y_1084_ = v___y_1094_;
v___y_1085_ = v___y_1095_;
v___y_1086_ = v___y_1096_;
goto v___jp_1080_;
}
}
v___jp_1101_:
{
if (v_bodyReplayable_1061_ == 0)
{
lean_object* v___x_1111_; 
lean_dec_ref(v___y_1110_);
lean_dec_ref(v___y_1107_);
lean_dec_ref(v___y_1102_);
lean_dec_ref(v_current_1059_);
v___x_1111_ = lean_box(0);
return v___x_1111_;
}
else
{
if (v___y_1104_ == 0)
{
v___y_1089_ = v___y_1102_;
v___y_1090_ = v___y_1103_;
v___y_1091_ = v___y_1105_;
v___y_1092_ = v___y_1106_;
v___y_1093_ = v___y_1107_;
v___y_1094_ = v___y_1108_;
v___y_1095_ = v___y_1109_;
v___y_1096_ = v___y_1110_;
goto v___jp_1088_;
}
else
{
lean_object* v___x_1112_; 
lean_dec_ref(v___y_1110_);
lean_dec_ref(v___y_1107_);
lean_dec_ref(v___y_1102_);
lean_dec_ref(v_current_1059_);
v___x_1112_ = lean_box(0);
return v___x_1112_;
}
}
}
v___jp_1113_:
{
uint8_t v___x_1123_; uint8_t v___x_1124_; 
v___x_1123_ = 9;
v___x_1124_ = l_Std_Http_instBEqMethod_beq(v___y_1121_, v___x_1123_);
if (v___x_1124_ == 0)
{
v___y_1102_ = v___y_1114_;
v___y_1103_ = v___y_1115_;
v___y_1104_ = v___y_1116_;
v___y_1105_ = v___y_1117_;
v___y_1106_ = v___y_1118_;
v___y_1107_ = v___y_1119_;
v___y_1108_ = v___y_1120_;
v___y_1109_ = v___y_1121_;
v___y_1110_ = v___y_1122_;
goto v___jp_1101_;
}
else
{
if (v___y_1116_ == 0)
{
v___y_1089_ = v___y_1114_;
v___y_1090_ = v___y_1115_;
v___y_1091_ = v___y_1117_;
v___y_1092_ = v___y_1118_;
v___y_1093_ = v___y_1119_;
v___y_1094_ = v___y_1120_;
v___y_1095_ = v___y_1121_;
v___y_1096_ = v___y_1122_;
goto v___jp_1088_;
}
else
{
v___y_1102_ = v___y_1114_;
v___y_1103_ = v___y_1115_;
v___y_1104_ = v___y_1116_;
v___y_1105_ = v___y_1117_;
v___y_1106_ = v___y_1118_;
v___y_1107_ = v___y_1119_;
v___y_1108_ = v___y_1120_;
v___y_1109_ = v___y_1121_;
v___y_1110_ = v___y_1122_;
goto v___jp_1101_;
}
}
}
v___jp_1125_:
{
if (v___y_1135_ == 0)
{
v___y_1089_ = v___y_1126_;
v___y_1090_ = v___y_1127_;
v___y_1091_ = v___y_1129_;
v___y_1092_ = v___y_1130_;
v___y_1093_ = v___y_1131_;
v___y_1094_ = v___y_1132_;
v___y_1095_ = v___y_1133_;
v___y_1096_ = v___y_1134_;
goto v___jp_1088_;
}
else
{
uint8_t v___x_1136_; 
v___x_1136_ = l_Std_Http_instBEqMethod_beq(v___y_1133_, v___y_1129_);
if (v___x_1136_ == 0)
{
v___y_1114_ = v___y_1126_;
v___y_1115_ = v___y_1127_;
v___y_1116_ = v___y_1128_;
v___y_1117_ = v___y_1129_;
v___y_1118_ = v___y_1130_;
v___y_1119_ = v___y_1131_;
v___y_1120_ = v___y_1132_;
v___y_1121_ = v___y_1133_;
v___y_1122_ = v___y_1134_;
goto v___jp_1113_;
}
else
{
if (v___y_1128_ == 0)
{
v___y_1089_ = v___y_1126_;
v___y_1090_ = v___y_1127_;
v___y_1091_ = v___y_1129_;
v___y_1092_ = v___y_1130_;
v___y_1093_ = v___y_1131_;
v___y_1094_ = v___y_1132_;
v___y_1095_ = v___y_1133_;
v___y_1096_ = v___y_1134_;
goto v___jp_1088_;
}
else
{
v___y_1114_ = v___y_1126_;
v___y_1115_ = v___y_1127_;
v___y_1116_ = v___y_1128_;
v___y_1117_ = v___y_1129_;
v___y_1118_ = v___y_1130_;
v___y_1119_ = v___y_1131_;
v___y_1120_ = v___y_1132_;
v___y_1121_ = v___y_1133_;
v___y_1122_ = v___y_1134_;
goto v___jp_1113_;
}
}
}
}
v___jp_1137_:
{
if (v___y_1140_ == 0)
{
v___y_1126_ = v___y_1139_;
v___y_1127_ = v___y_1140_;
v___y_1128_ = v___y_1141_;
v___y_1129_ = v___y_1142_;
v___y_1130_ = v___y_1143_;
v___y_1131_ = v___y_1147_;
v___y_1132_ = v___y_1144_;
v___y_1133_ = v___y_1145_;
v___y_1134_ = v___y_1146_;
v___y_1135_ = v___y_1138_;
goto v___jp_1125_;
}
else
{
v___y_1126_ = v___y_1139_;
v___y_1127_ = v___y_1140_;
v___y_1128_ = v___y_1141_;
v___y_1129_ = v___y_1142_;
v___y_1130_ = v___y_1143_;
v___y_1131_ = v___y_1147_;
v___y_1132_ = v___y_1144_;
v___y_1133_ = v___y_1145_;
v___y_1134_ = v___y_1146_;
v___y_1135_ = v___y_1141_;
goto v___jp_1125_;
}
}
v___jp_1148_:
{
lean_object* v_scrubbed_1159_; 
v_scrubbed_1159_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_scrubHeaders(v___y_1156_, v___y_1155_, v___y_1151_);
if (v___y_1155_ == 0)
{
v___y_1138_ = v___y_1150_;
v___y_1139_ = v___y_1149_;
v___y_1140_ = v___y_1151_;
v___y_1141_ = v___y_1152_;
v___y_1142_ = v___y_1153_;
v___y_1143_ = v___y_1154_;
v___y_1144_ = v___y_1155_;
v___y_1145_ = v___y_1157_;
v___y_1146_ = v___y_1158_;
v___y_1147_ = v_scrubbed_1159_;
goto v___jp_1137_;
}
else
{
lean_object* v___x_1160_; 
lean_inc_ref(v___y_1149_);
v___x_1160_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_rewriteHostHeader(v_scrubbed_1159_, v___y_1149_);
v___y_1138_ = v___y_1150_;
v___y_1139_ = v___y_1149_;
v___y_1140_ = v___y_1151_;
v___y_1141_ = v___y_1152_;
v___y_1142_ = v___y_1153_;
v___y_1143_ = v___y_1154_;
v___y_1144_ = v___y_1155_;
v___y_1145_ = v___y_1157_;
v___y_1146_ = v___y_1158_;
v___y_1147_ = v___x_1160_;
goto v___jp_1137_;
}
}
v___jp_1161_:
{
if (v___y_1173_ == 0)
{
v___y_1149_ = v___y_1163_;
v___y_1150_ = v___y_1162_;
v___y_1151_ = v___y_1164_;
v___y_1152_ = v___y_1165_;
v___y_1153_ = v___y_1166_;
v___y_1154_ = v___y_1167_;
v___y_1155_ = v___y_1169_;
v___y_1156_ = v___y_1168_;
v___y_1157_ = v___y_1170_;
v___y_1158_ = v___y_1171_;
goto v___jp_1148_;
}
else
{
if (v___y_1172_ == 0)
{
lean_object* v___x_1174_; 
lean_dec_ref(v___y_1171_);
lean_dec_ref(v___y_1163_);
lean_dec_ref(v_current_1059_);
v___x_1174_ = lean_box(0);
return v___x_1174_;
}
else
{
if (v___y_1165_ == 0)
{
v___y_1149_ = v___y_1163_;
v___y_1150_ = v___y_1162_;
v___y_1151_ = v___y_1164_;
v___y_1152_ = v___y_1165_;
v___y_1153_ = v___y_1166_;
v___y_1154_ = v___y_1167_;
v___y_1155_ = v___y_1169_;
v___y_1156_ = v___y_1168_;
v___y_1157_ = v___y_1170_;
v___y_1158_ = v___y_1171_;
goto v___jp_1148_;
}
else
{
lean_object* v___x_1175_; 
lean_dec_ref(v___y_1171_);
lean_dec_ref(v___y_1163_);
lean_dec_ref(v_current_1059_);
v___x_1175_ = lean_box(0);
return v___x_1175_;
}
}
}
}
v___jp_1176_:
{
if (v___y_1181_ == 0)
{
v___y_1162_ = v___y_1178_;
v___y_1163_ = v___y_1177_;
v___y_1164_ = v___y_1179_;
v___y_1165_ = v___y_1180_;
v___y_1166_ = v___y_1182_;
v___y_1167_ = v___y_1183_;
v___y_1168_ = v___y_1185_;
v___y_1169_ = v___y_1184_;
v___y_1170_ = v___y_1186_;
v___y_1171_ = v___y_1187_;
v___y_1172_ = v___y_1188_;
v___y_1173_ = v___y_1178_;
goto v___jp_1161_;
}
else
{
v___y_1162_ = v___y_1178_;
v___y_1163_ = v___y_1177_;
v___y_1164_ = v___y_1179_;
v___y_1165_ = v___y_1180_;
v___y_1166_ = v___y_1182_;
v___y_1167_ = v___y_1183_;
v___y_1168_ = v___y_1185_;
v___y_1169_ = v___y_1184_;
v___y_1170_ = v___y_1186_;
v___y_1171_ = v___y_1187_;
v___y_1172_ = v___y_1188_;
v___y_1173_ = v___y_1180_;
goto v___jp_1161_;
}
}
v___jp_1189_:
{
if (v___y_1200_ == 0)
{
v___y_1149_ = v___y_1191_;
v___y_1150_ = v___y_1190_;
v___y_1151_ = v___y_1192_;
v___y_1152_ = v___y_1193_;
v___y_1153_ = v___y_1194_;
v___y_1154_ = v___y_1195_;
v___y_1155_ = v___y_1197_;
v___y_1156_ = v___y_1196_;
v___y_1157_ = v___y_1198_;
v___y_1158_ = v___y_1199_;
goto v___jp_1148_;
}
else
{
if (v_bodyReplayable_1061_ == 0)
{
lean_object* v___x_1201_; 
lean_dec_ref(v___y_1199_);
lean_dec_ref(v___y_1191_);
lean_dec_ref(v_current_1059_);
v___x_1201_ = lean_box(0);
return v___x_1201_;
}
else
{
if (v___y_1193_ == 0)
{
v___y_1149_ = v___y_1191_;
v___y_1150_ = v___y_1190_;
v___y_1151_ = v___y_1192_;
v___y_1152_ = v___y_1193_;
v___y_1153_ = v___y_1194_;
v___y_1154_ = v___y_1195_;
v___y_1155_ = v___y_1197_;
v___y_1156_ = v___y_1196_;
v___y_1157_ = v___y_1198_;
v___y_1158_ = v___y_1199_;
goto v___jp_1148_;
}
else
{
lean_object* v___x_1202_; 
lean_dec_ref(v___y_1199_);
lean_dec_ref(v___y_1191_);
lean_dec_ref(v_current_1059_);
v___x_1202_ = lean_box(0);
return v___x_1202_;
}
}
}
}
v___jp_1203_:
{
if (v___y_1208_ == 0)
{
v___y_1190_ = v___y_1205_;
v___y_1191_ = v___y_1204_;
v___y_1192_ = v___y_1206_;
v___y_1193_ = v___y_1207_;
v___y_1194_ = v___y_1209_;
v___y_1195_ = v___y_1210_;
v___y_1196_ = v___y_1212_;
v___y_1197_ = v___y_1211_;
v___y_1198_ = v___y_1213_;
v___y_1199_ = v___y_1214_;
v___y_1200_ = v___y_1205_;
goto v___jp_1189_;
}
else
{
v___y_1190_ = v___y_1205_;
v___y_1191_ = v___y_1204_;
v___y_1192_ = v___y_1206_;
v___y_1193_ = v___y_1207_;
v___y_1194_ = v___y_1209_;
v___y_1195_ = v___y_1210_;
v___y_1196_ = v___y_1212_;
v___y_1197_ = v___y_1211_;
v___y_1198_ = v___y_1213_;
v___y_1199_ = v___y_1214_;
v___y_1200_ = v___y_1207_;
goto v___jp_1189_;
}
}
v___jp_1215_:
{
uint8_t v___x_1228_; uint8_t v_isPost_1229_; 
v___x_1228_ = 23;
v_isPost_1229_ = l_Std_Http_instBEqMethod_beq(v___y_1218_, v___x_1228_);
switch(lean_obj_tag(v_status_1064_))
{
case 15:
{
v___y_1177_ = v___y_1217_;
v___y_1178_ = v___y_1216_;
v___y_1179_ = v___y_1219_;
v___y_1180_ = v___y_1220_;
v___y_1181_ = v___y_1227_;
v___y_1182_ = v___y_1221_;
v___y_1183_ = v___y_1222_;
v___y_1184_ = v___y_1224_;
v___y_1185_ = v___y_1223_;
v___y_1186_ = v___y_1225_;
v___y_1187_ = v___y_1226_;
v___y_1188_ = v_isPost_1229_;
goto v___jp_1176_;
}
case 16:
{
v___y_1177_ = v___y_1217_;
v___y_1178_ = v___y_1216_;
v___y_1179_ = v___y_1219_;
v___y_1180_ = v___y_1220_;
v___y_1181_ = v___y_1227_;
v___y_1182_ = v___y_1221_;
v___y_1183_ = v___y_1222_;
v___y_1184_ = v___y_1224_;
v___y_1185_ = v___y_1223_;
v___y_1186_ = v___y_1225_;
v___y_1187_ = v___y_1226_;
v___y_1188_ = v_isPost_1229_;
goto v___jp_1176_;
}
case 21:
{
v___y_1204_ = v___y_1217_;
v___y_1205_ = v___y_1216_;
v___y_1206_ = v___y_1219_;
v___y_1207_ = v___y_1220_;
v___y_1208_ = v___y_1227_;
v___y_1209_ = v___y_1221_;
v___y_1210_ = v___y_1222_;
v___y_1211_ = v___y_1224_;
v___y_1212_ = v___y_1223_;
v___y_1213_ = v___y_1225_;
v___y_1214_ = v___y_1226_;
goto v___jp_1203_;
}
case 22:
{
v___y_1204_ = v___y_1217_;
v___y_1205_ = v___y_1216_;
v___y_1206_ = v___y_1219_;
v___y_1207_ = v___y_1220_;
v___y_1208_ = v___y_1227_;
v___y_1209_ = v___y_1221_;
v___y_1210_ = v___y_1222_;
v___y_1211_ = v___y_1224_;
v___y_1212_ = v___y_1223_;
v___y_1213_ = v___y_1225_;
v___y_1214_ = v___y_1226_;
goto v___jp_1203_;
}
default: 
{
v___y_1149_ = v___y_1217_;
v___y_1150_ = v___y_1216_;
v___y_1151_ = v___y_1219_;
v___y_1152_ = v___y_1220_;
v___y_1153_ = v___y_1221_;
v___y_1154_ = v___y_1222_;
v___y_1155_ = v___y_1224_;
v___y_1156_ = v___y_1223_;
v___y_1157_ = v___y_1225_;
v___y_1158_ = v___y_1226_;
goto v___jp_1148_;
}
}
}
v___jp_1230_:
{
uint8_t v___x_1242_; uint8_t v___x_1243_; 
v___x_1242_ = 8;
v___x_1243_ = l_Std_Http_instBEqMethod_beq(v___y_1234_, v___x_1242_);
if (v___x_1243_ == 0)
{
uint8_t v___x_1244_; uint8_t v___x_1245_; 
v___x_1244_ = 9;
v___x_1245_ = l_Std_Http_instBEqMethod_beq(v___y_1234_, v___x_1244_);
v___y_1216_ = v___y_1233_;
v___y_1217_ = v___y_1232_;
v___y_1218_ = v___y_1234_;
v___y_1219_ = v___y_1241_;
v___y_1220_ = v___y_1235_;
v___y_1221_ = v___x_1242_;
v___y_1222_ = v___y_1236_;
v___y_1223_ = v___y_1237_;
v___y_1224_ = v___y_1238_;
v___y_1225_ = v___y_1239_;
v___y_1226_ = v___y_1240_;
v___y_1227_ = v___x_1245_;
goto v___jp_1215_;
}
else
{
v___y_1216_ = v___y_1233_;
v___y_1217_ = v___y_1232_;
v___y_1218_ = v___y_1234_;
v___y_1219_ = v___y_1241_;
v___y_1220_ = v___y_1235_;
v___y_1221_ = v___x_1242_;
v___y_1222_ = v___y_1236_;
v___y_1223_ = v___y_1237_;
v___y_1224_ = v___y_1238_;
v___y_1225_ = v___y_1239_;
v___y_1226_ = v___y_1240_;
v___y_1227_ = v___y_1231_;
goto v___jp_1215_;
}
}
v___jp_1246_:
{
uint8_t v___x_1257_; 
v___x_1257_ = l_Std_Http_instBEqMethod_beq(v___y_1254_, v___y_1250_);
if (v___x_1257_ == 0)
{
v___y_1231_ = v___y_1249_;
v___y_1232_ = v___y_1248_;
v___y_1233_ = v___y_1247_;
v___y_1234_ = v___y_1250_;
v___y_1235_ = v___y_1251_;
v___y_1236_ = v___y_1252_;
v___y_1237_ = v___y_1253_;
v___y_1238_ = v___y_1256_;
v___y_1239_ = v___y_1254_;
v___y_1240_ = v___y_1255_;
v___y_1241_ = v___y_1247_;
goto v___jp_1230_;
}
else
{
v___y_1231_ = v___y_1249_;
v___y_1232_ = v___y_1248_;
v___y_1233_ = v___y_1247_;
v___y_1234_ = v___y_1250_;
v___y_1235_ = v___y_1251_;
v___y_1236_ = v___y_1252_;
v___y_1237_ = v___y_1253_;
v___y_1238_ = v___y_1256_;
v___y_1239_ = v___y_1254_;
v___y_1240_ = v___y_1255_;
v___y_1241_ = v___y_1251_;
goto v___jp_1230_;
}
}
v___jp_1258_:
{
uint8_t v___x_1268_; 
v___x_1268_ = l_Std_Http_URI_instBEqOrigin_beq(v___y_1260_, v_current_1059_);
if (v___x_1268_ == 0)
{
v___y_1247_ = v___y_1261_;
v___y_1248_ = v___y_1260_;
v___y_1249_ = v___y_1259_;
v___y_1250_ = v___y_1262_;
v___y_1251_ = v___y_1267_;
v___y_1252_ = v___y_1263_;
v___y_1253_ = v___y_1264_;
v___y_1254_ = v___y_1265_;
v___y_1255_ = v___y_1266_;
v___y_1256_ = v___y_1261_;
goto v___jp_1246_;
}
else
{
v___y_1247_ = v___y_1261_;
v___y_1248_ = v___y_1260_;
v___y_1249_ = v___y_1259_;
v___y_1250_ = v___y_1262_;
v___y_1251_ = v___y_1267_;
v___y_1252_ = v___y_1263_;
v___y_1253_ = v___y_1264_;
v___y_1254_ = v___y_1265_;
v___y_1255_ = v___y_1266_;
v___y_1256_ = v___y_1267_;
goto v___jp_1246_;
}
}
v___jp_1269_:
{
if (v___y_1280_ == 0)
{
v___y_1259_ = v___y_1272_;
v___y_1260_ = v___y_1271_;
v___y_1261_ = v___y_1270_;
v___y_1262_ = v___y_1273_;
v___y_1263_ = v___y_1275_;
v___y_1264_ = v___y_1276_;
v___y_1265_ = v___y_1277_;
v___y_1266_ = v___y_1278_;
v___y_1267_ = v___y_1279_;
goto v___jp_1258_;
}
else
{
lean_object* v_scheme_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; 
v_scheme_1281_ = lean_ctor_get(v___y_1271_, 0);
v___x_1282_ = ((lean_object*)(l_Std_Http_Protocol_H1_decideRedirect___closed__0));
v___x_1283_ = lean_string_dec_eq(v_scheme_1281_, v___x_1282_);
if (v___x_1283_ == 0)
{
lean_object* v___x_1284_; 
lean_dec_ref(v___y_1278_);
lean_dec_ref(v___y_1271_);
lean_dec_ref(v_current_1059_);
v___x_1284_ = lean_box(0);
return v___x_1284_;
}
else
{
if (v___y_1274_ == 0)
{
v___y_1259_ = v___y_1272_;
v___y_1260_ = v___y_1271_;
v___y_1261_ = v___y_1270_;
v___y_1262_ = v___y_1273_;
v___y_1263_ = v___y_1275_;
v___y_1264_ = v___y_1276_;
v___y_1265_ = v___y_1277_;
v___y_1266_ = v___y_1278_;
v___y_1267_ = v___y_1274_;
goto v___jp_1258_;
}
else
{
lean_object* v___x_1285_; 
lean_dec_ref(v___y_1278_);
lean_dec_ref(v___y_1271_);
lean_dec_ref(v_current_1059_);
v___x_1285_ = lean_box(0);
return v___x_1285_;
}
}
}
}
v___jp_1286_:
{
lean_object* v_entries_1290_; lean_object* v_indexes_1291_; lean_object* v___x_1292_; uint8_t v___x_1293_; 
v_entries_1290_ = lean_ctor_get(v_responseHeaders_1065_, 0);
v_indexes_1291_ = lean_ctor_get(v_responseHeaders_1065_, 1);
v___x_1292_ = l_Std_Http_Header_Name_location;
v___x_1293_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__1___redArg(v_indexes_1291_, v___x_1292_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; 
lean_dec_ref(v_current_1059_);
v___x_1294_ = lean_box(0);
return v___x_1294_;
}
else
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v_entry_1297_; lean_object* v___x_1298_; lean_object* v_snd_1299_; lean_object* v___f_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1295_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_nominatedConnectionHeaders_spec__2___redArg(v_indexes_1291_, v___x_1292_);
v___x_1296_ = lean_unsigned_to_nat(0u);
v_entry_1297_ = lean_array_fget(v___x_1295_, v___x_1296_);
lean_dec(v___x_1295_);
v___x_1298_ = lean_array_fget_borrowed(v_entries_1290_, v_entry_1297_);
lean_dec(v_entry_1297_);
v_snd_1299_ = lean_ctor_get(v___x_1298_, 1);
v___f_1300_ = ((lean_object*)(l_Std_Http_Protocol_H1_decideRedirect___closed__2));
v___x_1301_ = lean_string_to_utf8(v_snd_1299_);
v___x_1302_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___f_1300_, v___x_1301_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v___x_1303_; 
lean_dec_ref_known(v___x_1302_, 1);
lean_dec_ref(v_current_1059_);
v___x_1303_ = lean_box(0);
return v___x_1303_;
}
else
{
lean_object* v_a_1304_; lean_object* v___x_1305_; 
v_a_1304_ = lean_ctor_get(v___x_1302_, 0);
lean_inc_n(v_a_1304_, 2);
lean_dec_ref_known(v___x_1302_, 1);
lean_inc_ref(v_current_1059_);
v___x_1305_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resolveOrigin(v_current_1059_, v_a_1304_);
if (lean_obj_tag(v___x_1305_) == 1)
{
lean_object* v_val_1306_; uint8_t v_method_1307_; lean_object* v_uri_1308_; lean_object* v_headers_1309_; lean_object* v_scheme_1310_; uint8_t v_newMethod_1311_; lean_object* v___x_1312_; uint8_t v___x_1313_; 
v_val_1306_ = lean_ctor_get(v___x_1305_, 0);
lean_inc(v_val_1306_);
lean_dec_ref_known(v___x_1305_, 1);
v_method_1307_ = lean_ctor_get_uint8(v_request_1060_, sizeof(void*)*2);
v_uri_1308_ = lean_ctor_get(v_request_1060_, 0);
v_headers_1309_ = lean_ctor_get(v_request_1060_, 1);
v_scheme_1310_ = lean_ctor_get(v_val_1306_, 0);
v_newMethod_1311_ = l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_chooseMethod(v_method_1307_, v_responseVersion_1063_, v_status_1064_);
v___x_1312_ = ((lean_object*)(l_Std_Http_Protocol_H1_decideRedirect___closed__3));
v___x_1313_ = lean_string_dec_eq(v_scheme_1310_, v___x_1312_);
if (v___x_1313_ == 0)
{
v___y_1270_ = v___x_1293_;
v___y_1271_ = v_val_1306_;
v___y_1272_ = v___y_1287_;
v___y_1273_ = v_method_1307_;
v___y_1274_ = v___y_1289_;
v___y_1275_ = v_uri_1308_;
v___y_1276_ = v_headers_1309_;
v___y_1277_ = v_newMethod_1311_;
v___y_1278_ = v_a_1304_;
v___y_1279_ = v___y_1288_;
v___y_1280_ = v___x_1293_;
goto v___jp_1269_;
}
else
{
v___y_1270_ = v___x_1293_;
v___y_1271_ = v_val_1306_;
v___y_1272_ = v___y_1287_;
v___y_1273_ = v_method_1307_;
v___y_1274_ = v___y_1289_;
v___y_1275_ = v_uri_1308_;
v___y_1276_ = v_headers_1309_;
v___y_1277_ = v_newMethod_1311_;
v___y_1278_ = v_a_1304_;
v___y_1279_ = v___y_1288_;
v___y_1280_ = v___y_1289_;
goto v___jp_1269_;
}
}
else
{
lean_object* v___x_1314_; 
lean_dec(v___x_1305_);
lean_dec(v_a_1304_);
lean_dec_ref(v_current_1059_);
v___x_1314_ = lean_box(0);
return v___x_1314_;
}
}
}
}
v___jp_1315_:
{
lean_object* v___x_1318_; uint8_t v___x_1319_; 
v___x_1318_ = lean_box(19);
v___x_1319_ = l_Std_Http_instBEqStatus_beq(v_status_1064_, v___x_1318_);
if (v___x_1319_ == 0)
{
lean_object* v___x_1320_; uint8_t v___x_1321_; 
v___x_1320_ = lean_box(20);
v___x_1321_ = l_Std_Http_instBEqStatus_beq(v_status_1064_, v___x_1320_);
if (v___x_1321_ == 0)
{
lean_object* v___x_1322_; uint8_t v___x_1323_; 
v___x_1322_ = lean_box(18);
v___x_1323_ = l_Std_Http_instBEqStatus_beq(v_status_1064_, v___x_1322_);
if (v___x_1323_ == 0)
{
lean_object* v___x_1324_; uint8_t v___x_1325_; 
v___x_1324_ = lean_box(14);
v___x_1325_ = l_Std_Http_instBEqStatus_beq(v_status_1064_, v___x_1324_);
if (v___x_1325_ == 0)
{
if (v_onlySafeRedirects_1062_ == 0)
{
v___y_1287_ = v___y_1316_;
v___y_1288_ = v___y_1317_;
v___y_1289_ = v___y_1317_;
goto v___jp_1286_;
}
else
{
uint8_t v_method_1326_; uint8_t v___x_1327_; 
v_method_1326_ = lean_ctor_get_uint8(v_request_1060_, sizeof(void*)*2);
v___x_1327_ = l_Std_Http_Method_isSafe(v_method_1326_);
if (v___x_1327_ == 0)
{
lean_object* v___x_1328_; 
lean_dec_ref(v_current_1059_);
v___x_1328_ = lean_box(0);
return v___x_1328_;
}
else
{
if (v___x_1325_ == 0)
{
v___y_1287_ = v___y_1316_;
v___y_1288_ = v___y_1317_;
v___y_1289_ = v___x_1325_;
goto v___jp_1286_;
}
else
{
lean_object* v___x_1329_; 
lean_dec_ref(v_current_1059_);
v___x_1329_ = lean_box(0);
return v___x_1329_;
}
}
}
}
else
{
lean_object* v___x_1330_; 
lean_dec_ref(v_current_1059_);
v___x_1330_ = lean_box(0);
return v___x_1330_;
}
}
else
{
lean_object* v___x_1331_; 
lean_dec_ref(v_current_1059_);
v___x_1331_ = lean_box(0);
return v___x_1331_;
}
}
else
{
lean_object* v___x_1332_; 
lean_dec_ref(v_current_1059_);
v___x_1332_ = lean_box(0);
return v___x_1332_;
}
}
else
{
lean_object* v___x_1333_; 
lean_dec_ref(v_current_1059_);
v___x_1333_ = lean_box(0);
return v___x_1333_;
}
}
v___jp_1334_:
{
if (v___y_1335_ == 0)
{
lean_object* v___x_1336_; 
lean_dec_ref(v_current_1059_);
v___x_1336_ = lean_box(0);
return v___x_1336_;
}
else
{
uint8_t v___x_1337_; uint8_t v___x_1338_; uint8_t v___x_1339_; 
v___x_1337_ = 0;
v___x_1338_ = 0;
v___x_1339_ = l_Std_Http_instBEqVersion_beq(v_responseVersion_1063_, v___x_1338_);
if (v___x_1339_ == 0)
{
v___y_1316_ = v___y_1335_;
v___y_1317_ = v___x_1337_;
goto v___jp_1315_;
}
else
{
lean_object* v___x_1340_; uint8_t v___x_1341_; 
v___x_1340_ = lean_box(15);
v___x_1341_ = l_Std_Http_instBEqStatus_beq(v_status_1064_, v___x_1340_);
if (v___x_1341_ == 0)
{
if (v___x_1339_ == 0)
{
v___y_1316_ = v___y_1335_;
v___y_1317_ = v___x_1337_;
goto v___jp_1315_;
}
else
{
lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1342_ = lean_box(16);
v___x_1343_ = l_Std_Http_instBEqStatus_beq(v_status_1064_, v___x_1342_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; 
lean_dec_ref(v_current_1059_);
v___x_1344_ = lean_box(0);
return v___x_1344_;
}
else
{
v___y_1316_ = v___y_1335_;
v___y_1317_ = v___x_1337_;
goto v___jp_1315_;
}
}
}
else
{
v___y_1316_ = v___y_1335_;
v___y_1317_ = v___x_1337_;
goto v___jp_1315_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_decideRedirect___boxed(lean_object* v_current_1350_, lean_object* v_request_1351_, lean_object* v_bodyReplayable_1352_, lean_object* v_onlySafeRedirects_1353_, lean_object* v_responseVersion_1354_, lean_object* v_status_1355_, lean_object* v_responseHeaders_1356_){
_start:
{
uint8_t v_bodyReplayable_boxed_1357_; uint8_t v_onlySafeRedirects_boxed_1358_; uint8_t v_responseVersion_boxed_1359_; lean_object* v_res_1360_; 
v_bodyReplayable_boxed_1357_ = lean_unbox(v_bodyReplayable_1352_);
v_onlySafeRedirects_boxed_1358_ = lean_unbox(v_onlySafeRedirects_1353_);
v_responseVersion_boxed_1359_ = lean_unbox(v_responseVersion_1354_);
v_res_1360_ = l_Std_Http_Protocol_H1_decideRedirect(v_current_1350_, v_request_1351_, v_bodyReplayable_boxed_1357_, v_onlySafeRedirects_boxed_1358_, v_responseVersion_boxed_1359_, v_status_1355_, v_responseHeaders_1356_);
lean_dec_ref(v_responseHeaders_1356_);
lean_dec(v_status_1355_);
lean_dec_ref(v_request_1351_);
return v_res_1360_;
}
}
lean_object* runtime_initialize_Std_Http_Data_Request(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Status(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Protocol_H1_Redirect(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Status(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_Protocol_H1_instInhabitedRedirectBodyAction_default = _init_l_Std_Http_Protocol_H1_instInhabitedRedirectBodyAction_default();
l_Std_Http_Protocol_H1_instInhabitedRedirectBodyAction = _init_l_Std_Http_Protocol_H1_instInhabitedRedirectBodyAction();
l_Std_Http_Protocol_H1_instInhabitedRedirectOutcome_default = _init_l_Std_Http_Protocol_H1_instInhabitedRedirectOutcome_default();
lean_mark_persistent(l_Std_Http_Protocol_H1_instInhabitedRedirectOutcome_default);
l_Std_Http_Protocol_H1_instInhabitedRedirectOutcome = _init_l_Std_Http_Protocol_H1_instInhabitedRedirectOutcome();
lean_mark_persistent(l_Std_Http_Protocol_H1_instInhabitedRedirectOutcome);
l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders = _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders();
lean_mark_persistent(l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_connectionHeaders);
l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders = _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders();
lean_mark_persistent(l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_clientProxyHeaders);
l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders = _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders();
lean_mark_persistent(l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_originHeaders);
l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders = _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders();
lean_mark_persistent(l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_validatingHeaders);
l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders = _init_l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders();
lean_mark_persistent(l___private_Std_Http_Protocol_H1_Redirect_0__Std_Http_Protocol_H1_RedirectPlan_resourceSpecificHeaders);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Protocol_H1_Redirect(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Data_Request(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Status(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Protocol_H1_Redirect(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Status(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Protocol_H1_Redirect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Protocol_H1_Redirect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Protocol_H1_Redirect(builtin);
}
#ifdef __cplusplus
}
#endif

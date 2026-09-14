// Lean compiler output
// Module: Lean.Data.Json.Printer
// Imports: public import Lean.Data.Format public import Lean.Data.Json.Basic import Init.Data.String.Search import Init.Data.UInt.Lemmas import Init.Omega
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
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint32_t l_Nat_digitChar(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_JsonNumber_toString(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
static const lean_sarray_object l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_sarray_object) + 256, .m_other = 1, .m_tag = 248}, .m_size = 256, .m_capacity = 256, .m_data = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
static const lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeTable___closed__0 = (const lean_object*)&l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeTable___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeTable = (const lean_object*)&l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeTable___closed__0_value;
static const lean_string_object l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\u"};
static const lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__0 = (const lean_object*)&l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__0_value;
static const lean_string_object l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\r"};
static const lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__1 = (const lean_object*)&l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__1_value;
static const lean_string_object l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\n"};
static const lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__2 = (const lean_object*)&l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__2_value;
static const lean_string_object l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\\\"};
static const lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__3 = (const lean_object*)&l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__3_value;
static const lean_string_object l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\\\""};
static const lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__4 = (const lean_object*)&l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_escape___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_escape___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_escape(lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_renderString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_Lean_Json_renderString___closed__0 = (const lean_object*)&l_Lean_Json_renderString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_renderString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Json_render_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Json_render_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Json_render_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_render___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Json_render___closed__0 = (const lean_object*)&l_Lean_Json_render___closed__0_value;
static const lean_ctor_object l_Lean_Json_render___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_render___closed__0_value)}};
static const lean_object* l_Lean_Json_render___closed__1 = (const lean_object*)&l_Lean_Json_render___closed__1_value;
static const lean_string_object l_Lean_Json_render___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Json_render___closed__2 = (const lean_object*)&l_Lean_Json_render___closed__2_value;
static const lean_ctor_object l_Lean_Json_render___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_render___closed__2_value)}};
static const lean_object* l_Lean_Json_render___closed__3 = (const lean_object*)&l_Lean_Json_render___closed__3_value;
static const lean_string_object l_Lean_Json_render___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Json_render___closed__4 = (const lean_object*)&l_Lean_Json_render___closed__4_value;
static const lean_ctor_object l_Lean_Json_render___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_render___closed__4_value)}};
static const lean_object* l_Lean_Json_render___closed__5 = (const lean_object*)&l_Lean_Json_render___closed__5_value;
static const lean_string_object l_Lean_Json_render___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Json_render___closed__6 = (const lean_object*)&l_Lean_Json_render___closed__6_value;
static const lean_ctor_object l_Lean_Json_render___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_render___closed__6_value)}};
static const lean_object* l_Lean_Json_render___closed__7 = (const lean_object*)&l_Lean_Json_render___closed__7_value;
static const lean_ctor_object l_Lean_Json_render___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Json_render___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Json_render___closed__8 = (const lean_object*)&l_Lean_Json_render___closed__8_value;
static const lean_string_object l_Lean_Json_render___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Json_render___closed__9 = (const lean_object*)&l_Lean_Json_render___closed__9_value;
static lean_once_cell_t l_Lean_Json_render___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json_render___closed__11;
static lean_once_cell_t l_Lean_Json_render___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json_render___closed__12;
static const lean_ctor_object l_Lean_Json_render___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_render___closed__9_value)}};
static const lean_object* l_Lean_Json_render___closed__13 = (const lean_object*)&l_Lean_Json_render___closed__13_value;
static const lean_string_object l_Lean_Json_render___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Json_render___closed__10 = (const lean_object*)&l_Lean_Json_render___closed__10_value;
static const lean_ctor_object l_Lean_Json_render___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_render___closed__10_value)}};
static const lean_object* l_Lean_Json_render___closed__14 = (const lean_object*)&l_Lean_Json_render___closed__14_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5___closed__0_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5___closed__0_value)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_render___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean_Json_render___closed__15 = (const lean_object*)&l_Lean_Json_render___closed__15_value;
static lean_once_cell_t l_Lean_Json_render___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json_render___closed__17;
static lean_once_cell_t l_Lean_Json_render___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json_render___closed__18;
static const lean_ctor_object l_Lean_Json_render___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_render___closed__15_value)}};
static const lean_object* l_Lean_Json_render___closed__19 = (const lean_object*)&l_Lean_Json_render___closed__19_value;
static const lean_string_object l_Lean_Json_render___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Json_render___closed__16 = (const lean_object*)&l_Lean_Json_render___closed__16_value;
static const lean_ctor_object l_Lean_Json_render___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_render___closed__16_value)}};
static const lean_object* l_Lean_Json_render___closed__20 = (const lean_object*)&l_Lean_Json_render___closed__20_value;
LEAN_EXPORT lean_object* l_Lean_Json_render(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_render_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_render_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_pretty___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_json_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_json_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_json_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_json_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayElem_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayElem_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayElem_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayElem_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayEnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayEnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayEnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectField_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectField_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectField_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectField_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectEnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectEnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectEnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_comma_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_comma_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_comma_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_comma_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_pushKind(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_pushKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_pushValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_pushObjectFieldKey(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popKind___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popValue_x21(lean_object*);
static const lean_string_object l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popObjectFieldKey_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popObjectFieldKey_x21___closed__0 = (const lean_object*)&l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popObjectFieldKey_x21___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popObjectFieldKey_x21(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_Json_Printer_0__Lean_Json_compress_go_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_Json_Printer_0__Lean_Json_compress_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_Data_Json_Printer_0__Lean_Json_compress_go_spec__1(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go___closed__0 = (const lean_object*)&l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go___closed__0_value;
static const lean_array_object l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go___closed__1 = (const lean_object*)&l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go(lean_object*, lean_object*);
static const lean_array_object l_Lean_Json_compress___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json_compress___closed__0 = (const lean_object*)&l_Lean_Json_compress___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_compress(lean_object*);
static const lean_closure_object l_Lean_Json_instToFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_render, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instToFormat___closed__0 = (const lean_object*)&l_Lean_Json_instToFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instToFormat = (const lean_object*)&l_Lean_Json_instToFormat___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_instToString___lam__0(lean_object*);
static const lean_closure_object l_Lean_Json_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instToString___closed__0 = (const lean_object*)&l_Lean_Json_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instToString = (const lean_object*)&l_Lean_Json_instToString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux(lean_object* v_acc_524_, uint32_t v_c_525_){
_start:
{
uint8_t v___y_527_; uint32_t v___x_552_; uint8_t v___x_553_; 
v___x_552_ = 34;
v___x_553_ = lean_uint32_dec_eq(v_c_525_, v___x_552_);
if (v___x_553_ == 0)
{
uint32_t v___x_554_; uint8_t v___x_555_; 
v___x_554_ = 92;
v___x_555_ = lean_uint32_dec_eq(v_c_525_, v___x_554_);
if (v___x_555_ == 0)
{
uint32_t v___x_556_; uint8_t v___x_557_; 
v___x_556_ = 10;
v___x_557_ = lean_uint32_dec_eq(v_c_525_, v___x_556_);
if (v___x_557_ == 0)
{
uint32_t v___x_558_; uint8_t v___x_559_; 
v___x_558_ = 13;
v___x_559_ = lean_uint32_dec_eq(v_c_525_, v___x_558_);
if (v___x_559_ == 0)
{
uint32_t v___x_560_; uint8_t v___x_561_; 
v___x_560_ = 32;
v___x_561_ = lean_uint32_dec_le(v___x_560_, v_c_525_);
if (v___x_561_ == 0)
{
v___y_527_ = v___x_561_;
goto v___jp_526_;
}
else
{
uint32_t v___x_562_; uint8_t v___x_563_; 
v___x_562_ = 1114111;
v___x_563_ = lean_uint32_dec_le(v_c_525_, v___x_562_);
v___y_527_ = v___x_563_;
goto v___jp_526_;
}
}
else
{
lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_564_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__1));
v___x_565_ = lean_string_append(v_acc_524_, v___x_564_);
return v___x_565_;
}
}
else
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__2));
v___x_567_ = lean_string_append(v_acc_524_, v___x_566_);
return v___x_567_;
}
}
else
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__3));
v___x_569_ = lean_string_append(v_acc_524_, v___x_568_);
return v___x_569_;
}
}
else
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__4));
v___x_571_ = lean_string_append(v_acc_524_, v___x_570_);
return v___x_571_;
}
v___jp_526_:
{
if (v___y_527_ == 0)
{
lean_object* v_n_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; uint32_t v_d1_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; uint32_t v_d2_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; uint32_t v_d3_542_; lean_object* v___x_543_; uint32_t v_d4_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v_n_528_ = lean_uint32_to_nat(v_c_525_);
v___x_529_ = lean_unsigned_to_nat(4096u);
v___x_530_ = lean_unsigned_to_nat(12u);
v___x_531_ = lean_nat_shiftr(v_n_528_, v___x_530_);
v_d1_532_ = l_Nat_digitChar(v___x_531_);
lean_dec(v___x_531_);
v___x_533_ = lean_nat_mod(v_n_528_, v___x_529_);
v___x_534_ = lean_unsigned_to_nat(256u);
v___x_535_ = lean_unsigned_to_nat(8u);
v___x_536_ = lean_nat_shiftr(v___x_533_, v___x_535_);
lean_dec(v___x_533_);
v_d2_537_ = l_Nat_digitChar(v___x_536_);
lean_dec(v___x_536_);
v___x_538_ = lean_nat_mod(v_n_528_, v___x_534_);
v___x_539_ = lean_unsigned_to_nat(16u);
v___x_540_ = lean_unsigned_to_nat(4u);
v___x_541_ = lean_nat_shiftr(v___x_538_, v___x_540_);
lean_dec(v___x_538_);
v_d3_542_ = l_Nat_digitChar(v___x_541_);
lean_dec(v___x_541_);
v___x_543_ = lean_nat_mod(v_n_528_, v___x_539_);
lean_dec(v_n_528_);
v_d4_544_ = l_Nat_digitChar(v___x_543_);
lean_dec(v___x_543_);
v___x_545_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___closed__0));
v___x_546_ = lean_string_append(v_acc_524_, v___x_545_);
v___x_547_ = lean_string_push(v___x_546_, v_d1_532_);
v___x_548_ = lean_string_push(v___x_547_, v_d2_537_);
v___x_549_ = lean_string_push(v___x_548_, v_d3_542_);
v___x_550_ = lean_string_push(v___x_549_, v_d4_544_);
return v___x_550_;
}
else
{
lean_object* v___x_551_; 
v___x_551_ = lean_string_push(v_acc_524_, v_c_525_);
return v___x_551_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___boxed(lean_object* v_acc_572_, lean_object* v_c_573_){
_start:
{
uint32_t v_c_boxed_574_; lean_object* v_res_575_; 
v_c_boxed_574_ = lean_unbox_uint32(v_c_573_);
lean_dec(v_c_573_);
v_res_575_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux(v_acc_572_, v_c_boxed_574_);
return v_res_575_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape_go(lean_object* v_s_576_, lean_object* v_i_577_){
_start:
{
lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_578_ = lean_string_utf8_byte_size(v_s_576_);
v___x_579_ = lean_nat_dec_lt(v_i_577_, v___x_578_);
if (v___x_579_ == 0)
{
lean_dec(v_i_577_);
return v___x_579_;
}
else
{
uint8_t v_byte_580_; lean_object* v___x_581_; lean_object* v___x_582_; uint8_t v___x_583_; uint8_t v___x_584_; uint8_t v___x_585_; 
lean_inc(v_i_577_);
v_byte_580_ = lean_string_get_byte_fast(v_s_576_, v_i_577_);
v___x_581_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeTable));
v___x_582_ = lean_uint8_to_nat(v_byte_580_);
v___x_583_ = lean_byte_array_fget(v___x_581_, v___x_582_);
v___x_584_ = 0;
v___x_585_ = lean_uint8_dec_eq(v___x_583_, v___x_584_);
if (v___x_585_ == 0)
{
lean_dec(v_i_577_);
return v___x_579_;
}
else
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_unsigned_to_nat(1u);
v___x_587_ = lean_nat_add(v_i_577_, v___x_586_);
lean_dec(v_i_577_);
v_i_577_ = v___x_587_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape_go___boxed(lean_object* v_s_589_, lean_object* v_i_590_){
_start:
{
uint8_t v_res_591_; lean_object* v_r_592_; 
v_res_591_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape_go(v_s_589_, v_i_590_);
lean_dec_ref(v_s_589_);
v_r_592_ = lean_box(v_res_591_);
return v_r_592_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape(lean_object* v_s_593_){
_start:
{
lean_object* v___x_594_; uint8_t v___x_595_; 
v___x_594_ = lean_unsigned_to_nat(0u);
v___x_595_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape_go(v_s_593_, v___x_594_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape___boxed(lean_object* v_s_596_){
_start:
{
uint8_t v_res_597_; lean_object* v_r_598_; 
v_res_597_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape(v_s_596_);
lean_dec_ref(v_s_596_);
v_r_598_ = lean_box(v_res_597_);
return v_r_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_escape___lam__0(lean_object* v___x_599_, lean_object* v_s_600_, lean_object* v_it_601_, lean_object* v_acc_602_, lean_object* v_hP_603_, lean_object* v_recur_604_){
_start:
{
uint8_t v_decide_605_; 
v_decide_605_ = lean_nat_dec_eq(v_it_601_, v___x_599_);
if (v_decide_605_ == 0)
{
uint32_t v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_606_ = lean_string_utf8_get_fast(v_s_600_, v_it_601_);
v___x_607_ = lean_string_utf8_next_fast(v_s_600_, v_it_601_);
v___x_608_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux(v_acc_602_, v___x_606_);
v___x_609_ = lean_apply_4(v_recur_604_, v___x_607_, v___x_608_, lean_box(0), lean_box(0));
return v___x_609_;
}
else
{
lean_dec_ref(v_recur_604_);
return v_acc_602_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_escape___lam__0___boxed(lean_object* v___x_610_, lean_object* v_s_611_, lean_object* v_it_612_, lean_object* v_acc_613_, lean_object* v_hP_614_, lean_object* v_recur_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lean_Json_escape___lam__0(v___x_610_, v_s_611_, v_it_612_, v_acc_613_, v_hP_614_, v_recur_615_);
lean_dec(v_it_612_);
lean_dec_ref(v_s_611_);
lean_dec(v___x_610_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_escape(lean_object* v_s_617_, lean_object* v_acc_618_){
_start:
{
uint8_t v___x_619_; 
v___x_619_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape(v_s_617_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; 
v___x_620_ = lean_string_append(v_acc_618_, v_s_617_);
lean_dec_ref(v_s_617_);
return v___x_620_;
}
else
{
lean_object* v___x_621_; lean_object* v___f_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_621_ = lean_string_utf8_byte_size(v_s_617_);
v___f_622_ = lean_alloc_closure((void*)(l_Lean_Json_escape___lam__0___boxed), 6, 2);
lean_closure_set(v___f_622_, 0, v___x_621_);
lean_closure_set(v___f_622_, 1, v_s_617_);
v___x_623_ = lean_unsigned_to_nat(0u);
v___x_624_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_622_, v___x_623_, v_acc_618_, lean_box(0));
return v___x_624_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_renderString(lean_object* v_s_626_, lean_object* v_acc_627_){
_start:
{
lean_object* v___x_628_; lean_object* v_acc_629_; uint8_t v___x_630_; 
v___x_628_ = ((lean_object*)(l_Lean_Json_renderString___closed__0));
v_acc_629_ = lean_string_append(v_acc_627_, v___x_628_);
v___x_630_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape(v_s_626_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = lean_string_append(v_acc_629_, v_s_626_);
lean_dec_ref(v_s_626_);
v___x_632_ = lean_string_append(v___x_631_, v___x_628_);
return v___x_632_;
}
else
{
lean_object* v___x_633_; lean_object* v___f_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_633_ = lean_string_utf8_byte_size(v_s_626_);
v___f_634_ = lean_alloc_closure((void*)(l_Lean_Json_escape___lam__0___boxed), 6, 2);
lean_closure_set(v___f_634_, 0, v___x_633_);
lean_closure_set(v___f_634_, 1, v_s_626_);
v___x_635_ = lean_unsigned_to_nat(0u);
v___x_636_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_634_, v___x_635_, v_acc_629_, lean_box(0));
v___x_637_ = lean_string_append(v___x_636_, v___x_628_);
return v___x_637_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Json_render_spec__3(lean_object* v_a_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = lean_nat_to_int(v_a_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg(lean_object* v___x_640_, lean_object* v_k_641_, lean_object* v_a_642_, lean_object* v_b_643_){
_start:
{
uint8_t v_decide_644_; 
v_decide_644_ = lean_nat_dec_eq(v_a_642_, v___x_640_);
if (v_decide_644_ == 0)
{
uint32_t v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_645_ = lean_string_utf8_get_fast(v_k_641_, v_a_642_);
v___x_646_ = lean_string_utf8_next_fast(v_k_641_, v_a_642_);
lean_dec(v_a_642_);
v___x_647_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux(v_b_643_, v___x_645_);
v_a_642_ = v___x_646_;
v_b_643_ = v___x_647_;
goto _start;
}
else
{
lean_dec(v_a_642_);
return v_b_643_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg___boxed(lean_object* v___x_649_, lean_object* v_k_650_, lean_object* v_a_651_, lean_object* v_b_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg(v___x_649_, v_k_650_, v_a_651_, v_b_652_);
lean_dec_ref(v_k_650_);
lean_dec(v___x_649_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Json_render_spec__2_spec__2(lean_object* v_x_654_, lean_object* v_x_655_, lean_object* v_x_656_){
_start:
{
if (lean_obj_tag(v_x_656_) == 0)
{
lean_dec(v_x_654_);
return v_x_655_;
}
else
{
lean_object* v_head_657_; lean_object* v_tail_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_667_; 
v_head_657_ = lean_ctor_get(v_x_656_, 0);
v_tail_658_ = lean_ctor_get(v_x_656_, 1);
v_isSharedCheck_667_ = !lean_is_exclusive(v_x_656_);
if (v_isSharedCheck_667_ == 0)
{
v___x_660_ = v_x_656_;
v_isShared_661_ = v_isSharedCheck_667_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_tail_658_);
lean_inc(v_head_657_);
lean_dec(v_x_656_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_667_;
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
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_x_655_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v_x_654_);
v___x_663_ = v_reuseFailAlloc_666_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_664_; 
v___x_664_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
lean_ctor_set(v___x_664_, 1, v_head_657_);
v_x_655_ = v___x_664_;
v_x_656_ = v_tail_658_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Json_render_spec__2(lean_object* v_x_668_, lean_object* v_x_669_){
_start:
{
if (lean_obj_tag(v_x_668_) == 0)
{
lean_object* v___x_670_; 
lean_dec(v_x_669_);
v___x_670_ = lean_box(0);
return v___x_670_;
}
else
{
lean_object* v_tail_671_; 
v_tail_671_ = lean_ctor_get(v_x_668_, 1);
if (lean_obj_tag(v_tail_671_) == 0)
{
lean_object* v_head_672_; 
lean_dec(v_x_669_);
v_head_672_ = lean_ctor_get(v_x_668_, 0);
lean_inc(v_head_672_);
lean_dec_ref_known(v_x_668_, 2);
return v_head_672_;
}
else
{
lean_object* v_head_673_; lean_object* v___x_674_; 
lean_inc(v_tail_671_);
v_head_673_ = lean_ctor_get(v_x_668_, 0);
lean_inc(v_head_673_);
lean_dec_ref_known(v_x_668_, 2);
v___x_674_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Json_render_spec__2_spec__2(v_x_669_, v_head_673_, v_tail_671_);
return v___x_674_;
}
}
}
}
static lean_object* _init_l_Lean_Json_render___closed__11(void){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = ((lean_object*)(l_Lean_Json_render___closed__9));
v___x_692_ = lean_string_length(v___x_691_);
return v___x_692_;
}
}
static lean_object* _init_l_Lean_Json_render___closed__12(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = lean_obj_once(&l_Lean_Json_render___closed__11, &l_Lean_Json_render___closed__11_once, _init_l_Lean_Json_render___closed__11);
v___x_694_ = lean_nat_to_int(v___x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5(lean_object* v_init_703_, lean_object* v_x_704_){
_start:
{
if (lean_obj_tag(v_x_704_) == 0)
{
lean_object* v_k_705_; lean_object* v_v_706_; lean_object* v_l_707_; lean_object* v_r_708_; lean_object* v___x_709_; lean_object* v___y_711_; lean_object* v___x_723_; uint8_t v___x_724_; 
v_k_705_ = lean_ctor_get(v_x_704_, 1);
lean_inc(v_k_705_);
v_v_706_ = lean_ctor_get(v_x_704_, 2);
lean_inc(v_v_706_);
v_l_707_ = lean_ctor_get(v_x_704_, 3);
lean_inc(v_l_707_);
v_r_708_ = lean_ctor_get(v_x_704_, 4);
lean_inc(v_r_708_);
lean_dec_ref_known(v_x_704_, 5);
v___x_709_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5(v_init_703_, v_l_707_);
v___x_723_ = ((lean_object*)(l_Lean_Json_renderString___closed__0));
v___x_724_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape(v_k_705_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = lean_string_append(v___x_723_, v_k_705_);
lean_dec(v_k_705_);
v___x_726_ = lean_string_append(v___x_725_, v___x_723_);
v___y_711_ = v___x_726_;
goto v___jp_710_;
}
else
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_727_ = lean_string_utf8_byte_size(v_k_705_);
v___x_728_ = lean_unsigned_to_nat(0u);
v___x_729_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg(v___x_727_, v_k_705_, v___x_728_, v___x_723_);
lean_dec(v_k_705_);
v___x_730_ = lean_string_append(v___x_729_, v___x_723_);
v___y_711_ = v___x_730_;
goto v___jp_710_;
}
v___jp_710_:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_712_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_712_, 0, v___y_711_);
v___x_713_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5___closed__1));
v___x_714_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_712_);
lean_ctor_set(v___x_714_, 1, v___x_713_);
v___x_715_ = lean_box(1);
v___x_716_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_714_);
lean_ctor_set(v___x_716_, 1, v___x_715_);
v___x_717_ = l_Lean_Json_render(v_v_706_);
v___x_718_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_718_, 0, v___x_716_);
lean_ctor_set(v___x_718_, 1, v___x_717_);
v___x_719_ = 0;
v___x_720_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*1, v___x_719_);
v___x_721_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
lean_ctor_set(v___x_721_, 1, v___x_709_);
v_init_703_ = v___x_721_;
v_x_704_ = v_r_708_;
goto _start;
}
}
else
{
return v_init_703_;
}
}
}
static lean_object* _init_l_Lean_Json_render___closed__17(void){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = ((lean_object*)(l_Lean_Json_render___closed__15));
v___x_733_ = lean_string_length(v___x_732_);
return v___x_733_;
}
}
static lean_object* _init_l_Lean_Json_render___closed__18(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_obj_once(&l_Lean_Json_render___closed__17, &l_Lean_Json_render___closed__17_once, _init_l_Lean_Json_render___closed__17);
v___x_735_ = lean_nat_to_int(v___x_734_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_render(lean_object* v_x_741_){
_start:
{
switch(lean_obj_tag(v_x_741_))
{
case 0:
{
lean_object* v___x_742_; 
v___x_742_ = ((lean_object*)(l_Lean_Json_render___closed__1));
return v___x_742_;
}
case 1:
{
uint8_t v_b_743_; 
v_b_743_ = lean_ctor_get_uint8(v_x_741_, 0);
lean_dec_ref_known(v_x_741_, 0);
if (v_b_743_ == 0)
{
lean_object* v___x_744_; 
v___x_744_ = ((lean_object*)(l_Lean_Json_render___closed__3));
return v___x_744_;
}
else
{
lean_object* v___x_745_; 
v___x_745_ = ((lean_object*)(l_Lean_Json_render___closed__5));
return v___x_745_;
}
}
case 2:
{
lean_object* v_n_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_754_; 
v_n_746_ = lean_ctor_get(v_x_741_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v_x_741_);
if (v_isSharedCheck_754_ == 0)
{
v___x_748_ = v_x_741_;
v_isShared_749_ = v_isSharedCheck_754_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_n_746_);
lean_dec(v_x_741_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_754_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_750_; lean_object* v___x_752_; 
v___x_750_ = l_Lean_JsonNumber_toString(v_n_746_);
if (v_isShared_749_ == 0)
{
lean_ctor_set_tag(v___x_748_, 3);
lean_ctor_set(v___x_748_, 0, v___x_750_);
v___x_752_ = v___x_748_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_750_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
case 3:
{
lean_object* v_s_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_773_; 
v_s_755_ = lean_ctor_get(v_x_741_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v_x_741_);
if (v_isSharedCheck_773_ == 0)
{
v___x_757_ = v_x_741_;
v_isShared_758_ = v_isSharedCheck_773_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_s_755_);
lean_dec(v_x_741_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_773_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_759_; uint8_t v___x_760_; 
v___x_759_ = ((lean_object*)(l_Lean_Json_renderString___closed__0));
v___x_760_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape(v_s_755_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_764_; 
v___x_761_ = lean_string_append(v___x_759_, v_s_755_);
lean_dec_ref(v_s_755_);
v___x_762_ = lean_string_append(v___x_761_, v___x_759_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v___x_762_);
v___x_764_ = v___x_757_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v___x_762_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
else
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_771_; 
v___x_766_ = lean_string_utf8_byte_size(v_s_755_);
v___x_767_ = lean_unsigned_to_nat(0u);
v___x_768_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg(v___x_766_, v_s_755_, v___x_767_, v___x_759_);
lean_dec_ref(v_s_755_);
v___x_769_ = lean_string_append(v___x_768_, v___x_759_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v___x_769_);
v___x_771_ = v___x_757_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
case 4:
{
lean_object* v_elems_774_; size_t v_sz_775_; size_t v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v_elems_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; lean_object* v___x_790_; 
v_elems_774_ = lean_ctor_get(v_x_741_, 0);
lean_inc_ref(v_elems_774_);
lean_dec_ref_known(v_x_741_, 1);
v_sz_775_ = lean_array_size(v_elems_774_);
v___x_776_ = ((size_t)0ULL);
v___x_777_ = l_unsafeCast___redArg(v_elems_774_);
lean_dec_ref(v_elems_774_);
v___x_778_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_render_spec__1(v_sz_775_, v___x_776_, v___x_777_);
v___x_779_ = l_unsafeCast___redArg(v___x_778_);
lean_dec_ref(v___x_778_);
v___x_780_ = lean_array_to_list(v___x_779_);
v___x_781_ = ((lean_object*)(l_Lean_Json_render___closed__8));
v_elems_782_ = l_Std_Format_joinSep___at___00Lean_Json_render_spec__2(v___x_780_, v___x_781_);
v___x_783_ = lean_obj_once(&l_Lean_Json_render___closed__12, &l_Lean_Json_render___closed__12_once, _init_l_Lean_Json_render___closed__12);
v___x_784_ = ((lean_object*)(l_Lean_Json_render___closed__13));
v___x_785_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
lean_ctor_set(v___x_785_, 1, v_elems_782_);
v___x_786_ = ((lean_object*)(l_Lean_Json_render___closed__14));
v___x_787_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_785_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v___x_788_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_783_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
v___x_789_ = 0;
v___x_790_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_790_, 0, v___x_788_);
lean_ctor_set_uint8(v___x_790_, sizeof(void*)*1, v___x_789_);
return v___x_790_;
}
default: 
{
lean_object* v_kvPairs_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v_kvs_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; lean_object* v___x_803_; 
v_kvPairs_791_ = lean_ctor_get(v_x_741_, 0);
lean_inc(v_kvPairs_791_);
lean_dec_ref_known(v_x_741_, 1);
v___x_792_ = lean_box(0);
v___x_793_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5(v___x_792_, v_kvPairs_791_);
v___x_794_ = ((lean_object*)(l_Lean_Json_render___closed__8));
v_kvs_795_ = l_Std_Format_joinSep___at___00Lean_Json_render_spec__2(v___x_793_, v___x_794_);
v___x_796_ = lean_obj_once(&l_Lean_Json_render___closed__18, &l_Lean_Json_render___closed__18_once, _init_l_Lean_Json_render___closed__18);
v___x_797_ = ((lean_object*)(l_Lean_Json_render___closed__19));
v___x_798_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
lean_ctor_set(v___x_798_, 1, v_kvs_795_);
v___x_799_ = ((lean_object*)(l_Lean_Json_render___closed__20));
v___x_800_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_798_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
v___x_801_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_796_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
v___x_802_ = 0;
v___x_803_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_803_, 0, v___x_801_);
lean_ctor_set_uint8(v___x_803_, sizeof(void*)*1, v___x_802_);
return v___x_803_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_render_spec__1(size_t v_sz_804_, size_t v_i_805_, lean_object* v_bs_806_){
_start:
{
uint8_t v___x_807_; 
v___x_807_ = lean_usize_dec_lt(v_i_805_, v_sz_804_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; 
v___x_808_ = l_unsafeCast___redArg(v_bs_806_);
lean_dec_ref(v_bs_806_);
return v___x_808_;
}
else
{
lean_object* v_v_809_; lean_object* v___x_810_; lean_object* v_bs_x27_811_; lean_object* v___x_812_; lean_object* v___x_813_; size_t v___x_814_; size_t v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v_v_809_ = lean_array_uget(v_bs_806_, v_i_805_);
v___x_810_ = lean_unsigned_to_nat(0u);
v_bs_x27_811_ = lean_array_uset(v_bs_806_, v_i_805_, v___x_810_);
v___x_812_ = l_unsafeCast___redArg(v_v_809_);
lean_dec(v_v_809_);
v___x_813_ = l_Lean_Json_render(v___x_812_);
v___x_814_ = ((size_t)1ULL);
v___x_815_ = lean_usize_add(v_i_805_, v___x_814_);
v___x_816_ = l_unsafeCast___redArg(v___x_813_);
lean_dec(v___x_813_);
v___x_817_ = lean_array_uset(v_bs_x27_811_, v_i_805_, v___x_816_);
v_i_805_ = v___x_815_;
v_bs_806_ = v___x_817_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_render_spec__1___boxed(lean_object* v_sz_819_, lean_object* v_i_820_, lean_object* v_bs_821_){
_start:
{
size_t v_sz_boxed_822_; size_t v_i_boxed_823_; lean_object* v_res_824_; 
v_sz_boxed_822_ = lean_unbox_usize(v_sz_819_);
lean_dec(v_sz_819_);
v_i_boxed_823_ = lean_unbox_usize(v_i_820_);
lean_dec(v_i_820_);
v_res_824_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_render_spec__1(v_sz_boxed_822_, v_i_boxed_823_, v_bs_821_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0(lean_object* v___x_825_, lean_object* v___x_826_, lean_object* v_k_827_, lean_object* v_inst_828_, lean_object* v_R_829_, lean_object* v_a_830_, lean_object* v_b_831_, lean_object* v_c_832_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg(v___x_826_, v_k_827_, v_a_830_, v_b_831_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___boxed(lean_object* v___x_834_, lean_object* v___x_835_, lean_object* v_k_836_, lean_object* v_inst_837_, lean_object* v_R_838_, lean_object* v_a_839_, lean_object* v_b_840_, lean_object* v_c_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0(v___x_834_, v___x_835_, v_k_836_, v_inst_837_, v_R_838_, v_a_839_, v_b_840_, v_c_841_);
lean_dec_ref(v_k_836_);
lean_dec(v___x_835_);
lean_dec_ref(v___x_834_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4(lean_object* v_init_843_, lean_object* v_t_844_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5(v_init_843_, v_t_844_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_pretty(lean_object* v_j_846_, lean_object* v_lineWidth_847_){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_848_ = l_Lean_Json_render(v_j_846_);
v___x_849_ = lean_unsigned_to_nat(0u);
v___x_850_ = l_Std_Format_pretty(v___x_848_, v_lineWidth_847_, v___x_849_, v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_pretty___boxed(lean_object* v_j_851_, lean_object* v_lineWidth_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lean_Json_pretty(v_j_851_, v_lineWidth_852_);
lean_dec(v_lineWidth_852_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorIdx(uint8_t v_x_854_){
_start:
{
switch(v_x_854_)
{
case 0:
{
lean_object* v___x_855_; 
v___x_855_ = lean_unsigned_to_nat(0u);
return v___x_855_;
}
case 1:
{
lean_object* v___x_856_; 
v___x_856_ = lean_unsigned_to_nat(1u);
return v___x_856_;
}
case 2:
{
lean_object* v___x_857_; 
v___x_857_ = lean_unsigned_to_nat(2u);
return v___x_857_;
}
case 3:
{
lean_object* v___x_858_; 
v___x_858_ = lean_unsigned_to_nat(3u);
return v___x_858_;
}
case 4:
{
lean_object* v___x_859_; 
v___x_859_ = lean_unsigned_to_nat(4u);
return v___x_859_;
}
default: 
{
lean_object* v___x_860_; 
v___x_860_ = lean_unsigned_to_nat(5u);
return v___x_860_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorIdx___boxed(lean_object* v_x_861_){
_start:
{
uint8_t v_x_boxed_862_; lean_object* v_res_863_; 
v_x_boxed_862_ = lean_unbox(v_x_861_);
v_res_863_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorIdx(v_x_boxed_862_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorElim___redArg(lean_object* v_k_864_){
_start:
{
lean_inc(v_k_864_);
return v_k_864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorElim___redArg___boxed(lean_object* v_k_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorElim___redArg(v_k_865_);
lean_dec(v_k_865_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorElim(lean_object* v_motive_867_, lean_object* v_ctorIdx_868_, uint8_t v_t_869_, lean_object* v_h_870_, lean_object* v_k_871_){
_start:
{
lean_inc(v_k_871_);
return v_k_871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorElim___boxed(lean_object* v_motive_872_, lean_object* v_ctorIdx_873_, lean_object* v_t_874_, lean_object* v_h_875_, lean_object* v_k_876_){
_start:
{
uint8_t v_t_boxed_877_; lean_object* v_res_878_; 
v_t_boxed_877_ = lean_unbox(v_t_874_);
v_res_878_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_ctorElim(v_motive_872_, v_ctorIdx_873_, v_t_boxed_877_, v_h_875_, v_k_876_);
lean_dec(v_k_876_);
lean_dec(v_ctorIdx_873_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_json_elim___redArg(lean_object* v_json_879_){
_start:
{
lean_inc(v_json_879_);
return v_json_879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_json_elim___redArg___boxed(lean_object* v_json_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_json_elim___redArg(v_json_880_);
lean_dec(v_json_880_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_json_elim(lean_object* v_motive_882_, uint8_t v_t_883_, lean_object* v_h_884_, lean_object* v_json_885_){
_start:
{
lean_inc(v_json_885_);
return v_json_885_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_json_elim___boxed(lean_object* v_motive_886_, lean_object* v_t_887_, lean_object* v_h_888_, lean_object* v_json_889_){
_start:
{
uint8_t v_t_boxed_890_; lean_object* v_res_891_; 
v_t_boxed_890_ = lean_unbox(v_t_887_);
v_res_891_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_json_elim(v_motive_886_, v_t_boxed_890_, v_h_888_, v_json_889_);
lean_dec(v_json_889_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayElem_elim___redArg(lean_object* v_arrayElem_892_){
_start:
{
lean_inc(v_arrayElem_892_);
return v_arrayElem_892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayElem_elim___redArg___boxed(lean_object* v_arrayElem_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayElem_elim___redArg(v_arrayElem_893_);
lean_dec(v_arrayElem_893_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayElem_elim(lean_object* v_motive_895_, uint8_t v_t_896_, lean_object* v_h_897_, lean_object* v_arrayElem_898_){
_start:
{
lean_inc(v_arrayElem_898_);
return v_arrayElem_898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayElem_elim___boxed(lean_object* v_motive_899_, lean_object* v_t_900_, lean_object* v_h_901_, lean_object* v_arrayElem_902_){
_start:
{
uint8_t v_t_boxed_903_; lean_object* v_res_904_; 
v_t_boxed_903_ = lean_unbox(v_t_900_);
v_res_904_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayElem_elim(v_motive_899_, v_t_boxed_903_, v_h_901_, v_arrayElem_902_);
lean_dec(v_arrayElem_902_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayEnd_elim___redArg(lean_object* v_arrayEnd_905_){
_start:
{
lean_inc(v_arrayEnd_905_);
return v_arrayEnd_905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayEnd_elim___redArg___boxed(lean_object* v_arrayEnd_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayEnd_elim___redArg(v_arrayEnd_906_);
lean_dec(v_arrayEnd_906_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayEnd_elim(lean_object* v_motive_908_, uint8_t v_t_909_, lean_object* v_h_910_, lean_object* v_arrayEnd_911_){
_start:
{
lean_inc(v_arrayEnd_911_);
return v_arrayEnd_911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayEnd_elim___boxed(lean_object* v_motive_912_, lean_object* v_t_913_, lean_object* v_h_914_, lean_object* v_arrayEnd_915_){
_start:
{
uint8_t v_t_boxed_916_; lean_object* v_res_917_; 
v_t_boxed_916_ = lean_unbox(v_t_913_);
v_res_917_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_arrayEnd_elim(v_motive_912_, v_t_boxed_916_, v_h_914_, v_arrayEnd_915_);
lean_dec(v_arrayEnd_915_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectField_elim___redArg(lean_object* v_objectField_918_){
_start:
{
lean_inc(v_objectField_918_);
return v_objectField_918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectField_elim___redArg___boxed(lean_object* v_objectField_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectField_elim___redArg(v_objectField_919_);
lean_dec(v_objectField_919_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectField_elim(lean_object* v_motive_921_, uint8_t v_t_922_, lean_object* v_h_923_, lean_object* v_objectField_924_){
_start:
{
lean_inc(v_objectField_924_);
return v_objectField_924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectField_elim___boxed(lean_object* v_motive_925_, lean_object* v_t_926_, lean_object* v_h_927_, lean_object* v_objectField_928_){
_start:
{
uint8_t v_t_boxed_929_; lean_object* v_res_930_; 
v_t_boxed_929_ = lean_unbox(v_t_926_);
v_res_930_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectField_elim(v_motive_925_, v_t_boxed_929_, v_h_927_, v_objectField_928_);
lean_dec(v_objectField_928_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectEnd_elim___redArg(lean_object* v_objectEnd_931_){
_start:
{
lean_inc(v_objectEnd_931_);
return v_objectEnd_931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectEnd_elim___redArg___boxed(lean_object* v_objectEnd_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectEnd_elim___redArg(v_objectEnd_932_);
lean_dec(v_objectEnd_932_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectEnd_elim(lean_object* v_motive_934_, uint8_t v_t_935_, lean_object* v_h_936_, lean_object* v_objectEnd_937_){
_start:
{
lean_inc(v_objectEnd_937_);
return v_objectEnd_937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectEnd_elim___boxed(lean_object* v_motive_938_, lean_object* v_t_939_, lean_object* v_h_940_, lean_object* v_objectEnd_941_){
_start:
{
uint8_t v_t_boxed_942_; lean_object* v_res_943_; 
v_t_boxed_942_ = lean_unbox(v_t_939_);
v_res_943_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_objectEnd_elim(v_motive_938_, v_t_boxed_942_, v_h_940_, v_objectEnd_941_);
lean_dec(v_objectEnd_941_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_comma_elim___redArg(lean_object* v_comma_944_){
_start:
{
lean_inc(v_comma_944_);
return v_comma_944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_comma_elim___redArg___boxed(lean_object* v_comma_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_comma_elim___redArg(v_comma_945_);
lean_dec(v_comma_945_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_comma_elim(lean_object* v_motive_947_, uint8_t v_t_948_, lean_object* v_h_949_, lean_object* v_comma_950_){
_start:
{
lean_inc(v_comma_950_);
return v_comma_950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_comma_elim___boxed(lean_object* v_motive_951_, lean_object* v_t_952_, lean_object* v_h_953_, lean_object* v_comma_954_){
_start:
{
uint8_t v_t_boxed_955_; lean_object* v_res_956_; 
v_t_boxed_955_ = lean_unbox(v_t_952_);
v_res_956_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemKind_comma_elim(v_motive_951_, v_t_boxed_955_, v_h_953_, v_comma_954_);
lean_dec(v_comma_954_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_pushKind(lean_object* v_q_957_, uint8_t v_kind_958_){
_start:
{
lean_object* v_kinds_959_; lean_object* v_values_960_; lean_object* v_objectFieldKeys_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_970_; 
v_kinds_959_ = lean_ctor_get(v_q_957_, 0);
v_values_960_ = lean_ctor_get(v_q_957_, 1);
v_objectFieldKeys_961_ = lean_ctor_get(v_q_957_, 2);
v_isSharedCheck_970_ = !lean_is_exclusive(v_q_957_);
if (v_isSharedCheck_970_ == 0)
{
v___x_963_ = v_q_957_;
v_isShared_964_ = v_isSharedCheck_970_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_objectFieldKeys_961_);
lean_inc(v_values_960_);
lean_inc(v_kinds_959_);
lean_dec(v_q_957_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_970_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_965_ = lean_box(v_kind_958_);
v___x_966_ = lean_array_push(v_kinds_959_, v___x_965_);
if (v_isShared_964_ == 0)
{
lean_ctor_set(v___x_963_, 0, v___x_966_);
v___x_968_ = v___x_963_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___x_966_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v_values_960_);
lean_ctor_set(v_reuseFailAlloc_969_, 2, v_objectFieldKeys_961_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_pushKind___boxed(lean_object* v_q_971_, lean_object* v_kind_972_){
_start:
{
uint8_t v_kind_boxed_973_; lean_object* v_res_974_; 
v_kind_boxed_973_ = lean_unbox(v_kind_972_);
v_res_974_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_pushKind(v_q_971_, v_kind_boxed_973_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_pushValue(lean_object* v_q_975_, lean_object* v_value_976_){
_start:
{
lean_object* v_kinds_977_; lean_object* v_values_978_; lean_object* v_objectFieldKeys_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_987_; 
v_kinds_977_ = lean_ctor_get(v_q_975_, 0);
v_values_978_ = lean_ctor_get(v_q_975_, 1);
v_objectFieldKeys_979_ = lean_ctor_get(v_q_975_, 2);
v_isSharedCheck_987_ = !lean_is_exclusive(v_q_975_);
if (v_isSharedCheck_987_ == 0)
{
v___x_981_ = v_q_975_;
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_objectFieldKeys_979_);
lean_inc(v_values_978_);
lean_inc(v_kinds_977_);
lean_dec(v_q_975_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_983_; lean_object* v___x_985_; 
v___x_983_ = lean_array_push(v_values_978_, v_value_976_);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 1, v___x_983_);
v___x_985_ = v___x_981_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_kinds_977_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v___x_983_);
lean_ctor_set(v_reuseFailAlloc_986_, 2, v_objectFieldKeys_979_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_pushObjectFieldKey(lean_object* v_q_988_, lean_object* v_objectFieldKey_989_){
_start:
{
lean_object* v_kinds_990_; lean_object* v_values_991_; lean_object* v_objectFieldKeys_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1000_; 
v_kinds_990_ = lean_ctor_get(v_q_988_, 0);
v_values_991_ = lean_ctor_get(v_q_988_, 1);
v_objectFieldKeys_992_ = lean_ctor_get(v_q_988_, 2);
v_isSharedCheck_1000_ = !lean_is_exclusive(v_q_988_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_994_ = v_q_988_;
v_isShared_995_ = v_isSharedCheck_1000_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_objectFieldKeys_992_);
lean_inc(v_values_991_);
lean_inc(v_kinds_990_);
lean_dec(v_q_988_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1000_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_996_ = lean_array_push(v_objectFieldKeys_992_, v_objectFieldKey_989_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 2, v___x_996_);
v___x_998_ = v___x_994_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_kinds_990_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v_values_991_);
lean_ctor_set(v_reuseFailAlloc_999_, 2, v___x_996_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popKind___redArg(lean_object* v_q_1001_){
_start:
{
lean_object* v_kinds_1002_; lean_object* v_values_1003_; lean_object* v_objectFieldKeys_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1017_; 
v_kinds_1002_ = lean_ctor_get(v_q_1001_, 0);
v_values_1003_ = lean_ctor_get(v_q_1001_, 1);
v_objectFieldKeys_1004_ = lean_ctor_get(v_q_1001_, 2);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_q_1001_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1006_ = v_q_1001_;
v_isShared_1007_ = v_isSharedCheck_1017_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_objectFieldKeys_1004_);
lean_inc(v_values_1003_);
lean_inc(v_kinds_1002_);
lean_dec(v_q_1001_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1017_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v_kind_1011_; lean_object* v___x_1012_; lean_object* v_q_1014_; 
v___x_1008_ = lean_array_get_size(v_kinds_1002_);
v___x_1009_ = lean_unsigned_to_nat(1u);
v___x_1010_ = lean_nat_sub(v___x_1008_, v___x_1009_);
v_kind_1011_ = lean_array_fget(v_kinds_1002_, v___x_1010_);
lean_dec(v___x_1010_);
v___x_1012_ = lean_array_pop(v_kinds_1002_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 0, v___x_1012_);
v_q_1014_ = v___x_1006_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v___x_1012_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v_values_1003_);
lean_ctor_set(v_reuseFailAlloc_1016_, 2, v_objectFieldKeys_1004_);
v_q_1014_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
lean_object* v___x_1015_; 
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v_kind_1011_);
lean_ctor_set(v___x_1015_, 1, v_q_1014_);
return v___x_1015_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popKind(lean_object* v_q_1018_, lean_object* v_h_1019_){
_start:
{
lean_object* v_kinds_1020_; lean_object* v_values_1021_; lean_object* v_objectFieldKeys_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1035_; 
v_kinds_1020_ = lean_ctor_get(v_q_1018_, 0);
v_values_1021_ = lean_ctor_get(v_q_1018_, 1);
v_objectFieldKeys_1022_ = lean_ctor_get(v_q_1018_, 2);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_q_1018_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1024_ = v_q_1018_;
v_isShared_1025_ = v_isSharedCheck_1035_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_objectFieldKeys_1022_);
lean_inc(v_values_1021_);
lean_inc(v_kinds_1020_);
lean_dec(v_q_1018_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1035_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v_kind_1029_; lean_object* v___x_1030_; lean_object* v_q_1032_; 
v___x_1026_ = lean_array_get_size(v_kinds_1020_);
v___x_1027_ = lean_unsigned_to_nat(1u);
v___x_1028_ = lean_nat_sub(v___x_1026_, v___x_1027_);
v_kind_1029_ = lean_array_fget(v_kinds_1020_, v___x_1028_);
lean_dec(v___x_1028_);
v___x_1030_ = lean_array_pop(v_kinds_1020_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 0, v___x_1030_);
v_q_1032_ = v___x_1024_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v___x_1030_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v_values_1021_);
lean_ctor_set(v_reuseFailAlloc_1034_, 2, v_objectFieldKeys_1022_);
v_q_1032_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1033_; 
v___x_1033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1033_, 0, v_kind_1029_);
lean_ctor_set(v___x_1033_, 1, v_q_1032_);
return v___x_1033_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popValue_x21(lean_object* v_q_1036_){
_start:
{
lean_object* v_kinds_1037_; lean_object* v_values_1038_; lean_object* v_objectFieldKeys_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1053_; 
v_kinds_1037_ = lean_ctor_get(v_q_1036_, 0);
v_values_1038_ = lean_ctor_get(v_q_1036_, 1);
v_objectFieldKeys_1039_ = lean_ctor_get(v_q_1036_, 2);
v_isSharedCheck_1053_ = !lean_is_exclusive(v_q_1036_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1041_ = v_q_1036_;
v_isShared_1042_ = v_isSharedCheck_1053_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_objectFieldKeys_1039_);
lean_inc(v_values_1038_);
lean_inc(v_kinds_1037_);
lean_dec(v_q_1036_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1053_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v_value_1047_; lean_object* v___x_1048_; lean_object* v_q_1050_; 
v___x_1043_ = lean_box(0);
v___x_1044_ = lean_array_get_size(v_values_1038_);
v___x_1045_ = lean_unsigned_to_nat(1u);
v___x_1046_ = lean_nat_sub(v___x_1044_, v___x_1045_);
v_value_1047_ = lean_array_get(v___x_1043_, v_values_1038_, v___x_1046_);
lean_dec(v___x_1046_);
v___x_1048_ = lean_array_pop(v_values_1038_);
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 1, v___x_1048_);
v_q_1050_ = v___x_1041_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_kinds_1037_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v___x_1048_);
lean_ctor_set(v_reuseFailAlloc_1052_, 2, v_objectFieldKeys_1039_);
v_q_1050_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v_value_1047_);
lean_ctor_set(v___x_1051_, 1, v_q_1050_);
return v___x_1051_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popObjectFieldKey_x21(lean_object* v_q_1055_){
_start:
{
lean_object* v_kinds_1056_; lean_object* v_values_1057_; lean_object* v_objectFieldKeys_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1072_; 
v_kinds_1056_ = lean_ctor_get(v_q_1055_, 0);
v_values_1057_ = lean_ctor_get(v_q_1055_, 1);
v_objectFieldKeys_1058_ = lean_ctor_get(v_q_1055_, 2);
v_isSharedCheck_1072_ = !lean_is_exclusive(v_q_1055_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1060_ = v_q_1055_;
v_isShared_1061_ = v_isSharedCheck_1072_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_objectFieldKeys_1058_);
lean_inc(v_values_1057_);
lean_inc(v_kinds_1056_);
lean_dec(v_q_1055_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1072_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v_objectFieldKey_1066_; lean_object* v___x_1067_; lean_object* v_q_1069_; 
v___x_1062_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popObjectFieldKey_x21___closed__0));
v___x_1063_ = lean_array_get_size(v_objectFieldKeys_1058_);
v___x_1064_ = lean_unsigned_to_nat(1u);
v___x_1065_ = lean_nat_sub(v___x_1063_, v___x_1064_);
v_objectFieldKey_1066_ = lean_array_get(v___x_1062_, v_objectFieldKeys_1058_, v___x_1065_);
lean_dec(v___x_1065_);
v___x_1067_ = lean_array_pop(v_objectFieldKeys_1058_);
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 2, v___x_1067_);
v_q_1069_ = v___x_1060_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_kinds_1056_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_values_1057_);
lean_ctor_set(v_reuseFailAlloc_1071_, 2, v___x_1067_);
v_q_1069_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
lean_object* v___x_1070_; 
v___x_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1070_, 0, v_objectFieldKey_1066_);
lean_ctor_set(v___x_1070_, 1, v_q_1069_);
return v___x_1070_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_Json_Printer_0__Lean_Json_compress_go_spec__0(lean_object* v_as_1073_, size_t v_i_1074_, size_t v_stop_1075_, lean_object* v_b_1076_){
_start:
{
uint8_t v___x_1077_; 
v___x_1077_ = lean_usize_dec_eq(v_i_1074_, v_stop_1075_);
if (v___x_1077_ == 0)
{
lean_object* v_kinds_1078_; lean_object* v_values_1079_; lean_object* v_objectFieldKeys_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1095_; 
v_kinds_1078_ = lean_ctor_get(v_b_1076_, 0);
v_values_1079_ = lean_ctor_get(v_b_1076_, 1);
v_objectFieldKeys_1080_ = lean_ctor_get(v_b_1076_, 2);
v_isSharedCheck_1095_ = !lean_is_exclusive(v_b_1076_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1082_ = v_b_1076_;
v_isShared_1083_ = v_isSharedCheck_1095_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_objectFieldKeys_1080_);
lean_inc(v_values_1079_);
lean_inc(v_kinds_1078_);
lean_dec(v_b_1076_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1095_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
size_t v___x_1084_; size_t v___x_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1092_; 
v___x_1084_ = ((size_t)1ULL);
v___x_1085_ = lean_usize_sub(v_i_1074_, v___x_1084_);
v___x_1086_ = lean_array_uget_borrowed(v_as_1073_, v___x_1085_);
v___x_1087_ = 1;
v___x_1088_ = lean_box(v___x_1087_);
v___x_1089_ = lean_array_push(v_kinds_1078_, v___x_1088_);
lean_inc(v___x_1086_);
v___x_1090_ = lean_array_push(v_values_1079_, v___x_1086_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 1, v___x_1090_);
lean_ctor_set(v___x_1082_, 0, v___x_1089_);
v___x_1092_ = v___x_1082_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1089_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v___x_1090_);
lean_ctor_set(v_reuseFailAlloc_1094_, 2, v_objectFieldKeys_1080_);
v___x_1092_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
v_i_1074_ = v___x_1085_;
v_b_1076_ = v___x_1092_;
goto _start;
}
}
}
else
{
return v_b_1076_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_Json_Printer_0__Lean_Json_compress_go_spec__0___boxed(lean_object* v_as_1096_, lean_object* v_i_1097_, lean_object* v_stop_1098_, lean_object* v_b_1099_){
_start:
{
size_t v_i_boxed_1100_; size_t v_stop_boxed_1101_; lean_object* v_res_1102_; 
v_i_boxed_1100_ = lean_unbox_usize(v_i_1097_);
lean_dec(v_i_1097_);
v_stop_boxed_1101_ = lean_unbox_usize(v_stop_1098_);
lean_dec(v_stop_1098_);
v_res_1102_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_Json_Printer_0__Lean_Json_compress_go_spec__0(v_as_1096_, v_i_boxed_1100_, v_stop_boxed_1101_, v_b_1099_);
lean_dec_ref(v_as_1096_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_Data_Json_Printer_0__Lean_Json_compress_go_spec__1(lean_object* v_init_1103_, lean_object* v_x_1104_){
_start:
{
if (lean_obj_tag(v_x_1104_) == 0)
{
lean_object* v_k_1105_; lean_object* v_v_1106_; lean_object* v_l_1107_; lean_object* v_r_1108_; lean_object* v___x_1109_; lean_object* v_kinds_1110_; lean_object* v_values_1111_; lean_object* v_objectFieldKeys_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1125_; 
v_k_1105_ = lean_ctor_get(v_x_1104_, 1);
lean_inc(v_k_1105_);
v_v_1106_ = lean_ctor_get(v_x_1104_, 2);
lean_inc(v_v_1106_);
v_l_1107_ = lean_ctor_get(v_x_1104_, 3);
lean_inc(v_l_1107_);
v_r_1108_ = lean_ctor_get(v_x_1104_, 4);
lean_inc(v_r_1108_);
lean_dec_ref_known(v_x_1104_, 5);
v___x_1109_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_Data_Json_Printer_0__Lean_Json_compress_go_spec__1(v_init_1103_, v_r_1108_);
v_kinds_1110_ = lean_ctor_get(v___x_1109_, 0);
v_values_1111_ = lean_ctor_get(v___x_1109_, 1);
v_objectFieldKeys_1112_ = lean_ctor_get(v___x_1109_, 2);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1114_ = v___x_1109_;
v_isShared_1115_ = v_isSharedCheck_1125_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_objectFieldKeys_1112_);
lean_inc(v_values_1111_);
lean_inc(v_kinds_1110_);
lean_dec(v___x_1109_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1125_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
uint8_t v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1122_; 
v___x_1116_ = 3;
v___x_1117_ = lean_box(v___x_1116_);
v___x_1118_ = lean_array_push(v_kinds_1110_, v___x_1117_);
v___x_1119_ = lean_array_push(v_objectFieldKeys_1112_, v_k_1105_);
v___x_1120_ = lean_array_push(v_values_1111_, v_v_1106_);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 2, v___x_1119_);
lean_ctor_set(v___x_1114_, 1, v___x_1120_);
lean_ctor_set(v___x_1114_, 0, v___x_1118_);
v___x_1122_ = v___x_1114_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v___x_1118_);
lean_ctor_set(v_reuseFailAlloc_1124_, 1, v___x_1120_);
lean_ctor_set(v_reuseFailAlloc_1124_, 2, v___x_1119_);
v___x_1122_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
v_init_1103_ = v___x_1122_;
v_x_1104_ = v_l_1107_;
goto _start;
}
}
}
else
{
return v_init_1103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go(lean_object* v_acc_1136_, lean_object* v_q_1137_){
_start:
{
lean_object* v_kinds_1138_; lean_object* v_values_1139_; lean_object* v_objectFieldKeys_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1321_; 
v_kinds_1138_ = lean_ctor_get(v_q_1137_, 0);
v_values_1139_ = lean_ctor_get(v_q_1137_, 1);
v_objectFieldKeys_1140_ = lean_ctor_get(v_q_1137_, 2);
v_isSharedCheck_1321_ = !lean_is_exclusive(v_q_1137_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1142_ = v_q_1137_;
v_isShared_1143_ = v_isSharedCheck_1321_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_objectFieldKeys_1140_);
lean_inc(v_values_1139_);
lean_inc(v_kinds_1138_);
lean_dec(v_q_1137_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1321_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; uint8_t v___x_1146_; 
v___x_1144_ = lean_array_get_size(v_kinds_1138_);
v___x_1145_ = lean_unsigned_to_nat(0u);
v___x_1146_ = lean_nat_dec_eq(v___x_1144_, v___x_1145_);
if (v___x_1146_ == 0)
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v_kind_1149_; lean_object* v___x_1150_; lean_object* v_q_1152_; 
v___x_1147_ = lean_unsigned_to_nat(1u);
v___x_1148_ = lean_nat_sub(v___x_1144_, v___x_1147_);
v_kind_1149_ = lean_array_fget(v_kinds_1138_, v___x_1148_);
lean_dec(v___x_1148_);
v___x_1150_ = lean_array_pop(v_kinds_1138_);
lean_inc_ref(v_objectFieldKeys_1140_);
lean_inc_ref(v_values_1139_);
lean_inc_ref(v___x_1150_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 0, v___x_1150_);
v_q_1152_ = v___x_1142_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1150_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v_values_1139_);
lean_ctor_set(v_reuseFailAlloc_1320_, 2, v_objectFieldKeys_1140_);
v_q_1152_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
uint8_t v___x_1153_; 
v___x_1153_ = lean_unbox(v_kind_1149_);
lean_dec(v_kind_1149_);
switch(v___x_1153_)
{
case 0:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v_value_1157_; lean_object* v___x_1158_; lean_object* v_q_1159_; lean_object* v___y_1161_; 
lean_dec_ref(v_q_1152_);
v___x_1154_ = lean_box(0);
v___x_1155_ = lean_array_get_size(v_values_1139_);
v___x_1156_ = lean_nat_sub(v___x_1155_, v___x_1147_);
v_value_1157_ = lean_array_get(v___x_1154_, v_values_1139_, v___x_1156_);
lean_dec(v___x_1156_);
v___x_1158_ = lean_array_pop(v_values_1139_);
lean_inc_ref(v_objectFieldKeys_1140_);
lean_inc_ref(v___x_1158_);
lean_inc_ref(v___x_1150_);
v_q_1159_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_q_1159_, 0, v___x_1150_);
lean_ctor_set(v_q_1159_, 1, v___x_1158_);
lean_ctor_set(v_q_1159_, 2, v_objectFieldKeys_1140_);
switch(lean_obj_tag(v_value_1157_))
{
case 0:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
lean_dec_ref(v___x_1158_);
lean_dec_ref(v___x_1150_);
lean_dec_ref(v_objectFieldKeys_1140_);
v___x_1164_ = ((lean_object*)(l_Lean_Json_render___closed__0));
v___x_1165_ = lean_string_append(v_acc_1136_, v___x_1164_);
v_acc_1136_ = v___x_1165_;
v_q_1137_ = v_q_1159_;
goto _start;
}
case 1:
{
uint8_t v_b_1167_; 
lean_dec_ref(v___x_1158_);
lean_dec_ref(v___x_1150_);
lean_dec_ref(v_objectFieldKeys_1140_);
v_b_1167_ = lean_ctor_get_uint8(v_value_1157_, 0);
lean_dec_ref_known(v_value_1157_, 0);
if (v_b_1167_ == 0)
{
lean_object* v___x_1168_; 
v___x_1168_ = ((lean_object*)(l_Lean_Json_render___closed__2));
v___y_1161_ = v___x_1168_;
goto v___jp_1160_;
}
else
{
lean_object* v___x_1169_; 
v___x_1169_ = ((lean_object*)(l_Lean_Json_render___closed__4));
v___y_1161_ = v___x_1169_;
goto v___jp_1160_;
}
}
case 2:
{
lean_object* v_n_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
lean_dec_ref(v___x_1158_);
lean_dec_ref(v___x_1150_);
lean_dec_ref(v_objectFieldKeys_1140_);
v_n_1170_ = lean_ctor_get(v_value_1157_, 0);
lean_inc_ref(v_n_1170_);
lean_dec_ref_known(v_value_1157_, 1);
v___x_1171_ = l_Lean_JsonNumber_toString(v_n_1170_);
v___x_1172_ = lean_string_append(v_acc_1136_, v___x_1171_);
lean_dec_ref(v___x_1171_);
v_acc_1136_ = v___x_1172_;
v_q_1137_ = v_q_1159_;
goto _start;
}
case 3:
{
lean_object* v_s_1174_; lean_object* v___x_1175_; lean_object* v_acc_1176_; uint8_t v___x_1177_; 
lean_dec_ref(v___x_1158_);
lean_dec_ref(v___x_1150_);
lean_dec_ref(v_objectFieldKeys_1140_);
v_s_1174_ = lean_ctor_get(v_value_1157_, 0);
lean_inc_ref(v_s_1174_);
lean_dec_ref_known(v_value_1157_, 1);
v___x_1175_ = ((lean_object*)(l_Lean_Json_renderString___closed__0));
v_acc_1176_ = lean_string_append(v_acc_1136_, v___x_1175_);
v___x_1177_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape(v_s_1174_);
if (v___x_1177_ == 0)
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = lean_string_append(v_acc_1176_, v_s_1174_);
lean_dec_ref(v_s_1174_);
v___x_1179_ = lean_string_append(v___x_1178_, v___x_1175_);
v_acc_1136_ = v___x_1179_;
v_q_1137_ = v_q_1159_;
goto _start;
}
else
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1181_ = lean_string_utf8_byte_size(v_s_1174_);
v___x_1182_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg(v___x_1181_, v_s_1174_, v___x_1145_, v_acc_1176_);
lean_dec_ref(v_s_1174_);
v___x_1183_ = lean_string_append(v___x_1182_, v___x_1175_);
v_acc_1136_ = v___x_1183_;
v_q_1137_ = v_q_1159_;
goto _start;
}
}
case 4:
{
lean_object* v_elems_1185_; uint8_t v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v_q_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; uint8_t v___x_1193_; 
lean_dec_ref_known(v_q_1159_, 3);
v_elems_1185_ = lean_ctor_get(v_value_1157_, 0);
lean_inc_ref(v_elems_1185_);
lean_dec_ref_known(v_value_1157_, 1);
v___x_1186_ = 2;
v___x_1187_ = lean_box(v___x_1186_);
v___x_1188_ = lean_array_push(v___x_1150_, v___x_1187_);
v_q_1189_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_q_1189_, 0, v___x_1188_);
lean_ctor_set(v_q_1189_, 1, v___x_1158_);
lean_ctor_set(v_q_1189_, 2, v_objectFieldKeys_1140_);
v___x_1190_ = ((lean_object*)(l_Lean_Json_render___closed__9));
v___x_1191_ = lean_string_append(v_acc_1136_, v___x_1190_);
v___x_1192_ = lean_array_get_size(v_elems_1185_);
v___x_1193_ = lean_nat_dec_lt(v___x_1145_, v___x_1192_);
if (v___x_1193_ == 0)
{
lean_dec_ref(v_elems_1185_);
v_acc_1136_ = v___x_1191_;
v_q_1137_ = v_q_1189_;
goto _start;
}
else
{
size_t v___x_1195_; size_t v___x_1196_; lean_object* v___x_1197_; 
v___x_1195_ = lean_usize_of_nat(v___x_1192_);
v___x_1196_ = ((size_t)0ULL);
v___x_1197_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_Json_Printer_0__Lean_Json_compress_go_spec__0(v_elems_1185_, v___x_1195_, v___x_1196_, v_q_1189_);
lean_dec_ref(v_elems_1185_);
v_acc_1136_ = v___x_1191_;
v_q_1137_ = v___x_1197_;
goto _start;
}
}
default: 
{
lean_object* v_kvPairs_1199_; uint8_t v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v_q_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
lean_dec_ref_known(v_q_1159_, 3);
v_kvPairs_1199_ = lean_ctor_get(v_value_1157_, 0);
lean_inc(v_kvPairs_1199_);
lean_dec_ref_known(v_value_1157_, 1);
v___x_1200_ = 4;
v___x_1201_ = lean_box(v___x_1200_);
v___x_1202_ = lean_array_push(v___x_1150_, v___x_1201_);
v_q_1203_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_q_1203_, 0, v___x_1202_);
lean_ctor_set(v_q_1203_, 1, v___x_1158_);
lean_ctor_set(v_q_1203_, 2, v_objectFieldKeys_1140_);
v___x_1204_ = ((lean_object*)(l_Lean_Json_render___closed__15));
v___x_1205_ = lean_string_append(v_acc_1136_, v___x_1204_);
v___x_1206_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_Data_Json_Printer_0__Lean_Json_compress_go_spec__1(v_q_1203_, v_kvPairs_1199_);
v_acc_1136_ = v___x_1205_;
v_q_1137_ = v___x_1206_;
goto _start;
}
}
v___jp_1160_:
{
lean_object* v___x_1162_; 
v___x_1162_ = lean_string_append(v_acc_1136_, v___y_1161_);
v_acc_1136_ = v___x_1162_;
v_q_1137_ = v_q_1159_;
goto _start;
}
}
case 1:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v_value_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
lean_dec_ref(v_q_1152_);
v___x_1208_ = lean_box(0);
v___x_1209_ = lean_array_get_size(v_values_1139_);
v___x_1210_ = lean_nat_sub(v___x_1209_, v___x_1147_);
v_value_1211_ = lean_array_get(v___x_1208_, v_values_1139_, v___x_1210_);
lean_dec(v___x_1210_);
v___x_1212_ = lean_array_get_size(v___x_1150_);
v___x_1213_ = lean_nat_dec_eq(v___x_1212_, v___x_1145_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v_kind_1216_; uint8_t v___x_1217_; 
v___x_1214_ = lean_array_pop(v_values_1139_);
v___x_1215_ = lean_nat_sub(v___x_1212_, v___x_1147_);
v_kind_1216_ = lean_array_fget(v___x_1150_, v___x_1215_);
lean_dec(v___x_1215_);
v___x_1217_ = lean_unbox(v_kind_1216_);
lean_dec(v_kind_1216_);
if (v___x_1217_ == 2)
{
uint8_t v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1218_ = 0;
v___x_1219_ = lean_box(v___x_1218_);
v___x_1220_ = lean_array_push(v___x_1150_, v___x_1219_);
v___x_1221_ = lean_array_push(v___x_1214_, v_value_1211_);
v___x_1222_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1220_);
lean_ctor_set(v___x_1222_, 1, v___x_1221_);
lean_ctor_set(v___x_1222_, 2, v_objectFieldKeys_1140_);
v_q_1137_ = v___x_1222_;
goto _start;
}
else
{
uint8_t v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1224_ = 5;
v___x_1225_ = lean_box(v___x_1224_);
v___x_1226_ = lean_array_push(v___x_1150_, v___x_1225_);
v___x_1227_ = 0;
v___x_1228_ = lean_box(v___x_1227_);
v___x_1229_ = lean_array_push(v___x_1226_, v___x_1228_);
v___x_1230_ = lean_array_push(v___x_1214_, v_value_1211_);
v___x_1231_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1229_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
lean_ctor_set(v___x_1231_, 2, v_objectFieldKeys_1140_);
v_q_1137_ = v___x_1231_;
goto _start;
}
}
else
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
lean_dec_ref(v___x_1150_);
lean_dec_ref(v_objectFieldKeys_1140_);
lean_dec_ref(v_values_1139_);
v___x_1233_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go___closed__0));
v___x_1234_ = lean_mk_empty_array_with_capacity(v___x_1147_);
v___x_1235_ = lean_array_push(v___x_1234_, v_value_1211_);
v___x_1236_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go___closed__1));
v___x_1237_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1233_);
lean_ctor_set(v___x_1237_, 1, v___x_1235_);
lean_ctor_set(v___x_1237_, 2, v___x_1236_);
v_q_1137_ = v___x_1237_;
goto _start;
}
}
case 2:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
lean_dec_ref(v___x_1150_);
lean_dec_ref(v_objectFieldKeys_1140_);
lean_dec_ref(v_values_1139_);
v___x_1239_ = ((lean_object*)(l_Lean_Json_render___closed__10));
v___x_1240_ = lean_string_append(v_acc_1136_, v___x_1239_);
v_acc_1136_ = v___x_1240_;
v_q_1137_ = v_q_1152_;
goto _start;
}
case 3:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v_objectFieldKey_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v_value_1249_; lean_object* v___y_1251_; lean_object* v___x_1260_; uint8_t v___x_1261_; 
lean_dec_ref(v_q_1152_);
v___x_1242_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popObjectFieldKey_x21___closed__0));
v___x_1243_ = lean_array_get_size(v_objectFieldKeys_1140_);
v___x_1244_ = lean_nat_sub(v___x_1243_, v___x_1147_);
v_objectFieldKey_1245_ = lean_array_get(v___x_1242_, v_objectFieldKeys_1140_, v___x_1244_);
lean_dec(v___x_1244_);
v___x_1246_ = lean_box(0);
v___x_1247_ = lean_array_get_size(v_values_1139_);
v___x_1248_ = lean_nat_sub(v___x_1247_, v___x_1147_);
v_value_1249_ = lean_array_get(v___x_1246_, v_values_1139_, v___x_1248_);
lean_dec(v___x_1248_);
v___x_1260_ = lean_array_get_size(v___x_1150_);
v___x_1261_ = lean_nat_dec_eq(v___x_1260_, v___x_1145_);
if (v___x_1261_ == 0)
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___y_1265_; lean_object* v___y_1278_; lean_object* v___x_1287_; lean_object* v_kind_1288_; uint8_t v___x_1289_; 
v___x_1262_ = lean_array_pop(v_objectFieldKeys_1140_);
v___x_1263_ = lean_array_pop(v_values_1139_);
v___x_1287_ = lean_nat_sub(v___x_1260_, v___x_1147_);
v_kind_1288_ = lean_array_fget(v___x_1150_, v___x_1287_);
lean_dec(v___x_1287_);
v___x_1289_ = lean_unbox(v_kind_1288_);
lean_dec(v_kind_1288_);
if (v___x_1289_ == 4)
{
lean_object* v___x_1290_; lean_object* v_acc_1291_; uint8_t v___x_1292_; 
v___x_1290_ = ((lean_object*)(l_Lean_Json_renderString___closed__0));
v_acc_1291_ = lean_string_append(v_acc_1136_, v___x_1290_);
v___x_1292_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape(v_objectFieldKey_1245_);
if (v___x_1292_ == 0)
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = lean_string_append(v_acc_1291_, v_objectFieldKey_1245_);
lean_dec(v_objectFieldKey_1245_);
v___x_1294_ = lean_string_append(v___x_1293_, v___x_1290_);
v___y_1278_ = v___x_1294_;
goto v___jp_1277_;
}
else
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1295_ = lean_string_utf8_byte_size(v_objectFieldKey_1245_);
v___x_1296_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg(v___x_1295_, v_objectFieldKey_1245_, v___x_1145_, v_acc_1291_);
lean_dec(v_objectFieldKey_1245_);
v___x_1297_ = lean_string_append(v___x_1296_, v___x_1290_);
v___y_1278_ = v___x_1297_;
goto v___jp_1277_;
}
}
else
{
lean_object* v___x_1298_; lean_object* v_acc_1299_; uint8_t v___x_1300_; 
v___x_1298_ = ((lean_object*)(l_Lean_Json_renderString___closed__0));
v_acc_1299_ = lean_string_append(v_acc_1136_, v___x_1298_);
v___x_1300_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape(v_objectFieldKey_1245_);
if (v___x_1300_ == 0)
{
lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1301_ = lean_string_append(v_acc_1299_, v_objectFieldKey_1245_);
lean_dec(v_objectFieldKey_1245_);
v___x_1302_ = lean_string_append(v___x_1301_, v___x_1298_);
v___y_1265_ = v___x_1302_;
goto v___jp_1264_;
}
else
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1303_ = lean_string_utf8_byte_size(v_objectFieldKey_1245_);
v___x_1304_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg(v___x_1303_, v_objectFieldKey_1245_, v___x_1145_, v_acc_1299_);
lean_dec(v_objectFieldKey_1245_);
v___x_1305_ = lean_string_append(v___x_1304_, v___x_1298_);
v___y_1265_ = v___x_1305_;
goto v___jp_1264_;
}
}
v___jp_1264_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; uint8_t v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1266_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5___closed__0));
v___x_1267_ = lean_string_append(v___y_1265_, v___x_1266_);
v___x_1268_ = 5;
v___x_1269_ = lean_box(v___x_1268_);
v___x_1270_ = lean_array_push(v___x_1150_, v___x_1269_);
v___x_1271_ = 0;
v___x_1272_ = lean_box(v___x_1271_);
v___x_1273_ = lean_array_push(v___x_1270_, v___x_1272_);
v___x_1274_ = lean_array_push(v___x_1263_, v_value_1249_);
v___x_1275_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1273_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
lean_ctor_set(v___x_1275_, 2, v___x_1262_);
v_acc_1136_ = v___x_1267_;
v_q_1137_ = v___x_1275_;
goto _start;
}
v___jp_1277_:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; uint8_t v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1279_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5___closed__0));
v___x_1280_ = lean_string_append(v___y_1278_, v___x_1279_);
v___x_1281_ = 0;
v___x_1282_ = lean_box(v___x_1281_);
v___x_1283_ = lean_array_push(v___x_1150_, v___x_1282_);
v___x_1284_ = lean_array_push(v___x_1263_, v_value_1249_);
v___x_1285_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1283_);
lean_ctor_set(v___x_1285_, 1, v___x_1284_);
lean_ctor_set(v___x_1285_, 2, v___x_1262_);
v_acc_1136_ = v___x_1280_;
v_q_1137_ = v___x_1285_;
goto _start;
}
}
else
{
lean_object* v___x_1306_; lean_object* v_acc_1307_; uint8_t v___x_1308_; 
lean_dec_ref(v___x_1150_);
lean_dec_ref(v_objectFieldKeys_1140_);
lean_dec_ref(v_values_1139_);
v___x_1306_ = ((lean_object*)(l_Lean_Json_renderString___closed__0));
v_acc_1307_ = lean_string_append(v_acc_1136_, v___x_1306_);
v___x_1308_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_needEscape(v_objectFieldKey_1245_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = lean_string_append(v_acc_1307_, v_objectFieldKey_1245_);
lean_dec(v_objectFieldKey_1245_);
v___x_1310_ = lean_string_append(v___x_1309_, v___x_1306_);
v___y_1251_ = v___x_1310_;
goto v___jp_1250_;
}
else
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1311_ = lean_string_utf8_byte_size(v_objectFieldKey_1245_);
v___x_1312_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Json_render_spec__0___redArg(v___x_1311_, v_objectFieldKey_1245_, v___x_1145_, v_acc_1307_);
lean_dec(v_objectFieldKey_1245_);
v___x_1313_ = lean_string_append(v___x_1312_, v___x_1306_);
v___y_1251_ = v___x_1313_;
goto v___jp_1250_;
}
}
v___jp_1250_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1252_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_render_spec__4_spec__5___closed__0));
v___x_1253_ = lean_string_append(v___y_1251_, v___x_1252_);
v___x_1254_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go___closed__0));
v___x_1255_ = lean_mk_empty_array_with_capacity(v___x_1147_);
v___x_1256_ = lean_array_push(v___x_1255_, v_value_1249_);
v___x_1257_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go___closed__1));
v___x_1258_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1254_);
lean_ctor_set(v___x_1258_, 1, v___x_1256_);
lean_ctor_set(v___x_1258_, 2, v___x_1257_);
v_acc_1136_ = v___x_1253_;
v_q_1137_ = v___x_1258_;
goto _start;
}
}
case 4:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
lean_dec_ref(v___x_1150_);
lean_dec_ref(v_objectFieldKeys_1140_);
lean_dec_ref(v_values_1139_);
v___x_1314_ = ((lean_object*)(l_Lean_Json_render___closed__16));
v___x_1315_ = lean_string_append(v_acc_1136_, v___x_1314_);
v_acc_1136_ = v___x_1315_;
v_q_1137_ = v_q_1152_;
goto _start;
}
default: 
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
lean_dec_ref(v___x_1150_);
lean_dec_ref(v_objectFieldKeys_1140_);
lean_dec_ref(v_values_1139_);
v___x_1317_ = ((lean_object*)(l_Lean_Json_render___closed__6));
v___x_1318_ = lean_string_append(v_acc_1136_, v___x_1317_);
v_acc_1136_ = v___x_1318_;
v_q_1137_ = v_q_1152_;
goto _start;
}
}
}
}
else
{
lean_del_object(v___x_1142_);
lean_dec_ref(v_objectFieldKeys_1140_);
lean_dec_ref(v_values_1139_);
lean_dec_ref(v_kinds_1138_);
return v_acc_1136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_compress(lean_object* v_j_1327_){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1328_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_CompressWorkItemQueue_popObjectFieldKey_x21___closed__0));
v___x_1329_ = lean_unsigned_to_nat(1u);
v___x_1330_ = lean_mk_empty_array_with_capacity(v___x_1329_);
v___x_1331_ = ((lean_object*)(l_Lean_Json_compress___closed__0));
v___x_1332_ = lean_array_push(v___x_1330_, v_j_1327_);
v___x_1333_ = ((lean_object*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go___closed__1));
v___x_1334_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1331_);
lean_ctor_set(v___x_1334_, 1, v___x_1332_);
lean_ctor_set(v___x_1334_, 2, v___x_1333_);
v___x_1335_ = l___private_Lean_Data_Json_Printer_0__Lean_Json_compress_go(v___x_1328_, v___x_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instToString___lam__0(lean_object* v_j_1338_){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = lean_unsigned_to_nat(80u);
v___x_1340_ = l_Lean_Json_pretty(v_j_1338_, v___x_1339_);
return v___x_1340_;
}
}
lean_object* runtime_initialize_Lean_Data_Format(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Json_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Json_Printer(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Json_Printer(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Format(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Json_Printer(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_Printer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Json_Printer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Json_Printer(builtin);
}
#ifdef __cplusplus
}
#endif
